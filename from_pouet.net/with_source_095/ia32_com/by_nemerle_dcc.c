/*
 * Input file	: from_pouet.net/with_source_095/ia32_com/subject.exe
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

                    LES            di, dword ptr[bx]  
                    MOV            ds, bx             
                    MOV            al, 20h            
                    MOV            dx, 3C8h           
                    OUT            dx, al             
                    INC            dx                 

               L1:  OUT            dx, al             
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, bx             ;Synthetic inst
                    MOV            bx, tmp            ;Synthetic inst
                    OUT            dx, al             
                    OUT            dx, al             
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, bx             ;Synthetic inst
                    MOV            bx, tmp            ;Synthetic inst
                    INC            ax                 
                    AND            al, 7Fh            
                    JNE            L2                 
                    OUT            dx, al             

               L2:  LOOP           L1                 

               L3:  MOV            dx, 0CCh           

               L4:  MOV            cx, 13Fh           

               L5:  MOV            al, cl             
                    TEST           bl, 40h            
                    JNE            L6                 
                    OR             al, dl             
                    CMP            ax, 0C232h         

               L7:  XOR            al, bl             
                    STOSB                             
                    LOOP           L5                 
                    DEC            dx                 
                    JNS            L4                 
                    MOV            bl, [46Ch]         
                    MOV            di, bx             
                    NOT            di                 
                    JMP            L3                 

               L6:  XOR            al, dl             
                    JMP            L7                 ;Synthetic inst
}

