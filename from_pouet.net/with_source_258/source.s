;***************************************************************************;
;* SNOW 256B intro - another try for DB'00 ... probably last one ?         *;
;* 256B intro by Ped / 7GODS, http://7gods.rulez.sk, mailto:hellco@upjs.sk *;
;* HOVER DAMN SLOW ... sends my P133 down to knees under 13 FPS            *;
;* ... but, it's for_size optimalisation, not for_speed, ok ?!             *;
;***************************************************************************;

; tasm /m9 snowshow.asm
; tlink /t /x snowshow.obj

       .386
code   SEGMENT use16
       ASSUME  cs:code,ds:code,es:code
       ORG     100h

COLOR1 EQU     32
COLOR2 EQU     53
COLOR3 EQU     52
RECTNUM        EQU     9

start:
       MOV     ax,13h
       INT     10h
       MOV     bp,0a000h    ; handy number, really! :)
       MOV     es,bp
; flash screen "effect" .. well, i had about 22B free, so I added this shit
       MOV     al,134
start_loop:
       XOR     di,di
       DEC     cx           ; cx = 65535 (at least in second+ pass)
       PUSH    ax
       CALL    WaitforRetrace
       POP     ax
       DEC     ax
       REP STOSB
       JNZ     start_loop
; real intro starts here ..
; init screen
       MOV     dx,1
       MOV     bx,320
       MOV     cl,RECTNUM
; 9 = 1001 *InitSI    ; pf == 1 (test cl,1101b)
; 8 = 1000            ; pf == 0 .
; 7 = 0111 *InitSI    ; pf == 1 .
; 6 = 0110            ; pf == 0 .
; 5 = 0101 *InitSI    ; pf == 1
; 4 = 0100            ; pf == 0
; 3 = 0011            ; pf == 0
; 2 = 0010            ; pf == 1 ! -> special test needed: zf = 1 !
; 1 = 0001            ; pf == 0
scrinit_loop1:
       TEST    cl,00Dh                 ; 1101b
       JZ      scrinit_loop1_NoInitSI  ; cx == 2
       JNP     scrinit_loop1_NoInitSI  ; cx == 1, 3, 4, 6, 8, eh, cool ?! :)
; don't ask me, how much brainstorming cost me this 7B long test for {9,7,5}
       MOV     si,OFFSET screeninitdata
scrinit_loop1_NoInitSI:
       CALL    Rectang
       LOOP    scrinit_loop1

intro_loop:
; random f(l)akes generator
       CALL    WaitforRetrace
       MOV     eax,0deadf0adh  ; need'ya constant for random ? "dead+f0ad" ;))
       MUL     DWORD PTR [_srand]      ; f0ad = F*ck 0ff And Die
       INC     eax
       MOV     DWORD PTR [_srand],eax  ; works PERFECTLY !
       MOVZX   di,ah
       AND     al,31
       MOV     ds,bp
       OR      al,28           ; snow color 28..31
       XOR     bx,bx           ;       MOV     bx,320*199+320  ;)) erm.. eh..
       MOV     BYTE PTR [di+3],al
; f(l)akes fall code  ... WTF does "fake fall" mean ? bluescreen ?
ALIGN 4
snow_loop:
       DEC     bx
       MOV     ax,00100h
; ************** if you have P3 1GHz, remove these 2 lines to save 4 bytes
       CMP     [bx],al         ; so_called speed optim.
       JZ      snow_loop_noflake
; **************
       XCHG    [bx],al         ; get color & clear pixel
       MOV     di,bx
       CMP     al,32
       JNC     snow_loop_letter; it's letter color, not a f(l)ake
       ADD     bx,320
; some "wind" ...
       TEST    bl,0C0h
       JNZ     snow_loop_nowind
       ADD     dx,ax           ; not every flake... another "random"
       JNP     snow_loop_nowind
       INC     bx              ; apply wind in some cases
snow_loop_nowind:
       CMP     [bx],ah         ; free pixel down ?
       JC      snow_loop_drawflake
       INC     bx
       CMP     [bx],ah         ; free space right ?
       JC      snow_loop_drawflake
       DEC     bx
       DEC     bx
       CMP     [bx],ah         ; free space left ?
       JC      snow_loop_drawflake
       ; couldn't fall || slide -> keep it at same position
       MOV     bx,di
ALIGN 2
snow_loop_drawflake:
       MOV     [bx],al
       MOV     bx,di
snow_loop_noflake:
       TEST    bx,bx
       JNZ     snow_loop

       PUSH    cs              ; I'm a good boy, restoring my segment regs :)
       POP     ds
       INT     16h             ; ah = 1
       JZ      intro_loop
; set up text mode, read key, and end...
       MOV     ax,03h
       INT     10h
       INT     16h             ; ah = 0 :)
       RET

snow_loop_letter:              ; color cycling ... default pallete RULEZ :)
       JNZ     snow_loop_letter_nowrap
       ADD     al,24
snow_loop_letter_nowrap:
       DEC     ax
       JMP     snow_loop_drawflake

Rectang:
       ADD     WORD PTR [si],100       ; next letter for E&L data
       LODSW
       XCHG    di,ax
       PUSH    si
       CALL    Line2x
       POP     si
Line2x:
       CALL    Line
Line:
       PUSH    cx
       LODSB
       CMP     al,03ch          ; 316 special test
       MOV     cl,al
       JNZ     Line_Not316Size
       INC     ch
Line_Not316Size:
       MOV     ds,bp
       MOV     ax,COLOR1+(COLOR2*256)
       CALL    line_draw_col1
       CALL    line_draw_col2_n_col1
line_loop:
       ADD     di,bx
       MOV     BYTE PTR [di+bx],COLOR3
       SUB     di,bx
       CALL    line_draw_col2_n_col1
       LOOP    line_loop
       CALL    line_draw_col2_n_col1
       MOV     [di],al
       XCHG    bx,dx           ; rotate draw vector clockwise
       NEG     bx
       PUSH    cs
       POP     ds
       POP     cx
       RET

line_draw_col2_n_col1:
       MOV     [di+bx],ah
line_draw_col1:
       MOV     [di],al
       ADD     di,dx
       RET

WaitforRetrace:
; wait for retrace  (short one :))
       MOV     dx,03dah
ww2:
       IN      al,dx
       AND     al,08h
       JZ      ww2
       RET

screeninitdata LABEL WORD
       DW      60*320+20-100   ; E&L - "|"
       DB      16
       DB      76
       DW      120*320+45-100  ; E&L - bottom "_"
       DB      51
       DB      16
       DW      -3*320+0-100    ; borders
       DB      (316 AND 255)   ; special test in code will expand it to 316
       DB      199
       DW      60*320+45-100   ; E - upper "ceiling"
       DB      51
       DB      16
       DW      90*320+45-100   ; E - middle "-"
       DB      26
       DB      16

_srand DD      ?               ; random seed

code   ENDS
       END start
