;Copyright (C) 1999-2000 Alexandr Gorlov <winct@mail.ru>
;Partial Copyright (C) 1999 Kir Smirnov <ksm@mail.ru>
;
;$Id: df.asm,v 1.4 2002/02/02 08:49:25 konst Exp $
;
;hackers' df
;
;syntax: df --help
;
;example: df 
;
;0.01: 29-Jul-1999	initial release
;0.02: 11-Feb-2000	bugfixes 
;0.03: 06-Apr-2000	portability fixes, removed sys_brk,
;			initial FreeBSD support (KB)

%include "system.inc"

space	equ	0x20
lf	equ	0x0A

CODESEG

block_size	dd	1024		; default value 

mtab	db	'/etc/mtab',EOL

msg_usage	db	'Usage: df [OPTIONS]... [FILE]...', lf
		db	'Show information about the filesystem on which each FILE resides,',lf
		db	'or all filesystems by default.',lf,lf
		db	'	--help		display this help and exit', lf
		db	'	--version	output version information and exit',lf
len_msg_usage	equ $ - msg_usage

msg_version	db	'df (asmutils) 0.03', lf
len_msg_version	equ $ - msg_version

msg_info	db	'Filesystem           1k-blocks      Used Available Use% Mounted on',lf
len_msg_info	equ $ - msg_info



;======Errors========

mtab_open	db	'Error: Can not open /etc/mtab',lf
_l1	equ	$ - mtab_open
%assign	len_mtab_open _l1
read_err	db	'Error: reading failed.',lf
_l3	equ	$ - read_err
%assign	len_read_err _l3


START:
;============= Parse command line =====================
	pop	esi
	pop	esi


.args:
	pop	esi
	or	esi,esi
	jz	.main50

	cmp	word [esi], "--"
	jne	.main50
	
.main10:
	cmp	dword [esi+2], "help"
	jne	.main11
	_mov	ecx,msg_usage
	_mov	edx,len_msg_usage
	jmp	error_exit
.main11:
	cmp	dword [esi+2], "vers"
	jne	near do_exit
	_mov	ecx,msg_version
	_mov	edx,len_msg_version
	jmp	error_exit
	
.main50:
; ��� � ����� �������� ������� /etc/mtab � ��������� ���� � �������������� ��
;============================================================================
	
	sys_write STDOUT,msg_info,len_msg_info

%ifdef	__FREEBSD__
	mov	esi,r_buf
	sys_getfsstat esi,0x4000,MNT_WAIT
;	test	eax,eax
;	js	do_exit
;	mov	ecx,eax
;.nextfs:
;	sys_write STDOUT, esi.f_mntfromname,MNAMELEN
;	add	esi,sizeof_statfs	
;	loop	.nextfs
	jmp	do_exit

%else
	sys_open mtab, O_RDONLY	;� eax ���������� !!!
	test	eax,eax
	jns	.main60		;�� ���� ������� /etc/mtab
	_mov	ecx,mtab_open
	_mov	edx,len_mtab_open
	jmp	error_exit

.main60:
; ������ ���� ��������� ������� �� ��������

;0. ��������� ������ ������ � r_buf
Read:
	mov esi,r_buf		;!!!!?
	sys_read eax,esi,0x4000
	mov ecx,eax		;������� ������ ������
	cld
	test	eax,eax		;�������� �� ������
	jns	FindSpace
		;������: �������� ����������
	_mov	ecx,read_err
	_mov	edx,len_read_err
	jmp	error_exit
%endif

;1. ���� ����� ������
FindString:
	cld
	mov al, 0xa
	repne scasb		;edi ��������� �� ������ ����� ������
	mov esi, edi
	or ecx, ecx
	je near do_exit		;!!!����� � �������.

;2. ���� ������ ������	 
FindSpace:

	mov al,' '
	mov edi, dev

.sub1:
	or ecx, ecx 		
	je near do_exit
.sub:
	dec ecx
	movsb			;[esi] -> [edi]
	cmp al, byte [esi]	
	jne .sub1	

	mov byte [edi], 0	;

	inc esi			
	dec ecx		


;2.1 �������� ���������� � ������ m_point 
.main75:
	mov edi, m_point 
	
.main80:
	or ecx, ecx
	jne	.main85
	sys_exit		;!!!��������� ��������
				;jmp Read;??? ����� �������� ���� ��� ��������
.main85:
	dec ecx
	movsb			;[esi] -> [edi]
	cmp al, byte [esi]	;� al ������
	jne .main80

	mov byte [edi], 0	;0 � ����� ������
				;� esi -> �� ������ ���� ���������!

	push ecx		;�������� ecx ???
	push esi		;������ r_buf
	
;============================================================================	
	sys_statfs m_point, sfs

;������� ���������� ������	

	mov	edi, dev		;��������
	call	StrLen			;� edx ������
	push 	edx			;��������
	sys_write STDOUT,edi

;11.02.2000 ���������: ������ ����� ������ �� ������ 1024 ����
;������������� ���� ��� �� ���������� ??!!

	xor	edx, edx
	mov	eax, [sfs.f_blocks]
	mul	dword [sfs.f_bsize]
	div	dword [block_size]
	
	mov 	edi, testline
	call	BinNumToAscii

	pop	edx
	_mov 	ecx, 30			
	sub	cl, byte [length]
	sub	cl, dl
	mov 	edi, dev
	call	Space
	sys_write STDOUT,dev,ecx

	xor	edx, edx
	mov	dl, byte [length]
	sys_write STDOUT,testline

;������ Used (f_blocks - f_bfree)

	mov	eax, [sfs.f_blocks]
	sub	eax, dword [sfs.f_bfree]
	mul     dword [sfs.f_bsize]
	div	dword [block_size]
	
	mov	edi, testline
		
	call	BinNumToAscii

	mov	ecx, 10
	sub	cl, byte [length]
	mov	edi, dev
	call	Space
	sys_write STDOUT, dev, ecx

	xor	edx, edx
	mov	dl, byte [length]
	sys_write	STDOUT, testline
;Avail (f_blocks - f_bfree)

	mov	eax, [sfs.f_bavail]
	mul	dword [sfs.f_bsize]
	div	dword [block_size]

	mov	edi, testline

	call	BinNumToAscii

	_mov	ecx, 10
	sub	cl, byte [length]
	mov	edi, dev
	call	Space
	mov	edx, ecx
	sys_write STDOUT, dev

	xor	edx, edx
	mov	dl, byte [length]
	sys_write	STDOUT, testline
	
;Use% = (f_blocks - f_bavail)*100
;	-------------------------
;       	f_blocks 

	mov	eax, [sfs.f_blocks]
;	push	eax
	or	eax, eax			;���� /proc ���� 0
	jne	.main90
	mov	dword [length],1
	mov	word [testline],'- '
	jmp short .main100
	
.main90:
	sub	eax, [sfs.f_bavail]
	_mov	ebx,100
	mul	ebx
	div	dword [sfs.f_blocks]		;� eax ������ ��������� ;)
;	pop	ecx 			
	mov	ecx, [sfs.f_blocks]
	sar	ecx, byte 1			;b/2
	cmp	edx, ecx			;
	jb	.main95				; ������� >= (b/2) �� inc eax
	inc eax
	
.main95:
	mov	edi, testline
	call	BinNumToAscii

	add	edi, [length]
	mov	byte [edi], '%'

.main100:
        _mov     ecx, 4
        sub     cl, byte [length]
        mov     edi, dev
        call    Space
        sys_write STDOUT, dev, ecx
	
        xor     edx, edx
        mov     dl, byte [length]
	inc	dl
        sys_write	STDOUT, testline

;������ m_point
	sys_write	STDOUT, dev, 1

	mov	edi, m_point
	call	StrLen
	mov	byte [edi+edx], lf
	inc	edx
	sys_write	STDOUT,m_point

	pop edi
	pop ecx
	jmp FindString			;���������� ��������� ��������

error_exit:
	sys_write STDERR

do_exit:
	sys_exit

;============================================================================
;��� �������� ��������������� ���������� ;-)
;===========================================================================
;1. ��� �������� �������� ������ � ����(��������)
;---------------------------------------------------------------------------
; HexDigit ��������������� 4-������� �������� � ASCII �����
;---------------------------------------------------------------------------
; ����:
; dl = �������� � ��������� 0..15
; �����:
; dl = ����������������� ���������� ASCII �����
; ��������:
; dl
;---------------------------------------------------------------------------
HexDigit:
        cmp	dl, 10
        jb      .aa
        add     dl,'A'-10
        ret
.aa:
        or      dl,'0'
        ret

;---------------------------------------------------------------------------
; BinNumToASCII ����������� ����������� �������� �������� � ASCII (dec)
;---------------------------------------------------------------------------
BinNumToAscii:
	pushad
	_mov	ebx, 10
	jmp	short na5
;---------------------------------------------------------------------------
; NumToASCII ����������� ����������� �������� �������� � ASCII
;---------------------------------------------------------------------------
; ����:
; eax = 32 - ������� ������������� ��������
; ebx = ��������� ���������� (2=��������,10=����������,16= �����������������)
; edi = ����� ������ � �����������
; ���������: ��������������� , ��� ��������� ������ ���������� � ������
; ���������: ��������������� (2<=ebx<=???)
; �����:
; �����������
; ��������:
; -
;---------------------------------------------------------------------------
NumToAscii:

        pushad
na5:
        xor	esi, esi
.na10:
        xor	edx, edx             ; EDX = 0
        div	ebx                  ; EDX:EAX / EBX = EAX
                                     ; �������  �  EDX
        call	HexDigit             ; ����������� dl � ����� �����. ASCII �����
        push	edx                  ; ��������� � �����
        inc	esi                  ; SI = SI + 1
        test	eax, eax             ; ax = 0 ?
	jnz	.na10
.na20:
        cld
	mov	[length], esi
.na30:
        pop	eax
	stosb
	dec	esi
	test	esi, esi
	jnz	.na30

	popad
        ret

;
;Return string length
;
;>EDI
;<EDX
;Regs: none ;)
StrLen:
        push    edi
        mov     edx,edi
        dec     edi
.l1:
        inc     edi
        cmp     [edi],byte 0
        jnz     .l1
        xchg    edx,edi
        sub     edx,edi
        pop     edi
        ret

;��������� ���������
;ecx - ���-�� ��������
;edi - ������

Space:
	push eax
	push ecx
	push edi
	
	cld
	mov	al,' '
	rep stosb
	
	pop edi
	pop ecx
	pop eax
	ret
	

UDATASEG	

sfs I_STRUC Statfs		;��������� ��� ���������� ������ statfs

%ifdef	__LINUX__
.f_type		LONG	1	;��� �������� �������
.f_bsize	LONG	1	;����������� ������ ����� ��� ��������
.f_blocks	LONG	1	;����� ���������� ������ ������ �� ��
.f_bfree	LONG	1	;���������� ��������� ������ ��
.f_bavail	LONG	1	;���������� ������ ��������� ��� ��-����
.f_files	LONG	1	;��������� ���������� �����(������) ��
.f_free		LONG	1	;��������� ���������� �����(������) ��
.f_fsid		LONG	1	;������������� ��
.f_namelen	LONG	1	;������������ ������ ����� �����
.f_reserv	LONG  	6	;���������������� 
%elifdef __FREEBSD__
.f_spare2	LONG	1	;placeholder
.f_bsize	LONG	1	;fundamental file system block size
.f_iosize	LONG	1	;optimal trasfer block size
.f_blocks	LONG	1	;total data blocks in file system
.f_bfree	LONG	1	;free blocks in fs
.f_bavail	LONG	1	;free blocks avail to non-superuser
.f_files	LONG	1	;total file nodes in file system
.f_ffree	LONG	1	;free file nodes in fs
.f_fsid		LONG	1	;file system id
.f_owner	LONG	1	;user that mounted the filesystem
.f_type		INT	1	;type of filesystem
.f_flags	INT	1	;copy of mount flags
.f_spare	LONG	2	;spare for later
.f_fstypename	CHAR	MFSNAMELEN	;fs type name
.f_mntonname	CHAR	MNAMELEN	;mount point
.f_mntfromname	CHAR	MNAMELEN	;mounted filesystem
%endif
I_END

testline	resb 10
length		resb 1
dev		resb 30
m_point		resb 30
flags		resb 1
r_buf		resd 0x4000

END
