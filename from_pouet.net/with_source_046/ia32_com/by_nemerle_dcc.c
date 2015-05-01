/*
 * Input file	: from_pouet.net/with_source_046/ia32_com/subject.exe
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

                    LDS            cx, dword ptr[di+2]
                    INC            ax                 
                    INC            ax                 

               L1:  JE             L2                 
                    SBB            [bx], dh           
                    OR             byte ptr [bx], 10h 

               L2:  ROL            bp, cl             
                    ADC            bx, bp             
                    IN             al, 60h            
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, cx             ;Synthetic inst
                    MOV            cx, tmp            ;Synthetic inst
                    IMUL           si                 
                    XLAT                              
                    ADD            al, [bx+di]        
                    DEC            bx                 
                    LOOP           L3                 
                    RET                               

               L3:  DEC            bp                 
                    ADD            al, [bx+si+40h]    
                    JMP            L1                 ;Synthetic inst
}

