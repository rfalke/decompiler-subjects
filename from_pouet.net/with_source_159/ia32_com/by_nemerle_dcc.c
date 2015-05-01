/*
 * Input file	: from_pouet.net/with_source_159/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


char proc_1 (int arg0)
/* Uses register arguments:
 *     arg0 = di.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* al */
char loc2; /* al */

    do {
        es[di] = loc1;
        arg0 = (arg0 + 1);
    } while (//*failed*//);
    return (loc2);
}


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* cx */
int loc2; /* dx */
int loc3; /* ax */
int loc4; /* al */
int loc5; /* cl */
char loc6; /* al */
int loc7; /* di */
    loc1 = 112;

    do {
        loc2 = 968;
        loc3 = loc1;
        loc4 = 0;
        loc4 = loc5;
    } while (//*failed*//);
    loc6 = proc_1 (0);

    do {

        do {
            loc4 = (((((loc4 + es[di+1]) + es[di-1]) + es[di-0x13f]) + es[di+0x13f]) >> 2);
            es[di] = loc4;
            loc7 = (loc7 + 1);
        } while (//*failed*//);
        loc7 = 320;
    } while ((--loc4 != 0));
}

