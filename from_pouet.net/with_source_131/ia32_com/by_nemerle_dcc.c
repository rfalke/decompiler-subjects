/*
 * Input file	: from_pouet.net/with_source_131/ia32_com/subject.exe
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
int loc4; /* bl */
int loc5; /* bh */
int loc6; /* ah */
    loc1 = 19;
    loc2 = 0;

    do {
        loc1 = (loc1 + 4);
    } while (//*failed*//);
l1: loc3 = 16;
    loc4 = (loc4 + 2);
    loc5 = 0;

    do {
    } while (((loc1 & 8) == 0));

    if (--loc1 != 0) {

        for (;;) {
            loc6 = (loc6 + loc5);
            loc5 = (loc5 + 1);

            if (loc5 != 200) {

                do {
                    es[di] = loc6;
                    loc3 = (loc3 + 1);
                    loc6 = (loc6 + loc5);
                } while (//*failed*//);
            }
            else {
                goto L1;
            }
        }	/* end of loop */
        goto L1;
    }
    else {
    }
}

