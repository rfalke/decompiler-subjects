/*
 * Input file	: from_pouet.net/with_source_013/ia32_com/subject.exe
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
int loc1; /* al */
int loc2; /* bx */
int loc3; /* ax */
    loc1 = 3;

    for (;;) {
        *loc2 = (*loc2 + 1);
        loc2 = (loc2 - loc3);
        loc1 = (loc1 - 1);
    }	/* end of loop */
}

