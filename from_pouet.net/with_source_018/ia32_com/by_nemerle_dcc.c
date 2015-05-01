/*
 * Input file	: from_pouet.net/with_source_018/ia32_com/subject.exe
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
int loc2; /* ax */
int loc3; /* di */
    loc1 = 19;
    loc2 = 0xa000;

    while ((loc1 != 0)) {
l1:         loc2 = (loc2 - 1);
        loc3 = (loc3 + 1);
    }	/* end of while */
    goto L1;
}

