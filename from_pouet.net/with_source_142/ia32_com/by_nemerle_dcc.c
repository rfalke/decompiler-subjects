/*
 * Input file	: from_pouet.net/with_source_142/ia32_com/subject.exe
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
                    MOV            si, 1              
                    MOV            bp, 1              
                    MOV            bx, 64h            
                    SHL            bx, 7              

               L1:  ADD            cx, 0Fh            
                    ADD            bx, cx             
                    MOV            ax, bx             
                    SHR            ax, 7              
                    MOV            dx, ax             
                    ADD            si, bp             
                    CMP            si, 13Fh           
                    JAE            L2                 
                    NEG            bp                 

               L2:  CMP            si, 0              
                    JBE            L3                 
                    NEG            bp                 

               L3:  CMP            dl, 0C7h           
                    JBE            L4                 
                    NEG            cx                 
                    MOV            bx, 0C6h           
                    SHL            bx, 7              

               L4:  MOV            ax, dx             
                    SHL            ax, 6              
                    MOV            di, ax             
                    SHL            ax, 2              
                    ADD            di, ax             
                    ADD            di, si             
                    MOV            al, 0Fh            
                    STOSB                             
                    DEC            di                 
                    MOV            dx, 3DAh           

               L5:  IN             al, dx             
                    AND            al, 8              
                    JNE            L5                 

               L6:  IN             al, dx             
                    AND            al, 8              
                    JE             L6                 
                    XOR            ax, 0              
                    STOSB                             
                    IN             al, 60h            
                    DEC            al                 
                    JNE            L1                 
                    MOV            al, 3              
                    INT            10h                	/* Unknown int */

                    INT            20h                ;Exit to DOS	/* Exit */

}

