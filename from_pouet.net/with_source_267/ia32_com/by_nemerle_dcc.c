/*
 * Input file	: from_pouet.net/with_source_267/ia32_com/subject.exe
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

                    PUSH           0A3FCh             
                    POP            es                 
                    MOV            dx, 3C8h           
                    XOR            al, 0              
                    OUT            dx, al             
                    INC            dl                 

               L1:  OUT            dx, al             
                    ROR            ax, 8              
                    OUT            dx, al             
                    OR             al, ah             
                    OUT            dx, al             
                    ROR            ax, 8              
                    INC            al                 
                    ADD            ax, 2              
                    JNE            L1                 

               L2:  MOV            [1A5h], dx         
                    MOV            di, 82DCh          
                    MOV            si, 7D00h          
                    XOR            cx, 0              
                    MOV            [1A7h], cl         

               L3:  INC            byte ptr [1A7h]    
                    MOV            bx, [1A7h]         
                    SUB            [1A5h], bx         
                    MOV            bx, [1A5h]         
                    SHR            bx, 2              
                    MOV            ax, 78h            
                    MUL            bx                 
                    MOV            [1A9h], ax         
                    XOR            dx, 0              

               L4:  MOV            bx, [1A9h]         
                    ROR            bx, 8              
                    MOV            al, dl             
                    SUB            al, [1ACh]         
                    XOR            al, bl             
                    MOV            es:[si], al        
                    INC            si                 
                    MOV            al, dl             
                    XOR            al, 0              
                    SUB            [1A9h], dx         
                    INC            dx                 
                    CMP            dx, 140h           
                    JNE            L4                 
                    SUB            si, 280h           
                    INC            cl                 
                    CMP            cl, 64h            
                    JNE            L3                 
                    MOV            ah, 1              
                    INT            16h                	/* Unknown int */

                    JNE            L5                 
                    ADD            word ptr [1ABh], 200h
                    MOV            dx, 3DAh           

               L6:  IN             al, dx             
                    AND            al, 8              
                    JNE            L6                 

               L7:  IN             al, dx             
                    AND            al, 8              
                    JE             L7                 

               L5:  MOV            ax, 3              
                    INT            10h                	/* Unknown int */

                    MOV            ah, 9              
                    MOV            dx, 1ADh           
                    INT            21h                	/* Display string */

                    RET                               
}

