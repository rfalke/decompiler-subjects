/*
 * Input file	: from_pouet.net/with_source_134/ia32_com/subject.exe
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
int loc3; /* cl */
int loc4; /* al */
int loc5; /* di */
int loc6; /* dh */
    loc1 = 0xa000;
    loc2 = (968 + 1);
    loc3 = 255;

    do {
        loc4 = loc3;
        loc4 = ( ~ loc3);
    } while (//*failed*//);

    do {

        do {
            loc5 = (loc5 + 0x388e);
            loc2 = (loc2 ^ loc5);
            loc5 = (loc5 + loc2);
            loc4 = (loc6 & 95);
        } while (//*failed*//);
        loc5 = 0;

        do {
            loc4 = ((((loc4 + *loc5) + ds[di+0x140]) + ds[di-0x140]) >> 2);
            *loc5 = loc4;
            loc5 = (loc5 + 1);
        } while (//*failed*//);
    } while ((loc4 != 129));
}

