;
; bizarre release
; (official release will follow soon)
;
display " // zero Functionality! - '''' (c) 1999 -
released at Bizarre''99"
                            
ideal                             
                                  
warn icg    ; warn for inefficient code
nowarn lco  ; fuck them location overflows
                                  
p486                         
model small                  
stack 1000h                       
                                  
assume cs:@code, ds:@data, es:nothing, fs:nothing, gs:Vscreen, ss:stack
                             
  IntsPerSec        equ 91
                                        
  FPS_1             equ IntsPerSec / 30 
                             
  Tunnel_Slope      equ 4096 ; tunnel constants
  Tunnel_MiddleHole equ (Tunnel_Slope / 256)
                                  
  Water_Impact      equ 6 ; waterfilter constant
                             
  Fire_Direction    equ -320
  Fire_Dissipate    equ 3
                             
udataseg                     
                        
  sine dw 256 dup (?) ; fixed point, 8bit precision
                        
  PalRotateNum     equ 255
  PalRotateBase    db ?   
  PalRotateCurrent db ?                  

  Wrt_Idx dw ?         ; writer pointer
  Wrt_Len db ?
                  
  pal_Greetz db 3*256 dup (?)
  pal_Cyan db 3*256 dup (?)
          
  sin1 db 256 dup (?)  ; integer sines
  sin2 db 256 dup (?)  ; integer sines
  sin3 db 256 dup (?)  ; integer sines
            
  TextBuf1 db 8*320 dup (?) 
  TextBuf2 db 8*320 dup (?) 
                         
  framecounter dw ?
  switch db ?                                 
  varbyte db ?
  
codeseg                           
                                  
  macro Write pointer             
     mov si, offset pointer            
     call WriteString
  endm                  
                                         
  proc WriteString                       
@@1: mov al, [si]
     inc si                 
     test al, al         
     jz @@2         
     int 29h                             
     jmp @@1            
@@2: ret                 
  endp              
                         
  macro PutSixel x,y,c ; SInus ELement.. 
    local clip
     cmp y, 198
     ja clip   
     cmp x, 318
     ja clip   
     mov ax, y 
     mov di, ax                           
     shl ax, 8                                           
     shl di, 6                            
     add di, ax                           
     add di, x
     mov al, c
     mov ah, al
     mov [word gs:di], ax
     mov [word gs:di+1], ax
clip:                    
  endm                  
                                             
  proc VSync     
     mov dx, 03DAh               
@@1: in al, dx   ; wait for current retrace cycle - if any - to complete
     test al, 8                                             
     jnz @@1                                                
@@2: in al, dx   ; wait for the start of next retrace cycle 
     test al, 8                  
     jz @@2                      
     ret                         
  endp                           

; si = palette                   
                                 
  proc SetPal
     xor ax, ax                  
     mov dx, 03C8h               
     out dx, al                  
     inc dx                      
     mov cx, 256*3               
     rep outsb
     ret       
  endp
  
; si = palette

  proc FadeToBlack
     mov cx, 256*3
@@fadeloop:       
     cmp [byte si], 0
     jz @@next    
     sub [byte si], 1
@@next:
     inc si
     loop @@fadeloop
     ret
  endp
                                 
; si = palette                   
;                                                    
; palrange [base]..[num] -> dacrange [cur]..[num-cur],[base]..[cur-base]
;                                                    
                                  
  proc RotatePal                      
     movzx dx, [palRotateBase]                
     mov ax, dx                        
     add dx, dx                        
     add dx, ax  ; dx = base*3
     add si, dx  ; si = correct offset in pallette
     movzx bx, [palRotateCurrent]
     mov ax, bx                                      
     add bx, bx                                      
     add bx, ax  ; bx = cur*3   ax = cur
     mov cx, palRotateNum*3
     sub cx, bx  ; cx = firsthalf (num-cur)
     sub bx, dx  ; bx = secondhalf (cur-base)
     mov dx, 03C8h    ; first half
     out dx, al                                      
     inc dx                 
@@half:                     
     rep outsb  
     mov al, [palRotateBase] ; second half
     dec dx              
     out dx, al          
     inc dx              
     xchg cx, bx
     or cx, cx           
     jnz @@half          
     cmp al, [palRotateCurrent]
     jne @@nowrap        
     neg al     
     add ax, palRotateNum
     mov [palRotateCurrent], al 
@@nowrap:                
     dec [palRotateCurrent]
     ret                   
  endp                                               
                                                     
;--------------------------------------------------------
; virtual page things                                       
;---------------------------------------------------------------
                           
  macro XY x, y
     dw y*320+x 
  endm          
                           
  macro ScreenOfs dest, x,y
     mov dest, y*320+x
  endm               
                     
  macro ScreenSeg segm
     push segm       
     pop gs          
  endm                   
                  
  proc ClrScreen
     push gs
     pop es
     mov cx, 64000 / 4                  
     xor di, di  
     xor eax, eax     
     rep stosd                          
     ret                                
  endp
                 
  proc InitScreen
     push Vscreen                 
     push Sscreen
     pop gs      
     call ClrScreen
     pop gs      
     call ClrScreen
     ret
  endp

; copies sscreen to vscreen
      
  proc PopScreen
     mov dx, ds
     push Sscreen
     pop ds
     push Vscreen
     pop es    
     xor si, si                         
     mov di, si                         
     mov cx, 64000 / 4                  
     rep movsd 
     mov ds, dx                
     ret                                
  endp                
              
  proc ShowScreen
     mov dx, ds
     push gs
     pop ds
     push 0A000h 
     pop es    
     xor si, si                         
     mov di, si                         
     mov cx, 64000 / 4                  
     rep movsd 
     mov ds, dx                
     ret                                
  endp                
             
  proc TwinScreen          
     xor si, si 
     mov cx, 32000
     mov di, 64000-1
@@l: mov al, [gs:si]
     add al, [gs:di]
     rcr al, 1   
     mov [gs:si], al
     mov [gs:di], al 
     dec di      
     inc si      
     dec cx             
     jnz @@l            
     ret            
  endp          
                
  proc MirrorScreen
     xor si, si
     mov cx, 32000    
     mov di, 64000-1
@@l: mov al, [gs:si]          
     xchg al, [gs:di]
     mov [gs:si], al    
     dec di      
     inc si    
     dec cx      
     jnz @@l   
     ret            
  endp     

; in: ES:DI -> pos to copy to
                  
  proc TVLook
     mov cx, 200 /2
     xor si, si    
@@y_loop:          
     mov dx, 320 /2
@@x_loop:          
     mov al, [gs:si]
     shr al, 1
     stosb   
     add si, 2
     dec dx            
     jnz @@x_loop      
     add si, (320*2)-320
     add di, 320-(320/2)
     loop @@y_loop 
     ret           
  endp             
                   
  proc PutBackGround      
     push BScreen
     pop es        
     mov bx, 63*256
     xor di, di   
     xor si, si    
     mov cx, 200 /2
@@y_loop:           
     mov dx, 320 /2
@@x_loop:          
     mov al, [es:si]
     test al, 40h
     jnz @@h  
     xor al, al
@@h: and al, 38h   
     or al, bh 
     add [gs:di], al  
     add [gs:di+160], al
     inc di       
     add si, 2 
     dec dx               
     jnz @@x_loop   
     sub bx, 128    
     dec dx         
     dec dl         
     add si, 320    
     add di, 160    
     loop @@y_loop  
     mov eax, 08080808h
     mov cx, 320*(200/2) /4
@@cs_loop:          
     add [gs:di], eax
     add di, 4      
     loop @@cs_loop 
     ret            
  endp              
                    
;--------------------------------------------------------
; sinus tree's (in: BX/SI/BP/DI: angles) (out DX:AX = XX:YY)
;---------------------------------------------------------------
                          
  proc sinus1         
     movzx di, [sin2+bx]
     movsx dx, [sin1+di]
     movsx ax, [sin1+si]
     ret              
  endp                
                      
  proc sinus2
     movzx di, [sin2+bx]
     movsx dx, [sin1+di]
     movzx di, [sin2+si]
     movsx ax, [sin1+di]
     ret              
  endp              
             
  proc sinus3 
     movzx di, [sin2+bx]
     movsx dx, [sin1+di]                        
     movsx ax, [sin1+si]
     movsx di, [sin1+bp]  
     add ax, di
     sar ax, 1
     ret              
  endp              
             
  proc sinus4
     movzx di, [sin2+bx]
     movsx dx, [sin1+di]
     movzx di, [sin2+si]
     movsx ax, [sin1+di]
     movsx di, [sin1+bp]
     add ax, di
     sar ax, 1
     ret              
  endp    
          
;-------------------------------------------------------------------------
; font writer           
;                   
; as the defstring macro shows, the implementation is limited to
; 32 different symbols
;                 
; Writer in : SI = offset of text
;        out: SI = behind text (next offset)
;-------------------------------------------------------------------------
                      
  macro DefString text
    local len                            
    len sizestr <&text>                  
    db len                 
    irpc char, <&text>                   
      if '&char' lt 64                   
        db 0                             
      else                               
        db (('&char' and not 0A0h)-64)*8 ;; -> upcase, convert to indices.
      endif                
    endm                         
  endm                         
                      
; DI = textbuffer
                 
  proc ClearTextBuffer
     push di    
     mov cx, 8* 320 /4
     push ds    
     pop es     
     xor eax, eax
     rep stosd  
     pop di     
     ret        
  endp       
             
; SI = textbuffer
             
  proc BlurrTextBuffer
    push si     
    mov dx, 8
@@lloop:        
    mov cx, 318  
    inc si      
@@cloop:        
    movzx ax, [si]
    movzx bx, [si-1]
    add ax, bx  
    add ax, bx  
    mov bl, [si+1]
    add ax, bx  
    shr ax, 2 
    mov [si], al
    inc si      
    loop @@cloop
    inc si   
    dec dx   
    jnz @@lloop
    pop si   
    ret         
  endp      
            
; SI = textbuffer
; BX = startcolor     
; DX = maincolor
                     
  proc ShadeTextBuffer    
     push si              
     mov cx, 8* 320 /2
     mov ax, bx              
@@loop:                   
     and [si], ax         
     mov ax, dx           
     jnz @@nobody         
     mov ax, bx           
@@nobody:                 
     inc si     
     inc si     
     loop @@loop
     pop si       
     ret        
  endp          
     
; SI = textbuffer     
; DI = offset into videomem

  macro PatchCopyTextBuffer
     mov [Patch+2], 01h
  endm                 
                       
  proc CopyTextBuffer  
     mov cx, 8* 320 / 4
@@quadmove:                  
     mov eax, [si]     
label Patch byte       
     or [gs:di], eax ; patched to: add [gs:di], eax
     add di, 4      
     add si, 4      
     loop @@quadmove
     ret                                
  endp            
                
; SI = textbuffer            
; DI = offset                       
                                        
  proc Scale4x8TextBuffer
     mov di, 32+68*320
     push si   
     mov cx, 8    
@@nextline:       
     push cx        
     mov cx, 320 /4 /4
@@nextpixel:          
     mov ebx, [si]   
     add si, 4       
     push cx                
     mov cx, 4     
@@quadpixel:         
     mov al, bl  
     shr ebx, 8
     or al, al
     jz @@nopixel
     mov ah, al    
     push ax       
     shl eax, 16      
     pop ax          
     mov [gs:di], eax
     mov [gs:di+320], eax
     mov [gs:di+640], eax
     mov [gs:di+960], eax
     mov [gs:di+1280], eax
     mov [gs:di+1600], eax
     mov [gs:di+1920], eax
     mov [gs:di+2240], eax
@@nopixel:
     add di, 4
     loop @@quadpixel    
     pop cx              
     loop @@nextpixel
     pop cx       
     add di, 960*2
     add si, 240
     loop @@nextline
     pop si           
     ret                                
  endp                                  
                         
                         
; SI = defstring ; OUT: SI = nextstring, DI = textbuffer
; DI = offset of textbuffer
                           
  proc Writer          
     push di           
     movzx cx, [byte si]
     mov dx, di         ; poof init (poof. .as in.. "POOF!";-)
     inc si                 
;---------->           
@@next_char:               
     movzx bx, [byte si]
     mov bp, dx         ; poof next charcolumn
     lea dx, [bp+8]     ;   
;------->                  
@@next_line:     
     mov al, [font+bx]
     mov di, bp         ; poof next line
     lea bp, [di+320]   ;   
;---->
@@next_column:             
     inc di                 
     shl al, 1              
     jnc @@no_pixel         
     mov [byte di], 0FFh          
@@no_pixel:                       
     jnz @@next_column ; if no more dots, end current line
;----<                     
     inc bx                              
     test bl, 07h                        
     jnz @@next_line        
;-------<                  
     inc si                 
     loop @@next_char       
;----------<     
     pop di      
     ret         
  endp           
                 
; screen darkener
; DI = offsetinto screen
; CX = length    
; AL = darke     
                  
  proc DarkenArea 
     or cx, cx    
     jz @@nodarken
     push di      
     sub di, 640 + 3
     mov dx, 12      
     shl cx, 3      
     add cx, 6    
@@nextline:       
     push cx      
     push di      
@@next:           
     add [byte gs:di], al
     inc di        
     loop @@next  
     pop di       
     add di, 320  
     pop cx        
     dec dx        
     jnz @@nextline
     pop di      
@@nodarken:      
     ret         
  endp            
                           
;-------------------------------------------------------------------------
; screenfilters (soften/smoothen/blurr/fire) 
;-------------------------------------------------------------------------
                                                 
  proc Filter1                                   
     push ds  
     mov ax, gs
     mov ds, ax
     mov es, ax
              
     xor eax, eax         ; clean top and bottom lines
     mov cx, 320 / 4      ;                      
     mov di, 64000-320    ;  |---|---|---|             
     rep stosd            ;  |   | 1 |   |             
     mov cx, 320 / 4      ;  |---|---|---|             
     xor di, di           ;  | 1 |   | 1 |             
     rep stosd            ;  |---|---|---|       
                          ;  |   | 1 |   |           
     mov cx, 320*198      ;  |---|---|---|             
     xor bx, bx           ;                      
     xor ax, ax           ;                      
@@loop:                                          
     mov al, [di-320]                       
     mov bl, [di+320]                       
     add ax, bx                             
     mov bl, [di-1]                         
     add ax, bx                             
     mov bl, [di+1]
     add ax, bx                             
     shr ax, 2                              
                                            
     mov [di], al
                                            
     inc di                                 
     loop @@loop
              
     pop ds   
     ret                                    
  endp                                      
 
if 0
                                            
  proc Filter2
     push ds  
     mov ax, gs
     mov ds, ax
     mov es, ax
                                                 
     xor eax, eax         ; clean top and bottom lines
     mov cx, 320 / 4      ;                 
     mov di, 64000-320    ;  |---|---|---|             
     rep stosd            ;  | 1 | 1 | 1 |             
     mov cx, 320 / 4      ;  |---|---|---|             
     xor di, di           ;  | 1 | 1 | 1 |             
     rep stosd            ;  |---|---|---|  
                          ;  | 1 | 1 |   |  
     mov cx, 320*198      ;  |---|---|---|             
     xor bx, bx           ;     
     xor ax, ax           ;     
@@loop:                                 
     mov al, [di-320]           
     mov bl, [di-320-1]         
     add ax, bx                         
     mov bl, [di-320+1]         
     add ax, bx                         
     mov bl, [di-1]             
     add ax, bx                         
     mov bl, [di]               
     add ax, bx                         
     mov bl, [di+1]             
     add ax, bx                         
     mov bl, [di+320-1]         
     add ax, bx                          
     mov bl, [di+320]           
     add ax, bx                         
     shr ax, 3                  
                                        
     mov [di], al               
                                
     inc di                     
     loop @@loop
                
     pop ds     
     ret        
  endp

endif
                  
;----------------------------------------------
; better stuff... not real original stuff, but .. heck.. ;]
;----------------------------------

  BufferSwap dw Vscreen ;; standard mode: relief.
                
  proc WaterFilter
; swaps WFSS and GS continuesly                
     push ds                   
     mov ax, gs             
     mov ds, ax             
     mov es, ax             
                            
     xor eax, eax         ; clean top and bottom lines
     mov cx, 320 / 4      ;                 
     mov di, 64000-320    ; |---|---|---|
     rep stosd            ; |   | 1 |   |
     mov cx, 320 / 4      ; |---|---|---|    |---|
     xor di, di           ; | 1 |-->| 1 |--> |   |
     rep stosd            ; |---|---|---|    |---|
                          ; |   | 1 |   |
     mov cx, 320*198      ; |---|---|---|*2  - 1   ?>0
     mov gs, [BufferSwap] ;
@@loop:           
     movzx ax, [di-320]
     movzx bx, [di+320]
                  
     add ax, bx          
     mov bl, [di-1]
     add ax, bx   
     mov bl, [di+1]
     add ax, bx   
     sar ax, 1
     
     sub al, [gs:di]         
     mov bl, al          
     sar bl, Water_Impact
     sub al, bl   
     cmp al, 0    
     jnl @@plons               
     xor al, al                             
@@plons:          
     mov [gs:di], al
     inc di            
                                              
     loop @@loop  
                  
     mov [BufferSwap], ds
               
     pop ds       
     ret              
  endp            

;--------------------------------------------------------------------------
; generations                 
;---- greetz fly out to The Watcher^TUHB for the next one. ;-) -------------
                   
  proc gen_SqrtTable          
     push SqrtTable                                       
     pop es                                               
     mov al, 0   ; squareroot     
     sub di, di  ; index   (hey, a sub? .. yeah! a sub! .. how original:)
     mov bx, 1   ; decision-for-root-increase             
     mov cx, 256 ; maincounter.. we want up-to sqrt(65535)
@@out_loop:                   
     mov dx, bx               
@@inn_loop:                   
     stosb                    
     dec dx                   
     jnz @@inn_loop           
     inc bx                   
     inc bx                   
     inc ax                   
     loop @@out_loop          
     ret                      
  endp                                     
         
; BX = angle
; DX = amplitude
                
  proc IntSine
     shl bx, 1  
     mov ax, [sine+bx] 
     imul dx     
     sar ax, 8
     ret  
  endp                
                
; DI = destination
; SI = amplitude
              
  proc gen_ByteSines
     mov cx, 256      
     xor bx, bx       
@@next:             
     mov ax, [sine+bx]
     imul si          
     sar ax, 8      
     mov [di], al 
     inc di       
     inc bx          
     inc bx          
     loop @@next  
     ret          
  endp            
                  
  proc gen_RandomTable
     ret
  endp
                                 
  proc gen_SineTable           
    local temp: word           
     fninit                    
     fldpi                     
     mov [temp], 128                              
     fild [temp]               
     fdivp ; ST(0) = PI/128 (multiplicant)
     mov [temp], 256           
     fild [temp]            
     xor bx, bx     
     mov [temp], bx                 
@@l: fild [temp]            
     fmul st(0), st(2) ; grads -> radians
     fsin                   
     fmul st(0), st(1) ; scale to fixed point
     fistp [sine+bx]                         
     inc bx         
     inc bx         
     inc [byte temp]  
     jnz @@l        
     ret            
   endp             
                   
  proc gen_Pal    ;; kinda elaborate.. what the heck.. i had space to fill;]
     push ds                  
     pop es                   
     mov di, offset pal_Greetz
     mov cx, 64  ; 00..63: 16 shades of grey
     xor dx, dx                             
@@1: inc dx                                 
     mov ax, dx                             
     shr ax, 2       
     stosb                                   
     stosb                                   
     stosb                                   
     loop @@1                               
                                            
     mov cx, 47 ; 64..110: add 32 shades of yellow 
     mov bx, dx      
     mov dx, ax      
@@2: inc dx          
     mov ax, dx      
     stosb                                   
     stosb                                   
     inc bx                 
     mov ax, bx                                  
     shr ax, 2                 
     stosb          
     loop @@2                                      
                                                 
     mov cx, 17 ; 111..127: curve white
     mov dh, dl               
     mov bx, ax               
@@3: mov ax, dx               
     stosb                                   
     stosb                                   
     inc bx                   
     inc bx                   
     mov al, bl               
     stosb                    
     loop @@3  
              
     mov cx, 128 ; 128-255: reverse
     mov si, di
     sub si, 3
@@4: movsw    
     movsb       
     sub si, 6   
     loop @@4    
;-------               
     mov di, offset pal_Cyan
     mov cx, 64  ; 00..63: 16 shades of grey
     xor dx, dx                             
@@5: inc dx                                 
     mov ax, dx                             
     shr ax, 2       
     stosb                                   
     stosb                                   
     stosb                                   
     loop @@5                               
                                            
     mov cx, 47 ; 64..110: add 32 shades of cyan
     mov bx, dx                                 
     mov dx, ax                                 
@@6: inc bx                                     
     mov ax, bx
     shr ax, 2
     stosb                                      
     inc dx                 
     mov ax, dx                                  
     stosb                                      
     stosb          
     loop @@6                                      
                                                 
     mov cx, 17 ; 111..127: curve white
     mov dh, dl               
     mov bx, ax               
@@7: inc bx
     inc bx                   
     mov al, bl               
     stosb                    
     mov ax, dx               
     stosb                                   
     stosb                                   
     loop @@7  
              
     mov cx, 128 ; 128-255: reverse
     mov si, di
     sub si, 3
@@8: movsw    
     movsb       
     sub si, 6
     loop @@8    
   
     ret               
  endp                 
                               
;-----------------------------------------------------
; lookuptables         
;--------------------------------------- 
   
  macro PatchLutCalc
     mov eax, 90909090h
     mov [dword Patch2], eax               
     mov [dword Patch2+4], eax
     mov [dword Patch2+8], eax
     mov [word Patch2+12], ax
  endm          
                         
  proc lut_PreCalcTunnel 
    local temp,Y: word  
     fninit             ;--- setup FPU                  
     mov [temp], 256/2  ; 256 "grads" (deliberately avoiding the word degree)
     fild [temp]        ; ST(1) = base
     fldpi              ; ST(0) = pi
     fdivp              ; ST(0) = base/pi (multiplicant for later)
     push SqrtTable         
     pop fs            
     mov ax, Lut_UV         
     mov es, ax        
     xor di, di                      
                                     
;; ES:DI = lut                       
;; FS:BX+SI = sqrttab                    
                                     
     mov ax, [Tunnel_Y];y counter
@@y_loop:                                                        
     mov [Y], ax                                                 
     imul ax      ; y*y              
     mov si, ax                      
     mov cx, [Tunnel_X]; x counter
@@x_loop:                         
     mov ax, cx      ; x          
     mov [temp], ax               
     fild [Y]        ; T.O.A. (just a little highschooltrick..:)
     fild [temp]                                               
     fpatan          ; 
     imul ax         ; x*x        
     mov bx, ax                        
     movzx bx, [byte fs:bx+si] ; Sqrt(x*x+y*y)
     mov al, bl      
label Patch2 byte
     mov al, 0FFh ; 90 90         
     cmp bx, Tunnel_MiddleHole ; 90 90 90
     jbe @@inaccuracy ; 90 90     
     mov ax, Tunnel_Slope ; 90 90 90
     xor dx, dx ; 90 90    
     div bx ; 90 90
@@inaccuracy:        
     fmul st(0), st(1) ; radians -> grads 
     fistp [temp]                 
     mov ah, [byte temp] ; ah = grad'
     stosw               ; lut_UV[V,di] = grad'
                         ; lut_UV[U,di] = Sqrt(x*x+y*y)   
     or di, di                                                
     jnz @@no_segment_swap ; ain't realmode the darndest thing? =]
     mov ax, es      
     add ax, 1000h   
     mov es, ax      
@@no_segment_swap:      
     inc cx             
     cmp cx, [Tunnel_Xe]
     jl @@x_loop          
     mov ax, [Y]          
     inc ax               
     cmp ax, [Tunnel_Ye]
     jl @@y_loop     
     ret                            
  endp                              
                     
  proc lut_MapTexture
; DX    - input       
;;ES:BX - texture    
;;FS:SI - lut                  
;;GS:DI - virtual screen
     push Texture    
     pop es          
     mov ax, lut_UV  
     mov fs, ax      
     add ax, 1000h       
     push ax             
                         
     mov cx, 64000       
     xor di, di          
     xor si, si          
@@gen_loop:              
     mov bx, [fs:si]   
     mov ah, bl      
     cmp ah, 255     
     je @@no_write   
     add bh, dh      
     add bl, dl         
     mov bl, [es:bx]  ; bl = color
;    mov bh, ah       ; bh = shade
;    mov al, [gs:bx]              
     mov [gs:di], bl 
@@no_write:          
     inc di              
     inc si              
     inc si          
     jnz @@no_segment_wrap        
     pop fs              
@@no_segment_wrap:       
     loop @@gen_loop 
     ret                 
  endp                   
                                    
;-------------------------------------------------------------------------
; textures          
;-------------------------------------------------------------------------
                    
;------ the next one is just 100% ripped from purple dreams II --------
                                    
  proc Random                       
;---------------------------------------------------------------------------
; returns a random value in range 0..bx (bx is power of 2) in ax
; out ax - random number            
; Note: For filtering causes, using a bx=2/4/6/8/16/32/etc looks best!
;---------------------------------------------------------------------------
     mov eax,110702475              
     mul [cs:seed]                  
     add eax,97177                  
     mov [cs:seed],eax              
     shr eax,15                     
     and ax,bx                      
     ret                                                          
     seed dd 20d4e75bh ; if you can read this, drop me a letter =]
  endp                              
                  
; SI = string     
; ES:DI = offset in texture
                  
  proc TextureTextXU
     push Texture 
     pop es       
     mov cx, 8    
@@nextline:       
     mov dx, 256 / 4
@@quadmove:                  
     mov eax, [si] 
     or [es:di], eax
     add di, 4      
     add si, 4     
     dec dx        
     jnz @@quadmove
     add si, 8*8   
     loop @@nextline
     ret                                
  endp                                  
                  
  proc TextureTextXV
     push Texture    
     pop es                  
     mov cx, 8    
     add si, 256  
@@nextline:                  
     mov dx, 256        
@@quadmove:             
     mov al, [si] 
     or [es:di], al
     dec si         
     sub di, 256                                          
     dec dx                                     
     jnz @@quadmove                             
     inc di                   
     add si, 256+320
     loop @@nextline          
     ret                                
  endp                                  
                            
  proc TextureFilter1
; ds = texture       
     xor cx, cx       ;       
     xor di, di       ; 111   
     xor bx, bx       ; 111   
     xor ax, ax       ; 11    
@@loop:                       
     mov al, [di-256]               
     mov bl, [di-256-1]
     add ax, bx      
     mov bl, [di-256+1] 
     add ax, bx       
     mov bl, [di]    
     add ax, bx          
     mov bl, [di-1]  
     add ax, bx      
     mov bl, [di+1]  
     add ax, bx      
     mov bl, [di+256-1]
     add ax, bx       
     mov bl, [di+256]
     add ax, bx      
     shr ax, 3       
                     
     mov [di], al     
                      
     inc di           
     loop @@loop   ; next loop      
     ret              
  endp                 
                         
  macro ShowTexture   ; only for beta purposes
     push ds        
     push es        
     pushad         
     push texture   
     pop ds         
     push 0A000h    
     pop es         
     xor si, si     
     xor di, di     
     mov cx, 200    
@@o_blaar:          
     push cx        
     mov cx, 256                    
@@i_blaar:          
     rep movsb      
     pop cx             
     add di, 320-256  
     loop @@o_blaar   
                         
     xor ax, ax       
     int 16h          
     popad          
     pop es         
     pop ds         
  endm               
                       
  proc CreateTexture1   
     push ds            
     push Texture       
     pop ds             
     xor di, di                               
     mov cx, 10000h / 2             
     mov bx, 64 ; randomness factor
@@rndloop:          
     call Random  
     add al, 32   
     mov ah, al     
     mov [di], ax       
     inc di             
     inc di             
     loop @@rndloop     
     call TextureFilter1
                        
     mov ax, 0h     
     xor bx, bx     
     mov di, 1000h      
@@drawloop:             
     mov cx, 256        
     push di            
     push bx            
@@put2:                 
     mov [bx], al  
     mov [di], al   
     inc di             
     inc bh             
     loop @@put2         
     pop bx             
     pop di             
     add di, 3500h      
     add bl, 20h        
     jnz @@drawloop     
                        
     call TextureFilter1
;    showtexture   
                        
     pop ds                       
     ret                
  endp               
                     
  proc CreateTexture2
     push ds  ; we're gonna move 320x200 -> 160x200 in texture space       
     push Texture    
     pop es          
     push Bscreen    
     pop ds          
     xor di, di      
     mov cx, 65536 /4
     xor eax, eax    
     rep stosd    ; fill texture with zero's
     xor si, si      
     xor di, di      
     mov dx, 200 ; 100 y-lines
@@vert_loop:         
     mov cx, 160 ; 160 x-lines
@@horiz_loop:        
     movsb           
     inc si          
     loop @@horiz_loop
     add di, 256-160 
     dec dx          
     jnz @@vert_loop 
     pop ds          
     ret             
  endp               
                     
;-------------------------------------------------------------------------
; some misc macro's  
;-------------------------------------------------------------------------
                                                          
  macro testpal     
     mov cx, 256    
     mov di, 160-128+320*10
     xor ax, ax                   
@@blaat:            
     mov [gs:di], al
     mov [gs:di+320], al
     mov [gs:di+640], al
     inc di         
     inc al         
     loop @@blaat   
     xor ax, ax                   
     int 16h                      
  endm         
             
  macro ftime frames, goto
     dec [framecounter]
     cmp [framecounter], wait
     jne goto 
     mov [framecounter], 0
  endm           
              
  macro ktime goto  ;; only for developerpurposes.
     mov ah, 1            
     int 16h              
     jz goto           
     xor ax, ax           
     int 16h              
  endm      

;-------------------------------------------------------------------------
; timing operations
;-------------------------------------------------------------------------

  proc Delay
     mov [Timer], 0
@@waitloop:
     cmp [Timer], ax
     jb @@waitloop
     ret
  endp           
                     
  proc Nextframe     
@@waitloop:         
     cmp [FrameTimer], 0   
     jnz @@waitloop    
     ret               
  endp
             
  Timer dw 0            
  TimerCnt dw 0
  FrameTimer dw 0
  OldRate dw 0
  OldInt dd 0 
                               
macro SetInt                   
;; Timer: 1.193180Mhz / Divider = TimerRate
     cli      
     xor ax, ax
     mov es, ax    
     mov eax, [dword es:8*4]
     mov [dword OldInt], eax
     mov [word es:8*4], offset TimerInt
     mov [word es:8*4+2], seg TimerInt
     
     mov dx, 1193180 / 65536   ;; So: (18.2*65536) / IntsPerSec = Div
     mov ax, 1193180 mod 65536 ;; (TASM 5.0 doesn't crap out.:))
     mov bx, IntsPerSec
     div bx
     mov bx, ax 
     mov [OldRate], bx  
                    
     mov al, 36h     
     out 43h, al     
     jmp $+2   
     mov al, bl 
     out 40h, al
     jmp $+2  
     mov al, bh
     out 40h, al   
     jmp $+2     
              
     sti      
endm                       
                       
macro ResetInt        
     cli    
     xor ax, ax
     mov es, ax  
     mov eax, [dword OldInt]
     mov [dword es:8*4], eax
     mov al, 36h             
     out 43h, al             
     jmp $+2    
     xor al, al  
     out 40h, al 
     jmp $+2    
     out 40h, al 
     jmp $+2    
     sti           
endm             
                
proc TimerInt   
     pusha                   
;    sub [FrameTimer], 1  ; Accuracytimer
;    adc [FrameTimer], 0
      cmp [frametimer], 0  
      je @@nosub  
      dec [frametimer] 
      @@nosub:
                     
     mov ax, [OldRate]            
     add [TimerCnt], ax           
     jnc @@e            
     inc [Timer]
     popa             
     jmp [OldInt]
                  
@@e: mov al, 20h 
     out 20h, al   
     popa        
     iret                  
endp         
       
;----------------------------------------------------------------------
; entry point            
;----------------------------------------------------------------
             
start:            
     push @data  ; set up segment registers
     pop ds 
     cld                 
     call InitScreen
     Write Calcing  
     call gen_Pal
     call gen_SqrtTable  
     call CreateTexture1
     call gen_SineTable               
     call lut_PreCalcTunnel
       
     SetInt          ; reprogram timer
     
     mov si, offset Perc     
     mov cx, 9       
bad_joke:              
     call WriteString
     mov ax, 2 
     call Delay
     loop bad_joke
     mov ax, 18
     call Delay
     call WriteString
     mov ax, 36
     call Delay
     mov ax, 3h
     int 10h   
     mov ah, 02h
     xor bx, bx
     mov dx, 0C20h
     int 10h   
     mov ax, 18
     call Delay
     
     mov ax, 13h                      
     int 10h         ; mcga mode
     
     mov si, offset pal_Greetz
     call Setpal          
                
;----------------------------------------------------------------------
; intro screen  
;----------------------------------------------------------------
  
     mov si, offset WordsOfWisdom  ; introscreen
     mov di, offset TextBuf2                    
     call ClearTextBuffer                       
     call Writer                                
     mov di, offset TextBuf1                    
     call ClearTextBuffer                       
     call Writer                                
     mov [Wrt_Idx], si                          
     mov si, di                                 
     mov dx, 96 * 256 + 96                      
     mov bx, 64 * 256 + 64+16-12                
     call ShadeTextbuffer                       
     mov [Timer], 0
     mov [switch], 0
     mov [varbyte], 0
; blank 00 ; relieftxt 01 ; water 10 ; logo 11 ; fadeout 100 ; waterout 101
intro_loop:                     
     mov [FrameTimer], FPS_1
     movzx ax, [Intro_Delay+bx]
     cmp [Timer], ax       
     jae end_intro
     mov dl, [switch]                          
     cmp dl, 11b                               
     jb logotext                               
     test dl, 100b                           
     jnz filter_s
     mov si, offset textbuf2                 
     call Scale4x8textbuffer                   
filter_s:                                      
     call Filter1
     cmp dl, 101b                             
     jne skp
     mov [BufferSwap], Sscreen ; relief -> water mode
     jmp filter_w                             
logotext:                                    
     test dl, 1b                             
     jz filter_w                             
     mov si, offset TextBuf1                 
     mov di, [Wrt_Loc]                       
     mov di, [di]                             
     call CopyTextBuffer                     
filter_w:                                    
     call WaterFilter       
skp: call Nextframe  
     call Vsync      
     call Showscreen        
     movzx bx, [switch]
     jmp intro_loop          
end_intro:         
     inc bx          
     mov [switch], bl   
     test bx, 100b    ;--- store logo image for later usage
     jz stored        ;
     cmp [varbyte], 0 ;
     jnz stored       ;
     inc [varbyte]    ;
     mov cx, 64000 /4 ;
     push ds          ;
     push gs          ;
     pop ds           ;
     push Bscreen     ;
     pop es           ;
     xor si, si       ;
     xor di, di       ;
     rep movsd        ;
     pop ds           ;
stored:        
     cmp bx, 110b         
     mov [Timer], 0  
     jne intro_loop 
;    add [Wrt_Loc], 2
     call InitScreen                     
     mov [BufferSwap], Vscreen
     PatchCopyTextBuffer
  
;----------------------------------------------------------------------
; sinus stuff    
;----------------------------------------------------------------
             
     mov di, offset sin2   
     mov si, 127
     call gen_ByteSines                
     mov si, 64 
     mov di, offset sin1
     call gen_ByteSines    
     mov di, offset Textbuf1
     call ClearTextBuffer
     mov [switch], 0
     mov [Timer], 0
                                       
sinus_loop:        
     add [Sin_X_P], 6
     add [Sin_Y_P], 4
     add [Sin_L], 3
     mov [FrameTimer], FPS_1                  
     movzx bx, [Sin_L]                        
     movsx cx, [sin2+bx]
     add cx, 128   
     shr cx, 1     
     xor ch, ch    
     cmp cx, 0     
     ja no_change  
     mov bx, 3     
     call Random   
     add ax, 2                
     mov [Sin_X_F], ax
     mov bx, 3        
     call Random      
     add ax, 2        
     mov [Sin_Y_F], ax 
     mov bx, 3        
     call Random      
     add ax, 2        
     mov [Sin_Z_F], ax
     add [Sin_P], 2                
     and [Sin_P], 6                
     jmp sinus_loop
no_change:                                       
     add [Sin_X], 6                              
     add [Sin_Y], 9                              
     add [Sin_Z], 4                              
     movzx si, [Sin_X]                           
     movzx bx, [Sin_Y]                           
     movzx bp, [Sin_Z]                           
                                                 
draw_struc:                                      
     add bx, [Sin_X_F]  ; optimized for code-clarity..
     add si, [Sin_Y_F]  
     add bp, [Sin_Z_F]
     and bx, 0FFh     
     and si, 0FFh             
     and bp, 0FFh     
     movzx di, [Sin_P]
     call [Sin_Procs+di]
     movzx di, [Sin_X_P]
     movsx di, [sin1+di]
     sar di, 1
     add di, 160   
     add dx, di    
     movzx di, [Sin_Y_P]
     movsx di, [sin1+di]
     sar di, 1     
     add di, 100   
     add ax, di    
     putsixel dx,ax, 128
     loop draw_struc    
                         
     push si             
     mov di, [Wrt_Loc] 
     mov di, [di]
     mov si, offset Textbuf1
     call CopyTextBuffer
     call Filter1      
     call PutBackGround
     cmp [switch], 0
     jz no_tv
     push Sscreen
     pop es
     ScreenOfs di, 10, 95
     call TVLook
no_tv:
     call Nextframe           
     call Vsync               
     call Showscreen
     
     cmp [Timer], 18*4
     jae check_break  
continue_sinus: 
     call Clrscreen
     call PopScreen
     pop si     
     jmp sinus_loop   
check_break:  
     mov si, [Wrt_Idx]   
     cmp si, offset Greets
     je break_loop     
     mov di, offset TextBuf1
     call ClearTextBuffer
     cmp [byte si], 1
     jne no_switch
     inc [switch]
no_switch:
     call Writer     
     mov [Wrt_Idx], si
     mov si, di
     mov dx, 96 * 256 + 96
     mov bx, 76 * 256 + 76+16-12                
     call ShadeTextbuffer                       
     add [Wrt_Loc], 2
     mov [Timer], 0
     jmp continue_sinus
break_loop:           
     pop si           
     mov [varbyte], 75
blurrout:      
     mov [FrameTimer], FPS_1
     call Filter1
     call Nextframe
     call Vsync  
     call Showscreen
     dec [varbyte]
     jnz blurrout
                   
;----------------------------------------------------------------------
; greetings part         
;----------------------------------------------------------------
                
     mov si, offset pal_Greetz 
     call Vsync 
     call Setpal
     mov [palRotateBase], 1    ; greetings part
     mov [palRotateCurrent], 1
     mov di, offset sin1
     mov si, 48
     call gen_ByteSines
     mov di, offset sin2
     mov si, 96    
     call gen_ByteSines
     mov di, offset TextBuf1
     call ClearTextBuffer
     mov di, offset TextBuf2 
     call ClearTextBuffer  
     mov si, [Wrt_Idx]
     call Writer                                
     mov [Wrt_Idx], si        
     mov si, di                                 
     mov dx, 04545h                
     mov bx, dx                    
     call ShadeTextbuffer          
     mov [Wrt_Len], 0              
     mov [switch], 0 ; 0 = normal, 1 = lighten, 2 = darken
     mov [Timer], 0
     mov [FrameCounter], 0
greetz_loop:                       
     mov [FrameTimer], FPS_1       
                                   
     add [Tun_X], 5                
     add [Tun_Y], 3                
     movzx bx, [Tun_X]   
     movzx si, [Tun_Y]   
     mov dh, [sin1+bx]    
     mov dl, [sin2+si]     
     add dh, [Tun_Y]       
     call lut_MapTexture
     cmp [switch], 1
     jb no_twitch             
     ja twin        
     call Twinscreen
     jmp no_twitch  
twin:               
     call Mirrorscreen 
no_twitch:                
                                       
     mov si, offset TextBuf2
     mov di, [GreetLoc]    
     call CopyTextBuffer
     call WaterFilter
                                   
     mov si, offset TextBuf1 
     mov di, [Wrt_Loc]  
     mov di, [di]         
     movzx cx, [Wrt_Len]   
     cmp [Timer], 36  
     jb noblurr        
     call BlurrTextBuffer
     jmp blurr                
noblurr:               
     mov al, [varbyte]
     call DarkenArea
     dec [varbyte]    
blurr:                              
     call CopyTextBuffer            
                                    
     call Nextframe                 
     call Vsync                     
     cmp [Timer], 47
     jb norotate
     mov ax, [Timer]
     cmp [FrameCounter], ax
     je norotate   
     mov [FrameCounter], ax
     mov si, offset pal_Greetz      
     call RotatePal                 
norotate:                           
     call ShowScreen
     cmp [Timer], 54  
     jb greetz_loop                 
                                    
     mov si, [Wrt_Idx]              
     cmp si, [Wrt_Trigger]          
     je nextscreen                  
     mov [varbyte], 40
     mov al, [si]     
     mov [Wrt_Len], al              
     add [Wrt_Loc], 2 
     mov di, offset TextBuf1   
     call ClearTextBuffer
     call Writer                   
     mov [Wrt_Idx], si 
     mov si, di       
     mov dx, 96 * 256 + 96       or 3F3Fh
     mov bx, 64 * 256 + 64+16-12 or 3F3Fh
     call ShadeTextBuffer
     call BlurrTextBuffer   
     mov [Timer], 0         
     jmp greetz_loop        
                                   
nextscreen:         
     push si        
     mov [FrameTimer], FPS_1
     call Nextframe   
     call Vsync       
     mov [PalRotateCurrent], 256-128
     mov si, offset pal_Greetz  
     call RotatePal             
     mov [FrameTimer], FPS_1 
     call Nextframe          
     call Vsync              
     mov [PalRotateCurrent], 256-64
     mov si, offset pal_Greetz  
     call RotatePal             
     pop si                   
     mov [PalRotateCurrent], 1
     mov [FrameCounter], 0
     mov [Timer], 0
     mov [Wrt_Len], 0
     add [Wrt_Loc], 2       
     mov di, [Wrt_Loc]
     mov di, [di]   
     mov [GreetLoc], di
     mov di, offset TextBuf1
     call ClearTextBuffer      
     mov di, offset TextBuf2   
     call ClearTextBuffer      
     call Writer               
     mov [Wrt_Idx], si         
     mov si, di                                 
     mov dx, 03F3Fh            
     mov bx, dx             
     call ShadeTextbuffer   
     mov si, offset pal_Greetz
     call Setpal    
     mov si, [Wrt_Idx]        
     cmp [Wrt_Trigger], offset groups
     mov [Wrt_Trigger], offset EoG   
     je continue    
     ja lastscreen  
     mov [Wrt_Trigger], offset groups
continue:           
     inc [switch]   
     jmp greetz_loop    
lastscreen:        
     mov [FrameTimer], FPS_1
     call Nextframe     
     call Vsync    
     call InitScreen          
                 
;----------------------------------------------------------------------
; nihility recurring logo part
;----------------------------------------------------------------
     mov [FrameTimer], FPS_1
     call Nextframe                  
     call Vsync                     
     mov si, offset Pal_Cyan        
     call SetPal                    
;    call InitScreen   
     mov si, offset EoG
     mov di, offset Textbuf1
     call ClearTextBuffer
     call Writer
                                    
     mov [Tunnel_X], -160           
     mov [Tunnel_Y], -100           
     mov [Tunnel_Xe], 160           
     mov [Tunnel_Ye], 100           
     PatchLutCalc                   
     call lut_PreCalcTunnel         
     call CreateTexture2
     mov di, offset sin1            
     mov si, 63                     
     call gen_ByteSines             
     mov [FrameCounter], 260        
     mov [Tun_X], 192-128           
     mov [Tun_Y], 64                
     mov [switch], 0                
blob_loop:                          
     mov [FrameTimer], FPS_1        
                                    
     mov al, [Tun_C]                
     add [Tun_X], al                
     cmp [Tun_Y], 128+16
     jae no_add_y       
add_y:               
     add [Tun_Y], 3  
     jmp endcase     
no_add_y:            
     cmp [switch], 1 
     ja dec_c        
     adc [Tun_C], 0  
     cmp [Tun_C], 84
     jb endcase      
dec_c:               
     mov si, offset Pal_Cyan
     call FadetoBlack
     dec [Tun_C]     
     adc [Tun_C], 0 
     mov [switch], 2
     jmp add_y      
endcase:            
     movzx si, [Tun_Y]   
     mov dl, [sin1+si]
     mov dh, [Tun_X] 
     add dl, 17      
     call lut_MapTexture
     call Filter1                    
     call Nextframe                  
     call Vsync                      
     mov si, offset Pal_Cyan
     call Setpal                     
     call ShowScreen                 
     dec [FrameCounter]              
     jnz blob_loop                   
     call Clrscreen                  
     mov si, offset TextBuf1
     mov dx, 65 * 256 + 65
     mov bx, dx
     call ShadeTextbuffer                       
     Screenofs di, 310, 190 
     call CopyTextBuffer
     call Vsync 
     mov si, offset pal_Greetz
     call Setpal
     call Showscreen
     mov [Timer], 0         
outro_wait:                 
     cmp [Timer], 36
     jb outro_wait          
                            
the_end:                          
     ResetInt                 
     mov ax, 3       ; textmode 
     int 10h                
     Write Jerry            
     mov ax, 4C00h   ; end program
     int 21h                
                            
dataseg                              
                               
  Intro_Delay db 18, 18*5, 9+4, 18*5, 18*2+4, 18*2
    
  Tunnel_X     dw -100
  Tunnel_Y     dw -80      
  Tunnel_Xe    dw -100+320 
  Tunnel_Ye    dw -80 +200  
                                     
  Tun_X db 64       
  Tun_Y db 0         
  Tun_C db 1
        
  Sin_X   db 64         
  Sin_Y   db 0          
  Sin_Z   db 32         
  Sin_L   db 0          
  Sin_P   db 0          
  Sin_X_F dw 1          
  Sin_Y_F dw 1          
  Sin_Z_F dw 1          
  Sin_X_P db 21         
  Sin_Y_P db 21         
                        
  Sin_Procs dw sinus1, sinus2, sinus3, sinus4
                                   
  label WordsOfWisdom   
    defstring <nihility>        
    defstring <squell^zf[ presents]>
    defstring <nothing has a meaning>
    defstring <or a purpose>
    defstring <___ or a goal_>  
    defstring <so you are free>
    defstring <___ to be yourself>
    defstring < >    
    defstring <scene> 
    defstring <spirit>
    defstring <keep it alive[>
  label Greets                  
    defstring <respect goes out to>   
    defstring <vertigo>               
    defstring <gec>                   
    defstring <scid>                  
    defstring <the watcher>           
    defstring <jibz>            
  label zODNet                  
    defstring <zodnet ppl>      
    defstring <da butcher>                          
    defstring <enigma>                              
    defstring <zanda>                               
    defstring <stime>                               
    defstring <ardra>                               
    defstring <tvf>                                 
    defstring <t_c_r_>                              
    defstring <\ the rest ]>
  label Groups                                      
    defstring <group \ net greetz>                  
    defstring <TUHB>                                
    defstring <Dementia>                            
    defstring <Sound Alliance>                      
    defstring <Cronix>                              
    defstring <Chaosnet>
  label EoG       
    defstring <]>
                                      
  Wrt_Loc dw offset TextLocations  ; writer x/y pointer
  Wrt_Trigger dw offset zodnet
                                                    
  label GreetLoc word                 
    xy 140, 30       
                           
  label TextLocations      
     xy 80, 96    
                     
     xy 80, 140 ; m
     xy 120, 145 ; p
     xy 140, 150 ; g
     xy 30, 72 ; f
     xy 40, 77 ; y
     xy 0, 0    ;  
     xy 150, 130 ; s                                
     xy 130, 120 ; sh
     xy 114, 110 ; k
                  
     xy 180, 60 ; v 
     xy 190, 70 ; g
     xy 205, 55 ; s 
     xy 190, 50 ; w 
     xy 210, 52 ; j                                 
                   
     xy 120, 96   
                  
     xy 60,  20   
     xy 90, 40    
     xy 120, 60   
     xy 150, 80   
     xy 180, 120  
     xy 210, 140  
     xy 240, 160  
     xy 112, 120
                   
     xy 140, 170                                    
                    
     xy 60, 100 ; t        
     xy 70, 120 ; d        
     xy 75, 125 ; s           
     xy 74, 125 ; r        
     xy 80, 115 ; g        
     xy 65, 100 ; c                                 
     xy 70, 110 ; c                                 
                                                    
   label Font byte                                  
     dq 0                                             
     db 00Ch,014h,014h,024h,026h,04Ch,072h,0042h ; a
     db 000h,0FCh,0C6h,0CEh,0FCh,0E6h,0C6h,00FCh ; b
     db 000h,000h,01Ch,022h,040h,040h,042h,003Ch ; c
     db 058h,064h,042h,042h,042h,042h,044h,0058h ; d
     db 000h,000h,01Ch,022h,044h,058h,040h,003Eh ; e
     db 000h,0FEh,0C0h,0D8h,0F0h,0E0h,0C0h,00C0h ; f
     db 01Fh,030h,060h,063h,067h,063h,033h,001Eh ; g
     db 00Ch,010h,020h,026h,04Ah,052h,062h,0042h ; h
     db 010h,000h,000h,010h,010h,010h,010h,0010h ; i
     db 07Ch,004h,004h,004h,004h,008h,008h,0010h ; j
     db 00Ch,010h,024h,04Ah,05Ch,068h,044h,0042h ; k
     db 000h,0C0h,0C0h,0C0h,0C0h,0C0h,0C0h,00FEh ; l
     db 000h,006h,0C6h,0EEh,0FEh,0FEh,0D6h,00C6h ; m
     db 000h,006h,0C6h,0F6h,0FEh,0DEh,0C6h,00C6h ; n
     db 000h,000h,07Ch,022h,042h,042h,044h,0038h ; o
     db 05Ch,062h,042h,042h,044h,058h,040h,0040h ; p
     db 01Eh,020h,042h,042h,046h,03Ah,002h,0002h ; q
     db 000h,000h,058h,064h,040h,040h,040h,0040h ; r
     db 000h,000h,03Eh,040h,030h,00Ch,002h,007Ch ; s
     db 000h,0FCh,030h,030h,030h,030h,030h,0030h ; t
     db 000h,00Ch,0CCh,0CCh,0CCh,0CCh,0CCh,00FCh ; u
     db 042h,022h,022h,014h,014h,014h,008h,0008h ; v
     db 000h,006h,0C6h,0C6h,0D6h,0FEh,0EEh,00C6h ; w
     db 000h,006h,0C6h,06Ch,038h,038h,06Ch,00C6h ; x
     db 042h,042h,046h,04Ah,052h,022h,004h,0078h ; y 
     db 000h,000h,07Eh,004h,008h,010h,020h,007Eh ; z 
     db 024h,024h,024h,024h,024h,000h,000h,0024h ; [ = !!
     db 01Ch,022h,02Ch,030h,050h,08Eh,08Ch,0072h ; \ = & 
;    db 0FFh,0EFh,0C7h,083h,0C7h,0C7h,0C7h,00FFh ; ] = up arrow
     db 004h,002h,021h,001h,001h,021h,042h,0004h ; ] = :)
     db 010h,028h,044h,000h,000h,000h,000h,0000h ; ^     
     db 000h,000h,000h,000h,000h,000h,018h,0018h ; _     
                                                         
  Jerry db '// nihility (bizarre''99 party edition)',13,10
        db '  you can stop shouting now. thank you.',13,10,0
                                                    
  Calcing db 'Ú nihility',13,10                     
          db 'þ Performing Precalculations',13,10,'_ 1+1 = ',13,0
  Perc    db '_ 1+1 = 2',13,0                       
          db '_ 3*2 = 6',13,0                       
          db '_ 8/4 = 2',13,0                       
          db '_ 5ý = 25',13,0                       
          db '_ 8/4 = 1+1 = 2*1',13,0               
          db '_ (8/16)ý * 4 = 1',13,0               
          db '_ (6*2)/3 = 2*2 = 4',13,0             
          db '_ y(xý) + ûz = 3... ',13,0            
          db '_                  ',13,0
          db '_ Thank you, please stand by.',13,0

ufardata SqrtTable                   
  db 65536 dup (?)      
                        
ufardata Vscreen        
  db 65536 dup (?)                
                        
ufardata Texture  
  db 65536 dup (?)                
                                  
ufardata Sscreen   
  db 65536 dup (?) 

ufardata Bscreen
  db 65536 dup (?) 
                 
ufardata lut_UV    
  db 65536 dup (?)      
                 
ufardata lut_UV_2 
  db 65536 dup (?)      

end start                       
     
