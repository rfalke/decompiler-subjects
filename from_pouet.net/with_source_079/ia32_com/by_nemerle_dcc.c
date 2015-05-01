/*
 * Input file	: from_pouet.net/with_source_079/ia32_com/subject.exe
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
int loc3; /* di */
int loc4; /* al */
    loc1 = 19;
    loc1 = 128;
    loc2 = 200;

    do {
        loc3 = 0xf8c0;

        do {
            loc3 = (loc3 - 1);
            loc4 = ((((((loc4 >> 3) + es[di]) + es[di-1]) + es[di+1]) + es[di+0x140]) >> 2);
            es[di+0x140] = loc4;
        } while ((loc3 != 0));
    } while ((--loc2 != 0));
}

