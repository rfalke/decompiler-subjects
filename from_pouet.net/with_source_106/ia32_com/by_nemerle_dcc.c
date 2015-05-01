/*
 * Input file	: from_pouet.net/with_source_106/ia32_com/subject.exe
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
                    MOV            bl, 3              

               L1:  MOV            cl, 0C8h           
                    XOR            di, 0              
                    MOV            ds, di             

               L2:  MOV            ax, cx             
                    MUL            cx                 
                    MOV            si, 280h           

               L3:  ADD            ax, 281h           
                    SUB            ax, si             
                    MOV            tmp, dx:ax         ;Synthetic inst
                    DIV            bx                 
                    MOD            bx                 ;Synthetic inst
                    MOV            ax, dx             
                    AND            al, 0Fh            
                    STOSB                             
                    XOR            ax, 0              
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, dx             ;Synthetic inst
                    MOV            dx, tmp            ;Synthetic inst
                    DEC            si                 
                    DEC            si                 
                    JNE            L3                 
                    LOOP           L2                 

               L4:  IN             al, 60h            
                    DEC            ax                 
                    JE             L5                 
                    MOV            al, [46Ch]         
                    AND            al, 0Fh            
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, dx             ;Synthetic inst
                    MOV            dx, tmp            ;Synthetic inst
                    SUB            al, dl             
                    JBE            L4                 
                    INC            bl                 
                    JNE            L1                 

               L5:  RET                               
}

