Assume CS:_Code, DS:_Data

Include Phase1.Inc
Include Logo.Inc
Include Char.Inc    ;charset.inc=16*8 charset!
Include Charset.Inc
Include Palette.Inc
Include Sine1.Inc
Include Sine2.Inc

;Procedures:


EXTRN  INITIALIZE:FAR            ; Initializes the modplayer for given
                                 ; sounddevice and replayrate

EXTRN  LOADMODULE:FAR            ; Loads the Module into memory

EXTRN  STARTPLAYING:FAR          ; Starts playing the module

EXTRN  STOPPLAYING:FAR           ; Stops playing the module

EXTRN  DEALLOC:FAR               ; Deallocates and erases the module
                                 ; from memory

EXTRN  ASKINIT:FAR

;Variables:

EXTRN  SOUNDDEVICE:WORD          ; The Sounddevice number

EXTRN  TIMERSPEED:WORD           ; The replayrate 1193182/Hertz

EXTRN  SBDMA:WORD                ; SoundBlaster's DMA-Channel

EXTRN  SBIRQNR:WORD              ; SoundBlaster's IRQ-Number

;Special_Variables:

EXTRN  BAR1,BAR2,BAR3,BAR4:WORD  ; Selfdecrementing Bars, see the docs

EXTRN  SHOWPATTERNS:Word         ; Shows the patterns

EXTRN  MASTERVOLUME:Word         ; Mastervolume from 0 to 64

.286P


.MODEL LARGE _CODE

_STACK Segment Para Stack 'Stack'
    db 512 dup (?)
_Stack EndS


_CODE Segment


Detection Proc Near
Check_VGA:
                mov dx,Offset Header
                call Print
                xor bx,bx
                mov ax,01a00h
                int 10h
                cmp bl,7
                jb NoVGA
                cmp bl,0Ch
                ja NoVGA
                jmp CheckVirtual
NoVGA:
                mov dx,Offset VGAErr
                jmp ErrorExit
CheckVirtual:
                mov dx,Offset VGAFnd
                call Print
                smsw ax
                test al,1
                jnz InVirtual
                mov dx,Offset RealMode
                call Print
                jmp EndDetection
InVirtual:
                mov dx,OffSet V86Err
                jmp ErrorExit
EndDetection:
                ret
Detection EndP

ErrorExit Proc Near
                mov ah,9
                int 21h
                mov dx,Offset Abnormal
                mov ah,9
                int 21h
                mov ax,4C00h
                int 21h
                ret
ErrorExit EndP

Print Proc Near
                mov ah,9
                int 21h
                ret
Print EndP

Initvideo Proc Near
          mov ah,0
          mov al,13h
          int 10h
          ret
Initvideo EndP

Textmode Proc Near
          mov ah,0
          mov al,3
          int 10h
          ret
Textmode EndP

PutPalette Proc Near
          mov ax,seg Palette
          mov es,ax
          mov dx,offset Palette
          mov ah,10h
          mov al,12h
          mov bx,0
          mov cx,255
          int 10h
          ret
PutPalette EndP

PutLogo Proc Near
          mov ax,seg logo
          mov ds,ax
          mov si,offset logo
          mov ax,0a000h
          mov es,ax
          mov di,40*320
          mov cx,116*320
          cld
          rep movsb
          ret
PutLogo EndP

Loadscreen Proc Near
          mov ax,seg Logo
          mov ds,ax
          mov bx,offset Logo
          add bx,[xpos]
          mov ax,[ypos]
          sub ax,40
          mov dx,320
          mul dx
          add bx,ax
          mov si,bx

          mov ax,0a000h
          mov es,ax
          mov bx,[xpos]
          mov ax,[ypos]
          mov dx,320
          mul dx
          add bx,ax
          mov di,bx
          mov [SIoud],si
          mov [DIoud],di
          mov [regel],0
setup1:   mov cx,57
          rep movsb
          inc [regel]
          mov ax,[regel]
          mov dx,320
          mul dx
          mov si,[SIoud]
          mov di,[DIoud]
          add si,ax
          add di,ax
          cmp [regel],6
          jne setup1
          mov [regel],0
          ret
LoadScreen EndP

PutIntroducing Proc Near
          mov ax,seg Phase1
          mov ds,ax
          mov si,offset Phase1
          mov ax,0a000h
          mov es,ax
          mov bx,[xpos]
          mov ax,[ypos]
          mov dx,320
          mul dx
          add bx,ax
          mov di,bx
          mov [SIoud],si
          mov [DIoud],di
          mov [regel],0
setup:    mov cx,57
copy:     mov al,ds:[si]
          cmp al,0
          je sla_over
          mov es:[di],al
sla_over: inc si
          inc di
          loop copy
          inc [regel]
          mov ax,[regel]
          mov dx,320
          mul dx
          mov si,[SIoud]
          mov di,[DIoud]
          add si,ax
          add di,ax
          cmp [regel],6
          jne setup
          mov [regel],0
          ret
PutIntroducing EndP

Scroller Proc Near
          cld
          mov ax,0a000h
          mov es,ax
          mov ds,ax
          mov di,(320*173)+0
          mov si,(320*173)+2
          xor al,al
          mov ah,8
Rollit:   mov cx,318
          rep movsb
          add di,2    ;162
          add si,2
          dec ah
          jne Rollit

goon0:    mov ax,Seg Text
          mov ds,ax
          mov si,Offset Text
          add si,[Txt]
          mov ax,[si]
          cmp al,0   ; einde tekst
          jne checknext
Textptr:  mov [Letter],0
          mov [Txt],0
          jmp goon0
checknext:
          cmp al,32  ; spatie
          jne l0
          mov bx,2560
          jmp calc
l0:
          cmp al,48
          jne l1
          mov bx,208
          jmp calc
l1:
          cmp al,49
          jne l2
          mov bx,216
          jmp calc
l2:
          cmp al,50
          jne l3
          mov bx,224
          jmp calc
l3:
          cmp al,51
          jne l4
          mov bx,232
          jmp calc
l4:
          cmp al,52
          jne l5
          mov bx,240
          jmp calc
l5:
          cmp al,53
          jne l6
          mov bx,248
          jmp calc
l6:
          cmp al,54
          jne l7
          mov bx,256
          jmp calc
l7:
          cmp al,55
          jne l8
          mov bx,264
          jmp calc
l8:
          cmp al,56
          jne l9
          mov bx,272
          jmp calc
l9:
          cmp al,57
          jne vraag
          mov bx,280
          jmp calc
vraag:
          cmp al,63
          jne uitroep
          mov bx,288
          jmp calc
uitroep:
          cmp al,33
          jne punt
          mov bx,296
          jmp calc
punt:
          cmp al,46
          jne komma
          mov bx,304
          jmp calc
komma:
          cmp al,44
          jne goon
          mov bx,312
          jmp calc

goon:     sub ax,65
          xor ah,ah
          mov dx,8
          mul dx
          mov bx,ax

calc:     mov ax,Seg Charset
          mov ds,ax
          mov si,Offset Charset
          add si,[Letter]
          add si,bx

          mov ax,0a000h
          mov es,ax
          mov di,(320*173)+318
          mov al,0
          mov cx,si
          mov dx,di

Cloop:    mov ah,8
Copychar: movsb
          add si,319
          add di,319
          dec ah
          jne Copychar
          mov si,cx
          mov di,dx
          inc si
          inc di
          cmp al,1
          je Charklaar
          mov si,cx
          inc si
          call charklaar
          inc al
          jmp Cloop
Charklaar:
          cmp [Letter],7
          je newchar
          inc [Letter]
          ret
newchar:  mov [Letter],0
          inc [Txt]
          ret
Scroller EndP

Flasher Proc Near
          cmp [Mode],1
          je Verhoogkleur
          mov dx,03C8h
          mov al,254
          out dx,al
          inc dx
          mov al,[Kleur]
          out dx,al
          out dx,al
          out dx,al
          cmp [kleur],63
          je ChgMode
          Inc [Kleur]
          ret
ChgMode:  mov [mode],1
          jmp Flasher
VerhoogKleur:
          mov dx,03C8h
          mov al,254
          out dx,al
          inc dx
          mov al,[Kleur]
          out dx,al
          out dx,al
          out dx,al
          cmp [kleur],15
          je ChgMode0
          Dec [Kleur]
          ret
ChgMode0: mov [mode],0
          jmp Flasher

Flasher EndP

CalcPositions Proc Near
          mov ax,Seg Bounce
          mov ds,ax
          mov si,Offset Bounce
          add si,[TY]
          mov ax,[si]
          add ax,100
          mov [Ypos],ax
          mov si,Offset Swing
          add si,[TX]
          mov ax,[si]
          add ax,68
          mov [Xpos],ax
          cmp [TY],94
          jne vhy
          mov [TY],0
          jmp vergx
vhy:      Inc [TY]
          Inc [TY]
vergx:    cmp [TX],254
          jne vhx
          mov [TX],0
          ret
vhx:      Inc [TX]
          Inc [TX]
          mov [spos],0
          ret
CalcPositions EndP

Init PROC NEAR
          call Initvideo
          call PutPalette
          call PutLogo
          call textptr
          mov [TX],0
          mov [TY],0
          mov dx,03C8h
          mov al,254
          out dx,al
          inc dx
          mov al,0
          out dx,al
          out dx,al
          out dx,al
;          mov ax,1001h
 ;         mov bh,155
  ;        int 10h
          ret
Init EndP

Docycle Proc Near
          mov dx,3DAh
;Wacht:    in al,dx
 ;         test al,8
  ;        jne wacht
Wacht2:   in al,dx
          test al,8
          je wacht2
          ret
Docycle EndP

SetColor Proc Near
             mov dx,03C8h
             mov al,253
             out dx,al
             inc dx
             mov al,[Colour]
             out dx,al
             out dx,al
             out dx,al
             ret
SetColor EndP

FlashUp Proc Near
             cmp [FlashModus],1
             je FadeOut
             cmp [Colour],63
             je ZetPauze
             ;Call SetColor
             inc [Colour]
             Call SetColor
             ret
ZetPauze:
             cmp [Pauze],255
             je ChangeFlashModus
             Inc [Pauze]
             ret
ChangeFlashModus:
             mov [FlashModus],1
             mov [Pauze],0
             ret
FadeOut:
             cmp [Colour],0
             je ZetText
             Call SetColor
             Dec [Colour]
             ret
ZetText:
             Call Message
             ;mov [FlashModus],0
             ret
FlashUp EndP


Message Proc Near
CalcNewChar:
             mov ax,Seg MessageText
             mov ds,ax
             mov si,Offset MessageText
             add si,[TextPos]
             mov ax,[si]
             cmp al,32
             jne Go_on
             mov bx,5120
             jmp NewCoord
Go_on:
             dec ax
             mov dx,8
             mul dx
             xor ah,ah
             mov bx,ax
NewCoord:
             mov ax,Seg CharSet2
             mov ds,ax
             mov si,Offset CharSet2
             add si,bx
             mov ax,0A000h
             mov es,ax
             xor ah,ah
             mov al,[Karakters]
             mov dx,8
             mul dx
             mov di,12*320
             add di,ax
             mov dx,16
Putline0:
             mov cx,8
             rep movsb
             add si,312
             add di,312
             dec dx
             jne Putline0
             cmp [Karakters],39
             je TextRegelaf
             inc [Karakters]
             inc [TextPos]
             ;jmp CalcNewCHar
             ret
TextRegelaf:
             mov [Karakters],0
             mov [Flashmodus],0
             cmp [TextPos],30*40
             jg ResetFlashText
             Inc [TextPos]
             ret
ResetFlashText:
             mov [TextPos],0
             ret
Message EndP


Main  PROC NEAR
          mov ah,4Ah
          mov bx,6250
          int 21h
          mov ax,_Data
          mov ds,ax
          Call TextMode
 ;         Call Detection
          mov cx,100
EenPauzetje:
          call Docycle
          loop EenPauzetje
          Call TextMode
;          Call AskInit
;          Call Initialize
;          mov dx,Offset FileName
;          Call LoadModule
          push ds
          push dx
          call init
          pop ds
          pop dx
;		Call StartPlaying
          mov al,01011110b
          out 21h,al
WaitEsc:
          Call CalcPositions
          Call PutIntroducing
          call Docycle
          call Scroller
          Call FlashUp
          call Flasher
          call LoadScreen
          in al,60h
          cmp al,1
          jne WaitEsc
;          Call StopPlaying
;          Call Dealloc
          mov al,0
          out 21h,al
          call Textmode
          mov ah,9
          mov dx,offset Outtext
          int 21h
          mov ah,4Ch
          mov al,0
          int 21h
          ret
Main  ENDP
_Code EndS

_DATA Segment Para Public 'Data'
Filename db 'phase1.zax',0
Header          db 'SCOUT IS NOW SNIFFING TRU YOUR SYSTEM......',13,10
                db 'MMMMM...LET ME SEE ...',13,10,13,10,'$'

VGAErr          db 7,'Whatthefuck!..ERROR: No VGA-card found! LAME!!!',13,10,'$'
V86Err          db 7,'Hold yar horses! ERROR: Processor in V86-mode!',13,10,'$'
Abnormal        db 13,10,'ABNORMAL DEMO TERMINATION ie. the sickness of Parkinson!',13,10,'$'

VGAFnd          db 'Hey! a VGA-card installed!',13,10,'$'
RealMode        db 'Is this real?!, Processor in Real-mode!',13,10,'$'
Kleur   db 0
Mode    db 0
Regel   dw 0
Letter  dw 0
Xpos    dw 0
Ypos    dw 0
TX      dw 0
TY      dw 0
Txt     dw 0
SIoud   dw 0
DIoud   dw 0
Teller  dw 0
spos    dw 0
pos     dw 0
Pauze       db 254
FlashModus  db 0
TextPos     dw 0
NewMess     db 0
Karakters   db 0
Colour      db 0
MessageText db '         CREDITS FOR THIS INTRO         '
            db '          ALL CODING BY SCOUT           '
            db '       GRAPHICS BY TPM AND SCOUT        '
            db '        MUSIC BY THE RAVEAHOLIC         '
            db '                                        '
            db '   NOW IT IS TIME FOR SOME GREETINGS    '
            db '     SILICON SENDS HORNY GIRLS TO       '
            db '              FUTURE CREW               '
            db '                CASCADA                 '
            db '              ULTRA FORCE               '
            db '                 RAZOR                  '
            db '           THE PHONEY CODERS            '
            db '                 WITAN                  '
            db '                 E M F                  '
            db '       AND ALL THE FORGOTTEN ONES       '
            db '                                        '
            db '   PERSONAL HANDSHAKES FROM SCOUT TO    '
            db '         EARTHSHAKER OF SILICON         '
            db '              TPM OF SILICON            '
            db '            SPIDER OF SILICON           '
            db '             GIZMO OF SILICON           '
            db '        CBA OF THE RULING COMPANY       '
            db '              GERBEN SANNES             '
            db '             EDWIN ATTEVELT             '
            db '              BARRY VAN OS              '
            db '                   AND                  '
            db '              ROB KOKKELER              '
            db '                                        '
            db '        CALL OUR WHQ DREAMSCAPE         '
            db '   FOR PHONENUMBER READ THE NFO FILE    '
            db '                 C YA                   '

Text    db 'YEAH! LOOSEN UP YAR FEET AND DANCE 2 THIS GROOVE .... MAAR GOED...'
        db '  BACK TO THE COMMODORE 64 ERA WITH THIS LOUSY INTRO OR WHAT YOU MAY'
        db ' CALL THIS PILE OF SHIT.... BUT ANYWAY... THIS IS THE FIRST PRODUCTION'
        db ' OF SILICON ON THE P.C., BUT IT IS NOT SOMETHING TO BE PROUD OF!  '
        db 'I KNOW THAT THERE ARE A LOT OF VGA TRICKS WHO MAY SMOOTHEN UP THIS CODE ALOT'
        DB '  BUT THE PROBLEM IS THAT I HAVENT GOT THE KNOWLEDGE!!'
        DB '  SO, IF YOU ARE A CODER IN ASSEMBLY AND YOU ARE LIVING IN HOLLAND, DO NOT'
        DB ' HESITATE TO CONTACT ME AND TEACH ME SOME TRICKS IN CODING!!!!'
        DB ' AS YOU CAN SEE I KNOW SOME CODE IN ASSEMBLY, BUT I WANT TO KNOW MORE MORE MORE!!!'
        DB '    ENOUGH BEGGING!!  JUST CONTACT ME, ALSO FOR SWAPPING OR SOMETHING LIKE THAT!   '
        DB '   BACK TO MY NORMAL LIFE....  I AM SITTING HERE IN MY ROOM BEHIND MY COMPY AND LISTENING TO'
        DB ' RAGE AGAINST THE MACHINE!! COOL CD... BUY IT!!!  THE REST OF THIS DAY I HAVE BEEN STRUGGLING '
        DB 'WITH DIFFERENT MOD ROUTINES..... WITH DIFFERENT I MEAN GOLDPLAY AND MODOBJ, COZ THOSE ARE ONLY ONES I HAVE.'
        DB '  I AM NOT PLEASED WITH GOLDPLAY WITH AN AVERAGE SOUNDQUALITY TRU THE SOUNDBLASTER.... TOO MUCH '
        DB 'HIGH TONES AND TOO MUCH DISTORTION IN THE SAMPLES, AS MODOBJ FROM MARK J. COX HAS A BETTER SOUNDQUALITY, BUT '
        DB 'ONLY PLAYS TRU THE NORMAL SOUNDBLASTER AND IS MENT FOR PASCAL OR C..... IN ONE WORD SHIT!   '
        DB '    I HOPE SOMEBODY READS THIS SCROLLER, AND IF THAT SOMEBODY IS STILL READING, YOU MUST BE MENTALLY DEARRANGED!!'
        DB '  WELL..I THINK I WRAP THIS SCROLLER AND ASSEMBLE THE SHIT...... READ THE .NFO FILE FOR MORE INFO AND HAVE A NICE SUMMERHOLIDAY!   '
        DB ' SCOUT IS SIGNING OFF AT MONDAY 26TH OF JULY 1993    BYE....                                   ',0
Outtext db 'Code by Scout/Silicon',13,10
        db 'Logo by TPM/Silicon',13,10
        db 'Music by The Rave-aholic/Silicon',13,10,13,10
        db 'CONTACT SILICON',13,10,13,10
        db 'Scout/Silicon',13,10
        db 'Roland van Oorschot',13,10
        db 'Acaciastraat 29bis',13,10
        db '3551BE  Utrecht',13,10
        db 'Holland',13,10
        db 13,10,13,10,'$'


_Data EndS

END Main

