/*
 * Input file	: from_pouet.net/with_source_066/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start (int arg0)
/* Takes no parameters.
 * High-level language prologue code.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* al */
int loc2; /* bl */
int loc3; /* di */
int loc4; /* si */
int loc5; /* ax */
int loc6; /* dh */
int loc7; /* cx */
int loc8; /* dx */
int loc9; /* bx */
int loc10; /* tmp */
    loc1 = 19;
    arg0 = 0xa000;

    do {
        loc2 = 100;
        loc3 = 0x3ecf;
        loc4 = 160;
        loc5 = (loc5 + 1);
        loc3 = 0xba8f;
        loc4 = 0xfe20;

        do {
            loc6 = 16;

            do {
                loc7 = loc8;
            } while ((--loc8 != 0));
            loc3 = (loc3 + loc4);
        } while ((--loc9 != 0));
        loc10 = loc5;
        loc5 = loc7;
        loc7 = loc10;
        loc10 = loc5;
        loc5 = loc7;
    } while (//*failed*//);
}

