/*
 * Input file	: from_pouet.net/with_source_058/ia32_com/subject.exe
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
int loc2; /* si */
    loc1 = 19;
    loc2 = 0;
    ds[si+0x9f] = 0x4f51;

    do {
        loc1 = (loc1 ^ *loc2);
    } while (//*failed*//);
}

