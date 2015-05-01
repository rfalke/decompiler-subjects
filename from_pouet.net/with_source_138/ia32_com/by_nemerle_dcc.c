/*
 * Input file	: from_pouet.net/with_source_138/ia32_com/subject.exe
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
int loc3; /* di */
int loc4; /* al */
int loc5; /* bl */
int loc6; /* bx */
int loc7; /* dx */
int loc8; /* si */
int loc9; /* cx */
    loc1 = 160;
    loc2 = (loc2 + loc2);
    loc2 = 19;

    do {
        *loc3 = loc2;
    } while ((--loc3 != 0));

    do {
        loc2 = 0;
        loc4 = loc5;
    } while ((++loc6 != 0));

    do {
        loc6 = 0;
        loc7 = 3;
        loc8 = loc3;

        do {
            loc8 = (loc8 + 1);
            loc4 = ds[si-0x142];
            loc6 = (loc6 + loc2);
            loc4 = ds[si+0x13e];
            loc6 = (loc6 + loc2);
            loc4 = ds[si-2];
            loc6 = (loc6 + loc2);
        } while ((--loc7 != 0));
        loc4 = *loc3;
        loc6 = (loc6 - loc2);
        loc6 = ((loc6 - (loc2 << 2)) >> 2);
        loc2 = (loc6 >> 7);
        *loc3 = (loc6 - loc2);
        loc3 = (loc3 + 1);
        loc9 = (loc9 - 1);
    } while ((--loc4 != 0));
}

