/*
 * Input file	: from_dcc/benchfn/ia32_mz_from_dcc/subject.exe
 * File type	: EXE
 */

#include "dcc.h"


void proc_4 ()
/* Takes no parameters.
 * High-level language prologue code.
 * Unknown calling convention.
 */
{
}


void proc_3 ()
/* Takes no parameters.
 * High-level language prologue code.
 * Unknown calling convention.
 */
{
    proc_4 ();
    proc_4 ();
    proc_4 ();
    proc_4 ();
    proc_4 ();
    proc_4 ();
    proc_4 ();
    proc_4 ();
    proc_4 ();
    proc_4 ();
}


void proc_2 ()
/* Takes no parameters.
 * High-level language prologue code.
 * Unknown calling convention.
 */
{
    proc_3 ();
    proc_3 ();
    proc_3 ();
    proc_3 ();
    proc_3 ();
    proc_3 ();
    proc_3 ();
    proc_3 ();
    proc_3 ();
    proc_3 ();
}


void proc_1 ()
/* Takes no parameters.
 * High-level language prologue code.
 * Unknown calling convention.
 */
{
    proc_2 ();
    proc_2 ();
    proc_2 ();
    proc_2 ();
    proc_2 ();
    proc_2 ();
    proc_2 ();
    proc_2 ();
    proc_2 ();
}


void main ()
/* Takes no parameters.
 * High-level language prologue code.
 * Unknown calling convention.
 */
{
long loc1;
long loc2;
    printf ("enter number of iterations ");
    scanf ("%ld", &loc0);
    printf ("executing %ld iterations\n", loc2);
    loc1 = 1;

    while ((loc1 <= loc2)) {
        proc_1 ();
        loc1 = (loc1 + 1);
    }	/* end of while */
    printf ("finished\n");
}

