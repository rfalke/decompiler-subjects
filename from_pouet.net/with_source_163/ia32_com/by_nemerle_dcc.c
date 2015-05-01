/*
 * Input file	: from_pouet.net/with_source_163/ia32_com/subject.exe
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
int loc1; /* si */
int loc2; /* sp */
int loc3; /* cx */
int loc4; /* ax */
int loc5; /* di */
int loc6; /* bx */
int loc7; /* dx */
int loc8; /* tmp */
long loc9; /* dx:ax */
int loc10; /* bp */
int loc11; /* al */
    loc1 = loc2;
    loc3 = 768;

    do {
        *loc1 = loc3;
    } while (//*failed*//);
    loc1 = loc2;

    do {
        loc4 = loc5;
        loc6 = 320;
        loc7 = 0;
        loc8 = loc9;
        *loc1 = ((loc8 / loc6) - 100);
        *loc1 = ((loc8 % loc6) - 160);
        LO(loc9) = (*loc1 + loc10);
        loc10 = (loc10 - 1);
    } while ((loc11 != 1));
}

