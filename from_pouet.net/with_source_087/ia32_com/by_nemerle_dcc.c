/*
 * Input file	: from_pouet.net/with_source_087/ia32_com/subject.exe
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
int loc1; /* bh */
int loc2; /* di */
int loc3; /* bx */
int loc4; /* al */
int loc5; /* ax */
int loc6; /* si */
int loc7; /* ah */
int loc8; /* tmp */
    loc1 = 250;
    loc2 = loc3;

    do {
    } while ((++loc2 != 0));
    loc4 = 19;

    for (;;) {
        loc5 = (loc5 + 1);

        do {
            loc6 = loc5;
            loc7 = loc1;
            loc8 = loc5;
            loc5 = (loc6 + 1);
        } while ((loc2 < loc3));
    }	/* end of loop */
}

