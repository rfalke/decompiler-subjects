
 ORG 100h

 PALLET = 03C8h
 VTRACE = 03DAh
 KEYBRD = 0060h

 INIT:MOV   AX,13h
      INT   10h
      PUSH  0A000h
      POP   ES

      MOV   DX,PALLET
      XOR   AX,AX
      OUT   DX,AL
      INC   DX
 COLR:OUT   DX,AL
      OUT   DX,AL
      OUT   DX,AL
      INC   AL
      JNZ   COLR

 MAIN:FLD1
      FADD  [DDCAMY]
      FSTP  [DDCAMY]

      MOV   WORD[DWY],0
      XOR   DI,DI
      MOV   DX,VTRACE
 SYNC:IN    AL,DX
      TEST  AL,08h
      JZ    SYNC

 FORY:FLD   [DDYMIN]
      FIDIV [DWY]
      FSTP  [DDW]

      FLD   [DDW]
      FMUL  [DDRESX]
      FSUB  [DDCAMY]
      FSTP  [DDV]

      FLD   [DDW]
      FMUL  [DDXMIN]
      FADD  [DDCAMY]
      FSTP  [DDU]

      MOV   WORD[DWX],0
 FORX:FLD   [DDU]
      FISTP [DWU]
      FLD   [DDV]
      FISTP [DWV]
      MOV   EAX,[DWU]
      XOR   EAX,[DWV]

      AND   EAX,0FFh
      MOV   [DWC],EAX
      FILD  [DWC]
      FIMUL [DWY]
      FDIV  [DDRESY]
      FISTP [DWC]
      MOV   EAX,[DWC]
      SHR   AX,2

      STOSB

      FLD   [DDU]
      FADD  [DDW]
      FSTP  [DDU]

      INC   WORD[DWX]
      CMP   WORD[DWX],320
      JB    FORX

      INC   WORD[DWY]
      CMP   WORD[DWY],200
      JB    FORY

 EXIT:IN    AL,KEYBRD
      DEC   AL
      JNZ   MAIN
      RET

 DDRESX DD  320.0
 DDXMIN DD -160.0
 DDYMIN DD  100.0
 DDRESY DD  200.0
 DWX	  DW  00000
 DWY	  DW  00000
 DWU	  DD  00000
 DWV	  DD  00000
 DWC	  DD  00000
 DDCAMY DD  0.000
 DDU	  DD  0.000
 DDV	  DD  0.000
 DDW	  DD  0.000
