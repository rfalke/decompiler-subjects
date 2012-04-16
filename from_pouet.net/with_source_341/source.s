; BBS addy for EKTO TRAKKS BBS
; Code by T.C.P. of D4Z in 1996
;
; Compiled using Turbo Assembler 4.0 and TLink 6.0
; Link with /t option to make com file


code segment
assume cs:code,ds:code,es:code,ss:code

org 100h                               ; COM-Datei erzeugen

start:
  mov     di,127
  xor     si,si
@Sinus:
  mov     al,byte ptr SinTab[si]
  mov     byte ptr SinTab[128+di],al
  inc     si
  dec     di
  jns     @Sinus

  mov     al,3                         ; Bildschirm lîschen
  int     10h

  call    BlackOut

  mov     dx,3D4h                      ; virtuellen 160x50 Screen einschalten
  mov     ax,5013h
  out     dx,ax

  mov     es,TextSeg                   ; Textmodus-Segment nach es
  xor     di,di                        ; ZÑhler initialisieren
  xor     dx,dx
  xor     bx,bx

fillscreenwithsquares:                 ; Bildschirm mit kleinen KÑstchen fÅllen
  mov     ax,07DBh                     ; ASCII 219, Attributbyte 7
  mov     cl,8                         ; 8 davon
  rep     stosw                        ; ausgeben
  add     di,16                        ; und 8 leer lassen
  mov     ax,960
  mul     bx
  cmp     di,ax                        ; am Ende der Zeile?
  jna     fillscreenwithsquares
  or      dx,dx
  jnz     @next1
  add     di,16
  inc     dx
  jmp     @next2
@next1:
  xor     dx,dx
@next2:
  inc     bx
  cmp     bx,33
  jna     fillscreenwithsquares

  xor     bx,bx
  mov     es,TextSeg                   ; Textmodus-Segment nach ds
  mov     di,1304                      ; Bildschirmoffset fÅr Logo
  mov     si,offset Logo1              ; Bitmusteroffset nach si
showbigfatlogo:
  cmp     si,offset Logo2
  jne     @@1
  mov     di,9304
@@1:
  mov     dl,8                         ; ZÑhler fÅr die Bytes des Bitmusters
mk0:
  mov     al,[si]                      ; Byte des Bitmusters nach al
  mov     dh,8                         ; ZÑhler fÅr Bits des Bitmuster-Bytes
mk1:
  rcl     al,1                         ; Bits einzeln ins C-Flag
  jnc     mk2                          ; nach mk2, wenn Bitwert = 0
  mov     cx,0FDBh
  mov     es:[di],cx                   ; sonst (Bitwert = 1) "€" setzen.
  mov     es:[di+2],cx
  mov     es:[di+4],cx
  mov     es:[di+6],cx
  mov     es:[di+320],cx
  mov     es:[di+322],cx
  mov     es:[di+324],cx
  mov     es:[di+326],cx
  mov     es:[di+640],cx
  mov     es:[di+642],cx
  mov     es:[di+644],cx
  mov     es:[di+646],cx
mk2:
  add     di,8
  dec     dh
  jnz     mk1
  inc     si                           ; nÑchstes Bitmuster-Byte
  add     di,640+256                   ; Offsetwert fÅr nÑchste Zeile
  dec     dx
  jnz     mk0

  sub     di,11*640+560                ; Offset fÅr nÑchstes Zeichen
  inc     bx
  cmp     bx,8
  je      goon
  jmp     showbigfatlogo
goon:

  call    scrollit                     ; Bildauschnitt setzen

  call    fade                         ; hochfaden

  xor     bx,bx
  mov     dx,100h                      ; dh = 1, dl = 0
scroll:
  xor     ax,ax
  mov     al,SinTab[bx]
  add     ax,96
  cmp     dl,5
  jbe     @@5
  mov     ax,96
@@5:
  mov     y,ax
  push    bx
  cmp     dl,1
  jna     @@2
  shl     bl,1
@@2:
  xor     ax,ax
  mov     al,SinTab[bx]
  cmp     dl,1
  je      @@6
  cmp     dl,3
  jbe     @@3
  cmp     dl,5
  ja      @@3
@@6:
  mov     cx,416
  sub     cx,ax
  mov     x,cx
  jmp     @@4
@@3:
  cmp     dl,7
  je      @@6
  add     ax,416
  mov     x,ax
  jmp     @@4
@@4:

  push    dx
  call    scrollit                     ; an neue Bildschirmkoordinaten scrollen
  pop     dx
  pop     bx
  add     bl,dh
  cmp     bl,255
  jne     @ok
  neg     dh
  inc     dx
  cmp     dl,7
  jbe     @ok
  mov     dl,0
@ok:

  mov     ah,0Bh                       ; prÅfen, ob Taste gedrÅckt wurde
  int     21h
  or      al,al
  jz      okay
  jmp     goon2                        ; wenn ja, Schleife verlassen
okay:
  jmp     scroll

goon2:
  call    fade                         ; runterfaden
  mov     ah,0Ch                       ; Keyboard-Buffer lîschen
  int     21h

  mov     ax,3
  int     10h
  mov     ax,1112h                     ; 80x50 Textmodus
  xor     bl,bl
  int     10h

  call    BlackOut

  xor     bx,bx
  mov     es,TextSeg                   ; Textmodus-Segment nach ds
  mov     di,1644                      ; Bildschirmoffset fÅr Logo
  mov     si,offset Logo1              ; Bitmusteroffset nach si
showdalogo:
  cmp     si,offset Logo2
  jne     @@01
  mov     di,3074
@@01:
  mov     dl,8                         ; ZÑhler fÅr die Bytes des Bitmusters
mk3:
  mov     al,[si]                      ; Byte des Bitmusters nach al
  mov     dh,8                         ; ZÑhler fÅr Bits des Bitmuster-Bytes
mk4:
  rcl     al,1                         ; Bits einzeln ins C-Flag
  jnc     mk5                          ; nach mk2, wenn Bitwert = 0
  mov     cx,0FDBh
  mov     es:[di],cx                   ; sonst (Bitwert = 1) "€" setzen.
mk5:
  add     di,2
  dec     dh
  jnz     mk4
  inc     si                           ; nÑchstes Bitmuster-Byte
  add     di,160-16                    ; Offsetwert fÅr nÑchste Zeile
  dec     dx
  jnz     mk3

  sub     di,8*160-18                  ; Offset fÅr nÑchstes Zeichen
  inc     bx
  cmp     bx,9
  je      @@02
  jmp     showdalogo
@@02:

  mov     si,offset EndMessage
  mov     es,TextSeg
  mov     di,4532
  mov     cx,27
  rep     movsw

  mov     dx,3200h                     ; Cursor setzen
  mov     ah,2
  int     10h

  call    fade

  xor     ah,ah                        ; Auf Tastendruck warten
  int     16h

  call    fade

  mov     al,3                         ; 80x25 Textmodus
  int     10h
  xor     ax,ax                        ; Bildschirm lîschen
  mov     ch,16h
  rep     stosw

  mov     si,offset EndMessage         ; Endnachricht ausgeben
  add     si,54
  mov     es,TextSeg
  mov     di,102
  mov     cl,29
  rep     movsw

  mov     ah,4Ch                       ; ZurÅck zum DOS
  int     21h


; Prozeduren
fadepal1:                              ; fadet abhÑngig von UP die in T
  mov     dx,3C7h                      ; Åbergebene Farbe hoch oder runter
  mov     al,cl
  out     dx,al                        ; Farbwerte einlesen
  mov     dx,3C9h
  in      al,dx
  mov     ah,al
  in      al,dx
  mov     bl,al
  in      al,dx
  mov     bh,al
  add     ah,up                        ; Farbwert um UP erhîhen
  add     bl,up                        ; (bei negativem UP wird dekrementiert)
  add     bh,up
  dec     dx                           ; Farbwerte zurÅckschreiben
  mov     al,cl
  out     dx,al
  inc     dx
  mov     al,ah
  out     dx,al
  mov     al,bl
  out     dx,al
  mov     al,bh
  out     dx,al
  ret

scrollit:                              ; verschiebt den Bildauschnitt zu den
  mov     ax,y                         ; Koordinaten in X und Y
  mov     cl,4
  shr     ax,cl
  mov     bx,160
  mul     bx
  mov     cx,ax
  mov     ax,x
  mov     bx,9
  div     bx
  add     cx,ax
  mov     t,cx

  mov     dx,3DAh
@wait1:
  in      al,dx
  test    al,8
  jnz     @wait1

  mov     dx,3D4h                      ; zuerst Grobscrolling
  mov     al,0Ch                       ; Register 0Ch (LSA Middle)
  mov     ah,byte ptr t + 1            ; Bits 15-8 setzen
  out     dx,ax                        ; Register 0Dh (LSA Low)
  mov     al,0Dh                       ; Bits 7-0 setzen
  mov     ah,byte ptr t
  out     dx,ax

  mov     dx,3DAh
@wait2:
  in      al,dx
  test    al,8
  jz      @wait2

  mov     ax,y
  xor     dx,dx
  mov     cx,16
  div     cx
  xchg    dx,ax
                                       ; jetzt Softscrolling
  mov     dx,3D4h                      ; vertikales Panning
  mov     ah,al
  mov     al,8
  out     dx,ax

  mov     ax,x
  dec     ax
  xor     dx,dx
  mov     cx,9
  div     cx
  xchg    dx,ax
  mov     ch,al

  mov     dx,3C0h                      ; horizontales Panning
  mov     al,13h or 32
  out     dx,al
  mov     al,ch
  or      al,32
  out     dx,al
  ret

fade:                                  ; fadet die im Programm verwendeten
  mov     cx,31                        ; Farben 7 und 63 hoch/runter
fadeloop:                              ; (je nachdem ob UP pos. oder neg.)
  mov     dx,3DAh                      ; WaitRetrace
w1:
  in      al,dx
  test    al,8
  jnz     w1
w2:
  in      al,dx
  test    al,8
  jz      w2

  push    cx
  mov     cl,7
  call    FadePal1
  mov     cl,63
  call    FadePal1
  call    FadePal1
  pop     cx
  loop    fadeloop
  neg     up
  ret

BlackOut:
  mov     bh,255                       ; bei Farbe 255 beginnen
theloop:
  mov     dx,3C8h                      ; alle Farbwerte auf 0 setzen
  mov     al,bh
  out     dx,al
  inc     dx
  xor     al,al
  out     dx,al
  out     dx,al
  out     dx,al
  dec     bh
  jnz     theloop
  ret

; Daten
  EndMessage db 'A',7,'R',7,'T',7,' ',7,'H',7,'P',7,'A',7,' ',7,'T',7
             db 'O',7,'O',7,'L',7,'Z',7,' ',7,' ',7
             db '+',7,'4',7,'9',7,'-',9,'9',7,'5',7,'0',7,'4',7,'-',9,'6',7
             db '7',7,'8',7
             db 'I',8,'N',7,'T',7,'R',7,'O',7,' ',7,'C',8,'O',7,'D',7,'E',7
             db 'D',7,' ',7,'B',8,'Y',7,' ',7,'T',3,'.',9,'C',3,'.',9,'P',3
             db '.',9,'/',7,'D',3,'4',3,'Z',3,' ',7,'''',9,'9',3,'6',3
  x          dw 416
  y          dw 96
  t          dw ?
  up         db 1
  TextSeg    dw 0B800h

  Logo1      db 00011110b
             db 00110011b
             db 01100000b
             db 11000000b
             db 11111100b
             db 01100000b
             db 01110011b
             db 01111110b

             db 00011110b
             db 00110011b
             db 01100000b
             db 11000000b
             db 11000000b
             db 01100000b
             db 00110011b
             db 00011110b

             db 11111111b
             db 10011001b
             db 00011000b
             db 00011000b
             db 00011000b
             db 00011000b
             db 00011000b
             db 00011000b

             db 00111100b
             db 01100110b
             db 11000011b
             db 11000011b
             db 11000011b
             db 11000011b
             db 01100110b
             db 00111100b

  Logo2      db 01111111b
             db 01100011b
             db 00000011b
             db 00000011b
             db 00000011b
             db 00000011b
             db 00000011b
             db 00000011b

             db 11111100b
             db 11000110b
             db 11000011b
             db 11000011b
             db 11111110b
             db 11000011b
             db 11000011b
             db 11000011b

             db 01111110b
             db 11000011b
             db 11000011b
             db 11000011b
             db 11111111b
             db 11000011b
             db 11000011b
             db 11000011b

             db 11000011b
             db 11000011b
             db 11000011b
             db 01100110b
             db 00111100b
             db 01100110b
             db 11000011b
             db 11000011b

             db 11000011b
             db 11000011b
             db 11000011b
             db 01100110b
             db 00111100b
             db 01100110b
             db 11000011b
             db 11000011b

  SinTab     db 0,0,0,0,1,1,2,2,3,3,4,5,6,7,8,9,10,12,13,14,16,18,19,21,23,24
             db 26,28,30,32,34,37,39,41,44,46,48,51,53,56,59,61,64,67,69,72,75
             db 78,81,84,87,90,93,96,99,102,105,108,111,114,118,121,124,127,130
             db 133,136,139,143,146,149,152,155,158,161,164,167,170,173,176,179
             db 182,185,188,190,193,196,198,201,204,206,209,211,213,216,218,220
             db 223,225,227,229,230,232,234,235,237,239,241,242,243,244,245,246
             db 247,248,249,250,251,252,252,253,253,254,254,255,255,255,255

  MakeIt999  db 8 dup (0)

code ends
end start
