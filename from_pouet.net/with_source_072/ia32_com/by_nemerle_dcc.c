/*
 * Input file	: from_pouet.net/with_source_072/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* bl */
int loc2; /* bx */
int loc3; /* bp */
int loc4; /* tmp */
int loc5; /* di */
int loc6; /* ax */
int loc7; /* dx */
int loc8; /* si */
int loc9; /* cx */
int loc10; /* al */
int loc11; /* dl */
int loc12; /* cl */
    loc1 = 4;

    do {
        loc2 = (loc2 + 1);

        do {
            loc3 = 320;
            loc4 = loc5;
            loc6 = (loc4 / loc3);
            loc7 = (loc4 % loc3);

            do {
                loc4 = (loc6 * *loc8);
                loc7 = (loc4 % loc2);
                loc6 = loc9;
                loc9 = (loc4 / loc2);
                loc4 = loc6;
                loc6 = loc7;
                loc7 = loc4;
            } while ((--loc3 <= 0));
            loc10 = 16;

            while (((loc11 & loc12) < 0)) {
                loc11 = ((loc7 + loc7) + 192);
                loc4 = (loc9 + loc2);
                loc9 = loc7;
                loc7 = loc4;
                loc6 = (loc6 + 1);
            }	/* end of while */
        } while (((loc5 & loc5) != 0));
        loc6 = loc10;
    } while ((--loc6 != 0));
}

