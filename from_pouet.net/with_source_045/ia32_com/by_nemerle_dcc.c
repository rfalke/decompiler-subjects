/*
 * Input file	: from_pouet.net/with_source_045/ia32_com/subject.exe
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

                    LDS            ax, dword ptr[di+2]
                    INC            ax                 
                    AAS                               

               L1:  ADC            al, [bx-141h]      
                    ADD            al, [bx+di]        
                    DEC            bx                 
                    CMP            [bx], al           
                    CMC                               
                    SBB            [bx], dh           
                    SBB            bx, bp             
                    IN             al, 60h            
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, cx             ;Synthetic inst
                    MOV            cx, tmp            ;Synthetic inst
                    IMUL           si                 
                    XLAT                              
                    LOOP           L2                 
                    RET                               

               L2:  INC            bp                 
                    ADD            al, [bx+si+3Fh]    
                    JMP            L1                 ;Synthetic inst
}

