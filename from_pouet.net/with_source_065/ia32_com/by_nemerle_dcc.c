/*
 * Input file	: from_pouet.net/with_source_065/ia32_com/subject.exe
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
int loc2; /* dx */
int loc3; /* ax */
int loc4; /* bl */
int loc5; /* bh */
int loc6; /* cx */
int loc7; /* di */
    loc1 = 19;
    loc2 = 968;
    loc1 = 0;

    do {
        loc1 = (((loc1 >> 2) << 1) >> 1);
        HLI_POP loc3
    } while ((++loc1 != 0));

    do {
        loc4 = loc5;
        loc6 = 0xfa00;

        do {
            loc7 = (loc6 - 1);
            es[di] = loc4;
            loc4 = (loc4 + 1);
        } while (//*failed*//);
        loc5 = (loc5 + 1);
    } while ((loc5 == 0));
}

