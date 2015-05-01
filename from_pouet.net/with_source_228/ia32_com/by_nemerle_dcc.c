/*
 * Input file	: from_pouet.net/with_source_228/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


char proc_1 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* bx */
int loc2; /* dx */
int loc3; /* ax */
int loc4; /* si */
int loc5; /* al */
int loc6; /* bl */
int loc7; /* cl */
int loc8; /* dl */
int loc9; /* cx */
char loc10; /* al */
    loc1 = 0;
    loc2 = (loc3 * loc1);
    loc4 = 0xf780;

    do {
        loc3 = 0;
        loc5 = ds[si+0x347];
        loc6 = ds[si+0xc7];
        loc7 = ds[si+0x208];
        loc8 = ds[si+0x206];
        loc3 = (((((loc3 + loc1) + loc9) + loc2) >> 2) - 1);
        ds[si+0x207] = loc5;
    } while ((--loc4 != 0));
    return (loc10);
}


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 * Contains coprocessor instructions.
 */
{
int loc1; /* ax */
int loc2; /* cx */
int loc3; /* si */
int loc4; /* tmp */
int loc5; /* bx */
char loc6; /* al */
int loc7; /* al */

    do {
        loc1 = loc2;
        loc1 = ( ~ loc2);
    } while (//*failed*//);

    do {
        loc2 = 0x2328;

        do {
            loc3 = 511;
            *loc3 = 50;
            *loc3 = (*loc3 - (loc2 >> 3));
            var00203 = (var00203 + 160);
            var00205 = (var00205 + 100);
            loc1 = ((320 * var00205) + var00203);
            loc4 = loc1;
            loc1 = loc5;
            loc5 = loc4;
            519[bx] = *loc3;
        } while (//*failed*//);
        proc_1 ();
        proc_1 ();
        loc6 = proc_1 ();
    } while ((--loc7 != 0));
}

