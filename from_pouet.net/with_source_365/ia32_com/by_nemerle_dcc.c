/*
 * Input file	: from_pouet.net/with_source_365/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 */
{
                    MOV            si, 10Dh           
                    MOV            di, 7F00h          
                    MOV            cx, di             
                    CLD                               
                    PUSH           di                 
                    REP MOVSB                         
                    RET                               
}

