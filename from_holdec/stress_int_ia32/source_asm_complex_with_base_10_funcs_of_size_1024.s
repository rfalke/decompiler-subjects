
        .file   "a.c"
        .text
.intel_syntax noprefix


.globl log_size_10_var_000
         .type   log_size_10_var_000, @function
log_size_10_var_000:
 push ebx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0x54c484a1
  mov ebx,0xcfc38870
  mov ecx,0x5715509a
  mov edx,0x7312ed3c
  mov ebp,0xf145b73f
  mov esi,0x9b044267
  mov edi,0xcde3b50c
   bswap ecx
   sar edi,cl
   and ebx,0xd2625ad0
   sar di,0x1
   rcl cx,cl
   shl bx,cl
   shl ax,0x1
   rcl edx,cl
   or esi,0x30538506
   movzx eax,bp
   ror dl,0x1
   shr ecx,0x9e
   test ebp,esi
   shl bx,0x8d
   test cx,0xe5ff
   btr si,0x3c
   dec ch
   cwd
   cmovc ax,dx
   clc
   sbb edi,0x7aa22cc5
   rcr esi,0x1
   sub bh,dh
   nop
   sar dl,0xd7
   add bx,bp
   imul cx,ax,0x32e3
   xor ax,si
   mov edx,0x8cb73ed
   setl cl
   sar eax,cl
   sub esi,esi
   btr si,0xd
   setbe bh
   and si,0x7fb
   rcl ax,0x6
   xadd bp,di
   cmovs dx,ax
   adc ax,0xae48
   stc
   rcr bp,0x1
   stc
   sbb dx,dx
   setpo ah
   stc
   adc edi,edx
   test ah,0xde
   rol bl,0xd1
   rol esi,cl
   xor ah,0xf0
   rol bh,0xb8
   bt bp,0xf8
   sar bp,0xe4
   movzx bx,ah
   rol di,0x11
   shld ebx,ebx,cl
   or ch, 0xc0
   and ax ,0x3fff
   div ch
   not ch
   ror dh,cl
   shrd ebp,eax,1
   bswap eax
   not ebp
   shld ecx,ecx,cl
   cmp edi,0xfb50677c
   rcl ecx,0x1
   cmovnc bp,bp
   adc di,bx
   cmovpo esi,ebp
   add bl,0x3b
   cmovbe cx,ax
   cmovnl ax,bp
   movzx cx,al
   imul di,si,0x4539
   clc
   sbb dh,bl
   rcl cl,0x1
   cmpxchg cx,cx
   shl ebx,cl
   cmp esi,0xde506940
   bt edi,ebx
   inc	ecx
   cmovne si,si
   mov ecx,0xba9cd0f
   or bl, 0xc0
   and ax ,0x3fff
   div bl
   mov edx,edx
   add esi,0xf6b9ab60
   shld ebx,edx,0x51
   sar bp,0x1
   clc
   adc ax,bx
   test esi,0x93b96597
   rcr bx,0xec
   inc	esi
   add cx,0xd361
   shl dl,cl
   or ch, 0xc0
   and ax ,0x3fff
   div ch
   cmp ebp,0xb0ae0bde
   shr ax,0x76
   bt cx,bx
   clc
   sbb ax,0x2ad8
   shl cx,cl
   btc si,di
   sub ebp,0xf984999c
   imul ecx,0x3144e97b
   clc
   sbb dl,0x73
   sar dh,0x1
   btr edx,esi
   and bl,dl
   sbb ah,bl
   ror cl,0xee
   shld edx,eax,1
   mul bl
   shr edx,0x1
   cmovc si,ax
   cmp di,0x2016
   btr eax,0xe8
   or bl,ah
   inc	al
   bsr eax,ebx
   and esi,0xadfa054a
   or dl, 0xc0
   and ax ,0x3fff
   div dl
   xchg eax,edi
   cmp ecx,0x26d4581
   cmpxchg esi,edx
   and cl,0xf
   shld bx,si,cl
   shr ebp,0x1
   mov dl,0x86
   rcr edi,0x1
   and cl,0xf
   shrd si,dx,cl
   bt ax,0x3f
   imul ebx
   shl eax,0x1
   clc
   rcr bl,0x1
   dec dh
   rcl esi,0x1
   sbb ax,0x2501
   add ebx,0xeae44266
   xor bl,al
   rcr dh,0x3d
   ror ecx,0xd6
   btr ax,ax
   not ebx
   not edi
   shl bp,0x1
   clc
   rcl edx,0x1
   sbb ecx,esi
   cmovng ebx,eax
   cmovne bp,bx
   or dx,0x258f
   ror dl,0x1
   xchg edi,edx
   rcl bx,0xce
   sub ch,dl
   setpo ah
   setpo dh
   setng bh
   sub bx,0x2e0b
   mov ebx,ebx
   adc eax,0x7527d74a
   shld ax,ax,1
   rcl ebp,cl
   cmp ah,0x99
   shr ebx,0x6c
   ror dl,0x39
   xor bp,0x515f
   shl dx,0xc6
   shl ebp,0x1
   cmovno ebp,esi
   xchg dx,bx
   clc
   adc edi,edi
   add cl,ch
   sar di,cl
   movsx ecx,ax
   sub eax,0x808dda03
   cmovne bp,dx
   cmovng ax,di
   rcl edx,cl
   xor bh,bh
   clc
   adc dx,bx
   cmovbe ecx,ebx
   and esi,eax
   clc
   adc ebp,0x7065966e
   adc cx,bp
   rol bl,0x9e
   cmpxchg cx,si
   btc bp,di
   sar bp,cl
   add al,ah
   xor ch,ch
   cmpxchg si,di
   neg di
   bts cx,bx
   cbw
   imul eax,0xce1ae27d
   shl ebp,cl
   bsr ebx,ecx
   bts esi,0x5d
   cmovbe ecx,ebp
   and cl,0xc3
   rcr edx,0x8e
   ror al,0x1
   cdq
   and cl,0xf
   shrd cx,si,cl
   or ebx, 0xc0000000
   and edx, 0x3fffffff
   div ebx
   bsf edx,edx
   mov edi,eax
   xadd esi,edi
   cmovpo bx,bp
   stc
   adc bl,0x1e
   cmp ax,0x355a
   setnc bh
   sahf
   rcl cl,0x1
   sahf
   shl eax,0x1
   xchg cl,dl
   and edx,0x5a28e0bd
   stc
   adc ebp,ecx
   setnbe ch
   neg edx
   stc
   adc dx,di
   shl ecx,0x1
   or ebx,ebp
   clc
   adc di,cx
   clc
   sbb esi,edx
   sub ch,ch
   clc
   sbb ah,dl
   bswap ecx
   mul bh
   or edi,ebp
   rcl bp,cl
   cmp ax,0x5aa9
   and dl,dl
   clc
   adc ah,ah
   clc
   sbb al,0xf4
   or dh,bl
   sar si,cl
   ror ax,cl
   sar bx,0x3d
   movzx ebx,cx
   movzx eax,cx
   dec ebp
   and eax,0xe2ce2f48
   shl ebp,0x88
   movzx dx,bl
   add al,0x25
   shld ebp,edx,cl
   btr edx,0xe
   add ecx,ebx
   sbb bh,bl
   sar ah,0x1
   rcr dh,0x1
   cwd
   shl ebp,0x16
   or bp,0x7793
   shr ebp,0x1
   xor ch,0x91
   stc
   rcr esi,0x1
   ror edx,0x1
   shr ah,0x1
   bts edi,ebp
   lea di,[esi+edx*1+0xc0c50788]
   and edi,0xaec3d084
   setnl ch
   rcr al,cl
   neg ecx
   cmovl eax,eax
   stc
   sbb esi,ebp
   imul ebx,eax,0x30f78b46
   btc dx,0xc4
   or eax, 0xc0000000
   and edx, 0x3fffffff
   div eax
   or ecx, 0xc0000000
   and edx, 0x3fffffff
   div ecx
   or bx,0x9576
   shl ch,cl
   bswap ebp
   cwd
   add ah,cl
   sar bh,cl
   cmp ax,0x78a8
   clc
   adc cl,ah
   mul al
   setc dl
   btc ecx,0xd2
   xor eax,0x7dffe825
   rcr di,0x1
   adc edi,0xd4c52889
   btr bp,0xd6
   test al,0x45
   test cl,ch
   cmovpe cx,si
   clc
   sbb bh,0x41
   shr ax,0x1
   bt esi,0xf5
   and cl,0xf
   shld di,di,cl
   cmpxchg cl,bl
   mul bh
   sahf
   cmovpo si,si
   add eax,0xea8009
   or ebx,ebp
   sar bp,0x1
   sbb bx,0x98d9
   btc ebp,edi
   add bx,0x476d
   adc ch,0x4
   shr esi,0x1
   stc
   rcl ch,0x1
   bt eax,0x8a
   imul esi,0xd87f5da7
   cmc
   mov edi,0xfe6765e9
   rol bx,0x95
   xchg bp,bp
   sar cx,cl
   shl bh,0x1
   mul ecx
   bts dx,0xb4
   not edx
   sub ebx,0x6689038c
   rcr si,cl
   sahf
   rcl bx,cl
   bt cx,cx
   not ch
   mul ah
   add edx,esi
   sbb si,0x2c62
   shld bp,ax,1
   rcl edx,0x1
   and cl,0xf
   shld cx,si,cl
   bt edx,ebx
   cmovnc edx,ebx
   neg edi
   shrd eax,eax,0xc2
   xor ebx,0x6a36b9
   add di,0x6b8
   bts ecx,ebp
   stc
   adc di,cx
   dec al
   shr ebx,0x5c
   shr bp,0xd6
   btc edx,eax
   clc
   rcl eax,0x1
   adc bp,0x6374
   neg bx
   rcl al,0x50
   shld esi,edi,cl
   not ah
   shl si,cl
   sar bl,cl
   add ch,dl
   lea ebx,[eax+ebp*2+0x4a81d55c]
   stc
   adc cx,bx
   shld di,dx,0xd
   and di,cx
   sets ch
   inc	dh
   adc ah,dh
   ror al,0x1
   add bl,cl
   sar dh,0x3
   and bh,dl
   cmp bp,dx
   cmovnl bx,di
   clc
   rcr edx,0x1
   and bp,cx
   rcr si,0x32
   bsf edi,ecx
   sub dx,0x68e2
   mul dl
   cwde
   mov dx,0x8531
   clc
   sbb edi,0xf53397b5
   setpo ah
   dec cl
   clc
   adc bh,al
   cmovns si,dx
   sar di,cl
   or bh,cl
   clc
   adc edi,0x63cf8685
   rcr esi,0xe
   shl ebx,0x1
   stc
   adc cl,0xfc
   sub ebx,0x53bedde5
   setnc dl
   xor ecx,ebp
   bt di,0x71
   bts dx,0x3d
   xor si,0x86d8
   setpe cl
   test al,bh
   btr dx,0x2c
   mul cx
   clc
   rcl eax,0x1
   cmovnc dx,ax
   dec ax
   shr bh,0x44
   shl edx,0x1
   clc
   rcl ah,0x1
   rol dh,0x1
   and edi,0x2c85416c
   stc
   rcl ebp,0x1
   sbb si,0x74f4
   ror bp,cl
   btc cx,0xac
   dec bp
   shr eax,0x1
   cmp bp,0x42b6
   setpo ch
   ror di,cl
   or dx,bx
   stc
   adc esi,eax
   ror cl,0x1
   stc
   adc cx,0x75da
   btc esi,ecx
   sbb al,0x69
   shl ebx,cl
   test dx,0x194b
   rol cl,0xf9
   xchg cl,dl
   shl ax,0x6e
   imul bp,ax,0xaba1
   cmovc cx,si
   bt ecx,ecx
   nop
   bts ebx,edx
   neg bx
   neg dx
   setpo bl
   test dl,0x72
   cmovc bx,cx
   imul bh
   shr cx,cl
   xor edx,esi
   cmove ecx,esi
   adc dh,cl
   shr ebx,0x64
   bt edi,edi
   shl ah,cl
   dec cl
   xchg eax,esi
   shrd esi,esi,1
   setnc bl
   setns ch
   cmovnc eax,ebp
   rcl ch,0x1
   cmovc esi,edi
   test cl,0x37
   rol dh,0x62
   and eax,0x74f38578
   rol dl,0x1
   and dx,ax
   add dx,bx
   bsf edx,ecx
   mov ecx,0xd0d92a4a
   add eax,0x39c48794
   cmovpo edi,eax
   xadd ebp,ebp
   rcl ebx,0xf6
   imul bp,bp,0xae0f
   bt di,bx
   mov edi,ecx
   stc
   sbb edi,eax
   and di,0xa53a
   sbb ebp,ebx
   cbw
   stc
   sbb edi,0xa7939127
   imul si,bp,0xf0be
   ror dh,cl
   mov si,dx
   or cx,ax
   xchg ch,dl
   sahf
   mov bh,0xc1
   stc
   adc ecx,ebx
   cmovo ecx,esi
   btr edx,0xa6
   stc
   rcr cl,0x1
   rcl bh,0x1
   cmpxchg edi,ebx
   stc
   sbb si,0xa5e0
   stc
   sbb bp,ax
   sub dh,0xc1
   xchg ebx,ebx
   cmovnbe ebp,ebx
   rcl ch,cl
   ror ebp,0x1
   clc
   rcr dh,0x1
   clc
   sbb dx,0xdd04
   sbb ch,0x9
   test al,al
   shr edx,cl
   or si,0x9f47
   btr dx,0x43
   dec ebx
   clc
   rcl ah,0x1
   ror si,0xbd
   shrd ebp,eax,0x1d
   and bp,cx
   and dh,0xfc
   clc
   adc di,cx
   stc
   rcr ebx,0x1
   bts bx,0xce
   imul eax
   shl ax,cl
   movzx bp,bh
   bt cx,bp
   sbb si,si
   shr dx,0x16
   and ebp,ebx
   stc
   rcl al,0x1
   clc
   adc bl,bl
   cmovo bx,bx
   clc
   rcr si,0x1
   ror edi,0xc7
   shl edx,cl
   shr ebx,0x1
   cmpxchg esi,eax
   adc edx,0x4d0d06f4
   btr edx,edx
   xchg eax,eax
   sar di,0x1
   sub ch,dh
   test di,0x92de
   shl al,0x1
   cmp edx,0x3864ea67
   cmovl ecx,edi
   setnl al
   shld edi,ebx,cl
   shrd edi,esi,1
   and dl,0x11
   rol cl,0xa5
   xadd dx,si
   rol si,0x1
   inc	eax
   add cx,0x4a68
   sub ebx,0xed971050
   rol dh,0xf1
   sar bl,0x2b
   btc edx,edx
   stc
   rcr eax,0x1
   sbb ch,0x79
   sbb edi,0x545a22bc
   sub ebx,0x105abf8d
   sahf
   movzx ebp,ax
   setnc cl
   or esi,ecx
   cmp bh,ch
   stc
   sbb cl,bl
   or bl,0xa5
   shld esi,eax,1
   cmovpo edx,ecx
   stc
   sbb ebp,ecx
   neg bp
   clc
   mov edx,0x36bcd9c5
   or cx,di
   sar eax,cl
   neg ebp
   neg esi
   clc
   rcl dx,0x1
   rol ax,cl
   rol dh,0x8d
   sar ebx,0xa4
   imul di
   stc
   rcr cx,0x1
   clc
   adc edx,0xdffb19d3
   and ebp,ebp
   sbb edi,ebx
   shr ax,0x1
   and cl,0xf
   shrd cx,dx,cl
   sub al,0x77
   rcr ch,cl
   test bh,0x2b
   add bl,0x3b
   clc
   setno ah
   sub al,ch
   nop
   cmovnbe bp,di
   imul si,0xa223
   setnc cl
   rol ebp,0xcd
   rol bp,cl
   xadd ch,dl
   mul di
   imul cx,si,0x427e
   xadd bp,dx
   rcr ah,cl
   btr esi,0xf7
   stc
   adc bh,ah
   ror bh,cl
   shr dh,0x1
   movzx ecx,bx
   xor eax,0xcee631b3
   rcr ah,0x1
   cmovnc eax,ebx
   sbb dh,0xac
   rcr ax,0x9f
   or bp, 0xc000
   and dx, 0x3fff
   div bp
   dec al
   cmp ebx,edi
   inc	ah
   or bl,0x3
   clc
   rcl dh,0x1
   mov al,0x16
   shr bh,0x1
   shld cx,di,0x9
   or dl,bh
   cmovs eax,edi
   test edx,ecx
   xor edx,ecx
   bt dx,0x4c
   stc
   rcl dx,0x1
   and ecx,0x4ae716be
   cmovs ecx,edx
   rol ax,0x74
   shr dh,0x1
   rcl esi,0x1
   cmovnc ebp,esi
   imul edi,0xcb25e734
   mul cx
   shr edx,0x2a
   and cx,0x9c7b
   bts bp,0x20
   cmpxchg al,dl
   setc bl
   stc
   adc si,0xf420
   shl si,0x1
   clc
   sar bp,0x1
   rol di,0x1
   sub ah,cl
   xadd dx,bx
   movzx esi,bx
   cmp ebx,esi
   cmpxchg bx,bx
   sub eax,eax
   neg edx
   and dx,dx
   stc
   rcl dh,0x1
   xor ecx,esi
   shld ecx,edx,0x60
   mul ah
   shr ax,0xa
   cwde
   shl dx,0x64
   cwde
   shl bl,cl
   bt ecx,eax
   and ecx,0x4b09527c
   cmovne bp,di
   cmp dl,0x5b
   clc
   sbb ax,0x47fb
   sub ecx,eax
   and edx,eax
   mov si,0x82d9
   imul dx,0x3728
   cmovnc si,cx
   shr ax,0x24
   clc
   imul bl
   shr ax,0xe8
   and bp,di
   setnc cl
   rcl ebp,0x1
   ror bl,0xb9
   inc bx
   cmovng edx,eax
   test bx,ax
   shld bx,bp,1
   rcr bl,0xd8
   ror bl,0x82
   cmp eax,esi
   and ecx,0xab284dd1
   clc
   rcl dx,0x1
   btc ax,0xcb
   sar di,cl
   dec edx
   bswap ebp
   rol esi,0x1
   adc ax,0xc349
   stc
   adc bp,0xd376
   sar ebx,0x1
   inc di
   sub dx,0x58c4
   adc bh,ah
   cmc
   cmovno dx,ax
   cmovo bx,dx
   add dx,0xb051
   cmovbe ebp,edi
   cmp edx,0x223d56a6
   sub cx,0xd47c
   or di,ax
   shr bl,cl
   movsx cx,dl
   add ebx,ecx
   rcr ebx,0xb1
   cmp edx,eax
   sar ah,cl
   cmp ecx,0x68d76555
   cmp dx,di
   or cl,al
   rcl dh,cl
   bswap esi
   ror dx,0x3b
   shl eax,cl
   mov dl,al
   cmpxchg esi,esi
   cmp dx,0x920c
   bt ecx,ecx
   shl dx,0x26
   dec esi
   cmp bx,0xfd94
   cwd
   setng ah
   cmovnc esi,ebx
   sar ecx,0x1
   clc
   rcl esi,0x1
   shrd esi,eax,cl
   not eax
   cmp bh,0x30
   shl cl,0xa4
   and dl,al
   stc
   sbb si,dx
   xor bp,0x1f82
   not edx
   sahf
   and dh,bh
   and dl,ah
   imul dx,dx,0x2c58
   shld edi,eax,0xe6
   xor ch,dl
   cmovne si,si
   cmovno bx,bx
   clc
   adc dl,0x71
   stc
   sbb ebx,0x5696332d
   bts ebp,0x19
   clc
   adc cl,al
   sbb di,0xf94c
   stc
   sbb al,0x7e
   stc
   adc edx,eax
   ror ah,cl
   rol bx,0x1
   rcr dh,cl
   movsx cx,ch
   bsf eax,edi
   and bx,0x2911
   lahf
   test ebp,0x6f7b2ea9
   stc
   rcr si,0x1
   stc
   sbb si,0x39aa
   ror ebp,0x1
   rol eax,0x1
   and ax,0x4856
   clc
   rcl edi,0x1
   ror edi,0x41
   xchg cx,si
   mul di
   setnc dh
   cmpxchg edi,eax
   shl cx,0x3d
   imul bh
   clc
   adc si,dx
   cmovbe si,ax
   cmovnbe dx,di
   adc eax,esi
   shr bx,cl
   inc	edi
   mov eax,0x1c3a753f
   bt edx,eax
   adc bx,cx
   shld ecx,esi,0x62
   shr ebx,cl
   shl ecx,cl
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   shrd esi,ebp,0x84
   rol ch,cl
   bsf edx,eax
   imul ah
   or al, 0xc0
   and ax ,0x3fff
   div al
   shld di,dx,1
   shr bp,0xd3
   ror cx,0x61
   ror bh,0x1
   xadd si,bp
   test bx,si
   clc
   adc cl,0x10
   imul bp,0x84b2
   test ax,dx
   and eax,edi
   btr dx,0x1a
   sbb bp,si
   test ebp,0x6883be94
   cmovng ax,cx
   clc
   adc ax,bp
   sar eax,0x56
   or ah,ah
   shld si,si,1
   rcr dl,cl
   shrd cx,ax,1
   shr dl,0x32
   or ax,0xd0a5
   stc
   rcl bx,0x1
   rcl al,cl
   imul di
   rol cx,0x4d
   mov bx,ax
   imul cx
   bts eax,edi
   ror eax,0x82
   bts esi,esi
   cmpxchg ax,bp
   cwde
   shl bp,0x8
   sar ch,cl
   shld ax,ax,0xc
   sar al,cl
   not dh
   or ebp,ecx
   shr bl,0x1
   lea bp,[edx+ebp*2+0x3eb939d]
   setc dh
   clc
   adc dh,0xaa
   cmovs ebp,esi
   clc
   sbb ch,0xbf
   sar edx,cl
   add al,0x44
   stc
   adc ebp,0xfcf2efc2
   neg cx
   stc
   sbb ebx,0x5ce99fd8
   ror eax,0x2
   xor ebp,edx
   mul ecx
   stc
   sbb cl,0x99
   rcr dl,0xed
   shl edi,0x1
   bts edx,0x23
   mul ebp
   rol edi,0x1
   btc esi,0xab
   shl al,0x1
   rcr edx,0x1
   shr cl,0x1
   movzx di,dl
   and di,0x4882
   movzx eax,bp
   shld ebx,esi,0xa2
   test ax,0xa23c
   movsx di,al
   inc	esi
   stc
   rcl si,0x1
   ror cl,0xbf
   ror edx,0x92
   sar eax,0x3f
   ror dl,0xb4
   lea si,[edx+ebp*4+0x73]
   sar ebx,0x1
   stc
   adc al,0xda
   sub ch,al
   cmovpe bx,cx
   bt bx,0x51
   rcl di,0xb5
   or dl, 0xc0
   and ax ,0x3fff
   div dl
   cmpxchg dx,si
   cmovg bp,cx
   setpo dl
   stc
   rcl esi,0x1
   setc cl
   sahf
   ror si,cl
   shld eax,esi,0x34
   xor ebx,0x34265ab8
   cmovg ebx,ebp
   sar ax,cl
   shl bh,0x1
   stc
   sbb dl,bh
   stc
   sbb bl,0xe4
   ror dh,cl
   rol bl,0x1
   inc si
   sets ch
   sub esi,ecx
   setno bl
   stc
   adc bl,0xdd
   ror bx,0x1
   imul ax
   shld ebx,edx,cl
   movzx ebx,bl
   xchg ebx,edx
   rol ah,0x7f
   imul esi,0x4aa711b
   or eax,0xa00413c6
   inc	ebp
   bts eax,ebp
   lea ebx,[ebp+eax*1]
   xchg bx,si
   stc
   adc dl,al
   lea ecx,[ebx]
   mov edx,edi
   shl bh,cl
   not al
   sar al,cl
   shld esi,edi,0xd2
   ror al,cl
   rol si,cl
   shl esi,0x8f
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0xf3897a62

 pop gs
 pop edi
 pop esi
 pop ebp
 pop ebx
 ret
         .size   log_size_10_var_000, .-log_size_10_var_000

.globl log_size_10_var_001
         .type   log_size_10_var_001, @function
log_size_10_var_001:
 push ebx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0x8f08af8c
  mov ebx,0x973dd0ee
  mov ecx,0x8a4faae8
  mov edx,0x779d18fb
  mov ebp,0xa7f6be9b
  mov esi,0x2d1aaa4a
  mov edi,0x2013f14e
   and cl,0xf
   shld bx,si,cl
   shl ah,0x1
   neg edi
   test di,bx
   adc ecx,ebp
   bt edx,esi
   btr si,0xf8
   rcr esi,cl
   shl bx,0x39
   shl eax,0x17
   cmpxchg ax,dx
   bts bx,0x95
   stc
   adc esi,0x660dec8c
   cmovno esi,edi
   lea bx,[eax+eax*1+0x19d22b1a]
   sbb cl,0x99
   movzx ebx,bx
   or al,ah
   cmovnc ebx,esi
   clc
   sbb bh,bl
   rcl di,0x92
   xor bl,ch
   mul dl
   setno dl
   and bh,0x6b
   rcr di,0x54
   bt esi,0x88
   btr cx,0xc9
   not cl
   rol edx,cl
   imul bp
   rol si,0xcd
   bt edx,edi
   and al,0xce
   rol dh,cl
   mul dx
   shrd ebx,ecx,0x6d
   add edx,ebx
   stc
   adc bl,bh
   movsx di,ch
   cmovg dx,cx
   cmovng esi,ebx
   test si,di
   setnbe cl
   cmovs si,di
   shl cx,cl
   shld esi,ecx,cl
   rol bp,0x1
   shrd si,cx,1
   stc
   rcl ebx,0x1
   xadd cx,bx
   setne bl
   shld edx,eax,1
   bts edx,0xe7
   shrd si,cx,0xd
   neg ax
   neg edx
   lea edx,[esi+edi*4]
   setnl cl
   bt ax,0x3
   rol esi,0x1
   mul ecx
   rcl eax,0x5e
   dec ebx
   bsr ebp,edx
   rol edx,0x1
   stc
   rcl si,0x1
   cmovno eax,ebx
   rcl dh,0x17
   xor ax,di
   btc dx,0xc5
   adc ecx,esi
   stc
   rcl ebp,0x1
   shrd esi,edx,0x32
   shrd esi,ebp,1
   clc
   rcr ax,0x1
   or dl, 0xc0
   and ax ,0x3fff
   div dl
   or bx,cx
   setpe ah
   imul edx,edx,0x4c370c16
   xchg ebp,ebx
   inc	edx
   cmovno ax,ax
   clc
   rcr si,0x1
   dec cl
   seto dl
   clc
   sbb edi,0x95a71a4a
   test eax,0xd6431e40
   clc
   sbb ecx,ebx
   rcl eax,0xde
   and esi,0x49a95b55
   bts si,bp
   bt esi,0xa3
   rol ax,0x9e
   xchg dl,bl
   add cx,dx
   cmovnbe edx,ebx
   adc bp,0xd07b
   xor edi,0xc078881a
   stc
   sbb ebx,ebx
   sub ebp,eax
   inc ax
   mov ax,0xb17a
   shr al,0x1
   shld ebx,edi,1
   shl bh,cl
   shl ebx,0xe7
   shrd esi,eax,1
   ror di,0x83
   sar bl,cl
   shr cx,0x1
   and ah,0x72
   cmovbe bp,di
   rcr ebp,cl
   neg si
   imul si,0xa8b6
   bswap esi
   cmovo di,bp
   sub si,0xad59
   sar edx,cl
   dec bx
   cmovng esi,ebx
   btc ax,0xee
   cmovbe dx,di
   bt edx,ecx
   movzx edi,bh
   bsr edi,edi
   and dl,0xe2
   mov dl,0x57
   setne ah
   ror eax,0xd7
   shr dl,0xdb
   cmpxchg al,ah
   movsx cx,dl
   xchg ax,di
   sete dh
   rcl bl,cl
   imul ebp
   shr eax,0x81
   imul ecx
   movsx edx,dl
   test si,bx
   inc	ebp
   clc
   cmovno edx,ecx
   rcr ecx,cl
   test dh,0x48
   setns ch
   and cl,ah
   btc bx,0xf6
   shl si,0x1
   seto ch
   rol ebx,0x1
   rcr bh,0x1
   cmp dx,0xbe12
   lahf
   add ebp,0x5177e99a
   rcr ebx,0x1
   test al,dh
   xor esi,0xd4fa899
   cmovne ebx,ebp
   shr ebp,cl
   movzx ebp,ch
   bsr eax,edi
   cmove dx,cx
   bsr esi,eax
   shr ax,cl
   cmp dl,0xa8
   imul dl
   stc
   sbb bp,0x6712
   rol ebp,0x1d
   movsx eax,bp
   ror cl,0x1
   shl si,0x1
   sbb bp,0x6c49
   cmpxchg dx,cx
   stc
   adc bx,si
   stc
   adc cx,0xe7c
   shr edi,0x79
   bt edx,0x6c
   stc
   rcr eax,0x1
   xadd bx,di
   shl edi,0x41
   clc
   shr bh,0x1
   sub edx,edi
   stc
   adc si,0x77d9
   rcr dx,0x1
   test dh,bh
   stc
   rcl dx,0x1
   stc
   adc ch,0x91
   rcr cl,cl
   neg bl
   mov ch,0xda
   xor ax,0x4609
   xor bh,0xf3
   test ax,0xfd29
   cmove edx,eax
   movzx edi,cx
   setl cl
   rcl al,cl
   shld ecx,esi,1
   and cx,0x345f
   not ch
   mov ax,si
   cmp ebx,edx
   clc
   and ebp,0xddc09ccc
   or si,bx
   inc	al
   stc
   adc cl,0xd
   bt esi,ebp
   bts ebx,0x2e
   xor al,0x1d
   rcr ax,cl
   and cl,ah
   stc
   adc ch,0x6f
   rol si,0x1
   clc
   sbb bl,0x9b
   mov dx,0xd1e9
   ror ch,0x8a
   cmpxchg edx,eax
   cmovns bx,ax
   cmpxchg cl,bh
   adc bl,al
   clc
   adc si,0x7df7
   clc
   rcl ch,0x1
   bt edx,edx
   cmovnc bp,cx
   clc
   or bh, 0xc0
   and ax ,0x3fff
   div bh
   dec si
   nop
   test ebx,0x50bfe2cd
   and bh,0xa5
   sub edx,edi
   cmovbe dx,si
   shl ecx,cl
   cbw
   clc
   and eax,0xd2b1d71
   ror ebp,0x93
   shr ax,cl
   or dl,0x9b
   cmovns ebp,esi
   stc
   sbb bx,0x6aaa
   or si,0xd54b
   cmovne ebp,edi
   rol edx,cl
   shl di,0x1
   xchg ebx,ebx
   or edx,0x58e298ba
   mov ah,al
   shrd ebp,esi,1
   nop
   adc cx,bp
   sar bl,0x1
   cmovnc dx,dx
   rcr bl,cl
   or si,bx
   and ah,dl
   shl dh,cl
   cmpxchg si,di
   add al,dl
   stc
   sbb al,dl
   clc
   rcr al,0x1
   cmovc esi,ebp
   stc
   sbb cl,0x8e
   bt edx,ebx
   ror eax,0x1
   xchg bp,bp
   clc
   rcr edi,0x1
   mov al,0x3e
   movsx dx,bl
   cmovo edi,edx
   add bx,0x9601
   stc
   adc cx,dx
   adc cl,0xee
   sbb ebx,eax
   rcl cl,cl
   btc bp,0x6d
   cmp si,0xe9de
   stc
   sbb dl,bh
   rol cx,0x56
   rol esi,0x8c
   xadd bx,ax
   cmovnc si,si
   and cl,0x3a
   clc
   rcl ebp,0x1
   sahf
   rcl bp,0x1
   bt edx,edx
   or edi, 0xc0000000
   and edx, 0x3fffffff
   div edi
   bsf ecx,esi
   cwde
   or ecx, 0xc0000000
   and edx, 0x3fffffff
   div ecx
   xor bl,bl
   clc
   rcl di,0x1
   test esi,0x9df68abd
   sub ch,0x83
   cmovno ax,bx
   xchg ah,bh
   and cl,0xf
   shrd ax,dx,cl
   rol esi,0xc4
   sub al,ch
   bt esi,esi
   add ecx,eax
   test al,bh
   sar ax,0x1
   xadd bp,ax
   cmpxchg dx,ax
   setno bh
   sub ebx,ecx
   sbb ebp,esi
   cmp ecx,0xd84ddcd7
   sbb esi,edi
   clc
   sbb ax,0xdb73
   cmc
   inc	eax
   shld ax,cx,1
   sbb di,0x11c7
   btc di,0xe0
   sbb ebp,0xb387324d
   cmovpo ebp,ecx
   sbb al,0x2e
   sete ch
   rol cx,cl
   cmp ch,0xd7
   inc	ecx
   ror cx,cl
   shr eax,cl
   neg edx
   not ecx
   clc
   adc cx,0x9278
   rcr ebp,cl
   mov dh,al
   or dx,0x7ead
   bt ecx,esi
   imul si,0xcc7e
   sar esi,cl
   inc bp
   cmovpo edi,esi
   rol ebp,0x1
   and di,bx
   cmovpo eax,eax
   stc
   adc ecx,edi
   imul dh
   stc
   rcl ecx,0x1
   mov edi,0x965d66b6
   rcl edi,cl
   or bh,0x76
   shrd eax,ecx,1
   imul bp
   cmovo ebx,ebx
   btr di,0xb0
   ror di,cl
   mul bx
   nop
   imul ah
   not dh
   xadd ah,bl
   add cx,0xc4eb
   and cl,0xf
   shld ax,dx,cl
   lea ebx,[edx+eax*2+0xbab4d5ef]
   cmpxchg al,bh
   add dl,0x25
   movzx edi,bp
   setnc bh
   cbw
   xchg ch,dh
   clc
   rcl bh,0x1
   imul bx,bx,0xd55e
   cbw
   bt ax,0xa3
   mov bh,bl
   lea ebp,[ecx+esi*4+0x88889821]
   bt ebx,0x82
   shl ax,0x1
   lea ebp,[esi+0xf3ff73e9]
   clc
   rcl edi,0x1
   lea di,[ecx+ebx*8+0x72]
   or si,0x989d
   or ecx,0xfd4a53ed
   bts edx,esi
   btr si,di
   sbb bh,0x4f
   sbb edx,edx
   stc
   sbb cl,dl
   inc	ecx
   bt di,bx
   stc
   rcl ebp,0x1
   add bl,bh
   imul cx,0xb4d5
   ror ebx,0x1
   neg al
   rcl ecx,0x1
   clc
   rcr ebx,0x1
   shr dx,0x85
   btr eax,edi
   stc
   sbb bx,0x455e
   cmc
   and cl,0x5c
   btr di,0xba
   shld edi,ecx,cl
   test ah,0x4b
   cmovne si,si
   rcr ecx,0x63
   or cl,dh
   setng ch
   btr ecx,ebx
   sar ecx,0x72
   lea bx,[esi+edi*1]
   shr bx,0xb9
   shr ebp,0x2b
   shr edi,0x30
   dec bh
   cmove bx,cx
   dec dx
   dec dx
   imul ax
   imul cx,ax,0xc25e
   cwd
   clc
   adc ecx,0x15cdd6f0
   bsf eax,ecx
   shl cl,0x1
   shl dx,0x8e
   mul bl
   cmpxchg dl,ah
   shr dx,0x4b
   imul si
   shr ah,0xed
   test bl,bl
   stc
   rcl bp,0x1
   bts bx,ax
   bsf ecx,eax
   rol edi,0x3b
   bt edi,edi
   sbb ebp,esi
   ror ebp,0xed
   inc ax
   mov ebp,edi
   setl ah
   not dl
   cmove dx,ax
   cmovnl esi,ebx
   bts bp,di
   stc
   sbb cx,0xa2
   rol dx,cl
   imul cx,0x4bfe
   shrd di,bx,0x2
   dec ebx
   imul dh
   sar al,cl
   rol cx,0x1
   adc ch,0xba
   clc
   adc bh,0x42
   xor dl,0x6f
   imul di,di,0x7fd6
   inc bp
   clc
   adc dh,dl
   sbb esi,ebp
   cmovnc di,si
   bswap edx
   bts edi,0xd7
   xchg esi,edx
   and al,bh
   cmovbe cx,si
   neg si
   rcr si,0xe9
   xor di,si
   clc
   adc dl,0x8d
   adc dh,dh
   cmovs si,dx
   sar dx,cl
   add al,0xef
   movzx dx,ah
   adc bh,al
   clc
   sbb edx,ecx
   shrd ebx,ebx,0xf4
   imul edi,ebp,0xf7809183
   not bh
   movzx eax,bp
   shl ah,cl
   mul dl
   imul si,0xd52b
   adc eax,0x212fad42
   btc eax,0xe1
   sar eax,0xeb
   or ebp, 0xc0000000
   and edx, 0x3fffffff
   div ebp
   imul cx
   rcr ah,cl
   or bp, 0xc000
   and dx, 0x3fff
   div bp
   xadd dh,ch
   cmp dl,0x2b
   rcr bp,cl
   shr bx,cl
   nop
   xadd bx,dx
   imul ecx,ecx,0xd18282c9
   imul ebx,edi,0x9627247f
   sar ecx,0x7f
   btr esi,ebp
   clc
   sbb al,0xdd
   shr esi,cl
   ror esi,cl
   cmpxchg ax,dx
   test cl,dl
   setnl bh
   stc
   rcl esi,0x1
   or bh, 0xc0
   and ax ,0x3fff
   div bh
   imul edi,0xcd0ad0fd
   rcl cx,0x1
   rcr ecx,cl
   ror ebp,0x1
   seto al
   rcl ah,0x1
   stc
   rcr ah,0x1
   or ax,dx
   and cl,0xf
   shld ax,bp,cl
   cmp ax,cx
   imul edi
   shrd si,si,1
   movzx ebx,bh
   bsr edx,ebx
   bt si,0xfd
   clc
   sbb dx,bx
   clc
   sbb edi,ebp
   ror dl,cl
   rol dh,cl
   ror ah,0xcf
   bts dx,di
   btc esi,0x7b
   add bp,bx
   test dx,si
   sub edx,esi
   stc
   adc edx,0x59fe15c0
   clc
   rcl si,0x1
   xadd si,dx
   adc al,0xc8
   imul bx
   bts di,ax
   or di,0xa0e7
   or ebx,0x73f3a30f
   shr bl,cl
   xchg edi,esi
   btr bx,bp
   rcr si,0x1
   shr cl,0x1
   shrd eax,ebx,cl
   imul ebp,ebp,0xb1864bff
   dec bh
   clc
   adc dl,ch
   test al,ah
   rcr ax,cl
   or si, 0xc000
   and dx, 0x3fff
   div si
   sub si,di
   clc
   sbb ah,0xb1
   cwde
   sub ebp,esi
   ror ax,0x17
   and cl,0xf
   shrd di,bp,cl
   ror cx,0x1
   clc
   rcr bx,0x1
   stc
   rcl bh,0x1
   mul edx
   mov bx,0x649
   sar ah,cl
   and dx,0xd97e
   cmovng edi,eax
   inc	esi
   shr dl,cl
   rol bp,0x82
   add ebx,0x831b818d
   shl si,0x1
   test ax,0xe1f2
   shld cx,ax,1
   and cl,0xf
   shrd si,cx,cl
   shld esi,eax,1
   bt cx,ax
   bts edx,0x55
   clc
   adc ax,0x691a
   adc cx,ax
   setpe al
   btc bx,bx
   shrd edi,ebx,cl
   bt ecx,0xde
   shr edx,0x34
   add ecx,0xa39b03e
   cmovl ecx,ebp
   sar ebx,0xdb
   shld bp,bp,0xe
   add bl,dh
   xchg bh,bl
   sbb di,di
   shrd di,dx,0x2
   cdq
   shrd bp,cx,0x2
   shl ah,0x1
   add si,0xb593
   setnl bh
   sub bx,cx
   xor dl,0xa9
   cmovc ebp,esi
   setno ch
   rcl al,cl
   xor ax,ax
   sbb cl,0xa0
   and cl,0xf
   shrd si,cx,cl
   shl al,0x1
   imul edx,0xaed39194
   setnc cl
   add di,si
   imul cx
   xchg bx,bp
   sbb bh,dl
   shrd eax,ebx,0xc5
   sar ch,0x6b
   shl dh,cl
   test edi,0x40af4c1b
   imul bx,bp,0xcf17
   ror edi,0xd7
   test ecx,eax
   stc
   sbb bh,0x9e
   imul eax
   and bx,0x98
   lahf
   mov ah,0x8a
   rcr edx,0x1
   rcl bp,cl
   xadd ax,cx
   setbe ah
   shld dx,cx,1
   inc ax
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   shr ax,0x28
   and cl,0xf
   shld si,dx,cl
   sub edi,ebp
   rcl ecx,cl
   add si,0xa54b
   cmovc dx,di
   setl bh
   adc cl,0x7
   shrd ebp,edi,cl
   btc ax,0xff
   add dl,dh
   stc
   sbb di,0xc93b
   and esi,0x13ed02ce
   bt bx,bx
   bt si,dx
   cmp ebp,ebx
   add edi,0x5b581ae4
   add cl,0x68
   sub ch,0x57
   shr bl,cl
   sar si,0x1
   or cl,ch
   rcl ecx,0x1
   imul si,dx,0x9e50
   ror cx,0x1
   dec bl
   stc
   rcr ebx,0x1
   setc cl
   clc
   adc si,si
   cdq
   stc
   adc eax,eax
   stc
   sbb esi,0x47aa86b5
   rol eax,0x1
   movzx ebp,bl
   ror dh,0x1
   inc	al
   stc
   rcl dx,0x1
   stc
   adc di,0xac5e
   adc ecx,ecx
   setnl bh
   rol cx,0x1
   neg bx
   sar edx,0x7b
   xor edx,esi
   imul eax,0x43839cd0
   rcl edi,cl
   cwd
   shr si,0x1
   setnc dh
   shld bx,dx,0x9
   xor dx,0xb900
   shl bh,0xb9
   bt di,0x91
   sbb ax,cx
   sahf
   cmovl eax,ecx
   rol ax,0x28
   xchg esi,ecx
   bts edx,eax
   rcr bl,cl
   imul di,0xbda
   bt bp,dx
   test ch,0x7d
   cmovno ax,cx
   rol ax,0x1
   stc
   rcl si,0x1
   cwd
   mov cx,ax
   shr ebp,cl
   lea si,[ebp]
   rol dx,cl
   test eax,ebx
   cbw
   xor bx,0xacb5
   setl dh
   sar cx,cl
   mov ebx,esi
   ror ecx,0xf0
   sar al,0x1
   cmp cx,0x3c97
   clc
   sbb ecx,edi
   movzx edx,dh
   cmovs ebx,esi
   adc cx,bp
   xchg ax,cx
   sar bx,cl
   rol dx,0x5f
   and cl,0xf
   shrd bx,bp,cl
   cdq
   ror dl,0x1
   cbw
   sbb ch,0xfb
   cmovbe ebp,ecx
   ror bx,0x1
   bswap edx
   cmc
   sar ch,cl
   rol esi,0x1
   shl ah,cl
   xor ah,ch
   cmove bp,cx
   shl edx,0xb2
   and cl,0x82
   clc
   rcl esi,0x1
   cmovno edi,ebx
   ror al,cl
   cmpxchg al,ch
   shld ebp,edi,cl
   shrd bp,si,1
   setne bh
   setno ah
   add bp,0xca98
   bsr ebx,ebx
   shl dh,0x74
   dec dx
   bts ax,ax
   rcl ebx,0x1
   btc bp,0x80
   sar ax,0xf3
   shr eax,0x1
   clc
   sbb bx,di
   cwde
   rol ebp,0x1
   ror dx,0x76
   rol edx,0x1
   rol ecx,0xaa
   sar ebx,0x91
   shl di,0x39
   imul edi
   rcr ebp,0xe2
   sar bl,0x2c
   sub cx,0xe31d
   neg dl
   ror ax,cl
   or edx,0x89ec3b6
   and ebx,0x101fa825
   ror ecx,cl
   xor bx,0xdb51
   stc
   rcr cx,0x1
   and cl,0xf
   shrd ax,bp,cl
   rol ah,cl
   rol bh,0x94
   lea edi,[ebp]
   not edi
   shl cl,0x1
   sbb ebx,0xd90d7f0d
   shr ch,cl
   sub cl,0x10
   shl edi,0x1
   sar cx,0x87
   sub cl,al
   and cl,0xf
   shrd ax,dx,cl
   and di,0x8df
   cmp edi,edi
   cmovno ebx,esi
   setnl cl
   rcr dh,cl
   ror dl,0x1b
   xadd ecx,edi
   sar bx,0x1
   clc
   adc ebp,0x11e342d7
   clc
   adc dx,0xa622
   ror bx,0x14
   shr eax,0x1
   neg bh
   shrd ecx,esi,cl
   mul dl
   test dh,0x37
   bts esi,0xf9
   shr cx,0x1
   sahf
   shl di,0xa2
   shl bp,0x1
   or ebp,0x269833d7
   shr bp,cl
   sar cx,cl
   movsx ebx,dl
   dec ch
   and edi,eax
   cmpxchg di,bx
   lahf
   cmovnbe di,cx
   cwd
   shl bp,0x1
   sar ebx,0x25
   and cx,ax
   cmp esi,esi
   sbb dh,0x31
   stc
   rcr al,0x1
   cmp cl,ch
   adc cl,0xc9
   ror ebx,cl
   add bx,ax
   shrd si,dx,1
   cmovl cx,si
   bt ebp,ebx
   ror ch,0x1
   xadd dl,dh
   bts edi,0xb8
   add di,0x7b36
   rol dx,0x1
   cbw
   btr eax,edi
   shr edi,0x76
   shl ebx,0x1
   and eax,0x8ccdd1b7
   add ax,di
   sub ecx,0xb8ed8d58
   setbe dl
   xor ax,0x916a
   add esi,0x72e74598
   shl bx,cl
   lea eax,[eax]
   sar dh,cl
   add eax,0x48a11acb
   cmovnl dx,bx
   cmp di,0xc07
   bts si,si
   not cx
   cmovnbe cx,ax
   mov ebp,ebp
   mov ax,ax
   bsr eax,edx
   xchg bl,ah
   and bh,0xb8
   cmovpe dx,si
   btc ecx,ecx
   clc
   adc esi,ebx
   bts bp,0xef
   adc si,dx
   cmovng cx,dx
   rcr di,0x69
   and cl,0xf
   shld dx,bx,cl
   mov ah,0xab
   btr si,0x8e
   btr edx,ebp
   and eax,0x27cc8f41
   bt dx,0x5a
   ror bl,cl
   or ah,0xdd
   imul bx
   btc si,cx
   rol bh,0x1
   add cl,0x8c
   shr bx,0x1
   neg dl
   setng ch
   lea eax,[edi+0xaf8f63d5]
   shld di,bp,0x6
   neg ah
   and edx,edi
   stc
   sbb eax,0xd0d590a9
   shrd esi,ebp,0x78
   bswap ebp
   sar cx,0x1
   cwd
   dec di
   cmp bh,bh
   rcl ebx,0x1
   movsx ebx,di
   xchg edx,edi
   mov ch,0x65
   or eax,0xe5c57d7b
   bsf ebx,esi
   and bl,bl
   shr dh,0x1
   sbb ebx,ecx
   ror esi,0x1
   ror dx,0x1b
   shr dh,0x1
   rcl edx,0x1
   and dx,cx
   ror cx,0x5f
   shl cx,0xd
   sar bl,0x9f
   cmpxchg edx,ebp
   sub si,0xca57
   stc
   sbb edi,ecx
   cmp ch,ch
   test edi,0x8df5999a
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0x062a6e9a

 pop gs
 pop edi
 pop esi
 pop ebp
 pop ebx
 ret
         .size   log_size_10_var_001, .-log_size_10_var_001

.globl log_size_10_var_002
         .type   log_size_10_var_002, @function
log_size_10_var_002:
 push ebx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0xb5cf7619
  mov ebx,0xa77db30d
  mov ecx,0x87a277b0
  mov edx,0x431861fd
  mov ebp,0xb966a849
  mov esi,0x610bd23f
  mov edi,0x3a4e282f
   add edx,0x671ff182
   clc
   rcl esi,0x1
   clc
   sbb bp,0x49ef
   ror ch,0x1
   sbb dh,0xa6
   bts ebx,0xb8
   rcr ah,0x1
   cmpxchg si,cx
   sub ch,al
   ror ax,cl
   cmpxchg ch,ah
   btr dx,0x1b
   stc
   adc edi,0xc534a1a8
   cmovnc eax,ebx
   cmovne ax,ax
   imul ax
   cmovc edx,ecx
   clc
   sbb bx,0x3693
   clc
   rcl ecx,0x1
   bts dx,0x9
   shl al,0x4
   test ecx,0x5bf2a24f
   adc ax,si
   rcl bp,cl
   neg ebp
   rcr dx,0x1
   xor ebx,ebp
   setnbe bh
   adc ch,0xd9
   cmovno eax,esi
   rol esi,cl
   and cx,di
   stc
   adc cx,0x7d5c
   inc	ebx
   or dx,0x1a9e
   not si
   clc
   adc ah,0x7c
   test si,ax
   xor bp,0x66f2
   xor si,0x195a
   cmovpe ax,dx
   movzx cx,cl
   bt eax,0x5f
   clc
   adc edx,0xfd1e39d2
   rcl ecx,0x1
   sbb dh,dh
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   not dx
   sub di,0xa670
   or bl, 0xc0
   and ax ,0x3fff
   div bl
   bt bp,si
   clc
   rcr ecx,0x1
   lea ecx,[ebx+edx*4]
   cmovo ebx,ebp
   sar ax,0x8a
   xadd bp,di
   or bx,bx
   rcr dh,0x7c
   shld ecx,edi,cl
   movsx eax,al
   shr dh,cl
   or edi, 0xc0000000
   and edx, 0x3fffffff
   div edi
   imul eax,0xa612a85e
   movzx edx,ax
   clc
   shld ax,bp,1
   setbe ah
   neg al
   movzx ebx,dh
   cmp ebx,eax
   movsx eax,bl
   shld si,dx,0xc
   sar dh,cl
   bt edi,0x31
   shrd ax,di,0x1
   imul bp,bp,0x2576
   clc
   rcr edx,0x1
   rcl ah,cl
   and bx,0x19d7
   rcl cx,0x1
   sar cx,0xae
   movzx edi,cl
   shl bx,0x4b
   cmp ax,0xdef6
   inc	dh
   sbb edi,0x4f40c9bf
   cmovpe eax,ebx
   stc
   rcr dh,0x1
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   shr cx,0x1
   shl ebx,0x7e
   test esi,0xcda9462d
   and ax,0x7632
   shl cx,0x1
   rcl cx,0x36
   test cl,0x3c
   setne bl
   shl ax,0xdf
   ror si,0xf7
   bt edx,ecx
   clc
   sbb eax,0xc29bd359
   cmovs di,di
   sub edi,0x2b9f6611
   clc
   sbb ecx,0x19cedc44
   rol al,0x1
   stc
   adc edi,edi
   and ax,cx
   shr edx,0x7b
   rol ecx,cl
   shr bl,cl
   shr ebp,cl
   bswap eax
   movzx cx,bl
   cmp ebx,0xe3d6fa25
   nop
   test bp,0xed5f
   xor bp,bx
   setne cl
   or bx,0xe045
   imul edi,0x2230ea55
   clc
   adc eax,0xc30dea0e
   btr di,bp
   rcl si,cl
   dec bp
   shl ebp,cl
   or eax, 0xc0000000
   and edx, 0x3fffffff
   div eax
   shl al,0xf8
   or bp,0x8ac1
   xadd dh,al
   imul cx,ax,0x5a76
   inc	ch
   ror dx,0xe
   sar cl,0x1
   shl ecx,0xbb
   or dl,0x47
   rol esi,0x1
   sar dl,cl
   rol esi,cl
   xchg cl,bh
   xadd edx,ebp
   shr edi,0x1
   cmpxchg bx,di
   add edx,ebp
   xchg ah,dh
   btr bp,0xf6
   xor bh,ch
   and cl,0xf
   shld ax,di,cl
   sar di,0x1
   sbb edx,edi
   cmovbe ebp,edi
   shrd esi,edi,cl
   sub dh,dh
   adc dl,0x16
   cmovnl bx,ax
   cmovc ecx,edi
   cmc
   rcr di,cl
   shld ebx,edi,1
   ror al,0x1
   sub si,0xf5c7
   cmovg eax,ebx
   sar eax,cl
   shrd ebx,edi,0x90
   xor edx,ebx
   clc
   adc edx,0x6e571191
   rcr ecx,0x6e
   inc	ah
   sar bh,cl
   ror edi,cl
   clc
   adc bp,di
   movsx esi,dh
   and ecx,eax
   cmovno ebx,edi
   cmovne edi,esi
   cmovo ax,cx
   setpo cl
   stc
   rcl ebp,0x1
   bsr ecx,ebx
   mul ch
   dec ecx
   stc
   adc dh,0x57
   dec di
   shrd si,di,0xe
   mov esi,0x66eb3986
   shr al,0x24
   cmpxchg bh,cl
   stc
   rcl ebp,0x1
   sub dh,dh
   stc
   adc esi,ebx
   add di,cx
   sar si,0x92
   add bx,0xc4ce
   cwd
   clc
   rcl ecx,0x1
   shld di,di,0x0
   lea edx,[edi+ebp*4+0x57]
   mov dh,0x50
   bsr eax,esi
   neg dl
   adc dx,0xa254
   cmovs si,si
   ror edi,cl
   add edx,0x3f619590
   cmovns bp,dx
   shl si,0x1
   cmovc edi,edx
   sahf
   neg cx
   clc
   sbb si,0x8402
   rcr ebp,0x1
   mov ah,al
   mov bx,0x6356
   btc ax,0x2c
   movsx ebp,cl
   btr bp,0x58
   imul edi,ebx,0x83c6647b
   adc ebx,ebp
   bts di,bp
   btr ax,dx
   clc
   adc dl,0xd
   or ax,si
   rcr ebp,0x1
   stc
   rcr ebp,0x1
   sbb bp,di
   and cx,ax
   sbb ax,cx
   rol bx,cl
   bts si,bp
   movzx edi,bl
   sbb eax,0xcf41dd09
   imul dx
   shl bp,0x1
   lea bp,[eax+edx*8+0x203e0f14]
   sar ch,cl
   sahf
   sar si,0x9c
   or di,0xa4eb
   imul ebx,0x2ddd3979
   adc di,bp
   clc
   rcl dx,0x1
   adc bh,ah
   shr ecx,0x1e
   xchg ecx,edi
   ror cl,0xaa
   shl di,cl
   cmpxchg ah,bh
   cmovc ebp,ebx
   setnc dh
   bsr esi,edx
   cmp eax,0x93cee832
   cmovc cx,ax
   not eax
   add edi,edx
   btc esi,ebx
   shr bp,0x1
   rol eax,0x1
   sar dh,0x1
   and dx,bp
   sub al,0x82
   cmovs ecx,ebp
   mov edi,0x18a12676
   sbb cl,dl
   clc
   adc dl,0x57
   xchg bx,ax
   rol bh,cl
   bts bx,di
   clc
   adc esi,ebp
   shl ecx,0x5b
   movzx ecx,bp
   and dh,0x49
   cmpxchg bl,ch
   bswap esi
   ror ebp,0x1
   ror si,0x46
   mov bp,bp
   xadd dl,ch
   stc
   adc dl,bh
   cmovbe ebx,eax
   clc
   adc ebx,0x5c983819
   stc
   adc bx,0x7874
   stc
   adc edx,ebp
   mov edx,ebp
   cmovo ebx,eax
   and bl,ch
   add ax,cx
   shr edi,0x9f
   shl edx,0x1
   clc
   sbb dh,0xe4
   shr dx,0x1
   shr al,0x1
   rol al,0x1
   ror bx,cl
   imul eax,ebp,0xa2f3a47a
   clc
   adc ax,0x4a72
   test dh,0x98
   shld bx,bx,0x1
   shl bh,0x35
   test bh,ch
   cwd
   shld si,ax,0xa
   mul ch
   rcl ecx,cl
   mov ebp,esi
   xor edx,0x370a67f0
   shl cl,0xdd
   nop
   sub edi,0x8cbc56a
   mov dx,cx
   mov bh,0x3
   stc
   sbb al,bl
   clc
   adc bx,dx
   cbw
   and di,0xdbe
   setnl cl
   sar si,0xb3
   shr cx,0x1
   btr eax,0x27
   or bp,0x2bc9
   setnbe dl
   stc
   rcr di,0x1
   adc bh,0xf6
   clc
   adc edx,esi
   ror bh,0x66
   shr edx,cl
   cmp bh,al
   shr cl,0x1
   sbb bl,dh
   clc
   adc ch,0xdc
   clc
   rcr ebx,0x1
   sub di,0x56cb
   and cl,0xf
   shld di,ax,cl
   sub edi,0xd230ffce
   cmovc di,bx
   setpo al
   rcl ch,0x6f
   xchg eax,esi
   mul dl
   rol dl,0x83
   btr edx,edx
   stc
   rcr ebp,0x1
   ror esi,0xa0
   xor dh,ch
   movzx ebx,ch
   and dx,0x3de0
   clc
   sbb ah,0xf5
   shrd si,di,0x6
   mov edi,edi
   mov ebx,0x4f9dedfd
   add dl,0x49
   setns al
   dec dh
   or bl,0x4e
   sub ecx,0xdf984e3e
   sbb ax,di
   movzx dx,cl
   shl ch,0x1
   bt edi,edx
   shr cx,0xdc
   bswap edx
   shl bh,0x66
   shl dx,0x66
   cmpxchg bh,bl
   clc
   sbb dx,dx
   or dx,0xb122
   mul ebp
   rcl al,cl
   sub di,ax
   clc
   rcl bp,0x1
   shrd bp,cx,1
   bsr ecx,ecx
   shrd eax,ebx,cl
   shld bp,si,1
   test esi,0xf779d2ed
   sar edi,cl
   and edx,0x7e13e33d
   xor cx,0x5ae9
   stc
   adc al,0xdc
   adc di,dx
   sar dh,cl
   btc ebp,0xe9
   rcl bx,cl
   rol edi,0x1
   cwd
   sar ax,0x4a
   shr ecx,0x1
   btc si,0xb1
   xor bp,0xd3f3
   setne ch
   clc
   sbb ch,0xef
   btc bx,0xd4
   or ch,dh
   stc
   adc esi,0x91c45e40
   rcl cl,0x6a
   test bl,0xcb
   setns ah
   rcr eax,0xcf
   bt bx,0x12
   add ah,0x3c
   ror cx,0x1
   rcr bp,0x1
   test si,di
   stc
   rcl ebx,0x1
   rcl ch,0xdf
   shr si,0x1
   bsf edx,esi
   cmp bp,0xfd45
   setng ch
   rcr ah,cl
   sub cx,0x9812
   shr esi,0x1
   shl edx,0x1
   lea bx,[esi]
   sahf
   rcl bp,0x67
   or di,bx
   stc
   adc ah,ch
   setc ah
   and di,si
   or bp,bx
   dec si
   cmovl di,cx
   rol ebx,0x1
   clc
   sbb bx,0xf724
   stc
   sbb eax,0x2eeebd4c
   cbw
   sub bl,0x8a
   xor eax,0xbcd86e5e
   setbe ah
   and bx,si
   shr edx,0xb
   imul ax,0x81dd
   sahf
   mov al,0x78
   shld cx,bp,1
   stc
   rcr esi,0x1
   clc
   sbb edi,ecx
   cmovno cx,ax
   movzx ebp,ax
   sets bl
   cmp bp,0x1cf1
   cmovns ebx,ebp
   btr edx,0x93
   or di,si
   xchg al,bh
   shld ecx,esi,0x3f
   cdq
   rol bh,cl
   rol ax,0x1
   bts ebp,esi
   xor edx,esi
   dec ebx
   clc
   adc di,0xc052
   ror bx,0x1
   stc
   adc dl,bh
   imul ebp
   shld edx,edx,cl
   btc ax,0x18
   clc
   adc si,ax
   and dh,dl
   mov cl,cl
   btc bx,ax
   adc ecx,0x4a0972df
   shl eax,0x27
   btc eax,0xec
   rol bx,0x45
   sub ebp,edx
   rcl dx,cl
   cwd
   xor si,0xc5e
   nop
   test cl,0xc4
   nop
   ror bp,0xd8
   sub si,di
   imul cx,0x897c
   test esi,ebp
   shr ebx,0xe9
   ror ax,0xd
   btc eax,ebp
   adc di,0xd463
   xchg bx,ax
   clc
   sbb ebx,0x95906c30
   add edi,0x5117d28a
   test cx,ax
   cmovpe ebx,eax
   bts di,dx
   sar ah,0x1
   bts di,0x8a
   rcl al,0x28
   bswap ebx
   bswap eax
   bt ebp,ebp
   adc ecx,ecx
   setne ch
   btr dx,0x7
   imul cx
   imul edi,0x3af6552
   imul esi,0xb6c95b8d
   rol eax,0x1
   clc
   sbb dl,ch
   shr bl,0xe3
   btc ax,0x50
   sbb bp,bx
   shrd edi,esi,1
   cmovns bx,dx
   or bh,bl
   cmp ecx,0xb136d5
   rcl ax,0xac
   cdq
   rol edx,cl
   sahf
   cmovpe ax,cx
   clc
   sbb cx,0x8377
   bsf ebp,edi
   btr di,0xe8
   bts ebp,esi
   clc
   sbb cl,ch
   and bx,0xb061
   btr ebp,0xb3
   test dh,0x66
   mov dx,bx
   setc cl
   setbe cl
   bt bx,ax
   bt di,bx
   and ebx,ebp
   xadd ecx,ebp
   cmovns ebp,ebp
   rcl ah,0x1
   imul ebp
   stc
   sbb cx,ax
   stc
   adc si,0x2bb5
   cmovbe eax,ebx
   stc
   sbb ebx,0x535e58f5
   cmovns dx,si
   btc bp,di
   rol dl,cl
   btr ebp,0xc5
   bts edx,0x3d
   cmp bh,0x89
   shr ax,cl
   shr ebp,cl
   xchg ebp,eax
   ror cx,cl
   shl ebx,0x11
   rol al,0xd0
   movzx cx,bl
   rol bx,0x1
   mov eax,0x31590880
   clc
   rcr ch,0x1
   xor bh,0xce
   lea cx,[ecx]
   shl ebx,0x1
   and cl,0xf
   shld si,di,cl
   imul al
   ror di,0xf0
   rol eax,0xed
   shr esi,cl
   shr esi,0x1
   stc
   rcl bx,0x1
   sub bh,0xe9
   cmovg dx,dx
   btc ax,0xe1
   cmp al,dh
   sub esi,edx
   cmovnl edx,ebx
   lea edi,[edi+esi*2]
   rol eax,0x1
   and cx,dx
   sbb ebx,ebx
   shld dx,ax,0x3
   cwd
   lea bp,[esi+esi*2+0x7537dac]
   ror edx,0x1
   stc
   sbb ecx,ebp
   add bh,0xe0
   rcr edx,0x1
   clc
   sbb ecx,0xe146c9e6
   bt edi,eax
   stc
   sbb dh,bh
   ror cl,cl
   shl dl,0xcf
   xchg edx,edi
   shrd si,dx,1
   lea bx,[ebx+edx*8+0x672bbf44]
   shr cx,0x1
   bt bp,ax
   adc ax,0xa9a1
   stc
   adc al,0x90
   cmovbe edx,ebp
   shr eax,0x1
   imul bx,cx,0x53a7
   setnc bh
   imul bp,dx,0xebb
   add dl,dl
   mul ah
   shld ecx,esi,0x31
   imul eax
   cmovo si,di
   movzx ebx,cx
   neg cl
   ror edi,0x1
   sbb cx,0x4979
   cmovnl ax,bx
   setpo cl
   movzx di,ch
   cmovnl cx,cx
   seto ah
   shr ebx,cl
   shrd bx,bx,0xb
   xchg dl,bl
   test ah,ch
   shld si,bp,1
   shl eax,0x1
   shl dh,0xf4
   sar bx,0x1
   stc
   adc dx,dx
   mov ax,0x5577
   shl bp,0x11
   test esi,ebp
   imul si,0xa726
   btr edx,edi
   stc
   rcl cx,0x1
   rol esi,0x1
   rcr ax,0x61
   mov eax,0x545efc39
   shr eax,0x1
   seto bl
   clc
   rcl eax,0x1
   neg si
   sets cl
   cmovne bx,bx
   imul edx,0x4ca33a08
   clc
   sbb eax,ecx
   setnc bh
   cmp eax,0x16f72ca1
   clc
   sbb cl,0x8d
   shr cl,0xe
   or esi,esi
   sbb bx,bx
   sbb ah,cl
   dec ch
   test bx,bp
   bt di,ax
   ror bh,0xc3
   shrd bx,cx,0x7
   mul cx
   add si,cx
   btr ebx,ebx
   xor ch,0x5f
   btr ebp,0x9a
   stc
   sbb si,si
   clc
   sbb di,dx
   bt ecx,ecx
   mov al,0xcd
   stc
   rcl dh,0x1
   xor si,ax
   rol di,0x1
   lea esi,[edi+edi*8+0xfc]
   xchg ebx,edx
   or dh,0x74
   sbb esi,edx
   sub bl,0x34
   not ebx
   shr esi,0x24
   imul dx
   stc
   adc edi,ebp
   cmovns ebx,ebp
   sbb di,0x9da3
   shr edi,0xa4
   mov bp,si
   or di,bx
   shr bp,cl
   btc esi,ebx
   ror eax,0x1
   neg dl
   add bp,0x76c8
   shrd ebp,edi,cl
   ror ch,0x1
   cmovnc bp,si
   cmovnc eax,ebx
   ror ebx,cl
   sar ch,cl
   or si, 0xc000
   and dx, 0x3fff
   div si
   or bp, 0xc000
   and dx, 0x3fff
   div bp
   shr cl,cl
   sub dl,al
   mov bp,ax
   sar ah,cl
   ror ah,cl
   sub ch,0xe8
   clc
   adc dl,ch
   shrd dx,bp,0x7
   shl dx,cl
   imul edi,esi,0xb7078515
   cmp ah,0x81
   or eax,ebx
   sete bl
   setpe al
   ror cl,0x1
   imul dx,0xe414
   bts bx,0xf2
   btc ecx,0x82
   adc bp,0x5e82
   clc
   adc ah,ah
   clc
   adc bh,0x5a
   shr cx,0x12
   imul di,bx,0x3dc5
   sar dl,0x1
   and eax,0xbc610570
   cmovnbe ecx,edi
   ror al,0x1
   ror ebx,0x48
   rol ebx,0x53
   cmp ax,dx
   btc si,cx
   btc cx,0x66
   ror si,cl
   rol dl,cl
   xchg cx,cx
   mul cx
   ror cx,0x1
   and ch,0x57
   clc
   rcr edx,0x1
   test ecx,eax
   sub cx,si
   setl bl
   or bh, 0xc0
   and ax ,0x3fff
   div bh
   movzx eax,ax
   not bh
   btr ebx,edi
   sbb ax,di
   rcl bl,0x45
   add dx,0x2698
   cmovnbe ebx,esi
   imul di,0x4e0e
   sub ah,0x74
   clc
   rcl si,0x1
   and cl,0xf
   shrd bp,dx,cl
   inc si
   neg ch
   add ch,0x9c
   xor si,0xa31d
   xadd dh,bl
   clc
   sbb di,0x83c2
   rcl esi,0x7a
   mul bp
   lea si,[ecx+0x43]
   cmp dh,dh
   sub dl,bh
   rcr bl,cl
   shr ax,0x1
   bt cx,cx
   rol esi,cl
   cwde
   add ah,0xa1
   xadd bh,cl
   cmovo edx,edx
   xchg eax,edi
   cmovs dx,si
   setg al
   xchg di,ax
   shld ebx,ebx,1
   btr bp,dx
   shld ebx,ecx,cl
   imul dl
   sub bl,bh
   and ah,al
   stc
   sbb bl,ah
   btr edi,0xb7
   rcr dh,cl
   imul cx,0xda06
   imul bx,0x6941
   and dh,cl
   mov di,di
   cwd
   lahf
   shrd bx,dx,0x6
   rol dx,0xc4
   rol di,0x1
   seto dl
   shl dx,0xeb
   shrd ebp,ebx,cl
   inc	eax
   ror cl,cl
   and bl,0x28
   shr dx,0x1
   clc
   sbb al,0xf0
   rcl bl,cl
   shr bx,0x18
   lea di,[eax+ecx*1+0x9d]
   imul edx,edi,0xfe968a03
   or ebx,0x3a3b16d2
   imul ax,dx,0x4799
   stc
   sbb ch,cl
   rol cx,0xb5
   add ebp,eax
   clc
   rcl dl,0x1
   rcl eax,0x31
   or ch,dl
   seto dh
   neg dh
   setns bl
   adc ch,0x6a
   shrd ecx,edx,0x1
   and dl,dl
   sar dx,cl
   and bx,ax
   shld eax,edi,0x65
   clc
   shld ax,si,1
   lea edx,[ecx+ebx*2+0xaf]
   mul esi
   seto ch
   clc
   sbb esi,0x411d9a5f
   cmovo ebx,edx
   clc
   adc ch,ah
   imul edi,esi,0xf2cb304a
   xchg ecx,ecx
   shrd dx,dx,1
   not ch
   movzx ebx,si
   shl bh,0x1
   shr eax,0x73
   sar eax,0xc8
   btr esi,edx
   clc
   rcl esi,0x1
   stc
   adc ebx,edx
   dec cx
   clc
   adc cx,cx
   setns dl
   stc
   sbb si,dx
   cmp si,0x885a
   cmovnbe bp,si
   sbb cl,0x5d
   mul dx
   stc
   rcr esi,0x1
   shld bx,si,1
   add ecx,esi
   shl edx,0x87
   bsf ebp,ecx
   and dx,ax
   and eax,eax
   cmovbe bp,ax
   ror ebx,0xd1
   sar edx,0x1
   mul bx
   sar bh,cl
   lea bx,[edi+esi*8+0xd9c5d0ee]
   bts ax,bp
   shr ax,0x1
   stc
   rcr eax,0x1
   inc bx
   rcl edi,0x1
   movsx eax,ah
   clc
   rcl bl,0x1
   sahf
   shl ecx,0xa3
   dec bx
   cmovns ebp,edx
   cmovpo edi,ecx
   shl ax,0x1
   xchg eax,edx
   btc cx,0x5d
   rol edx,0x8c
   inc cx
   shld ebp,esi,1
   stc
   adc edi,0xd9beaf4a
   shl edi,0x1
   sub bp,0x178c
   or ecx,edx
   or di,0xc01e
   bsr esi,esi
   cmove bx,bx
   and cl,0xf
   shrd dx,cx,cl
   btc bp,ax
   bswap edx
   xadd al,cl
   clc
   adc bx,0x198b
   clc
   bsr ebp,esi
   cmp ah,0x17
   shl ch,0xc9
   xor di,0x190e
   clc
   rcr si,0x1
   shr ch,cl
   nop
   rol al,0xea
   shr ah,0x87
   or ebx, 0xc0000000
   and edx, 0x3fffffff
   div ebx
   btc esi,0x21
   clc
   rcl ebx,0x1
   sbb di,di
   ror di,0x51
   shld dx,dx,1
   ror dl,cl
   not dh
   cmpxchg ecx,ecx
   sbb dx,0x7e0
   cmovbe ax,cx
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0x7d3ed738

 pop gs
 pop edi
 pop esi
 pop ebp
 pop ebx
 ret
         .size   log_size_10_var_002, .-log_size_10_var_002

.globl log_size_10_var_003
         .type   log_size_10_var_003, @function
log_size_10_var_003:
 push ebx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0x89034f7c
  mov ebx,0xd16cb6fc
  mov ecx,0x556e33ad
  mov edx,0x1838647a
  mov ebp,0x2c96cf55
  mov esi,0x81b0f0be
  mov edi,0x968c36c
   movzx edi,cl
   rol edi,cl
   cmp ebp,0xf87e4ef0
   cmp cx,ax
   clc
   sbb bp,0x1fa7
   shr ch,0x2a
   shr bl,0xb0
   sar al,cl
   inc di
   neg eax
   rcr bx,cl
   add dx,0x8d3a
   and ebx,0x8a773b3d
   rcl ax,0x1
   xor di,0x3bb
   cmp ax,0xa17d
   btc dx,0xe7
   imul eax,eax,0x7a3ae8da
   btr ax,0x2b
   not si
   sar ebx,0x57
   dec bp
   shl dx,0x1
   bswap eax
   shld edi,ebp,cl
   rol ah,cl
   inc	dl
   imul esi
   sar ebx,0x6e
   shrd edi,ebp,0x3
   cmp cl,cl
   add ebp,0xab44413b
   btc ax,0xc4
   not edx
   imul bx,0x22cf
   setno dh
   shld ebp,edi,0xeb
   xadd ecx,edi
   rcr ch,0xb
   dec bh
   mov al,0x9
   xor cl,0x2c
   neg edx
   cmovbe dx,bx
   seto bl
   sub si,0x70d2
   inc	dh
   bswap edx
   cmovng ax,di
   shrd ebx,ebp,cl
   btr cx,dx
   sar ebp,0x1
   add bx,0xec09
   imul edx,0xd73ac44a
   or bl, 0xc0
   and ax ,0x3fff
   div bl
   shld di,di,0x4
   bt edi,0xa9
   test ch,0x3e
   stc
   rcr bl,0x1
   cmpxchg edi,esi
   shl di,0xab
   imul dh
   imul al
   or bx,bx
   bt edi,ebp
   and cx,0xc686
   cmovo bp,cx
   sub ch,cl
   sbb cl,cl
   cmovo bx,di
   imul edi,0xe0d8894c
   shrd edi,ebx,1
   stc
   sbb al,al
   movzx ecx,ax
   stc
   adc cx,ax
   cwde
   cmovnbe edx,edx
   sar ax,0xa3
   or al,0x6d
   imul eax,0xde847dae
   shr dh,0x1
   or bl,0xd1
   and ax,0x9785
   cmp dh,bl
   cmp edx,0xd9a03253
   xor ebx,0x7c8ab1de
   ror si,0x1
   cwde
   xadd dl,dl
   stc
   rcr esi,0x1
   shrd esi,ecx,1
   xadd al,cl
   xchg ebp,edx
   sbb ah,0x4b
   rcl esi,cl
   sar ah,0x1
   sub eax,0xfd8b56f6
   shl cl,0xb
   sub dl,0x74
   sar cl,0x5e
   bts esi,0xd7
   rol bh,0x1
   rol dl,0x1
   shr di,0x1
   shr edi,0xd7
   imul ebx,0x48765317
   bt bx,0x2b
   rcl bx,cl
   add ebp,edx
   cmovs ecx,esi
   and ecx,edx
   xor dx,0xdd54
   cwd
   or esi,edx
   test cl,ah
   add al,cl
   stc
   adc bp,0x307a
   cmc
   stc
   rcl bl,0x1
   cmovc dx,dx
   clc
   rcr dx,0x1
   cmp dh,bh
   cmp bp,bx
   clc
   rcr ax,0x1
   movsx ebp,al
   sbb cx,dx
   inc	ah
   sbb esi,esi
   cmovpo edi,esi
   cmovng ax,dx
   btc eax,0xaa
   sar ebx,0x70
   shrd ebp,edi,cl
   test edi,esi
   cmovnbe cx,cx
   stc
   sbb bh,ah
   rcr cx,0x1
   rcl bl,cl
   sar edi,cl
   mul ecx
   rcr cx,0x79
   cmp bh,0x70
   shr si,0x1
   sub eax,0xdc7718d
   stc
   sbb si,0x822e
   xadd dl,dl
   shl bp,cl
   cwd
   xor ebx,ebx
   ror ax,0x1
   clc
   sbb edi,edi
   cmovno ebx,edx
   dec si
   imul bx
   nop
   setc bh
   cdq
   ror dh,cl
   shr cl,0x1
   cmpxchg bp,ax
   clc
   adc ax,0x12be
   shr dh,0x1
   stc
   rcl bh,0x1
   add ebx,ebx
   cmovng ebp,edi
   sar ax,0xed
   or bx,bx
   rcl cx,cl
   neg edx
   shr ax,0x1
   shr cx,0x1
   ror cx,0x75
   sar cl,0x1
   rol ah,cl
   sahf
   or edx,ebp
   cmovl bp,ax
   clc
   rcl dh,0x1
   xadd ecx,edi
   or edx,0x9dbbee71
   rcl dh,cl
   add ch,0xea
   shl edi,0x1
   cmp bh,0xba
   stc
   adc ecx,0x57d15366
   shl ecx,0x1
   movsx ebp,dl
   clc
   rcr eax,0x1
   adc edx,0x3a18a492
   test bx,cx
   sar si,0x1
   mov dl,cl
   stc
   rcr ebx,0x1
   cmovnc si,di
   stc
   adc bp,0x7dce
   dec ebx
   ror bl,cl
   cwde
   lea bp,[edi]
   cmpxchg ebx,eax
   rol bx,cl
   test edi,ebp
   setpo bl
   rol bl,cl
   bt ebp,0x89
   btr edx,0x70
   cwd
   test bx,0x18c0
   and bx,cx
   cmovns si,si
   cmovng cx,ax
   inc bx
   cmovns di,bx
   sbb dh,dh
   xor bl,bh
   bt eax,0x6c
   cwd
   sbb dl,0x52
   and ch,bl
   clc
   adc ebx,eax
   cbw
   stc
   sbb edx,0x12784839
   shl dx,0x1
   add cx,cx
   clc
   sbb dx,0x759f
   stc
   rcr bx,0x1
   movsx dx,ch
   or ecx, 0xc0000000
   and edx, 0x3fffffff
   div ecx
   shr dh,0x1
   shr edx,cl
   shl ch,cl
   lea ebp,[edx+esi*1+0x70]
   cdq
   shl eax,0x1
   mov bh,al
   clc
   adc edx,0x19aaa326
   rcl ebx,0xf5
   or ebp,eax
   stc
   sbb bl,bl
   sub al,0xd
   imul bp
   xadd di,dx
   shr dx,0x1
   setnc dl
   shl dx,0x1
   bt bp,0x1a
   movzx esi,dx
   xadd bp,di
   and al,0xd3
   clc
   sbb dx,0x9af2
   mov edi,0x69e3f7f6
   imul edx
   rcr ebp,0x1
   rol bl,0x72
   sub bl,dl
   dec ebp
   seto bl
   rcl al,cl
   rol cl,0x1
   cmovno esi,ecx
   cmovnc bp,bx
   clc
   adc edi,ecx
   sbb dx,dx
   clc
   rcl dx,0x1
   ror edx,cl
   inc cx
   xor cx,bx
   setpe bh
   shrd cx,ax,1
   stc
   adc cx,dx
   cmovbe edi,eax
   btr esi,eax
   shl di,0xd6
   shr cx,0x52
   add ebp,edi
   sar bl,0xa2
   cmp bl,0xab
   neg edi
   sbb ebx,0x8de9263c
   cmp bh,0x66
   or dl, 0xc0
   and ax ,0x3fff
   div dl
   or ch,0x15
   or dl,cl
   cmovnl edi,ebp
   bt ax,si
   rol bx,cl
   rol ah,0x1
   rcl cx,cl
   not dh
   cmp edi,0xd7b6210c
   setg ah
   shrd si,bx,1
   sar cl,0x1
   clc
   adc edi,0xf13b0204
   dec ebp
   cmpxchg edi,ebp
   rcr esi,0x1
   clc
   rcr edi,0x1
   nop
   stc
   sbb dl,0x6c
   test edi,ebx
   shr bx,0xaf
   sar cl,0x1
   rcl ax,0x5b
   xchg dl,dh
   imul cl
   sub edi,ebx
   xor ecx,edx
   test cx,0x3a6
   stc
   adc dl,dh
   mul bx
   sub si,0x787c
   clc
   rcr di,0x1
   sbb bh,0x76
   dec bh
   sub eax,edx
   shld ecx,ebp,cl
   movzx eax,si
   mul al
   sub esi,0x344cb948
   cmovnc ebx,edx
   cmovbe ecx,esi
   clc
   rcl ebp,0x1
   cmovc edx,edx
   xor di,dx
   xor al,0x6d
   test di,dx
   clc
   rcr dx,0x1
   shr bh,0x71
   shld si,si,1
   btc di,di
   imul si
   cmovno cx,dx
   btc eax,edi
   adc ecx,ecx
   stc
   adc ebp,0xd53fb0b5
   cmovbe ax,bx
   mul edx
   stc
   sbb al,ah
   setbe al
   bswap eax
   mov bx,0xe4fb
   btr ebp,0x9d
   neg ch
   or dx,dx
   inc cx
   rol esi,0x1
   imul si,bp,0x333a
   cmpxchg ebx,eax
   cmovnc edi,esi
   or cl,dl
   inc bp
   shr ah,0x1
   ror bh,0x1
   sar al,cl
   btr bp,0x13
   shrd ebp,esi,0x6c
   bsr eax,ebx
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   sar di,cl
   shld ebp,ebx,0x81
   clc
   stc
   adc ecx,0x6901a0e0
   cmp si,0xf153
   cbw
   mul al
   shrd bp,si,1
   cmovpo si,di
   rcl edx,0x5f
   shld bx,dx,0x6
   bsf ecx,ecx
   xchg eax,esi
   or al,cl
   setnbe ah
   setnc dh
   stc
   sbb bl,al
   cmove ebx,eax
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   movzx eax,di
   cmpxchg ebx,esi
   sar esi,cl
   mul ebp
   sar ax,0x1
   shl dx,cl
   shld si,si,0x7
   ror dh,0xe3
   not ah
   ror edi,cl
   cmp bh,0xc8
   bts bp,0x8b
   test edx,eax
   test ax,di
   bts eax,edi
   setne dh
   stc
   adc al,0x5a
   clc
   rcl edx,0x1
   not ebx
   rcr ecx,0x7b
   bt eax,0x5b
   bsr ebx,eax
   shl cl,0x1
   mov cx,bp
   sar dx,0x1
   clc
   rcl al,0x1
   stc
   sbb ebp,0x2c050752
   cmovne bp,dx
   shr al,0x1
   or ax,bx
   setg cl
   ror cl,cl
   shrd ebx,eax,cl
   ror si,0xe
   shrd ebp,ebp,cl
   ror ebx,0xd6
   cmp ebx,edi
   cmovbe ax,dx
   shld eax,ebx,1
   setnbe dl
   adc bp,bp
   stc
   adc ax,0x2b27
   shld eax,ebx,1
   shl dx,0x1
   sub si,0x4442
   cmovc ecx,edi
   ror al,0xa1
   shr ebp,0xff
   and cl,0xf
   shld cx,ax,cl
   sar di,0x1
   xadd edi,ebp
   shr al,0x1
   add dx,0x9a1a
   cmovo dx,dx
   not ax
   bts ax,bp
   movzx ebx,bl
   btr ebx,eax
   sar ecx,0xc7
   shl eax,0x1
   rcr esi,0x9a
   sar eax,cl
   imul dx
   clc
   sbb cx,ax
   setc bl
   shr dh,0x1
   xor bh,cl
   seto dh
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   sar si,0x1
   add di,ax
   bt bp,0x24
   imul esi
   inc	ebx
   mul bx
   sub edi,0xed8c9286
   not cx
   xadd bx,si
   test edi,edx
   sar bp,0x6c
   lea ebx,[ecx+esi*1]
   test dx,0x87b2
   btr ebp,ecx
   mov cl,0x63
   or dh,cl
   nop
   clc
   adc bx,0x8801
   or ebp,0xcfb9f595
   sbb dx,bx
   lea ax,[edx]
   btr edx,esi
   cmovbe edx,ecx
   add edx,0x5a5ff4bb
   cmovo cx,dx
   clc
   sbb si,ax
   clc
   sbb si,0x952d
   rcl esi,0x21
   cmp dl,bh
   rcl edx,cl
   ror al,0xe2
   sar ah,0xb1
   lea ebx,[ebx+edi*2+0x221f8e58]
   cmp esi,0xe37b6e03
   shr cl,0x1
   shr ebx,cl
   bts ebp,0x19
   cwd
   sar ecx,0xa0
   cmp edx,esi
   movsx bp,ch
   nop
   shr ch,0xbc
   lea ebx,[ecx]
   and esi,0xd5c3b2b4
   cmovnc dx,bp
   ror ecx,cl
   test ah,ah
   cmovc edi,ebp
   shl bx,0x4d
   inc si
   mov bp,0xb827
   shr bh,cl
   bts ebx,esi
   cmp bp,di
   cmovnc edi,ebx
   clc
   rcr si,0x1
   sar edi,cl
   ror ax,0x26
   shr edi,cl
   movsx ax,ah
   shl eax,0x1
   stc
   adc bl,0xbe
   imul ebx,0x75b5e275
   or dh, 0xc0
   and ax ,0x3fff
   div dh
   bsf edx,ebp
   shl ecx,cl
   sar ebx,0xda
   rol ch,0x4f
   or dl,ah
   sar dl,cl
   shl eax,0x1
   clc
   sbb bp,0x1c10
   bt edx,0xe4
   cmovnc bp,di
   sub bx,ax
   btr ebp,0x13
   xchg bh,al
   stc
   sbb bl,0xac
   and cl,0x86
   shr ecx,cl
   shld ax,si,0x5
   sar ebp,0x1
   sar cx,0x1
   ror dx,0xc1
   shl eax,0x1
   cmovnc cx,di
   not bp
   btr bp,dx
   rol cx,cl
   clc
   and si,0x4b79
   cmovnl bx,cx
   adc bx,bp
   test si,dx
   sets al
   and eax,ebp
   btr di,0x2b
   cmc
   mov si,0xd7ec
   add cx,di
   sar ah,0xf2
   shrd edx,edi,0xec
   sar bp,0x1
   or ebx,0xcc2e1b2d
   bt edx,edx
   rol cx,cl
   shld eax,esi,0xb2
   shl bh,0x6d
   shrd ecx,edi,cl
   shld ecx,ecx,1
   ror bl,0xa
   shl al,cl
   rol edx,0x1
   xadd si,ax
   sar bp,cl
   add cl,bl
   stc
   rcr si,0x1
   clc
   sbb bp,0xb1f4
   clc
   sbb bx,cx
   setne bl
   rcl di,cl
   bts di,0xf1
   setnc ch
   ror ax,cl
   movsx eax,ah
   shl cl,cl
   imul edx
   mov dx,0xb0c
   sar ecx,cl
   sar di,cl
   bt dx,cx
   inc dx
   cdq
   neg si
   cmovs ecx,eax
   bsf esi,ecx
   shl bl,0xa1
   sub esi,edi
   test edx,eax
   setc cl
   rol eax,cl
   sub bp,di
   sub edx,0x9dc179ef
   shld eax,ebx,0xe9
   shl si,0x1
   shrd cx,bp,0x7
   ror si,0x1
   cmovo si,di
   and cl,0xf
   shld dx,cx,cl
   cmpxchg ebx,esi
   btr edi,0x61
   shld cx,bx,1
   imul edx
   shr bl,cl
   ror dh,cl
   btr dx,0x62
   xadd ax,cx
   sub al,0x90
   shl edi,0x1
   rcl cl,0xfb
   xadd edi,eax
   cmovs si,bp
   stc
   rcr di,0x1
   setc bl
   sbb eax,edx
   cwde
   clc
   adc bl,ch
   setnbe ah
   cmovs si,bp
   bt cx,dx
   imul bp
   cmc
   sar ch,0x53
   shrd bp,dx,1
   stc
   sbb si,bx
   shr si,0xeb
   shr esi,0x2d
   rol al,cl
   ror ebx,0xff
   sub edi,edi
   shld si,bp,0x5
   or dl,0xa0
   imul esi,edx,0xfec1086b
   btr ecx,eax
   rol si,0x5d
   dec esi
   sar dl,0x1
   sar ax,cl
   mov ecx,0x83c31941
   or ah,0x2f
   clc
   rcr edi,0x1
   shl ah,cl
   clc
   cmp ch,dh
   setne dl
   cmovbe esi,ebp
   or dl, 0xc0
   and ax ,0x3fff
   div dl
   inc	eax
   sar dx,0x7b
   not bh
   mul ecx
   bt dx,0xa
   bts si,bp
   and cl,0xf
   shld si,ax,cl
   btr si,0xa
   clc
   sbb si,si
   shl dx,0x28
   shl edx,cl
   lea edi,[ecx]
   and cl,0xf
   shrd si,ax,cl
   add cl,bl
   shl al,0x1
   sub ebp,eax
   cmovg dx,bx
   sets bh
   xor dh,ah
   imul edi,ebx,0xd87bd4e9
   clc
   sbb ebp,0x2de19d6
   clc
   sbb al,0x80
   bt ebx,esi
   shld ebx,ebx,1
   and cl,0xf
   shld bx,dx,cl
   btr dx,0xc9
   stc
   adc di,cx
   stc
   sbb ah,ah
   add al,ah
   btr edx,0x0
   ror edi,0x1
   clc
   sbb dh,dh
   ror dx,cl
   shld bp,dx,0x6
   shl ebp,0x1
   btr esi,0x67
   sbb ebp,0xcf769979
   rcl ebx,0x1
   shld dx,di,0x7
   imul si
   btc esi,ebx
   imul edi,0x3eb793d3
   sahf
   btr di,ax
   shrd ebx,ebp,0x5c
   or bp,0xac62
   cmovpo di,bp
   adc ebx,0xede0ad04
   shrd ebp,esi,cl
   xchg bh,dl
   and di,si
   bt eax,ebx
   add bp,bp
   cmovs ebx,esi
   setne bh
   xor ah,0x64
   ror dx,0xf7
   shl dl,0x1
   rol ch,0x1
   test dh,0xc2
   rol bp,0x45
   sub bp,0xbe1b
   and bl,0x89
   cmovno esi,edx
   cmove eax,ebp
   cmp ax,si
   clc
   sbb bp,0x2836
   cmovc ecx,eax
   stc
   sbb cl,ah
   sbb ch,ch
   stc
   sbb ah,0xe5
   clc
   sbb edx,edi
   adc ebp,0x68c4d3c5
   test ebp,ebp
   shrd cx,bp,0xd
   add ch,0x86
   shr bp,0x1
   dec dh
   cmovg edx,ecx
   sbb cx,0x6d32
   sbb al,al
   xor ch,cl
   or ecx,0x84f0b139
   btr ebx,ebx
   test cx,cx
   add bp,dx
   shrd di,bx,1
   clc
   shr al,0x1
   sbb ebp,0x66920382
   bts ebp,0xfd
   btr ebp,edi
   xor bl,dh
   neg edi
   shr cl,cl
   and ebx,ebp
   rol ch,0x50
   sar bx,cl
   shld di,di,0x1
   btc ebp,edi
   rcl di,0x2
   dec dx
   setne al
   bt ebx,ebx
   adc si,ax
   shr dx,0xb2
   bt dx,dx
   add bx,0x69a3
   and cl,0xf
   shld bp,cx,cl
   cwde
   sar esi,0x65
   nop
   clc
   shl cl,0x1
   stc
   adc ecx,ecx
   clc
   sbb ecx,edx
   cmovng edx,esi
   stc
   adc al,0xbd
   movzx ecx,dl
   shld bp,bp,0x8
   shr esi,cl
   and cl,0xf
   shld cx,bp,cl
   rol al,0x1
   rol ch,0x1
   neg al
   add di,bp
   stc
   sbb ebx,0x5de1006f
   rcr edi,0x1
   rcl esi,0x1
   sar dh,0x1
   clc
   sbb bp,dx
   stc
   rcl ch,0x1
   movsx eax,bh
   sar edi,cl
   and cl,0x22
   sets bh
   movzx dx,bl
   btr bp,0xbc
   lea eax,[esi+eax*1+0xfeac9db3]
   xor ch,ah
   mov eax,edx
   cwd
   cmovnl ebp,esi
   rol ecx,0xeb
   sub ecx,0x3c13eb1d
   cmovo edi,eax
   setnbe ch
   rcl ch,0x82
   btc di,0xa6
   rcr eax,0x1
   mov dx,bp
   bswap ecx
   sar si,0x3e
   xor dl,0x54
   mul ebp
   rol ah,0x31
   or cl,dl
   cmovno ecx,ecx
   rol bx,0x5a
   xadd si,cx
   bts ebx,ebp
   stc
   sbb bx,dx
   mov edx,esi
   rol cx,0x1
   bt eax,0xdd
   stc
   sbb dl,0x42
   bts cx,0x2c
   sbb edi,esi
   clc
   adc ecx,ebp
   rcr ecx,0x1
   mul ch
   inc	edi
   rcl ch,0x1
   clc
   mov bl,ch
   stc
   sbb eax,0x4e58bbc4
   cmovns edx,edx
   cmove esi,ebx
   cmovng edx,ebp
   cmovg di,di
   and bh,ch
   shr ebx,0xb8
   bsf esi,edx
   shr edx,0x1
   bts bp,bp
   adc dx,cx
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   and cl,0xf
   shld di,cx,cl
   or eax,edx
   and eax,eax
   cmovl cx,si
   movzx eax,dl
   shl dl,cl
   mov eax,0x3a76441f
   cbw
   sub dh,0x84
   dec edx
   cmove di,cx
   bsr esi,esi
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   sub dl,0xb4
   cmovnc cx,si
   cmovnl ax,bp
   cmovnc bp,bx
   shr dl,0x4a
   btr si,cx
   and ch,dl
   sar dh,cl
   shl cx,cl
   shr dl,0x1
   clc
   adc ebp,ecx
   add bx,0xab86
   adc ebx,edi
   ror ax,cl
   btc bp,di
   dec bp
   rcl dl,cl
   shr ebx,0x1
   clc
   sbb si,0x89b
   shl al,cl
   xchg ah,ah
   add di,0x327
   cmovne cx,dx
   shl edx,0x1
   add si,bx
   movsx ecx,cx
   btr dx,0xed
   sahf
   imul dx,si,0xb3d7
   imul eax
   shr ax,0x4b
   or bl,0x7c
   stc
   rcl al,0x1
   rol edx,0x1
   stc
   rcl si,0x1
   bsf eax,ecx
   add eax,0xa2673c71
   bts bp,0x2b
   ror cx,0x10
   and ax,0xafac
   stc
   rcr dx,0x1
   bt ax,0xe3
   shr ch,cl
   imul bl
   shr esi,0x1
   rcl bx,cl
   rol ebp,0x88
   movzx dx,ch
   imul bp
   sar al,cl
   sub ax,dx
   setng bh
   cmovnl edx,eax
   shrd si,bp,0x2
   btc ebp,0x8b
   or dh, 0xc0
   and ax ,0x3fff
   div dh
   test edx,0xd56e8b41
   dec ebp
   or bh,0xd3
   adc si,ax
   shr bh,0x9d
   sar bx,cl
   cbw
   sar cl,cl
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0xdf40f43c

 pop gs
 pop edi
 pop esi
 pop ebp
 pop ebx
 ret
         .size   log_size_10_var_003, .-log_size_10_var_003

.globl log_size_10_var_004
         .type   log_size_10_var_004, @function
log_size_10_var_004:
 push ebx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0xdd12072e
  mov ebx,0xab388c31
  mov ecx,0xb1c804ac
  mov edx,0x61dd4397
  mov ebp,0x27d78ee0
  mov esi,0x643318fe
  mov edi,0x80ff433b
   bt bp,0x96
   sub ax,0x489b
   cmove si,di
   btr dx,0xb6
   shr cl,0x1
   neg cl
   cmovns edx,ebp
   stc
   adc edx,0x5e71b193
   btc ecx,ecx
   cmp ecx,0xd72e593c
   cmovpo ebx,eax
   clc
   adc bx,0x1ba1
   clc
   adc di,dx
   neg edi
   cmovs ebx,eax
   sbb bx,0xc943
   imul bl
   sar esi,0x1
   stc
   sbb ch,ch
   stc
   adc di,0x9260
   shr edi,0x1
   test dh,ch
   not dx
   rol dl,cl
   shrd ebx,ecx,1
   imul edx,0x448d707e
   or bh,cl
   bts bp,0x1
   clc
   adc ch,0x3b
   sub eax,0xdc463764
   sahf
   shr edx,cl
   xadd di,ax
   btr ebp,esi
   bts cx,dx
   cmovne ebp,esi
   add bp,0xa15
   stc
   rcl ax,0x1
   shl ch,0x24
   cbw
   or ah,0x4d
   rcl esi,0x97
   imul eax
   xadd edx,eax
   sar ebp,0x1
   sar cx,cl
   ror ch,0x25
   xor ebp,edx
   sub esi,0x71d0bcd7
   sbb ebp,0x5fc90395
   setnbe dh
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   btc cx,ax
   imul bx,0xd8fa
   btr bp,bp
   shr ch,cl
   sar ebp,0x1
   shld ebx,ecx,cl
   sar edi,0x1
   clc
   sbb al,bl
   inc	al
   shl ah,0x1
   shr dl,cl
   movzx ecx,di
   shld ebp,esi,1
   setpe al
   sub cl,0x6a
   stc
   sbb si,ax
   cbw
   rcr dl,0x25
   sar cl,0x1
   ror ah,cl
   cmpxchg ebx,ebx
   sbb ah,0xea
   add cl,0xab
   or dh,0x55
   cmovnl di,bx
   cmovs ebx,ebx
   dec bp
   imul eax
   inc	eax
   stc
   adc dl,bl
   setno ah
   mov eax,edx
   cwd
   rcl di,cl
   xor edi,0x39ee1324
   lea si,[esi+esi*2]
   cmovne ebx,eax
   and edi,0x3dbdeaef
   cmpxchg di,si
   shr si,0x1
   cmp dx,0xa45
   adc bx,0xd302
   and cl,0xf
   shrd di,ax,cl
   or edi,0x47ec038
   rol al,0x8
   mov cx,bx
   cmp esi,0x9e2f1f19
   sar cx,0x1
   btc ax,di
   xor ebx,ebp
   cmovs cx,ax
   stc
   rcl ecx,0x1
   rol si,0x1
   rcl edi,0x1
   movzx di,dh
   movsx bx,al
   sbb ah,bh
   rcr bl,cl
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   and ah,0x16
   ror dh,0xf
   imul cx,ax,0xc158
   shld edi,eax,0x6c
   shr ebx,cl
   movzx ebp,dx
   sar dh,cl
   xchg bh,dl
   rol ax,cl
   btr cx,dx
   and eax,ecx
   clc
   sbb bh,0x95
   and al,cl
   sar esi,cl
   movzx bp,bh
   cbw
   shrd cx,si,0x9
   add cx,0x88b5
   clc
   rcr bl,0x1
   dec ebx
   setc dl
   cwd
   mov dl,al
   shr bp,cl
   bts dx,ax
   shr si,cl
   shld ecx,ebp,cl
   bts cx,0xfa
   imul cx
   rol ecx,cl
   mov si,0x172b
   rol si,cl
   cbw
   sub dh,0xcc
   cwde
   cmovnl edi,ebx
   cmovnc cx,si
   cmovno di,cx
   cwd
   stc
   adc bp,bx
   shl ecx,cl
   ror si,0x1
   mov cl,0xb8
   add ecx,0x7a92ba98
   add bp,bx
   rcr ebx,0x21
   cwde
   sar cl,0x1
   movzx ax,ch
   mul ebx
   cmp cx,si
   sbb dl,dh
   clc
   adc bx,dx
   setbe ch
   cmovns edx,ebp
   stc
   adc ebp,0xac86e25a
   shrd ebp,esi,1
   or si,0x7d9d
   dec edi
   shr eax,0x2b
   mov al,bl
   imul ax,bx,0xe519
   stc
   sbb bh,0xc5
   stc
   rcr ebp,0x1
   xor bp,di
   add ax,0x3f86
   test bh,bh
   dec eax
   or dx,dx
   sar dl,cl
   bsr edi,esi
   ror bl,0x4b
   xadd bh,bl
   cmovbe eax,eax
   setnc cl
   sar ch,0x82
   mul ebp
   or si,0x3ec9
   not ecx
   ror bp,cl
   add bh,0x8
   stc
   sbb bp,bx
   sbb ax,0x30ec
   and cl,0xf
   shld bp,si,cl
   nop
   xor cx,0xb39f
   cmp al,0x84
   setl dh
   setpe ch
   and bl,bh
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   rol dx,0x1
   clc
   rcl ch,0x1
   rol ebx,cl
   shrd edx,edx,0x44
   bt bp,ax
   btc cx,bx
   imul cl
   cmovo ecx,ebx
   bt ebp,edx
   clc
   or ecx, 0xc0000000
   and edx, 0x3fffffff
   div ecx
   mov dl,0x3e
   sar al,0xa2
   xadd bx,di
   clc
   sbb si,di
   not ebp
   nop
   ror ebx,cl
   add ebx,0x3d9c27f2
   bts cx,0xdf
   shrd bx,bx,0x3
   and cl,0xf
   shld di,dx,cl
   dec cx
   test dl,0x3b
   bts edx,0x55
   dec bp
   rcr dx,0x1c
   lea edi,[eax+edx*2+0xd1]
   rol al,0x1
   mov ecx,ebx
   shld esi,ebp,0xff
   btr ax,ax
   bts si,ax
   stc
   rcl ebp,0x1
   cmp ah,cl
   add ax,0x953f
   btc esi,ebp
   and si,0x6026
   cmovo si,di
   cmovbe di,si
   rcr cl,0xa7
   test al,dl
   stc
   sbb edi,0x39834cde
   stc
   sbb dx,0xef9
   sub ch,0x22
   setns cl
   cmove eax,edx
   rol edx,0x1
   or eax,0xd9608da9
   lea bx,[edi+ebx*4+0xd3]
   or di, 0xc000
   and dx, 0x3fff
   div di
   mov eax,ebx
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   mul edi
   sar ax,cl
   shr ecx,cl
   or bx,bp
   xor bx,0x50f7
   cmovne cx,bp
   cwd
   test al,0xa8
   adc ch,0x31
   btc edi,edx
   rcr edx,0x32
   sar bp,0x65
   inc	dh
   cmove edx,eax
   inc cx
   ror bx,0x1
   shr esi,cl
   btr bx,0xd0
   rol dh,0x1
   ror ah,0x1
   btc si,0x3b
   shld esi,ecx,1
   cmovnc ebp,edx
   rcl ecx,cl
   sub ch,dh
   cwde
   sar bx,0xd3
   movzx si,dh
   not ebp
   sahf
   and cl,0xf
   shrd si,dx,cl
   xadd dx,cx
   shl dl,0x1
   sub ah,0x1a
   rol dx,cl
   shr ah,0xf2
   ror ch,cl
   shr dx,0x1
   movzx ebx,di
   shld dx,di,0x4
   movsx bx,dh
   not di
   bts bp,0x50
   mul edi
   and ah,al
   or bl, 0xc0
   and ax ,0x3fff
   div bl
   ror dh,0x1
   cmp al,0xea
   imul dx,dx,0x1bd4
   ror bl,0x56
   mov bl,0x61
   shr si,cl
   neg al
   bts dx,0x3a
   sar ax,0x1
   adc ebx,0x9d813521
   add cl,0x61
   or ax,di
   cmovpe ebx,edx
   sar cl,cl
   bts ebp,0x97
   cmovc ebp,edx
   stc
   sbb eax,esi
   clc
   sbb ecx,0x78d8b823
   sub bp,0xcdc3
   imul ecx,ecx,0xe8373af5
   stc
   adc bp,0x9774
   cmovs ax,bp
   stc
   adc edx,eax
   stc
   sbb bx,dx
   mov di,cx
   nop
   rol eax,0x1
   cmovo ebx,ebx
   dec ebx
   setng bh
   add edx,edx
   sub cx,dx
   cmove bp,ax
   clc
   sbb dl,0xf0
   rcr ecx,0x1
   cmc
   xadd esi,ebx
   cmc
   sar bx,0x46
   sub cx,0x9a5
   sbb cl,dh
   shrd edi,eax,1
   setne bl
   sbb di,0x6875
   rol edx,0x1
   stc
   sbb dl,0xb7
   stc
   adc edx,0x22a73462
   sar ah,0x1
   test ecx,0x64881a3c
   cmovne bx,si
   neg dh
   ror bh,0xe7
   mov dx,si
   rol ax,cl
   test ebp,ecx
   cmovnl ax,si
   clc
   sbb bx,0x99ba
   cmovns cx,bp
   bsf ecx,ecx
   shr eax,cl
   add ax,0xfbe8
   adc ebx,edx
   or esi,0x17f18a34
   cmc
   movzx di,ch
   cmovc edi,ebx
   stc
   rcr eax,0x1
   shld ebp,ebp,1
   cwde
   btr si,dx
   bts ebp,0xb6
   sar bh,cl
   xor bx,di
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   bswap eax
   or di,0x6dde
   not dl
   nop
   imul al
   mov cx,0x8dbf
   shrd bp,dx,1
   btr di,dx
   xor esi,esi
   sar ch,cl
   neg bp
   setpo cl
   shl al,cl
   and edi,ecx
   and ecx,0x317f096b
   setpe cl
   rol si,0x7
   add dx,0xb531
   adc cx,si
   clc
   adc bl,ah
   stc
   sbb ecx,0x1b55ae81
   add cl,bh
   movsx esi,bx
   cmovnc ecx,ebx
   cmovno ebp,esi
   cmovo bp,dx
   inc dx
   clc
   adc bh,0xbf
   stc
   sbb ah,dh
   sete al
   cmovnbe ax,ax
   rcr si,0x3c
   rol bx,0x1
   rol bl,cl
   sar cx,0x1
   rol si,0xfe
   inc bp
   btr dx,di
   rcr bx,cl
   sub bl,dh
   shld eax,esi,cl
   shrd di,cx,0xb
   btc bp,bx
   movzx bp,al
   setc al
   shr cx,0xb4
   bts dx,bx
   setnc bl
   shrd eax,ecx,1
   or ch,cl
   imul edx,0x44f6f745
   and bp,di
   ror dx,0x1
   clc
   rcl cl,0x1
   sub eax,0x19b028bf
   cmp esi,ebp
   ror cx,cl
   bt edi,eax
   sbb edi,eax
   setbe ch
   cmc
   rcr dl,0x1
   stc
   adc bl,0x47
   sub dh,0xc
   clc
   rcl bh,0x1
   and cl,0xf
   shld di,si,cl
   test edx,0xc3853538
   cmp eax,esi
   test ah,0xe6
   cmovpe edx,eax
   movzx cx,dh
   cmovno di,bx
   dec ecx
   inc	ecx
   cmovbe di,di
   bt di,si
   adc al,0x98
   and dl,0x41
   cmovl si,di
   stc
   rcl di,0x1
   setnc ah
   cwde
   not edx
   and cl,0xf
   shld ax,di,cl
   and al,ah
   shrd ebp,ebx,0x4
   not ecx
   bsr edi,eax
   xor ebx,ecx
   add dx,dx
   neg ah
   test cx,0x336a
   neg si
   btr ebx,0x95
   sar bx,0x69
   add bp,ax
   dec bp
   clc
   sbb dh,bl
   shl dl,cl
   btc esi,edi
   not ebx
   bsr edx,edx
   cmp dl,0x63
   or edi,0x96cb854
   cmovno ecx,edi
   sbb eax,0x1bd59018
   setbe bh
   sbb bh,0xd9
   cmovno esi,eax
   sar ebx,cl
   bt dx,cx
   shl cl,cl
   mov esi,0xc280807
   shld ebp,eax,0x5
   bsf ebp,ebx
   ror di,0x21
   test edx,eax
   xor cl,ch
   cmovpe edx,esi
   setl dh
   and bh,ah
   cmovo si,si
   stc
   adc cl,cl
   clc
   adc dx,0x9af6
   and ecx,ecx
   setpo bh
   rcl dl,cl
   neg esi
   cmp eax,edi
   and esi,0xc20ac0bc
   cmovo ax,di
   rol ebx,cl
   imul cx,di,0xcca4
   rcl edi,0x91
   shr cl,0x1
   mov ah,al
   setnc ch
   sar edi,0xac
   test edi,0x212470fa
   cmove bx,si
   lea bp,[ecx+ecx*4+0xd3]
   add ebx,0xc7f73570
   stc
   rcl eax,0x1
   sar edi,0xfd
   cmpxchg bh,bl
   cmp cl,0x39
   cmove bp,dx
   adc cx,0xfc30
   cmove bx,ax
   shr cx,0x85
   shld edx,eax,cl
   rol bx,cl
   or dh,ah
   imul cl
   rcl al,0xdc
   cbw
   shl dx,cl
   test di,bx
   ror cx,0x2c
   xor eax,ebp
   stc
   rcr dh,0x1
   shr dh,0x1
   bswap edx
   movsx edx,bl
   bt dx,0x88
   stc
   adc ebx,ebx
   mov bl,0xcb
   clc
   adc bx,dx
   neg bl
   adc dh,bh
   or ebp, 0xc0000000
   and edx, 0x3fffffff
   div ebp
   shld edi,ecx,cl
   imul ebp,edi,0x7514595
   clc
   rcr ebx,0x1
   sbb dx,bp
   shl dx,0xd
   neg bh
   cmovs dx,di
   imul si,dx,0xf89b
   rcr cl,cl
   xchg ebx,edx
   xor di,bx
   add ah,ch
   and cx,0x7075
   rol edi,cl
   sar ah,cl
   or edi, 0xc0000000
   and edx, 0x3fffffff
   div edi
   add ebp,ebx
   imul cx
   shl edi,0x1
   sbb eax,0x8f0234c8
   or ecx, 0xc0000000
   and edx, 0x3fffffff
   div ecx
   xor bp,cx
   bt ebp,0x19
   xchg ch,ch
   mov bp,0x8518
   rol ebp,0xe7
   movsx ebx,dx
   sar eax,cl
   xor bp,cx
   or cl,0xb
   stc
   adc cx,ax
   setpe dl
   xadd cl,ah
   cmovs ecx,esi
   shrd edi,ecx,cl
   shrd eax,ecx,cl
   xor ebx,0x4dfd220c
   mov al,dl
   stc
   adc edx,edx
   rol si,cl
   rol edi,0x38
   movsx cx,bh
   ror eax,0x27
   sahf
   clc
   sbb edi,edi
   setg dh
   sbb bl,0xb1
   imul ecx
   btc di,bp
   rcl ax,0x1
   shrd ecx,edx,1
   clc
   adc di,si
   cmovs dx,bx
   sar ebp,cl
   rol eax,0x1
   rol cl,0x4
   shl al,cl
   shl dl,0x1
   test ebp,esi
   cmovns edi,eax
   cmovl cx,bp
   test ah,0xc2
   add bh,0xa7
   add bx,cx
   dec bl
   cmovpo ebp,ebx
   shld eax,ecx,cl
   rol dx,0x1
   cmovnc dx,dx
   bt ebp,edi
   test ebx,0x65fafb5c
   rcr ebp,0x1
   adc dl,0xed
   and cl,0xf
   shrd ax,cx,cl
   btr edi,0x45
   or di,si
   btr cx,0xa1
   sub si,ax
   adc bp,0x8d6
   ror si,0x1
   sub ah,0x82
   shr al,0x1
   stc
   adc cx,cx
   shl esi,0x1
   imul edi
   bts si,cx
   cmovnc si,si
   bts bp,0x79
   btr eax,ebx
   shl cl,0x24
   cbw
   rol ebp,0x1
   rcr bl,0xbb
   or ecx, 0xc0000000
   and edx, 0x3fffffff
   div ecx
   bt ebp,0x83
   or ah,0x52
   shl ax,0x24
   lea di,[esi+0xa70c89b0]
   rol ax,0x1
   seto bl
   test dx,si
   lea ebp,[ebp+ebx*2+0xfcde8cac]
   sar eax,0x1
   inc	eax
   cmovg edx,esi
   stc
   sbb cx,cx
   btr eax,ebx
   stc
   sbb ah,0xd4
   clc
   rcr ch,0x1
   stc
   rcl bp,0x1
   test ecx,0xec7266cd
   cmp ch,ch
   sub eax,esi
   rcr ebp,0x99
   cmpxchg bx,ax
   shl bx,cl
   imul si,di,0x2d46
   shld ebp,ebx,1
   cmovnbe ax,bx
   setnl bl
   rcr bx,0x1
   mov esi,edx
   cmpxchg ax,ax
   or cl,dl
   rcl dx,cl
   mul bp
   bsr ebp,esi
   shl bh,0x6a
   mov al,0xad
   mul dl
   cdq
   cmovnc ebx,esi
   and di,0x5941
   cmovne ebx,ebp
   stc
   rcr bh,0x1
   stc
   sbb ebp,0x6ed62c31
   test di,0x6699
   cmovo bx,ax
   btr cx,0xe5
   xor ebp,ecx
   rcr ecx,0x1
   mul esi
   sbb esi,esi
   shl dx,0x1
   not dl
   sbb cx,di
   shld edi,ebp,1
   ror ebp,cl
   shl dh,cl
   movsx ebp,si
   bswap ecx
   btr ebx,ebp
   sub dl,0x9
   clc
   adc cl,0xe2
   stc
   sbb bx,0xd60e
   ror bp,0xaa
   shld ecx,edi,cl
   add ch,cl
   rcl ebp,0x1
   rcr eax,0x1
   cmovnc ebx,eax
   clc
   adc bx,bx
   cmovnbe ebx,edi
   sar edx,0xdd
   movzx ax,cl
   rol esi,0x1
   bsf edi,eax
   or cx,bp
   cmovng edx,edi
   or al,0xe2
   setno ah
   sar ecx,0x1
   stc
   sbb ch,ah
   clc
   sbb ecx,0x91fb03ec
   or ah,ch
   xadd cl,ch
   dec di
   clc
   adc esi,0x57ea8de8
   cmovl ebx,edi
   cmovnc esi,esi
   btc ebp,0x6b
   or bl,0xfc
   and cl,0xf
   shrd dx,ax,cl
   bts esi,0x93
   ror ah,cl
   rol esi,0x1
   stc
   adc edx,ecx
   imul cx
   cbw
   btc ebp,0x7c
   shld bp,cx,0x8
   sar eax,cl
   mov bx,0x1e6d
   imul ax,0xad3c
   or dh,0xa2
   setnbe ch
   shr bp,0x1
   bts edx,ecx
   cmovnc ebx,eax
   cmp al,0x7
   ror dx,cl
   ror ebp,0x96
   shr cx,0xb9
   cmp bp,0x6db5
   clc
   adc bp,si
   imul ecx
   dec eax
   btc di,dx
   stc
   adc bl,0x28
   cmovnc esi,ebp
   clc
   rcl bp,0x1
   adc bl,0x3f
   sub ebx,edi
   stc
   adc bl,0x28
   xor cx,0xeeb4
   stc
   adc cx,0x68c7
   xchg bl,cl
   sbb dx,ax
   stc
   rcr eax,0x1
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   bts cx,bp
   rcr esi,0x1
   cmp bx,0x2e28
   cmove dx,bx
   setnl dh
   adc ebp,0xb24d59c1
   bsr eax,edi
   shl bl,0xd2
   shrd di,dx,0xb
   add di,ax
   mul dl
   shl si,0x18
   or dh,0x7
   ror bh,0x1
   xor ecx,0xa09a795c
   btr di,bx
   test ebx,0x14eea7ab
   lea di,[esi+edi*4]
   btr edx,0x6c
   rol al,0x1
   add ecx,0x6682c739
   cmovno esi,edx
   rol ah,0xeb
   and edx,0xd3cf946d
   cmovno ecx,edx
   stc
   sbb ecx,0x84c5135f
   rcl cl,0x1
   shl cl,0x1
   cmpxchg cx,bp
   sub ch,0xa1
   bts dx,bx
   adc ebx,0x5fe9cce4
   stc
   rcr di,0x1
   bt si,0xcd
   clc
   rcr ax,0x1
   clc
   rcr si,0x1
   btr bp,0x83
   rcr ah,cl
   inc	ah
   cmovno edx,ebp
   add dh,ah
   cmovne eax,ebp
   cmpxchg ah,bh
   neg dh
   cdq
   setnbe ch
   clc
   sbb cl,0x82
   sar ax,cl
   bts ebx,eax
   cdq
   neg dh
   and bh,dh
   clc
   sbb ch,dh
   add ebp,eax
   shl bp,cl
   inc	bl
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   or ax,0x5ca2
   cmovg ebx,eax
   btc ecx,edx
   rcl eax,cl
   mul ax
   stc
   sbb bl,dl
   ror ecx,0x1
   imul ebp,esi,0x2f339212
   btr ax,cx
   stc
   adc cl,bl
   sete dl
   not bx
   or al,dh
   inc	al
   clc
   rcr dh,0x1
   clc
   adc bp,cx
   adc si,0x4ef5
   rol ax,0x1
   lea eax,[edx+ebx*4+0x82363b50]
   movsx ax,ch
   cbw
   cmovno ax,cx
   btc ebx,ebp
   btc di,0xaf
   clc
   adc dl,0x47
   cmc
   cmovc edx,ebx
   cmovpe edi,edx
   xor edx,0x1fa32136
   setng ch
   mov si,bp
   cmp ecx,0x763f7cbf
   or cl,0x7c
   stc
   adc esi,0x610c139
   setng cl
   mov al,dl
   imul si
   adc dl,bh
   cmp dh,0xa0
   rol esi,0x1
   sar ebp,cl
   shld esi,esi,1
   stc
   adc ch,0x31
   stc
   rcl edx,0x1
   stc
   adc si,dx
   rcl ecx,0x1
   lea esi,[ecx+edx*4]
   btc cx,si
   sar ecx,cl
   xchg dx,cx
   or bl,0xd7
   mov esi,0x4741e7a6
   shld ebx,ebp,0x85
   neg si
   setbe ah
   sar ecx,cl
   xor si,bp
   shl ebp,0x64
   cmpxchg edx,eax
   clc
   rol ah,cl
   test ch,0xfc
   clc
   rcr cx,0x1
   stc
   rcl cx,0x1
   btr si,0xf
   clc
   sbb eax,0x8f26cfa2
   stc
   rcl bp,0x1
   bts si,bx
   inc	ecx
   clc
   sbb cl,0x4f
   and cl,0xf
   shld si,di,cl
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0xb989aa04

 pop gs
 pop edi
 pop esi
 pop ebp
 pop ebx
 ret
         .size   log_size_10_var_004, .-log_size_10_var_004

.globl log_size_10_var_005
         .type   log_size_10_var_005, @function
log_size_10_var_005:
 push ebx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0xa0ec5b5
  mov ebx,0xccef378
  mov ecx,0x7a9054e9
  mov edx,0xf12c0063
  mov ebp,0x1a9b379f
  mov esi,0xf0faa98d
  mov edi,0x3b342b83
   mul edx
   btc ebp,eax
   or dx,dx
   adc ecx,ecx
   mov ch,0xf6
   cmovns ecx,ecx
   sub ecx,esi
   sar ebp,0x2c
   rol ebp,0xbd
   xor edx,edi
   sbb dh,bh
   cmp dl,ah
   rol cx,0x1
   ror esi,cl
   rol dx,cl
   rol ebp,cl
   and eax,edx
   cmovo di,cx
   sar dl,0x1
   btc bx,0xdf
   sar bl,cl
   and edi,edx
   movzx eax,ax
   and cl,0xf
   shrd bp,di,cl
   add ch,0x12
   cmovs edi,ecx
   sbb edx,eax
   shr di,cl
   clc
   setnc ah
   stc
   adc bl,0xac
   setnc al
   bt ebp,ebp
   cmp ax,ax
   cmpxchg bx,di
   add ebp,0xfbdcec8d
   xor eax,0x3b44ee67
   and bl,al
   sub ch,bh
   ror ax,0xe8
   xor ecx,0x4a21709f
   xchg di,cx
   clc
   sbb ah,0xb3
   or dl,bl
   sub bl,cl
   setng al
   sbb eax,0x41bfcd10
   adc edi,0x24d44dfa
   cmovo si,si
   stc
   adc dx,0xf54a
   shrd edi,ebx,0xa5
   cwd
   or esi,edx
   stc
   rcr bh,0x1
   mov eax,ebx
   ror edi,0x1
   btc bp,0xc7
   shrd ebx,ebx,1
   cmpxchg bx,bx
   imul dx,bx,0xf592
   shr al,0x1
   shl dl,0x1
   rcr bp,cl
   and ah,dh
   setg dh
   clc
   rcl dh,0x1
   mov ebp,ebx
   clc
   rcr di,0x1
   rcl eax,0x1
   test dh,0xc1
   sbb cx,0x83f9
   and cl,0xf
   shrd si,di,cl
   ror dh,0xa3
   dec bx
   cmovs ax,cx
   shld bp,di,1
   ror bl,0x1
   clc
   rcl di,0x1
   sbb cx,0xb1fe
   stc
   sbb bh,0x18
   clc
   sbb eax,ecx
   sub eax,eax
   mov bl,0x3d
   clc
   rcr al,0x1
   ror dx,0x1
   movsx cx,cl
   rol ebp,0x1
   clc
   sbb edx,0xa6b54efe
   rol al,cl
   sar ebx,0x1
   rcl ax,0x74
   btc edi,0x49
   rcl eax,cl
   shrd edx,ebp,1
   shl al,0x1
   xor ch,dl
   or si, 0xc000
   and dx, 0x3fff
   div si
   movzx edi,ax
   test ch,0x3b
   stc
   rcr bh,0x1
   cmp di,dx
   sar bp,0x1
   rcr eax,0xe6
   sar bl,cl
   shr bh,0x1
   shl bh,0x1
   mul ax
   movsx eax,cl
   movzx eax,bx
   rol bh,cl
   xor dl,dh
   mov di,ax
   and esi,esi
   shr ebx,cl
   or esi,ebx
   shl dx,cl
   bts di,ax
   shl ecx,cl
   xor dx,0x6960
   xchg ch,ch
   ror al,0x7
   add di,0xb527
   rcr bl,cl
   xor eax,eax
   cmovno dx,bp
   and cl,0xf
   shrd si,cx,cl
   bt di,0x52
   adc edi,edi
   setno bl
   rcl ax,cl
   shr dx,cl
   sub al,bh
   rcr ch,cl
   test di,0xd480
   sbb dx,bp
   mov edi,0x98ec4cad
   shr ecx,0xfc
   shld ax,si,1
   cmovbe edx,edx
   cmovbe eax,eax
   lea cx,[ecx+ebp*4+0x9c]
   cmovnc esi,ebx
   xor cx,0xa06d
   sub cx,0x27b0
   clc
   adc di,0x3fe3
   clc
   sbb dh,0xfd
   cmp ebx,ecx
   add bx,bp
   xadd ax,cx
   setne dl
   stc
   sbb ah,0xa0
   adc bx,0x661f
   or edi, 0xc0000000
   and edx, 0x3fffffff
   div edi
   sar ch,cl
   shr dl,0xa3
   ror cx,cl
   rol dl,cl
   bts dx,bx
   xor di,cx
   clc
   sbb bx,di
   bsr edx,edx
   ror eax,0x82
   imul ecx,0xb8b1813a
   bt edx,0x5f
   clc
   sbb al,0x81
   rcl bx,0x1
   rol ebx,cl
   sar cx,cl
   rol ebx,cl
   xchg cx,ax
   dec cx
   add bx,bx
   cmp dx,cx
   shl dh,cl
   btc ebx,0x3b
   inc	bh
   imul bh
   stc
   rcl edx,0x1
   xchg bl,dh
   cmp ax,si
   dec ch
   shl edi,cl
   shl esi,cl
   movzx ebp,dh
   shr bh,cl
   sub bl,ch
   shr ecx,0x1
   ror bh,0x1
   and cl,0xf
   shrd di,cx,cl
   bsf edx,ebp
   and bp,dx
   cmovc edi,esi
   cmovg di,bx
   and ax,si
   clc
   rcr esi,0x1
   xor ax,ax
   bts eax,eax
   sub ch,0xfb
   stc
   rcl bx,0x1
   movzx esi,ah
   cbw
   rol bp,0x29
   shld bx,cx,1
   movzx edx,cl
   shr bl,0x1
   cmpxchg bh,bl
   stc
   rcr si,0x1
   shl eax,0x1
   or bh, 0xc0
   and ax ,0x3fff
   div bh
   shl ebx,0x1
   rcr al,0x1
   sahf
   sets ch
   bt esi,0x3a
   and cl,0xf
   shld di,bx,cl
   shr ax,cl
   add di,bx
   cmovno bx,dx
   mov bh,bl
   test ecx,edx
   sar edx,0x1
   shr esi,cl
   dec edi
   add ax,0xd6b1
   nop
   rcl cx,0x1
   cmovnc di,si
   cmovo ebx,ebx
   cmovno ecx,esi
   ror eax,0xb7
   not cx
   mov dh,dh
   not bp
   lea ecx,[ecx+esi*2]
   mul edi
   shrd edx,esi,0x23
   xor ah,0xa8
   setg dh
   lea si,[ebp+ecx*2+0x93]
   sar dh,0x58
   dec bh
   movsx ebp,cl
   cmovne di,dx
   ror bl,cl
   bt ax,0x77
   ror ecx,0x3f
   cmp cl,bh
   add esi,0xb3f0c44d
   btr ax,cx
   sar ch,cl
   inc	edi
   and ax,dx
   mov bh,cl
   shr ax,0x1
   bts ecx,0x4b
   shld edx,ebx,0xac
   cmp ebx,0xd487b636
   shl eax,0x1
   stc
   adc bh,ah
   shl ax,0x21
   sar si,cl
   sar bx,cl
   bts edx,edi
   and cl,0xf
   shrd bx,bp,cl
   btr edi,eax
   cmp eax,0xf9ca669c
   ror si,0x76
   imul ecx
   shld ax,cx,0x5
   inc	bh
   mov cx,bp
   bt si,0x3d
   shrd ax,bx,1
   clc
   rcr dh,0x1
   sbb ch,0x56
   rcr ecx,cl
   bsr edi,edi
   not bx
   dec cl
   xor cl,0xdb
   xadd si,bp
   movsx ebx,ch
   stc
   rcr si,0x1
   movsx dx,al
   stc
   rcl ecx,0x1
   cmp cl,0x84
   clc
   adc si,dx
   ror dh,cl
   shl bh,0x1e
   movsx ebx,bp
   rol esi,0x1
   rol ebx,0x1
   stc
   sbb bp,ax
   cbw
   sar ah,0x27
   btc ebp,0x68
   cmp bl,0xfa
   rcr cx,0x3b
   btc esi,ebp
   btr ebx,0x42
   sub bl,0x73
   shrd di,cx,0xd
   shl ebx,0x9f
   ror edx,0xc7
   rol dh,0xda
   sar ax,cl
   xor cl,ah
   clc
   adc dl,0xca
   cwde
   cmovnbe dx,bp
   sar di,0x57
   not dh
   shr ax,0x1
   sub esi,ecx
   setnc bh
   cmpxchg edi,edx
   setng dh
   stc
   adc si,bp
   shld edi,edx,1
   ror cx,cl
   shr di,0x8e
   mul al
   sar edx,0xde
   sahf
   sets al
   setpo al
   sar ebp,0xa6
   shl bp,0x1
   or cx,dx
   and bl,0xc5
   stc
   sbb dh,al
   bts di,0xf
   adc ebx,0x29322a49
   bt esi,0x7b
   rcr cx,0x1
   shl ch,0x8
   sub dh,bh
   not si
   clc
   sbb si,bp
   shl ebx,0x80
   shrd ecx,edi,0x16
   mul dl
   or ecx,0x42a19d3f
   btc dx,0x18
   neg bp
   bts esi,ebx
   cdq
   rcl ax,0x75
   bswap ecx
   shrd ebp,ecx,cl
   or di, 0xc000
   and dx, 0x3fff
   div di
   mov ax,cx
   imul ebx,0xc3fda08a
   ror ah,0x1
   cmovc ecx,edx
   rol ch,0x1
   clc
   adc ch,bh
   bt eax,esi
   sar dh,0xe2
   movzx edx,ch
   imul eax,0x26812155
   sar cl,0x5c
   add dl,0x51
   cwd
   cwd
   cmovbe ebp,edx
   movsx ebp,dl
   shld ecx,esi,0x76
   xchg al,al
   cmp si,0xc93
   seto bh
   cmp eax,edi
   sar bl,cl
   shl edx,0x1
   bts esi,0x84
   rol bh,0x98
   and ebp,ebp
   mov dl,dh
   not dl
   shl bl,0x1
   stc
   rcr ax,0x1
   shr eax,0x1
   shl ecx,0x1
   adc ebp,ecx
   movzx bx,bh
   cmovs esi,ecx
   setg dl
   cmovg bp,ax
   cmp ebp,0xb22dae1a
   rcl dl,cl
   add al,ch
   xor al,0xe
   and dl,bh
   imul si,cx,0xd002
   shl ebx,0xea
   shrd eax,esi,1
   rcl cx,cl
   shr bp,0x74
   rol edi,0xa9
   xor si,0x47f1
   movzx ebx,di
   shrd ecx,edx,cl
   sar si,0x6
   cmp cl,dl
   rcl dh,0x1
   clc
   rol dx,0x1
   shl bl,0x1
   cbw
   xor dl,0xc
   and ebx,0xa3b5a6cd
   add dl,dl
   shrd ebx,eax,1
   mov edx,0xbfc02011
   sar ebx,0x1a
   add dx,0x1153
   cmovne eax,ebx
   rcr edx,0x1
   neg bp
   rol ebp,0x1
   sbb eax,esi
   setno dl
   rcr ebx,0xa2
   shr si,0x1
   or ah,al
   shr bl,0x83
   rol bh,cl
   shrd bp,bp,1
   rcr dx,0xcc
   neg edx
   setc bl
   and cx,dx
   shrd esi,esi,1
   sar cx,0x1
   shld edi,ebx,0x11
   lea edx,[eax+eax*4]
   movzx ecx,ah
   ror ebx,cl
   shl dh,0x1
   btr bx,cx
   or cx,bx
   movsx edi,ah
   not ebp
   rcr edi,cl
   shl ecx,0x1
   clc
   sbb si,0xcdc4
   clc
   cmovc ebx,ebx
   shl ch,0x1
   sub ebx,ebx
   stc
   sbb dl,0x1e
   neg edx
   ror bl,cl
   imul bh
   or bh, 0xc0
   and ax ,0x3fff
   div bh
   lea dx,[ebp+eax*2+0x53]
   and bp,cx
   cmovbe dx,bp
   bts dx,0x8a
   and si,0xfaa3
   rcl ebp,cl
   btc ecx,0xb4
   imul al
   shl dl,cl
   shr ax,0x1
   rcr ch,0x1
   ror ecx,0x1
   shrd eax,ebx,cl
   imul bl
   rcl ax,0x1
   btr ecx,ecx
   or ah,bl
   sub ebp,0xc78f9dec
   lea bp,[ebp+edi*2+0x7f]
   cmp eax,eax
   and cl,0xf
   shld si,di,cl
   dec ch
   shr bh,0x1
   clc
   adc bp,0xd134
   cwde
   btc eax,0x35
   sar ch,0xcf
   imul bx
   sub ah,bl
   shr edx,cl
   imul dx,cx,0xe67c
   bsr esi,edi
   shl cl,cl
   ror ax,0x48
   shl ebx,0xf2
   mul ah
   clc
   adc ebp,0x3ef9e81d
   rcl esi,cl
   shrd esi,ecx,cl
   bt bp,0x82
   shr ecx,0x96
   sar si,0x14
   shrd eax,esi,cl
   inc cx
   mov bx,0x4c6e
   rol edx,cl
   lea eax,[ebp+ecx*2+0x42]
   or dl, 0xc0
   and ax ,0x3fff
   div dl
   ror ebx,0x80
   btc ebp,edi
   add edx,ebp
   shld bx,dx,0x8
   rol edi,0x49
   rol eax,0x1
   ror bp,0x8a
   shrd bp,di,1
   ror al,cl
   and bl,al
   mul si
   stc
   rcl ecx,0x1
   sar ebx,0x86
   and cx,cx
   xor ch,cl
   cmovo eax,eax
   clc
   rcr edx,0x1
   btr ax,bx
   sar dx,0x1
   not ax
   sbb bl,0xbf
   stc
   sbb bx,cx
   cmovpo cx,dx
   stc
   sbb eax,edx
   shr bl,0x1
   add bh,bh
   adc edx,eax
   not eax
   stc
   rcl bl,0x1
   bt di,di
   sar ecx,0x1
   imul bx,0x2755
   mov ecx,0x5ef56b43
   shl ecx,0x6e
   shr ax,0x1
   sar cl,0x1
   add bx,0xfa05
   bts si,0x86
   btr esi,ecx
   shl bx,0xb3
   shl dh,0x41
   sar cx,0x1
   ror ecx,cl
   cmp di,ax
   cmp ecx,eax
   shr edi,cl
   sub ah,bl
   dec bl
   clc
   sbb bx,0xe849
   or bp,0x4cdd
   ror bl,0x64
   mov ebx,0x4f98a2c6
   rol eax,0xe9
   not al
   not dl
   xchg eax,edx
   btr ax,cx
   stc
   sbb eax,0x1861b238
   shl eax,cl
   mov ebx,0xc821edca
   rol esi,0x1
   test ecx,0x135b4dc7
   adc dx,bp
   shl ecx,cl
   shr ax,0x1
   rcl ecx,cl
   not cx
   shr al,0x70
   cmp al,dh
   xor ebp,ecx
   adc dx,0xcfc
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   rol ch,0x1
   rol esi,0x1
   mul bp
   bswap edx
   neg al
   cmovl ecx,esi
   rcr esi,cl
   sar al,0x4
   test ebx,0x92738609
   cmovl edi,ebp
   mov eax,ebp
   cmovpe eax,eax
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   sub bp,0xa66e
   setnbe cl
   stc
   sbb bx,cx
   cmovc bp,si
   add bl,cl
   cmpxchg ch,cl
   cmpxchg si,ax
   setpe dl
   sbb eax,ebx
   bswap ebp
   and cx,bp
   shrd esi,eax,1
   cmovne ecx,ecx
   mul al
   btr edi,0xe6
   add di,dx
   setnc dl
   or cx,cx
   btr edi,0x35
   sub dx,si
   rcr di,0x1
   movzx dx,ch
   cmp dh,bh
   lahf
   setns dl
   cmovne ebx,ebp
   cmovng ebx,ebx
   sub si,0x1cf1
   add di,di
   ror al,0xfa
   and cl,0xf
   shld di,ax,cl
   shrd bp,dx,1
   inc di
   shld ebx,eax,0xe5
   bsr eax,ecx
   imul bp,0xf09e
   btc dx,si
   ror dl,0x1
   stc
   adc esi,ebx
   clc
   cmpxchg ecx,ebx
   cmovns ebx,edx
   clc
   adc di,ax
   btc bp,dx
   btc ecx,ebp
   xor cx,0x99d3
   mul eax
   setno bh
   ror bh,cl
   and esi,edx
   setbe bh
   shl bp,0x1
   clc
   clc
   sar bl,0x1
   neg ah
   shl edi,0x8e
   nop
   or edi,edi
   sahf
   cmovne ax,cx
   clc
   sbb si,0x2def
   imul esi
   rcr edx,0x88
   xor al,0xfd
   cmovg si,ax
   bsr ecx,edx
   sar ah,cl
   test bh,al
   inc ax
   setbe dl
   sub bp,0x7ae2
   shl dl,cl
   add bp,ax
   clc
   adc dx,di
   dec dl
   rol eax,cl
   or al,ch
   shld bp,di,0x2
   cbw
   shld edi,edi,0x1c
   or di,0xd657
   cmovpe edx,esi
   sar ch,0xc1
   sar bh,0x6a
   nop
   not di
   bsr eax,esi
   shrd edx,edi,cl
   rol bh,0xf3
   ror si,0xe7
   ror bl,0x5f
   shr ecx,0x8b
   imul dx,si,0x88b
   cmc
   cmovno ax,bp
   xadd ch,dh
   lea dx,[eax+edx*4+0xee3cee4b]
   movsx ax,ch
   rcr si,cl
   add eax,edx
   btr bp,0xf6
   imul si,0x4aec
   clc
   adc ebp,esi
   shl dh,0x73
   shrd dx,bp,1
   sub bp,dx
   shr bx,0x4e
   nop
   mov ebp,0xac0a6a5b
   xchg bp,cx
   shrd eax,ecx,cl
   add ah,bh
   sbb bh,0x9
   setng cl
   clc
   shr cl,0xc1
   or edi,0xb780bc1c
   ror edx,cl
   sub bh,dl
   cmovng ebp,ecx
   adc bl,0x5f
   xor di,bx
   xchg di,cx
   movsx ebp,cl
   mul esi
   clc
   sbb bx,bp
   sub bx,0xbaa6
   cmove bx,di
   xadd dl,ch
   sar cl,0x48
   ror ax,cl
   mov dx,bx
   rol esi,0x86
   test ecx,0x17d957f7
   sar eax,0x1
   shl bp,cl
   sub ecx,edi
   adc bp,0x7771
   sar bh,cl
   bt bp,bp
   xadd ebx,eax
   xadd cl,bl
   adc dl,0x71
   cmp ebp,0x8ea0722e
   sbb bl,al
   inc si
   rcr dl,0x1
   dec si
   lea di,[esi+ecx*1]
   rol dx,cl
   sub dl,0x91
   stc
   adc bx,0x3711
   shrd ebx,eax,1
   xor esi,0xfdf0dad3
   cmp dx,0x6355
   clc
   rcr bl,0x1
   add ah,al
   btc si,di
   stc
   rcl bl,0x1
   shl edx,0x1
   add esi,edi
   not cl
   btr esi,ebx
   stc
   rcr ch,0x1
   rol cl,0x1
   shr si,0x1
   test bp,0xcf5c
   setno cl
   or di, 0xc000
   and dx, 0x3fff
   div di
   add edi,esi
   imul ebx
   clc
   adc di,dx
   clc
   rcl dh,0x1
   xchg edi,esi
   cmp si,0x527b
   cmovo bp,cx
   cmovnbe ebp,edi
   sar si,0x1
   cmpxchg ah,ch
   cmovnl bx,di
   rcr ah,0x1
   xor al,bh
   rol ah,cl
   shl dl,cl
   shl ebx,0x1
   rcl dx,0x1
   btc bp,bx
   sub al,0x44
   mov si,bx
   clc
   rcr esi,0x1
   setnc ch
   cmp edx,0xf567ac79
   test ah,dl
   rol bl,0x1
   cwd
   stc
   adc eax,0x77a4061
   setnc dh
   not ecx
   cmovno ebx,ebx
   shld ebp,esi,cl
   cmp cx,0xa16f
   not dx
   inc dx
   add edx,0xfd138854
   movsx dx,cl
   clc
   adc ebp,0x3eb24582
   test si,0x5af8
   adc al,dh
   mov di,0x10fb
   bt edi,0x4f
   rcl ebp,0x1
   mov dx,0x96
   stc
   adc si,si
   cmove ebp,ebx
   rcl bx,cl
   sar bh,cl
   cbw
   and ebp,0x80d6f70f
   rcl dh,0x1
   clc
   rcr cl,0x1
   nop
   btc ax,0x47
   shld bp,dx,1
   ror esi,0x1
   cmovc ebx,esi
   sar ebx,cl
   ror ecx,0x1
   shl bp,cl
   or eax, 0xc0000000
   and edx, 0x3fffffff
   div eax
   btc ebp,0xbe
   rcl eax,cl
   xor ebx,0x1116782f
   stc
   sbb ecx,edi
   sbb ch,bl
   cmovo bx,di
   and cl,0xf
   shld dx,si,cl
   dec ebx
   sar dl,0x1
   shrd ebp,ebx,cl
   or si,dx
   rol edx,0xfe
   btr bx,ax
   cwd
   cmpxchg ah,cl
   sub bx,0x9fd1
   or dh,bh
   imul ecx,0xe3e8ef0f
   inc	esi
   stc
   rcl dl,0x1
   rcl ecx,0x39
   sub bx,0x1de0
   imul bx,0xcd2d
   rcr bx,0x7f
   xor cx,0x2824
   clc
   rcl ax,0x1
   stc
   adc esi,ecx
   shl esi,0x1
   clc
   sbb di,bp
   dec bl
   btr di,0x44
   shl bh,cl
   sub eax,0x4f39788c
   ror cx,0x1
   ror dl,cl
   shl ch,cl
   shr eax,0xa1
   add al,al
   stc
   rcl eax,0x1
   clc
   adc esi,ebp
   sbb si,bx
   ror dh,0xc5
   shl ax,cl
   inc	ebx
   xchg dh,dh
   ror bx,0x1
   test al,0x83
   shl si,0x88
   sar dl,0x7
   bts eax,edi
   sub cl,0x4c
   setpe dh
   btc ebp,0x7e
   sub ecx,0x1a7d5701
   sar bh,cl
   shld ecx,ecx,1
   bsf eax,ebp
   shl al,0x1
   adc bh,dl
   mul di
   xadd ebp,ebx
   and dx,cx
   clc
   adc esi,ebx
   stc
   adc cx,0xed6a
   ror edi,cl
   cmp bh,0x27
   movsx ebp,ch
   cmovl ebx,edi
   rcl ah,cl
   movsx ebp,bl
   and cl,0xf
   shld bx,bx,cl
   inc	edx
   shl cl,0x1
   or ch, 0xc0
   and ax ,0x3fff
   div ch
   and ecx,0x396852bb
   shl ch,0x58
   shl ebx,0x1
   sar esi,0x2d
   bts ebx,0xdd
   rcl bl,cl
   ror edx,cl
   sub ah,0x4d
   stc
   rcl bh,0x1
   shr ecx,0x1
   bts bx,ax
   stc
   sbb si,si
   ror bx,0xf8
   shr al,cl
   xadd cx,di
   sete al
   cmovnbe edi,ebp
   setc bl
   cmovne di,di
   clc
   rcl ch,0x1
   sar bp,0x43
   or cl,bl
   sar ecx,cl
   shrd si,ax,1
   shl ebx,0xaa
   xor bx,0xbc5
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0x1754f5fa

 pop gs
 pop edi
 pop esi
 pop ebp
 pop ebx
 ret
         .size   log_size_10_var_005, .-log_size_10_var_005

.globl log_size_10_var_006
         .type   log_size_10_var_006, @function
log_size_10_var_006:
 push ebx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0xb229389f
  mov ebx,0x74d0b40e
  mov ecx,0x139e4a4d
  mov edx,0x60ac0b89
  mov ebp,0x22022e28
  mov esi,0x26649f54
  mov edi,0xf30e4332
   mul bp
   stc
   sbb dl,0xd7
   bsr edi,ebp
   ror al,cl
   ror ecx,0xfb
   bt si,ax
   sar esi,cl
   shld ebp,edi,cl
   ror di,0x1
   cmovo edi,ebp
   sub ax,ax
   sbb ax,0xde1f
   cmovns ecx,esi
   clc
   adc bl,0x81
   adc ecx,0xc23df3bc
   xor esi,0x888c57a4
   shl al,0x26
   cmp dh,bl
   rol di,0x1
   stc
   sbb ah,ah
   xadd ax,bp
   cmovng ebx,ecx
   ror si,0x1
   rcr edi,cl
   xor ch,bh
   and ebx,0x4b04164c
   clc
   rcr esi,0x1
   and ch,0x1f
   adc al,dl
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   bt si,bx
   sbb esi,0xcaecc275
   cmp bl,0xb8
   shr ah,0x1
   btr edx,ebx
   shl bp,cl
   cwd
   and al,ah
   not bx
   clc
   rcr bx,0x1
   lea dx,[esi+eax*2]
   stc
   adc al,0xa5
   dec bh
   imul si
   or esi,0x740f004e
   bsr ecx,ecx
   shl si,cl
   rol bl,0x1
   btr di,0x5a
   or ebx,edi
   cmovc ecx,esi
   stc
   rcr edi,0x1
   xor cl,0xc5
   add ah,0xf7
   clc
   adc edx,ebp
   and dh,0x28
   cmp cl,al
   imul esi
   bts bp,cx
   imul si
   clc
   sbb al,al
   adc edi,ecx
   clc
   sbb bp,0xe92c
   ror dx,cl
   xchg ebp,ebp
   sub cl,0x9b
   adc ah,dh
   shl dl,0xa4
   shr edx,0x1
   or dl, 0xc0
   and ax ,0x3fff
   div dl
   xor di,0xa6fc
   test edi,0xd96b78dc
   cmovc ebx,edx
   cmovne si,di
   inc	ebx
   sar cl,0x0
   movsx cx,dh
   rol si,0xd
   shr cl,0x1
   cmovnc di,dx
   add ebx,0xe3b5447d
   shl dl,0x0
   shrd dx,cx,0xb
   cmpxchg di,bp
   shld ebx,ebx,0xa7
   cdq
   cmp ah,0xe1
   bt eax,esi
   test ah,0xfc
   stc
   adc bx,0xcb5a
   btr ebx,0x42
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   movsx eax,cl
   shl si,cl
   or bx, 0xc000
   and dx, 0x3fff
   div bx
   sub dl,0x6d
   btr eax,0x66
   dec edi
   stc
   rcl eax,0x1
   shr dl,0x1
   sub di,0xa758
   bt bx,ax
   cmpxchg ebp,ebp
   sar ax,0x98
   mov edi,0xda3addf0
   mov ax,0xfb13
   or edx,ecx
   cmovno ebp,eax
   imul cx,0x418e
   shrd esi,eax,0x70
   shl edx,0x8a
   shld ecx,edi,cl
   neg dx
   cmovnl ax,bp
   shl cx,0x3e
   shl bx,0xfb
   bswap edi
   xor dx,cx
   sbb edi,ecx
   cmove ebx,esi
   ror dx,0x1
   and edx,0x3a3b60ad
   stc
   rcl cl,0x1
   imul di
   shr esi,0x9a
   or si,0x9b09
   bts ecx,esi
   or cx,dx
   setne dl
   mov bl,0xb6
   mul bl
   rol edi,0x1
   neg al
   xadd bx,di
   cmovl bx,ax
   imul cx,0x4739
   sbb dl,ch
   inc	edi
   sbb eax,0x6f736597
   setnc bh
   rcr di,0x1
   adc cl,0x1b
   add dh,0x55
   adc ax,dx
   xchg esi,ebp
   sar cl,0x1
   cmc
   shrd edx,edi,0xc2
   shr edx,cl
   inc cx
   cmovl si,di
   mov eax,0x2c169c5
   btc bp,bx
   clc
   adc edx,ebx
   stc
   rcl bx,0x1
   rcr si,0xfb
   bswap edi
   cmpxchg dl,dl
   shl bh,0xbd
   or bh,bh
   rol cl,cl
   shr edi,cl
   sub ebp,0x7b7c6ac8
   sbb ch,0x1
   bts eax,ebp
   rol ebx,0x1
   sbb cx,0x814f
   rol bl,0x7b
   cmp ah,0x42
   setns ch
   not ax
   and cl,0xf
   shrd di,dx,cl
   sar cl,0x1
   mul bl
   or ebx, 0xc0000000
   and edx, 0x3fffffff
   div ebx
   add al,0xc1
   setl bh
   movzx di,dh
   clc
   sbb al,al
   rcr edi,cl
   ror si,0x1
   sub cl,0xb7
   sete ah
   imul ebx,0x7171969a
   setnc ah
   sar esi,0xa3
   shr ch,0x6e
   sar dh,0x25
   nop
   shld edi,edx,0x1
   bsf ebx,esi
   add di,0x25b2
   stc
   rcr bp,0x1
   shl edi,0x2e
   inc	ebp
   shl al,cl
   ror bl,0x1
   btc bx,0x49
   rol bl,0x87
   shld ebp,edi,cl
   imul edx,ebx,0x90d0478
   rol ebp,0xd
   imul ebp
   clc
   adc edx,0x8a10d9ee
   lea edx,[ecx+edx*8+0x420b69a9]
   stc
   rcl ebp,0x1
   sub bh,bh
   stc
   sbb cx,0xf71
   clc
   rcl dh,0x1
   bt ecx,eax
   sbb edx,0xb2353441
   ror bx,cl
   shr ch,cl
   lea edi,[ebp+ebp*4+0xb19fc35f]
   sahf
   mov esi,0x62e794b0
   shr edi,0x1
   stc
   sbb cl,cl
   not esi
   xor ecx,esi
   clc
   adc cx,0x5317
   btr edi,0x9f
   cmp cx,0x5151
   test bp,0xd556
   cmovne bx,bp
   ror ebx,cl
   xchg bp,cx
   bswap ebx
   cmp bp,bx
   cmovnl di,dx
   rcl bx,0xf
   test edi,0xe260c527
   bswap eax
   ror bl,cl
   cmpxchg bh,bl
   sete ch
   rcr ax,0x1
   cmc
   rcl ebp,0x3b
   movzx edx,bh
   shr dx,0x1
   sbb esi,esi
   stc
   rcr di,0x1
   btr dx,0xab
   mov edi,0xd72acb33
   lea edx,[edx+edx*4+0xf6]
   sar esi,0x1
   stc
   rcl ecx,0x1
   shrd bx,cx,1
   setg ah
   cmovg edx,ebp
   sbb al,0x3d
   sbb dx,cx
   and edx,0x49c997e2
   shl dx,0xe6
   test cl,dl
   ror di,0xef
   bts cx,0xa0
   cmc
   or cl,0x79
   imul eax,0x66320416
   adc bp,0xe6b9
   clc
   adc bl,ch
   or bl,ch
   imul ecx,esi,0x73f00658
   neg bh
   bswap edi
   imul al
   and cl,0xf
   shrd di,bx,cl
   shr ecx,0x80
   ror eax,0x1
   shr ah,0x61
   movzx si,bl
   imul edx
   xchg dl,cl
   sbb al,0x5b
   ror ch,0xd6
   btr ax,bx
   cmovnc ebp,edi
   rcl ebx,cl
   btc cx,0xf3
   add al,bh
   sub bh,0xb7
   sar bx,0x1
   xadd eax,eax
   add edi,0x7fd5be1
   add cx,bp
   shr eax,0x11
   bts ecx,esi
   stc
   sbb di,si
   shl ch,cl
   shr dh,0x1
   stc
   adc esi,0xb9c1ca3c
   dec bx
   clc
   rcl bp,0x1
   clc
   adc edi,0x53b4989a
   stc
   rcr ch,0x1
   sbb edx,0xc54535ad
   sar ebp,0x83
   bsr edi,ebp
   rol ebx,0xd0
   sar al,cl
   movsx ax,bl
   or esi,edi
   sar ch,cl
   xor ah,ah
   stc
   adc bx,cx
   lea edi,[ecx+0x56142ac9]
   clc
   adc ax,bx
   cmp bp,0xa9d3
   ror bh,0x29
   bts bx,0xfc
   rcr bl,cl
   test bx,ax
   sete al
   shl ebx,0x1
   clc
   sbb ch,dl
   cmovnc esi,edx
   btc ebx,0x2c
   nop
   adc ch,al
   and ebx,0xd9f3a220
   cmovng di,di
   stc
   rcl ecx,0x1
   imul si
   clc
   sbb di,0x8702
   cmovnl ebx,ecx
   rcr cl,cl
   shl ecx,cl
   cmp al,al
   stc
   sbb ebp,ebp
   setl cl
   cmovc cx,dx
   cmp cx,0x5309
   shrd edi,esi,cl
   and edx,edx
   rcr ecx,0x1
   shl eax,cl
   and cl,0xf
   shrd bx,cx,cl
   and bx,0xf40c
   bts cx,0x1a
   sar dh,cl
   movsx edx,bp
   add cl,0xe3
   sbb bl,0x4c
   cwd
   clc
   xadd bp,dx
   movzx edx,si
   cmovnl si,bp
   clc
   rcr cl,0x1
   imul bx,bp,0xd01b
   sub si,bp
   sar dh,0xc7
   xor cl,dl
   cmovnbe eax,ecx
   cmove ebp,ebx
   or bh,0x7
   cmovng cx,cx
   cmovpo eax,esi
   bsf edx,ebp
   and cl,0x70
   bswap ebp
   imul ecx
   ror di,cl
   sub edx,ebp
   stc
   adc edi,0xf62dfc11
   btc ebx,0x91
   rcl bh,0x1
   and ebp,ebp
   clc
   rcr ah,0x1
   or cx,dx
   sar eax,0x1
   or al,0xba
   sar di,0x20
   btc bx,0xbe
   btc ax,bp
   xchg si,dx
   stc
   rcr edi,0x1
   setnc bl
   adc ah,0x1e
   btr ebx,edx
   stc
   sbb cx,bx
   cmovpo bp,bx
   bts dx,di
   cmpxchg bh,ch
   cmovl si,si
   shl di,0x1
   bt ecx,edx
   rcl dx,cl
   not di
   xchg di,bx
   ror dx,0x6d
   cmp esi,0x1d25c900
   shld ecx,ebx,1
   sub ecx,edi
   cmp bx,0x96f
   stc
   rcl dl,0x1
   btr dx,cx
   bsr ecx,ebp
   rol di,0x1
   ror edi,cl
   add si,0xba01
   xchg ebx,ebp
   dec al
   shrd esi,ebx,0x25
   shl ecx,0x1
   adc ecx,ebx
   cmp di,0xd4b5
   xadd bl,bh
   movzx edi,si
   mov ax,0xfdde
   or bl,0x4d
   cmovpo di,cx
   stc
   sbb bh,0xf
   setl cl
   sar ebx,cl
   cmp ah,0x5c
   stc
   adc cl,0x41
   mul dx
   shl eax,0xf8
   bt edx,0xfa
   rcr ecx,0x1
   sar si,0x27
   cmpxchg al,bh
   cmovpe ebp,ebx
   test bp,0x716f
   btc ecx,edi
   rcr bh,cl
   ror esi,cl
   shrd ebp,ebp,cl
   xadd edx,eax
   cbw
   sar bp,0x1
   sar dl,0x1
   inc bx
   lahf
   stc
   sbb ch,0xde
   clc
   adc ecx,ecx
   cmp edx,0x6bfad9d5
   shld eax,ecx,cl
   sub eax,0x25375777
   imul cx
   sub ch,0xe9
   shr ax,0x1
   add dx,si
   sar ax,cl
   or ebp, 0xc0000000
   and edx, 0x3fffffff
   div ebp
   ror bl,0x1
   mul ah
   stc
   adc ah,ah
   cmpxchg bp,si
   test ah,bl
   movzx ax,dl
   ror edi,0x1
   sbb al,0xa9
   lahf
   setns bl
   sub dx,bx
   clc
   adc ecx,eax
   shr esi,cl
   shr ax,cl
   nop
   btc edx,esi
   sub bx,0xf7b7
   shr ecx,cl
   shld ebp,ecx,0x76
   shr edi,cl
   mov bp,bx
   mov si,di
   ror ebp,0x5f
   movsx bx,dl
   bt edi,edi
   shl ch,0x1
   shr ax,0x73
   shrd bx,ax,1
   rcr bh,cl
   xadd ax,si
   xor ax,si
   clc
   adc ch,bl
   sub edx,0x675eed4c
   btc cx,0xca
   sahf
   stc
   rcl ecx,0x1
   clc
   adc di,di
   or dl, 0xc0
   and ax ,0x3fff
   div dl
   btc cx,0xe4
   rcr ebx,0x1
   test al,0x42
   xor ax,cx
   bswap esi
   cmovne cx,dx
   sub ah,0xae
   not ebx
   setnbe ch
   btc esi,0x3d
   setbe cl
   shr ebp,0xf
   bts edx,0xf0
   mov esi,ebx
   sar ch,0x1
   shl dh,cl
   imul di,bx,0x8aa9
   mov dx,0x2e45
   clc
   rcr bx,0x1
   shld edi,ebx,1
   test dh,0xe2
   bt cx,0xb1
   and esi,eax
   clc
   adc eax,0xa52da711
   lea di,[eax+0xf2ec85cf]
   and bl,bl
   xor si,0xd492
   ror esi,0x3b
   cmpxchg cx,bx
   mov cl,dh
   shr al,0x1
   stc
   adc di,cx
   xadd ch,bl
   test ecx,ebx
   and cl,0xf
   shld dx,bp,cl
   or eax,0x1b3d39a9
   and cl,0xf
   shrd bp,dx,cl
   sub cl,0x5c
   or bl,0x88
   setg ah
   rol si,cl
   sar ch,0x7e
   or edx,0xd9fe5d76
   stc
   rcr bx,0x1
   setno al
   test cx,0xf2d4
   setg al
   not bp
   ror al,cl
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   rol dl,cl
   mul eax
   shrd bx,si,1
   shl ebx,0x32
   dec ax
   and di,di
   movzx eax,di
   and cl,0xf
   shld bx,bp,cl
   shr cl,0x1
   cmp bp,cx
   and cx,0x9778
   shld esi,ebp,cl
   sar bh,0x1
   adc dh,0x76
   cmp dh,0xa6
   test ebx,esi
   rcr ax,cl
   shl bx,cl
   rol ch,0x1
   cmovnc si,bp
   and ax,bx
   dec bx
   stc
   sbb ah,cl
   sub cx,ax
   rcr bl,0xde
   xor ebp,edi
   or ebx,0x33a8342b
   xor dl,0xaf
   cmovc ax,bx
   mov cx,0x38e6
   clc
   rcl ebp,0x1
   shr cx,0xdf
   ror bl,0x1
   neg cl
   shl di,0x3a
   movsx bx,ch
   btc eax,0x52
   adc dh,0x61
   xor bp,0xd7da
   mov ch,bh
   btr edx,0x6b
   lea eax,[edi+edi*2+0x894d81bd]
   shl di,cl
   test ebp,edx
   clc
   rcr cx,0x1
   test ecx,0x954dcc5b
   movzx edi,dx
   rol ah,0x1
   or di,0x783e
   sar edi,cl
   xor edi,0x61a05ac
   sar esi,0x1
   rol di,0x1
   clc
   adc ax,di
   clc
   adc al,cl
   rcl ebx,0x1
   and ebx,0xd504f08
   setnc bh
   cmovbe bp,dx
   rol eax,0x99
   rol bl,0x17
   neg si
   cmovc bx,ax
   shr bx,0x82
   sub ebx,eax
   inc cx
   cmp dl,0x4a
   movsx eax,al
   rcr bh,0xfd
   shr cl,0xb1
   btc esi,0xf2
   setc cl
   sbb bh,0xdb
   cmpxchg si,ax
   stc
   sbb ch,cl
   and ecx,0xa705efc7
   clc
   rcl cx,0x1
   clc
   adc di,0xc68c
   cmovc ax,di
   cmovne ax,cx
   dec ah
   mul bl
   not ebp
   bts bx,0xed
   cmp eax,0x91e03aac
   imul bp
   or dx,0x9505
   lea ax,[edx+ecx*2]
   ror cl,cl
   xor dx,0x5728
   xadd edx,edx
   imul dx
   dec si
   or bp,ax
   rcl bx,0x1
   sar cl,0x1
   stc
   sbb bp,0x25a1
   cmp ch,0x4d
   cwd
   adc bx,bp
   cmovg edx,ecx
   test si,ax
   setc cl
   shrd ecx,ecx,1
   rcr bh,cl
   shl ch,cl
   movzx ecx,ch
   shr si,0xfe
   shr bp,0x6c
   xadd dx,di
   not si
   bt ecx,ebp
   shl di,cl
   shr si,cl
   and bl,0x30
   movsx si,al
   cmovl eax,eax
   rol bl,0x1
   shl ebp,0xcf
   shrd cx,dx,1
   rcl eax,cl
   shld bp,di,1
   neg bl
   clc
   sbb edi,0x3f623d0d
   inc bx
   xor ecx,eax
   setno dh
   cmovbe ecx,edi
   rcr ebp,0x81
   rol esi,0x1
   sar eax,0x89
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   sar eax,0xbd
   cmpxchg bh,bl
   and cl,0xf
   shrd di,ax,cl
   shr eax,cl
   neg edx
   shld bx,bp,1
   cbw
   cmovpo bp,cx
   or ecx, 0xc0000000
   and edx, 0x3fffffff
   div ecx
   clc
   movsx ebp,si
   sbb bp,0x819a
   ror bx,cl
   test dx,0xad48
   cmovne eax,esi
   setne bl
   shl bx,cl
   and cl,0xf
   shrd bx,di,cl
   bsr edi,edx
   and cl,0xf
   shld bx,dx,cl
   or bl,dl
   adc edx,ebx
   shrd esi,ecx,1
   test cx,0xcd85
   mul bh
   btc ecx,ebx
   clc
   rcr dl,0x1
   sub ebx,0xc5ccba8e
   inc	ch
   mov edx,0x70180d4e
   stc
   rcr cl,0x1
   sbb di,0x705a
   cmovng ecx,ebx
   xor dl,cl
   or ebx, 0xc0000000
   and edx, 0x3fffffff
   div ebx
   sar di,cl
   sar esi,cl
   mov cx,di
   cmpxchg esi,eax
   xchg bh,bl
   stc
   sbb cx,bp
   mul ecx
   xchg ebp,edx
   add si,0xac64
   xor ax,0x3169
   xchg al,dl
   shr ebx,0x3f
   sar ax,0x1
   stc
   sbb dl,0x54
   cmovs ebp,eax
   stc
   adc ebx,esi
   stc
   rcl di,0x1
   clc
   sbb eax,edi
   cmovng bx,dx
   and bx,si
   setpe cl
   rol bx,0xa0
   or cx,0x1662
   imul cx,0x35b7
   clc
   rcl dx,0x1
   ror ch,0x3c
   shr bl,0x5a
   shr cx,0x27
   movzx ebx,dx
   not edx
   xchg esi,edi
   imul edi,edx,0x8cd144c0
   sar eax,0x14
   xadd al,ch
   rcl edx,0x1
   test ah,0xfb
   setnl bl
   xadd ecx,ebp
   setc dl
   not cl
   xchg ax,ax
   shrd edx,edx,0x26
   clc
   stc
   adc edi,ebx
   clc
   sbb dl,al
   bt bx,ax
   clc
   adc edi,ebp
   rcl edi,0x1
   neg di
   rol ebp,cl
   shr ebp,cl
   cmpxchg ecx,ebp
   imul edi,edi,0xe232240
   btc esi,0x6c
   rcl al,0x1
   xor cx,0x4684
   not si
   cmovc cx,cx
   mul ah
   clc
   rcl dl,0x1
   sbb bl,0xba
   stc
   sbb di,bx
   sar edx,cl
   shrd cx,di,0x4
   not bh
   xchg ah,ch
   movzx esi,al
   neg edi
   or ebp, 0xc0000000
   and edx, 0x3fffffff
   div ebp
   shl ch,0x6f
   shl edi,0x67
   mov dx,si
   mul ecx
   shl cl,cl
   shr dl,cl
   shr bl,0x1
   xor bp,0xbd71
   rcr bh,cl
   bt ecx,ebx
   ror edi,0x1
   or bh, 0xc0
   and ax ,0x3fff
   div bh
   shrd bx,si,0xf
   shr al,cl
   mov cx,ax
   ror di,0x1
   movsx edx,bh
   bts si,bx
   shr edi,cl
   rol al,0x34
   nop
   and di,bp
   movzx edx,ah
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   shrd cx,di,1
   xchg cx,dx
   ror ebx,cl
   shr cl,0x1
   and di,si
   stc
   adc ax,cx
   cmovo bx,bx
   test bh,0x9e
   test dh,bh
   setnc dl
   clc
   adc ch,0x2e
   xadd al,dl
   sets cl
   neg bx
   cmovnbe cx,bx
   xchg cx,ax
   clc
   adc eax,0xbae8caed
   rcr edi,0x62
   xor al,0xc5
   test bh,0x45
   shl dh,0x7a
   bts ecx,0x93
   nop
   cmp si,ax
   cmp bp,0x221a
   shld edx,edx,0x56
   sub ebx,0x4afa933f
   cmpxchg dx,di
   add bl,0xa8
   cmpxchg ebp,ebx
   setl bl
   rcr eax,cl
   sub ebp,0x2f5d476b
   rcl esi,0x95
   bt ebx,ecx
   stc
   rcr bp,0x1
   sbb ecx,ebp
   rol dl,0x1
   imul ecx,ebx,0x91791be
   shld esi,ebx,cl
   or ebx,0xec85aedd
   stc
   adc di,0x5279
   cmp bh,0x19
   shr al,cl
   shl ch,0xb9
   btc bp,0x9b
   sub dx,0x5cbd
   cmovpe ebx,esi
   shld ebp,edi,0xa7
   shl si,cl
   cbw
   shr esi,0x17
   xadd eax,edx
   cmovl ebx,edi
   rcl ax,0x57
   xor al,ah
   cmovnl eax,ebx
   movsx si,dl
   cmovpo di,cx
   cmp eax,edi
   or bh, 0xc0
   and ax ,0x3fff
   div bh
   sar cx,0xc0
   shl bp,0x55
   xor dx,ax
   btr bp,0xa0
   ror di,0x1
   imul di,0x319a
   bts ebx,ebp
   adc ecx,ebp
   bts ebp,0xbb
   stc
   rcl bh,0x1
   stc
   adc dh,dh
   cwde
   dec dl
   rcl ebx,0x5a
   xadd si,si
   bt ebp,ebp
   cdq
   sub bx,0x3d1b
   shrd esi,edi,cl
   shl edi,0x9d
   xadd bl,al
   xor esi,0x9150f858
   btc di,di
   shl edx,0x32
   btr edx,edx
   clc
   sbb si,0x27cf
   ror edi,0xe9
   not al
   shld dx,ax,1
   and ecx,0xbda1e288
   rcr esi,0x1
   rol ebx,0x1
   setno cl
   and ax,0xf4dd
   btr bp,0x7c
   sub ah,0x70
   bt ax,si
   xchg edx,ecx
   mov ah,0x4e
   bt bp,0x43
   cbw
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0x6c89ade5

 pop gs
 pop edi
 pop esi
 pop ebp
 pop ebx
 ret
         .size   log_size_10_var_006, .-log_size_10_var_006

.globl log_size_10_var_007
         .type   log_size_10_var_007, @function
log_size_10_var_007:
 push ebx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0x39badf54
  mov ebx,0x304f173d
  mov ecx,0x7aa08a38
  mov edx,0x33f027bf
  mov ebp,0x79e95e57
  mov esi,0xdf80c342
  mov edi,0x784e85c9
   ror edi,cl
   btr dx,0x8a
   test eax,eax
   add edi,edx
   sub ebp,edx
   stc
   rcr si,0x1
   adc eax,edi
   cdq
   ror bp,0x82
   bt edi,0x2f
   adc esi,0x39cffc9e
   rcr cx,cl
   movzx ebp,bl
   ror bp,cl
   cdq
   shrd di,ax,0x2
   mov edi,0x9159e74f
   bts esi,ebx
   sar cl,cl
   dec eax
   ror dh,0xb
   movzx cx,bh
   not bl
   add ah,0x4c
   add cl,al
   setnl bh
   rol eax,0x1
   clc
   rcr dh,0x1
   stc
   adc ax,0x50da
   cbw
   cmovnc bx,bp
   cmc
   neg bx
   ror dl,cl
   inc	esi
   imul dx,bx,0x79c6
   test di,0xed01
   cmovpe cx,si
   test ah,bl
   rol si,0x1
   xadd ah,dl
   and cl,0xf
   shld cx,bp,cl
   bt eax,ebx
   test bh,0x79
   rol cl,cl
   btc edi,0xb8
   clc
   adc edi,ebx
   cmovns edx,esi
   xor ax,0x2f0b
   movsx edx,cx
   setnbe dl
   rcr ax,0x28
   bts ecx,0x25
   imul dx
   sbb cx,di
   cmovpo cx,ax
   sar esi,cl
   shl cx,cl
   test ebp,0x597889aa
   movzx ebp,al
   cmovs ax,si
   setns ah
   stc
   rcr bx,0x1
   cwd
   rol dx,cl
   imul bp,0x6002
   or eax,0x4774802e
   cmove edi,edx
   test bx,ax
   shld esi,edi,1
   shld esi,esi,cl
   test ch,0x86
   cmovnc edx,ecx
   shld esi,ecx,0xbc
   test edi,ebp
   shl eax,0x1
   sbb si,bp
   stc
   sbb cl,dl
   ror al,0x1
   xadd cx,ax
   xchg dx,si
   rcr edi,0x1
   xor ch,al
   xor dx,0x6cd9
   dec al
   shl edx,cl
   imul edi,0x96fa19ff
   nop
   bts ebx,0x58
   rol dh,0x42
   shl ebx,0x1
   neg bh
   btr bx,di
   rcr ebp,0x1
   sar ecx,cl
   sahf
   ror cx,0xf5
   mul eax
   movsx edx,al
   rcr cx,cl
   sub cx,0x25b3
   bt ebp,0xf2
   xor ax,0x127e
   shr eax,cl
   test bh,0xc8
   shld edx,edx,1
   cmovpe esi,eax
   shl ebp,cl
   imul dx
   stc
   rcr ecx,0x1
   stc
   sbb ah,0xd0
   shr bx,cl
   rol dx,0x1
   mul ebp
   btr ebx,0x67
   neg bp
   clc
   adc ebp,ebx
   neg bl
   rcr bx,0x75
   imul bp,bx,0x38a4
   clc
   adc bx,cx
   bt ebp,ebx
   shld si,si,1
   cmovne si,bp
   movzx esi,si
   cmovc di,bp
   sete al
   bswap ebx
   rcl bl,0xcc
   xchg cx,ax
   shl edi,cl
   imul ecx,esi,0x8ff07b3d
   test ebp,ebp
   cmovl bx,ax
   test bp,ax
   xchg dh,dl
   dec ebx
   mul ecx
   clc
   adc bp,0x3693
   ror ax,0x1
   xor edx,edx
   shr ebx,0x1
   shl edi,cl
   sar ax,0x3e
   sub eax,ebx
   movsx cx,bh
   xor edi,0x43639191
   stc
   sbb ax,bx
   shr bx,0x1
   bts ax,0x76
   shr edi,cl
   rol cl,cl
   ror dl,0x1
   stc
   adc ax,cx
   cmovc esi,ecx
   sub bx,si
   movzx ecx,cl
   cmovo esi,edi
   and cl,0xf
   shrd ax,di,cl
   inc	ebp
   movsx ebp,cx
   sar al,cl
   imul ebp,0xed0ca373
   btc ebp,0xb2
   movsx edx,bp
   adc eax,esi
   bts di,di
   cbw
   xchg si,dx
   rcl dl,0xef
   movzx bx,bh
   cmpxchg dh,ch
   test bh,cl
   shld cx,bx,1
   rol dh,cl
   btc bp,0xb
   clc
   rcl si,0x1
   inc di
   sbb ax,0xb424
   btr ax,0x4a
   bt ebx,ebx
   rol ecx,cl
   test cl,0xcf
   cmovnc bp,ax
   stc
   rcl ecx,0x1
   add ax,di
   rol bx,0x52
   and ax,bp
   mov bp,ax
   clc
   sbb edi,ebx
   lea ecx,[esi+ebp*4+0xdff13c7e]
   shld ebp,ecx,cl
   shr eax,0x1
   cmp ch,0x0
   cwd
   sar bx,0x1
   shld eax,ebx,cl
   shl si,0x1
   xchg edi,esi
   rol dl,0x1
   btc bp,dx
   setnc ch
   rcr di,0x1
   rcl di,cl
   mov ecx,0xba0def22
   or ebp, 0xc0000000
   and edx, 0x3fffffff
   div ebp
   or cl,bl
   rcr dl,0x90
   btc esi,0xb3
   sar di,cl
   clc
   clc
   adc si,di
   rcl esi,0x9b
   shl bh,0x1
   bt ebx,esi
   sub edx,0x1db733d0
   bts ax,0xf5
   shld edx,edi,1
   xor esi,ebp
   sar eax,0x1
   sbb bx,di
   stc
   rcl di,0x1
   dec bl
   xchg di,bp
   rcr bl,cl
   cmp edi,0x797364b2
   setl dh
   ror ebp,0xec
   shr edi,0x93
   xor ecx,0x8f19ff68
   lea esi,[ecx+esi*8+0xdbf09306]
   and ah,0x76
   cmovpo di,ax
   shrd dx,bx,1
   cmovnc eax,eax
   not ch
   cmovng ecx,ebx
   rcr dh,0x1
   and ah,0x9b
   setnc ch
   xor di,0x4652
   rcl di,0x9b
   shld edi,ecx,0xcf
   shrd di,bx,0x0
   sub edx,0x2db178a6
   btr si,0x73
   btc ecx,esi
   rcr ah,0xdc
   add di,ax
   rol al,0x1
   rcl dx,cl
   movsx ax,al
   xchg bl,dl
   movzx ebx,ah
   xor ebp,0x428960af
   clc
   rcl esi,0x1
   sar eax,cl
   shrd ebx,edi,0x4f
   add dh,0xb0
   add dl,0x25
   mul ebx
   cmp edx,0x4af9c452
   rcl bh,0x9e
   and cl,0xf
   shrd dx,ax,cl
   shr ecx,0x95
   or dx,si
   xadd ah,al
   ror ch,cl
   shld bp,dx,0xf
   or bp, 0xc000
   and dx, 0x3fff
   div bp
   rol ebx,0x99
   shr edi,cl
   ror edi,0x1
   rcr al,0x1
   inc	ecx
   cmovng bp,bx
   cmovbe eax,ebx
   movsx di,ch
   ror dl,0x1
   bts ebp,ebp
   neg ebp
   sets ch
   shr dx,0x57
   mov di,ax
   mov dl,0xd0
   sub dx,0x6198
   shl esi,0x1
   movzx bp,dh
   rcr ecx,0xc9
   dec dl
   sub di,dx
   shld edi,eax,0x79
   btc bp,0x87
   btr esi,ebx
   clc
   sbb ebp,ebp
   cmovo ebx,eax
   cmp cl,0xe0
   stc
   sbb dl,al
   setpo bl
   movsx ax,bh
   rol bl,0x1c
   or bx, 0xc000
   and dx, 0x3fff
   div bx
   sub bx,si
   or dh,0x35
   rcl ebx,0x1
   rcl ch,0xef
   sar ecx,0xec
   cbw
   xor edi,ebx
   xor cl,bl
   cmovng edi,esi
   mov cx,0xff6a
   sbb edx,ebx
   cmovnbe ebp,edi
   xadd edx,eax
   setbe bl
   imul bp,0xd4ee
   cmovo edx,ebx
   rcl ebx,0xf9
   shr bp,cl
   ror bp,0xca
   sub ecx,edi
   clc
   rcl bh,0x1
   sbb dl,0xb4
   add edi,ecx
   test ebp,ecx
   movsx esi,di
   movsx ecx,cx
   bts ecx,ebx
   rcl dl,cl
   btr edi,0x8a
   cmp edx,ebp
   sub ebx,0x419474b0
   xadd edx,esi
   sub di,bx
   cwde
   stc
   adc ecx,edi
   shld ebx,ebp,cl
   neg dx
   neg edx
   cmc
   lahf
   ror eax,0x1
   sub ebp,0x4179d8e1
   bts esi,0x9a
   imul bh
   test cx,0xc946
   setns cl
   rcl edx,0x1
   cmc
   rcr ebx,0x1
   shl si,0x80
   dec eax
   cmovg ebp,esi
   cmp edx,0x536f793f
   shl bp,0x40
   shrd ebx,ecx,cl
   bt di,bp
   imul edi
   bts cx,0x8e
   shrd bx,di,1
   sbb al,bh
   shr ax,0x1
   btc ax,ax
   sar bl,0xe8
   and ax,0xf852
   rcl bp,cl
   add ebp,0x703c7342
   ror bx,0x1
   or cl,0xa3
   shr ecx,cl
   sub cx,di
   rcl ebx,0x1
   adc ecx,edx
   shr ebp,0xa3
   shl ebx,0x12
   shrd ebx,ebx,0xcd
   shl ax,0x1
   imul si,dx,0x42e7
   bt ebp,ebx
   bts bp,0xfb
   xadd bp,ax
   rcr dx,0x1
   neg ebp
   setpe al
   cmovne di,ax
   clc
   sbb cl,bh
   rol cl,0x1
   cmovc ecx,ecx
   bswap ebp
   bts ax,si
   shrd edx,esi,cl
   add ebx,edi
   imul edx,ecx,0x997dc3db
   rcr bp,0xb0
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   mov ebx,0xcfca3261
   test eax,ebx
   clc
   rcl bl,0x1
   stc
   adc ecx,0xb9860ff7
   rol bx,0x1
   sub bh,0xca
   setpo cl
   clc
   sbb di,0xef23
   ror edi,0x1
   clc
   rcr bp,0x1
   stc
   adc eax,0xd48f8ce6
   bt esi,edx
   cmp ah,ch
   lea esi,[ebx+ecx*4+0xe70da2a2]
   cmovc bx,si
   clc
   rcl ebx,0x1
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   movsx ebp,dl
   btr cx,ax
   btc ecx,0xe5
   clc
   sbb edi,0x84c7208a
   cmovnbe esi,edx
   dec cx
   ror si,cl
   sar dh,cl
   xadd ecx,esi
   cmove edi,ecx
   lahf
   cmp si,si
   ror edx,cl
   imul bp,0x648a
   mov dx,bx
   rcr cx,0x8c
   shr al,0x1
   btr ecx,0xae
   clc
   sbb di,0x51f9
   inc	esi
   shr ch,cl
   btr bx,dx
   clc
   rcr edx,0x1
   rcr ax,0x90
   xadd dh,al
   rol ecx,0x1
   stc
   adc edx,edx
   rol di,cl
   sar edi,0xd8
   imul ax,0xae41
   add cx,0xa84d
   mov cx,0xa33d
   btc edx,ebp
   rcr dh,0xb
   btc si,0x84
   adc ch,bh
   movzx ax,ch
   shl cx,cl
   imul dx,bx,0xb1b5
   clc
   adc dl,ah
   bts dx,0xbd
   rcr cx,0x1
   nop
   clc
   rcr edi,0x1
   shr bp,0x1
   mov al,0xe7
   sar ebp,0xf0
   neg dx
   shr edx,0x1
   cmp ebp,edi
   shr dl,0xb2
   sahf
   mov esi,0x6bb64101
   lea ax,[esi+ecx*4+0x6b]
   stc
   adc ecx,0x8bc730cb
   shld eax,eax,0xc2
   sub dh,0x99
   xor dx,ax
   btc edi,ebp
   clc
   rcr ebx,0x1
   rcl esi,0x1
   test ah,0x19
   shl dh,cl
   sub ebp,edx
   shrd cx,cx,1
   clc
   inc	edx
   stc
   adc cx,0x813e
   mov cl,0xda
   clc
   sbb edi,edx
   add cl,ch
   sub eax,edi
   cmovpe cx,bx
   shrd ecx,esi,1
   mov al,bh
   stc
   sbb dl,0xf1
   rcl ah,0x1
   mul cl
   cmp ah,0xd6
   mov ebx,ebx
   adc di,0xdcf4
   or ch,0x32
   shl dh,0x1
   cmp cx,0x9470
   cmovnl di,si
   setpo ah
   clc
   adc al,dl
   cmovg edi,esi
   ror cx,0x1
   rcr dh,0x1
   bts esi,0xa6
   test al,0xae
   or edi,0x6b29dc3d
   sbb si,dx
   bt bp,0x38
   and cl,0xf
   shrd bp,si,cl
   test ecx,0x782d28a
   shrd edi,edi,cl
   cmpxchg si,dx
   ror bx,0xee
   test bh,dl
   bswap ecx
   rol ebx,0xb
   cwd
   rol bp,0x6a
   xor bl,al
   sar dl,cl
   btc ecx,eax
   inc	bh
   sets dl
   xor cl,bl
   rcr ecx,cl
   sar edi,0x1
   shl si,cl
   or ebx, 0xc0000000
   and edx, 0x3fffffff
   div ebx
   test ebx,0xfcb2f4e7
   ror edi,cl
   cmp ch,cl
   sar dh,0xb
   and cl,0xf
   shld cx,di,cl
   btr edx,ebx
   cmovnc dx,bp
   add bh,dl
   dec bp
   xor ax,dx
   rol di,cl
   bswap ebx
   add bl,dl
   or cl,0x3b
   not esi
   setne dh
   add ax,di
   stc
   rcl edi,0x1
   cmp dx,ax
   stc
   rcr esi,0x1
   sar bh,0x1
   movsx si,al
   and cl,0xf
   shld bp,si,cl
   or dh, 0xc0
   and ax ,0x3fff
   div dh
   shl edx,0xff
   shr edx,cl
   rol al,0xcd
   shl ch,0xdd
   mov edi,ebx
   shr ax,0x1
   imul ebx
   shrd bp,di,1
   mov al,0xf9
   cwd
   sar esi,cl
   cwd
   not esi
   neg cl
   add esi,0xb1fa897c
   shld ebp,esi,0x15
   ror cx,0xda
   not edx
   or esi,edx
   sub bp,0x66d7
   sahf
   shld ebp,eax,0x65
   mov bl,ch
   mov ch,bl
   nop
   btc ax,dx
   adc edi,ebp
   sar dl,cl
   mov bx,0x7a0c
   rol cx,0xe8
   shr dh,0xe3
   neg cx
   cmovnbe bx,bp
   ror ecx,cl
   or di, 0xc000
   and dx, 0x3fff
   div di
   rol bp,0x1
   clc
   rcl cl,0x1
   rol al,cl
   bts ebx,0xe9
   ror dl,0x1
   clc
   adc bl,0x43
   btc edi,0x55
   lea eax,[ebp+0xcd95a45b]
   sbb di,0xf0b0
   rol ax,0x1
   and cl,0xf
   shrd ax,si,cl
   ror cx,0x1
   xor cx,cx
   movzx dx,cl
   cmovng edx,esi
   shr dl,0x1
   sub ax,ax
   shl cx,0x1
   ror cx,0xe0
   imul bp
   bt eax,0x96
   sub ch,0x66
   sar al,0x1
   adc bx,0x917f
   cmovs edx,ebp
   cmovpe bx,bx
   setnbe ch
   cmovno ebp,esi
   cmovbe ax,bp
   stc
   sbb esi,0xb07cc74a
   cmovg ebx,edi
   mov bp,bx
   and dx,ax
   stc
   rcr ax,0x1
   ror esi,0x1
   and bh,0x3c
   stc
   sbb dl,al
   sbb ecx,0x752b3af1
   cmovng di,dx
   cmovg edx,edi
   xor dx,di
   cmovpo ebp,ebp
   xadd cx,dx
   add al,al
   rcr cx,0x1
   or ebx,edx
   setg dl
   shr edx,cl
   sub edi,esi
   adc ax,0xa947
   cmp cx,dx
   movsx ebp,ax
   add dx,0x286f
   imul esi,edi,0xfd65cd59
   movzx edx,al
   rcr dx,0xa4
   bt bx,0x5
   movzx edx,ch
   stc
   rcl cl,0x1
   mov ah,dl
   stc
   rcr ah,0x1
   rcl dl,cl
   imul bx,ax,0x4fb0
   sar bp,0xab
   shl ch,cl
   shl di,cl
   shr edx,0x35
   bt si,dx
   rcl si,cl
   xor esi,0x4b3238a4
   sete cl
   mov ebx,0x95577f97
   sub ebx,0xa6a005ad
   btr ax,0x33
   sbb esi,0xb8af8c2a
   test bl,0x90
   clc
   sbb ecx,0x3c9f808e
   rcr bl,0x9f
   shld ebx,ebp,0xcb
   imul di,0x8c4f
   and bh,0xa3
   and cl,0xf
   shrd ax,si,cl
   xor esi,0x4f0c3365
   lea bx,[eax+edi*4+0x6733b175]
   setne ch
   shrd ebx,ecx,1
   and dx,bp
   rol cl,0x5c
   shr ebp,0x1
   neg al
   sets cl
   clc
   sbb dl,0xd3
   rol cl,0x73
   btr bp,bp
   and ah,0x1d
   rcr ch,0x1
   movsx edx,bp
   shld ebx,edx,0x3
   bts ebx,0xbc
   and cl,0xf
   shld dx,dx,cl
   inc	eax
   inc	bl
   cmovpe cx,bp
   neg bl
   cmovnbe ecx,ebx
   sbb al,0xc5
   sbb ecx,0x8897f95f
   rcr cx,0xd9
   rol dx,0x1
   test ch,0x66
   shl edi,cl
   imul si,bx,0x282e
   movzx ebx,di
   sbb bh,dl
   mul bp
   shl edi,0x5b
   rol cl,cl
   bts si,0xe2
   rcr di,0x1
   mul bh
   sar ecx,cl
   rol dl,0x1
   movzx cx,bh
   cmovnc ecx,edx
   shrd ebp,eax,0xce
   shr ebx,cl
   not ch
   shld di,bx,0xe
   sub edi,0xf1fd80e2
   bswap esi
   rcr ebx,0xb6
   sar bh,0x6b
   shrd bp,ax,0xd
   rol edx,0xd1
   btr esi,0x3c
   xor ebx,0x1088d03a
   or ebx,0x9875002d
   cmp ah,bl
   ror bx,cl
   shl edi,0x1
   rcr ch,0xd2
   xchg bx,di
   shrd esi,edi,1
   cdq
   bts bx,dx
   dec edi
   clc
   rcl ebx,0x1
   cmovc di,bp
   shl bx,cl
   not ah
   shr edx,0x1
   bt ax,0x46
   and bx,cx
   adc di,si
   rcr esi,0x1
   rcr esi,0xa6
   ror eax,cl
   and cl,0xf
   shrd si,ax,cl
   shl bx,0xaa
   btc esi,0x19
   sub ah,dh
   sahf
   cmovns cx,dx
   xchg ecx,ebx
   cmovbe eax,edx
   rol esi,0x1
   sahf
   shl ax,cl
   shl al,0x1
   bt ax,0xfd
   and bx,0xdeb3
   stc
   adc dx,0x1cb2
   stc
   rcl eax,0x1
   xchg di,dx
   sahf
   xor eax,0x1fff6efc
   setne bh
   cwd
   stc
   sbb bx,0x3aab
   cmove ecx,ebx
   sete ah
   ror bx,cl
   ror cx,0x7e
   test bp,dx
   rcl ebx,0xab
   shld eax,eax,cl
   ror dh,0x1
   clc
   sbb ah,al
   setnl bl
   stc
   rcl ax,0x1
   cmp si,ax
   btr eax,0xf
   xor bp,ax
   or edi,edi
   movzx si,bh
   shr dh,0xfd
   bts si,bp
   shrd eax,esi,0xce
   imul edx,0x1de0683f
   ror bx,0xf5
   test edx,edi
   stc
   sbb bp,dx
   xadd dx,bx
   not al
   shld ebx,ebp,0x33
   sar bl,cl
   or ebp, 0xc0000000
   and edx, 0x3fffffff
   div ebp
   shrd cx,dx,1
   add cx,di
   sub dl,bl
   stc
   sbb bh,0x40
   btc ebx,0xcc
   lea edx,[eax+edx*4+0x12]
   clc
   rcr ebx,0x1
   sahf
   cdq
   cmovnbe eax,ebx
   bt si,0xf0
   bswap esi
   cmpxchg ax,ax
   sub ebx,0x1a65b3cf
   cmovc edi,eax
   and ax,0xf401
   shld ecx,edx,cl
   mul dx
   stc
   sbb esi,ecx
   shl ecx,0x2e
   rol ecx,0x1
   btr ax,bp
   or bx, 0xc000
   and dx, 0x3fff
   div bx
   clc
   shr edi,0xe8
   shld ebp,esi,1
   sbb eax,0xee70f99
   movzx esi,bp
   xadd ch,ch
   and cl,0xf
   shld si,cx,cl
   add dx,dx
   and cl,0xf
   shrd cx,di,cl
   bt di,cx
   shr di,0x1
   xchg dl,al
   ror esi,cl
   or ebp,esi
   shr dh,cl
   shl bh,0x1
   rol dx,0x1
   shrd bp,di,0x0
   shl edi,0x1
   stc
   adc esi,ebx
   clc
   rcr di,0x1
   cmovno dx,bx
   rcl si,cl
   btr edi,0x6
   rcr ch,cl
   movsx bp,al
   and cl,0xf
   shrd ax,cx,cl
   sar dx,0x61
   cbw
   or ax,0x63a7
   shr edx,cl
   xor ch,0x20
   setc bl
   rol dl,0x1
   clc
   sbb bx,bp
   cmp al,0xaf
   neg edi
   shr ch,cl
   mov ch,cl
   bts dx,dx
   rcl dh,0x1
   rol si,0x81
   ror bl,0x20
   sar ebp,0xa6
   imul edx,0xb501ef7a
   not al
   shl dh,0x1
   rol cl,0x1
   clc
   sbb ecx,ebp
   bt di,dx
   sub edi,0x3cb35448
   sar ecx,0xe6
   shl dl,0x1
   rcr al,0x73
   btc si,0xee
   clc
   adc eax,0x99d37f8d
   test al,bh
   test ebp,esi
   cmovno ax,dx
   imul edi,ebp,0xb6a433fa
   adc ecx,0x69d5192b
   not ah
   sub ebp,0xed2dcab
   xor esi,0x521f0e49
   ror ah,0x1
   bts eax,edi
   btr dx,bp
   inc di
   neg bh
   or bl,0xcc
   cmpxchg eax,ecx
   sar ecx,0xea
   sub ebp,0x4dea8bb5
   mul cl
   shr di,0x50
   btr bp,di
   nop
   clc
   adc dh,bh
   cbw
   cmovl esi,edi
   stc
   sbb edx,esi
   mov bl,0x31
   mul di
   and bp,0x5bb3
   rcl ebx,0x52
   xadd ax,bx
   rcr di,0x1
   stc
   rcl esi,0x1
   rol al,0xed
   btc esi,0x14
   shr bx,cl
   or ah,0xc
   shl bl,0x1d
   sub edi,0xa2ec11dc
   movsx si,bl
   cdq
   cmove ax,dx
   cmovs di,si
   stc
   rcr edx,0x1
   clc
   rcr cl,0x1
   rol edi,0x0
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0xac7a4d5a

 pop gs
 pop edi
 pop esi
 pop ebp
 pop ebx
 ret
         .size   log_size_10_var_007, .-log_size_10_var_007

.globl log_size_10_var_008
         .type   log_size_10_var_008, @function
log_size_10_var_008:
 push ebx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0xa49e9ca3
  mov ebx,0xd0fa68c3
  mov ecx,0xb1e1ce21
  mov edx,0x7bab5227
  mov ebp,0xdea890d1
  mov esi,0x1bcffe4b
  mov edi,0x4c0b674
   sar cl,0x54
   add ah,dl
   stc
   rcl si,0x1
   movzx eax,cx
   sub bp,0xdaee
   movzx bx,bh
   dec bp
   adc dl,bh
   cmc
   cmovno cx,bx
   rcl ax,cl
   mul al
   imul ax,ax,0x676c
   rol dh,cl
   or ecx,edx
   clc
   adc bh,0xf0
   mov ax,bx
   cdq
   cmovne si,dx
   btr bx,0xd4
   imul al
   cmpxchg ecx,esi
   stc
   adc dx,0x5235
   stc
   sbb ebx,0x16f26ec
   cmovc ax,bp
   setpo dl
   shr edx,0x59
   imul dx,bx,0x4c27
   cmp ch,0xad
   imul bl
   cmovo eax,ebx
   xor cx,bp
   cmovne cx,si
   rol ah,cl
   or ecx,0xd5e69f3
   setnbe bl
   xadd bh,bl
   xor ebp,ebx
   cmovc edx,edi
   rol bh,0x1
   shrd eax,edx,cl
   xchg ch,ch
   mul esi
   setno dl
   sub al,0x57
   sub dh,ch
   xchg bx,bp
   ror dl,0xb4
   neg esi
   stc
   rcl ebx,0x1
   btc bp,ax
   bts ebx,0xfe
   stc
   adc dx,cx
   cmp ch,ah
   cmp ax,si
   shrd ecx,ecx,1
   cmovc ebp,edi
   shrd di,dx,1
   sete bh
   sub ebp,0x26bda5ca
   adc bx,0xfbd8
   adc dl,0xc5
   shrd di,si,0xe
   test esi,0x8a9fdd10
   mov edi,ecx
   sbb ax,dx
   imul bx,0xa934
   adc dl,dh
   cmpxchg ax,di
   shl bl,cl
   xadd bp,cx
   xchg ch,bl
   setnl cl
   stc
   adc bp,0x101a
   cmc
   not ebp
   cmovpo edi,eax
   cmc
   xchg bx,cx
   and eax,eax
   mul dh
   shr dh,0xc2
   rol bx,0x1
   setnc bl
   clc
   sbb dl,ch
   shr si,0x1
   cmp dx,0x1a8c
   rcl cx,cl
   rol bh,0xab
   xor ah,cl
   setpe bh
   mul ax
   btr ecx,0x8f
   and si,cx
   stc
   rcl ebp,0x1
   shl bl,0xff
   shr cl,0x1
   clc
   sbb cx,bp
   test ax,si
   cmovc esi,edi
   sub bx,si
   nop
   add ecx,edi
   rcl ax,0x1
   mov dh,0x23
   bts eax,0x7b
   rol ch,0x90
   dec dx
   sar dx,0xce
   cwd
   sub ebp,ebp
   cmovpo edi,eax
   stc
   adc al,0x81
   imul edi
   bts esi,ebp
   rcl bh,0xe3
   btc ebp,ebx
   shr ax,0x3d
   shl bh,cl
   sar cl,cl
   shr di,cl
   sahf
   cmovne ebp,eax
   xchg al,bh
   bts di,bp
   cwd
   clc
   adc eax,0x133c284b
   rcr edi,cl
   add cl,0xc4
   btr ecx,0x51
   add ax,ax
   cmovl ebp,esi
   cmpxchg ax,ax
   sub cx,di
   sub dx,0xbdbf
   add edi,ebp
   ror ebx,cl
   add di,0x2d1a
   rcr bh,0x1
   cwd
   adc edi,ecx
   rcl ch,0x27
   sub bl,0x96
   ror al,0x1f
   rol si,cl
   shrd dx,ax,1
   rcr cx,0x1
   imul bp,0x6fb1
   cmp di,bp
   rol ch,0x5e
   shr bx,0x57
   shld ax,ax,1
   cbw
   add dl,dh
   btr cx,0x33
   mov ax,0x9e9d
   and cl,0xa8
   imul bx
   stc
   rcr ebx,0x1
   rcl ebx,cl
   bswap ebx
   sub ax,cx
   rcr dh,0x1
   shl cx,0x1
   shld ebx,edx,1
   clc
   sbb ax,di
   cmp si,0xb32
   shl bh,0xe
   add dl,0x4e
   btc di,0xf0
   sar al,cl
   and dx,bp
   clc
   sbb esi,0xbd1ac59a
   stc
   rcl di,0x1
   mov bh,0x9c
   xor ecx,0xb7c20033
   neg bl
   cmove eax,edi
   sar eax,cl
   xor bp,0x8fe5
   rol cx,cl
   shr ax,cl
   xor ebx,ecx
   cmovpo ebx,esi
   cwde
   adc ebp,esi
   cmovnbe cx,dx
   cmp edi,0x80e9b5f4
   stc
   rcl cx,0x1
   and cl,0xf
   shld dx,cx,cl
   btr bx,di
   clc
   sbb bp,bx
   and ebx,edi
   clc
   sbb edx,0xc819122b
   rcl ax,0x4f
   xor ebp,0xf66f6145
   sbb ecx,ebp
   ror edx,0x1
   mov ch,0x75
   cmovc cx,dx
   seto ch
   clc
   adc bx,0xa8b1
   stc
   sbb di,0x1ab8
   and ebp,0x852e2066
   bswap edx
   lahf
   cmovnbe edx,edi
   cmovc esi,esi
   imul eax,0x422e39f6
   shld ebp,eax,0x16
   shl dl,cl
   xadd cl,cl
   bt ecx,edx
   rol bp,0x55
   sahf
   clc
   rcr esi,0x1
   shl dx,0x71
   test bl,bh
   rcr cx,0x84
   shl dh,0x89
   btc ebx,0x30
   neg ax
   stc
   adc cx,bp
   cmovg ecx,ebx
   sbb si,0x633f
   xchg eax,ebp
   clc
   sbb dl,bh
   clc
   sbb bp,0xd23f
   btr bx,0x55
   stc
   sbb dh,ch
   ror ax,0x1
   shr cx,0x45
   shl edi,0x57
   sub al,0x57
   movzx eax,bp
   setc cl
   rol bl,cl
   sub eax,0xcaefb388
   imul bx
   xor bx,0xcb72
   shrd ebx,eax,0x50
   shl eax,cl
   ror bl,0x1
   clc
   adc bx,0x2bb2
   sub ebx,0x3a19145c
   cmovnbe cx,cx
   setl dh
   stc
   sbb ch,dl
   shrd esi,edx,0x68
   dec dx
   xchg edx,ecx
   test bl,dh
   shl ah,0x53
   shld ebp,ecx,1
   cmp ax,si
   sbb bp,0xed5d
   lahf
   clc
   rcr si,0x1
   bt esi,edi
   shl bp,0x5f
   shl ax,cl
   add dl,dh
   bt eax,edx
   stc
   sbb al,0x18
   cmovbe dx,bx
   stc
   rcr ah,0x1
   rcl ecx,0x64
   and cl,0xf
   shld di,ax,cl
   not di
   imul di,0xe5ee
   stc
   sbb si,di
   cmp ah,bl
   mov dh,0xe8
   xor ebp,0xc402f809
   ror dh,cl
   shr ecx,cl
   neg ebp
   sbb bx,dx
   cmp esi,edx
   clc
   sbb bx,bp
   bts ebp,0x3e
   stc
   rcl bp,0x1
   bts ecx,0x9b
   stc
   adc edi,0x284b6f44
   cmove bx,ax
   xchg bx,ax
   shld dx,cx,0x2
   lea eax,[edi+ecx*4]
   rol bl,0x1
   rcr dx,0x1
   cmovc esi,eax
   sbb bp,0x685b
   stc
   rcr ebp,0x1
   stc
   rcl edi,0x1
   cmp bx,0xd1f3
   clc
   rcl ebp,0x1
   clc
   adc ax,0xe9f1
   rcr ax,0x1
   xchg ax,dx
   ror cx,0xc7
   or bh, 0xc0
   and ax ,0x3fff
   div bh
   shrd bp,bp,1
   movsx bx,dh
   mov bh,0x6c
   sub dh,0xaf
   sar ax,0x1
   rol edi,0x1
   bts bp,0x92
   rol bh,0x72
   xadd si,bp
   btr si,dx
   sar bh,0x1
   rcr ch,cl
   imul al
   btc bp,0x50
   shl ax,0xaa
   xadd eax,eax
   inc bp
   adc ebx,edx
   dec edi
   clc
   sbb esi,edx
   not si
   stc
   rcl edi,0x1
   btr dx,di
   and ebx,0xa3ca7c1f
   rol edi,cl
   test ebx,edx
   adc ah,0xb5
   cmovl ax,cx
   clc
   sbb ah,ah
   movzx bp,dh
   dec ah
   xor cl,0x7c
   cmovl eax,edx
   xchg si,ax
   xor ecx,ecx
   xchg edi,edi
   dec esi
   and ebx,eax
   setpe bl
   shl bp,0x3a
   xchg ax,dx
   test ax,cx
   adc dl,ah
   or cl,0xfb
   ror ah,0x5b
   shl cx,0xaa
   rol dl,0x1
   ror esi,cl
   add ebp,edi
   sar dx,0x6b
   cmp ebx,ebx
   clc
   sbb cx,si
   shr dl,0x1
   xadd cl,bh
   cmovno di,dx
   sar dl,0x1
   neg cl
   rol cl,0xa9
   and dh,dl
   stc
   sbb dh,0x56
   sahf
   cwd
   sbb cx,cx
   cmove ax,bp
   sar ebx,0x1
   rcr bp,0x1
   and cl,0xf
   shrd si,bx,cl
   imul di
   rcr ecx,0x1
   movsx ecx,ax
   bts dx,cx
   rcr edi,0x57
   rol cx,0xad
   ror bp,0x1
   clc
   adc ax,0x1a81
   btc di,bp
   rcr dl,0x55
   inc	bh
   ror ch,0x1
   cmovnc bp,cx
   rol al,0x13
   shl bx,0x1
   sub eax,0x6699ffc4
   stc
   sbb bh,0x87
   test ebp,0x20fa1284
   add edi,eax
   xor edi,esi
   sar esi,0x1
   shld ecx,ebx,0xbe
   cmp si,0xdcf3
   mov ebx,0x977d35cf
   mov esi,esi
   mul ebp
   rcl cx,cl
   cwd
   xadd cx,dx
   rol bl,cl
   cwd
   not si
   not ah
   sub di,0xe04b
   movsx cx,ah
   cmovns cx,di
   cmovnl cx,dx
   xor ecx,esi
   xchg ebx,edx
   sar dl,0x1
   clc
   adc di,0xbf0f
   movzx ax,al
   shr ebp,cl
   xadd eax,eax
   btc cx,bx
   xor ax,ax
   cmovno si,bp
   or cx,di
   or ebx,0xbef2d5c
   xor ah,0xbe
   ror ax,0x1
   sbb si,0xaa9b
   xchg ax,ax
   xor edi,0xe9d56a45
   btr edx,0x2e
   stc
   sbb dl,al
   rcl ax,0x1
   shld ax,di,0x4
   movsx cx,cl
   xchg esi,eax
   not edx
   shr ebx,cl
   sub ch,ch
   add edx,esi
   sbb bl,bl
   setng ah
   shl esi,cl
   rol eax,0x7c
   shrd cx,bp,0xd
   btc ebx,0xb6
   cmovnc bx,si
   test cx,0x8075
   neg bl
   and cl,0xf
   shld cx,cx,cl
   cmpxchg bh,ch
   shl cx,0xee
   shld ax,bx,1
   sar si,0x1
   sar ah,0x56
   dec bp
   shr al,0x74
   mul ch
   cmovo edi,ebx
   rol edi,0x95
   bts bp,di
   sbb al,bh
   cwd
   adc cl,bh
   neg cl
   clc
   rcl dl,0x1
   cmpxchg cl,bl
   shld ecx,ebx,0x2b
   mov dh,bh
   cmp ecx,edx
   setne ch
   inc	ecx
   setl ch
   shl eax,0x3d
   shr bl,cl
   dec ch
   ror ebx,cl
   shrd edi,edx,0x71
   ror ch,0xbd
   or ecx,0x7df37cb3
   rcr bx,cl
   test ch,0x62
   imul esi,edi,0xd87888f0
   rcr ch,0x1
   bts ebx,0x29
   ror cl,0x1
   shld di,dx,0x4
   cbw
   shr ch,cl
   mov edi,ebp
   shrd ebp,ebx,1
   sar eax,cl
   sar ah,0x1
   clc
   adc ah,0xe8
   shl bl,cl
   and esi,edi
   shld cx,bx,1
   mov edi,eax
   clc
   rcl al,0x1
   clc
   xchg si,cx
   shrd edi,esi,cl
   btc ecx,ecx
   imul ah
   cmp di,0xcc5c
   stc
   rcr bx,0x1
   clc
   adc bh,0xf1
   add bx,bp
   ror ecx,cl
   bswap edx
   cwd
   inc	bl
   and cx,0xde49
   and ebp,edi
   imul bx,ax,0xa380
   clc
   sbb eax,esi
   bt bp,0x15
   shld si,bp,1
   btc eax,0xb4
   cmpxchg ebp,ebx
   clc
   rcl edx,0x1
   dec esi
   adc edx,0x6afcc66a
   cmovno ebp,ebp
   setg bl
   add ecx,ebx
   imul ax
   rcr ebp,0x1f
   imul eax,esi,0x7c2a7066
   stc
   adc dh,0xd7
   test esi,ebp
   xor si,dx
   setbe bl
   bts di,di
   rcl dl,0x41
   sar ah,cl
   bts si,0xc4
   shld si,si,1
   ror ebp,0x1
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   cmp dl,0x6a
   or ecx,ecx
   xor dl,al
   sar cx,0x30
   btr bp,dx
   or bl,bl
   sbb ax,0x8a8e
   ror al,0x1
   neg bl
   and esi,ecx
   cbw
   xor di,cx
   clc
   adc bl,0x68
   add bp,0x20f3
   cmovpo edx,edx
   stc
   adc bh,0x33
   btr eax,ebx
   mov bl,al
   test esi,eax
   rol esi,0xe5
   xor dx,di
   rcr edx,0xe2
   and ch,bl
   clc
   sete dh
   shrd ebp,edx,1
   xadd bp,cx
   cmovng edx,edx
   cmovc bp,ax
   cmove edx,ebx
   setnc ah
   dec edx
   cmovnc esi,ecx
   cmovpe ebx,ebx
   bt bx,bx
   clc
   adc ebp,ebx
   seto al
   bt edx,ecx
   or ebp, 0xc0000000
   and edx, 0x3fffffff
   div ebp
   not dl
   and cl,0xf
   shld cx,cx,cl
   ror ax,cl
   add ax,0x6a0
   xor edi,0x945ad662
   rcl bp,0x1
   cmp bp,0xd8d4
   add al,0x89
   clc
   sbb ch,0x94
   btr bp,0x53
   mov ebp,esi
   stc
   adc ebp,0x4eaac473
   shld edi,ecx,0x46
   sar ecx,0x1
   rcl edi,0x70
   or al,0xde
   xor dx,ax
   btr dx,dx
   rol dl,0x1
   btr ebp,eax
   shl cl,cl
   dec esi
   neg ah
   cmovbe edx,ebx
   cmovs edx,eax
   xor ax,0xb73e
   shr ch,0x1
   shl esi,cl
   movsx ecx,di
   ror di,0xed
   xor ah,dh
   cmpxchg ax,di
   sar edx,cl
   ror di,0x1
   test dh,al
   stc
   sbb ch,dh
   and ah,dh
   sar dl,0x88
   sar dx,0xb2
   inc cx
   shl ax,0x7b
   rol al,cl
   sar ecx,0x27
   rol ax,cl
   neg eax
   neg bx
   clc
   rcr ecx,0x1
   stc
   adc cl,al
   mov ecx,0x5845ad3e
   xor edx,ecx
   cmove bx,di
   clc
   adc ebx,esi
   imul ebx,0x729269b9
   rcl ax,cl
   inc	ecx
   ror ecx,0x1
   stc
   adc bh,0xc5
   inc	ch
   movzx ecx,bh
   clc
   sbb ebp,ebx
   ror bl,cl
   btc cx,0x3b
   rol cx,0x1
   cwde
   cmovo bp,cx
   imul edx,0x1fe7e902
   xchg bl,al
   add bh,0x79
   mov cl,bl
   xor esi,eax
   shl cl,0x1
   and edi,ebp
   stc
   rcl bx,0x1
   ror si,cl
   shl ax,cl
   and ebp,esi
   add ah,0xf
   bt bp,0x5e
   cmovbe edx,ecx
   stc
   rcl ch,0x1
   bt ecx,eax
   rcr al,cl
   shrd eax,esi,0x15
   mov di,cx
   bt ebx,0x12
   rcr dl,cl
   and bx,bx
   clc
   rcl di,0x1
   stc
   adc bp,ax
   shrd bp,bx,1
   bts ecx,0xc1
   sar dh,cl
   movsx si,ah
   sub dl,0x72
   setnc bl
   cmovs cx,ax
   cmovo eax,ebx
   inc	ah
   shl di,0x1
   btr bx,bp
   imul ecx
   stc
   rcr di,0x1
   sbb edi,0xc1436b9
   shl si,0x1
   rol eax,0x1
   test bx,si
   stc
   rcr ebx,0x1
   shl dh,cl
   movsx edi,al
   or bp, 0xc000
   and dx, 0x3fff
   div bp
   shr ch,cl
   xadd cx,di
   shl di,0x13
   xadd ah,dh
   shrd eax,ecx,1
   shr bx,0x0
   xadd bh,bh
   shrd bx,cx,1
   rcl esi,0xac
   or dx,cx
   cmovns ebx,eax
   mov ebp,0x675a012a
   bts esi,edx
   stc
   adc dh,al
   mul bl
   dec dx
   clc
   rcr cl,0x1
   rol edi,cl
   movsx bp,dl
   imul edx,esi,0x3a4bb9b6
   clc
   sbb bh,ch
   clc
   rcr eax,0x1
   rol ebx,0x1
   cmovo si,si
   stc
   adc eax,0x83065a16
   rol cl,cl
   sar ebp,0xf2
   not ebp
   bt ebp,0x50
   mov bl,0x95
   cdq
   movsx di,dl
   neg si
   clc
   adc dx,0xebbc
   not ebp
   mul dx
   mul al
   or ebx, 0xc0000000
   and edx, 0x3fffffff
   div ebx
   shrd esi,ebx,1
   setnbe bl
   sar dh,0x13
   xchg ebx,edi
   shl bx,0x5
   btr bx,0xa0
   stc
   adc ecx,0xdd862aa6
   stc
   rcr eax,0x1
   clc
   rcl ebp,0x1
   dec ecx
   bt ebp,0x1f
   setnbe ch
   rcl bl,0x52
   or dh, 0xc0
   and ax ,0x3fff
   div dh
   not esi
   imul bl
   sar bx,0xbe
   sub edi,ecx
   rol cl,0xfc
   test esi,edi
   test dl,bl
   sahf
   stc
   adc di,ax
   cmovnc ebp,edx
   or cl,dh
   setnl dl
   xadd esi,ebp
   sar cx,0xf
   movzx ebx,al
   bsr edi,edx
   and bh,0x36
   cmovns edi,esi
   shl ecx,0x34
   sar ebx,cl
   xor dh,ah
   shrd bx,dx,1
   adc eax,0x2157cc65
   cmovc dx,bp
   or ebx,0xb0c5fbb6
   shrd dx,si,0x2
   shr dl,0x1
   and ch,0x3e
   bt bp,0xce
   movzx eax,al
   sete bl
   sbb bh,0xac
   setg dh
   not di
   shr cx,0x1
   stc
   rcr cx,0x1
   cwd
   clc
   adc bx,si
   bsr eax,esi
   sahf
   adc al,ah
   setne al
   not bl
   rcr edi,cl
   or cx,bx
   shrd di,bx,1
   sets dh
   movzx eax,ch
   lea edx,[ecx+eax*8]
   clc
   rcr ch,0x1
   add al,0xa8
   stc
   adc dx,0xdf37
   cwde
   rol dh,0x1
   rcl ch,cl
   or ecx,ebp
   sar bp,0xe4
   sub al,bl
   stc
   rcl dl,0x1
   rcr ebx,cl
   shr dl,cl
   shld si,si,1
   cmovng bp,bp
   cmovg cx,dx
   sar cx,0x1
   bsf ecx,ebp
   imul ebx,esi,0xbfc3a584
   stc
   adc si,0x72b0
   cmovne edi,ecx
   clc
   adc cx,0x65b6
   setnl ah
   shl dx,0x1
   xor dh,ch
   inc	cl
   rcr bl,0x1
   shld ebx,ebx,1
   stc
   adc cl,0x4
   shl di,0x33
   test bh,0x2a
   shrd eax,ebp,1
   or edi, 0xc0000000
   and edx, 0x3fffffff
   div edi
   xor edx,0x7f3b076d
   clc
   adc cx,0x8ae4
   rcl di,cl
   ror cl,0x75
   rol ax,0xa5
   and cl,0xf
   shrd bp,si,cl
   inc	edi
   not ch
   setpo bl
   shld eax,ecx,0xda
   test edx,0xb0e9cc5b
   cmovc bx,dx
   xor edi,0x164da44d
   and dh,ch
   imul bx
   rol ecx,cl
   bts edi,0x7c
   rol dx,0x1
   xor ebx,0x8c3152e0
   bts ecx,0x6a
   shl esi,0x85
   cwd
   rol dl,cl
   xadd si,cx
   clc
   rcr edx,0x1
   rcr ch,0x7f
   neg bl
   shld ebx,eax,0xbf
   imul esi
   stc
   rcl ebx,0x1
   xor ebx,ebp
   or ah,0xd4
   shr edx,0xf5
   rol ebp,cl
   nop
   btr si,bp
   rcr eax,0x1
   cmovo eax,edi
   shr bx,0x1
   stc
   sbb di,0xea57
   setnl bl
   stc
   adc cl,dh
   cmpxchg ebp,ebp
   cmc
   sar eax,cl
   rol ebp,0x1
   clc
   sbb bx,bx
   cmp ebx,0xc8b359c
   setnbe dh
   shr ah,cl
   shr di,0x5
   neg dl
   imul bx,0x2a4c
   neg ebp
   cwd
   clc
   rcl ch,0x1
   rol bl,cl
   mov edi,0xe05be005
   shr dx,0x1
   inc	ah
   setpo ch
   cwde
   test dl,bh
   clc
   rcr ah,0x1
   xchg cx,si
   bts ax,0x14
   rcl di,cl
   shr al,0x54
   shrd eax,edi,1
   lea edi,[ebp+ebx*4+0xf2]
   inc	al
   bt bp,0x91
   sar dx,cl
   imul ax,bp,0xa657
   clc
   sbb ebp,0x50bcf210
   imul si,0x1873
   add bl,ah
   setbe al
   setnc ah
   cmovg eax,ebp
   ror bx,cl
   neg ebx
   shld si,cx,1
   btc ebp,ebx
   btc bx,cx
   or ebp, 0xc0000000
   and edx, 0x3fffffff
   div ebp
   shld dx,ax,0xe
   test edx,ebx
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0xd976e7a6

 pop gs
 pop edi
 pop esi
 pop ebp
 pop ebx
 ret
         .size   log_size_10_var_008, .-log_size_10_var_008

.globl log_size_10_var_009
         .type   log_size_10_var_009, @function
log_size_10_var_009:
 push ebx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0x5e2b707
  mov ebx,0x3b111d
  mov ecx,0x9f0cc96f
  mov edx,0xcb3f08d5
  mov ebp,0x7254f3da
  mov esi,0x30f686a3
  mov edi,0x608fdccb
   mov bh,0xc7
   mov bh,ah
   sub ah,0xd
   shrd ecx,edx,1
   cmovpe ax,dx
   rcr dl,0x1
   btr di,0x5c
   sbb esi,eax
   setbe al
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   bts eax,0x5b
   bt ebp,0x77
   shr ebp,0x1
   stc
   sbb cx,bp
   btr eax,ebp
   bt edx,0x64
   btr bp,0x73
   cmp dh,dh
   cwd
   rcl esi,0x1
   imul cx
   shr cl,0xb3
   xor bp,0x3b6e
   sbb bx,ax
   stc
   adc dx,0x4d
   stc
   rcl dl,0x1
   shld bp,si,1
   sbb ecx,ebx
   add edx,ebx
   test ecx,0x652e2d21
   shld bp,bx,1
   setne ah
   inc	ecx
   cmovne ax,ax
   btc esi,edi
   rcl eax,0x1
   sub bp,0x781d
   rcl edi,cl
   test esi,0xf7a46d1a
   sbb bh,0xd3
   clc
   adc dx,di
   clc
   sbb bp,0x612c
   rcr edx,cl
   shl ax,0x71
   movsx ax,al
   bt ebp,0x84
   lea bp,[ebp+0x43f9d45f]
   adc si,0xa1e
   rcl ecx,0x1
   cmp si,dx
   setno bl
   cmp ebp,0x920ccafd
   add cl,0x6f
   shl eax,cl
   inc	eax
   neg ecx
   stc
   adc eax,0xf0869e8b
   sahf
   rol eax,cl
   or bl,0x70
   sete ah
   sar al,0x97
   cbw
   xor ax,ax
   rcr bl,0x1
   clc
   adc ebp,0x12354ecd
   ror ch,cl
   not ebp
   bsf esi,ebp
   add ebp,0x9de7182c
   shrd dx,di,0x8
   nop
   shld di,dx,1
   cmovnbe ecx,eax
   shrd esi,ebx,cl
   or eax,0xd5ce5ec6
   or edi,edi
   btc esi,0x2f
   cmove ecx,eax
   clc
   rcl ax,0x1
   ror di,0x1f
   dec bl
   and esi,edi
   sbb dx,bp
   cmovpo cx,bx
   shr dl,cl
   cmp bh,0x3a
   cwde
   rcr edi,0xa9
   bsf ebp,ebp
   or bl, 0xc0
   and ax ,0x3fff
   div bl
   neg dl
   shrd bp,si,1
   sar di,cl
   test ah,0xa0
   or cl,bl
   clc
   adc ch,0xf8
   clc
   rcl di,0x1
   clc
   sbb ah,al
   clc
   sbb edx,0x8ba957c
   clc
   sbb edx,edi
   cmovc dx,bp
   shrd ebp,ecx,0x15
   or bp,0x550b
   shl ecx,0x6a
   bts bx,bx
   bswap edx
   ror bh,0xa1
   add dl,0x20
   adc bx,0x4d37
   setns bh
   stc
   adc ecx,edx
   inc	ebp
   or dl,bl
   btc edx,ebp
   stc
   adc bp,di
   stc
   sbb cx,0x398a
   shrd edx,edx,0x85
   sub cl,0xa3
   shr bx,cl
   shr edi,cl
   mov ah,0x6b
   shr cx,0xa0
   rol bx,cl
   cmpxchg bh,al
   shld ebx,eax,1
   and ax,0x3a5b
   lahf
   stc
   adc bx,0x1259
   cmovpo bp,cx
   stc
   adc cx,ax
   sahf
   setng ah
   add ebx,0x7548e5f3
   or eax, 0xc0000000
   and edx, 0x3fffffff
   div eax
   dec si
   rol bp,0xcb
   cmp cl,0xa6
   rcl al,cl
   and ebx,0x659bb69
   xadd dl,cl
   cmovs bx,dx
   clc
   adc ch,dl
   cmovne ax,dx
   rcl ebp,0x1
   nop
   clc
   rcl edi,0x1
   cmpxchg cx,cx
   shrd eax,ebx,1
   cbw
   ror cl,cl
   rol edx,0x1
   adc esi,eax
   stc
   rcr dl,0x1
   sbb bp,0xfb9b
   cmovnl si,bx
   cmovc bx,dx
   test edi,0xe50fbd78
   xor dl,0x6c
   rcl cx,cl
   shrd edx,ecx,0x10
   sub cx,0xa3cb
   cmovg esi,ebp
   setnbe cl
   btr eax,0xe6
   or esi,esi
   not al
   shr bh,cl
   and bp,0x101e
   or ebp,edx
   stc
   sbb bp,di
   cmp eax,ebp
   and ah,0xd2
   cmovs cx,si
   cmovno bx,dx
   bt dx,0x3f
   sub ah,0x45
   xor esi,0xe150a974
   rol ecx,0x1
   shr ch,cl
   sub bl,0xe6
   clc
   adc bx,0x5986
   bts si,0x41
   btr bx,bp
   inc	dl
   sar edi,0x1
   and bh,0xe0
   adc ecx,0x8f416666
   clc
   sbb edx,eax
   cmovl dx,ax
   shr al,0x1
   xor ax,0xad17
   shrd esi,eax,cl
   sar edi,0x1
   or bx, 0xc000
   and dx, 0x3fff
   div bx
   bswap ebp
   bts eax,0x95
   shld bx,bx,1
   sbb bx,0x8648
   inc cx
   bt si,0xf2
   stc
   rcr bx,0x1
   ror ch,0xd7
   btc ecx,eax
   rol bx,0x89
   sar edi,cl
   shrd dx,bx,1
   stc
   adc ecx,ebx
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   shl ax,cl
   and bl,dl
   cmovnl cx,ax
   inc	ah
   xor dh,0x8d
   shr ax,0x99
   sar eax,0x1
   stc
   sbb ch,0x37
   rol dx,0x2d
   sub ebx,0x776c53f7
   movsx edi,ch
   clc
   adc bh,0xec
   add edx,edi
   xor bx,si
   shl dl,0xc9
   xchg si,dx
   sahf
   stc
   adc edi,edi
   imul dh
   inc	esi
   cbw
   cdq
   movsx bp,dh
   sub edx,0x2e25ff0b
   clc
   sbb bp,ax
   rol cl,0x1
   setnc ah
   clc
   adc bx,0xedc3
   adc bx,0x5a8f
   cmovg ebx,ebp
   clc
   rcr bl,0x1
   cmp ax,0x1ef6
   shr bx,0xc2
   shld bx,bp,1
   stc
   rcl cx,0x1
   rcl eax,0x1
   sahf
   setg bh
   btc esi,0x1
   cmove ebx,ebx
   shr dh,0xf2
   or edx,edx
   neg bx
   cmovg ebx,ecx
   shrd eax,edx,0xce
   and si,0xc489
   cmovl bp,dx
   movsx edx,ch
   cmovpo cx,dx
   sar bl,0x1
   sub ch,bl
   cmovnbe esi,ecx
   clc
   rcr bx,0x1
   shrd edi,esi,0x6f
   shl di,cl
   add ch,bh
   cwde
   clc
   adc bx,0x62ec
   test ax,si
   setnbe bl
   setnbe ch
   cwd
   nop
   not edx
   cmovpo eax,ebp
   sar si,0x79
   xchg ah,bh
   movzx eax,bp
   nop
   mov dx,0x556b
   shl edi,cl
   xor bx,dx
   shrd edx,esi,0xd4
   or cx,ax
   not edi
   cmp edi,edi
   imul bx,bx,0xc4f0
   rcl ebp,0xdc
   test bl,0x57
   test di,bx
   cmc
   rcl dl,0x1
   clc
   rcr bp,0x1
   stc
   rcr dx,0x1
   sub bp,0x2c46
   bsf edx,edx
   lea esi,[esi+ecx*4+0xfe]
   bt ax,0x6b
   rol ah,cl
   shr bx,0xec
   shr al,0x75
   shr cl,0xd5
   btc ax,ax
   and edi,0xb55baab
   inc dx
   rcr dx,cl
   sub dx,bx
   adc dh,ch
   clc
   adc ecx,edi
   shld ecx,ebp,0xb2
   neg bp
   cmpxchg cl,dl
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   inc	bh
   and cl,0xf
   shrd cx,bx,cl
   mov bh,cl
   bt dx,bp
   rcl dl,0x4d
   neg ah
   mov edx,0x48912232
   not si
   stc
   rcr ebp,0x1
   clc
   adc bx,0xb8e7
   movzx edx,si
   and di,0x73b0
   sets al
   shl bh,cl
   btr si,0x79
   ror dh,0x27
   nop
   sub dl,0xbd
   imul ecx,edx,0xac9e0255
   sar dx,cl
   inc	edi
   mul al
   rcr ebx,0x9c
   btr cx,0x1f
   clc
   rcr dh,0x1
   inc	bh
   setc dh
   btc esi,ebx
   stc
   rcl al,0x1
   shl ax,0xb3
   ror edi,cl
   mul bh
   rcl dx,0x1
   mov edi,0xe58fa5da
   btr edi,edx
   xor ax,bx
   mov ch,dh
   cmovpo ebx,ecx
   shrd ebp,esi,0x71
   add di,0xb7a1
   xor dh,0x27
   btc ecx,esi
   rcl ebx,cl
   imul bx,si,0x728
   cmc
   mul ax
   btc esi,0x87
   movzx eax,si
   movzx ebx,bp
   test dh,cl
   ror al,0x1
   clc
   sbb edx,ebp
   cmovg bx,si
   shld eax,ebx,cl
   mov cl,ah
   cbw
   not edx
   sahf
   clc
   rcr cx,0x1
   rcl ebx,cl
   rol al,cl
   cmp ax,0xfca7
   cmp cx,0xbb79
   rcl ax,cl
   and ax,0x466a
   rol al,0x85
   test dx,bx
   bswap esi
   rol bl,cl
   xor ax,0xd6f5
   shld dx,bp,0xf
   sub esi,0xd9c62977
   clc
   rcr bx,0x1
   stc
   rcl esi,0x1
   bt eax,edi
   shl si,0x3e
   rol dl,cl
   shr ah,cl
   xadd al,bl
   btc cx,cx
   add ax,cx
   add bp,0x297b
   setne bl
   rol cx,0x63
   rol ch,0x1
   ror eax,0xdd
   shrd ecx,eax,1
   shl bl,0x1
   rcl cx,cl
   bts di,0xed
   rcr bl,0x1
   btr ecx,ebx
   sar ebx,0x1c
   dec dx
   imul ebp,edi,0xffba4d00
   bswap esi
   ror ah,0x1
   adc dx,0x652e
   rcl ebx,0x33
   bsr ebp,edi
   sar esi,0x69
   xor bx,0x4ba6
   cmovnc si,dx
   cmovpo bx,bp
   cmovc si,di
   rol cl,cl
   rol bx,0x1
   imul eax
   stc
   rcr bp,0x1
   or bl, 0xc0
   and ax ,0x3fff
   div bl
   shld cx,bp,0x9
   cwd
   ror dh,0x40
   rol ah,0x85
   dec bl
   add dh,cl
   clc
   adc dx,0xfad5
   sar cx,cl
   sar al,0xda
   add edx,0xc9634845
   stc
   sbb ecx,edi
   cmovng ax,bx
   cmovne cx,cx
   or ch,0x1
   add cx,bp
   shld si,ax,1
   rcl al,0x34
   xor al,0x55
   sbb ebp,0x19308df6
   cmovg bp,ax
   xchg dx,bx
   cmp al,0xa8
   btr eax,ebx
   cmovnbe di,bp
   rcr al,0x86
   cmp di,0xd8cd
   shl dx,0x1
   xadd eax,edi
   shl dx,cl
   shld edx,edx,1
   clc
   cmovno ebx,ebx
   setpe dl
   setpe cl
   neg si
   sub ax,dx
   test di,bp
   cmp bx,ax
   adc dl,0x62
   cmp esi,0x118995c0
   imul eax,ebp,0x5c1c5036
   cmp bl,0x40
   cmc
   imul edx
   clc
   adc esi,edi
   inc bp
   bts bp,bx
   rol cl,0x1
   and dx,0x91a6
   shl ecx,0x6b
   shrd cx,bx,0xd
   ror ebp,0x1
   mov eax,0x456a33c3
   cbw
   add di,bp
   rcr ebp,cl
   btr ax,di
   stc
   sbb ah,ch
   rol dx,0x57
   ror dh,cl
   shr bx,0xa6
   ror ecx,0x3a
   cmp di,0x3cea
   adc bp,0x89dd
   cmovns esi,ecx
   imul ebp,0xa2eeda2f
   rol ah,0x1
   rol edx,0x76
   sub ebp,0xbb241cf7
   shld edi,edx,cl
   not si
   shld si,di,1
   shl dl,0x6a
   cmp ah,ah
   sub bx,si
   clc
   rcr ax,0x1
   shld bp,si,1
   sbb esi,esi
   adc cl,bh
   clc
   adc bp,ax
   ror ebx,cl
   sub al,0xa5
   sar esi,cl
   cmp dl,0xc7
   and edx,0x56717d0b
   xor dx,si
   rcl bp,cl
   xadd di,dx
   stc
   rcr esi,0x1
   shr bx,0x1
   movsx ebx,bp
   ror dx,cl
   cmp cl,0xbd
   btc cx,0xd6
   mov ax,bx
   imul bx,cx,0x5180
   dec edx
   or bx,di
   rcr ax,cl
   ror bp,0x9a
   cwde
   xadd bp,ax
   sub bh,bl
   clc
   adc ebp,esi
   setnbe bh
   and esi,esi
   shl ebp,0xe1
   movzx bx,bl
   add ecx,ecx
   mov dh,bl
   mov ax,0xcd6f
   rcl bx,0x1
   shl bx,0x1
   dec esi
   inc bx
   xchg ax,bx
   and di,bx
   rcr ax,cl
   sar cx,0x1
   rcl edi,0x1
   cbw
   clc
   sbb esi,edx
   shr ebx,cl
   bsr esi,edi
   xor cx,0x608f
   lahf
   shr bx,0xe2
   xchg ecx,esi
   sar bl,0x28
   xor bl,ah
   test eax,eax
   rol edx,0xbd
   ror ch,0xfe
   shl ecx,cl
   btr edx,edi
   stc
   sbb dh,al
   shrd edx,edx,0x52
   ror eax,0x1
   btr eax,ebx
   test ax,si
   bsr edi,esi
   inc	ebp
   and ebp,eax
   rol cx,0xd7
   or dh, 0xc0
   and ax ,0x3fff
   div dh
   xadd edi,eax
   not dx
   rol ecx,0x1
   mov ebp,edx
   clc
   adc edi,esi
   xor si,0xb2ad
   and bl,cl
   clc
   sbb cx,bx
   stc
   adc di,0xd50
   sar bp,cl
   imul edx,0xb1673732
   btc eax,0x39
   bt ecx,ecx
   inc	ecx
   lea bp,[edi+ebx*8]
   test edx,0xeaf30b49
   shld ebx,eax,cl
   shrd ebp,edx,cl
   shr ebp,0x1
   shr dl,cl
   shr bl,cl
   imul edi
   test bl,0x1
   cmovnbe eax,edi
   cmp ecx,ebx
   shr ebp,cl
   and ch,0xc
   cmp si,0xf830
   add bh,0x5c
   cmovns ebx,ebp
   cmovns edx,ebx
   cdq
   add edx,0x35737ba3
   rcr bp,cl
   shr dl,0x37
   shr bh,cl
   inc	esi
   test al,0x37
   mul ebp
   and al,0xe8
   shld esi,eax,0x12
   cbw
   and di,bx
   cwd
   bsf esi,edx
   sar edi,cl
   xor ebp,ebx
   adc ax,0x2de0
   shr eax,0xd5
   cmpxchg edi,ebx
   cmp dl,ah
   movzx ebx,dx
   sahf
   setnbe al
   xor cx,bp
   setpo al
   cmovne dx,bp
   and cl,0xf
   shrd ax,si,cl
   clc
   cmp ecx,0xc19873b5
   or edi,edx
   lea bp,[ecx]
   ror cx,0xa1
   btc cx,cx
   imul dx,0x479
   shr si,0x1
   inc	dh
   setl ch
   shrd esi,ecx,0x3
   test bx,0xb0de
   sub bx,si
   shl ecx,cl
   clc
   stc
   sbb ch,ch
   stc
   sbb cx,0x6bad
   ror eax,cl
   test bx,0xa06a
   sar eax,0x61
   test bx,0x5bef
   setg ah
   shl di,0x1
   cdq
   add eax,ebp
   rol eax,cl
   dec ebx
   test bh,bl
   shr ebp,0x1
   cmp cx,0x8feb
   cmovbe ebp,ebp
   clc
   sbb al,0x6f
   cmove dx,si
   stc
   adc cx,di
   stc
   sbb si,0x310c
   dec dh
   cmc
   nop
   test di,0x9e
   cmp esi,0xaf04858
   cmovs ecx,edi
   imul di
   stc
   sbb bx,0x9e9b
   movzx bx,dh
   ror ecx,0xb5
   ror di,cl
   shl dh,0x3e
   bt ebx,edx
   rcr eax,0x0
   shr dl,cl
   test ch,bl
   cmovo bx,ax
   and ebp,0x814e410
   clc
   rcr ah,0x1
   and di,cx
   mov dx,cx
   add al,bl
   setnc al
   setpe ch
   not bp
   nop
   cwde
   shrd bp,ax,0x5
   btc bx,bp
   cbw
   add ecx,ebp
   shrd ebx,eax,1
   mov dx,0x4786
   mov bp,bp
   neg ebx
   setng bl
   cmovbe si,cx
   sete dl
   xor ebp,esi
   setnbe bh
   or bl, 0xc0
   and ax ,0x3fff
   div bl
   rol di,cl
   test si,cx
   rcl ebp,0x33
   sar ecx,0x59
   sar si,cl
   sub ebp,esi
   rcl di,0x1
   shl bx,0x8b
   not bp
   mov cx,cx
   imul edx,edx,0x56eff2fe
   adc dx,0x7af0
   stc
   rcl cl,0x1
   cmpxchg dx,bx
   shld ebx,ebp,cl
   shrd si,ax,0x9
   test bx,0x71fb
   shl dh,cl
   mov si,bx
   shld esi,ebx,cl
   shrd di,bp,0xf
   mul dl
   cmp dl,ch
   or al,cl
   btr si,0x28
   cmovnc esi,edi
   xor bl,bh
   rcl ebx,cl
   shr cl,0xae
   cdq
   cmpxchg eax,ecx
   sets ah
   xor edi,0xefac5121
   btr bx,bp
   clc
   adc esi,0x4df8d8e2
   setnc ch
   cmpxchg cx,bx
   cmp ecx,edi
   bt esi,ecx
   stc
   adc ah,ah
   clc
   adc cx,dx
   imul bx,0xa9e9
   stc
   sbb bl,0x42
   test ebx,0x6727ef0d
   rcl di,0x1
   mul ebx
   mul ax
   cmovno eax,edi
   rcl ebp,0x2
   shl si,0xcd
   cdq
   add si,0x14b1
   clc
   sbb edi,esi
   cmovnbe edx,ecx
   adc al,bl
   btr eax,edx
   stc
   adc ax,si
   stc
   sbb bp,0x9520
   sub ebx,eax
   rcr dx,0x73
   bt ecx,0x65
   sub al,ch
   bt dx,ax
   ror dx,0xdb
   shl bh,0x61
   cmp ch,dh
   xchg dh,ah
   clc
   sbb di,bp
   bts si,0xe7
   rol bx,0x32
   cwde
   sahf
   clc
   btc bp,0xbd
   stc
   rcl bp,0x1
   xor edi,edi
   sar di,0x25
   bts ecx,0x9d
   inc bx
   sar ax,cl
   xadd di,ax
   cmpxchg edi,esi
   shr bp,0x9b
   rol ch,0x1
   clc
   adc edx,0xf7138ba
   test cl,dl
   sar edx,0x1
   rol edx,cl
   shl al,cl
   shr cx,cl
   rol ax,0xaf
   not bp
   test al,0xdc
   rcl si,0x11
   ror ebx,0x47
   or edi,0x3f888fc1
   or ecx,0x17af3e21
   xadd dl,dl
   mov bx,bp
   shl cx,0x1
   stc
   sbb bp,0xf8e4
   shld esi,ebp,cl
   sub bp,dx
   cmovg cx,ax
   btr edx,edx
   cmp bh,0x7c
   stc
   adc esi,esi
   rcl edx,cl
   sar cl,cl
   dec bh
   sub ecx,ecx
   btr di,0x68
   sub ch,0x23
   clc
   rcr ebp,0x1
   stc
   adc bx,0xb689
   setpo al
   imul edi
   inc	ah
   cmovl bp,si
   clc
   adc ch,0x7b
   stc
   rcr esi,0x1
   stc
   rcl bx,0x1
   test di,bx
   clc
   sbb bp,di
   ror edx,0x1
   or bx,di
   bsr ecx,ebp
   rol bp,0xb8
   xor ax,bx
   sar eax,0xef
   shr ebx,0x1
   test bp,0xf5c3
   cmc
   or cl,0x5b
   ror dh,0xb
   sub eax,0x607371b7
   btc ax,dx
   bts si,0x88
   sub ax,di
   sar edx,cl
   test ax,bp
   and cl,0xf
   shld dx,si,cl
   mov ah,0xa3
   cmp di,0x685c
   cmpxchg dx,cx
   sub ebx,ebp
   clc
   adc bh,bl
   adc bh,bl
   shr bx,0xf
   btr ax,0xda
   shl ah,0xef
   ror cx,0x1
   rcr al,0x1
   neg bh
   rol ch,0x4
   sub bh,dh
   cmovg bp,cx
   sar si,0xc5
   ror si,cl
   mov ch,al
   and ch,0xf0
   rcr eax,cl
   rol dl,cl
   shr ax,cl
   or di, 0xc000
   and dx, 0x3fff
   div di
   or cl,cl
   rcl edx,cl
   shl bh,cl
   shr dh,cl
   imul bp,0x94
   adc cx,cx
   cmove cx,bx
   cmovc bx,dx
   clc
   sbb ebx,esi
   or ah,0x2c
   stc
   rcl ebx,0x1
   sar bh,cl
   and ch,cl
   imul si
   rcl bx,0x1
   clc
   adc dh,0xbb
   sbb eax,edi
   setne bl
   dec ecx
   clc
   adc di,bx
   ror al,cl
   shld cx,cx,1
   cmovbe cx,cx
   shr dx,0x1
   or bx,0xa7f5
   sub bp,0x9dda
   btr ebp,0xa1
   sar edx,0x1
   neg ecx
   or ch,0x57
   shld edx,ecx,1
   sete dh
   bts bx,0x7b
   shr eax,0x70
   btr esi,esi
   test bh,dh
   cbw
   setns bh
   sar si,cl
   dec ebx
   imul bp,0xa960
   movzx esi,dh
   seto bl
   sbb ch,0xe2
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0x84301d94

 pop gs
 pop edi
 pop esi
 pop ebp
 pop ebx
 ret
         .size   log_size_10_var_009, .-log_size_10_var_009
