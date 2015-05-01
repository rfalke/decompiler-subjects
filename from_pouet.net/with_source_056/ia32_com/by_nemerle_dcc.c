/*
 * Input file	: from_pouet.net/with_source_056/ia32_com/subject.exe
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
    loc2 = *loc3;
    320[bx] = (320[bx] | loc2);
    1[bx] = (1[bx] | loc2);

    while ((--loc3 != 0)) {
        loc4 = (loc4 + 1);
        loc2 = *loc3;
        320[bx] = (320[bx] | loc2);
        1[bx] = (1[bx] | loc2);
    }	/* end of while */
    loc3 = 0xfeb0;
}

