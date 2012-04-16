.386
crs segment use16
assume es:crs,cs:crs,ss:crs,ds:crs
org 100h
all:
;ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß
 mov  al,13h
 int  10h
 push 0A000h
 pop  es
;v mainloopu nejdrive vymazu obrazovku, pak v cyklu CX=6..1 vykreslim 6 polys.
;je-li CX=DX, posouvam DX poly (smer urcuji prvni 2 bajty v definici poly).
;s kazdym posunutim tyto bajty zmensuju a az dosahnou nuly, zvetsim DX.
;(prvni (nejtmavsi) poly je ma rovnou nulovy, takze celou dobu stoji na miste)
 mov  dx,03Fh
@mainloop:
 dec  cx ;cx=65535
 xor  ax,ax
 rep  stosb
 mov  si,offset polys
 mov  cl,6 ;cyklus, ve kterem vzdy vykreslim vsechny polys
 cmp  dl,cl
 jbe  @drawPolys
 dec  dx
@drawPolys:
 lodsw ;nactu prvni 2 bajty, udavajici kolik jeste zbyva pixelu v posunu
 cmp  cx,dx ;poly zobrazuju vsechny, ale jen DX-ty posouvam
 jne  @drawPolysNow
 or   ax,ax       ;je-li "kolik_zbyva_v_posunu" = 0...
 jnz  @drawPolysMove
 dec  dx          ;...zacnu se zabyvat dalsim poly (nevadi, ze DX podtece, protoze podtece az kdyz je vsechno hotovy)
 jmp  @drawPolysNow
@drawPolysMove:
;posouvani delam tak, ze proste upravim pozici a snizim kolik_zbyva_v_posunu
;vsechny polys maji deltaY >= deltaX. proto na nulu testuju az u deltaX
;(SI v teto chvili ukazuje na 3. bajt v definici poly)
 inc  byte ptr [si]      ;inc Y
 dec  byte ptr [si-1]    ;dec deltaY
;v ose Y se vsechny polys sunou dolu. ale v X se mohou doleva i doprava.
;snizuju vlastne abs(posunX). (dole): BL zastupuje kostantu bud' +1 nebo -1
 mov  bl,1
 or   al,al
 jz   @drawPolysNow ;posunX je nula - uz nic nesunu, jen polygon zobrazim
 jns  @drawPolys1b
 mov  bl,-1
@drawPolys1b:
 add  byte ptr [si+1],bl ;inc or dec X
 sub  byte ptr [si-2],bl ;inc or dec deltaX
@drawPolysNow:
 call @drawPoly ;drawPoly nejenze vykresli poly, ale presune SI na dalsi poly. SI tedy staci nastavit na zacatku
 loop @drawPolys
 call @wait
 in  al,60h
 dec al
 jnz @mainloop
 retn
;bye

@wait:
 pusha
 mov  dx,03DAh
@wait1:
 in   al,dx
 test al,8
 jnz  @wait1
@wait2:
 in   al,dx
 test al,8
 jz   @wait2
 popa
 retn

;vykresleni polygonu, ktery je soucasti Pythagorova ctverce, vypada slozite,
;ale zdani klame. v tomto konkretnim pripade je to takrka trivialita.
;vychazim z definice poly, kterou mam ulozenu v [SI]. ta obsahuje pocatecni
;pozici (Y,X leveho horniho vrcholu), pocatecni sirku, barvu, vysku a chovani.
;v bajtu chovani je v jedn. bitech ulozeno, jaky sklon ma leva a prava hrana
;polygonu. sklony jsou 3 - mirny doprava, rapidni doleva a bez sklonu.
;je-li MSB chovani = 1, nasleduje vyska a chovani dalsiho segmentu polygonu.
@drawpoly:
 push cx
 xor  ax,ax     ;prvni jdou Y a X. tak je vezme a vypocita y*320+x
 lodsb          ;ax=X, si->Y
 push dx
 mov  bx,320
 mul  bx
 pop  dx
 xchg di,ax
 xor  ax,ax
 lodsb          ;ax=Y, si->Xadd
 add  di,ax     ;di=X+Y*320
 lodsb
 xchg bx,ax     ;bx=Xadd (pocatecni sirka polygonu), si->color
 lodsb          ;al=color
@drawpoly_new_segment: ;sem to skace, kdyz nasleduje dalsi segment polygonu
 mov  cl,[si]   ;cx=vyska (delka cyklu, po ktery kresli scanlajny polygonu)
 inc  si        ;LODSB je vynechano, protoze v AL uz je barva
 mov  ah,[si]   ;ah=Behaviour, si->next_poly/next_segment
 inc  si
@drawpoly2:
 ;nakresli scanlajnu mezi X a (X+Xadd-1) a skoci na dalsi radku
 push cx
 mov  cx,bx
 rep  stosb
 sub  di,bx
 add  di,320
 pop  cx
 test ah,00010000b ;polovicni sklon doprava: levy okraj
 jz   @drawpoly3
 inc  di
 inc  di
 dec  bx
 dec  bx
@drawpoly3:
 test ah,00000001b ;polovicni sklon doprava: pravy okraj
 jz   @drawpoly4
 inc  bx
 inc  bx
@drawpoly4:
 test cl,1
 jz   @drawpoly6
 test ah,00000010b ;dvojnasobny sklon doleva: pravy okraj
 jz   @drawpoly5
 dec  bx
@drawpoly5:
 test ah,00100000b ;dvojnasobny sklon doleva: levy okraj
 jz   @drawpoly6
 dec  di
 inc  bx
@drawpoly6:
 loop @drawpoly2
 test ah,10000000b
 jnz  @drawpoly_new_segment
 pop  cx
 retn

polys:
;     dx  dy   Y   X Xad col   H behaviour  H2 behaviour  ..
 db    0,  0,  4,120, 88, 24, 88,00000000b
 db   52, 69, 48,120,  0, 27,  9,10000001b, 36,00000010b
 db  -36, 69, 22,156,  0, 28, 26,10100001b, 45,00100000b
 db   88, 88,  4,120,  0, 29, 18,10000001b, 26,10000010b, 09,00010010b
 db  -36,158,  4,120, 88, 30, 36,00010010b
 db    0, 87,  4,208,  0, 31, 35,10100000b,  9,00010000b

crs ends
end all

;co by se dalo zoptimalizovat?
;vybrat lepsi barvy (nebo.. se ti libi sede?)
;vypadalo by to lip, kdyby jednotlive casti sly v jinem poradi?
;po kompilaci se tam vlozi hafo nopu (asi align4 a optimalizace na rychlost)
;skvele by bylo, kdyby to zacatku chvilku stalo a teprve pak se to spustilo
