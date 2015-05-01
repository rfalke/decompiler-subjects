/*
 * Input file	: from_pouet.net/with_source_118/ia32_com/subject.exe
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

                    LDS            cx, dword ptr[bx]  

               L1:  CWD                               
                    MOV            di, 140h           
                    MOV            ax, bx             
                    MOV            tmp, dx:ax         ;Synthetic inst
                    IDIV           di                 
                    MOD            di                 ;Synthetic inst
                    MOV            cl, 22h            
                    MOV            bp, ax             
                    ADD            di, sp             

               L2:  ADD            di, dx             
                    ADD            bp, ax             
                    PUSHA                             
                    ADD            sp, 7              
                    IMUL           ax, [0], 2         
                    IMUL           bp                 
                    PUSH           dx                 
                    PUSH           ax                 
                    LEA            ax, [bp+di]        
                    SUB            di, bp             
                    IMUL           di                 
                    PUSH           dx                 
                    PUSH           ax                 
                    INC            sp                 
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, bp             ;Synthetic inst
                    MOV            bp, tmp            ;Synthetic inst
                    IMUL           ax                 
                    TEST           bl, dh             
                    POPA                              
                    LOOPE          L2                 
                    MOV            [bx], cl           
                    DEC            bx                 
                    JNE            L1                 
                    IN             al, 60h            
                    DEC            ax                 
                    PUSH           ax                 
                    JNE            L1                 
                    RET                               
}

