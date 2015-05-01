/*
 * Input file	: from_pouet.net/with_source_129/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains impure code.
 * Contains instructions not normally used by compilers.
 * Contains coprocessor instructions.
 */
{
int loc1; /* al */
int loc2; /* di */
int loc3; /* si */
int loc4; /* ah */
long loc5; /* dx:ax */
    loc1 = 19;

    for (;;) {
        HLI_POP loc2
        *loc3 = (*loc3 + loc4);
        loc5 = (HI(loc5) * 320);
        LO(loc5) = (LO(loc5) + 1);
    }	/* end of loop */
}

