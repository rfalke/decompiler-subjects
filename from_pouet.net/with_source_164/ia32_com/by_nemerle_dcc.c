/*
 * Input file	: from_pouet.net/with_source_164/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start (int arg0)
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
                    PUSH           0A000h             
                    POP            ds                 
                    MOV            al, 13h            
                    INT            10h                	/* Unknown int */

                    PUSH           1                  
                    PUSH           140h               
                    MOV            bp, sp             
                    MOV            cl, 0FEh           
                    MOV            dx, 3C9h           

               L1:  XOR            al, 0              
                    OUT            dx, al             
                    MOV            ax, cx             
                    SUB            ax, 7Fh            
                    JG             L2                 
                    NEG            al                 

               L2:  SHR            al, 1              
                    SUB            al, 3Fh            
                    NEG            al                 
                    OUT            dx, al             
                    OUT            dx, al             
                    LOOP           L1                 
                    XOR            di, 0              

               L3:  PUSHA                             
                    MOV            cx, 27h            

               L4:  PUSHA                             
                    MOV            cx, 27h            

               L5:  INC            byte ptr [di]      
                    INC            di                 
                    LOOP           L5                 
                    POPA                              
                    ADD            di, 140h           
                    LOOP           L4                 
                    POPA                              
                    ADD            di, [bp+2]         
                    ADD            di, [bp]           
                    MOV            ax, di             
                    MOV            bx, 140h           
                    XOR            dx, 0              
                    MOV            tmp, dx:ax         ;Synthetic inst
                    DIV            bx                 
                    MOD            bx                 ;Synthetic inst
                    CMP            ax, 0              
                    JLE            L6                 
                    CMP            ax, 0A1h           
                    JGE            L6                 

               L7:  CMP            dx, 0              
                    JLE            L8                 
                    CMP            dx, 119h           
                    JGE            L8                 

               L9:  IN             al, 60h            
                    CMP            al, 1              
                    JNE            L3                 
                    INT            20h                ;Exit to DOS	/* Exit */


               L8:  NEG            word ptr [bp+2]    
                    JMP            L9                 ;Synthetic inst

               L6:  NEG            word ptr [bp]      
                    JMP            L7                 ;Synthetic inst
}

