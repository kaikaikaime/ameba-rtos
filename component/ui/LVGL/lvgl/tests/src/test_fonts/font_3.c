#if LV_BUILD_TEST
#include "../../lvgl.h"

/*******************************************************************************
 * Size: 20 px
 * Bpp: 4
 * Opts: --bpp 4 --size 20 --font ../RobotoMono-Regular.ttf -r 0x20-0x7f --format lvgl -o ..\generated_fonts/font_3.c
 ******************************************************************************/

#ifndef FONT_3
#define FONT_3 1
#endif

#if FONT_3

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
	/* U+20 " " */

	/* U+21 "!" */
	0x1f, 0xb0, 0xf, 0xfe, 0x69, 0x10, 0x76, 0x40,
	0x30, 0x81, 0x76, 0x98, 0xb0,

	/* U+22 "\"" */
	0x8e, 0x0, 0x7b, 0x0, 0x7c, 0x60, 0x11, 0x80,
	0x80, 0x43, 0xca, 0x0, 0x37,

	/* U+23 "#" */
	0x0, 0xc5, 0xe6, 0x7, 0xe6, 0x1, 0xc8, 0x6,
	0xa, 0x6, 0x1, 0xde, 0x40, 0xf, 0x30, 0xf,
	0x2a, 0x0, 0x15, 0x40, 0x15, 0x7f, 0x8d, 0xbf,
	0xc6, 0xde, 0xe1, 0xd2, 0xe0, 0xf2, 0xe0, 0xf2,
	0x80, 0x8d, 0x81, 0x2d, 0xa1, 0x2c, 0x60, 0x11,
	0x88, 0x80, 0x84, 0x40, 0x1d, 0xc4, 0x0, 0xd2,
	0x0, 0xc2, 0x25, 0x61, 0x13, 0x30, 0x40, 0xd,
	0xdc, 0x35, 0xee, 0x1a, 0xf6, 0x3, 0xdd, 0x4,
	0x5c, 0x84, 0xdf, 0x80, 0xa0, 0x1, 0x90, 0xc1,
	0x90, 0xc0, 0x2d, 0x21, 0xd, 0x20, 0xf, 0x1b,
	0x80, 0x11, 0x0, 0x18,

	/* U+24 "$" */
	0x0, 0xcb, 0xe2, 0x1, 0xff, 0xc4, 0x78, 0xb,
	0x40, 0xd, 0xb0, 0x64, 0xb6, 0xe0, 0x8, 0x27,
	0xed, 0xd0, 0xc0, 0x82, 0x4, 0x0, 0xa, 0x41,
	0xc0, 0x40, 0x38, 0xc8, 0x0, 0xe0, 0xe0, 0x12,
	0x6b, 0x5, 0x84, 0x5a, 0x0, 0x70, 0xe9, 0xa5,
	0xea, 0x80, 0x62, 0xcc, 0x29, 0x54, 0x80, 0x71,
	0xd6, 0x93, 0x21, 0x29, 0x0, 0x45, 0x21, 0xaf,
	0x4a, 0x1, 0x9c, 0xd, 0x2, 0x44, 0x2, 0xa0,
	0xd1, 0x71, 0xf8, 0x86, 0x31, 0x38, 0x44, 0x9b,
	0xb8, 0x97, 0x0, 0x26, 0xd6, 0x1e, 0xa1, 0x0,
	0xe1, 0x0, 0xe0,

	/* U+25 "%" */
	0x7, 0xee, 0x40, 0x7, 0xc9, 0x10, 0xb7, 0x50,
	0xf, 0x61, 0x32, 0xa7, 0x80, 0xf1, 0x80, 0x42,
	0x1, 0xd2, 0x66, 0x0, 0x69, 0x98, 0x97, 0x45,
	0xe0, 0x2, 0x55, 0x66, 0xab, 0xc1, 0x28, 0x6,
	0xae, 0xe5, 0x8b, 0x48, 0x7, 0x84, 0x41, 0x6,
	0x80, 0x1f, 0x89, 0xa0, 0x3, 0xfa, 0x11, 0x13,
	0xdc, 0x70, 0xc, 0x6b, 0xc, 0xca, 0x88, 0x20,
	0x5, 0x8, 0x78, 0xa8, 0xc5, 0x80, 0x13, 0x40,
	0x7, 0xfb, 0x4c, 0x31, 0x51, 0x8b, 0x0, 0x3c,
	0xcc, 0xa8, 0x82, 0x0,

	/* U+26 "&" */
	0x0, 0x26, 0x7e, 0xb0, 0x7, 0x15, 0x9b, 0xc,
	0xa8, 0x6, 0xa0, 0xa9, 0xc1, 0xe0, 0xc, 0x40,
	0xe0, 0x13, 0x80, 0x63, 0x7, 0x6, 0x1b, 0x0,
	0xd4, 0x12, 0xf2, 0xae, 0x1, 0x8d, 0x8e, 0x1a,
	0x80, 0x38, 0x90, 0x1, 0x40, 0x1c, 0x38, 0x50,
	0x1a, 0x20, 0xbc, 0x70, 0x32, 0xf2, 0x34, 0x1a,
	0x22, 0x40, 0x60, 0x65, 0x47, 0x51, 0x23, 0x10,
	0xa, 0x8a, 0xa, 0x41, 0x5, 0x0, 0x2a, 0x0,
	0x30, 0x40, 0x5d, 0x45, 0xc0, 0x84, 0x1, 0x6a,
	0xa3, 0xb4, 0x71, 0xb2, 0x0,

	/* U+27 "'" */
	0x2f, 0x50, 0xe, 0x10, 0x3, 0x81, 0x88,

	/* U+28 "(" */
	0x0, 0xe1, 0x0, 0xd9, 0x20, 0x15, 0x8c, 0x80,
	0x1d, 0x38, 0x40, 0x10, 0xa6, 0x0, 0x70, 0x90,
	0xa, 0xc4, 0xc0, 0x2, 0x68, 0x1, 0x28, 0x68,
	0x4, 0x40, 0x20, 0x10, 0x81, 0x80, 0x70, 0x80,
	0x42, 0x2, 0x1, 0x18, 0x18, 0x4, 0xe1, 0xe0,
	0x11, 0xa, 0x80, 0x67, 0x31, 0x0, 0xac, 0x24,
	0x2, 0x25, 0x60, 0xd, 0x61, 0x40, 0x10, 0xea,
	0xb8, 0x4, 0x7a, 0x80,

	/* U+29 ")" */
	0x20, 0xe, 0xe9, 0x0, 0xde, 0xd0, 0x1, 0x1c,
	0x39, 0x80, 0x4e, 0x5e, 0x1, 0xa8, 0xcc, 0x1,
	0x28, 0x50, 0x4, 0x42, 0x80, 0x19, 0x48, 0x40,
	0x21, 0x2, 0x0, 0x8c, 0x1c, 0x2, 0x10, 0xe,
	0x10, 0x70, 0x8, 0xc0, 0x80, 0x27, 0x11, 0x0,
	0x44, 0x80, 0x12, 0x87, 0x80, 0x5c, 0x2a, 0x0,
	0x34, 0x80, 0xb, 0x8d, 0x80, 0x14, 0x1a, 0x1,
	0x7e, 0x8, 0x4,

	/* U+2A "*" */
	0x0, 0xd3, 0xe2, 0x1, 0xf0, 0x80, 0x80, 0x61,
	0x0, 0x78, 0x6, 0x12, 0xeb, 0x41, 0x10, 0x36,
	0xc0, 0xaa, 0xae, 0x47, 0xe4, 0xc0, 0xeb, 0xb0,
	0x0, 0xdb, 0xd2, 0x1, 0x50, 0xab, 0x98, 0x6,
	0x66, 0x45, 0x8d, 0x0, 0x43, 0x24, 0xc3, 0x8,
	0xe0, 0x1, 0xbe, 0x0, 0x3b, 0xc0,

	/* U+2B "+" */
	0x0, 0xd1, 0x0, 0xf, 0xca, 0xc0, 0x1f, 0xfd,
	0x6d, 0xff, 0x88, 0x7f, 0xee, 0x62, 0x28, 0x0,
	0x45, 0xaf, 0x76, 0x21, 0xdd, 0xb0, 0x3, 0xff,
	0xa4,

	/* U+2C "," */
	0xa, 0xf4, 0x1, 0x0, 0x9c, 0x18, 0x8, 0x49,
	0x46, 0x1, 0x69, 0x80,

	/* U+2D "-" */
	0x78, 0x8f, 0x25, 0x3b, 0xfb, 0x40,

	/* U+2E "." */
	0x8, 0xc3, 0x17, 0x39, 0x14, 0xf,

	/* U+2F "/" */
	0x0, 0xf6, 0x68, 0x7, 0x88, 0xe8, 0x3, 0xd4,
	0xc, 0x1, 0xe6, 0x41, 0x0, 0xe4, 0x1e, 0x0,
	0xf7, 0x2, 0x80, 0x79, 0x58, 0x3, 0xcc, 0x14,
	0x1, 0xed, 0x23, 0x0, 0xe1, 0x4a, 0x0, 0xf3,
	0x2, 0x80, 0x7a, 0x90, 0x80, 0x38, 0xcb, 0x40,
	0x3d, 0x40, 0xc0, 0x1e, 0x65, 0x0, 0xf2, 0x87,
	0x0, 0x78,

	/* U+30 "0" */
	0x0, 0x25, 0xff, 0xb1, 0x0, 0x25, 0xb5, 0x66,
	0x15, 0xa8, 0x2, 0xc7, 0xe6, 0x5e, 0x34, 0x8,
	0x32, 0x20, 0x1, 0x90, 0x53, 0x2, 0x0, 0xc2,
	0x1b, 0xe0, 0xc0, 0x14, 0x48, 0x8, 0x80, 0x21,
	0xb7, 0x50, 0xe, 0x3c, 0x4b, 0x80, 0xd, 0x58,
	0x1a, 0x80, 0x10, 0x83, 0x2e, 0x90, 0x8, 0x3,
	0xc1, 0xe8, 0x3, 0x84, 0xc3, 0xc0, 0x32, 0x86,
	0xa0, 0xc8, 0x80, 0x56, 0xa, 0x16, 0x3f, 0x32,
	0xe2, 0x90, 0x2, 0xda, 0xb3, 0xa, 0xd8, 0x0,

	/* U+31 "1" */
	0x0, 0xc4, 0x80, 0x6, 0xcd, 0xc9, 0xf9, 0x30,
	0x3, 0x25, 0xd8, 0x1, 0xd6, 0x8e, 0x0, 0x10,
	0xf, 0xff, 0x78,

	/* U+32 "2" */
	0x0, 0xc, 0xf7, 0xf4, 0x0, 0x62, 0xf6, 0x56,
	0x27, 0xd0, 0xa, 0x46, 0xed, 0x38, 0xa4, 0xe0,
	0x4, 0x34, 0x0, 0xa0, 0x30, 0x5, 0xe4, 0x3,
	0x18, 0x4, 0x30, 0xa0, 0x19, 0x3, 0x0, 0x3f,
	0x40, 0x30, 0x7, 0xd2, 0x52, 0x20, 0x1e, 0x76,
	0x56, 0x0, 0xf2, 0x41, 0xd0, 0x7, 0x8e, 0xcb,
	0x40, 0x3c, 0x3a, 0x3e, 0x20, 0x1e, 0xc1, 0xd2,
	0x0, 0xf5, 0x91, 0xa3, 0xbf, 0x18, 0x28, 0x1c,
	0x47, 0x94,

	/* U+33 "3" */
	0x0, 0xc, 0xf7, 0xf4, 0x0, 0x43, 0xec, 0xae,
	0xaf, 0xa0, 0xb, 0x1a, 0xb8, 0xb7, 0x26, 0x4,
	0x15, 0x0, 0xa8, 0x30, 0x3b, 0x80, 0x1f, 0xfc,
	0x2b, 0xf, 0x0, 0x85, 0xe7, 0x59, 0xd4, 0x2,
	0x38, 0x62, 0x1c, 0x0, 0xc5, 0xfe, 0xb3, 0xb4,
	0x0, 0xf2, 0x78, 0x78, 0x8, 0x80, 0x31, 0xa,
	0x87, 0x60, 0x7, 0x9, 0x81, 0x92, 0x0, 0x4c,
	0x8, 0x1c, 0x17, 0x68, 0xb9, 0x28, 0x2, 0xe6,
	0x57, 0x57, 0xd1,

	/* U+34 "4" */
	0x0, 0xf1, 0xff, 0x80, 0x3f, 0x78, 0x7, 0xf3,
	0x18, 0x7, 0xe1, 0x94, 0x30, 0xf, 0xac, 0x28,
	0x3, 0xe4, 0x58, 0x10, 0xf, 0xa4, 0x9c, 0x3,
	0xe7, 0x29, 0x0, 0xf8, 0xa1, 0x50, 0x3, 0xe9,
	0xb, 0x0, 0xf8, 0xd0, 0x3b, 0xfe, 0x30, 0xff,
	0xc, 0x47, 0x84, 0x1e, 0x9, 0xdf, 0xc4, 0x10,
	0xe0, 0x1f, 0xfc, 0xa0,

	/* U+35 "5" */
	0x0, 0x7f, 0xfc, 0xa0, 0x20, 0x26, 0x7c, 0x20,
	0x60, 0xd9, 0x9c, 0x80, 0xc1, 0xc0, 0x1f, 0x8,
	0x18, 0x7, 0xc4, 0x7, 0x15, 0x6, 0x1, 0x78,
	0x4b, 0xab, 0xe3, 0x80, 0x38, 0xa7, 0xb9, 0x21,
	0x4, 0xd, 0xac, 0x22, 0x68, 0xa, 0x0, 0xf9,
	0x40, 0xc0, 0x3e, 0x30, 0x0, 0xfd, 0x80, 0x62,
	0x2, 0x13, 0x43, 0x0, 0xa0, 0x30, 0x38, 0x32,
	0xa7, 0x51, 0xa, 0x5, 0xaa, 0x8c, 0xf, 0x60,

	/* U+36 "6" */
	0x0, 0x86, 0x37, 0xd4, 0x3, 0x27, 0x39, 0xa3,
	0x0, 0x45, 0x61, 0x5d, 0x66, 0x1, 0x48, 0x52,
	0x80, 0x70, 0xa1, 0xa8, 0x7, 0x90, 0x2c, 0x59,
	0xd4, 0x2, 0x20, 0xde, 0x98, 0xad, 0x10, 0xe0,
	0x58, 0xee, 0x31, 0x50, 0x5, 0xe, 0x22, 0x92,
	0x41, 0x0, 0x20, 0x6, 0x50, 0x51, 0x6, 0x0,
	0xde, 0x3, 0x81, 0xa0, 0x1b, 0x41, 0x90, 0x9c,
	0x80, 0x4, 0xa2, 0x61, 0xc1, 0xb5, 0x4d, 0xa,
	0x0, 0x1e, 0x22, 0xa9, 0x31, 0x0,

	/* U+37 "7" */
	0xef, 0xff, 0xd6, 0xec, 0xde, 0x40, 0x39, 0x9f,
	0x88, 0x24, 0x3, 0xc2, 0xca, 0x20, 0x1e, 0x60,
	0x90, 0xf, 0xa4, 0x8c, 0x3, 0xca, 0x36, 0x1,
	0xf4, 0x8b, 0x0, 0x78, 0xcc, 0xc0, 0x1f, 0x48,
	0x50, 0x7, 0x85, 0x50, 0x80, 0x3d, 0x21, 0xe0,
	0x1f, 0x31, 0x20, 0x7, 0x98, 0x68, 0x3, 0xeb,
	0x6, 0x0, 0xe0,

	/* U+38 "8" */
	0x0, 0x15, 0x77, 0xea, 0x80, 0x43, 0xaa, 0x8c,
	0x15, 0x20, 0xb, 0xa, 0xa4, 0xe9, 0x31, 0x2,
	0x2, 0x80, 0x54, 0x8, 0x6, 0x1, 0xf1, 0x82,
	0x2, 0x80, 0x54, 0x8, 0x12, 0x75, 0x49, 0xd2,
	0xa1, 0x0, 0x50, 0x2b, 0x11, 0xa0, 0x1, 0xe5,
	0x77, 0xe8, 0xb0, 0x42, 0xa, 0x88, 0x16, 0xc9,
	0x8c, 0x10, 0x3, 0x20, 0x60, 0x0, 0xc0, 0x31,
	0x80, 0xc, 0x54, 0x80, 0x2b, 0xd, 0xa, 0xd,
	0xa8, 0xc6, 0x36, 0x4, 0xc4, 0x57, 0x17, 0xc0,

	/* U+39 "9" */
	0x0, 0x26, 0x7f, 0x51, 0x0, 0x4d, 0x64, 0xca,
	0xac, 0x10, 0x4, 0x8f, 0xcd, 0xc8, 0xd8, 0x28,
	0x48, 0x80, 0x18, 0x94, 0x34, 0xc, 0x3, 0x28,
	0x27, 0x80, 0x7b, 0x80, 0x48, 0xc, 0x3, 0x70,
	0x1a, 0x4, 0x88, 0x0, 0xdc, 0xc, 0x5c, 0x7e,
	0x6b, 0x4, 0x4, 0x22, 0x4d, 0x9e, 0x1c, 0x18,
	0x0, 0xdb, 0xfa, 0xea, 0x24, 0x1, 0xe3, 0x33,
	0x80, 0x79, 0x34, 0x60, 0x2, 0x5b, 0xeb, 0xd,
	0x10, 0xb, 0x54, 0x9f, 0xcc, 0x0,

	/* U+3A ":" */
	0x5f, 0xb0, 0xf0, 0x42, 0x93, 0x62, 0x3c, 0x90,
	0xf, 0xfe, 0x29, 0xe4, 0x4, 0x9b, 0x97, 0x81,
	0x90,

	/* U+3B ";" */
	0x6, 0xfa, 0x0, 0x68, 0x28, 0x3, 0xcd, 0xc0,
	0x9, 0x90, 0x1, 0xff, 0xcf, 0x4a, 0x60, 0x1,
	0x2f, 0x0, 0x4, 0x3, 0x70, 0x60, 0x1, 0x9,
	0x0, 0xf, 0xc0, 0x0,

	/* U+3C "<" */
	0x0, 0xf9, 0x2c, 0x3, 0x9b, 0x6d, 0x40, 0x2,
	0xfd, 0x26, 0xd8, 0x33, 0xd0, 0x55, 0xd2, 0x48,
	0xc3, 0x78, 0xa0, 0x12, 0x28, 0xdd, 0x20, 0x4,
	0x35, 0xac, 0xb7, 0xae, 0x20, 0x2, 0x9e, 0x83,
	0x8f, 0x0, 0xc2, 0xfd, 0x24, 0x1, 0xf3, 0x60,

	/* U+3D "=" */
	0x39, 0x9f, 0xc6, 0xec, 0xdf, 0x95, 0x3f, 0xff,
	0x30, 0x7, 0xf8, 0xa6, 0x7f, 0x1b, 0x37, 0xf2,
	0x80,

	/* U+3E ">" */
	0x3a, 0x30, 0xf, 0x9d, 0x73, 0xa, 0x1, 0xc9,
	0x8c, 0x75, 0xae, 0x1, 0x8e, 0x7e, 0x9a, 0x3e,
	0x44, 0x3, 0x2d, 0xe1, 0x32, 0x0, 0x65, 0xbc,
	0x25, 0x40, 0x28, 0xea, 0x57, 0xea, 0x13, 0xd7,
	0x39, 0xe8, 0x10, 0x3, 0xa5, 0xeb, 0x0, 0x72,
	0x5a, 0x0, 0x7c,

	/* U+3F "?" */
	0x0, 0x1d, 0xf7, 0xea, 0x80, 0x4b, 0x88, 0xaa,
	0x3a, 0x80, 0x5, 0x86, 0xdd, 0x78, 0xb8, 0x89,
	0xe0, 0x80, 0x2, 0xe0, 0x43, 0x2e, 0x1, 0x8c,
	0x4, 0x3, 0xc4, 0xa4, 0x40, 0xf, 0x70, 0x48,
	0x7, 0xb0, 0xe1, 0x0, 0x3a, 0x4d, 0xdc, 0x1,
	0xe7, 0x18, 0x0, 0xf8, 0x9c, 0x3, 0xf6, 0x48,
	0x7, 0xe1, 0x10, 0x7, 0xc3, 0xde, 0x1, 0xf8,
	0x48, 0x3, 0x0,

	/* U+40 "@" */
	0x0, 0xd1, 0xbf, 0xae, 0x1, 0xc3, 0xab, 0x76,
	0xa9, 0xb0, 0xd, 0x4d, 0xac, 0x8f, 0xea, 0xc0,
	0x4, 0x5b, 0x9, 0xfd, 0x3b, 0xb0, 0x3, 0xe4,
	0x25, 0x2d, 0x95, 0x44, 0x20, 0x8a, 0x2d, 0xc8,
	0x2, 0x4, 0x43, 0x2, 0x41, 0x30, 0x72, 0x1,
	0x77, 0x8, 0x12, 0x80, 0x5, 0xc0, 0x21, 0x30,
	0xe2, 0x0, 0x10, 0x80, 0xb0, 0x98, 0x0, 0xc0,
	0x40, 0xc4, 0xc9, 0x44, 0x5e, 0x88, 0xa0, 0x29,
	0x40, 0x12, 0x67, 0xb, 0x26, 0xc5, 0xb0, 0x5,
	0xc9, 0xf7, 0x26, 0x5d, 0xa2, 0x0, 0x64, 0xd8,
	0x44, 0x3a, 0x80, 0x75, 0x4a, 0x55, 0xd9, 0xc0,
	0x20,

	/* U+41 "A" */
	0x0, 0xec, 0xf0, 0xf, 0xe1, 0x30, 0x50, 0xf,
	0xce, 0x0, 0xf0, 0xf, 0xda, 0x8, 0x80, 0xf,
	0xc8, 0xba, 0x26, 0x1, 0xe4, 0xc, 0x70, 0xb0,
	0xf, 0x68, 0x38, 0x92, 0x80, 0x79, 0xcc, 0x41,
	0x48, 0x80, 0x18, 0xc6, 0xc0, 0x16, 0xa, 0x1,
	0xac, 0x32, 0x66, 0xc, 0x0, 0xca, 0x8, 0xcc,
	0x50, 0x41, 0x0, 0x11, 0x1b, 0xff, 0x50, 0x20,
	0x1, 0x43, 0x40, 0x32, 0x7, 0x80, 0x30, 0x10,
	0x3, 0x9, 0xa0, 0xa, 0x20, 0x3, 0xc8, 0x28,

	/* U+42 "B" */
	0x4f, 0xfd, 0xd8, 0xa0, 0x18, 0xd9, 0x88, 0x55,
	0x40, 0xa, 0xe6, 0x55, 0xc6, 0xa8, 0x1, 0xf4,
	0x86, 0x0, 0x7c, 0x61, 0xe0, 0x1e, 0x1b, 0x5,
	0x0, 0x5c, 0x42, 0x7c, 0xa8, 0x80, 0x6, 0xee,
	0x61, 0x36, 0x0, 0xa3, 0xfe, 0xb1, 0xc3, 0x0,
	0xf2, 0x70, 0x40, 0x7, 0xc6, 0xa, 0x1, 0xf0,
	0x81, 0x80, 0x7d, 0x0, 0xa0, 0xb, 0x88, 0x4e,
	0xb1, 0xc0, 0x0, 0xdd, 0xcc, 0x11, 0x80,

	/* U+43 "C" */
	0x0, 0x15, 0xff, 0xb1, 0x80, 0x24, 0xd5, 0x53,
	0x14, 0xc8, 0x1, 0x43, 0xf5, 0x3c, 0x6c, 0x6c,
	0x30, 0x20, 0x17, 0x84, 0xe8, 0x38, 0x6, 0x35,
	0x36, 0x11, 0x0, 0x75, 0x49, 0x18, 0x7, 0xff,
	0x40, 0x8c, 0x3, 0xf3, 0x8, 0x80, 0x3a, 0x63,
	0x41, 0xc0, 0x31, 0xb1, 0x30, 0xc0, 0x80, 0x50,
	0x12, 0x14, 0x3f, 0x32, 0xd4, 0x73, 0x4, 0xc5,
	0x76, 0x19, 0x80,

	/* U+44 "D" */
	0x7f, 0xfb, 0xb1, 0x80, 0x3c, 0xae, 0xe1, 0x9d,
	0x10, 0xd, 0xf1, 0x3b, 0x25, 0x80, 0x1f, 0x99,
	0x84, 0xc0, 0x1f, 0xa0, 0x34, 0x3, 0xf0, 0x92,
	0x0, 0x7f, 0x8, 0x7, 0xf9, 0xc0, 0x40, 0x3f,
	0x38, 0x8, 0x7, 0xe1, 0x0, 0xfe, 0x12, 0x40,
	0xf, 0xd0, 0x1a, 0x1, 0xf3, 0xb1, 0xb0, 0x5,
	0xf1, 0x3b, 0x5, 0xa0, 0x19, 0x5d, 0xc3, 0x3a,
	0x20, 0x0,

	/* U+45 "E" */
	0x3f, 0xff, 0xcc, 0x0, 0x26, 0x6f, 0x28, 0x1,
	0x26, 0x7c, 0x60, 0x1f, 0xfd, 0xe6, 0xff, 0xe8,
	0x0, 0x89, 0xdf, 0xb0, 0x2, 0x48, 0x8e, 0x40,
	0xf, 0xfe, 0xaa, 0x44, 0x79, 0x0, 0x4, 0xef,
	0xec,

	/* U+46 "F" */
	0x2f, 0xff, 0xd2, 0x0, 0x26, 0x6f, 0x60, 0x1,
	0xe6, 0x7c, 0xa0, 0x1f, 0xfd, 0xe5, 0xff, 0xe9,
	0x0, 0x89, 0xdf, 0xb0, 0x2, 0x78, 0x8e, 0x50,
	0xf, 0xff, 0x38,

	/* U+47 "G" */
	0x0, 0x8a, 0xff, 0xd8, 0xa0, 0x19, 0x35, 0x10,
	0xa5, 0x52, 0x1, 0x50, 0xed, 0xd7, 0x1b, 0x20,
	0x38, 0xc1, 0x0, 0x5e, 0x1e, 0x18, 0xe, 0x1,
	0x8e, 0x78, 0x14, 0x44, 0x1, 0xcc, 0xa0, 0x24,
	0x1, 0xff, 0xc2, 0x68, 0x89, 0xc0, 0x3d, 0xae,
	0xf4, 0x80, 0x90, 0x5, 0x7f, 0xe2, 0x0, 0x28,
	0x88, 0x3, 0xf6, 0x84, 0x80, 0x7e, 0x62, 0x74,
	0x0, 0x88, 0x80, 0x17, 0x8d, 0xda, 0x6f, 0x42,
	0x80, 0x5, 0xec, 0xac, 0xc7, 0xd4,

	/* U+48 "H" */
	0x9f, 0x10, 0xc, 0x3f, 0x20, 0x1f, 0xff, 0x2e,
	0xff, 0xdc, 0x1, 0x99, 0xdf, 0x30, 0x6, 0x88,
	0xf0, 0x7, 0xff, 0xa0,

	/* U+49 "I" */
	0x4f, 0xff, 0xc8, 0xcd, 0x80, 0xc, 0xd8, 0xa6,
	0x60, 0x19, 0x98, 0x80, 0x3f, 0xff, 0xe0, 0x1f,
	0xfc, 0xd2, 0x99, 0x80, 0x66, 0x62, 0x66, 0xc0,
	0x6, 0x6c,

	/* U+4A "J" */
	0x0, 0xfd, 0x3e, 0x60, 0x1f, 0xff, 0xf0, 0xf,
	0xfe, 0x6b, 0xb0, 0x7, 0x18, 0x5, 0x52, 0x1,
	0xce, 0x6, 0x14, 0x12, 0x1, 0x39, 0x28, 0x1,
	0xcd, 0xb6, 0x72, 0xa, 0xc0, 0x2c, 0x80, 0x62,
	0x6c, 0x10,

	/* U+4B "K" */
	0x4f, 0x80, 0xc, 0x9f, 0xa0, 0x1f, 0x15, 0x7,
	0x80, 0x7d, 0xc3, 0x44, 0x1, 0xe9, 0x36, 0x50,
	0xf, 0x2b, 0x14, 0x80, 0x78, 0xa8, 0x3c, 0x3,
	0xc3, 0xc1, 0x4, 0x1, 0xe6, 0x30, 0xa0, 0xf,
	0xc8, 0xa5, 0x0, 0x1e, 0x2a, 0xb1, 0x72, 0x0,
	0xe5, 0x11, 0x40, 0x70, 0x7, 0xe6, 0x33, 0x30,
	0x7, 0xee, 0x8, 0x10, 0xf, 0x89, 0xc6, 0xc0,
	0x3f, 0x41, 0x2a, 0x0,

	/* U+4C "L" */
	0xf, 0xb0, 0xf, 0xff, 0xf8, 0x7, 0xff, 0xa9,
	0x62, 0x3c, 0xc0, 0x1, 0x77, 0xf6, 0x0,

	/* U+4D "M" */
	0x8f, 0xd0, 0xd, 0x5f, 0x60, 0x2, 0x20, 0x4,
	0xa0, 0x1c, 0xa0, 0x5, 0x0, 0xe2, 0xb0, 0x7,
	0x88, 0x80, 0x24, 0x31, 0x5, 0x60, 0xd, 0xa0,
	0xea, 0x16, 0x1, 0x98, 0xb7, 0xc4, 0xc4, 0x3,
	0x2a, 0x2b, 0x80, 0x7a, 0xc0, 0x1a, 0x1, 0xc2,
	0x62, 0x24, 0x0, 0xf9, 0x98, 0x1, 0xfa, 0x20,
	0x1, 0xff, 0xd6,

	/* U+4E "N" */
	0x9f, 0x70, 0xc, 0x7f, 0x20, 0x9, 0x0, 0xfe,
	0x17, 0x0, 0xfe, 0x90, 0xf, 0xca, 0x2e, 0x1,
	0xf7, 0xc, 0x80, 0x7c, 0xf0, 0x2c, 0x1, 0xf3,
	0xc, 0x0, 0x7e, 0x81, 0x60, 0xf, 0x98, 0x61,
	0xc0, 0x3e, 0x91, 0xe0, 0xf, 0x9c, 0x54, 0x3,
	0xf4, 0x80, 0x7f, 0x38, 0x80, 0x7f, 0x48, 0x0,

	/* U+4F "O" */
	0x0, 0x1d, 0xff, 0xac, 0x80, 0x24, 0xc4, 0x33,
	0x26, 0x98, 0x2, 0x87, 0x73, 0x20, 0xd0, 0x61,
	0x92, 0x0, 0x1c, 0xb, 0x60, 0x30, 0x6, 0x60,
	0xc7, 0x11, 0x0, 0x61, 0x13, 0x91, 0x80, 0x78,
	0xcc, 0x2, 0x1, 0xf0, 0x80, 0x80, 0x7c, 0x24,
	0x60, 0x1e, 0x33, 0x38, 0x88, 0x3, 0x8, 0x9f,
	0x1, 0x80, 0x33, 0x6, 0x30, 0xc1, 0x80, 0xa,
	0x45, 0x82, 0x83, 0x2e, 0xda, 0x34, 0x0, 0x4d,
	0x44, 0xd8, 0x80,

	/* U+50 "P" */
	0x2f, 0xfe, 0xe9, 0x10, 0xc, 0x4e, 0xf2, 0xb7,
	0x90, 0x4, 0xf1, 0x15, 0xc8, 0xc8, 0x7, 0xe6,
	0x24, 0x10, 0xf, 0xce, 0x6, 0x1, 0xf9, 0x80,
	0xc0, 0x3e, 0x53, 0x41, 0x0, 0x3c, 0x45, 0x74,
	0x32, 0x1, 0x13, 0xbc, 0xad, 0xe4, 0x1, 0x2f,
	0xfd, 0xd2, 0x20, 0x1f, 0xfe, 0xd0,

	/* U+51 "Q" */
	0x0, 0x8e, 0xff, 0xd6, 0x60, 0x1c, 0x98, 0x86,
	0x64, 0xc4, 0x0, 0x86, 0xc7, 0x73, 0x1a, 0x36,
	0x20, 0x6, 0x8, 0x20, 0x1, 0x58, 0x30, 0x2,
	0xc1, 0x80, 0x32, 0x85, 0x80, 0xc, 0x80, 0x3c,
	0x46, 0x1, 0x30, 0x7, 0x98, 0x0, 0x20, 0x1f,
	0xe1, 0x10, 0x7, 0xf8, 0x40, 0xc, 0x1, 0xe6,
	0x0, 0x8c, 0x80, 0x3c, 0x46, 0x0, 0xb0, 0x50,
	0xc, 0xa1, 0x60, 0x6, 0xb, 0x20, 0x1, 0x58,
	0x30, 0x0, 0x6c, 0x76, 0xed, 0xa3, 0x42, 0x1,
	0x26, 0x22, 0x42, 0x1a, 0x1, 0xc7, 0x7f, 0xf1,
	0xbd, 0x0, 0x7e, 0x1c, 0x47, 0x10, 0xf, 0xeb,
	0xd1,

	/* U+52 "R" */
	0x3f, 0xfe, 0xc6, 0x0, 0xe3, 0x77, 0x31, 0x4d,
	0x0, 0x64, 0x88, 0x4f, 0x1a, 0xa8, 0x3, 0xf7,
	0x87, 0x80, 0x7e, 0x20, 0x10, 0xf, 0xc4, 0x2,
	0x1, 0xfb, 0xc3, 0x80, 0x24, 0x88, 0x4f, 0x1b,
	0x20, 0x4, 0x6e, 0xe6, 0x19, 0x90, 0x6, 0x7f,
	0xf5, 0x7, 0x0, 0x7e, 0x51, 0x71, 0x0, 0xfd,
	0x0, 0xc0, 0x1f, 0x98, 0x64, 0x3, 0xfa, 0x45,
	0xc0, 0x3f, 0x30, 0x48, 0x0,

	/* U+53 "S" */
	0x0, 0x1d, 0xf7, 0xe2, 0x80, 0x65, 0xc4, 0x55,
	0x15, 0x58, 0x0, 0x68, 0x76, 0xeb, 0x91, 0xe,
	0x8, 0xc, 0x40, 0x14, 0x85, 0x0, 0x42, 0x1,
	0x8a, 0x6c, 0x10, 0x19, 0x40, 0x33, 0x30, 0x6,
	0xc2, 0xb1, 0x84, 0x3, 0x93, 0x50, 0xe7, 0xa0,
	0x3, 0x8a, 0xfa, 0x5, 0xf4, 0x3, 0xc2, 0xfc,
	0xa5, 0x40, 0xac, 0x1, 0xd4, 0xa, 0x1d, 0x28,
	0x1, 0xfb, 0xc2, 0x44, 0x2, 0x70, 0x40, 0x47,
	0x2e, 0xa9, 0xc8, 0x19, 0x0, 0x45, 0xa2, 0x18,
	0x63, 0xc8, 0x0,

	/* U+54 "T" */
	0x3f, 0xff, 0xf2, 0xb, 0x36, 0x0, 0x33, 0x71,
	0x4c, 0xe2, 0x19, 0x9c, 0x40, 0x1f, 0xff, 0xf0,
	0xf, 0xff, 0xc8,

	/* U+55 "U" */
	0xaf, 0x10, 0xc, 0x5f, 0x20, 0x1f, 0xfc, 0x73,
	0x0, 0xff, 0xef, 0x18, 0x7, 0xff, 0x3c, 0xc0,
	0x40, 0x30, 0x81, 0xf8, 0x20, 0x6, 0x40, 0xf7,
	0x9, 0x20, 0x1, 0x48, 0x38, 0xd0, 0xed, 0x53,
	0x46, 0x84, 0x17, 0x11, 0x54, 0x98, 0xa0,

	/* U+56 "V" */
	0x2f, 0xc0, 0xf, 0x6f, 0x89, 0x10, 0xc0, 0x38,
	0x48, 0xc4, 0x10, 0x14, 0x3, 0x38, 0x58, 0x3,
	0x43, 0x0, 0x36, 0x2, 0x0, 0x10, 0x1c, 0x3,
	0x20, 0x98, 0x4, 0xa2, 0x40, 0x3, 0x17, 0x0,
	0xde, 0x8, 0x0, 0xb0, 0xd0, 0xc, 0x81, 0xa0,
	0x4, 0x4, 0x0, 0xc2, 0x68, 0x2, 0x68, 0x1,
	0xeb, 0x4, 0x40, 0x68, 0x7, 0x94, 0x33, 0xc1,
	0xc0, 0x3c, 0x44, 0x54, 0x31, 0x0, 0xf9, 0x8,
	0x50, 0x3, 0xf6, 0x80, 0x2c, 0x3, 0xf2, 0x0,
	0x98, 0x6,

	/* U+57 "W" */
	0x3f, 0x70, 0x5, 0xf8, 0x0, 0xfd, 0xc8, 0x38,
	0x0, 0xa0, 0x40, 0xc0, 0x42, 0x6, 0x2, 0x20,
	0x70, 0x30, 0x10, 0x16, 0x2, 0x0, 0x68, 0x70,
	0x30, 0x11, 0x1, 0x40, 0xc8, 0x4, 0x8, 0x18,
	0x43, 0xc9, 0x5c, 0x8, 0x40, 0x4, 0x2, 0x4f,
	0xe4, 0xc, 0x40, 0xe, 0x3, 0x52, 0x20, 0x11,
	0xb0, 0x0, 0x81, 0xc7, 0x54, 0x1c, 0x48, 0x0,
	0xe1, 0x80, 0xc2, 0x2c, 0xf, 0x0, 0x10, 0x38,
	0x18, 0x13, 0x81, 0x0, 0x4, 0x4, 0x80, 0xa,
	0x20, 0xc0, 0x11, 0x3, 0x0, 0x38, 0x0, 0x40,
	0x13, 0x1, 0x80, 0xc, 0x0, 0x20, 0x11, 0x7,
	0x0, 0x14, 0x8, 0x0,

	/* U+58 "X" */
	0xc, 0xf5, 0x0, 0xc3, 0xfe, 0x10, 0xf0, 0x80,
	0xd, 0x61, 0x2, 0x6, 0xa4, 0xc0, 0x2, 0x51,
	0x70, 0xa, 0x2, 0x0, 0x12, 0x16, 0x1, 0x89,
	0xc5, 0xcd, 0xd, 0x40, 0x3a, 0x46, 0x7c, 0x3c,
	0x3, 0xc3, 0x2, 0x68, 0x60, 0x1f, 0x38, 0x3,
	0x80, 0x3f, 0x48, 0x2, 0x40, 0x3e, 0x17, 0x26,
	0x35, 0x0, 0xf5, 0x84, 0x40, 0x20, 0x3, 0x8d,
	0x49, 0x45, 0xc9, 0x80, 0x37, 0x84, 0x80, 0x24,
	0x20, 0x40, 0xa, 0x66, 0x40, 0x0, 0xb8, 0xc8,
	0x2, 0x3, 0xc0, 0x34, 0xb, 0x90,

	/* U+59 "Y" */
	0x2f, 0xd0, 0xe, 0x1f, 0xe0, 0x24, 0x25, 0x0,
	0xd2, 0x12, 0x0, 0x80, 0x90, 0xc, 0xc0, 0xc0,
	0x3, 0x3c, 0x0, 0x61, 0x71, 0x0, 0xa0, 0x24,
	0x1, 0x61, 0x20, 0x19, 0x9, 0x45, 0x49, 0x84,
	0x3, 0xa0, 0x26, 0x41, 0x60, 0x1e, 0x52, 0x73,
	0x52, 0x0, 0xfa, 0xc0, 0x12, 0x1, 0xf9, 0x80,
	0xcc, 0x1, 0xff, 0xd6, 0x70, 0xf, 0xfe, 0x88,

	/* U+5A "Z" */
	0xcf, 0xff, 0xc9, 0x6c, 0xde, 0x0, 0x33, 0xcc,
	0xf6, 0x2, 0x90, 0x7, 0xac, 0x2c, 0x3, 0xd0,
	0x30, 0x20, 0x1c, 0x4e, 0x4e, 0x1, 0xe9, 0x9,
	0x0, 0xf2, 0x21, 0x50, 0x3, 0xd2, 0x16, 0x1,
	0xe7, 0x28, 0x10, 0xe, 0x18, 0x27, 0x0, 0xf5,
	0x84, 0x0, 0x79, 0x15, 0x14, 0x3, 0xd0, 0x0,
	0x88, 0xf2, 0x8, 0x23, 0xbf, 0xb0,

	/* U+5B "[" */
	0x68, 0x88, 0x2d, 0xde, 0x0, 0x17, 0xf8, 0x3,
	0xff, 0xfe, 0x0, 0x28, 0x80, 0x4, 0xee, 0x0,

	/* U+5C "\\" */
	0x9f, 0x10, 0xe, 0xa0, 0x60, 0xe, 0x32, 0xa0,
	0xf, 0x51, 0x18, 0x7, 0x30, 0x58, 0x7, 0xa,
	0x30, 0x7, 0xb8, 0x50, 0x3, 0x94, 0x78, 0x3,
	0xce, 0xa2, 0x1, 0xd4, 0xe, 0x1, 0xc6, 0x54,
	0x1, 0xea, 0x32, 0x0, 0xe6, 0xa, 0x0, 0xe1,
	0x46, 0x0, 0xf7, 0xa, 0x0, 0x72, 0x87, 0x0,

	/* U+5D "]" */
	0x8, 0x89, 0x81, 0xde, 0xb0, 0xff, 0x10, 0x7,
	0xff, 0xfc, 0x1, 0x10, 0x20, 0x3, 0xb8, 0x0,

	/* U+5E "^" */
	0x0, 0xb7, 0x40, 0x1c, 0x64, 0x43, 0x0, 0xd4,
	0x0, 0xa0, 0xc, 0xca, 0xa6, 0x0, 0x98, 0x3b,
	0x80, 0xa0, 0xa, 0x14, 0x40, 0xc8, 0x11, 0xb0,
	0x1, 0x8c, 0xa8, 0x28, 0x1, 0x41, 0x40,

	/* U+5F "_" */
	0x37, 0x7f, 0xc6, 0x91, 0x1f, 0x90,

	/* U+60 "`" */
	0x57, 0x30, 0x4a, 0xe0, 0x1f, 0x39,

	/* U+61 "a" */
	0x0, 0x26, 0x7f, 0x62, 0x80, 0x4d, 0x62, 0xee,
	0x3a, 0x60, 0x19, 0x2d, 0x89, 0xd0, 0x90, 0x4,
	0x48, 0x4, 0x48, 0x4, 0x2e, 0x80, 0x18, 0x40,
	0x21, 0x9d, 0xff, 0x94, 0x2, 0xc6, 0x4a, 0xbc,
	0x40, 0x3, 0x14, 0x4a, 0xa1, 0x88, 0x7, 0xe1,
	0x70, 0x3, 0x8c, 0x4b, 0xcf, 0x90, 0x8, 0xb1,
	0x5e, 0x16, 0x1c, 0x14,

	/* U+62 "b" */
	0x4f, 0x80, 0xf, 0xfe, 0xe3, 0xef, 0xeb, 0x0,
	0x67, 0x87, 0x53, 0x97, 0x0, 0x87, 0x6a, 0x98,
	0x30, 0x20, 0x6, 0x20, 0x1, 0x48, 0x38, 0x7,
	0xc8, 0x1e, 0x1, 0xf0, 0x81, 0x80, 0x7c, 0x20,
	0x60, 0x1f, 0x28, 0x78, 0x1, 0x40, 0x35, 0x83,
	0x80, 0xb, 0x5d, 0xb0, 0xa0, 0x40, 0x10, 0xb3,
	0x21, 0x97, 0x0,

	/* U+63 "c" */
	0x0, 0x1d, 0xf7, 0xea, 0x80, 0x49, 0x88, 0xec,
	0x15, 0x20, 0xa, 0xc, 0x99, 0x6a, 0x31, 0xa8,
	0xb9, 0x80, 0x5e, 0x4b, 0xa1, 0x80, 0x19, 0x35,
	0x84, 0x1c, 0x3, 0xe1, 0x7, 0x0, 0xfb, 0x43,
	0x0, 0x31, 0x42, 0x28, 0xb9, 0x0, 0x50, 0xee,
	0xa, 0xd, 0x98, 0xd5, 0x73, 0x4, 0xc4, 0x77,
	0xd, 0xc0, 0x0,

	/* U+64 "d" */
	0x0, 0xfa, 0x3d, 0x0, 0x3f, 0xfa, 0x8b, 0xbf,
	0xce, 0x1, 0x9a, 0x89, 0x52, 0x1c, 0x0, 0x32,
	0x3b, 0x54, 0xd1, 0x0, 0x38, 0x31, 0x0, 0x9,
	0x80, 0x1e, 0x18, 0x1, 0xf1, 0x83, 0x80, 0x7c,
	0x60, 0xe0, 0x1f, 0x78, 0x60, 0x7, 0xce, 0xc,
	0x40, 0x1, 0x50, 0x0, 0xc8, 0xed, 0x53, 0xc8,
	0x2, 0x6a, 0x25, 0x46, 0x80, 0x0,

	/* U+65 "e" */
	0x0, 0x15, 0x77, 0xe2, 0x80, 0x47, 0xaa, 0x8e,
	0x55, 0x0, 0xd, 0x1d, 0xa8, 0xe3, 0x72, 0x61,
	0x92, 0x0, 0xa4, 0x17, 0xc3, 0x26, 0x77, 0x87,
	0x18, 0x23, 0x36, 0x50, 0x30, 0x6, 0x7f, 0xfa,
	0xb4, 0x2c, 0x3, 0xe6, 0x7, 0x40, 0x8, 0xac,
	0x86, 0xc2, 0xea, 0x2b, 0x54, 0xc1, 0x35, 0x51,
	0xde, 0xf1,

	/* U+66 "f" */
	0x0, 0xe2, 0x68, 0x74, 0x0, 0xe7, 0xd9, 0x78,
	0xb0, 0xc, 0x70, 0x57, 0xfe, 0xd0, 0xd, 0x61,
	0x8, 0x0, 0x20, 0xc, 0x20, 0xc0, 0x1d, 0x1f,
	0xe6, 0xc, 0xff, 0x90, 0x2e, 0x64, 0x60, 0xf3,
	0x32, 0x81, 0xb3, 0x14, 0x2d, 0x9a, 0x10, 0xf,
	0xff, 0xf8, 0x7, 0xff, 0x8,

	/* U+67 "g" */
	0x0, 0x36, 0xff, 0x43, 0xfa, 0x3, 0xc8, 0x44,
	0xa4, 0x0, 0x6, 0x7, 0x1d, 0xd8, 0x60, 0x7,
	0x9, 0x10, 0x9, 0x0, 0x1e, 0x6, 0x1, 0xfc,
	0xe0, 0x1f, 0xce, 0x1, 0xf7, 0x86, 0x0, 0x7c,
	0xe0, 0xc4, 0x0, 0x16, 0x0, 0xc, 0x8e, 0xd5,
	0x3c, 0x40, 0x26, 0xa2, 0x57, 0x67, 0x0, 0xcb,
	0xbf, 0xb0, 0x40, 0xc1, 0xa, 0x1, 0x12, 0x91,
	0x0, 0xea, 0xe2, 0xb4, 0x24, 0x1, 0x72, 0xee,
	0x54, 0xc4, 0x0,

	/* U+68 "h" */
	0x4f, 0x70, 0xf, 0xfe, 0xe1, 0xdf, 0xf4, 0x88,
	0x5, 0x78, 0xc, 0x6d, 0xa0, 0x11, 0x6d, 0xce,
	0x91, 0x98, 0x0, 0xc4, 0x1, 0x50, 0x28, 0x3,
	0xc0, 0x30, 0x80, 0x7f, 0x18, 0x7, 0xff, 0xa0,

	/* U+69 "i" */
	0x0, 0xcd, 0xe8, 0x1, 0xf7, 0x1, 0x0, 0x7d,
	0x1c, 0xc0, 0x1f, 0x84, 0x3, 0xbf, 0xf9, 0x80,
	0x33, 0x34, 0x60, 0x1e, 0x99, 0xa8, 0x3, 0xff,
	0xed, 0x33, 0x50, 0x54, 0xc9, 0xc1, 0x9a, 0x30,
	0x36, 0x65, 0x0,

	/* U+6A "j" */
	0x0, 0xd3, 0xc4, 0x1, 0x8c, 0x44, 0x1, 0xab,
	0x8c, 0x3, 0x84, 0x7, 0xff, 0x8c, 0x59, 0xa2,
	0x0, 0xa6, 0x65, 0x0, 0xff, 0xf9, 0x10, 0x7,
	0xa, 0x81, 0xc4, 0x27, 0xc2, 0x1, 0x5d, 0x8a,
	0x9c, 0x0,

	/* U+6B "k" */
	0x4f, 0x80, 0xf, 0xff, 0x1a, 0xfe, 0x88, 0x7,
	0x92, 0x8b, 0x4, 0x3, 0x92, 0xc7, 0xc4, 0x3,
	0x8e, 0xc7, 0x8, 0x3, 0x8b, 0x42, 0xc8, 0x3,
	0xca, 0x21, 0x20, 0x1f, 0xad, 0x4e, 0x40, 0x3c,
	0xe9, 0x64, 0xca, 0x1, 0xf0, 0xf0, 0x51, 0x0,
	0x7c, 0x72, 0x1e, 0x1, 0xf9, 0x94, 0xa8, 0x0,

	/* U+6C "l" */
	0xf, 0xfe, 0x60, 0xc, 0xcd, 0x18, 0x7, 0xa6,
	0x6a, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xf4, 0xe6,
	0x6a, 0xa, 0x99, 0x38, 0x33, 0x46, 0x6, 0xcc,
	0xa0,

	/* U+6D "m" */
	0x1f, 0x9b, 0xfd, 0x5b, 0xfd, 0x30, 0x9, 0xb1,
	0xca, 0x8a, 0xb, 0x80, 0x25, 0x78, 0x11, 0x4b,
	0xa9, 0x0, 0x46, 0x0, 0x33, 0x0, 0xc, 0x4,
	0x3, 0xff, 0xfe, 0x1, 0xfc,

	/* U+6E "n" */
	0x4f, 0x54, 0xcf, 0xd9, 0x10, 0xb, 0xad, 0x98,
	0xd, 0xa0, 0x12, 0xed, 0x4e, 0x99, 0x88, 0x0,
	0xc4, 0x1, 0x58, 0x38, 0x3, 0xc0, 0x30, 0x81,
	0x80, 0x7f, 0xfc, 0x0,

	/* U+6F "o" */
	0x0, 0x25, 0xff, 0xad, 0x0, 0x26, 0xb5, 0x66,
	0x2d, 0xb0, 0x14, 0x97, 0xcc, 0xbc, 0xa4, 0xa8,
	0x2c, 0x40, 0x3, 0x61, 0x46, 0xe, 0x1, 0x90,
	0xd, 0xc0, 0x40, 0x31, 0x3, 0xb8, 0x4, 0x3,
	0x8, 0x39, 0x82, 0x0, 0x64, 0x3, 0xa0, 0x81,
	0x0, 0xc, 0x5, 0x14, 0x97, 0xcc, 0xbc, 0xa4,
	0x81, 0xac, 0x99, 0x85, 0x6c, 0x0,

	/* U+70 "p" */
	0x4f, 0x67, 0xdf, 0xd6, 0x0, 0xd1, 0x2e, 0xa5,
	0x2e, 0x1, 0x1f, 0xd5, 0x30, 0x20, 0x40, 0xa,
	0x20, 0x3, 0x70, 0x70, 0x7, 0x80, 0x6c, 0xe,
	0x0, 0xf9, 0xc0, 0x40, 0x3e, 0x70, 0x10, 0xf,
	0xb0, 0x34, 0x1, 0x60, 0x11, 0x30, 0x20, 0x0,
	0xf6, 0x65, 0xa3, 0x2, 0x0, 0x75, 0x76, 0x29,
	0x70, 0xb, 0xe3, 0xbf, 0x58, 0x3, 0xff, 0xa8,

	/* U+71 "q" */
	0x0, 0x2e, 0xff, 0x4c, 0x7a, 0x3, 0xd0, 0x4c,
	0x2b, 0x80, 0x6, 0x7, 0x19, 0x98, 0x80, 0x7,
	0x9, 0x10, 0x8, 0xc0, 0x1e, 0x6, 0x1, 0xfc,
	0xe0, 0x1f, 0xce, 0x1, 0xf7, 0x86, 0x0, 0x7c,
	0xe0, 0xc4, 0x0, 0x15, 0x0, 0xc, 0xe, 0x4c,
	0xbc, 0x80, 0x27, 0xa3, 0x67, 0x67, 0x0, 0xcb,
	0xbf, 0xd0, 0x1, 0xff, 0xd5,

	/* U+72 "r" */
	0xcf, 0x6, 0xdf, 0xe5, 0x0, 0x4c, 0x88, 0x82,
	0x20, 0x3, 0xdf, 0xef, 0xa0, 0x2, 0xd0, 0x3,
	0xca, 0x1, 0xff, 0xe9,

	/* U+73 "s" */
	0x0, 0x1d, 0xf7, 0xeb, 0x80, 0x49, 0x8a, 0xec,
	0x11, 0x60, 0x9, 0xf, 0x99, 0x6a, 0x24, 0x1,
	0x8, 0x5, 0x34, 0xc1, 0x61, 0xce, 0x60, 0x4a,
	0x40, 0xd6, 0xb1, 0x9f, 0x44, 0x1, 0x25, 0xfd,
	0xb2, 0xe0, 0x93, 0xa0, 0x1, 0x26, 0x42, 0xc7,
	0x12, 0x20, 0x10, 0x80, 0x8a, 0xb, 0xe6, 0x2e,
	0x9, 0x81, 0xe9, 0x59, 0xd9, 0xf0, 0x0,

	/* U+74 "t" */
	0x0, 0x99, 0xc0, 0x3f, 0x5c, 0x0, 0x7f, 0xf0,
	0xe7, 0xfc, 0x41, 0xff, 0x83, 0x66, 0x42, 0x13,
	0x38, 0x11, 0x98, 0x60, 0xcd, 0x80, 0x3f, 0xfd,
	0x4c, 0x8, 0x1, 0xf7, 0x5, 0xd4, 0xd9, 0x80,
	0x4b, 0x44, 0xac, 0xe0,

	/* U+75 "u" */
	0x3f, 0x80, 0xd, 0x1e, 0x80, 0x1f, 0xfe, 0x81,
	0x0, 0xf8, 0x40, 0x3f, 0x88, 0x1c, 0x3, 0x28,
	0x4, 0xe3, 0x6c, 0xfa, 0x60, 0x14, 0x41, 0x66,
	0xae, 0x0, 0x0,

	/* U+76 "v" */
	0xd, 0xf0, 0xe, 0x1f, 0xc0, 0xa0, 0x50, 0xc,
	0xe1, 0x40, 0xc1, 0xc0, 0x1a, 0x81, 0x80, 0x55,
	0x4, 0x0, 0x26, 0xc0, 0x17, 0x3, 0x0, 0x18,
	0x28, 0x2, 0x42, 0xa0, 0x5, 0x11, 0x80, 0x6a,
	0x22, 0xd4, 0x1, 0xcc, 0x15, 0x40, 0x60, 0xe,
	0x14, 0x65, 0x50, 0x80, 0x7b, 0xc4, 0xb8, 0x3,
	0xe4, 0x11, 0x20, 0x4,

	/* U+77 "w" */
	0x6f, 0x20, 0x5, 0x58, 0x5, 0xf0, 0xa0, 0xe0,
	0x4, 0x40, 0x0, 0xc3, 0x4c, 0x34, 0x8, 0x40,
	0xc1, 0x41, 0x0, 0x88, 0xe, 0x24, 0x81, 0xc2,
	0x20, 0x47, 0xc, 0x57, 0xc0, 0x35, 0x0, 0x79,
	0x2, 0x66, 0x14, 0x14, 0xc0, 0xa, 0x8, 0x48,
	0x81, 0x31, 0xc0, 0x1, 0x87, 0x1, 0x90, 0xd0,
	0x28, 0x4, 0x6a, 0x80, 0x4, 0x71, 0x10, 0x4,
	0xa1, 0x80, 0xc, 0x15, 0x0, 0xde, 0x6, 0x0,
	0x40, 0xc0, 0x0,

	/* U+78 "x" */
	0x7f, 0x90, 0xc, 0xff, 0x40, 0xe8, 0xca, 0x0,
	0x38, 0x2a, 0x0, 0x50, 0xd8, 0x87, 0x7, 0x0,
	0x43, 0x43, 0x52, 0x50, 0x60, 0x19, 0x1d, 0x19,
	0x1c, 0x3, 0xd2, 0x0, 0xf0, 0xf, 0xac, 0x1,
	0x20, 0x1e, 0x65, 0x54, 0x94, 0x80, 0x62, 0x91,
	0xa6, 0x46, 0x40, 0xb, 0x83, 0x40, 0x14, 0x34,
	0x21, 0x6, 0xe6, 0x0, 0x1b, 0x1a, 0x0,

	/* U+79 "y" */
	0x1f, 0xe0, 0xf, 0x77, 0x88, 0x94, 0x54, 0x3,
	0x28, 0xa8, 0x84, 0x87, 0x0, 0x6e, 0x9, 0x0,
	0x19, 0x90, 0x80, 0x2, 0x86, 0x60, 0xa, 0x42,
	0xc0, 0xc, 0x12, 0x1, 0x94, 0x98, 0x1, 0x22,
	0xa0, 0x1d, 0x60, 0xc8, 0x32, 0x1, 0xe6, 0x1b,
	0xe0, 0x60, 0xf, 0x98, 0x95, 0x84, 0x3, 0xe9,
	0x0, 0x58, 0x7, 0xe1, 0x12, 0x10, 0x7, 0xe7,
	0x1f, 0x0, 0xfc, 0x50, 0x48, 0x1, 0xe3, 0xac,
	0xe, 0x0, 0xf9, 0x54, 0x76, 0x60, 0x1e,

	/* U+7A "z" */
	0x5f, 0xff, 0xc6, 0xef, 0xe5, 0x0, 0x11, 0x22,
	0x39, 0xc2, 0x84, 0x3, 0xa8, 0x9d, 0x40, 0x39,
	0x94, 0xe0, 0x3, 0x8e, 0x47, 0x40, 0x38, 0x74,
	0x34, 0x40, 0x3a, 0x86, 0x4c, 0x3, 0xa1, 0x15,
	0x80, 0x39, 0x1c, 0x9, 0xdf, 0x90, 0x80, 0xf,
	0x11, 0xda,

	/* U+7B "{" */
	0x0, 0xc9, 0x92, 0x1, 0x1d, 0xb5, 0x80, 0x50,
	0x14, 0x40, 0x12, 0x20, 0x3, 0x8, 0x7, 0xe1,
	0x0, 0xc6, 0x1, 0xe4, 0xd, 0x0, 0x13, 0x41,
	0x30, 0x3, 0xe4, 0xf0, 0x40, 0x12, 0xc5, 0x40,
	0x12, 0x4c, 0x22, 0x80, 0x64, 0xc, 0x0, 0xc4,
	0x6, 0x1, 0xe1, 0x0, 0xc2, 0xe, 0x1, 0xc6,
	0x60, 0xe, 0x80, 0x90, 0xc, 0x94, 0xd4, 0x1,
	0x97, 0xec,

	/* U+7C "|" */
	0xbb, 0x0, 0x7f, 0xf6, 0x0,

	/* U+7D "}" */
	0xac, 0x30, 0xd, 0xf, 0x86, 0x1, 0x15, 0x4,
	0x80, 0x61, 0x24, 0x0, 0xe1, 0x10, 0x7, 0xff,
	0x1, 0xc0, 0x40, 0x31, 0x82, 0x80, 0x69, 0x1a,
	0x52, 0x0, 0xe, 0x5, 0x48, 0x5, 0xc2, 0xfe,
	0x0, 0x73, 0x98, 0x40, 0x6, 0x3, 0x80, 0x67,
	0x1, 0x0, 0xff, 0x84, 0x40, 0x18, 0x49, 0x40,
	0x35, 0x4, 0x0, 0x58, 0xb6, 0x60, 0x16, 0xf2,
	0x0, 0x60,

	/* U+7E "~" */
	0x3, 0xdf, 0xd5, 0x0, 0xcc, 0x63, 0xa6, 0xa7,
	0x52, 0x0, 0x29, 0x57, 0x1f, 0xae, 0x56, 0xea,
	0xc1, 0x64, 0xa1, 0x0, 0x54, 0x9a, 0x96, 0x0
};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
	{.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
	{.bitmap_index = 0, .adv_w = 192, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 0, .adv_w = 192, .box_w = 3, .box_h = 15, .ofs_x = 4, .ofs_y = 0},
	{.bitmap_index = 13, .adv_w = 192, .box_w = 6, .box_h = 5, .ofs_x = 3, .ofs_y = 10},
	{.bitmap_index = 26, .adv_w = 192, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 110, .adv_w = 192, .box_w = 10, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
	{.bitmap_index = 193, .adv_w = 192, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 269, .adv_w = 192, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 346, .adv_w = 192, .box_w = 3, .box_h = 5, .ofs_x = 4, .ofs_y = 10},
	{.bitmap_index = 353, .adv_w = 192, .box_w = 6, .box_h = 22, .ofs_x = 3, .ofs_y = -5},
	{.bitmap_index = 413, .adv_w = 192, .box_w = 6, .box_h = 22, .ofs_x = 3, .ofs_y = -5},
	{.bitmap_index = 472, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 5},
	{.bitmap_index = 518, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
	{.bitmap_index = 543, .adv_w = 192, .box_w = 4, .box_h = 6, .ofs_x = 3, .ofs_y = -4},
	{.bitmap_index = 555, .adv_w = 192, .box_w = 8, .box_h = 2, .ofs_x = 2, .ofs_y = 6},
	{.bitmap_index = 561, .adv_w = 192, .box_w = 4, .box_h = 3, .ofs_x = 4, .ofs_y = 0},
	{.bitmap_index = 567, .adv_w = 192, .box_w = 9, .box_h = 16, .ofs_x = 2, .ofs_y = -1},
	{.bitmap_index = 617, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 689, .adv_w = 192, .box_w = 6, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
	{.bitmap_index = 708, .adv_w = 192, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 774, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 841, .adv_w = 192, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 893, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 957, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 1027, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 1078, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 1150, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 1220, .adv_w = 192, .box_w = 4, .box_h = 11, .ofs_x = 5, .ofs_y = 0},
	{.bitmap_index = 1237, .adv_w = 192, .box_w = 5, .box_h = 15, .ofs_x = 4, .ofs_y = -4},
	{.bitmap_index = 1265, .adv_w = 192, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
	{.bitmap_index = 1305, .adv_w = 192, .box_w = 10, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
	{.bitmap_index = 1322, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
	{.bitmap_index = 1365, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 1424, .adv_w = 192, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 1513, .adv_w = 192, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 1585, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 1648, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 1707, .adv_w = 192, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 1765, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 1798, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 1825, .adv_w = 192, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 1895, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 1915, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 1941, .adv_w = 192, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 1975, .adv_w = 192, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 2035, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 2050, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 2101, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 2149, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 2216, .adv_w = 192, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 2262, .adv_w = 192, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
	{.bitmap_index = 2351, .adv_w = 192, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 2412, .adv_w = 192, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 2487, .adv_w = 192, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 2506, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 2545, .adv_w = 192, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 2619, .adv_w = 192, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 2711, .adv_w = 192, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 2789, .adv_w = 192, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 2845, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 2899, .adv_w = 192, .box_w = 5, .box_h = 20, .ofs_x = 4, .ofs_y = -3},
	{.bitmap_index = 2915, .adv_w = 192, .box_w = 8, .box_h = 16, .ofs_x = 2, .ofs_y = -1},
	{.bitmap_index = 2963, .adv_w = 192, .box_w = 5, .box_h = 20, .ofs_x = 3, .ofs_y = -3},
	{.bitmap_index = 2979, .adv_w = 192, .box_w = 8, .box_h = 8, .ofs_x = 2, .ofs_y = 7},
	{.bitmap_index = 3010, .adv_w = 192, .box_w = 10, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
	{.bitmap_index = 3016, .adv_w = 192, .box_w = 4, .box_h = 3, .ofs_x = 4, .ofs_y = 12},
	{.bitmap_index = 3022, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3074, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3125, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3176, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3230, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3280, .adv_w = 192, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3325, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
	{.bitmap_index = 3392, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3424, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3459, .adv_w = 192, .box_w = 7, .box_h = 19, .ofs_x = 2, .ofs_y = -4},
	{.bitmap_index = 3493, .adv_w = 192, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3541, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3566, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 3595, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3623, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3677, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
	{.bitmap_index = 3733, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
	{.bitmap_index = 3786, .adv_w = 192, .box_w = 8, .box_h = 11, .ofs_x = 3, .ofs_y = 0},
	{.bitmap_index = 3806, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3861, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3897, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 3924, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 3976, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
	{.bitmap_index = 4043, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 4098, .adv_w = 192, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
	{.bitmap_index = 4169, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
	{.bitmap_index = 4211, .adv_w = 192, .box_w = 7, .box_h = 20, .ofs_x = 3, .ofs_y = -4},
	{.bitmap_index = 4269, .adv_w = 192, .box_w = 2, .box_h = 19, .ofs_x = 5, .ofs_y = -4},
	{.bitmap_index = 4274, .adv_w = 192, .box_w = 7, .box_h = 20, .ofs_x = 3, .ofs_y = -4},
	{.bitmap_index = 4332, .adv_w = 192, .box_w = 12, .box_h = 4, .ofs_x = 0, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] = {
	{
		.range_start = 32, .range_length = 95, .glyph_id_start = 1,
		.unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
	}
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
	.glyph_bitmap = gylph_bitmap,
	.glyph_dsc = glyph_dsc,
	.cmaps = cmaps,
	.kern_dsc = NULL,
	.kern_scale = 0,
	.cmap_num = 1,
	.bpp = 4,
	.kern_classes = 0,
	.bitmap_format = 1
};

/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t font_3 = {
	.get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
	.get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
	.line_height = 22,          /*The maximum line height required by the font*/
	.base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
	.subpx = LV_FONT_SUBPX_NONE,
#endif
	.dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if FONT_3*/
#endif
