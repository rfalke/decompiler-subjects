/*
 * Input file	: from_pouet.net/with_source_286/ia32_com/subject.exe
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

                    MOV            dx, 3C8h           
                    MOV            al, 0              
                    OUT            dx, al             
                    INC            dx                 
                    MOV            cl, 40h            

               L1:  MOV            al, 40h            
                    SUB            al, cl             
                    SHR            al, 1              
                    OUT            dx, al             
                    XOR            al, 0              
                    OUT            dx, al             
                    OUT            dx, al             
                    LOOP           L1                 
                    MOV            cl, 40h            

               L2:  MOV            al, 40h            
                    SUB            al, cl             
                    SHR            al, 1              
                    PUSH           ax                 
                    ADD            al, 1Fh            
                    OUT            dx, al             
                    POP            ax                 
                    OUT            dx, al             
                    XOR            al, 0              
                    OUT            dx, al             
                    LOOP           L2                 
                    MOV            cl, 40h            

               L3:  MOV            al, 3Fh            
                    OUT            dx, al             
                    SUB            al, cl             
                    SHR            al, 1              
                    ADD            al, 1Fh            
                    OUT            dx, al             
                    XOR            al, 0              
                    OUT            dx, al             
                    LOOP           L3                 
                    MOV            di, 200h           
                    MOV            cx, 3F20h          
                    REP STOSW                         
                    MOV            ah, 2Ch            
                    INT            21h                	/* Get time */

                    MOV            [8040h], dx        

               L4:  MOV            si, 200h           
                    PUSH           si                 
                    MOV            cx, 7D00h          
                    PUSH           0A000h             
                    POP            es                 
                    XOR            di, 0              
                    MOV            bl, 0A0h           

               L5:  LODSB                             
                    MOV            ah, al             
                    STOSW                             
                    DEC            bx                 
                    JNE            L6                 
                    SUB            si, 0A0h           
                    MOV            bx, 140h           

               L6:  LOOP           L5                 
                    PUSH           ds                 
                    POP            es                 
                    POP            di                 
                    PUSH           di                 
                    PUSH           si                 
                    ADD            si, 0A0h           
                    MOV            cx, 3E80h          
                    PUSH           cx                 
                    XOR            ax, 0              

               L7:  LODSB                             
                    MOV            bl, [si]           
                    ADD            ax, bx             
                    MOV            bl, [si-2]         
                    ADD            ax, bx             
                    MOV            bl, [si+9Fh]       
                    ADD            ax, bx             
                    SHR            ax, 2              
                    OR             ax, ax             
                    JE             L8                 
                    DEC            ax                 
                    JE             L8                 
                    DEC            ax                 

               L8:  STOSB                             
                    LOOP           L7                 
                    MOV            dx, 3DAh           

               L9:  IN             al, dx             
                    TEST           al, 8              
                    JE             L9                 

               L10: IN             al, dx             
                    TEST           al, 8              
                    JNE            L10                
                    POP            cx                 
                    POP            di                 
                    POP            si                 
                    REP MOVSB                         
                    MOV            cl, 50h            
                    PUSH           cx                 
                    MOV            si, 7FA0h          
                    REP MOVSW                         
                    POP            cx                 
                    MOV            ah, 1              
                    INT            16h                	/* Unknown int */

                    JNE            L11                

               L12: MOV            ax, [8040h]        
                    MOV            dx, ax             
                    MOV            bl, ah             
                    MOV            ah, al             
                    XOR            al, 0              
                    RCR            bl, 1              
                    RCR            ah, 1              
                    RCR            al, 1              
                    ADC            ax, dx             
                    ADD            ah, 63h            
                    ADC            al, 36h            
                    MOV            [8040h], ax        
                    XOR            dx, 0              
                    MOV            bl, 0A0h           
                    MOV            tmp, dx:ax         ;Synthetic inst
                    DIV            bx                 
                    MOD            bx                 ;Synthetic inst
                    MOV            bx, dx             
                    OR             al, ah             
                    SHR            ax, 1              
                    MOV            [bx+7FA0h], al     
                    LOOP           L12                

               L13: JMP            L4                 

               L11: XOR            ax, 0              
                    REP STOSW                         
                    MOV            cl, [1FFh]         
                    DEC            byte ptr [1FFh]    
                    LOOP           L13                
                    MOV            al, 3              
                    INT            10h                	/* Unknown int */

                    INT            20h                ;Exit to DOS	/* Exit */

}

