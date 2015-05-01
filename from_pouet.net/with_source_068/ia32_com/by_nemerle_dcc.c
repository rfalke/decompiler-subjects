/*
 * Input file	: from_pouet.net/with_source_068/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
long loc1; /* dx:ax */
int loc2; /* bx */
int loc3; /* bp */
int loc4; /* di */

    for (;;) {
        loc1 = (LO(loc1) * 3);
        HI(loc1) = loc2;
        loc2 = (loc2 + loc3);
        HI(loc1) = ((!HI(loc1) + loc3) + 75);
        loc2 = (loc2 + 80);
        loc2 = (loc2 >> 1);
        loc3 = (HI(loc1) >> 1);
        loc1 = (loc4 * 320);
        es[bx+di] = 4;
        es[bx+di-4] = 20;
    }	/* end of loop */
}

