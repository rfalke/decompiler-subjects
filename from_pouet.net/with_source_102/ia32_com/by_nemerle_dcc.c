/*
 * Input file	: from_pouet.net/with_source_102/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start (unsigned char arg0, unsigned char arg1)
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 * Irreducible control flow graph.
 */
{
int loc1; /* bp */
int loc2; /* cx */
int loc3; /* ch */
int loc4; /* di */
int loc5; /* si */
int loc6; /* dl */
l1: loc1 = (loc1 + 1);
    loc2 = (loc2 + 1);

    do {
        es[bx+di] = loc3;
        loc1 = ((loc1 >> 2) & 15);
        loc4 = ((loc4 >> 6) + ds[bp+0x137]);
        loc5 = ((loc5 >> 6) + ds[bp+0x13b]);
        HLI_POP loc1
    } while ((--loc6 != 0));
    goto L1;
}

