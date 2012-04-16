; __pier69__  by Stonemonkey:method1 (26 sept 2007)

; Hi to all at the DBF forum
;                            http://www.dbfinteractive.com/


org  100h
mov al,13h
int 10h
lds  si,[bx]
drl:		mov bx,cx
		test dl,ch
		sets [bx]
		sub dl,bh
		or bh,bl
		jns nr
		    shr bh,1
		    neg bh
nr:		add bl,dh
		mov [bx],dl
	loop drl
	inc dx
jmp drl

; loops forever, ALT-ENTER to exit.