/*
 * Input file	: from_pouet.net/with_source_098/ia32_com/subject.exe
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
int loc2; /* si */
int loc3; /* di */
int loc4; /* bl */
int loc5; /* bx */
int loc6; /* dx */
    loc1 = 18;
l1: es[si] = loc2;
    loc3 = 296;
    loc4 = (es[si+0x1c] >> 1);

    do {

        do {
            loc4 = (loc4 & 7);
            loc1 = ds[bx+di];
            loc5 = (loc5 + 1);
        } while (//*failed*//);
        loc3 = (loc3 + 8);
    } while ((++loc6 <= 0));
    goto L1;
}

