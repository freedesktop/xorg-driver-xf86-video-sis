/* $XFree86: xc/programs/Xserver/hw/xfree86/drivers/sis/oem310.h,v 1.18 2003/10/30 18:53:42 twini Exp $ */
/*
 * OEM Data for 315/330 series
 *
 * Copyright 2002, 2003 by Thomas Winischhofer, Vienna, Austria
 *
 * If distributed as part of the linux kernel, the contents of this file
 * is entirely covered by the GPL.
 *
 * Otherwise, the following terms apply:
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of the copyright holder not be used in
 * advertising or publicity pertaining to distribution of the software without
 * specific, written prior permission.  The copyright holder makes no representations
 * about the suitability of this software for any purpose.  It is provided
 * "as is" without express or implied warranty.
 *
 * THE COPYRIGHT HOLDER DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
 * EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 *
 * Author: 	Thomas Winischhofer <thomas@winischhofer.net>
 *
 * Based on code by Silicon Intergrated Systems 
 *
 */

static const UCHAR SiS310_LCDDelayCompensation_301[] =	    		/* 301 */
{
		 0x00,0x00,0x00,    /*   800x600 */
		 0x0b,0x0b,0x0b,    /*  1024x768 */
		 0x08,0x08,0x08,    /* 1280x1024 */
		 0x00,0x00,0x00,    /*   640x480 (unknown) */
		 0x00,0x00,0x00,    /*  1024x600 (unknown) */
		 0x00,0x00,0x00,    /*  1152x864 (unknown) */
		 0x08,0x08,0x08,    /*  1280x960 (guessed) */
		 0x00,0x00,0x00,    /*  1152x768 (unknown) */
		 0x08,0x08,0x08,    /* 1400x1050 */
		 0x08,0x08,0x08,    /*  1280x768  (guessed) */
		 0x00,0x00,0x00,    /* 1600x1200 */
		 0x00,0x00,0x00,    /*   320x480 (unknown) */
		 0x00,0x00,0x00,
		 0x00,0x00,0x00,
		 0x00,0x00,0x00
};

/* This is contained in 650+301B BIOSes, but it is wrong - so we don't use it */
static const UCHAR SiS310_LCDDelayCompensation_650301B[] =	   	/* 30xB,LV */
{
		 0x01,0x01,0x01,    /*   800x600 */
		 0x01,0x01,0x01,    /*  1024x768 */
		 0x01,0x01,0x01,    /* 1280x1024 */
                 0x01,0x01,0x01,    /*   640x480 (unknown) */
		 0x01,0x01,0x01,    /*  1024x600 (unknown) */
		 0x01,0x01,0x01,    /*  1152x864 (unknown) */
		 0x01,0x01,0x01,    /*  1280x960 (guessed) */
		 0x01,0x01,0x01,    /*  1152x768 (unknown) */
		 0x01,0x01,0x01,    /* 1400x1050 */
		 0x01,0x01,0x01,    /*  1280x768  (guessed) */
		 0x01,0x01,0x01,    /* 1600x1200 */
		 0x02,0x02,0x02,
		 0x02,0x02,0x02,
		 0x02,0x02,0x02,
		 0x02,0x02,0x02
};

/* This data is correct, so we use it instead of the table above */
static const UCHAR SiS310_LCDDelayCompensation_3xx301B[] =	   	/* 30xB,LV */
{
		 0x01,0x01,0x01,    /*   800x600 */
		 0x0C,0x0C,0x0C,    /*  1024x768 */
		 0x0C,0x0C,0x0C,    /* 1280x1024 */
                 0x08,0x08,0x08,    /*   640x480 */
		 0x0C,0x0C,0x0C,    /*  1024x600 (guessed) */
		 0x0C,0x0C,0x0C,    /*  1152x864 (guessed) */
		 0x0C,0x0C,0x0C,    /*  1280x960 (guessed) */
		 0x0C,0x0C,0x0C,    /*  1152x768 (guessed) */
		 0x0C,0x0C,0x0C,    /* 1400x1050 (guessed) */
		 0x0C,0x0C,0x0C,    /*  1280x768 (guessed) */
		 0x0C,0x0C,0x0C,    /* 1600x1200 (guessed) */
		 0x02,0x02,0x02,
		 0x02,0x02,0x02,
		 0x02,0x02,0x02,
		 0x02,0x02,0x02
};

static const UCHAR SiS310_LCDDelayCompensation_LVDS650[] =   	/* LVDS */
{
                 0x00,0x00,0x00,    /*   800x600 */
		 0x00,0x00,0x00,    /*  1024x768 */
		 0x00,0x00,0x00,    /* 1280x1024 */
		 0x00,0x00,0x00,    /*   640x480 (unknown) */
		 0x00,0x00,0x00,    /*  1024x600 (unknown) */
		 0x00,0x00,0x00,    /*  1152x864 (unknown) */
		 0x00,0x00,0x00,    /*  1280x960 (guessed) */
		 0x00,0x00,0x00,    /*  1152x768 (unknown) */
		 0x00,0x00,0x00,    /* 1400x1050 */
		 0x00,0x00,0x00,    /*  1280x768  (guessed) */
		 0x00,0x00,0x00,    /* 1600x1200 */
		 0x00,0x00,0x00,
		 0x00,0x00,0x00,
		 0x00,0x00,0x00,
		 0x00,0x00,0x00
};

static const UCHAR SiS310_LCDDelayCompensation_LVDS740[] =   	/* LVDS */
{
                 0x03,0x03,0x03,    /*   800x600 */
		 0x03,0x03,0x03,    /*  1024x768 */
		 0x03,0x03,0x03,    /* 1280x1024 */
		 0x03,0x03,0x03,    /*   640x480 (unknown) */
		 0x03,0x03,0x03,    /*  1024x600 (unknown) */
		 0x03,0x03,0x03,    /*  1152x864 (unknown) */
		 0x03,0x03,0x03,    /*  1280x960 (guessed) */
		 0x03,0x03,0x03,    /*  1152x768 (unknown) */
		 0x03,0x03,0x03,    /* 1400x1050 */
		 0x03,0x03,0x03,    /*  1280x768  (guessed) */
		 0x03,0x03,0x03,    /* 1600x1200 */
		 0x00,0x00,0x00,
		 0x00,0x00,0x00,
		 0x00,0x00,0x00,
		 0x00,0x00,0x00
};

static const UCHAR SiS310_LCDDelayCompensation_651301LV[] =	  /* M650/651 301LV */
{
                 0x33,0x33,0x33,    /*   800x600 (guessed) - new: PanelType, not PanelRes ! */
		 0x33,0x33,0x33,    /*  1024x768 */
		 0x33,0x33,0x33,    /* 1280x1024 */
		 0x33,0x33,0x33,    /*   640x480 (unknown) */
		 0x33,0x33,0x33,    /*  1024x600 (unknown) */
		 0x33,0x33,0x33,    /*  1152x864 (unknown) */
		 0x33,0x33,0x33,    /*  1280x960 (guessed) */
		 0x33,0x33,0x33,    /*  1152x768 (unknown) */
		 0x33,0x33,0x33,    /* 1400x1050 */
		 0x33,0x33,0x33,    /*  1280x768  (guessed) */
		 0x33,0x33,0x33,    /* 1600x1200 */
		 0x33,0x33,0x33,
		 0x33,0x33,0x33,
		 0x33,0x33,0x33,
		 0x33,0x33,0x33
};

static const UCHAR SiS310_LCDDelayCompensation_651302LV[] =	   /* M650/651 302LV */
{
                 0x33,0x33,0x33,    /*   800x600 (guessed) */
		 0x33,0x33,0x33,    /*  1024x768 */
		 0x33,0x33,0x33,    /* 1280x1024 */
		 0x33,0x33,0x33,    /*   640x480 (unknown) */
		 0x33,0x33,0x33,    /*  1024x600 (unknown) */
		 0x33,0x33,0x33,    /*  1152x864 (unknown) */
		 0x33,0x33,0x33,    /*  1280x960 (guessed) */
		 0x33,0x33,0x33,    /*  1152x768 (unknown) */
		 0x33,0x33,0x33,    /* 1400x1050 */
		 0x33,0x33,0x33,    /*  1280x768  (guessed) */
		 0x33,0x33,0x33,    /* 1600x1200 */
		 0x33,0x33,0x33,
		 0x33,0x33,0x33,
		 0x33,0x33,0x33,
		 0x33,0x33,0x33
};

static const UCHAR SiS310_TVDelayCompensation_301[] = 		/* 301 */
{
		 0x02,0x02,    /* NTSC Enhanced, Standard */
                 0x02,0x02,    /* PAL */
		 0x08,0x0b     /* HiVision */
};

static const UCHAR SiS310_TVDelayCompensation_301B[] =		/* 30xB, 30xLV */
{
		 0x03,0x03,
		 0x03,0x03,
		 0x03,0x03
};

static const UCHAR SiS310_TVDelayCompensation_740301B[] =	/* 740 + 30xB (30xLV?) */
{
		 0x05,0x05,
		 0x05,0x05,
		 0x05,0x05
};

static const UCHAR SiS310_TVDelayCompensation_LVDS[] =		/* LVDS */
{
		 0x0a,0x0a,
		 0x0a,0x0a,
		 0x0a,0x0a
};

static const UCHAR SiS310_TVDelayCompensation_651301LV[] =	/* M650, 651, 301LV */
{
		 0x33,0x33,
		 0x33,0x33,
		 0x33,0x33
};

static const UCHAR SiS310_TVDelayCompensation_651302LV[] =	/* M650, 651, 302LV */
{
		 0x33,0x33,
		 0x33,0x33,
		 0x33,0x33
};

static const UCHAR SiS_TVDelay661_301[] =			/* 661, 301 */
{
		 0x44,0x44,
		 0x44,0x44,
		 0x00,0x00,
		 0x44,0x44,
		 0x44,0x44,
		 0x44,0x44
};

static const UCHAR SiS_TVDelay661_301B[] =			/* 661, 301B et al */
{
		 0x44,0x44,
		 0x44,0x44,
		 0x00,0x00,
		 0x44,0x44,
		 0x44,0x44,
		 0x44,0x44
};

static const UCHAR SiS310_TVAntiFlick1[3][2] =
{
            {0x4,0x0},
	    {0x4,0x8},
	    {0x0,0x0}
};

static const UCHAR SiS310_TVEdge1[3][2] =
{
            {0x0,0x4},
	    {0x0,0x4},
	    {0x0,0x0}
};

static const UCHAR SiS310_TVYFilter1[5][8][4] =
{
 {
	{0x00,0xf4,0x10,0x38},	/* NTSC */
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x25,0x18},
	{0xf1,0x04,0x1f,0x18},
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x25,0x18},
	{0xee,0x0c,0x22,0x08},
	{0xeb,0x15,0x25,0xf6}
 },
 {
	{0x00,0xf4,0x10,0x38},	/* PAL */
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x1f,0x32},
	{0xf3,0x00,0x1d,0x20},
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x1f,0x32},
	{0xf3,0x00,0x1d,0x20},
	{0xfc,0xfb,0x14,0x2a}
 },
 {
	{0x00,0x00,0x00,0x00},	/* HiVision */
	{0x00,0xf4,0x10,0x38},
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x25,0x18},
	{0xf7,0x06,0x19,0x14},
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x25,0x18},
	{0xee,0x0c,0x22,0x08}
 },
 {
 	{0x00,0xf4,0x10,0x38},	/* PAL-M */
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x10,0x18},
	{0xf7,0x06,0x19,0x14},
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x15,0x25,0xf6}
 },
 {
 	{0x00,0xf4,0x10,0x38},	/* PAL-N */
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x10,0x18},
	{0xf7,0x06,0x19,0x14},
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x15,0x25,0xf6}
 }
};

static const UCHAR SiS310_TVYFilter2[5][9][7] =
{
 {
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},	/* NTSC */
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
 },
 {
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},   /* PAL */
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
 },
 {
	{0x00,0x00,0x00,0xF4,0xFF,0x1C,0x22},	/* HiVision */
	{0x00,0x00,0x00,0xF4,0xFF,0x1C,0x22},
	{0x00,0x00,0x00,0xF4,0xFF,0x1C,0x22},
	{0x00,0x00,0x00,0xF4,0xFF,0x1C,0x22},
	{0x00,0x00,0x00,0xF4,0xFF,0x1C,0x22},
	{0x00,0x00,0x00,0xF4,0xFF,0x1C,0x22},
	{0x00,0x00,0x00,0xF4,0xFF,0x1C,0x22},
	{0x00,0x00,0x00,0xF4,0xFF,0x1C,0x22},
	{0x00,0x00,0x00,0xF4,0xFF,0x1C,0x22}
 },
 {
 	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46}, 	/* PAL-M */
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
 },
 {
 	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},	/* PAL-N */
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
 }
};

static const UCHAR SiS310_TVPhaseIncr1[3][2][4] =
{
 {
	{0x21,0xed,0xba,0x08},
	{0x21,0xed,0xba,0x08}
 },
 {
	{0x2a,0x05,0xe3,0x00},
	{0x2a,0x05,0xe3,0x00}
 },
 {
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
 }
};

static const UCHAR SiS310_TVPhaseIncr2[3][2][4] =
{
 {
	{0x21,0xf0,0x7b,0xd6},
	{0x21,0xf0,0x7b,0xd6}
 },
 {
	{0x2a,0x0a,0x41,0xe9},
	{0x2a,0x0a,0x41,0xe9}  
 },
 {
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
 }
};

static const UCHAR SiS661_TVPhase[] = {
    0x21,0xED,0xBA,0x08,
    0x2A,0x05,0xE3,0x00,
    0x21,0xE4,0x2E,0x9B,
    0x21,0xF4,0x3E,0xBA,
    0x1E,0x8B,0xA2,0xA7,
    0x1E,0x83,0x0A,0xE0,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x21,0xF0,0x7B,0xD6,
    0x2A,0x09,0x86,0xE9,
    0x21,0xE6,0xEF,0xA4,
    0x21,0xF6,0x94,0x46,
    0x1E,0x8B,0xA2,0xA7,
    0x1E,0x83,0x0A,0xE0,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 
};

/**************************************************************/
/* CUSTOM TIMING DATA --------------------------------------- */
/**************************************************************/

/* Inventec / Compaq Presario 3045US, 3017 */

static const SiS_LCDDataStruct  SiS310_ExtCompaq1280x1024Data[] =
{
	{  211,  60,1024, 501,1688,1066},
	{  211,  60,1024, 508,1688,1066},
	{  211,  60,1024, 501,1688,1066},
	{  211,  60,1024, 508,1688,1066},
	{   32,  15,1696, 501,1696,1066},
	{  212,  75,1024, 621,1696,1066},
	{    4,   3,1696, 810,1696,1066},
	{    1,   1,1696,1066,1696,1066}
};

static const SiS_Part2PortTblStruct SiS310_CRT2Part2_Compaq1280x1024_1[] =
{
 {{0x3F,0x1B,0xD0,0xF0,0xB0,0xB8,0x23,0x0A,0x07,0x14,0x8A,0x12}},
 {{0x35,0x1B,0xA0,0xC0,0x80,0xB8,0x23,0x0A,0x07,0x14,0x8A,0x12}},
 {{0x3F,0x1B,0xD0,0xF0,0xB0,0xB8,0x23,0x0A,0x07,0x14,0x8A,0x12}},
 {{0x3F,0x1B,0xD0,0xF0,0xB0,0xB8,0x23,0x0A,0x07,0x14,0x8A,0x12}},
 {{0x45,0x1C,0x20,0x3F,0xFF,0xB8,0x23,0x0A,0x07,0x14,0x8A,0x12}},
 {{0x49,0x1C,0x40,0x7F,0xFF,0xAD,0x23,0x0A,0x07,0xF3,0x8A,0x12}},
 {{0x4C,0x1C,0x18,0x2F,0xFF,0xBD,0x23,0x0A,0x07,0x23,0x8A,0x12}},
 {{0x48,0x1C,0x15,0x29,0xFF,0xBD,0x23,0x0A,0x07,0x23,0x8A,0x12}}
};

static const SiS_Part2PortTblStruct SiS310_CRT2Part2_Compaq1280x1024_2[] =
{
 {{0x2B,0x12,0xD9,0xE5,0xD5,0x2C,0x23,0x98,0x27,0x3E,0x08,0x42}},
 {{0x22,0x12,0xC0,0xCC,0xBC,0x2C,0x23,0x98,0x27,0x3E,0x08,0x42}},
 {{0x2B,0x12,0xD9,0xE5,0xD5,0x2C,0x23,0x98,0x27,0x3E,0x08,0x42}},
 {{0x22,0x12,0xC0,0xCC,0xBC,0x2C,0x23,0x98,0x27,0x3E,0x08,0x42}},
 {{0x33,0x13,0x01,0x0D,0xFD,0x2C,0x23,0x98,0x27,0x3E,0x08,0x42}},
 {{0x3F,0x1B,0x3D,0x49,0x39,0x54,0x23,0xC0,0x27,0x66,0x30,0x42}},
 {{0x33,0x1B,0x91,0x9D,0x8D,0x8C,0x23,0xF8,0x27,0x9E,0x68,0x42}},
 {{0x43,0x24,0x11,0x1D,0x0D,0xCC,0x23,0x38,0x37,0xDE,0xA8,0x42}},
 {{0x43,0x24,0x21,0x29,0x19,0xEA,0x23,0x0A,0x07,0x32,0xC6,0x42}}
};

static const SiS_Part2PortTblStruct SiS310_CRT2Part2_Compaq1280x1024_3[] =
{
 {{0x47,0x1C,0x14,0x29,0xFF,0xBD,0x23,0x0A,0x07,0x23,0x8A,0x12}},
 {{0x47,0x1C,0x14,0x29,0xFF,0xBD,0x23,0x0A,0x07,0x23,0x8A,0x12}},
 {{0x47,0x1C,0x14,0x29,0xFF,0xBD,0x23,0x0A,0x07,0x23,0x8A,0x12}},
 {{0x47,0x1C,0x14,0x29,0xFF,0xBD,0x23,0x0A,0x07,0x23,0x8A,0x12}},
 {{0x47,0x1C,0x14,0x29,0xFF,0xBE,0x23,0x0A,0x07,0x26,0x8A,0x42}},
 {{0x47,0x1C,0x14,0x29,0xFF,0xBE,0x23,0x0A,0x07,0x26,0x8A,0x42}},
 {{0x47,0x1C,0x14,0x29,0xFF,0xBE,0x23,0x0A,0x07,0x26,0x8A,0x42}},
 {{0x47,0x1C,0x14,0x29,0xFF,0xBE,0x23,0x0A,0x07,0x26,0x8A,0x42}}
};

/* LCDA CRT2 data is std */

static const SiS_LVDSDesStruct Compaq1280x1024Des_1[] =
{
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 }
};

static const SiS_LVDSDesStruct Compaq1280x1024Des_2[] =
{
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 }
};

/* Clevo L285/287 (dual-link 1024x768) */

static const SiS_Part2PortTblStruct SiS310_CRT2Part2_Clevo1024x768_1[] =
{
 {{0x25,0x12,0xC9,0xDC,0xB6,0x59,0x45,0x09,0x07,0xF9,0x09,0x24}},
 {{0x2C,0x12,0x9A,0xAE,0x88,0x59,0x45,0x09,0x07,0xF9,0x09,0x24}},
 {{0x25,0x12,0xC9,0xDC,0xB6,0x59,0x45,0x09,0x07,0xF9,0x09,0x24}},
 {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
 {{0x38,0x13,0x16,0x0C,0xE6,0x59,0x45,0x09,0x07,0xF9,0x09,0x24}},
 {{0x38,0x18,0x16,0x00,0x00,0x59,0x45,0x09,0x07,0xF9,0x09,0x24}},
 {{0x36,0x13,0x13,0x25,0xFF,0x59,0x45,0x09,0x07,0xF9,0x09,0x24}},
 {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
 {{0x25,0x12,0xC9,0xDC,0xB6,0x59,0x45,0x09,0x07,0xF9,0x09,0x24}}
};

static const SiS_Part2PortTblStruct SiS310_CRT2Part2_Clevo1024x768_2[] =
{
 {{0x25,0x12,0x51,0x6E,0x48,0xCC,0x12,0x89,0x47,0x1C,0x49,0x33}},
 {{0x2C,0x12,0x38,0x55,0x2F,0xCC,0x12,0x89,0x47,0x1C,0x49,0x33}},
 {{0x25,0x12,0x51,0x6E,0x48,0xCC,0x12,0x89,0x47,0x1C,0x49,0x33}},
 {{0x2C,0x12,0x38,0x55,0x2F,0xE0,0x12,0xB1,0x47,0x30,0x71,0x33}},
 {{0x2D,0x12,0x79,0x96,0x70,0xCC,0x12,0x89,0x47,0x1C,0x49,0x33}},
 {{0x29,0x12,0xB5,0xD2,0xAC,0xF4,0x12,0xD9,0x47,0x44,0x99,0x33}},
 {{0x36,0x13,0x13,0x25,0xFF,0x32,0x22,0x0A,0x07,0x82,0x0A,0x12}},
#if 0
 {{0x25,0x12,0x51,0x6E,0x48,0x99,0x35,0x89,0x47,0xC1,0x49,0x33}},
 {{0x2C,0x12,0x38,0x55,0x2F,0x99,0x35,0x89,0x47,0xC1,0x49,0x33}},
 {{0x25,0x12,0x51,0x6E,0x48,0x99,0x35,0x89,0x47,0xC1,0x49,0x33}},
 {{0x2C,0x12,0x38,0x55,0x2F,0xC1,0x35,0xB1,0x47,0xE9,0x71,0x33}},
 {{0x2D,0x12,0x79,0x96,0x70,0x99,0x35,0x89,0x47,0xC1,0x49,0x33}},
 {{0x29,0x12,0xB5,0xD2,0xAC,0xE9,0x35,0xD9,0x47,0x11,0x99,0x33}},
 {{0x36,0x13,0x13,0x25,0xFF,0x59,0x45,0x09,0x07,0xF9,0x09,0x24}}
#endif
};

static const SiS_Part2PortTblStruct SiS310_CRT2Part2_Clevo1024x768_3[] =
{
 {{0x36,0x13,0x13,0x25,0xFF,0x32,0x22,0x0A,0x07,0x82,0x0A,0x12}}, /* Corrected */
 {{0x36,0x13,0x13,0x25,0xFF,0x32,0x22,0x0A,0x07,0x82,0x0A,0x12}},
 {{0x36,0x13,0x13,0x25,0xFF,0x32,0x22,0x0A,0x07,0x82,0x0A,0x12}},
 {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
 {{0x36,0x13,0x13,0x25,0xFF,0x32,0x22,0x0A,0x07,0x82,0x0A,0x12}},
 {{0x36,0x13,0x13,0x25,0xFF,0x32,0x22,0x0A,0x07,0x82,0x0A,0x12}},
 {{0x36,0x13,0x13,0x25,0xFF,0x32,0x22,0x0A,0x07,0x82,0x0A,0x12}},
 {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
 {{0x25,0x13,0xC9,0x25,0xFF,0x59,0x45,0x09,0x07,0xF9,0x09,0x24}}
};

/* CRT2 data is std */

static const SiS_LVDSDesStruct Clevo1024x768Des_1[] =
{
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 }
};

static const SiS_LVDSDesStruct Clevo1024x768Des_2[] =
{
  { 1184, 622 },
  { 1184, 597 },
  { 1184, 622 },
  { 1184, 597 },
  { 1152, 622 },
  { 1232, 722 },
  {    0,   0 }
};

/* Uniwill N243S9, ECS A928 */

static const SiS_LVDSDesStruct Uniwill1024x768Des_1[] =
{
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 805 }
};

static const SiS_LVDSDesStruct Uniwill1024x768Des_2[] =
{
  { 1184, 622 },
  { 1184, 597 },
  { 1184, 622 },
  { 1184, 597 },
  { 1152, 650 },
  { 1232, 722 },
  {    0, 805 },
};


