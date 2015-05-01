/*
 * Input file	: from_pouet.net/with_source_057/ia32_com/subject.exe
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
int loc3; /* bx */
int loc4; /* ax */
    loc1 = 19;

    do {
        loc2 = *loc3;
        320[bx] = (320[bx] | loc2);
        1[bx] = (1[bx] | loc2);
        loc3 = (loc3 - 1);
        loc4 = (loc4 + 1);
    } while ((--loc4 != 0));
}

