/*
 * Input file	: from_dcc/intops/ia32_mz_from_dcc/subject.exe
 * File type	: EXE
 */

#include "dcc.h"


void main ()
/* Takes no parameters.
 * High-level language prologue code.
 * Unknown calling convention.
 */
{
int loc1;
int loc2;
    loc1 = 255;
    loc2 = (loc1 + 143);
    loc1 = (loc1 - loc2);
    loc1 = (loc1 * loc2);
    loc1 = (loc1 << 5);
    printf ("a = %d, b = %d\n", loc1, (((loc2 / loc1) % loc1) >> loc1));
}

