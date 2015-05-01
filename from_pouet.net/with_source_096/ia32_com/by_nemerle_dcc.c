/*
 * Input file	: from_pouet.net/with_source_096/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start (int arg0)
/* Takes no parameters.
 * High-level language prologue code.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* al */
int loc2; /* di */
int loc3; /* si */
int loc4; /* dx */
int loc5; /* bx */
int loc6; /* bl */
    loc1 = 19;
    arg0 = 0xa000;
    loc2 = 0;
    loc3 = (loc3 + 1);

    for (;;) {
        loc4 = 968;

        do {
            loc5 = (loc5 + 1);
        } while ((loc2 != 0xe880));
        loc2 = 0;
        loc5 = (loc2 + loc3);

        if ((loc6 != 32) && (loc6 != 0)) {
        }
        loc3 = !loc3;
    }	/* end of loop */
}

