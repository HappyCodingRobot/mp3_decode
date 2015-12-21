/*
 * oled_fonts.c
 *
 *  Created on: Jan 3, 2015
 *      Author: Baoshi
 */
#include "ets_sys.h"
#include "osapi.h"
#include "fonts.h"

extern const font_info_t glcd_5x7_font_info;
extern const font_info_t tahoma_8pt_font_info;
//extern const font_info_t ubuntu_8pt_fontInfo;
//extern const font_info_t arial_11pt_fontInfo;


const font_info_t * fonts[NUM_FONTS] =
{
    &glcd_5x7_font_info,
    &tahoma_8pt_font_info
};

/*
const font_info_t * fonts[NUM_FONTS] =
{
    &glcd_5x7_font_info,
    &tahoma_8pt_font_info,
    &ubuntu_8pt_fontInfo,
    &arial_11pt_fontInfo
};
*/