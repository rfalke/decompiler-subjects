/*
 * Input file	: from_pouet.net/with_source_034/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* bx */
int loc2; /* tmp */
int loc3; /* di */
int loc4; /* cx */
int loc5; /* cl */
    loc1 = 320;
    loc2 = loc3;
    *loc3 = (*loc3 ^ ((((loc2 / loc1) + loc4) & ((loc2 % loc1) + loc4)) >> loc5));

    while ((++loc3 == 0)) {
        loc4 = (loc4 + 1);
l1:     loc1 = 320;
        loc2 = loc3;
        *loc3 = (*loc3 ^ ((((loc2 / loc1) + loc4) & ((loc2 % loc1) + loc4)) >> loc5));
    }	/* end of while */
    goto L1;
}

