;assemblieren und 
;"cop" nach pla laden
;"inst" nach snd
;"idel" nach chr

>extern "cop", pla,-1
>extern "inst", snd,-1
>extern "idel", chr,-1
jmp $301c4
org $301c4
load $301c4

start:
bsr musik
lea text,a4
lea text2,a5
bsr makecl1
move.w #$01e0,$dff096
move #$1a64,$dff08e
move #$10d1,$dff090
move #$0020,$dff092
move #$00d8,$dff094
move #$0004,$dff108
move #$0004,$dff10a
move.w #%0000001000000000,$dff100
move.l #ncl,$dff080
clr $dff088
move.w #%1000011111000000,$dff096
move.l 4,a6
jsr -132(a6)
move #$000f,$dff190
move #$022f,$dff192
move #$045f,$dff194
move #$067f,$dff196
move #$099f,$dff198
move #$0bbf,$dff19a
move #$0ddf,$dff19c
move #$0fff,$dff19e
move #$0035,d6
move #$0000,d2
mark20:
cmp.b #$f0,$dff006
bne mark20
bsr clear
addq #4,d2
bsr makesp1
bsr makecl1
addi.l #$01000000,d5
dbra d6,mark20
move #$002f,d6
move #$0000,d2
mark21:
cmp.b #$f0,$dff006
bne mark21
bsr clear
addq #4,d2
bsr makesp2
bsr makecl1
dbra d6,mark21
clr $dff190
clr $dff192
clr $dff194
clr $dff196
clr $dff198
clr $dff19a
clr $dff19c
clr $dff19e
clr $dff182
clr $dff184
clr $dff186
bsr makecl
move #%0100001000000000,$dff100
bsr einblend
jmp mark7


einblend:
move.l #col1,con1
move.l #col2,con2
move.l #col3,con3
move.l #col4,con4
move.l #col5,con5
move.l #col6,con6
move.l #col7,con7
move.l #col8,con8

move #19,d6
mzm1:
lea $dff190,a1
lea con1,a2
move #7,d7
mzm:
move.l (a2),a0
move (a0)+,d0
move.l a0,(a2)+
move d0,(a1)+
dbra d7,mzm
mzm2:
cmp.b #$f0,$dff006
bne mzm2
dbra d6,mzm1
rts



con1:dc.l 0
con2:dc.l 0
con3:dc.l 0
con4:dc.l 0
con5:dc.l 0
con6:dc.l 0
con7:dc.l 0
con8:dc.l 0

col1:
dc.w $0000,$0001,$0002,$0003,$0004,$0005,$0006,$0007,$0008,$0009
dc.w $000a,$000b,$000c,$000c,$000d,$000d,$000e,$000e,$000f,$000f
col2:
dc.w $0000,$0001,$0002,$0003,$0004,$0005,$0006,$0117,$0118,$0119
dc.w $011a,$011b,$011c,$011c,$022d,$022d,$022e,$022e,$022f,$022f
col3:
dc.w $0000,$0001,$0002,$0113,$0114,$0115,$0126,$0227,$0228,$0229
dc.w $023a,$033b,$033c,$033c,$034d,$044d,$044e,$044e,$045f,$045f
col4:
dc.w $0000,$0001,$0012,$0113,$0114,$0125,$0226,$0227,$0238,$0339
dc.w $033a,$034b,$044c,$044c,$045d,$055d,$056e,$066e,$067f,$067f
col5:
dc.w $0000,$0001,$0112,$0113,$0224,$0225,$0336,$0337,$0448,$0449
dc.w $055a,$055b,$066c,$066c,$077d,$077d,$088e,$088e,$099f,$099f
col6:
dc.w $0000,$0001,$0112,$0113,$0224,$0335,$0336,$0447,$0448,$0559
dc.w $055a,$066b,$077c,$077c,$088d,$088d,$099e,$099e,$0bbf,$0bbf
col7:
dc.w $0000,$0001,$0112,$0223,$0224,$0335,$0446,$0557,$0668,$0669
dc.w $077a,$088b,$099c,$099c,$0aad,$0bbd,$0cce,$0cce,$0ddf,$0ddf
col8:
dc.w $0000,$0111,$0222,$0333,$0444,$0555,$0666,$0777,$0888,$0999
dc.w $0aaa,$0bbb,$0ccc,$0ccc,$0ddd,$0ddd,$0eee,$0eee,$0fff,$0fff


makesp1:
lea space,a0
move d2,d3
mulu #2,d3
addi.l d3,a0
lea rot+$44,a1
move #$0022,d7
mark52:
move (a1)+,(a0)+
dbra d7,mark52
rts

makesp2:
lea space,a0
move #$00de,d3
mulu #2,d3
addi.l d3,a0
lea rot+$44,a1
move #$0023,d7
mark60:
move (a1)+,(a0)+
dbra d7,mark60
lea space,a0
move d2,d3
mulu #2,d3
addi.l d3,a0
lea rot,a1
move #$0022,d7
mark53:
move (a1)+,(a0)+
dbra d7,mark53
rts

makecl1:
lea ncl,a0
lea space,a1
move.l #$000ffffe,d0
move #$0110,d7
mark82:
move.l d0,(a0)+
addi.l #$01000000,d0
move #$0180,(a0)+
move (a1)+,(a0)+
dbra d7,mark82
move.l #$fffffffe,(a0)+
rts

setchar:
move.l (a0),$dff050	; BLTAPT
move.l d1,$dff054	; BLTDPT
move #$09f0,$dff040	; BLTCON0 - USEA+USED A=D
clr $dff042		; BLTCON1
move #$ffff,$dff044	; BLTAFWM
move #$ffff,$dff046	; BLTALWM
move #$0024,$dff064	; BLTAMOD
move #$0030,$dff066	; BLTDMOD
move #%0000100000000010,$dff058
wa:
btst #14,$dff002
bne wa
move.l (a0),d0
addi.l #16000,d0
move.l d0,$dff050
addi.l #$3400,d1
move.l d1,$dff054
move #$09f0,$dff040
clr $dff042
move #$ffff,$dff044
move #$ffff,$dff046
move #$0024,$dff064
move #$0030,$dff066
move #%0000100000000010,$dff058
wa1:
btst #14,$dff002
bne wa1
rts

mark7:
move #$0003,d4
mark1:
cmp.b #$a0,$dff006
bne mark1
bsr roll
bsr farbscr
bsr makecl
bsr schwank
bsr hups
addi.l #1,bildcounter
cmp.l #$358a,bildcounter
bne weiter
bsr setirq
weiter:
dbra d4,mark1
bsr nexttext
btst #6,$bfe001
bne mark7

bsr ende
move.l 4,a6
jsr -138(a6)
move.w #$83f0,$dff096
move.l #grname,a1
clr.l d0
jsr -552(a6)
move.l d0,a4
move.l 38(a4),$dff080
clr.l $dff088
rts


setirq:
bsr ende
bsr musik
rts

bildcounter:
dc.l 0


nexttext:
cmp #$0000,zeiger
beq nexttext2
clr zeiger
ma11:
move.l (a4)+,d0
cmp.l #ncl,d0
beq settext
move.l d0,a0
move.l #pla+$286a,d1
bsr setchar
rts

settext:
move.l #text,a4
jmp ma11

nexttext2:
move.l (a5)+,d0
cmp.l #ncl,d0
beq settext2
move.l #pla+$214e,d1
move.l d0,a0
bsr setchar
move #$0001,zeiger
jmp ma11


settext2:
move.l #text2,a5
jmp nexttext2

roll:
move.l #pla+$27c8,$dff050
move.l #pla+$27c8,$dff054
move #$49f0,$dff040
move #$0002,$dff042
move #$ffff,$dff044
move #$ffff,$dff046
move #$0000,$dff064
move #$0000,$dff066
move #%0000110100010000,$dff058
wa2:
btst #14,$dff002
bne wa2
move.l #pla+$5bc8,$dff050
move.l #pla+$5bc8,$dff054
move #$49f0,$dff040
move #$0002,$dff042
move #$ffff,$dff044
move #$ffff,$dff046
move #$0000,$dff064
move #$0000,$dff066
move #%0000110100010000,$dff058
wa3:
btst #14,$dff002
bne wa3
move.l #pla+$2ee8,$dff050
move.l #pla+$2ee8,$dff054
move #$89f0,$dff040
move #$0002,$dff042
move #$ffff,$dff044
move #$ffff,$dff046
move #$0000,$dff064
move #$0000,$dff066
move #%0000110100010000,$dff058
wa10:
btst #14,$dff002
bne wa10
move.l #pla+$62e8,$dff050
move.l #pla+$62e8,$dff054
move #$89f0,$dff040
move #$0002,$dff042
move #$ffff,$dff046
move #$ffff,$dff044
move #$0000,$dff064
move #$0000,$dff066
move #%0000110100010000,$dff058
wa12:
btst #14,$dff002
bne wa12
rts

zeiger:
dc.w $0000

ncl:
blk.w $800

a:dc.l chr
b:dc.l chr+$0004
c:dc.l chr+$0008
d:dc.l chr+$000c
e:dc.l chr+$0010
f:dc.l chr+$0014
g:dc.l chr+$0018
h:dc.l chr+$001c
i:dc.l chr+$0020
j:dc.l chr+$0500
k:dc.l chr+$0504
l:dc.l chr+$0508
m:dc.l chr+$050c
n:dc.l chr+$0510
o:dc.l chr+$0514
p:dc.l chr+$0518
q:dc.l chr+$051c
r:dc.l chr+$0520
s:dc.l chr+$0a00
t:dc.l chr+$0a04
u:dc.l chr+$0a08
v:dc.l chr+$0a0c
w:dc.l chr+$0a10
x:dc.l chr+$0a14
y:dc.l chr+$0a18
z:dc.l chr+$0a1c
spa:dc.l chr+$0524
dp:dc.l chr+$0a20
po:dc.l chr+$0f00
aus:dc.l chr+$0f04
que:dc.l chr+$0f08
str:dc.l chr+$0f0c
z4:dc.l chr+$0f10
z5:dc.l chr+$0f14
z6:dc.l chr+$0f18
z7:dc.l chr+$0f1c
z8:dc.l chr+$0f20
sti:dc.l chr+$1400
st:dc.l chr+$1404
kl1:dc.l chr+$1408
kl2:dc.l chr+$140c
ko:dc.l chr+$1410
fra:dc.l chr+$1414
z2:dc.l chr+$1418
z3:dc.l chr+$141c
z9:dc.l chr+$1420


text:
dc.l spa,spa,spa
dc.l t,h,e,spa,y,u,m,spa,y,u,m,s,spa,spa,spa
dc.l kl1,s,c,o,o,t,e,r,spa,a,n,d,spa
dc.l m,e,g,a,t,r,o,n,spa,g,r,e,e,t,i,n,g,s,kl2,spa,a,r,e,spa,g,o,i
dc.l n,g,spa,t,o,dp,spa,s,k,y,h,a,w,k,spa,a,n,d,spa,f,l,n,c,a,spa,o
dc.l f,spa,a,f,l,spa
dc.l kl1,m,i,c,h,a,e,l,ko,w,h,e,r,e,spa,a,r,e,spa,m,y,spa
dc.l i,z6,spa,d,i,s,k,s,fra,kl2,spa,spa,st,spa,spa,b,r,o,s,spa
dc.l kl1,z5,spa
dc.l d,i,s,k,s,fra,kl2,spa,spa,st,spa,spa,t,g,m,st,c,r,e,w,spa
dc.l kl1,n,i,c
dc.l e,spa,p,h,o,n,e,c,a,l,l,s,kl2,spa,spa,st,spa,spa,j,a,z,z,c,a,t
dc.l spa,kl1,w,h,e,n,spa,w,i,l,l,spa,y,o,u,r,spa,g,a,m,e,spa,b,e,spa,f
dc.l i,n,i,s,h,e,d,fra,kl2,spa,spa,st,spa,spa,d,u,t,c,h,spa,u,s,a,spa
dc.l t,e,a,m,spa,kl1,z5,spa,d,i,s,k,s,fra,kl2,spa,spa,st,spa,spa,d,e,f
dc.l j,a,m,spa
dc.l kl1,z2,spa,d,i,s,k,s,fra,kl2,spa,spa,st,spa,spa,j,a,b,spa
dc.l kl1,i,spa,d,i,s,k,fra,kl2,spa,spa,st,spa,spa,s,t,a,r,l,i,n,e,spa
dc.l kl1
dc.l n,i,c,e,spa,m,u,l,t,i,spa,r,u,n,aus,kl2,spa,spa,st,spa,spa,f,r,e
dc.l e,spa,a,c,c,e,s,s,spa
dc.l kl1,h,e,y,spa,t,h,i,e,v,y,ko,spa,s,o,o,n,spa
dc.l s,e,n,d,spa,m,o,r,e,spa,d,i,s,k,s,kl2,spa,spa,st,spa,spa,t,h,e
dc.l spa
dc.l y,o,u,n,g,spa,o,n,e,s,spa,spa,st,spa,spa,o,k,s,spa,i,m,p,o,r,t
dc.l spa,d,i,v,i,s,i,o,n,spa
dc.l kl1,a,l,e,x,ko,spa,w,h,e,r,e,spa,a,r,e,spa
dc.l t,h,e,spa,p,r,o,m,i,s,e,d,spa,d,i,s,k,s,fra,kl2,spa,spa,st,spa
dc.l spa,d,e,a,d,l,i,n,e,spa,spa,st,spa,spa,d,o,m,i,n,a,t,o,r,s,spa,
dc.l kl1
dc.l w,h,a,T,sti,s,spa,h,a,p,p,e,n,spa,w,i,t,h,spa,y,o,u,fra,kl2
dc.l spa,spa,st,spa,spa,d,i,r,a,c,spa,s,y,s,t,e,m,s,spa,kl1,z2,spa,d,i
dc.l s,k,s,fra,kl2,spa,spa,st,spa,spa,p,h,r,st,c,r,e,w,spa,kl1,e,s
dc.l p,e,c,i,a,l,l,y,spa,k,o,n,g,o,m,a,n,kl2,spa,spa,st,spa,spa,t,s
dc.l k,st,c,r,e,w,spa,kl1,z3,spa,d,i,s,k,s,fra,kl2,spa,spa,st,spa,spa
dc.l s,p,y,d,e,r,f,o,r,c,e,spa,kl1,s,o,o,n,spa,m,o,r,e,spa,s,w,a,p,p,i
dc.l n,g,kl2,spa,spa,st,spa,spa,f,a,i,r,l,i,g,h,t,spa,kl1,z5,spa,d,i,s
dc.l k,s,fra,kl2,spa,spa,st,spa,spa,s,t,e,e,l,spa,p,u,l,s,e,spa,spa
dc.l st,spa,spa,a,n,t,i,t,r,a,x,spa,spa,st,spa,spa,r,d,a,p,spa,kl1,o,u
dc.l r,spa,b,e,s,t,spa,f,r,e,n,c,h,SPA,c,o,n,t,a,c,t,aus,kl2,spa
dc.l spa,st,spa,spa,t,h,e,spa,n,e,w,spa,m,a,s,t,e,r,s,spa,spa,st,spa
dc.l spa,g,e,n,e,r,a,t,i,o,n,spa,x,spa,spa,st,spa,spa,s,p,i,r,i,t,spa
dc.l o,f,spa,s,t,a,r,l,i,n,e,spa,spa,st,spa,spa,t,e,r,m,i,n,a,t,o,r
dc.l spa
dc.l kl1,b,e,r,l,i,n,kl2,spa,spa,st,spa,spa,t,h,e,spa,b,a,n,d,spa
dc.l spa,a,n,d,spa,spa,t,r,o,u,p,s,spa,spa,spa,aus,aus,aus,spa,spa,spa
dc.l n,o,w,spa,o,u,r,spa,f,u,c,k,i,n,g,s,spa,w,i,l,l,spa,g,o,spa
dc.l t,o,spa
dc.l s,o,m,e,spa,b,a,s,t,a,r,d,s,spa,a,n,d,spa,h,a,n,d,i,c,a,p,spa
dc.l l,a,m,e,r,s,dp,spa,f,u,c,k,i,n,g,s,spa,f,r,o,m,spa,t,h,e,spa
dc.l h,e,l,l,spa,t,o,dp,spa,t,h,e,spa,p,o,w,e,r,spa,c,o,n,n,e,c,t,i
dc.l o,n,spa,kl1,f,o,r,g,e,t,spa,i,t,spa,w,i,t,h,spa,y,o,u,r,spa,c,r,a
dc.l c,k,e,r,spa,p,a,g,e,ko,spa,a,f,l,sti,s,spa,c,r,a,c,k,e,r,spa
dc.l j,o,u,r,n,a,l,spa,i,s,spa,m,u,t,c,h,spa,b,e,t,t,e,r,spa,t,h,a
dc.l n,spa,y,o,u,r,s,aus,kl2,spa,a,n,d,spa,t,o,spa,e,x,o,d,u,s,spa,kl1
dc.l h,e,y,spa,p,r,i,c,k,ko,spa,s,o,o,n,spa,y,o,u,spa,w,i,l,l,spa
dc.l b,e,c,o,m,e,spa,a,spa,v,i,s,i,t,spa,f,r,o,m,spa,t,h,e,spa
dc.l k,r,i,p,o,aus,kl2,spa,spa,spa,spa,n,o,w,spa,a,spa,s,p,e,c,i,a,l
dc.l spa,h,e,l,l,o,spa,t,o,spa,h,q,c,spa,aus,aus,aus,spa,p,l,e,a,s,e
dc.l spa
dc.l g,r,e,e,t,spa,i,n,spa,f,u,t,u,r,e,spa,n,o,w,spa,l,o,n,g,e,r,spa
dc.l t,h,e,spa,f,i,f,t,h,spa,d,i,m,e,n,s,i,o,n,spa,kl1,d,e,a,d,aus,kl2
dc.l ko,spa,b,e,t,t,e,r,spa,y,o,u,spa,g,r,e,e,t,spa,n,o,w,spa,spa
dc.l c,o,p,p,e,r,spa,c,r,e,w,aus,aus,aus,spa,spa,spa,n,o,w,spa,t,h,e
dc.l spa,c,o,p,p,e,r,spa,c,r,e,w,spa,kl1,s,a,a,r,b,r,u,e,c,k,e,n,str,p
dc.l a,t,kl2,spa,s,p,e,c,i,a,l,ko,spa,h,y,p,e,r,spa,g,r,e,e,t,i,n,g,s
dc.l spa,a,r,e,spa
DC.L f,l,y,i,n,g,spa,t,o,dp,spa,a,m,i,g,a,t,o,r,spa,o,f,spa,m,e,s,spa
dc.l spa,st,spa,spa,o,k,s,spa,i,m,p,o,r,t,spa,d,i,v,i,s,i,o,n,spa
dc.l kl1,b
dc.l e,s,t,spa,c,r,e,w,spa,a,t,spa,t,h,e,spa,m,o,m,e,n,t,kl2,spa,spa
dc.l st,spa,spa,t,h,e,spa,b,a,n,d,spa
dc.l kl1,h,o,t,spa,s,e,n,d,i,n,g,s,kl2
dc.l spa,spa,a,n,d,spa,spa,t,h,e,spa,l,i,g,h,t,f,o,r,c,e,spa
dc.l kl1,b,e,s,t
dc.l spa,t,r,a,i,n,e,r,spa,a,n,d,spa,a,l,l,w,a,y,s,spa,g,o,o,d,spa
dc.l s,t,u,f,f,aus,kl2,spa,spa,spa,spa,spa,n,o,r,m,a,l,spa,g,r,e,e,t
dc.l i,n,g,s,spa,i,n,spa,a,l,p,h,a,st,o,r,d,e,r,spa,t,o,dp,spa
dc.l spa,a,c,k,e,r,l,i,g,h,t,spa,spa,st,spa,spa,a,m,i,g,a,spa,i,n,d
dc.l u,s,t,r,i,e,s,spa,spa,st,spa,spa,a,m,e,r,i,c,a,n,spa,w,i,l,d
dc.l c,a,t,s,spa,spa,st,spa,spa,a,n,c,st,e,u,r,o,p,e,spa,kl1,m,i,k,e
dc.l kl2,spa,spa,st,spa,spa,a,t,o,m,spa,a,n,i,m,a,t,o,r,s,spa,o,f
dc.l spa,e,c,e,spa,spa,st,spa,spa,b,a,m,i,g,a,spa,s,e,c,t,o,r,spa
dc.l o,n,e,spa,kl1,f,l,a,s,h,e,r,spa,z5,o,i,ko,spa,e,r,i,c,kl2,spa
dc.l spa,st,spa,spa,b,f,b,s,spa,spa,st,spa,spa,b,i,t,s,t,o,p,p,e,r,s
dc.l spa,spa,st,spa,spa,b,l,a,c,k,f,l,a,s,h,spa,spa,st,spa,spa,b,r,o
dc.l s,spa,spa,st,spa,spa,c,b,c,spa,spa,st,spa,spa,c,o,o,l,spa,spa,st
dc.l spa,d,e,a,d,l,i,n,e,spa,spa,st,spa,spa,d,e,f,j,a,m,spa,spa,st
dc.l spa,spa,d,e,l,t,a,spa,f,o,r,c,e,spa,spa,st,spa,spa,d,y,n,a,m
dc.l i,c,spa,s,y,s,t,e,m,s,spa,a,n,d,spa,r,a,g,e,spa,kl1,h,i,spa,l
dc.l a,r,s,aus,kl2,spa,spa,st,spa,spa,d,o,c,spa
dc.l kl1,k,e,e,p,spa,o,n,spa
dc.l y,o,u,r,spa,s,o,u,n,d,t,r,a,c,k,e,r,spa,i,n,v,a,s,i,o,n,aus
dc.l kl2,spa,spa,st,spa,spa,d,u,t,c,h,spa,u,s,a,st,t,e,a,m,spa,spa,st
dc.l spa,spa,e,r,r,o,r,s,o,f,t,spa,kl1,n,i,c,e,spa,i,n,t,r,o,spa,s,t
dc.l o,l,i,n,g,kl2,spa,spa,st,spa,spa,f,u,t,u,r,e,w,o,r,l,d,spa
dc.l spa,st,spa,spa,f,z4,c,g,spa,spa,st,spa,spa,f,r,e,a,k,spa,f,a,c
dc.l t,o,r,y,spa,spa,st,spa,spa,g,e,n,a,r,a,t,i,o,n,spa,x,spa,spa,st
dc.l spa,spa,g,o,l,d,e,n,spa,d,e,l,t,a,spa,kl1,n,i,c,e,spa,c,o,p,y
dc.l p,a,r,t,y,aus,kl2,spa,spa,st,spa,spa,h,o,t,l,i,n,e,spa,spa,st
dc.l spa,spa,i,t,a,l,i,a,n,spa,b,a,d,spa,b,o,y,s,spa,spa,st,spa,spa
dc.l j,u,n,g,l,e,spa,c,o,m,m,a,n,d,spa,kl1,g,h,e,t,t,o,spa,s,h,a
dc.l r,k,kl2,spa,spa,st,spa,spa,l,e,v,e,l,spa,f,o,u,r,spa,spa,st,spa
dc.l spa,l,i,g,h,t,st,l,i,n,e,spa,spa,st,spa,spa,m,a,r,k,spa,i,i,spa
dc.l o,f,spa,q,u,a,d,l,i,t,e,spa,spa,st,spa,spa,m,a,g,n,i,f,i,c,e,n,t
dc.l spa,f,o,r,c,e,spa,spa,st,spa,spa,m,e,g,a,f,o,r,c,e,spa,spa,st
dc.l spa,spa,m,e,t,a,l,l,w,a,r,spa,spa,st,spa,spa,m,i,k,e,spa,kl1,u
dc.l s,a,kl2,spa,spa,st,spa,spa,m,o,v,e,r,s,spa,spa,st,spa,spa,m,r
dc.l po,spa,m,e,g,a,spa,m,i,n,d,spa,o,f,spa,d,e,x,i,o,n,spa,spa,st
dc.l spa,spa,n,o,r,t,h,spa,s,t,a,r,spa,spa,st,spa,spa,p,l,a,s,m,a,spa
dc.l f,o,r,c,e,spa,kl1,g,r,e,a,t,spa,d,e,m,o,aus,kl2,spa,spa,st,spa
dc.l spa,p,o,w,e,r,s,t,a,t,i,o,n,spa,spa,st,spa,spa,p,o,w,e,r,spa
dc.l p,r,o,j,e,c,t,spa,spa,st,spa,spa,p,o,w,e,r,s,l,a,v,e,s,spa,spa
dc.l st,spa,spa,p,h,r,st,c,r,e,w,spa,kl1,n,i,c,e,spa,c,o,l,l,e,c,t,i
dc.l o,n,s,kl2,spa,spa,st,spa,spa,r,d,a,p,spa,spa,st,spa,spa,s,a,x,x
dc.l o,n,s,spa,c,r,e,w,spa,kl1,c,o,o,l,spa,p,h,o,n,e,c,a,l,l,kl2,spa
dc.l spa,st,spa,spa,s,h,a,r,k,s,spa,kl1,c,l,i,kl2,spa,spa,st,spa,spa
dc.l s,i,n,n,e,r,s,spa,spa,st,spa,spa,s,c,i,e,n,c,e,spa,spa,st,spa
dc.l spa,s,i,l,i,c,o,n,spa,l,e,a,g,u,e,spa,spa,st,spa,spa,s,h,u,t,spa
dc.l b,e,r,l,i,n,spa,spa,st,spa,spa,s,l,l,spa,kl1,g,r,e,a,t,e,s,t,spa
dc.l t,u,n,e,s,aus,kl2,spa,spa,st,spa,spa,s,w,i,s,s,spa,c,o,p,y,spa
dc.l f,o,r,c,e,spa,spa,st,spa,spa,t,a,g,spa,spa,st,spa,spa,t,a,a,spa
dc.l z4,z7,z5,o,spa,spa,st,spa,spa,t,b,o,spa,spa,st,spa,spa,t,h,e,spa
dc.l e,n,f,o,r,c,e,r,s,spa,spa,st,spa,spa,t,g,m,st,c,r,e,w,spa,spa
dc.l st,spa,spa,t,h,e,spa,g,o,o,n,i,e,s,spa,spa,st,spa,spa,t,r,i,s
dc.l t,a,r,spa,spa,st,spa,spa,t,h,e,spa,n,e,w,spa,a,c,e,s,spa,spa,st
dc.l spa,spa,t,h,e,spa,n,e,w,spa,m,a,s,t,e,r,s,spa,spa,st,spa,spa,t,h
dc.l e,spa,y,o,u,n,g,spa,o,n,e,s,spa,spa,st,spa,spa,u,n,i,t,spa,a,spa
dc.l spa,st,spa,spa,v,i,s,i,t,o,r,s,spa,spa,st,spa,spa,v,i,s,i,o,n
dc.l spa,f,a,c,t,o,r,y,spa,spa,st,spa,spa,x,st,m,a,N,spa,spa,spa
dc.l spa,spa,spa,spa,n,o,w,spa,g,r,e,e,t,i,n,g,s,spa,r,e,s,t,a,r,t
dc.l aus,aus,aus,spa,spa,spa,spa,spa,spa,spa,spa,spa,spa,spa,spa,spa
dc.l spa,spa,spa,spa,spa,spa,spa,ncl





text2:
dc.l spa,spa
dc.l i,t,sti,s,spa,p,a,r,t,y,spa,t,i,m,e,spa,aus,aus,aus,spa
dc.l o,r,spa,b,e,t,t,e,r,dp,spa,i,t,spa,w,a,s,spa,p,a,r,t,y,spa
dc.l t,i,m,e,spa,aus,aus,aus,spa,b,u,t,spa,w,e,spa,w,a,s,n,sti
dc.l t,spa,o,f,spa,a,n,y,spa,p,a,r,t,y,spa,aus,spa,s,o,r,r,y
dc.l spa,aus,aus,aus,spa,b,u,t,spa,n,o,w,spa,w,e,spa,w,e,l,c,o
dc.l m,e,spa,y,o,u,spa,t,o,spa,t,h,e,spa,l,a,t,e,s,t,spa,d,e,m,o
dc.l spa,o,f,spa,t,h,e,spa,c,o,p,p,e,r,spa,c,r,e,w,po,spa,t,w,o
dc.l spa,n,e,w,spa,m,e,m,b,e,r,s,spa,j,o,i,n,e,d,spa,o,u,r,spa
dc.l m,a,r,v,e,l,o,u,s,spa,g,r,o,u,p,dp,spa,spa,spa,s,spa,c,spa,o,spa
dc.l o,spa,t,spa,e,spa,r,spa,spa,spa,a,n,d,spa,spa,spa,m,spa,e,spa
dc.l g,spa,a,spa,t,spa,r,spa,o,spa,n,spa,po,spa,spa,spa
dc.l spa
dc.l e,a,r,l,i,e,r,spa,s,c,o,o,t,e,r,spa,h,a,d,spa,t,h,e,spa,n,a,m,e
dc.l spa,b,a,t,m,a,n,spa,kl1,y,e,a,h,h,h,aus,aus,kl2,po,spa,e,v,e,r
dc.l y,b,o,d,y,spa,k,n,o,w,s,spa,h,i,m,aus,spa,b,e,f,o,r,e,spa
dc.l y,o,u,spa,r,e,a,d,spa,t,h,e,spa,g,r,e,e,t,i,n,g,s,ko,spa,s
dc.l c,o,o,t,e,r,spa,w,i,l,l,spa,s,e,n,d,spa,a,spa,l,o,t,spa,o,f,spa
dc.l k,i,s,s,e,s,spa,a,n,d,spa,h,a,n,d,s,h,a,k,i,n,g,s,spa,t,o,spa
dc.l h,i,s,spa,l,a,w,y,e,r,spa,f,o,r,spa,h,e,l,p,i,n,g,spa,h,i,m,spa
dc.l i,n,spa,t,h,e,spa,d,i,f,f,i,c,u,l,t,spa,t,i,m,e,spa,w,i,t,h,spa
dc.l t,h,e,spa,g,e,r,m,a,n,spa,k,r,i,p,o,po,spa,n,o,w,spa,t,o,spa,h
dc.l i,s,spa,p,e,r,s,o,n,dp,spa,h,e,sti,s,spa,s,o,o,n,spa,i,z8,spa
dc.l y,e,a,r,s,spa,o,l,d,spa,kl1,y,o,u,n,g,kl2,spa,a,n,d,spa,h,e,spa
dc.l w,i,l,l,spa,l,e,a,r,n,spa,t,i,l,l,spa,a,u,g,u,s,t,spa,a,s,s,e
dc.l m,b,l,e,r,po,spa,i,s,spa,t,h,e,r,e,spa,a,n,y,b,o,d,y,ko,spa
dc.l w,h,o,spa,c,a,n,spa,h,e,l,p,spa,h,i,m,fra,spa,w,r,i,t,e,spa
dc.l t,o,spa,t,h,e,spa,f,o,l,l,o,w,i,n,g,spa,p,l,k,po,spa,a,n,d,spa
dc.l y,o,u,spa,w,i,l,l,spa,b,e
dc.l c,o,m,e,spa,h,i,s,spa,t,o,p,spa,s,e,c,r,e,t
dc.l spa,p,h,o,n,e,n,u,m,b,e,r,po,spa,w,e,spa,s,e,a,r,c,h,spa
dc.l a,l,s,o,spa,f,o,r,spa,c,a,l,l,i,n,g,spa,c,a,r,d,s,aus,spa
dc.l t,h,a,t,sti,s,spa,a,l,l,spa,a,b,o,u,t,spa,h,i,m,po,spa,w,e,spa
dc.l w,i,l,l,spa,f,i,n,i,s,h,spa,T,H,I,S,spa,s,c,r,o,l,l,e,r,ko,spa
dc.l b,e,c,a,u,s,e,spa,i,n,spa,o,u,r,spa,r,o,o,m,spa,a,r,e,spa,w
dc.l a,i,t,i,n,g,spa,a,spa,l,o,t,spa,o,f,spa,m,i,s,s,spa,g,e,r,m,a
dc.l n,y,sti,s,ko,spa,t,h,e,y,spa,w,a,n,t,spa,t,o,spa,h,a,v,e,spa
dc.l f,u,n,aus,spa
dc.l kl1,l,e,c,h,t,z,aus,kl2,po,spa,h,e,r,e,spa,a,r,e,spa
dc.l a,l,l,spa,m,e,m,b,e,r,s,spa,o,f,spa,c,o,p,p,e,r,spa,c,r,e,w,spa
dc.l I,n,spa,a,l,p,h,a,st,o,r,d,e,r,dp,spa,spa,b,o,b,spa,spa,st,spa
dc.l spa,d,r,po,h,po,spa,spa,st,spa,spa,g,o,n,z,o,spa,spa,st,spa,spa
dc.l i,d,e,l,spa,spa,st,spa,spa,m,e,g,a,t,r,o,n,spa,spa,st,spa,spa
dc.l m,i,s,s,i,o,n,spa,spa,st,spa,spa,p,a,t,spa,spa,a,n,d,spa,spa,s
dc.l c,o,o,t,e,r,spa,spa,aus,aus,aus,aus,spa,i,f,spa,y,o,u,spa,a,r,e
dc.l spa
dc.l i,n,t,r,e,s,t,e,d,spa,i,n,spa,s,w,a,p,p,i,n,g,spa,h,o,t,spa,s,t
dc.l u,f,f,spa,o,r,spa,i,f,spa,y,o,u,spa,a,r,e,spa,a,spa,f,a,s,t,spa
dc.l o,r,i,g,i,n,a,l,spa,s,u,p,p,l,i,e,r,e,r,spa,o,r,spa,a,spa,g,r,a,p
dc.l h,i,x,st,a,r,t,i,s,t,spa,t,h,e,n,spa,y,o,u,spa,c,a,n,spa,w,r,i,t
dc.l e,spa,t,o,spa,t,h,e,spa,f,o,l,l,o,w,i,n,g,spa,u,p,d,a,t,e,d,spa
dc.l a,d,r,e,s,s,dp,spa,p,l,k,po,dp,spa,o,z5,z7,z4,z6,z5,spa,c,spa,spa
dc.l spa,ko,spa,spa,z6,z6,o,o,spa,s,a,a,r,b,r,u,e,c,k,e,n,spa,z3,aus
dc.l spa,p,l,e,a,s,e,spa,n,o,spa,l,a,m,e,r,s,ko,spa,b,e,c,a,u,s,e,spa
dc.l w,e,spa,a,r,e,spa,l,o,o,k,i,n,g,spa,f,o,r,spa,h,o,t,spa,s,t,u,f
dc.l f,spa,a,n,d,spa,n,o,t,spa,f,o,r,spa,o,l,d,i,e,s,spa,l,i,k,e,spa
dc.l p,h,a,l,a,n,x,spa,a,n,d,spa,t,e,s,t,st,d,r,i,v,e,po,spa,i,f,spa
dc.l y,o,u,spa,l,i,k,e,spa,t,h,e,spa,d,e,m,o,spa,a,n,d,spa,t,h,e,spa
dc.l m,u,s,i,c,spa,kl1,s,a,c,r,o,p,h,a,s,e,r,spa,t,u,n,e,spa,w,r,i,t
dc.l t,e,n,spa,b,y,spa,k,po,o,b,a,r,s,k,i,kl2,ko,spa,m,a,k,e,spa
dc.l a,spa,r,e,s,e,t,spa
dc.l kl1,a,m,i,g,a,ko,a,m,i,g,a,ko,c,t,r,l,kl2,spa,a
dc.l n,d,spa,l,o,a,d,spa,t,h,e,spa,d,e,m,o,spa,a,g,a,i,n,ko,spa,b,e,c
dc.l a,u,s,e,spa,t,h,e,spa,e,n,d,spa,w,i,l,l,spa,f,o,l,l,o,w,spa
dc.l i,n,spa,s,o,m,e,spa,s,e,c,o,n,d,s,aus,spa,po,po,po,po,po,po,po
dc.l spa,spa,spa,s,spa,t,spa,o,spa,p,spa,po,po,po,po,po,po,t,h,e,spa
dc.l e,n,d,spa,w,i,l,l,spa,f,o,l,l,o,w,i,n,g,spa,i,n,spa,s,o,m,e,spa
dc.l m,i,n,u,t,e,s,po,spa,spa,spa,spa,s,o,r,r,y,aus,spa,spa,spa,spa
dc.l i,f,spa,y,o,u,spa,k,n,o,w,spa,w,h,e,r,e,sti,s,spa,a,spa,c,o,p,y
dc.l spa,p,a,r,t,y,spa
dc.l kl1,w,i,t,h,o,u,t,spa,k,r,i,p,o,spa,a,n,d,spa,p,o
dc.l l,i,c,e,kl2,spa,w,r,i,t,e,spa,t,o,spa,u,s,spa,o,r,spa,s,e,n,d,spa
dc.l i,m,m,e,d,i,a,t,e,l,y,spa,a,n,spa,i,n,v,i,t,a,t,i,o,n,po,spa
dc.l s,o,o,n,spa,a,l,l,spa,o,u,r,spa,m,e,m,b,e,r,s,spa,w,i,l,l,spa
dc.l b,e,c,o,m,e,spa,a,spa,D,r,i,v,i,n,g,spa,l,i,c,e,n,c,e,spa,a,n
dc.l d,spa,a,n,spa,o,w,n,spa,c,a,r,ko,spa,s,o,spa,y,o,u,spa,w,i,l,l
dc.l spa,s,e,e,spa,a,n,d,spa,h,e,r,e,spa,t,h,e,spa,n,a,m,e,spa,c
dc.l o,p,p,e,r,spa,c,r,e,w,spa,o,n,spa,e,v,e,r,y,spa,p,a,r,t,y,po
dc.l spa,t,h,e,spa,f,i,n,a,l,spa,e,n,d,spa,w,i,l,l,spa,c,o,m,e,spa
dc.l n,o,w,po,spa,n,o,t,h,i,n,g,spa,f,o,r,g,e,t,fra,fra,fra,spa,g,r,e
dc.l e,t,i,n,g,s,fra,spa,w,e,spa,h,a,v,e,aus,spa,n,e,w,spa,m,e,m,b,e
dc.l r,s,spa,i,n,f,o,r,m,a,t,i,o,n,s,fra,spa,w,e,spa,h,a,v,e,aus,spa
dc.l c,o,n,t,a,c,t,spa,a,d,r,e,s,s,fra,spa,w,e,spa,h,a,v,e,aus,spa,w
dc.l e,l,l,spa,w,e,spa,h,a,v,e,spa,n,o,t,h,i,n,g,spa,f,o,r,g,e,t,aus
dc.l spa,spa,i,o,spa,spa,st,spa,spa,z9,spa,spa,st,spa,spa,z8,spa,spa
dc.l st,spa,spa,z7,spa,spa,st,spa,spa,z6,spa,spa,st,spa,spa,z5,spa,spa
dc.l st,spa,spa,z4,spa,spa,st,spa,spa,z3,spa,spa,st,spa,spa,z2,spa,spa
dc.l st,spa,spa,i,spa,spa,st,spa,spa,e,n,d,po,spa,b,y,e,spa,b,y,e,ko
dc.l spa,c,h,e,r,i,o,ko,spa,a,u,f,spa,w,i,e,d,e,r,s,e,h,e,n,ko,spa
dc.l a,d,i,o,s,ko,spa,b,i,s,spa,b,a,l,d,ko,spa,c,h,i,a,o,ko,spa,t,s
dc.l c,h,u,e,s,s,po,po,po,po,spa,y,o,u,r,s,spa,c,o,p,p,e,r,spa,c,r,e
dc.l w,po,spa,s,e,e,spa,y,o,u,spa,i,n,spa,a,n,spa,o,t,h,e,r,spa,w,e
dc.l l,l,d,r,e,s,s,e,d,spa,d,e,m,o,spa,f,r,o,m,spa,u,s,po,spa,t,e,x
dc.l t,spa,r,e,s,t,a,r,t,s
dc.l spa,n,o,w,spa,spa,spa,spa,spa,spa,spa,spa,spa
dc.l spa,spa,spa,spa,spa,spa,spa,spa,ncl


makecl:
lea ncl,a0
move.l #$01820fff,(a0)+
move.l #$01020000,(a0)+
move.l #$400ffffe,d0
lea space,a1
lea sw1,a2
move #$0075,d7
qwe:
move.l d0,(a0)+
addi.l #$01000000,d0
move #$0180,(a0)+
move (a1)+,(a0)+
move #$0102,(a0)+
move (a2)+,d1
cmp #$ffff,d1
bne mark50
lea sw1,a2
move (a2)+,d1
mark50:
move d1,(a0)+
dbra d7,qwe
move.l #$01800000,(a0)+
move.l #$bd0ffffe,d0
move.l #$0182000f,(a0)+
lea farb,a1
lea sw,a3
lea rot,a6
move #$0044,d7
ma5:
move.l d0,(a0)+
addi.l #$01000000,d0
move #$0184,(a0)+
ma6:
move (a1)+,d1
cmp #$ffff,d1
beq setfarb
move d1,(a0)+
move #$0186,(a0)+
move d1,(a0)+
move #$0102,(a0)+
ma8:
move (a3)+,d1
cmp #$ffff,d1
beq setsw
move d1,(a0)+
move #$0180,(a0)+
move (a6)+,(a0)+
dbra d7,ma5
move.l #$01800000,(a0)+
move.l #$01820000,(a0)+
move.l #$fffffffe,(a0)+
rts

setfarb:
lea farb,a1
jmp ma6

setsw:
lea sw,a3
jmp ma8


farb:
dc.w $000f,$011f,$022f,$033f,$044f,$055f,$066f,$077f,$088f
dc.w $099f,$0aaf,$0bbf,$0ccf,$0ddf,$0eef,$0fff,$0fff,$0eef
dc.w $0ddf,$0ccf,$0bbf,$0aaf,$099f,$088f,$077f,$066f,$055f
dc.w $044f,$033f,$022f,$011f,$000f
dc.w $ffff


rot:
dc.w $0100,$0200,$0300,$0400,$0500
dc.w $0600,$0700,$0800
dc.w $0900,$0a00,$0b00,$0c00,$0d00,$0e00,$0f00,$0f00
dc.w $0f00,$0f00,$0f00,$0f00,$0e00
dc.w $0d00,$0c00,$0b00,$0a00,$0900
dc.w $0800,$0700,$0600,$0500
dc.w $0400,$0300,$0200,$0100
dc.w $0002,$0003,$0004,$0005
dc.w $0006,$0007,$0008,$0009
dc.w $000a,$000b,$000c,$000d,$000e,$000f,$000f
dc.w $000f,$000f,$000f,$000f,$000e,$000d
dc.w $000c,$000b,$000a,$0009
dc.w $0008,$0007,$0006,$0005,$0004
dc.w $0003,$0002,$0001,$0000,$0000



farbscr:
move.l #farb,a0
move.l #farb+2,a1
move.w (a0),d0
move #30,d7
mark23:
move.w (a1)+,(a0)+
dbra d7,mark23
move.w d0,(a0)
rts

schwank:
lea sw,a0
lea sw+2,a1
move (a0),d0
move #$0016,d7
ma9:
move (a1)+,(a0)+
dbra d7,ma9
move d0,(a0)
lea sw1,a0
lea sw1+2,a1
move (a0),d0
move #$0080,d7
ma16:
move (a1)+,(a0)+
dbra d7,ma16
move d0,(a0)
rts

sw:
dc.w $0000,$0011,$0011,$0011,$0022,$0022,$0033,$0033,$0033
dc.w $0044,$0044,$0044,$0044,$0033,$0033,$0033,$0022,$0022
dc.w $0011,$0011,$0011,$0000,$0000,$0000,$ffff


sw1:
dc.w $0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000
dc.w $0011,$0011,$0011,$0011,$0011,$0011,$0011
dc.w $0022,$0022,$0022,$0022,$0022,$0022
dc.w $0033,$0033,$0033,$0033,$0033
dc.w $0044,$0044,$0044,$0044
dc.w $0055,$0055,$0055
dc.w $0066,$0066
dc.w $0077
dc.w $0088,$0088
dc.w $0099,$0099,$0099
dc.w $00aa,$00aa,$00aa,$00aa
dc.w $00bb,$00bb,$00bb,$00bb,$00bb
dc.w $00cc,$00cc,$00cc,$00cc,$00cc,$00cc
dc.w $00dd,$00dd,$00dd,$00dd,$00dd,$00dd,$00dd
dc.w $00ee,$00ee,$00ee,$00ee,$00ee,$00ee,$00ee,$00ee
dc.w $00ee,$00ee,$00ee,$00ee,$00ee,$00ee,$00ee,$00ee
dc.w $00dd,$00dd,$00dd,$00dd,$00dd,$00dd,$00dd
dc.w $00cc,$00cc,$00cc,$00cc,$00cc,$00cc
dc.w $00bb,$00bb,$00bb,$00bb,$00bb
dc.w $00aa,$00aa,$00aa,$00aa
dc.w $0099,$0099,$0099
dc.w $0088,$0088
dc.w $0077
dc.w $0066,$0066
dc.w $0055,$0055,$0055
dc.w $0044,$0044,$0044,$0044
dc.w $0033,$0033,$0033,$0033,$0033
dc.w $0022,$0022,$0022,$0022,$0022,$0022
dc.w $0011,$0011,$0011,$0011,$0011,$0011,$0011
dc.w $0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000
dc.w $ffff


mt_speed=$1f4

musik:
bsr.s	mt_init
move.w	#$4000,$dff09a
move.l	$00006c,mt_oldirq+2
move.l	#mt_newirq,$00006c
move.w	#$c000,$dff09a
rts

ende:
move.w	#$000f,$dff096
move.w	#$4000,$dff09a
move.l	mt_oldirq+2,$00006c
move.w	#$c000,$dff09a
clr.l	d0
rts

mt_init:
move.l	#snd+$3660,mt_sample1
move.l	#snd+$4d78,mt_sample2
move.l	#snd+$6dd8,mt_sample3
move.l	#snd+$91c2,mt_sample4
move.l	#snd+$107c0,mt_sample5
move.l	#snd+$f884,mt_sample6
move.l	#snd+$ad20,mt_sample7
move.l	#snd+$b482,mt_sample8
move.l	#snd+$b482,mt_sample9
move.l	#snd+$c80a,mt_sample10
move.l	#snd+$dfda,mt_sample11
move.l	#snd+$ef1a,mt_sample12
move.l	#snd+$d3cc,mt_sample13
move.l	#snd+$db9c,mt_sample14
move.l	#snd+$eb3c,mt_sample15
move.l	#mt_sample1,a0
clr.l	d0
mt_clear:
move.l	(a0,d0),a1
clr.l	(a1)
addq	#4,d0
cmp.l	#$3c,d0
bne.s	mt_clear

move.w	#0,$dff0a8
move.w	#0,$dff0b8
move.w	#0,$dff0c8
move.w	#0,$dff0d8
clr.l	mt_partnrplay
clr.l	mt_partnote
clr.l	mt_partpoint

move.b	mt_muzakdata+$1d6,mt_maxpart+1
move.b	mt_muzakdata+$1d7,mt_kn1+1
rts

mt_newirq:
move.l #pla,$dff0e0
move.l #pla+$3400,$dff0e4
move.l #pla+$6800,$dff0e8
move.l #pla+$9c00,$dff0ec
movem.l	d0-d7/a0-a6,-(a7)
bsr.s	mt_music
movem.l	(a7)+,d0-d7/a0-a6
mt_oldirq:
jmp	$000000

mt_music:
addq.l	#1,mt_counter
mt_cool:
cmp.l	#6,mt_counter
bne.s	mt_notsix
clr.l	mt_counter
bra	mt_rout2

mt_notsix:
lea	mt_aud1temp,a6
tst.b	3(a6)
beq.s	mt_arp1
move.l	#$dff0a0,a5		
bsr.s	mt_arprout

mt_arp1:
lea	mt_aud2temp,a6
tst.b	3(a6)
beq.s	mt_arp2
move.l	#$dff0b0,a5
bsr.s	mt_arprout

mt_arp2:
lea	mt_aud3temp,a6
tst.b	3(a6)
beq.s	mt_arp3
move.l	#$dff0c0,a5
bsr.s	mt_arprout

mt_arp3:
lea	mt_aud4temp,a6
tst.b	3(a6)
beq.s	mt_arp4
move.l	#$dff0d0,a5
bra.s	mt_arprout
mt_arp4:
rts

mt_arprout:
tst.w	24(a6)
beq.s	mt_noslide

clr.w	d0
move.b	25(a6),d0
lsr.b	#4,d0
tst.b	d0
beq.s	mt_voldwn2
bsr	mt_pushvol1
bra.s	mt_noslide

mt_voldwn2:
clr.w	d0
move.b	25(a6),d0
bsr	mt_pushvol2

mt_noslide:
move.b	2(a6),d0
and.b	#$0f,d0
tst.b	d0
beq	mt_arpegrt
cmp.b	#3,d0
beq	mt_arpegrt
cmp.b	#4,d0
beq	mt_arpegrt
cmp.b	#5,d0
beq	mt_arpegrt
cmp.b	#1,d0
beq.s	mt_portup
cmp.b	#6,d0
beq.s	mt_portup
cmp.b	#7,d0
beq.s	mt_portup
cmp.b	#8,d0
beq.s	mt_portup
cmp.b	#2,d0
beq.s	mt_portdwn
cmp.b	#9,d0
beq.s	mt_portdwn
cmp.b	#10,d0
beq.s	mt_portdwn
cmp.b	#11,d0
beq.s	mt_portdwn
cmp.b	#13,d0
beq.s	mt_volup
rts

mt_portup:
clr.w	d0
move.b	3(a6),d0
sub.w	d0,22(a6)
cmp.w	#$71,22(a6)
bpl.s	mt_ok1
move.w	#$71,22(a6)
mt_ok1:
move.w	22(a6),6(a5)
rts

mt_portdwn:
clr.w	d0
move.b	3(a6),d0
add.w	d0,22(a6)
cmp.w	#$358,22(a6)
bmi.s	mt_ok2
move.w	#$358,22(a6)
mt_ok2:
move.w	22(a6),6(a5)
rts

mt_volup:
clr.w	d0
move.b	3(a6),d0
lsr.b	#4,d0
tst.b	d0
beq.s	mt_voldwn
mt_pushvol1:
add.w	d0,$12(a6)
cmp.w	#$40,$12(a6)
bmi.s	mt_ok3
move.w	#$40,$12(a6)
mt_ok3:
move.w	$12(a6),8(a5)
rts

mt_voldwn:
clr.w	d0
move.b	3(a6),d0
mt_pushvol2:
and.b	#$0f,d0
sub.w	d0,$12(a6)
bpl.s	mt_ok4
clr.w	$12(a6)
mt_ok4:
move.w	$12(a6),8(a5)
rts

mt_arpegrt:
cmp.l	#1,mt_counter
beq.s	mt_loop2
cmp.l	#2,mt_counter
beq.s	mt_loop3
cmp.l	#3,mt_counter
beq.s	mt_loop4
cmp.l	#4,mt_counter
beq.s	mt_loop2
cmp.l	#5,mt_counter
beq.s	mt_loop3
rts

mt_loop2:
clr.l	d0
move.b	3(a6),d0
lsr.b	#4,d0
bra.s	mt_cont

mt_loop3:
clr.l	d0
move.b	3(a6),d0
and.b	#$0f,d0
bra.s	mt_cont

mt_loop4:
move.w	16(a6),d2
bra.s	mt_endpart

mt_cont:
lsl.w	#1,d0
clr.l	d1
move.w	16(a6),d1
lea	mt_arpeggio,a0
mt_loop5:
move.w	(a0,d0),d2
cmp.w	(a0),d1
beq.s	mt_endpart
addq.l	#2,a0
bra.s	mt_loop5

mt_endpart:
move.w	d2,6(a5)
rts

mt_rout2:
lea	snd,a0
move.l	a0,a3
add.l	#$0c,a3
move.l	a0,a2
add.l	#$1d8,a2
add.l	#$258,a0
move.l	mt_partnrplay,d0
clr.l	d1
move.b	(a2,d0),d1
mulu	#$0400,d1
add.l	mt_partnote,d1
move.l	d1,mt_partpoint
clr.w	mt_dmacon

move.l	#$dff0a0,a5
lea	mt_aud1temp,a6
bsr	mt_playit

move.l	#$dff0b0,a5
lea	mt_aud2temp,a6
bsr	mt_playit

move.l	#$dff0c0,a5
lea	mt_aud3temp,a6
bsr	mt_playit

move.l	#$dff0d0,a5
lea	mt_aud4temp,a6
bsr	mt_playit

move.l	#mt_speed,d0
mt_rls:
dbf	d0,mt_rls

move.l	#$8000,d0
add.w	mt_dmacon,d0
move.w	d0,$dff096

move.l	#mt_aud4temp,a6
cmp.w	#1,14(a6)
bne.s	mt_voice3
move.l	10(a6),$dff0d0
move.w	#1,$dff0d4
mt_voice3:
move.l	#mt_aud3temp,a6
cmp.w	#1,14(a6)
bne.s	mt_voice2
move.l	10(a6),$dff0c0
move.w	#1,$dff0c4
mt_voice2:
move.l	#mt_aud2temp,a6
cmp.w	#1,14(a6)
bne.s	mt_voice1
move.l	10(a6),$dff0b0
move.w	#1,$dff0b4
mt_voice1:
move.l	#mt_aud1temp,a6
cmp.w	#1,14(a6)
bne.s	mt_voice0
move.l	10(a6),$dff0a0
move.w	#1,$dff0a4

mt_voice0:
move.l	mt_partnote,d0
add.l	#$10,d0
move.l	d0,mt_partnote
cmp.l	#$400,d0
bne.s	mt_stop
clr.l	mt_partnote
addq.l	#1,mt_partnrplay
clr.l	d0
move.w	mt_maxpart,d0
move.l	mt_partnrplay,d1
cmp.l	d0,d1
bne.s	mt_stop
clr.l	mt_partnrplay
mt_stop:
rts

mt_playit:
move.l	(a0,d1),(a6)
addq.l	#4,d1
clr.l	d2
move.b	2(a6),d2
and.b	#$f0,d2
lsr.b	#4,d2
tst.b	d2
beq.s	mt_nosamplechange

clr.l	d3
lea	mt_samples,a1
move.l	d2,d4
mulu	#4,d2
mulu	#$1e,d4
move.l	(a1,d2),4(a6)
move.w	(a3,d4),8(a6)
move.w	2(a3,d4),18(a6)
move.w	4(a3,d4),d3
tst.w	d3
beq.s	mt_displace
move.l	4(a6),d2
add.l	d3,d2
move.l	d2,4(a6)
move.l	d2,10(a6)
move.w	6(a3,d4),8(a6)
move.w	6(a3,d4),14(a6)
move.w	18(a6),8(a5)
bra.s	mt_nosamplechange
mt_displace:
move.l	4(a6),d2
add.l	d3,d2
move.l	d2,10(a6)
move.w	6(a3,d4),14(a6)
move.w	18(a6),8(a5)
mt_nosamplechange:
tst.w	(a6)
beq.s	mt_retrout
move.w	(a6),16(a6)
move.w	20(a6),$dff096
move.l	4(a6),(a5)
move.w	8(a6),4(a5)
move.w	(a6),6(a5)
move.w	20(a6),d0
or.w	d0,mt_dmacon

mt_retrout:
move.w	20(a6),d0
lsl.w	#4,d0
add.w	20(a6),d0
move.w	d0,$dff09e

tst.w	(a6)
beq.s	mt_nonewper
move.w	(a6),22(a6)

mt_nonewper:
move.b	2(a6),d0
and.b	#$0f,d0
cmp.b	#14,d0
bne.s	mt_noset
move.w	2(a6),24(a6)
rts

mt_noset:
tst.b	3(a6)
bne.s	mt_noclr
clr.w	24(a6)
mt_noclr:
cmp.b	#3,d0
beq.s	mt_modvol
cmp.b	#6,d0
beq.s	mt_modvol
cmp.b	#9,d0
beq.s	mt_modvol
cmp.b	#4,d0
beq.s	mt_modper
cmp.b	#7,d0
beq.s	mt_modper
cmp.b	#10,d0
beq.s	mt_modper
cmp.b	#5,d0
beq.s	mt_modvolper
cmp.b	#8,d0
beq.s	mt_modvolper
cmp.b	#11,d0
beq.s	mt_modvolper
cmp.b	#15,d0
beq.s	mt_chgspeed
cmp.b	#12,d0
bne.s	mt_nochnge
move.b	3(a6),8(a5)
mt_nochnge:
rts

mt_chgspeed:
move.b	3(a6),d0
and.b	#$0f,d0
beq.s	mt_nochnge
clr.l	mt_counter
move.b	d0,mt_cool+5
rts

mt_modvol:
move.w	20(a6),d0
bra.s	mt_push

mt_modper:
move.w	20(a6),d0
lsl.w	#4,d0
bra.s	mt_push

mt_modvolper:
move.w	20(a6),d0
lsl.w	#4,d0
add.w	20(a6),d0

mt_push:
add.w	#$8000,d0
move.w	d0,$dff09e
rts

mt_aud1temp:
dc.w $0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000
dc.w $0000,$0000,$0001,$0000,$0000
mt_aud2temp:
dc.w $0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000
dc.w $0000,$0000,$0002,$0000,$0000
mt_aud3temp:
dc.w $0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000
dc.w $0000,$0000,$0004,$0000,$0000
mt_aud4temp:
dc.w $0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000
dc.w $0000,$0000,$0008,$0000,$0000
mt_partnote:
dc.l 0
mt_partnrplay:
dc.l 0
mt_counter:
dc.l 0
mt_partpoint:
dc.l 0
mt_samples:
dc.w $0000,$0000
mt_sample1:
dc.l 0
mt_sample2:
dc.l 0
mt_sample3:
dc.l 0
mt_sample4:
dc.l 0
mt_sample5:
dc.l 0
mt_sample6:
dc.l 0
mt_sample7:
dc.l 0
mt_sample8:
dc.l 0
mt_sample9:
dc.l 0
mt_sample10:
dc.l 0
mt_sample11:
dc.l 0
mt_sample12:
dc.l 0
mt_sample13:
dc.l 0
mt_sample14:
dc.l 0
mt_sample15:
dc.l 0
mt_maxpart:
dc.w $0000
mt_kn1:
dc.w $0000
mt_dmacon:
dc.w $0000

mt_arpeggio:
dc.w $0358,$0328,$02fa,$02d0,$02a6,$0280,$025c
dc.w $023a,$021a,$01fc,$01e0,$01c5,$01ac,$0194,$017d
dc.w $0168,$0153,$0140,$012e,$011d,$010d,$00fe,$00f0
dc.w $00e2,$00d6,$00ca,$00be,$00b4,$00aa,$00a0,$0097
dc.w $008f,$0087,$007f,$0078,$0071,$0000,$0000,$0000

mt_snd1:	blk.b	2,0
mt_snd2:	blk.b	2,0
mt_snd3:	blk.b	2,0
mt_snd4:	blk.b	2,0
mt_snd5:	blk.b	2,0
mt_snd6:	blk.b	2,0
mt_snd7:	blk.b	2,0
mt_snd8:	blk.b	2,0
mt_snd9:	blk.b	2,0
mt_snda:	blk.b	2,0
mt_sndb:	blk.b	2,0
mt_sndc:	blk.b	2,0
mt_sndd:	blk.b	2,0
mt_snde:	blk.b	2,0
mt_sndf:	blk.b	2,0

mt_muzakdata:	blk.b	2,0



hups:
     bsr clear
     bsr balksat
     bsr tabscr
rts




space:
blk.w $200,$0

balken:
dc.w $0003,$0006,$0009,$000c,$000f,$000c,$0009,$0006
dc.w $0003

balken2:
dc.w $0300,$0600,$0900,$0c00,$0f00,$0c00,$0900,$0600
dc.w $0300

balkset:
move.l #space,a2
move (a1)+,d0
subi #20,d0
mulu #2,d0
addi d0,a2
move #$0008,d7
cvb:
move (a0)+,(a2)+
dbra d7,cvb
rts


balksat:
lea tab,a1
move #$0007,d6
xxx:
lea balken,a0
bsr balkset
dbra d6,xxx
lea tab+30,a1
move #$0007,d6
xxxx:
lea balken2,a0
bsr balkset
dbra d6,xxxx
rts




tab:
dc.w 20,20,20,20,20,20,20,20
dc.w 21,21,21,21,21,21,22,22,22,22,22,23,23,23,23,24,24,25,25
dc.w 26,26,27,27,28,28,29,30,31,32
dc.w 33,34,35,36,38,40,42,44,46,48,50,52,54,56,59,62,65
dc.w 68,71,74,77,81,85,90
dc.w 95,100,106,111,116,121,126
dc.w 121,116,111,106,100,95,90,85,81,77,74,71,68,65,62,59,56
dc.w 54,52,50,48,46,44,42,40,38,36,35,34,33,32,31,30,29,28
dc.w 27,27,26,26,25,25,24,24,23,23,23,23,22,22,22,22,22,21,21,21
dc.w 21,21,21,20,20,20,20,20,20,20,20
dc.w $ffff

tabscr:
lea tab,a0
lea tab+2,a1
move (a0),d0
move #120,d7
asd:
move (a1)+,(a0)+
dbra d7,asd
move d0,(a0)
rts

clear:
lea space,a0
move #$0200,d7
loop:
clr (a0)+
dbra d7,loop
rts


grname:
dc.b "graphics.library",0

even
snd:
blk.b $14000,0
even
pla:
blk.b $f000,0
even
chr:
blk.b $6010,0
eenndd:
