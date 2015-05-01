/*
 * Input file	: from_pouet.net/with_source_111/ia32_com/subject.exe
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

                    LDS            cx, dword ptr[bx]  
                    MOV            dx, 3C9h           

               L1:  MOV            ax, cx             
                    OUT            dx, al             
                    SHR            ax, 1              
                    OUT            dx, al             
                    SHR            ax, 1              
                    OUT            dx, al             
                    LOOP           L1                 

               L2:  PUSH           cx                 
                    ADC            si, ax             
                    ADD            si, cx             
                    LODSB                             
                    SBB            al, [si]           
                    SAR            al, 1              
                    ADD            al, [si]           
                    DEC            ax                 
                    SHR            cl, cl             
                    ADC            cl, al             
                    ADD            cl, cl             
                    MOV            bx, di             
                    JS             L3                 
                    MOV            bx, 0FEC0h         

               L3:  JB             L4                 
                    XOR            bx, di             

               L4:  MOV            [bx+si], al        
                    POP            cx                 
                    LOOP           L2                 
                    IN             al, 60h            
                    CWD                               
                    DEC            ax                 
                    JNE            L2                 
                    INT            10h                	/* Unknown int */

                    RET                               
}

