

#include "font/egui_font_std.h"

// clang-format off



/**
 * Font size: 16
 * Font bit size: 1
 * TTF file: test.ttf
 * options: -i test.ttf -n test -t supported_text_test.txt -p 16 -s 1
 */


/**
 * Total character count: 93 Support Text: 
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ 0123456789(_+=./-:;@%!#',?)<>"*&^$|\[]{}
 */

static const uint8_t egui_res_font_test_16_1_pixel_buffer[] = {


    /* Glyph for character " " 0x00000020 */
    0x00, 0x00,

    /* Glyph for character "!" 0x00000021 */
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x00, 0x00, 0x03, 0x03,

    /* Glyph for character """ 0x00000022 */
    0x09, 0x09, 0x09, 0x09, 0x09,

    /* Glyph for character "#" 0x00000023 */
    0x10, 0x01, 0x10, 0x01, 0x18, 0x01, 0xfe, 0x07, 0x98, 0x01, 0x88, 0x00, 0x88, 0x00, 0x88, 0x00, 0xff, 0x03,
    0x8c, 0x00, 0x8c, 0x00, 0x84, 0x00,

    /* Glyph for character "$" 0x00000024 */
    0x20, 0x00, 0x20, 0x00, 0xf8, 0x00, 0xfc, 0x01, 0x26, 0x00, 0x26, 0x00, 0x26, 0x00, 0x3c, 0x00, 0xf0, 0x00,
    0xa0, 0x01, 0x20, 0x01, 0x20, 0x01, 0xfe, 0x01, 0x7c, 0x00, 0x20, 0x00, 0x20, 0x00,

    /* Glyph for character "%" 0x00000025 */
    0x1c, 0x04, 0x16, 0x02, 0x22, 0x03, 0x22, 0x01, 0xa2, 0x00, 0xd2, 0x00, 0x4c, 0x0e, 0x20, 0x19, 0x20, 0x11,
    0x10, 0x11, 0x08, 0x1b, 0x08, 0x0e,

    /* Glyph for character "&" 0x00000026 */
    0x78, 0x00, 0xdc, 0x00, 0x8c, 0x00, 0xcc, 0x00, 0x68, 0x00, 0x38, 0x00, 0x3c, 0x00, 0x66, 0x02, 0xc2, 0x03,
    0x82, 0x01, 0xce, 0x03, 0x7c, 0x02,

    /* Glyph for character "'" 0x00000027 */
    0x01, 0x01, 0x01, 0x01, 0x01,

    /* Glyph for character "(" 0x00000028 */
    0x0c, 0x04, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x04, 0x0c,

    /* Glyph for character ")" 0x00000029 */
    0x02, 0x06, 0x04, 0x04, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x04, 0x04, 0x06, 0x02,

    /* Glyph for character "*" 0x0000002a */
    0x08, 0x2a, 0x1e, 0x1e, 0x2a, 0x08,

    /* Glyph for character "+" 0x0000002b */
    0x08, 0x08, 0x08, 0x7f, 0x18, 0x08, 0x08,

    /* Glyph for character "," 0x0000002c */
    0x06, 0x06, 0x06, 0x02, 0x02,

    /* Glyph for character "-" 0x0000002d */
    0x00, 0x1e, 0x00,

    /* Glyph for character "." 0x0000002e */
    0x00, 0x06, 0x06,

    /* Glyph for character "/" 0x0000002f */
    0x40, 0x60, 0x20, 0x20, 0x30, 0x10, 0x10, 0x18, 0x08, 0x08, 0x0c, 0x04, 0x04, 0x06, 0x02, 0x02,

    /* Glyph for character "0" 0x00000030 */
    0x78, 0x00, 0xdc, 0x00, 0x84, 0x01, 0x06, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x06, 0x03,
    0x84, 0x01, 0xdc, 0x00, 0x78, 0x00,

    /* Glyph for character "1" 0x00000031 */
    0x0f, 0x0c, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,

    /* Glyph for character "2" 0x00000032 */
    0x3c, 0x00, 0xe6, 0x00, 0xc0, 0x00, 0x80, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x60, 0x00, 0x30, 0x00, 0x18, 0x00,
    0x0c, 0x00, 0x0e, 0x00, 0xfe, 0x01,

    /* Glyph for character "3" 0x00000033 */
    0xfe, 0x00, 0xe0, 0x00, 0x60, 0x00, 0x30, 0x00, 0x10, 0x00, 0x78, 0x00, 0xe0, 0x00, 0x80, 0x00, 0x80, 0x00,
    0xc0, 0x00, 0xe7, 0x00, 0x3c, 0x00,

    /* Glyph for character "4" 0x00000034 */
    0xc0, 0x00, 0x60, 0x00, 0x20, 0x00, 0x30, 0x00, 0x18, 0x00, 0x8c, 0x00, 0x8c, 0x00, 0x86, 0x00, 0xfe, 0x07,
    0x80, 0x01, 0x80, 0x00, 0x80, 0x00,

    /* Glyph for character "5" 0x00000035 */
    0xfc, 0x00, 0x04, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x7e, 0x00, 0xe0, 0x00, 0x80, 0x00, 0x80, 0x01,
    0x80, 0x00, 0xe7, 0x00, 0x7c, 0x00,

    /* Glyph for character "6" 0x00000036 */
    0xf0, 0x00, 0x9c, 0x00, 0x04, 0x00, 0x06, 0x00, 0x06, 0x00, 0xfa, 0x00, 0xce, 0x01, 0x06, 0x01, 0x06, 0x01,
    0x06, 0x01, 0xdc, 0x01, 0xf8, 0x00,

    /* Glyph for character "7" 0x00000037 */
    0xff, 0x01, 0x83, 0x01, 0x83, 0x00, 0xc2, 0x00, 0xc0, 0x00, 0x60, 0x00, 0x60, 0x00, 0x20, 0x00, 0x30, 0x00,
    0x10, 0x00, 0x18, 0x00, 0x18, 0x00,

    /* Glyph for character "8" 0x00000038 */
    0x78, 0x00, 0xcc, 0x01, 0x86, 0x01, 0x06, 0x01, 0x8c, 0x01, 0xfc, 0x00, 0xce, 0x01, 0x06, 0x01, 0x02, 0x03,
    0x06, 0x01, 0xce, 0x01, 0xf8, 0x00,

    /* Glyph for character "9" 0x00000039 */
    0x7c, 0x00, 0xee, 0x00, 0x82, 0x00, 0x83, 0x01, 0x82, 0x01, 0xc6, 0x01, 0xfc, 0x01, 0x80, 0x01, 0x80, 0x01,
    0xc0, 0x00, 0x66, 0x00, 0x3e, 0x00,

    /* Glyph for character ":" 0x0000003a */
    0x00, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06,

    /* Glyph for character ";" 0x0000003b */
    0x00, 0x06, 0x06, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x02, 0x02,

    /* Glyph for character "<" 0x0000003c */
    0x00, 0x40, 0x38, 0x0e, 0x03, 0x0e, 0x70, 0x40,

    /* Glyph for character "=" 0x0000003d */
    0x7f, 0x00, 0x00, 0x00, 0x7f, 0x00,

    /* Glyph for character ">" 0x0000003e */
    0x00, 0x03, 0x0e, 0x78, 0x60, 0x38, 0x0f, 0x01,

    /* Glyph for character "?" 0x0000003f */
    0x3c, 0x00, 0xe6, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x60, 0x00, 0x30, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x00, 0x10, 0x00,

    /* Glyph for character "@" 0x00000040 */
    0xc0, 0x07, 0x70, 0x1e, 0x18, 0x30, 0xc4, 0x6b, 0xe6, 0x4e, 0x32, 0xcc, 0x32, 0x88, 0x32, 0x88, 0x32, 0x88,
    0x32, 0xcc, 0x66, 0x5e, 0xc4, 0x33, 0x18, 0x00, 0x70, 0x06, 0xc0, 0x07,

    /* Glyph for character "A" 0x00000041 */
    0xc0, 0x00, 0xe0, 0x00, 0xe0, 0x01, 0xa0, 0x01, 0x30, 0x03, 0x10, 0x03, 0x18, 0x02, 0x18, 0x06, 0xfc, 0x07,
    0x0c, 0x0c, 0x04, 0x0c, 0x06, 0x18,

    /* Glyph for character "B" 0x00000042 */
    0xfe, 0x00, 0xc6, 0x01, 0x02, 0x03, 0x02, 0x03, 0x82, 0x01, 0xfe, 0x01, 0x82, 0x03, 0x02, 0x03, 0x02, 0x02,
    0x02, 0x03, 0x86, 0x03, 0xfe, 0x00,

    /* Glyph for character "C" 0x00000043 */
    0xf0, 0x01, 0x38, 0x07, 0x0c, 0x02, 0x06, 0x00, 0x06, 0x00, 0x02, 0x00, 0x02, 0x00, 0x06, 0x00, 0x06, 0x00,
    0x0c, 0x00, 0x38, 0x07, 0xf0, 0x01,

    /* Glyph for character "D" 0x00000044 */
    0xfe, 0x00, 0xc6, 0x03, 0x02, 0x03, 0x02, 0x06, 0x02, 0x04, 0x02, 0x04, 0x02, 0x04, 0x02, 0x04, 0x02, 0x06,
    0x02, 0x03, 0xc6, 0x03, 0xfe, 0x00,

    /* Glyph for character "E" 0x00000045 */
    0xfe, 0x01, 0x06, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0xfe, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00,
    0x02, 0x00, 0x06, 0x00, 0xfe, 0x01,

    /* Glyph for character "F" 0x00000046 */
    0xfe, 0x01, 0x06, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0xfe, 0x00, 0x02, 0x00, 0x02, 0x00,
    0x02, 0x00, 0x02, 0x00, 0x02, 0x00,

    /* Glyph for character "G" 0x00000047 */
    0xf0, 0x01, 0x38, 0x07, 0x0c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x02, 0x00, 0x02, 0x06, 0x06, 0x06, 0x06, 0x06,
    0x0c, 0x06, 0x38, 0x07, 0xf0, 0x01,

    /* Glyph for character "H" 0x00000048 */
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02,

    /* Glyph for character "I" 0x00000049 */
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,

    /* Glyph for character "J" 0x0000004a */
    0xfc, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x40, 0x6e, 0x3c,

    /* Glyph for character "K" 0x0000004b */
    0x02, 0x03, 0x82, 0x01, 0xc2, 0x00, 0x62, 0x00, 0x32, 0x00, 0x3a, 0x00, 0x3e, 0x00, 0x6e, 0x00, 0xc6, 0x00,
    0x82, 0x01, 0x82, 0x01, 0x02, 0x03,

    /* Glyph for character "L" 0x0000004c */
    0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00,
    0x02, 0x00, 0x06, 0x00, 0xfe, 0x00,

    /* Glyph for character "M" 0x0000004d */
    0x02, 0x18, 0x06, 0x1c, 0x06, 0x1c, 0x0e, 0x1e, 0x0a, 0x1a, 0x1a, 0x1b, 0x32, 0x19, 0xa2, 0x19, 0xe2, 0x18,
    0xc2, 0x18, 0x02, 0x18, 0x02, 0x18,

    /* Glyph for character "N" 0x0000004e */
    0x02, 0x02, 0x06, 0x02, 0x0e, 0x02, 0x1e, 0x02, 0x1a, 0x02, 0x32, 0x02, 0x62, 0x02, 0xc2, 0x02, 0xc2, 0x03,
    0x82, 0x03, 0x02, 0x03, 0x02, 0x02,

    /* Glyph for character "O" 0x0000004f */
    0xf0, 0x01, 0xb8, 0x07, 0x0c, 0x0c, 0x06, 0x0c, 0x06, 0x08, 0x02, 0x18, 0x02, 0x18, 0x06, 0x08, 0x06, 0x0c,
    0x0c, 0x0c, 0xb8, 0x07, 0xf0, 0x01,

    /* Glyph for character "P" 0x00000050 */
    0x7e, 0x00, 0xc6, 0x01, 0x02, 0x01, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x82, 0x01, 0xfe, 0x00, 0x02, 0x00,
    0x02, 0x00, 0x02, 0x00, 0x02, 0x00,

    /* Glyph for character "Q" 0x00000051 */
    0xf0, 0x01, 0xb8, 0x07, 0x0c, 0x0c, 0x06, 0x0c, 0x06, 0x08, 0x02, 0x18, 0x02, 0x18, 0x06, 0x08, 0x06, 0x0c,
    0x0c, 0x0c, 0xb8, 0x07, 0xf0, 0x01, 0x80, 0x11, 0x00, 0x1f, 0x00, 0x00,

    /* Glyph for character "R" 0x00000052 */
    0x7e, 0x00, 0xc6, 0x01, 0x02, 0x01, 0x02, 0x03, 0x02, 0x03, 0x02, 0x01, 0x82, 0x01, 0xfe, 0x00, 0xc2, 0x00,
    0x82, 0x00, 0x82, 0x01, 0x02, 0x03,

    /* Glyph for character "S" 0x00000053 */
    0xf8, 0x00, 0xcc, 0x01, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3c, 0x00, 0xf0, 0x00, 0x80, 0x01, 0x00, 0x01,
    0x80, 0x01, 0xce, 0x01, 0x7c, 0x00,

    /* Glyph for character "T" 0x00000054 */
    0xff, 0x01, 0x30, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00,
    0x10, 0x00, 0x10, 0x00, 0x10, 0x00,

    /* Glyph for character "U" 0x00000055 */
    0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03,
    0x06, 0x03, 0xdc, 0x01, 0xf8, 0x00,

    /* Glyph for character "V" 0x00000056 */
    0x06, 0x08, 0x04, 0x0c, 0x0c, 0x04, 0x0c, 0x06, 0x18, 0x06, 0x18, 0x02, 0x10, 0x03, 0x30, 0x01, 0xb0, 0x01,
    0xe0, 0x01, 0xe0, 0x00, 0xc0, 0x00,

    /* Glyph for character "W" 0x00000057 */
    0x02, 0x03, 0x01, 0x06, 0x03, 0x01, 0x06, 0x87, 0x01, 0x84, 0x87, 0x00, 0x8c, 0x84, 0x00, 0x8c, 0xcc, 0x00,
    0xc8, 0x4c, 0x00, 0x48, 0x48, 0x00, 0x58, 0x68, 0x00, 0x78, 0x78, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00,

    /* Glyph for character "X" 0x00000058 */
    0x06, 0x03, 0x06, 0x01, 0x8c, 0x01, 0xd8, 0x00, 0x78, 0x00, 0x70, 0x00, 0x70, 0x00, 0x58, 0x00, 0xc8, 0x00,
    0x8c, 0x01, 0x06, 0x03, 0x02, 0x03,

    /* Glyph for character "Y" 0x00000059 */
    0x06, 0x04, 0x04, 0x06, 0x0c, 0x03, 0x18, 0x01, 0x98, 0x01, 0xb0, 0x00, 0xe0, 0x00, 0x60, 0x00, 0x60, 0x00,
    0x60, 0x00, 0x60, 0x00, 0x60, 0x00,

    /* Glyph for character "Z" 0x0000005a */
    0xfe, 0x03, 0x80, 0x03, 0x80, 0x01, 0xc0, 0x00, 0x60, 0x00, 0x60, 0x00, 0x30, 0x00, 0x18, 0x00, 0x0c, 0x00,
    0x0c, 0x00, 0x06, 0x00, 0xfe, 0x03,

    /* Glyph for character "[" 0x0000005b */
    0x0e, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x0e,

    /* Glyph for character "\" 0x0000005c */
    0x02, 0x02, 0x06, 0x04, 0x04, 0x0c, 0x08, 0x08, 0x18, 0x10, 0x10, 0x30, 0x20, 0x20, 0x60, 0x40,

    /* Glyph for character "]" 0x0000005d */
    0x0f, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0f,

    /* Glyph for character "^" 0x0000005e */
    0x18, 0x1c, 0x14, 0x24, 0x22, 0x62, 0x43,

    /* Glyph for character "_" 0x0000005f */
    0x00, 0xff, 0x00,

    /* Glyph for character "a" 0x00000061 */
    0x7c, 0x00, 0xee, 0x00, 0xc0, 0x00, 0x80, 0x00, 0xfc, 0x00, 0xc6, 0x00, 0xc2, 0x00, 0xe6, 0x00, 0xbc, 0x00,

    /* Glyph for character "b" 0x00000062 */
    0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x7b, 0x00, 0xef, 0x00, 0x87, 0x01, 0x03, 0x01, 0x03, 0x01, 0x03, 0x01,
    0x87, 0x01, 0xef, 0x00, 0x7b, 0x00,

    /* Glyph for character "c" 0x00000063 */
    0x78, 0x00, 0xdc, 0x00, 0x06, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x06, 0x00, 0xcc, 0x00, 0x78, 0x00,

    /* Glyph for character "d" 0x00000064 */
    0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x78, 0x01, 0xcc, 0x01, 0x86, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
    0x86, 0x01, 0xcc, 0x01, 0x78, 0x01,

    /* Glyph for character "e" 0x00000065 */
    0x78, 0x00, 0xec, 0x00, 0x86, 0x01, 0x82, 0x01, 0xfe, 0x01, 0x06, 0x00, 0x06, 0x00, 0xdc, 0x00, 0x78, 0x00,

    /* Glyph for character "f" 0x00000066 */
    0x38, 0x2c, 0x04, 0x3f, 0x0e, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,

    /* Glyph for character "g" 0x00000067 */
    0x78, 0x03, 0xdc, 0x03, 0x86, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x86, 0x03, 0xdc, 0x03, 0x78, 0x01,
    0x00, 0x01, 0xce, 0x01, 0xf8, 0x00,

    /* Glyph for character "h" 0x00000068 */
    0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x7b, 0x00, 0xef, 0x00, 0x87, 0x00, 0x83, 0x00, 0x83, 0x01, 0x83, 0x01,
    0x83, 0x01, 0x83, 0x01, 0x83, 0x01,

    /* Glyph for character "i" 0x00000069 */
    0x03, 0x03, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,

    /* Glyph for character "j" 0x0000006a */
    0x10, 0x18, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x18, 0x1a, 0x0e,

    /* Glyph for character "k" 0x0000006b */
    0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0xc3, 0x00, 0x63, 0x00, 0x33, 0x00, 0x1b, 0x00, 0x1f, 0x00, 0x37, 0x00,
    0x63, 0x00, 0xc3, 0x00, 0x83, 0x00,

    /* Glyph for character "l" 0x0000006c */
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,

    /* Glyph for character "m" 0x0000006d */
    0x7b, 0x1e, 0xef, 0x3b, 0xc7, 0x21, 0x83, 0x20, 0x83, 0x60, 0x83, 0x60, 0x83, 0x60, 0x83, 0x60, 0x83, 0x60,

    /* Glyph for character "n" 0x0000006e */
    0x7b, 0x00, 0xef, 0x00, 0x87, 0x00, 0x83, 0x00, 0x83, 0x01, 0x83, 0x01, 0x83, 0x01, 0x83, 0x01, 0x83, 0x01,

    /* Glyph for character "o" 0x0000006f */
    0x78, 0x00, 0xcc, 0x00, 0x86, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x86, 0x01, 0xcc, 0x00, 0x78, 0x00,

    /* Glyph for character "p" 0x00000070 */
    0x7b, 0x00, 0xef, 0x00, 0x87, 0x01, 0x03, 0x01, 0x03, 0x01, 0x03, 0x01, 0x87, 0x01, 0xef, 0x00, 0x7b, 0x00,
    0x03, 0x00, 0x03, 0x00, 0x03, 0x00,

    /* Glyph for character "q" 0x00000071 */
    0x78, 0x01, 0xcc, 0x01, 0x86, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x86, 0x01, 0xcc, 0x01, 0x78, 0x01,
    0x00, 0x01, 0x00, 0x01, 0x00, 0x01,

    /* Glyph for character "r" 0x00000072 */
    0x1b, 0x0f, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,

    /* Glyph for character "s" 0x00000073 */
    0x7c, 0x66, 0x02, 0x06, 0x3c, 0x60, 0x40, 0x66, 0x3e,

    /* Glyph for character "t" 0x00000074 */
    0x04, 0x04, 0x3f, 0x0e, 0x04, 0x04, 0x04, 0x04, 0x04, 0x2c, 0x38,

    /* Glyph for character "u" 0x00000075 */
    0x83, 0x00, 0x83, 0x00, 0x83, 0x00, 0x83, 0x00, 0x83, 0x00, 0x83, 0x00, 0xc2, 0x00, 0xee, 0x00, 0xbc, 0x00,

    /* Glyph for character "v" 0x00000076 */
    0x06, 0x03, 0x04, 0x01, 0x8c, 0x01, 0x8c, 0x01, 0x88, 0x00, 0xd8, 0x00, 0x50, 0x00, 0x70, 0x00, 0x30, 0x00,

    /* Glyph for character "w" 0x00000077 */
    0xc3, 0x20, 0xc2, 0x30, 0xc2, 0x11, 0x66, 0x11, 0x24, 0x19, 0x24, 0x0b, 0x3c, 0x0e, 0x18, 0x0e, 0x18, 0x06,

    /* Glyph for character "x" 0x00000078 */
    0xc2, 0x00, 0x46, 0x00, 0x6c, 0x00, 0x38, 0x00, 0x18, 0x00, 0x38, 0x00, 0x6c, 0x00, 0x46, 0x00, 0xc2, 0x00,

    /* Glyph for character "y" 0x00000079 */
    0x06, 0x03, 0x04, 0x01, 0x8c, 0x01, 0x8c, 0x00, 0x88, 0x00, 0xd8, 0x00, 0x70, 0x00, 0x70, 0x00, 0x20, 0x00,
    0x30, 0x00, 0x1a, 0x00, 0x0e, 0x00,

    /* Glyph for character "z" 0x0000007a */
    0xfe, 0x60, 0x60, 0x30, 0x18, 0x0c, 0x04, 0x06, 0xfe,

    /* Glyph for character "{" 0x0000007b */
    0x18, 0x1c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x06, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1c, 0x18,

    /* Glyph for character "|" 0x0000007c */
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,

    /* Glyph for character "}" 0x0000007d */
    0x07, 0x06, 0x04, 0x04, 0x04, 0x04, 0x0c, 0x1c, 0x0c, 0x04, 0x04, 0x04, 0x04, 0x06, 0x07,

};

static const egui_font_std_char_descriptor_t egui_res_font_test_16_1_char_array[] = {

    {.idx=     0, .box_w=  9, .box_h=  1, .adv=  9, .off_x=  0, .off_y=  0, .code_len=1, .code=0x00000020}, /* " " */
    {.idx=     2, .box_w=  3, .box_h= 12, .adv=  4, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000021}, /* "!" */
    {.idx=    14, .box_w=  5, .box_h=  5, .adv=  6, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000022}, /* """ */
    {.idx=    19, .box_w= 11, .box_h= 12, .adv= 11, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000023}, /* "#" */
    {.idx=    43, .box_w= 10, .box_h= 16, .adv= 10, .off_x=  0, .off_y=  0, .code_len=1, .code=0x00000024}, /* "$" */
    {.idx=    75, .box_w= 13, .box_h= 12, .adv= 13, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000025}, /* "%" */
    {.idx=    99, .box_w= 11, .box_h= 12, .adv= 11, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000026}, /* "&" */
    {.idx=   123, .box_w=  2, .box_h=  5, .adv=  3, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000027}, /* "'" */
    {.idx=   128, .box_w=  4, .box_h= 15, .adv=  5, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000028}, /* "(" */
    {.idx=   143, .box_w=  4, .box_h= 15, .adv=  5, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000029}, /* ")" */
    {.idx=   158, .box_w=  7, .box_h=  6, .adv=  7, .off_x=  0, .off_y=  1, .code_len=1, .code=0x0000002a}, /* "*" */
    {.idx=   164, .box_w=  8, .box_h=  7, .adv=  9, .off_x=  1, .off_y=  4, .code_len=1, .code=0x0000002b}, /* "+" */
    {.idx=   171, .box_w=  3, .box_h=  5, .adv=  4, .off_x=  0, .off_y= 10, .code_len=1, .code=0x0000002c}, /* "," */
    {.idx=   176, .box_w=  6, .box_h=  3, .adv=  6, .off_x=  0, .off_y=  7, .code_len=1, .code=0x0000002d}, /* "-" */
    {.idx=   179, .box_w=  3, .box_h=  3, .adv=  4, .off_x=  0, .off_y= 10, .code_len=1, .code=0x0000002e}, /* "." */
    {.idx=   182, .box_w=  8, .box_h= 16, .adv=  8, .off_x=  0, .off_y=  0, .code_len=1, .code=0x0000002f}, /* "/" */
    {.idx=   198, .box_w= 10, .box_h= 12, .adv= 11, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000030}, /* "0" */
    {.idx=   222, .box_w=  5, .box_h= 12, .adv=  6, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000031}, /* "1" */
    {.idx=   234, .box_w=  9, .box_h= 12, .adv=  9, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000032}, /* "2" */
    {.idx=   258, .box_w=  9, .box_h= 12, .adv=  9, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000033}, /* "3" */
    {.idx=   282, .box_w= 11, .box_h= 12, .adv= 11, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000034}, /* "4" */
    {.idx=   306, .box_w=  9, .box_h= 12, .adv=  9, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000035}, /* "5" */
    {.idx=   330, .box_w= 10, .box_h= 12, .adv= 10, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000036}, /* "6" */
    {.idx=   354, .box_w=  9, .box_h= 12, .adv= 10, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000037}, /* "7" */
    {.idx=   378, .box_w= 10, .box_h= 12, .adv= 10, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000038}, /* "8" */
    {.idx=   402, .box_w= 10, .box_h= 12, .adv= 10, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000039}, /* "9" */
    {.idx=   426, .box_w=  3, .box_h=  9, .adv=  4, .off_x=  0, .off_y=  4, .code_len=1, .code=0x0000003a}, /* ":" */
    {.idx=   435, .box_w=  3, .box_h= 11, .adv=  4, .off_x=  0, .off_y=  4, .code_len=1, .code=0x0000003b}, /* ";" */
    {.idx=   446, .box_w=  8, .box_h=  8, .adv=  9, .off_x=  1, .off_y=  3, .code_len=1, .code=0x0000003c}, /* "<" */
    {.idx=   454, .box_w=  8, .box_h=  6, .adv=  9, .off_x=  1, .off_y=  4, .code_len=1, .code=0x0000003d}, /* "=" */
    {.idx=   460, .box_w=  8, .box_h=  8, .adv=  9, .off_x=  1, .off_y=  3, .code_len=1, .code=0x0000003e}, /* ">" */
    {.idx=   468, .box_w=  9, .box_h= 12, .adv=  9, .off_x=  0, .off_y=  1, .code_len=1, .code=0x0000003f}, /* "?" */
    {.idx=   492, .box_w= 16, .box_h= 15, .adv= 17, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000040}, /* "@" */
    {.idx=   522, .box_w= 13, .box_h= 12, .adv= 13, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000041}, /* "A" */
    {.idx=   546, .box_w= 11, .box_h= 12, .adv= 12, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000042}, /* "B" */
    {.idx=   570, .box_w= 11, .box_h= 12, .adv= 12, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000043}, /* "C" */
    {.idx=   594, .box_w= 12, .box_h= 12, .adv= 13, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000044}, /* "D" */
    {.idx=   618, .box_w=  9, .box_h= 12, .adv= 11, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000045}, /* "E" */
    {.idx=   642, .box_w=  9, .box_h= 12, .adv= 10, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000046}, /* "F" */
    {.idx=   666, .box_w= 12, .box_h= 12, .adv= 12, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000047}, /* "G" */
    {.idx=   690, .box_w= 11, .box_h= 12, .adv= 13, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000048}, /* "H" */
    {.idx=   714, .box_w=  3, .box_h= 12, .adv=  5, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000049}, /* "I" */
    {.idx=   726, .box_w=  8, .box_h= 12, .adv=  9, .off_x=  0, .off_y=  1, .code_len=1, .code=0x0000004a}, /* "J" */
    {.idx=   738, .box_w= 11, .box_h= 12, .adv= 12, .off_x=  1, .off_y=  1, .code_len=1, .code=0x0000004b}, /* "K" */
    {.idx=   762, .box_w=  9, .box_h= 12, .adv= 10, .off_x=  1, .off_y=  1, .code_len=1, .code=0x0000004c}, /* "L" */
    {.idx=   786, .box_w= 13, .box_h= 12, .adv= 15, .off_x=  1, .off_y=  1, .code_len=1, .code=0x0000004d}, /* "M" */
    {.idx=   810, .box_w= 11, .box_h= 12, .adv= 13, .off_x=  1, .off_y=  1, .code_len=1, .code=0x0000004e}, /* "N" */
    {.idx=   834, .box_w= 13, .box_h= 12, .adv= 13, .off_x=  0, .off_y=  1, .code_len=1, .code=0x0000004f}, /* "O" */
    {.idx=   858, .box_w= 10, .box_h= 12, .adv= 12, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000050}, /* "P" */
    {.idx=   882, .box_w= 14, .box_h= 15, .adv= 14, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000051}, /* "Q" */
    {.idx=   912, .box_w= 10, .box_h= 12, .adv= 12, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000052}, /* "R" */
    {.idx=   936, .box_w= 10, .box_h= 12, .adv= 10, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000053}, /* "S" */
    {.idx=   960, .box_w= 10, .box_h= 12, .adv= 10, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000054}, /* "T" */
    {.idx=   984, .box_w= 11, .box_h= 12, .adv= 13, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000055}, /* "U" */
    {.idx=  1008, .box_w= 13, .box_h= 12, .adv= 13, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000056}, /* "V" */
    {.idx=  1032, .box_w= 18, .box_h= 12, .adv= 18, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000057}, /* "W" */
    {.idx=  1068, .box_w= 11, .box_h= 12, .adv= 11, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000058}, /* "X" */
    {.idx=  1092, .box_w= 12, .box_h= 12, .adv= 12, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000059}, /* "Y" */
    {.idx=  1116, .box_w= 11, .box_h= 12, .adv= 11, .off_x=  0, .off_y=  1, .code_len=1, .code=0x0000005a}, /* "Z" */
    {.idx=  1140, .box_w=  5, .box_h= 15, .adv=  5, .off_x=  1, .off_y=  1, .code_len=1, .code=0x0000005b}, /* "[" */
    {.idx=  1155, .box_w=  8, .box_h= 16, .adv=  8, .off_x=  0, .off_y=  0, .code_len=1, .code=0x0000005c}, /* "\" */
    {.idx=  1171, .box_w=  4, .box_h= 15, .adv=  5, .off_x=  0, .off_y=  1, .code_len=1, .code=0x0000005d}, /* "]" */
    {.idx=  1186, .box_w=  8, .box_h=  7, .adv=  9, .off_x=  1, .off_y=  4, .code_len=1, .code=0x0000005e}, /* "^" */
    {.idx=  1193, .box_w=  8, .box_h=  3, .adv=  8, .off_x=  0, .off_y= 12, .code_len=1, .code=0x0000005f}, /* "_" */
    {.idx=  1196, .box_w=  9, .box_h=  9, .adv= 10, .off_x=  0, .off_y=  4, .code_len=1, .code=0x00000061}, /* "a" */
    {.idx=  1214, .box_w= 10, .box_h= 12, .adv= 11, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000062}, /* "b" */
    {.idx=  1238, .box_w=  9, .box_h=  9, .adv=  9, .off_x=  0, .off_y=  4, .code_len=1, .code=0x00000063}, /* "c" */
    {.idx=  1256, .box_w= 10, .box_h= 12, .adv= 11, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000064}, /* "d" */
    {.idx=  1280, .box_w= 10, .box_h=  9, .adv= 10, .off_x=  0, .off_y=  4, .code_len=1, .code=0x00000065}, /* "e" */
    {.idx=  1298, .box_w=  7, .box_h= 12, .adv=  7, .off_x=  0, .off_y=  1, .code_len=1, .code=0x00000066}, /* "f" */
    {.idx=  1310, .box_w= 10, .box_h= 12, .adv= 11, .off_x=  0, .off_y=  4, .code_len=1, .code=0x00000067}, /* "g" */
    {.idx=  1334, .box_w=  9, .box_h= 12, .adv= 11, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000068}, /* "h" */
    {.idx=  1358, .box_w=  3, .box_h= 12, .adv=  4, .off_x=  1, .off_y=  1, .code_len=1, .code=0x00000069}, /* "i" */
    {.idx=  1370, .box_w=  6, .box_h= 15, .adv=  7, .off_x=  0, .off_y=  1, .code_len=1, .code=0x0000006a}, /* "j" */
    {.idx=  1385, .box_w=  9, .box_h= 12, .adv= 10, .off_x=  1, .off_y=  1, .code_len=1, .code=0x0000006b}, /* "k" */
    {.idx=  1409, .box_w=  2, .box_h= 12, .adv=  4, .off_x=  1, .off_y=  1, .code_len=1, .code=0x0000006c}, /* "l" */
    {.idx=  1421, .box_w= 15, .box_h=  9, .adv= 17, .off_x=  1, .off_y=  4, .code_len=1, .code=0x0000006d}, /* "m" */
    {.idx=  1439, .box_w=  9, .box_h=  9, .adv= 11, .off_x=  1, .off_y=  4, .code_len=1, .code=0x0000006e}, /* "n" */
    {.idx=  1457, .box_w= 10, .box_h=  9, .adv= 10, .off_x=  0, .off_y=  4, .code_len=1, .code=0x0000006f}, /* "o" */
    {.idx=  1475, .box_w= 10, .box_h= 12, .adv= 11, .off_x=  1, .off_y=  4, .code_len=1, .code=0x00000070}, /* "p" */
    {.idx=  1499, .box_w= 10, .box_h= 12, .adv= 11, .off_x=  0, .off_y=  4, .code_len=1, .code=0x00000071}, /* "q" */
    {.idx=  1523, .box_w=  6, .box_h=  9, .adv=  7, .off_x=  1, .off_y=  4, .code_len=1, .code=0x00000072}, /* "r" */
    {.idx=  1532, .box_w=  8, .box_h=  9, .adv=  8, .off_x=  0, .off_y=  4, .code_len=1, .code=0x00000073}, /* "s" */
    {.idx=  1541, .box_w=  7, .box_h= 11, .adv=  7, .off_x=  0, .off_y=  2, .code_len=1, .code=0x00000074}, /* "t" */
    {.idx=  1552, .box_w=  9, .box_h=  9, .adv= 11, .off_x=  1, .off_y=  4, .code_len=1, .code=0x00000075}, /* "u" */
    {.idx=  1570, .box_w= 10, .box_h=  9, .adv= 10, .off_x=  0, .off_y=  4, .code_len=1, .code=0x00000076}, /* "v" */
    {.idx=  1588, .box_w= 15, .box_h=  9, .adv= 15, .off_x=  0, .off_y=  4, .code_len=1, .code=0x00000077}, /* "w" */
    {.idx=  1606, .box_w=  9, .box_h=  9, .adv=  9, .off_x=  0, .off_y=  4, .code_len=1, .code=0x00000078}, /* "x" */
    {.idx=  1624, .box_w= 10, .box_h= 12, .adv= 10, .off_x=  0, .off_y=  4, .code_len=1, .code=0x00000079}, /* "y" */
    {.idx=  1648, .box_w=  8, .box_h=  9, .adv=  8, .off_x=  0, .off_y=  4, .code_len=1, .code=0x0000007a}, /* "z" */
    {.idx=  1657, .box_w=  6, .box_h= 15, .adv=  6, .off_x=  0, .off_y=  1, .code_len=1, .code=0x0000007b}, /* "{" */
    {.idx=  1672, .box_w=  3, .box_h= 15, .adv=  5, .off_x=  1, .off_y=  1, .code_len=1, .code=0x0000007c}, /* "|" */
    {.idx=  1687, .box_w=  5, .box_h= 15, .adv=  6, .off_x=  0, .off_y=  1, .code_len=1, .code=0x0000007d}, /* "}" */
};



static const egui_font_std_info_t egui_res_font_test_16_1_info = {
    .font_bit_mode = 1,
    .height = 16,
    .count = 93,
    .char_array = egui_res_font_test_16_1_char_array,
    .pixel_buffer = egui_res_font_test_16_1_pixel_buffer,
};

extern const egui_font_std_t egui_res_font_test_16_1;
EGUI_FONT_SUB_DEFINE_CONST(egui_font_std_t, egui_res_font_test_16_1, &egui_res_font_test_16_1_info);




// clang-format on


