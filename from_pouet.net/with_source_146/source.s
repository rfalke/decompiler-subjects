IDEAL

MODEL TINY
P486

UDATASEG
Buffer DB 320*203 dup(?)

CODESEG
ORG 100h
LOCALS

GO:



    push 0A000h
    pop es


; INIT VGA MODE 13h
    mov al,13h
    int 10h


; GENERATE PALETTE
    dec di
PaletteGen:
    xor ax,ax
    mov cl,63
@@L1:
    stosb
    inc ax
    cmpsw
    loop @@L1
    push di
    mov cl,192
@@L2:
    stosw
    inc di
    loop @@L2
    pop di
    inc di
    jns PaletteGen


; SET PALETTE
    mov ax,1012h
    cwd
    mov cl,255
    int 10h




MainLoop:

    push es
    push ds
    pop es


    inc cx
    mov di,OFFSET Buffer
@@L3:

    proc randomz
@@L5:
    in ax,40h
    xadd ds:[100h],ax
    mov ah,al
    stosw
    stosw
    loop @@L5
 endp randomz

    pop es

       mov cx,320d*200d
@3:
       add al,[di]
       add al,[di+1]
       add al,[di-320]
       shr al,2
       dec ax


       cmp al,10h

      ja @n
@i:
     add al,[di-320]
     add al,[di+320]
     add al,[di-319]
     add al,[di+319]




@n:

       MOV [DI],AL
       inc di
       loop @3


    xor di,di
    mov si,OFFSET Buffer + 320
    mov ch,60
    rep movsd

; CHECK FOR KEYPRESS
    mov ah,1
    int 16h
    jz MainLoop







    mov ax,03h
    int 10h

    ret




END  GO
