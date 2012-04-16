;--------------------------------------------------------------------------
;- AMC musicfile replay by Brian/Shame Redesign (C) 1993 Budapest Hungary -
;- Only for Video Graphics Array                                          -
;--------------------------------------------------------------------------
.MODEL SMALL
.STACK
.286
.CODE
;--------------------------------------------------------------------------
AMC_INIT        = TUNE
AMC_PLAY        = TUNE+3
AMC_STOP        = TUNE+6
AMC_SHUTDOWN    = TUNE+12
LF              EQU 0ah
CR              EQU 0dh
;--------------------------------------------------------------------------
AMCREPLAY:      mov ax,DGROUP
                mov ds,ax
                mov ah,0dh
                int 21h
                
                mov di,80h                   ; CHECKING PARAMETERS
                mov al,es:[di]
                mov ah,0
                mov len,ax
                cmp ax,0
                jne okay1

                mov ah,9h
                lea dx,message1              ; NO PARAMETER DETECTED
                int 21h
                jmp exit

okay1:          mov bx,0                     ; PARAMETER = FILENAME
                mov di,80h
c0:             inc di
                cmp es:[di],byte ptr 32
                jne c0
                inc di
                mov cx,len
c1:             mov al,es:[di]
                mov filename[bx],al
                inc bx
                inc di
                loop c1
                dec bx
                mov filename[bx],0

                mov ah,3dh                   ; LOADING MUSICFILE INTO
                lea dx,filename              ; THE MEMORY
                mov al,0
                int 21h
                jnc noerr1
                jmp error
noerr1:         mov handle,ax
                mov bx,ax
                mov ah,3fh
                mov cx,65535
                mov dx,MUZAK
                mov ds,dx
                mov dx,0
                int 21h
                jnc noerr2
                jmp error
noerr2:         mov ax,DGROUP
                mov ds,ax
                mov ah,3eh
                mov bx,handle
                int 21h
                jnc noerr3
                jmp error

noerr3:         mov ax,MUZAK
                mov es,ax
                mov di,0
                cmp es:[di],byte ptr 0ebh
                je  okay2
		cmp es:[di],byte ptr 0e9h
		je  okay2

                mov ah,9h
                lea dx,message2              ; NOT AMC FILE
                int 21h
                jmp exit

okay2:          mov ax,3h
                int 10h
                mov ah,9h
                lea dx,message0
                int 21h
                
                mov bx,0                     ; INITIALIZING MUSIC
                mov cx,0
                call far ptr AMC_INIT
                cli

SCREEN:         mov dx,03dah                 ; WAITING FOR VERTICAL
                in  al,dx                    ; RETRACE
                and al,8
                je  SCREEN

                mov dx,03c8h                 ; SETTING BACKGROUND COLOR
                mov al,0                     ; TO RED
                out dx,al
                mov al,03fh
                inc dx
                out dx,al
                mov al,00h
                out dx,al
                out dx,al

                call far ptr AMC_PLAY        ; PLAYING MUSIC

                mov dx,03c8h                 ; SETTING BACKGROUND COLOR
                mov al,0                     ; TO BLACK
                out dx,al
                mov al,00h
                inc dx
                out dx,al
                out dx,al
                out dx,al

	        in al,60h                    ; CHECKING "ESC" KEY
	        cmp al,1
	        jne SCREEN

	        call far ptr AMC_SHUTDOWN    ; TURNING OFF ADLIB

EXIT:           sti
                mov ah,04ch                  ; QUIT TO DOS
                int 21h

ERROR:          mov ah,0                     ; DISPLAY ERRORS
                mov cx,32
                mul cx
                lea dx,ERRORS
                add dx,ax
                mov ah,9h
                int 21h
                jmp exit
;--------------------------------------------------------------------------
.DATA
MESSAGE0        db 'AdLib Music Creator Replay system v1.0',lf,cr
                db 'Copyright (C) 1990-1993',lf,lf,cr
                db 'Brian/Shame Redesign',lf,cr
                db 'LillafÅred 16',lf,cr
                db 'Budapest 1163',lf,cr
                db 'Hungary',lf,cr,'$'
MESSAGE1        db 'Use: AMCPLAY.EXE FILENAME.AMC',lf,cr,'$'
MESSAGE2        db 'AMC musicplayer not found!!! ',lf,cr,'$'
ERRORS          db 'All right!                   ',lf,cr,'$'
                db 'Invalid function number!     ',lf,cr,'$'
                db 'File not found!              ',lf,cr,'$'
                db 'Path not found!              ',lf,cr,'$'
                db 'Too many open files!         ',lf,cr,'$'
                db 'Access Denied                ',lf,cr,'$'
                db 'Invalid handle!              ',lf,cr,'$'
                db 'Memory ctrl blocks destroyed!',lf,cr,'$'
                db 'Insufficient memory!         ',lf,cr,'$'
                db 'Invalid memory block address!',lf,cr,'$'
FILENAME        db 13 dup (0)
HANDLE          dw 0
LEN             dw 0
;--------------------------------------------------------------------------
MUZAK    SEGMENT
TUNE     db 65535 dup (?)
ENDS     MUZAK
;--------------------------------------------------------------------------
END AMCREPLAY


