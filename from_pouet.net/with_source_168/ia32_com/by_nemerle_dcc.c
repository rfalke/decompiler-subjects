/*
 * Input file	: from_pouet.net/with_source_168/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


int proc_1 (int arg0, char arg1, int arg2)
/* Uses register arguments:
 *     arg0 = cx.
 *     arg1 = al.
 *     arg2 = ax.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* al */
int loc2; /* dx */

    do {
        arg0 = (((arg0 + 1) + 1) + 1);
        loc1 = ((loc1 ^ 8) ^ 8);
        HLI_POP arg0
        loc2 = (loc2 + 1);
    } while ((loc2 < 200));
    return (arg0);
}


void start (int arg0, int arg1)
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 * Contains coprocessor instructions.
 */
{
int loc1; /* al */
int loc2; /* dx */
int loc3; /* ax */
int loc4; /* cx */
    loc1 = 19;
    loc2 = loc3;

    do {
        loc4 = ss[bp];
        proc_1 ((loc4 + 150), 1);
        proc_1 ((loc3 + 1), (!loc4 + 140));
        loc2 = proc_1 ((ss[bp] + 160), 4);

        if (loc1 != 1) {
            loc2 = (loc2 + 1);
        }
    } while ((loc2 < 200));
}

