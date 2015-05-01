/*
 * Input file	: from_pouet.net/with_source_042/ia32_com/subject.exe
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
int loc2; /* ch */
int loc3; /* bx */
int loc4; /* cx */
int loc5; /* ah */
int loc6; /* dh */
    loc1 = 19;

    do {
        loc2 = 250;

        do {
            loc3 = loc4;
            loc5 = (loc5 + (loc4 + loc6));
            es[bx-1] = loc5;
        } while (//*failed*//);
    } while ((--loc1 != 0));
}

