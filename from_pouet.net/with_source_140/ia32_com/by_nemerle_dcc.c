/*
 * Input file	: from_pouet.net/with_source_140/ia32_com/subject.exe
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
int loc1;
int loc2; /* al */
int loc3; /* dx */
int loc4; /* di */
long loc5; /* dx:ax */
    loc2 = 19;
    loc1 = 100;

    for (;;) {
        HLI_POP loc3
        loc4 = (80 + 170);
        loc5 = (HI(loc5) * 320);
        LO(loc5) = (LO(loc5) + 1);
    }	/* end of loop */
}

