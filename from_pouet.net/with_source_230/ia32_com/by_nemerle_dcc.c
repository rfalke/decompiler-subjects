/*
 * Input file	: from_pouet.net/with_source_230/ia32_com/subject.exe
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
int loc4; /* dl */
int loc5; /* cl */
int loc6; /* bl */
int loc7; /* bh */
int loc8; /* tmp */
int loc9; /* ah */
int loc10; /* di */
int loc11; /* ch */
    loc1 = 19;
    loc2 = 980;
    loc3 = (17 & 127);
    loc3 = (loc3 | loc3);

    while ((loc3 != 0)) {
        loc3 = (loc3 | loc3);
    }	/* end of while */
    loc1 = 0;
    loc4 = 200;
    loc5 = 127;

    do {
        loc6 = (loc5 & 31);
        loc7 = (31 - loc6);
        loc6 = loc7;

        if ((loc5 & 64) != 0) {
            loc8 = loc9;
            loc9 = loc6;
            loc6 = loc8;
        }
        loc3 = loc5;
        loc3 = loc6;
        loc3 = loc6;
        loc3 = loc9;
        loc2 = ((loc2 + 1) - 1);
    } while (//*failed*//);

    do {
        loc10 = 0;
        loc11 = 0;

        do {
            loc5 = 0;

            do {
                loc10 = (loc10 + 1);
                loc3 = ((loc3 & 63) + var001C0);
            } while ((++loc5 != 0));
            loc10 = (loc10 + 1);
        } while ((++loc11 != 0));
        var001C0 = (var001C0 + 1);
        loc10 = 1;
        loc11 = 0;

        do {
            loc5 = 0;

            do {
                loc10 = (loc10 + 1);
                loc3 = (((loc3 & 63) | 64) - var001C1);
            } while ((++loc5 != 0));
            loc10 = (loc10 - 1);
        } while ((++loc11 != 0));
        var001C1 = (var001C1 + 1);

        do {
        } while (((loc3 & 8) == 0));
    } while ((--loc3 != 0));
}

