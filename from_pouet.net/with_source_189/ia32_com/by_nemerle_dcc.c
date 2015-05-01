/*
 * Input file	: from_pouet.net/with_source_189/ia32_com/subject.exe
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
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, cx             ;Synthetic inst
                    MOV            cx, tmp            ;Synthetic inst
                    MOV            al, 13h            
                    INT            10h                	/* Unknown int */

                    PUSH           8000h              
                    POP            es                 

               L1:  MOV            ax, di             
                    XOR            al, ah             
                    AND            al, 3Fh            
                    SHL            al, 2              
                    STOSB                             
                    LOOP           L1                 
                    MOV            dx, 3C8h           
                    MOV            ax, 40h            
                    OUT            dx, al             
                    INC            dx                 
                    MOV            bx, ax             

               L2:  XOR            al, 0              
                    OUT            dx, al             
                    MOV            al, bl             
                    SHR            al, 1              
                    OUT            dx, al             
                    SHR            al, 1              
                    OUT            dx, al             
                    INC            bl                 
                    JNE            L2                 
                    MOV            bl, 40h            

               L3:  DEC            bl                 
                    MOV            al, cl             
                    OUT            dx, al             
                    OUT            dx, al             
                    MOV            al, bl             
                    OUT            dx, al             
                    JNE            L3                 
                    XOR            di, 0              
                    PUSH           9000h              
                    POP            ds                 
                    PUSH           0A000h             
                    POP            es                 

               L4:  MOV            [di], ch           
                    ADD            cx, si             
                    MOV            ax, 28h            
                    IMUL           cx                 
                    SUB            si, dx             
                    INC            di                 
                    JNE            L4                 

               L5:  ADD            di, 4              
                    XOR            si, 0              
                    MOV            bl, 0C8h           

               L6:  MOV            cx, 140h           

               L7:  PUSH           si                 
                    PUSH           di                 
                    MOV            si, 3              
                    XOR            bp, 0              

               L8:  MOV            al, bl             
                    SUB            al, 64h            
                    SUB            al, [di]           
                    IMUL           al                 
                    MOV            dx, ax             
                    MOV            al, cl             
                    SUB            al, 0A0h           
                    SHR            di, 1              
                    SUB            al, [di+40h]       
                    IMUL           al                 
                    ADD            ax, dx             
                    PUSH           bp                 
                    OR             al, 3              
                    MOV            bp, ax             
                    XOR            dx, dx             
                    MOV            ax, 0FFFFh         
                    MOV            tmp, dx:ax         ;Synthetic inst
                    IDIV           bp                 
                    MOD            bp                 ;Synthetic inst
                    POP            bp                 
                    ADD            bp, ax             
                    DEC            si                 
                    JNE            L8                 
                    MOV            ax, bp             
                    TEST           al, 80h            
                    JNE            L9                 
                    PUSH           8000h              
                    POP            es                 
                    POP            di                 
                    POP            si                 
                    MOV            al, es:[bp+si]     
                    SHR            al, 2              
                    PUSH           si                 
                    PUSH           di                 
                    PUSH           0A000h             
                    POP            es                 

               L9:  OR             ah, ah             
                    JE             L10                
                    MOV            al, 0FFh           

               L10: POP            di                 
                    POP            si                 
                    MOV            es:[si], al        
                    INC            si                 
                    DEC            cx                 
                    JNE            L7                 
                    DEC            bx                 
                    JNE            L6                 
                    MOV            dx, 3DAh           

               L11: IN             al, dx             
                    AND            al, 8              
                    JE             L11                
                    IN             al, 60h            
                    DEC            ax                 
                    JNE            L5                 
                    MOV            al, 3              
                    INT            10h                	/* Unknown int */

                    RET                               
}

