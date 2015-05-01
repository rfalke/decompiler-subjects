/*
 * Input file	: from_pouet.net/with_source_006/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 * Irreducible control flow graph.
 */
{
                    MOV            al, 13h            
                    INT            10h                	/* Unknown int */

                    LES            bx, dword ptr[bx]  

               L1:  AAS                               
                    INC            ax                 
                    CMC                               
                    STOSW                             
                    ADC            cx, bp             
                    ADC            ah, al             
                    POP            ds                 
                    JMP            L1                 ;Synthetic inst
}

