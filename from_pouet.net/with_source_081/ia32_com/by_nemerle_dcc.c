/*
 * Input file	: from_pouet.net/with_source_081/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* di */
int loc2; /* si */
int loc3; /* ch */
int loc4; /* cx */
long loc5; /* dx:ax */
int loc6; /* bl */
int loc7; /* al */
int loc8; /* bx */
int loc9; /* dh */
    loc1 = 0;
    loc2 = 395;

    do {
        *loc1 = loc3;
        loc4 = (loc4 + loc2);
        loc5 = (40 * loc4);
        loc2 = (loc2 - HI(loc5));
    } while ((++loc1 != 0));
    HI(loc5) = LO(loc5);

    for (;;) {
        loc2 = 0;
        loc6 = 200;

        do {
            loc4 = 320;

            do {
                loc1 = loc4;
                loc7 = (*loc8 + *loc1);
                es[si] = ((loc7 + *((loc1 + HI(loc5)))) & loc9);
                loc2 = (loc2 + 1);
            } while (//*failed*//);
        } while ((--loc6 != 0));
        HI(loc5) = (HI(loc5) + 1);
    }	/* end of loop */
}

