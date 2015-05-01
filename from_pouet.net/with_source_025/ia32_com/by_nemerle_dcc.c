/*
 * Input file	: from_pouet.net/with_source_025/ia32_com/subject.exe
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

                    LES            bp, dword ptr[bx]  
                    RCL            al, cl             
                    MOV            cx, di             
                    MOV            tmp, al            ;Synthetic inst
                    MOV            al, es:[di]        ;Synthetic inst
                    MOV            es:[di], tmp       ;Synthetic inst
                    SAR            ax, 1              
                    ADC            al, ch             
                    XOR            cx, di             

               L1:  MOV            tmp, al            ;Synthetic inst
                    MOV            al, es:[di]        ;Synthetic inst
                    MOV            es:[di], tmp       ;Synthetic inst
                    ADC            ax, di             
                    DEC            di                 
                    JMP            L1                 
}

