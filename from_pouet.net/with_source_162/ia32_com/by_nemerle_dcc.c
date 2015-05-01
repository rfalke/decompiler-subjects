/*
 * Input file	: from_pouet.net/with_source_162/ia32_com/subject.exe
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
                    MOV            ds, ax             
                    PUSH           0A000h             
                    POP            es                 

               L1:  INC            si                 
                    MOV            di, 100h           

               L2:  MOV            bx, di             
                    MOV            cl, bl             
                    AND            bl, 1Fh            
                    SHR            cx, 5              
                    MOV            dx, 14h            
                    SUB            dx, cx             
                    MOV            tmp, dx:ax         ;Synthetic inst
                    DIV            bx                 
                    MOD            bx                 ;Synthetic inst
                    ADD            ax, si             
                    AND            al, 1Fh            
                    SUB            al, 10h            
                    IMUL           al                 
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, bp             ;Synthetic inst
                    MOV            bp, tmp            ;Synthetic inst
                    LEA            ax, [bx-10h]       
                    IMUL           al                 
                    ADD            ax, bp             
                    SHR            ax, 5              
                    CMP            al, cl             
                    JB             L3                 
                    MOV            [bx], al           

               L3:  INC            di                 
                    JNE            L2                 
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, bx             ;Synthetic inst
                    MOV            bx, tmp            ;Synthetic inst

               L4:  MOV            al, bh             
                    CWD                               
                    XOR            al, ah             
                    CWD                               
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, cx             ;Synthetic inst
                    MOV            cx, tmp            ;Synthetic inst
                    MOV            al, bl             
                    CWD                               
                    XOR            al, ah             
                    ADD            cl, al             
                    INC            cx                 
                    MOV            ah, al             
                    CWD                               
                    MOV            tmp, dx:ax         ;Synthetic inst
                    IDIV           cx                 
                    MOD            cx                 ;Synthetic inst
                    SHR            ax, 2              
                    AND            ax, 1Fh            
                    PUSH           bx                 
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, bx             ;Synthetic inst
                    MOV            bx, tmp            ;Synthetic inst
                    MOV            bp, ax             
                    IMUL           al                 
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, bp             ;Synthetic inst
                    MOV            bp, tmp            ;Synthetic inst
                    IMUL           ax                 
                    ADD            bp, dx             
                    XOR            ax, 0              

               L5:  INC            ax                 
                    SUB            bp, ax             
                    SUB            bp, ax             
                    JNS            L5                 
                    MOV            tmp, bh            ;Synthetic inst
                    MOV            bh, al             ;Synthetic inst
                    MOV            al, tmp            ;Synthetic inst
                    XLAT                              
                    ADD            al, 10h            
                    POP            bx                 
                    MOV            es:[bx+649Fh], al  
                    INC            bx                 
                    JNE            L4                 
}

