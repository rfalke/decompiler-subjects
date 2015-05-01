/*
 * Input file	: from_pouet.net/with_source_044/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
                    MOV            al, 13h            
                    INT            10h                	/* Unknown int */

                    LDS            bx, dword ptr[bx]  

               L1:  CMP            [bx], cl           
                    ADC            [bx], ah           
                    IMUL           bx, [0], 0FFE5h    
                    MOV            cl, [bx]           
                    ADD            cl, [bx+di]        
                    ADD            cl, [bx-141h]      
                    ADD            cl, [bx+si+3Fh]    
                    DEC            bx                 
                    IN             al, 60h            
                    DEC            al                 
                    JNE            L1                 
                    RET                               
}

