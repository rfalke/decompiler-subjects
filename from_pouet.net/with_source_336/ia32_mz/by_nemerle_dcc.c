/*
 * Input file	: from_pouet.net/with_source_336/ia32_mz/subject.exe
 * File type	: EXE
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 */
{
                    PUSH           es                 
                    PUSH           cs                 
                    POP            ds                 
                    MOV            cx, [0Ch]          
                    MOV            si, cx             
                    DEC            si                 
                    MOV            di, si             
                    MOV            bx, ds             
                    ADD            bx, [0Ah]          
                    MOV            es, bx             
                    STD                               
                    REP MOVSB                         
                    PUSH           bx                 
                    MOV            ax, 2Bh            
                    PUSH           ax                 
                    RETF                              
}

