/*
 * Input file	: from_pouet.net/with_source_029/ia32_com/subject.exe
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

    do {
l1:         loc2 = (loc2 - 1);

        if (loc3 == 0) {
            loc2 = 0;
        }
        else {
            goto L1;
        }
    } while ((--loc2 != 0));
}

