/*
 * Input file	: from_pouet.net/with_source_105/ia32_com/subject.exe
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

                    PUSH           0A000h             
                    POP            es                 
                    MOV            dx, 3C9h           

               L1:  OUT            dx, al             
                    INC            ax                 
                    JNE            L1                 

               L2:  MOV            ax, di             
                    XOR            dx, dx             
                    MOV            bx, 140h           
                    MOV            tmp, dx:ax         ;Synthetic inst
                    DIV            bx                 
                    MOD            bx                 ;Synthetic inst
                    SUB            ax, 64h            
                    SUB            dx, 0A0h           
                    JG             L3                 
                    NEG            dx                 

               L3:  CMP            ax, dx             
                    JG             L4                 
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, dx             ;Synthetic inst
                    MOV            dx, tmp            ;Synthetic inst

               L4:  INC            ax                 
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, bx             ;Synthetic inst
                    MOV            bx, tmp            ;Synthetic inst
                    MOV            ax, 0FA0h          
                    CWD                               
                    MOV            tmp, dx:ax         ;Synthetic inst
                    DIV            bx                 
                    MOD            bx                 ;Synthetic inst
                    ADD            ax, si             
                    STOSB                             
                    LOOP           L2                 
                    INC            si                 
                    IN             al, 60h            
                    CMP            al, 1              
                    JNE            L2                 
                    RET                               
}

