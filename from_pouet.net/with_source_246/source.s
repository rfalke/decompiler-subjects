;
; source code of the 256 bytes demo Collideum
; (c) 1999 by Gekko/Tonik -- gk@scene.hu
;
; It was great fun for me to create it, I hope it will be the same
; for you to discover the tricks I use. If you liked this code or
; managed to learn something new from it, then please send me an email.
;
;
; This source complies with NASM. It is freeware, download it from:
; http://www.cryogen.com/Nasm
;
;
; This intro is just a few days of work. I stopped optimizing as soon
; as I reached the magic 256 bytes threshold, so there are still quite
; a few bytes which could be removed... I tried to make it as stable as
; possible, so no DOS 7.0 specific tricks are used, there is a check for
; ESC-press, it switches back to textmode on exit, and so on.
;
; You can step forward in the intro, just press any key (except for ESC).
; This 'feature' is because the synchronisation is done with HLT
; instructions, and these don't stop the code while any key is pressed.
;
; Some notes on the music player:
; There is a 16-note pattern stored; it is always played twice
; (2*16=32 notes), and the first 8 notes work as a base line, too
; (8*32=256 notes). After this, the song is repeating.
; I've tried to play the displayed text and some other freaky things,
; sometimes it even sounded good...
; Another hint is to try to change the MOV to ADD when the player
; separates octave and note (mov dh,al). Since dh is 12 then, it will
; raise the tune 3 octaves higher. The only problem is that it sometimes
; then overflows the available 0..7 octave range. Some strange rhythms
; are created, but they are rather good, too (oh well, considering the
; limitations of Adlib and the 256-ish byte limit).
; It is a good idea to have an Adlib SDK handy when messing around
; with the Adlib registers...



;
; macros
;

%imacro note 2
%ifidni %1,C
 db (%2)*12 + 0
%elifidni %1,C#
 db (%2)*12 + 1
%elifidni %1,D
 db (%2)*12 + 2
%elifidni %1,D#
 db (%2)*12 + 3
%elifidni %1,E
 db (%2)*12 + 4
%elifidni %1,F
 db (%2)*12 + 5
%elifidni %1,F#
 db (%2)*12 + 6
%elifidni %1,G
 db (%2)*12 + 7
%elifidni %1,G#
 db (%2)*12 + 8
%elifidni %1,A
 db (%2)*12 + 9
%elifidni %1,A#
 db (%2)*12 + 10
%elifidni %1,H
 db (%2)*12 + 11
%else
 %error Invalid use of note macro.
%endif
%endmacro


;
; code
;

bits 16
org 0x100

; ch=0, ah=0 on entry
main:

  ; bp will point to the adlibreg routine (during the whole demo)
  mov bp,adlibreg

  ; initialize 320x200 256 color video mode
  mov al,0x13
  call initialize

  ; print text
  mov ah,9
  mov dx,text
  mov cl,6
  .print:
    int 0x21
  loop .print

  ; change color of some lines of text from gray to something else
  ; this way these pixels won't be treaten as particles
  mov di,0xA000                         ; 0xA000 = 320 * 128
  mov ES,di
  .recolorize:
    mov al,[ES:di]
    shl al,1
    stosb
    test di,di
  jnz .recolorize

  core:

    ; bl = frame counter
    ; bh = 0 (at least it seems so, but who cares, it's working well :)
    inc bl
    push bx

; ---------------------------------------------------------------------------
; adlib player routine
; ---------------------------------------------------------------------------

player:
    mov ax,bx
    and al,0xEF
    shr bx,5
    mov cl,[bx+pattern]
    and al,0x0F
    mov bx,ax
    add cl,[bx+pattern]

    and al,0x03
    cmp al,0x03
    jne .skip
    dec ax
   .skip:

    add al,0xA0

    push ax
    xor ax,ax
    mov al,cl
    mov dh,12
    div dh
    mov bl,ah
    shl ax,2
    mov dh,al
    pop ax

   ; play one note
   ; al = channel (0..3) + 0xA0
   ; bx = note (0..11)
   ; dh = 4 * octave (0..7)

    ; set frequency
    mov ah,[bx+freqtable]
    call bp

    ; note off
    add al,0x10
    mov ah,dh
    call bp

    ; note on
    add ah,0x20
    call bp

; ---------------------------------------------------------------------------
; end of adlib player routine
; ---------------------------------------------------------------------------

    hlt

; ---------------------------------------------------------------------------
; particle effect - 'snow'
; ---------------------------------------------------------------------------

particles:
    std
    mov di,320*170 - 1
    mov cx,di
    .loop:
      mov bx,321 - 1                    ; Substract 1 to compensate
      in al,0x40                        ; the bad pseudo random routine.
      and al,0x03                       ; It would be better to keep the
      add bl,al                         ; value in range 0..2 instead of 0..3
      mov ax,0x0007
      cmp byte[ES:di+bx],al
      jae .cantmove
      mov byte[ES:di+1],ah
      mov byte[ES:di+bx],al             ; This repne scasb should be in the
     .cantmove:                         ; beginning of the loop, but it takes
      repne scasb              ; <----  ; less bytes this way. That's why
      inc cx                            ; there are a few messy pixels in
    loop .loop                          ; the bottom of the screen.

    ; generate new particles
    mov byte[ES:bx+0x7B],al

; ---------------------------------------------------------------------------
; end of particle effect
; ---------------------------------------------------------------------------

    hlt
    hlt

    pop bx

    ; repeat core loop unless ESC is pressed
    in al,0x60
    cbw
    dec ax
  jne core

  ; deinitialization: set textmode, kill sound player and exit to the OS
  mov al,3
;  call initialize
;  retn

; audio+video initialization
; al = videomode
; ah = 0
initialize:

  ; setting videomode
  int 0x10

  ; clear all adlib registers
  mov al,244
  .clear:
    call bp
    dec ax
  jne .clear

  ; upload instrument and channel data to adlib registers
  mov si,instrument
  mov cl,7
  .loop:
    lodsw
    call bp
    inc ax
    call bp
    inc ax
    call bp
  loop .loop

  retn


; set value of one adlib register
; al = register
; ah = data
adlibreg:

  pusha

  mov dx,0x388
  out dx,al

  push word .here
  pusha
 .here:

  mov al,ah
  inc dx
  out dx,al
  dec dx

 .timer:
  mov cx,dx
  .loop:
    in al,dx
  loop .loop

  popa
  retn


; frequency table
; I've got the idea of this 1 byte/note table from
; Viznut/PWP's "Phygo" Assembly 1999 4kb intro source
freqtable:
db 0x157/4 ; C
db 0x16B/4 ; C#
db 0x181/4 ; D
db 0x198/4 ; D#
db 0x1B0/4 ; E
db 0x1CA/4 ; F
db 0x1E5/4 ; F#
db 0x202/4 ; G
db 0x220/4 ; G#
db 0x241/4 ; A
db 0x263/4 ; A#
db 0x287/4 ; H

; (register, data) pairs
; if there were at least two instruments, it would be smaller to use
; (register, data1, data2) format, where data2 is written to register+3
instrument:
db 0x20
db 00100000b
db 0x23
db 10100000b
db 0x60
db 11111000b
db 0x63
db 11110011b
db 0x80
db 01001010b
db 0x83
db 00110010b
db 0xC0
db 00000110b

pattern:
note C ,3
note C ,1
note C ,2
note D#,3
note G ,3
note G ,2
note D#,3
note D#,2
note F ,3
note F ,1
note F ,2
note F ,3
note A#,2
note A#,0
note A#,1
note A#,2

text db 10,10,10,9,9,"COLLiDEUM",13,'$'
db 'G' ; to make it really 256 bytes :)

