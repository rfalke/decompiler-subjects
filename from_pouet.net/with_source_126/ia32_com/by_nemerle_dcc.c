/*
 * Input file	: from_pouet.net/with_source_126/ia32_com/subject.exe
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
int loc3; /* dx */
int loc4; /* bl */
int loc5; /* tmp */
int loc6; /* bx */
int loc7; /* ah */
int loc8; /* cx */
int loc9; /* di */
int loc10; /* dl */
    loc1 = 19;
    loc2 = 0xa000;

    do {
        loc3 = (968 + 1);
        loc4 = loc1;
        loc5 = (loc2 >> 2);
        loc2 = loc6;
        loc6 = loc5;
    } while ((--loc2 != 0));
    loc7 = 250;

    do {
    } while ((--loc2 != 0));

    do {
        loc8 = 0xf8c0;

        do {
            loc9 = loc8;
            loc1 = es[di+0x140];
            loc10 = es[di+1];
            loc1 = ((loc2 + loc3) + loc4);
            loc2 = (loc2 >> 1);
        } while (//*failed*//);
        loc6 = (loc6 + 1);
        loc3 = 96;
    } while ((--loc2 != 0));
}

