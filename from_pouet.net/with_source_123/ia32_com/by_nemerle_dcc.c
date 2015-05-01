/*
 * Input file	: from_pouet.net/with_source_123/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 * Irreducible control flow graph.
 */
{
int loc1; /* bh */
int loc2; /* ah */
int loc3; /* bx */
int loc4; /* bp */
int loc5; /* di */
int loc6; /* al */
    loc1 = 160;
    loc2 = 9;
l1: loc3 = (loc3 + 1);
    loc4 = 0xa00;

    do {
        loc5 = loc4;
        loc6 = es[di];
        loc1 = 30;
        loc5 = (((loc5 << 2) + loc3) + loc3);
    } while ((--loc4 < 0));
    goto L1;
}

