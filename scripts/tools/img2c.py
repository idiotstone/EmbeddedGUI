#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys
from PIL import Image
import numpy as np
import time;
import argparse
import os
from io import StringIO


c_head_string="""

#include "image/egui_image_std.h"

// clang-format off

"""

c_head_string_bin="""

#include "image/egui_image_std.h"
#include "app_egui_resource_generate.h"

// clang-format off

"""

c_head_debug_string="""
/**
 * Image File : {0}
 * Format : {1}
 * Alpha Type : {2}
 * Re-sized : {3}
 * Rotation : {4}
 * options: {5}
 */

"""


c_body_string="""


static const egui_image_std_info_t {0}_info = {{
    .data_buf = (void *){1},
    .alpha_buf = (void *){2},
    .data_type = {3},
    .alpha_type = {4},
    .res_type = EGUI_RESOURCE_TYPE_INTERNAL,
    .width = {5},
    .height = {6},
}};

extern const egui_image_std_t {0};
EGUI_IMAGE_SUB_DEFINE_CONST(egui_image_std_t, {0}, &{0}_info);

"""


c_body_string_bin="""


static const egui_image_std_info_t {0}_info = {{
    .data_buf = (void *){1},
    .alpha_buf = (void *){2},
    .data_type = {3},
    .alpha_type = {4},
    .res_type = EGUI_RESOURCE_TYPE_EXTERNAL,
    .width = {5},
    .height = {6},
}};

extern const egui_image_std_t {0};
EGUI_IMAGE_SUB_DEFINE_CONST(egui_image_std_t, {0}, &{0}_info);

"""

c_tail_string="""

// clang-format on

"""


def main(argv):

    parser = argparse.ArgumentParser(description='image to C array converter (v1.0.0)')

    parser.add_argument('-i', "--input", nargs='?', type = str,  required=True, help="Input file (png, bmp, etc..)")
    parser.add_argument('-n', "--name", nargs='?',type = str, required=True, help="The customized UTF8 image name")
    parser.add_argument('-f', '--format', nargs='?',type = str, default="rgb565", required=False, help="RGB Format (rgb32, rgb565, gray8)")
    parser.add_argument('-a', '--alpha', nargs='?',type = int, default=8, required=False, help="Alpha Format (0, 1, 2, 4, 8)")
    parser.add_argument('-d', '--dim', nargs=2,type = int, required=False, help="Resize the image with the given width and height")
    parser.add_argument('-r', '--rot', nargs='?',type = float, default=0.0, required=False, help="Rotate the image with the given angle in degrees")
    parser.add_argument('-s', '--swap', nargs='?',type = int, default=0, required=False, help="Swap the high and low bytes of the 16-bit RGB565 format")
    parser.add_argument('-ext', '--external', nargs='?',type = int, default=0, required=False, help="Storage format (0: internal, 1: external)")
    parser.add_argument('-o', '--output', nargs='?',type = str, default="", required=False, help="Specify the output file name (default: input file name with.c extension)")

    args = parser.parse_args()

    inputfile = args.input
    external_type = args.external

    if args.format != 'rgb32' and \
        args.format != 'rgb565' and \
        args.format != 'gray8':
        parser.print_help()
        exit(1)

    try:
        image = Image.open(inputfile)
    except FileNotFoundError:
        print("Cannot open image file %s" % (inputfile))
        sys.exit(2)

    # just get file name.
    filename = os.path.basename(inputfile)
    # get the options
    options = f"-i {filename} -n {args.name} -f {args.format} -a {args.alpha} -s {args.swap} -ext {args.external}"

    # rotation
    if args.rot != 0.0:
        image = image.rotate(args.rot)
        options += f" -r {args.rot}"


    # resizing
    resized = False
    if args.dim != None:
        image = image.resize((args.dim[0], args.dim[1]))
        resized = True
        options += f" -d {args.dim[0]} {args.dim[1]}"

    options += f" -s {args.swap}"

    name_raw = f"egui_res_image_{args.name.lower()}_{args.format}_{args.alpha}"
    name = name_raw

    if external_type == 1:
        name += "_bin"

    output_path = ""
    if args.output != "":
        output_path = args.output
    else:
        output_path = os.path.dirname(inputfile)

    data_bin_name = f"{name_raw}_data"
    alpha_bin_name = f"{name_raw}_alpha"

    outfilename = os.path.join(output_path, f"{name}.c")
    outfilename_data_bin = os.path.join(output_path, f"{data_bin_name}.bin")
    outfilename_alpha_bin = os.path.join(output_path, f"{alpha_bin_name}.bin")

    mode = image.mode

    # Modes supported by Pillow

    # 1 (1-bit pixels, black and white, stored with one pixel per byte), the value is in 0-1.
    # L (8-bit pixels, black and white), the value is in 0-255.
    # P (8-bit pixels, mapped to any other mode using a color palette), the value is in 0-255.
    # RGB (3×8-bit pixels, true color), the value is in [0-255, 0-255, 0-255].
    # RGBA (4×8-bit pixels, true color with transparency mask), the value is in [0-255, 0-255, 0-255, 0-255]
    # CMYK (4×8-bit pixels, color separation)
    # YCbCr (3×8-bit pixels, color video format)
    # LAB (3×8-bit pixels, the L*a*b color space)
    # HSV (3×8-bit pixels, Hue, Saturation, Value color space)
    # I (32-bit signed integer pixels)
    # F (32-bit floating point pixels)
    # LA (L with alpha)
    # PA (P with alpha)
    # RGBX (true color with padding)
    # RGBa (true color with premultiplied alpha)
    # La (L with premultiplied alpha)
    # I;16 (16-bit unsigned integer pixels)
    # I;16L (16-bit little endian unsigned integer pixels)
    # I;16B (16-bit big endian unsigned integer pixels)
    # I;16N (16-bit native endian unsigned integer pixels)
    # BGR;15 (15-bit reversed true colour)
    # BGR;16 (16-bit reversed true colour)
    # BGR;24 (24-bit reversed true colour)
    # BGR;32 (32-bit reversed true colour)

    # handle {P, LA, RGB, RGBA} for now
    if mode == 'P' or mode == 'LA':
        image = image.convert('RGBA')
        mode = 'RGBA'
    if mode == 'L':
        image = image.convert('RGB')
        mode = 'RGB'
    (row, col) = image.size
    data = np.asarray(image)

    # C Array format width
    WIDTH_ALPHA = 16
    WIDTH_GRAY8 = 32
    WIDTH_RGB565 = 16
    WIDTH_RGB32 = 16

    with open(outfilename,"w+") as o:
        # insert header
        if external_type == 1:
            print(c_head_string_bin, file=o)
        else:
            print(c_head_string, file=o)
        print(c_head_debug_string.format(filename, args.format, args.alpha, resized, args.rot, options), file=o)

        alpha_buf_name = "NULL"
        data_buf_name = "NULL"

        alpha_type = "EGUI_IMAGE_ALPHA_TYPE_8"
        data_type = "EGUI_IMAGE_DATA_TYPE_RGB32"
        
        alpha_bin_data = []
        data_bin_data = []

        alpha_str_io = StringIO()
        data_str_io = StringIO()
        if mode == "RGBA":
            alpha_buf_name = '%s_alpha_buf' % (name)
            if args.format == 'rgb32':
                # empty alpha.
                alpha_buf_name = "NULL"
            else:
                # 8-bit Alpha channel
                if args.alpha == 8:
                    alpha_type = "EGUI_IMAGE_ALPHA_TYPE_8"
                    # alpha channel array available
                    print('static const uint8_t %s_alpha_buf[%d*%d] = {' % (name, row, col), file=alpha_str_io)
                    cnt = 0
                    for eachRow in data:
                        lineWidth=0
                        print("/* -%d- */" % (cnt), file=alpha_str_io)
                        for eachPix in eachRow:
                            alpha = eachPix[3]
                            alpha_bin_data.append(alpha)
                            if lineWidth % WIDTH_ALPHA == (WIDTH_ALPHA - 1):
                                print("0x%02x," %(alpha) , file=alpha_str_io)
                            else:
                                print("0x%02x" %(alpha), end =", ", file=alpha_str_io)
                            lineWidth+=1
                        cnt+=1
                        print('', file=alpha_str_io)
                    print('};', file=alpha_str_io)
                # 4-bit Alpha channel
                elif args.alpha == 4:
                    alpha_type = "EGUI_IMAGE_ALPHA_TYPE_4"
                    def RevBitQuadPerByte(byteArr):
                        return ((byteArr & 0x0f) << 4) |  ((byteArr & 0xf0) >> 4)

                    print('static const uint8_t %s_alpha_buf[%d*%d] = {' % (name, (row+1)/2, col), file=alpha_str_io)
                    cnt = 0
                    alpha = data[...,3].astype(np.uint8)
                    for eachRow in alpha:
                        lineWidth=0
                        print("/* -%d- */" % (cnt), file=alpha_str_io)

                        bitsArr = np.unpackbits(eachRow.astype(np.uint8))

                        # generate indexes for MSB bit quadruplet every byte
                        idx = np.arange(0, np.size(bitsArr), 8)
                        idx=np.reshape(np.column_stack(
                                (np.column_stack((idx+0, idx+1)), np.column_stack((idx+2, idx+3)))),
                                (1,-1)),

                        # extraction + endianness conversion
                        packedBytes = RevBitQuadPerByte(np.packbits(bitsArr[idx]))

                        for elt in packedBytes:
                            alpha_bin_data.append(elt)
                            if lineWidth % WIDTH_ALPHA == (WIDTH_ALPHA - 1):
                                print("0x%02x," %(elt) ,file=alpha_str_io)
                            else:
                                print("0x%02x" %(elt), end =", ",file=alpha_str_io)
                            lineWidth+=1
                        cnt+=1
                        print('', file=alpha_str_io)
                    print('};', file=alpha_str_io)
                # 2-bit Alpha channel
                elif args.alpha == 2:
                    alpha_type = "EGUI_IMAGE_ALPHA_TYPE_2"
                    def RevBitPairPerByte(byteArr):
                        return ((byteArr & 0x03) << 6) |  ((byteArr & 0xc0) >> 6) | ((byteArr & 0x30) >> 2 ) | ((byteArr & 0x0c) << 2)

                    print('static const uint8_t %s_alpha_buf[%d*%d] = {' % (name, (row+3)/4, col), file=alpha_str_io)
                    cnt = 0
                    alpha = data[...,3].astype(np.uint8)
                    for eachRow in alpha:
                        lineWidth=0
                        print("/* -%d- */" % (cnt), file=alpha_str_io)

                        bitsArr = np.unpackbits(eachRow.astype(np.uint8))

                        # generate indexes for MSB bit pair every byte
                        idx = np.arange(0, np.size(bitsArr), 8)
                        idx=np.reshape(np.column_stack((idx+0, idx+1)), (1,-1))

                        # extraction + endianness conversion
                        packedBytes = RevBitPairPerByte(np.packbits(bitsArr[idx]))

                        for elt in packedBytes:
                            alpha_bin_data.append(elt)
                            if lineWidth % WIDTH_ALPHA == (WIDTH_ALPHA-1):
                                print("0x%02x," %(elt) ,file=alpha_str_io)
                            else:
                                print("0x%02x" %(elt), end =", ",file=alpha_str_io)
                            lineWidth+=1
                        cnt+=1
                        print('', file=alpha_str_io)
                    print('};', file=alpha_str_io)
                # 1-bit Alpha channel
                elif args.alpha == 1:
                    alpha_type = "EGUI_IMAGE_ALPHA_TYPE_1"
                    def RevBitPairPerByte(byteArr):
                        return ((byteArr & 0x01) << 7) | ((byteArr & 0x80) >> 7) | \
                            ((byteArr & 0x02) << 5) | ((byteArr & 0x40) >> 5) | \
                            ((byteArr & 0x04) << 3) | ((byteArr & 0x20) >> 3) | \
                            ((byteArr & 0x08) << 1) | ((byteArr & 0x10) >> 1)

                    print('static const uint8_t %s_alpha_buf[%d*%d] = {' % (name, (row+7)/8, col), file=alpha_str_io)
                    cnt = 0
                    alpha = data[...,3].astype(np.uint8)
                    for eachRow in alpha:
                        lineWidth=0
                        print("/* -%d- */" % (cnt), file=alpha_str_io)

                        bitsArr = np.unpackbits(eachRow.astype(np.uint8))

                        # generate indexes for MSB bit pair every byte
                        idx = np.arange(0, np.size(bitsArr), 8)

                        # extraction + endianness conversion
                        packedBytes = RevBitPairPerByte(np.packbits(bitsArr[idx]))

                        for elt in packedBytes:
                            alpha_bin_data.append(elt)
                            if lineWidth % WIDTH_ALPHA == (WIDTH_ALPHA-1):
                                print("0x%02x," %(elt) ,file=alpha_str_io)
                            else:
                                print("0x%02x" %(elt), end =", ",file=alpha_str_io)
                            lineWidth+=1
                        cnt+=1
                        print('', file=alpha_str_io)
                    print('};', file=alpha_str_io)
                else:
                    alpha_buf_name = "NULL"

        # write alpha buffer to file
        if alpha_buf_name != "NULL":
            if external_type == 1:
                # print(alpha_bin_data)
                with open(outfilename_alpha_bin,"wb+") as f:
                    f.write(bytearray(alpha_bin_data))
                alpha_buf_name = f"EGUI_EXT_RES_ID_{alpha_bin_name}".upper()
            else:
                print(alpha_str_io.getvalue(), file=o)


        data_buf_name = '%s_data_buf' % (name)
        # Gray8 channel array
        if args.format == 'gray8':
            data_type = "EGUI_IMAGE_DATA_TYPE_GRAY8"

            R = (data[...,0]).astype(np.uint16)
            G = (data[...,1]).astype(np.uint16)
            B = (data[...,2]).astype(np.uint16)
            # merge
            RGB = np.rint((R + G + B)/3).astype(np.uint8)

            print('', file=data_str_io)
            print('static const uint8_t %s_data_buf[%d*%d] = {' % (name, row, col), file=data_str_io)
            cnt = 0
            for eachRow in RGB:
                lineWidth=0
                print("/* -%d- */" % (cnt), file=data_str_io)
                for eachPix in eachRow:
                    data_bin_data.append(eachPix)
                    if lineWidth % WIDTH_GRAY8 == (WIDTH_GRAY8 - 1):
                        print("0x%02x," %(eachPix) ,file=data_str_io)
                    else:
                        print("0x%02x" %(eachPix), end =", ", file=data_str_io)
                    lineWidth+=1
                print('',file=data_str_io)
                cnt+=1
            print('};', file=data_str_io)

        # RGB565 channel array
        elif args.format == 'rgb565':
            data_type = "EGUI_IMAGE_DATA_TYPE_RGB565"
            R = (data[...,0]>>3).astype(np.uint16) << 11
            G = (data[...,1]>>2).astype(np.uint16) << 5
            B = (data[...,2]>>3).astype(np.uint16)
            # merge
            RGB = R | G | B

            # swap high low byte
            if args.swap == 1:
                RGB = (RGB >> 8) | ((RGB & 0xff) << 8)

            print('', file=data_str_io)
            print('static const uint16_t %s_data_buf[%d*%d] = {' % (name, row, col), file=data_str_io)
            cnt = 0
            for eachRow in RGB:
                lineWidth=0
                print("/* -%d- */" % (cnt), file=data_str_io)
                for eachPix in eachRow:
                    data_bin_data.append((eachPix >> 0) & 0x0ff)
                    data_bin_data.append((eachPix >> 8) & 0x0ff)
                    if lineWidth % WIDTH_RGB565 == (WIDTH_RGB565 - 1):
                        print("0x%04x," %(eachPix) ,file=data_str_io)
                    else:
                        print("0x%04x" %(eachPix), end =", ", file=data_str_io)
                    lineWidth+=1
                print('',file=data_str_io)
                cnt+=1
            print('};', file=data_str_io)

        elif args.format == 'rgb32':
            data_type = "EGUI_IMAGE_DATA_TYPE_RGB32"
            R = data[...,0].astype(np.uint32) << 16
            G = data[...,1].astype(np.uint32) << 8
            B = data[...,2].astype(np.uint32)
            if mode == "RGBA":
                A = data[...,3].astype(np.uint32) << 24
            else:
                # alpha chanel forced to 0xFF
                A = 0xff << 24
            # merge
            RGB = R | G | B | A

            print('',file=data_str_io)
            print('static const uint32_t %s_data_buf[%d*%d] = {' % (name, row, col), file=data_str_io)

            cnt = 0
            for eachRow in RGB:
                lineWidth=0
                print("/* -%d- */" % (cnt), file=data_str_io)
                for eachPix in eachRow:
                    data_bin_data.append((eachPix >> 0) & 0x0ff)
                    data_bin_data.append((eachPix >> 8) & 0x0ff)
                    data_bin_data.append((eachPix >> 16) & 0x0ff)
                    data_bin_data.append((eachPix >> 24) & 0x0ff)
                    if lineWidth % WIDTH_RGB32 == (WIDTH_RGB32 - 1):
                        print("0x%08x," %(eachPix) ,file=data_str_io)
                    else:
                        print("0x%08x" %(eachPix), end =", ", file=data_str_io)
                    lineWidth+=1
                print('',file=data_str_io)
                cnt+=1
            print('};', file=data_str_io)
        
        # write data buffer to file
        if external_type == 1:
            # print(data_bin_data)
            with open(outfilename_data_bin,"wb+") as f:
                f.write(bytearray(data_bin_data))
            data_buf_name = f"EGUI_EXT_RES_ID_{data_bin_name}".upper()
        else:
            print(data_str_io.getvalue(), file=o)

        # insert tail
        if external_type == 1:
            print(c_body_string_bin.format( name,
                                        data_buf_name,
                                        alpha_buf_name,
                                        data_type,
                                        alpha_type,
                                        row,
                                        col
                                        ), file=o)
        else:
            print(c_body_string.format( name,
                                        data_buf_name,
                                        alpha_buf_name,
                                        data_type,
                                        alpha_type,
                                        row,
                                        col
                                        ), file=o)


        print(c_tail_string, file=o)

if __name__ == '__main__':
    main(sys.argv[1:])
