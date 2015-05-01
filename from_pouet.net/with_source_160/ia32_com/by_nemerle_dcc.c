/*
 * Input file	: from_pouet.net/with_source_160/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* ah */
int loc2; /* ax */
int loc3; /* al */
int loc4; /* bl */
int loc5; /* bx */
int loc6; /* dx */
int loc7; /* si */
int loc8; /* di */
int loc9; /* cx */
    loc1 = 160;
    loc2 = (loc2 + loc2);
    loc2 = 19;

    do {
        loc3 = loc4;
    } while ((++loc5 != 0));

    do {
        loc5 = 0;
        loc6 = 3;
        loc7 = loc8;

        do {
            loc7 = (loc7 + 1);
            loc3 = ds[si-0x142];
            loc5 = (loc5 + loc2);
            loc3 = ds[si+0x13e];
            loc5 = (loc5 + loc2);
            loc3 = ds[si-2];
            loc5 = (loc5 + loc2);
        } while ((--loc6 != 0));
        loc3 = *loc8;
        loc5 = (loc5 - loc2);
        loc5 = ((loc5 - (loc2 << 2)) >> 2);
        loc2 = (loc5 >> 8);
        *loc8 = (loc5 - loc2);
        loc8 = (loc8 + 1);

        do {
            loc7 = (loc8 + 1);
            loc3 = ds[si-0x140];
            loc5 = (0 + loc2);
            loc3 = ds[si-1];
            loc5 = (loc5 + loc2);
            loc3 = ds[si+1];
            loc5 = (loc5 + loc2);
            loc3 = ds[si+0x140];
            *loc8 = ((loc5 + loc2) >> 2);
            loc8 = (loc8 + 1);
        } while (//*failed*//);
        loc9 = (loc9 - 1);
    } while ((--loc3 != 0));
}

