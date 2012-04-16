LOCALS
.586p
pmmx

modoX = 320
modoY = 240
modoBpp = 32 

STACK32SIZE   = 4096
STACK16SIZE   = 128
DPMI_DATASIZE = 400h
GDTENTRIES    = 5

Kernel  SEGMENT BYTE PUBLIC USE16
        ASSUME CS:Kernel, DS:Code32


Entry16:
        mov ah,4ah
        mov bx,(16*1024) shr 4  ; 16k //suponemos que hay 16k al menos
        int 21h

        ;****** Inicializamos la VESA2.0 ******

        mov ax,Code32
        mov ds,ax

        call ES_after_stack

        mov eax,'2EBV'                ;VBE2 info please! ;)
        mov es:[di],eax


        mov ax,4f00h
        int 10h
        cmp ax,4fh
        jne no_vesa

        cmp word ptr es:[4],0200h
        jb no_vesa


        mov ax, word ptr es:[18]
        shl ax,6 ;*64 (video RAM)
        mov small VideoRAM,ax

        lfs si,dword ptr es:[14]   ;puntero a los modos de video
        ;bug-1, fs=es !!!! menos en mi bios!!! :G
        mov ax,es
        add ax,1024 shr 4
        mov es,ax

@scan_modos:
        mov ax,fs:[si]
        inc si
        inc si
        cmp ax,-1
        je @fin_modos
                        ;        or ah,ah
                        ;        jz @scan_modos
        mov cx,ax
        mov ax,4f01h
        xor di,di
        int 10h
        cmp ax,4fh
        jne @scan_modos

        mov al,es:[0]
        and al,81h      ;Soporta lineal y esta soportado ?
        cmp al,81h
;        test al,81h
        jne @scan_modos
        cmp word ptr es:[18],modoX
        jne @scan_modos
        cmp word ptr es:[20],modoY
        jne @scan_modos
        cmp byte ptr es:[25],modoBpp
        jne @scan_modos

        or cx,04000h    ;modo lineal

        mov small video_mode,cx

        mov eax,dword ptr es:[40]
        mov small VideoADDR,eax

        jmp @poner_modo

@fin_modos:
        lea dx,small NoMODE
        jmp exitprint       


@poner_modo:
        mov small video_mode,cx


;------------ DPMI -------------------------------------------------

        mov ax,1687h
        int 2fh
        or ax,ax
        jnz no_dpmi

        test bl,1       ;¨soporte de 32 bits?
        jz no_dpmi

        mov eax,ds
        shl eax,4
        mov small CodeAddr32,eax

        or small dword ptr GDT_Code32+2,eax
        or small dword ptr GDT_Data32+2,eax

        mov small word ptr DPMI_ModeSwitch,di
        mov small word ptr DPMI_ModeSwitch+2,es

        call ES_after_stack

        mov ax,1
        call DPMI_ModeSwitch
        jc no_dpmi

;************
;* 16 bit PM
;************

        push ds
        pop es

        mov edi,offset GDT
        mov si, small offset Selectors
        mov dx,GDTENTRIES

        SelLoop:
                ;Allocate LDT descriptor
                xor ax,ax
                mov cx,1
                int 31h
                mov [si],ax
                inc si
                inc si

                ;Set descriptor
                mov bx,ax
                mov ax,000Ch
                int 31h
                add di,8
                dec dx
                jnz SelLoop

        push small dword ptr Code32Sel
        push large offset Enter32

        db 66h, 0CBh ; RETF (32 bits)



ES_after_stack PROC
        mov ax,ss
        add ax,STACK16SIZE shr 4        ; nos situamos justo despues de
                                        ; la pila
        mov es,ax
        xor di,di
        ret
ES_after_stack ENDP


no_vesa:  lea dx,small NoVESA
          jmp printerr

no_dpmi:  lea dx,small NoDPMI

printerr: push dx
          mov ax,3
          int 10h
          pop dx

exitprint:
          mov ah,9
          int 21h
exit:     mov ax,4cffh
          int 21h

Kernel ENDS


Code32 SEGMENT BYTE PUBLIC USE32
ASSUME CS:Code32, DS:Code32, SS:Code32

NoDPMI db 'E1$'
NoVESA db 'E2$'
NoMODE db 'E3$'

FIN db '<- Neco <> Aj0 ->',0dh,0ah
    db '<- GOdS`  MAZE ->',0

GDT     LABEL   BYTE

GDT_Code32      db      0FFh,0FFh,0,0,0,0FAh,0CFh,0
GDT_Data32      db      0FFh,0FFh,0,0,0,0F2h,0CFh,0
GDT_Video32     db      0FFh,0FFh,0,0,0,0F2h,0CFh,0
GDT_VBuff32     db      0FFh,0FFh,0,0,0,0F2h,0CFh,0
GDT_VZero32     db      0FFh,0FFh,0,0,0,0F2h,0CFh,0




Enter32:
        
        mov ax,small cs:Data32Sel
        mov ds,ax
        mov es,ax
        mov ss,ax
        mov ax,Zero32Sel
        mov gs,ax


        mov esp,offset Stack32+STACK32SIZE

;reservamos una pila de 2 megas (fill se la come toa)

        mov ecx,2*1024*1024
        push ecx
        call alloc_himem
        pop ecx
        add ebx,ecx
        mov esp,ebx

        

;       ----- Mapeamos la memoria de video fisica -----

        mov ecx,small VideoADDR
        mov ebx,ecx
        shr ebx,16

        movzx edx,small VideoRAM
        shl edx,10
        push edx

        mov edi,edx
        shr edx,16
        mov si,dx
        mov ax,0800h            ;Map Physical Addr
        int 31h
        jc @error   ;BX:CX = linear address

        mov dx,cx
        mov cx,bx
        mov bx,small Video32Sel ;set base
        mov fs,bx
        mov ax,07h  ; Set Selector Base
        int 31h
        jc @error

        pop edx
        cmp edx,0fffffh
        jb @menor_1MB
        or edx,0fffh

@menor_1MB:
        mov ecx,edx
        shr ecx,16
        mov ax,08h
        int 31h         ;Set  selector limit
        jc @error  


        mov bx,small video_mode

        mov ax,4f02h     ;***** PONEMOS EL MODO DE VIDEO *****
        int 10h
        

include intro.inc


@error:

        mov ax,3  ;80x25 textmode
        int 10h


        lea esi,FIN
@cad:   lodsb
        or al,al
        jz @error2
        mov ah,0eh
        xor ebx,ebx
        int 10h
        jmp @cad
        
@error2:

        mov ax,4c00h
        int 21h

DumpVideo PROC
        mov ax,gs:[041ah]   ;comprobamos el teclado
	mov bx,gs:[041ch]
	cmp ax,bx
	jne @error

        push es
        push fs    ;ES=FS
        pop es
        push ecx esi edi
        mov esi,small VBuffADDR
        xor edi,edi
        mov ecx,ModoX*ModoY
        rep movsd
        pop edi esi ecx

        pop es
        ret

DumpVideo ENDP

alloc_himem PROC        ;ECX = TAM
        mov ebx,ecx
        shr ebx,16
        mov ax,0501h
        int 31h
        jc @error

        shl ebx,16
        mov bx,cx
        mov ecx,small CodeAddr32        ;ajustamos a nuestros selectores
        sub ebx,ecx
        ret

alloc_himem ENDP        ;EBX = DIR

EsperarRetrazo PROC

	

        push edx eax
        mov dx,03dah
@@top_of_retrace:
        in  al,dx
        and al,08h
        jnz @@top_of_retrace

@@bottom_of_retrace:
        in  al,dx
        and al,08h
        jz  @@bottom_of_retrace
        pop eax edx
        ret
EsperarRetrazo ENDP


include cartman.inc
include kenny.inc
;include bcn.inc
include colores.inc
include spheres.inc
include textures2.inc
;include blur.inc
include interpol.inc
include rotozoom.inc
include 2d.inc
include tunnel.inc

include variables.inc


DPMI_ModeSwitch dd ?

CodeAddr32 dd ?

VideoRAM  dw ?
video_mode dw ?
VideoADDR dd ?


;Selectores:

Selectors       LABEL   WORD

Code32Sel       dw      ?
Data32Sel       dw      ?
Video32Sel      dw      ?
VBuff32Sel      dw      ?
Zero32Sel       dw      ?



Stack32 db STACK32SIZE dup (?)
Code32 ENDS


Stack16 SEGMENT BYTE PUBLIC STACK 'STACK'

        db STACK16SIZE dup(?)

Stack16 ENDS

DPMI_DataArea SEGMENT BYTE PUBLIC USE16

        db DPMI_DATASIZE dup (?)

DPMI_DataArea ENDS

END Entry16
