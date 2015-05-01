/*
 * Input file	: from_pouet.net/with_source_320/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


int proc_2 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* dx */
    loc1 = 904;

    do {
    } while (//*failed*//);
    loc1 = (loc1 + 1);

    do {
    } while (//*failed*//);
    return (loc1);
}


int proc_1 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* al */
int loc2; /* ah */
int loc3; /* ax */
int loc4; /* si */
    loc1 = 54;
    loc1 = 0;
    loc1 = loc2;
    loc3 = 0x2508;
    loc3 = 244;

    do {
        loc3 = proc_2 ();
    } while ((--loc3 != 0));
    loc4 = 622;

    do {
        loc2 = *loc4;

        do {
            loc3 = (proc_2 () + 1);
        } while (((loc1 & 31) != 0));
    } while (((loc1 & loc1) != 0));
    return (loc3);
}


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 * Contains impure code.
 * Contains instructions not normally used by compilers.
 */
{
                    MOV            si, 248h           
                    LODSW                             
                    INT            21h                	/* Terminate process */

                    LODSW                             
                    MOV            [si-4], bx         
                    MOV            [si-2], es         
                    INT            10h                	/* Unknown int */

                    MOV            dx, 1E6h           
                    MOV            ah, 40h            
                    CALL           near ptr proc_1    

               L1:  MOV            bx, 8080h          ;Accessed as data 
                    MOV            di, bx             
                    NOT            di                 
                    ADD            di, di             
                    AND            di, 0Fh            
                    MOV            cl, 3              
                    SHR            bx, cl             

               L2:  AND            bx, 1Fh            
                    MOV            cl, [bx+2DEh]      
                    MOV            si, cx             
                    INC            bx                 
                    MOV            cl, 3              
                    SHL            si, cl             
                    PUSH           bx                 
                    MOV            al, [119h]         ;Impure operand 
                    ADD            ax, di             
                    CWD                               
                    XOR            al, ah             
                    MOV            bx, ax             
                    PUSH           ds                 
                    LDS            ax, dword ptr[2DAh]
                    PUSH           ds                 
                    MOV            bh, 3              
                    INT            10h                	/* Unknown int */

                    MOV            dx, 32h            

               L3:  MOV            al, es:[bp+si]     
                    MOV            cx, 8              

               L4:  CWD                               
                    AND            ah, 3              
                    MOV            [di], ah           
                    INC            di                 
                    INC            di                 
                    SHL            ax, 1              
                    LOOP           L4                 
                    ADD            di, 90h            
                    ADD            bh, bl             
                    SBB            si, 0FFFFh         
                    DEC            dx                 
                    JNE            L3                 
                    POP            es                 
                    POP            ds                 
                    POP            bx                 
                    SUB            di, 1F30h          
                    CMP            di, 0A0h           
                    JB             L2                 
                    MOV            di, cx             
                    MOV            dl, 99h            
                    MOV            ax, di             
                    MOV            cl, 0Fh            
                    REP STOSB                         

               L5:  MOV            ax, [118h]         
                    MOV            bx, dx             
                    MOV            cl, 40h            

               L6:  ADD            ax, bx             
                    ADD            bx, dx             
                    PUSH           ax                 
                    MOV            al, ah             
                    AND            al, 49h            
                    XOR            al, 0Eh            
                    STOSB                             
                    POP            ax                 
                    INC            di                 
                    LOOP           L6                 
                    MOV            ax, cx             
                    MOV            cl, 10h            
                    REP STOSW                         
                    SUB            dl, 3              
                    JNE            L5                 
                    MOV            es, ax             
                    TEST           byte ptr es:[417h], 7
                    JNE            L7                 

               L7:  LDS            dx, dword ptr[248h]
                    XOR            ax, 0              
                    CLI                               
                    MOV            al, 36h            
                    OUT            43h, al            
                    XOR            al, 0              
                    OUT            40h, al            
                    MOV            al, ah             
                    OUT            40h, al            
                    MOV            ax, 2508h          
                    INT            21h                	/* Set interrupt vector */

                    MOV            ax, 0F4h           

               L8:  CALL           near ptr proc_2    
                    DEC            ax                 
                    JNE            L8                 
                    MOV            si, 26Eh           

               L9:  MOV            ah, [si]           
                    INC            si                 

               L10: CALL           near ptr proc_2    
                    INC            ax                 
                    TEST           al, 1Fh            
                    JNE            L10                
                    TEST           al, al             
                    JNE            L9                 
                    STI                               
                    RET                               
}

