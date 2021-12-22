/*
 * Font.h
 *
 *  Created on: 17 Sep 2016
 *      Author: Ralim
 *
 *      ... This file contains the font...
 */

#ifndef FONT_H_
#define FONT_H_
#include "Translation.h"

#define FONT_12_WIDTH 12
// THE MAIN FONTS ARE NO LONGER HERE, MOVED TO PYTHON AUTO GEN
// THESE ARE ONLY THE SYMBOL FONTS

const uint8_t ExtraFontChars[] = {
    // width = 12
    // height = 16
    0x00, 0x18, 0x24, 0x24, 0x18, 0xC0, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, // Degrees F
    0x00, 0x18, 0x24, 0x24, 0x18, 0x80, 0x40, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0x10, 0x10, 0x10, 0x00, 0x00, // Degrees C
    0x00, 0x00, 0x20, 0x30, 0x38, 0xFC, 0xFE, 0xFC, 0x38, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, // UP arrow

    0x00, 0xF0, 0x08, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3F, 0x00, // Battery Empty
    0x00, 0xF0, 0x08, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x40, 0x3F, 0x00, // Battery 1*/
    0x00, 0xF0, 0x08, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x40, 0x3F, 0x00, // Battery 2*/
    0x00, 0xF0, 0x08, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x40, 0x3F, 0x00, // Battery 3*/
    0x00, 0xF0, 0x08, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5E, 0x5E, 0x5E, 0x5E, 0x5E, 0x5E, 0x40, 0x3F, 0x00, // Battery 4*/
    0x00, 0xF0, 0x08, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x40, 0x3F, 0x00, // Battery 5*/
    0x00, 0xF0, 0x08, 0x8E, 0x82, 0x82, 0x82, 0x82, 0x8E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x40, 0x3F, 0x00, // Battery 6*/
    0x00, 0xF0, 0x08, 0xCE, 0xC2, 0xC2, 0xC2, 0xC2, 0xCE, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x40, 0x3F, 0x00, // Battery 7*/
    0x00, 0xF0, 0x08, 0xEE, 0xE2, 0xE2, 0xE2, 0xE2, 0xEE, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x40, 0x3F, 0x00, // Battery 8*/
    0x00, 0xF0, 0x08, 0xEE, 0xE2, 0xF2, 0xF2, 0xE2, 0xEE, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x40, 0x3F, 0x00, // Battery 9*/
    0x00, 0xF0, 0x08, 0xEE, 0xE2, 0xFA, 0xFA, 0xE2, 0xEE, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x40, 0x3F, 0x00, // Battery 10*/

    0x00, 0x00, 0x38, 0xC4, 0x00, 0x38, 0xC4, 0x00, 0x38, 0xC4, 0x00, 0x00, 0x00, 0x38, 0x3A, 0x39, 0x38, 0x3A, 0x39, 0x38, 0x3A, 0x39, 0x10, 0x10, // heating
    0x00, 0x60, 0xE0, 0xFE, 0xE0, 0xE0, 0xE0, 0xE0, 0xFE, 0xE0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xFF, 0xFF, 0x03, 0x01, 0x00, 0x00, 0x00, // AC

    0xFC, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x82, 0x62, 0x1A, 0x02, 0xFC, 0x3F, 0x40, 0x42, 0x46, 0x4C, 0x58, 0x46, 0x41, 0x40, 0x40, 0x40, 0x3F, // ☑ (check box on, menu true)
    0xFC, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFC, 0x3F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3F, // ☐ (check box off, menu false)

    /*
     0x00,0x00,0x00,0x80,0x80,0xFE,0xFF,0x83,0x87,0x06,0x00,0x00,0x00,0x00,0x30,0x70,0x60,0x7F,0x3F,0x00,0x00,0x00,0x00,0x00, // Function?
     0x00,0x70,0xFA,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xFF,0xFE,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00, // a_
     0x00,0x3C,0x7E,0xE7,0xC3,0xC3,0xC3,0xC3,0xE7,0x7E,0x3C,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00, // 0_
     0x55,0x00,0xAA,0x00,0x55,0x00,0xAA,0x00,0x55,0x00,0xAA,0x00,0x55,0x00,0xAA,0x00,0x55,0x00,0xAA,0x00,0x55,0x00,0xAA,0x00, // 25%  block
     0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55, // 50% pipe
     0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF, // 75% block
     0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, // | pipe
     0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, // T pipe ,|
     0xC0,0xC0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0xFE,0xFE,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, // ,| double pipe
     0x00,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, //  || double pipe
     0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0xFE,0xFE,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, // #NAME?//#NAME?
     0xC0,0xC0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x07,0x07,0x00,0x00,0x00,0x00,0x00, // ,^ double pupe
     0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, // #NAME?//#NAME?
     0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01, // ,> pipe
     0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01, // _|_ pipe
     0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01, // ,|, pipe
     0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01, // |, pipe
     0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01, // #NAME?//#NAME?
     0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01, // #NAME?//#NAME?
     0x00,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06, // ,> double pipe
     0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0xFF,0xFF,0x00,0xFE,0xFE,0x06,0x06,0x06,0x06,0x06, // ^, double pipe
     0xC0,0xC0,0xFF,0xFF,0x00,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06, // _|_ double pipe
     0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x06,0x06,0xFE,0xFE,0x00,0xFE,0xFE,0x06,0x06,0x06,0x06,0x06, // ,|, double pipe
     0x00,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0xFF,0xFF,0x00,0xFE,0xFE,0x06,0x06,0x06,0x06,0x06, // |, double pipe
     0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06, // == double pipe
     0xC0,0xC0,0xFF,0xFF,0x00,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0x06,0x06,0xFE,0xFE,0x00,0xFE,0xFE,0x06,0x06,0x06,0x06,0x06, // #NAME?//#NAME?
     0x00,0x00,0x00,0x78,0xFC,0xCC,0x8C,0x0C,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x3E,0x33,0x33,0x3F,0x1E,0x00,0x00,0x00, // Delta lowercase
     0x00,0x00,0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 27 (')
     0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00, // ,^ pipe
     0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01, // | , pipe
     0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // solid block
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // half block bottom
     0x00,0x00,0x00,0x00,0x00,0xBF,0xBF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00, // 7C (|)
     0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // top half solid block
     0x00,0x00,0x0C,0xFC,0xFC,0x6C,0x60,0x60,0xE0,0xC0,0x00,0x00,0x00,0x00,0x30,0x3F,0x3F,0x36,0x06,0x06,0x07,0x03,0x00,0x00, // DE small
     0x00,0x00,0x03,0xFF,0xFF,0x1B,0x18,0x18,0xF8,0xF0,0x00,0x00,0x00,0x00,0x30,0x3F,0x3F,0x36,0x06,0x06,0x07,0x03,0x00,0x00, // DE large
     0x00,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ? (,)
     0x00,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00, // =
     0x00,0x00,0x00,0x40,0x80,0x80,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // sideways comma
     0x00,0x00,0x80,0xC0,0x80,0x00,0x00,0x80,0xC0,0x80,0x00,0x00,0x00,0x00,0x01,0x03,0x01,0x00,0x00,0x01,0x03,0x01,0x00,0x00, // ..
     0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x01,0x00,0x00,0x00,0x00, // .
     0x00,0x00,0x02,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // tiny 1
     0x00,0x00,0x00,0x00,0xF0,0xF0,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00, // small block
     */
};

const uint8_t FontSymbols[] = {
    0x00, 0x00, 0x00, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00,
    0x00, // Right block
    0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x00, 0x00,
    0x00, // left block
    0x00, 0x00, 0x00, 0x10, 0x18, 0x1C, 0xFE, 0x1C, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0C, 0x1C, 0x3F, 0x1C, 0x0C, 0x04, 0x00,
    0x00, // UD arrow
    0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0x37, 0x00, 0x00, 0x37, 0x37, 0x00, 0x00,
    0x00, // !!
    0x00, 0x38, 0x7C, 0xC6, 0x82, 0xFE, 0xFE, 0x02, 0xFE, 0xFE, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x00, 0x3F, 0x3F, 0x00,
    0x00, // paragraph
    0x00, 0x00, 0xDC, 0xFE, 0x22, 0x22, 0x22, 0x22, 0xE6, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x08, 0x19, 0x11, 0x11, 0x11, 0x11, 0x1F, 0x0E, 0x00,
    0x00, // section
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38,
    0x00, // cursor
    0x00, 0x00, 0x00, 0x08, 0x0C, 0x0E, 0xFF, 0x0E, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x4C, 0x5C, 0x7F, 0x5C, 0x4C, 0x44, 0x00,
    0x00, // UD arrow
    0x00, 0x00, 0x00, 0x10, 0x18, 0x1C, 0xFE, 0x1C, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00,
    0x00, // UP arrow
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0C, 0x1C, 0x3F, 0x1C, 0x0C, 0x04, 0x00,
    0x00, // Down arrow
    0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x03, 0x01, 0x00,
    0x00, // right arrow
    0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, // left arrow
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00,
    0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x80, 0x80, 0x80, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x01, 0x03, 0x07, 0x00, 0x00, 0x00, 0x07, 0x03, 0x01, 0x00, // LR arrow
    0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x04, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x04, // UP block
    0x00, 0x20, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00  // Down block
};

const uint8_t WarningBlock24[] = {
    // width = 24
    // height = 16
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x30, 0x0C, 0x02, 0xF1, 0xF1, 0xF1, 0x02, 0x0C, 0x30, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0xB0, 0x8C, 0x83, 0x80, 0x80, 0x80, 0x80, 0xB3, 0xB3, 0xB3, 0x80, 0x80, 0x80, 0x80, 0x83, 0x8C, 0xB0, 0xC0, 0x00, 0x00};

#if defined(MODEL_TS100) + defined(MODEL_Pinecil) > 1
const uint8_t idleScreenBG[] = {
    // width = 84
    // height = 16
    0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 0xbd, 0x81, 0x01, 0x01, 0xfd, 0x01, 0x01, 0x71, 0x55, 0x71,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x04, 0x18, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x19, 0x25, 0xc1, 0x01, 0x19, 0x25, 0xc1, 0x01, 0x31, 0x49, 0x81, 0x01, 0x01, 0x02, 0x02, 0x04, 0x18, 0xe0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x83, 0xba, 0x83, 0x80, 0x8e, 0xaa, 0x8e, 0x80, 0x80, 0xbf, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x20, 0x18, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x44, 0x4c, 0x94, 0x8c, 0x94, 0x8c, 0x9c, 0x80,
    0x9c, 0x8a, 0xa6, 0x8a, 0xa6, 0x8e, 0xa6, 0x8e, 0xae, 0x9c, 0x80, 0x9d, 0x8c, 0x94, 0x88, 0x8a, 0x89, 0x80, 0x80, 0x40, 0x40, 0x20, 0x18, 0x07, 0x00, 0x00, 0x00, 0x00};
const uint8_t disconnectedTipIcon[] = {
    //
    // 41 x 16
    0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x40, 0xc0, 0x40, 0x80, 0x00, 0x8c, 0x9c, 0x38, 0x70, 0xe0, 0xc0, 0x80, 0x20, 0x70,
    0x38, 0x9c, 0x8c, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0xe0, 0x60, 0xe0, 0x00, 0x00, 0x01, 0x01, 0x01, 0x02, 0x01, 0x03, 0x00, 0x03, 0x05, 0x01, 0x04, 0x01, 0x04, 0x01,
    0x04, 0x01, 0x03, 0x00, 0x33, 0x39, 0x1c, 0x0e, 0x04, 0x01, 0x03, 0x07, 0x0e, 0x1c, 0x38, 0x33, 0x00, 0x03, 0x02, 0x01, 0x04, 0x01, 0x0a, 0x01, 0x0f, 0x00};
const uint8_t disconnectedTipIconFlip[] = {
    //
    // 41 x 16
    0x00, 0xe0, 0x60, 0xe0, 0x40, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x8c, 0x9c, 0x38, 0x70, 0x20, 0x80, 0xc0, 0xe0, 0x70, 0x38, 0x9c, 0x8c, 0x00, 0x80, 0x40, 0xc0, 0x40, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x0a, 0x01, 0x04, 0x01, 0x02, 0x03, 0x00, 0x33, 0x38, 0x1c, 0x0e, 0x07,
    0x03, 0x01, 0x04, 0x0e, 0x1c, 0x39, 0x33, 0x00, 0x03, 0x01, 0x04, 0x01, 0x04, 0x01, 0x04, 0x01, 0x05, 0x03, 0x00, 0x03, 0x01, 0x02, 0x01, 0x01, 0x01, 0x00};
#endif

#ifdef MODEL_MHP30
const uint8_t idleScreenBG[] = {
    // width = 84
    // height = 16
    0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 0xbd, 0x81, 0x01, 0x01, 0xfd, 0x01, 0x01, 0x71, 0x55, 0x71,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x04, 0x18, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x19, 0x25, 0xc1, 0x01, 0x19, 0x25, 0xc1, 0x01, 0x31, 0x49, 0x81, 0x01, 0x01, 0x02, 0x02, 0x04, 0x18, 0xe0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x83, 0xba, 0x83, 0x80, 0x8e, 0xaa, 0x8e, 0x80, 0x80, 0xbf, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x20, 0x18, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x44, 0x4c, 0x94, 0x8c, 0x94, 0x8c, 0x9c, 0x80,
    0x9c, 0x8a, 0xa6, 0x8a, 0xa6, 0x8e, 0xa6, 0x8e, 0xae, 0x9c, 0x80, 0x9d, 0x8c, 0x94, 0x88, 0x8a, 0x89, 0x80, 0x80, 0x40, 0x40, 0x20, 0x18, 0x07, 0x00, 0x00, 0x00, 0x00};
const uint8_t disconnectedTipIcon[] = {
    //
    // 41 x 16
    0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x40, 0xc0, 0x40, 0x80, 0x00, 0x8c, 0x9c, 0x38, 0x70, 0xe0, 0xc0, 0x80, 0x20, 0x70,
    0x38, 0x9c, 0x8c, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0xe0, 0x60, 0xe0, 0x00, 0x00, 0x01, 0x01, 0x01, 0x02, 0x01, 0x03, 0x00, 0x03, 0x05, 0x01, 0x04, 0x01, 0x04, 0x01,
    0x04, 0x01, 0x03, 0x00, 0x33, 0x39, 0x1c, 0x0e, 0x04, 0x01, 0x03, 0x07, 0x0e, 0x1c, 0x38, 0x33, 0x00, 0x03, 0x02, 0x01, 0x04, 0x01, 0x0a, 0x01, 0x0f, 0x00};
const uint8_t disconnectedTipIconFlip[] = {
    //
    // 41 x 16
    0x00, 0xe0, 0x60, 0xe0, 0x40, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x8c, 0x9c, 0x38, 0x70, 0x20, 0x80, 0xc0, 0xe0, 0x70, 0x38, 0x9c, 0x8c, 0x00, 0x80, 0x40, 0xc0, 0x40, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x0a, 0x01, 0x04, 0x01, 0x02, 0x03, 0x00, 0x33, 0x38, 0x1c, 0x0e, 0x07,
    0x03, 0x01, 0x04, 0x0e, 0x1c, 0x39, 0x33, 0x00, 0x03, 0x01, 0x04, 0x01, 0x04, 0x01, 0x04, 0x01, 0x05, 0x03, 0x00, 0x03, 0x01, 0x02, 0x01, 0x01, 0x01, 0x00};
#endif

#if defined(MODEL_TS80) + defined(MODEL_TS80P) > 1
const uint8_t idleScreenBG[] = {
    // width = 84
    // height = 16
    0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 0xbd, 0x81, 0x01, 0x01, 0xfd, 0x01, 0x01, 0x71, 0x55, 0x71,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x04, 0x18, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x19, 0x25, 0xc1, 0x01, 0x19, 0x25, 0xc1, 0x01, 0x31, 0x49, 0x81, 0x01, 0x01, 0x02, 0x02, 0x04, 0x18, 0xe0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x83, 0xba, 0x83, 0x80, 0x8e, 0xaa, 0x8e, 0x80, 0x80, 0xbf, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x20, 0x18, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x44, 0x4c, 0x94, 0x8c, 0x94, 0x8c, 0x9c, 0x80,
    0x9c, 0x8a, 0xa6, 0x8a, 0xa6, 0x8e, 0xa6, 0x8e, 0xae, 0x9c, 0x80, 0x9d, 0x8c, 0x94, 0x88, 0x8a, 0x89, 0x80, 0x80, 0x40, 0x40, 0x20, 0x18, 0x07, 0x00, 0x00, 0x00, 0x00};
const uint8_t disconnectedTipIcon[] = {
    //
    // 41 x 16
    0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x40, 0xc0, 0x40, 0x80, 0x00, 0x8c, 0x9c, 0x38, 0x70, 0xe0, 0xc0, 0x80, 0x20, 0x70,
    0x38, 0x9c, 0x8c, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0xe0, 0x60, 0xe0, 0x00, 0x00, 0x01, 0x01, 0x01, 0x02, 0x01, 0x03, 0x00, 0x03, 0x05, 0x01, 0x04, 0x01, 0x04, 0x01,
    0x04, 0x01, 0x03, 0x00, 0x33, 0x39, 0x1c, 0x0e, 0x04, 0x01, 0x03, 0x07, 0x0e, 0x1c, 0x38, 0x33, 0x00, 0x03, 0x02, 0x01, 0x04, 0x01, 0x0a, 0x01, 0x0f, 0x00};
const uint8_t disconnectedTipIconFlip[] = {
    //
    // 41 x 16
    0x00, 0xe0, 0x60, 0xe0, 0x40, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x8c, 0x9c, 0x38, 0x70, 0x20, 0x80, 0xc0, 0xe0, 0x70, 0x38, 0x9c, 0x8c, 0x00, 0x80, 0x40, 0xc0, 0x40, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x0a, 0x01, 0x04, 0x01, 0x02, 0x03, 0x00, 0x33, 0x38, 0x1c, 0x0e, 0x07,
    0x03, 0x01, 0x04, 0x0e, 0x1c, 0x39, 0x33, 0x00, 0x03, 0x01, 0x04, 0x01, 0x04, 0x01, 0x04, 0x01, 0x05, 0x03, 0x00, 0x03, 0x01, 0x02, 0x01, 0x01, 0x01, 0x00};
#endif

// 16 x 16
const uint8_t brightnessIcon[]
    = {0x80, 0x86, 0x8E, 0x9C, 0x18, 0xC0, 0xE0, 0xEF, 0xEF, 0xE0, 0xC0, 0x18, 0x9C, 0x8E, 0x86, 0x80, 0x01, 0x61, 0x71, 0x39, 0x18, 0x03, 0x07, 0xF7, 0xF7, 0x07, 0x03, 0x18, 0x39, 0x71, 0x61, 0x01};

// 24 x 16
const uint8_t invertDisplayIcon[] = {0xFE, 0x01, 0x79, 0x25, 0x79, 0x01, 0xFE, 0x00, 0x20, 0x20, 0x20, 0x20, 0xDF, 0x07, 0x8F, 0xDF, 0xFF, 0x01, 0xFE, 0x86, 0xDA, 0x86, 0xFE, 0x01,
                                     0x7F, 0x80, 0xA4, 0xBE, 0xA0, 0x80, 0x7F, 0x00, 0x04, 0x0E, 0x1F, 0x04, 0xFB, 0xFB, 0xFB, 0xFB, 0xFF, 0x80, 0x7F, 0x5B, 0x41, 0x5F, 0x7F, 0x80};

/*
 * 16x16 icons
 * 32 * 3 = Frame size * Frame count
 * */
const uint8_t SettingsMenuIcons[][32 * 3] = {

    // Power
    // 3 frames
    // width = 16
    // height = 16
    {
        // Power 1 frame
        // width = 16
        // height = 16
        0x00,
        0x00,
        0xfe,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x04,
        0x17,
        0x0f,
        0x05,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x1c,
        0x55,
        0x1c,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,

        // Power 2 frame
        // width = 16
        // height = 16
        0x00,
        0x00,
        0x7e,
        0x00,
        0x00,
        0x00,
        0x00,
        0x10,
        0x1c,
        0xdf,
        0x77,
        0x33,
        0x11,
        0x00,
        0x00,
        0x00,
        0x00,
        0x07,
        0x75,
        0x07,
        0x00,
        0x00,
        0x00,
        0x00,
        0x01,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,

        // Power final frame
        // width = 16
        // height = 16
        0x00,
        0x38,
        0xaa,
        0x38,
        0x00,
        0x20,
        0x30,
        0x3c,
        0xff,
        0xff,
        0xff,
        0x77,
        0x33,
        0x13,
        0x01,
        0x00,
        0x00,
        0x00,
        0x7f,
        0x00,
        0x00,
        0x00,
        0x42,
        0x33,
        0x1f,
        0x0f,
        0x06,
        0x02,
        0x00,
        0x00,
        0x00,
        0x00,
    },

    // Soldering
    // 3 frames
    // width = 16
    // height = 16
    {
        // Soldering 1 frame
        // width = 16
        // height = 16
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x80,
        0x40,
        0xE0,
        0x50,
        0x28,
        0x14,
        0x0A,
        0x06,
        0x00,
        0x00,
        0x40,
        0x20,
        0x10,
        0x08,
        0x04,
        0x03,
        0x02,
        0x01,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,

        // Soldering 2 frame
        // width = 16
        // height = 16
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x80,
        0x40,
        0xE0,
        0x50,
        0x28,
        0x14,
        0x0A,
        0x06,
        0x00,
        0x00,
        0x48,
        0x26,
        0x10,
        0x08,
        0x04,
        0x03,
        0x02,
        0x01,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,

        // Soldering final frame
        // width = 16
        // height = 16
        0x00,
        0x80,
        0x40,
        0x00,
        0x00,
        0x00,
        0x00,
        0x80,
        0x40,
        0xE0,
        0x50,
        0x28,
        0x14,
        0x0A,
        0x06,
        0x00,
        0x00,
        0x49,
        0x26,
        0x10,
        0x08,
        0x04,
        0x03,
        0x02,
        0x01,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
    },

    // Sleep
    // 3 frames
    // width = 16
    // height = 16
    {
        // Sleep 1 frame
        // width = 16
        // height = 16
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x44,
        0x64,
        0x74,
        0x5C,
        0x4C,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,

        // Sleep 2 frame
        // width = 16
        // height = 16
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x40,
        0x40,
        0xC0,
        0xC0,
        0xC0,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x44,
        0x64,
        0x74,
        0x5C,
        0x4C,
        0x00,
        0x06,
        0x07,
        0x07,
        0x05,
        0x04,
        0x00,

        // Sleep final frame
        // width = 16
        // height = 16
        0x00,
        0xC6,
        0xE6,
        0xF6,
        0xBE,
        0x9E,
        0x8E,
        0x86,
        0x00,
        0x00,
        0x40,
        0x40,
        0xC0,
        0xC0,
        0xC0,
        0x00,
        0x00,
        0x01,
        0x01,
        0x01,
        0x45,
        0x65,
        0x75,
        0x5D,
        0x4C,
        0x00,
        0x06,
        0x07,
        0x07,
        0x05,
        0x04,
        0x00,
    },

    // UI
    // 3 frames
    // width = 16
    // height = 16
    {
        // UI 1 frame
        // width = 16
        // height = 16
        0x00,
        0x80,
        0x06,
        0x06,
        0x06,
        0x06,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x00,
        0x00,
        0x00,
        0x60,
        0x60,
        0x00,
        0x00,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x00,

        // UI 2 frame
        // width = 16
        // height = 16
        0x00,
        0x80,
        0x06,
        0x06,
        0x06,
        0x06,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x00,
        0x00,
        0x00,
        0x61,
        0x60,
        0x00,
        0x00,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x00,

        // UI final frame
        // width = 16
        // height = 16
        0x00,
        0x80,
        0x06,
        0x86,
        0x46,
        0x06,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x86,
        0x00,
        0x00,
        0x00,
        0x61,
        0x60,
        0x00,
        0x00,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x61,
        0x00,
    },

    // Advanced
    // 3 frames
    /// width = 16
    // height = 16
    {
        // Advanced 1 frame
        /// width = 16
        // height = 16
        0x00,
        0xfe,
        0x00,
        0x00,
        0x00,
        0xfe,
        0x00,
        0x00,
        0x0c,
        0x00,
        0x14,
        0x00,
        0x18,
        0x00,
        0x14,
        0x00,
        0x1c,
        0x55,
        0x1c,
        0x00,
        0x1c,
        0x55,
        0x1c,
        0x00,
        0x00,
        0x1c,
        0x22,
        0x41,
        0x49,
        0x11,
        0x22,
        0x0c,

        // Advanced 2 frame
        /// width = 16
        // height = 16
        0xe0,
        0xae,
        0xe0,
        0x00,
        0x80,
        0xbe,
        0x80,
        0x00,
        0x08,
        0x00,
        0x04,
        0x00,
        0x1c,
        0x00,
        0x08,
        0x00,
        0x00,
        0x7e,
        0x00,
        0x00,
        0x03,
        0x7a,
        0x03,
        0x00,
        0x00,
        0x1c,
        0x22,
        0x01,
        0x79,
        0x01,
        0x22,
        0x1c,

        // Advanced final frame
        /// width = 16
        // height = 16
        0x00,
        0x7e,
        0x00,
        0x00,
        0x38,
        0xaa,
        0x38,
        0x00,
        0x04,
        0x00,
        0x0c,
        0x00,
        0x10,
        0x00,
        0x1c,
        0x00,
        0x07,
        0x75,
        0x07,
        0x00,
        0x00,
        0x7f,
        0x00,
        0x00,
        0x00,
        0x0c,
        0x22,
        0x11,
        0x49,
        0x41,
        0x22,
        0x1c,
    },
#ifdef NOTUSED

    // Calibration (Not used, kept for future menu layouts)
    // 3 frames
    // width = 16
    // height = 16
    {
        // Calibration 1 frame (Not used, kept for future menu layouts)
        // width = 16
        // height = 16
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x80,
        0xC0,
        0xE0,
        0x70,
        0x3A,
        0x1E,
        0x0E,
        0x1C,
        0x30,
        0x00,
        0x00,
        0x10,
        0x3A,
        0x1C,
        0x1E,
        0x17,
        0x23,
        0x01,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,

        // Calibration 2 frame (Not used, kept for future menu layouts)
        // width = 16
        // height = 16
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x40,
        0x80,
        0xC0,
        0xE0,
        0x70,
        0x3A,
        0x1E,
        0x0E,
        0x1C,
        0x30,
        0x00,
        0x00,
        0x10,
        0x38,
        0x1C,
        0x0E,
        0x07,
        0x03,
        0x03,
        0x02,
        0x04,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,

        // Calibration final frame (Not used, kept for future menu layouts)
        // width = 16
        // height = 16
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x80,
        0xC0,
        0xE8,
        0x70,
        0x7A,
        0x5E,
        0x8E,
        0x1C,
        0x30,
        0x00,
        0x00,
        0x10,
        0x38,
        0x1C,
        0x0E,
        0x07,
        0x03,
        0x01,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
    }
#endif
};

#endif /* FONT_H_ */
