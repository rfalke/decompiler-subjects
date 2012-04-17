/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_pouet.net/with_source_388/ia32_com/subject.exe'
 */

/* DEST BLOCK NOT FOUND: 000009a7 -> 00009c5c */
stack space not deallocated on return
/*	Procedure: 0x00000054 - 0x00000A34
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000054()
{



    asm("std");
    bx = ds;
    (save)bx;
    bx = bx + "Y- " + dx;
    bp = cs;
    ah = dx & 0xf;
    cl = 4;
    si = dx << 4;
    dh = (dx >> 4) + 1;
    cx = si >> 1;
    si = si - 1 - 1;
    di = si;
L00000077:
    bp = bp - ax;
    bx = bx - ax;
    es = bp;
    ds = bx;
    asm("rep movsw");
    ax = 0x1000;
    ch = 0x80;
    if(dh = dh - 1) {
        goto L00000077;
    }
    asm("cld");
    ds = bp;
    (restore)es;
    (save)es;
    di = 0x100;
    eax = *L00000000;
    esi = 4;
    asm("xchg ax,bp");
    dx = 0x10;
    goto L000000d3;
L0000009c:
    eax = *esi;
    esi = esi + 4;
    asm("xchg ax,bp");
    dl = 0x10;
    goto L000000e3;
L000000a2:
    eax = *esi;
    esi = esi + 4;
    asm("xchg ax,bp");
    dl = 0x10;
    goto L000000ea;
L000000a8:
    eax = *esi;
    esi = esi + 4;
    asm("xchg ax,bp");
    dl = 0x10;
    goto L000000f6;
L000000ae:
    eax = *esi;
    esi = esi + 4;
    asm("xchg ax,bp");
    dl = 0x10;
    goto L00000101;
L000000b4:
    eax = *esi;
    esi = esi + 4;
    asm("xchg ax,bp");
    dl = 0x10;
    goto L0000010d;
L000000ba:
    eax = *esi;
    esi = esi + 4;
    asm("xchg ax,bp");
    dl = 0x10;
    goto L00000127;
L000000c0:
    eax = *esi;
    esi = esi + 4;
    asm("xchg ax,bp");
    dl = 0x10;
    goto L0000012e;
L000000c6:
    eax = *esi;
    esi = esi + 4;
    asm("xchg ax,bp");
    dl = 0x10;
    goto L00000135;
L000000cc:
    eax = *esi;
    asm("xchg ax,bp");
    dl = 0x10;
    if(!(esi = esi + 4)) {
        *di = *si;
        di = di + 1;
        si = si + 1;
L000000d3:
        bp = bp >> 1;
        if(dx = dx - 1) {
            goto L000000cc;
        }
        >= ? L000000d2 : ;
    }
    cx = 0;
    bx = 0;
    bp = bp >> 1;
    if(dx = dx - 1) {
        goto L0000009c;
    }
L000000e3:
    asm("rcl bx,1");
    bp = bp >> 1;
    if(dx = dx - 1) {
        goto L000000a2;
    }
L000000ea:
    asm("rcl bx,1");
    if(bl < 2) {
        bp = bp >> 1;
        if(dx = dx - 1) {
            goto L000000a8;
        }
L000000f6:
        asm("rcl bx,1");
        if(bx != 0) {
            bp = bp >> 1;
            if(dx = dx - 1) {
                goto L000000ae;
            }
L00000101:
            asm("rcl bx,1");
            if(bl >= 5) {
                bp = bp >> 1;
                if(dx = dx - 1) {
                    goto L000000b4;
                }
L0000010d:
                asm("rcl bx,1");
                if(bl > 0xc) {
                    goto L00000191;
                }
            }
        }
        bl = *%cs:bx+0x20a];
    }
    asm("xchg bx,cx");
L0000011b:
    bx = 0;
    if(cx != 2) {
        bp = bp >> 1;
        if(dx = dx - 1) {
            goto L000000ba;
        }
L00000127:
        < ? L0000014c : ;
        bp = bp >> 1;
        if(dx = dx - 1) {
            goto L000000c0;
        }
L0000012e:
        asm("rcl bx,1");
        bp = bp >> 1;
        if(dx = dx - 1) {
            goto L000000c6;
        }
L00000135:
        asm("rcl bx,1");
        bp = bp >> 1;
        if(!(dx = dx - 1)) {
            eax = *esi;
            esi = esi + 4;
            asm("xchg ax,bp");
            dl = 0x10;
        }
        asm("rcl bx,1");
        if(bl >= 2) {
            goto L0000015e;
        }
L00000147:
        bh = *%cs:bx+0x230];
    }
L0000014c:
    al = *esi;
    esi = esi + 1;
    bl = al;
    (save)si;
    si = di - bx;
    (save)ds;
    ds = es;
    asm("rep movsb");
    (restore)ds;
    (restore)si;
    goto L000000d3;
L0000015e:
    bp = bp >> 1;
    if(!(dx = dx - 1)) {
        eax = *esi;
        esi = esi + 4;
        asm("xchg ax,bp");
        dl = 0x10;
    }
    asm("rcl bx,1");
    if(bl < 8) {
        goto L00000147;
    }
    bp = bp >> 1;
    if(!(dx = dx - 1)) {
        eax = *esi;
        esi = esi + 4;
        asm("xchg ax,bp");
        dl = 0x10;
    }
    asm("rcl bx,1");
    if(bl < 0x17) {
        goto L00000147;
    }
    bp = bp >> 1;
    if(!(dx = dx - 1)) {
        eax = *esi;
        esi = esi + 4;
        asm("xchg ax,bp");
        dl = 0x10;
    }
    asm("rcl bx,1");
    bx = bx & 0xdf;
    asm("xchg bl,bh");
    goto L0000014c;
L00000191:
    bl = bl & 3;
    bp = bp >> 1;
    if(!(dx = dx - 1)) {
        eax = *esi;
        esi = esi + 4;
        asm("xchg ax,bp");
        dl = 0x10;
    }
    asm("rcl bx,1");
    if(bl >= 5) {
        bp = bp >> 1;
        if(!(dx = dx - 1)) {
            eax = *esi;
            esi = esi + 4;
            asm("xchg ax,bp");
            dl = 0x10;
        }
        asm("rcl bx,1");
        if(bl > 0xc) {
            goto L000001f9;
        }
    }
    cl = *%cs:bx+0x215];
    if(cl != 0x19) {
        goto L0000011b;
    }
    al = *esi;
    esi = esi + 1;
    cl = cl + al;
    asm("adc ch,0x0");
    if(al < 0xfe) {
        goto L0000011b;
    }
    (save)ax;
    bx = di + 57344;
    di = (di & 0xf) + 0x2000;
    cl = 4;
    bx = bx >> 4;
    ax = es + bx;
    es = ax;
    ax = ds;
    bx = si;
    si = si & 0xf;
    bx = bx >> 4;
    ax = ax + bx;
    ds = ax;
    (restore)ax;
    if(al != 0xff) {
        goto L000000d3;
L000001f9:
        bl = bl & 3;
        bp = bp >> 1;
        if(!(dx = dx - 1)) {
            eax = *esi;
            esi = esi + 4;
            asm("xchg ax,bp");
            dl = 0x10;
        }
        asm("rcl bx,1");
        if(bl >= 5) {
            bp = bp >> 1;
            if(!(dx = dx - 1)) {
                eax = *esi;
                esi = esi + 4;
                asm("xchg ax,bp");
                dl = 0x10;
            }
            asm("rcl bx,1");
        }
        cl = *%cs:bx+0x220];
        goto L0000011b;
    }
    (restore)bx;
    bp = bx;
    bx = bx + 0x10;
L00000225:
    eax = *esi & 0xff;
    asm("xchg ax,cx");
    if(!(esi = esi + 1)) {
        eax = *esi;
        esi = esi + 4;
        ax = ax + bx;
        es = ax;
        eax = *esi;
        esi = esi + 4;
        asm("xchg ax,di");
        *%es:di] = *%es:di] + bx;
        asm("loop 0x230");
        goto L00000225;
    }
    (restore)cx;
    eax = *esi;
    esi = esi + 4;
    ax = ax + bx;
    asm("xchg ax,dx");
    eax = *esi;
    esi = esi + 4;
    asm("cli");
    ss = dx;
    sp = ax;
    asm("sti");
    eax = *esi;
    esi = esi + 4;
    bx = bx + ax;
L00000248:
    (save)bx;
    eax = *esi;
    esi = esi + 4;
    (save)ax;
    es = bp;
    ds = bp;
    ax = cx;
    bx = 0;
    cx = 0;
    dx = 0;
    bp = 0;
    si = 0;
    di = 0;
    asm("retf");
    ax = ax + 0x706;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + cl;
    *(bp + si) = *(bp + si) | cx;
    cx = cx | *si;
    asm("sbb [bx+si],ax");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ax = ax | 0xf0e;
    asm("adc [bx+di],dl");
    asm("adc al,[bx+si]");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("adc dx,[si]");
    asm("adc ax,0x1716");
    asm("sbb [bx+di],al");
    al = al + *(bx + si);
    *(bp + di) = *(bp + di) + al;
    al = al + 5;
    (save)es;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    (restore)es;
    *(bx + di) = *(bx + di) | cl;
    cl = cl | *(bp + di);
    *(bx + si) = *(bx + si) + (al | 0xd);
    *(bx + si) = *(bx + si) + (al | 0xd);
    bh :: *(bp + di);
    ax = (al | 0xd) + bh + dx;
L000002a6:
    sp = sp >> 0x16;
    asm("cld");
    cx = cx - *L0000FCE9;
    asm("ror byte [0x55fc],1");
    asm("cld");
    goto L000002a6;
    (save)-4;
    if(ax = ax + 1) {
        goto L00000248;
    }
    ah = ah >> 1;
    asm("xchg ax,sp");
    asm("adc [bp+di],di");
    asm("cld");
    ax & 0x4752;
    asm("cld");
    si = 61180;
    bl = bl - dl;
    asm("cld");
    asm("sbb ax,0xe8b5");
    asm("cld");
    asm("std");
    *L0000FCEB = ax;
    asm("adc ch,al");
    di :: sp;
    asm("daa");
    asm("xchg cl,[bp+0x3cfc]");
    asm("cld");
    cl = 0x63;
    (save)0x63;
L000002df:
    asm("cld");
    goto L00003bfc;
    asm("xchg ax,si");
    asm("jpo 0x2e4");
    asm("Unknown opcode 0x8e");
    ch = 0xfc;
    *di = *si;
    di = di + 4;
    asm("arpl bx,bp");
    asm("cld");
    dx = 0x3bd8;
L000002f3:
    asm("cld");
    asm("iret");
    asm("Unknown opcode 0x8e");
    asm("Unknown opcode 0x8e");
    asm("cld");
L000002f8:
    asm("in al,0xfc");
    bl = 0xe3;
    asm("stc");
    asm("cld");
    asm("out dx,al");
    if(!(si = si + 4)) {
        asm("cld");
        bl :: dh;
        di = di & sp;
        *(bp + 64687) :: cl;
L00000308:
        if(bp = bp - 1) {
            goto L000002f8;
        }
        asm("cld");
        goto L00000308;
    }
    di :: sp;
    asm("Unknown opcode 0xff");
    *(bp + 65532) = *(bp + 65532) - 1;
    asm("cld");
    di = 65507;
    asm("cld");
    asm("out dx,ax");
    asm("clc");
    asm("Unknown opcode 0xff");
    asm("cld");
    di :: si;
    asm("Unknown opcode 0xff");
    asm("cld");
    *(bp + 64703) = *(bp + 64703) - 1;
    goto ( *bx);
    asm("out dx,ax");
    asm("cld");
    asm("Unknown opcode 0xff");
    asm("clc");
    di :: sp;
    ax = *cx();
    di = dx;
    *si = *si + bp;
    asm("das");
    *bx = dx;
    sp = sp ^ *(di + 0x76);
    al = al - 0xe;
    dh = dh + ch;
    ax :: 0x1f4d;
    ax = ax - 0x100f;
    asm("rol byte [bx+di],1");
    asm("adc [di],dl");
    ax = ax ^ 0x393e;
    asm("adc [di],di");
    ax = ax + 1;
    asm("daa");
    (restore)dx;
    *L00001E15 = bl;
    asm("%e jpe 0x394");
    if(*di = *di - bh) {
        goto L000002df;
    }
    si = si + 1;
    if(di = di & *(bp + 8)) {
        goto L000002f3;
    }
    sp = sp & *(bp + si);
    asm("xchg ax,cx");
    (save)ds;
    si = si - 1;
    *(bx + di) = *(bx + di) + al;
    asm("popf");
    bh :: *(bp + di);
    ax = ax ^ 0x1c91;
    (save)ds;
    *(bp + si - 0x63) :: bl;
    *L00000130 = ax;
    dx = dx + 1;
    bp = bp & *L00001321;
    asm("sbb [bp+di],cl");
    asm("fdivr qword [di]");
    dh = dh ^ *bx;
    *L0000010D = *L0000010D ^ bx;
    asm("adc ax,dx");
    *(bx + di) = *(bx + di) | dx;
    asm("adc ax,0x2322");
    (save)50190;
    ax :: 0x1140;
L00000393:
    asm("%s call 0x15a7");
    al = al + *(bx + di);
    asm("adc [bx+si],dl");
    *(bp + 4) = *(bp + 4) ^ si;
    (save)cs;
    al = al ^ 0x4b;
    if(!(di = di - 1)) {
        asm("sbb al,0x15");
        *(bx + si + "ry$ Y- ") = *(bx + si + "ry$ Y- ") + si;
        (restore)es;
        asm("sbb [si],ah");
        asm("aas");
        (save)bp;
        if(*(bx + 0xd) == al) {
            goto L000003d5;
        }
        >= ? 0x3e7 : ;
        di = di + 1;
        al = al + "h memory$ Y- ";
        asm("%s sbb al,0x10");
        *L0000019F = al;
        asm("Unknown opcode 0x0f");
    }
    if(dh = dh & *(bp + di)) {
        goto L00000393;
    }
    (restore)ds;
    asm("daa");
    ax = ax - 48139;
    asm("adc cl,[bp+di]");
    dx = dx | *di;
L000003cb:
    asm("%s jg 0x3d5");
    dx = dx + 1;
    cx = cx - *(bx + di + "t enough memory$ Y- ");
    asm("adc bl,[0x9d72]");
L000003d5:
    (fsave)(frestore) + *(bx + di + 6);
    es = *(bp + di + 0x59);
    asm("sbb al,0x27");
    asm("rol byte [bx+0x2a],cl");
    al = al + 0x54;
    asm("adc bp,[bx+si]");
    cx = cx + 1;
    asm("xchg cx,[bx+si+0xba0c]");
    al = al & *(bx + di);
    asm("xchg bp,[di]");
    asm("aas");
    cx = cx + 1;
    goto L00003838;
    di = di + 1;
    si = si | *si;
    ax = ax + 1 | 0x41c;
    asm("sbb ax,0x1502");
    asm("adc ax,0x6a3f");
    bx = bx - 1;
    si = si & *(bx + si + 0x78);
    asm("aas");
    cx = (ch & ah) - 1;
    asm("popf");
    ax = ax & 0x2503;
L0000040c:
    asm("adc [%es:bx],cx");
    asm("adc bl,dl");
    asm("aaa");
    *(bp + si) = *(bp + si) + sp;
    bx = bx + 1;
    (restore)ax;
    bh :: *bx;
    ax = ax | 62135;
    di = 0x3fa;
    si = *(bp + si);
    asm("aas");
    asm("adc ch,al");
L00000424:
    asm("cwd");
    dx = (dx | *(bp + si)) - 1;
    ax = (al & 0x41) + 0x278e;
    (save)ds;
    asm("xchg bx,[bp+si+0x5eb]");
    *bx = *bx + bx;
    al = al & 0xc1 | al & 0xc1;
    asm("outsb");
    goto L00002304;
    if(ch = ch & *(di + 0x3e)) {
        goto L0000040c;
    }
    dh = dh | *si;
    asm("xchg ax,di");
    if(al == " Y- ") {
        goto L000003cb;
    }
    *L0000475A = *L0000475A + bx;
    if(!( *(bx + si + 0x3f1f) = *(bx + si + 0x3f1f) + 0x43)) {
        *(bx + di + 0x4c) = *(bx + di + 0x4c) << 1;
        ax = ax | 0x22d;
        asm("adc al,0xf8");
        if(cx = cx - 1) {
            goto L000004a0;
        }
        asm("aas");
        asm("fdivr dword [bp+0x9c22]");
        > ? L00000486 : ;
        asm("adc [bx+si],dh");
        bp = bp + 1;
        ax = ax ^ di;
        dx = dx | *di;
        bp = bp - 1;
        (fsave) *di;
        dx = dx + 1;
        (save)dx;
        ah :: *%ds:bx+di+0xbdc];
        *(bx + si + 38985) & ax;
        if(cx = cx + *(bp + 0x1c2f)) {
            goto L00000424;
        }
        (save)cs;
        asm("out 0xa,al");
        if(*(bp + di - 0x4e) = *(bp + di - 0x4e) + "h memory$ Y- ") {
            goto L000004be;
        }
        >= ? 0x4c4 : ;
        ax = ax | cx;
        *(di + 0x2124) = *(di + 0x2124) + bx;
    }
    *si = *si | dh;
    asm("Unknown opcode 0x8f");
    asm("sbb al,0x48");
    asm("cmovo ax,[bx+di]");
    asm("adc dl,bl");
    dx = dx + 1;
    asm("outsw");
L000004a0:
    *(bx + di) = *(bx + di) + bx;
    ax = ax + 0x143 + 1;
    asm("%d inc cx");
    goto L000072e7;
    al :: *(bx + di);
    ax = (ax | 42044) & 0x1028;
    *(bp + 0x387d) = *(bp + 0x387d) + sp;
    asm("adc sp,sp");
    si = si & *(bx + di);
    asm("loope 0x4cd");
    sp = 60161;
L000004be:
    bx = 0x2405;
    dx = dx + 1;
    ax = ax & di;
    asm("rcr word [bp+si],cl");
    al = al & 0x2a;
    asm("aaa");
    *(bp + si) = 0x8d;
    *di = cx;
L000004d1:
    asm("Unknown opcode 0xc5");
    asm("iret");
    asm("sbb [0xe9d0],al");
    asm("adc al,0x1");
    asm("cwd");
    *bx = *bx ^ al;
    asm("les cx,[di+0x953]");
L000004de:
    (restore)sp;
    if(!(cx = cx - 1)) {
        si = si + 1;
        asm("daa");
        sp = sp + 1;
        asm("cmpsw");
        ax = *(si + 6);
        si = si ^ *L00004489;
    }
    asm("sbb al,0x75");
    cl = cl + *(bx + di);
    *di = *di + dx;
    *(bx + si) & di;
    asm("daa");
    *(bp + si + 0x7e) = *(bp + si + 0x7e) + dl;
    bh = bh & *(bp + si);
    dl = dl + *(bp + di + 0x1739);
    asm("rep sub ax,0xfa55");
    ax = ax | 0x1501;
    (save)bp;
    *di = *di << " Y- ";
    asm("adc ax,0x807c");
    asm("Unknown opcode 0x3e");
    asm("Unknown opcode 0xdf");
    asm("les bx,[bx+di]");
    (save)cx;
    if(di = di - 1) {
        goto L000004d1;
    }
    di = di | cx;
    goto L0000052c;
    asm("repne add cx,[bx]");
    dx = *(bx + di + 0x2cf4);
    cx & si;
    goto L0000087a;
    asm("cmovng si,sp");
    *%fs:bp+0x4920] = *%fs:bp+0x4920] + cx;
L0000052c:
    dx = dx | *(bp + si);
    (save)ax;
    *(bp + si + 0x4112) = *(bp + si + 0x4112) | 0x72;
    si = si - 1;
    cx = cx + 1;
    (save)es;
    asm("les si,[si]");
    dl = dl - *(bp + si + 0xb5);
    si = si - 1;
    asm("xchg sp,[bx+0x1111]");
    if(!(ax = ax + 0x3f23)) {
        cx = cx - 1;
        if(!(bp & si)) {
        }
        >= ? L00000552 : ;
        dx = dx + 1;
        (save)-96;
        if(bx = bx + 1) {
            goto L000004de;
        }
        asm("adc ax,0x3f3f");
        asm("%c push ss");
        asm("%f or cl,cl");
        ax :: *(bp + 65444);
        *di = *di | 0x6f;
        *di = *di & ah;
        sp = sp + 1;
        asm("umov [bx],cl");
        cx = cx + 1;
        asm("adc [di+0x1126],di");
        *si = cl;
    }
    goto L000086d0;
    bp = di;
    (restore)si;
    ax = L000047A7();
    asm("jpo 0x5e5");
    asm("adc [di+0xb4d],al");
    asm("loope 0x5ab");
    al = al & 0x27;
    *(bx + si) = *(bx + si) + ax;
    di = di + 0xf;
    ch = ch - *(bx + si + 0x1004);
    asm("%d inc ax");
    di = di + 1;
    ax = ax + 1;
    es = *L00002644;
    asm("sbb bl,[si]");
    asm("adc dl,[bx+si]");
    *si & sp;
    asm("hlt");
    asm("Unknown opcode 0xc6");
    asm("rol byte [bx+di],1");
    dx = dx + 1;
    ax = ax ^ 0x904;
    asm("bound ax,[di+0x1c83]");
    asm("int1");
    asm("adc ax,0x83f3");
    (restore)es;
    asm("aas");
    ah :: *(bx + si + 0x4501);
    asm("adc ax,0x6f40");
    (restore)ss;
    if(!(dx = dx + 1)) {
        asm("sti");
        asm("xchg ax,di");
        asm("das");
        (save)sp;
        asm("aam 0x9");
        (restore)ds;
        asm("std");
        bp = bp | *(bx + 0x517);
        asm("lahf");
        (save)bp;
        al = 0x5d;
        di = di - 1;
    }
    ax = ax - 32066;
    bx = bx ^ *L00004491;
    asm("bound si,[bp+di]");
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("popf");
    asm("fst dword [bp+di]");
    *%gs:bp+si] = *%gs:bp+si] - 1;
    di = si;
    *%fs:0x8c89] = al;
    asm("adc ah,[bp+si+0x3a]");
    dx = dx + *(bx + di);
    (save)sp;
    cx = cx - 1;
    ax = ax + 0x3597;
    dx = dx | *%cs:bp+si];
    asm("sbb di,-0x7f");
    (restore)es;
    *si = *si & dx;
    ax = ax + dx;
    cl = cl ^ *di;
    (restore)ax;
    asm("aas");
    *(bx + di + 59711) = *(bx + di + 59711) + 0x70;
    asm("adc ax,0x353e");
    if(!(al = (ax | 50692) + 0x6f)) {
        asm("%d add di,di");
        *L0000317C = al;
        ax :: 50128;
        *(bp + di) = *(bp + di) | 0x1529;
        al = (al | 0x85) - 0xfd;
        asm("Unknown opcode 0x0f");
        *(bx + si + 34014) = *(bx + si + 34014) - di;
L0000061d:
        bx = 25890;
        asm("in al,0x52");
        asm("sbb al,0x21");
        *di = al;
        di = di + 1;
    }
    asm("Unknown opcode 0xff");
    goto L0000065f;
    ax = sp;
    fs = *(bp + si);
    asm("adc dh,al");
    cx = cx + 1;
    asm("scasb");
    bp = bp + 1;
    (restore)cx;
    asm("insw");
    (save)bx;
    return(al + *(bp + di));
    dx = dx + 1;
    asm("cbw");
    asm("cwd");
    (save)cx;
    asm("adc [si+0x10],bh");
    asm("adc ah,[bx+di]");
    asm("sbb ax,0x12e7");
    asm("aas");
    *L0000376A = *L0000376A + ax;
    bx = bx + 1;
    cx = cx - 1;
    asm("adc [di],cx");
    asm("adc [bx+si-0x1d],dx");
    dx = dx + 1;
    ax = ax | 0x181;
    asm("sbb ax,0x3f3f");
    (save)ds;
    asm("adc dx,[bx+si]");
    asm("in al,0x40");
L0000065f:
    if(bp = bp - 1) {
        goto L0000061d;
    }
    < ? L0000065d : ;
    bx = bx - 1;
    ax = ax + *(bx + di);
    asm("adc bp,[bx+di]");
    si = si - *(bx + si);
    asm("adc [si],si");
    di = 0;
    asm("sahf");
    dx = 0x1241;
    asm("Unknown opcode 0x0f");
    *(bp + di + "nough memory$ Y- ") = *(bp + di + "nough memory$ Y- ") & cl;
    asm("sbb [bx+0x62],sp");
    asm("outsw");
    asm("arpl bx,di");
    asm("adc [bp+di],cl");
    *bx = *bx & sp;
    si = si - 1;
    ax = *(bx + di)(ds);
    *L00000A8C = *L00000A8C + bp;
    *(bp + di) = ss;
    asm("adc dl,[si+0x24]");
    asm("aas");
    asm("adc [si+0x49d5],cl");
    if(!( *(bx + 49666) = *(bx + 49666) + cx)) {
        (save)ax;
        al = (ax ^ 0x10fc) & 0x4c;
        (fsave)(frestore) + *(bx + di + 0x11d0);
L000006a2:
        *(di + 3) = *(di + 3) + si;
        asm("lds si,[bp+si+0x3f]");
        ax = ax | 0x585 | 53252;
        *(bx + si + 0x3f) = *(bx + si + 0x3f) + ax;
        *(bp + di) = *(bp + di) & dx;
        if(ax = ax + 1 + 0x4233) {
            goto L000006a2;
        }
        asm("xchg ax,di");
        (save)-45;
        if(dx = dx + 1) {
            goto L000006ec;
        }
        asm("adc al,al");
        (save)sp;
        (save)di;
        asm("fcomp dword [bp+si+0x1f]");
        dl = 0x54;
    }
    dx = dx - 1;
    asm("adc [bp+0xbd33],ch");
    (save)es;
    asm("adc al,[di]");
L000006d1:
    dx = dx + cx;
    if(bx = bx - 1) {
        goto L000006d1;
    }
    asm("adc al,[bx+di]");
    asm("sbb al,0x3a");
    asm("adc dx,dx");
    asm("adc al,0x42");
    (restore)sp;
    *di = *si;
    di = di + 4;
    si = si + 4;
    dx = dx - *(bx + si);
    asm("les cx,[bp+0x7941]");
    cx = cx + *(si + 0x38a);
    asm("adc dl,[%ss:bp+si]");
L000006ec:
    *(bx + si + "!Not enough memory$ Y- ") = *(bx + si + "!Not enough memory$ Y- ") - dl;
    asm("adc al,bl");
    *L000011A7 = *L000011A7 | 0x4d;
    *(bp + 32525) = *(bp + 32525) + sp;
L000006fc:
    *(bx + si + "gh memory$ Y- ") = *(bx + si + "gh memory$ Y- ") + cx;
    bx = bx + 1;
    asm("adc ax,0xc5");
    asm("sbb ax,0x1e41");
    asm("aas");
    sp = sp - 1;
    asm("adc dx,[bx+si]");
    *L00003440 = al;
L0000070b:
    si = 33297;
    L00001A92();
    asm("adc bp,[bx]");
    (save)di;
    bp = bp - 1;
    L0000345E();
    (restore)ss;
    dx :: 0;
    (save)bp;
    if(!(cl = cl & *(bp + di))) {
        != ? 0x6bd : ;
        asm("Unknown opcode 0xc5");
        goto L000001de;
        ch = 0x94;
        *si = *si ^ 0x10;
        *(bp + "Not enough memory$ Y- ") :: " memory$ Y- ";
        if(bp = bp - *(bp + si - 0x73)) {
            goto L000006fc;
        }
        bp = bp + 1;
        goto L0000070b;
        ch :: *(bx + si + 0x3501);
        bh = bh + *(bx + "ough memory$ Y- ");
    }
    al = al - 0xbb;
    asm("adc ax,0x1f9e");
    asm("cmpsb");
    al = al & 0x3a;
    bp = bp - 1;
    asm("adc bl,[bx+di-0x58]");
    (restore)es;
    *(bx + 0x11) = *(bx + 0x11) + bh;
    asm("adc ax,0x8151");
    asm("adc ax,0x3fc6");
    al & 0x3a;
    si = bx + "enough memory$ Y- ";
    asm("arpl [bp+si],dx");
    (restore)dx;
    if(!(ax = ax + 1)) {
        ax = L00001A67();
        asm("adc dx,[bp+di+0xc4f]");
        al = al & dl;
        *si = bl;
        asm("adc [bp+si+0x2614],bh");
        asm("adc ax,[si]");
        asm("adc ax,0x20ad");
        al = *esi;
        esi = esi + 1;
        (save)sp;
        asm("jpe 0x7b4");
        asm("adc [bx+0x4b],cl");
        dl = 0xfe;
        asm("adc [bx+si+0x40],dl");
        ax = L000055bf();
        sp = bp + di;
        al = *esi;
        esi = esi + 1;
        asm("adc [bx+si+0x72],cx");
        asm("sbb ax,0x107b");
        di = di - 1;
        dl = dl + ah;
        if(!(ax = ax + 1)) {
            asm("fsubr dword [bp+si+0x373a]");
            asm("adc [bx+0xfd70],al");
            < ? L000007b7 : ;
            >= ? 0x74a : ;
            ax = ax | *(bp + di + "$ Y- ");
            goto L00004364;
        }
        al = *%ds:0x41a3];
        (save)ds;
        asm("aas");
        asm("adc bp,[bx+di]");
        ch = ch & cl;
        *L0000010D = *L0000010D - bh;
        asm("std");
        asm("aas");
        asm("adc si,[bx+si-0x5c]");
        (restore)si;
        ax = ax & 0x1025;
        asm("rol word [si-0x13],1");
        *L00000A7E = ax;
        bp = bp - 1;
    }
    (restore)ds;
    *(si + 0x13) :: dh;
    asm("rcr word [bp+si],cl");
    *di = *di | ch;
    asm("jpo 0x80b");
L000007d3:
    asm("a32 call 0x8d491a11");
    asm("jpo 0x761");
    (save)bp;
    asm("adc [0xaba],ah");
    (save) *(si + 0x64);
    ax = ax + 1 - 0x3202;
    asm("xchg ax,bp");
    asm("adc dh,[bp+si-0x50]");
    asm("xchg ax,dx");
    asm("cli");
    si = si ^ sp;
    asm("xchg dx,[di-0x55]");
    asm("xchg ax,dx");
    dx = 0x1132;
    ax = *L0000404D;
    *(bx + si - 0x3e) & bl;
    asm("adc ax,0xb8c6");
    (save)cs;
    bx = bx + 1;
    ax = ax + 1;
    asm("adc bh,al");
    dx = dx + 1;
    ax = ax + 1 + 1;
    cx = cx + 1;
    dh = dh + ah;
    cx = cx & dx;
    (restore)bx;
    (restore)dx;
    al = *L00000D41;
    esi = 0xd42;
L00000814:
    (save)dx;
    asm("xchg ax,cx");
    (restore)si;
    asm("xchg ax,di");
    ax = ax & 0x209f;
    al & 0x11;
    di = 29202;
    bp = 0xa5c;
    asm("adc ax,0x8ba1");
    ax = ax + 1;
    *(bx + 0xb0f) = *(bx + 0xb0f) >> cl;
    (save)fs;
L0000082d:
    if(ax = ax & 28443) {
        goto L000007d3;
    }
    *(bx + di + 36382) & 0x5e;
    *(di + 0x1b13) = *(di + 0x1b13) + di;
    asm("repne push word 0x9a04");
    *(bp + di) = *(bp + di) >> 1;
    asm("adc ah,[bp+si]");
    asm("Unknown opcode 0x8f");
    al = al - 4;
    dx = 59976;
    ax = ax + 1;
    (restore)ax;
    if(sp = sp + 1) {
        goto L00000814;
    }
    ax = ax + 0x153a;
    cx = cx + 1;
    sp = sp - 1;
    asm("Unknown opcode 0x82");
    asm("adc ax,[bx+di]");
    ax = ax + 1;
    asm("Unknown opcode 0x82");
    dl = dl | al;
    asm("aas");
    asm("umov bp,[bx+di+0xf]");
    *di = al;
    di = di + 1;
    asm("adc byte [bp+si],0x56");
    ax = ax - 1;
    asm("cld");
    asm("adc [bx+di],edi");
    asm("outsw");
    al = *L00001040;
    asm("adc al,[bx+di]");
    bp = 37184;
    asm("cmc");
    asm("sbb [si+0xfdeb],bp");
    sp = 51713;
L0000087a:
    *L000037A5 = al;
    asm("std");
    asm("adc [bp+0x48],ch");
    si :: *(di + " memory$ Y- ");
    (save)cx;
    al = al & *(bx + di);
    asm("rcl byte [di+0x11],0x6d");
    asm("adc cl,[bp+si]");
    *di = eax;
    di = di + 4;
    asm("fnstsw [bp+si]");
    goto L0000082d;
    cx = cx + 1;
    asm("adc dh,cl");
    asm("adc ax,0x2a69");
    asm("sbb al,0xe8");
    *%es:bx+di+0x1542] = *%es:bx+di+0x1542] & al;
    asm("adc ax,0x1140");
    bp = bp + 1;
    asm("adc ax,0x58e9");
    asm("Unknown opcode 0xc6");
    asm("aas");
    (save)0x12;
    al = al ^ 0x34;
    asm("adc [0xd2fc],bh");
    asm("sidt [bx]");
    asm("%d dec bx");
    dx = dx + 1;
    *(bx + si) = *(bx + si) + cl;
    ax = ax + 57609;
    (fsave)(frestore) / *(bp + si + 0x2a26);
    *(bp + si + 64086) = *(bp + si + 64086) ^ bx;
    asm("cmc");
    asm("popa");
    asm("cld");
    (save)ds;
    bp = bp + 1;
    *(bx + si) = *(bx + si) - ax;
    asm("Unknown opcode 0x0f");
    asm("sti");
    asm("adc ax,0xb5db");
    al = "gh memory$ Y- ";
    asm("%s dec ax");
    bx & dx;
    asm("scasb");
    *(bx + di - 0x1f) = *(bx + di - 0x1f) + bx;
    (save)0;
    asm("%d push ds");
    cx = 31048;
    asm("sbb dh,dh");
    bx = bx + 1;
    ax = ax | *(bp + di + 0x7d);
    bx = bx - 1;
    asm("outsb");
    dh = dh + *(si + "ory$ Y- ");
    asm("%d aas");
    asm("adc ax,[bx+di+0x51]");
    dx = dx + 1;
    sp = sp ^ *(bx + si + 0x4185);
    asm("aas");
    asm("adc ax,0x327");
    *di = al;
    di = di + 1;
    asm("adc [bx+si+0x25],ax");
    si = (si | dx) + 1;
    asm("%d pop cx");
    asm("Unknown opcode 0x8f");
    ax = ax - 1;
    cl = cl - *(bp + di + 0x10);
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("aam 0xda");
    asm("Unknown opcode 0x82");
    asm("outsb");
    asm("sbb al,0x1f");
    (restore)bp;
    asm("lds si,[di+0xbd72]");
    sp = 0x10c9;
    cx = cx + 1;
    asm("cmovo si,[bp+si-0xa]");
    *di = eax;
    di = di + 4;
    (save)sp;
    asm("rol word [di],1");
    return;
    ax :: 0x3511;
    asm("rol word [bx+di-0x76],1");
    asm("adc ax,0x6451");
    *(bp + si) = *(bp + si) + cl;
    dx = dx + 1;
    bl = 0x5e;
    asm("repne adc al,[si-0x57]");
    *(bp + si) = !( *(bp + si));
    bx = bx | *si;
    asm("das");
    asm("scasb");
    dx = dx + 1;
    di = di - 1;
    asm("aaa");
    ax = ax - 1;
    asm("aas");
    asm("adc [bp+si-0x3f],di");
    (save)es;
    asm("sbb al,0x13");
    ax = L00004A8C();
    cl = cl ^ *(bx + si + 0x122d);
    *(bx + si - 6) = *(bx + si - 6) << 0x3f;
    asm("adc cx,[bx]");
    (restore)es;
    cx = cx ^ dx;
    *di = eax;
    di = di + 4;
    asm("insw");
    asm("adc [di+0x45],cl");
    (save)bx;
    asm("cmpsb");
    bp = bp + 1;
    asm("fist dword [bp+si]");
    (save)ds;
    asm("rcl word [bp+si],1");
    (restore)dx;
    asm("xchg ax,bx");
    asm("adc cl,[bp+di]");
    *L000044DE = ax;
    dx = 64056;
    (save)ds;
    cx = cx + 1;
    asm("rcr byte [bx],cl");
    asm("xchg ax,dx");
    *di = *si;
    di = di + 4;
    si = si + 4;
    (restore)es;
    *si = *si << 1;
    si = si | dx;
    es = *(bx + di + 9);
    *(si + 53894) = *(si + 53894) + bp;
    asm("outsw");
    ax :: 45834;
    ah = 0x56;
    asm("Unknown opcode 0xd3");
    asm("repne dec sp");
    asm("%d inc ax");
    si = si | *(bp + 0x11);
    asm("rcr word [bp+si+0xc980],0x4c");
    dx = dx + *(bx + di);
    ax = al + 0x15 & 34164;
    ax = 0x1342;
    cx = cx + 1;
    asm("Unknown opcode 0x36");
    asm("Unknown opcode 0xc5");
    sp = sp >> 1;
    asm("adc [si+0x4],dx");
    asm("umov [bx],cx");
    (save)0x1eeb;
    goto L00009c5c;
    al = *esi;
    esi = esi + 1;
    *(bx + 35344) & sp;
    asm("xchg ax,sp");
    asm("in al,0x45");
    asm("scasb");
    ax = bx + di;
    asm("sahf");
    bp = 25109;
    asm("cli");
    ax :: 0x4240;
    ax = ax + 1;
    asm("movd mm7,[bx+0xa806]");
    asm("jpe 0x9e5");
    asm("adc dl,[bp+si]");
    asm("Unknown opcode 0xd2");
    if(!(cx = cx + 1)) {
        asm("adc ax,0x3a");
        (save)ax;
        >= ? L000009e3 : ;
        asm("adc ax,0xb910");
    }
    (restore)bp;
    asm("xchg dl,[bp+si]");
    >= ? L000009e3 : ;
    asm("cli");
    (save)bx;
L000009db:
    asm("adc [bp+si-0x3f],bh");
    (restore)fs;
    asm("insb");
    asm("adc byte [bx+di],0x94");
    asm("aam 0x42");
    asm("adc ax,0x6485");
    goto L000089f9;
    asm("adc [%cs:bx+si+0x45],ax");
    if(ax = ax + 1) {
        goto L000009db;
    }
    di = 34625;
    cx = cx - 1;
    (fsave)(frestore) - *si;
    sp = sp - 1;
    asm("les dx,[0x9963]");
    (save)ax;
    asm("o32 movsb");
    (save)dx;
    asm("adc ax,0xe3b3");
    ax = *L0000FD64;
    bh = 0x89;
    if(ax = ax & 0x12a5) {
        goto L00000a78;
    }
    asm("adc al,[bp+0x9ba6]");
    asm("std");
    dx = dx - 1;
    ax = ax + bp;
L00000a17:
    sp = si + "y$ Y- ";
    asm("umov bl,[di]");
    asm("wait");
    asm("Unknown opcode 0x82");
    cx = cx + *(di + 0x69);
    si = si + 1;
    asm("retf");
    dh = 0xdb;
    if(al >= " Y- ") {
        goto L00000a17;
    }
    bx = bx + 1;
    asm("sbb al,0x24");
    asm("in al,dx");
    *(bx + si) = *(bx + si) >> "mory$ Y- ";
    return;
    asm("cbw");
}

/* DEST BLOCK NOT FOUND: 00000c33 -> 0000d338 */
/*	Procedure: 0x00000A35 - 0x00000DCB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000A35()
{



    bx = ax - 1;
    (restore)ax;
    cl :: *(bp + di);
    (save)ax;
    asm("psubd mm7,[di]");
    asm("aas");
    asm("adc sp,cx");
    asm("aam 0x41");
    asm("adc ch,[%ds:bp+si+0x7ecc]");
    asm("adc [si+0x789],dh");
    asm("adc cl,ch");
    if(!(ax = *L000011CD + 1)) {
        bp = bp - 1;
        (restore)dx;
        al = *L000064B7;
        asm("cmpxchg486 [bx+0x7639],dl");
        asm("rcr byte [bx],1");
        (save)bx;
        *di = *di >> 1;
        bp = bp & *(bx + di);
        asm("out 0x3a,al");
        dx = si + 0x7f;
        ax = ax ^ 0x24;
        si = 0x163c;
L00000a71:
        asm("cwd");
        dx = 0x311b;
        asm("in ax,dx");
        asm("Unknown opcode 0x82");
        al = al | 0x45;
        ax = ax - 1;
        asm("rol word [bx+si+0xd80d],0xc6");
        *(bp + di + 0x1a90) = *(bp + di + 0x1a90) - al;
        asm("rcr word [bp+di-0x28],0x89");
        si :: *L000011CE;
        asm("xchg ax,[bx+di]");
        *(bx + 0x3e) & di;
        asm("cmpsb");
        asm("std");
        *(bx + di) = *(bx + di) + 1;
        asm("fcom dword [si+0x1e]");
        (save)bp;
        ah = 0x92;
        (restore)sp;
    }
    di = di - 1;
    (restore)dx;
    asm("cmpsb");
    asm("Unknown opcode 0x82");
    dl = dl - *di;
    asm("int 0xfb");
    if(*(bp + di) = *(bp + di) - 0xf) {
        goto L00000a71;
    }
    al & 0x6a;
    asm("das");
    si = si - 1 - 1;
    asm("ficom dword [bx+di]");
    cx = cx | *L00009F09;
    *(bp + di + "nough memory$ Y- ") = *(bp + di + "nough memory$ Y- ") + 0x3e0b;
    asm("rol byte [bx+di+0x11],1");
    0xbd = *(bx + di) * ax;
    *(bp + si) :: dl;
    asm("Unknown opcode 0xd9");
    cx = *(bp + di);
    cx = *(bp + di - 0x56);
    dh = dh ^ *(di + 59525);
    asm("adc ax,[si+0x51b6]");
    *di = dx;
    bl = bl >> cl;
    (restore)es;
    (save)bp;
    if(!(dx = (dh & *(bp + di - 0x23)) + 1)) {
        asm("adc [di],si");
        al & 0x60;
        asm("aas");
        asm("adc [0xa9fa],di");
        *(bx + si + 0x1e27) = *(bx + si + 0x1e27) + cx;
        asm("popa");
        asm("adc ax,0x6b94");
        bp = bp - *(bx + 41402);
    }
    asm("clc");
    asm("Unknown opcode 0x8f");
    (save)cx;
    asm("das");
    ax = ax - 1;
    asm("das");
    asm("aam 0x80");
    *(bx + 0x3eab) = *(bx + 0x3eab) ^ bx;
    asm("adc byte [0x7c5f],0xe8");
    (fsave)(frestore) - *(bx + si) + *(bx + di + 0x75);
    *(bx + di + 60996) = *(bx + di + 60996) + bp;
    asm("adc [bp+si],dl");
    asm("out 0x15,al");
    asm("outsw");
    asm("adc bh,[si]");
    62972 = *(bx + di) * cx;
    *(bx + di + 28223) = *(bx + di + 28223) - bl;
    bx = bx - 1 + 1;
    (restore)ds;
    43805 = *((si | *(si + 43279)) - 0x3e) * cx;
    asm("enter 0x4411,0x6e");
L00000b28:
    *fs = *fs + 0xfa;
    asm("aas");
    ax = ax + 1;
    asm("adc ax,0x1aa8");
    dx = dx & *(bx + si);
    54935 = *(bp + 0x4c5f) * si;
    al = al + 0x88;
    ax = *L000061AD;
    asm("xlatb");
    asm("xchg bp,di");
    asm("sbb al,0xeb");
    *di = *si;
    di = di + 4;
    *(bx + si + 4) & dh;
    L00001F9A();
    asm("sbb al,0xa2");
    return;
    if(!(sp = sp | *(bp + si + 30360))) {
        sp = 0xe1;
        asm("adc sp,cx");
        dx = 0x3254;
        asm("Unknown opcode 0xc4");
        asm("hlt");
    }
    (restore)bp;
    asm("adc al,dl");
    al = al | 0xba;
    asm("jpe 0xbcb");
    asm("int1");
    asm("daa");
    *(bp + si + 0x52) = *(bp + si + 0x52) ^ bp;
    asm("Unknown opcode 0x0f");
    asm("xadd [bp+di-0x5d],al");
    ax = ax + 1;
    asm("iret");
    sp = sp - 1;
    *(bx + di) = *(bx + di) | ax;
    al = al ^ 0xc7;
    *di = al;
    di = di + 1;
    asm("adc [bx+si+0x15],ax");
    asm("adc [bx+di],bl");
    asm("ror byte [bx],0xe8");
    di = di + 1;
    asm("adc [bp+di],dl");
    al = al >> 1;
    asm("sbb ah,[0x732a]");
    if(dx = dx + 1) {
        goto L00000b28;
    }
    (restore)bx;
    *(bp + si + 37233) = *(bp + si + 37233) & ch;
    di = di - *(bx + di + 0x62);
    cx = 35935;
L00000b98:
    asm("lock jno 0xbaa");
    ah = ah | dl;
    asm("adc ax,0xe808");
    asm("iret");
    al = al + 0xe;
    asm("adc cl,[di+0x3]");
    asm("xchg ah,[bx+si]");
    (save)cs;
    asm("sbb ax,bp");
    asm("aas");
    *(bx + si) = *(bx + si) | dx;
    bp = bp - 1;
    ax = L00000DCC();
    asm("cld");
    ax = ax ^ 62427;
    (save)29763;
    asm("adc [bp+si],dl");
    ax = ax + 1;
    *di = al;
    di = di + 1;
    asm("Unknown opcode 0xc7");
    (restore)ds;
    asm("%d push cx");
    asm("out dx,ax");
    al = al & *(bx + di);
    asm("bound ax,[di+0x2]");
    (restore)di;
    asm("insb");
    (save)es;
    bl :: *(si - 0x77);
    (restore)dx;
    asm("adc [bx+di+0x3f],ax");
    *L0000FDB2 = al;
    asm("adc [bx+si],dx");
    al = *L0000417D;
    asm("das");
    asm("sbb word [bp+si+0x0],+0x18");
    si = si | dx;
    ax = *L0000F201;
    asm("insw");
    (save)di;
    *bx = *bx & bl;
    *((bx - 1 >> cl) + di) = *((bx - 1 >> cl) + di) + dx;
    asm("aaa");
    asm("%f sbb cx,sp");
    *(bx + si + "ot enough memory$ Y- ") = *(bx + si + "ot enough memory$ Y- ") & bl;
    (save)cs;
    goto L0000a926;
    *(bx + di) = *(bx + di) ^ ax;
    (save)cs;
    asm("Unknown opcode 0x82");
    asm("lahf");
    (restore)dx;
    if(ax = ax + 1) {
        goto L00000b98;
    }
    asm("in ax,dx");
    asm("%s rep salc");
    (restore)dx;
    dl = 0xcb;
    asm("in al,dx");
    asm("salc");
    asm("sbb [bx+di+0xce33],bh");
    (restore)dx;
    asm("enter 0x2e93,0xc2");
    cl = 0xd6;
    asm("Unknown opcode 0xc6");
    asm("a32 pop cx");
    (restore)es;
    (save)es;
    asm("xchg ax,bx");
    (restore)es;
    asm("adc al,0x11");
    ax = ax + 1;
    si = ds;
    asm("adc [di],di");
    dl = dl >> 0xd5;
    asm("adc [bp+di],bh");
    0x120b = *(bx + di - 0x65) * bx;
    goto L0000d338;
    asm("Unknown opcode 0xd2");
    al = al ^ 0x1c;
    dx = dx + 1;
    (save)cs;
    asm("std");
    (fsave)(frestore) * *(bp + di);
    *(bp + si + 0x6f) = ch;
    *(bp + si + 2) & ax;
    asm("xchg ax,di");
    (save)cs;
    (save)cs;
    cx = cx + 1;
    asm("std");
    asm("stc");
    asm("%d mov ah,0x49");
    *(bp + di) = *(bp + di) + cl;
    asm("rol word [bx+0x205],0x2a");
    asm("xlatb");
    (fsave)0;
    ax = (ax | 0x12fc) + 0x1274;
    asm("rcl word [di],cl");
    *(bp + si + 0x2401) = *(bp + si + 0x2401) ^ di;
    asm("adc [bx+si+0x808b],dh");
    asm("adc ax,0x3e1");
    *(bp + di) :: " Y- ";
    dl = dl + *(bx + di);
    *(bx + di) = *(bx + di) + di;
    ah = 0x3f;
L00000c76:
    di = 0x400f;
    if(!(cx = cx + 1)) {
        al :: " Y- ";
        ch = 0xda;
        dx = dx | *(bp + si);
        ax :: 41859;
        bx = bx + 1;
        asm("sbb al,0x96");
        cx = cx + 1;
        sp = sp + 1;
        al = al - 0x4d;
        asm("jpe 0xcc6");
        (restore)bp;
        asm("fcomp qword [bx+si+0xc030]");
        if(sp = sp - 1) {
            goto L00000c76;
        }
        asm("cli");
        *(bx + di) = al;
        asm("rep xchg ax,cx");
        (save)es;
        (save)dx;
        asm("adc bp,[bp+si+0x2489]");
        (save)cs;
        asm("in al,dx");
        cx = cx | *(bp + 0x1a4);
        si = bp + si + " Y- ";
        (save)sp;
        al = al - 0xac;
        cx = cx + 1;
        ax = L00001071();
        *(di - 0x74) = ds;
        *(bx + di) = *(bx + di) | ax;
        ax = ax - 33807;
        40966 = *(bx - 0x10) * di;
    }
    asm("aas");
    *(bp + si) = *(bp + si) ^ si;
    if(bp < *L00001115) {
        (save)ax;
        goto L00008e4c;
        asm("adc ax,0x1088");
        ax = ax + 1;
        *L00007F0C = *L00007F0C - 0x51;
        *(si + 29260) = *(si + 29260) + 1;
        asm("in ax,dx");
        *di = al;
        di = di + 1;
        (save)dx;
        al = al ^ 0x3f;
        asm("adc [bx+di+0x6add],ch");
        bx = bx - 1;
        *L0000EA65 = al;
    }
    asm("fcomp qword [bp+di]");
    asm("rol cx,1");
    ax = al - 0x10 | *(bx + si - 0x7e);
    asm("adc ax,0xfe47");
    asm("rcl word [bx],0x22");
    asm("adc al,0x92");
    *(si - 0x16) = *(si - 0x16) & bh;
    ah = *L00006BE3 + *(bx + di + 61080);
    (restore)ds;
    bp = bp | *(bp + di);
    asm("salc");
    (save)di;
    L00001240();
    asm("Unknown opcode 0xc6");
    dh = 0x93;
    si = si + 1;
    bp = bp + 1;
    asm("Unknown opcode 0xfe");
    dl = dl - *(bp + di) - *si;
    si = 28801;
    if(!(ch = ch | *%ss:bp+0x3d])) {
        asm("sbb ax,0x2990");
        asm("adc [bx+si+0x2b],al");
        asm("adc ax,0x4049");
        if(*%ss:si] = *%ss:si] + 1) {
            goto L0000cf29;
        }
        (restore)sp;
        asm("adc [di+0x6fd4],dl");
        (save)bp;
        dx = 24794;
        bp = bp + 1;
        asm("Unknown opcode 0x8f");
        ax = ax & 0x3710 & 51099;
        asm("hlt");
L00000d41:
        ax = ax | 0x12a2;
    }
    ax = (al & 0xac) + 1;
    if(!(cx = cx - *(bp + di))) {
        (restore)es;
        *(bp + di) = *(bp + di) + cx;
        (save)ds;
        *(bp + si) = *(bp + si) + dl;
        ax & 57877;
        asm("pusha");
        bh :: *bx;
        dh = dh + *bx;
        asm("xchg ax,dx");
        asm("xchg ax,si");
        ax = ax + 0x12fe;
        asm("xchg ax,di");
        asm("xchg ax,si");
        al :: 0x13;
        sp = dh;
        (save)es;
        dx = 0x466c;
        sp = sp - 1;
        (restore)dx;
        asm("in al,0xae");
        asm("adc cl,al");
        asm("%g aaa");
        dx = dx + *di;
        si = si | *(bx - 0x4b);
        asm("sbb [bp+si-0x39],ch");
        ax = L00001170();
        asm("salc");
        *L000019C0 = al;
        asm("hlt");
        asm("sti");
        cx = cx + 1;
        if(ax = ax | 41315) {
            goto L00000dcd;
        }
        asm("psllw mm2,[di-0x5e]");
        sp = 0x462d;
        if(0x34b1 = *(bx + si + 0x235b) * bp) {
            goto L00000d41;
        }
        asm("xlatb");
    }
    (save)cs;
    asm("sahf");
    asm("cli");
    if(*(bp + di) = *(bp + di) + dx) {
        goto L00000e0b;
    }
    (restore)ss;
    (restore)dx;
    cx = cx + 1;
    asm("bound cx,[0x3c4a]");
    asm("xchg bp,[bx+si]");
    *(bp + di) = *(bp + di) + bh;
    asm("lfs dx,[bp+si+0xa1fe]");
    *(bx + di + 0x2b31) = *(bx + di + 0x2b31) ^ bx;
    asm("%s adc si,dx");
    bh = *(bp + di + 0x5b);
    asm("aas");
    dh = 0xae;
    asm("std");
    ax = 0xa6b;
    (restore)si;
    asm("cwd");
    dx = dx + 1;
    0x361a = *(bp + di) * di;
    asm("adc [di+0x40],si");
}

/* DEST BLOCK NOT FOUND: 000014c9 -> 0000d04e */
stack space not deallocated on return
/*	Procedure: 0x00000DCC - 0x00001A66
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000DCC()
{



    ax = ax + 1;
    bp = bp | *(bp + si + 0x10);
    ax = ax + 1;
    si = si + 1;
    ax = di;
    al :: 0x57;
    asm("xlatb");
    di = di - 1;
    al = al + " Y- ";
    *(di + 0x15ae) = *(di + 0x15ae) - cx;
    (save)si;
    (save)-24;
    (save)ax;
    asm("wait");
    -46 = cx * sp;
    asm("aaa");
    al & 0x41;
    (fsave)(frestore) / st2;
    al = (ax + 1 + 1 ^ *(bx + si + 0x14)) + 1 + 0xbd;
    asm("sbb ah,[bx+0x2a]");
    dl = dl | bl;
    ax = ax + 1;
    asm("das");
    *(bx + di + " Y- ") = *(bx + di + " Y- ") - dh;
    *(bx + di + "gh memory$ Y- ") = *(bx + di + "gh memory$ Y- ") + di;
    al = 0x6e;
    asm("punpckhbw mm4,mm4");
    asm("%c call 0x64b0");
    asm("aad 0xb4");
    ax = ax ^ 0x1249;
    dl = dl - *(bp + si + 0x4c52);
    asm("adc [di+0x23],ah");
    (save)bp;
    asm("sbb word [si],0x1a90");
    asm("adc ax,0x2e0b");
    cl = cl + *(bp - 0x39);
    bx = bx + 1;
    (save)0x47;
L00000e25:
    asm("adc [bp+si+0x40a1],ch");
    asm("adc [di+0xfdf5],ax");
    *(bp + di + 32080) = *(bp + di + 32080) + bp;
    *(bp + si) = *(bp + si) ^ dx;
    di = di + *(di - 0x12);
    dx = dx | *(bp + si);
    al :: 0x1a;
    asm("cmpsw");
    si = si + 1;
    asm("salc");
    bh = 0xbe;
    (restore)di;
    di = di + ax;
    ax = ax & 63025;
    asm("aas");
    cl = cl + *(bx + di);
    asm("out 0x94,ax");
    asm("cmpsb");
    (save)ax;
    di = di + 1;
    bl :: *bx;
    *(si + 0xe) = *(si + 0xe) + di;
    asm("cli");
    asm("jpo 0xe58");
L00000e56:
    ch = ch - *(bp + di + 8);
L00000e59:
    asm("aaa");
    asm("aas");
    dl = 0xe4 + *(bx + si + 0x16d6);
    *di = *si;
    di = di + 4;
    si = si + 4;
    *(bp + si) = *(bp + si) ^ cx;
    (save)-117;
    *(bp + si + 0x71) = *(bp + si + 0x71) + 0x3fba;
    asm("adc [bp+si],dl");
    ax = ax - 1;
    asm("arpl dx,ax");
    cx = cx + 1;
    asm("arpl di,ax");
    bp = bp - 1;
    asm("adc ax,0xd011");
    asm("ror word [bx+si+0x3f],1");
    asm("adc [bp+di-0x4c],ch");
    *(bx + si - 0x46) = *(bx + si - 0x46) + ax;
    if(*(bx + 0x57d) & ch) {
        goto L00000e25;
    }
    ch = ch - *(bx + di);
    *(bp + di - 0x35) = ah;
    *L00002DAD = ax;
    *(bx + di + 0x41) = *(bx + di + 0x41) << 1;
    bh = 0x45;
    if(!(dl = dx + 1 & ah)) {
        (save)es;
        ax = ax + 0x143d;
        asm("Unknown opcode 0x62");
        *(bx + di + 1) = *(bx + di + 1) + 1;
        *L0000C1D8 = al;
        (save)ss;
        asm("sbb ax,0x1d30");
        *L0000D000 = *L0000D000 - cl;
        dl = 0x40;
        asm("outsw");
        asm("Unknown opcode 0xc6");
        if(al = al & 0x66) {
            goto L00000e56;
        }
        asm("in ax,dx");
        asm("cmc");
        ax = ax + 1;
        dx = (dx | *(bp + si)) - 1;
        (fsave)(frestore) + *(bp + si - 0x64);
        al = al & 1;
        dx = dx + 1;
        cl = cl - *bx;
        ax = ax + 1;
        asm("adc [di],dl");
        asm("outsw");
        asm("cmovna dx,bp");
        *(si + 32814) = *(si + 32814) & ch;
        asm("sbb al,0x1d");
        asm("sbb al,0x10");
        if(ax = ax + 1) {
            goto L00000e59;
        }
        (restore)es;
        ax = L00005217();
    }
    al :: 0xdf;
    (save)dx;
    *di = al;
    di = di + 1;
    asm("sbb al,0xb5");
    asm("in ax,0x75");
    (restore)dx;
    sp = sp + 1;
    bp = *(bp + di);
    (save)dx;
    cx = si + 33661;
    *(bx + si + " enough memory$ Y- ") = *(bx + si + " enough memory$ Y- ") + 0x42;
    dh = dh ^ *(bp + 64001);
    bx = 0x1614;
    asm("sbb [bx+si],bl");
    asm("sbb [bp+di+0x4d83],ax");
    ax = ax + 1;
    asm("sbb ax,[bx+di]");
    (save)ss;
    di = di | *(bp + si);
    bx = bx + 1;
    dx = si;
    *di = *di + bh;
    *(bp + si) = *(bp + si) ^ dx;
    asm("retf 0x2f27");
    asm("Unknown opcode 0x8f");
    asm("daa");
    ax = ax ^ 0x33bb;
    *(di + 0x52) = *(di + 0x52) * di;
    (fsave)(frestore) - *si;
    asm("xchg ax,bx");
    al = al & 0xf3;
    asm("xchg ax,bx");
    asm("Unknown opcode 0x82");
    *(di + 0x45) = *(di + 0x45) >> 0x83;
    goto L00000f68;
    *L000006D7 = ax;
    ax = ax | 29761;
    asm("adc [bx+si+0x134c],ax");
    asm("adc si,cx");
    asm("Unknown opcode 0x8e");
    asm("aas");
    *(bx + si + 49442) = *(bx + si + 49442) + ch;
    (restore)cx;
    ch = 0xf0;
    ax = 0x2d7f;
    (save)55812;
    ax = 0x407e;
    dl = dh ^ *si | *(bx + 0x140e);
    if(0x407e < 0x407e) {
        0x407e :: 1;
        *(si + "gh memory$ Y- ") = *(si + "gh memory$ Y- ") + 1;
        asm("scasw");
        0x3a02 = *L00004418 * bx;
        ax = ax + 1 + 1;
    }
    ax = ax & 64000;
    (save)ss;
    asm("xchg ax,cx");
    *L000011A8 = ax;
    asm("hlt");
    if(!(ch = ch + *(bp + di))) {
        cx = cx | *(bp + di + 43133);
L00000f68:
        bl = bl | ah;
        (save)cx;
        asm("aad 0x28");
        asm("int1");
        dh = 0x48;
        asm("insb");
        if(*(bp + si + 0x4c) = *(bp + si + 0x4c) - 1) {
            goto L00000fb6;
        }
    }
    *di = *si;
    di = di + 4;
    si = si + 4;
    ax = *L00001CC7;
    asm("adc ax,0xc32d");
    *(bx + si) = *(bx + si) - dl;
    *(bx + di) = *(bx + di) + dh;
    asm("adc ax,[bp+si-0x1a]");
    asm("retf 0x5fb1");
    al :: 1;
    asm("adc word [bp+0x3ebd],0x5210");
    asm("popa");
    goto L0000b318;
    asm("retf 0x301c");
    if(!(sp = sp + 1)) {
        (save)cs;
        asm("jpe 0xfb6");
        asm("lock and dl,[bx+si+0x3cc1]");
        asm("adc al,0x16");
        (save)ss;
        ax :: 62490;
        (restore)es;
        dl = dl + *di;
        asm("xchg bx,[bx+si+0x40]");
        asm("aas");
        al = al + *(bp + di - 1);
        bx = bx + 1;
        al = al & 0x40;
L00000fb6:
        (save)dx;
        asm("lds bp,[bp+di+0xf212]");
        ax = ax | *L0000261A;
        al :: 0xb;
        si = si - ax;
        *di = *L00009190;
        di = di + 4;
        asm("%c pop ds");
        ax = L000035F7();
        asm("in al,dx");
        asm("xchg ax,dx");
    }
    asm("adc sp,0x1c56");
    asm("outsw");
    dx = dx - 1;
    asm("sbb ax,0x1c41");
    asm("adc [bx+si+0x4b1e],ax");
L00000fd9:
    *bx = *bx - di;
    asm("out 0x7e,al");
    return;
    ax = ax - *(si + 0x46d9);
    ax = *L00000B10;
    asm("xchg ax,si");
    *di = *si;
    di = di + 1;
    if(!(si = si + 1)) {
        (save)ss;
        al & 0x45;
        ch = 0xbe;
        if(cl < *bx) {
            cx = 0xbf;
        }
        ax = ax + 1;
        asm("sbb al,0xe");
        asm("adc al,0xa");
    }
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("xchg ax,sp");
    ax :: 34810;
    *(si + 0x40) = *(si + 0x40) + di;
    sp = 0x2506;
    bx = bx + 1;
    asm("sbb ax,0x7ea1");
    (save)es;
    ax = al + 0x7f + 0xb2d;
    (save)63299;
    sp = sp + 1;
    asm("adc ah,ah");
    (restore)si;
    ax = ax | *si;
    asm("adc al,0x28");
    asm("adc ch,[bx+di]");
    asm("adc al,[bx+di-0x58]");
    *(bx + si + 41275) = 52072;
    asm("enter 0xf31,0x3f");
    *di = *di ^ cl;
    asm("adc dx,[bp+0x7a90]");
    asm("in ax,dx");
    if(ax = ax | 32826) {
        goto L00000fd9;
    }
    asm("adc [si],ch");
    sp = sp + 1;
    asm("%g add al,0x2e");
    asm("adc [bx+0xcbaa],dl");
    *(bp + si - 0x70) = *(bp + si - 0x70) + bx;
    ax = *L00004321;
    asm("das");
    asm("rcl byte [bp+si+0x10],0x60");
    asm("Unknown opcode 0xc6");
    if(!(dx = dx + 1)) {
        asm("Unknown opcode 0xc7");
        goto L00001052;
        (restore)ss;
L00001052:
        asm("sbb cl,[si+0x7404]");
        asm("cmpsw");
        ax = *(bp + si + 0x206d)();
        asm("daa");
        al = al | 0x51;
        sp = sp + 1;
        *(bp + di) = *(bp + di) + di;
        al = *L00007F03;
        asm("adc dl,[bp+si]");
        if(!(di = di + 1)) {
            asm("hlt");
            al = *(bp + si + "memory$ Y- ");
            bp = bp - *(bx + si + 0x272d);
            asm("adc [bp+di],cl");
            goto L0000a610;
            (save)ds;
            asm("adc dh,al");
            bx = 63105;
            al = *esi;
            esi = esi + 1;
            asm("aam 0x28");
L00001081:
            bx = bx + 1;
            asm("aas");
            dx = dx + 1;
            di = di + 1;
            asm("Unknown opcode 0x82");
            asm("adc [di],dl");
            (save)sp;
            *(bx + di + 35838) = *(bx + di + 35838) | 0x82;
L0000108b:
            al = al + 0x3f;
            sp = sp | si;
            bx = bx + 1;
            if(ax = ax + 1) {
                goto L00001081;
            }
            asm("xchg ch,[di+0xa441]");
            goto L000048bf;
            if(ax & 22826) {
                goto L0000108b;
            }
            asm("arpl [bp+di],cx");
            (fsave) *si;
            al = " Y- ";
            al = *L00003E82;
            al :: 0xa5;
            asm("hlt");
            ax = ax + *(bx + di);
            asm("sbb ax,0x5379");
            dl = dl + *(bp + si + 0x3f4b);
            asm("sbb [bp+si+0x1a],sp");
            al :: 6;
            goto ( *(bp - 0x74));
            asm("fnstsw [bp+0x2e]");
        }
        asm("arpl [bp+si],bp");
        asm("cmpsb");
        asm("adc bl,[bx]");
    }
    (restore)ss;
    asm("adc bl,al");
    0x15 = *L00008ABD * ax;
    asm("adc dl,[bx+si-0x5c]");
    asm("cmpsw");
    *bx = *bx ^ cl;
    *(bp + si + 0x74) & ax;
    return;
    ah = *bx;
    asm("%c or ax,0x474c");
    al = al + 0x15;
    asm("adc [di-0x2c],ch");
    if(!(sp = sp - 1)) {
        asm("retf 0x7fae");
        asm("adc bl,[bx]");
        asm("in ax,0x1");
        asm("out dx,al");
        asm("outsb");
        asm("%g jnc 0x107b");
        asm("xchg ax,di");
        di = di - 1;
        si = si + 1;
        (save)si;
        asm("pushf");
        (save)ds;
        asm("wait");
        asm("sti");
        asm("loopne 0x1101");
        asm("adc al,[bx+si+0x26]");
        (save)ss;
        al & 0x61;
        al :: 0x8c;
        al :: 0xd3;
        asm("das");
        al = al + *(bx + di);
        (restore)ax;
        asm("adc bh,[bx+si+0x1780]");
        *(bx + 35843) = ds;
        asm("hlt");
        *(bx + si) & bx;
        asm("sbb [bx],cx");
        (restore)dx;
        ax = ax + 1;
        si = si - cx;
        al & 0x75;
        (save)es;
        al :: 0xd9;
        asm("sbb [%gs:bp+si+0x59],ch");
        sp = sp - *di;
        asm("sahf");
        goto L00001153;
        asm("cld");
        asm("adc ax,0x437d");
        asm("adc [si+0x6a],ch");
        *di = al - 0x3b;
        di = di + 4;
        es = *(bp + 0x75);
        asm("adc [bx],dh");
        di = 0x1a8b;
        dl = 0x41;
        ch = " enough memory$ Y- ";
        asm("into");
        asm("xchg ax,si");
        if(cx = cx - 1) {
            goto L00001178;
        }
        ch = ch - *(bx + "Y- ");
        (restore)si;
        bp = bp + 1;
        (save)-50;
        *di = al;
        di = di + 1;
        dl = 0x9e;
L00001153:
        if(ax = ax - 42963) {
            goto L00001166;
        }
        dx = dx + 1;
        ax :: 0x423b;
        si = si | bp;
        asm("sbb ah,dh");
        bx :: *(bp + di);
    }
    bl = bl + *(bp + di);
    (restore)di;
    asm("sbb dx,[bp+si+0xd3d3]");
L00001166:
    asm("xchg ax,dx");
    dl = dl & *%es:bx];
    *(bx + si) = ss;
    asm("std");
    asm("lds bx,[bx+si]");
    asm("sti");
    ah = 0xcd;
    (save)ds;
    asm("loope 0x111c");
L00001178:
    *(bp + 54610) = *(bp + 54610) >> 1;
    al & 0x75;
    asm("Unknown opcode 0xc6");
    ax = L0000a7b5() - 0x2406;
    asm("salc");
    asm("rol word [bp+si+0xf],1");
    *(di + 59314) & ah;
    ax = ax | 31861;
    dl = *(bx + si);
    ah = 0x51;
    *(bp + si + 0x13) = *(bp + si + 0x13) + cx;
    asm("adc byte [bx+si],0xd6");
    goto L00001215;
    (restore)ds;
    asm("Unknown opcode 0xc7");
    ax = *L0000109A;
    (restore)ss;
    *%es:bx+0x34aa] :: 0x2035;
    cx = cx - 1;
    asm("sbb bh,bl");
    asm("adc byte [bp+si+0x5],0x59");
    (restore)cx;
    ax = ax & 61936;
    (restore)ss;
    asm("sbb dh,[bp-0x70]");
    *(bp + di) = *(bp + di) >> cl;
    *si = *si + cx;
    (restore)bx;
    di = di - 1;
    asm("out dx,ax");
    asm("xchg ax,dx");
    (restore)si;
    cx = cx & *(si + 0x2090);
    bx = bx + 1;
    sp = sp + 1;
    if(!(ax = ax + 1)) {
        si = si + 1;
        (restore)si;
        (restore)bp;
        asm("sti");
        asm("adc si,dx");
        asm("Unknown opcode 0xc6");
        *(bx + si) = *(bx + si) ^ bp;
        sp = sp | *(bx + 0x3e);
        asm("xchg ax,bp");
        asm("sbb al,0x98");
        *di = al;
        di = di + 1;
        ax = ax + 1;
        asm("insw");
        asm("adc [bx+di-0x51],ax");
        ah = 0xf0;
        (fsave)(frestore) + *(si + 0x7a);
        asm("rcl word [bx+di],0xc5");
        asm("cmpsw");
        if(sp = sp + 1) {
            goto L0000122e;
        }
        (restore)es;
        sp = sp + 1;
        asm("sbb al,0x3b");
        asm("Unknown opcode 0x0f");
        ax = (al & 0xb1) + 1;
        di = di & *(bp + di + 0x570);
        asm("aas");
        asm("Unknown opcode 0x0f");
        asm("hlt");
        asm("daa");
        cx = cx + 1;
        asm("das");
        if(*(bp - 0x68) <= dl) {
            goto L0000121b;
        }
        asm("outsw");
        asm("pushf");
        asm("iret");
        asm("insw");
        (restore)ss;
        asm("Unknown opcode 0xc6");
        cx = cx - 1;
        asm("hlt");
        asm("cmpsb");
        asm("std");
        asm("jpe 0x1206");
    }
    *(bp + di) & ax;
    asm("adc ch,[bx+di-0x80]");
L00001215:
    *(bx + si + 59587) :: "";
L0000121b:
    cl = cl + *si;
    0x79 = *(bx + 37381) * sp;
    asm("sbb ax,0xc904");
    asm("Unknown opcode 0x66");
    asm("Unknown opcode 0xc6");
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("aas");
    asm("lds ax,[bx+0xff1e]");
    sp = sp ^ *bx;
L0000122e:
    (restore)bp;
    (save)cx;
    asm("adc [0xdad6],bh");
    asm("retf");
    (save)ss;
    dx = dx + 1 + *(bx + di + 0x65);
    asm("daa");
    asm("aaa");
    ax = ax - 59130;
L0000123f:
    ax = ax + 0x445e;
    asm("cmpsw");
    asm("xchg ax,bx");
    ax = ax & 0x77;
    (restore)sp;
    (restore)dx;
    asm("adc [bx+si+0x24],al");
    asm("xchg cl,[bx+0x3a]");
    (save)es;
    (save)cs;
    asm("cli");
    return;
    asm("adc [0xdbab],bl");
    al = 0x12;
    asm("lahf");
    *L00009F2A = *L0000F8DB;
    ch = ch & ah;
    asm("wait");
    *(bx + si) = *(bx + si) & 0xa1;
    asm("ror byte [bx+0x17],0x8c");
    asm("jpo 0x128b");
    asm("sbb bl,[bp+0x3d]");
    *(si + 0x3f) = *(si + 0x3f) + bp;
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("xchg ax,dx");
    asm("xchg eax,[bp+si]");
    ax = ax & *(bx + di - 0xc);
    asm("daa");
    bx = bx + 1;
    asm("sbb [bp+si-0x16],di");
    dh = 0xe8;
    asm("adc dh,[si]");
    if(bp = bp | *(bx + di + 43772)) {
        goto L0000123f;
    }
    *(bx + si + 0xe12) = *(bx + si + 0xe12) - dx;
    ch = cl + dx - *(bx + si) - *di;
    *(bx + si - 0x43) = *(bx + si - 0x43) - (ax ^ 26386);
    *(bp + si + "gh memory$ Y- ") & cl;
    dx = dx + 1;
    al = L00005262(es) - 0x80;
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("cmovo bp,[bx+di]");
    asm("%s xor al,0x7f");
    asm("Unknown opcode 0xfe");
    *(di - 0xd) = *(di - 0xd) & di;
    asm("adc di,[bx+di]");
    (save)bp;
    asm("int3");
    ch = ch - *(bp + si);
    *(bx + di) = bp;
    (save)di;
    asm("adc word [bp+si],+0x56");
    asm("Unknown opcode 0x8d");
    asm("Unknown opcode 0xdb");
    ax = ax | *(bp + di + 24522);
    cx = cx - 1;
    bx = bx | ax;
    asm("xchg ax,di");
    ax = ax ^ *(bp + di + 0x4d);
    dx = 0x13c;
    asm("cli");
    asm("sbb word [bx+0x52],0x7d40");
    dx = dx + 1;
    asm("sbb [di],sp");
    asm("lds ax,[bx]");
    (fsave)(frestore) + *(si + 0x440a) + *(bx + si + 0x44);
    asm("out dx,al");
    (restore)ax;
    if(!( *(bx + di + 36084) & cx)) {
        asm("adc [bp+si],bp");
    }
    == ? L00001327 : ;
    asm("cmovpo ax,[di]");
    dh = *(di + 0x3e57);
    asm("insb");
    ax = ax - 0x3566;
    asm("adc bl,ch");
    bh = bh + *%gs:bx+si+0xea98];
    return;
    asm("Unknown opcode 0x82");
    asm("adc [bp+0xff35],dx");
    ax = ax - 27326;
    *(bx + si) = *(bx + si) - dx;
    asm("paddd mm0,[bx+si-0x21]");
    cx = cx + 1;
    si = si - *(bp + 0x42c6);
    asm("cmpsw");
    asm("in ax,dx");
    *di = eax;
    di = di + 4;
    asm("adc [bp+di+0xa644],ch");
    al = al + 0xc5;
    si = si + 1;
    bl = bl & *(si + 0x7c);
    di = cs;
    sp = sp - 1;
    *(bp + di + 61057) = *(bp + di + 61057) + cl;
    ax :: 0x303a;
    *(di + 3) = *(di + 3) + di;
    ax = ax + 1;
    cl :: *(si + cx + 0x71b);
    ax = *L000000C7 + 1;
    dx = dx - 1;
    if(!(cx = cx - 1)) {
        asm("adc [si],dh");
        *di = eax;
        di = di + 4;
        asm("sbb al,0xac");
        bp = bp + 1;
        *di = al;
        di = di + 1;
        (save)0x6f;
        asm("popf");
        dl = dl - *(bp + di + 24085);
        bh = 0x5b;
        bp = bp - *L0000005D;
        *L00004052 :: *(0x5b + si + 0x11);
        (restore)ds;
        (save)ds;
        ax = *L00004052 ^ 48656 | 0x3cc9;
L0000135c:
        *L0000FAAB = *L0000FAAB >> 0xf4;
        dx = dx + 1;
        cl = " memory$ Y- ";
    }
    cx = cx + 1;
    ax & 62472;
    asm("sbb dl,[bp+di+0x12a3]");
    asm("%e inc sp");
    asm("sbb cl,bl");
    *(bx + di) = *(bx + di) + 0x3e;
    ax = ax + 1 + 1;
    bx = bx + 1;
    asm("bound ax,[di]");
    (restore)bp;
    asm("aas");
    al = *L0000433F;
    (save)sp;
    (save)ax;
    cx = cx + 1;
    while(al = ax + 1 | 0x43) {
    }
    dx = dx - 1;
    asm("Unknown opcode 0x8c");
    *di = *di ^ di;
    *(bp + di) = *(bp + di) + ah;
    asm("%c xor ax,0x1267");
    al & 0xfd;
    ax = ax + 1;
    *di :: al;
    asm("%e in ax,0x3e");
    al = al + "enough memory$ Y- ";
    (save)-1;
    asm("adc di,[bx+di]");
    if(bx = bx - 1) {
        goto L0000135c;
    }
    dx = dx + 1;
    bp = 0x27d5;
    ax = ax & 30508;
    asm("aas");
    (save)bp;
    ax = ax ^ 31846;
    asm("sbb si,0xb4b7");
    ss = *L00007173;
    asm("adc bp,[bx+di]");
    if(!( *(bx + si + 0x1082) = *(bx + si + 0x1082) + di)) {
        asm("cwd");
        asm("xchg ax,dx");
        bl = bl | *(di + 0x51);
        asm("rol cl,cl");
        (save)-48;
        (save)cs;
        (save)cs;
        di = di + 1;
        asm("rcr word [bx+si],1");
        dx = dx - *bx;
        si = 0x17d;
        asm("pusha");
        (save)cs;
        asm("aam 0x1");
        asm("lds bx,[bp+di]");
        (restore)ss;
        if(al = ax + 1 + 0xfd) {
            goto L00001454;
        }
        asm("retf");
        asm("cld");
        asm("outsw");
        asm("sbb ch,dl");
        di = di + 1;
        asm("fidivr dword [si]");
        ch = 0x6f;
        *(bp - 0x62) = *(bp - 0x62) ^ sp;
        asm("wait");
    }
    (save)bp;
    if(al >= *(bp + di + 23714)) {
        asm("lds di,[bp+si-0x6b]");
    }
    ax = ax + 1;
    (save)bp;
    (save)bp;
    asm("%g push sp");
    al :: *(bp + di + 0x2a15);
    dx = dx - 1 & *si;
    asm("aas");
    (save)ss;
    asm("cmpsb");
    bp = 0x127a;
    (restore)ds;
    (restore)cx;
    asm("aas");
    if(!(ax = ax | 0x2556)) {
        >= ? L000013f2 : ;
        bl = 0xa8;
        *(0xa8 + si - 0x3f) = 0xa8;
        ax = ax - 33828;
        asm("sbb byte [bx+di-0x21],0xe0");
        bx = bx - 1;
        dx = dx + 1;
    }
    dx = dx | *(si - 0x16);
    asm("cli");
    asm("aaa");
    al = al | 0x5c;
    asm("scasb");
    asm("cwd");
    asm("a32 jpe 0x1451");
    es = *(bp + di + 31116);
    (save)cs;
    if(!(ah = ah + *(bp + si + 0x3f2f))) {
        *(bp + si) = *(bp + si) + ch;
        asm("loope 0x13d2");
        asm("daa");
        al = al + 0xcd;
        bp = bp - 1;
        asm("xchg ax,si");
        dl = dl + *(di + 26898);
        asm("adc [di+0xabd4],ch");
        asm("out dx,ax");
        di = di + 1;
        ax = ax | 57045;
        (save)cx;
        dx = dx + 1;
        asm("adc [bx+di+0x7edc],ch");
        *(bp + di) = *(bp + di) + bh;
L00001454:
        asm("adc ax,0x77cf");
        asm("cmc");
        if(cx = cx + 1) {
            goto L000014d2;
        }
        *(bx + 26996) = *(bx + 26996) & ch;
        (restore)dx;
        asm("xchg ax,si");
        50846 = *(bp + di) * cx;
        *di = *si;
        di = di + 1;
        si = si + 1;
        al = 0x49;
        asm("repne neg cl");
        sp & si;
        asm("sbb byte [bx+si+0xc],0x53");
        (restore)es;
        *(bx + di + 5) = *(bx + di + 5) + sp;
        dh = dh | ah;
        ax = ax + 1;
        bx = bx + 1;
        (restore)es;
        if((al = al - *(bx + si + 0x49)) || !(si = si + 0x45e4)) {
        }
        *(bp + 33434) = *(bp + 33434) + dx;
    }
    *(bx + di + 0x54e4) = *(bx + di + 0x54e4) & bl;
    dx = dx + 1;
    ah = ah ^ *(bx + di);
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("hlt");
    sp = sp + 1;
    cx = cx + 1;
    asm("popa");
    (save)54096;
    *(bp + 0x1036) = *(bp + 0x1036) + ax;
    ax = ax + 1;
    cx = *(di + " Y- ");
    bx = 59991;
    (restore)di;
    if(!( *(bx + di + 65354) = *(bx + di + 65354) & bp)) {
        ax & 61520;
        asm("std");
L000014af:
        asm("adc ah,bl");
        *di = eax;
        di = di + 4;
        (save)cs;
        asm("popa");
        ax = L000054DC();
        asm("adc al,0xe8");
        (save)es;
        asm("adc byte [bx+di+0x38],0x5");
        if(al != " Y- ") {
            goto L000014dd;
        }
        *(bx + 0x40) & dl;
        di = 0x400c;
        (restore)si;
        goto L0000d04e;
        asm("aas");
    }
    (save)ss;
    (save)cx;
    asm("Unknown opcode 0xc0");
L000014d2:
    bl = bl ^ *(bx + di - 0x58);
    *L0000120B = al;
    if(!(ax = ax | bp)) {
        29568 = *(bx + si) * dx;
L000014dd:
        asm("salc");
        if(ax = ax & 0x1583) {
            goto L000014af;
        }
        asm("xchg ax,di");
        *(bx + 0xd4a) = *(bx + 0xd4a) | ah;
        asm("adc [di],bx");
        al = *L00001037;
        asm("aas");
        *(bp + di + 0x66) = *(bp + di + 0x66) + bh;
        (restore)ds;
        *(bp + di) = *(bp + di) + al;
        bl = 0x57;
        (restore)ax;
        dx = dx - 1;
        asm("sbb al,0xdf");
        asm("aad 0x2c");
        (save)0x5c;
        (save)di;
        dx = dx ^ *(bx + si);
        ax = 0x4892;
        cx = cx | *di;
        asm("out dx,ax");
        (save)0xe;
        asm("%g out dx,ax");
        *L0000FA03 = ax;
        es = *(di - 6);
        *(bp + si + 0x41) = *(bp + si + 0x41) & 5;
        ax = ax + 1 ^ 0x1b40;
        bp = di;
        asm("in al,0xa");
        dl = dl + *(bp + si + 28992);
        asm("adc [bp+di],cx");
        asm("aas");
        *(si + 0xb81) = *(si + 0xb81) ^ cl;
        ax = ax ^ 53354;
        (restore)ax;
        asm("das");
        asm("adc cl,[bp+di+0xe98d]");
        asm("popf");
        asm("adc ch,[bx+si-0x58]");
        if(ax = ax + 1) {
            goto L00001552;
        }
        *bx = *bx - ah;
    }
    *%gs:bp+di] = *%gs:bp+di] + dx;
    *L00003966 = *L00003966 | -109;
    *(bx + 0x11) = *(bx + 0x11) & si;
    *(bp + si + 0x2040) = *(bp + si + 0x2040) | ah;
    si = 50571;
    bl = "";
L00001552:
    (fsave) *(bp + 62516) / *(bp - 0x1f);
    ax = ax ^ 45782;
    cx = cx + *(bp + si);
    asm("aam 0x3f");
    asm("adc dl,[bp+0x9932]");
    *(bx + di + 61476) = *(bx + di + 61476) + sp;
    ax = ax - 35830;
    sp = 0x40fa;
    *(bx + di + " ") = 0;
    asm("sbb ax,0x5f1a");
    asm("a32 pop es");
    asm("aam 0x1");
    ax = ax + 1;
    asm("xchg ax,dx");
    asm("cmpsw");
    *(bp + si) = *(bp + si) ^ dl;
    asm("loope 0x15e6");
    *di = eax;
    di = di + 4;
    bh = bh + *(bp + si + 46237);
    (save)ax;
    asm("adc dh,[si+0x45]");
    asm("sti");
    asm("cmpsw");
    al & 0x76;
    ch = 0x18;
    if(!(dx = dx + 1)) {
        *(bx + di + 0x1101) = *(bx + di + 0x1101) >> 1;
        cx = 0x19;
        *L0000FE6A = al;
        asm("adc [bp+di-0x56],ah");
        if(!( *L00003101 = *L00003101 + ah)) {
            41328 = *(bx + 0x2c0a) * bp;
        }
        (restore)ss;
        asm("adc ax,0x1210");
        cx = cx - 1;
        sp = sp + 1;
        al :: cl;
        (save)ds;
        *di = 0x3093;
        di = di + 4;
        asm("Unknown opcode 0x0f");
        L000055D3(ds);
        asm("arpl cx,bp");
        *di = eax;
        di = di + 4;
        *si = *si | 0x66;
        asm("a32 pop bp");
        (save)ds;
        cl = 0xe5;
        asm("aas");
        (save)ax;
        ax = ax + 1;
        bp = bp - 1;
        asm("stc");
        -99 = *(bx + di - 0x58) * sp;
    }
    bx = bx + 1;
    asm("adc al,0x5a");
    *(bp + si + 0xf) = *(bp + si + 0xf) - dl;
    asm("cli");
    sp = 26161;
    (fsave)(frestore) * *(bx + di + 56602);
    sp = sp - 1;
    ax - 55081 :: *(bx + si + 0x44);
    asm("sbb al,0x27");
    asm("aas");
    *bx = *bx + bh;
    dh = 0x56;
    ax :: 58042;
    asm("aad 0x41");
    di = 0x100b | *(bp + 0x100b);
    ax = ax + 1;
    bh = 0x40;
    asm("adc dl,[bp+si]");
    ax = *L0000434D;
    asm("enter 0xc11e,0x1e");
    bx = bx | *(bp + 0x217d);
    asm("adc al,0x80");
    asm("insb");
    asm("std");
    *si = *si & cl;
    *si = *si | 0x42fd;
    (save)si;
    while(ax = ax + 1) {
    }
    *(bp + di - 0x5c) = *(bp + di - 0x5c) + si;
    asm("loop 0x15d3");
    (save)0x150e;
    (save)"Y- ";
    asm("Unknown opcode 0x82");
    ax = ax + 1;
    cl = 0x5a;
    asm("sbb bp,[bp+di+0xc1e4]");
    *di = *si;
    di = di + 4;
    si = si + 4;
    (save)sp;
    asm("in ax,0x1d");
    di = di - 1;
    bh = bh | *(bx + si + 0x556d);
    al = *L00008403;
    asm("adc ax,0x5427");
    *bx :: 0x6e;
    asm("adc [bx],di");
    asm("umov [bp+di],cl");
    asm("Unknown opcode 0xc6");
    ax = 0x1f7;
    si = 0x2a7d;
    cl = 0xb4;
    *L0000CFAD = *L0000CFAD - dx;
    *(bp + di + 0x50) = *(bp + di + 0x50) | 0x1f7;
    asm("rol word [bp+si+0x6815],0x5f");
    *(bx + si + 0x7f) = *(bx + si + 0x7f) + 1;
    ax = ax + 1;
    asm("outsb");
    (restore)di;
    al & 0x83;
    *(si + 0xa) = *(si + 0xa) & 0xfd;
    *(bx + si + 0x4540) = *(bx + si + 0x4540) + 22170;
    asm("Unknown opcode 0xfe");
    asm("wait");
    asm("jpe 0x1669");
    ah = "ough memory$ Y- ";
    *di = *si;
    di = di + 1;
    si = si + 1;
    di = di - 1;
    asm("bound ax,[bx+di]");
    asm("adc dl,[di]");
    asm("xchg ax,dx");
    dl = dl & *(bp + si);
    *%es:bx] = *%es:bx] + di;
    (restore)es;
    L000056a3();
    asm("daa");
    asm("psrld mm2,mm5");
    asm("cld");
    *L00000B6E = cs;
    asm("%c add ax,0xd2ea");
    asm("adc byte [bx+si],0x49");
    (save)cs;
    asm("rcr word [si],0xe");
    asm("fldenv [di+0x237c]");
    asm("adc al,0x37");
    bp = bp >> 1;
    if(!(al = al + 0x79)) {
        asm("hlt");
        asm("aas");
        asm("arpl dx,dx");
        return;
        asm("std");
        asm("aas");
        asm("sbb bp,[bp+di+0x48]");
        asm("out 0x0,al");
        si = si + 1;
        asm("adc al,0x42");
        if(-121 = di * bp) {
            goto L00001707;
        }
        > ? L000016e9 : ;
        si :: *(bp + si - 5);
        asm("scasb");
        asm("lds ax,[bp+di+0xc310]");
    }
    (save)ds;
    asm("adc cl,[bp+di]");
    asm("rol byte [%ss:bp+si+0x2d12],cl");
    *di = *di + ax;
    asm("daa");
    asm("%s push bp");
    (restore)dx;
    if(!(ax = ax + 1)) {
        asm("xchg ax,di");
        bp = bp + 1;
        asm("sti");
        (fsave)(frestore) / *(bp - 0x60);
        *(bx + si) = *(bx + si) + bh;
        asm("adc dl,[bp+si]");
        -92 = *%gs:bx+di-0x7f] * di;
    }
    asm("aas");
    (save)cs;
    ax - 1 :: 0x43;
    ax = ax - 1 | 0x403e;
    asm("xchg ax,[bx+si+0x45]");
    *(si + 0x75) = *(si + 0x75) | dl;
    asm("xchg ax,bx");
    *(bp + di + 0x48) = *(bp + di + 0x48) + sp;
    di = 49163;
    asm("loopne 0x1693");
    ax = ax + 1 & 31808 & 65165;
    *(bp + di) = *(bp + di) + di;
    asm("%d stosb");
    asm("adc word [bx+si],0xa3ca");
    asm("retf");
    *(bp + si) = *(bp + si) & ah;
    ch = 0xd8;
L00001707:
    *di = *si;
    di = di + 4;
    (save)si + 4;
    bp = 30010;
    (save)si;
L00001713:
    asm("aas");
    if(ax = al & *(bx + di) & 58099) {
        goto L00001713;
    }
    asm("salc");
    (restore)di;
    (save)ds;
    asm("xchg ax,dx");
    (save)sp;
    *di = *si;
    di = di + 1;
    si = si + 1;
    sp = sp >> 6;
    asm("enter 0x4443,0x0");
    *bx :: cx;
    asm("sbb dh,0x3d");
    asm("adc word [0x4c16],0xf1ff");
    asm("pusha");
    al = *L00004003;
    asm("insb");
    *(bp + si + 0x63) = *(bp + si + 0x63) & di;
    *%ds:bp+di+0xf597] = *%ds:bp+di+0xf597] & 0x23;
    *(bp + di + 0x62) = *(bp + di + 0x62) ^ ah;
    ax = ax + 1 | 0x311;
    bl = 0xa9;
    asm("std");
    asm("adc [bp+si+0x11],dx");
    ah :: *(bx + si + 0x1057);
    ax = ax - 22848;
    *(bp + 0x7b) = *(bp + 0x7b) ^ sp;
    if(!(0x4b = *(bx + di + 59668) * dx)) {
        asm("psrld mm7,mm0");
        asm("sbb bh,[bx+si]");
        asm("jpe 0x17d4");
        asm("xchg ax,si");
        dx = dx + 1;
        asm("%c o32 push cs");
        *(bx + si + 0x6e) = *(bx + si + 0x6e) & dl;
        bp = 0x163e;
    }
    *(bx + di + " Y- ") = *(bx + di + " Y- ") + dx;
    *(si + 0x5a) = *(si + 0x5a) & 0x9b;
    asm("Unknown opcode 0xd3");
    asm("hlt");
    (restore)es;
    return;
    asm("cli");
    ax = ax + 1;
    asm("das");
    si = si - 1;
    (restore)dx;
    asm("insw");
    ch = "!Not enough memory$ Y- ";
    if(!( *(si - 0x45) = *(si - 0x45) - di)) {
        *(si + "nough memory$ Y- ") & si;
L00001789:
        ax = *L000020ED;
        asm("cwd");
        bl = 0;
        al = al + 0x49;
        (save)bp;
        asm("cli");
        dx = dx + 1;
        dh = 0xca;
        asm("fcomp dword [bx+di+0x5d01]");
        (save)es;
        asm("fnstcw [bx]");
        asm("adc dl,[bx+si+0x19a8]");
        asm("out 0x68,ax");
        if(*(bx + si + " Y- ") = *(bx + si + " Y- ") - al) {
            goto L000017f2;
        }
        ch = ch << 0xef;
        asm("aam 0x21");
        bx = bx + 1;
        asm("rol byte [bx+di],0x13");
        *(bp + di) = *(bp + di) ^ dh;
        (save)ss;
        if(bh = bh + *(si + 0x7a)) {
            goto L000017fb;
        }
        ax = ax + 1;
        ax :: 23482;
        asm("clc");
        asm("cmpsb");
        (save)cs;
        *(bp + 0xa) = *(bp + 0xa) + bx;
        asm("Unknown opcode 0xf6");
        ax = (ax | *(bx + si + 27078)) + 1;
    }
    if(!( *(bx + si + 0x14) = *(bx + si + 0x14) & bp)) {
        bl = 0xd1;
        (restore)sp;
        dh = " Y- ";
        al :: 0x10;
        cx = cx + cx + 1;
        asm("cmpsb");
        asm("adc dl,[bp+di]");
        bp = bp - 1;
        asm("%g jnl 0x17b8");
        ax = ax | *(bx + si);
        (restore)es;
        (save)sp;
        *(bx + si + " Y- ") = *(bx + si + " Y- ") - ax;
        asm("%s leave");
        asm("jpo 0x17fe");
        *L00008ED6 = ax;
        si = si | di;
L000017f2:
        asm("in ax,dx");
        (restore)di;
        asm("xchg ax,bp");
        (restore)ss;
        asm("les cx,[bx+si+0xd279]");
L000017fb:
        asm("out 0xe7,al");
        di = di + 1;
        (save)0x3f;
    }
    asm("aam 0x1b");
    if(*(bp + 0x50) = *(bp + 0x50) | di) {
        goto L00001789;
    }
    -109 = *(bp + di + "ot enough memory$ Y- ") * dx;
    return(0x56);
    asm("clc");
    ax = ax | 0x2840;
    (save)0x4a;
    asm("enter 0xa082,0x71");
    bp = bp + 1;
    fs = *(di - 0x2e);
    *(bx + si + 27366) = *(bx + si + 27366) & -26;
    asm("aas");
    asm("arpl [bx+di+0x5a7f],ax");
    asm("ror byte [bp+0x2887],0xa0");
    al = al ^ *(bx + si + 22317);
    dl = dl / dl;
    edx = dl % dl;
    bx = 45018;
    ch = "nough memory$ Y- ";
    di = di - 1;
    asm("cli");
    asm("xchg ax,dx");
    bh = bh ^ bl;
    dx = es;
    asm("aas");
    ah = al + "ough memory$ Y- " ^ *(bx + di + 0x3d57);
    (save)ss;
    asm("Unknown opcode 0x82");
    asm("sbb [di+0x3a],ch");
    if(!(ax = ax - 0x1235)) {
        (save)di;
        (save)bx;
        asm("sbb ax,0x17d");
        (save)cx;
        ax = ax + dx;
        *(bx + si + "!Not enough memory$ Y- ") = *(bx + si + "!Not enough memory$ Y- ") + ax;
        cx = si;
        asm("sbb [bx+di+0x36b2],al");
        (save)es;
        if(ax = ax + 0x1240) {
            goto L000018c1;
        }
        si :: sp;
        asm("daa");
        asm("adc cl,[bx]");
    }
    (restore)si;
    ax = ax + 1;
    *(si + 0xd41) & sp;
    di = di + 1;
    ax = (ax ^ 55332) + 1;
    al = "ugh memory$ Y- ";
    sp = sp ^ *bx;
    asm("xchg ax,bx");
L0000187f:
    (restore)bp;
    *(bx + di) = *(bx + di) + bh;
    al :: 1;
    *(bp + si + 0x59) :: ch;
    asm("jpo 0x186a");
    asm("pushf");
    if(!(ax = (ax | 24739) & 0x36e9)) {
        *%gs:bp+di] :: sp;
        bx = bx - 1;
        *(bx + 0x42) = *(bx + 0x42) | bh;
        (save)ss;
        return;
        asm("cmpsw");
        (restore)ss;
        bp = 0x19d6;
        (save)dx;
        *(bx + si + 25145) = *(bx + si + 25145) + ax;
        asm("packsswb mm7,[di]");
        al & 0x57;
        (restore)sp;
        (save)bx;
        asm("das");
    }
    asm("rol byte [bx+si+0x1b],1");
    cl = cx + 1 ^ *si;
    *(bp + di) = *(bp + di) & 0x16;
    asm("salc");
    *di = *si;
    di = di + 1;
    si = si + 1;
    cx = cx + 53349;
    asm("cmc");
    asm("adc cl,0x88");
L000018c1:
    *(bp + di) = *(bp + di) - 1;
    bp = bp + 1;
    al = al & 0xb9;
    asm("Unknown opcode 0xc6");
    asm("wrmsr");
    al = 0xe5;
    asm("xchg ax,di");
    asm("Unknown opcode 0x0f");
    cx = 0x2ff;
    *L000027AA = ax;
    *(bp + di) = *(bp + di) ^ 0x6d;
L000018d5:
    (save)sp;
    asm("jpe 0x1958");
    asm("aaa");
    dh = 0xac;
    (save)si;
    -41 = *si * di;
    ax = ax - 38864 + 1;
    asm("adc ch,al");
    -91 = *(bp + si) * di;
    dl = "";
    asm("adc ax,0x7842");
    di = 0x1716;
    asm("das");
    *di = al;
    di = di + 1;
    asm("aad 0x67");
    asm("jpe 0x1975");
    (save)si;
    (save)bx;
    (save)ax;
    if(si = si + 1) {
        goto L0000187f;
    }
    asm("xchg bl,al");
    asm("%e cmp dl,0x87");
    asm("out dx,ax");
    asm("a32 inc ax");
    ax = *L00006EE1;
    asm("adc al,0xb");
    (save)cs;
    goto L00001c49;
    (save)dx;
    asm("adc bx,sp");
    ax = ax + 0x147f;
    asm("outsw");
    bx = bx + 1;
    bp = bp - 1;
    asm("Unknown opcode 0xfe");
    asm("xchg ax,bx");
    (save)cs;
    asm("adc al,0x10");
    asm("adc ah,[bx]");
    al & 0x15;
    ax = ax + 1;
    asm("sbb al,0xeb");
L0000192d:
    (save)bx;
    if(!(32299 = *L00009E6A * di)) {
        asm("%c dec sp");
        eax = *esi;
        esi = esi + 4;
        (save)0x12ce;
        asm("arpl [bx+di],si");
        *(bx + 0x7e) = *(bx + 0x7e) & 0x3ff5;
        ax = ax + 1;
        di = 0x193f;
        asm("sbb ah,[0x3b6]");
        (save)dx;
        asm("adc [bp+di+0x3d],si");
        (restore)sp;
        ds = di;
        ax = L0000df91();
        if(al & 0x56) {
            goto L000018d5;
        }
        *(bx + si) = *(bx + si) & 0x3740;
        (save)ss;
        bp = bp + 1 - 1;
        asm("rol word [di+0xa5a0],0x43");
        asm("xchg ax,cx");
        bx = bx + 1;
        asm("xchg ax,di");
        asm("adc dl,[bp+si]");
        asm("adc [bp+si+0x5174],dh");
        if(bp = bp - 1) {
            goto L00001992;
        }
        ax = ax - 0x3bd3;
        sp = sp | *(bp + di + 0x60);
L0000196f:
        asm("cwd");
        *bx = al;
        (save)sp;
        asm("daa");
        al = ax + 1 ^ 0xa;
    }
    bh = bh - *L00004715;
    (save)59688;
    if(!(ax = ax + 1)) {
        if(di = di + 1) {
            goto L0000196f;
        }
        goto L0000192d;
        *di = *si;
        di = di + 1;
        si = si + 1;
        ax :: 0x19ea;
        cx = cx ^ *L0000A001;
    }
    asm("das");
    asm("aas");
L00001992:
    asm("sbb [bx+di],bl");
    (restore)ss;
    bp = bp + 1;
    -45 = *(bp + si + 0x3e) * si;
    if(!(bx = bx - 1)) {
        >= ? 0x19fc : ;
        *(bp + si + 0x4c12) = *(bp + si + 0x4c12) - 1;
        (restore)es;
        *(bp + di) = *(bp + di) + bl;
        (save)es;
        *(bx + si + 33600) = *(bx + si + 33600) | ch;
        asm("sbb [bx+si+0x68],al");
        asm("aam 0x41");
        (restore)ss;
        *(bp + di + 0x121a) = *(bp + di + 0x121a) << 0x5d;
        (save)"ry$ Y- ";
        if(!( *(di + 46642) = *(di + 46642) | al)) {
            asm("adc [si-0x18],dx");
            asm("adc byte [di+0x4711],0x25");
            ax = ax + 1;
            if(dx = dx - 1 - 1) {
                goto L00001a4b;
            }
            *(bp - 0x45) :: dl;
            di = di | *(bp + si + 0x167c);
            (restore)bp;
            *(bp + si - 0x80) = dh;
            asm("adc bl,[bp+0x6a]");
L000019dc:
            if(cx = cx | *(bp + di)) {
                goto L00001a4b;
            }
            if(si = si | *(di + 0x73)) {
                goto L000019dc;
            }
            al = *L00004051;
            (save)cx;
            goto L0000890b;
            di = dx;
            asm("cli");
            *(di + 0x4078) = *(di + 0x4078) + bx;
            asm("insw");
            ax = L00005e10();
            (restore)ss;
            *(bx + si + 0x7b) = *(bx + si + 0x7b) | al;
            asm("sbb [bp+si-0x1d],bl");
            al = al - 0x81;
            *L00000F43 :: 48189;
        }
    }
L00001a02:
    asm("%s jmp short 0x1a7f");
    ax = bx + di + 0x12;
    asm("xchg ax,bp");
    ax = ax & 41624;
    asm("popa");
    dx = dx + *(bx + si);
    asm("wrmsr");
    dx = dx + *(bp + si);
    ax = ax & 0x3740;
    di = 43587;
    asm("wait");
    if(sp >= bx) {
        ax = L0000db06();
        asm("adc ah,[bx+0x828f]");
        asm("%c adc dl,al");
        asm("bound di,[di+0x2a]");
        *L00001400 = al;
        di = 0x1717;
        (save)cx;
        asm("rcl byte [bp+di-0x7f],0xb6");
        al = al | 0x53;
        cx = cx + 1;
        bx = *di;
        (restore)bp;
        di = di + 1;
        asm("ror byte [bx+di],1");
        *(bx + si - 0x3f) = *(bx + si - 0x3f) | 0x6b;
        al = al + *(bx + si + 45418);
        return;
L00001a4b:
        (save)cs;
        return;
        gs = *L0000E30B;
    }
    asm("adc ch,cl");
    di = di | *(bp + 0x45);
    asm("%d xchg ax,di");
    if(dx = dx + 1) {
        goto L00001a02;
    }
    asm("aas");
    asm("adc [di],bl");
    asm("loopne 0x19e2");
    ax = (ax & 0x1950) + 1;
    *(bp - 0x5f) = *(bp - 0x5f) & ch;
}

/* DEST BLOCK NOT FOUND: 00001a6e -> 00002cb1 */
/* DEST BLOCK NOT FOUND: 00001a9f -> 00001a47 */
/*	Procedure: 0x00001A67 - 0x00001A91
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001A67()
{



    asm("outsb");
    ax = *L00007B3C;
    asm("outsw");
    asm("adc ch,al");
    goto L00002cb1;
    cx = cx | bx;
    *di = *si;
    di = di + 1;
    si = si + 1;
    return;
    asm("outsb");
    asm("sti");
    bp & di;
    asm("hlt");
    if(!(cx = cx - 1 | *(bp + si))) {
        ax = ax + 1;
        asm("adc dh,[di+0x84c0]");
        asm("fdivr qword [bp+si+0x70]");
        (restore)bx;
        *(bp - 0x3f) = bh;
        (save)si;
        asm("pushf");
    }
    asm("adc ax,0xea2c");
}

/* DEST BLOCK NOT FOUND: 00001a9f -> 00001a47 */
/* DEST BLOCK NOT FOUND: 00001ad6 -> 00001b11 */
stack space not deallocated on return
/*	Procedure: 0x00001A92 - 0x00001AEF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001A92()
{



    *(bp + si + 0x11b) = *(bp + si + 0x11b) + ah;
    ax = ax + 1;
    (restore)ds;
    asm("sbb [bx+di],al");
    asm("Unknown opcode 0x82");
    asm("xchg ax,si");
    asm("Unknown opcode 0x82");
    if(*di & si) {
        goto L00001a47;
    }
    cl = 0xc1;
    sp = sp | *(si - 0x44);
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("adc [bp+di+0x65],cx");
    asm("aad 0x5a");
    *di = al;
    di = di + 1;
    asm("sbb dl,dl");
    (restore)es;
    asm("adc bl,[di]");
    (save)ax;
    sp = sp ^ *di;
    ax = ax + 1;
    bl = bl & *(bx + di);
    asm("movq [si],mm6");
    *L00005A9D = ax;
    asm("adc [di+0x2],bl");
    al :: 0xbe;
    (save)cx;
    asm("adc byte [bp+si],0xa3");
    asm("out dx,ax");
    asm("adc word [bp+si+0x35],0xe7f");
    bh = bh - *(di + 0x197d);
    (restore)ss;
    cx = cx + 1;
    *(bx + si + 0x57) & ax;
    asm("jpe 0x1b11");
    (save)cx;
    (save)sp;
    asm("cmc");
    asm("in ax,0xa");
    asm("sbb dx,si");
    bx = bx - 1;
    asm("sbb word [bx+si-0x17],+0xf");
    0x1640 = *(si - 0x2e) * sp;
    asm("rcl dl,0xd4");
    return;
    dl = "ot enough memory$ Y- ";
}

/* DEST BLOCK NOT FOUND: 00001ccb -> 0000b9df */
stack space not deallocated on return
/*	Procedure: 0x00001AF0 - 0x00001F99
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001AF0()
{



    asm("sbb ax,0xaa97");
    asm("adc [bp+si-0x41],ah");
    bl = 0x5d;
    (save)dx;
    al = al & 0x21;
    (save)sp;
    asm("hlt");
    asm("clc");
    asm("adc ah,[bp+si+0x74c]");
    asm("sbb [bx+si+0x25],bp");
    (save)sp;
    (fsave)(frestore) + *(bx + si + 0x15);
    bx = 43197;
    *(bp + si + 0x12) = *(bp + si + 0x12) | al;
L00001b0d:
    asm("adc ah,[si+0x1b54]");
    asm("%f and al,0xbf");
    asm("rol byte [bx+si+0x47],1");
    asm("rol word [bx+di+0xe],1");
    asm("Unknown opcode 0x82");
    sp = sp + 1;
    bx = bx + 1;
    asm("cmc");
    asm("repne call [bx]");
    asm("ror word [bx+si-0x2a],cl");
    asm("bound bx,[bp+di]");
    ch :: *(bp - 0x36);
    (restore)bp;
    *(bp + di + 38077) = *(bp + di + 38077) | al;
    (restore)ax;
    asm("a32 jng 0x1ab5");
    ax = ax + 1;
    asm("aaa");
    asm("sbb [bx+si],ah");
L00001b38:
    asm("Unknown opcode 0x62");
    asm("rcl word [0x579],0x8d");
    (restore)di;
    if(ax = ax + 1) {
        goto L00001b38;
    }
    ax = ax & 44628;
    asm("loope 0x1b2f");
    asm("aas");
    asm("rcl bh,1");
    ax = ax + 1 + 1;
    asm("adc [bp+0x5746],dh");
    *di = *di + bx;
    (save)ax;
    (save)ax;
    al = al & 0x3f;
    *(si + 64841) :: 0xa1;
    asm("adc [di+0x104d],bx");
    dh = dh + ah;
    asm("Unknown opcode 0x82");
    *(bp + 0x2fb6) = *(bp + 0x2fb6) ^ bp;
    asm("outsw");
    if(bp = bp + 1) {
        goto L00001b0d;
    }
    asm("sti");
    <= ? L00001b78 : ;
    asm("adc byte [di],0xd0");
    if(!(ax = L000041e8() + 1)) {
        (restore)di;
        (save)dx;
        asm("xchg ax,dx");
        cx :: *si;
        asm("%e pop bp");
        dl = dl + al;
        (restore)ax;
        (restore)sp;
L00001b83:
        asm("Unknown opcode 0xff");
    }
    asm("aas");
    asm("sbb ax,[bx+si+0xf]");
    ax = ax + 1;
    asm("jpo 0x1ba3");
    (restore)ds;
    al = ax - 0x141 ^ 0;
    bh = " Y- ";
    asm("Unknown opcode 0x82");
    si = si | *(bp + si);
    asm("xchg ax,dx");
    *L00006015 = al;
    cx = cx - 1;
    *(bx + 0x12) = *(si + 0x40);
    al = *esi;
    esi = esi + 1;
    (save)bx;
    asm("in ax,0x13");
    *(bp + "h memory$ Y- ") = *(bp + "h memory$ Y- ") + si;
    cx = cx - 1;
    asm("Unknown opcode 0xfe");
    (save)-88;
    asm("adc [di+0xbe10],cx");
    asm("Unknown opcode 0x8f");
    (fsave) *(bp + di);
    si = si - 1;
    *L00006F1C = ax;
    asm("ror word [bp+di-0xb],cl");
    asm("adc [bp+di+0xc039],ch");
    asm("aas");
    asm("sbb [di+0x1741],bh");
    ax = ax + 1;
    (restore)si;
    asm("xchg ax,di");
    *di = *si;
    di = di + 1;
    asm("in ax,dx");
    asm("bound sp,[bp+di-0x2e]");
    (restore)es;
    return;
    asm("aam 0xc0");
    if(si = si + 1) {
        goto L00001b83;
    }
    (save)dx;
    ax = ax + 1;
    *(bp + si) = *(bp + si) ^ bp;
    *L00005B0E = *L00005B0E + cl;
    *L00005385 = ax;
    asm("aam 0x74");
    bp = bp + 1;
    (save)-124;
    asm("cwd");
    asm("sbb word [si+0xc249],0x28d0");
    sp = 0x3e12;
    asm("arpl [bx+0x1863],si");
L00001bf2:
    (restore)ss;
    asm("das");
    (restore)dx;
    asm("xchg ax,bx");
    if(!(cx = cl + ch + 1)) {
        al :: 0x93;
        *(bp + "Y- ") = *(bp + "Y- ") & di;
        ch = ch & ( *L00003A76 | *(bx + si + " Y- "));
        *bx = *bx | 0x88;
        asm("das");
        asm("rep rcl byte [bp+si],1");
        asm("sahf");
        asm("Unknown opcode 0xc4");
        asm("hlt");
        cl = cl | *bx;
        asm("imul byte [bp+si+0x1c]");
        asm("outsw");
        di = di - *(bp + si + 0x3f);
        bp = bp | *(bx + di);
        (restore)cx;
        asm("aad 0x17");
        if(!(ax = ax + 1)) {
            asm("aam 0x6");
            ax = ax + 1;
            asm("adc cx,bx");
            asm("aad 0x6b");
            bx = bx - 1;
            goto L00007c0e;
            if(!(bp = bp + 1)) {
                ah = 0x40;
                asm("sbb ax,[bx+si+0x7]");
                sp = sp + 1;
                ax = ax - 1;
            }
            cl = cl + *(bp + si);
            asm("iret");
        }
        ax = ax + 1;
        cx = cx + 1;
        al = *L000040D1;
        (restore)cx;
        bh = 0x68;
        *(bp + 0x61) = *(bp + 0x61) + sp;
        (save)es;
        dl = 0x7e;
        (save)ss;
        asm("xchg ax,bx");
        asm("adc cl,[bp+di]");
        dx = si;
        asm("adc bh,bh");
        sp = sp + 1;
        ax :: ax;
        sp = sp + 1;
        (save)dx;
        asm("%e dec sp");
        ah = *(bp + si);
        asm("adc [bp+di],dx");
        *(bx + di) = *(bx + di) + dx;
        if(*di = *di + bp) {
            goto L00001bf2;
        }
        (save)cs;
        asm("enter 0x4009,0x5a");
L00001c64:
        al = 32437;
        asm("int1");
        asm("jpe 0x1c8e");
        asm("cbw");
    }
    dx = dx + 1;
    asm("hlt");
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("daa");
    asm("o32 mov ch,0xb2");
    bl = 0xcd;
    dx = dl + dh - 1;
    al = al + al;
    (restore)ss;
    ch & 0xcd;
    di = 0x5017;
    asm("ficom word [bp+si+0x1bff]");
    asm("cmpsw");
    asm("in ax,dx");
    (restore)bx;
    if(si = si + 1) {
        goto L00001c64;
    }
    (restore)es;
    asm("adc word [bp-0x35],-0x30");
    (save)" Y- ";
    al = al - *(bx + si + 0x443c);
    if(ax >= 0) {
        asm("%d cmp al,0xd");
        asm("rdpmc");
        asm("out 0x63,ax");
        ax = 25623;
        ax = *L0000252D;
        asm("xchg ax,si");
        asm("rcl byte [bp+si],cl");
        si = 40502;
        asm("xchg ax,si");
        asm("rep xchg ax,[bp+si]");
        *(bx + si + 0xd) = *(bx + si + 0xd) + ax;
        asm("adc [bx+di],dx");
        *L00000A3F = *L00000A3F | 0xd;
        *(bx + si - 0x7a) = *(bx + si - 0x7a) | cl;
        ax = (ax | 0x3e3f) + 1;
        di = di & *(bp + di);
        if(bx = bx + 1) {
            goto L00001d0e;
        }
        goto L0000b9df;
        sp = sp & si;
        asm("xchg bl,dh");
    }
    si = si + 1;
    dl = ax + 1;
    cx = 0x1212;
    *(bx + si + 0x3f) = 0x1414;
    asm("Unknown opcode 0xc6");
    si = 0x4081;
    ax = ax & 23616;
    asm("retf 0x8cd0");
    asm("%f dec si");
    ax = ax - 24552;
    (restore)ax;
    ax = ax | 0x403a;
    asm("sbb ax,[si-0x1a]");
    al = al | 0xc0;
    (restore)cx;
    asm("aaa");
    *(bx + si - 0x7d) & 0x65;
    bp = bp + 1;
    cx = cx + 1;
    *(bx + si) = *(bx + si) ^ dl;
    si = si | *(bx + 59509);
    bl = bl + *(bp + di);
    di = di + *L00003580;
    *L0000811F = ax;
L00001d0e:
    asm("xchg ax,si");
    (save)ss;
    asm("Unknown opcode 0x8c");
    if(!(dx = dx - 1)) {
        >= ? L00001d54 : ;
        *(bx + si + 0x42) = *(bx + si + 0x42) & al;
        ax = ax | 0x4042;
        di = di + 1;
        asm("xchg ax,bp");
        (restore)es;
        asm("sahf");
        (save)bx;
        (al & 0xad) :: *(bp + di);
        al = al & 0xad ^ 0x31;
        asm("fnstenv [si+0x12]");
        asm("wait");
        *(bx + di) = dh;
        asm("retf 0xbe40");
        ax = 0x1240;
        asm("%c cmpsb");
        asm("cbw");
        (save)cs;
        *(bx + di + 0x5be) = al;
        asm("cli");
        *bx :: 23878;
        *(bx + di - 0x6e) = *(bx + di - 0x6e) & 0x8e;
        asm("in al,dx");
        es = sp;
        (restore)bx;
        bh = 0x83;
        (save)si;
        di = 25727;
        (save)ax;
        ax = ax + 1 + 1;
        if(*(0x83 + si + 0xe) = *(0x83 + si + 0xe) - al) {
            goto L00001da8;
        }
        cx = cx + *(bx + si + 42663);
        asm("sbb ax,0x1371");
    }
    asm("Unknown opcode 0xc5");
    asm("in al,0x68");
    *di = eax;
    di = di + 4;
    asm("adc ch,[bx+si+0x80f6]");
    al :: 0x54;
    asm("Unknown opcode 0xfe");
    asm("rol byte [bp+di+0x46],cl");
    asm("Unknown opcode 0x82");
    *di = *si;
    di = di + 4;
    si = si + 4;
    (save)bp;
    asm("sbb al,0x13");
    asm("Unknown opcode 0x0f");
    al = al + 0x85;
    if(!(cx = cx + 1)) {
        asm("ror word [di],0x1");
        al = al ^ 6;
        (save)ax;
        (save)ax;
        ax = ax + 1;
        if(!(di = di - 1)) {
L00001d80:
            < ? L00001dad : ;
            *(bx - 0x6b) = *(bx - 0x6b) ^ di;
            asm("cli");
            (restore)si;
            asm("adc [0x401f],al");
            bp = bp - 1;
            if(ax = ax + 1) {
                goto L00001df8;
            }
            bx = 55823;
        }
    }
    asm("xchg al,al");
    di = di | *L0000A03E;
    asm("arpl [bp+di+0xabe8],cx");
    if(ax = ax + 1) {
        goto L00001d80;
    }
    bl :: *bx;
    (save)bx;
    sp = sp + 1;
    asm("sbb word [0x21c0],-0x2b");
L00001da8:
    asm("xchg ax,si");
    *(bx + di) = *(bx + di) + 0xa8;
    eax = *esi;
    esi = esi + 4;
    di = di ^ *bx;
    (save)bp;
    al & 0xbd;
    *(bx + si) = *(bx + si) - 0x78;
    bh = bh ^ *(bx + di + 53771);
    asm("loope 0x1d7c");
    asm("in al,0x40");
    asm("in al,0x2e");
    asm("adc cx,[bp+di]");
    asm("adc dx,[bp+di]");
    asm("int 0x2");
    ax = ax + bp;
    *(bx + si + 0x6a) = *(bx + si + 0x6a) + al;
    ax = al - 5 + 1;
    (save)ds;
    asm("lds bp,[0xbd10]");
    bp = bp - 1;
    asm("xchg ax,dx");
    *L00000F3A = cl;
    al = *L00006210;
    bx = 48769;
    asm("outsw");
    asm("adc al,0x21");
    (restore)bx;
    cl = cl - 0xa5;
    asm("salc");
    al :: 0x10;
    (save)ss;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *(bx + si + 0x6f) = *(bx + si + 0x6f) + 0x54;
    *(si + 0x41) = *(si + 0x41) - 0xd2;
    al = al | 0xe9;
    asm("int1");
    sp = bp;
    (restore)bp;
    ax :: 0x1be9;
L00001df8:
    al = al | 0x6b;
    ax = 0xa2;
    asm("sbb ax,[si+0x5f]");
    asm("scasb");
    ax = (ax + 1 & 46656) + 1 & 65384;
L00001e0a:
    bp = bp + 1;
    asm("fnstenv [di+0x228f]");
    asm("int 0x49");
    ss = *(bp + si + 60356);
    ax = ax & 0x22c0;
    asm("adc al,0x20");
    bp = bp - 1;
    asm("insw");
    asm("lds dx,[bp+si]");
    asm("daa");
    bx = bx + 1;
    asm("rep sub al,0x15");
    ax :: 42523;
    asm("aas");
    *(bp + si - 0x1d) = *(bp + si - 0x1d) + cx;
    asm("xchg ax,di");
    ax = ax + 0x133d;
    asm("xchg ax,cx");
    asm("in al,dx");
    *bx = *bx | 0x11;
    asm("xchg ax,dx");
L00001e34:
    *di = *si;
    di = di + 4;
    si = si + 4;
    ax = ax - 0x1b1e;
    asm("insb");
    asm("salc");
    asm("out 0x10,al");
    asm("Unknown opcode 0xc7");
    eax = *esi;
    esi = esi + 4;
    *(bx + 6) = *(bx + 6) - -12;
    asm("rcl byte [bp+si],1");
    sp = sp ^ *(bp + si);
    if(al & 0x35) {
        goto L00001e34;
    }
    if(ax = ax | 0x1881) {
        goto L00001e0a;
    }
    ax = ax + 1;
    *(bx + 0x74) = *(bx + 0x74) ^ bl;
    sp = sp + 1;
    ax = ax - 0x66c;
    *(di + 22124) = *(di + 22124) >> 0xfd;
    *L000080AB = al;
    (restore)bp;
    ax = ( *L000080AB ^ 3) + 1;
    asm("Unknown opcode 0x82");
    asm("adc al,0x5c");
    bh = 0x40;
    al = (ax | 0x2da7) - 8;
    *(di + 0xb) = *(di + 0xb) - 0x4080;
    asm("adc dl,[bp+0x623d]");
    *(di + 0x1254) :: cl;
    cl :: ch;
    if(!(al & 0x8a)) {
        *si = *si | 0x3a40;
        *(bp + si + 0x70) = es;
        al = al + 2;
        asm("daa");
        asm("adc sp,[bp+si-0x2b]");
        asm("aas");
        asm("aas");
    }
    asm("in ax,dx");
    ax = ax - 0x40e0;
    (restore)di;
    *(bx + si + 32931) :: bx;
    cl = cl & *bx;
    0xf :: 0x1740;
    0;
    (fsave)(frestore) + *(bx + si - 0x60);
    al = 0xf + *(bx + si + 0x73) | 0xb5;
    bl = 0x62;
    ax = ax | 54347;
    *(bp + si) = *(bp + si) >> 0x97;
    di = di + 1;
    asm("in ax,dx");
    asm("sbb bx,[bp+di]");
L00001eb6:
    asm("cli");
    sp = sp + 1;
    asm("sbb [%ss:bx+di+0x4112],sp");
    if(!(ax = ax + 0x4092)) {
        asm("ror byte [0x98d5],0x81");
        *(bx + si + 37489) = *(bx + si + 37489) & al;
L00001eca:
        asm("outsw");
        asm("in ax,0x3b");
        (save)ax;
        al :: "ough memory$ Y- ";
        *(si - 0x32) = di;
        bl = 0x6f;
        if(*%gs:di+0x13] = *%gs:di+0x13] + bp) {
            goto L00001eb6;
        }
        dx = dx - 1;
    }
    asm("cld");
    si = si - 0x80;
    ax = ax | 64639;
    asm("sbb [di],ax");
L00001ee6:
    ax :: 50601;
    *bx = *bx | 40994;
    asm("Unknown opcode 0x62");
    asm("retf");
    (fsave)(frestore) - *(bx + si + 45623);
    dx = dx - *(si + 0x14);
    ax = ax + 1;
    (save)dx;
    asm("adc ax,0xba00");
    if(!( *(bx + si + 0x10) & ch)) {
        ax = ax + cx;
        asm("%c inc bx");
        bx = bx + 1;
        (restore)ss;
        (restore)ss;
        if(*(bp + si) = *(bp + si) + bl) {
            goto L00001eca;
        }
        asm("outsb");
        (save)ax;
    }
    gs = *(bp + di + 0x1de);
    if(ax = ax - 22371) {
        goto L00001ee6;
    }
    ax = (ax & *(bx + si - 0xc) | *(bx + di + 39090)) + 1;
    asm("%e sar ah,0x15");
    bp = bp + 1;
    *(di - 0x69) = *(di - 0x69) >> cl;
    dx = dx ^ *(si + 0x53);
    asm("adc word [bp+si],0x49ef");
    *di = *si;
    di = di + 4;
    asm("adc bl,[di+0xb5a]");
    if(!(si = si + 4)) {
        bp = bp & *(bp + si + 42026);
        ax = ax - 27184;
        (save)bx;
        dx = 0xffe;
        asm("adc [bx+di+0x7],ax");
        ax = ax + 1;
        bp = bp + *%ss:bx+si];
        *(bx + si + 0x3e) & 0x13;
        si = 54722;
    }
    ax = 54848;
    (restore)sp;
    eax = *esi;
    esi = esi + 4;
    asm("adc byte [bp+si],0xe4");
    asm("ror ch,cl");
    (save)ds;
    bh = 0xad;
    if(!( *L0000AABF = *L0000AABF | dh)) {
        asm("cli");
        *(di + 0x45) :: 0x50b5;
        4 = *(bx + 0xde3) * bp;
    }
    asm("salc");
    asm("rol word [bp+di+0xd60],1");
    bx = bx - 1;
    al = *esi;
    esi = esi + 1;
    *(bx + di) = *(bx + di) + ch;
    ax = 0x424a;
    *(di + 0x49) = *(di + 0x49) + bp;
    asm("das");
    asm("insb");
    asm("adc cl,[bp+di]");
    *(bx + si + 0xa0d) = *(bx + si + 0xa0d) + 1;
    asm("fldcw [bp+di]");
    asm("adc [%ds:bp+0x9],bl");
    bh = 0x8d;
    (restore)bp;
    cl & al;
    bp = bp - 1;
    asm("adc cl,[bx]");
    bp = 0x41ba;
    asm("aas");
    asm("adc [bx+di+0x21],ax");
    di = di + 1;
    *L0000FF0A = al;
}

/* DEST BLOCK NOT FOUND: 000021e7 -> 0000f12f */
/* DEST BLOCK NOT FOUND: 00002e0c -> 00001731 */
stack space not deallocated on return
/*	Procedure: 0x00001F9A - 0x00003338
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001F9A()
{



    bh :: 0;
    asm("umov [bx+si+0x12],cl");
    *(bp + di) :: bh;
    (save)bx;
    asm("les ax,[bx+si]");
    asm("adc ah,al");
    goto L00002277;
    (restore)dx;
    bl = bl - *(bp + di + 40704);
    asm("in al,0x6f");
    if(!(cx = cx - 1)) {
        ch = 1;
        sp = sp | *(bp + di + 65039);
        al & 0x88;
        ax = ax + 1;
        (restore)sp;
        bl = *(bp + di - 0x22);
        asm("bound sp,[bx+si+0x6e3f]");
        *(di + 24812) :: -3;
        *L000080C0 = al;
        (save)37066;
        ax = ax + 1;
        asm("daa");
        asm("aam 0x86");
        asm("xchg dh,[0xa932]");
        asm("rcl word [bp+si],0xd4");
        asm("xchg ax,dx");
        ax = *L00004441;
        (save)si;
        if(cl = cl + *(bx + si)) {
            goto L00001ffa;
        }
        (fsave) *(bp + " Y- ");
    }
    cl = cl | *bx;
    asm("outsb");
    asm("das");
    (save)ax;
    bx = bx + 1;
    asm("das");
    al = al | *(bp + 0x47);
    *di = *di + cl;
    asm("xchg ax,bx");
    al = al + 0x52;
    al = 0xff;
    asm("adc ax,[bx+di+0xd428]");
L00001ffa:
    ax = 0x1042;
    asm("cmpsb");
    sp = sp + 1;
    asm("lahf");
    asm("hlt");
    asm("sbb word [bp+0x4023],0xb22");
    *(bx - 0x63) = *(bx - 0x63) | 2;
    asm("bound dx,[bp+si]");
    ax :: 63676;
    ax = ax + 1;
    asm("aaa");
    al & 0x40;
    (restore)bx;
    al = al & 0xfd;
    sp = bp;
    (restore)bp;
    (save)bx;
    asm("cli");
    asm("cmc");
    *(bp + di - 0x7d) = *(bp + di - 0x7d) & dl;
L00002020:
    ax = ax - 23424;
    di = 0x20a5;
    *(bx + si + 0x55) = *(bx + si + 0x55) + 33088;
    si = (si + 1) / (si + 1);
    dx = si % si;
    asm("sbb al,[di+0x7201]");
    (restore)si;
    cx = cx | *(bp + di);
    asm("xchg ax,si");
    (restore)si;
    asm("int 0x10");
    asm("mul byte [bx+di+0x7ed1]");
    asm("adc cl,[bp+di]");
    asm("in ax,0x14");
    *(bp + si - 0x5d) = 0xd5;
    al = *L000044A4;
    asm("aas");
    asm("adc cx,[di]");
    if(!( *(bp + di) = *(bp + di) + cl)) {
        ax = ax | 0x4023;
        asm("in ax,0x3");
        if(!(ax = ax + 1)) {
            asm("lds di,[di+0x2726]");
            (save)-28;
            asm("enter 0x2e2e,0xbd");
            asm("lahf");
            *(bx + di + 49250) = *(bx + di + 49250) & cl;
            asm("adc [si+0x7c17],bh");
            (save)0x52;
            ax = ax | 63197;
            asm("adc bh,[bx+0x4196]");
            cx = cx + 1;
            di = di - *(bx + 65426);
            (restore)sp;
            (save)ds;
            bx = bx + 1;
            if(di = di - 1) {
                goto L00002020;
            }
            *(bx + si + 0x5e) = *(bx + si + 0x5e) << 0xbe;
        }
        asm("%e jng 0x2006");
        ax = ax + 1;
L00002086:
        al = al - 0x16;
        asm("in al,0x96");
        *L00008331 = *L00008331 | 0x437a;
    }
    asm("xchg ax,di");
    si = si + 1;
    asm("scasb");
    sp = ds;
    asm("xchg ax,bp");
    ax = ax + 1;
    *(si + 0x10f2) = *(si + 0x10f2) & 0x36;
    edi = -1005519838;
    ah = ah + dh;
    bx = *LC41127C5;
    ax = ax & 57363;
    asm("sbb ax,0x160c");
    (save)ax;
    asm("adc al,0x40");
    (save)ds;
    bh = bh - *%ds:bx];
    asm("adc [bx-0x4a],ch");
    asm("adc dl,[di+0x1029]");
    asm("lahf");
    goto L0000676a;
    al = al | 0x40;
    asm("Unknown opcode 0x82");
    asm("Unknown opcode 0x8f");
    asm("jpe 0x20a5");
    (save)fs;
    ax = (al & 0xb6) + 1;
    asm("sbb [bx],dx");
    (save)38071;
    *(bx + si - 0x71) = *(bx + si - 0x71) + 1;
    asm("adc [bp+di-0x5f],bx");
    asm("aas");
    di = di - 1;
    bh = 0x5e;
    asm("adc word [bx+di+0x4a],-0x41");
    *si = es;
    *(bx + di + 0xe) = *(bx + di + 0xe) + dh;
    *(di + 0x40) = dx;
    al = ax + 1 + bl;
    (save)sp;
    di = di - 28965;
    asm("adc ax,0x1055");
    asm("aas");
    al & 0x30;
    cl = cl - *(bp + di + 0x79);
    asm("repne cmp ax,bp");
    *L0000CFC6 = al;
    goto L00008540;
    goto L00002086;
    ax = ax + 1;
    al :: 0;
    *(bp + si) & ax;
    asm("aas");
    al = al - 0x11;
    *si = *si & ax;
    asm("umov [si-0x18],ax");
L00002112:
    ah = *(di + 0x382c);
    (save)bp;
    asm("sbb ch,dh");
    asm("Unknown opcode 0xdf");
    si = si | *(bp + si - 0x55);
    *(bx + 7) = *(bx + 7) - -86;
    asm("sbb bx,[bp+si+0xb446]");
    asm("xchg ax,si");
    (save)ds;
    bx = 32600;
    asm("cmc");
    ax = ax & *(bx + di + "ry$ Y- ");
    sp = sp & bx;
    *si = *si - 1;
    (restore)di;
    (save)si;
    asm("hlt");
    asm("fsubr dword [di+0x6e]");
    asm("arpl ax,bp");
    asm("lahf");
    (restore)di;
    (restore)di;
    di = di + 1;
    asm("xchg ax,sp");
    asm("std");
    asm("rol byte [0xb222],0x80");
    asm("sbb [di-0x13],cl");
    if(!( *bx = *bx + cl)) {
        *L00004191 = al;
        ax = ax | *(bp + di + 43563);
        (save)ds;
        dx = *(bp + si);
        asm("Unknown opcode 0x82");
    }
    if(!(bx = bx - 1 - *(bp + si))) {
        0x2be6 = *si * di;
        dx = dx - 1;
        *(si + " enough memory$ Y- ") = *(si + " enough memory$ Y- ") + cx;
        asm("in al,0x28");
        (restore)es;
        al & 2;
        (save)64783;
        ax = L00005a43() + 1 + 1;
        asm("adc [%ds:0x232e],bl");
        al = al & 0x15;
        asm("in ax,0x49");
        bx = 52284;
        *L0000817A = ax;
        asm("adc [bp+si+0xc],ah");
        if(cx > *(di + 0x40)) {
            goto L00002112;
        }
        if(!(al & 0xb7)) {
            cx = cx | *L0000A9E5;
            bp = bp >> 0xfa;
            *(bx + si + 0x48) = *(bx + si + 0x48) >> 0x19;
            goto ( *(bx + si + 0xac7));
            asm("insb");
            asm("popa");
            (save)bx;
            asm("popa");
        }
        asm("rol bh,cl");
        *(di + 24727) = *(di + 24727) + ch;
        (save)cx;
        bx = 32863;
        *di = *si;
        di = di + 1;
        si = si + 1;
        ax = al ^ *(32863 + si + 37120) ^ 48730;
    }
    bx = bx << 0x57;
    asm("cmc");
    *%ss:bx+di+0x45] = ax;
    asm("adc bx,[0x7790]");
    asm("adc al,0x57");
    asm("aad 0x68");
    ax = ax + 1;
    asm("%e xchg ax,cx");
    asm("popa");
    asm("sbb dl,[bx+si]");
    al :: 0x5e;
    (restore)ax;
    asm("adc byte [bp+di],0x7");
    di = 0x3f1c;
    dl :: *(bp + si + "Not enough memory$ Y- ");
    al = al ^ 4;
    (save) *L00003F1C;
    *(bx + 0x3f1c) = *(bx + 0x3f1c) + ax;
    bx = bx + 1;
    asm("adc ch,[bp+si+0x73]");
L000021e0:
    asm("adc [bp+si],dl");
    (restore)ss;
    cx = cx >> 1;
    goto L0000f12f;
    asm("rcl byte [%cs:bp+si],0xd9");
    ax = ax ^ 0x35dc;
    asm("rol word [bx+si+0x2a],1");
    asm("scasb");
    return;
    (restore)ds;
    while(dx = dx - 1) {
    }
    asm("cmpsw");
    <= ? L000021ff : ;
    *(di + 0x49) = *(di + 0x49) + bx;
    di = di + 1;
    asm("rol byte [0x40a6],0x0");
    *(bx + di + 0x40) = *(bx + di + 0x40) + cl;
    return;
    asm("aad 0x3f");
    cl = (cx | *(bp + si)) - *bx;
    *(bp + di + 0x10) = *(bp + di + 0x10) + cl;
    (restore)bx;
    ax = ax & 0xa63;
    asm("adc bp,[di+0xd64d]");
    asm("adc ch,[bp+si]");
    asm("xchg ax,si");
    asm("adc dl,[bx+si]");
    al = al + 0xb1;
    (save)ax;
    asm("wait");
    bx = 36925;
    *(36925 + si + 9) = *(36925 + si + 9) & ax;
    bh :: *(bp + 0xd1c);
    bp = bp + 1;
    asm("out 0x97,al");
    al = al + 0xfe;
    *(bp + di + 35117) = *(bp + di + 35117) + cx;
    asm("jpe 0x22aa");
    (save)ax;
    if(bp = bp + ax) {
        goto L000021e0;
    }
    si = 0x3b80;
    ax :: 49201;
    asm("sbb [bx+di+0xf128],cx");
    dx = dx | *%ds:bp+si];
    asm("sbb sp,[bx+di]");
    sp = 48002;
    asm("cmc");
    asm("Unknown opcode 0x82");
    ax = ax - *(di + 0x7a);
    asm("Unknown opcode 0x8f");
    asm("fnstcw [bp+si]");
    (save)bp;
    asm("outsb");
    (fsave) *(bx + di);
    asm("adc word [bx+di+0x44],-0x1");
    di = 0x201b;
    sp = sp + 1;
    ax = ax + 1;
    if(!( *(bp + 0x125a) = *(bp + 0x125a) - 0x201b)) {
        *(bp + 0x201b) = *(bp + 0x201b) - 1;
        asm("sbb word [bx+di-0x54],0xbb01");
L00002277:
        asm("xchg ax,di");
    }
    asm("int1");
    dh = 0xeb;
    if(!(ax = ax - 37211)) {
        si = si + 1;
        cx = cx - 1;
        (save)sp;
        sp = 0x47d6;
        asm("aam 0x86");
        *di = *di << 0x3e;
        (save)es;
L00002289:
        cx = cx + 1;
        asm("adc word [di],0x1c1c");
    }
    asm("adc ax,0x477f");
    (save)dx;
    (save)es;
    *(bp + di + 39201) = *(bp + di + 39201) - 1;
    *bx = *bx | 54800;
    al :: 0xdc;
    asm("scasw");
    goto L0000d23c;
    al = al + 0x40;
    asm("xchg ax,dx");
    bh = *(di + 0x33b6);
    asm("iret");
    asm("loope 0x22f2");
    bp = bp + 1;
    asm("cmpsb");
    asm("outsw");
    bx = bx + *(bx + di);
    (save)bp;
    ax & 65363;
    (restore)sp;
    if(*(bx + di) = *(bx + di) + ax) {
        goto L00002277;
    }
    ax = ax + 1;
    asm("Unknown opcode 0x82");
    asm("Unknown opcode 0xfe");
    asm("outsb");
    dl = bl;
    *(bx + si) = *(bx + si) << 0x54;
    cx = cx - 1;
    bp = "";
    *(bp + di) = *(bp + di) - 1;
    asm("adc si,[bp+di+0x3d]");
    asm("%d das");
    asm("cmpsb");
    asm("sahf");
    dx = dx - 1;
    asm("adc dl,[bx+di]");
    asm("sbb di,[bx+di]");
    asm("adc [bx-0x14],dx");
    asm("Unknown opcode 0xfe");
    asm("adc al,0xc1");
    asm("salc");
    asm("adc dl,[bx+si]");
    al = al & 0x3b;
    cx = cx + 1;
    asm("wait");
    asm("adc [%ds:bp-0x5c],sp");
    *(bp + si + 0x396a) = *(bp + si + 0x396a) + 1;
    dx = dx & bp;
    (restore)es;
    goto ( *si);
    asm("rol word [bp+si],1");
    *(bp + si + 0x4017) = *(bp + si + 0x4017) - cl;
    *L0000CA1F = al;
    if(sp = sp - 1) {
        goto L00002289;
    }
    *(bp + si) = *(bp + si) + " enough memory$ Y- ";
    *si = *si & si;
    bx = bx + 1;
    (save)sp;
    bp = 0x55cd;
    ch :: *(bx + si + 0x1bfe);
    ax :: 25703;
    al = *L0000E497 + *(di + 0x3b5b) | 0xbc;
    asm("aas");
    cx = cx + 1;
    (save)sp;
    bx = 33664;
    asm("sbb bp,[si+0x817d]");
    asm("sbb bp,bx");
    dl = "memory$ Y- ";
    asm("adc [bx+si+0x400d],dl");
    dl = dl | *(bp + 0x5c);
    asm("sbb al,0x80");
    asm("cli");
    asm("adc ax,0x804");
    cx = cx + 1;
    bp = bp + 1;
L00002335:
    dx = 49236;
    if(!(al = al & 0x36)) {
        asm("xchg ax,dx");
        asm("adc ax,0x475");
        ax = *(bp + di)();
L0000233f:
        ax = L0000c2a2();
        asm("ror word [bp+di],0x60");
        asm("pushf");
        <= ? L00002354 : ;
        asm("adc [bx+di],dh");
        ax = ax + 1;
        asm("%g inc ax");
        asm("adc al,[bx+0x296e]");
        *(bp + si) = *(bp + si) - dl;
        di = di | *(si + 0x63);
        asm("loope 0x22e2");
        asm("jpe 0x2381");
        dx = dx + 1;
        ax = *di();
        asm("in al,dx");
        asm("sbb ax,[di]");
        *(bx + di - 0x15) = *(bx + di - 0x15) ^ 0x83;
        asm("xchg ax,dx");
        ax = ax + 27645;
        *(di + 0x40) = *(di + 0x40) + bp;
        if(dx = dx & *si) {
            goto L000023d1;
        }
        < ? L00002376 : ;
    }
    si = si - sp;
    dx = 0x122b;
    al = *L0000816C;
    asm("adc ax,0x85ae");
    cl = 0x82;
    asm("in al,dx");
    asm("cwd");
    asm("loopne 0x238a");
    goto L00001636;
    if(ch = ch - *si) {
        goto L00002335;
    }
    ax = ax & *(bx + si);
    dx = dx + 1;
    (restore)es;
    asm("sbb ax,0xff14");
    bx = bx + 1;
    sp = *"!Not enough memory$ Y- ";
    asm("adc [bp+si+0xa723],dh");
    asm("sbb al,0xd7");
    asm("das");
    *si = *si | bl;
    if(dl = dl - *L00000B80) {
        goto L0000233f;
    }
    sp = bx;
    *L0000960E = cs;
    cx = cx + 1;
    bx = bx + 1;
    asm("adc al,0xf");
    ax = L00008ff7();
    asm("adc ch,bh");
    al :: 0;
L000023bb:
    asm("insb");
    asm("bound cx,[di+0xfd80]");
    asm("adc [bp+si+0x32c0],ax");
    ah = "nough memory$ Y- ";
    asm("adc al,0x3e");
    (restore)cx;
    eax = *esi;
    esi = esi + 4;
    dx = dx + cx;
    cx = cx + -112;
    asm("adc cl,cl");
L000023d1:
    ax = ax + 1;
    *(bp + si) = *(bp + si) - 0x126a;
    eax = *esi;
    esi = esi + 4;
    asm("retf 0x1096");
    sp = sp - 1;
    asm("rol word [bx+di],1");
    asm("adc [bp+di],ch");
    dx = dx - 1;
    sp = sp ^ *(bx + si);
    ax = ax + 1 | 0x4001;
    ah :: *L00008843;
    di = di + *(bx + 0x160a);
    asm("outsb");
    asm("adc [si-0x6a],di");
    al = *L00004100;
    asm("bound bx,[bx+di+0xe86d]");
    dh = 0xa8;
    asm("adc [bp+si+0x8050],ch");
    asm("%c cwd");
    asm("adc al,[bp-0x6]");
    *(bx + di - 0x7b) = *(bx + di - 0x7b) ^ 0xf6;
    goto L00003211;
    (save)es;
L0000240c:
    dx = 28224;
    asm("sbb si,[si+0x8cbe]");
    asm("ror word [bp+di],cl");
    if(*(bx + 0x48) = *(bx + 0x48) + bx) {
        goto L000023bb;
    }
    ax = ax + 1;
    asm("sbb ax,[bp+si+0x7e67]");
    asm("rol cx,cl");
    sp = sp + 1;
    asm("adc al,0xf2");
    goto L00002461;
    asm("adc dl,cl");
    *di = *di & 0x91;
    al = al & 0xc1 & 0x57;
    asm("xchg ax,si");
    ax = ax | 0x359c;
    asm("adc bl,[bp+si+0x24]");
    asm("adc dl,[bp+si]");
    bp = 47264;
    cx = cx + 1;
    al = ax & 33283 ^ 0x3c;
    asm("adc [di],bp");
    *(bp + di) = *(bp + di) | dx;
    asm("Unknown opcode 0xfe");
    asm("sbb al,0x15");
    asm("sbb ax,0x276f");
    al = al + 0xfd;
    dh = dh ^ *(si + 0x71);
    ch = 0xda + *(bx + si + 32632);
    si = si | bp;
    (save)ax;
    asm("xchg ax,bp");
    asm("sbb ch,[bx]");
    asm("adc dl,[bx+di+0x171f]");
L00002461:
    asm("xchg ax,bp");
L00002463:
    (save)cx;
    asm("adc bh,[si-0x4f]");
    dh = 0x85;
    if(*si != dh) {
        (save)es;
    }
    if(ax = ax + 1) {
        goto L0000240c;
    }
    asm("cli");
    (save)ss;
    ah = (al | 9) ^ 0x47;
    if(*(bp - 0x3e) = *(bp - 0x3e) + sp) {
        goto L00002463;
    }
    bp = bp - 1;
    *(bx + di + 0xe) = *(bx + di + 0xe) >> 0x1a;
    al = (ax | 49599) - 0x10;
    ah = "";
    dx = dx | *(bp + si);
    asm("adc [bp+si],bl");
    al = ((al - 0x2a ^ 47618) & 0xfc) - *(bp + 0x64);
    asm("adc [bp+si+0xe],ah");
    cx = cx + 1;
    asm("Unknown opcode 0x0f");
    asm("sbb al,0x1d");
    asm("%d adc ax,0x751c");
    ax = ax + 0xaf;
    asm("std");
    asm("adc [bx],di");
    cl = cl - *(bx + 0x13);
    asm("Unknown opcode 0x0f");
    asm("les ax,[bp+si+0x1a5a]");
L000024b1:
    asm("into");
    *di = eax;
    di = di + 4;
    asm("aas");
    ax = (al & 0x5c) + 0x2939;
L000024bb:
    es = *(bx + si + 0x4b00);
    (restore)bp;
    dl = dl & *(bx - 0x3b);
    asm("Unknown opcode 0x8c");
    dx = dx + *%ds:0x522a];
    asm("xchg di,di");
    al = al + 0xe9;
    asm("insw");
    dx = dx + *(bp - 0x14);
    (fsave)((frestore) + *(bx + di + " Y- ") + -5.62273e+110) / *(bx + si + 0x432f);
    asm("enter 0x90c0,0x3b");
    asm("Unknown opcode 0x82");
    asm("sbb dl,[0x1a33]");
    *bx = *bx >> 1;
    if(*bx = *bx - bl) {
        goto L000024b1;
    }
    asm("adc word [bp+si],0xacae");
    ah :: *(bp + 0x49);
    al = al | 0xe9;
    if(!(sp = sp & *(bp + di + 38502))) {
        (restore)si;
        *di = *si;
        di = di + 1;
        si = si + 1;
        *si = *si >> 0;
        65489 = *(di + 0x4c) * di;
        asm("sbb al,0x3f");
        al = al - *(bx + di);
        (restore)cx;
        al = al + 0x40;
        if(*(bx + si) = *(bx + si) & bp) {
            goto L000024bb;
        }
        dx = dx + 1;
        di & dx;
        asm("adc [bp+si+0x34],al");
        bx = sp;
        asm("jpe 0x2555");
        asm("int3");
        ax = ax + 1 + 1;
        asm("xchg eax,ebp");
        *(bp + di + 30614) = *(bp + di + 30614) - dl;
        cl :: *di;
        *di = eax;
        di = di + 4;
        asm("in ax,0x47");
        asm("aam 0xaf");
        (save)es;
        dl = dl - ah;
        di = di + di;
        *(si - 3) = *(si - 3) + al;
        asm("xchg ax,bx");
        *%fs:bp+0x8055] = *%fs:bp+0x8055] >> 0x48;
        (save)si;
        bx = bx | *(bx + si);
        asm("cwd");
        ah = ah - dl;
        asm("sahf");
        (save)dx;
        asm("adc [0xf4bc],cl");
        al = *L0000F306;
        gs = *(bp + si + 0x2628);
        ax :: 50549;
L0000254a:
        *(bx + si + 0x523c) = *(bx + si + 0x523c) & sp;
        dl = dl & ah;
        asm("insw");
        *di = eax;
        di = di + 4;
        asm("in ax,0x6e");
        asm("cld");
        asm("popf");
        (restore)dx;
        return;
        if(si = bx + si) {
            goto L0000254a;
        }
        >= ? 0x2563 : ;
        asm("%c push es");
    }
    (restore)ss;
    al = *esi;
    esi = esi + 1;
    asm("std");
    asm("adc [bx-0x2a],al");
    asm("loopne 0x2558");
    asm("scasb");
    asm("aaa");
    asm("adc al,[bp+di+0x24]");
    if(ax = al - 0x32 + 0x3f1a) {
        goto L0000254a;
    }
    bx = bx - 1;
    asm("%d insw");
    ax & 22318;
    ax = ax & *(di - 0x4c);
    *(bp + di + 36416) = *(bp + di + 36416) + 0xe0c;
    goto L0000c75b;
    (save)dx;
    *(bp + di + 49629) = *(bp + di + 49629) ^ cl;
    asm("loopne 0x2537");
    ax = ax + 1;
    *(bx + si + 53868) = *(bx + si + 53868) & bh;
    asm("sbb dl,[di]");
    asm("enter 0x7e55,0x1");
    ax = (ax ^ 0x49a8) + 1;
    asm("adc cx,[bx+si-0x4f]");
    ax = ax - 1;
    asm("daa");
    asm("popf");
    bp = bp - 1;
    asm("retf 0xec3b");
    ax = ax - 0x2c9d;
    cx = cx + 1;
    asm("in ax,0x40");
    asm("insw");
    *di = *si;
    di = di + 1;
    si = si + 1;
    (restore)bx;
    *L000015FC = al;
    if(!(ax = ax & 0x3f30)) {
        asm("xchg ax,dx");
        ax = ax + 0x4c40;
    }
    cx = 0x42af;
    asm("adc [bp+si+0x2a],al");
    return;
    asm("fdivr qword [bp+si+0xa8d7]");
    *(bp + si + 0xaf6) = *(bp + si + 0xaf6) - di;
    (fsave)(frestore) / *si;
    al = *esi;
    esi = esi + 1;
    ax = ax + 1;
    bh = bh ^ *(bp + si + 0x4386);
    cx = cx + 1;
    bx = bx + 1;
    asm("sbb bp,ax");
    ax = ax + 1;
    asm("popa");
    asm("sbb cx,[bx+si+0x7bd]");
    di = 0x1d44;
    asm("rcr word [si+0x4],0x3d");
    (restore)es;
    *(bp + si + 0x10) = *(bp + si + 0x10) & dl;
    ax = ax + 1;
    cx = cx - 1;
    if(!(di = di + 1)) {
        *(bp + di) = *(bp + di) ^ cx;
        asm("das");
        dx = dx - 1;
        *(bp + di) = *(bp + di) - 1;
        asm("sbb al,0x25");
        *(bp + si) & dh;
        di = di + 1;
        bp = bp - 1 - 1;
        asm("adc ch,[bp+si]");
        *di = al;
        di = di + 1;
        cx = cx - 1;
        ax = *(bp + si - 0x2a);
        asm("adc ax,0x329b");
        (save)-42;
        *(bx + di) = *(bx + di) + dx;
        ah = ah ^ ch;
        asm("out 0x51,al");
        asm("sbb ax,0x3fc7");
    }
    ax = ax + 58876;
    asm("Unknown opcode 0x64");
    asm("Unknown opcode 0xfe");
    (save)di;
    ax = *L00000FEE;
    *bx = *bx | 55682;
    asm("sbb byte [bx+si+0xdeea],0x5d");
    asm("adc dh,[bx+di-0x55]");
    *(si - 0x53) = *(si - 0x53) | 0x15;
    di = 37669;
    *ebx = *ebx ^ dl;
    dl :: al;
    asm("ficom word [0x6842]");
    asm("sbb [bx+0x1b87],si");
    if(!(al = al - *(bx + si))) {
        ax = al | 0x1b | cx;
        st2 = (frestore);
        (restore)sp;
        si = 0x40ba;
        ax = ax + 1 + 1;
        bp = bp + 1;
        dl = 0x4a;
        asm("aaa");
        (restore)cx;
        *si = *si & bl;
        asm("ror byte [bp+di],1");
        (restore)bp;
        ax = ax + 1;
        asm("cld");
        sp = sp + 1;
        asm("adc [di-0x1d],cl");
        asm("xlatb");
        cx = cx + 1;
        asm("adc al,bl");
        (restore)si;
        *(si + 45643) = *(si + 45643) ^ 26421;
        *di = *si;
        di = di + 1;
        si = si + 1;
        ax = al + al + 1;
        ch = 0x40;
        asm("pcmpgtw mm0,[di+0x11]");
        bp = bp + 1;
        dl = 0xc0;
        asm("aam 0xf1");
        *di = *di + 1;
        while(dx = dx + 1) {
        }
        *bx :: di;
        asm("adc dx,[bp+di]");
        ax & 0x4015;
        asm("adc [bx+si+0x2d],al");
    }
    asm("adc [edi+0x4a],ch");
    (restore)ss;
    *bx = *bx + cx;
    *(bp - 0x2a) = *(bp - 0x2a) ^ dl;
    *(bx + 48922) :: 0x80;
    return;
    asm("xchg ax,di");
    asm("das");
    *(bx + si + 0x4215) = *(bx + si + 0x4215) | ah;
    asm("jpe 0x26d8");
    ax = ax - 0x1d20;
    asm("sbb bx,[bp+di]");
    asm("sbb ax,[0x5f82]");
    asm("std");
    asm("fsubr dword [bp+0x4b]");
    asm("Unknown opcode 0xda");
    asm("lock push es");
    asm("sbb di,[bx+si+0x25]");
    (save)ds;
    ax = ax - 1 + 1 + 1;
    asm("xchg ax,sp");
    asm("fsubp st0");
    asm("jpo 0x26c7");
    bp = bp - cx;
    asm("Unknown opcode 0xd0");
    if(!(di = di + cx)) {
        asm("Unknown opcode 0xc6");
        asm("%f int 0x5");
        (save)dx;
        bx = bx + 1;
        asm("adc al,0x33");
        ax = ax + 1;
        *(bx + 65507) = *(bx + 65507) >> 1;
        sp = sp + 1;
        dx = 43822;
        (save)ds;
        *di = *si;
        di = di + 1;
        si = si + 1;
        ax = ax + *(bx + si + 0x391e);
        (save)bx;
        ax = al + 0xb2 + 1;
        *(bp + di) = *(bp + di) ^ dl;
        asm("pcmpeqb mm0,[bp+di+0x3]");
        bp = 0x1241;
        asm("daa");
        *(di + 0x40) = *(di + 0x40) & dx;
        ch = ch + *(bx - 0x2b);
        ax = L00006205();
        (save)sp;
        (save)cs;
        *L00008044 = gs;
        dx = 0x7c ^ *bx;
        asm("sbb ax,0xe82");
        asm("aas");
        ax = ax + 55144;
    }
    dx = dx + 1;
    (restore)si;
    asm("a32 push bx");
    asm("loopne 0x2748");
    if(!(ax = ax + 1)) {
        cl = 1;
        si = si - 1;
        sp :: 0;
        asm("xchg ax,dx");
        asm("%s cwd");
        ax = ax + 1;
        (restore)ds;
        bx = bx - 1;
        (save)cs;
        al & 0x45;
        ch = cx + 1 ^ *(bp + si + "nough memory$ Y- ");
        ax = ax | 27659;
        dx = dx - 1;
        asm("xchg ax,sp");
        dh = 0xf;
        (save)sp;
        (save)0xf;
        asm("jpe 0x9861");
        al & 0x31;
        *(bx + si) = *(bx + si) - 0x74;
        *(bx + di + 0x1d00) = *(bx + di + 0x1d00) ^ dx;
        dh = dh & *(bx + di);
        ax = ax + 0x45bf;
        cx = cx + 1;
        asm("fidivr dword [0xd83]");
        ah = 0x41;
        asm("adc al,[si-0x55]");
        if(!(ax = ax + 46400)) {
            *di = dh;
            *(di + 0x40) = *(di + 0x40) >> 1;
            *bx = *bx | 0x60;
            *L0000B680 = ax;
            *(bp + si + 31040) = *(bp + si + 31040) + cl;
            (restore)ss;
            (save)-20;
            asm("sbb ax,0x821d");
            *L00004500 :: 0x58;
            asm("rol byte [bx+si],1");
            ax = ax + 1;
            asm("aas");
            (restore)di;
            bp = 0x4e4c;
            (save)ss;
            if(*(bx + di - 0x4a) = *(bx + di - 0x4a) | al) {
                goto L00002782;
            }
            asm("Unknown opcode 0x82");
            si = si + 1;
            asm("fist dword [bx+si+0x3b]");
            asm("salc");
            *L00003201 = al;
            asm("adc [bp+si+0x6c66],cx");
        }
        (restore)bp;
        asm("int1");
        asm("lock sub ax,[bp+si+0x5b]");
    }
L00002782:
    asm("xchg ax,cx");
    asm("xchg ax,sp");
    asm("loop 0x27a0");
    asm("sbb al,[%ds:bx+di+0x41]");
    asm("xchg ax,di");
    (restore)bx;
    if(!(al = al & 0x24)) {
        (restore)es;
        sp = sp + 1;
        ax = ax + 0x3b40 - 31284;
        asm("umov dx,[bp+di]");
        bx = bx + *(bx + di + 0xfb4);
        asm("les sp,[bx+di+0x415b]");
        *di = *si;
        di = di + 1;
        si = si + 1;
        asm("aaa");
        asm("Unknown opcode 0xc1");
        ax = ax ^ 53776;
        (restore)dx;
        *(bx + si) = *(bx + si) + "mory$ Y- ";
        asm("les si,[si+0xc6b5]");
        al = al + 0x88;
        asm("sti");
        *L00007433 = *L00007433 / *L00007433;
        edx = *L00007433 % *L00007433;
        di = di - 1;
        cx = cx + 1;
        (save)ax;
        ax = ax << *(bp + si + 43089);
        goto L00004304;
        asm("cld");
        cx = cx + 1;
        (restore)ss;
        asm("aas");
        asm("sbb ax,0x2648");
        ax = ax + 1 | 35510;
        asm("out dx,al");
        (save)cs;
        bx = bx - 1;
        ax = ax + 1;
        0x127b = cx * bp;
        al = *L00000EEB;
        if(bp = bp | *(bp + si)) {
            goto L000027ef;
        }
    }
    <= ? L00002784 : ;
    al = ch & *(bp + si);
    asm("sbb ch,[bx+di]");
    *L00007D4A = ax;
    asm("adc [bx+di],bh");
    *di = al;
    di = di + 1;
    *%ds:bx+si-0x15] :: si;
L000027ef:
    return;
    *(bp + 0x628) = *(bp + 0x628) | 0xbf;
    *(bp + di + 61018) = *(bp + di + 61018) - bl;
    asm("xchg cl,dl");
    ax = ax + 1;
    dx = dx - 1;
    ax = ax | 0x1245;
    asm("adc cl,[di]");
    ecx = ecx + 1;
    30007 = *(di + 65266) * si;
L00002809:
    asm("rcr word [si+0x3e],cl");
    goto L0000cf9e;
    asm("adc cx,si");
    if(!(bp = bp + 1)) {
        asm("aaa");
        *(bx + si + 0x1751) = ss;
        *di = ds;
        *(bp + di) = ds;
        asm("sbb word [bp+di],+0x47");
        (save)sp;
        (restore)bx;
        asm("popa");
        asm("Unknown opcode 0x82");
        if(al = al | 0xc1) {
            goto L0000286a;
        }
        asm("iret");
        if(!(22089 = *(bp + di + 0x1d3b) * di)) {
            ax = ax ^ 43553;
            bp = cs;
L0000283a:
            asm("%g mov cl,0x81");
            asm("std");
            bx = bx + 1;
            asm("retf 0x424a");
            ax :: 28943;
        }
        asm("adc al,0x8d");
        al = al - 0xa8;
        (save)cs;
        si = si - 1;
        (restore)ds;
    }
L0000284c:
    *(bp + si - 0xe) = *(bp + si - 0xe) - ch;
    sp = sp | *(bx + si + 0x3fa6);
    asm("Unknown opcode 0x0f");
    asm("sbb al,0xba");
    asm("in al,dx");
    *(bp + di + 0x56f) = *(bp + di + 0x56f) & bh;
    ax = L000062ed() + 1;
    (restore)ds;
    goto L000055de;
    ax = *L000080C2;
    asm("adc [bp+di],cl");
    ax = L0000681a();
L0000286a:
    dx = dx | *(bp + si);
    (save)bp;
    *(bx + si) = *(bx + si) >> 0x56;
    ax = ax | 0xbcb;
    *di = al;
    asm("hlt");
    asm("fcom qword [bx+si+0xb71a]");
    asm("cmpsw");
    if(di = di + 1) {
        goto L00002809;
    }
    asm("adc [0x4040],dl");
    *(bp + si) = *(bp + si) & bl;
    asm("sbb dl,[bx]");
    dx = dx + 1;
    asm("sbb ax,0x8c83");
    dx = dx + ax;
    ax = ax + *(bx + di + 0x63);
    if(bl = bl | *L00001B40) {
        goto L0000283a;
    }
    asm("int 0x3d");
    ax = 34155;
    (save)0x3214;
    asm("xchg ax,dx");
    asm("cmpsb");
    asm("insb");
    if(al < 0x8c) {
        goto L0000284c;
    }
    asm("aas");
    asm("adc dl,ah");
    >= ? L000028b8 : ;
    bh = bh - *%es:bx+di];
    ax = ax | 46401;
    (save)ss;
    asm("adc bl,0xe2");
    *di = eax;
    di = di + 4;
    *(bp + si) = *(bp + si) << cl;
L000028b4:
    *(bp + si + "emory$ Y- ") = (frestore);
    asm("adc dh,[bp+di]");
    *%es:bp+di] = *%es:bp+di] >> 0x58;
    asm("in ax,dx");
    asm("aas");
    *(bp + "nough memory$ Y- ") & bp;
    ah :: *(bx + si);
    *bx = *bx ^ 5;
    ax = ax + dx + 1;
    asm("in al,dx");
    asm("ror word [di],cl");
    asm("rcl word [bp+di],0x2a");
    if(*(si + 0x49) <= cl) {
        asm("adc ah,[di-0x2c]");
        asm("sbb cx,[0x123f]");
        ah = 0x40;
        bx = bx + 1;
        0;
        asm("sbb al,0x22");
        asm("sahf");
        asm("rol byte [bp+si+0x4],cl");
        asm("adc [di],bh");
        al = al + 0x81;
L000028eb:
        (restore)ds;
        *(bx + si) = *(bx + si) ^ bx;
        asm("sbb cl,[si+0x991a]");
        al = al & 0x84;
        asm("Unknown opcode 0xc4");
        ax = L00004281();
        (save)es;
        dh = dh - *(bp + si - 0x3f);
        (restore)bx;
        dx = 0x4e38;
        asm("aas");
        sp = 0x2f3c;
        *di = eax;
        if(di = di + 4) {
            goto L00002925;
        }
        (restore)ds;
        asm("xchg ax,dx");
        if(dx = dx + 1) {
            goto L000028b4;
        }
        *di = *si;
        di = di + 1;
        si = si + 1;
        asm("retf");
        dx = dx + 1;
        *(bp + si + 0x22a1) :: bl;
L00002911:
        asm("retf 0x34d8");
    }
    asm("cld");
    cl = cl - *(bp + 34628);
    asm("adc al,0x43");
    asm("%s and ax,0xcd27");
    dl = dl - *(bx + di);
    (restore)sp;
L00002925:
    asm("int 0x7f");
    (restore)dx;
    if(*(di + 29617) = *(di + 29617) + si) {
        goto L00002911;
    }
    asm("cwd");
    ax = ax + 0x1bb - 54320;
    asm("outsb");
    *di = *si;
    di = di + 1;
    si = si + 1;
    dx = dx ^ ax;
    (save)0x461c;
    asm("adc bh,[di+0x3344]");
    asm("Unknown opcode 0xc1");
    ch = 0xab;
    *(bx + si + 5) :: ah;
    al = al - *(bx + si - 0x69) | 0x48;
    *di = eax;
    di = di + 4;
    bp = bp + 1;
    asm("%e xor al,0x4b");
    (save)cs;
    asm("adc [bp+di+0x41],al");
    cx = cx + 1;
    (restore)ds;
    asm("sbb al,0x16");
    asm("Unknown opcode 0x82");
    asm("sbb bl,[bp+si]");
    dl & bh;
    *ebx = ds;
    asm("hlt");
    (restore)di;
    if(*(bx + si) = *(bx + si) - cl) {
        goto L000028eb;
    }
    *(bp + si - 0x46) :: dh;
    *(bp + 32333) = gs;
    ax :: 33556;
    *L00002035 = *L00002035 >> 0xca;
    asm("rol al,1");
L00002976:
    al = ax + 0x432f + " Y- ";
    asm("xlatb");
    sp = sp - 1;
    *(bx + 0x12) = *(bx + 0x12) - bh;
    dx = *(bx - 0x2f);
    ax = L00001AF0();
    asm("adc ax,0x4814");
    -69 = *(bx + si - 7) * ax;
    asm("int3");
    edx = edx - 1;
    asm("xchg ax,bx");
    "Y- " = *bx * di;
    al :: *(bx + si + 37633);
    al = al + 0x3f;
    *di = *di | 0x13;
    dl = dl | *si;
    asm("aas");
    asm("adc [bx+si],bp");
    (restore)ax;
    *%ds:bp-0x22] = *%ds:bp-0x22] & 0x74;
    di = di + 1;
    asm("%g xchg ax,sp");
    asm("Unknown opcode 0x82");
    *(bx + si) = *(bx + si) - si;
    asm("adc al,0xfd");
    ebp = ebp - 1;
    cx = bx + si + 32533;
    (restore)dx;
    (restore)bp;
    asm("sbb word [bp+si],-0x77");
    *bx = *bx | cl;
    dh :: *(bx + si);
    bx = bx | *(bp + di + " Y- ");
    asm("Unknown opcode 0x0f");
    asm("sbb [bx+di],bx");
    ax = ax - 1;
    (restore)sp;
    *(bx + si - 0x74) = cs;
    if(cx = cx + 1) {
        goto L00002976;
    }
    asm("xchg ah,[bp+0xb]");
    asm("adc al,[bx+si+0x39]");
    cx = cx - 1;
    cx = 0x30bb;
    asm("insw");
    asm("aas");
    asm("%d jna 0x2a07");
    goto L00003857;
    al = al & 0xa3;
    asm("cmc");
    (save)cs;
    di = di - 1;
    *(bp - 0x2e) = *(bp - 0x2e) & bx;
    asm("Unknown opcode 0xfe");
    (restore)ss;
    (save)cx;
    *(bx + 52073) = cx;
    asm("sbb [si+0x55],bh");
    asm("xchg ax,si");
    ax = ax + 0x1790;
    asm("loop 0x29c0");
    asm("lahf");
    asm("sbb [bx+di+0xf47f],ch");
    asm("Unknown opcode 0x0f");
    ch :: ah;
    dh = 0x5b;
    bh = 0xe3;
    asm("cli");
    al = al + 0xb9;
    cx = cx - 1;
    bx = 0x11be;
    (save)dx;
    (save)0x6e;
    cl = 0x11;
    asm("Unknown opcode 0xc4");
    asm("aad 0x86");
    return;
    asm("adc bh,[0xba60]");
    (save)es;
    sp :: *(bx + si + 0x40d2);
    -120 = *(bp + di - 0x6f) * sp;
    sp = bp;
    (restore)bp;
    if(!( *(bx + di) & si)) {
        *di = *di - bp;
    }
    di = di + 1;
    (save)ax;
    asm("cld");
    if(!(ax = ax + 1)) {
        ax = ax ^ 33875;
        *(bx + si + 33558) = gs;
L00002a33:
        asm("sbb di,dx");
    }
    asm("sbb [bp+si+0x1d],ah");
    asm("Unknown opcode 0x82");
    asm("Unknown opcode 0x82");
    *(bx + si - 0x64) & ch;
    asm("cbw");
    cx = 0x17ba;
    asm("sbb [%ss:bx+di+0x6b],bp");
    *(bx + di - 0x3b) = *(bx + di - 0x3b) + bp;
    *L00004F74 = *L00004F74 - dh;
    asm("fldcw [bp+di+0x76]");
    *(bp + si + "enough memory$ Y- ") = *(bp + si + "enough memory$ Y- ") | -108;
    ax & 0x15a8;
    (restore)bx;
    asm("%s dec dx");
    asm("xchg ax,di");
    *(di + 29194) :: 0x13;
    *L00001722 = ax;
    cx = cx + 1;
    asm("adc dx,[di]");
    sp = sp - 1;
    sp = 0x141;
    asm("adc ax,0x8155");
    asm("scasw");
    al :: "";
    (restore)sp;
    (restore)es;
    (save)es;
    ax :: *si;
    asm("enter 0x40a2,0x36");
    asm("adc ax,ax");
    asm("adc [0xc169],si");
    asm("fcom qword [di]");
    *(bp + di + 0x30d) = ah;
    bp = bp | *(bx + si);
    ax = ax ^ 0x40d1;
    *(bx + si - 0x56) = *(bx + si - 0x56) - dh;
    asm("%e push ss");
    al :: 0x15;
    *(bx + si) = *(bx + si) >> cl;
    if(!( *bx = *bx | 38977)) {
        asm("adc al,0x14");
        *(bx + si) = *(bx + si) | 0x4370;
        cx = cx + 1;
        dx = es;
        bp = bp + 0x1d8c;
        bx = bx + 1;
L00002aa8:
        (restore)ss;
        asm("sbb dx,si");
        dx = dx + 1;
        bx = bx + bx;
        si = si + 1;
        goto L00002a33;
        asm("adc dl,[bx+di]");
        asm("xchg bl,[di]");
        cx = 0x17;
        al = al ^ 0x74;
        asm("sbb [bx+di],bx");
        *(bx + si) = ds;
        asm("sbb [bx+di+0x29],bh");
    }
    dx = dx + 1;
    asm("sbb al,0x3d");
    asm("adc sp,si");
    dl = dl ^ *(bx + si + "mory$ Y- ");
    (save)bp;
    si = si | *(bp + di + 0x15);
    asm("aas");
    asm("adc dl,cl");
    asm("jpe 0x2b3c");
    (save)ds;
    bl = bl + *(bp + si - 0x5a);
    cx = cx | *%ds:bx+di-0x6a];
    asm("fldcw [bp+si+0x1]");
    asm("adc ax,0x1253");
    if(di = di + 1) {
        goto L00002aa8;
    }
    <= ? L00002ae6 : ;
    ah = "emory$ Y- ";
    asm("pusha");
    (restore)ds;
    ah :: *(bx + si + 0x360d);
    al = *si() + 0x40;
    (restore)dx;
    (restore)ax;
    asm("adc bp,[di-0x29]");
    ax = bp + di + 0x13;
L00002af7:
    asm("adc word [bx+si],0xb774");
L00002afc:
    (save)cx;
    asm("a32 push +0x70");
    asm("popa");
    asm("Unknown opcode 0xd3");
    if(!(bl = bl - bh)) {
        ch = ch & *(bp + si + 0x1631);
        asm("das");
        (restore)ss;
        asm("scasb");
        asm("Unknown opcode 0x82");
        di = di + 1;
        asm("adc sp,[di+0x4e]");
        ax = ax & 33734;
L00002b18:
        asm("Unknown opcode 0x82");
        if(dx = dx + 1) {
            goto L00002afc;
        }
        ax = ax - 1;
L00002b1c:
        bx = bx + 1;
        asm("ror byte [bx+di+0x1d44],0x17");
    }
    asm("Unknown opcode 0xc6");
    *(bp + si + 51860) = cs;
    asm("Unknown opcode 0xda");
    asm("cli");
    *(si + 0xf32) = *(si + 0xf32) + ax;
    asm("bound sp,[bp+di]");
    cx = 62348;
    ax = ax - 0x3431;
    asm("sbb [bx+si],bh");
    (restore)es;
    *(bp + 0xe2f) & ax;
    asm("Unknown opcode 0x8f");
    if(ax = ax & 0x3b) {
        goto L00002af7;
    }
    bl = 0xd;
    *di = eax;
    di = di + 4;
    asm("Unknown opcode 0x82");
    cx = cl - *%gs:bp+di] + 1;
    asm("%g dec di");
    (restore)ax;
    if(!(cx = cx & bx)) {
        asm("sbb dh,[bx+di+0x4c]");
        if(bx = bx - 1) {
            goto L00002b1c;
        }
        (fsave) *(bx + si + 0x6a);
    }
    asm("Unknown opcode 0x0f");
    *si = *si & bx;
    ax = ax | 0x3a5;
    *si = *si + bx;
    asm("das");
    al = al + 0xb2;
    eax = *esi;
    esi = esi + 4;
    if(ax = ax + 1) {
        goto L00002b18;
    }
    (save)cx;
    asm("jpo 0x2af2");
    >= ? 0x2b94 : ;
    bx = bx + 1;
    (save)" Y- ";
    asm("les dx,[di]");
    asm("aam 0x54");
    si = si + *(bx + si + 0x69);
    (save)"ry$ Y- ";
    asm("adc ax,0x714a");
    asm("adc ax,0xd828");
    goto L00002bff;
    asm("Unknown opcode 0x82");
    cl = cl + cl;
    ax = ax + 1;
    asm("jpo 0x2b09");
    *(bx + si - 0x7f) :: dx;
    asm("adc al,0x16");
    ax = ax + 0xa18;
    *(bp + 0x1a) = *(bp + 0x1a) & cx;
    bp = *(bx + si);
    (restore)ds;
    asm("xlatb");
    (restore)ss;
    asm("sbb ax,[bp+si]");
    *(di + 0x1d45) = *(di + 0x1d45) & ah;
L00002b9d:
    al = al + "ot enough memory$ Y- ";
    asm("insb");
    cx = cx + 1;
    *(bp + di + 37888) = *(bp + di + 37888) | dh;
    asm("sbb dl,[bx]");
    asm("xchg ch,[bp+si+0x19]");
    *(bp + 0xb) = *(bp + 0xb) + cx;
    asm("out dx,al");
    si = si + 1;
    dh = dh - *(bx + di);
    *(bp + si + 27003) = *(bp + si + 27003) / *(bp + si + 27003);
    dx = *(bp + si + 27003) % *(bp + si + 27003);
    goto L0000855c;
    asm("rep push bx");
    asm("adc ah,[bx+di]");
    ax = ax ^ 60497;
    asm("rcl byte [bp+si],cl");
    asm("cwd");
    bh = *(bp + 22184);
L00002bcc:
    asm("rcl word [bx+si],0x4b");
    asm("xchg ax,bp");
    if(al = al | 0xf3) {
        goto L00002bcc;
    }
    ax = al & dl & 59424;
    asm("cbw");
    *(bp + di) = *(bp + di) - 5;
    ah = ah | *si;
    si = 28992;
    return;
    asm("adc ax,0x9687");
    ax = ax - 27209;
    asm("paveb mm4,[bx+si+0x4184]");
    asm("lds dx,[di+0x41]");
    *(bx + si + 46861) = *(bx + si + 46861) ^ sp;
    asm("adc ah,dl");
    asm("cmpsb");
    ax = ax + 1;
    *(bp + di - 0x11) = *(bp + di - 0x11) + bh;
    asm("Unknown opcode 0x82");
    (restore)dx;
L00002bff:
    *(bx + di) & dx;
    dx = dx - 1;
    if(*(bp + di + 0x40) = *(bp + di + 0x40) + dh) {
        goto L00002bcc;
    }
    dx = si;
    asm("cbw");
    if(*L0000817C = *L0000817C | 0xc02) {
        goto L00002b9d;
    }
    ax = *(bp + si + 0x2117);
    *(bp - 0x22) = ax;
    asm("sbb bx,[bp+si]");
    asm("Unknown opcode 0x82");
    ax = ax | 42013;
    bx = bx + 1;
    asm("sbb word [bp+si],0x6444");
    dx = 0x441a;
    di = *(bx + 0x18);
    asm("Unknown opcode 0x82");
    asm("sbb [bp+si+0x8a74],ch");
    al = al & 0x59;
    (save)dx;
    asm("rep pop cx");
    asm("retf 0xa937");
    dh = dh ^ *(si + 41746);
    if(!(si = si & cx)) {
        cx = cx - 1;
        asm("adc cl,[bp+di]");
        asm("Unknown opcode 0xc7");
        asm("sbb cl,[di]");
        (save)ds;
        (save)bp;
        (fsave)(frestore) * *(di + 0x44);
        asm("stc");
        (save)es;
L00002c4c:
        asm("enter 0xf3f,0x1c");
        *(bp + di + 0x3f) = *(bp + di + 0x3f) ^ al;
        *(bx + si + 48699) & sp;
        ax = al & *(bx + di) | 30485;
        asm("arpl [bp+si+0x5],cx");
        si = 28708;
        di = 27265;
        asm("cwd");
        bp = bp + *L00003342;
        di = di - 1;
        return;
        asm("lahf");
        asm("%s push es");
        asm("aaa");
        ax = L00006ccf();
        di = di | *(bp + 0x2e91);
        (save)sp;
        asm("xlatb");
        cl = 0xea;
        *di & ax;
        asm("aam 0x40");
        ax = ax - 0x560e;
        (save)0x55;
        asm("adc al,0x29");
        *(bx + si + 8) & sp;
        *(bx + di + 0x2432) = bx;
        (save)cs;
        asm("sbb al,[di-0x56]");
        dh = 0xec;
        (restore)ss;
        ax = ax - 0x3943;
        asm("sbb ax,0x423f");
        asm("sbb [bp+di+0x18],bh");
        asm("Unknown opcode 0x82");
        (save)ss;
        asm("sbb [bp+si],al");
        ax = ax & 48429;
        *(bx + 0xe) = *(bx + 0xe) + ch;
        *(bp + si) = ds;
        asm("insb");
        asm("xchg ax,cx");
        cx = cx - 1;
        asm("in ax,0xcf");
        cx = cx | di;
        ax = ax - 1;
    }
    asm("out dx,ax");
    0x65 = *(bp + di) * dx;
    *(bx + si + 0xf68) = *(bx + si + 0xf68) | ch;
    asm("adc cl,[bp+di]");
    asm("sbb ax,0x4b13");
    if(dx = bp + di - 0x80) {
        goto L00002c4c;
    }
    (save)bp;
    asm("adc cl,[bx+di-0x27]");
    asm("cld");
    asm("wait");
    bp = bp + 1;
    sp = sp / sp;
    dx = sp % sp;
    (save)0x7a;
    cx = cx - *di;
    asm("std");
    asm("rol byte [bx+di],1");
    ax = ax + 1;
L00002cd6:
    (save)4;
    asm("aas");
    asm("adc al,0xd7");
    asm("outsb");
    asm("adc ax,0x6f11");
    ah = 8;
    bp = bp + *L0000893C;
    *(bp + si + 0xf) = (frestore);
    asm("xchg ax,si");
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("xlatb");
    bl = bl + *%ss:si];
    ax = ax - 1;
    ch = 0xcd;
    asm("aas");
    asm("jpo 0x2d24");
    -111 = *(bp + si + 49485) * sp;
    di = di + 1;
    asm("insb");
    di = di + 1;
    dl = dl | 0x40;
    ax :: 32015;
    (save)0x3f95;
    sp & cx;
    asm("a32 push word 0x1982");
    asm("sbb al,[di+0x53f4]");
    asm("sbb ah,cl");
    (save)sp;
    asm("aad 0x9");
    asm("xchg ax,sp");
    asm("%g sbb al,0x26");
    asm("Unknown opcode 0x82");
    asm("sbb [bp+si+0xac31],ah");
    asm("adc al,0x3e");
    goto L0000ead3;
    (save)cs;
    asm("Unknown opcode 0x82");
    if(!( *(si - 0x47) & ah)) {
        (save)ss;
        sp = sp - 1;
        bx = bx + 1;
        dl = 0x11;
        *(bp + si + 0x56) & ax;
        asm("adc [bp+di],bh");
        asm("adc ah,cl");
        asm("cwd");
        (save)bx;
        al & 0xa3;
        di = di + 1;
        ax = ax - 0x4142;
        asm("adc [bp+di],cx");
        asm("xchg bx,[bp+0x65fe]");
        (save) *(si + 0x4546);
        asm("xchg ax,dx");
        dx = 0x74d;
        if(cx = cx + 1) {
            goto L00002cd6;
        }
        al = al + "gh memory$ Y- ";
        asm("int3");
        ax = ax + 1;
        asm("das");
        *di = eax;
        di = di + 4;
        al & 0x4b;
    }
    si = 0x3a4c;
L00002d5d:
    if(!( *(bx + di + 42061) = *(bx + di + 42061) | 0x64)) {
        != ? 0x2d97 : ;
        <= ? L00002d80 : ;
        (save)-48;
        bx = bx + 1;
        ax = ax + 1 | 47687;
        asm("hlt");
        asm("rcr word [bp+si-0x54],0x6");
        di & bp;
        dh = 0xeb;
        asm("xlatb");
        si = si | *(bp + si);
        asm("xchg ax,bx");
        if(cx = cx | *(bx + di + 0x1a)) {
            goto L00002d5d;
        }
        si = si - 1;
        0x1527 = *(bx + di + 8) * di;
        bp = bp & *(bp + di - 0x3b);
        (restore)bp;
        dh = 2;
        (save)ss;
        if(*(bp + si - 0x6f) = *(bp + si - 0x6f) + dh) {
            goto L00002dec;
        }
        ax :: 60909;
        asm("salc");
        (save)bp;
        al :: *(bx + si + 0x46);
        *di = al;
        di = di + 1;
        asm("sbb byte [bp+si+0x2e],0x3a");
    }
    asm("adc di,[bx]");
    *(bp + si + 0x12) & si;
    bx = bx + 1;
    asm("cwd");
    asm("sbb byte [bp+si+0x4b],0x38");
    ax & 33814;
    *si = *si | ah;
    0x2805 = *(bp + di + 0x45) * bp;
    ax = al - *L00003F35 | 59624;
    bx = 0x1c42;
    asm("adc ax,0x5405");
    bh = 0;
    (restore)dx;
    asm("aas");
    if(!(ax = ax + 25949)) {
        asm("outsw");
        (restore)si;
        ax & 0x4f3e;
        (restore)ds;
        0x4722 = *(bp + si) * ax;
        al = *L000040CB;
        dx = dx | *(di + 0x43);
        asm("xchg ax,di");
        cx = cx - 1;
        asm("adc cl,[bp+di]");
        (restore)di;
        (restore)ss;
        asm("out dx,al");
        asm("sbb al,0x2b");
    }
    asm("salc");
    asm("out dx,ax");
    (save)bp;
    asm("outsb");
    asm("sbb cx,bx");
    *(bx + di - 0x78) :: cl;
    *(bp + si - 0x7f) = ds;
L00002dec:
    asm("scasw");
    al = al + 0x89;
    (restore)es;
    *(bp + si) & bp;
    asm("xchg ax,cx");
    asm("a32 cmp al,0xb9");
    *(bx + si) = *(bx + si) ^ 0x3c;
    asm("sbb [si+0x294e],al");
    asm("out dx,al");
    di = di - 1;
    (save)bp;
    eax = *esi;
    esi = esi + 4;
    asm("%s inc si");
    *di = eax;
    di = di + 4;
    al & 0x23;
    dx = dx + 1;
    di = di - 1;
    asm("retf 0xc5a");
    goto L00001731;
    *di = *di | si;
    al = al ^ 0x2c;
    di = di + 1;
    dx :: *(bx + si);
    asm("rol word [bx+si-0x35],0x40");
    *(bx + si + 53559) = *(bx + si + 53559) & sp;
    asm("adc [bx+di+0x68],bl");
    di = 26625;
    *(si + 27237) = *(si + 27237) | bp;
    asm("adc [bp+si],di");
    bh = bh - *(bp + "Not enough memory$ Y- ");
    ax = ax + 0x2e7f;
    bp = bp + 1;
    asm("Unknown opcode 0x8f");
    ax = ax | 0x132b;
    asm("adc [bx+si],sp");
    asm("scasb");
L00002e38:
    asm("sbb bl,[bx+di]");
    asm("aaa");
    (restore)si;
    al = al | 0x3e;
    (save)sp;
    asm("aad 0x4c");
    asm("adc cl,[bp+di+0x1c]");
    (save)ds;
    asm("cli");
    dx = dx - 1;
    asm("xchg ax,bx");
    ax = ax - *(si + " memory$ Y- ");
    *bx = *bx >> 0xb7;
    bx = bx - 1;
    goto L00002e66;
    asm("wait");
    asm("adc ax,0xa0ef");
    asm("sti");
    asm("aas");
    (save)cs;
    di = di - 1;
    *di = *di + 9;
    asm("sbb [bp+si],ch");
    dx = dx + 1;
    asm("aas");
    eax = *esi;
    asm("sbb [bp+si-0x35],di");
    asm("adc ax,0x1020");
L00002e66:
    asm("out dx,al");
    asm("aas");
    asm("int 0x5c");
    cl = 1;
    asm("adc cl,dl");
    (restore)ax;
    asm("lahf");
    if(!(esi = esi + 4)) {
        ah = ah | *(bx + si + 36713);
        cx = cx & *(bp + di);
        asm("adc cl,al");
        dx = dx - 1;
        asm("std");
        *L00003CD6 = ax;
        ax = ax | *(di + 22885);
        asm("aam 0x8c");
        if(bp & 0x4b10) {
            goto L00002e98;
        }
        if(bx = bx + 1) {
            goto L00002eb4;
        }
        ax = al | 0x83 | 0x1a50;
        sp = sp + 1;
    }
    asm("%d or ax,0x1c80");
L00002e98:
    asm("sbb al,0x7e");
    (restore)es;
    ax = ax - 1;
    di = di + *bx;
    asm("%g push ds");
    dx = dx - 1;
    asm("bound bp,[bx+si+0x7a]");
    (save)ax;
    asm("%g test ax,0xf463");
    ch = 0x6a;
    (save)0x6a;
    if(*L00001080 = *L00001080 + bp) {
        goto L00002e38;
    }
L00002eb4:
    asm("aas");
    *di = *di >> cl;
    (restore)bx;
    if(al < 0x15) {
        asm("xchg ax,si");
        asm("das");
        si = si - 1;
        (restore)si;
        ax :: 25357;
        asm("in ax,dx");
        (save)di;
        (save)es;
        asm("xchg ax,bp");
        asm("cmpsw");
        sp = sp - 1;
    }
    asm("enter 0xa793,0x81");
    asm("retf 0x193e");
    asm("sbb [di],ch");
    *(bp + di) = *(bp + di) | bh;
    asm("popa");
    if(!(ax = ax - 0x14b5)) {
        < ? L00002e88 : ;
        asm("insb");
        cx = cx + *L0000BA34;
        (save)bp;
        *(bp + si) = *(bp + si) - dl;
        asm("aad 0x52");
        *L0000362E = ax;
        si = 0;
        *L0000AA0B = al;
        al = al & 0xb4;
        asm("Unknown opcode 0x8e");
        ax = 0xd6;
        (save)cs;
        asm("sbb al,0x62");
        bh = bh - *(bp + di + 0x69);
        (save)bp;
        di = di | *(bp + si + 0x10);
        ax = ax + 1;
        ax = *(bx + si + 0x13);
    }
    asm("aas");
    *(bx + si) = *(bx + si) & bp;
    asm("aas");
    dx = dx + 1;
    (restore)es;
    ax = *si() | 0x4515;
    sp = sp + *si;
    asm("xchg ax,dx");
    ax = ax + 1;
    sp = sp + 1;
    di = 30544;
    asm("adc byte [bp+di],0xd9");
    asm("insw");
    *si :: sp;
    *(bp + di) = *(bp + di) + bx;
    asm("xchg ax,bp");
    asm("Unknown opcode 0x8f");
    asm("adc [si],dl");
    asm("clc");
    bx = bx - 1;
    *bx = *bx ^ cl;
L00002f27:
    (save)bx;
    *(bp - 0x5e) = *(bp - 0x5e) + bp;
    asm("cmc");
    27115 = *(bp + si) * si;
    asm("adc al,[bp-0x6b]");
    (save)sp;
    (save)es;
    asm("Unknown opcode 0xdd");
    cl = bl;
    ax = ax ^ 0x2098;
    asm("aad 0x46");
    asm("pusha");
    cl = cl ^ *(bx + si + 4);
    if(!( *(si - 0x15) = *(si - 0x15) + 0xbb)) {
        ax = L0000429D();
        asm("adc al,0x79");
        < ? L00002f63 : ;
        al = *esi;
        esi = esi + 1;
        bx = bx - 1;
        goto L000048e4;
        ax = ax & 36165;
        *di = al;
        di = di + 1;
        asm("pmulhw mm2,[bx+si]");
        return(0);
        al = al ^ 0xa6;
        al & 0xb;
        asm("adc bh,[di]");
        asm("xchg ax,si");
        asm("%c clc");
    }
    asm("adc dx,bx");
    asm("rcl byte [bp+si],cl");
    asm("Unknown opcode 0x82");
    if(!(bp = bp | cx)) {
        asm("adc [0xb50c],di");
        asm("aas");
        asm("imul word [bx]");
        asm("hlt");
        al = al + 0x19;
        asm("sbb ax,0x15c9");
        bx = bx + *si;
        bp = bp - 1;
        dx = dx + *bx;
        ax = ax ^ 0x293c | 0x30f4;
        (save)ax;
        if(cl = cx + 1 + cx + 1) {
            goto L00002fd7;
        }
        cx = *(bx + di + 0x16be);
        if(ax > 24925) {
            goto L00002f27;
        }
        al = *esi;
        esi = esi + 1;
        asm("adc dl,[bx+di+0x6b0f]");
        *(bx + 0x1a) = *(bx + 0x1a) - bl;
        ax = ax ^ *(bp + di + 0x12);
        *(bx + di + 0x522d) & dx;
        *(bx + si - 0x5f) = *(bx + si - 0x5f) + dh;
        asm("scasb");
        *di = *di - 0x1a02;
        asm("a32 dec cx");
        *(bx + si + 0x44ac) = *(bx + si + 0x44ac) & di;
    }
    (save)ss;
    asm("adc al,0x10");
    asm("Unknown opcode 0xda");
    asm("loop 0x2fe4");
    (save)cs;
    cx = cx ^ *(bx + si);
    *(bx + si + 39187) = *(bx + si + 39187) + ax;
    *(bp + di) & si + 1;
    asm("xchg ax,cx");
    (restore)si;
    asm("in ax,0x64");
    *(bx + si - 0x35) = *(bx + si - 0x35) + ax;
    asm("sahf");
    di = di - 1;
    asm("adc dl,[bx+si]");
    (save)ax;
    asm("in al,0x2a");
    dl = dl | cl;
L00002fd7:
    (save)di;
    di = 62652;
    *(bp + si) = ss;
    *(bx + si) = *(bx + si) & cx;
    asm("insw");
    if(!(dl = dl & *(si + 0x41))) {
        ax = ax + 1;
        *L0000BA3D = ax;
        bl = bl + *si;
        *L0000BA3D :: *(bx + si);
        (save)0x47;
        al = *L0000BA3D + *(bx + si + 0x46);
    } else {
        asm("%e jna 0x2f82");
        *(si + 59824) = *(si + 59824) ^ 0xf1e;
        asm("adc word [bx+si+0xb082],0x4cb4");
        *si = *si ^ 47634;
        *bx = *bx << cl;
        *L00000B7B = *L00000B7B - dh;
        (save)sp;
        asm("jpo 0x2fd6");
        asm("adc [bx+si-0x47],ch");
        *(bp + si) = *(bp + si) / *(bp + si);
        edx = *(bp + si) % *(bp + si);
        asm("adc bh,[bp+di+0x9c44]");
        asm("rep adc ah,[bp+0x0]");
        ax = ax | 0x5164;
        bp = bp + 1;
        asm("fdivr qword [si+0x13]");
        (save)-24;
        *di = *di & 60737;
    }
    *%ds:di] = *%ds:di] + ch;
    (fsave)(frestore) * *(bp + di + 26688);
    (restore)ds;
    asm("adc bx,[bx+si+0x65]");
    asm("daa");
    *(si - 0x37) = *(si - 0x37) + dx;
    ax = ax ^ 23100;
    asm("%e scasb");
    asm("adc dh,[bx+si+0x260d]");
    asm("adc [bp+0xe5d4],al");
    (save)0x50;
    if(!( *(bx + si - 0x12) = *(bx + si - 0x12) - 49425)) {
        asm("adc cx,si");
        *di = eax;
        di = di + 4;
        di :: *(bp + si);
        (save)cs;
        si = si - 1;
        asm("adc ax,0xfe03");
        (restore)dx;
        *(bx + di) :: si;
        ax = ax + 1 + 1;
        asm("adc [bx],di");
        asm("Unknown opcode 0xdb");
        bp = bp - 1;
        al & 0x2c;
        asm("adc sp,[bp+di+0x48]");
        si = si + 1;
        al :: "mory$ Y- ";
        ax :: 0x2d39;
        asm("Unknown opcode 0xdb");
        bp = bp - 1;
        (restore)ds;
        asm("adc [bp+di-0x29],bh");
L00003071:
        ax = ax - 0x2436;
        asm("adc al,0x82");
        asm("cmpsb");
        *(bp + si + 53522) = *(bp + si + 53522) / *(bp + si + 53522);
        edx = *(bp + si + 53522) % *(bp + si + 53522);
        asm("%s jno 0x30ae");
        *(bx + si + 0x2012) = *(bx + si + 0x2012) ^ ax;
L00003087:
        if(0x13d7 = di * sp) {
            goto L000030c8;
        }
        < ? L000030af : ;
        asm("xchg ax,bp");
    }
    if(di = di + 1) {
        goto L00003087;
    }
    (save)cs;
L00003092:
    ch = ch + *(di + 0x14);
    if(*si = *si - -18) {
        goto L00003071;
    }
    (restore)si;
    asm("mul byte [di+0x8c9a]");
    asm("rol word [bx+di],cl");
    bx = bx - 1;
    asm("adc dh,dh");
    asm("insb");
    (restore)ss;
    bh = bh - *(si + 0x399b);
L000030a9:
    asm("loopne 0x3094");
    ax = *(bp + di);
    asm("aas");
    if(cx = cx + 1) {
        goto L000030a9;
    }
    *L0000BF6D :: sp;
    (save)di;
    asm("Unknown opcode 0xc0");
    asm("%s inc cx");
    cx = cx - 1;
    asm("Unknown opcode 0xc7");
    di = 0x4c04;
    *%gs:si+0xd] = *%gs:si+0xd] + 1;
    sp = sp - 1;
    al & 0xa7;
    *(bp + 0x4c04) = *(bp + 0x4c04) ^ 46357;
L000030c8:
    asm("sbb cx,[bp+di+0x10]");
    asm("cmovnz cx,[di+0x7]");
    asm("adc cl,[bx+si]");
    *bx = *bx + cx - 1;
    if(!( *(si + "Not enough memory$ Y- ") = *(si + "Not enough memory$ Y- ") - 0x91)) {
        cl = "";
        dx = dx + 1 - 1;
        asm("Unknown opcode 0x82");
        asm("adc sp,-0x51");
        bp = bp | *di;
        (restore)bx;
        di = 42754;
        *(bp + 42754) = *(bp + 42754) | dx;
        if(!(ax = L00007c0e() + 0x3650 & 30846)) {
            sp = *(bx + "y$ Y- ");
            asm("adc [bp+di],cx");
            *(di + 0x3f) = *(di + 0x3f) + di;
            cx = 25947;
L00003106:
            if(cx = cx | *(bp + di)) {
                goto L00003092;
            }
            return;
            (restore)ax;
            asm("fldcw [si]");
            sp = *(bx + di + 63806);
            eax = *esi;
            esi = esi + 4;
            asm("out dx,ax");
            asm("adc ax,0xe816");
            ax = al & *(bp + di + 0xd) & 32372;
            (fsave) *di;
            bh = 0xd;
            *L00007E03 = al;
            asm("sbb al,0x15");
            sp = sp + 1;
            cl = cl + *(bp + si + 0x49);
            ax = ax + 1;
            asm("adc bp,dx");
            (save)ss;
            cl = 0x11;
            ch = " ";
            *(bx + si + 0x15) = es;
            if(*(bx + di) = *(bx + di) & ch) {
                goto L00003106;
            }
            asm("ror word [bx+di],0x45");
        }
        asm("adc dl,[bx+di]");
        goto L0000520f;
        if(44916 = *L00009CD3 * di) {
            goto L0000315b;
        }
        *L00004996 = al;
        asm("adc cl,[bx+si-0x69]");
        (restore)sp;
        *(bp + di) :: cl;
        ch = 0xdd;
        (restore)bx;
    }
    asm("xchg ax,dx");
    asm("xchg ax,di");
    *(bp + 0x53) = *(bp + 0x53) - 0xb7c;
L0000315b:
    asm("cli");
    di = di - 1;
    goto L00000b28;
    asm("wait");
    asm("sti");
    if(!(dx = dx + 1)) {
        (save)cs;
        bx = bx | *bx;
        (save)di;
        al = al & 0x97;
        *(bx + di) = al;
        *(bp + si) :: dl;
        asm("adc dh,ch");
    }
    bp = bp + 1;
    asm("sbb dl,[bp+si-0x4f]");
    *(bx + si) = !( *(bx + si));
    al = al + 0xf5;
    asm("cbw");
    *(di + 0x43) = *(di + 0x43) + si;
    asm("retf 0x3e38");
    asm("das");
    asm("adc [bx],bh");
    ax = ax | 0x3a06;
    if(!(dx = dx | *di)) {
        *(bx + di) = *(bx + di) ^ al;
        asm("aas");
        (save)bp;
        al = *L0000C243;
        asm("aas");
        *(bp + 42055) = *(bp + 42055) ^ 0x3220;
        asm("daa");
        asm("adc al,0x73");
        bx = bx - 1;
        asm("sbb cx,[di]");
        dx = dx + 1;
        goto ( *L00002d71);
        sp = sp & *di;
        asm("loop 0x317a");
        bx = bx + 1;
        asm("in ax,0x32");
    }
    bh = bh | *(di - 0x3f);
    asm("outsb");
    al = al + 0xc5;
    *di = *si;
    di = di + 4;
    si = si + 4;
    (save)0x5a;
    asm("adc bl,[di+0x5b]");
    asm("hlt");
    (save)cs;
    (save)sp;
    asm("rep cmp [bp+di],bl");
    sp = sp - 1;
    bp = bp | ax;
    *(si + 0x35ea) & ax;
    *(bx + di) = *(bx + di) + bh;
    (save)ds;
    dx = 27245;
    asm("adc bh,[bp+si+0x6f]");
    asm("aam 0xb");
    asm("Unknown opcode 0x0f");
    asm("adc al,0xb5");
    asm("adc al,[bx+si+0x56]");
    asm("in al,0xc3");
    al = al + 0xc4;
    ah = 0x83;
    asm("adc dl,[si]");
    dx = 0x1155;
    al = al - 1;
    asm("std");
    *(bp + si + 0xf) = *(bp + si + 0xf) + cl;
    asm("cmovo bp,[di+0x3c41]");
    asm("sbb ax,0x13b");
    (save)" Y- ";
    *(bx + si + 0x4018) = *(bx + si + 0x4018) + sp;
    asm("%d sbb al,0x64");
    asm("insb");
    asm("arpl [bx+di],dx");
    *(bx + di) = *(bx + di) ^ 0x5a;
    si = si - *(bx + 0xd);
    *(bp + si + 0x74f) = *(bp + si + 0x74f) - 1;
    ax :: 0x4242;
    asm("xlatb");
    *di = *di - cl;
    bp = bp | *(bx + di + 0x23de);
L00003211:
    asm("sbb [bx],dh");
    al = *(bp + si + 0x43);
    si = si | *(bp + di + 28740);
    asm("pushf");
    *(bp + si) = *(bp + si) & dx;
    asm("aaa");
    sp = sp + 1;
    *L0000D6C6 = al;
    if(!(al = 6 - cl - 0xf)) {
        *(si + 0x1c48) = *(si + 0x1c48) + dh;
        *(di - 4) = *(di - 4) + al;
        asm("ror byte [di+0xb0e],1");
        (save)cs;
        bx = bx | *(bx - 0x73);
        *(bx + si) = *(bx + si) + dx;
        (restore)bp;
        bx = bx & *(bx + si);
        asm("daa");
        asm("salc");
        asm("salc");
        cl = 0xc5;
        ax = *(bx + di + 0x7a);
        *(di + "enough memory$ Y- ") = *(di + "enough memory$ Y- ") ^ 0x69;
        asm("Unknown opcode 0x0f");
        asm("%c inc cx");
        if(!(si = si + 1)) {
            asm("aaa");
            bp = bp - 1;
            if(!( *(bp + si + 0x47) = *(bp + si + 0x47) + 1)) {
                bx = bx + 1;
                *L00001FBE = ax;
            }
            asm("sbb al,0x1c");
            (save)es;
            (save)di;
            ax & 0x5241;
            asm("xlatb");
        }
        *(bp + di) = ~( *(bp + di));
        ax = (al ^ 4) - 0x55cb;
        asm("out 0x33,al");
        (save)si;
        *di = *di + cx;
        dh = "enough memory$ Y- ";
        si = si - 1;
        *(bp + di) = *(bp + di) + esp;
        cx = "ory$ Y- " + 1;
        asm("Unknown opcode 0xc6");
        (restore)di;
        (restore)es;
        al = al - 0xea;
        (restore)sp;
        al = al & 0x41;
        ax = di + 0x11;
        cx = cx + 1;
        asm("Unknown opcode 0x82");
        *(bp + di) = di;
        asm("das");
        dh = dh | *(bp + si + 0x2726);
        *L000007F8 = al;
    }
    asm("adc [bx+si+0xa623],al");
    asm("hlt");
    goto L00002e82;
    asm("aas");
    *L0000A565 = al;
    asm("%s sub dl,bh");
    asm("salc");
    asm("scasw");
    asm("bound bp,[di+0x5844]");
    *(bp + 0x7a3) = *(bp + 0x7a3) ^ si;
    asm("out 0xb,ax");
    asm("adc dh,[si]");
    L00003339();
    cx = cx + 1;
    (save)ds;
    asm("aam 0xc6");
    di = 0x337c;
    al :: *(bx + si);
    asm("adc ax,0xa03e");
    ax = 0x4002;
    *(bp + si - 0x5f) = *(bp + si - 0x5f) ^ bp;
    asm("popa");
    asm("Unknown opcode 0x82");
    (save)cx;
    *(bp + di + "gh memory$ Y- ") = *(bp + di + "gh memory$ Y- ") >> 1;
    asm("adc dx,[bp+di]");
    bh = !bh;
    di = di - 1;
    asm("%c enter 0xb47,0x50");
    *(bx + di) = *(bx + di) ^ dl;
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("Unknown opcode 0xf6");
    asm("int 0x4d");
    (restore)es;
    asm("adc byte [di+0x27],0xd");
    asm("adc [%fs:bx],ch");
    (restore)cx;
    if(sp < *si) {
        goto L00003339;
    }
    ax = ax - 0x1bce;
    *(bx + di) = 0x9b;
    asm("xchg ax,si");
    di = di + 1;
    *(bp + di + 28310) = *(bp + di + 28310) & ch;
    di = di & bp;
    ax = ax & *bx;
    asm("das");
    al = al & *(bp + di + 0x3332);
    asm("adc [si],al");
    dx :: si;
    goto L000094d5;
    *(si - 0x53) = *(si - 0x53) & cx;
    asm("cmpsw");
    bp = bp | *(bx + di + 0x69);
    asm("int 0x12");
    asm("hlt");
    dl = dl + bh;
    asm("adc [bx+si],si");
    *(di + 0x68) = *(di + 0x68) + bp;
    al :: 0x3f;
    asm("rol word [si],cl");
    *(bp + si + 0x18eb) = *(bp + si + 0x18eb) + 1;
    asm("adc ax,0x5041");
    (save)0x2f4;
    sp = 0x153f;
    asm("pusha");
    ax = ax - 41089;
    asm("imul byte [si+0xd2c]");
    asm("adc bp,[bp+di-0x8]");
    bp = bp - 1;
    asm("psrlw mm0,[bx+di]");
    (restore)bp;
    ax = ax - 0x4536;
}

/* DEST BLOCK NOT FOUND: 0000341e -> 0000347a */
/* DEST BLOCK NOT FOUND: 0000346f -> 0000348a */
/*	Procedure: 0x00003339 - 0x0000345D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003339()
{



    bp = bp + 1;
    if(!(dx = dx | *(bx + si))) {
        (save)ss;
        bl = bl ^ *(bp + di - 0x58);
        (save)cx;
        cx = cx | *(bp + di);
        asm("cbw");
        asm("Unknown opcode 0xc6");
        asm("retf 0xd838");
        si = si + 1;
        asm("sbb si,[di]");
    }
    ax = ax - 0x1f73;
    asm("Unknown opcode 0xc6");
    ax & 0x1c07;
    (save)cs;
    asm("adc al,0x73");
    sp :: ax;
    bx = bx + 1 - 1;
    if(!(al & 0x6e)) {
        sp = sp - 1;
        asm("adc bh,cl");
        ax = *L0000D98E;
        asm("rol byte [bx+0x4213],cl");
        *di = *si;
        di = di + 4;
        si = si + 4;
L0000336a:
        (restore)ax;
        asm("Unknown opcode 0x0f");
        dx = dx | *(di - 0x54);
        bh = bh - *(bx + di);
        di = di | dx;
        dx = 55880;
        asm("retf 0x6268");
        (restore)ss;
        bx = 33941;
        asm("Unknown opcode 0xfe");
        asm("sbb al,0x7e");
        cx = cx << 1;
        *(bp + si) = *(bp + si) + sp;
        di = di + 1;
        al = al + 0xb4;
        cx = cx + 1;
        asm("aas");
        asm("adc [di-0x3d],bx");
        asm("%c xor al,0x6a");
        asm("int3");
        (restore)cx;
        asm("Unknown opcode 0x82");
        asm("sbb dl,[di+0x3206]");
        asm("%d push si");
        if(ax = ax | 0x3f1c) {
            goto L0000336a;
        }
        (save)ax;
        asm("sti");
        bx = bx + 1;
        asm("adc [%ds:si+0x4b],ah");
        *di :: dh;
        ax & 41007;
        ax = ax + 1;
        asm("aas");
        *(di + 1) = *(di + 1) & si;
        di = 57524;
        bh = bh & *L0000C5F5;
        asm("adc di,[bp+di+0x75]");
        *(bp + di) = *(bp + di) >> 1;
        asm("adc bh,bl");
        (save)dx;
        asm("das");
        asm("sbb ax,0x5f99");
        ax = ax + 62871;
        dh = dh - *(bx + di);
    }
    asm("cmpsb");
    *di = al;
    di = di + 1;
    asm("adc [di-0x6f],bh");
    si = si + 1;
    asm("Unknown opcode 0x82");
    asm("ficom word [bp+si-0x5]");
    *L00003D84 = ax;
    *di = *si;
    di = di + 1;
    di = di & si + 1;
    asm("adc ax,0x4903");
    *L00002FFE = al;
    asm("loopne 0x33fe");
    *(di + 0x5485) & al;
    al = dl;
    al = *L0000E275;
    al = *esi;
    esi = esi + 1;
    al = al | 0x48;
    asm("xchg ax,si");
    *(bp + di) = *(bp + di) << 0x8d;
    *(di + 0x2346) = *(di + 0x2346) | cx;
    (save)ax;
    cl = 0x79;
    al = al + 0x6e;
    si = si + 1;
    asm("adc byte [%fs:bp+di],0x5d");
    asm("retf");
    (restore)ds;
    bl :: 0;
    (restore)si;
    *(bx + di) = *(bx + di) + 30073;
    asm("enter 0x5337,0x4d");
    (fsave) *(di + 0xb5d) * *L00001D06;
    (restore)si;
    *(bx + si) :: al;
    *(bx + di + 49157) = *(bx + di + 49157) ^ cx;
    ah = 0xaa;
    asm("xchg ax,si");
    asm("jpe 0x3459");
    if(cx = cx - 1) {
        goto L0000347a;
    }
    dh = dh - *si;
    L00000A35() & 32013;
    asm("cwd");
    asm("jpo 0x33bf");
    si = 0x46be;
    asm("adc [si+0xd],bh");
    asm("Unknown opcode 0xd0");
    if(bx = bx + 1) {
        goto L00003475;
    }
    cx = cx + *(bx + di);
    ax = *L00002F3C;
    al = *L0000B4C6;
    asm("Unknown opcode 0x82");
    ch = ch ^ *%ds:bp+si];
    al = *esi;
    esi = esi + 1;
    asm("%c mov ah,0xc1");
    *(bp + si + 41354) = *(bp + si + 41354) + 1;
    *(bp + si) = *(bp + si) + si;
    asm("aaa");
    asm("adc dl,dl");
    (save)di;
    al = *L00003D3A;
    (save)33810;
    asm("retf 0x2019");
    dx = dx | *(bp + si + 49450);
    asm("sbb [bx+di-0x5c],bp");
}

/* DEST BLOCK NOT FOUND: 000035d3 -> 0000d8db */
/*	Procedure: 0x0000345E - 0x000035F6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000345E()
{



    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("Unknown opcode 0xc5");
    asm("rcl ah,1");
    asm("out dx,al");
    bl = bl + *(bp + si + 4);
    asm("sbb bh,[bp+di+0xf059]");
    dx = dx + 1;
    asm("xchg sp,[si+0x8c1f]");
    asm("jpe 0x348a");
    asm("adc al,0x6d");
    (save)cs;
    asm("adc [bx+di],ch");
    dh = 0xd0;
    asm("xchg ax,di");
    ax = ax + 0x540a;
    *(bx + di) = *(bx + di) ^ dl;
    (save)dx;
    asm("arpl [bx+0x12],di");
    asm("adc [bx+si+0x8256],cl");
    asm("std");
    ax = L00005c95();
    if(!(dx = dx & *si)) {
    }
    *L000075CC = ax;
    asm("sbb al,0x75");
    if(cl != *(bp + di + 0x3c67)) {
        *(bp + di) = *(bp + di) ^ ax;
        asm("bound sp,[bx+si-0x3]");
        bp = bp + 1;
        asm("%e cmpsw");
        bx = bx + 1;
        ah = 0xc6;
        sp = sp & *(bx + si);
        (fsave)(frestore) + *(bx + si + 5);
        asm("rep xchg ax,cx");
        *bx = *bx + 42084;
        (restore)cx;
        bx = bx - 1;
        (restore)ds;
        asm("in ax,0x2b");
        *di = *si;
        di = di + 1;
        si = si + 1;
        (restore)es;
        asm("rcl byte [si+0x44],0x40");
L000034bb:
        asm("%s xor ax,0x420b");
        bx = bx + di + 44613;
        (restore)ss;
        asm("Unknown opcode 0x82");
        dx = dx << cl;
        *(bx + si) = *(bx + si) + sp;
        dx = 0x1f44;
        asm("adc ch,[bx+di+0xa47d]");
        cx = cx - bp;
        (save)ss;
        dh = 0x80;
        asm("cbw");
        asm("%c adc ax,0x4b1f");
    }
    cl = 0x4d;
    (save)"!Not enough memory$ Y- ";
    goto L000074d2;
    cl = 0x11 - *(bx + 0x424a);
    asm("adc cx,[bx]");
    (restore)ds;
L000034ed:
    *(bx + si - 0x38) = *(bx + si - 0x38) | al;
    asm("aas");
    if(dx = dx + 1) {
        goto L000034bb;
    }
    dx = dx - 1;
    al = al + " ";
    asm("das");
    asm("adc ax,0x86");
    if(!(cx = cx + 1)) {
        asm("aad 0x11");
        asm("Unknown opcode 0x82");
        asm("outsw");
        asm("%d jnl 0x3546");
        asm("adc sp,bx");
        *(bp + si + 0x2fcc) = *(bp + si + 0x2fcc) + ax;
        (restore)ds;
        ch = 0xb7;
        asm("adc [bx+di-0x26],dl");
        dx = dx + bx;
        (save)sp;
        sp = sp - 1;
        ax = ax + 1;
        dl :: *di;
    }
    sp = *si;
    *(bx + si) = *(bx + si) >> 0xb2;
    if(*bx = *bx & bl) {
        goto L000034ed;
    }
    *(bp + si - 0x49) = *(bp + si - 0x49) & bh;
    asm("lock mov al,[0x64b6]");
    asm("adc ch,cl");
    asm("cmpsb");
    bx = bx + 1;
    dx = di + 0x6a;
    asm("repne add [si+0x4512],dx");
    asm("salc");
    *(bp + si) = *(bp + si) & dx;
    goto L00008f50;
    dl = dx - 1 ^ *(si - 4);
    asm("aas");
    asm("outsb");
    bp = bp + 1;
    asm("xchg dx,[bp+si]");
    bp = di;
    cx = cx - 1;
    *(bp + si - 0xc) = *(bp + si - 0xc) | cl;
    sp = bp;
    (restore)bp;
    asm("adc bp,[di+0x7a92]");
    asm("adc ax,0x391c");
    asm("sbb ax,0x153e");
    if(!(bp = bp + 1)) {
        ax = ax + 1 + 1;
    }
    asm("daa");
    ax = ax + 1 | 23117;
    asm("les sp,[bx+si]");
    asm("stc");
    ax = ax + 1;
    bp = bp & *(bp + di - 0x58);
    si = si - 1;
    al :: 0xf0;
    asm("rol word [bx+si+0x80be],1");
    (restore)ds;
    asm("adc bl,[bp+di-0x2d]");
    di = di + 1;
    al = al & 0x53;
    *di = *si;
    di = di + 4;
    si = si + 4;
    (restore)cx;
    sp = sp & *L0000AF85;
    (restore)dx;
    asm("daa");
    dx = dx | *(bp + 0x1131);
    (save)di;
    bl = 0xc;
    ax = ax ^ 65024;
    0x40 = *(0xc + di) * ax;
    *(di + 43703) = cx;
    ax = ax & 38127;
    asm("adc al,0xaa");
    asm("clc");
    ax = ax & 0x1b36;
    cx = cx - *(bx + 0x7f);
    sp = sp - 1;
    asm("out dx,al");
    *(bp + 0x4262) = *(bp + 0x4262) & al;
    *L00008B3F = ax;
    dx = dx | *(bp + di);
    asm("das");
    asm("jpe 0x356d");
    *bx = *bx & cl;
    asm("adc [bx+si+0x7e90],si");
    asm("xchg ax,si");
    asm("loopne 0x3624");
    asm("sbb al,0x88");
    cx = cx + 1;
    ax = (ah | 3) + 1;
    di = di ^ *bx;
    (restore)bx;
    asm("Unknown opcode 0x82");
    cx = cx + 1;
    *(di - 0x36) & si;
    asm("xchg ax,di");
    (restore)bp;
    asm("fsubr qword [bp+si-0x70]");
    asm("movq mm5,mm5");
    (save)cx;
    bx = bx + 1;
    dh = 0xe;
    (ax | 0x2347) & 0xb5;
    *L00002910 = ax | 0x2347;
    goto L0000d8db;
    al :: 0x99;
    (save)ss;
    asm("cwd");
    asm("out dx,al");
    dx = dx - 1;
    *di = *si;
    di = di + 4;
    if(si = si + 4) {
        goto L0000362c;
    }
    asm("adc [bp-0x4a],dl");
    asm("sbb dh,ch");
    cl = "ugh memory$ Y- ";
    (save)cx;
    if(cx = cx - di) {
        goto L0000363a;
    }
    al = al & 0xaa;
    (restore)bp;
    asm("adc [0xac10],sp");
    sp = sp - 1;
    *(bx + si + 0x4a) = *(bx + si + 0x4a) + bx;
    dh = 0xf;
}

/* DEST BLOCK NOT FOUND: 00003611 -> 00003593 */
/*	Procedure: 0x000035F7 - 0x00003AAB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000035F7()
{



    asm("Unknown opcode 0x0f");
    goto L00005410;
    asm("cmpsb");
    asm("xchg ax,si");
    asm("daa");
    asm("Unknown opcode 0x0f");
    return;
    asm("retf");
    ax = 0x1cb7;
    (save)si;
    asm("Unknown opcode 0xfe");
    bp = bp ^ dx;
    if(si >= 0) {
        goto L00003593;
    }
    bh = bh ^ *(bx + si);
    *si = *si | al;
    asm("sti");
    *(bp + si - 0x38) :: bp;
    dx = dx + 1;
    cx = cx + 1;
    *di = al;
    di = di + 1;
    asm("ror word [bp+si+0x4882],0xfe");
    asm("lock jng 0x3677");
    ch = ch + *(bp + si + 0x103e);
    asm("out dx,ax");
    asm("scasb");
    bh = bh + *(bx + si + 0xa31);
    dh = "ugh memory$ Y- ";
    (save)56977;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

/*	Procedure: 0x00004281 - 0x0000429C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004281()
{



}

/*	Procedure: 0x0000429D - 0x000047A6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000429D()
{



}

/*	Procedure: 0x000047A7 - 0x00004A8B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000047A7()
{



}

/*	Procedure: 0x00004A8C - 0x00005216
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004A8C()
{



}

/*	Procedure: 0x00005217 - 0x00005261
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005217()
{



}

/*	Procedure: 0x00005262 - 0x000054DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005262()
{



}

/*	Procedure: 0x000054DC - 0x000055D2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000054DC()
{



}

/*	Procedure: 0x000055D3 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000055D3()
{



}

#if 0 /* auxiliary information */
# Current option values:
option: +asmflush
option: -compactcalls
option: +compactexprs
option: +compactifs
option: +compset
option: -dfoproc
option: -disasmonly
option: -displaylabels
option: +doblocks
option: +docase
option: +dofor
option: +doifs
option: +dointrinsics
option: +doloops
option: +donullgotos
option: +dopackloops
option: +dopackstmt
option: +doremlabs
option: +dosimplify
option: -dosort
option: +dostmts
option: +doswitch
option: +dowhile
option: -dumpaddrs
option: -dumpcall
option: -dumpcomments
option: -dumpdfo
option: +dumpdoms
option: -dumpsblocks
option: -dumpsets
option: -dumpsizes
option: -dumpstmtid
option: +fatcase
option: +flag16
option: +fullscreen
option: -genpattern
option: -help
option: -hexconst
option: -html
option: +insertlabels
option: -int16
option: +int32
option: -interactive
option: -isvb5
option: +locals
option: -nohtmltabs
option: -nostackoffs
option: -objdump
option: -okclone
option: -outprocs
option: -outrefs
option: -overrule
option: +rdonly
option: -showblocks
option: -showjump
option: -showlabel
option: -showprotosym
option: -showreg
option: -showstring
option: -silent
option: +simplifyexprs
option: -stackalign16
option: -stackalign4
option: -stackalign8
option: -strallregions
option: -traceall
option: -tracesets
option: +types
option: -usesymtab
option: -validatebr
option: -validatereg
option: +validatestr
#endif
