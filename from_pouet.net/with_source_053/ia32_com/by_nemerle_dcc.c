/*
 * Input file	: from_pouet.net/with_source_053/ia32_com/subject.exe
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
int loc2; /* dx */
int loc3; /* al */
    loc1 = 19;
l1: loc2 = 200;

    for (;;) {

        do {
        } while (//*failed*//);

        if (--loc2 != 0) {
            loc3 = (loc3 ^ 28);
        }
        else {
            goto L1;
        }
    }	/* end of loop */
    goto L1;
}

