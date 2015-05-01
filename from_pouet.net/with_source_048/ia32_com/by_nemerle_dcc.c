/*
 * Input file	: from_pouet.net/with_source_048/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* dx */
int loc2; /* cx */
int loc3; /* ax */
int loc4; /* bx */

    for (;;) {
        loc1 = 199;

        do {
            loc2 = 320;

            do {
                loc3 = (loc1 + loc4);
            } while (//*failed*//);
        } while ((--loc1 != 0));
        loc4 = (loc4 + 1);
    }	/* end of loop */
}

