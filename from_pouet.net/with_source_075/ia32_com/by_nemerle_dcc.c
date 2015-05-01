/*
 * Input file	: from_pouet.net/with_source_075/ia32_com/subject.exe
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
                    MOV            al, 12h            
                    INT            10h                	/* Unknown int */

                    XOR            bp, 0              
                    MOV            cx, 1E0h           

               L1:  PUSH           cx                 
                    MOV            cx, 27Fh           
                    SUB            bp, cx             

               L2:  PUSH           cx                 
                    XOR            cx, 0              
                    MUL            bx                 

               L3:  PUSH           dx                 
                    MOV            ax, bx             
                    SUB            ax, dx             
                    ADD            dx, bx             
                    IMUL           dx                 
                    POP            dx                 
                    ADD            ax, bp             
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, bx             ;Synthetic inst
                    MOV            bx, tmp            ;Synthetic inst
                    JG             L4                 
                    ADD            dx, di             
                    NOT            cl                 
                    JNE            L3                 

               L4:  MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, cx             ;Synthetic inst
                    MOV            cx, tmp            ;Synthetic inst
                    POP            cx                 
                    POP            dx                 
                    PUSH           dx                 
                    XOR            bx, 0              
                    MOV            ah, 0Ch            
                    INT            10h                	/* Unknown int */

                    INC            bp                 
                    LOOP           L2                 
                    INC            di                 
                    POP            cx                 
                    LOOP           L1                 
                    MUL            cx                 
                    INT            16h                	/* Unknown int */

                    RET                               
}

