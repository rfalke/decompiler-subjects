/*
 * Input file	: from_pouet.net/with_source_151/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* cx */
int loc2; /* di */
int loc3; /* si */
int loc4; /* bx */
int loc5; /* dx */
int loc6; /* ch */
int loc7; /* bl */
int loc8; /* al */
int loc9; /* cl */
int loc10; /* ax */
int loc11; /* dl */
int loc12; /* dh */
int loc13; /* ah */
int loc14; /* tmp */
    loc1 = 0x798f;
    loc2 = 0;
    loc3 = 902;
    loc4 = loc3;

    do {
        loc5 = (0xffd9 * loc1);
        loc2 = (loc2 + loc5);
        loc1 = (loc1 + loc2);
        ds[bx+si] = loc6;
        ds[bx+si] = (ds[bx+si] + loc7);
    } while ((--loc3 < 0));
    loc5 = (968 + 1);
    loc1 = 255;

    do {
        loc8 = loc9;

        if (loc8 >= 64) {
            loc8 = 0;
        }
        loc8 = loc9;
        loc8 = (loc9 << 1);
    } while (//*failed*//);
    loc10 = 0xa000;

    do {
        loc2 = (loc2 - loc2);
        loc11 = 200;

        do {
            loc8 = ((loc5 - loc12) - loc12);
            loc13 = 4;
            loc14 = loc10;
            loc10 = loc3;
            loc3 = loc14;
            loc8 = (loc5 + loc12);
            loc13 = (loc13 + loc8);

            do {
                loc8 = (loc8 + loc13);
            } while (//*failed*//);
        } while ((--loc11 != 0));
        loc5 = (loc5 - 1);
    } while ((loc5 == 0));
}

