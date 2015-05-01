/*
 * Input file	: from_pouet.net/with_source_050/ia32_com/subject.exe
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

                    MOV            dx, 3D4h           
                    MOV            ah, 20h            
                    OUT            dx, ax             
                    MOV            dl, 0C9h           
                    LES            ax, dword ptr[bx]  

               L1:  OUT            dx, al             
                    ADC            al, 95h            
                    JNE            L1                 

               L2:  MOV            ax, cx             
                    XOR            al, ah             
                    STOSB                             
                    LOOP           L2                 
                    IN             al, 60h            
                    DEC            ax                 
                    JNE            L1                 
                    RET                               
}

