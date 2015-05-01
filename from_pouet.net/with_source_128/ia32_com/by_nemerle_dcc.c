/*
 * Input file	: from_pouet.net/with_source_128/ia32_com/subject.exe
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
int loc1; /* cx */
int loc2; /* dx */
int loc3; /* al */
int loc4; /* cl */
int loc5; /* bx */
int loc6; /* ax */
int loc7; /* bp */
int loc8; /* tmp */
int loc9; /* dl */
int loc10; /* dh */
    loc1 = 0;

    do {
        loc2 = 968;
        loc3 = loc4;
    } while (//*failed*//);
    loc2 = 0;
    loc5 = 967;

    do {
        loc6 = (((loc7 + loc2) ^ loc2) ^ *loc5);
        loc8 = loc9;
        loc9 = loc10;
        loc10 = loc8;
        loc2 = (loc2 - 1);
        *loc5 = (*loc5 + loc7);
        loc7 = (loc7 + 1);
    } while ((--loc3 != 0));
}

