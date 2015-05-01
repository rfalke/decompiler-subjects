/*
 * Input file	: from_pouet.net/with_source_110/ia32_com/subject.exe
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
                    SHR            al, 1              
                    OUT            dx, al             
                    SHR            al, 1              
                    OUT            dx, al             
                    LOOP           L1                 

               L2:  PUSH           cx                 
                    MOV            al, [si]           
                    SHR            cl, cl             
                    JAE            L3                 
                    SBB            bx, bx             
                    ADD            cl, al             
                    ADD            cl, cl             
                    JS             L4                 
                    MOV            bx, 140h           

               L4:  JAE            L5                 
                    NEG            bx                 

               L5:  DEC            byte ptr [si]      

               L3:  POP            cx                 
                    MOV            [bx+si], al        
                    ADD            si, cx             
                    ADC            si, ax             
                    LOOP           L2                 
                    IN             al, 60h            
                    CWD                               
                    DEC            ax                 
                    JNE            L2                 
                    MOV            al, 3              
                    INT            10h                	/* Unknown int */

                    RET                               
}

