
        .file   "a.c"
        .text
.intel_syntax noprefix


.globl log_size_10_var_000
         .type   log_size_10_var_000, @function
log_size_10_var_000:
 push ebx
 push edx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0x7f3f63be
  mov ebx,0xb3b3d881
  mov ecx,0xf82870c2
  mov edx,0xe1f68e46
  mov ebp,0x84e76500
  mov esi,0xd9d1b7d7
  mov edi,0xda850a99
   and cl,0xf
   shrd bp,dx,cl
   mov ecx,edi
   not si
   rol dx,0x2
   xor esi,edx
   clc
   sbb bl,al
   bts bp,0x45
   adc bl,bh
   not cl
   stc
   rcr bp,0x1
   sbb ax,ax
   and si,ax
   clc
   rcr ah,0x1
   or bp, 0xc000
   and dx, 0x3fff
   div bp
   cmp esi,0xd9b610c3
   shld dx,di,1
   sar di,0x1
   group=base
   bts ebp,ebx
   movzx ebx,si
   imul bp,bp,0xf8d5
   rcr ch,0xc6
   cmpxchg bh,dh
   btr dx,ax
   shr cl,cl
   rol dx,0xb4
   clc
   imul ebx
   group=base
   shr edi,0x1
   test eax,0xe7e20be
   clc
   rcr ecx,0x1
   shr bh,0x23
   btr di,0xfa
   sbb bp,cx
   bsf edx,ecx
   mul esi
   xadd bp,cx
   cmpxchg si,si
   shl cl,cl
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   xadd dl,cl
   clc
   sbb ch,ch
   rol cl,0x1
   rcr dx,0x64
   cmp eax,0xc2ad976d
   stc
   adc bh,0x62
   setl bl
   ror ecx,0xa3
   xchg al,bh
   shl ecx,0x6c
   btr di,0xda
   cmp dl,0x78
   mul esi
   clc
   rcl esi,0x1
   clc
   sar bh,0x1
   seto al
   stc
   rcl ch,0x1
   sar ch,cl
   btr ebp,esi
   test ecx,ebp
   or di,0xace6
   xadd edi,edi
   add dl,bh
   cmpxchg ebp,ebp
   cmovpe ebx,ebp
   cmovno edi,ebp
   sar cl,0xcf
   cmp eax,0x65eab7db
   clc
   rcr eax,0x1
   clc
   rcr al,0x1
   xchg dx,bp
   mov edx,edi
   cmovo bp,ax
   shld eax,eax,1
   add eax,0x21e85ec2
   rcr esi,cl
   shl ax,cl
   ror ebx,0x1
   stc
   adc ch,dl
   setpo ch
   sar ebp,cl
   sar edi,0x1
   seto bh
   xchg bx,bx
   mul edx
   xchg esi,edx
   clc
   rcr dl,0x1
   test cx,0xdac1
   or dx,bx
   adc bh,ah
   sbb esi,0xa0cbad1b
   stc
   rcl dh,0x1
   xor bh,0x24
   add cl,ah
   cmovnc si,si
   btr ebp,edi
   stc
   adc dh,0x28
   add ch,0x35
   bt edi,esi
   ror ebx,0x1
   stc
   adc ecx,edi
   cmovns ecx,edi
   sar dl,0xb9
   bsf ebx,eax
   test bl,0x13
   clc
   adc cx,di
   stc
   adc dh,0x95
   rcr ecx,0xf1
   ror si,0x8f
   add di,di
   add si,0xdb4a
   sar al,cl
   mov dl,cl
   btc ebx,edi
   cmovc esi,ecx
   mul dx
   rcr di,0x1
   xchg bh,ch
   not dx
   lea ebp,[ebx+eax*4]
   rcl edx,cl
   sub cx,bx
   ror al,0x1
   imul ebx,edi,0xccb3ebf
   rol ax,0x1
   mov si,bp
   stc
   rcl bx,0x1
   imul esi,0xacb0fc0e
   dec eax
   shl eax,cl
   btc di,0xc9
   stc
   adc di,0x967f
   inc	ch
   cmovno edx,edi
   rol ecx,0x81
   sar dx,cl
   btc di,0x95
   btc ax,bp
   xchg ch,bl
   rcl cl,0x1
   cmp edi,ebx
   cdq
   cmovg eax,edx
   bsf edx,ebx
   btr esi,ebp
   xor ch,cl
   cmovs ebx,ebp
   stc
   sbb bx,0xb768
   mul si
   shr dx,0x82
   cmpxchg ah,bh
   stc
   adc esi,0xa0b9363d
   rcl ch,0x1
   sbb al,0xfb
   stc
   sbb dh,bl
   sar dh,0xe
   movsx eax,bh
   btc edi,0xb5
   ror ah,cl
   shl cl,cl
   and eax,eax
   ror al,0xac
   sar di,0x1
   rcr si,cl
   xadd bx,dx
   cmovng cx,dx
   adc ah,al
   btc dx,0x82
   test esi,ebx
   stc
   adc ax,0x73f3
   cmc
   stc
   sbb edx,0x22ae9f67
   sub esi,0x945841e5
   cmpxchg ah,ah
   stc
   adc dh,0x57
   rcr ebx,cl
   xadd ecx,esi
   or edi,ebx
   cwd
   sahf
   setne bh
   stc
   sbb cl,0x88
   shrd ebx,eax,0xbb
   cmpxchg eax,ecx
   shl cx,0x18
   movsx ecx,si
   inc	bh
   test ebx,eax
   cmp ax,0xb6ba
   shrd ecx,ecx,cl
   bsr edx,edi
   not esi
   bts ax,0x94
   cmp cl,ch
   bswap esi
   test bl,0x95
   bswap eax
   bt ecx,0x66
   ror edi,cl
   xor si,cx
   sar ebx,0x1
   shr ch,cl
   cmpxchg bp,di
   xchg eax,ebx
   adc dx,bx
   mul ah
   shl bh,0xb8
   btc edi,ebp
   inc si
   sbb ah,0x28
   cmp ah,dl
   imul dl
   bswap eax
   xadd eax,eax
   cmovpo cx,bx
   adc bp,ax
   setpo dh
   cwde
   stc
   rcl edi,0x1
   stc
   rcr esi,0x1
   cmp ecx,0x83f6d10
   sbb cx,bx
   stc
   sbb bp,bp
   sub bx,si
   or esi,0x7ed00b32
   imul ebx,0x4d7cac8c
   xchg si,bp
   ror bp,0xb2
   rol edx,0x1c
   neg bp
   cmovpe esi,edx
   clc
   sbb ax,di
   movsx ebx,dl
   shl ch,0x1
   rcr cl,0x4e
   movzx ecx,si
   shl eax,0x1
   shld edx,edx,cl
   imul ebx
   sub cx,0x2a40
   cmpxchg bl,dl
   stc
   rcr bl,0x1
   xadd edx,edx
   stc
   sbb bp,dx
   cmp dl,0xdf
   not dh
   inc	edx
   test dh,bl
   cmovg di,bx
   bts ax,dx
   shr bp,cl
   shld si,bp,0x5
   imul edx,0xda22f61a
   test bp,bp
   test dx,ax
   or edx,esi
   sub di,0x8c7b
   rol al,cl
   mov si,cx
   sar edx,cl
   xor bx,dx
   setnl ah
   movsx edx,bl
   mul ebx
   clc
   rcr ebx,0x1
   rol cx,0x1
   inc	eax
   setnl ah
   rol si,cl
   cmp dx,bx
   cmovl di,si
   cmpxchg ebx,ecx
   rol ax,cl
   lea bp,[ecx+eax*1+0x12]
   imul edi
   shr ax,0xc9
   xadd ebp,ebp
   lea ecx,[ebp+ebp*4+0x1d]
   neg bl
   imul bp,0xf4a7
   or dh,0x96
   clc
   sbb cx,0x5474
   rol eax,0x1
   stc
   rcr bh,0x1
   stc
   sbb di,di
   or cl,0xd9
   cbw
   sub eax,0x1dd4c5e1
   clc
   sbb eax,ecx
   sets al
   btc edx,ecx
   rol edx,0x1
   movzx si,bl
   cmovo bx,ax
   movsx ebp,bp
   sar cl,0xdd
   mov edx,0x11b80ca4
   ror al,0x1
   clc
   adc ecx,0xdd809614
   stc
   rcl al,0x1
   btc ebx,ecx
   sub edi,0x190d5b26
   clc
   adc cx,0xbbec
   ror edi,0x44
   xor dh,0xfd
   cmovns ebx,ecx
   cmovbe edi,edx
   shl ch,0xe6
   shr dx,0x1
   shr dh,0x8a
   add di,bp
   rcr bx,cl
   mov ebp,ebp
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   sub al,0x9b
   bt ax,0x33
   adc dx,di
   setnl ch
   cmovns bx,si
   ror ch,cl
   rol dh,cl
   shl si,0x1
   cdq
   shl ecx,0x1f
   cmpxchg al,ch
   cmp ebx,0x14a3cfcb
   bt si,bp
   stc
   adc dl,0xca
   sub bl,al
   imul esi,ebx,0x9e52e3f1
   not cl
   mul bl
   test edi,eax
   movzx di,ch
   stc
   adc bl,0x74
   sub ah,ch
   clc
   adc cl,dh
   movzx edx,si
   cmovpe ebp,eax
   cmovs si,si
   imul bx
   shr di,0x8b
   or al,0xf7
   mov bh,0x8c
   ror edi,0x66
   cmp ebx,ebx
   btr si,si
   sar bx,cl
   sahf
   shl bh,cl
   ror ax,0x1
   rcr ax,0x25
   shl edx,cl
   shr dl,cl
   rol ecx,0x1
   shl di,cl
   btc bx,0x3e
   dec bl
   xadd ax,bx
   shrd edi,eax,1
   not bx
   cmovnc edx,ebp
   sar si,cl
   mov al,0x71
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   or ebx,ecx
   shrd edx,ecx,0xf1
   inc	dl
   and edi,edi
   clc
   sbb dh,0xef
   bt si,dx
   xchg ebx,edi
   shrd bx,di,1
   clc
   sbb ch,al
   sbb bp,0x4875
   sar ebp,0x85
   cmp ebp,0xe041694b
   cmovng esi,edi
   ror si,cl
   clc
   shr bl,0x1
   sar bx,0x48
   inc cx
   shr eax,0xfa
   sar bl,cl
   shr al,0x1
   shr bh,cl
   rol dl,cl
   or dh, 0xc0
   and ax ,0x3fff
   div dh
   inc	esi
   imul ecx,0xfb8ff2c2
   rcr ah,0xf5
   imul si,0xf3c2
   shl si,0x1
   ror dh,0x1
   xchg ch,dl
   stc
   adc bl,ah
   ror ecx,0xe
   test dx,si
   cmovl cx,bp
   ror ax,0xb6
   xor cx,dx
   and cl,0xf
   shrd bp,si,cl
   cmpxchg bp,dx
   adc di,bp
   sar si,cl
   btr bx,0xd3
   rcr al,0x84
   xchg di,di
   xor ah,0x18
   inc	eax
   rcl ecx,cl
   cmpxchg bh,dh
   rcl cx,0x1
   ror dx,0x1
   and cl,0xf
   shld bp,ax,cl
   cwd
   neg ah
   add dh,bh
   clc
   rcl bl,0x1
   shrd cx,ax,1
   shld eax,ecx,1
   shrd eax,esi,cl
   bsr ecx,ebp
   imul ax
   shl cx,cl
   rol ax,0xa1
   cwde
   rol cl,0xa9
   bt dx,0x6e
   xadd ch,dh
   or di,si
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   add edx,0x54d863be
   seto cl
   xadd al,bl
   stc
   rcl cl,0x1
   imul bp,si,0x4579
   rcl ah,0x1
   sbb bx,0x8a71
   add bh,dh
   imul dx
   sar ah,0x55
   sar ecx,0x1
   sahf
   btr ecx,edx
   clc
   bts eax,edx
   cmp ebp,ecx
   rcr ebx,cl
   xchg edx,ecx
   shld edx,edi,0x8d
   add dl,dh
   xadd ah,bh
   lea ecx,[ebx+0xe14d1f9f]
   add ax,bp
   or dx,0xee49
   cmovg ax,cx
   neg eax
   shld edx,ecx,0x63
   ror ax,0x1
   ror esi,0x1
   xchg eax,edi
   xchg bl,dh
   clc
   rcl cl,0x1
   shl ax,0x1
   test dl,0xc4
   shr esi,0xe4
   btr eax,ebx
   btr edi,edx
   sub bl,dh
   cmovl ebp,ebx
   xchg si,ax
   setnl bl
   mul dx
   stc
   rcr esi,0x1
   movzx ebx,di
   cwde
   seto al
   clc
   rcl bx,0x1
   or bx, 0xc000
   and dx, 0x3fff
   div bx
   imul ecx,edi,0x52979fcc
   bts eax,0xf5
   shl esi,0x1
   cmp ebp,0x59600ae2
   sahf
   imul ebx,esi,0xab5a3d2d
   shl ebx,0x1
   cmovno ebp,ebp
   adc bh,bl
   imul ebp
   shr cl,cl
   sub bh,0x5f
   shr si,0x1
   stc
   sbb esi,0xa8941197
   shr esi,0x35
   xadd ch,cl
   cmpxchg si,dx
   stc
   adc cl,0x53
   xor cx,0x110c
   clc
   rcr dh,0x1
   btc cx,ax
   rcl cx,0x2a
   add ebx,0x68bff577
   rcl bx,0xf3
   xor dx,di
   rcr edi,0x3f
   test ecx,ebx
   setnl dh
   stc
   sbb edx,edx
   add bx,di
   ror si,0xc2
   ror ax,cl
   btc dx,0xcb
   lea edi,[edi]
   xchg esi,ebx
   sar ch,0x1
   mov bx,0x2ab9
   rol al,0x7e
   shr edi,cl
   dec edi
   cdq
   sar edx,0xf3
   movzx ebx,cl
   test cl,0x6f
   ror esi,0x54
   mov cx,0x7967
   imul edx,0x9467759c
   cmovnc ax,ax
   shld esi,ecx,1
   cmovpo eax,ecx
   cmovc eax,edi
   shl ebp,cl
   inc	eax
   cmp ch,0x49
   bts eax,esi
   adc edi,0xed2d44c5
   neg ecx
   dec ah
   or si,ax
   sar ebp,0x1c
   movsx ecx,ch
   xor ebx,0xd7a34cc5
   cmove ax,ax
   sar ax,0x63
   rol ebp,0xc7
   imul edx,ebx,0x782e1d1d
   mov edx,ebx
   sbb cx,ax
   movsx eax,bp
   cmp edx,0x81a63b5a
   cmc
   or ebp,0xa2e34e7f
   sbb bp,0xde8b
   setnl cl
   cmovng bp,si
   stc
   sbb cl,ah
   inc cx
   shld ebx,edi,0x46
   rol dl,cl
   cwd
   shr edi,0x1
   xor di,0x42bd
   not ecx
   add bl,al
   btc ebx,ecx
   not cx
   nop
   sbb si,0x326b
   imul cx,si,0x1a4d
   shl ebp,0xb3
   xor bl,bl
   rcl ch,0xdb
   inc	ebp
   sar bx,0x1
   movzx eax,ax
   clc
   adc edx,0x84065119
   sar edx,0x1
   stc
   rcl edi,0x1
   clc
   rcr eax,0x1
   xchg si,ax
   stc
   rcl cx,0x1
   shr eax,0x1
   imul ebp,ebx,0x2c3b48e2
   setnc dh
   clc
   adc bx,cx
   cmovl eax,ecx
   adc ebp,ecx
   not si
   neg esi
   stc
   adc esi,edx
   shr cl,0x9b
   or cx,0x59f4
   cmovns cx,si
   sar edi,cl
   bt edi,0xda
   shrd ax,bp,1
   cmove ebp,edx
   setc dl
   seto cl
   cmovne edi,edx
   cmovbe si,si
   rcr dx,0x1
   stc
   adc esi,eax
   sub di,0xe9f6
   test bh,dl
   sar cx,cl
   dec dx
   cmovne ebx,esi
   bsf ebp,eax
   not bl
   sar edx,cl
   cmp cx,0x5fd9
   rcr al,cl
   sar dh,0x1
   stc
   adc esi,edx
   stc
   rcl bp,0x1
   clc
   adc ebx,0x3a816021
   imul ebp,esi,0x4b8d631a
   sar cx,0xd3
   rol esi,0x1
   adc bl,0x5f
   lahf
   mul di
   ror si,0xa0
   mul si
   rol ax,0x1
   and cl,ch
   bts edx,0x93
   rcr edx,cl
   shld eax,eax,1
   and esi,ebp
   rcr ecx,cl
   btr edi,0xbd
   and ax,0xe898
   ror esi,cl
   and ch,0x28
   xadd cx,cx
   shrd esi,edx,cl
   bt dx,ax
   shr cx,0x1
   sbb ax,dx
   cmovc eax,edx
   imul bp
   stc
   adc dx,0xedad
   cmovno ecx,esi
   sets dh
   rcl eax,0x1
   movsx ebx,bh
   cmovnc cx,di
   stc
   adc di,0xf4f2
   cmovl bx,si
   sbb ch,dh
   sub di,di
   cmovno bx,cx
   sar bh,cl
   inc	ebp
   imul ebx
   and cl,0xf
   shld bp,di,cl
   rol eax,cl
   shl bx,0x9b
   add eax,ebx
   cbw
   xor ebx,0x19d6730b
   btr ebx,edi
   clc
   adc ah,0x8
   shr bx,0x6c
   ror ch,cl
   mul bl
   rcr esi,0x1
   sbb dh,0x74
   xadd dl,dl
   bsr edx,edi
   bts ebp,0x7f
   xor dl,ch
   cmovc edx,esi
   test cx,0xf52b
   ror edi,cl
   bts bp,dx
   add al,0x10
   mul di
   bts esi,0x11
   cmp si,ax
   clc
   rcr esi,0x1
   seto cl
   dec bx
   adc di,0xd095
   xadd edx,edx
   imul ebp,ecx,0x873166ad
   not bh
   imul eax,0x5bc37382
   not eax
   shr cx,0x1
   movsx bp,bl
   rol esi,cl
   shr si,cl
   rol ebx,0x94
   sar esi,0x1
   btr eax,0x5a
   rcr ebp,0x1
   clc
   sbb bh,0x28
   rol dh,0xf8
   shr ax,0x7c
   or edi, 0xc0000000
   and edx, 0x3fffffff
   div edi
   btc dx,0x6f
   bts ebx,ecx
   shrd eax,ebx,1
   clc
   rcr ebx,0x1
   imul cx,bx,0x1e00
   clc
   adc bl,dl
   setpo ah
   adc edi,eax
   cmovnbe ebx,esi
   stc
   adc dh,al
   clc
   rcl eax,0x1
   shrd bp,dx,1
   clc
   rcl dh,0x1
   stc
   rcl cl,0x1
   clc
   rcr ch,0x1
   shl bx,cl
   shl ch,0x65
   cmp dh,cl
   cmovbe eax,edx
   shl bl,0x1
   and cl,0xf
   shld di,di,cl
   xadd bx,bp
   or ax,0x9309
   clc
   sbb di,0x991c
   neg ecx
   clc
   sbb esi,ecx
   cmpxchg edx,eax
   cmovc bx,dx
   imul bx,cx,0xcc5d
   shr dh,0x1
   or bl,bh
   clc
   adc al,ah
   cmovl cx,dx
   cmovns eax,ecx
   bt cx,dx
   sar bh,cl
   add di,0x89e8
   cmc
   rcr bh,cl
   or ebx,0x4f633fd3
   cmpxchg ecx,edx
   ror dh,0x1
   mul ebp
   stc
   sbb bh,0xf2
   btc esi,edx
   lea dx,[eax+ebp*8+0xfad5d3bf]
   clc
   rcl ecx,0x1
   rcr esi,cl
   ror si,cl
   shrd ecx,ebp,cl
   and ax,cx
   movsx dx,ah
   imul esi,0xcaac5a76
   rcl ch,0x6a
   xadd ah,al
   rol dl,cl
   imul bp
   rol eax,0x1
   rcr dx,cl
   and al,bh
   stc
   adc edi,ebx
   bts ebx,ebp
   clc
   adc bp,ax
   cmp eax,0xe2b71726
   ror ecx,0x1
   add eax,0xfd5ff956
   cmovl ax,bx
   setl ch
   cmovne ebp,eax
   sub bl,0x16
   and ebx,ebx
   test al,cl
   sar dh,0x1
   imul eax
   bt cx,bx
   dec bl
   cmovng cx,dx
   cmovbe bx,dx
   setng ch
   bt eax,edx
   cmovc ax,bx
   clc
   adc bl,0x68
   setno dh
   shr edx,cl
   shrd bx,dx,0xe
   sub bx,0x79df
   or dl,bh
   sbb ch,ch
   adc dl,ah
   xchg bh,ah
   xor dh,0xc5
   clc
   adc dx,0xa922
   clc
   adc al,dh
   ror si,cl
   cwde
   cmp si,0x689e
   clc
   sbb al,0x7
   bt ax,cx
   rol di,0x9d
   shl edi,0x4
   sar dh,cl
   and cl,0xf
   shrd dx,ax,cl
   mul ah
   ror dx,0xde
   xor esi,0xdc78ff15
   stc
   rcr edi,0x1
   shl dx,0x1
   clc
   rcl eax,0x1
   stc
   rcl ax,0x1
   test cl,bh
   clc
   adc cx,0x719d
   shld ax,di,1
   imul ebp,edx,0x601f1aac
   rcl cl,cl
   sar ah,0x1
   stc
   rcl bh,0x1
   ror eax,0x1
   movsx ebp,ch
   ror ebx,0xe1
   rol edi,0x1
   rcl esi,cl
   shl cx,cl
   bt edx,edi
   movzx ebx,si
   bts ecx,0x3
   cmp di,si
   cmovnc edi,edi
   rol dl,0x60
   shrd ax,cx,1
   sbb cx,si
   or di, 0xc000
   and dx, 0x3fff
   div di
   ror dx,0x1
   cmpxchg cl,dh
   rol cl,cl
   test dx,0x4dde
   shr dl,0x1
   xchg dx,di
   imul ax,si,0xb91c
   group=base
   shrd edi,edx,cl
   sar di,0x54
   btr bx,0x3e
   adc edi,0xeb848ca7
   lahf
   btr si,ax
   imul dx,0xbac
   btr esi,0x6a
   clc
   sbb ax,dx
   add edx,edi
   imul dx,si,0x8b7d
   clc
   sbb edx,edx
   bt esi,0x74
   clc
   xor ebp,0xe8d6d093
   cmp bl,0x1a
   shl edi,0x1
   rol bx,0x1
   xor eax,edx
   setc dh
   rol bp,0x1
   mov cx,bx
   bts esi,esi
   movzx di,dh
   xadd cx,ax
   group=base
   and ch,0x5a
   mov bx,0x875b
   shld bx,bp,1
   bts si,dx
   sar ax,0x74
   mov si,di
   cmpxchg ecx,eax
   shrd ebx,ebp,cl
   shl di,cl
   dec dx
   or ax,di
   rcl edx,cl
   ror dx,cl
   bsr eax,edx
   ror bx,0x1
   ror bx,0x1
   sbb bl,dh
   btc edx,0x4b
   dec dh
   cmovne bx,bx
   btc cx,0x85
   shld ax,bp,1
   shl bx,cl
   rol al,0x75
   sar cx,cl
   xchg bp,ax
   cmp al,bl
   add ebp,0x4198f677
   neg si
   cmovs ecx,ebx
   nop
   clc
   rcr cx,0x1
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0xab159be2

 pop gs
 pop edi
 pop esi
 pop ebp
 pop edx
 pop ebx
 ret
         .size   log_size_10_var_000, .-log_size_10_var_000

.globl log_size_10_var_001
         .type   log_size_10_var_001, @function
log_size_10_var_001:
 push ebx
 push edx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0x62bae94b
  mov ebx,0x9896d48a
  mov ecx,0x17965e5c
  mov edx,0xb4ebdaf0
  mov ebp,0x34a5eeb1
  mov esi,0x16874692
  mov edi,0xdcf9b232
   rol ch,0x1
   imul edx,ebp,0x68bcfd2e
   ror di,0x10
   ror ax,cl
   cmpxchg edx,ebp
   adc edi,0x421a059f
   rcl bp,cl
   dec esi
   setl ch
   ror dh,cl
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   shl eax,0x1
   sub dl,ch
   clc
   sbb cl,0xb5
   clc
   rcl cl,0x1
   ror dh,0x1
   shl edx,0x1
   and ah,ah
   xchg dl,ah
   test ebp,ebp
   stc
   adc bh,0x48
   shl ebx,cl
   or ch, 0xc0
   and ax ,0x3fff
   div ch
   shl ch,cl
   xor eax,0x2c52759a
   cmp ebx,0xeb05863e
   movsx edi,ax
   bt edi,0x89
   mul edi
   clc
   shrd di,bx,1
   and di,0x86d0
   cwde
   xadd dx,si
   sub ebx,esi
   clc
   sbb cx,di
   movzx bp,ah
   sbb si,bp
   ror bp,cl
   btr bp,0x99
   ror cl,cl
   bts di,si
   inc di
   sbb dl,cl
   mov dl,0xa3
   mul ebp
   clc
   sbb ecx,ebx
   sete al
   cmovpo si,bp
   shrd edx,ecx,cl
   cwde
   and bx,0x4776
   setng al
   stc
   sbb di,0x3283
   clc
   rcr al,0x1
   ror ax,0xe0
   add bp,bp
   shrd edx,edx,1
   rol al,0x1
   bsr ebp,ebx
   bts esi,ecx
   rcl cx,0xe5
   xor si,0xed82
   setg cl
   btc bp,dx
   dec edx
   lea esi,[edi+edx*8]
   bsf ecx,esi
   group=base
   mov ah,dl
   movsx esi,dx
   shld ebp,ecx,1
   and cx,0x5fe4
   sar bp,cl
   and ax,ax
   stc
   sbb cx,0xdd09
   stc
   rcl bl,0x1
   bts dx,di
   clc
   adc edi,0x79d2b760
   neg ch
   test dx,0xf749
   btr ebp,0xd5
   bts ax,0x1
   clc
   add si,di
   btr cx,si
   clc
   adc ebp,esi
   and dh,0xfb
   cmovo eax,esi
   cmpxchg bl,dl
   setns bh
   rcr dx,0x9
   ror dh,0x1
   btc esi,ecx
   shr di,0x53
   rol bx,0x44
   add ch,ah
   sub edx,eax
   sar di,0x1
   stc
   adc di,0x74da
   setno cl
   xadd ebx,eax
   seto bl
   mov edi,0x940021b0
   dec dh
   shld si,cx,0x6
   sar al,cl
   or bx,0xa074
   xor eax,eax
   imul bp
   stc
   sbb dx,0x3964
   test di,cx
   ror di,0x11
   and ax,0x3b2f
   shld eax,eax,1
   clc
   rcl eax,0x1
   lea esi,[ebx+ebp*8+0x21]
   stc
   adc si,0x8769
   sar al,0x1
   btr di,cx
   shl dx,cl
   btr edx,esi
   cmp al,0xaa
   bswap esi
   ror di,0xad
   bt dx,0xc5
   rcl bp,0xab
   shl bl,cl
   xor ch,0xad
   not edi
   cmovng dx,bp
   rol ax,0x13
   and edx,0x74a852c
   cmovnc ebp,edi
   mov si,si
   cmovng si,dx
   mul bh
   group=base
   and ah,0x61
   shl bl,0x1
   mov cl,bh
   shrd si,cx,1
   dec ah
   setnbe ah
   sbb al,al
   stc
   sbb dh,0xd6
   neg ebp
   shl ax,cl
   group=base
   sub al,ch
   xor ecx,edx
   btc esi,0x4
   cmpxchg al,bl
   test edx,0xc733bc16
   cmovg ebx,esi
   sbb esi,0xac5c005d
   shl edx,0x14
   or edx,0xc58bf7a1
   mov bh,0x0
   shr si,0x50
   mov bp,0xb93c
   sar bp,cl
   imul dh
   not ax
   ror bp,0x1
   or dl, 0xc0
   and ax ,0x3fff
   div dl
   dec bx
   cwde
   nop
   cmovo si,cx
   not al
   mov si,0x1774
   cmpxchg ebx,ebx
   adc ax,0xc35
   test bh,0x13
   sbb esi,edx
   shr si,cl
   rol ecx,0xda
   shr cl,0x45
   neg cx
   lea si,[ecx]
   rcr dx,cl
   sar di,0x8d
   sar edx,cl
   not dh
   rol cl,0xd0
   lea eax,[edi+eax*1+0x77]
   xor cl,ch
   clc
   rcr bl,0x1
   shld cx,bp,1
   bt dx,ax
   clc
   adc ch,0xaf
   dec esi
   setnl ah
   sbb ax,0x39f8
   btr cx,0x8a
   lea ecx,[eax+edx*2]
   cmp dh,cl
   cmp edx,0x933d5c8d
   stc
   adc cx,0xbaba
   shrd eax,ebx,1
   or si,si
   cmove ebp,eax
   add bh,0xa7
   xchg bl,dh
   shl ebx,0xbc
   sar edx,0xda
   rol bx,cl
   test dl,bl
   stc
   adc ax,di
   not esi
   sete ch
   sar edi,0x15
   ror edi,0x1
   shld dx,di,0xc
   or bx,0xf412
   rcr bp,0x1
   movzx si,dh
   sbb eax,0xc1ea1bf2
   shl esi,0x4a
   not edi
   rol esi,0x1
   mov dh,ch
   sub al,0x60
   cmovbe eax,ecx
   btr edi,esi
   shr esi,0x1
   cmovo ebx,ebp
   btc di,0xf5
   clc
   rcl edx,0x1
   cmp al,0x38
   or bx,bx
   and al,0xed
   test ah,al
   shld di,dx,0xc
   btr bx,ax
   stc
   rcr al,0x1
   sar al,0x1
   add edx,ecx
   mov esi,ebx
   cmp al,0x57
   bt ebx,ebp
   nop
   and cl,0xf
   shld di,bx,cl
   sahf
   cmovpo edx,esi
   shrd edi,ebp,0x5b
   bt ebx,edi
   cmp bp,0xfb17
   clc
   rcr bl,0x1
   shl bh,cl
   movsx esi,bx
   not bp
   btr edx,0xcb
   shrd dx,bx,1
   rcr edx,0xb2
   ror cx,0x1
   shl ebp,cl
   add ebp,0x9f92ef9
   add dl,0x3f
   test bl,bh
   sub ecx,0x92b1a8af
   sar cx,0x1
   imul si,0x455
   stc
   sbb ebx,ecx
   shl edx,cl
   sar esi,0x1
   stc
   sbb bl,bh
   shr si,cl
   or edi,esi
   cmovnbe bx,cx
   sub ax,di
   setpo cl
   adc ax,bp
   cmovg ebx,ecx
   add bl,dl
   movsx ebx,ah
   mul eax
   stc
   sbb dx,di
   btr dx,ax
   imul dl
   or esi,0x298e042b
   rcl esi,cl
   cmp si,0xaaa6
   test edx,0xa8b8ceda
   shl dh,0xf6
   xor dh,bh
   nop
   cmovl si,bx
   rcl ecx,cl
   rol edi,0x69
   shl edx,0x1
   ror bh,0x1
   sar bx,0x1
   neg dx
   xor edi,edx
   cmovg si,ax
   bt bx,dx
   rol ebp,0x64
   btr dx,bx
   clc
   rcl bh,0x1
   shrd edx,esi,cl
   inc dx
   cmovo ax,di
   cmp cx,0x669b
   stc
   adc edx,0x648fc32f
   and dx,bp
   shl si,0xa3
   and cl,0xf
   shld si,ax,cl
   btc ebx,edx
   stc
   rcl di,0x1
   add si,0x84e3
   cmc
   setns bl
   clc
   adc ecx,esi
   clc
   adc cx,0xd8de
   stc
   adc bp,bx
   cmovno ebx,edi
   xadd eax,esi
   xor dl,dl
   or ecx,ebx
   cbw
   adc ecx,edx
   stc
   sbb al,al
   bt edx,edi
   bt esi,edx
   cmovbe edi,ebx
   stc
   sbb bh,0x5d
   cmovl edx,ebx
   mov bl,bh
   mov esi,0x4d6c966c
   sar ch,cl
   movsx ax,dl
   cmpxchg si,dx
   shr ecx,0x1
   clc
   rcr esi,0x1
   sub si,0xa3ac
   bt bx,bx
   ror ch,0x1
   shld si,bx,0x6
   sub ah,ah
   shr dh,0xd9
   cwd
   mul bl
   cdq
   dec ecx
   stc
   sbb ecx,0x4e1a931a
   movzx eax,cx
   rcl bh,cl
   test cl,ah
   bt si,0xb9
   sbb bx,0xb12a
   shld ax,bp,1
   clc
   rcl al,0x1
   stc
   sbb edi,edx
   rcr ebx,cl
   bts dx,0x24
   adc eax,esi
   cmp ax,bp
   cmovno ebp,ebx
   cmovc eax,esi
   btr edi,esi
   xor edx,0xae7d4c8d
   rol ax,0x1
   stc
   sbb al,cl
   mul bx
   rol bx,cl
   shr bh,0xf2
   shrd eax,ecx,cl
   dec ebp
   and edi,0xc9272728
   clc
   rcr edx,0x1
   rol al,0xa7
   shr bl,0x1
   neg di
   or ch,0xef
   cmovne dx,dx
   rol ch,0xf1
   xchg bp,dx
   not si
   nop
   nop
   add al,0x4c
   or ax,dx
   and cx,0x6adb
   bsr ebp,ebx
   shr ebx,0x1
   shl bx,0x8c
   xor bl,0x6b
   cmovnc bp,cx
   xor ebp,ebp
   cdq
   xor si,ax
   test bl,0x86
   shld eax,ebp,1
   shld eax,ebp,1
   ror di,cl
   ror edi,0xae
   dec bl
   imul cx,0xca48
   rcr dl,0x1
   not di
   btc ax,si
   shl al,0x1
   mul ebp
   rcl di,0x1
   cmovo si,si
   cmp di,si
   sar edx,cl
   rol ch,0x1
   cmp cl,dh
   inc bx
   or dl,dh
   cmpxchg cl,ah
   ror bh,cl
   rol dl,0xef
   or edi,edi
   cmc
   cmovc eax,ebp
   setnbe dh
   cmovns bp,ax
   btr ecx,0xb4
   adc ah,dl
   or si,cx
   dec bh
   stc
   rcr bh,0x1
   shr ecx,0x1
   ror dl,0x76
   shr ebx,0xb0
   mov dx,ax
   xor dx,bp
   shl ebp,cl
   btr cx,si
   shl eax,cl
   btc edx,ebx
   inc ax
   sar ebp,cl
   mul edx
   add esi,0x1d4e0865
   test ch,0x34
   and bp,0xe66c
   and dh,0x80
   cmovl esi,ecx
   cwde
   rcr cl,cl
   sar cx,0x7f
   shld eax,esi,cl
   xchg cx,cx
   shr cl,0x1
   stc
   rcr ax,0x1
   and al,ah
   xor ecx,ebx
   cmp bh,bh
   cmpxchg si,ax
   mov ebp,edi
   xchg cl,bl
   rcr dh,cl
   bsf ebx,ecx
   rol edi,0x1
   stc
   rcr si,0x1
   rol ah,cl
   sub esi,0x29d5ea4f
   movzx ebx,cx
   bswap edi
   or bh,cl
   clc
   rcl eax,0x1
   shl ah,0x1
   not di
   stc
   rcr dx,0x1
   sar ah,cl
   and dh,0x12
   rcl eax,cl
   shr si,0x1
   cmovc bp,si
   clc
   rcl ebp,cl
   ror ebp,0x1
   sbb ebp,0x6dcf90f8
   dec ebp
   adc ebp,edi
   rcl ax,0x5c
   sub ch,0xad
   cmpxchg ch,ah
   rcr ebx,0x3
   sub ebx,edx
   dec cl
   mov dl,dh
   mul bx
   stc
   sbb bp,0x8a9
   adc ebp,edi
   rcr dl,0xbe
   neg cx
   and dx,0xc1bf
   cmovc si,ax
   cmp bx,0xea5d
   rcl ax,0x1
   ror eax,0x9
   cmp cl,0xa6
   imul ecx
   ror bp,0x1
   or dh, 0xc0
   and ax ,0x3fff
   div dh
   cmp bp,di
   clc
   rcl edx,0x1
   xor cx,bx
   cmpxchg ch,ah
   stc
   adc ax,si
   cmp edx,0x888476cf
   btr bx,0xb9
   stc
   adc ax,0x2894
   clc
   sbb bh,0x57
   and bh,cl
   bswap ecx
   xadd si,cx
   setg dh
   sub bh,0x67
   rcr dl,cl
   group=base
   shr edx,0x1
   bt edi,eax
   rol edx,0x1
   sub bp,ax
   imul esi
   bt edi,esi
   rol ebp,0x1
   or cx,0xb45b
   clc
   adc dx,0xbbab
   and edx,ecx
   shr edi,cl
   bts si,0xbd
   neg ax
   and bl,cl
   sbb ch,bh
   add bh,cl
   setg dl
   ror ebp,cl
   shr dx,cl
   or ch, 0xc0
   and ax ,0x3fff
   div ch
   bt ebx,ebx
   or ebx,eax
   imul ax
   sbb al,0x23
   shld eax,edx,1
   shl dx,0x1
   stc
   adc bp,bp
   shr ax,cl
   ror eax,0x1
   xchg bh,dh
   xchg ebp,ecx
   clc
   rcl bx,0x1
   cmpxchg esi,edi
   sar bl,cl
   rol eax,0x88
   imul bx,si,0x90f
   cmp eax,eax
   clc
   rcr di,0x1
   cmovo bx,cx
   shr di,0x4d
   sar si,0x1
   cmc
   stc
   rcl dh,0x1
   neg ch
   clc
   sbb dh,dh
   btr si,0x5
   mul dx
   rcr cx,0x1
   rol esi,cl
   or ebp,0xe7c44a56
   bts ebx,0x6c
   ror cx,cl
   mov bx,di
   sub ebx,0xdbdd4fc
   cmovpo esi,edx
   stc
   adc bh,0x7b
   clc
   adc cl,al
   add si,bx
   cmovs eax,edi
   shr bp,0x1
   test si,0xf1f1
   sbb edi,esi
   cmovpe ecx,esi
   rcr al,0x7a
   sub ecx,ecx
   stc
   adc ch,cl
   ror esi,0x49
   movzx di,bl
   btc edi,0x3b
   or cx,cx
   xchg bx,dx
   rcr edx,0x1
   adc ebp,ebp
   stc
   adc bh,0x2d
   and bp,0xc8d5
   test bp,0x8081
   rcl bl,0xbd
   inc di
   cmovl edx,edi
   rol ebp,0x2b
   btc edi,0x9f
   and cl,0xf
   shrd cx,bx,cl
   shld ebp,esi,cl
   cmp ax,dx
   cwde
   rcl ax,0x1
   sbb si,bx
   sbb ebx,edi
   neg edx
   or cl,0x31
   sar dx,0x1
   movzx dx,dl
   adc bp,0x1de1
   test ax,cx
   clc
   adc ah,dl
   stc
   adc ah,0x45
   test si,0x4375
   shr eax,cl
   shld ebx,ecx,cl
   sar edi,0x2f
   shl cl,cl
   xor cx,0xed1b
   imul cl
   clc
   sbb ch,bh
   rcl bx,0x41
   cmp ax,0xda8f
   cmovnbe di,bp
   rcl bx,0x1
   sub di,di
   rol dx,cl
   rol edi,cl
   ror ecx,cl
   sub ax,0x85e9
   rol ah,0x1
   cmc
   sbb bl,0xff
   not cl
   dec dl
   btc ax,0x59
   rcl ah,cl
   shr edx,cl
   and bx,0x2f0e
   bts si,bx
   clc
   adc al,bl
   or ecx,0xa4dd7bcc
   adc cx,0xd240
   or bp, 0xc000
   and dx, 0x3fff
   div bp
   and cx,0x8e25
   sbb cx,si
   stc
   adc dl,0x1d
   cmovnbe bp,dx
   sbb eax,0x95d3cd2b
   cmpxchg bh,ah
   clc
   adc bp,0x57a7
   adc ch,ah
   bt eax,ebx
   setnc dh
   mul bh
   clc
   sbb ah,cl
   sbb esi,0xb012f548
   and cl,0xf
   shrd dx,ax,cl
   bsf eax,edx
   sar dx,0x1
   rcr bp,cl
   test ah,0x97
   add cx,0x41e
   mov ebp,0xa8e6e2a9
   rcr bx,0x78
   movsx esi,ch
   shld dx,di,0x3
   shrd ebp,ebx,cl
   test edx,ebp
   setnc bl
   sbb edi,0x56c63fb5
   cmovs ebx,ebx
   cmovs si,bp
   mul bh
   rcl ebx,0x74
   cmpxchg bl,bl
   setg ah
   shr ebx,cl
   cmpxchg esi,esi
   test si,si
   sub dh,0x2e
   shrd eax,ebp,cl
   test dl,0xc8
   rcr bh,cl
   and ebx,eax
   ror dl,0xec
   or bl,dh
   sar ecx,cl
   mul ax
   adc cx,0x5feb
   adc di,0x597
   shr ecx,0xa6
   shr cx,0x1
   btc esi,eax
   rcr edi,0x1
   movzx si,dh
   cmovc edi,ecx
   bswap esi
   btc di,di
   sub esi,edx
   ror cl,cl
   xor cl,0xf5
   cmovc dx,ax
   rcl bx,0xf7
   not ebp
   bts dx,si
   cmp ebx,edi
   ror ebp,0x1
   inc	ecx
   ror dh,0x1
   and edi,eax
   cmovns esi,ebp
   adc dx,si
   xadd ah,ah
   cdq
   test dl,dl
   cmovpe di,di
   stc
   adc dx,0x4e8b
   adc bh,bh
   clc
   adc edx,edi
   shrd ebp,esi,cl
   xadd ebp,ebx
   rol edi,cl
   imul cx,0x1853
   shr cl,cl
   not bh
   or si,0x61d6
   shld di,di,1
   test ecx,0x50123e73
   or bh,cl
   ror dl,0x1
   shl edx,0x1
   sar edi,cl
   xadd ecx,ebx
   adc dx,si
   rol al,0x1
   bsf edx,ebp
   imul bh
   sub bx,bx
   rol cl,cl
   or ah,0x9f
   adc cl,0x94
   clc
   sbb bl,dh
   setc dl
   stc
   adc ebp,edi
   stc
   rcr al,0x1
   xor ax,bx
   setno bh
   test ecx,eax
   shr bx,cl
   sar bx,0x1
   sbb ebp,0xd0275e1b
   add bl,0x6b
   shr cx,cl
   and edx,eax
   cmovnl ebp,edx
   cmovnl eax,esi
   clc
   sbb ebp,ebp
   cmovbe eax,edi
   and edi,ecx
   rcl ch,cl
   xchg si,cx
   or bx, 0xc000
   and dx, 0x3fff
   div bx
   sar dh,0x1
   mul ecx
   xor di,0x93b5
   rcr dx,0x53
   shr edx,cl
   nop
   neg bh
   btr bx,si
   btc esi,ebp
   neg dl
   ror eax,0xd5
   ror si,cl
   btc si,0xb9
   sbb cl,al
   test di,dx
   rol edi,0x1
   rcr ecx,cl
   rol cl,0xbd
   cmpxchg bx,cx
   btc ecx,0x81
   rol eax,0x1
   cwd
   and si,si
   stc
   adc bl,cl
   adc bh,0x3b
   rcl bl,cl
   mov di,0x2a93
   ror ax,0x1
   shr edi,0x55
   rol esi,0x1
   rol dx,cl
   rol dx,0xfc
   shld esi,edx,0x8a
   mov dl,0xba
   add bl,0xef
   stc
   rcl eax,0x1
   xchg ch,al
   cmpxchg di,bp
   cmovnc eax,esi
   and di,bp
   mov bl,0xe4
   cmovbe eax,ebp
   cmovng esi,eax
   rol si,cl
   xchg di,bp
   imul ebp,0x7dd88f03
   sub dh,0xcc
   clc
   sbb ecx,0x39525eac
   clc
   clc
   rcr dh,0x1
   shl ch,cl
   movsx edi,di
   bts ecx,eax
   xchg edi,eax
   add si,0x1ece
   xchg ax,si
   shr dx,0x77
   rol eax,0x0
   and cl,0xf
   shrd bx,di,cl
   group=base
   clc
   sar bh,0xe4
   neg bh
   setbe ah
   stc
   rcl ax,0x1
   shl bx,cl
   shr si,cl
   and edi,edx
   btc dx,0xc4
   btc edx,0x6a
   sar bl,0x1
   ror si,0xcd
   add cl,0xab
   ror edx,0xf0
   movzx dx,cl
   cbw
   inc	ah
   shr eax,0x41
   or bp,0x68d4
   shl si,0xc4
   imul di
   not esi
   shl ch,0x1
   not esi
   mov dl,0xc3
   stc
   adc al,ch
   rol bl,0x1
   stc
   rcl ebp,0x1
   sar ax,0x1
   sbb ah,ah
   setno bl
   clc
   rcr ecx,0x1
   rcl bh,0xe5
   test bp,0x5f20
   and esi,0x976b25e1
   inc bp
   bts ebx,0xaa
   dec eax
   sbb ch,0x7f
   sar bl,0x1
   xor ax,dx
   cmovpo ecx,ebx
   movsx esi,bp
   setl al
   stc
   sbb ebp,edx
   setno dl
   rol dl,cl
   and ch,0xf4
   neg ebp
   rcr ah,0x1
   stc
   sbb ecx,edx
   rcl bx,0x1
   cmpxchg ebp,ebx
   and cl,0xf
   shld bp,si,cl
   add si,di
   setnl cl
   add bl,0xd3
   test ax,bx
   bt dx,0x1c
   clc
   rcr dx,0x1
   cmp ebx,0xa5f7dd5b
   rcr cx,0x38
   shr ax,cl
   shr si,0x4e
   inc bx
   cmovng edx,ecx
   cmpxchg bp,dx
   bsr edi,eax
   sub edi,0x17d298b1
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   dec edx
   shr ah,0x71
   and ah,dh
   setl ch
   shl bp,cl
   cmp eax,0x87f6bd58
   stc
   sbb cl,dl
   clc
   adc ah,bl
   sub si,dx
   mov edx,ebp
   cmovg si,dx
   sub cx,bp
   setng ah
   cmovs ax,di
   movsx ebp,bx
   adc dl,0x1f
   rcl bh,0x1
   rcr dx,cl
   cdq
   mov di,dx
   imul bl
   xadd bh,al
   cmovbe ebx,ecx
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0xfd7f4033

 pop gs
 pop edi
 pop esi
 pop ebp
 pop edx
 pop ebx
 ret
         .size   log_size_10_var_001, .-log_size_10_var_001

.globl log_size_10_var_002
         .type   log_size_10_var_002, @function
log_size_10_var_002:
 push ebx
 push edx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0xfa99967f
  mov ebx,0xea42300b
  mov ecx,0x223021a3
  mov edx,0xdabf04fd
  mov ebp,0x2c09d05b
  mov esi,0x21b4e065
  mov edi,0xb602a725
   sar bl,0x1
   shrd ebx,eax,0xc6
   xchg si,bx
   bt eax,edi
   clc
   sbb al,0x8a
   or dx,0x2158
   shld esi,edi,1
   xor bl,0xe6
   mov ecx,edx
   add dh,0xb5
   sub cl,bh
   cmc
   stc
   sbb ebp,0x755c6c8d
   neg edx
   cdq
   adc esi,edx
   setpe dh
   shl bh,0x1
   rol ecx,cl
   sar edx,0x1
   rcr edx,0x3a
   cmp dx,0x21b0
   sub eax,ebp
   and edx,0xa114f89e
   sar edi,cl
   test dx,dx
   stc
   adc dh,0x6b
   dec si
   cmovc ax,di
   shrd bp,di,0x8
   bts ax,0xb6
   movsx edx,bl
   or edi,0xfba71296
   shl bh,0x1
   rcl bh,0x1
   sbb dh,dh
   shr eax,0x1
   shr bp,0x1
   clc
   adc ah,0xd4
   stc
   rcr bl,0x1
   stc
   rcr edi,0x1
   bt ebp,ecx
   or al,dl
   rol di,0x1
   sub bh,0xf4
   mul dl
   imul cx,ax,0xd645
   imul dx,0x9b36
   xadd cx,di
   rcr cl,cl
   cmp esi,ecx
   sar bl,0x1
   rol dx,cl
   test bh,dh
   xor eax,0xdf17b8b2
   and cl,0xf
   shld di,bp,cl
   ror ebp,0x99
   test di,dx
   ror ebp,0x65
   shrd si,dx,0x3
   bsf ebp,edi
   add ah,0xf8
   shr eax,cl
   bts si,ax
   movzx edx,ax
   clc
   adc bx,cx
   bt dx,0x96
   sub si,0x3777
   mov esi,0x75f08c9f
   cmovpo esi,esi
   cmove si,di
   xor bl,al
   rol ah,cl
   sar dx,cl
   sar ax,0x1
   sar ebx,0x29
   movsx di,ah
   btc cx,0x1
   shl si,cl
   and bl,bl
   shr al,cl
   rol cl,0x1
   cmp eax,eax
   imul dl
   shr si,cl
   xor ebx,edx
   cmovpe edi,edx
   clc
   rcl esi,0x1
   imul esi
   rcr ebx,cl
   sub ax,0x530
   stc
   adc dl,0xce
   shr edx,0x8f
   test bl,bh
   cmovnl dx,bp
   xadd si,dx
   stc
   adc bx,0xd962
   bt ax,0x93
   bt esi,0xbb
   rcl bp,0xc1
   lea edi,[ebx+eax*1+0x510ee1d1]
   xadd si,bx
   bts ecx,0x71
   cmovne eax,eax
   cmc
   and cl,0xf
   shld bp,ax,cl
   and cl,0xf
   shrd bx,bx,cl
   btr ecx,eax
   bt esi,0xee
   clc
   adc edi,0x25e42bd6
   clc
   rcl ch,0x1
   shl al,cl
   btc bx,cx
   rcl ch,0xf8
   xchg ah,ah
   mov edx,ebx
   imul ecx,0xeb5dc8b1
   bts bp,0x9a
   bsr edi,ecx
   or ecx, 0xc0000000
   and edx, 0x3fffffff
   div ecx
   sub bh,0x54
   setno bl
   rcr esi,cl
   imul bx,0xa051
   shrd ecx,edi,0xc
   or di,0x43dd
   add ah,0x3e
   neg bp
   shr bx,0x1
   imul bp,bp,0xca58
   test ah,ah
   sar eax,0xed
   shl ebx,0x1
   shr bp,0x1
   cmp dl,cl
   btr ecx,edx
   lea si,[edx+ecx*2+0xf6]
   rcr dh,0x1
   shl bh,0x1
   shr si,0xaf
   and cl,0xf
   shrd di,bx,cl
   xadd ax,dx
   dec ch
   mul cl
   cmp si,0x5ca1
   stc
   sbb bl,bh
   xor eax,0xec4ea216
   shr eax,0x1
   rol ebx,cl
   xor ebx,0x4d8f35f5
   cmpxchg ah,ch
   add si,0xea9
   test ebx,0x3d1c6809
   shr dl,cl
   sub eax,ebx
   rcl bh,cl
   mul dh
   btc bp,bx
   cmovc si,dx
   shl ecx,cl
   neg ebp
   cmove bp,dx
   and si,bx
   xchg ah,dl
   clc
   sbb esi,0x1b1f9f2a
   nop
   sub ax,0xf0e7
   mov bx,ax
   shrd ebp,ecx,1
   inc	ch
   cmovnbe dx,ax
   clc
   adc di,0x62f7
   or ebp,ebp
   bt bp,0x50
   setnbe al
   rcr dl,0x7e
   cmp ax,0xa44b
   or ch, 0xc0
   and ax ,0x3fff
   div ch
   ror cx,0x1
   adc cl,0x7
   xor cx,0x5453
   xor ebx,edi
   rcr bp,0x9a
   test ebx,esi
   lahf
   shld ebp,eax,cl
   shld ecx,esi,cl
   ror eax,cl
   test cx,0xe0f6
   stc
   adc esi,eax
   adc bh,0x38
   setpo dl
   rcr ebx,0x63
   imul cx,0xaf53
   bt di,0xcd
   movzx si,ch
   cmp edx,eax
   lea ebx,[edi+ebx*4+0x41]
   setpo dh
   mul si
   clc
   rcr ax,0x1
   cwde
   inc	ch
   rol bp,0x1
   sar eax,0xb
   ror dx,0x43
   shl ebx,0x4e
   and edi,0xc536f9c
   shrd edx,ecx,cl
   sar esi,cl
   shr di,0x1
   rcl al,cl
   sar ch,cl
   rol bh,0x1
   movsx bp,cl
   sbb ax,dx
   bt ebx,esi
   rol ch,0x4e
   shrd edi,edx,cl
   clc
   sar cx,0x43
   add ah,0x3e
   lea bx,[ecx+ecx*8]
   shl ah,cl
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   and edi,0x13ed5d97
   btr ebx,ecx
   cmp ebp,ebp
   neg eax
   clc
   sbb dl,0xa4
   stc
   sbb dx,si
   adc eax,0xebf3f595
   xchg cl,al
   shl bh,0x7b
   sar dl,cl
   and cl,0x1c
   cwde
   sbb ah,dl
   mov bp,0x42d1
   and cx,di
   sbb ebx,0x4a9b498e
   rol ecx,0x1
   and di,bx
   clc
   sbb bx,0x8796
   shl edx,cl
   shld ax,bx,0x8
   shl cx,0x1
   rol eax,cl
   mul eax
   btc cx,di
   cmc
   sar bx,0xd4
   shl dh,0xc
   dec ebp
   add edx,ecx
   group=base
   test ebp,0xd2c4e869
   ror ch,0x1e
   imul bx
   xor ebx,0xa4c4b2b4
   and edi,0x7871124
   shr ax,0x77
   xadd ch,ch
   setno bh
   btc bx,0xdc
   not eax
   cmovbe eax,esi
   rcr bp,0x1
   clc
   adc cx,0xca24
   ror bx,0x9
   shr esi,0x6b
   or eax,0x54895ae7
   or si,cx
   cmovpe si,bx
   bsf ebp,ebx
   mov ecx,ebx
   group=base
   shl di,cl
   sub ah,0xaa
   shr bl,0xb5
   sar cl,0x2a
   lea cx,[esi+edx*4]
   nop
   ror bh,0xf7
   shrd edi,eax,1
   or al, 0xc0
   and ax ,0x3fff
   div al
   shr esi,0x1
   and edx,edx
   shr edx,0x70
   add bp,cx
   cmove esi,esi
   bswap ecx
   sar ecx,0xb4
   shl si,0x2
   mov bp,0x1853
   shr ax,0x1
   rcr dx,0x1
   xor di,bx
   rcl edi,cl
   sar bp,cl
   and si,cx
   bsf ebx,edx
   add ch,0x93
   mov dh,al
   stc
   sbb ah,bh
   and al,0xdf
   cmovnc ebx,eax
   sahf
   movzx di,bl
   mul ebp
   cmc
   cmp si,0x8956
   inc	ch
   shrd ebx,ebp,0x6c
   imul cx,cx,0xed7c
   ror bl,0x2d
   bts ax,0x3d
   shr bx,0x1
   shl eax,0xb6
   lea edx,[ebx+0x15fb8b3f]
   sar si,0x1
   stc
   rcl ecx,0x1
   or ax,ax
   stc
   rcl si,0x1
   bsf ebx,eax
   shl bl,0x1
   sub al,0xe1
   ror ecx,cl
   ror al,0x1
   rcr ch,cl
   bts ax,bp
   xchg dx,ax
   shl di,0x1
   rol ebp,cl
   and dh,0xb5
   cmp ch,0x69
   sub esi,0x740e88f
   bswap ebx
   mul edi
   xor ebp,0x93665bcc
   test edi,ebx
   and bh,0xbc
   xor eax,ecx
   and cl,0xf
   shld si,cx,cl
   bsr eax,ebp
   sar ch,cl
   ror si,cl
   ror ax,0x25
   shl esi,0x1
   and cl,0xf
   shrd si,si,cl
   mov ch,0x26
   not ch
   imul bp,0x4960
   clc
   rcr cx,0x1
   test bp,0x9426
   ror edx,0x1
   clc
   adc ax,0xff19
   clc
   sbb al,0x63
   clc
   sbb ebx,esi
   cmovl dx,bp
   cmovno esi,esi
   and bx,bp
   shr eax,0x1
   cbw
   lea esi,[edi+ebp*2]
   xchg si,cx
   and cl,0xf
   shld bp,bx,cl
   sar ebp,0x1
   or ebx,esi
   add dx,0x727a
   ror cx,0x1
   clc
   sbb cx,si
   mul dx
   sub edi,0x6938354f
   clc
   test ch,0x87
   sar ax,cl
   shr ebx,cl
   shl bh,cl
   shr dh,cl
   sar bl,0xe2
   cmpxchg dl,dl
   stc
   rcl ax,0x1
   cmovno ebp,ebp
   stc
   rcl ebp,0x1
   stc
   adc al,0x83
   bts ebp,ebp
   adc ax,0x823f
   stc
   rcr ecx,0x1
   movzx cx,bl
   or cl,0xf7
   test esi,edx
   rcr bl,0x1
   bt bx,0x65
   xchg ch,ah
   sbb al,dh
   adc ah,bh
   cmovne ecx,edi
   rcr ebp,0xab
   cmp bh,0x98
   mul ebx
   stc
   sbb dl,0xac
   shrd eax,edx,1
   sub ebp,0xa678fd6b
   rol bp,0x1
   bts dx,0x1a
   test dx,0x6aaf
   setne cl
   rol al,0x1
   and dl,bh
   shrd ebp,esi,1
   clc
   sbb cl,0x7a
   stc
   sbb dl,0x44
   neg ah
   sar si,cl
   mul dx
   clc
   adc cl,bh
   bswap eax
   and cl,0xf
   shrd si,di,cl
   or bx,0x8ea3
   bts esi,0xd
   cmovnbe bx,bx
   mov ah,0xdd
   and cl,0xf
   shrd di,cx,cl
   and edi,ecx
   rol si,0x1
   shr bp,0x2b
   lea si,[ebx+esi*8+0x2a]
   rol esi,0x91
   sub ch,0xd5
   imul edi,ebp,0x349af71a
   rcr ax,cl
   or dl,0x12
   shr edi,0x66
   not si
   mul si
   adc esi,0xbebfb9d9
   test cl,0xb2
   or ecx, 0xc0000000
   and edx, 0x3fffffff
   div ecx
   and ch,al
   clc
   adc dx,0x8df4
   cmovl ebp,ecx
   cdq
   shld ebx,eax,1
   dec cx
   stc
   rcl al,0x1
   shr bx,cl
   neg esi
   rcl edi,cl
   mul bx
   stc
   adc ah,0x22
   rol di,0x80
   add si,0x8870
   lahf
   stc
   adc ch,bh
   rol edi,cl
   shr dh,cl
   rol dx,cl
   cmp ax,si
   rcr al,0x1
   movsx esi,ax
   shr ebx,0xe7
   bt ecx,eax
   add bx,ax
   cmovl edi,esi
   shl dx,0xaa
   bts cx,0x24
   ror di,0x25
   btr edi,0xb8
   cmovc eax,ebp
   setc al
   rcr cx,0xaf
   rol bl,cl
   movzx bp,ah
   xchg ax,ax
   sub edi,0x6ed528ff
   not ah
   clc
   adc ebx,eax
   test edi,ebx
   rcr ebp,0x1
   shrd ecx,edx,cl
   shrd ebx,ebp,cl
   imul dx,di,0x5eb1
   shrd dx,bp,0x9
   shrd ebp,ecx,cl
   ror ebx,0x9c
   sar bp,0x1
   rol edx,cl
   movzx ebx,bh
   imul cx,bp,0x5865
   and bx,si
   movzx bx,al
   lea ecx,[ebp+eax*1]
   imul ax
   and ah,0xa2
   and esi,eax
   ror al,cl
   sar dx,0xf0
   shl bl,0x1
   neg di
   xor edx,0x70362810
   rcl al,0x1
   clc
   sbb ebp,ecx
   shrd eax,eax,cl
   cmpxchg edi,ebx
   rcl edi,cl
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   movsx eax,dx
   cwd
   mov bx,0x201c
   btc cx,cx
   btc edi,edi
   cmpxchg edi,edx
   rol si,0x1
   rcr al,cl
   xor ebp,0x3d5c1c9f
   sbb bh,0xcd
   sbb edi,0x70e6eb07
   shl eax,cl
   xchg edi,esi
   add edx,0x861219d8
   or di,0xbac6
   and edi,edi
   cmp ah,0xf2
   shl ecx,cl
   ror bx,0x69
   imul eax
   rcr ebp,0x1
   sub al,bl
   imul dx,ax,0xa1d9
   add ebx,ebx
   adc esi,0xa114730a
   sbb dx,0x8c40
   not ebp
   stc
   rcl cl,0x1
   mov bp,0x1a88
   mov eax,edx
   rcl ecx,0x1
   rol edx,0x1
   bt di,0x8e
   cwd
   clc
   adc bl,0xc8
   stc
   adc ax,dx
   imul cl
   xor eax,edi
   btr dx,di
   not eax
   clc
   shld bp,bx,1
   stc
   sbb di,0x5e00
   sbb ebp,ebp
   stc
   rcl eax,0x1
   xor dx,ax
   clc
   sbb ch,bl
   shrd ebx,ecx,cl
   sub ch,dh
   sub ch,0x6c
   adc cx,bx
   sar eax,0x5d
   inc	ebp
   sar bh,cl
   bts eax,0xc5
   neg dh
   shrd cx,di,1
   movzx si,ch
   and ax,0xfa0b
   clc
   adc cl,dl
   rcl ebx,cl
   or cx,0xfd67
   rcr di,0x1
   neg ebx
   cmove edi,esi
   stc
   rcr ah,0x1
   lea edi,[ecx+ebp*1+0x893b1e97]
   nop
   sbb esi,eax
   rcr ecx,0x20
   shr al,0x1
   clc
   adc di,cx
   clc
   rcr ecx,0x1
   ror edi,0x1
   xor di,0x11b3
   bts edi,ecx
   setbe dl
   sar ebp,0x1
   cmp ah,0x54
   cmove bx,cx
   cmovpe si,dx
   xchg bh,dh
   clc
   sbb cx,di
   sar cx,0x1
   bt bp,0x8b
   xor bx,cx
   and cl,0xf
   shld dx,bx,cl
   ror bp,cl
   bswap edi
   xchg si,cx
   xchg cx,si
   mov ch,dl
   test ebp,0xe938d94a
   bts ebx,eax
   mul dx
   cmp bx,0x4f57
   cmovo esi,ecx
   sahf
   and ah,0x49
   rcr ebx,0x1
   rcl cl,0x70
   shld bp,di,1
   cwde
   ror di,cl
   add ebp,0x8a7bbd0d
   cmovnbe ebx,ebx
   shr edi,cl
   mov dx,dx
   xor ecx,eax
   not ebx
   sar dx,0x1
   cmpxchg bh,ah
   cmp eax,0x18c688a
   sub di,bp
   shl ax,0xa4
   sar bl,0x1
   cmc
   stc
   rcl bl,0x1
   shr ax,0x1
   rcl edx,0x1
   stc
   adc ah,al
   cmove ebx,ebp
   mov bl,0x91
   mul bl
   rol ch,0x1
   cmpxchg ecx,eax
   xor ebx,0x92904818
   cmpxchg bp,di
   shl ebx,0x1
   shld ebx,ebx,1
   rcr edi,0x1
   or esi,eax
   rol dl,0xab
   cmp edx,esi
   sbb cx,0x8fcd
   test bl,bh
   shl ebp,0x4e
   ror cx,0x91
   sar ecx,0xb3
   movsx dx,al
   rol ax,cl
   cmpxchg dh,al
   rol si,0x1
   sub dx,di
   group=base
   xadd eax,eax
   and bp,0x7e9b
   clc
   adc eax,0xbb8892c6
   shl bh,0x1
   mov si,ax
   sub cl,0x26
   add edi,ecx
   clc
   sbb edi,0x72cc5017
   ror ah,0x1
   cbw
   adc dh,0x6f
   not ch
   cmovpo ebx,edi
   setpe cl
   shrd bx,cx,0xc
   sar al,cl
   add bl,0xfd
   rcr di,0xe6
   rol cl,cl
   shr ah,0x86
   imul bp,bp,0xe21d
   bswap ebp
   shl ax,cl
   bts ebp,ebp
   shl bl,cl
   and di,0x5c62
   sets ch
   cmovs ax,cx
   clc
   rcr ax,0x1
   rcr bh,0xe3
   xadd bh,cl
   setne al
   xor si,dx
   bt bp,dx
   cmpxchg eax,edi
   cmovg ax,si
   shld edx,ebp,1
   sub dh,0xc8
   ror ebx,0x1
   btr ax,bp
   rcr ah,0x1
   nop
   group=base
   cmpxchg ebx,esi
   cmovs bx,bx
   clc
   adc ebp,0xb016b53c
   rcl bp,0x1
   rcr eax,0x55
   xor dx,bp
   stc
   sbb ecx,ebx
   test ch,ch
   bts eax,edi
   clc
   rcr bp,0x1
   shr edi,cl
   bts dx,0xe4
   cmovc bx,dx
   lea dx,[edi+ebx*4+0x4b41c0a5]
   shr dh,cl
   shl cx,0x1
   sar dl,0x4b
   neg ax
   not ebx
   test bl,0x5b
   ror esi,0x6f
   ror bp,0x1
   stc
   sbb edx,0x44151ba3
   clc
   sbb ecx,0x7aa883f9
   stc
   rcr edi,0x1
   sbb cx,ax
   test esi,ecx
   shl cl,0x1
   clc
   rcr ah,0x1
   rcl ecx,0x1
   rcr cx,cl
   cmpxchg eax,ebx
   xchg bl,dl
   sar esi,cl
   shrd edx,edx,cl
   sar si,0x1
   cmpxchg eax,ecx
   shrd ebx,esi,cl
   ror dx,cl
   dec di
   dec bx
   cmovg cx,bx
   dec ax
   cmovs cx,bx
   and si,0x87bd
   rol esi,0xd6
   shrd edx,edi,1
   rol bh,cl
   test bp,di
   rcl esi,cl
   shrd ebx,edx,1
   xchg esi,esi
   clc
   rcr dh,0x1
   cmp bh,al
   stc
   adc al,0xd1
   xchg ax,cx
   shrd eax,esi,1
   rcr ebx,0x1
   mov dl,0xf4
   ror ebp,cl
   bswap edx
   bt ax,ax
   shr bh,0x1
   cmc
   xor cx,si
   clc
   clc
   sbb dx,0xe57
   not bh
   stc
   rcl cl,0x1
   lea bx,[ebx+edx*4+0x9997fed6]
   sbb ah,0x20
   mul dh
   cmovo bx,ax
   sar edi,cl
   ror edi,0x9a
   or dx,0x21e3
   shr cx,0xf0
   xadd bl,ch
   setne bh
   cmovnbe ax,bx
   shld ebp,eax,1
   bt ebx,0xfc
   imul eax,0xe647d031
   test dl,0x5a
   not bx
   add edi,edi
   shld ebp,eax,cl
   clc
   movsx ebx,ax
   and cl,0xf
   shrd dx,bp,cl
   cmp esi,esi
   ror al,0x1
   nop
   sar edi,0xe5
   shl dx,cl
   clc
   stc
   rcr eax,0x1
   cmovc bp,ax
   or ecx,0x8ddb95ae
   shld cx,si,0x3
   cmpxchg al,al
   xor dx,di
   movzx esi,ch
   clc
   sbb ch,dl
   and eax,edx
   sar ebp,0x1
   sar bl,0xef
   shl bh,0x32
   ror bl,0x1
   xchg dh,al
   lea di,[esi+edi*1+0x71eb8d7]
   seto cl
   mul ebx
   xor bp,cx
   shl cx,cl
   sahf
   test esi,edi
   cmovpo ax,cx
   seto cl
   cmp eax,0x2f90db0f
   rcl di,cl
   rol bl,0x30
   imul esi
   and di,si
   test cl,bl
   cmpxchg edx,edi
   sahf
   cmovnl di,bp
   cmovl eax,edi
   xchg ch,bl
   imul edx,ecx,0x30309fbd
   cdq
   imul ebp,ecx,0x3511e8db
   clc
   rcr ebx,0x1
   stc
   rcl di,0x1
   adc ah,dh
   bts ebx,0xa5
   cmovc esi,edi
   stc
   adc ebx,ecx
   inc	bl
   clc
   adc bp,di
   seto dl
   cmovnl dx,dx
   btr bx,0x3a
   test edx,0xa0ac517b
   cwd
   neg di
   sbb ax,si
   and bx,0x2bd3
   stc
   sbb ch,cl
   inc	edi
   cmovpe dx,bx
   cmovns dx,di
   not dx
   ror bx,cl
   sar dl,0x79
   sub bp,0x5a7d
   sar cx,0x1
   rcr ax,0xbd
   ror bh,cl
   shr ax,0x47
   btr ax,bx
   stc
   adc di,0xfed3
   sar si,cl
   or bh,0xed
   clc
   sbb ecx,ebx
   btc edx,0x18
   dec bx
   imul dx,0xcc25
   btr edi,edx
   sar dx,cl
   btc di,0xc7
   not ch
   ror dx,cl
   shl eax,cl
   add cx,si
   and edx,eax
   cmc
   mov bx,0xc9f9
   stc
   sbb ax,ax
   neg eax
   shr bl,0x41
   rol bp,0xbe
   xor bp,0xe4e
   cmp ebp,0xeeff802a
   xor si,0xfffc
   stc
   adc ebp,eax
   btc cx,dx
   cmp ah,bl
   stc
   adc edi,0x31ae5eeb
   rcl bh,0x19
   rol ax,0xf2
   shr dl,cl
   shr dl,cl
   cbw
   inc di
   shr bp,0x1
   shld dx,ax,1
   cmovno dx,cx
   test di,0x418d
   setg dh
   mul ax
   rcl dh,0x1
   shrd dx,si,0xc
   imul di,0x371e
   sub bl,cl
   bts si,bp
   bswap esi
   bt cx,0x6e
   sar ah,0x6e
   ror dx,cl
   xor cx,bx
   and eax,0xdb6f46aa
   shld di,ax,1
   sbb ax,ax
   or eax,0xdf26e938
   clc
   rcl cx,0x1
   rcr edx,0x1
   stc
   sbb edx,eax
   setc dl
   movsx dx,bh
   sbb dh,0x8f
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0x9174e29e

 pop gs
 pop edi
 pop esi
 pop ebp
 pop edx
 pop ebx
 ret
         .size   log_size_10_var_002, .-log_size_10_var_002

.globl log_size_10_var_003
         .type   log_size_10_var_003, @function
log_size_10_var_003:
 push ebx
 push edx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0xb1247df5
  mov ebx,0x9608672
  mov ecx,0x78868b05
  mov edx,0xe859b93a
  mov ebp,0x58f7adaa
  mov esi,0x31c98558
  mov edi,0x9a004fb5
   clc
   stc
   adc dx,0x4ce5
   test ebx,ebp
   ror bx,0x1
   inc	bl
   setnl dh
   imul ebx,eax,0x241b708f
   btc bx,0x17
   shr bl,0x1
   rcl ebp,0x1
   cmovno edx,ebp
   shr di,cl
   group=base
   imul bp
   stc
   sbb dx,cx
   rcl ebx,0x7c
   test si,0x4c0c
   sets ch
   stc
   adc esi,0x2fc03831
   add edi,0xc7cbeb21
   and ebx,0x8c60d727
   stc
   sbb bl,al
   lea edi,[edx+ecx*4+0x5c05e24b]
   setg dl
   sub ebp,eax
   setne bh
   stc
   adc dh,dh
   rcl ah,0x16
   test al,0x7c
   inc si
   rcr ax,0x82
   shrd ax,ax,0x3
   mov dh,0xa0
   add cl,dh
   cmovc si,bx
   clc
   cmovno ebp,edx
   adc dx,ax
   rol ax,0x1
   shr cl,0x1
   ror bx,cl
   ror ebp,0xbc
   rol di,cl
   test dx,ax
   rcl eax,cl
   cmp si,ax
   ror di,cl
   imul si
   mul bl
   or si,0x2cda
   cmovne si,bp
   clc
   rcr al,0x1
   rol bl,0x1
   stc
   sbb ecx,ebx
   bt ecx,0x94
   shr dh,0x81
   imul bp,0x2988
   btr esi,eax
   sub dx,bx
   and ebp,edx
   cmovnl bp,dx
   test ebx,0x92da36e7
   bts dx,di
   rcl dh,0x1
   bsf edi,edx
   or dh, 0xc0
   and ax ,0x3fff
   div dh
   shrd ecx,eax,cl
   and esi,ebp
   or bx,dx
   cmovnl edi,edx
   bsr ebx,ebx
   btr di,ax
   and si,0x8e28
   setns al
   shr esi,0x6e
   btr ebx,0xc9
   clc
   rcl eax,0x1
   clc
   adc bx,di
   or al,bl
   btr edx,ecx
   cmp di,bp
   add edi,esi
   sahf
   cmp bl,cl
   rcr esi,cl
   rol di,0x1
   or ch,ch
   add bx,ax
   inc	bl
   clc
   rcr edi,0x1
   btr si,di
   cwde
   sar bx,cl
   xor si,0xfaf6
   rol cl,0x44
   shr ecx,cl
   shl di,0x1
   sub ebp,0xe43d34b2
   sub si,di
   stc
   sbb dx,0xc82a
   ror si,0x1
   cmovc ebp,ebp
   mov ebx,ebp
   cmovnc esi,ebx
   clc
   sbb ebx,0x67c49cd9
   dec edx
   not al
   group=base
   shr ebp,0xc7
   movsx eax,di
   rol di,cl
   sar eax,cl
   shr bh,0x46
   movzx si,bl
   shr edx,cl
   not bp
   bt ax,bp
   or eax,0x9c0ace0f
   imul bp
   mov bx,si
   stc
   adc ebx,edx
   shld ebx,ebx,1
   cmovne eax,ebp
   rol ebx,0x49
   ror bp,0x9c
   mul ecx
   shr di,0x1
   imul dh
   clc
   shr dx,0x82
   cmp si,0xc055
   clc
   sbb ch,0x45
   btr di,di
   rcl al,0x73
   bts ecx,edx
   rcr bh,0x3a
   shr ebx,cl
   imul bx
   inc di
   cmovnc ecx,ebx
   shld ebx,edx,cl
   shrd edi,edx,cl
   mul bp
   shl cl,0x1
   cwde
   ror bh,0xa8
   rol eax,cl
   or bl, 0xc0
   and ax ,0x3fff
   div bl
   mov ch,bh
   lea bx,[edx+0x1848bca3]
   group=base
   or esi,0x28430cb5
   imul edx
   shr bp,0x7e
   shl cl,0x1
   neg cl
   sar bp,0x4a
   shr esi,0xc2
   sar bp,cl
   dec cl
   setne ah
   cdq
   rol bx,0x98
   or bh,dl
   adc bh,0x1b
   cmovl di,di
   mul edi
   add si,cx
   clc
   rcr edx,0x1
   rcl ax,0x1
   and cl,0xf
   shld bx,bp,cl
   or ebx, 0xc0000000
   and edx, 0x3fffffff
   div ebx
   rol dh,0x66
   imul ebx,0xb81b5f97
   shl bh,0x1
   cwd
   add ebx,ebp
   seto bl
   stc
   sbb cx,0x25db
   bts ebp,ecx
   bt cx,bx
   clc
   adc bl,0x9c
   sar ah,0x1
   add dx,dx
   adc bx,0x8ed4
   clc
   sbb ah,0x14
   cmovnbe ecx,ecx
   rcl al,0x5b
   movsx ecx,di
   shrd bx,si,1
   clc
   adc ebp,edi
   stc
   sbb si,ax
   add ax,si
   bts ax,ax
   shl cl,0x1
   rcr cx,0x1
   neg al
   bts di,0xdc
   stc
   rcl ebx,0x1
   clc
   sbb si,cx
   stc
   adc bx,bp
   rcl bl,0x1
   bt si,0x9c
   cbw
   cmpxchg ch,bl
   cmovno eax,esi
   clc
   adc esi,ebx
   shl ecx,cl
   or ebx,edx
   shr bp,cl
   rol al,0x45
   test cl,0xc9
   rcr edi,0x9c
   mul esi
   and cl,0xf
   shrd si,si,cl
   bswap eax
   cdq
   xor ax,0xa2e0
   sar al,0xb3
   movzx di,dh
   shl ebx,cl
   xchg bh,dh
   shrd ax,dx,0xa
   xor eax,0x77b6e278
   xchg esi,esi
   sub cx,0x5db9
   stc
   sbb cl,cl
   ror bh,0x1
   clc
   adc bx,cx
   nop
   setns ch
   movzx edx,dh
   sbb cx,si
   cmovc di,bx
   cmp edx,ebp
   cmovno si,ax
   mov ebp,0x118b4e71
   stc
   rcr si,0x1
   shl dh,0x68
   bts bp,ax
   stc
   rcr bl,0x1
   clc
   adc eax,0xf6c95fac
   rcr dh,cl
   cmp dl,0xb3
   cmovnbe ebp,esi
   ror dh,0x1
   adc esi,0xc84f1f58
   setbe dh
   sar bp,cl
   cbw
   imul edx,ebp,0xd075e337
   sbb esi,edx
   rol dh,0x2e
   shr bx,0x1
   ror dx,0x58
   and esi,eax
   or dx,0xcd6b
   add bx,0xb1c3
   ror bl,0x1
   adc dl,0x6b
   rol al,cl
   movsx esi,al
   neg di
   cmovnc di,bx
   ror ah,cl
   rol al,0xce
   movsx cx,ch
   btc ecx,edi
   stc
   sbb bl,0x0
   dec cl
   sar edi,0x56
   shl dh,0x1
   rol dl,0xfc
   shld cx,bp,0xb
   bts ecx,edx
   ror ecx,cl
   add bh,bl
   stc
   adc ebx,0xa4caebe1
   cmpxchg di,dx
   shl edi,0xba
   nop
   movsx ax,bl
   xadd ebp,ebp
   cmpxchg di,ax
   add ch,dh
   adc dx,dx
   inc	dl
   rcl ebx,cl
   btr ecx,esi
   btc eax,0x5f
   shr edx,0x43
   shrd bx,cx,0x5
   cmpxchg al,ah
   or esi,ebp
   stc
   sbb dx,0x7c43
   and cl,0xf
   shrd bx,dx,cl
   test eax,0xd554f08b
   clc
   adc bp,bx
   cmovnl si,ax
   cmovns edi,edi
   rol cx,0xe4
   or bh,ah
   stc
   adc ch,ah
   stc
   rcl bl,0x1
   stc
   sbb cl,ah
   setno dl
   or dx,0xf10d
   cwde
   rcr di,0x7f
   test ebp,0xbdf5aeb5
   cmovnc bx,di
   clc
   adc dx,cx
   movzx ecx,cl
   mul edx
   not cl
   clc
   cmovc dx,dx
   test eax,edx
   rol ah,cl
   xchg edi,ebx
   bsf eax,ebp
   shrd eax,edx,1
   sets ch
   inc	esi
   setl dh
   btc si,cx
   ror cl,0x1
   shr al,0x1
   btc esi,0xb8
   stc
   rcr di,0x1
   cmovc ax,bx
   stc
   adc dh,ch
   rcr eax,cl
   add ax,0xf341
   shr esi,0xba
   sub si,bx
   cmovbe edx,ecx
   stc
   rcr ax,0x1
   ror cl,0x1
   clc
   adc ah,bh
   inc	eax
   and dx,bx
   bt di,bx
   shld ebp,ecx,1
   and cl,0xf
   shrd ax,di,cl
   rol edx,0x1
   sar ebx,0x7e
   dec bx
   imul esi,0xd4bfea8
   movsx esi,bx
   clc
   adc eax,0x7d2a871f
   shld eax,eax,cl
   shrd esi,edx,cl
   rol ebp,cl
   mov ah,0x4c
   sar eax,0x8
   or eax,eax
   cmovbe cx,bp
   rcr ebx,cl
   shld dx,cx,0x8
   neg di
   test ax,ax
   not si
   mov bh,cl
   stc
   rcl bx,0x1
   xor bp,0x5173
   cmovnl si,di
   sub dl,0xd4
   cmovnc si,ax
   cwde
   setc bl
   or ecx,0xa391f970
   cmovbe eax,ebx
   cmovpo bp,ax
   ror ecx,cl
   cmpxchg bl,dh
   rcr cx,cl
   shrd cx,cx,0x9
   shld bx,si,0x7
   shr edi,0x1
   adc bh,0xcd
   shld eax,ebx,0x7d
   inc	edi
   rol ebp,0xa6
   xadd al,bh
   rcr ebp,0x1
   shl ah,cl
   rol dl,0x1
   rcr ebx,cl
   ror ch,0x1
   rol bx,0x76
   cmpxchg edx,ecx
   stc
   sbb ah,0x41
   cmp dh,0xe4
   stc
   adc si,di
   mul eax
   lea ebp,[esi+ebx*1]
   test esi,0x35f5fdfc
   imul di,dx,0x566a
   movzx edi,cx
   stc
   rcr si,0x1
   sar ecx,0x1
   stc
   adc ax,0xf1b6
   and dh,dl
   not esi
   and al,0xb9
   add bh,0x18
   or dl, 0xc0
   and ax ,0x3fff
   div dl
   dec dx
   cmp cl,0x5c
   xor ebx,0xe54b443a
   shrd dx,cx,0xd
   shrd edi,ecx,0x9d
   movsx edi,ch
   rol bh,0xcd
   cwde
   sub ch,0xcf
   clc
   rcl ax,0x1
   shr bx,cl
   shl edi,0x1
   cmovo dx,si
   stc
   adc ah,dh
   rol di,0x1
   shr ax,0x1
   stc
   sbb ax,0xf6cd
   mul ch
   cmp ax,0x7e3e
   inc cx
   cmp al,0x4c
   shl bl,0xfc
   xadd ecx,edi
   sar cl,0x80
   shr di,cl
   mov edx,edi
   xadd bp,ax
   movzx cx,ch
   not dx
   shrd bp,di,0x5
   add edx,eax
   bt eax,edx
   rcl bx,0x1
   cmovc bx,ax
   bts esi,0x54
   shl si,0x82
   cmpxchg dh,dl
   rcl si,0x1
   cmpxchg bh,ah
   sbb al,0xfc
   test ah,ah
   cmove edx,ecx
   shrd edi,esi,cl
   btc edx,eax
   clc
   sbb ah,cl
   cmovne di,ax
   shl ebp,0x24
   shld ebp,esi,cl
   xchg esi,esi
   rol ah,0x1
   rcl edi,0x1
   clc
   sbb eax,0x64074f7
   sar bp,0x1
   ror al,0x86
   test dx,0xc4c1
   rcr edi,0x1
   neg bx
   xadd si,cx
   clc
   sbb dh,0x6a
   group=base
   neg esi
   rol edx,0x29
   shl dl,0x1
   rcr esi,0x45
   and eax,0x30a36670
   or ah,ah
   cdq
   sub bh,dh
   imul ebx,eax,0xdf57b5d1
   shrd eax,ecx,0xc1
   bts dx,si
   shl ebx,0x1
   adc cx,si
   add al,0x58
   add ecx,0x8d0ba87b
   stc
   rcl ecx,0x1
   bts ebx,0x7c
   movsx cx,dl
   lea ebp,[ebp+esi*2]
   sub bp,di
   shld bp,si,1
   setl dl
   sar ax,0x1
   sub bx,si
   cdq
   cmp ax,0xe3d3
   btc ecx,0x90
   xor bx,0xa081
   clc
   sbb cl,al
   sbb esi,edx
   ror di,cl
   or cx,0xbe51
   sar eax,0x1
   stc
   sbb bp,dx
   shr edx,0x1
   rcr dh,0xb7
   ror edx,cl
   bts bx,0x86
   shl ax,0x1
   cmpxchg ah,cl
   lahf
   xadd esi,edi
   lea ebp,[ecx+edx*2+0xbc5d7ff5]
   cmovno ebp,eax
   shrd bx,si,0xe
   sar bh,0xd5
   movzx ebx,si
   bswap ebp
   test cx,si
   cmovbe ebp,esi
   adc dl,0x83
   cwde
   shrd di,ax,0x0
   bt ebx,0x11
   rcl ecx,0x1
   or edi,ebx
   movzx edx,di
   test bl,0x1e
   stc
   rcr bl,0x1
   or ecx,0xbf1f73ed
   mov bp,0x1d35
   stc
   adc edx,ecx
   add ah,0x42
   test cl,0xb9
   cmovo bx,cx
   cmovpo ebp,eax
   setnbe cl
   rol dx,0x3f
   neg ebx
   lea eax,[ebx+esi*4+0x88117811]
   sub bh,0xd6
   mul bp
   rcl ebp,0x1
   sar esi,0x1
   dec dx
   lea bx,[esi+esi*2]
   cmp ax,ax
   bsr eax,esi
   add ax,si
   ror dx,cl
   group=base
   shld ebp,edi,1
   or cx,0x990f
   clc
   rcl edi,0x1
   shr eax,cl
   sar ax,cl
   bts edx,0xd9
   add bp,bp
   setnc al
   stc
   adc dx,cx
   sub dl,0x36
   shr cl,cl
   mov esi,0xdf92b9d7
   or bp,bx
   or eax,edi
   bswap ecx
   and ah,ah
   cmovne edx,ecx
   rol bp,cl
   sar bl,0x82
   or bp, 0xc000
   and dx, 0x3fff
   div bp
   cdq
   ror cl,0x1
   rcr al,0x1
   stc
   adc bh,0x4b
   lea cx,[edi+esi*8+0x3a]
   add edi,ebx
   neg bx
   setnbe bh
   cmp si,si
   or ebx,0x58e7881d
   clc
   rcl ebx,0x1
   imul bl
   not ebp
   test cl,0xb4
   cmovl esi,ebp
   cmovbe ebx,edx
   rcr bp,0xc9
   not si
   imul bp
   shrd cx,bp,0x9
   add cl,0xdc
   ror ch,0x1
   sbb si,0xdee1
   rcr al,cl
   and cl,0xf
   shld di,dx,cl
   and dx,cx
   sar dl,cl
   or bh,bh
   shl ax,0x79
   shl ah,0x59
   bts ax,dx
   xadd si,dx
   clc
   adc ecx,eax
   btr ebp,0x4a
   xor ah,bh
   cmovne edi,edx
   rol di,0xe7
   cbw
   or bh, 0xc0
   and ax ,0x3fff
   div bh
   shl esi,cl
   cmp si,0xced8
   cmpxchg bx,bx
   stc
   rcr di,0x1
   group=base
   lea eax,[edx+edx*4]
   cwde
   bts di,bp
   shl dl,0x1
   shl bx,0x1
   or ch,dh
   sbb ecx,ebx
   sete cl
   cmove esi,esi
   imul edx,esi,0xd087dd42
   and bh,0xfc
   shr bl,cl
   imul di,dx,0x983b
   inc si
   bt edx,0x74
   shr ecx,cl
   xor cl,cl
   stc
   sbb dl,0xf6
   rol di,0x1
   shrd bx,di,1
   clc
   adc bp,0xa47a
   movzx edi,bx
   movsx esi,dh
   rcl edi,cl
   group=base
   ror al,0x1
   movzx ax,dl
   sbb ch,0xb
   btc cx,si
   not eax
   stc
   adc bh,0x85
   shr dx,cl
   btc ebp,ecx
   movsx ax,cl
   cmp edi,ebp
   rcr ebp,0x1
   bts edx,eax
   shrd di,bp,0x7
   shld eax,edx,0x2f
   shr cx,0xee
   ror edx,0x1
   rcr ax,0xc8
   imul ebx,0xb0d1c0a2
   lea di,[eax+edi*1+0xb]
   rcl bh,cl
   ror esi,0x87
   xadd bp,dx
   shrd si,bx,0x8
   sar ebp,0xd2
   cmpxchg ecx,esi
   setg al
   and edx,ebp
   shl bx,cl
   sar ebx,0x1
   rcl si,0x6d
   sub bl,0xfd
   cmovns esi,ecx
   rcr bp,0x1
   bts bx,ax
   add eax,eax
   sar ebx,cl
   group=base
   ror cl,0x26
   add dh,cl
   rcr esi,cl
   mov cx,si
   shl si,cl
   shl si,0x43
   xor ebx,0xbe771ae7
   cmovo bp,di
   add bh,dh
   xor dh,0x6c
   clc
   sbb ebx,ebp
   mov dx,di
   stc
   rcr ecx,0x1
   shrd bx,dx,1
   rol ax,0x1
   clc
   sbb di,ax
   clc
   rcr edx,0x1
   cmpxchg ah,bl
   cmovpe dx,si
   cwd
   sub si,si
   cmovc ax,si
   cdq
   sets bh
   test eax,ecx
   stc
   adc al,0xbc
   bt ecx,0x3f
   sbb bh,ch
   sbb dh,0x48
   rol bx,cl
   btr esi,0xd2
   stc
   rcl dx,0x1
   inc bp
   clc
   adc bl,0x60
   clc
   rcl cl,0x1
   rcr al,cl
   and bp,0x4f1
   cmpxchg ecx,ebp
   cmp si,cx
   setne cl
   rcl dx,0x58
   shr ah,cl
   dec bl
   cmovpe ecx,edx
   xor bl,0x6c
   mul edi
   imul bp,cx,0x2830
   sub cl,ah
   cmp cx,0xc922
   xadd esi,eax
   cmovpe ecx,edx
   xor bx,0xb5c4
   clc
   rcl esi,0x1
   cmovno bx,bp
   rol edx,0x70
   neg edx
   cmovl cx,dx
   clc
   adc ch,cl
   ror eax,0x29
   sar edx,cl
   not di
   mul ebp
   xor cl,cl
   sar edi,cl
   movsx esi,bh
   test dl,al
   xchg bp,di
   cwde
   cmove esi,ebp
   mul edi
   neg edx
   cmovs si,di
   shl bx,0x2a
   shr di,0x1
   movzx cx,dh
   or dh,ch
   setc al
   stc
   sbb dx,cx
   bt edi,ecx
   shld cx,bp,0x6
   cmp eax,edx
   shld esi,eax,0xb0
   movzx ecx,ah
   movzx edi,dh
   ror edi,cl
   mul edx
   cmpxchg bh,dh
   cmovpo eax,ebx
   bsf ecx,edi
   sar si,0xda
   mov esi,ebp
   shl di,0x1
   sar eax,0x87
   ror edi,0x9e
   shrd bp,bx,0x6
   cmp eax,edi
   ror dx,cl
   shr ebp,cl
   shld ebx,ebx,0x61
   shl di,0x1
   cmpxchg ah,bh
   movzx edx,bl
   clc
   rcl bl,0x1
   cmpxchg ch,ch
   rcr eax,0xbe
   and cl,0xf
   shld bp,di,cl
   btc esi,0xf5
   shl si,0xb1
   or si,ax
   clc
   sbb edi,0x55cfa664
   rcl ch,0x23
   sar ecx,cl
   btr edx,0xc8
   btc di,0xfc
   rol dx,cl
   rol bp,cl
   or cx,0x3cf7
   ror si,0xfd
   shr ecx,0x38
   sar ch,0xff
   ror bp,0x54
   sub ax,si
   cmovno edx,ecx
   ror ax,0x1
   stc
   adc dl,0x4
   lea ecx,[eax+0xcc]
   shl esi,0x1
   nop
   stc
   sbb ecx,ecx
   rol ax,0x7a
   test dl,0x4d
   cmovpe edi,ebx
   adc al,0x5e
   sar cx,0x1
   test eax,0xf4376f0a
   cmovnbe bx,si
   shld esi,ebp,1
   dec eax
   cmovnl bp,si
   lea dx,[edx+edx*4]
   stc
   adc di,bx
   adc al,0x6f
   stc
   sbb bp,di
   cmovpe ebx,edi
   and dx,di
   sbb dh,dh
   cmovbe bp,di
   shr bp,cl
   rol bp,0x1
   shrd edx,esi,0xe4
   sub al,cl
   adc esi,ebp
   adc ebx,0x8dca82b3
   add di,di
   add ebp,edi
   stc
   sbb ebp,eax
   imul ax,0x8c0f
   sub eax,ebx
   cmovpo esi,edx
   shrd ebp,ebx,cl
   rol bl,cl
   movsx bx,bh
   xchg dh,dh
   bt di,di
   cmovnc ebp,edx
   sar ch,0x1
   or eax,edi
   xor edi,esi
   shr bh,0x1
   sub edx,eax
   clc
   sbb edi,0x111f3bc1
   stc
   sbb dl,0xe9
   shr ax,cl
   test bh,cl
   clc
   adc edx,eax
   sar dh,0xab
   or ecx,ecx
   adc si,dx
   cmp edi,edi
   shl ah,0x8f
   bt di,ax
   rcr esi,0xbb
   lea edi,[ebp+ebx*2]
   btr bx,0x75
   rol ch,cl
   neg dl
   imul bx,0xb05c
   shl ax,cl
   bt ebx,0x8b
   sbb dh,bh
   rol bh,0x7d
   shrd ebp,ecx,cl
   shr di,0x1
   rcl dh,0x39
   not ebp
   rol edi,0x1
   stc
   rcr edi,0x1
   bsf esi,esi
   xor al,0xf7
   clc
   adc ax,cx
   and cl,0xf
   shrd dx,ax,cl
   neg si
   cmovbe esi,ebp
   rcr esi,0xb8
   bts cx,0x9d
   stc
   adc dl,0xd9
   shr bx,0x1
   cmc
   shl ah,0x53
   movzx ebx,ah
   shld ecx,ebp,cl
   and ecx,eax
   adc si,0xdf00
   rcl bh,cl
   ror edi,0x75
   mul edi
   movsx dx,bh
   inc	ebp
   cmovng esi,esi
   cmovnbe eax,ebp
   btc ebx,0x29
   sar bh,cl
   btc di,0x2a
   sar eax,0x1
   xadd ebp,ecx
   setnl ch
   cmovnl ebx,ebx
   cmove ax,bp
   stc
   sbb ax,si
   clc
   rcl bp,0x1
   and cl,dl
   add bh,0x4f
   clc
   adc ebp,esi
   clc
   adc ax,0x8374
   sbb ah,0x41
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0x5e44e337

 pop gs
 pop edi
 pop esi
 pop ebp
 pop edx
 pop ebx
 ret
         .size   log_size_10_var_003, .-log_size_10_var_003

.globl log_size_10_var_004
         .type   log_size_10_var_004, @function
log_size_10_var_004:
 push ebx
 push edx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0xc163669
  mov ebx,0x376612b3
  mov ecx,0x1c6ed5cf
  mov edx,0x32cd0e8
  mov ebp,0xb36fb2d0
  mov esi,0x11faa613
  mov edi,0x230e889c
   xchg dx,ax
   movsx ebx,bp
   sub ch,0xb7
   and ecx,0xdd41e2f8
   or ch,ah
   shrd esi,ecx,1
   cmovs esi,edi
   movzx ebp,bh
   shl ebp,cl
   or ebp,ebp
   adc dx,cx
   shld eax,ebp,0xfd
   cwd
   add eax,edi
   inc bp
   cmc
   sar eax,0xc4
   mov dx,bp
   sar edx,cl
   and bh,0xf7
   neg bh
   rcl dh,0x33
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   movsx esi,bl
   lea cx,[esi+edx*2+0x5bf82129]
   sar bh,0x1
   stc
   adc bl,bl
   cmp eax,ebp
   clc
   adc ecx,esi
   cmovbe ecx,ebx
   cmovpe dx,ax
   group=base
   mov edi,0xd5faa2c0
   mov cl,0xae
   cmovne ax,bx
   rol ah,cl
   nop
   cmp ax,bp
   sub dx,bp
   add ebx,0xe9096cd3
   sete cl
   stc
   rcr dx,0x1
   bt edx,edi
   sar dx,cl
   cmpxchg cl,al
   shr esi,0x1
   rcr ebp,0x1
   cmp cx,0xcff1
   stc
   rcr ebp,0x1
   sbb si,cx
   shr ch,cl
   ror ah,0xc8
   sar cl,0x1
   ror cx,cl
   or di,cx
   btr bp,dx
   clc
   adc dl,ch
   clc
   bt edx,edx
   cdq
   stc
   sbb di,cx
   test esi,ebx
   sub eax,0x27a666b8
   and eax,0xe553aa51
   and ecx,0xb33806c3
   setl ah
   shl bx,0x2d
   cmp ah,0xf9
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   shr esi,0x1
   rol ax,cl
   shl cl,0x1
   mov edx,ebp
   adc dh,al
   mov al,0x48
   and edx,0x5be1ae15
   cmovnbe dx,bx
   setpe bh
   btr edi,0xdd
   cmovc ebx,ebx
   cmove cx,bp
   bsr eax,edi
   ror ebp,cl
   shr cl,cl
   imul ebp
   clc
   adc dx,0x4741
   xor cl,0xa9
   sar edx,0x1
   adc dx,di
   ror ecx,0x33
   btr si,bx
   bsf edx,edx
   inc	dh
   setpo bl
   shr bp,cl
   shl bp,0x4
   cdq
   rol eax,0x5e
   or dx,0x83e6
   or edi, 0xc0000000
   and edx, 0x3fffffff
   div edi
   ror ecx,cl
   sar cl,0x15
   btc si,0x4f
   stc
   sbb bl,0xb3
   cmovnc bp,di
   rcr bh,cl
   cmpxchg dx,bp
   stc
   rcl edi,0x1
   xor ebx,esi
   clc
   btr dx,0xa0
   adc ax,dx
   shr dl,0x1
   stc
   sbb ecx,ebp
   clc
   sbb ecx,0xab46a85d
   setl ch
   or edx,edi
   xor ecx,0xd9ac60b7
   cmovno si,cx
   lea cx,[ecx+0x3b0c3181]
   not edx
   stc
   rcr edx,0x1
   ror bh,0xbb
   ror ax,0xdc
   movsx eax,si
   sar ebp,0xf2
   cmp dl,0xc4
   xor ebx,0x3f05550a
   test dx,cx
   adc di,0x2153
   cmovo ebx,esi
   imul di
   shl esi,cl
   rol ebx,0x1
   bts ecx,ebp
   and ecx,ecx
   and cl,0xd0
   ror cx,0x1
   setno ah
   xor ebp,ecx
   cmovbe si,di
   btr ax,ax
   sar dl,0x5c
   xor ax,dx
   and esi,eax
   adc ch,ah
   mul ch
   cwde
   cmp ebx,0xcacfc108
   sar bl,cl
   add bh,0xa3
   test ecx,eax
   stc
   sbb dx,0x2b2a
   bsr edx,eax
   rol ah,0x1
   cmovnc dx,cx
   cmovnc di,bp
   rol ah,0x1
   sar ebp,0x68
   imul edi,0x2db20a94
   sub di,0x6250
   or edi, 0xc0000000
   and edx, 0x3fffffff
   div edi
   cmp cx,si
   cmovbe cx,si
   inc	ch
   cmovl cx,bp
   imul ax
   and ax,dx
   add ebx,edx
   cmovo ebx,ebp
   shr di,0x1
   ror cx,0x71
   bts ecx,esi
   bts ebx,edi
   shrd ecx,edi,cl
   nop
   rol bx,0x1
   rol ax,0x8
   and dl,bl
   shld eax,ebp,0xe5
   bswap ebx
   or dh,0xe5
   neg ah
   adc ah,ch
   cmovg ecx,ebp
   stc
   adc bp,0x1a2f
   stc
   rcl si,0x1
   sub bh,0x26
   setg bl
   and bx,0x675a
   cmovpo dx,bx
   rcr edx,cl
   cwd
   shrd eax,esi,cl
   sar edi,cl
   and ebp,ecx
   cmovnl ebx,ecx
   cmovpo ebx,ebp
   mov dl,bl
   stc
   adc si,0x9d6c
   movzx bp,ch
   cmovc cx,dx
   cmp dx,0x302b
   rol esi,0x72
   bt edi,eax
   cwd
   test cl,cl
   mul al
   test dx,0x3e79
   sar edx,0xd6
   mov ax,di
   shl ebx,0xcc
   imul ebx,0x939fc0f8
   neg esi
   stc
   sbb edi,0xf977cdf
   clc
   sbb eax,0xd6632879
   cdq
   and ecx,esi
   sub eax,ecx
   cwde
   cmovne ax,bx
   setbe dh
   cmp bx,0x3857
   shl cl,0x6f
   bt ebp,edx
   ror ebp,cl
   ror esi,cl
   shrd cx,si,1
   or ebx,0xd3120c44
   dec bl
   rol cx,cl
   shl cx,cl
   mov dh,bh
   lea di,[eax+ecx*8+0x56]
   ror eax,cl
   movzx bp,bh
   shl ebx,0x43
   add di,bx
   shl di,0x1
   rcl ebx,0x33
   imul edi,ebp,0x5de983e8
   movsx ebp,bp
   ror ebp,0x1
   test edi,0x987cf091
   clc
   sbb bl,0x2f
   cmovno si,ax
   or si,0x83d2
   cmovpe edi,ebp
   imul ebp,edi,0x230d02f9
   mov esi,0x22671282
   btr esi,ecx
   bts dx,0x11
   and cl,0xed
   cmovo edx,ecx
   shrd esi,ecx,1
   group=base
   shrd bx,ax,1
   sar cx,0x1
   bts bp,bp
   sub esi,edx
   bswap esi
   shr dh,cl
   add di,bx
   rcr edx,0x97
   and edi,0xc2d144ee
   not dx
   stc
   sbb ebx,ebx
   xadd ebx,eax
   sar ebx,0x91
   imul ebp,0xa218870
   or edi,edi
   sar ecx,0x1
   rcr edi,0x5c
   xchg edi,esi
   cmp eax,edx
   cmpxchg bl,dh
   shrd dx,ax,0x3
   imul eax
   sar ebp,0x1d
   and edi,edx
   or cl,al
   cmovne edi,eax
   shld cx,di,1
   rcl ecx,cl
   mov ebx,0x5c204470
   or al,ah
   rcr cl,0x67
   movsx esi,di
   shr ebx,cl
   sar di,cl
   not bp
   ror di,0x9b
   and cl,0xf
   shrd bx,bp,cl
   shl esi,cl
   add ch,al
   cmovno eax,edi
   sar di,0xf7
   rol bx,0xcb
   xor esi,eax
   mul bp
   clc
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   mov ch,al
   shr ebx,cl
   cdq
   mov al,0xbc
   bts cx,ax
   shl esi,0x1a
   mov eax,0xe04aaee3
   sar edx,0x1
   add ch,dl
   shrd ebp,eax,cl
   cmp si,0xe752
   btr esi,edx
   ror bl,0xeb
   imul ebx,0x9beac6f6
   rcr edx,0xe4
   and si,bx
   shld edx,edx,1
   shrd ebp,edx,cl
   rol ah,cl
   cmpxchg ax,si
   rcl dl,0xe5
   or ch, 0xc0
   and ax ,0x3fff
   div ch
   sub dx,0x474c
   shr dl,0xfd
   xadd si,dx
   or bh,0x1e
   mov ch,bl
   bts bp,si
   shld bx,dx,0x0
   cmp eax,eax
   cmp bh,0xe4
   xor bp,0x9c3b
   shl ebx,cl
   shl ah,0xaf
   movzx eax,al
   xchg ch,cl
   shr dl,0x1f
   ror bl,0x51
   sar eax,0x6c
   and dh,ch
   sbb si,dx
   setno bl
   setnc dh
   xadd cx,ax
   shrd eax,esi,1
   clc
   rcr edx,0x1
   not bh
   xor cl,0x59
   rcl dl,0x1
   add al,0x6
   sar dh,0xd2
   nop
   cmpxchg edi,ecx
   cmovbe ecx,ebp
   and cl,0xf
   shld cx,dx,cl
   inc cx
   nop
   cmovnl ax,bx
   imul ecx,0x4235540f
   shr ecx,cl
   not bh
   lea ecx,[esi]
   imul ecx,ecx,0xbfecc84c
   clc
   rcr cx,0x1
   rcr si,0x73
   sar bh,cl
   shl ebp,0x1
   xor cx,bx
   cmpxchg dl,dh
   bts cx,0xfc
   sub ebx,0x6ca3a8e3
   stc
   rcl di,0x1
   clc
   sbb ah,ah
   shrd si,bx,0xa
   btc ecx,0x3a
   sar ah,cl
   movsx di,al
   movsx ecx,cx
   btr edi,0x77
   clc
   adc si,bx
   stc
   adc ebx,0x598d0834
   shrd eax,edx,0x18
   or di, 0xc000
   and dx, 0x3fff
   div di
   shl esi,cl
   or ebp, 0xc0000000
   and edx, 0x3fffffff
   div ebp
   cmp edi,ebp
   sar esi,0x4c
   neg esi
   stc
   sbb cl,0x1d
   and ebx,0x2c750852
   clc
   sbb ax,bx
   cmovne ecx,edx
   ror bx,cl
   xor di,di
   clc
   adc bh,cl
   stc
   rcl ch,0x1
   and dx,bx
   adc esi,0xdcef878a
   xor cx,0x823c
   stc
   rcl si,0x1
   sub cx,0xe8f9
   clc
   rcl ebp,0x1
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   shl bp,0xe3
   or bp, 0xc000
   and dx, 0x3fff
   div bp
   mul ebx
   clc
   adc ch,0x38
   rcr al,cl
   test dl,0x6a
   cmovc edi,edx
   imul bp,cx,0x9a22
   shl ah,0x1
   test ax,0xd07f
   rcr ecx,0x1
   shrd edx,ecx,cl
   shrd ax,si,0xd
   movsx edi,dx
   shr bp,0x94
   shr cl,0x1
   shl esi,0x47
   movsx ebp,al
   rol esi,cl
   and eax,0xb530fe44
   xchg ebx,eax
   rcr al,0xfd
   cmpxchg bp,dx
   rcl si,0x1
   stc
   rcr cl,0x1
   add di,ax
   xadd cx,si
   test ch,al
   stc
   sbb ebp,0xb6cc942c
   sbb edx,0x19acbc75
   cmp dh,0x64
   cmovpo si,bx
   movzx edi,bl
   rcr eax,cl
   sar ebp,0x1
   stc
   sbb bp,0x7523
   cmovns dx,cx
   rcr eax,0x5a
   shl dx,0xfc
   not edx
   bts ax,0xcf
   ror dl,0x1
   rcl bp,0x1
   shl dl,0x5
   shr bl,cl
   sub bp,0x2a11
   rcl edi,0x97
   and cl,0xf
   shrd bx,si,cl
   imul bx,bp,0xeee2
   seto dh
   stc
   sbb si,ax
   setnbe bl
   clc
   sbb bx,bp
   cbw
   cmovc dx,bp
   not esi
   shr bl,0x1
   sbb ax,0x46e1
   and dl,0x1a
   cmp dl,dl
   cmovs dx,di
   adc ebp,0xe6c19373
   sahf
   and cx,0xba04
   stc
   sbb ax,0x795c
   setc bl
   btc esi,esi
   xadd eax,eax
   cmovl di,si
   bts esi,ebx
   dec dh
   shld esi,esi,cl
   shld ebp,ebx,1
   sub cx,si
   rcl al,0x1
   nop
   ror si,cl
   test di,0xc491
   clc
   adc ax,cx
   adc ch,cl
   sbb dx,0xa8ac
   cmovpo eax,edx
   adc ch,0xee
   clc
   rcl ebp,0x1
   or bp,bx
   mov eax,ebx
   cmovnl cx,si
   rol dl,0xee
   shr bh,cl
   mov bh,bh
   bts di,0x37
   rol ebp,0x1
   test dx,si
   bt ecx,0xba
   sub bp,cx
   neg bp
   dec ebp
   stc
   rcl di,0x1
   xor eax,0x62b4db8a
   stc
   rcl dl,0x1
   shrd bx,bx,0x3
   sar dh,0x1
   bt ax,ax
   rcl ebx,0x1
   sub cx,0xf47
   shld eax,edi,cl
   cwde
   imul edx,ecx,0x40b78055
   sar si,0x1
   lea ebp,[ebp+edx*4+0x60f34b45]
   ror ebx,cl
   shl dl,0xc9
   movzx ecx,bl
   and esi,ebp
   rcl ah,0x1
   movzx ax,bl
   mov al,0x5d
   shr cx,0x1
   adc dh,dh
   and dh,0x26
   group=base
   and bl,bl
   shl esi,cl
   imul eax,edi,0xedf716f1
   clc
   sbb ecx,0x7a8d914b
   shl si,0x1
   neg cx
   imul bp,bx,0xdace
   bts bp,0x4e
   shl edx,cl
   cmpxchg ebx,edx
   setno bh
   sar bl,cl
   bt ebp,0xd1
   shld eax,ebp,1
   add ah,0xcc
   btc ecx,0xa1
   test dh,0xfe
   clc
   sbb cl,ch
   xor ch,al
   sar edx,cl
   imul ebx,0xc26ad982
   test edx,esi
   stc
   adc edx,0xfbf30fad
   mov dx,0x672b
   cmovbe si,bx
   shr bh,cl
   or ecx,eax
   sete ch
   shrd ecx,ebx,cl
   shl ebx,0x9e
   not ebp
   xchg cl,bl
   ror esi,0xd1
   cmp di,0x4933
   or dh,0x7e
   xadd edi,ebx
   rcr dl,0x48
   dec dl
   test ah,0xf9
   stc
   adc ch,dl
   mov edx,edx
   sub ah,bh
   cmovo edi,ecx
   stc
   sbb edx,0x691035c3
   cmovns si,di
   shrd eax,ecx,0x59
   and eax,edx
   test di,0x6e79
   shr cx,cl
   cmp edx,eax
   sete bl
   rcr cl,0x7c
   or ax,bp
   or ah,0xe6
   cmp dx,0xe785
   rol esi,0x64
   xor dh,ah
   test ax,cx
   xchg eax,ebx
   clc
   adc edi,esi
   cmovpo bp,bp
   btr edi,0xa2
   dec ebx
   clc
   rcr ecx,0x1
   cmovc edx,edx
   rcl ebp,cl
   ror dl,0x1
   stc
   adc ch,dl
   setpo ch
   clc
   adc cl,bl
   rol bp,0xbf
   sub dx,0x7502
   stc
   adc si,cx
   stc
   rcl ch,0x1
   shr bx,0xd4
   sar edi,cl
   cmpxchg bh,bh
   mov dl,ch
   setl bl
   cwde
   shr di,0x1
   test bp,bp
   cmp ch,ah
   add edx,0x8a228590
   and bh,0x43
   cmovnl edx,ecx
   ror ecx,0x1
   adc al,0x86
   add cx,0xeb7d
   cmovpo dx,di
   btr edx,esi
   cwd
   shl cx,0x5
   mov edx,0x3d68ae77
   mov ch,dh
   bts eax,ebp
   bt edi,0x2
   btc cx,0x2d
   rcr al,0x1
   adc ebp,esi
   not eax
   sets al
   test ecx,0x5694eb62
   cmp bh,cl
   cmovpe bx,cx
   adc edi,0xe066546f
   clc
   adc ebp,edx
   shr cx,0x1
   shl si,0x1
   mov ecx,ebx
   clc
   sbb edi,edi
   btr edx,edx
   stc
   sbb eax,0xe01a4987
   bt bp,bx
   movzx bx,dl
   test si,0x6ac3
   cmovno eax,esi
   cmovng ecx,edx
   btr dx,di
   add dl,0x6c
   stc
   rcl cx,0x1
   rol eax,cl
   shr ecx,0x1
   stc
   sbb si,0x502d
   cmovnl cx,bp
   group=base
   neg ax
   clc
   rcr ebp,0x1
   group=base
   or si,0x385a
   shr al,cl
   or bh, 0xc0
   and ax ,0x3fff
   div bh
   sub ebp,edi
   cmovpe ebx,ebx
   and edx,ebp
   btc di,0x76
   cmove esi,esi
   xor ebp,0x3806036f
   clc
   sbb di,cx
   nop
   shrd di,ax,1
   cmovc di,di
   xchg ebp,edx
   stc
   rcl ebp,0x1
   xor edx,0xf5f1acee
   sar bh,0x92
   movsx ax,bl
   cdq
   and cl,0xf
   shrd bx,bx,cl
   and si,di
   lahf
   stc
   rcr dl,0x1
   shld eax,eax,0x38
   or bl,dh
   or edx,ebx
   btc edi,eax
   not dx
   shr bx,0x61
   sar ah,0x1
   cmovo cx,si
   shl bl,cl
   nop
   shl ax,0xc2
   shr dh,cl
   test ah,0xaa
   shl edi,0x1
   cmovnc edx,ebx
   cmc
   ror dx,0x1
   xchg bl,dl
   sar bh,0x86
   shl cl,0x1
   clc
   adc bl,0x50
   xchg dx,dx
   sar si,0x46
   test ebp,ebx
   imul eax
   cmovc cx,di
   xor cx,0x2600
   stc
   sbb esi,edx
   rcr dl,0x1
   sar ecx,0x3c
   add bp,ax
   shld eax,eax,1
   adc al,ah
   cmpxchg cx,si
   xchg esi,edx
   cmp ch,ch
   setng al
   sbb ah,0x75
   add bp,bp
   bswap esi
   cmpxchg ebp,ecx
   or ah,0xf2
   xchg si,cx
   shr al,cl
   shr bl,0x1e
   btc bx,0x22
   cmc
   xchg ax,dx
   rcr ebx,0x3d
   and dx,di
   test ax,0xa2d2
   imul cx,0xc7cd
   sbb cx,dx
   shr dx,0x1
   xchg di,bp
   mov bp,0xa8bd
   btr esi,0xb1
   ror bl,0x1
   cmovno dx,bx
   sbb cx,di
   cmovpe ebp,edi
   lea edi,[esi+ebx*1]
   bts cx,0x16
   shld cx,si,1
   cmpxchg si,cx
   cmpxchg eax,ebx
   rcr bx,0x71
   and cl,0xf
   shrd di,dx,cl
   and cl,0xf
   shrd bx,di,cl
   shrd eax,eax,0xf1
   lea bx,[edi+edx*4]
   bts ax,0x91
   adc esi,esi
   xor ebp,eax
   clc
   sbb ch,bl
   ror al,0x97
   shld edx,esi,1
   cmpxchg eax,edi
   cmpxchg edx,ecx
   rol edi,cl
   and cl,dl
   imul ebp,0xbda5da56
   imul edx,esi,0xfda0532
   stc
   rcr cl,0x1
   imul bx
   sar eax,0x1
   cmp edx,ebp
   setg ah
   mov cl,ch
   cmovns edx,ebp
   rcl ax,cl
   rol si,0xdd
   and cl,0xf
   shrd dx,ax,cl
   inc di
   ror dh,cl
   btc eax,0x13
   xadd ax,dx
   cmovs si,bp
   bswap edx
   not bl
   or edi,ecx
   cmovne ax,dx
   shl dl,0x1
   cmovo eax,ebx
   xchg ah,ch
   cmovo si,si
   mov cx,0x1b13
   shld ax,bx,0xe
   clc
   dec bl
   shr cx,0x1
   stc
   sbb cx,dx
   nop
   movsx ecx,dl
   and dx,0x7575
   sar di,cl
   bt edi,ebp
   not edi
   shr si,0x1
   rcl ebp,0x1
   xadd bx,dx
   cmovno esi,esi
   rcl si,0x81
   or bp,0x9d58
   mov eax,edx
   dec dx
   cmovl si,ax
   stc
   sbb ah,0xde
   bts edi,esi
   imul ax,0x5955
   mov edx,ecx
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   bt esi,eax
   sub bp,0x5b6
   sar dx,cl
   rol ax,cl
   neg ah
   setnc bl
   cmp di,0x5529
   setpo dh
   imul ax
   clc
   rcr dh,0x1
   shrd ecx,ebx,0x5b
   shrd ecx,esi,cl
   ror bx,0x1
   rcr esi,cl
   and esi,ebp
   btr bp,0xdc
   shr bl,0x1
   shl dh,0x1
   shld di,ax,1
   setne bl
   ror di,0x1
   ror dh,cl
   mov al,0x75
   shld ebp,ebp,1
   test cl,cl
   and cl,0xf
   shld dx,bp,cl
   shr ax,cl
   rol edx,0x89
   bsf edi,ebp
   shr eax,0x66
   add ebx,ebx
   rol esi,0x1
   dec edx
   adc edi,eax
   xchg di,ax
   cmovnbe esi,ecx
   or ecx, 0xc0000000
   and edx, 0x3fffffff
   div ecx
   or bh,al
   add ebp,0xa1ebdacb
   and eax,0xa62a65bb
   xor eax,esi
   cmovg dx,si
   stc
   sbb bh,0xbd
   sar edi,cl
   shl dl,0x7f
   test ah,ch
   clc
   adc bp,0x92d2
   ror ah,cl
   and ah,0xfa
   or si,si
   movzx cx,dh
   cmpxchg al,cl
   lahf
   xor eax,edi
   test bp,0x3912
   cmpxchg ebx,eax
   clc
   adc bx,0xefae
   btr dx,0x8b
   imul dx
   stc
   adc edx,esi
   cmovnc cx,cx
   not bx
   and cx,bp
   add bh,0x88
   sahf
   setbe dl
   cmovno esi,eax
   cmovpo ebp,ecx
   cmpxchg di,si
   mov ebp,0xc1c36e58
   xor ah,0x3
   neg ebx
   shr bp,0x93
   sub dl,bl
   lea edx,[esi+ebx*1+0xc1a9ce4b]
   cmpxchg esi,ebp
   shr bx,0x1
   rol edi,0x1
   test esi,0xdbe48617
   inc	esi
   and dl,ch
   clc
   sbb edx,0x7bb10ab6
   clc
   rcl esi,0x1
   bt ebp,0x20
   and bp,0xfbfc
   add ax,0xfb5b
   clc
   rcl dh,0x1
   btr dx,di
   stc
   adc ecx,0xcaa98f46
   rcr dx,cl
   movzx eax,bh
   mov ebx,edx
   cdq
   mov dx,cx
   shr si,cl
   sar di,0x10
   bt edi,0xb4
   and cl,0xf
   shrd bp,cx,cl
   sub bx,0x111a
   cmovno ax,dx
   cmpxchg edx,edi
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0xa405465c

 pop gs
 pop edi
 pop esi
 pop ebp
 pop edx
 pop ebx
 ret
         .size   log_size_10_var_004, .-log_size_10_var_004

.globl log_size_10_var_005
         .type   log_size_10_var_005, @function
log_size_10_var_005:
 push ebx
 push edx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0xfa71438c
  mov ebx,0xd655362e
  mov ecx,0x9977f673
  mov edx,0xb42ef4ba
  mov ebp,0xd0037716
  mov esi,0x6b8eafd8
  mov edi,0x910db780
   mul cl
   cmovo edi,ebx
   cmp dh,0xca
   bsr esi,edx
   ror ebp,cl
   or al, 0xc0
   and ax ,0x3fff
   div al
   inc ax
   xor dh,dl
   clc
   rcl ebx,0x1
   bts dx,ax
   and dh,al
   xchg bh,bh
   add cx,0x2c72
   sar bp,0x1
   bts eax,esi
   add bx,di
   cmovl ecx,ebp
   cmovnl esi,ebp
   cbw
   sub ecx,0xb26787c2
   clc
   sbb dx,0x2c98
   not dh
   movzx ecx,si
   shr ebx,cl
   xor dl,0x41
   imul al
   shr si,cl
   cmp cx,di
   sar al,cl
   sub dl,0x3
   shrd eax,edx,1
   stc
   adc dh,ah
   btr ecx,eax
   clc
   adc bl,al
   test ax,cx
   cmovo di,ax
   stc
   adc cx,cx
   clc
   adc ah,bh
   cmovpo ax,si
   sbb ch,0x8c
   shld ebp,ebx,cl
   ror bx,0x1
   add al,ah
   and edi,0x16a2b021
   shld edx,ebp,0x9f
   btr dx,0x1f
   rcr edx,0x1
   sub ebx,0xbe32d34
   cmovbe dx,dx
   shld esi,eax,cl
   and bx,cx
   xadd dx,ax
   cmovno ecx,edi
   cmovpo ecx,ebx
   rol dh,0x80
   mov bl,0x50
   bts edi,esi
   cmp eax,edx
   cmovc bp,di
   shld ecx,eax,1
   xor al,0xf4
   cmovl esi,ecx
   clc
   sbb edx,0x152f2b44
   stc
   rcr ebp,0x1
   movzx ebx,ax
   or ebx,0x8c3b4e6f
   ror eax,cl
   imul ecx,esi,0x561cbd46
   clc
   sbb ebx,0x2e20c07
   clc
   adc bp,bp
   btr eax,0xd8
   stc
   sbb cx,0xd93a
   shrd edi,ebp,cl
   neg dh
   rcr ax,cl
   shr bx,0x1
   cmp bx,dx
   setbe dl
   rcr esi,0x45
   ror ebp,0x21
   bts bp,0xc8
   shld di,bx,1
   cdq
   cmovc ebx,ecx
   cmovpo ecx,edx
   add bp,cx
   not ax
   or dl,bh
   setg ah
   cmovns si,di
   stc
   rcr si,0x1
   stc
   adc bx,0xb8ca
   rcl ebx,0x37
   test edi,0xcf9640ad
   imul edx,edi,0x89e2ebed
   stc
   sbb di,ax
   and cx,cx
   imul ah
   shr dl,0xa
   shrd ecx,edx,cl
   imul ebx,ecx,0x4bcce275
   cmovc si,bx
   cmpxchg bp,si
   clc
   rcl eax,0x1
   sbb ebp,ebx
   add edi,ebx
   or edx,0xa93dda3a
   clc
   adc edi,0xcad560c6
   stc
   adc bx,0xde63
   not al
   bt dx,0x1
   neg cl
   not ch
   sar cl,cl
   imul bp,0x1ef3
   and cl,0xf
   shld cx,dx,cl
   sub bp,di
   mov dx,dx
   rol ah,0xa0
   movzx edi,al
   cmpxchg bh,bh
   sar edi,0xa2
   bt edi,eax
   rol edi,0x1
   test cl,ah
   rcr ch,cl
   cmpxchg ecx,eax
   setnl bh
   rcr ebx,0xb4
   sar bl,0x9d
   shl si,cl
   shr bl,cl
   sar ebx,cl
   mov dl,ch
   ror cx,cl
   bsf ecx,eax
   add esi,eax
   mov ax,di
   imul dl
   and dx,di
   lea bx,[eax+edx*8+0xe93cdcd3]
   setnbe bh
   rcl ax,0xe5
   cmp bx,0xcf0c
   xor ebx,edx
   btr bx,bx
   shl bl,cl
   inc	esi
   sub eax,0xc52bdc93
   inc	cl
   movsx ebx,cx
   bt eax,0x7e
   clc
   adc ch,ah
   mov bx,di
   btc bp,0x8d
   stc
   adc dl,bh
   xor cl,0x25
   adc ebp,ebx
   clc
   sbb bh,0xa0
   ror bl,cl
   shrd ebp,ecx,0x38
   btr ebx,0x7c
   rcr ecx,cl
   lea edx,[ecx+edi*4+0xa23aa639]
   cmpxchg bx,di
   cmovnc di,bx
   or ah,bl
   seto ch
   not di
   or dh,0x9c
   rcl al,cl
   shr bx,0x82
   add dh,dl
   setnl ah
   cmovo esi,edx
   shr dx,cl
   bt bp,0x33
   not ebp
   rol ebx,cl
   sar ax,cl
   imul eax,ecx,0x2bec64f3
   cmpxchg dl,dh
   cmovs ebx,eax
   shld bp,di,1
   test edi,edi
   sbb bx,ax
   stc
   rcr ah,0x1
   cmp edx,0xffd28f1a
   btr si,0x4f
   test di,ax
   shr eax,0x1
   setnc bh
   cmpxchg dx,bx
   ror ebp,cl
   cmp dl,0x8a
   bts ax,bx
   ror cx,cl
   shrd edi,ecx,0x3c
   add di,di
   stc
   adc ecx,edx
   sar bh,0x1
   imul eax,edx,0x187fe9ff
   cmovno cx,di
   add cx,si
   add ax,bx
   cwde
   or ecx, 0xc0000000
   and edx, 0x3fffffff
   div ecx
   shl si,0x1
   rcl dl,0xdb
   btr edx,0x22
   rcr edi,0x1
   shl di,cl
   shld edx,eax,cl
   or eax,0x840cf7fe
   imul dl
   stc
   sbb ch,bh
   clc
   not bl
   xadd bl,dl
   sub di,0x67de
   stc
   rcr edi,0x1
   sar ch,cl
   xchg bh,ah
   mul dx
   stc
   adc si,0xb21a
   cmove ebp,ebx
   sbb ah,cl
   sahf
   clc
   adc ecx,ecx
   xor ebx,0x48cf5149
   imul edx,esi,0xef10e4c0
   stc
   adc edi,edx
   movzx edi,al
   cmovc si,bx
   seto ch
   shl ah,cl
   rol al,0x1
   bsf ecx,ebp
   and cl,0xf
   shld bp,ax,cl
   xor esi,0xfd3c383a
   xchg esi,edx
   test ah,al
   adc bl,0x55
   cmpxchg edi,ecx
   mul edi
   btc ax,di
   bts si,si
   btc eax,0xac
   mov eax,ecx
   clc
   rcr dh,0x1
   bt bp,bx
   clc
   sbb cx,ax
   setpo dl
   sub dh,0x1d
   sub ch,ah
   cmovnbe edi,ebp
   stc
   sbb dh,bh
   cmovl bp,si
   clc
   rcr ebx,0x1
   dec dh
   rcl ax,cl
   not dx
   sar cl,0x1
   or di, 0xc000
   and dx, 0x3fff
   div di
   imul ebx
   ror bp,cl
   movzx ebx,ah
   shl cx,0xb0
   rol dx,0x64
   and cl,0xf
   shld cx,ax,cl
   bts bx,0x54
   rcl esi,0x1
   and cl,dl
   stc
   rcr bh,0x1
   sar ebp,0x1
   neg cl
   neg esi
   or ebx, 0xc0000000
   and edx, 0x3fffffff
   div ebx
   sar cx,0x5b
   shl ch,0x1
   test ebp,esi
   shr cl,0x61
   ror ah,0xb5
   shr edi,0x1
   shrd edi,eax,0xe4
   xadd ecx,edx
   bts edx,ebx
   rcl al,cl
   cmpxchg cx,ax
   seto al
   rcl cx,cl
   neg edi
   bts dx,0xce
   clc
   adc edx,0xb5a55250
   bsf ebp,ebx
   neg dx
   movsx si,bl
   clc
   sbb cl,0x49
   clc
   rcr bl,0x1
   not ax
   stc
   rcr bh,0x1
   bsf ebp,ecx
   cdq
   add ch,0xcd
   cmovl bx,dx
   movzx esi,dh
   cwde
   sbb edi,0x85f19b26
   cmovns di,bx
   imul eax
   sar ax,0xd7
   btc ecx,0x8a
   stc
   adc di,0x4cdd
   ror cx,0x1
   rcl esi,0x6e
   ror cl,0xdc
   and cl,0xf
   shld si,ax,cl
   sar ebp,0x1
   mov dh,bh
   movzx di,dh
   btr dx,0x25
   neg dx
   sahf
   or dl, 0xc0
   and ax ,0x3fff
   div dl
   bts dx,ax
   shld edx,edx,0x3e
   shld ax,bx,1
   cmp bh,ch
   rol di,0x1
   sub edi,0xd8e87b5c
   shl dl,0x44
   imul di,0xc43
   btc ebx,0x79
   shrd cx,bx,1
   cmpxchg bp,dx
   shl edi,0x1
   add bh,0xbd
   cmovl dx,bp
   shr edx,0x15
   inc di
   movzx edx,dh
   ror di,cl
   cwd
   xor ebx,esi
   mov bx,0x66d3
   setno ch
   clc
   rcl cx,0x1
   rol bp,0x1
   dec bx
   sar bp,0x87
   and eax,ebp
   and di,0x6ef0
   rcl cx,0x44
   cmp ah,0x43
   setnl dl
   ror ecx,cl
   or di,0x3327
   rcl di,0x1
   shr bp,cl
   cmp ebx,0x50f8be6c
   mul cx
   add ah,0x32
   clc
   adc ebx,0xcebaf176
   and ecx,ebx
   setne dh
   clc
   adc cl,0xa8
   xchg esi,ecx
   shl ebp,0x1
   rol ah,0x1
   cmovc dx,bx
   rcr edx,0xfe
   cmp si,0x4373
   bt ebx,edi
   setnc ah
   btr ax,di
   btc eax,ebx
   cmc
   movsx esi,si
   group=base
   add edx,edi
   shl bp,cl
   neg cx
   shr bp,0x92
   cwd
   shr cl,0x1
   rol eax,0xe2
   movsx esi,bl
   mul si
   rol edx,0x9a
   shr di,0x1
   bts dx,0xea
   cmp edi,edi
   shr bh,0x1
   xadd ebx,ebx
   test ecx,0x7ad5d3b8
   shr cl,cl
   sub bp,0x2a91
   sbb bx,0xb4ce
   and ax,0x96be
   mov esi,ebx
   clc
   sbb ebp,eax
   imul di,0xc1cd
   bswap ebp
   or bl,ch
   or edi, 0xc0000000
   and edx, 0x3fffffff
   div edi
   cmp ch,0xa1
   bsr edx,ecx
   cmp edx,eax
   rcl ecx,0xf9
   or ebp, 0xc0000000
   and edx, 0x3fffffff
   div ebp
   shl edx,cl
   rol bp,0x2c
   mov cx,dx
   sub eax,eax
   sbb eax,edi
   sar edx,0x1
   clc
   adc esi,0x4c56dc89
   btc ebp,0x4b
   shr edi,cl
   imul dx
   bsr edx,ecx
   movzx esi,cx
   test bp,0xfdc2
   or bh,ah
   sar bl,cl
   bswap edx
   and bh,ch
   setne ch
   shld di,si,1
   stc
   sbb ah,0xac
   btr esi,ebp
   and si,0xa6c6
   shl ebx,0x6b
   test ah,0x59
   bt cx,0xdd
   test di,0xe730
   cmovns di,bx
   xadd eax,eax
   shr dx,0x1
   rcr edi,cl
   cmp edi,eax
   sahf
   ror cl,cl
   rol dl,0x70
   sub ebx,eax
   setno ah
   cmp bp,bx
   and ebp,0x6029d68c
   cmove bx,cx
   inc	ecx
   dec ebx
   rcr di,0x1
   clc
   adc ebx,0x399b99be
   stc
   rcr bh,0x1
   clc
   sbb dh,0x11
   rol ch,0x1
   shr bh,cl
   btc cx,0x5f
   cmpxchg ch,cl
   imul ax
   ror eax,0x1
   btc di,di
   lea ax,[ebp+esi*8+0x233ae294]
   rol cx,cl
   test ebx,esi
   xor cl,0x26
   sar dx,cl
   rol si,cl
   btc eax,edi
   shr bp,0x1
   neg di
   clc
   adc ebp,esi
   cmovs ecx,esi
   rcl esi,0x1
   and cl,0xf
   shrd dx,cx,cl
   add bx,0xd4ea
   movsx dx,ah
   rcl cl,0x1
   ror bp,0x1a
   xchg ah,ch
   movsx ebx,si
   xor si,0xe177
   xchg eax,edi
   setl ah
   rcl ch,0x1
   rol al,0x1
   bts cx,cx
   rcr al,0x1
   shl esi,0xa2
   movzx bp,dl
   sar ah,0xb6
   xor cx,ax
   shr bx,cl
   rol cx,0x1
   btr dx,0x31
   rcr ax,cl
   bsr eax,eax
   inc	al
   test ax,di
   cwde
   or edi,0x77deec48
   cmovne dx,ax
   inc	eax
   mul bl
   test eax,ebx
   sar si,cl
   cmp eax,0x53c7d2b7
   cmovbe ebp,ebx
   clc
   sbb edx,0xa8374a3d
   shl al,cl
   mov dx,dx
   add ah,0x9e
   imul ebx,ebx,0x79db7314
   clc
   adc dx,0x4860
   shr esi,cl
   lea ebx,[edx+edx*2+0x6c54e2b7]
   shl bh,0x4d
   add bx,di
   test ebx,ebx
   setno al
   movzx ebp,bx
   sar ah,0x52
   sub esi,esi
   cmove ebx,ebx
   sbb bh,0x5d
   rcl bl,0x1
   shld edx,ebp,0x62
   shl ah,cl
   rol si,0x1
   shld ecx,eax,0x18
   shld cx,dx,0xf
   rol bp,cl
   or ch,0x75
   mov bh,0x9e
   neg edx
   and cl,0xf
   shld bx,si,cl
   inc si
   not al
   test al,bh
   shl ebp,0x1
   bts ebx,0x27
   not ecx
   mul si
   inc	ah
   imul ax,si,0x27a2
   adc bh,0xce
   shld edi,eax,1
   bts ebx,0x25
   stc
   sbb dx,0xf551
   or cx,0xd8e4
   ror dx,0x1
   cmovo eax,esi
   xor eax,edx
   imul esi,0x7936bab2
   btc cx,ax
   sar bh,0x7b
   movzx ebx,dl
   sahf
   mul ax
   sbb ecx,0x49f83378
   and edi,0x1c18e3cb
   stc
   sbb dl,dl
   movzx dx,dh
   xor bh,bh
   setns dh
   btc bp,0xb
   rcl ebp,0x1
   mul ah
   clc
   sbb dh,bl
   or ah,dh
   rcr dx,0x90
   shl ebx,0xd1
   bsr ebp,edx
   test cl,cl
   bswap ecx
   shr eax,cl
   neg bx
   or ecx, 0xc0000000
   and edx, 0x3fffffff
   div ecx
   rol di,0xe7
   and di,0x88e4
   setng bl
   shl cx,0x1
   rcr dl,0x2d
   sar eax,0x1
   rcr edx,0xdd
   dec ah
   imul esi,eax,0xe5aee13c
   movzx esi,si
   test ebx,0x6a96d8bc
   xor cl,dh
   shrd edi,edi,0x2
   not edx
   bsr ebp,esi
   btc cx,0x51
   sub bh,al
   shl edi,0x35
   or si,si
   cmovs dx,cx
   cmovnc edi,esi
   imul dx,bp,0xa64
   stc
   sbb di,0x4c57
   sub eax,0x47173d5
   rcr ebx,cl
   btc dx,0x10
   or dx,0xbe26
   stc
   rcr edi,0x1
   inc si
   clc
   sbb bp,0xf4d2
   rcl edx,cl
   and cl,0xf
   shld si,dx,cl
   rol bx,0x84
   sub bx,cx
   xor ebx,ebx
   xadd dh,al
   or bl, 0xc0
   and ax ,0x3fff
   div bl
   shrd dx,di,1
   stc
   sbb cx,di
   sar ch,0x80
   sar di,cl
   shld edx,ecx,cl
   shr cx,0x1
   rcr al,cl
   and ecx,0xad55da33
   shld dx,bx,1
   shl eax,cl
   inc	ebp
   imul esi,0xf33d8d8a
   clc
   adc ah,dh
   add si,bp
   shld ecx,esi,0xd9
   btr edx,0x9f
   not esi
   rcr eax,0xfd
   cmp eax,ebx
   btr ebp,0x84
   clc
   adc di,0x1151
   cmovg edx,esi
   clc
   sbb bp,dx
   stc
   sbb ah,cl
   sets al
   clc
   adc cx,0x7502
   clc
   adc esi,0x2fb886f9
   bt ebx,0x2
   shrd esi,esi,cl
   or ebp,edx
   rcl ax,cl
   rol dx,0xb8
   xadd dx,dx
   rol ch,cl
   cwde
   rol bl,0xba
   imul bp,cx,0xa08c
   clc
   rcr bx,0x1
   ror ebp,0x1
   ror eax,0x1
   add dl,0xc2
   inc	ah
   shl al,cl
   not di
   mov bx,ax
   or ebp,edx
   cmove si,dx
   stc
   sbb bp,0x1fac
   mov cl,dh
   btr bp,0x65
   cmp bh,dl
   lahf
   rcr ch,cl
   rol eax,0x3a
   movsx ecx,cl
   xchg bp,ax
   dec edx
   shl cx,0x1
   and di,0x3eaa
   shr bp,cl
   shrd dx,cx,0x1
   rol edi,0xc
   and cl,0xf
   shld ax,ax,cl
   shl ch,0x1
   clc
   adc ax,0xac50
   sar ecx,0x81
   imul al
   shl ax,0xdd
   btc ebx,eax
   stc
   sbb ebx,0x1af3c6c2
   stc
   rcr dl,0x1
   dec cl
   bt esi,esi
   adc ax,0x85c9
   sahf
   stc
   rcr si,0x1
   rcr bp,cl
   or si, 0xc000
   and dx, 0x3fff
   div si
   sar ebp,0x2a
   ror edx,0x1
   add ah,0xd3
   not ebx
   stc
   rcr ah,0x1
   or cl,bh
   cmovno di,dx
   sub di,dx
   btr di,0xbe
   and di,dx
   mul bx
   sar bx,cl
   neg ecx
   setng cl
   setg bl
   stc
   sbb ecx,0xff7f9c6a
   imul dx
   stc
   rcr bh,0x1
   shl esi,cl
   cmp eax,0xb81dc95a
   stc
   adc bp,cx
   xchg bx,dx
   cmp esi,0xbaaa036c
   clc
   adc esi,ebx
   stc
   sbb dx,0xfef5
   sub bp,di
   mov bl,dh
   inc	ebp
   imul eax,ebx,0xa766b5e0
   shl al,0x8c
   sub bh,0xba
   clc
   rcl ebx,0x1
   dec dl
   nop
   not cx
   clc
   adc cl,bl
   sub ah,cl
   shr edi,cl
   rol cl,0x9a
   test eax,0x22acc4db
   cmovno dx,si
   rcr bh,cl
   and cl,0xf
   shrd bx,si,cl
   bt esi,ebx
   or eax,0x47ff643b
   setpo dh
   setnl ah
   rol cx,0x1
   shrd edi,ebp,cl
   ror cl,0x55
   shld ebx,ecx,cl
   movsx ecx,bx
   sar cx,0x34
   sar ecx,0xa2
   not cl
   rol ch,0x1
   stc
   sbb edi,0x750b06f
   seto dl
   cmovpo edx,edx
   shrd bp,bp,1
   rcr cx,0x45
   sahf
   shr ebp,0x44
   ror bh,cl
   xchg cl,ah
   and ecx,0xda395bf2
   shld si,dx,1
   stc
   sbb dx,ax
   setnc ch
   bts eax,0x11
   neg cl
   bt esi,edi
   xor dx,si
   shr di,cl
   shr dl,cl
   sar ebx,0x1
   sub ecx,esi
   shl bx,0x3
   shl si,cl
   rol ebx,0x1
   movzx si,bl
   cwde
   shl bx,0x1
   mov ch,0xc3
   xor edx,edi
   sar di,cl
   shr cx,0x1
   cmovno cx,dx
   shl ebx,0x1
   shr di,0xb2
   sub bx,0x70d
   rcr dx,cl
   rol edi,cl
   mov bx,bx
   xadd ax,ax
   imul dx,dx,0x5434
   bsr ecx,edx
   bts bx,di
   rcr ax,cl
   test ebx,edx
   xadd ax,ax
   not bp
   shl ebx,0xb0
   shr eax,cl
   cmp edx,0xca02e9cf
   cmovc esi,ebp
   xor cx,cx
   sar cx,0x93
   cmpxchg cx,ax
   sbb cx,bp
   or di,si
   clc
   rcr bp,0x1
   movzx eax,ax
   ror ebp,cl
   dec ax
   cmpxchg eax,edx
   clc
   rcl bh,0x1
   ror cl,0x6c
   bt esi,ebx
   rol dx,0x1
   stc
   rcr ch,0x1
   cmp esi,esi
   cwde
   cmovne bp,cx
   and cl,0xf
   shrd cx,ax,cl
   test cl,bh
   sub cx,0x508
   rol dx,0xc9
   clc
   movzx bp,al
   and bl,ch
   xor bp,0x6933
   and dh,dh
   stc
   sbb bh,0xf8
   dec cx
   cmovng edx,ebx
   test ch,0xa5
   bt ecx,0x45
   add al,bh
   rol di,cl
   sar cx,0x1
   cmovo di,bx
   sbb edx,0x56a30f0e
   seto bl
   stc
   sbb dx,0xfada
   rcl dl,cl
   rol ecx,0x9
   and ebp,0x42360445
   and di,ax
   shr ebx,cl
   not ebp
   xor ebx,0x7b831aee
   cmovnc bx,bp
   sar ecx,cl
   xadd bl,ah
   ror bh,0xb3
   xor cx,cx
   bts esi,0xb3
   inc	ebp
   clc
   sbb dl,dl
   clc
   sbb ax,0x7fed
   sbb ebp,0x12c3f002
   rcr ebp,0x1
   movzx bx,bh
   test ax,si
   movsx ebx,si
   sar ebp,0x97
   imul bx,cx,0xbc13
   or ch,dh
   shld dx,dx,1
   sbb bx,ax
   bts di,ax
   imul ebx,edi,0x700e1a5a
   rol bh,cl
   cmp edx,ebp
   clc
   adc esi,0x458f2695
   nop
   clc
   imul ch
   test dx,0x58ad
   rcr bp,0x7b
   shld bx,di,0xd
   or bl,ah
   lea bp,[ebx+0xfed044f1]
   bt edx,eax
   adc ax,0xcd0
   not eax
   setg dl
   or eax, 0xc0000000
   and edx, 0x3fffffff
   div eax
   and bl,0xca
   setnbe cl
   setns ah
   sar ch,0x1
   rol bx,0x75
   mov dx,0x8fa4
   bsr ebx,ebx
   sar ebp,0x1
   sar bx,0x1
   rol ch,0x1
   ror ebp,cl
   xchg ebx,eax
   shld ebp,ecx,1
   rol ecx,0x9
   xor dx,si
   rcl di,cl
   shr ebx,0xa6
   sar esi,0xd8
   and eax,0xb6292b8a
   rol eax,0x3c
   and si,0xaed2
   stc
   rcr ch,0x1
   rcl edx,0x1
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0xbcf91b3f

 pop gs
 pop edi
 pop esi
 pop ebp
 pop edx
 pop ebx
 ret
         .size   log_size_10_var_005, .-log_size_10_var_005

.globl log_size_10_var_006
         .type   log_size_10_var_006, @function
log_size_10_var_006:
 push ebx
 push edx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0xa03f74f8
  mov ebx,0xa7e70da1
  mov ecx,0x579ffc5
  mov edx,0xb38e33b4
  mov ebp,0xb8155528
  mov esi,0xaa1c6b2c
  mov edi,0x8a504547
   xchg si,dx
   bt bx,0xe4
   imul si
   ror si,0xc6
   btr bp,di
   not edi
   xchg dx,bp
   xor cx,si
   bt cx,ax
   cmovnc di,cx
   btc si,cx
   sar ecx,0x1
   cmovc bx,ax
   shld eax,edx,0xe
   shld ecx,edi,1
   stc
   sbb al,0xbc
   setnc bl
   sub ch,0x3b
   rcr ch,0xcc
   movsx ebp,bx
   btc ebx,0x4
   stc
   rcl cl,0x1
   not bp
   xor ebp,ebp
   mov ch,dh
   imul ah
   add ecx,0x1fec0fee
   cmovg edx,edx
   cmovns ax,bx
   ror di,0xd9
   shr bh,0xfc
   shr di,0x1
   btr ebp,edi
   stc
   rcr esi,0x1
   sar ebx,cl
   mov cx,0xe97c
   rol ax,cl
   cwd
   sar bp,0x1
   shrd ebp,esi,1
   mul dl
   shrd dx,bp,0xe
   sar ecx,cl
   shl di,cl
   ror dh,cl
   shr ch,0xa3
   sub ebx,edi
   sbb eax,0xac8d29f4
   cmovno bx,ax
   not edx
   cmove ebp,edx
   shl ah,0x1
   shr ch,0x1
   rcl ebx,0x1
   cmpxchg ah,al
   clc
   rcr dh,0x1
   sar si,0x64
   ror esi,cl
   or dh,cl
   clc
   adc ebp,0x2c8c2054
   stc
   adc ch,ah
   sbb si,0x168a
   setl ch
   xor esi,0xe3d5b014
   rcl ch,cl
   cwde
   shl ax,0x1
   clc
   sbb cl,0x4e
   rcl ax,0x63
   dec ah
   cbw
   cmovnl esi,edi
   mov ecx,ebp
   bt bp,ax
   sar ax,0x1
   cmp di,0x6133
   adc cl,ah
   cwde
   cmovg ax,cx
   bts dx,cx
   not bx
   not cl
   rcr edx,cl
   neg bp
   imul ebx,0x8c7c5b
   stc
   adc dx,ax
   and di,0x19fc
   rcl edi,0x1
   clc
   sbb dh,0x95
   xadd ax,ax
   cmovc si,cx
   neg bl
   ror al,0x1
   sbb bp,bx
   shld edx,edx,0xf7
   btr ebp,edx
   ror si,0x1
   clc
   rcl dh,0x1
   dec ebx
   cmovnc esi,edi
   btc edx,edx
   movsx edi,dx
   add si,0xd689
   sar dl,cl
   xadd ah,ah
   mul bx
   clc
   sbb bp,bx
   lea si,[esi+edi*1+0xf8]
   btc dx,bx
   movsx esi,ax
   stc
   sbb ebx,ebx
   setbe ah
   rcl ah,0x1
   btr edi,0x21
   setnc bh
   bts si,si
   test esi,eax
   sets ch
   stc
   adc di,0x61a8
   ror cl,0x1
   ror bp,0x1
   rcl edx,cl
   test ah,ch
   cmp ax,0x9cc8
   shl dx,0x1
   ror si,cl
   shl di,0x1
   or cl,dl
   clc
   bt bx,bp
   cmpxchg dh,dh
   setng bh
   or dh, 0xc0
   and ax ,0x3fff
   div dh
   shl eax,0x1
   rcl cx,0xe5
   inc	ah
   sub ah,bh
   imul bl
   cmovno edx,ebx
   clc
   rcr dx,0x1
   neg di
   adc ebp,0x15f81919
   setpo ah
   sar ax,0xb9
   shld ecx,edi,cl
   add esi,0xa2c6c7b3
   neg edx
   stc
   sbb cl,dl
   rol dh,0x1
   or dl,0x20
   cmovnbe ax,di
   adc bl,0x18
   cmovs edx,ecx
   mul edi
   stc
   rcl edx,0x1
   imul bx,0xac87
   rcl bx,cl
   xchg dl,ch
   shl bx,cl
   ror ebx,cl
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   xadd bh,bh
   xor cl,al
   shld cx,ax,0x1
   xadd ecx,edi
   neg al
   lahf
   rcl ecx,cl
   cmpxchg si,si
   test dx,0xd11b
   cmove si,bp
   cmovc bx,si
   ror ecx,cl
   imul ebp,0xb7b03645
   shr cx,cl
   shl ebp,cl
   imul edi,ebp,0x1323fae6
   shrd ax,si,1
   stc
   adc ebx,0x3931f5d0
   shl di,cl
   rol dl,0x1
   or esi,eax
   mul bx
   btr bp,0x11
   ror bl,0xf3
   xor al,dl
   shr di,0x1
   sar cl,0x15
   mov ah,al
   rol esi,0x48
   not si
   movzx eax,cl
   add cx,0xb9cb
   cmovo ebx,edi
   xchg dh,cl
   and cl,0xf
   shrd cx,bp,cl
   sar dh,0x1
   stc
   rcl eax,0x1
   btc bx,si
   rol dh,0x1
   mul cl
   and cx,di
   cmovc cx,dx
   bts ebp,0x4e
   test al,cl
   clc
   sbb bh,0x98
   clc
   adc eax,ebx
   shld ax,di,0x3
   bt edi,0x6c
   shl bp,0x1
   add dl,0x4f
   rcr di,cl
   test si,dx
   or cl,0xa3
   and cl,0xf
   shld si,bp,cl
   neg ebp
   sub esi,0x57a274e
   adc ebp,0x202f6f42
   and cx,0xc2a0
   clc
   rcl edx,0x1
   sar bp,0xb8
   dec esi
   not ecx
   movsx esi,cx
   shrd ebp,ebx,0x1e
   shr bx,cl
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   bts ecx,esi
   xor ecx,edi
   shrd ebp,eax,cl
   mov ebp,0x554fd2b1
   cmpxchg eax,ecx
   shl bh,0x85
   xadd bp,di
   xor bp,0x4a44
   mul ebx
   shl ah,cl
   test dx,si
   stc
   sbb ax,ax
   shl ebp,0x1
   xchg edi,ebp
   dec bh
   setnc cl
   clc
   or ebx,0x970a6577
   setg ch
   cmovnc esi,ecx
   adc cl,0x81
   cmovno ax,cx
   sbb esi,ebx
   cmovpo si,ax
   cmovnc cx,dx
   or ebx,ebp
   dec cx
   cmovpe ebx,ebx
   shr si,cl
   bswap esi
   shl cl,0x8c
   cmp cl,0x1f
   shl si,0x3a
   rol ax,cl
   lea ecx,[ebp+0xd743f857]
   sar esi,0x1
   shrd edi,ecx,cl
   shld bx,si,0x4
   ror bp,0x1
   sub di,si
   cmovs si,bp
   clc
   adc cx,bp
   cmove ebp,ebp
   rcr edi,cl
   ror al,cl
   shld ecx,ecx,cl
   sar bl,0x20
   btr di,0x12
   stc
   sbb eax,esi
   cmovpo cx,dx
   dec cx
   shld ebp,ecx,1
   setnc dl
   btr esi,ebp
   test edi,esi
   ror ebx,cl
   shl si,0x29
   sar eax,0x1
   sar dh,0xc2
   sar dx,cl
   btc ebx,0x51
   shl cx,0x3c
   bsr ecx,ecx
   not bp
   shr bl,0x4c
   bts si,0xae
   mul bh
   btc esi,ecx
   cbw
   rcl edi,0x1
   stc
   sbb bx,di
   rcl ebx,cl
   shr ax,cl
   movzx dx,dl
   shr ebx,cl
   cmp cx,0x40a
   shld ax,ax,1
   cmovl ecx,esi
   clc
   adc cx,bx
   btc edi,0x1b
   rcl edx,0xc
   xadd ebx,eax
   clc
   cmp ecx,edx
   bts ebp,ebx
   rcl ebx,0x25
   movsx ebp,cx
   sar ecx,0x58
   bt di,0x2d
   ror cx,cl
   cmp bh,0x31
   stc
   rcl ah,0x1
   rol eax,0x33
   ror dh,0xac
   rol dh,cl
   shl ebx,0x1
   cmp dh,0x84
   xor ax,0xabfe
   setnbe cl
   add cl,0xc4
   and si,0x30d9
   xadd ah,cl
   setns al
   ror ebp,0x13
   xadd cx,bp
   cmovbe dx,bx
   stc
   sbb eax,ecx
   sub bx,0xa204
   ror si,cl
   test bx,0x2fcf
   xor eax,0xf014bcaa
   clc
   adc ah,0x75
   setc dl
   bsr esi,eax
   movsx edx,ch
   xor cl,dh
   cdq
   xchg cx,di
   adc cx,di
   cmp ebx,0x5ac53765
   sar eax,0x1
   xor edx,ebp
   adc dh,bl
   cmovnl bp,dx
   xchg edi,ecx
   add bh,0x96
   shr al,0x1
   rcr ah,0x1
   clc
   sbb dl,bh
   and di,bp
   shl ah,0x1
   ror dh,0x78
   movsx ebx,bh
   imul cx,0x314a
   btr ax,0x34
   cmp ebx,eax
   imul edx,eax,0xace77cbb
   rol edi,0xfe
   add ch,0x77
   shrd cx,si,1
   rcr bp,0x58
   and bl,0x5e
   bts dx,di
   clc
   adc esi,0xe3df973f
   stc
   sbb cl,0x68
   bt di,si
   stc
   rcl cl,0x1
   bsf edx,ebx
   shr dl,0x1
   cmovnc bx,cx
   stc
   rcr dx,0x1
   stc
   rcl di,0x1
   bts bx,0x8c
   btc ax,bp
   ror ch,0x61
   test dl,bl
   cmpxchg bl,bl
   bts eax,0x2
   bts ax,bx
   clc
   sbb ebx,0x5ff4c3ec
   rcl bx,0x1
   adc bl,0xf2
   cmovpo ebx,ebx
   not dx
   cmovo bx,ax
   bsr edi,ebp
   shl edx,0x1
   rol dh,0x1
   mul eax
   rcr si,0x1
   sub bh,ch
   cmovbe ax,di
   setg bl
   sbb cl,0x36
   clc
   rcl ecx,0x1
   stc
   adc ebp,0x35e62ac9
   stc
   adc esi,ebp
   setno bl
   movsx ebx,ah
   imul ax,ax,0x7339
   imul ebp
   cmpxchg ebx,ebp
   cmp di,si
   shr esi,0x1
   rcl bh,0x1
   imul ecx,edx,0x485a8472
   xor ax,di
   cmove esi,ecx
   ror dl,0x6e
   inc	edx
   shl ax,0x1
   xor bp,ax
   add si,0x3db0
   imul si,bx,0xa3cb
   xadd dl,al
   shl edi,0x58
   dec ebx
   btr bp,0x60
   movsx ebx,bx
   clc
   sbb dh,0x63
   not eax
   lahf
   cbw
   mov bl,ch
   cmovns esi,ebp
   stc
   rcr eax,0x1
   cmp ah,0x80
   movsx ebp,al
   cmp bl,0x38
   or ecx,0x1da27bf4
   bswap edx
   ror dh,0x7a
   shr cl,0x4f
   and cl,0xf
   shld dx,bp,cl
   add ax,bx
   dec si
   clc
   rcl di,0x1
   xadd ebp,eax
   cmovnl bp,bp
   clc
   adc cx,ax
   setbe ch
   cmp bp,0xd5cd
   xchg bx,si
   or edx,0xe3859e1f
   btc edi,eax
   imul al
   cwd
   clc
   rcl ebx,0x1
   movsx ecx,bl
   setc al
   rcl bh,cl
   bt ax,0xf
   rcl cx,0x1
   shr cx,0x1
   clc
   adc ax,si
   sbb eax,0xef84b90a
   test edi,ebx
   sahf
   xchg edx,esi
   rcl edx,0x1
   seto cl
   add al,0x2d
   sub bh,0xcb
   xor ebp,0xc1a9ef4f
   sub ax,0xb8b3
   rol ebx,cl
   movzx ebp,bh
   add ah,al
   cmove dx,ax
   add bp,cx
   add eax,0xc28bc47d
   shl si,cl
   rol cl,0x1
   clc
   adc ah,ah
   bts bp,si
   mov esi,0x39940abe
   setne ch
   cmc
   ror bl,cl
   rol bp,0x7b
   clc
   sar dh,cl
   or bx, 0xc000
   and dx, 0x3fff
   div bx
   or bx,0x69e7
   shld ebp,esi,1
   dec ax
   cmovs ebx,edx
   xor bx,0xee9f
   ror edx,cl
   rol edx,cl
   add ebx,0x200b9ac1
   stc
   sbb al,bl
   setpe bl
   imul bl
   test cl,bl
   test ch,ch
   shr bh,0x29
   cmp cl,dh
   stc
   sbb di,di
   ror si,0x1
   shr ch,cl
   shr bx,cl
   bswap esi
   shl di,cl
   movsx ebx,ch
   or di,bx
   shrd edi,ebx,0x11
   inc	edx
   cmovpe ebp,ebp
   cmovo si,di
   btr eax,0x88
   sub dl,0x68
   mov ecx,0xcd5cde6c
   sahf
   cmc
   stc
   sbb al,bl
   adc esi,ebx
   cmovg ebx,edx
   or ah,0x8c
   add bx,0xaddb
   xor di,cx
   add bx,di
   movzx dx,bl
   ror al,0x1
   imul si,dx,0x9011
   movsx dx,al
   inc	esi
   shr di,0x6d
   or dx,0x1647
   setnc bl
   btr esi,0x7e
   stc
   adc al,0x93
   bt eax,edx
   add di,0x5a3
   stc
   sbb dx,bx
   shld cx,di,0x9
   and edx,eax
   neg edi
   neg ebp
   bts si,si
   shl ebp,0xa1
   mov dx,0x6f82
   neg ebx
   rol ecx,0xb7
   mov si,0xda7d
   mul dl
   rcl dx,0x9c
   not ah
   or edi,esi
   or ch,0xf9
   sbb dh,0xfd
   sar dh,0x87
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   rol bp,0x1
   rcr bl,0x1
   sub cx,0xace1
   shrd bx,ax,0xd
   shl dx,cl
   neg bp
   cmovo edi,eax
   test ch,dl
   xor eax,ebx
   movzx ebp,dh
   rol si,0x1
   cmp dl,0x21
   sub dl,0x51
   group=base
   and cx,0x513f
   and cl,0x4e
   clc
   adc dl,0x74
   rcl bp,0x1
   adc bp,bp
   adc si,0x627
   clc
   sbb eax,0x66f6da8b
   sbb ecx,ebp
   sbb esi,0x106d056
   stc
   rcr ebp,0x1
   cmp ah,0x8c
   btr dx,0xa9
   cmp cx,bx
   lea ax,[esi+edx*4+0x42]
   shrd edx,eax,cl
   bt esi,0xab
   clc
   rcr edx,0x1
   mov si,di
   stc
   rcr bh,0x1
   movsx ebx,dh
   sar ebp,cl
   xadd ecx,edx
   sar ebx,cl
   bts edx,0x8d
   btc dx,0xb
   cmp di,0x66ea
   clc
   adc cx,bx
   neg ax
   cmovc ebx,edx
   adc bh,al
   cmovbe bx,ax
   shld ebx,ebx,cl
   clc
   and si,dx
   rcr dh,0x1
   cmovc edx,edx
   shld dx,cx,1
   stc
   adc ecx,0x2a14279f
   cwd
   rol esi,cl
   test ax,dx
   xor edi,0xd59d20dd
   setg al
   setno ch
   mul cx
   xadd edx,ecx
   shrd esi,edi,cl
   rol dh,0x1
   rcl dh,cl
   sar edx,0x1
   sar bh,0x1
   clc
   adc si,ax
   movsx eax,di
   adc si,0x6f58
   btr ebp,0xee
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   ror ebp,0x1
   imul al
   shrd bx,cx,0x9
   not bl
   rol bl,cl
   sub eax,esi
   btr dx,cx
   rol ch,cl
   nop
   neg bx
   xchg bh,ah
   setbe dl
   shl edi,cl
   rol al,0xff
   mov eax,0x43fbd3bf
   or edi, 0xc0000000
   and edx, 0x3fffffff
   div edi
   shrd cx,dx,1
   stc
   rcr ax,0x1
   ror bx,0x8d
   or di, 0xc000
   and dx, 0x3fff
   div di
   group=base
   bswap ebp
   mov ebp,0x62d1569f
   cmovne bx,cx
   movsx ebp,ch
   shld ebx,ebp,0x10
   ror bp,cl
   shr edx,0xff
   sar al,cl
   imul ah
   movzx si,dh
   add bh,0x71
   cmp bl,0x78
   sbb cl,0x9b
   shrd ebp,esi,0xef
   or cx,bp
   shr si,0xa0
   imul di
   rcr ecx,0x1
   neg ecx
   add cl,0xf0
   or dl,al
   sub eax,0xa25534ce
   sub cx,0x9087
   stc
   rcr bl,0x1
   dec ebp
   rcr esi,0x5d
   cwd
   shld ebx,ebx,1
   cmovnc eax,eax
   shr ah,0x1
   rcr ebp,0x2b
   mov bp,ax
   mov esi,eax
   rol eax,0x1
   btr ax,0xb2
   shr cx,cl
   ror esi,0x1
   sar bp,0x4a
   sub ch,cl
   sete bh
   adc ah,al
   stc
   rcr cx,0x1
   bts dx,cx
   test al,cl
   movsx eax,bx
   mov ch,0xcf
   xchg ecx,ebx
   bts ebx,ecx
   mov dh,ch
   ror bh,0x33
   mov edx,eax
   xadd edx,edi
   setg ah
   add ax,di
   stc
   adc di,bx
   setpe bh
   cmovnl di,si
   bt ax,0x14
   cmovbe edi,edi
   shl bl,0x1
   bsf eax,esi
   test ecx,ebx
   ror eax,cl
   rol ebx,cl
   and ecx,eax
   sbb dl,0x74
   rcr ecx,cl
   cbw
   shr al,cl
   ror ebx,0x14
   cwde
   or ah,0xca
   cmpxchg si,cx
   xor bx,0x8290
   not ebp
   setnl dl
   mov si,bx
   cmovno ax,ax
   clc
   rcl al,0x1
   shr bx,cl
   inc di
   sar ax,cl
   btr edx,0xca
   clc
   rcl eax,0x1
   add dl,al
   rcr dh,cl
   ror bl,0x1
   sub bx,di
   dec dl
   neg edi
   btr edx,0x73
   test bl,al
   btc eax,eax
   neg ax
   stc
   rcl esi,0x1
   rol bp,0xb3
   add bp,ax
   clc
   adc si,di
   bsf esi,edx
   xadd edx,edi
   movsx esi,cx
   mov edi,eax
   setpo al
   and ebx,0x930ac2f9
   sbb cl,0xbc
   xchg dx,ax
   shr esi,0x1
   shr bl,cl
   not edi
   sub ecx,0x42c01c31
   clc
   adc cl,0x86
   bt si,0xb7
   xor ch,ah
   dec di
   rol si,0x1
   shl dx,0x1
   rcl al,0x1
   inc	esi
   adc bl,0xd2
   imul ecx,edi,0xe70baf6b
   clc
   adc dl,0xfe
   rcl al,0xba
   shld dx,si,1
   or bh,0x40
   rcl edx,0x79
   shld bp,ax,1
   cmove ebx,edx
   lea esi,[eax+ebp*4+0x85]
   mov bh,0xab
   bsr esi,eax
   test di,bp
   inc	ch
   cmpxchg cl,bl
   lea bp,[esi+edx*4+0x28686972]
   add si,dx
   clc
   sbb bp,bp
   shld di,si,0x3
   shr edx,0x1
   adc si,di
   mul bh
   cmpxchg dl,ah
   btc ecx,ebx
   shl bl,0x1
   neg ebx
   inc	bl
   add bl,ch
   mov si,si
   cmovpe edi,eax
   rcl si,0x6d
   ror cl,cl
   cmp ecx,0x48caac66
   neg cx
   rcr eax,0x1
   sar dh,cl
   sar eax,cl
   group=base
   test esi,esi
   cmovbe edx,ecx
   btr eax,0x81
   or bh, 0xc0
   and ax ,0x3fff
   div bh
   btc si,0x41
   mov bh,ch
   sar si,0x1
   test ebx,ebp
   sbb edx,0xca82f4d1
   xadd edx,ebp
   xadd cx,bx
   lahf
   setns bh
   ror dl,0x1
   xchg dx,bx
   sbb dl,dh
   cmovne bx,di
   ror bp,0x1
   neg bx
   cmovnbe edx,ecx
   cmp bh,bl
   cmovng edi,ebx
   setg bh
   setng ch
   stc
   adc di,0xacb1
   cbw
   stc
   rcl ebx,0x1
   neg al
   cmovpo esi,eax
   and cl,bh
   sar eax,0x1
   clc
   adc ecx,ecx
   sar al,cl
   xor al,dl
   clc
   adc dx,si
   neg dh
   dec bl
   cmovc di,bx
   mov dl,dh
   setl bh
   clc
   rcr ax,0x1
   rcr dh,0x1
   btc cx,di
   bts di,0x9f
   shl ax,cl
   btc cx,0xd0
   xor dh,0x16
   clc
   cmp di,ax
   clc
   rcr dh,0x1
   cmovo ecx,edi
   shr si,cl
   ror ebx,0x1
   stc
   adc edx,ebp
   rcl esi,0xe5
   btc cx,bx
   sar bl,0x1
   stc
   sbb bh,0xeb
   shrd edi,eax,0xfc
   and cl,0xf
   shrd si,bx,cl
   sar cl,0xb3
   cmpxchg cx,bp
   cmovno eax,edx
   sbb bh,bh
   rol esi,0x1
   rol di,0x1
   clc
   sbb dl,0xf7
   rcr ch,cl
   imul edx
   cwd
   stc
   sbb eax,0x8d30db93
   shr eax,cl
   cmp ax,bx
   sub eax,0xc9585be7
   and bx,0xa2bf
   rol bp,cl
   mov ebp,edi
   imul edi
   stc
   rcl ax,0x1
   clc
   rcl al,0x1
   sbb dh,dh
   xchg dl,bh
   sub bp,di
   not ch
   shl dl,cl
   bt esi,0xf5
   rcl ecx,cl
   cbw
   shrd ax,dx,1
   cwde
   rcr bx,cl
   cmp bx,0xae4
   bt bx,bx
   rcr bp,0xe6
   inc	al
   mov cl,dh
   setpo bh
   rol ax,cl
   ror ebp,0x1
   shl cl,0x47
   btc ax,0xaf
   stc
   adc ecx,0xc7619962
   rol dx,0x1
   movsx ebp,bp
   cmc
   test ecx,ebx
   rol ecx,0x1
   stc
   adc edx,ecx
   sar ecx,cl
   xadd bp,cx
   stc
   rcl cx,0x1
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0xd7a00770

 pop gs
 pop edi
 pop esi
 pop ebp
 pop edx
 pop ebx
 ret
         .size   log_size_10_var_006, .-log_size_10_var_006

.globl log_size_10_var_007
         .type   log_size_10_var_007, @function
log_size_10_var_007:
 push ebx
 push edx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0x3adfee60
  mov ebx,0xedff1869
  mov ecx,0x4394dab2
  mov edx,0x751ec376
  mov ebp,0xab5b222d
  mov esi,0xbfac903c
  mov edi,0x38564389
   shl bh,0x1
   imul di,bp,0x23fd
   stc
   sbb cl,0x36
   bts edx,0x50
   stc
   rcl cl,0x1
   shl dx,0x4b
   not ah
   or ch, 0xc0
   and ax ,0x3fff
   div ch
   cdq
   add edi,ecx
   rcr dl,0x1
   dec bp
   cmovpe edi,ecx
   rol si,0x13
   movsx edx,ch
   imul ebp,edi,0xab349f4b
   mul dl
   shl bl,cl
   bt bp,0xd7
   not dx
   sar ebp,0x1
   shr di,0x1
   btc ebp,edi
   inc bx
   bts edi,eax
   rcr ecx,cl
   test ax,0x1442
   bsr edi,ebx
   inc	al
   mov eax,ebp
   shld di,si,0x6
   shl ebx,0x1
   bts bx,dx
   stc
   sbb cl,cl
   bswap edi
   cmove dx,bx
   sar ah,cl
   imul bp
   sbb ah,ah
   seto cl
   rcl bp,0x83
   test ah,0x6f
   stc
   sbb dl,dh
   cmp ecx,0xc9a3c960
   test esi,0x201a6e8f
   clc
   adc eax,0x74061528
   mul al
   setno al
   movzx di,bl
   ror ax,0xd6
   inc	cl
   btr bp,di
   not dl
   sar bh,0x1
   cmp cx,0x6e61
   bswap ebx
   mov bx,ax
   shl bh,cl
   sub bh,0x86
   cmp ah,0x85
   sar dx,0x7a
   mul ax
   cmp ax,0xfce9
   imul ebp,edx,0x53a46111
   bsf eax,eax
   inc	dl
   cmovpe ecx,edx
   ror edi,cl
   sub esi,0x3cda7a86
   mul edi
   add ebx,eax
   imul ebx,0xaf7e6314
   adc bl,0xe9
   ror ax,0x1
   mul bx
   stc
   sbb bl,dh
   cmovc bp,ax
   adc ebp,ecx
   shrd ebp,edx,0x39
   neg cx
   xchg bh,bl
   movzx ax,dh
   rol ch,0x7b
   clc
   sar edi,0x55
   mul edx
   and cl,0xf
   shrd bp,di,cl
   or ebx,0x4977ee9f
   and cl,0xf
   shld bp,cx,cl
   test ebp,0xefddc4c1
   stc
   sbb ax,0x153b
   stc
   rcl esi,0x1
   stc
   sbb esi,0x390ebdd2
   clc
   sbb bl,0x94
   or di,dx
   shl esi,cl
   bt eax,0x14
   rcr ax,0x1
   test cl,0xcc
   shl si,0x1
   dec bl
   shl edx,0x18
   shl ecx,0xaf
   cwde
   btr edi,0x69
   group=base
   ror ebp,cl
   cwde
   dec ecx
   or bl,0x48
   or dl, 0xc0
   and ax ,0x3fff
   div dl
   cmp cx,0x3507
   nop
   or si, 0xc000
   and dx, 0x3fff
   div si
   rol ax,cl
   sar dx,0x1
   mov bp,0x1119
   dec di
   cmove ax,di
   btc edi,esi
   xchg eax,eax
   stc
   sbb ebp,0xf55fae17
   neg eax
   imul edi
   and bp,bx
   btr bp,dx
   clc
   rcl dh,0x1
   ror dh,0x1
   xchg bh,dh
   sub ax,0x76ef
   rcl ch,cl
   shr cx,0x57
   cwde
   shl ah,cl
   ror edi,0x4d
   shl bp,cl
   bts si,0x52
   rcl cx,cl
   nop
   add dx,0x3661
   shrd eax,edx,1
   clc
   sbb si,di
   ror ebp,cl
   sar ebx,0x1
   setno dl
   bt esi,eax
   stc
   adc ebx,0x334a916f
   sbb si,cx
   stc
   rcr edi,0x1
   xor ax,0x9660
   shld ebx,edi,1
   bsf eax,edx
   cwde
   btr esi,edi
   sahf
   cmovnc ax,cx
   rcr di,0x5c
   sub al,0x1b
   and si,0xa62c
   bt esi,esi
   stc
   rcl cl,0x1
   rol eax,cl
   shl bp,0x1
   rcr ebp,0x1
   clc
   rcr si,0x1
   or ebp,edx
   xor eax,esi
   sbb ebp,0x86066fc4
   movsx di,dh
   sahf
   clc
   sbb edi,ecx
   stc
   sbb bp,di
   or al,0x23
   cmove bp,si
   shr esi,0xdf
   sar edx,0x1
   rol cl,0x1
   btr cx,0x1c
   setc bl
   shr bx,0x2e
   and edi,0x7edd1e40
   clc
   rcl di,0x1
   mov ecx,0x823cfe3
   rcr ax,0x54
   shl ecx,0x77
   btr cx,bx
   mov edx,eax
   clc
   rcl al,0x1
   imul ebp
   and bx,bx
   bt bp,0x39
   clc
   rcr ah,0x1
   cmp dh,0x40
   shld ebp,eax,1
   shld ebx,eax,1
   cmovl edi,ecx
   cmovl edx,esi
   shl dl,0xb
   mov edx,0x66acbd4e
   inc dx
   shl bl,0x1
   sub cx,0xc975
   sub ax,cx
   stc
   rcr dl,0x1
   shr ebp,0x1
   inc	edx
   rol cx,0x1
   setnc bl
   xor esi,eax
   adc ch,ah
   rol edx,0x1
   clc
   adc edx,edi
   rcl ah,0x1
   setc dl
   or ebp,0x2c9def7b
   rcr bl,0x9d
   rol ebp,0x39
   shrd edi,edi,0x55
   imul ecx,0xcd414885
   test cx,bp
   stc
   rcr si,0x1
   sar si,cl
   ror di,cl
   cwde
   movzx ebx,ah
   shld ebp,ebp,1
   imul ax
   test al,ch
   sbb dh,ah
   cmovne ebp,ecx
   cmpxchg ah,dh
   setpe dh
   stc
   adc dl,0x98
   add dx,0x962b
   shrd eax,ebp,1
   adc dl,0x92
   xadd edi,esi
   and dl,bh
   clc
   dec esi
   sar dh,0xd0
   sub ah,0x10
   clc
   adc ax,bx
   and cl,0xf
   shrd bx,ax,cl
   movzx eax,si
   and ecx,0xa1ca9a18
   shrd cx,ax,0x5
   ror dh,0x1
   ror esi,cl
   or ax,dx
   sar ch,0x6b
   btc bx,bx
   stc
   rcl bl,0x1
   rol bx,0xed
   rol cx,cl
   xor ch,dh
   cmovnl ebx,ecx
   cmpxchg bl,ch
   bsf esi,ebp
   or esi,0x8598f865
   and ebp,0xcfa1968e
   xor ecx,esi
   cmp bh,bh
   cmove esi,esi
   clc
   adc di,0x797b
   add ax,0x98
   shr ebp,0x1
   clc
   adc dh,0x98
   adc ebx,esi
   xor dl,0x27
   rcl ebp,0x34
   test esi,ecx
   stc
   rcr cx,0x1
   shl dx,0x1
   stc
   adc dl,dl
   setpe bh
   sar di,0x1
   rol dx,cl
   sar dl,0x18
   sar ebp,cl
   cmp ah,0x63
   dec dx
   bt ebx,edx
   add di,0xdd0e
   imul ebp,ebp,0x5a0f3023
   sar ch,cl
   sub bx,si
   cmovne ebx,edi
   setpo ah
   ror si,0x5f
   xchg bh,ch
   shr esi,0x1
   rol di,0x1
   btr bx,0xe3
   stc
   rcl si,0x1
   inc ax
   movzx edi,bx
   cmovo bp,dx
   adc bp,ax
   add edi,edi
   clc
   adc edi,edi
   neg dl
   shr ch,0x1
   sar ch,cl
   sar al,0x1
   shr bp,cl
   bswap esi
   not di
   mov bx,cx
   bts dx,cx
   bt ax,si
   movsx edi,bl
   inc	bl
   cmovo dx,bp
   btr di,0x23
   clc
   adc bx,0xa23a
   sar bl,0x1
   add di,ax
   or dl, 0xc0
   and ax ,0x3fff
   div dl
   movsx ebp,ax
   ror ecx,cl
   neg ebx
   sar di,0x1
   add ah,0x35
   shr esi,0x39
   and edx,edi
   rcl bx,0xe2
   or bx, 0xc000
   and dx, 0x3fff
   div bx
   bts dx,dx
   sub bl,0x4e
   cmovs edi,ecx
   setnbe al
   cmovng si,si
   shrd ebp,ecx,cl
   mul edi
   stc
   rcl ecx,0x1
   rcr dl,0x1
   btr edx,edi
   cmovnc edx,eax
   btr bx,0xd4
   stc
   adc di,cx
   rol dl,cl
   bt ax,0x61
   shld si,cx,0x8
   movzx cx,bl
   test ah,0x7b
   cmovg di,dx
   and di,cx
   sub esi,esi
   shl edi,cl
   movsx ebx,bp
   rol ebp,cl
   rol bp,cl
   movzx esi,bl
   bt cx,si
   rcr edi,0x1
   shr bh,0x1
   imul ebx,ebp,0xb742163d
   setno bl
   shr ch,0x1
   stc
   rcl bx,0x1
   sub di,si
   adc cx,di
   bt si,0x2a
   rol bl,0x50
   neg cl
   clc
   rcl edi,0x1
   cmpxchg ecx,ebp
   clc
   rcl eax,0x1
   xadd cl,dl
   shl cl,cl
   test al,0xa8
   sar bx,0x8d
   xor cx,0xbd25
   cmovns esi,eax
   sub eax,0x769ba912
   rol dx,0x1
   clc
   rcr eax,0x1
   bts si,0xf0
   btc eax,edi
   cmovc cx,di
   shld ebp,esi,cl
   add bl,ch
   sar ax,0x1
   mov ah,0xac
   sar ebx,0x68
   bts dx,bx
   movzx dx,dl
   mov edi,eax
   btc cx,bp
   and cx,bp
   setno bl
   shl ch,cl
   cmpxchg ebp,ebx
   cmp esi,0x31cb8c47
   sete bl
   clc
   sbb bp,0xa5b
   stc
   sbb di,0xf4b0
   rcr ah,0x1
   stc
   adc ch,0xda
   setpo dl
   shrd dx,ax,0x0
   btc eax,ecx
   clc
   rcr bp,0x1
   and edi,ebp
   setc al
   ror ax,0x46
   mov bp,0xcfd5
   bsr ebx,eax
   sub edi,0xcee5ceb6
   shr bx,0x1
   sar ax,0x1
   shl ah,0x1
   inc cx
   rcl al,0xc9
   not dl
   or cx,bp
   cbw
   inc	cl
   cmovnc bx,ax
   setns bl
   imul bp
   cmpxchg bp,dx
   cmovo bp,ax
   sub ax,bp
   rol si,0x5
   add ebx,0x73503db4
   cmovs ax,bp
   not ecx
   group=base
   sub ax,dx
   cmovl di,bx
   and ah,al
   stc
   adc dx,0x9187
   and cl,0xf
   shrd bx,bp,cl
   imul ecx,0x515b4811
   add edi,0x97d0f430
   imul si,di,0xf10
   imul edi,esi,0xf1223370
   btc ebp,ebx
   clc
   add ax,0x881f
   xor bh,0x4
   cmovns ebp,ebp
   cmp ax,cx
   setl bh
   shl bl,0xbe
   mov cx,dx
   sub bh,ah
   cmovbe ax,ax
   ror edx,cl
   shrd ecx,ecx,0xdd
   imul ah
   mov ebx,ebp
   btc eax,0x53
   clc
   rcl edx,0x1
   clc
   sbb ax,ax
   btc ecx,edi
   rol cl,cl
   shr bl,0x1
   bts bp,ax
   ror eax,0x1
   clc
   adc si,0x954a
   shr dh,cl
   group=base
   movsx bp,cl
   and cl,0xf
   shrd bx,bx,cl
   clc
   stc
   sbb dl,0xdc
   setbe dl
   cbw
   bts cx,0x5a
   and cl,0xf
   shrd cx,bp,cl
   or ax,0x2692
   cmovne di,dx
   xadd si,bx
   inc dx
   not bl
   sbb bl,cl
   shr ax,0x1
   shr bp,0x7
   shr ebp,cl
   xor ecx,esi
   stc
   sbb al,ah
   cmpxchg ebp,eax
   cmpxchg bx,bx
   cmove esi,edi
   bsr edx,eax
   cmpxchg bp,cx
   shr bp,0x1
   clc
   rcl ebx,0x1
   ror edi,0x1
   shr esi,cl
   ror ecx,0x6d
   rol bh,0xf
   or ebp,0x9c53f451
   ror ax,0x1
   mov bh,al
   neg si
   setne dl
   cmovpo ebp,eax
   sub ax,0xe70d
   sar ah,0x9f
   btc di,bp
   cwde
   sub ax,0x2a91
   setne bh
   cmovo eax,edx
   rcr ch,cl
   movsx edx,al
   shrd bx,di,1
   add dl,ah
   and cl,0xf
   shrd si,di,cl
   shr bh,cl
   xchg dl,ah
   or ebx,edi
   imul edx
   clc
   adc cl,0xb6
   imul edi,0xe23379dd
   clc
   sbb dx,di
   cmovnl cx,dx
   or di,0x3a97
   neg dh
   sar dx,cl
   ror edi,0xec
   xchg dl,dl
   sub bp,0xb3cb
   test dh,cl
   neg edi
   rol ebx,0x4b
   cmp si,cx
   cmovpo si,bx
   movzx eax,ch
   shl bx,0x1c
   rol dh,0x15
   xor ebx,ebp
   shl di,cl
   test cx,bp
   rol si,cl
   bsr eax,ebx
   add edi,0x8da43db6
   movzx esi,bx
   inc bx
   group=base
   shld edx,ebp,cl
   shr al,0x1
   stc
   sbb bp,0xf651
   ror dh,cl
   shrd ebp,ebx,cl
   shl dl,cl
   movzx bp,cl
   shrd di,dx,0xf
   sub ax,0x7790
   bt edx,eax
   inc	dh
   setnbe dh
   cmp bh,bh
   cmovnl edi,esi
   sar ax,0x1
   sub bl,0xfa
   cmovl dx,dx
   sub bp,0xbd8d
   sar bh,0x1
   rcl ecx,0x6f
   ror si,cl
   mov bx,0x3214
   not al
   cmp ebp,ecx
   cmovnbe ebp,eax
   btc ax,si
   cmove eax,ebp
   bt eax,0xe5
   cmpxchg ah,bl
   shl di,0x29
   ror ecx,0x1
   xadd edx,ebx
   clc
   rcr ecx,0x1
   test edx,ebp
   stc
   adc dl,al
   shl ebx,cl
   mul bx
   cmpxchg bx,cx
   cmovnbe edi,esi
   stc
   sbb al,bh
   bt ecx,ebp
   and cx,si
   rol bl,0x4f
   ror eax,0x1
   mov si,0x8039
   sub bx,0x338a
   or si,di
   clc
   sbb si,0xc0e9
   clc
   rcr dx,0x1
   cmpxchg edx,edx
   and di,si
   cmovpe si,bp
   mov ebp,edi
   cmovnbe eax,eax
   clc
   rcr ebx,0x1
   and cl,0xf
   shrd ax,si,cl
   btr edi,0xb4
   add edx,ebp
   btc esi,0xdc
   cwd
   sar edx,0x1
   rcr bl,cl
   shrd eax,ebp,1
   bts edx,0x52
   sub edx,0x58763553
   adc bx,0x96e8
   lea ecx,[ebp+edx*2]
   rol eax,cl
   imul si,0x55cd
   rcr esi,0xbe
   movsx si,bl
   test si,si
   rcr ebp,0x1
   rcr bx,0x1
   sahf
   setno dl
   ror cl,0x1
   sar ch,cl
   sub si,bp
   shr ah,0x1
   nop
   setc dh
   group=base
   btr cx,0x55
   rcl ch,cl
   or ah,0x3a
   and cl,0xf
   shld si,bp,cl
   dec edx
   mov di,bx
   bsf edx,ecx
   rol dx,0x43
   sar di,0x1
   stc
   rcr dx,0x1
   cmovo edi,edi
   rcr eax,cl
   bts cx,bx
   rcl cx,cl
   movsx edx,ah
   mul edi
   shr ebp,0x5a
   sar dx,0xfe
   bts ebp,esi
   rcl eax,0x1
   shl bp,0x1
   imul edi,0xd33f8437
   shld ax,cx,0x0
   sub di,0xbf91
   ror bx,cl
   xor bx,0xcbdf
   shr ch,0x1
   xadd cx,si
   shrd ebp,ebx,1
   clc
   sbb ch,0xcc
   sar dh,cl
   imul ebp,ecx,0x9436a11c
   cmovo cx,di
   btr eax,0x3
   rcr di,0xaa
   movsx cx,bl
   shr edx,0x1
   and bp,si
   clc
   adc di,bp
   cmovng edi,eax
   stc
   adc edx,0x4b760726
   ror ebx,0x1
   add cx,0x683e
   not ah
   adc al,0xa9
   mov ax,bp
   clc
   adc dx,0x8619
   shl edx,cl
   and cx,0xedc7
   clc
   adc esi,edi
   shr di,cl
   mov ebp,0xe264030c
   shld ecx,edi,cl
   rol cx,0x1
   stc
   rcl bl,0x1
   cmpxchg bx,ax
   and bl,0x3a
   btr ebx,0x82
   dec bp
   setno dh
   clc
   rcl dl,0x1
   cbw
   rcl dx,0x1
   clc
   sbb al,bl
   lahf
   ror esi,cl
   mov bp,0x9766
   test bx,0x677c
   sahf
   cbw
   cmp eax,0x99b9e2df
   clc
   sbb ebx,edi
   cwd
   cmpxchg ebx,ebp
   shrd ebp,ecx,cl
   or ecx,0x35cd05d1
   sub ch,0x68
   cmovpe di,cx
   cmovpe dx,bp
   clc
   adc ah,dh
   cmovc dx,dx
   test ah,0x88
   stc
   rcr ebp,0x1
   or di,si
   cmp esi,ecx
   sub al,0xb3
   bt ebx,0x93
   cmovbe ecx,esi
   stc
   sbb bh,0x4
   clc
   adc eax,esi
   clc
   rcl ebp,0x1
   sub edx,0x9dcb839c
   movzx edx,bl
   and ch,0x4f
   shl ecx,0x1
   movzx ebp,si
   cmpxchg cl,dl
   neg ebp
   rcl ah,0x1
   sahf
   and ecx,0xf5c2f8eb
   neg ecx
   not ebx
   setpe ch
   bswap esi
   shl ch,0x5f
   ror si,cl
   test ch,0x3
   cmovng ebp,eax
   setnbe ah
   sbb bp,0x87e9
   cmpxchg si,di
   setpo dl
   not bl
   xadd bh,dl
   test edx,0x1c08938f
   add al,bl
   imul esi
   shr ecx,cl
   or edi,0x12ea37a7
   stc
   adc eax,ebx
   stc
   sbb ah,bl
   adc edi,0x79a1c390
   rcl eax,0xe5
   shrd bp,dx,0x3
   cdq
   bts esi,esi
   sub cl,cl
   sar dx,0xc0
   btc ax,0xbf
   btr eax,ebp
   dec eax
   clc
   sbb ch,0x78
   sar dl,cl
   shld eax,eax,cl
   rol ch,0x1
   dec ebp
   shl edx,cl
   neg bh
   cmovpe bp,cx
   xor dx,bp
   bts bp,di
   test bx,di
   rcr ah,0x1
   sar bx,0x1
   test cx,bx
   xchg edi,ecx
   sub eax,0x9ca55b28
   clc
   rcl ebx,0x1
   or dh,bh
   setnc al
   btc bp,0xee
   neg dl
   adc ah,dl
   shl ebp,0x1
   btc esi,edi
   inc	esi
   shr ecx,0x1
   seto ch
   stc
   sbb ecx,esi
   clc
   rcr ecx,0x1
   btc edx,0x55
   bt esi,0x9f
   and cl,0xf
   shld dx,di,cl
   and cl,0xf
   shld bx,dx,cl
   btr edx,0xf
   mov edx,ebx
   rcl esi,0x1
   bts bp,0xcf
   and bp,bx
   stc
   sbb cl,0x7f
   clc
   adc dl,0x4a
   cmovng bx,cx
   shl ch,cl
   or bx, 0xc000
   and dx, 0x3fff
   div bx
   mov bl,0xda
   rol bh,0xb2
   sahf
   or edi,ebx
   add edx,0xc0032599
   shr bh,0x1
   xchg ax,cx
   sar si,0xf5
   xchg ebx,ecx
   ror ebp,0x1
   shl ecx,0x1
   and dl,0xfc
   shl al,0x1
   stc
   adc si,0xa89e
   cmp ecx,ebp
   stc
   sbb eax,0xbbc4fb80
   rcr cl,0x9d
   btr edx,esi
   imul cl
   nop
   shrd ecx,edi,1
   sets ah
   cmovl ebx,ebx
   bts di,0xb7
   sar ax,0x1
   nop
   sbb si,di
   xor bx,0x3b9f
   sbb cx,0x8386
   rcl edi,0x1
   shr ecx,0x1
   sbb bx,di
   bswap eax
   mov edx,esi
   shl edx,cl
   add ebx,ebp
   bts ecx,edi
   shrd edx,ebp,0xd1
   btc bp,0xf7
   shrd si,bp,1
   shl si,0x59
   shr ax,0x6b
   bts di,0x7a
   test bl,ah
   shr bl,cl
   shrd esi,esi,1
   shld dx,dx,0x6
   movzx edi,ax
   sub ax,bp
   clc
   rcr ebp,0x1
   sar eax,0x7e
   shrd ebx,edx,0x6d
   shr di,0xab
   btc si,0xba
   shr bh,cl
   sub esi,ebp
   clc
   adc edx,0xaa956559
   stc
   rcl ebp,0x1
   rcl bh,cl
   or dx,bp
   ror ch,cl
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   ror cx,cl
   sub bh,0x64
   stc
   sbb ebx,esi
   shl ch,0xc0
   sub bp,0xc8b3
   and eax,ecx
   inc di
   stc
   adc ch,0x4d
   cmovnbe bp,di
   rcl bp,0xfc
   bsr ebp,ebp
   cmpxchg ah,al
   bt si,bx
   not al
   rcr bx,cl
   movzx ebx,ah
   and ebp,edi
   dec si
   clc
   sbb si,bx
   rcl di,0xdf
   sar eax,0x1
   stc
   sbb bp,0x67ac
   movzx esi,ax
   rcl bh,0xb2
   ror ax,cl
   rol bh,cl
   shr dl,cl
   mov ecx,0x6138c4a3
   shl edx,cl
   or si, 0xc000
   and dx, 0x3fff
   div si
   btc si,0x4
   clc
   rcr dx,0x1
   bsf eax,ecx
   xor edi,esi
   rcl al,0x10
   xchg dh,ah
   cmpxchg dx,bx
   clc
   sbb ebx,ebp
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0xd5e80593

 pop gs
 pop edi
 pop esi
 pop ebp
 pop edx
 pop ebx
 ret
         .size   log_size_10_var_007, .-log_size_10_var_007

.globl log_size_10_var_008
         .type   log_size_10_var_008, @function
log_size_10_var_008:
 push ebx
 push edx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0xcbe754b1
  mov ebx,0x9c30fb16
  mov ecx,0x6cf24f71
  mov edx,0x83dffc7a
  mov ebp,0xf170d4be
  mov esi,0x6d6a8de2
  mov edi,0x7d15eb73
   imul ax
   add ebx,ecx
   adc ax,si
   bts bp,0xbb
   ror bp,0x74
   imul ebx,eax,0xb2aac729
   or eax, 0xc0000000
   and edx, 0x3fffffff
   div eax
   and al,dl
   ror bp,0xc1
   xor al,0xd
   or si, 0xc000
   and dx, 0x3fff
   div si
   ror bp,cl
   bt ebx,0x6c
   imul edx,0x12593d17
   or si,bp
   stc
   adc ch,bh
   rol ebp,0xbe
   xadd ecx,edi
   sar ah,0x1
   clc
   adc bh,0x61
   xor ax,bp
   cmovl eax,esi
   shr bx,cl
   shld dx,di,0x3
   shr ecx,0x1
   shr bp,cl
   and cl,0xf
   shld ax,bx,cl
   bts bx,bp
   movsx ebx,bx
   rcl cl,0x1
   shl bl,0x31
   test edx,0xff4b5883
   shrd edi,edi,1
   shrd esi,ecx,1
   mov al,ah
   add bx,0x3db1
   sbb ah,cl
   imul esi
   ror ebx,0xf2
   btc ebx,ecx
   rol al,cl
   neg bp
   ror bp,cl
   or edi,0xc48809e8
   bswap ebx
   ror ebp,0x62
   sub al,0x4a
   shr ebx,0x1
   and ebx,0xb487148b
   stc
   sbb ebx,edx
   setne bh
   bts ecx,0x52
   neg ch
   test bp,di
   cmovg ebx,edi
   mov eax,0xcb90c9ce
   xadd ebp,ecx
   xadd al,ch
   movsx ebp,bx
   sar si,0x3
   dec esi
   cwde
   test si,ax
   shrd edx,ebp,cl
   not cl
   dec cl
   shl esi,cl
   shr eax,0x1
   and eax,0x6a5e9700
   lahf
   sbb ax,si
   setns ah
   neg al
   shl bp,0x1
   cmp cl,ch
   sar di,0x1
   btc edx,eax
   dec edi
   sbb bh,0xc3
   setne dl
   adc dl,cl
   cmovpe ax,di
   mov eax,0x67ded522
   cmovnbe ebx,ebp
   stc
   sbb bl,al
   setne bh
   shr di,0x25
   cbw
   clc
   stc
   adc ecx,ebp
   clc
   rcl ah,0x1
   bsf esi,ebx
   sub ch,0xee
   ror bh,0x1
   xadd edx,esi
   btc esi,0xb6
   and cl,0xf
   shld bp,di,cl
   bts ecx,ebx
   sar ebp,0x1
   bt eax,0x8e
   shl eax,cl
   xor ecx,eax
   cmovne esi,ebp
   add di,0xb1db
   cmovnl esi,esi
   rcr cl,0xef
   nop
   mov bx,dx
   mul ax
   or eax, 0xc0000000
   and edx, 0x3fffffff
   div eax
   sub ebp,0x739d3437
   rcl bp,0x49
   mov ebx,esi
   rol ecx,0x70
   cmp bl,0x27
   mul bp
   rol bp,0x76
   btc dx,0x52
   shl dx,cl
   shr ax,cl
   add si,0xaa22
   cwde
   stc
   sbb bl,0xb0
   cmovo di,si
   clc
   rcl edx,0x1
   stc
   rcl ebx,0x1
   sub eax,0xd1751cf
   xadd di,bx
   clc
   rcl esi,0x1
   xor dl,bh
   cmp al,bl
   shr di,0xdd
   clc
   or dh,0x15
   cmovnl ecx,esi
   cmovno edx,edx
   shrd cx,bx,1
   dec esi
   rcl edx,0x94
   shl bx,0xe6
   xadd cx,cx
   mov ebp,ebx
   rol ch,cl
   cdq
   shrd esi,ecx,1
   setpe bl
   cmovs ax,si
   add di,ax
   adc dh,dl
   stc
   adc cx,cx
   sets ah
   clc
   adc bl,0x3
   movsx cx,dl
   bts eax,0x10
   and bl,dl
   shld ebx,eax,1
   cmovc cx,bx
   cmovg ax,bx
   rcl dh,cl
   bsf ecx,ebx
   lea esi,[edi+0x17bd4e76]
   rol di,0x74
   ror eax,0xf0
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   clc
   sbb ecx,0xe1c7f397
   add edi,0x47ef79c0
   shr dx,0x29
   ror dl,cl
   or dh,0x70
   sar bx,0x4f
   sub ecx,0x4cf6059
   setns dh
   cmovc ebp,ebp
   sub dx,bx
   clc
   sbb esi,0x8a77f7b4
   rol ch,cl
   sub ebx,edi
   cmp bp,0x925c
   sub di,dx
   sar dl,0x1
   movsx cx,bh
   bts esi,eax
   rol ebx,cl
   not edx
   and ebx,ecx
   ror dl,cl
   cdq
   sub edi,edi
   sar bh,0x8f
   add edx,0xb1e4f28
   stc
   adc bl,0xf2
   or ebx,0x56d355c9
   and si,di
   test si,bp
   sub dl,0x20
   sar ah,0x1
   not ax
   rol esi,cl
   add dx,0x9303
   imul bp,0x1179
   stc
   sbb ecx,0x4e772369
   btr bp,0x8a
   clc
   adc si,0xfa3f
   clc
   rcr ebp,0x1
   add ebp,0xa5f07dde
   test bh,bl
   or ebp, 0xc0000000
   and edx, 0x3fffffff
   div ebp
   rol ch,cl
   not edx
   cmpxchg si,ax
   stc
   adc bx,0xd496
   rcr bp,0x1
   stc
   sbb bl,0xa0
   add ch,0xd4
   cmpxchg ecx,ebx
   adc dx,di
   sbb bx,cx
   stc
   sbb si,0xa605
   btc eax,0xf5
   sar dh,0x1
   ror eax,0x1
   shr edx,0x1
   xor ah,bh
   clc
   adc bx,ax
   test cx,0x7fd3
   cmp dx,0xf35f
   test esi,edx
   movzx ebp,si
   cmovpe edi,ecx
   inc si
   stc
   sbb ebp,0xdf80793e
   shld ax,cx,1
   rcl di,cl
   btr esi,ebp
   cmpxchg bx,bp
   add dh,ah
   btr ax,0x3e
   movsx cx,bh
   dec dh
   ror si,cl
   shld di,si,1
   shl bh,0x1
   cmovnc di,bp
   shld bx,dx,1
   shr si,0x1
   cmp dx,0xf0cb
   cdq
   imul cl
   cmovc ebp,ebp
   and ax,ax
   shr ebx,cl
   test ch,0xc8
   rcr dl,cl
   xchg ebp,esi
   imul ax
   or ecx,ebx
   btc eax,edx
   sar esi,cl
   test bh,cl
   stc
   adc edx,0xbf410bf1
   cmovs ecx,ebp
   and edx,eax
   adc ah,bh
   rcr ch,cl
   and cl,0xf
   shrd dx,di,cl
   rol ch,cl
   rol si,0x1
   clc
   rcl ch,0x1
   neg ch
   cmovg edi,edi
   cmovnbe di,cx
   sar ah,cl
   test al,0x74
   shld ecx,eax,cl
   imul edx,edx,0xbc044960
   or bl,0x17
   ror esi,cl
   shr ebp,0x84
   or ecx, 0xc0000000
   and edx, 0x3fffffff
   div ecx
   bt bx,0x34
   add ecx,edx
   and bx,0x7ed
   inc	cl
   setns dl
   group=base
   sub eax,0xe88bbfc6
   sar di,0xf8
   xchg cl,bl
   ror eax,0x1
   cmpxchg ax,bp
   setl bl
   shrd edi,eax,0xb5
   rol edx,0x85
   or ch, 0xc0
   and ax ,0x3fff
   div ch
   sar edx,0x1
   rcl dl,cl
   shl dl,0x1
   or bh,dl
   shld esi,edx,0x15
   shl edi,cl
   imul bp,si,0xfae0
   shl dx,cl
   or edx,0x8ce09561
   rol cx,0xd7
   shld ebp,eax,1
   bts bx,di
   ror ch,0x1
   cwd
   clc
   rcr dh,0x1
   add dl,bl
   shld si,si,1
   clc
   rcr esi,0x1
   imul bh
   rol ah,cl
   ror bx,cl
   xchg edx,esi
   sar dx,0x1
   xadd di,dx
   stc
   rcr di,0x1
   test dx,si
   movsx bx,ch
   movzx ebp,bp
   clc
   rcl bx,0x1
   sar dl,0x1
   cmovnc ebx,ebx
   cmc
   cmpxchg edx,edx
   sar bl,0x1
   cmovc cx,ax
   btc bp,di
   not ah
   shl bp,0x1
   ror bp,0x1
   btr edx,0x71
   cmpxchg ecx,ecx
   clc
   adc dl,0xa6
   rol dx,0xe3
   or bx, 0xc000
   and dx, 0x3fff
   div bx
   shr edx,cl
   movsx edi,ch
   shl al,0xc8
   and bp,cx
   xor cx,0xe9ff
   cmovnc ebp,edx
   mul ax
   shr ebp,cl
   btr eax,0x90
   sar edx,cl
   ror eax,0x1
   rcl cl,0x1
   xor cx,di
   xchg edx,ecx
   clc
   rcr dh,0x1
   shrd ebx,ebx,cl
   test edx,ecx
   clc
   sbb esi,esi
   cmpxchg bx,si
   clc
   rcl ebx,0x1
   clc
   rcl di,0x1
   bswap ebp
   or cl,0x1f
   xor ch,0xe4
   movsx eax,dh
   ror si,0x19
   movzx ebp,bl
   shr ch,cl
   xchg bh,al
   rol bh,0x12
   bswap ebp
   not bx
   neg eax
   rol bx,cl
   cmp si,si
   rcr edx,cl
   bswap edx
   rol dh,cl
   xchg ebp,edx
   rol dh,0x1
   sar eax,cl
   btr bx,0x80
   sbb ebp,0xd1235d93
   dec dx
   cmc
   or di,cx
   sbb cx,0x5241
   rol ecx,0x30
   shr bl,0x1
   cmovno ecx,eax
   shl si,0x1
   movzx esi,cl
   movsx eax,si
   lea ecx,[edi+edi*1+0x840b58b6]
   rcr dl,0x51
   test cx,ax
   test dx,di
   bts bx,0xc7
   adc bh,al
   movsx ebp,dx
   cmovo dx,cx
   shr dx,cl
   bts esi,0x9b
   shr bh,0xbb
   and dl,0xf5
   sar ecx,cl
   bt ecx,0x98
   stc
   sbb bh,0x5e
   ror esi,0x1
   stc
   sbb ax,bx
   rcr bl,0x1
   and cx,0x58e4
   clc
   sar dh,0x1
   clc
   sbb edx,0x34c6c89f
   cmovnc bx,bp
   stc
   adc bp,0x778c
   shld esi,edi,cl
   imul esi
   rcl edx,0x1
   adc ecx,0xea8ff88
   bswap eax
   dec dh
   shr dx,0xfd
   shrd bx,si,1
   rcr dx,cl
   movsx ecx,dh
   shr ch,0x1
   xchg dh,dl
   sar edx,cl
   and ch,0x20
   shrd bp,bx,0x0
   xadd si,bx
   rol ecx,0x1
   clc
   rcr dx,0x1
   and edx,esi
   or si,bx
   mov ebx,0xd09dd634
   rol cl,0x16
   shr esi,cl
   xadd bh,ch
   bsr ebp,edx
   ror si,0xc5
   bswap ebp
   sar ch,0x1
   adc dl,cl
   btr bp,0x85
   clc
   sbb ch,0x70
   cmovnl ax,ax
   add ebx,ebx
   xor ax,0xe06d
   bswap edx
   sar si,0x1
   sar cl,0xab
   shl ebp,0x1
   adc ah,0xa3
   add ah,bl
   movzx bp,dh
   xor bx,0xef24
   shld ecx,ecx,cl
   or eax, 0xc0000000
   and edx, 0x3fffffff
   div eax
   cmpxchg ebx,ebx
   rol esi,0x14
   shld ecx,ebx,0x37
   cmpxchg ebp,ebp
   seto ah
   clc
   sbb ch,0x17
   cmovnbe di,si
   ror bl,0x1
   stc
   rcl esi,0x1
   sub ah,dl
   rcl edi,0x87
   shrd eax,ebx,0xf0
   xor ebp,esi
   shr bh,0x1
   nop
   dec si
   adc ax,bx
   stc
   adc ah,cl
   shl ecx,cl
   btc esi,0x8a
   mov dx,cx
   shr bh,cl
   ror ebx,cl
   btc cx,0xcc
   rol ecx,cl
   shl dh,0x1
   shr di,0x1
   sbb si,0xf317
   or bx,cx
   setl dl
   cmp edx,0xf0aa3c83
   sub dx,si
   setg ah
   setl bh
   clc
   rcl al,0x1
   adc ebp,edi
   xor ah,0x44
   shrd esi,edx,0x36
   shr bx,0x1
   cmovno si,di
   stc
   sbb edx,eax
   test ecx,0xcfb9f9
   cmove ebx,ecx
   stc
   adc dl,bl
   stc
   sbb edi,eax
   rol edx,0xb1
   rol cx,0x1
   sar bl,0x1
   sar di,0xe4
   xadd dl,dl
   bts cx,0x71
   rcl ebx,cl
   shl cx,0x1
   shld si,bx,1
   and cl,0xf
   shld bp,ax,cl
   shr bx,0x1
   xor eax,0xab7d6b2b
   add ah,0xf9
   clc
   rcr ch,0x1
   or eax, 0xc0000000
   and edx, 0x3fffffff
   div eax
   shld esi,eax,0x89
   cbw
   sub bp,di
   shrd bp,ax,0xd
   shl di,0x1
   sbb esi,0xc2e9d969
   cmovnl ebp,ecx
   stc
   rcl bh,0x1
   imul edi
   sar bx,cl
   lea esi,[eax+eax*4+0x5f0651d0]
   btr si,0x1b
   rcr al,0x56
   or ax,0x4aae
   cmovbe ebp,ebp
   cmovg ecx,eax
   rcl eax,cl
   xor dl,0x12
   group=base
   not di
   sar bx,0x1
   ror edi,0x1d
   nop
   shrd cx,ax,1
   cmovg dx,ax
   and cx,0x661f
   rcl bp,0x33
   cmpxchg al,bl
   ror edi,0x66
   shld ebx,edx,0xd4
   shld ax,cx,0x2
   cmp bh,0x3e
   cmove ax,dx
   imul cx,cx,0xa1c3
   xor ax,di
   cmovbe cx,cx
   not ch
   clc
   rcr ecx,0x1
   cmovno di,ax
   sub cx,di
   stc
   adc ebx,0xad720049
   cmp ax,si
   rol ebx,0x1
   stc
   sbb eax,0x8709008
   cmp dx,si
   rcl ah,0x1
   sar si,0xde
   xadd bp,dx
   or si, 0xc000
   and dx, 0x3fff
   div si
   ror cl,0xc5
   test ch,0xd3
   sar dh,0x1
   btc ax,0x35
   btc ebx,edi
   rcr bp,cl
   sar ah,0x1
   sub di,0x679d
   rol bl,0x9f
   rol di,0x1
   imul edx
   mov eax,edx
   cwd
   xchg ecx,edi
   clc
   sbb ah,0x67
   clc
   adc dh,bh
   cmovl di,bx
   stc
   adc al,ch
   adc eax,0xd628a4a
   stc
   rcr ah,0x1
   sub dl,0x7
   sbb ecx,0x5045d527
   cmovno ax,cx
   btc edi,0x2
   test bx,0x6cd3
   cmovg si,si
   imul ax,cx,0x12df
   stc
   adc ecx,0x1eec4bb3
   ror ax,0xea
   shld ebx,ecx,cl
   ror dh,0x1
   btr edi,0x77
   sar edi,0x7d
   sub cl,cl
   rcr bp,cl
   cmpxchg di,di
   btc cx,0xdb
   bt dx,0x9d
   imul ecx
   rol dx,cl
   mul si
   cwde
   rcl bl,0xdf
   add edi,0xb29d80d0
   clc
   adc ecx,ebp
   btr cx,ax
   sub bp,ax
   shr dx,cl
   shl ax,0xb9
   shl bp,0x1
   stc
   rcr ebx,0x1
   ror dh,0x1
   btr di,0xdf
   movsx bx,bl
   xchg bl,ch
   xor bl,ah
   setc bl
   bt edi,0xfb
   cmpxchg bl,ah
   not ebp
   shl ah,cl
   btr ax,0xb5
   clc
   adc bh,0xc
   cwde
   bt edi,eax
   setnbe ah
   cmp si,0x55bc
   stc
   sbb bx,ax
   cmovc eax,ecx
   rcl cx,0x1
   stc
   sbb bx,dx
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   cmp ah,bl
   cmovno esi,ebx
   btc edx,0xc
   rcr esi,0x1
   sub bp,dx
   rcl bx,cl
   mov esi,0x410dced
   shld edx,esi,0xc3
   shr edi,cl
   xor cl,0x6d
   or edi,0xb648df02
   shr dl,0x1
   xadd esi,ecx
   xchg ax,si
   bts edi,esi
   shrd ecx,ebp,0x9e
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   not ecx
   btc di,bp
   sahf
   sub eax,eax
   xadd ax,ax
   add edx,0x91aa0765
   clc
   rcr cl,0x1
   clc
   adc si,cx
   add al,cl
   test ch,al
   ror bx,cl
   xor ebx,0x616840cf
   stc
   rcl si,0x1
   sbb ah,0x8c
   sar al,0x1
   mul cx
   bsf esi,esi
   add edi,ebx
   stc
   sbb al,0xf1
   xadd ch,al
   imul bp,0xdd16
   imul eax,edi,0x8875421d
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   and esi,0xc1db6cf6
   rcr si,cl
   xchg cl,dl
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   add si,0x50bf
   cmove bx,cx
   stc
   rcr dl,0x1
   sbb esi,0x8119ccd0
   cmovns edi,edi
   sar ah,0x1
   imul dx,bx,0x2738
   clc
   sbb di,0xfd28
   bt edx,ebp
   shrd dx,di,0xa
   mov dx,0x7743
   not ebx
   cwd
   test si,bp
   mov edx,ecx
   sub bx,0x402a
   cmovnbe edi,eax
   and ah,0x2c
   cmp edx,0x2732e4a
   btc dx,ax
   and edi,ebx
   btc esi,0x3c
   rcl dx,0x1
   mul al
   clc
   sbb ah,0x72
   ror bh,0xa8
   add ecx,eax
   or ax, 0xc000
   and dx, 0x3fff
   div ax
   imul edi,0xf5e9e6b4
   ror eax,0xf4
   bts edi,edx
   xor ebx,0x617897ea
   shrd ebx,ebx,cl
   btr edx,ecx
   bts cx,cx
   dec edi
   stc
   rcr ebp,0x1
   rcr dh,0x1
   imul ebx
   shr dl,0x1
   ror edi,0x50
   xchg ch,bh
   ror ecx,cl
   rol dl,cl
   clc
   rcl ax,0x1
   and cl,dl
   stc
   adc al,dl
   add al,bh
   adc edx,ebx
   sub di,0xf661
   setno dl
   clc
   sbb ecx,edx
   xchg eax,edx
   shld dx,cx,0x8
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   ror eax,0x1
   mov ax,0x1d27
   sar esi,0xa1
   bts ax,bp
   test dl,0x33
   ror cl,0x1
   and di,0x2ed1
   shl ecx,0xe
   dec edx
   not al
   xadd ax,dx
   mov ah,ah
   mov ax,bx
   or bl, 0xc0
   and ax ,0x3fff
   div bl
   btr ax,si
   shl bl,0xa1
   imul dx,0x71ae
   or al,dh
   test ecx,0xcb85889d
   ror si,cl
   ror cl,cl
   bts esi,0xd3
   not bp
   not si
   sar edx,cl
   shr di,0x1
   cmpxchg edi,edx
   sub bx,bx
   xchg dx,ax
   and cl,0xf
   shrd cx,cx,cl
   rol dh,0x1
   shrd edi,eax,1
   bts edx,0x16
   bt ecx,ebp
   bts dx,0xf7
   test edi,edx
   cmp si,di
   sar ebp,0x1
   not esi
   clc
   adc edi,0x8dae7fca
   setnc ch
   not ch
   shld bp,cx,0x5
   and cx,0x64f7
   btr ecx,0xb1
   or eax, 0xc0000000
   and edx, 0x3fffffff
   div eax
   rol cl,0x1
   cmp bx,dx
   ror ebx,0x33
   lea dx,[edx+edi*2+0x46]
   ror ebp,0x1
   rcr si,cl
   imul ebp,esi,0xe939a104
   sub edi,0xef18bae7
   rcl al,0x1
   neg bp
   cmovs esi,esi
   xor ah,al
   rcr ebp,0x9a
   mov dx,0xfa9
   sar bh,0xf7
   rol edx,0x1
   xor ebx,ebx
   or bl,ch
   ror di,cl
   not al
   test ebp,0x5593885c
   neg bp
   cmovpe edi,ecx
   mov edi,ebp
   and al,dl
   dec bp
   cmp ecx,ebp
   ror ax,0x1
   xchg si,ax
   xchg ax,dx
   bts si,0xc7
   xor al,dl
   rcl si,cl
   mov di,bp
   sub si,ax
   sar bp,cl
   inc bx
   cmp si,di
   stc
   sbb bp,bp
   btc ecx,edx
   ror di,cl
   dec cl
   xchg dl,ah
   cmovs edx,ebp
   test di,dx
   test eax,esi
   cmovo edi,ebp
   cmovl ax,dx
   cmovo edx,esi
   cmovnbe ecx,ebp
   xadd esi,edx
   movzx esi,cl
   add dl,0x84
   rol cl,0x37
   xadd bx,si
   ror esi,0x7c
   cwde
   btr dx,bp
   sar ebp,cl
   test dx,di
   dec cl
   sbb eax,0xac49c289
   stc
   adc dl,ah
   rcr cx,0x1
   bts bx,ax
   rcr ebp,cl
   cmp ebx,edx
   stc
   adc di,0x597b
   btr esi,edx
   clc
   adc edx,0x761fdaa0
   stc
   rcl bh,0x1
   sar si,cl
   shl dl,cl
   inc	ebx
   and ebp,ecx
   cmovne eax,ebp
   neg ch
   shrd ecx,edx,0xda
   imul dh
   and bp,0x3176
   cmovne ax,ax
   test dl,ah
   ror dh,0x1
   clc
   rol ebp,0x1
   xadd ax,bp
   shr ax,cl
   sar ebp,0x44
   btr dx,di
   cmpxchg bh,bl
   setpe bl
   shr ah,cl
   dec bl
   add dx,si
   mov si,0xe9a
   lahf
   bswap esi
   and cl,ah
   cmovpe bp,ax
   sub eax,ebx
   clc
   sbb bp,0xda96
   stc
   adc cx,0x518b
   lea dx,[ebx+edx*1+0x667c372f]
   cmovo eax,ecx
   shr ah,cl
   sub ebx,ecx
   shr edx,0x87
   mov bx,di
   bswap eax
   setne ah
   btr cx,cx
   bt bx,bp
   clc
   adc dh,0x26
   neg edi
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0x67badd40

 pop gs
 pop edi
 pop esi
 pop ebp
 pop edx
 pop ebx
 ret
         .size   log_size_10_var_008, .-log_size_10_var_008

.globl log_size_10_var_009
         .type   log_size_10_var_009, @function
log_size_10_var_009:
 push ebx
 push edx
 push ebp
 push esi
 push edi
 push gs
  mov eax,0xb7ad2757
  mov ebx,0xc5937456
  mov ecx,0xb0b2c825
  mov edx,0x5db7a49d
  mov ebp,0xf64a366c
  mov esi,0xf9bb334
  mov edi,0xb7a716e2
   movzx dx,cl
   cmp dh,ah
   mov ebx,0x28dfcb2e
   shr dx,cl
   shrd ax,ax,0x8
   imul bx
   bswap ebx
   sahf
   ror bl,cl
   bswap ecx
   shr si,0x8b
   sar bh,0x1
   not ch
   shrd ebp,edx,cl
   shr ax,cl
   imul dx,di,0x4f34
   stc
   adc ch,0x5f
   stc
   sbb al,0xb5
   clc
   adc cx,bx
   rol bh,0x0
   xadd edx,edi
   rol ax,0x1
   lea eax,[esi+edi*8]
   rol bh,0x1
   rol edx,0xf1
   mov eax,esi
   or ebx, 0xc0000000
   and edx, 0x3fffffff
   div ebx
   cwd
   movsx edi,cx
   cmp edi,ecx
   btr si,bp
   rcr ax,cl
   mul esi
   clc
   rcr cx,0x1
   rcl cl,cl
   shl edx,0x1
   btr edx,0x43
   ror esi,0x1
   clc
   sbb dl,0x20
   not dx
   mov edx,edi
   rcl si,0x63
   imul ecx,ebp,0xf17c0da6
   rcr edi,0x1
   bsr edi,ecx
   cmp bl,0x19
   shld edi,esi,cl
   shl edi,0x1
   cmp ch,0x78
   bsr ebx,ebx
   cwd
   neg bx
   clc
   sbb edx,0xe6db7c44
   cwde
   cmp edi,0xec91dde5
   add bp,0x46ef
   cmovbe edi,ecx
   inc	edi
   movsx ebx,bp
   cmovg si,bx
   adc ch,0xf0
   sub cx,0x51e
   rcr esi,0x74
   bts dx,0x36
   mul cx
   bts si,0x8b
   sbb cx,si
   setl ch
   clc
   rcr bl,0x1
   mov edx,ebp
   sbb ebx,eax
   imul esi
   shrd bx,si,1
   rcl dh,0x1
   stc
   rcl ah,0x1
   rol dl,0x1a
   cmpxchg bp,ax
   clc
   adc cx,bp
   cdq
   btr ecx,0x95
   btr ecx,eax
   cmove ecx,edx
   bt eax,0xdf
   adc edx,0x17f83651
   sete ch
   seto bl
   bt eax,eax
   imul ebx,ebp,0x913024da
   sar edi,0x1
   test si,di
   mov bh,0xb3
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   and edi,0x3ab3e144
   rcr dx,0x4
   neg ax
   xadd ch,ah
   mov edx,0x5951b8dc
   bts edx,eax
   test ax,0xad4c
   clc
   sbb ebp,0x7af967f3
   not cx
   bts ebp,esi
   cmp edi,eax
   rcl dl,0x1
   shl dx,cl
   sub dh,0xfe
   setbe bl
   sbb eax,eax
   and cl,0x25
   xor bl,0x80
   stc
   adc si,ax
   and bh,cl
   movsx edi,bp
   shrd edx,ebp,cl
   ror ax,0x3a
   mul edx
   or cx, 0xc000
   and dx, 0x3fff
   div cx
   shr bp,0x1
   stc
   rcr di,0x1
   rcr cx,0xcf
   not cx
   xchg si,bp
   neg al
   clc
   rcl cx,0x1
   rol esi,cl
   test ecx,0x3f02443a
   mul ecx
   rcl cx,0x1
   bsr eax,ecx
   cmove cx,bx
   add bp,0x6f55
   ror ebx,0x1
   neg bh
   clc
   rcl ebx,0x1
   cmovo ebx,ecx
   rol edx,0x4
   xor ebx,ebp
   rcl dx,0xa1
   and cl,0xf
   shrd bx,ax,cl
   imul edx
   ror dh,0x1
   ror bx,0x1
   stc
   adc si,0xf3cc
   bsr edx,esi
   add bp,di
   btc ebx,0x2e
   imul edx,edi,0xddcf6e59
   sar cl,0x84
   sahf
   sbb ah,0xa7
   xchg eax,ebx
   cmovc esi,ecx
   cmovpe ebx,edi
   clc
   ror bp,cl
   shr eax,cl
   btc ax,dx
   ror ch,0xbe
   xchg dh,al
   sar edx,0x79
   shr ah,cl
   add ecx,edx
   rcr ebx,0x12
   mov ah,0x44
   rol dl,0x1
   setnc ch
   shrd edi,edi,cl
   bswap ecx
   not cx
   inc	al
   sub dx,bx
   clc
   sbb ch,0x23
   add dl,ah
   bt ebp,0x78
   cmpxchg ch,ah
   test ecx,ebp
   mul bl
   add dl,bh
   cmovo ebp,edi
   rcl si,cl
   xchg dl,dl
   xor ax,0x739e
   stc
   rcl dl,0x1
   shld ax,dx,0x0
   and ax,0x70a7
   clc
   adc ax,0x45e4
   shr bl,0x10
   or cl,bl
   cmovnbe edx,ebp
   ror esi,0x1
   shld esi,ecx,0x54
   test edx,0x60b6f42e
   cmovbe cx,di
   and ax,0x6213
   movzx eax,al
   and cx,ax
   ror esi,0x84
   or bh,dl
   stc
   adc dh,bl
   shr esi,cl
   add dx,0x5239
   cmovpe cx,bx
   mov ax,0x5baf
   sbb edx,0x26054b46
   cmovng ecx,ecx
   sar dl,cl
   or ecx,eax
   shld dx,cx,0x8
   movzx eax,al
   shl ebx,cl
   shr ecx,0x19
   not ebx
   imul dx
   clc
   rcl bx,0x1
   cmp ebp,ebp
   ror ah,0xd6
   cmp ecx,0x5c7b8517
   cdq
   cmp edi,ebp
   movzx di,dl
   adc bx,di
   not bx
   adc esi,0x1672bfd0
   rcl bp,0xa4
   ror bl,0x1
   stc
   adc ebx,eax
   bt eax,eax
   test dh,bh
   shl al,0x1
   shr dh,cl
   movsx eax,bx
   and si,0x6549
   shl si,0x63
   not eax
   sub si,0x4a77
   stc
   rcl esi,0x1
   movzx cx,cl
   shr bh,cl
   movsx si,ah
   and cl,0xf
   shld bx,dx,cl
   shl edx,0x1
   shl di,cl
   bts ax,0xe4
   rol esi,0x1
   test bp,0xbc5f
   stc
   adc ax,bp
   ror ebx,cl
   imul dx
   rol eax,0x1
   stc
   sbb bx,0xcb09
   clc
   sbb ebp,0x2c40def6
   cmpxchg ebx,ebp
   clc
   sbb al,bl
   shr cx,0x46
   not si
   sar esi,0x13
   test eax,0xa1feac92
   mul dx
   sar dl,cl
   rol dl,0x94
   btr edi,0x12
   bts bp,0x4c
   rol al,cl
   imul eax,0x3c84b92c
   bt bx,dx
   shrd edx,edx,1
   sar esi,0x1
   xchg ah,dh
   shld eax,esi,1
   xadd ebp,edi
   stc
   sbb ah,cl
   shrd ecx,ecx,1
   clc
   adc ch,0xe2
   sahf
   stc
   adc eax,0x648cb225
   imul ebx,edi,0xa44b1111
   clc
   adc ah,dh
   test ebp,0xa4bd6fd
   shl di,0x59
   shrd bp,bp,1
   clc
   sar bp,0x99
   btr esi,ecx
   rol edi,0x4
   imul ax
   dec ah
   bt edi,0x4e
   bswap edx
   imul esi,ecx,0xb19d5512
   sbb dh,0xb7
   cmp bl,0x5
   imul esi,0x1ce94d60
   shl ebp,0x9d
   sar cl,0x75
   cwd
   shl bp,cl
   rol dh,0x1
   xadd eax,eax
   adc edi,eax
   imul bp,0x1112
   mul al
   cmpxchg cl,cl
   shl ebx,0x6b
   nop
   mov dh,bh
   bts cx,0x1e
   bts ax,ax
   sbb si,0x3e34
   stc
   rcr bh,0x1
   and cl,0x2
   or cl,bl
   sbb edx,0x3377241f
   rol dl,0x1
   clc
   rcl di,0x1
   ror dh,cl
   sar bh,0x1
   add bx,bp
   setg dh
   cmp ebp,edi
   sbb bx,bx
   movsx ax,cl
   rol dh,0x1
   xadd esi,eax
   not ch
   imul di
   or ah,0x3c
   setnc ch
   bswap edi
   xor dl,0x9b
   cmovno ebp,esi
   btr ebx,0xdd
   cmovc eax,ebp
   rol bp,0x6d
   shr di,0x1
   ror eax,0x38
   neg eax
   shld si,dx,0xc
   cmp ax,0xa39d
   shr dh,cl
   ror ax,0x1
   shrd edx,ebp,1
   rol ch,0x7a
   not dx
   bsf edi,edx
   mov dl,0x34
   xadd bp,si
   rcl bp,0x1
   stc
   adc si,dx
   or dl,al
   shr edx,0x36
   btr esi,0xf5
   or cx,0xc46a
   sar cx,0xbe
   cmp cl,ah
   and bx,bx
   shr si,cl
   movzx ebx,ah
   bsr ebp,ebx
   btr dx,0x6b
   sar ebx,0x1
   or cx,0x6736
   cmovo edx,ecx
   inc	bh
   adc ah,0x4d
   imul cx
   test al,0xa3
   xor cx,ax
   imul edi,0x85548f02
   or ch,0x7c
   adc dx,0xedea
   setl al
   cmovpo ecx,esi
   setng cl
   cmovg ecx,esi
   rol ax,0x1
   or esi,0xfdb1a286
   btc di,0x19
   stc
   adc bp,0xd2ac
   rcl ebx,cl
   cwd
   sar ah,cl
   btr dx,bx
   btc di,0x9c
   shrd ebx,ebp,1
   xor bl,dh
   sar bh,0xaf
   btc ebx,0x58
   shrd bp,dx,0x7
   shrd cx,ax,0x8
   shld ecx,edi,1
   ror dh,cl
   xor ebx,ecx
   clc
   setnbe dh
   ror ch,cl
   shl al,0xf
   or bh, 0xc0
   and ax ,0x3fff
   div bh
   shld ebx,ebp,1
   inc	bl
   clc
   adc eax,ebp
   rcl di,0x43
   shl ah,0x1
   sub bx,0xab10
   setns bl
   ror edx,cl
   lea bx,[ebp+0xe0]
   btc bp,ax
   and bl,0xb9
   rcr ecx,0xd4
   and ebx,edi
   imul bp,0x78fe
   rcr edi,cl
   imul edi,edx,0x1e4fe0da
   btc ebx,edx
   xor cx,0xdc79
   shrd edi,ecx,0xb4
   and ah,ah
   xor dx,bp
   mov ebp,ecx
   shr dl,0x91
   movsx ecx,bl
   group=base
   test bl,0xc5
   cmovpo si,bp
   shl eax,0xad
   sar esi,0x1
   test ecx,0xeb7658f2
   or di, 0xc000
   and dx, 0x3fff
   div di
   imul ax,bp,0x515
   cmp dh,dl
   shld esi,eax,0xe2
   or bl,0x16
   and si,0xfd98
   rcr ecx,cl
   bts ebp,ecx
   bt bp,cx
   rcl ebx,0x40
   xor cl,0xaa
   bts si,0xf6
   or ebp,esi
   setc dh
   shl cl,cl
   shl edi,0x1
   test bl,al
   lea edi,[ecx+edi*8]
   mov cl,dh
   add bh,bh
   cmovpo dx,bx
   test bl,bh
   clc
   sbb edx,eax
   sar al,0x1
   test bp,dx
   cmovpe ebx,eax
   shl dx,cl
   cmp cx,bp
   setg ch
   or esi, 0xc0000000
   and edx, 0x3fffffff
   div esi
   test edx,0x55ea258b
   clc
   rcr si,0x1
   sar ebx,cl
   bts ecx,ebx
   clc
   rcl bl,0x1
   stc
   adc ebx,0xa19a7a5e
   mul cl
   cmovno di,ax
   btc ecx,0x8f
   xor edi,0x607c23e9
   cmovg bx,di
   btc ecx,ecx
   and cl,0x1d
   btc cx,bp
   test ch,0xcc
   movsx dx,al
   rcl dx,0x1
   mov edi,0x7a42711b
   inc bx
   rcl bx,0x2d
   rol edi,0x1
   clc
   rcr ah,0x1
   clc
   sbb edx,0xcaaca1fd
   test ah,0x3f
   or ebp, 0xc0000000
   and edx, 0x3fffffff
   div ebp
   mov edx,edi
   sar cx,0xdb
   movsx ebx,bp
   btc cx,0x33
   rol edx,cl
   shr dl,cl
   cmp bl,ch
   shl al,0x1
   or bp,ax
   xor esi,edi
   rcr si,0x1
   ror ecx,0x1
   shld ecx,ebx,0x1b
   imul cx,si,0x992b
   sahf
   stc
   rcl ch,0x1
   xor bh,0x6f
   rol bp,cl
   bt cx,ax
   sub ebp,0x6656cc33
   stc
   sbb bp,0x9ce6
   add edi,edi
   shl cl,cl
   shl al,0xc
   mov bh,bl
   mov edx,0xb06f2618
   not bx
   imul ecx
   xor ebx,esi
   or bp,0x8b1f
   adc si,0xf56a
   ror ax,0x1
   sar ch,cl
   cmp dx,dx
   cmp dx,0xbcca
   btc bx,si
   rcr ch,0x1
   shld ebp,esi,1
   cmovng si,cx
   mul bl
   shl bx,0xad
   xadd ecx,edx
   shr dh,0x1
   lea bx,[edi+ebx*2+0xe2fc3074]
   or si,0xdc1d
   or eax,0xc64a07d0
   mov si,0x8316
   stc
   rcl edi,0x1
   or ch,dl
   btr ebp,edi
   and ebp,esi
   clc
   adc ax,bx
   clc
   rcl bh,0x1
   not dx
   cmovo si,ax
   cmovo dx,di
   cwd
   sbb bh,0x8
   cmovpo bp,dx
   cmovl bp,bp
   shrd ax,si,1
   xor edi,edi
   test bl,bh
   sub dl,ch
   shr di,cl
   btr bp,bp
   and ebp,0x45ddb88
   stc
   rcr si,0x1
   rol di,cl
   shrd si,bx,0xd
   imul eax,ebp,0xc519072d
   or eax,0x7660384b
   clc
   adc bh,0x6
   rcl si,0x1
   sbb bx,0xd40c
   setns ah
   sar dx,0x1
   stc
   sbb si,0xc308
   xor cx,0x5961
   rcr eax,0x1
   xor di,0xbe24
   movzx bx,bl
   movzx ebx,ax
   clc
   sbb dh,0xe2
   ror cx,0x1
   sbb edi,ebx
   add bl,ah
   sar cl,0x1
   rcr dl,0x1c
   shr eax,cl
   add cl,bh
   cmp ebp,0xce0e2a36
   clc
   rcr edx,0x1
   bt ebx,0x96
   bswap ebx
   rol ch,0x1
   xadd ah,ah
   adc dl,0xb0
   bt di,bx
   clc
   sbb ch,al
   xor cl,cl
   cmovo si,di
   sar bx,cl
   bsr esi,esi
   movsx dx,bl
   shld edi,eax,cl
   rol dl,0x79
   xor edi,ecx
   stc
   adc edi,0x8e9644d7
   adc edi,0x245315bc
   and dh,0x15
   sete ch
   shld esi,edi,0xd3
   movsx ecx,bl
   sar esi,cl
   sub eax,ecx
   inc	bl
   rcl di,0x14
   mov ax,bp
   shl dx,0x69
   bt bx,0xb0
   adc al,al
   sete bh
   cmovns ax,dx
   rol edi,cl
   bt ebx,ebx
   setc dl
   imul ebx,0xaf162c26
   bswap edx
   shl esi,0x58
   mul edx
   sbb esi,0xc4d88ce5
   cdq
   xchg dh,bh
   cmovpo esi,ebp
   imul ebp
   sub cl,ch
   xor eax,0x266db744
   btr esi,ecx
   movsx edx,dl
   shr esi,cl
   imul dh
   stc
   rcr ebx,0x1
   bts dx,0x7e
   xor ax,0x201
   setpo bl
   test bx,si
   stc
   sbb dx,bx
   ror eax,0x1
   rcr bh,cl
   imul bx,cx,0x7910
   shld esi,edi,cl
   bts ebx,eax
   ror bp,cl
   bt edx,0xc3
   shl edx,0x1
   sub ecx,ebx
   shrd ax,si,0x8
   inc ax
   sar edi,0xa4
   xchg al,bh
   movzx esi,ax
   mov esi,ebp
   movsx eax,ch
   dec dx
   cmovne bp,bx
   mov bl,0x47
   btr ax,0x8e
   stc
   sbb cl,dh
   cmp ebp,0xb0311322
   rcr dx,0x1
   neg ah
   imul si
   shl cx,0xf8
   shr dl,0x1
   xchg cx,dx
   or cl, 0xc0
   and ax ,0x3fff
   div cl
   group=base
   add dh,bh
   sub ch,0xb
   sbb bx,bx
   ror edx,cl
   shl bx,0x1
   bt eax,0xc5
   rcr ebp,cl
   shr ebx,cl
   sub ch,0x8e
   shld si,bp,1
   adc di,0x59ef
   btr bx,bp
   shr eax,0x88
   xchg esi,ebx
   sar dh,cl
   sar si,0xb
   shl edx,0x1
   movzx ebp,bx
   and cl,0xf
   shrd ax,bx,cl
   ror ecx,0xd6
   btc esi,0x77
   rol eax,0x1
   stc
   rcl ch,0x1
   clc
   adc al,0xcc
   add dx,bp
   rcl bl,cl
   add dx,si
   imul dx,0xc0bd
   stc
   rcr bx,0x1
   mov ebp,edi
   cmovc eax,edx
   stc
   sbb ebx,ecx
   btc di,cx
   adc ebx,0x6813b354
   mov bh,0x43
   imul edx,ebp,0xe590fa11
   test ebx,esi
   bt ecx,eax
   stc
   adc dl,0xe6
   or bl, 0xc0
   and ax ,0x3fff
   div bl
   sar di,cl
   rol edx,0x90
   sar edi,0x21
   shr di,0x1
   xor ebp,0xe5b0ead9
   bsf ecx,eax
   and ebx,0xe1a90d8f
   xadd cx,dx
   and si,0xe54f
   or di, 0xc000
   and dx, 0x3fff
   div di
   shld di,bp,0x4
   btc ecx,0x83
   imul ebx,ebp,0x6d3845c
   btr esi,ebp
   cmpxchg ch,ah
   rol cl,cl
   mov esi,ecx
   sub ch,0xf
   imul dx,0xa0b3
   stc
   adc ebx,edx
   test ax,0xb01e
   clc
   and si,si
   setpe ah
   rol cl,0x23
   movzx ecx,bx
   ror bp,0x1
   sub di,0x4ef6
   rcr di,cl
   sub edx,0xbf9fc623
   add ax,si
   stc
   adc cl,0x7f
   btr ax,0xf0
   btr eax,0xbd
   mov bl,dh
   and dl,dh
   cmovs cx,ax
   btr si,bp
   cmpxchg ch,cl
   rcl cx,0xe
   btc bx,cx
   dec cl
   cmovo bp,bp
   shld bx,bp,1
   adc ax,0xd519
   test edi,edx
   clc
   adc ecx,0x2cb7c84f
   group=base
   shl cl,0x52
   xor eax,0x4ab7443d
   shr dh,0x1
   clc
   adc cx,di
   rcl dl,cl
   shld di,cx,0xe
   cmp edi,0x783363c5
   movsx esi,bl
   xor al,cl
   or bl, 0xc0
   and ax ,0x3fff
   div bl
   cmp ah,0x92
   cwd
   shrd dx,bp,0xf
   sar dx,0x1
   test ax,bp
   xor edi,edi
   cmovnl cx,di
   shrd si,bx,1
   cmc
   test bh,dh
   cmovg esi,edx
   cmove eax,ebp
   cdq
   shl ax,cl
   shl ebp,0x36
   bt bp,si
   movsx ax,bh
   shld esi,ecx,cl
   shr ebp,0xf8
   btr ax,0x47
   adc bp,0xcec3
   inc	esi
   sub bx,ax
   bsf edx,edx
   xadd ebp,esi
   stc
   rcl bh,0x1
   neg eax
   rcr dl,0x1
   sub dx,0xe335
   rcl bl,0x1
   xor edx,0x2d58178
   cmp dh,al
   cmovnc cx,ax
   cmovnc eax,ebp
   sbb edx,0x988f012a
   rcr cx,0xf7
   imul ecx
   stc
   adc ebx,eax
   rcr esi,0x1
   imul dh
   stc
   adc cl,dl
   shr bl,0x1
   mul dx
   sub ebx,0x87ca4a91
   sbb ax,0x96ea
   add al,dh
   imul ebx
   cmp dx,0xb3e
   rcl bh,cl
   ror di,cl
   shl ebx,0x1
   rol ebp,0x51
   or cl,dh
   xor bh,0x11
   or si, 0xc000
   and dx, 0x3fff
   div si
   shrd ebp,eax,1
   cmovpo ecx,ebp
   sar di,0x1
   shrd edi,ebx,0xf
   rol edi,cl
   or dh,0x86
   imul eax,edx,0x266bd4c8
   shr edx,0x1
   rol si,cl
   add eax,0xd8826bec
   or esi,ecx
   sbb si,si
   sbb ebx,esi
   or edi,0x2b16abd6
   shl ax,0x1
   clc
   sbb ebx,edx
   rol ax,0x6d
   ror dl,cl
   test dx,0xd11f
   test dl,0xf0
   mov di,bp
   shl si,0x1
   clc
   adc di,0xde9b
   rcl eax,cl
   cmp di,0xefe3
   sbb ax,0x1d32
   shrd cx,si,0xb
   inc ax
   cmovns di,ax
   rol ax,0x1
   sar ebp,0x1
   rcr edi,0x1
   ror bl,cl
   ror di,cl
   sahf
   cmp di,0xa777
   dec edx
   xadd ax,cx
   rcr bh,0xc6
   mul ebp
   clc
   sbb edi,0xc42b9ba9
   or bh,dh
   cmovo ebp,esi
   and cl,0xf
   shrd si,bx,cl
   test ah,dl
   sar edi,0x1
   rol edi,0x23
   bt ebx,0xb6
   add ah,0x98
   clc
   adc al,cl
   rol dh,cl
   or al, 0xc0
   and ax ,0x3fff
   div al
   and si,0xc42a
   rcr edx,0x16
   mul di
   sar edx,cl
   shl esi,0x1
   rol cx,0x1
   xor ecx,0xb93d9bd0
   rol edi,cl
   rol ch,cl
   imul edx,0xc444b7ac
   bts esi,ebx
   movzx esi,bh
   clc
   adc ah,ch
   clc
   seto al
   rol dh,0x1
   seto cl
   adc esi,eax
   cmp dl,0x2a
   ror ah,0x1
   and cl,0xf
   shrd si,di,cl
   ror al,0x53
   shl ch,cl
   test bl,0x95
   xor ah,0xe7
   shr dh,0x4f
   neg bx
   movsx dx,ah
   or edi, 0xc0000000
   and edx, 0x3fffffff
   div edi
   ror edx,0x11
   shrd ecx,esi,cl
   shrd esi,edi,1
   and ecx,edx
   clc
   rcr esi,0x1
   test dl,dh
   sar dx,cl
   sar dh,0xed
   imul ecx,0xfc16258f
   shl ecx,0x1
   cmpxchg cl,dh
   sar al,cl
   mov bp,0xe6c1
   or ebp,ebp
   sub edx,0xcbe93ac0
   clc
   adc dl,dh
   dec bh
   clc
   rcl cx,0x1
   sar edx,0xd
   inc	ch
   shr bp,0x1
   
    add eax,ebx
    add eax,ecx
    add eax,edx
    add eax,ebp
    add eax,esi
    add eax,edi
   
 sub eax,0x2cc101b4

 pop gs
 pop edi
 pop esi
 pop ebp
 pop edx
 pop ebx
 ret
         .size   log_size_10_var_009, .-log_size_10_var_009
