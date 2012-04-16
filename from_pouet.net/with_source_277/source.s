
      ;
      ; 256 BYTES OF DBFINTERACTIVE INVITRO
      ;

       ORG 100h

      ;RANDOM = 00049h
      ;KEYBRD = 00060h
      ;PALLET = 003C9h
      ;VTRACE = 003DAh
      ;VIDMEM = 0A000h

;       MACRO  MOD [IMM8]
;       {
;        DB 0xD4,IMM8
;       }
       MOD    MACRO IMM8
              DB 0xD4,IMM8
       MOD    ENDM
                        ;----------;
 INIT: MOV    AX,0x13   ; B4 13 00 ;
       INT    0x10      ; CD 10    ;
                        ;----------;
       LEA    SI,TEXT   ; BE 9B 01 ;
 ECHO: LODSW            ; AD       ;
       XCHG   AX,DX     ; 92       ;
       MOV    AH,0x02   ; B4 02    ;
       INT    0x10      ; CD 10    ;
 PRNT: LODSB            ; AC       ;
       MOV    DL,AL     ; 8A D0    ;
       INT    0x21      ; CD 21    ;
       OR     DL,DL     ; 0A D2    ;
       JNZ    PRNT      ; 75 F5    ;
       OR     DH,DH     ; 0A F6    ;
       JNZ    ECHO      ; 75 EB    ;
                        ;----------;
       MOV    DX,0x03C9 ; BA C7 03 ;
 COLR: OUT    DX,AL     ; EE       ;
       NOT    AL        ; F6 D0    ;
       ROL    AX,0x01   ; D1 C0    ;
       OUT    DX,AL     ; EE       ;
       ROR    AX,0x01   ; D1 C8    ;
       OUT    DX,AL     ; EE       ;
       NOT    AL        ; F6 D0    ;
       INC    AX        ; 48       ;
       JNZ    COLR      ; 75 F2    ;
                        ;----------;
       PUSH   0xA000    ; 68 00 A0 ;
       POP    ES        ; 07       ;
       PUSH   ES        ; 06       ;
       POP    DS        ; 1F       ;
                        ;----------;
       XOR    DI,DI     ; 33 FF    ;
       MOV    BL,0xCC   ; B3 CD    ;
 LINE: MOV    CX,0x0140 ; B9 40 01 ;
 FILL: MOV    AL,[DI]   ; 8A 05    ;
       OR     AL,AL     ; 0A C0    ;
       MOV    AL,CL     ; 8A C1    ;
       JNZ    SKIP      ; 75 08    ;
       OR     AL,BL     ; 0A C3    ;
       MOD    0x10      ; D4 10    ;
       OR     AL,AH     ; 0A C4    ;
       AND    AL,0x3F   ; 24 3F    ;
       JMP    STOR      ; EB 02    ;
 SKIP: SBB    AL,BL     ; 1A C3    ;
       SBB    AL,CL     ; 1A C1    ;
 STOR: STOSB            ; AA       ;
       LOOP   FILL      ; E2 EB    ;
       DEC    BX        ; 4B       ;
       JNZ    LINE      ; 75 E5    ;
                        ;----------;
       MOV    DL,0x31   ; B2 31    ;
       MOV    AL,0x3F   ; B0 3F    ;
       OUT    DX,AL     ; EE       ;
                        ;----------;
 MAIN: XOR    SI,SI     ; 33 F6    ;
       MOV    DI,0xFA00 ; BF 00 FA ;
       MOV    CX,0x0140 ; B9 40 01 ;
       PUSH   DI        ; 57       ;
       PUSH   SI        ; 56       ;
       PUSH   CX        ; 51       ;
 PLOT: LODSB            ; AC       ;
       STOSB            ; AA       ;
       LOOP   PLOT      ; E2 FC    ;
       POP    SI        ; 5E       ;
       POP    DI        ; 5F       ;
       POP    CX        ; 59       ;
                        ;----------;
       PUSH OFFSET DRAW ; 68 77 01 ;
 VBLK: MOV    DL,0xDA   ; B2 DA    ;
 SYNC: IN     AX,DX     ; ED       ;
       TEST   AL,0x08   ; A8 08    ;
       JZ     SYNC      ; 74 FB    ;
       RET              ; C3       ;
                        ;----------;
 DRAW: LODSB            ; AC       ;
       DEC    AX        ; 48       ;
       STOSB            ; AA       ;
       LOOP   DRAW      ; E2 FA    ;
                        ;----------;
       MOV    DL,0x30   ; B2 30    ;
 TUNE: DEC    BX        ; 4B       ;
       LODSW            ; AD       ;
       SBB    AX,[DI]   ; 1B 05    ;
       XOR    AL,BH     ; 32 C7    ;
       XOR    AH,BL     ; 32 E3    ;
       AND    AX,0x3F3F ; 25 3F 3F ;
       OR     AL,AH     ; 0A C4    ;
       XCHG   AX,BP     ; 95       ;
 PLAY: MOV    AL,0x99   ; B0 99    ;
       OUT    DX,AL     ; EE       ;
       MOV    AX,BP     ; 8B C5    ;
       OUT    DX,AL     ; EE       ;
       MOV    AL,AH     ; 8A C4    ;
       OUT    DX,AL     ; EE       ;
                        ;----------;
 EXIT: MOV    AH,0x01   ; B4 01    ;
       INT    0x16      ; CD 10    ;
       JZ     MAIN      ; 74 E9    ;
                        ;----------;
       MOV    BX,0x0031 ; BB 63 00 ;
 DONE: MOV    CH,0x01   ; B1 FF    ;
       CALL   VBLK      ; E8 17 00 ;
       MOV    DL,0xC7   ; B2 C7    ;
       IN     AL,DX     ; ED       ;
       INC    DX        ; 42       ;
       OUT    DX,AL     ; EE       ;
       INC    DX        ; 42       ;
                        ;----------;
 BLAK: CALL   FADE      ; E8 13 00 ;
       CALL   FADE      ; E8 10 00 ;
       CALL   FADE      ; E8 0D 00 ;
       LOOP   BLAK      ; 75 F6    ;
       DEC    BX        ; 4B       ;
       JNZ    DONE      ; 75 E6    ;
                        ;----------;
 FADE: IN     AL,DX     ; EC       ;
       MOV    AL,BL     ; 8A C3    ;
       OUT    DX,AL     ; EE       ;
       RET              ; C3       ;
                        ;----------;
 TEXT  DB 0x07,0x10,'http://dbfinteractive.com/',0
       DB 0x0F,0x08,'visit us at',0
       DB 0x09,0x00,'for good coding advice',0
