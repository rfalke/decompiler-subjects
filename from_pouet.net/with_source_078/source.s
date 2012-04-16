.286
;**************************************************************************
; Fuego de 65 bytes - Alberto Garcia-Baquero, Abr'95
; Trabaja bajo cualquier 386 o superior con una tarjeta VGA
; FX - Ali‰N '95.
;**************************************************************************
; Greetings to : Aitor        AKA Darth Vader / The Banner
;                Sergio Perez AKA Bru‰        / Incognita
;                Javier Amian AKA Shad‰       / Ali‰N
;
;========================================
; Parametros del sistema
;========================================
INICIO          EQU             102

ANCHO           EQU             320

code segment para public 'code'
assume ds:code,cs:code,es:code,ss:code
ORG	100h

;**************************************************************************
;**************************************************************************
;==========================================================================
;      Rutina principal
;==========================================================================
MAIN:   PUSH    0A000h            ;--- Directamente en RAM
        POP     ES
        PUSH    ES
        POP     DS

        MOV     AL,013h           ;--- A mi modo gr†fico...
        INT     10h               ;---      Tipical 320x200

        XCHG   ax,si              ;--- AX=0 . Desde el color 0
        MOV    dx,03C9h           ;--- Ponemos la paletas
       @BUCLE_DAC:
        XCHG   bx,ax
        OUT    dx,al              ;--- En rojillo... ;)
        XCHG   bx,ax
        OUT    dx,al
        OUT    dx,al
        INC    bx
        LOOP   @BUCLE_DAC

;--------------------------------------------------
; RUTINA PRINCIPAL
;--------------------------------------------------
BUCLE:	;------------------------------------------
        MOV     ch,((INICIO*ANCHO)+2)/256       ;  Nß de vueltecitas
        MOV     di,cx                           ;  OFFSET del principio
        ARDIENDO:                               ;
        ADD     al,byte ptr [di-1+ANCHO-1]      ;  Sube y hace la media
        ADD     al,byte ptr [di+1+ANCHO+1]      ;  a la vez. ;)
        ADD     al,byte ptr [di+ANCHO+ANCHO+2]  ;  con efecto "niebla" a§adido.
        SHR     al,2                            ;
        STOSB                                   ;  Lo deja en VGA
        LOOP    ARDIENDO                        ;  SUBE.... ;)

        MOV     cl,ANCHO/2        ;----------------------------------------
        MOV     dx,040h           ;--- Poniendo la £ltima linea
        REP     INSW              ;----------------------------------------

        MOV     ah,01h            ;----------------------------------------
        INT     16h               ;--- Miramos el teclado
        JZ      BUCLE             ;----------------------------------------
        ;------------------------------------------------------------------
ADIOS:  MOV     AX,03h            ;--- Nos ponemos en el
        INT     10h               ;--- modo raro ese de las letritas. :)
        RET                       ;----------------------------------------
ends
end MAIN
