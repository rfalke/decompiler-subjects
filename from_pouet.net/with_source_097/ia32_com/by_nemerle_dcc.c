/*
 * Input file	: from_pouet.net/with_source_097/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* bx */
int loc2; /* dx */
int loc3; /* di */
int loc4; /* si */
int loc5; /* cx */
long loc6; /* dx:ax */
int loc7; /* bp */
    loc1 = 273;

    for (;;) {
        loc2 = 0xffff;
        loc3 = 0;
        loc4 = 479;

        do {
            loc5 = 639;

            do {
                loc2 = (loc2 + 1);
                loc1 = 0;
                loc6 = (loc5 * loc5);
                loc1 = LO(loc6);
                loc6 = (loc4 * loc4);
                LO(loc6) = ((LO(loc6) + loc1) + loc7);
                HLI_POP HI(loc6)
            } while (//*failed*//);
        } while ((--loc4 < 0));
        loc7 = (loc7 - 127);
    }	/* end of loop */
}

