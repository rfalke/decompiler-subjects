/*
 * Input file	: from_pouet.net/with_source_021/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 * Contains impure code.
 * Contains instructions not normally used by compilers.
 */
{
                    MOV            al, 13h            
                    INT            10h                ;Accessed as data 	/* Unknown int */

                    LES            bp, dword ptr[bx]  

               L1:  MOV            al, [103h]         ;Impure operand 
                    AAA                               
                    ADC            ax, di             
                    IMUL           al                 
                    SBB            ax, bx             
                    STOSB                             
                    DEC            dx                 
                    JNE            L1                 
                    DEC            bx                 
                    ADC            cx, bp             
                    ADC            ah, al             ;Accessed as data 
                    DAS                               
                    JMP            L1                 ;Synthetic inst
}

