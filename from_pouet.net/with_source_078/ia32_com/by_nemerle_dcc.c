/*
 * Input file	: from_pouet.net/with_source_078/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* al */
int loc2; /* tmp */
int loc3; /* ax */
int loc4; /* si */
int loc5; /* bx */
int loc6; /* ch */
int loc7; /* di */
int loc8; /* cx */
int loc9; /* cl */
    loc1 = 19;
    loc2 = loc3;
    loc3 = loc4;

    do {
        loc2 = loc3;
        loc3 = loc5;
        loc5 = loc2;
        loc2 = loc3;
        loc3 = loc5;
        loc5 = (loc2 + 1);
    } while (//*failed*//);

    do {
        loc6 = 127;
        loc7 = loc8;

        do {
            loc1 = ((((loc1 + ds[di+0x13e]) + ds[di+0x142]) + ds[di+0x282]) >> 2);
        } while (//*failed*//);
        loc9 = 160;
    } while (//*failed*//);
}

