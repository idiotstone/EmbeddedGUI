

#include "image/egui_image_std.h"

// clang-format off



/**
 * Image File : star.png
 * Format : rgb565
 * Alpha Type : 4
 * Re-sized : True
 * Rotation : 0.0
 * options: -i star.png -n star -f rgb565 -a 4 -d 50 50
 */


static const uint8_t egui_res_image_star_rgb565_4_alpha_buf[25*50] = {
/* -0- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -1- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdd, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -2- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xff, 0x07, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -3- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe2, 0xff, 0x2e, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -4- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfa, 0xff, 0xaf, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -5- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xff, 0xff, 0xff, 0x04, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -6- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x0c, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -7- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xff, 0xff, 0xff, 0x7f, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -8- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xfe, 0xff, 0xff, 0xff, 0xef, 0x02,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -9- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0a,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -10- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0xff, 0xff, 0xff, 0xff, 0xff, 0x4f,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -11- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -12- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -13- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -14- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xfa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xaf, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -15- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0xea, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xae, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -16- */
0x00, 0x00, 0x00, 0x00, 0x52, 0xd9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0x9d, 0x25, 0x00, 0x00, 0x00, 0x00, 
/* -17- */
0x00, 0x00, 0x41, 0xc8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0x8c, 0x14, 0x00, 0x00, 
/* -18- */
0x31, 0xb7, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x7b, 0x13, 
/* -19- */
0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 
/* -20- */
0xc1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1c, 
/* -21- */
0x20, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x02, 
/* -22- */
0x00, 0xf5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5f, 0x00, 
/* -23- */
0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x08, 0x00, 
/* -24- */
0x00, 0x00, 0xfa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xaf, 0x00, 0x00, 
/* -25- */
0x00, 0x00, 0xd1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1d, 0x00, 0x00, 
/* -26- */
0x00, 0x00, 0x30, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x03, 0x00, 0x00, 
/* -27- */
0x00, 0x00, 0x00, 0xf5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0x5f, 0x00, 0x00, 0x00, 
/* -28- */
0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 
/* -29- */
0x00, 0x00, 0x00, 0x00, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xbf, 0x00, 0x00, 0x00, 0x00, 
/* -30- */
0x00, 0x00, 0x00, 0x00, 0xd1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0x1d, 0x00, 0x00, 0x00, 0x00, 
/* -31- */
0x00, 0x00, 0x00, 0x00, 0x30, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 
/* -32- */
0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -33- */
0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -34- */
0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -35- */
0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -36- */
0x00, 0x00, 0x00, 0x00, 0x00, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -37- */
0x00, 0x00, 0x00, 0x00, 0x00, 0xfa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xaf, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -38- */
0x00, 0x00, 0x00, 0x00, 0x00, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -39- */
0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -40- */
0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -41- */
0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xdf, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -42- */
0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* -43- */
0x00, 0x00, 0x00, 0x00, 0x10, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbb, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xef, 0x01, 0x00, 0x00, 0x00, 0x00, 
/* -44- */
0x00, 0x00, 0x00, 0x00, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x28, 0x00, 0x82, 0xfe, 0xff,
0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 
/* -45- */
0x00, 0x00, 0x00, 0x00, 0x20, 0xff, 0xff, 0xff, 0xff, 0xcf, 0x16, 0x00, 0x00, 0x00, 0x61, 0xfc,
0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 
/* -46- */
0x00, 0x00, 0x00, 0x00, 0x30, 0xff, 0xff, 0xff, 0xaf, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
0xfa, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 
/* -47- */
0x00, 0x00, 0x00, 0x00, 0x40, 0xff, 0xff, 0x7d, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x20, 0xd7, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 
/* -48- */
0x00, 0x00, 0x00, 0x00, 0x50, 0xff, 0x5b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xb5, 0xff, 0x05, 0x00, 0x00, 0x00, 0x00, 
/* -49- */
0x00, 0x00, 0x00, 0x00, 0x60, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xa3, 0x06, 0x00, 0x00, 0x00, 0x00, 
};

static const uint16_t egui_res_image_star_rgb565_4_data_buf[50*50] = {
/* -0- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -1- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffde, 0xffde, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -2- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff2f, 0xff2f, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -3- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffba, 0xfe21, 0xfe21, 0xffba, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -4- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xfeea, 0xfde0, 0xfde0, 0xfeea, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -5- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff75, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xff75, 0xffff, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -6- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffdd, 0xfe85, 0xfde0, 0xfe00, 0xfe00, 0xfde0, 0xfe85, 0xffdd, 0xffff, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -7- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff50, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xff50, 0xffff, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -8- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0xffff, 0xffba, 0xfe21, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfe21, 0xffba, 0xffff, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -9- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0xffff, 0xfeea, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfeea, 0xffff, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -10- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0xffff, 0xff75, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xff75, 0xffff,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -11- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0xffff, 0xffdd, 0xfe85, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfe85, 0xffdd,
0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -12- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0xffff, 0xff50, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xff50,
0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -13- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0xffff, 0xffba, 0xfe22, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfe22,
0xffba, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -14- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff,
0xffff, 0xfeea, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0,
0xfeea, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -15- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe7ff, 0xffff, 0xffff, 0xfffe, 0xff99,
0xff10, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xff10, 0xff99, 0xfffe, 0xffff, 0xffff, 0xe7ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -16- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffba, 0xff54, 0xff0d, 0xfe86, 0xfe21,
0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfde0, 0xfe21, 0xfe86, 0xff0d, 0xff54, 0xffba, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -17- */
0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffbc, 0xff76, 0xff2f, 0xfea8, 0xfe42, 0xfde0, 0xfde0, 0xfde0, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfde0, 0xfde0, 0xfe42, 0xfea8, 0xff2f, 0xff76, 0xffbc, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -18- */
0xf7be, 0xffff, 0xffff, 0xffdd, 0xff77, 0xff31, 0xfeca, 0xfe43, 0xfe00, 0xfde0, 0xfde0, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfde0, 0xfde0, 0xfe00, 0xfe43, 0xfeca, 0xff31, 0xff77, 0xffdd, 0xffff,
0xffff, 0xf7be, 
/* -19- */
0xffff, 0xffda, 0xfeeb, 0xfe64, 0xfe00, 0xfde0, 0xfde0, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfde0, 0xfde0, 0xfe00, 0xfe64, 0xfeeb,
0xffda, 0xffff, 
/* -20- */
0xffff, 0xffdc, 0xfe86, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfe86,
0xffdc, 0xffff, 
/* -21- */
0x0000, 0xffff, 0xffba, 0xfe43, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfe43, 0xffba,
0xffff, 0x0000, 
/* -22- */
0x0000, 0x0000, 0xffff, 0xff76, 0xfe00, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfe00, 0xff76, 0xffff,
0x0000, 0x0000, 
/* -23- */
0x0000, 0x0000, 0x0000, 0xffff, 0xff51, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xff51, 0xffff, 0x0000,
0x0000, 0x0000, 
/* -24- */
0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xfeeb, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfeeb, 0xffff, 0xffff, 0x0000,
0x0000, 0x0000, 
/* -25- */
0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xfffd, 0xfe86, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfe86, 0xfffd, 0xffff, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -26- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffba, 0xfe22, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfe22, 0xffba, 0xffff, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -27- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff75, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xff75, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -28- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff50, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xff50, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -29- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xfeea, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfeea, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -30- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffdc, 0xfe65, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfe65, 0xffdc, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -31- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffb8, 0xfe22, 0xfde0, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfe22, 0xffb8, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -32- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff0e, 0xfde0, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xff0e, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -33- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff0e, 0xfde0, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xff0e, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -34- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff0c, 0xfde0, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xff0c, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -35- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xfeea, 0xfde0, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfeea, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -36- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xfec8, 0xfde0, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfec8, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -37- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xfea7, 0xfde0, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfea7, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -38- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffde, 0xfe85, 0xfde0, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfe85, 0xffde, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -39- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffdc, 0xfe64, 0xfde0, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfe64, 0xffdc, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -40- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffbb, 0xfe42, 0xfde0, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfe42, 0xffbb, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -41- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffba, 0xfe21, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe21, 0xffba, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -42- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff99, 0xfe20, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfde0, 0xfe00, 0xfea7, 0xfea7, 0xfe00, 0xfde0, 0xfde0, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe20, 0xff99, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -43- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff77, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfde0, 0xfde0, 0xfe21, 0xfeeb, 0xff56, 0xfffe, 0xfffe, 0xff56, 0xfeeb, 0xfe21, 0xfde0, 0xfde0, 0xfe00,
0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xff77, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -44- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff55, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00,
0xfe00, 0xfde0, 0xfde0, 0xfe64, 0xff2f, 0xff9a, 0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0xff9a, 0xff2f, 0xfe64, 0xfde0,
0xfde0, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xfe00, 0xff55, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -45- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff34, 0xfde0, 0xfe00, 0xfe00, 0xfde0, 0xfde0,
0xfe00, 0xfea8, 0xff33, 0xffdd, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffdd, 0xff33,
0xfea8, 0xfe00, 0xfde0, 0xfde0, 0xfe00, 0xfe00, 0xfde0, 0xff34, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -46- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff32, 0xfde0, 0xfde0, 0xfde0, 0xfe42, 0xff0d,
0xff77, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
0xffff, 0xff77, 0xff0d, 0xfe42, 0xfde0, 0xfde0, 0xfde0, 0xff32, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -47- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xff30, 0xfde0, 0xfe86, 0xff31, 0xffbb, 0xffff,
0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0xffff, 0xffff, 0xffbb, 0xff31, 0xfe86, 0xfde0, 0xff30, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -48- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffb6, 0xff54, 0xfffe, 0xffff, 0xffff, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xfffe, 0xff54, 0xffb6, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
/* -49- */
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
0x0000, 0x0000, 
};



static const egui_image_std_info_t egui_res_image_star_rgb565_4_info = {
    .data_buf = (void *)egui_res_image_star_rgb565_4_data_buf,
    .alpha_buf = (void *)egui_res_image_star_rgb565_4_alpha_buf,
    .data_type = EGUI_IMAGE_DATA_TYPE_RGB565,
    .alpha_type = EGUI_IMAGE_ALPHA_TYPE_4,
    .width = 50,
    .height = 50,
};

extern const egui_image_std_t egui_res_image_star_rgb565_4;
EGUI_IMAGE_SUB_DEFINE_CONST(egui_image_std_t, egui_res_image_star_rgb565_4, &egui_res_image_star_rgb565_4_info);




// clang-format on


