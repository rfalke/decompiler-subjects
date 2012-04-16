.model tiny
.code
.486

SMOOTHCOEF EQU 6;
COLBASE    EQU 16;
MINCOLOR   EQU 0;
NOTWND     EQU 1;
RNDCONST1  EQU 13;
RNDCONST2  EQU 79;
;13 35,43,45,49,52,53,54s,56,57,59,(65),72,73,(79)
org     100h

ALIGN 1


start:


;    push bp
    mov bp,offset @@frame;{offset DataBeg;}

    mov al,13h;
    int 10h;


;
;fninit;




@@Rnd:
     ;{mov bx,0;}
     mov di,offset beforeTxtr+256;
@@TxtrGeneration:
     ;{push ax;}
     ;{and al,12;||add al,16;}
;     aam 14;{does and 15}
aam RNDCONST1
     mov byte ptr [di+bx],al;
;     and byte ptr [di+bx],12;}
     ;{pop ax;}
     add ax,bx;
     aad RNDCONST2;{18,19,26,27,28,31,38,39,40,44}
     inc bx;
;{;}
     cmp bh,13+128+10;
     jne @@TxtrGeneration;

     mov cl,SMOOTHCOEF;{mov cx,10;}
     ;{mov di,offset beforeTxtr+256;}
@@SmoothBeg:
     pusha;
;{bh}
     mov ch,(13+128+10);{mov bh,(13+128+10);||mov bx,(13+128+10)*256;}
		 mov bh,1;{mov bx,256;}
@@Smooth:
  ;{xchg bx,si||mov di,si;||push di;}
@@SmoothInner:
     mov ax,word ptr [di];
     adc ax,word ptr [di+bx];{adc ax,word ptr [di+256];}
     adc al,ah;
     shr al,2;
		 stosb;
     loop @@SmoothInner;
     popa;
     ;{pop di;}
     loop @@SmoothBeg;

    mov bh,32+13;{mov bx,32*256-1+13*256;}
    @@WndBldLoop:;{-------------5}
      mov dh,3;
;{xlat}
      mov al,byte ptr [di+bx];{mov al,byte ptr [texture+bx];}
      and al,3;
      mov si,ax;{mov cl,al;}
;{byte ptr [bx]}
      mul dh;{(texture[w]and 3)*3}
			;{mov ah,0;||0 level}
;{here can choose the distance before our objects}
			cmp bh,3+13;{cmp bh,ch;}
      jbe @@NoBld;
      shr si,1;
      jc @@NoBld;
        mov ah,al;
;{;}
        add ah,65;
      @@NoBld:
      ;{add al,MINCOLOR;}
;{test bl,dh;}
test bl,1;
      jnz @@HaveWnd;
        mov al,NOTWND+MINCOLOR;{wnd[w]:=4 + MINCOLOR;}
      @@HaveWnd:
      mov byte ptr [bld-13*256+bx],ah;
      mov byte ptr [wnd-13*256+bx],al;
      dec bx;
    jns @@WndBldLoop;


@@ResetGM:
    mov dl,31h;{mov dx,0331h;}
    mov al,0FFh;
    out dx,al;
    mov al,03Fh;
    out dx,al;


@@MainLoop:

  ;{xor cx,cx;}
  @@GraveLoop:;{for GRAVE:=0 to 1 do}

;{-||mov byte ptr [frame],200;}

  @@frameLoop:;{for frame:=1 to 100 do}


  ;{lea si,[frame];}
@@Sound:
    mov dx,330h
    mov al,90h;{90h+0;}
    out dx,al;
    ;{lea si,[texture+si];lodsb;}
    ;{mov bx,frame}
    ;{mov al,byte ptr [texture+bx]}
    mov al,ah;
    out dx,al;
    mov al,127;
    out dx,al;


@@WaitRetrace:
;{-}
 mov dl,0dah;{mov dx,3dah;}
@@delay1:
 in al,dx;
 test al,8;
 jne @@delay1;
@@delay2:
 in al,dx;
 test al,8;
 je @@delay2;
;    mov ax,1010h;
;    int 10h;



    push ds
    push 40h;
		pop ds;
		mov byte ptr ds:[004ah],80;
		mov byte ptr ds:[0050h],13;{mem[$0040:$004A]:=80;memw[$0040:$0050]:=31*256;}
    mov ax,cs;
    add ah,10h;
    mov es,ax;{mov es,scrseg;}
    push 0a000h;
		pop ds;
;{>||mov di,63999+320;}
    xor di,di;
    @@Cls:;{actually the whole seg||for w:=0 to 63999+320 do begin mem[$a000:w]:=mem[scrseg:w];mem[scrseg:w]:=MINCOLOR;end;}
      mov al,COLBASE;
      xchg al,byte ptr es:[di];
      mov [di],al;
      dec di;
    jnz @@Cls;
    pop ds;


    jcxz @@nnn;
;{-}
;{}
    mov dx,offset @@text;
    mov ah,09h;
		int 21h;
    @@nnn:

    ;{mov cx,word ptr [GRAVE];}

    fild word ptr [bp-2];{fild C_25;||h:=25;}
    mov si,offset @@siner;
    call @@SinFrame;{h:=h+sin(frame/4)*siner[0];}

    mov di,320*200-1;{mov scrptr,di;||scrptr:=320*(200)-1;}

;{}
    mov word ptr [bp+2],100;{mov byte ptr [scry],100;||scry:=100;}
    @@VerticalScreenLoop:;{while(scrptr and 32768)<>0 do begin||for scry:=100 downto 10 do begin}
      fld st(0);{dtx:=h/(scry);}
      fidiv word ptr [bp+2];{fidiv word ptr  ptr[scry];}
      ;{fst dtx;}
      fld st(0);
      mov bx,offset @@wdtx;
      ;call @@FpuMul256RndAndSav;{wdtx:=round(dtx*256);}
                  fimul word ptr [bp-4];{fimul word ptr [si];||fimul C_256;}
                  fistp word ptr [bx];{maybe bp is better}

      ;{tz:=sin(frame/8)*4 *(1-GRAVE) +dtx*160;}
      fimul word ptr [bp-5];{C_160||fimul word ptr [si];}
      mov si,offset @@siner+2;{lea si,[bp-7];||dec si;dec si;||mov si,offset ds:siner+2;}
      call @@SinFrame;
;{||mov bx,offset btz;}
      dec bx;
			dec bx;{sub bl,2;||may cause problems on bl owerflow}
      ;call @@FpuRndAndSav;{btz:=round(tz*1);}
                  fistp word ptr [bx];{maybe bp is better}
      fstp;



      mov ax,word ptr [bx];{to nulify ah||bx=^fuck:btz}
;{-}
      sub al,byte ptr [bx-6];{sub al,byte ptr [frame];}
;{?}
      xchg al,ah;
      mov word ptr [bx-2],ax;{mov wtx,ax;};{mov wtxh,al;};{wtxh:=(btz-frame);}
                                            ;{mov wtxl,ah;};{wtxl:=0;}
      ;{mov si,320;}
;{||mov w,si;}
      mov word ptr [@@w],320;{w:=320;}
;{?}                                            ;{mov wtx2,0;||wtx2:=0;}


;{}
      mov bx,1;{mov ScrDecrement,1;||horizontal:=1;||could replace by inc, if was set0 at the very beginning}
      lea si,[texture];{mov word ptr [txtr],offset texture;||mov word ptr [txtr+2],seg texture;||txtr:=@texture;}

      mov dx,256*127+255;{Ander:=(256*127+255);}

      call @@justfornow0;{justfornow0;}

      dec byte ptr [bp+2];{dec byte ptr [scry];||dec(scry);}

;{||and di,di;||add scrptr,0;}
    jnz @@VerticalScreenLoop;
    fstp;

@@KeyboardCheck:
  in al,60h;
  dec al;
  jz @@ExitPro;


    inc byte ptr [bp+0];{inc byte ptr [frame];}
  jnz @@frameLoop;

;{}
  mov bh,32;{mov bx,(32*256-1);}
  @@GraveTxtr:
    mov al,byte ptr [texture+19+bx];{mov al,[si+bx];}
    ;{inc dx;inc dx;}
    ;{mov ax,bx;}
    test bh,248;{test bx,(248*256+248);}
    jnz @@AsTxtr;
      mov al,MINCOLOR+8;
      cmp bl,3;
      je @@Is3;
      cmp bh,3;
      je @@Is3;
;{}
      mov al,MINCOLOR;
    @@Is3:
    @@AsTxtr:
    mov byte ptr [(offset wnd)+bx],al;
    dec bx;
  jns @@GraveTxtr;


;{jcxz @@G;}
;  inc cx;
;  cmp cl,1;
;  jng @@GraveLoop;
   add cl,128;
   jnz @@GraveLoop;


@@ExitPro:
    mov ax,3;
    int 10h;
  ret
;    pop bp;
;  MOV AX,4C00h;
;  INT 21h;

;    jmp @@ddddd



;      @@FpuMul256RndAndSav:
;        fimul word ptr [bp-4];{fimul word ptr [si];||fimul C_256;}
;      @@FpuRndAndSav:
;{?      frndint;}
;frndint
;        fistp word ptr [bx];{maybe bp is better}
;        retn;

      @@SinFrame:
        jcxz @@sinis;{cmp cl,1;||cmp GRAVE,1;||je @@nosin;}
        retn;
        @@sinis:
        fild word ptr [bp+0];{fild word ptr [frame];||float_tmp:=sin(frame/4)*siner[0];}
        fidiv word ptr [si];
        fsin;DB 0D9h,0FEh;{fsin;}
;{fadd st,st;fadd st,st;}
        fimul word ptr [si];
        ;{DB 0D8h,0C1h;||fadd st(1),st(0);fstp;||h:=h+float_tmp;}
        faddp st(1),st(0);DB 0DEh,0C1h;{faddp st(1),st(0);||h:=h+float_tmp;}
      @@nosin:
        retn;



    @@justfornow0:
      @@RepeatUntil:;{repeat||until (((pword ptr ^) and 32768)<>0) or ((pword ptr ^)=0);}

            pusha;{push dx;||store Ander||push bx;||ScrDecrement}

            ;{mov es,scrseg;||if mem[scrseg:scrptr]=MINCOLOR then begin}
            ;{mov di,scrptr;}
            cmp byte ptr es:[di],COLBASE;{mov al,COLBASE;scasb;}

;{?}
mov ax,word ptr [@@wtxl +bx];{btz:wtxh | btz2:wtxh2}
            push ax;{btz:wtxh | btz2:wtxh2}
            jne @@IfPntWasFilled;
              ;{push es;||mov si,word ptr [txtr];||les si,[txtr];||col:=txtr^[(coord^[2]*256+coord^[1]) and Ander];}
              ;{mov bx,ScrDecrement;||trick}
              and ax,dx;{and ax,[Ander];}
              add si,ax;
              ;{mov si,ax||add si,ax;||mov si,word ptr [txtr];||add si,bp;}
;{}
              mov dl,byte ptr [si];
;{             sub si,ax;}
				add dl,COLBASE;
              ;{pop es;}


                  push bx;{ScrDecrement}
                  dec bx;{will be restored||cmp bl,1;||cmp horizontal,1;||if horizontal<>1 then begin}
                  jz @@NotVertical;
                    ;{yz walls are more bright}
                    mov ax,15+13*256;{if CheckingAndedRanges(15*16+12,    15,13-1, 0 ,1) then goto plus;}
                    ;{mov bh,1;||BX=320 = BH:BL = 1:64}
                    stc;
										;{zero flag is OFF}
                    jcxz @@NotGrave;{cmp cl,1;||cmp GRAVE,1;{if GRAVE=1 then begin}
                      sub ax,(15+13*256)-(0+6*256);{mov ax,0+6*256;||if CheckingAndedRanges(0*16+5,0,6-1,1,1)=>col:=MINCOLOR}
                      ;{CF is cleared by previous instruction||clc;}
                      call @@CheckingAndedRanges;
                      jnz @@DoNotPutpixel

;{!}
											mov ah,COLBASE;{   !!!   here COLBASE must be 16}
                      cmp dl,ah;{cmp dl,MINCOLOR;||if col=MINCOLOR then goto noplus;}
                      je @@noplus;
                      ;{closer xy surfaces in graveyard are less bright}
                      ;{mov ah,16;||if CheckingAndedRanges(0*16+15,    0,16-1, 1 ,0) then goto plus;}
                      dec bh;{BX was 320 = BH:BL = 1:64  => 0:64}
                      ;{clc;}
                    @@NotGrave:
                    call @@CheckingAndedRanges;
                    jz @@noplus;
                    inc dx;
										inc dx;{add bl,2;||col:=col+2;}
                    @@noplus:
                  @@NotVertical:

                    mov byte ptr es:[di],dl;{mov al,dl;stosb;||+pusha-popa}
                  @@DoNotPutpixel:

                  pop bx;{ScrDecrement}

            @@IfPntWasFilled:


            dec bx;{no need to restore after||cmp bl,1;||cmp horizontal,1;||if horizontal=1 then begin}
            pop bx;{btz:wtxh | btz2:wtxh2}
            jnz @@NotHorizontal;
              ;{mov ax,word ptr [wtxh];||levels:=bld[btz shr 4,wtxh shr 4];}
              push bx;{push si;||btz:wtxh}
              shr bx,4;
;{}
							and bl,15;
							lea si,[(offset bld)+bx];{mov si,ax;||add si,offset bld;}
              ;{push ds;              mov ax,seg bld; mov ds,ax;}
              xor al,al;
;{!!!?is ah=0?||lodsb;dec ax;||below if so should be js}
              add al,byte ptr [si];{mov levels,al;}
              ;{pop ds;}              ;{pop si;}
							pop bx;{btz:wtxh}
              jz @@LevelsIsZero;{if levels<>0 then}

;{mov bx,offset wtxh;}
                mov ah,bl;{mov ah,wtxh;||btz2:=wtxh;}
                mov dx,31*256+7;{Ander}
                jcxz @@123;{if GRAVE=1 then}
                  mov al,9;{mov levels,9;||levels:=9;}
                  ;{mov word ptr [Ander],31*256+7;}
                  jmp @@124;
                @@123:;{else}
                  add ah,bh;{add ah,btz;||btz2:=btz2+btz;}
                  mov dl,255;{Ander}
                @@124:
                mov word ptr [@@levels],ax;{mov levels,al; mov btz2,ah;}
;{}
								mov byte ptr [@@wtx2l],ch;{wtx2l:=0;}

                ;pusha;
                lea si,[wnd];{mov word ptr [txtr],offset wnd;||mov word ptr [txtr+2],seg wnd;||txtr:=@wnd;}
                mov bx,320;{mov ScrDecrement,320;||horizontal:=0;}

                call @@justfornow0;{justfornow0;}              ;{recursy 4 vertical lines}

                ;popa;

              @@LevelsIsZero:
            @@NotHorizontal:

            popa;{pop bx;||ScrDecrement||pop dx;||restore Ander}
            sub di,bx;{sub di,ScrDecrement;||sub scrptr,ax;||dec(scrptr,ScrDecrement);}

            mov ax,word ptr [@@wdtx];
            sub word ptr [@@wtxl-1+bx],ax;
;{}
            push bx;
						neg bx;
            dec word ptr [@@w+1+bx];
            pop bx;

      jg @@RepeatUntil;{until (((pword ptr ^) and 32768)<>0) or ((pword ptr ^)=0);}
      retn;

  @@CheckingAndedRanges:
    pushf;
      add al,byte ptr [bp+5];{add al,wtxh;}
;  		call @@andcmp;{p1:=AndCmp(wtxh+b shr 4,b2);}
	  and al,15;
		cmp al,ah;
		setg dh;DB 0fh,97h,0c0h;{setg al;||mov al,0; jng @@45; inc ax; @@45:}
;      mov dh,al;
      mov al,byte ptr [@@btz];
;  		mov ah,bh;
;	  	call @@andcmp;{p2:=AndCmp(btz,1 - b and 2 shr 1);}
	  and al,15;
		cmp al,bh;
		setg al;DB 0fh,97h,0c0h;{setg al;||mov al,0; jng @@45; inc ax; @@45:}
    popf;
		jnc @@ac;
		  and al,dh;
		retn;
		@@ac:
		  or al,dh;
		retn;

  @@andcmp:
;	  and al,15;
;		cmp al,ah;
;		setg al;DB 0fh,97h,0c0h;{setg al;||mov al,0; jng @@45; inc ax; @@45:}
;    retn;{AndCmp:=(anded and 15)>cmped;}


;{@@Smooth2:}

     @@text:  DB 'OSAMA''s DREAM$';
     @@siner: DW 4,2;
		 @@C_160: DB 162;{actually, it's a word ptr  (hi byte ptr  is 'borrowed' from C_256)}
     @@C_256: DW 256;
     @@C_25:  DB 25;
		   @@EndOfCode: DB 0;{!word ptr :but byte ptr  enough(last data)}
		 @@frame: DB 0,?;{!}
     @@scry:  DW ?;{!}

    @@wtx:
      @@wtxl: DB ?;
	    @@wtxh: DB ?;
		@@btz:  DB ?;
		@@fuck: DB ?;
		@@wdtx: DW ?;
    @@ToMakeDistBetweenWtxlAndWtxl2Be:;{array[0..312]of byte ptr ;}
    DB 313 dup (?)

    @@wtx2:
      @@wtx2l: DB ?;
      @@levels:
		  @@wtx2h: DB ?;
		@@btz2:  DB ?;
		@@fuck2: DB ?;
    @@_ToMakeDistBetweenWtxl2AndWBe:;{array[0..314]of byte ptr ;}
    DB 315 dup (?)
    @@w:  DW  ?;

    beforeTxtr: DB ( 13*256) dup (?); {array[0..13*256-1]of byte ptr ;}
    texture:    DB (128*256) dup (?); {array[0..128*256-1]of byte ptr ;}
    pastTxtr:   DB ( 11*256) dup (?); {array[0..11*256-1]of byte ptr ;}
    befbld:     DB ( 13*256) dup (?); {array[0..13*256-1]of byte ptr ;}
    bld:        DB ( 32*256) dup (?); {array[0..32*256-1]of byte ptr ;}
    befwnd:     DB ( 13*256) dup (?); {array[0..13*256-1]of byte ptr ;}
    wnd:        DB ( 32*256) dup (?); {array[0..32*256-1]of byte ptr ;}



    @@ddddd:





end start
