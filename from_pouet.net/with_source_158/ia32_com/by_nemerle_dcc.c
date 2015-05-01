/*
 * Input file	: from_pouet.net/with_source_158/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 * Contains coprocessor instructions.
 */
{
int loc1; /* ax */
int loc2; /* dx */
int loc3; /* al */
int loc4; /* cl */
int loc5; /* bp */
int loc6; /* si */
int loc7; /* cx */
long loc8; /* dx:ax */
int loc9; /* bx */
int loc10; /* di */
    loc1 = 19;

    do {
        loc2 = 968;
        loc3 = loc4;
        loc3 = 0;
        loc3 = (loc4 << 4);
    } while (//*failed*//);
l1: loc5 = (loc5 + loc1);
    loc2 = 5;
    loc6 = loc5;

    while ((loc2 != 20)) {
        loc2 = (loc2 + 1);
        loc5 = (loc5 - 320);
        loc7 = !loc2;

        do {
            loc8 = (HI(loc8) * LO(loc8));
            loc9 = LO(loc8);
            loc8 = (loc7 * LO(loc8));
            HLI_POP HI(loc8)
            ds[bx+si] = 15;
            loc9 = ! ((loc9 - LO(loc8)));
            ds[bx+si] = 15;
            loc6 = (loc6 + 320);
            loc7 = (loc7 + 1);
        } while ((loc7 <= HI(loc8)));

        do {
            loc3 = *loc10;
            loc3 = (loc3 - 1);
            *loc10 = loc3;
            loc10 = (loc10 - loc9);
        } while ((--loc9 != 0));
        loc6 = loc5;
    }	/* end of while */
    goto L1;
}

