/*
 * Input file	: from_pouet.net/with_source_133/ia32_com/subject.exe
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
                    PUSH           0A000h             
                    POP            es                 
                    MOV            al, 13h            
                    INT            10h                	/* Unknown int */

                    XOR            cx, 0              
                    MOV            bl, 14h            
                    SHL            bx, 7              

               L1:  ADD            cx, 0Fh            
                    ADD            bx, cx             
                    MOV            ax, bx             
                    SHR            ax, 7              
                    MOV            dx, ax             
                    CMP            dl, 0C7h           
                    JBE            L2                 
                    NEG            cx                 
                    MOV            bl, 0C6h           
                    SHL            bx, 7              

               L2:  MOV            ax, dx             
                    SHL            ax, 6              
                    MOV            di, ax             
                    SHL            ax, 2              
                    ADD            di, ax             
                    ADD            di, 0A0h           
                    MOV            al, 0Fh            
                    STOSB                             
                    DEC            di                 
                    MOV            dx, 3DAh           

               L3:  IN             al, dx             
                    AND            al, 8              
                    JNE            L3                 

               L4:  IN             al, dx             
                    AND            al, 8              
                    JE             L4                 
                    XOR            ax, 0              
                    STOSB                             
                    IN             al, 60h            
                    DEC            al                 
                    JNE            L1                 
                    MOV            al, 3              
                    INT            10h                	/* Unknown int */

                    INT            20h                ;Exit to DOS	/* Exit */

}

