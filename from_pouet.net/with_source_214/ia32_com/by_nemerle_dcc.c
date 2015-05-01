/*
 * Input file	: from_pouet.net/with_source_214/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 * Contains coprocessor instructions.
 */
{
                    MOV            al, 13h            
                    INT            10h                	/* Unknown int */

                    MOV            dx, 3C8h           
                    XOR            al, 0              
                    OUT            dx, al             
                    INC            dx                 
                    MOV            cl, 40h            

               L1:  MOV            al, cl             
                    NEG            al                 
                    OUT            dx, al             
                    XOR            al, 0              
                    OUT            dx, al             
                    OUT            dx, al             
                    LOOP           L1                 
                    MOV            cl, 40h            

               L2:  XOR            al, 0              
                    OUT            dx, al             
                    OUT            dx, al             
                    MOV            al, cl             
                    DEC            al                 
                    OUT            dx, al             
                    LOOP           L2                 
                    MOV            cl, 40h            

               L3:  XOR            al, 0              
                    OUT            dx, al             
                    MOV            al, cl             
                    NEG            al                 
                    OUT            dx, al             
                    XOR            al, 0              
                    OUT            dx, al             
                    LOOP           L3                 
                    MOV            cl, 40h            

               L4:  MOV            al, cl             
                    DEC            al                 
                    OUT            dx, al             
                    OUT            dx, al             
                    XOR            al, 0              
                    OUT            dx, al             
                    LOOP           L4                 
                    MOV            ah, 0A0h           
                    MOV            es, ax             

               L5:  XOR            ax, 0              
                    MOV            di, ax             
                    WAIT                              
                    ESC            FINIT              
                    ESC            FILD uint16_t  ptr [1FBh]
                    ESC            FMUL dword ptr [1F5h]
                    ESC            FSINCOS            
                    ESC            FIMUL uint16_t  ptr [1F9h]
                    ESC            FISTP uint16_t  ptr [203h]
                    ESC            FIMUL uint16_t  ptr [1F9h]
                    ESC            FISTP uint16_t  ptr [201h]
                    MOV            ax, [201h]         
                    MOV            bx, 0FF60h         
                    MUL            bx                 
                    MOV            [1FDh], ax         
                    MOV            ax, [203h]         
                    MOV            bx, 0FF9Ch         
                    MUL            bx                 
                    ADD            [1FDh], ax         
                    MOV            ax, [201h]         
                    MOV            bx, 64h            
                    MUL            bx                 
                    MOV            [1FFh], ax         
                    MOV            ax, [203h]         
                    MOV            bx, 0FF60h         
                    MUL            bx                 
                    ADD            [1FFh], ax         
                    MOV            dx, 3DAh           

               L6:  IN             al, dx             
                    AND            al, 8              
                    JE             L6                 
                    MOV            cx, 0C8h           

               L7:  PUSH           cx                 
                    INC            word ptr [201h]    
                    INC            word ptr [203h]    
                    MOV            ax, [203h]         
                    ADD            [1FDh], ax         
                    MOV            ax, [201h]         
                    SUB            [1FFh], ax         
                    MOV            ax, [1FDh]         
                    MOV            [205h], ax         
                    MOV            ax, [1FFh]         
                    MOV            [207h], ax         
                    MOV            cx, 140h           

               L8:  MOV            ax, [201h]         
                    ADD            [205h], ax         
                    MOV            ax, [203h]         
                    ADD            [207h], ax         
                    MOV            ax, [205h]         
                    XOR            ax, [207h]         
                    MOV            al, ah             
                    STOSB                             
                    LOOP           L8                 
                    POP            cx                 
                    LOOP           L7                 
                    INC            word ptr [1FBh]    
                    MOV            ah, 1              
                    INT            16h                	/* Unknown int */

                    JNE            L9                 

               L9:  MOV            ax, 3              
                    INT            10h                	/* Unknown int */

                    RET                               
}

