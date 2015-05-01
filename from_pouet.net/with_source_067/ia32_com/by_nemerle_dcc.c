/*
 * Input file	: from_pouet.net/with_source_067/ia32_com/subject.exe
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
int loc2; /* cx */
int loc3; /* tmp */
int loc4; /* dx */
int loc5; /* ax */
int loc6; /* al */
int loc7; /* bp */

    do {
        loc1 = 0;

        do {
            loc2 = 320;
            loc1 = (loc1 + 1);

            do {
                loc3 = 0x3800;
                loc4 = (loc3 % loc1);
                loc5 = loc4;
                loc6 = (((((((loc2 - 160) << 6) / loc1) + loc7) ^ (loc3 / loc1)) >> 4) | 16);
            } while (//*failed*//);
        } while ((loc1 != 100));
        loc7 = (loc7 - 1);
    } while ((--loc6 != 0));
}

