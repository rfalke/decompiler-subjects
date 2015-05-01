/*
 * Input file	: from_pouet.net/with_source_141/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* ax */
int loc2; /* bx */
int loc3; /* dx */
int loc4; /* tmp */
long loc5; /* dx:ax */
int loc6; /* si */
int loc7; /* al */
    loc1 = 0xa000;
    loc2 = 0;

    do {

        do {
            var00166 = var00162;
            var00162 = (var00162 + var00164);
            var00164 = var00166;
            loc1 = var00162;
            var00162 = loc1;
            loc2 = 4;
            loc3 = 0;
            loc4 = loc5;
            LO(loc5) = (loc4 / loc2);
            HI(loc5) = (loc4 % loc2);
            HLI_POP loc2
            loc6 = HI(loc5);
            loc7 = cs[si+0x168];
            es[bx] = loc7;
            loc2 = (loc2 + 1);
        } while (//*failed*//);
    } while ((loc7 == 0));
}

