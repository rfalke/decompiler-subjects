/*
 * Input file	: from_pouet.net/with_source_071/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1;
int loc2;
long loc3; /* dx:ax */
int loc4; /* cl */
int loc5; /* bp */
int loc6; /* cx */
int loc7; /* bx */

    do {
        loc3 = (LO(loc3) * 3);
        loc4 = 160;
        loc5 = (loc5 + loc6);

        if (LO(loc3) <= 0x2aab) {
            LO(loc3) = (LO(loc3) + 1);
            loc5 = (loc5 + loc6);
        }
        else {
            loc7 = (loc7 + 200);
        }
        loc5 = (loc5 >> 1);
        loc7 = (loc7 >> 1);
        es[bp+di] = 9;
        es[bp+di-4] = 4;
    } while ((LO(loc3) != 0));
}

