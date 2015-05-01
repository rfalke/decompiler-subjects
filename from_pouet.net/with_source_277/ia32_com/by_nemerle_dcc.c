/*
 * Input file	: from_pouet.net/with_source_277/ia32_com/subject.exe
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
                    MOV            ax, 13h            
                    INT            10h                	/* Unknown int */

                    MOV            si, 1BCh           

               L1:  LODSW                             
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, dx             ;Synthetic inst
                    MOV            dx, tmp            ;Synthetic inst
                    MOV            ah, 2              
                    INT            10h                	/* Unknown int */


               L2:  LODSB                             
                    MOV            dl, al             
                    INT            21h                	/* Character output */

                    CMP            dl, 0              
                    JNE            L2                 
                    CMP            dh, 0              
                    JNE            L1                 
                    MOV            dx, 3C9h           

               L3:  OUT            dx, al             
                    NOT            al                 
                    ROL            ax, 1              
                    OUT            dx, al             
                    ROR            ax, 1              
                    OUT            dx, al             
                    NOT            al                 
                    INC            ax                 
                    JNE            L3                 
                    PUSH           0A000h             
                    POP            es                 
                    PUSH           es                 
                    POP            ds                 
                    XOR            di, 0              
                    MOV            bl, 0CCh           

               L4:  MOV            cx, 140h           

               L5:  MOV            al, [di]           
                    OR             al, al             
                    MOV            al, cl             
                    JNE            L6                 
                    OR             al, bl             
                    AAM                               
                    OR             al, ah             
                    AND            al, 3Fh            

               L7:  STOSB                             
                    LOOP           L5                 
                    DEC            bx                 
                    JNE            L4                 
                    MOV            dl, 31h            
                    MOV            al, 3Fh            
                    OUT            dx, al             
                    XOR            si, 0              
                    MOV            di, 0FA00h         
                    MOV            cx, 140h           
                    PUSH           di                 
                    PUSH           si                 
                    PUSH           cx                 

               L8:  LODSB                             
                    STOSB                             
                    LOOP           L8                 
                    POP            si                 
                    POP            di                 
                    POP            cx                 
                    PUSH           177h               
                    MOV            dl, 0DAh           

               L9:  IN             ax, dx             
                    TEST           al, 8              
                    JE             L9                 
                    RET                               

               L6:  SBB            al, bl             
                    SBB            al, cl             
                    JMP            L7                 ;Synthetic inst
}

