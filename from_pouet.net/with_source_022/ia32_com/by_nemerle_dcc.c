/*
 * Input file	: from_pouet.net/with_source_022/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* bh */
int loc2; /* cx */
    loc1 = 160;
l1: 
    for (;;) {
        es[di] = 0;
        loc2 = (loc2 + 1);
    }	/* end of loop */
    goto L1;
}

