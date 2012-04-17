/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_pouet.net/with_source_394/ia32_mz/subject.exe'
 */

/*	Procedure: 0x00000BB9 - 0x00000BC1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BB9()
{



    asm("Unknown opcode 0xc4");
    dh = 0xc6;
    ch = 0xc5;
    asm("Unknown opcode 0xc4");
}

/*	Procedure: 0x00000BC2 - 0x00000BCA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BC2()
{



    asm("Unknown opcode 0xc5");
    ch = 0xc4;
    asm("Unknown opcode 0xc5");
    dh = 0xc3;
}

/*	Procedure: 0x00000BCB - 0x00000BD9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BCB()
{



    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc5");
    di = 0xcac8;
    sp = 0xc7c6;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000BDA - 0x00000BDA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BDA()
{



    asm("retf");
}

/*	Procedure: 0x00000BDB - 0x00000BDB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BDB()
{



    asm("retf");
}

/*	Procedure: 0x00000BDC - 0x00000BDC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BDC()
{



    asm("retf");
}

/*	Procedure: 0x00000BDD - 0x00000BDF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BDD()
{



    asm("retf 0xcfcb");
}

/*	Procedure: 0x00000BE0 - 0x00000BE0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BE0()
{



    asm("iret");
}

/*	Procedure: 0x00000BE1 - 0x00000BE7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BE1()
{



    asm("int3");
    asm("int3");
    asm("int 0xca");
    asm("retf 0xccca");
}

/*	Procedure: 0x00000BE8 - 0x00000BEA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BE8()
{



    asm("retf 0xcac9");
}

/*	Procedure: 0x00000BEB - 0x00000BEB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BEB()
{



    asm("retf");
}

/*	Procedure: 0x00000BEC - 0x00000BF1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BEC()
{



    asm("into");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("retf");
}

/*	Procedure: 0x00000BF2 - 0x00000BF4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BF2()
{



    asm("retf 0xc8c9");
}

/*	Procedure: 0x00000BF5 - 0x00000C04
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BF5()
{



    asm("Unknown opcode 0xc5");
    ch = 0xc4;
    asm("Unknown opcode 0xc5");
    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc5");
    si = 0xc8c5;
    sp = 0xc5c4;
}

/*	Procedure: 0x00000C05 - 0x00000C07
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000C05()
{



}

/*	Procedure: 0x00000C08 - 0x00000C0A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000C08()
{



}

/*	Procedure: 0x00000C0B - 0x00000C64
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000C0B()
{



    di = 0xbfc0;
    si = 0xbfbf;
    di = 0xbebe;
    *L00017E7D = *L00017E7D >> 0xbc;
    bx = 0xbbba;
    dx = 0xbaba;
    dx = 0xb7ba;
    bh = 0xb5;
    ch = 0xb4;
    bl = 0xb1;
    asm("scasw");
    asm("scasb");
    asm("scasw");
    asm("scasb");
    asm("scasw");
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    al = *esi;
    esi = esi + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    ax & 0xa7a9;
    asm("cmpsw");
    al & 0xa5;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A2A2 = ax;
    *L0000A1A1 = ax;
    al = *L00009D9D;
    asm("sahf");
    asm("wait");
    L0000999a();
    asm("cbw");
    asm("cbw");
    asm("cbw");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,bp");
    asm("xchg ax,cx");
    asm("xchg ax,cx");
    asm("Unknown opcode 0x8f");
    asm("Unknown opcode 0x8e");
    *(di + 0x8c8c) = cs;
    cx = bp + 0x8b8c;
    *(bx + 0x8e8f) = cs;
    *(bp + si + 0xef) = cs;
}

/*	Procedure: 0x00000E5A - 0x00000E5A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E5A()
{



    asm("retf");
}

/*	Procedure: 0x00000E5B - 0x00000E5C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E5B()
{



    asm("int3");
    asm("retf");
}

/*	Procedure: 0x00000E5D - 0x00000E63
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E5D()
{



    asm("int3");
    asm("int 0xcd");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("retf");
}

/*	Procedure: 0x00000E64 - 0x00000E64
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E64()
{



    asm("retf");
}

/*	Procedure: 0x00000E65 - 0x00000E65
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E65()
{



    asm("retf");
}

/*	Procedure: 0x00000E66 - 0x00000E68
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E66()
{



    asm("retf 0xcac9");
}

/*	Procedure: 0x00000E69 - 0x00000E74
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E69()
{



    sp = bp;
    (restore)bp;
    asm("int3");
    asm("into");
    asm("int 0xcd");
    asm("into");
    asm("int 0xcc");
    asm("int3");
    asm("retf 0xc8c9");
}

/*	Procedure: 0x00000E75 - 0x00000E80
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E75()
{



    si = 0xc8c7;
    di = 0xcbc9;
    sp = bp;
    (restore)bp;
    asm("retf 0xc9cb");
}

/*	Procedure: 0x00000E81 - 0x00000E87
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E81()
{



    bh = 0xc6;
    ch = 0xc3;
}

/*	Procedure: 0x00000E88 - 0x00000E88
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E88()
{



}

/*	Procedure: 0x00000E89 - 0x00000EE4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E89()
{



    asm("rol ax,0xc1");
    di = 0xbfbe;
    si = 0xc1c0;
    asm("rol ax,0xbf");
    di = 0xbfbf;
    si = 0xbbba;
    dx = 0xbbb9;
    cx = 0xb8ba;
    bh = 0xb6;
    ch = 0xb4;
    cl = 0xb1;
    dl = 0xaf;
    asm("scasb");
    asm("scasw");
    al = 0xaf;
    eax = *esi;
    esi = esi + 4;
    asm("scasb");
    eax = *esi;
    esi = esi + 4;
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    *di = al;
    di = di + 1;
    ax & 0xa7a8;
    asm("cmpsw");
    asm("cmpsw");
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *L0000A0A2 = ax;
    asm("lahf");
    asm("sahf");
    asm("popf");
    asm("popf");
    asm("wait");
    asm("wait");
    asm("wait");
    L00009899();
    asm("xchg ax,di");
    asm("xchg ax,si");
    asm("xchg ax,bp");
    asm("xchg ax,sp");
    asm("xchg ax,cx");
    asm("Unknown opcode 0x8f");
    cx = bp + 0x8d8d;
    dx = bx + di + 0x9191;
    asm("xchg ax,dx");
    asm("xchg ax,dx");
    asm("xchg ax,cx");
    asm("xchg ax,cx");
    asm("Unknown opcode 0x8d");
    asm("out dx,ax");
}

/*	Procedure: 0x000019B3 - 0x000019BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000019B3()
{



    asm("rcl cl,1");
    asm("rcl cl,1");
    asm("rcl dl,cl");
    asm("rcl cl,cl");
    asm("iret");
}

/*	Procedure: 0x000019BC - 0x000019BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000019BC()
{



    asm("into");
    asm("int 0xcb");
    asm("retf");
}

/*	Procedure: 0x000019C0 - 0x000019C0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000019C0()
{



    asm("retf");
}

/* DEST BLOCK NOT FOUND: 00001a10 -> 00001a90 */
/* DEST BLOCK NOT FOUND: 00001a6c -> 00001aeb */
/*	Procedure: 0x000019C1 - 0x00001A24
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000019C1()
{



    asm("enter 0xc7c6,0xc6");
    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc6");
    asm("enter 0x6fc7,0x47");
    ax = ax - 1 - 1;
    cx = cx - 1;
    dx = dx - 1 - 1;
    bx = bx - 1;
    sp = sp - 1;
    sp = sp - 1;
    bp = bp - 1;
    si = si - 1;
    (save)ax;
    asm("outsb");
    (save)bx;
    (save)bp;
    (save)bp;
    (save)si;
    ax = 0x6fbe;
    (restore)ax;
    (restore)cx;
    (restore)cx;
    (restore)bx;
    (restore)bx;
    (restore)sp;
    (restore)bp;
    (restore)bp;
    asm("outsb");
    cl = 0xaf;
    asm("scasw");
    asm("scasb");
    asm("scasb");
    asm("scasb");
    asm("outsw");
    asm("%g a32 push dword 0x6b6b6969");
    asm("insb");
    asm("insw");
    asm("outsb");
    asm("outsb");
    asm("outsw");
    asm("outsw");
    asm("popf");
    asm("wait");
    asm("outsb");
    if(di = di - 1 - 1) {
        goto L00001a7a;
    }
    != ? 0x1a7e : ;
    > ? L00001a82 : ;
    >= ? 0x1a86 : ;
    asm("jpe 0x1a89");
    < ? L00001a8d : ;
    >= ? L00001a90 : ;
    asm("outsw");
    asm("xchg ax,dx");
    asm("xchg ax,cx");
    asm("Unknown opcode 0x8f");
    asm("Unknown opcode 0x8f");
    asm("xchg ax,cx");
    asm("xchg ax,dx");
    asm("xchg ax,bp");
    asm("xchg ax,si");
    asm("xchg ax,sp");
    asm("xchg ax,dx");
    asm("xchg ax,di");
    asm("cbw");
    asm("xchg ax,si");
    al = *L0000EF94;
}

/*	Procedure: 0x00001AFF - 0x00001B00
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001AFF()
{



    asm("int3");
    asm("retf");
}

/* DEST BLOCK NOT FOUND: 00001b50 -> 00001bd0 */
/* DEST BLOCK NOT FOUND: 00001baa -> 00001c2a */
/*	Procedure: 0x00001B01 - 0x00001B64
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001B01()
{



    asm("enter 0xc7c7,0xc7");
    dh = 0xc8;
    asm("insw");
    asm("insw");
    si = si + 1;
    di = di + 1;
    ax = ax - 1 - 1;
    cx = cx - 1;
    dx = dx - 1 - 1;
    bx = bx - 1;
    sp = sp - 1;
    bp = bp - 1 - 1;
    si = si - 1;
    asm("insw");
    (save)bx;
    (save)sp;
    (save)sp;
    (save)0x6dbe;
    (save)si;
    ax = di;
    (restore)ax;
    (restore)cx;
    (restore)dx;
    (restore)bx;
    (restore)bx;
    (restore)sp;
    (restore)bp;
    asm("insw");
    asm("insb");
    cl = 0xb0;
    al = 0xb0;
    asm("insb");
    asm("insw");
    asm("%g a32 push dword 0x6c6b6a69");
    asm("insw");
    asm("insw");
    asm("outsb");
    asm("outsw");
    asm("insw");
    asm("pushf");
    asm("pushf");
    asm("insb");
    if(di = di - 1 - 1) {
        goto L00001bba;
    }
    != ? 0x1bbe : ;
    > ? L00001bc1 : ;
    >= ? 0x1bc5 : ;
    asm("jpe 0x1bc9");
    asm("jpo 0x1bcc");
    >= ? L00001bd0 : ;
    asm("insb");
    asm("insb");
    asm("xchg ax,bx");
    asm("Unknown opcode 0x8f");
    ss = *(bp + si + 0x9091);
    asm("xchg ax,cx");
    asm("xchg ax,bp");
    asm("xchg ax,sp");
    asm("xchg ax,dx");
    asm("xchg ax,dx");
    asm("xchg ax,di");
    asm("cbw");
    asm("xchg ax,si");
    al = *L0000EF95;
}

/* DEST BLOCK NOT FOUND: 00001c91 -> 00001d12 */
/* DEST BLOCK NOT FOUND: 00001ced -> 00001d6a */
/*	Procedure: 0x00001C41 - 0x00001CA4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001C41()
{



    sp = bp;
    (restore)bp;
    sp = bp;
    (restore)bp;
    asm("enter 0xc7c8,0xc8");
    asm("enter 0x456a,0x46");
    di = di + 1 + 1;
    ax = ax - 1 - 1;
    cx = cx - 1;
    dx = dx - 1 - 1;
    bx = bx - 1;
    sp = sp - 1;
    bp = bp - 1 - 1;
    si = si - 1;
    di = di - 1;
    0x53 = *(di + 0x6abc) * di;
    (save)bx;
    (save)sp;
    (save)bp;
    (save)bp;
    (save)si;
    ax = di;
    (restore)cx;
    (restore)cx;
    (restore)dx;
    (restore)bx;
    (restore)sp;
    (restore)bp;
    (restore)bp;
    -80 = *(bx + di + 0xb0b1) * si;
    (save)0x63;
    asm("%g a32 push dword 0x6b6a6a69");
    asm("insb");
    asm("insw");
    asm("outsb");
    asm("outsb");
    if(0x73 = *(di + 0x6b9c) * bx) {
        goto L00001cfb;
    }
    != ? 0x1cff : ;
    > ? L00001d03 : ;
    >= ? 0x1d07 : ;
    asm("jpe 0x1d0a");
    < ? L00001d0e : ;
    <= ? L00001d12 : ;
    -111 = *(bp + si + 0x8f8f) * dx;
    ss = *(bx + di + 0x9292);
    asm("xchg ax,cx");
    asm("xchg ax,cx");
    asm("xchg ax,bp");
    asm("cwd");
    asm("cbw");
    *L0000EF97 = al;
}

/*	Procedure: 0x00001D79 - 0x00001D7A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001D79()
{



    asm("into");
    asm("iret");
}

/*	Procedure: 0x00001D7B - 0x00001D81
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001D7B()
{



    asm("ror dh,1");
    asm("int 0xcc");
    asm("int 0xce");
    asm("retf");
}

/* DEST BLOCK NOT FOUND: 00001dd0 -> 00001e50 */
/* DEST BLOCK NOT FOUND: 00001e2c -> 00001ea9 */
/*	Procedure: 0x00001D82 - 0x00001DE4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001D82()
{



    sp = bp;
    (restore)bp;
    sp = bp;
    (restore)bp;
    sp = bp;
    (restore)bp;
    asm("enter 0xcbc7,0x68");
    bp = bp + 1 + 1;
    si = si + 1 + 1;
    di = di + 1;
    ax = ax - 1 - 1;
    cx = cx - 1;
    dx = dx - 1;
    bx = bx - 1 - 1;
    sp = sp - 1;
    bp = bp - 1;
    si = si - 1 - 1;
    (save)0xbdbd;
    (save)0x5352;
    (save)sp;
    (save)sp;
    (save)bp;
    (save)si;
    ax = di;
    (restore)ax;
    (restore)cx;
    (restore)dx;
    (restore)dx;
    (restore)bx;
    (restore)sp;
    (restore)bp;
    0x68b0 = *(bp + di + 0xb0b1) * si;
    asm("arpl [si+0x64],sp");
    asm("%g a32 push dword 0x6b6a6968");
    asm("insb");
    asm("insw");
    asm("insw");
    asm("outsb");
    (save)0x9d9e;
    if(0x7574 = *(bp + si + 0x73) * si) {
        goto L00001e41;
    }
    >= ? 0x1e45 : ;
    >= ? 0x1e48 : ;
    asm("jpo 0x1e4c");
    >= ? L00001e50 : ;
    <= ? L00001e3c : ;
    asm("xchg ax,dx");
    ss = *(bx + di + 0x8f90);
    asm("xchg ax,dx");
    asm("xchg ax,dx");
    asm("xchg ax,dx");
    asm("xchg ax,cx");
    asm("xchg ax,sp");
    asm("xchg ax,si");
    L000000ed();
}

/*	Procedure: 0x00001EB6 - 0x00001EC1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001EB6()
{



    asm("ror bh,1");
    asm("into");
    asm("rcl al,1");
    asm("ror dh,1");
    asm("int 0xce");
    asm("into");
    asm("into");
    asm("retf");
}

/*	Procedure: 0x00001EC2 - 0x00001EC2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001EC2()
{



    asm("retf");
}

/*	Procedure: 0x00001EC3 - 0x00001EC3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001EC3()
{



    asm("retf");
}

/*	Procedure: 0x00001EC4 - 0x00001EC4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001EC4()
{



    asm("retf");
}

/*	Procedure: 0x00001EC5 - 0x00001EC6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001EC5()
{



    sp = bp;
    (restore)bp;
    asm("retf");
}

/* DEST BLOCK NOT FOUND: 00001f10 -> 00001f8f */
/*	Procedure: 0x00001EC7 - 0x00001F24
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001EC7()
{



    asm("a32 inc esp");
    bp = bp + 1 + 1;
    si = si + 1;
    di = di + 1 + 1;
    ax = ax - 1;
    cx = cx - 1;
    dx = dx - 1 - 1;
    bx = bx - 1;
    sp = sp - 1;
    sp = sp - 1;
    bp = bp - 1;
    esp = 1381132221;
    (save)bx;
    (save)1381132221;
    (save)1381132221;
    (save)si;
    (save)si;
    ax = di;
    (restore)cx;
    (restore)dx;
    (restore)dx;
    (restore)bx;
    (restore)sp;
    (restore)sp;
    asm("a32 o32 mov cl,0xb1");
    asm("bound esp,[ebx+0x64]");
    asm("%g a32 push dword 0x6b6a6a69");
    asm("insb");
    asm("insw");
    asm("outsb");
    asm("o32 lahf");
    asm("sahf");
    asm("o32 jc 0x1f79");
    if(si = si - 1) {
        goto L00001f7d;
    }
    != ? 0x1f80 : ;
    > ? L00001f84 : ;
    >= ? 0x1f88 : ;
    asm("jpe 0x1f8b");
    < ? L00001f8f : ;
    <= ? L00001f7a : ;
    asm("o32 nop");
    asm("xchg ax,bx");
    asm("xchg ax,cx");
    asm("xchg ax,cx");
    asm("xchg ax,dx");
    asm("xchg ax,cx");
    asm("xchg ax,bx");
    asm("xchg ax,si");
    asm("xchg ax,si");
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("xchg ax,bp");
    goto L00001f26;
}

/*	Procedure: 0x00001FFF - 0x00002004
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001FFF()
{



    asm("rcl al,1");
    asm("int 0xcd");
    asm("into");
    asm("retf");
}

/*	Procedure: 0x00002005 - 0x00002006
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002005()
{



    asm("int3");
    asm("retf");
}

/* DEST BLOCK NOT FOUND: 00002052 -> 000020d3 */
/* DEST BLOCK NOT FOUND: 000020ac -> 00002129 */
/*	Procedure: 0x00002007 - 0x00002064
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002007()
{



    asm("%f inc dx");
    bx = bx + 1;
    sp = sp + 1;
    bp = bp + 1 + 1;
    si = si + 1;
    di = di + 1 + 1;
    ax = ax - 1;
    cx = cx - 1;
    dx = dx - 1 - 1;
    bx = bx - 1;
    sp = sp - 1;
    sp = sp - 1;
    asm("%f mov bx,0x64b8");
    (save)cx;
    (save)dx;
    (save)dx;
    (save)bx;
    (save)sp;
    (save)bp;
    (save)si;
    (save)si;
    ax = di;
    (restore)cx;
    (restore)dx;
    (restore)bx;
    (restore)bx;
    (restore)sp;
    (restore)bp;
    asm("%g mov dl,0xb1");
    asm("%g popa");
    asm("bound sp,[bp+di+0x63]");
    asm("%g a32 push dword 0x6b6a6968");
    asm("insb");
    asm("insw");
    asm("outsb");
    asm("%f lahf");
    asm("sahf");
    asm("%f jc 0x20b9");
    if(bp = bp - 1) {
        goto L000020bc;
    }
    != ? 0x20c0 : ;
    > ? L000020c4 : ;
    >= ? 0x20c7 : ;
    asm("jpe 0x20cb");
    < ? L000020cf : ;
    <= ? L000020d3 : ;
    asm("%f xchg ax,cx");
    asm("xchg ax,bx");
    asm("xchg ax,sp");
    asm("xchg ax,cx");
    asm("xchg ax,cx");
    asm("xchg ax,bp");
    asm("xchg ax,bx");
    asm("Unknown opcode 0x8f");
    asm("xchg ax,bp");
    asm("xchg ax,bp");
    asm("xchg ax,sp");
    *L0000E895 = al;
}

/* DEST BLOCK NOT FOUND: 00002192 -> 00002213 */
/* DEST BLOCK NOT FOUND: 000021ec -> 00002269 */
/*	Procedure: 0x00002147 - 0x000021A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002147()
{



    asm("bound ax,[bp+si+0x43]");
    bx = bx + 1;
    sp = sp + 1;
    bp = bp + 1 + 1;
    si = si + 1;
    di = di + 1;
    ax = ax - 1 - 1;
    cx = cx - 1;
    dx = dx - 1 - 1;
    bx = bx - 1;
    sp = sp - 1;
    asm("bound di,[bp+di+0x62b9]");
    (save)cx;
    (save)cx;
    (save)dx;
    (save)bx;
    (save)sp;
    (save)bp;
    (save)bp;
    (save)si;
    ax = di;
    (restore)cx;
    (restore)cx;
    (restore)dx;
    (restore)bx;
    (restore)sp;
    (restore)bp;
    asm("arpl [bp+si+0x62b0],si");
    asm("popa");
    asm("popa");
    asm("bound sp,[bp+di+0x64]");
    asm("%g push dword 0x6b6a6968");
    asm("insb");
    asm("insb");
    asm("insw");
    asm("arpl [bx+0x629e],bx");
    if(bp = bp - 1) {
        goto L000021f8;
    }
    >= ? L000021fc : ;
    != ? 0x2200 : ;
    > ? L00002204 : ;
    >= ? 0x2207 : ;
    asm("jpe 0x220b");
    < ? L0000220f : ;
    >= ? L00002213 : ;
    asm("bound dx,[bx+di+0x9391]");
    asm("xchg ax,bx");
    asm("xchg ax,dx");
    asm("xchg ax,dx");
    asm("xchg ax,dx");
    asm("xchg ax,sp");
    asm("xchg ax,cx");
    asm("xchg ax,bp");
    asm("xchg ax,sp");
    asm("xchg ax,dx");
    *L0000E792 = al;
}

/* DEST BLOCK NOT FOUND: 000022d2 -> 00002352 */
/* DEST BLOCK NOT FOUND: 0000232d -> 000023a9 */
/*	Procedure: 0x000022C0 - 0x000022E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000022C0()
{



    asm("popa");
    al = *L000060A0;
    >= ? 0x2338 : ;
    >= ? L0000233c : ;
    != ? 0x233f : ;
    <= ? L00002343 : ;
    >= ? 0x2347 : ;
    asm("jpe 0x234b");
    asm("jpo 0x234e");
    >= ? L00002352 : ;
    asm("pusha");
    asm("xchg ax,dx");
    asm("xchg ax,bx");
    asm("xchg ax,sp");
    asm("xchg ax,sp");
    asm("xchg ax,bx");
    asm("xchg ax,sp");
    asm("xchg ax,sp");
    asm("xchg ax,dx");
    asm("xchg ax,bp");
    asm("xchg ax,sp");
    asm("xchg ax,di");
    asm("xchg ax,bp");
    asm("xchg ax,sp");
    ax = *L0000E390;
}

/* DEST BLOCK NOT FOUND: 00002911 -> 0000298f */
/*	Procedure: 0x000028C6 - 0x00002924
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000028C6()
{



    asm("into");
    (save)si;
    asm("aas");
    asm("aas");
    ax = ax + 1;
    cx = cx + 1 + 1;
    dx = dx + 1;
    bx = bx + 1;
    sp = sp + 1;
    sp = sp + 1;
    bp = bp + 1;
    si = si + 1;
    di = di + 1;
    ax = ax - 1 - 1;
    cx = cx - 1;
    dx = dx - 1;
    (save)si;
    si = si - 1;
    (save)ax;
    (save)ax;
    (save)cx;
    (save)dx;
    (save)bx;
    (save)bx;
    (save)sp;
    (save)0x55bb;
    (save)si;
    (restore)cx;
    (restore)cx;
    (restore)dx;
    (save)si;
    dl = 0xb0;
    si = si;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("bound sp,[bp+di+0x64]");
    asm("%g a32 push dword 0x6b6a6a69");
    (save)si;
    *L000056A2 = ax;
    asm("outsw");
    if(ax = di - 1) {
        goto L00002978;
    }
    < ? L0000297c : ;
    == ? L00002980 : ;
    <= ? L00002984 : ;
    >= ? 0x2987 : ;
    >= ? 0x298b : ;
    asm("jpo 0x298f");
    >= ? L0000296a : ;
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,sp");
    asm("xchg ax,sp");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,sp");
    asm("xchg ax,bx");
    asm("xchg ax,bp");
    asm("xchg ax,sp");
    asm("xchg ax,sp");
    ax & 0xe093;
}

/*	Procedure: 0x000029A2 - 0x000029BA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000029A2()
{



    asm("Unknown opcode 0xc6");
    (save)bx;
    dx = dx - 1 - 1;
    cx = cx - 1;
    ax = ax - 1;
    di = di + 1;
    si = si + 1;
    bp = bp + 1 + 1;
    sp = sp + 1;
    bx = bx + 1;
    dx = dx + 1 + 1;
    cx = cx + 1;
    ax = ax + 1;
    asm("aas");
    asm("aas");
    (save)bx;
    asm("enter 0xcdca,0xcf");
    asm("into");
    asm("iret");
}

/*	Procedure: 0x000029BB - 0x000029BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000029BB()
{



    asm("iret");
}

/*	Procedure: 0x000029BC - 0x00002A05
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000029BC()
{



    asm("rcl cx,1");
    asm("rcl bl,cl");
    asm("aad 0xd8");
    asm("fcomp st1");
    asm("Unknown opcode 0xd9");
    asm("Unknown opcode 0xd9");
    asm("Unknown opcode 0xd9");
    asm("fcom st6");
    asm("aam 0xd5");
    (save)sp;
    asm("das");
    asm("das");
    asm("%c sub ax,0x2d2d");
    al = al - 0x2c - 0x2c;
    bp = bp - *(bp + di) - *(bp - *(bp + di) + di);
    dx = dx - *(bp + di - 0x25);
    asm("fist dword [bp+di+0x2b]");
    bp = bp - *(bp + di) - *(bp - *(bp + di) + di);
    ax = al - 0x2c - 0x2c - 0x2d - 0x2e2e;
    asm("%c das");
    (save)sp;
    st4 = (frestore);
    asm("fcmovnu st0");
    asm("aad 0xd2");
    asm("rcl bx,cl");
    asm("rcl bx,cl");
    asm("aam 0xd4");
    asm("aam 0xd3");
    asm("rcl bl,cl");
    asm("rcl cx,1");
    asm("rcl dx,cl");
    asm("iret");
}

/* DEST BLOCK NOT FOUND: 00002a52 -> 00002ad0 */
/*	Procedure: 0x00002A06 - 0x00002A64
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002A06()
{



    asm("rcl byte [bp+di+0x3e],1");
    asm("aas");
    ax = ax + 1 + 1;
    cx = cx + 1;
    dx = dx + 1 + 1;
    bx = bx + 1;
    sp = sp + 1;
    bp = bp + 1 + 1;
    si = si + 1;
    di = di + 1;
    ax = ax - 1;
    cx = cx - 1 - 1;
    (save)sp;
    si = si - 1 - 1;
    (save)ax;
    (save)cx;
    (save)dx;
    (save)bx;
    (save)bx;
    (save)sp;
    (save)0x54bc;
    (save)si;
    (save)di;
    ax = di;
    (restore)cx;
    (restore)dx;
    (save)sp;
    bl = 0xb2;
    si = 0xb2;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("bound sp,[bp+si+0x63]");
    asm("%g a32 push dword 0x6b6a6969");
    (save)bx;
    *L000054A2 = ax;
    if(di = di - 1) {
        goto L00002ab6;
    }
    >= ? 0x2aba : ;
    >= ? L00002abe : ;
    == ? L00002ac2 : ;
    <= ? L00002ac5 : ;
    >= ? 0x2ac9 : ;
    asm("jpe 0x2acd");
    asm("jpo 0x2ad0");
    (save)bx;
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,di");
    asm("xchg ax,sp");
    asm("xchg ax,bp");
    asm("xchg ax,di");
    asm("xchg ax,si");
    asm("xchg ax,bp");
    asm("xchg ax,bx");
    asm("xchg ax,sp");
    asm("xchg ax,bp");
    asm("xchg ax,sp");
    asm("cmpsw");
    asm("xchg ax,dx");
    (fsave)(frestore) + *(bx + si);
}

/*	Procedure: 0x00002AE2 - 0x00002AF7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002AE2()
{



    asm("lds dx,[bx+di+0x4a]");
    cx = cx - 1;
    ax = ax - 1 - 1;
    si = si + 1 + 1;
    bp = bp + 1;
    sp = sp + 1;
    sp = sp + 1;
    bx = bx + 1;
    dx = dx + 1;
    cx = cx + 1 + 1;
    ax = ax + 1;
    asm("aas");
    asm("%d push dx");
    asm("retf 0xd0cb");
}

/*	Procedure: 0x00002AF8 - 0x00002AFC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002AF8()
{



    asm("rcl dl,cl");
    asm("rcl dl,1");
    asm("iret");
}

/* DEST BLOCK NOT FOUND: 00002b91 -> 00002c0e */
/*	Procedure: 0x00002AFD - 0x00002BA4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002AFD()
{



    asm("rcl dx,1");
    asm("aad 0xd6");
    asm("fcmovu st3");
    asm("fcmovnu st4");
    asm("Unknown opcode 0xdc");
    asm("Unknown opcode 0xdc");
    st2 = 1;
    asm("fcomp st0");
    (save)cx;
    asm("%c sub ax,0x2d2d");
    al = al - 0x2c - 0x2b;
    bp = bp - *(bp + di) - *(bp - *(bp + di) + si);
    ch = ch - *(bp + si);
    dl = dl - *(bx + di - 0x24);
    asm("fst qword [bx+di+0x2a]");
    ch = ch - *(bp + si) - *(bp + si) - *(bp + di);
    bp = bp - *(bp + di);
    ax = al - 0x2c - 0x2d - 0x2e2e;
    (save)cx;
    asm("Unknown opcode 0xde");
    st5 = (frestore);
    asm("fcom st4");
    asm("aam 0xd3");
    asm("aam 0xd4");
    asm("rcl bx,cl");
    asm("rcl bx,cl");
    asm("rcl bx,cl");
    asm("rcl dl,cl");
    asm("rcl dl,cl");
    asm("rcl ax,1");
    asm("rcl byte [bp+si+0x3e],1");
    asm("%d aas");
    ax = ax + 1;
    cx = cx + 1 + 1;
    dx = dx + 1;
    bx = bx + 1 + 1;
    sp = sp + 1;
    bp = bp + 1;
    si = si + 1;
    di = di + 1;
    ax = ax - 1 - 1;
    cx = cx - 1;
    (save)cx;
    bp = bp - 1;
    (save)ax;
    (save)cx;
    (save)dx;
    (save)bx;
    (save)sp;
    (save)bp;
    (save)bp;
    (save)si;
    ax = 0x51bb;
    (restore)cx;
    (restore)dx;
    ah = 0xb3;
    si = dx;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("popa");
    asm("bound sp,[bp+di+0x64]");
    asm("%g a32 push dword 0x516b6a69");
    *L000051A0 = al;
    asm("outsw");
    if(si = si - 1) {
        goto L00002bf8;
    }
    < ? L00002bfc : ;
    == ? L00002bff : ;
    != ? 0x2c03 : ;
    > ? L00002c07 : ;
    >= ? 0x2c0b : ;
    asm("jpo 0x2c0e");
    < ? L00002be7 : ;
    asm("xchg ax,bp");
    asm("xchg ax,bp");
    asm("xchg ax,di");
    asm("xchg ax,si");
    asm("xchg ax,sp");
    asm("xchg ax,di");
    asm("xchg ax,di");
    asm("xchg ax,si");
    asm("xchg ax,sp");
    asm("xchg ax,bx");
    asm("xchg ax,bp");
    asm("xchg ax,si");
    asm("xchg ax,sp");
    al & 0x92;
    (fsave)(frestore) + *(bx + si);
}

/* DEST BLOCK NOT FOUND: 00002cd1 -> 00002d4e */
/*	Procedure: 0x00002C22 - 0x00002CE4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002C22()
{



    asm("lds dx,[bx+si+0x4a]");
    cx = cx - 1;
    ax = ax - 1;
    di = di + 1;
    si = si + 1 + 1;
    bp = bp + 1;
    sp = sp + 1;
    bx = bx + 1;
    dx = dx + 1 + 1;
    cx = cx + 1;
    ax = ax + 1;
    asm("aas");
    asm("aas");
    asm("%d dec di");
    asm("int3");
    asm("into");
    asm("rcl dx,1");
    asm("rcl dl,cl");
    asm("rcl bl,cl");
    asm("rcl bx,1");
    asm("salc");
    asm("Unknown opcode 0xd9");
    asm("fcmovu st3");
    asm("Unknown opcode 0xdc");
    st5 = 1;
    asm("loopne 0x2c27");
    st4 = (frestore);
    (fsave)(frestore) * *(bx + 0x2e);
    al = ax - 0x2c2d - 0x2b;
L00002c51:
    ch = ch - *(bp - *(bp + di) + si) - *(bp + si);
    *(bx + di) = *(bx + di) - bp;
    *(bx + di) = *(bx + di) - bp;
    di = di - 1;
    asm("fnstsw ax");
    *(bx + di - 1) = *(bx + di - 1) - bp;
    *(bx + di) = *(bx + di) - bp;
    *(bp + si) = *(bp + si) - bp;
    ch = ch - *(bp + si);
    (save)al - 0x2c - 0x2d;
    if(bp = bp - *(bp + di) - *si) {
        goto L00002c51;
    }
    st1 = (frestore);
    asm("aad 0xd4");
    asm("aad 0xd6");
    asm("salc");
    asm("aam 0xd5");
    asm("aam 0xd3");
    asm("rcl bx,cl");
    asm("rcl sp,cl");
    asm("aam 0xd2");
    asm("rcl al,1");
    asm("ror word [bx+0x3d],1");
    asm("%d aas");
    ax = ax + 1;
    cx = cx + 1;
    dx = dx + 1 + 1;
    bx = bx + 1;
    sp = sp + 1;
    bp = bp + 1 + 1;
    si = si + 1;
    di = di + 1;
    ax = ax - 1;
    cx = cx - 1;
    di = di - 1;
    *(bp + 0x4d50) = *(bp + 0x4d50) >> 0x4e;
    si = si - 1;
    di = di - 1;
    (save)ax;
    (save)cx;
    (save)dx;
    (save)bx;
    (save)bx;
    (save)sp;
    (save)bp;
    (save)si;
    ax = di;
    (restore)ax;
    (restore)dx;
    di = di - 1;
    ah = 0xb3;
    (restore)si;
    (restore)si;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("bound sp,[bp+di+0x63]");
    asm("%g a32 push dword 0x4f6b6a69");
    ax = *L00004FA1;
    asm("outsw");
    if(di = di - 1) {
        goto L00002d38;
    }
    >= ? L00002d3f : ;
    != ? 0x2d43 : ;
    > ? L00002d46 : ;
    >= ? 0x2d4b : ;
    asm("jpe 0x2d4e");
    < ? L00002d25 : ;
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,sp");
    asm("cbw");
    asm("cwd");
    asm("cwd");
    asm("xchg ax,si");
    asm("xchg ax,bp");
    asm("cwd");
    asm("xchg ax,di");
    asm("xchg ax,sp");
    ax & 0xdb93;
}

/* DEST BLOCK NOT FOUND: 00002e11 -> 00002e8e */
/*	Procedure: 0x00002D63 - 0x00002E24
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002D63()
{



    bp = bp - 1;
    cx = cx - 1;
    ax = ax - 1;
    di = di + 1 + 1;
    si = si + 1;
    bp = bp + 1;
    sp = sp + 1;
    bx = bx + 1 + 1;
    dx = dx + 1;
    cx = cx + 1;
    ax = ax + 1;
    asm("aas");
    asm("aas");
    asm("%d cmp ax,0xce4e");
    asm("rcl al,1");
    asm("rcl bx,cl");
    asm("rcl ah,cl");
    asm("rcl bx,cl");
    asm("rcr ax,cl");
    asm("Unknown opcode 0xd9");
    asm("fcmovu st3");
    asm("Unknown opcode 0xdc");
    st7 = (frestore);
    asm("loopne 0x2d68");
    asm("loopne 0x2d67");
    (fsave)(frestore) * *(di + 0x2d);
    al = al - 0x2c;
    bp = bp - *(bp + di);
    *(bx + di) = *(bx + di) - bp;
    *(bx + di) = *(bx + di) - bp;
    *(bx + si) = *(bx + si) - ch;
    if(!( *(di - 0x1f) = *(di - 0x1f) - ch - *(bp + si) - *(bp + si))) {
        *(bx + si) = *(bx + si) - ch;
        *(bx + si) = *(bx + si) - ch;
        *(bx + di) = *(bx + di) - bp;
        *(bx + di) = *(bx + di) - bp;
        *(bp + si) = *(bp + si) - bp;
        ch = ch - *(bp + si);
        bp = bp - *(bp + di);
        al = al - 0x2c;
        bp = bp - 1;
        asm("loope 0x2d92");
        st3 = (frestore);
        asm("xlatb");
        asm("xlatb");
        asm("Unknown opcode 0xd9");
        asm("fcmovnu st0");
        asm("xlatb");
        asm("aad 0xd5");
        asm("aam 0xd3");
        asm("rcl sp,cl");
        asm("rcl cx,cl");
        asm("rcl al,cl");
        asm("rcl cx,1");
        bp = bp - 1;
        al :: 0x3d;
        asm("%d aas");
        asm("aas");
        ax = ax + 1;
        cx = cx + 1;
        dx = dx + 1;
        bx = bx + 1 + 1;
        sp = sp + 1;
        bp = bp + 1;
        si = si + 1;
        di = di + 1 + 1;
        ax = ax - 1;
        bp = bp - 1;
        *(bx + 0x4c4d) = *(bx + 0x4c4d) >> 0x4d;
        si = si - 1;
        (save)ax;
        (save)cx;
        (save)cx;
        (save)dx;
        (save)bx;
        (save)sp;
        (save)bp;
        (save)bp;
        (save)si;
        ax = di - 1;
        (restore)cx;
        bp = bp - 1;
    }
    ah = 0xb4;
    (restore)bp;
    (restore)si;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("popa");
    asm("arpl [si+0x64],sp");
    asm("%g a32 push dword 0x4e6a6968");
    *L00004DA1 = ax;
    asm("outsw");
    if(bp = bp - 1) {
        goto L00002e78;
    }
    >= ? 0x2e7b : ;
    >= ? L00002e7f : ;
    != ? 0x2e83 : ;
    <= ? L00002e86 : ;
    >= ? 0x2e8a : ;
    asm("jpe 0x2e8e");
    < ? L00002e62 : ;
    asm("xchg ax,di");
    asm("cbw");
    asm("xchg ax,di");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,di");
    L00009795();
    asm("xchg ax,di");
    asm("xchg ax,bp");
    *di = al;
    di = di + 1;
    asm("xchg ax,bx");
    (fsave) *(bx + si);
}

stack space not deallocated on return
/*	Procedure: 0x00002F06 - 0x00002F19
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002F06()
{



    asm("ror byte [bp+di+0x3c],1");
    ax :: 0x3e3d;
    asm("aas");
    ax = ax + 1;
    cx = cx + 1 + 1;
    dx = dx + 1;
    bx = bx + 1;
    sp = sp + 1;
    sp = sp + 1;
    bp = bp + 1;
    si = si + 1;
    di = di + 1;
    ax = ax - 1;
    bx = bx - 1;
}

/* DEST BLOCK NOT FOUND: 00002f52 -> 00002fd0 */
/*	Procedure: 0x00002F1A - 0x00002F64
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002F1A()
{



    bp = bp - 1;
    si = si - 1 - 1;
    (save)ax;
    (save)cx;
    (save)dx;
    (save)bx;
    (save)bx;
    (save)sp;
    (save)bp;
    (save)si;
    ax = 0x4c4b;
    (restore)cx;
    bx = bx - 1;
    ah = 0xb4;
    (restore)bp;
    (restore)si;
    (restore)di;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("bound sp,[bp+di+0x64]");
    asm("%g push dword 0x4b6a6968");
    *L00004BA1 = ax;
    asm("outsb");
    asm("outsw");
    if(bx = bx - 1) {
        goto L00002fb9;
    }
    < ? L00002fbd : ;
    == ? L00002fc1 : ;
    <= ? L00002fc4 : ;
    > ? L00002fc8 : ;
    >= ? 0x2fcc : ;
    asm("jpo 0x2fd0");
    bx = bx - 1;
    asm("cwd");
    asm("cbw");
    asm("cwd");
    asm("xchg ax,di");
    asm("xchg ax,si");
    asm("cwd");
    asm("cwd");
    asm("xchg ax,di");
    asm("xchg ax,di");
    asm("xchg ax,bp");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,di");
    *di = eax;
    di = di + 4;
    asm("xlatb");
}

/* DEST BLOCK NOT FOUND: 00003092 -> 00003110 */
/*	Procedure: 0x0000305C - 0x000030A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000305C()
{



    bx = bx - 1;
    bp = bp - 1 - 1;
    si = si - 1;
    di = di - 1;
    (save)ax;
    (save)ax;
    (save)dx;
    (save)dx;
    (save)bx;
    (save)sp;
    (save)bp;
    (save)si;
    ax = si;
    (restore)ax;
    cx = cx - 1;
    bl = 0xb2;
    cx = cx - 1;
    (restore)bp;
    (restore)si;
    (restore)si;
    asm("pusha");
    asm("pusha");
    asm("popa");
    asm("bound sp,[bp+di+0x63]");
    asm("%g a32 push word 0x6a69");
    ax = *L000049A0;
    asm("outsb");
    asm("outsw");
    if(cx = cx - 1) {
        goto L000030f9;
    }
    < ? L000030fd : ;
    == ? L00003101 : ;
    != ? 0x3104 : ;
    > ? L00003108 : ;
    >= ? 0x310c : ;
    asm("jpo 0x3110");
    cx = cx - 1;
    L00009897();
    asm("xchg ax,di");
    asm("cbw");
    asm("xchg ax,bp");
    asm("xchg ax,bp");
    asm("xchg ax,sp");
    asm("xchg ax,sp");
    asm("xchg ax,sp");
    asm("xchg ax,sp");
    *di = eax;
    di = di + 4;
    asm("xchg ax,dx");
    asm("salc");
}

/* DEST BLOCK NOT FOUND: 00003a92 -> 00003b0e */
/* DEST BLOCK NOT FOUND: 00003aec -> 00003b64 */
/*	Procedure: 0x00003A20 - 0x00003AA4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003A20()
{



    (restore)ds;
    (restore)ds;
    (restore)ds;
    *(bx + si) = *(bx + si) & ah;
    *(bx + si) = *(bx + si) & ah;
    *(bx + di) = *(bx + di) & sp;
    ah = ah & *(bp + si);
    sp = sp & *(bp + di);
    ax = al & 0x24 & 0x2626;
    asm("daa");
    *(bx + si) = *(bx + si) - ch;
    *(bp + si) = *(bp + si) - bp;
    ch = ch - *(bp + di);
    al = al - 0x2d;
    asm("%c das");
    *(bx + di) = *(bx + di) ^ dh;
    *(bp + si) = *(bp + si) ^ si;
    si = si ^ *si;
    ax = ax ^ 0x3635;
    asm("aaa");
    *(bx + di) :: bh;
    bh :: *(bp + di);
    di :: *si;
    ax :: 0x3f3e;
    asm("aas");
    cx = cx + 1 + 1;
    dx = dx + 1;
    bx = bx + 1;
    sp = sp + 1;
    bp = bp + 1;
    si = si + 1;
    di = di + 1;
    ax = ax - 1 - 1;
    cx = cx - 1;
    dx = dx - 1;
    bx = bx - 1;
    sp = sp - 1;
    bp = bp - 1;
    si = si - 1;
    (save)ax;
    (save)cx;
    (save)dx;
    (save)bx;
    (save)sp;
    (save)bp;
    (save)si;
    (save)si;
    (restore)cx;
    (restore)dx;
    (restore)bx;
    (restore)sp;
    (restore)sp;
    (restore)si;
    (restore)si;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("bound sp,[bp+di+0x64]");
    asm("%g a32 push dword 0x38a2a238");
    asm("insw");
    asm("insw");
    asm("outsb");
    asm("outsw");
    if(ax = di - 1 - 1) {
        goto L00003afb;
    }
    < ? L00003aff : ;
    == ? L00003b03 : ;
    <= ? L00003b06 : ;
    >= ? 0x3b0b : ;
    >= ? 0x3b0e : ;
    *(bp + si + 0x9899) :: bl;
    asm("wait");
    asm("xchg ax,bp");
    asm("xchg ax,sp");
    asm("xchg ax,sp");
    asm("xchg ax,sp");
    asm("xchg ax,dx");
    asm("xchg ax,cx");
    asm("xchg ax,sp");
    asm("xchg ax,dx");
    asm("xchg ax,cx");
    cl = 0x8f;
    asm("into");
}

/* DEST BLOCK NOT FOUND: 00003bd2 -> 00003c4e */
/* DEST BLOCK NOT FOUND: 00003c2b -> 00003ca4 */
/*	Procedure: 0x00003AE3 - 0x00003BE4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003AE3()
{



    asm("xchg ax,sp");
    asm("xchg ax,si");
    asm("cwd");
    asm("wait");
    asm("pushf");
    asm("wait");
    asm("%s jns 0x3b64");
    > ? L00003b64 : ;
    <= ? L00003b64 : ;
    == ? L00003b65 : ;
    < ? L00003b65 : ;
    >= ? 0x3b65 : ;
    asm("outsb");
    asm("insw");
    asm("insw");
    asm("insb");
    0x68 = *(bp + si + 0x69) * bp;
    asm("bound esp,[%fs:edx+0x61]");
    asm("pusha");
    (restore)di;
    (restore)si;
    (restore)bp;
    (restore)bp;
    (restore)sp;
    (restore)bx;
    (restore)dx;
    (restore)cx;
    (restore)ax;
    (save)di;
    (save)si;
    (save)bp;
    (save)sp;
    (save)bx;
    (save)bx;
    (save)dx;
    (save)cx;
    (save)ax;
    di = di - 1;
    si = si - 1;
    bp = bp - 1 - 1;
    bx = bx - 1 - 1;
    dx = dx - 1;
    cx = cx - 1;
    ax = ax - 1;
    di = di + 1 + 1;
    bp = bp + 1;
    sp = sp + 1;
    sp = sp + 1;
    bx = bx + 1;
    dx = dx + 1;
    cx = cx + 1;
    ax = ax + 1;
    asm("aas");
    asm("aas");
    asm("%d cmp ax,0x3b3c");
    bh :: *(bx + di);
    *(bx + si) :: bh;
    asm("aaa");
    asm("%s xor ax,0x3334");
    si = si ^ *(bp + si);
    *(bx + si) = *(bx + si) ^ si;
    *bx = *bx ^ ch;
    asm("%c sub ax,0x2b2c");
    bp = bp - *(bp + si);
    *(bx + di) = *(bx + di) - bp;
    *bx = *bx - ah;
    asm("%e and ax,0x2425");
    sp = sp & *(bp + di);
    ah = ah & *(bp + si);
    *(bx + si) = *(bx + si) & sp;
    *(bx + si) = *(bx + si) & ah;
    (restore)ds;
    (restore)ds;
    (restore)ds;
    (save)ds;
    (save)ds;
    (save)ds;
    (save)ds;
    (save)ds;
    (save)ds;
    (save)ds;
    (save)ds;
    (save)ds;
    (save)ds;
    (restore)ds;
    (restore)ds;
    *(bx + si) = *(bx + si) & ah;
    *(bx + di) = *(bx + di) & ah;
    *(bp + si) = *(bp + si) & sp;
    sp = sp & *(bp + di);
    ax = al & 0x25 & 0x2626;
    asm("daa");
    *(bx + si) = *(bx + si) - ch;
    *(bp + si) = *(bp + si) - bp;
    bp = bp - *(bp + di);
    al = al - 0x2d;
    asm("%c das");
    asm("das");
    *(bx + di) = *(bx + di) ^ dh;
    dh = dh ^ *(bp + di);
    si = si ^ *si;
    ax = ax ^ 0x3736;
    *(bx + di) :: bh;
    *(bp + si) :: di;
    di :: *si;
    ax :: 0x3e3e;
    ax = ax + 1 + 1;
    cx = cx + 1;
    dx = dx + 1;
    bx = bx + 1 + 1;
    bp = bp + 1;
    si = si + 1 + 1;
    di = di + 1;
    ax = ax - 1;
    cx = cx - 1;
    dx = dx - 1;
    bx = bx - 1;
    sp = sp - 1;
    sp = sp - 1;
    bp = bp - 1;
    si = si - 1;
    (save)ax;
    (save)cx;
    (save)dx;
    (save)bx;
    (save)bx;
    (save)bp;
    (save)si;
    (save)si;
    (restore)cx;
    (restore)dx;
    (restore)bx;
    (restore)bx;
    (restore)sp;
    (restore)bp;
    (restore)si;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("bound sp,[bp+di+0x63]");
    asm("%g a32 push dword 0x36a2a336");
    asm("insw");
    asm("insw");
    asm("outsb");
    asm("outsw");
    if(ax = di - 1) {
        goto L00003c3b;
    }
    < ? L00003c3f : ;
    == ? L00003c43 : ;
    <= ? L00003c46 : ;
    > ? L00003c4a : ;
    >= ? 0x3c4e : ;
    asm("%s cwd");
    asm("cwd");
    asm("cwd");
    asm("cbw");
    asm("xchg ax,si");
    asm("xchg ax,bp");
    asm("xchg ax,sp");
    asm("xchg ax,bx");
    asm("xchg ax,dx");
    asm("xchg ax,cx");
    asm("xchg ax,sp");
    asm("xchg ax,bx");
    asm("xchg ax,dx");
    asm("scasw");
    asm("Unknown opcode 0x8e");
    asm("int3");
}

/*	Procedure: 0x00003E5E - 0x00003E64
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003E5E()
{



    asm("xchg ax,cx");
    asm("xchg ax,bp");
    asm("Unknown opcode 0x8f");
    cl = 0x90;
    asm("retf");
}

/* DEST BLOCK NOT FOUND: 00003f92 -> 0000400d */
/* DEST BLOCK NOT FOUND: 00003fea -> 00004064 */
/*	Procedure: 0x00003EFC - 0x00003FA4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003EFC()
{



    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    *bx = *bx ^ ch;
    asm("das");
    asm("das");
    asm("das");
    *bx = *bx ^ ch;
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    *bx = *bx ^ ch;
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    *bx = *bx ^ ch;
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    *bx = *bx ^ ch;
    asm("das");
    *bx = *bx ^ ch;
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    *bx = *bx ^ ch;
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    *bx = *bx ^ ch;
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    asm("das");
    (restore)dx;
    (restore)bx;
    (restore)sp;
    (restore)bp;
    (restore)bp;
    (restore)di;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("bound sp,[bp+di+0x64]");
    asm("%g a32 o32 das");
    *L00002FA3 = ax;
    asm("insb");
    asm("insw");
    asm("outsb");
    asm("outsw");
    >= ? 0x3ffb : ;
    >= ? 0x3ffe : ;
    >= ? L00004002 : ;
    != ? 0x4006 : ;
    > ? L0000400a : ;
    >= ? 0x400d : ;
    asm("das");
    L00009799();
    asm("xchg ax,di");
    asm("cbw");
    asm("xchg ax,si");
    asm("xchg ax,bx");
    asm("xchg ax,cx");
    asm("xchg ax,dx");
    asm("Unknown opcode 0x8e");
    dl = 0x90;
    asm("retf 0x0");
}

/* DEST BLOCK NOT FOUND: 000040d1 -> 0000414c */
/* DEST BLOCK NOT FOUND: 0000412a -> 000041a4 */
/*	Procedure: 0x00003FE5 - 0x000040E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003FE5()
{



    asm("xchg ax,si");
    asm("cwd");
    if(!(ax = ax - 0x792d)) {
        > ? L00004064 : ;
        != ? 0x4064 : ;
        >= ? L00004064 : ;
        >= ? 0x4064 : ;
        >= ? 0x4065 : ;
        asm("outsb");
        asm("insw");
        ax = ax - 0xa52d;
        ax = ax - 0x6768;
        asm("arpl [%fs:edx+0x61],sp");
        asm("pusha");
        (restore)di;
        (restore)si;
        (restore)si;
        (restore)bp;
        (restore)sp;
        (restore)bx;
        ax = ax - 0xb8ba;
        (save)bp;
        (save)sp;
        (save)bx;
        (save)dx;
        (save)cx;
        (save)ax - 0x5557;
        di = di - 1;
        si = si - 1;
        bp = bp - 1 - 1;
        sp = sp - 1;
        bx = bx - 1;
        dx = dx - 1;
        cx = cx - 1;
        ax = ax - 0xc6c6 - 0x4344;
        bx = bx + 1;
        dx = dx + 1;
        cx = cx + 1;
        ax = ax + 1;
        asm("aas");
        asm("aas");
        asm("%d cmp al,0x3c");
        di :: *(bp + si);
        *(bx + si) :: di;
        asm("aaa");
        al = ax - 0xd3d3 - 0x33;
        *(bx + si) = *(bx + si) ^ dh ^ *(bx + di);
        asm("das");
        asm("%c sub ax,0x2b2c");
        ch = ch - *(bp + si);
        *(bx + si) = *(bx + si) - bp;
        asm("daa");
        asm("%e sub ax,0xdfde");
        ax = ax - 0x2222;
        *(bx + si) = *(bx + si) & sp;
        *bx = *bx & bl;
        (restore)ds;
        (save)ds;
        (save)ds;
        asm("sbb ax,0x1c1c");
        asm("sbb bx,[bp+di]");
        asm("sbb bx,[bp+di]");
        ax = ax - 60651 - 0x1b1a;
        asm("sbb bx,[bp+di]");
    }
    asm("sbb al,0x1c");
    asm("sbb al,0x1d");
    asm("sbb ax,0x1e1e");
    (restore)ds;
    *(bx + si) = *(bx + si) & ah;
    *(bp + si) = *(bp + si) & sp;
    ax = ax - 0xe6e9 - 0x2727;
    asm("daa");
    *(bx + di) = *(bx + di) - ch;
    ch = ch - *(bp + di);
    bp = bp - *si;
    *(bx + di) = *(bx + di) ^ dh;
    *(bp + si) = *(bp + si) ^ si;
    *(bx + di) :: bh;
    bh :: *(bp + di);
    ax - 0x2f2e - 0xd6d6 - 0x3736 :: 0x3d;
    ax - 0x2f2e - 0xd6d6 - 0x3736 :: 0x3f3f;
    ax = ax - 0x2f2e - 0xd6d6 - 0x3736 + 1;
    cx = cx + 1;
    dx = dx + 1;
    bx = bx + 1;
    sp = sp + 1;
    ax = ax - 0xc9cb - 0x4948;
    dx = dx - 1;
    bx = bx - 1;
    sp = sp - 1;
    bp = bp - 1 - 1;
    di = di - 1 - 1;
    (save)ax;
    (save)cx;
    (save)dx;
    (save)bx;
    (save)sp;
    (save)bp;
    (save)bp;
    (restore)sp;
    (restore)bp;
    (restore)bp;
    (restore)di;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("bound sp,[bp+di+0x64]");
    asm("%g a32 sub eax,0x6c2da3a3");
    asm("insw");
    asm("outsb");
    asm("outsw");
    asm("outsw");
    if(ax = ax - 0xb7b7 - 0x5b5a) {
        goto L0000413d;
    }
    < ? L00004140 : ;
    == ? L00004144 : ;
    <= ? L00004148 : ;
    > ? L0000414c : ;
    >= ? 0x4102 : ;
    asm("cwd");
    asm("cwd");
    ax = L00009797();
    asm("xchg ax,si");
    asm("xchg ax,sp");
    asm("Unknown opcode 0x8f");
    dl = 0x8f;
    asm("enter 0x0,0x0");
}

/* DEST BLOCK NOT FOUND: 00004212 -> 0000428e */
/* DEST BLOCK NOT FOUND: 00004269 -> 000042e4 */
/*	Procedure: 0x0000417B - 0x00004224
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000417B()
{



    *bx = *bx ^ ch;
    asm("%c sub ax,0x2c2c");
    bp = bp - *(bp + si);
    *(bx + si) = *(bx + si) - bp;
    *bx = *bx - ah;
    asm("%e sub bx,si");
    asm("loopne 0x41b7");
    ah = ah & *(bx + di);
    *(bx + si) = *(bx + si) & sp;
    (restore)ds;
    (restore)ds;
    (save)ds;
    asm("sbb ax,0x1c1d");
    asm("sbb al,0x1b");
    asm("sbb bx,[bp+si]");
    asm("sbb bl,[bp+si]");
    bp = bp - sp;
    asm("in al,dx");
    bx = bx - *(bx + di);
    asm("sbb bl,[bp+si]");
    asm("sbb bl,[bp+di]");
    asm("sbb bx,[si]");
    asm("sbb al,0x1d");
    asm("sbb ax,0x1e1e");
    (restore)ds;
    *(bx + si) = *(bx + si) & ah;
    *(bp + di) = *(bp + di) & bp;
    L00006D9C();
    ax = ax & 0x2726;
    asm("daa");
    *(bx + di) = *(bx + di) - bp;
    ch = ch - *(bp + di);
    ax = al - 0x2d - 0x2f2e;
    *(bx + di) = *(bx + di) ^ dh;
    ch = ch ^ *(bp + si);
    asm("xlatb");
    asm("salc");
    *(bp + si - *L00003837) :: di;
    bh :: *(bp + di);
    al :: 0x3d;
    asm("%d aas");
    ax = ax + 1;
    cx = cx + 1;
    dx = dx + 1;
    bx = bx + 1;
    sp = sp + 1;
    cx = cx - dx;
    sp = bp;
    (restore)bp;
    cl = cl - *(bx + si + 0x49);
    dx = dx - 1;
    bx = bx - 1;
    sp = sp - 1;
    sp = sp - 1;
    bp = bp - 1;
    si = si - 1;
    di = di - 1;
    (save)ax;
    (save)cx;
    (save)dx;
    (save)bx;
    (save)sp;
    (save)bp;
    (save)bp;
    (restore)dx;
    (restore)bx;
    (restore)bx;
    (restore)bp;
    (restore)bp;
    (restore)si;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("bound sp,[bp+di+0x64]");
    asm("%g push dword 0x2ba3a32b");
    asm("insb");
    asm("insw");
    asm("insw");
    asm("outsb");
    if(si = si - *(bx + 0x2bb8)) {
        goto L0000427a;
    }
    >= ? 0x427e : ;
    >= ? L00004282 : ;
    != ? 0x4286 : ;
    > ? L0000428a : ;
    >= ? 0x428e : ;
    bl = bl - *(bp + si + 0x999a);
    asm("cwd");
    asm("cbw");
    asm("xchg ax,di");
    asm("xchg ax,di");
    asm("xchg ax,si");
    asm("xchg ax,sp");
    asm("Unknown opcode 0x8f");
    asm("Unknown opcode 0x8f");
    *(0x8f + si) = 0;
}

/*	Procedure: 0x00004276 - 0x000042A6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004276()
{



    asm("outsb");
    asm("insw");
    *(bp + 0x29a6) = *(bp + 0x29a6) - ah;
    (save)0x6667;
    asm("arpl [%fs:bp+si+0x61],sp");
    asm("pusha");
    (restore)di;
    (restore)si;
    (restore)bp;
    (restore)sp;
    (restore)bx;
    *(bx + si) = *(bx + si) - bp;
    cx = 0x28b8;
    (save)si;
    (save)bp;
    (save)sp;
    (save)sp;
    (save)bx;
    (save)cx;
    (save)cx;
    (save)ax;
    di = di - 1;
    si = si - 1;
    bp = bp - 1;
    sp = sp - 1;
    bx = bx - 1;
    dx = dx - 1 - 1;
    cx = cx - 1;
    di = di - ax;
    sp = bp;
    (restore)bp;
    *(bx + di) = *(bx + di) - ch;
    bx = bx + 1;
    dx = dx + 1;
}

/* DEST BLOCK NOT FOUND: 000042f1 -> 00006cdc */
/*	Procedure: 0x000042A7 - 0x00004337
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000042A7()
{



    dx = dx + 1;
    ax = ax + 1 + 1;
    asm("aas");
    asm("%d cmp ax,0x3b3c");
    di :: *(bp + si);
    *(bx + si) :: di;
    asm("aaa");
    sp = sp - dx;
    asm("aad 0x28");
    dh = dh ^ *(bp + si);
    *(bx + si) = *(bx + si) ^ si;
    asm("das");
    asm("%c sub ax,0x2c2c");
    *(bx + si) = *(bx + si) - bp - *(bp + si);
    asm("daa");
    asm("daa");
    *(bx + si) = *(bx + si) - ch;
    asm("fsubrp st0");
    *(bp + si) = *(bp + si) - sp;
    *(bx + si) = *(bx + si) & sp;
    *bx = *bx & bl;
    (save)ds;
    asm("sbb ax,0x1c1d");
    asm("sbb bx,[bp+di]");
    asm("sbb bl,[bp+si]");
    asm("sbb bl,[bx+di]");
    asm("sbb [bx+si],bp");
    asm("in ax,dx");
    asm("in al,dx");
    *(bx + si) = *(bx + si) - ch;
    asm("sbb [bx+di],bx");
    asm("sbb bl,[bp+si]");
    asm("sbb bl,[bp+di]");
    asm("sbb bx,[si]");
    asm("sbb ax,0x1e1d");
    (save)ds;
    *(bx + si) = *(bx + si) & ah;
    *(bx + di) = *(bx + di) & bp;
    goto L00006cdc;
    ax = ax & 0x2726;
    asm("daa");
    *(bx + di) = *(bx + di) - ch;
    ch = ch - *(bp + di);
    bp = bp - *si;
    ax = ax - 0x2f2e;
    *(bx + di) = *(bx + di) ^ dh;
    *(bx + di) = *(bx + di) - bp;
    asm("xlatb");
    asm("salc");
    *(bx + di) = *(bx + di) - bp;
    asm("aaa");
    asm("aaa");
    *(bp + si) :: di;
    bh :: *(bp + di);
    al :: 0x3d;
    asm("%d aas");
    ax = ax + 1;
    cx = cx + 1;
    dx = dx + 1 + 1;
    bx = bx + 1;
    sp = bp;
    (restore)bp;
    0;
    dx = dx - 1;
    bx = bx - 1;
    bx = bx - 1;
    sp = sp - 1;
    bp = bp - 1;
    si = si - 1;
    di = di - 1;
    (save)ax;
    (save)cx;
    (save)dx;
    (save)bx;
    (save)bx;
    (save)sp;
    *(bx + si) = *(bx + si) - bp;
    dh = 0xb6;
    *(bp + si + 0x5b) = *(bp + si + 0x5b) - bx;
    (restore)sp;
    (restore)bp;
    (restore)bp;
    (restore)si;
    (restore)di;
    asm("pusha");
}

/* DEST BLOCK NOT FOUND: 00004351 -> 000043cb */
/* DEST BLOCK NOT FOUND: 000043ab -> 00004423 */
/*	Procedure: 0x00004338 - 0x00004364
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004338()
{



    asm("popa");
    asm("bound sp,[bp+di+0x64]");
    asm("outsb");
    asm("outsb");
    asm("outsw");
    if(*%gs:ebx+0x6d6c29a3] = *%gs:ebx+0x6d6c29a3] - esp) {
        goto L000043bc;
    }
    < ? L000043c0 : ;
    == ? L000043c4 : ;
    <= ? L000043c7 : ;
    > ? L000043cb : ;
    >= ? 0x437e : ;
    asm("wait");
    asm("wait");
    ax = L00009696();
    asm("xchg ax,bp");
    asm("xchg ax,bx");
    asm("xchg ax,cx");
    asm("xchg ax,cx");
    asm("Unknown opcode 0x8f");
    asm("Unknown opcode 0x8f");
    ch = 0x90;
    *(bx + si) = 0;
}

/* DEST BLOCK NOT FOUND: 00004491 -> 0000450b */
/* DEST BLOCK NOT FOUND: 000044ea -> 00004563 */
/*	Procedure: 0x000043F9 - 0x000044A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000043F9()
{



    dh = dh ^ *(bx + di);
    asm("das");
    asm("das");
    asm("%c sub ax,0x2b2c");
    ch = ch - *(bx + di);
    *(bx + si) = *(bx + si) - bp;
    asm("daa");
    asm("%e loopne 0x43ea");
    asm("loopne 0x4433");
    *(bx + si) = *(bx + si) & sp;
    *bx = *bx & bl;
    (save)ds;
    asm("sbb ax,0x1c1c");
    asm("sbb bx,[bp+di]");
    asm("sbb bl,[bp+si]");
    asm("sbb [bx+di],bx");
    asm("sbb [bx+si],bl");
    asm("daa");
    asm("in ax,dx");
    asm("out dx,al");
    asm("in ax,dx");
    asm("daa");
    asm("sbb [bx+si],bl");
    asm("sbb [bx+di],bl");
    asm("sbb bl,[bp+si]");
    asm("sbb bx,[bp+di]");
    asm("sbb al,0x1d");
    asm("sbb ax,0x1f1e");
    (restore)ds;
    *L0000E8E8 = *L0000E8E8 & ah;
    asm("%e and ax,0x2625");
    asm("daa");
    *(bx + di) = *(bx + di) - ch;
    ch = ch - *(bp + si);
    bp = bp - *si;
    ax = ax - 0x2e2e;
    *(bx + si) = *(bx + si) ^ dh;
    asm("daa");
    asm("fcmovu st1");
    asm("xlatb");
    asm("salc");
    asm("%e aaa");
    *(bx + si) :: bh;
    *(bp + si) :: di;
    di :: *si;
    ax :: 0x3f3e;
    asm("aas");
    ax = ax + 1;
    cx = cx + 1;
    dx = dx + 1;
    bx = bx + 1;
    asm("daa");
    asm("enter 0x26c8,0x48");
    cx = cx - 1 - 1;
    dx = dx - 1;
    bx = bx - 1;
    sp = sp - 1;
    bp = bp - 1;
    si = si - 1;
    di = di - 1;
    (save)ax;
    (save)cx;
    (save)cx;
    (save)dx;
    (save)bx;
    (save)sp;
    asm("daa");
    ax = 0xb6b7;
    asm("daa");
    (restore)dx;
    (restore)dx;
    (restore)bx;
    (restore)sp;
    (restore)bp;
    (restore)si;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("bound sp,[bp+si+0x64]");
    asm("%e a32 movsd");
    *di = *si;
    di = di + 4;
    asm("%e insb");
    asm("insw");
    asm("outsb");
    asm("outsw");
    asm("outsw");
    if(si = si + 4) {
        goto L000044fc;
    }
    < ? L00004500 : ;
    == ? L00004504 : ;
    <= ? L00004507 : ;
    > ? L0000450b : ;
    >= ? 0x44bb : ;
    asm("wait");
    asm("wait");
    ax = L00009595();
    asm("xchg ax,sp");
    asm("xchg ax,bx");
    asm("xchg ax,cx");
    asm("Unknown opcode 0x8f");
    ah = 0x8f;
    asm("lds ax,[bx+si]");
}

/*	Procedure: 0x000044B5 - 0x000044D9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000044B5()
{



}

/*	Procedure: 0x000045F6 - 0x00004619
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000045F6()
{



}

/*	Procedure: 0x000048FD - 0x0000493B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000048FD()
{



    ax = ax - 0x2b2c;
    ch = ch - *(bx + di);
    *bx = *bx - sp;
    asm("daa");
    asm("sbb ax,0xe01e");
    asm("loopne 0x48ea");
    *di = (frestore);
    (save)ds;
    asm("sbb ax,0x1c1d");
    asm("sbb bl,[bp+si]");
    asm("sbb [bx+si],bx");
    do {
        asm("sbb [bx],dl");
        (save)ss;
        asm("adc ax,0x1515");
        (save)ds;
        asm("out dx,ax");
        asm("out dx,ax");
        asm("out dx,ax");
        asm("out dx,ax");
        (save)ds;
        (save)ds;
        (save)ss;
        ss = ss;
        asm("sbb [bx+si],bl");
        asm("sbb [bp+si],bx");
        asm("sbb bx,[bp+di]");
        asm("sbb al,0x1d");
        ds = ds;
        (save)ds;
    } while(*bx = *bx & bl);
    (save)ds;
    sp = sp & *si;
    ax = ax & 0x2726;
    *(bx + si) = *(bx + si) - ch;
    *(bp + di) = *(bp + di) - bp;
}

/* DEST BLOCK NOT FOUND: 00004991 -> 00004a0b */
/* DEST BLOCK NOT FOUND: 000049ee -> 00004a64 */
/*	Procedure: 0x0000493C - 0x00004999
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000493C()
{



    bp = bp - *(bp + di);
    al = al - 0x2d;
    asm("%c push ds");
    asm("sbb ax,0xd6d7");
    asm("xlatb");
    asm("fcomp st0");
    asm("xlatb");
    (save)ds;
    asm("sbb ax,0x3938");
    *(bp + di) :: di;
    di :: *si;
    ax :: 0x3f3e;
    ax = ax + 1;
    cx = cx + 1;
    dx = dx + 1 + 1;
    (save)ds;
    asm("Unknown opcode 0xc5");
    asm("les bx,[0x4847]");
    cx = cx - 1;
    dx = dx - 1;
    bx = bx - 1 - 1;
    sp = sp - 1;
    si = si - 1 - 1;
    di = di - 1;
    (save)ax;
    (save)cx;
    (save)dx;
    (save)ds;
    (save)ds;
    cx = 0xb7b8;
    ch = 0x1e;
    (restore)cx;
    (restore)dx;
    (restore)bx;
    (restore)sp;
    (restore)bp;
    (restore)si;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("bound sp,[bp+si+0x63]");
    asm("%g a32 o32 push ds");
    al & 0xa7;
    (save)ds;
    asm("outsw");
    if(0x6e = *(si + 0x6d) * bp) {
        goto L000049fc;
    }
    < ? L000049ff : ;
    == ? L00004a04 : ;
    <= ? L00004a07 : ;
    > ? L00004a0b : ;
    >= ? 0x49b3 : ;
    asm("cbw");
    asm("xchg ax,di");
    asm("cbw");
    asm("cwd");
    asm("xchg ax,di");
}

/*	Procedure: 0x0000499A - 0x000049A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000499A()
{



    asm("xchg ax,bp");
    asm("xchg ax,bp");
    asm("xchg ax,dx");
    asm("xchg ax,cx");
    asm("Unknown opcode 0x8f");
    asm("xchg ax,cx");
    asm("xchg ax,cx");
    asm("xchg ax,cx");
    dx = 0xc491;
}

/*	Procedure: 0x000049E2 - 0x00004A9F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000049E2()
{



    asm("xchg ax,sp");
    asm("xchg ax,bp");
    asm("xchg ax,si");
    asm("cbw");
    asm("wait");
    asm("sahf");
    al = *L00001CA0;
    asm("sbb si,[bp+0x75]");
    == ? L00004a64 : ;
    < ? L00004a64 : ;
    >= ? 0x4a64 : ;
    asm("outsw");
    asm("outsb");
    asm("insw");
    asm("insb");
    asm("sbb al,0xab");
    *di = al;
    di = di + 1;
    asm("sbb al,0x68");
    asm("o32 arpl [%fs:edx+0x61],sp");
    asm("popa");
    (restore)di;
    (restore)di;
    (restore)si;
    asm("sbb al,0x1c");
    dh = 0xb5;
    dh = 0xb5;
    (save)si;
    (save)sp;
    (save)sp;
    (save)bx;
    (save)0x1c;
    (save)cx;
    (save)ax;
    di = di - 1;
    si = si - 1;
    bp = bp - 1;
    sp = sp - 1;
    sp = sp - 1;
    bx = bx - 1;
    dx = dx - 1;
    cx = cx - 1;
    ax = ax - 1;
    asm("sbb cx,bx");
    asm("int 0xcf");
    asm("rcl cl,cl");
    asm("sbb bx,[bp+di]");
    ax = ax + 1;
    asm("aas");
    asm("%d cmp ax,0x3b3c");
    di :: *(bx + di);
    *bx :: si;
    asm("aaa");
    asm("%s sbb al,0xd5");
    asm("rcr word [bp+di],cl");
    *(bx + si) = *(bx + si) ^ si;
    asm("das");
    asm("%c sub ax,0x2c2d");
    bp = bp - *(bp + si);
    *(bx + si) = *(bx + si) - bp;
    asm("sbb bx,si");
    asm("fnstsw ax");
    asm("fnstsw ax");
    asm("sbb bx,[bx]");
    (save)ds;
    (save)ds;
    asm("sbb ax,0x1b1c");
    asm("sbb bl,[bx+di]");
    asm("sbb [bx+si],bl");
    (restore)ss;
    (save)ss;
    (save)ss;
    asm("adc ax,0x1414");
    asm("sbb al,0xef");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,al");
    asm("sbb bx,[si]");
    (save)ss;
    ss = ss;
    asm("sbb [bx+si],bl");
    asm("sbb bl,[bp+si]");
    asm("sbb bx,[si]");
    asm("sbb ax,0x1f1d");
    asm("sbb sp,bx");
    if(!( *(bp + di) = *(bp + di) - bl)) {
        sp = sp & *si;
        ax = ax & 0x2726;
        *(bx + si) = *(bx + si) - ch;
        *(bp + si) = *(bp + si) - bp;
        bp = bp - *si;
        ax = ax - 0x1b1c;
        asm("xlatb");
        asm("xlatb");
        asm("xlatb");
        asm("salc");
        asm("aad 0xd5");
        asm("aad 0xd4");
        asm("sbb bx,[bp+di]");
        *(bx + di) :: di;
        di :: *(bp + di);
    }
    al :: 0x3d;
    asm("%d aas");
    ax = ax + 1;
    cx = cx + 1;
    dx = dx + 1;
    bx = bx + 1;
    asm("sbb al,0xc7");
    asm("les bx,[si]");
    di = di + 1;
    ax = ax - 1;
    cx = cx - 1;
    dx = dx - 1;
}

/* DEST BLOCK NOT FOUND: 00004ad1 -> 00004b4b */
/* DEST BLOCK NOT FOUND: 00004b2d -> 00004ba3 */
/*	Procedure: 0x00004AA0 - 0x00004AD7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004AA0()
{



    bx = bx - 1 - 1;
    sp = sp - 1;
    bp = bp - 1;
    si = si - 1;
    (save)ax;
    (save)cx;
    asm("sbb bx,[si]");
    cx = 0xb9b9;
    bh = 0xb5;
    asm("sbb al,0x59");
    (restore)dx;
    (restore)bx;
    (restore)sp;
    (restore)bp;
    (restore)si;
    (restore)di;
    asm("pusha");
    asm("pusha");
    asm("bound sp,[bp+si+0x63]");
    asm("%g a32 o32 sbb al,0xa8");
    asm("cmpsw");
    asm("sbb bp,[bp+di+0x6c]");
    asm("insw");
    asm("outsb");
    asm("outsw");
    if(di = di - 1) {
        goto L00004b3c;
    }
    < ? L00004b3f : ;
    >= ? L00004b43 : ;
    != ? 0x4b47 : ;
    > ? L00004b4b : ;
    >= ? 0x4af0 : ;
    asm("xchg ax,di");
    asm("xchg ax,di");
    asm("xchg ax,di");
}

/*	Procedure: 0x00004AD8 - 0x00004AE4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004AD8()
{



    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,sp");
    asm("xchg ax,sp");
    asm("xchg ax,dx");
    asm("Unknown opcode 0x8f");
    asm("xchg ax,bx");
    asm("xchg ax,dx");
    asm("xchg ax,dx");
    sp = 0xc391;
}

/* DEST BLOCK NOT FOUND: 00004b31 -> 00004ba4 */
/* DEST BLOCK NOT FOUND: 00004b33 -> 00004ba4 */
/*	Procedure: 0x00004B24 - 0x00004B5D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004B24()
{



    asm("xchg ax,di");
    L00009fa1();
    asm("lahf");
    asm("sbb bl,[bx+di]");
    != ? 0x4ba3 : ;
    >= ? L00004ba3 : ;
    < ? L00004ba4 : ;
    >= ? 0x4ba4 : ;
    asm("outsb");
    asm("insw");
    asm("insb");
    asm("sbb bl,[bx+di]");
    asm("sbb bl,[bp+si]");
    (save)0x6667;
    asm("arpl [%fs:bp+si+0x61],sp");
    asm("pusha");
    asm("pusha");
    (restore)si;
    asm("sbb [bp+si],bx");
    dl = 0xb2;
    bl = 0xb4;
    bl = 0xb5;
    asm("sbb dl,[bp+0x54]");
    (save)sp;
    (save)bx;
    (save)dx;
    (save)cx;
    (save)ax;
    di = di - 1;
    si = si - 1;
    bp = bp - 1;
    sp = sp - 1;
    bx = bx - 1;
    dx = dx - 1 - 1;
}

/*	Procedure: 0x00004B5E - 0x00004BDC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004B5E()
{



    cx = cx - 1;
    ax = ax - 1;
    asm("sbb bx,cx");
    asm("retf 0xd2cf");
    asm("rcl cx,1");
    asm("sbb [bx+di],bx");
    asm("aas");
    asm("%d cmp ax,0x3b3c");
    di :: *(bx + di);
    *(bx + si) :: bh;
    asm("sbb [%ss:bx+di],bx");
    asm("sbb [bx+di],bx");
    *(bx + si) = *(bx + si) ^ si;
    asm("das");
    asm("%c sub al,0x2c");
    *(bx + si) = *(bx + si) - bp - *(bp + si);
    asm("sbb [bp+si],bx");
    st6 = (frestore);
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xdf");
    asm("fnstsw ax");
    asm("sbb [bx],bx");
    (restore)ds;
    asm("sbb ax,0x1c1c");
    asm("sbb bx,[bp+si]");
    asm("sbb [bx+si],bx");
    (restore)ss;
    (restore)ss;
    (save)ss;
    asm("adc ax,0x1414");
    asm("adc bx,[bx+di]");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,al");
    asm("sbb [bp+si],bx");
    (save)ss;
    (save)ss;
    asm("sbb [bx+si],bl");
    asm("sbb [bp+si],bx");
    asm("sbb bx,[si]");
    asm("sbb ax,0x1e1d");
    asm("sbb [bx+di],bx");
    asm("sbb [bx+di],bx");
    sp = sp & *si;
    al = al & 0x25;
    *%es:bx+si] = *%es:bx+si] - ch;
    *(bp + si) = *(bp + si) - bp;
    bp = bp - *si;
    asm("sbb [bp+si],bx");
    asm("fcmovu st0");
    asm("Unknown opcode 0xd9");
    asm("xlatb");
    asm("aad 0xd5");
    asm("salc");
    asm("aad 0xd5");
    asm("aam 0x19");
    asm("sbb bh,[bp+si]");
    bh :: *(bp + di);
    al :: 0x3d;
    asm("%d aas");
    ax = ax + 1;
    cx = cx + 1 + 1;
    dx = dx + 1;
    asm("sbb [bp+si],bx");
    asm("sbb [bx+di],bx");
    di = di + 1;
}

/* DEST BLOCK NOT FOUND: 00004c11 -> 00004c8b */
/* DEST BLOCK NOT FOUND: 00004c6e -> 00004ce3 */
/*	Procedure: 0x00004BDD - 0x00004C24
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004BDD()
{



    ax = ax - 1;
    cx = cx - 1;
    dx = dx - 1;
    bx = bx - 1 - 1;
    sp = sp - 1;
    bp = bp - 1;
    si = si - 1;
    (save)ax;
    asm("sbb [bx+di],bx");
    dx = 0xb9b9;
    cx = 0xb5b7;
    asm("sbb [bx+di+0x5a],bx");
    (restore)bx;
    (restore)sp;
    (restore)bp;
    (restore)si;
    (restore)si;
    asm("pusha");
    asm("pusha");
    asm("bound sp,[bp+si+0x63]");
    asm("sbb [%gs:eax+0x6c6b19a7],ebp");
    asm("insw");
    asm("outsb");
    asm("outsw");
    if(di = di - 1) {
        goto L00004c7c;
    }
    < ? L00004c7f : ;
    >= ? L00004c83 : ;
    != ? 0x4c87 : ;
    > ? L00004c8b : ;
    >= ? 0x4c2e : ;
    asm("xchg ax,di");
    asm("cbw");
    asm("cbw");
    asm("cbw");
    asm("xchg ax,bp");
    asm("xchg ax,sp");
    asm("xchg ax,bx");
    asm("xchg ax,cx");
    asm("Unknown opcode 0x8f");
    asm("xchg ax,bx");
    asm("xchg ax,dx");
    asm("xchg ax,dx");
    bp = 0xc292;
}

/* DEST BLOCK NOT FOUND: 00004d51 -> 00004dcb */
/* DEST BLOCK NOT FOUND: 00004db1 -> 00004e24 */
/*	Procedure: 0x00004D3A - 0x00004D64
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004D3A()
{



    asm("bound sp,[bp+di+0x64]");
    asm("%g a32 o32 pop ss");
    asm("sbb [bp+di+0x6c],ch");
    asm("insw");
    asm("outsb");
    asm("outsw");
    if(al & 0xa6) {
        goto L00004dbc;
    }
    < ? L00004dbf : ;
    == ? L00004dc3 : ;
    != ? 0x4dc7 : ;
    > ? L00004dcb : ;
    >= ? 0x4d6c : ;
    asm("cbw");
    asm("xchg ax,di");
    asm("xchg ax,di");
    asm("xchg ax,si");
    asm("xchg ax,bx");
    asm("xchg ax,dx");
    asm("xchg ax,cx");
    asm("xchg ax,cx");
    asm("xchg ax,bx");
    asm("xchg ax,sp");
    asm("xchg ax,sp");
    asm("rcl byte [bp+di+0xc3],0x0");
}

/* DEST BLOCK NOT FOUND: 00004fd1 -> 0000504b */
/*	Procedure: 0x00004FBB - 0x00004FE4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004FBB()
{



    asm("arpl [si+0x65],sp");
    asm("adc ebp,[eax+0x6c6b12a7]");
    asm("insw");
    asm("outsb");
    asm("outsw");
    >= ? 0x503c : ;
    < ? L0000503f : ;
    == ? L00005043 : ;
    != ? 0x5047 : ;
    > ? L0000504b : ;
    >= ? 0x4fe7 : ;
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,dx");
    asm("xchg ax,cx");
    asm("xchg ax,bx");
    asm("xchg ax,bx");
    asm("xchg ax,bx");
    asm("xchg ax,cx");
    asm("xchg ax,sp");
    asm("xchg ax,bp");
    asm("xchg ax,bp");
}

/*	Procedure: 0x0000501E - 0x00005060
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000501E()
{



    L00009999();
    asm("xchg ax,di");
    asm("xchg ax,di");
    asm("xchg ax,di");
    asm("cwd");
    asm("pushf");
    asm("popf");
    asm("sahf");
    asm("lahf");
    asm("lahf");
    al = *L00009D9F;
    asm("lahf");
    asm("popf");
    asm("sahf");
    asm("adc [bx+di],dl");
    asm("adc [bx+di],dx");
    asm("adc [si+0x6b],bp");
    (save)0x69;
    (save)0x1068;
    asm("adc [bx+di],dx");
    asm("adc [bx+si],dx");
    eax = *esi;
    esi = esi + 4;
    eax = *esi;
    esi = esi + 4;
    asm("scasb");
    asm("scasw");
    asm("scasw");
    asm("scasw");
    al = 0xaf;
    al = 0xb1;
    bl = 0xb2;
    (save)si;
    (save)sp;
    (save)sp;
    (save)0x11;
    (save)dx;
    (save)cx;
    (save)ax;
    di = di - 1;
    si = si - 1;
    bp = bp - 1;
    sp = sp - 1;
    bx = 0x10;
    dx = dx - 1 - 1;
    cx = cx - 1;
    ax = ax - 1;
    asm("adc dh,cl");
}

/* DEST BLOCK NOT FOUND: 00005111 -> 0000518b */
stack space not deallocated on return
/*	Procedure: 0x00005061 - 0x00005124
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005061()
{



    asm("into");
    asm("int 0xcf");
    asm("ror dh,1");
    asm("rcl bp,1");
    asm("xlatb");
    asm("salc");
    asm("salc");
    asm("xlatb");
    asm("aad 0xd1");
    asm("adc [bx+di],dl");
    asm("adc [bx+di],dl");
    asm("adc [di],si");
    ax = ax ^ 0x3334;
    dh = dh ^ *(bx + di);
    asm("adc [bx+di],dx");
    asm("adc [bx+si],dl");
    asm("adc si,bx");
    asm("loopne 0x5061");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xdf");
    asm("loope 0x5064");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xde");
    asm("fnstsw ax");
    asm("loopne 0x506a");
    asm("adc [bx],bx");
    (save)ds;
    asm("sbb ax,0x1b1c");
    asm("sbb bl,[bp+si]");
    asm("sbb [bx+si],bx");
    (restore)ss;
    (save)ss;
    asm("adc ax,0x1314");
    asm("adc dl,[bx+di]");
    asm("adc di,bp");
L0000509e:
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,al");
    asm("out dx,al");
    asm("out dx,al");
    asm("out dx,al");
    asm("adc [bx+di],dl");
    asm("adc [bx+di],dl");
    asm("adc [0x201f],bx");
    *(bp + si) = *(bp + si) & sp;
    asm("adc [bx+si],dx");
    asm("adc [bx+di],dl");
    if(dl = dl & *(bx + di)) {
        goto L0000509e;
    }
    asm("loope 0x509f");
    asm("loopne 0x509f");
    asm("Unknown opcode 0xde");
    asm("fcmovu st2");
    asm("fcmovu st4");
    asm("fcmovnu st1");
    asm("xlatb");
    asm("salc");
    asm("salc");
    asm("aad 0xd6");
    asm("salc");
    asm("aam 0xd3");
    asm("rcl cx,1");
    asm("rcl byte [bx+di],1");
    asm("adc [bx+di],dx");
    asm("adc [bx+si],dl");
    dx = dx + 1;
    bx = bx + 1;
    sp = sp + 1;
    bp = bp + 1;
    si = si + 1;
    asm("adc [bx+si],dx");
    asm("adc [bx+si],dl");
    asm("adc cx,ax");
    return;
    asm("rol al,0xc0");
    bp = 0xbdbd;
    bx = 0xb7b9;
    asm("adc [bx+di+0x5a],bx");
    (restore)bx;
    (restore)sp;
    (restore)sp;
    (restore)si;
    (restore)di;
    (restore)di;
    asm("pusha");
    asm("popa");
    asm("bound sp,[bp+di+0x64]");
    asm("adc [%gs:eax+0x6c6b10a7],ebp");
    asm("insw");
    asm("outsb");
    asm("outsw");
    if(di = di + 1) {
        goto L0000517b;
    }
    < ? L00005180 : ;
    == ? L00005183 : ;
    != ? 0x5187 : ;
    > ? L0000518b : ;
    >= ? 0x5126 : ;
    asm("xchg ax,bp");
    asm("xchg ax,sp");
    asm("xchg ax,bp");
    asm("xchg ax,bp");
    asm("xchg ax,dx");
    asm("xchg ax,dx");
    asm("xchg ax,sp");
    asm("xchg ax,bx");
    asm("xchg ax,bx");
    asm("xchg ax,cx");
    asm("xchg ax,bp");
    asm("xchg ax,si");
    asm("cbw");
    asm("lds dx,[bp+0xc3]");
}

/*	Procedure: 0x00005160 - 0x0000517C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005160()
{



    asm("pushf");
    asm("wait");
    asm("wait");
    asm("cwd");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("cwd");
    asm("pushf");
    asm("pushf");
    asm("sahf");
    asm("sahf");
    asm("sahf");
    asm("sahf");
    asm("sahf");
    asm("lahf");
    al = *L00009FA2;
    ax = *L0000A2A1;
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
}

/*	Procedure: 0x0000517D - 0x0000517D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000517D()
{



    (restore)gs;
}

/*	Procedure: 0x0000517E - 0x000051DE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000517E()
{



    ax & 0xaaac;
    *di = al;
    di = di + 1;
    al = *esi;
    esi = esi + 1;
    asm("scasb");
    asm("scasb");
    asm("scasw");
    asm("scasw");
    asm("scasw");
    asm("scasw");
    asm("scasw");
    al = 0xb1;
    dl = 0xb2;
    bl = 0xf;
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("into");
    asm("iret");
    asm("ror bh,1");
    asm("iret");
    asm("rcl dh,cl");
    asm("xlatb");
    asm("aad 0xd5");
    asm("aad 0xd4");
    asm("aam 0xd2");
    asm("rcl bp,cl");
    asm("ror byte [bx],cl");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("fcmovu st5");
    asm("Unknown opcode 0xde");
    st7 = (frestore);
    asm("loope 0x51a2");
    asm("loope 0x51a2");
    asm("loope 0x51a4");
    asm("Unknown opcode 0xdf");
    asm("fnstsw ax");
    asm("loope 0x51a9");
    asm("loope 0x51db");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("pxor mm5,mm7");
}

/* DEST BLOCK NOT FOUND: 000051f8 -> 000051dc */
/*	Procedure: 0x000051DF - 0x00005264
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000051DF()
{



    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("in ax,dx");
    asm("out dx,al");
    asm("out dx,al");
    asm("out dx,al");
    asm("in ax,dx");
    asm("out dx,ax");
    asm("in ax,dx");
    asm("in al,dx");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("out 0xe4,al");
    < ? L000051dc : ;
    asm("loope 0x51dd");
    asm("loope 0x51de");
    asm("loopne 0x51df");
    st3 = (frestore);
    asm("fcmovnu st3");
    asm("fcmovnu st1");
    asm("fcom st6");
    asm("aad 0xd4");
    asm("aam 0xd6");
    asm("salc");
    asm("rcl bx,cl");
    asm("rcl bx,1");
    asm("rcl dx,1");
    asm("ror di,1");
    asm("into");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0xc4");
    return;
    return;
    return;
    return;
    return;
    return;
    si = 0xb9bc;
    bh = 0xf;
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("cmpxchg486 [si+0xf0f],sp");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("Unknown opcode 0x0f");
    asm("xchg ax,si");
    asm("xchg ax,sp");
    asm("xchg ax,bp");
    asm("xchg ax,bp");
    asm("xchg ax,bx");
    asm("xchg ax,dx");
    asm("xchg ax,sp");
    asm("xchg ax,sp");
    asm("xchg ax,dx");
    asm("xchg ax,bx");
    asm("xchg ax,si");
    asm("cwd");
    asm("wait");
    sp = bp;
    (restore)bp;
    L00000000();
}

/*	Procedure: 0x000052C2 - 0x000052D4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000052C2()
{



    *di = al;
    di = di + 1;
    eax = *esi;
    esi = esi + 4;
    al = *esi;
    esi = esi + 1;
    al = *esi;
    esi = esi + 1;
    asm("scasb");
    asm("scasw");
    asm("scasw");
    asm("scasw");
    al = 0xb1;
    cl = 0xb1;
    bl = 0xb6;
    dh = 0xb7;
    ax = 0xb9ba;
}

/*	Procedure: 0x000052D5 - 0x0000533A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000052D5()
{



    si = 0xbfbe;
    return(0xbdb9);
    asm("Unknown opcode 0xc7");
    sp = bp;
    (restore)bp;
    asm("retf");
    asm("iret");
    asm("iret");
    asm("rcl bl,cl");
    asm("rcl sp,1");
    asm("xlatb");
    asm("aad 0xd6");
    asm("aam 0xd4");
    asm("aam 0xd4");
    asm("aad 0xd3");
    asm("rcl cx,cl");
    asm("rcl cx,1");
    asm("rcl cx,1");
    asm("rcl di,cl");
    asm("salc");
    asm("Unknown opcode 0xd9");
    asm("fcmovnu st5");
    asm("Unknown opcode 0xde");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xdf");
    asm("loope 0x52e3");
    asm("loope 0x52e3");
    asm("loop 0x52e4");
    asm("Unknown opcode 0xdf");
    asm("loop 0x52ea");
    asm("loope 0x52ea");
    asm("loop 0x52ef");
    asm("in ax,0xe5");
    asm("in ax,0xe7");
    L00003EFC();
    asm("in ax,dx");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
L00005318:
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,al");
    asm("in ax,dx");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    goto L00005318;
    L00003A20();
    asm("out 0xe5,ax");
    asm("in al,0xe4");
}

/*	Procedure: 0x0000533B - 0x0000535E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000533B()
{



    asm("loop 0x531f");
    asm("loop 0x531e");
    asm("Unknown opcode 0xde");
    st2 = (frestore);
    asm("Unknown opcode 0xd9");
    asm("fcmovu st3");
    asm("fcomp st1");
    asm("fcom st6");
    asm("salc");
    asm("aad 0xd5");
    asm("aad 0xd3");
    asm("rcl dx,cl");
    asm("rcl cl,cl");
    asm("rcl dx,cl");
    asm("rcl al,1");
    asm("int 0xcf");
    asm("int 0xcb");
    asm("enter 0xc8c7,0xc6");
    si = 0xc1c3;
}

/*	Procedure: 0x0000535F - 0x000053A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000535F()
{



    bl = 0xc1;
    return;
    return;
    asm("Unknown opcode 0xc4");
    return;
    return;
    di = 0xbbbb;
    cx = 0xb9ba;
    ax = 0xb9b7;
    bh = 0xb5;
    ah = 0xb5;
    bl = 0xb1;
    eax = *esi;
    esi = esi + 4;
    al = *esi;
    esi = esi + 1;
    al = *esi;
    esi = esi + 1;
    al = *esi;
    esi = esi + 1;
    *L0000BBBB = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    ax & 0xa5a7;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("cmpsb");
    asm("cmpsb");
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A1A1 = ax;
    ax = *L00009EA0;
    L00009496();
    asm("xchg ax,bp");
    asm("xchg ax,bx");
    asm("xchg ax,dx");
    asm("xchg ax,cx");
    asm("xchg ax,bx");
    asm("xchg ax,sp");
    asm("xchg ax,bx");
    asm("xchg ax,bx");
    asm("cbw");
    asm("wait");
    asm("wait");
    asm("retf");
    L00000000();
}

/*	Procedure: 0x0000550B - 0x00005519
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000550B()
{



}

/*	Procedure: 0x0000561D - 0x00005624
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000561D()
{



    asm("xchg ax,dx");
    asm("cwd");
    asm("wait");
    asm("wait");
    asm("wait");
    asm("int3");
    asm("cwd");
    asm("rol word [bx+si],0x0");
}

/* DEST BLOCK NOT FOUND: 000056d0 -> 000042bb */
/*	Procedure: 0x000056C8 - 0x00005764
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000056C8()
{



    asm("in al,0xe5");
    asm("out 0xe7,al");
    asm("out 0xe7,ax");
    asm("out 0xe7,ax");
    goto L000042bb;
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("out dx,ax");
    asm("in ax,dx");
    goto L0000e7e9;
    goto L0000e8e7;
    goto L0000e7e6;
    ax = L00003AE3();
    asm("loope 0x56e2");
    asm("fnstsw ax");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xdf");
    st5 = (frestore);
    asm("fcmovbe st7");
    asm("aad 0xd5");
    asm("salc");
    asm("xlatb");
    asm("salc");
    asm("rcl sp,cl");
    asm("rcl dx,cl");
    asm("rcl cl,1");
    asm("rcl sp,cl");
    asm("rcl ax,1");
    asm("iret");
    asm("iret");
    asm("into");
    asm("int3");
    asm("int 0xcc");
    asm("int 0xca");
    asm("retf 0xc9c7");
    asm("retf 0xc5c8");
    asm("Unknown opcode 0xc4");
    asm("rol ax,0xbf");
    asm("rol cl,0xc0");
    sp = 0xbcb9;
    bx = 0xb9b8;
    bx = 0xb7ba;
    dh = 0xb6;
    ah = 0xb3;
    al = 0xaf;
    asm("scasb");
    eax = *esi;
    esi = esi + 4;
    *di = eax;
    di = di + 4;
    *di = al;
    di = di + 1;
    ax & 0xa7a8;
    *di = al;
    di = di + 1;
    ax & 0xa7a8;
    al & 0xa7;
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("cmpsw");
    ax & 0xa7a8;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L00009FA1 = ax;
    ax = L00009496();
    asm("xchg ax,sp");
    asm("xchg ax,sp");
    asm("xchg ax,bx");
    asm("xchg ax,dx");
    asm("xchg ax,dx");
    asm("xchg ax,bx");
    asm("xchg ax,dx");
    asm("cwd");
    asm("wait");
    asm("popf");
    asm("pushf");
    asm("iret");
    asm("wait");
}

/*	Procedure: 0x000058C6 - 0x000058D9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000058C6()
{



}

/*	Procedure: 0x00005D46 - 0x00005DA4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005D46()
{



    st6 = (frestore);
    asm("Unknown opcode 0xde");
    asm("fcmovnu st0");
    asm("xlatb");
    asm("aad 0xd3");
    asm("aad 0xd7");
    asm("xlatb");
    asm("aam 0xd2");
    asm("salc");
    asm("fcomp st0");
    asm("xlatb");
    asm("salc");
    asm("ror di,cl");
    asm("iret");
    asm("iret");
    asm("rcl al,cl");
    asm("into");
    asm("into");
    asm("iret");
    asm("into");
    asm("int3");
    asm("retf 0xcacc");
    asm("Unknown opcode 0xc5");
    return;
    asm("Unknown opcode 0xc5");
    return;
    sp = 0xb8b9;
    bh = 0xb6;
    bh = 0xb7;
    bh = 0xb4;
    ch = 0xb2;
    bl = 0xb1;
    asm("scasw");
    al = 0xb0;
    asm("scasb");
    *di = eax;
    di = di + 4;
    al = *esi;
    esi = esi + 1;
    asm("scasb");
    *di = eax;
    di = di + 4;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    ax & 0xa4a9;
    asm("cmpsb");
    asm("cmpsb");
    asm("cmpsw");
    asm("cmpsb");
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *L00009E9F = ax;
    al = *L00009C9F;
    asm("popf");
    asm("popf");
    asm("wait");
    asm("cwd");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,bx");
    asm("xchg ax,dx");
    asm("xchg ax,bx");
    asm("xchg ax,dx");
    asm("xchg ax,bx");
    asm("xchg ax,sp");
    asm("xchg ax,si");
    asm("cwd");
    L000000bc();
}

/*	Procedure: 0x0000628D - 0x000062A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000628D()
{



    al = *L00009E9F;
    asm("sahf");
    asm("pushf");
    asm("wait");
    asm("wait");
    asm("wait");
    L00009797();
    asm("xchg ax,di");
    asm("xchg ax,di");
    asm("xchg ax,si");
    asm("cbw");
    asm("xchg ax,si");
    asm("xchg ax,di");
    asm("cbw");
    asm("xchg ax,di");
    asm("rcl word [di+0xb4],cl");
}

/*	Procedure: 0x000062CC - 0x000062D9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000062CC()
{



}

/*	Procedure: 0x000064DB - 0x00006524
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000064DB()
{



    asm("retf 0xc9ca");
    asm("retf 0xc6c9");
    asm("Unknown opcode 0xc5");
    asm("Unknown opcode 0xc6");
    asm("enter 0xc6c8,0xc5");
    asm("Unknown opcode 0xc5");
    *(bp + 0xc0bf) = *(bp + 0xc0bf) >> 0xc1;
    di = 0xbdbe;
    bx = 0xb5b8;
    ch = 0xb3;
    al = 0xb0;
    cl = 0xae;
    al = *esi;
    esi = esi + 1;
    *L0000BDBE = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    al = *esi;
    esi = esi + 1;
    *di = eax;
    di = di + 4;
    al = *esi;
    esi = esi + 1;
    al = *esi;
    esi = esi + 1;
    *di = eax;
    di = di + 4;
    al & 0xa9;
    ax & 0xa7a6;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A0A1 = ax;
    ax = *L0000A3A2;
    ax = *L00009FA0;
    asm("cwd");
    asm("cwd");
    asm("wait");
    asm("pushf");
    asm("popf");
    asm("popf");
    asm("sahf");
    asm("wait");
    asm("wait");
    asm("cbw");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,di");
    L000095d3();
    dl = 0;
}

/*	Procedure: 0x0000660B - 0x00006664
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000660B()
{



    asm("aad 0xd3");
    asm("aam 0xd5");
    asm("salc");
    asm("aad 0xd2");
    asm("into");
    asm("iret");
    asm("rcl cx,1");
    asm("ror bh,1");
    asm("iret");
    asm("retf");
    sp = bp;
    (restore)bp;
    di = 0xcac7;
    asm("retf");
    bp = 0xc8c7;
    asm("enter 0xc5c6,0xc3");
    return;
    ax = 0xb5b6;
    bl = 0xb2;
    dl = 0xb1;
    al = 0xad;
    *L0000BFC0 = 0xad;
    al = *L0000BCBE;
    *L0000BFC4 = eax;
    *L0000BFC8 = *L0000BCBF;
    eax = *L0000BCC0;
    al = *L0000BCC4;
    *L0000BFCC = al;
    di = 0xbfcd;
    ax & 0xa8a9;
    al & 0xa4;
    *L0000BFCD = *L0000BCC5;
    di = di + 4;
    si = 0xbcc9;
    *L0000A1A1 = al;
    *L0000A1A2 = ax;
    ax = *L00009DA1;
    L00009ea0();
    al = *L00009B9D;
    L00009698();
    asm("xchg ax,bp");
    asm("cwd");
    asm("cwd");
    asm("xchg ax,bp");
    asm("aam 0x96");
    dl = 0;
}

/*	Procedure: 0x00006D9C - 0x00006DE4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006D9C()
{



    sp = bp;
    (restore)bp;
    bp = 0xc8c6;
    asm("Unknown opcode 0xc7");
    sp = bp;
    (restore)bp;
    bp = 0xc1c2;
    asm("rol al,0xc0");
    di = 0xbbbc;
    cx = 0xb8b7;
    cx = 0xb7b9;
    bh = 0xb6;
    ah = 0xb2;
    cl = 0xb0;
    al = 0xaf;
    eax = *esi;
    esi = esi + 4;
    eax = *esi;
    esi = esi + 4;
    al = *esi;
    esi = esi + 1;
    *L0000BBBC = eax;
    di = di + 4;
    eax = *esi;
    esi = esi + 4;
    asm("scasb");
    eax = *esi;
    esi = esi + 4;
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    ax & 0xa6a7;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A1A2 = *L0000A3A2;
    asm("sahf");
    asm("sahf");
    asm("sahf");
    asm("sahf");
    asm("sahf");
    asm("pushf");
    L00009b99();
    asm("pushf");
    L00009c9a();
    asm("pushf");
    L0000ad95();
}

/*	Procedure: 0x000078D8 - 0x000078DE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000078D8()
{



    asm("int3");
    sp = bp;
    (restore)bp;
    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc4");
}

/*	Procedure: 0x000078DF - 0x000078E1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000078DF()
{



}

/*	Procedure: 0x000078E2 - 0x000078E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000078E2()
{



}

/*	Procedure: 0x000078E5 - 0x00007924
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000078E5()
{



    sp = 0xbcbc;
    sp = 0xb9b9;
    dx = 0xb9ba;
    cx = 0xb7b8;
    ch = 0xb5;
    bh = 0xb5;
    bl = 0xb7;
    bh = 0xb5;
    bl = 0xb3;
    ch = 0xb1;
    eax = *esi;
    esi = esi + 4;
    *di = al;
    di = di + 1;
    ax & 0xa7a7;
    asm("cmpsb");
    asm("cmpsb");
    asm("cmpsb");
    asm("cmpsw");
    asm("cmpsw");
    al & 0xa5;
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("cmpsb");
    asm("cmpsw");
    asm("cmpsb");
    *L0000A1A2 = al;
    asm("popf");
    asm("cwd");
    asm("cwd");
    asm("cwd");
    asm("cwd");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,bp");
    asm("cbw");
    asm("cbw");
    asm("cbw");
    asm("xchg ax,di");
    asm("lahf");
    asm("lahf");
    asm("popf");
    ax = *L00009CA0;
    asm("in ax,dx");
    L00000000();
}

/*	Procedure: 0x000079A3 - 0x000079A9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000079A3()
{



    asm("int3");
    sp = bp;
    (restore)bp;
    sp = bp;
    (restore)bp;
    asm("Unknown opcode 0xc7");
    asm("retf 0xcacc");
}

/*	Procedure: 0x000079AA - 0x00007A22
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000079AA()
{



    asm("int 0xd1");
    asm("rcl ax,cl");
    asm("rcl ch,cl");
    asm("xlatb");
    asm("salc");
    asm("aad 0xd4");
    asm("rcl cl,cl");
    asm("rcl dl,cl");
    asm("rcl ax,1");
    asm("rcl ax,1");
    asm("rcl cl,1");
    asm("rcl ch,cl");
    asm("xlatb");
    asm("salc");
    asm("aad 0xd7");
    asm("fcomp st2");
    asm("Unknown opcode 0xd9");
    asm("Unknown opcode 0xdc");
    asm("fcmovnbe st7");
    asm("fcomp st1");
    asm("fcmovu st3");
    asm("fcmovnu st5");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xde");
    asm("fnstsw ax");
    asm("Unknown opcode 0xdf");
    st7 = (frestore);
    asm("loopne 0x79bc");
    asm("loope 0x79bd");
    asm("in al,0xe5");
    asm("in al,0xe4");
    ax = L000062CC();
    asm("out 0xe8,ax");
    asm("out 0xe6,ax");
    asm("loop 0x79cb");
    asm("loop 0x79d0");
    asm("out 0xe8,al");
    asm("out 0xe7,al");
    asm("loop 0x79d4");
    asm("loop 0x79d5");
    < ? L000079d9 : ;
    asm("in al,0xe0");
    < ? L000079db : ;
    asm("Unknown opcode 0xde");
    asm("Unknown opcode 0xdc");
    asm("fcmovnu st2");
    asm("Unknown opcode 0xd9");
    asm("fcmovu st5");
    asm("fnstsw ax");
    asm("Unknown opcode 0xde");
    st2 = (frestore);
    st2 = (frestore);
    asm("fcom st6");
    asm("aad 0xd2");
    asm("rcl bl,1");
    asm("rcl dl,cl");
    asm("rcl bl,cl");
    asm("rcl ax,cl");
    asm("rcl dx,1");
    asm("rcl cl,1");
    asm("into");
    asm("int 0xcb");
    bx = 0xc3c3;
    asm("rol dx,0xc3");
}

/*	Procedure: 0x00007A23 - 0x00007A64
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007A23()
{



    si = 0xbbbd;
    bp = 0xbdbf;
    dx = 0xbcba;
    dx = 0xb8b8;
    bh = 0xb5;
    ah = 0xb5;
    dh = 0xb6;
    bh = 0xb7;
    dh = 0xb5;
    ch = 0xb5;
    dh = 0xb3;
    *di = 0xac;
    di = di + 4;
    0xa4;
    asm("cmpsb");
    *di = *si;
    di = di + 4;
    *di = *(si + 4);
    di = di + 1;
    si = si + 1;
    asm("cmpsw");
    al & 0xa8;
    asm("cmpsb");
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("cmpsb");
    *di = *si;
    di = di + 4;
    *di = *(si + 4);
    di = di + 4;
    si = si + 4;
    *L0000A0A1 = ax;
    asm("popf");
    L00009799();
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("cwd");
    asm("cbw");
    asm("cwd");
    asm("popf");
    asm("popf");
    asm("sahf");
    al = *L00009C9E;
    asm("in ax,dx");
    asm("pushf");
}

/*	Procedure: 0x00007AEA - 0x00007AEA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007AEA()
{



    asm("retf");
}

/*	Procedure: 0x00007AEB - 0x00007AFA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007AEB()
{



    asm("into");
    asm("ror di,1");
    asm("rcr ax,cl");
    asm("xlatb");
    asm("xlatb");
    asm("aad 0xd4");
    asm("rcl bp,cl");
    asm("rcl dx,cl");
    asm("rcl al,cl");
    asm("iret");
}

/*	Procedure: 0x00007AFB - 0x00007B52
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007AFB()
{



    asm("ror di,1");
    asm("into");
    asm("rcl bh,cl");
    asm("salc");
    asm("aam 0xd6");
    asm("xlatb");
    asm("fcom st6");
    asm("fcomp st0");
    asm("Unknown opcode 0xd9");
    asm("fcom st5");
    asm("Unknown opcode 0xd9");
    asm("fcmovu st1");
    asm("fcmovu st3");
    asm("Unknown opcode 0xdc");
    asm("Unknown opcode 0xde");
    st7 = (frestore);
    asm("Unknown opcode 0xde");
    st5 = (frestore);
    asm("loope 0x7af8");
    asm("loopne 0x7afb");
    asm("loopne 0x7b01");
    < ? L00007b03 : ;
    asm("out 0xe6,al");
    asm("in ax,0xe3");
    < ? L00007b09 : ;
    asm("loope 0x7b09");
    asm("loopne 0x7b0c");
    asm("loopne 0x7b0f");
    asm("in ax,0xe5");
    asm("in al,0xe4");
    < ? L00007b13 : ;
    asm("loopne 0x7b17");
    < ? L00007b18 : ;
    asm("loope 0x7b18");
    asm("loope 0x7b16");
    asm("fcmovnu st1");
    asm("fcmovu st0");
    asm("fcmovnu st5");
    asm("Unknown opcode 0xde");
    st4 = (frestore);
    asm("Unknown opcode 0xdc");
    st2 = (frestore);
    asm("Unknown opcode 0xd9");
    asm("salc");
    asm("salc");
    asm("rcl cx,cl");
    asm("rcl sp,1");
    asm("rcl cl,cl");
    asm("rcl bl,cl");
    asm("ror bh,cl");
    asm("iret");
}

/*	Procedure: 0x00007B53 - 0x00007B56
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007B53()
{



    asm("ror bh,1");
    asm("int3");
    asm("retf");
}

/*	Procedure: 0x00007B57 - 0x00007B5A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007B57()
{



    asm("int3");
    asm("retf 0xc4c7");
}

/*	Procedure: 0x00007B5B - 0x00007B5B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007B5B()
{



}

/*	Procedure: 0x00007B5C - 0x00007BA4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007B5C()
{



    *(bp + 0xc1c0) = *(bp + 0xc1c0) >> 0xc0;
    bp = 0xbebf;
    sp = 0xbcbc;
    bp = 0xbbbc;
    sp = 0xbabc;
    ax = 0xb6b6;
    ch = 0xb6;
    ah = 0xb4;
    ax = 0xb7b5;
    bh = 0xb7;
    dh = 0xb7;
    ch = 0xaf;
    al = 0xaf;
    al = *esi;
    esi = esi + 1;
    *di = al;
    di = di + 1;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("cmpsb");
    al & 0xa9;
    asm("cmpsw");
    asm("cmpsw");
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A1A2 = ax;
    asm("sahf");
    asm("sahf");
    asm("pushf");
    asm("wait");
    asm("wait");
    asm("cbw");
    asm("xchg ax,di");
    asm("xchg ax,si");
    asm("xchg ax,di");
    asm("cbw");
    asm("cbw");
    asm("pushf");
    asm("pushf");
    asm("popf");
    asm("pushf");
    asm("sahf");
    asm("lahf");
    asm("pushf");
    asm("pushf");
    asm("out dx,al");
    asm("wait");
    *di = al;
    di = di + 1;
}

/*	Procedure: 0x00007C1E - 0x00007C20
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007C1E()
{



    asm("Unknown opcode 0xc5");
    asm("Unknown opcode 0xc4");
}

/*	Procedure: 0x00007C21 - 0x00007C21
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007C21()
{



}

/*	Procedure: 0x00007C22 - 0x00007C2A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007C22()
{



    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc6");
    asm("enter 0xc6c9,0xca");
    asm("retf 0xcbca");
}

/*	Procedure: 0x00007C2B - 0x00007C3D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007C2B()
{



    asm("int 0xce");
    asm("rcl bh,1");
    asm("xlatb");
    asm("fcom st6");
    asm("aam 0xd5");
    asm("xlatb");
    asm("xlatb");
    asm("salc");
    asm("aad 0xd3");
    asm("rcl cl,1");
    asm("rcl dx,1");
    asm("iret");
}

/*	Procedure: 0x00007C3E - 0x00007C8A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007C3E()
{



    asm("rcl bh,1");
    asm("aad 0xd6");
    asm("salc");
    asm("fcom st7");
    asm("xlatb");
    asm("xlatb");
    asm("fcomp st0");
    asm("salc");
    asm("aam 0xd5");
    asm("fcomp st1");
    asm("fcomp st1");
    asm("fcmovnu st1");
    st5 = (frestore);
    st4 = (frestore);
    asm("Unknown opcode 0xde");
    st6 = (frestore);
    asm("Unknown opcode 0xde");
    asm("fnstsw ax");
    < ? L00007c41 : ;
    asm("in ax,0xe3");
    asm("loop 0x7c44");
    asm("loope 0x7c47");
    < ? L00007c48 : ;
    < ? L00007c49 : ;
    asm("loopne 0x7c4a");
    asm("loopne 0x7c4f");
    asm("loopne 0x7c50");
    asm("in ax,0xe5");
    < ? L00007c57 : ;
    asm("loop 0x7c55");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xdf");
    asm("fnstsw ax");
    st4 = (frestore);
    asm("fcmovnu st5");
    asm("fcmovnu st5");
    asm("fcmovnu st4");
    asm("fcmovnu st0");
    asm("fcmovu st5");
    asm("Unknown opcode 0xd9");
    asm("salc");
    asm("xlatb");
    asm("xlatb");
    asm("aam 0xd1");
    asm("iret");
}

/*	Procedure: 0x00007C8B - 0x00007C9A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007C8B()
{



    asm("rcl bx,cl");
    asm("rcl sp,1");
    asm("aad 0xd1");
    asm("ror dh,1");
    asm("int3");
    asm("int3");
    asm("enter 0xc9c9,0xc8");
    asm("Unknown opcode 0xc5");
}

/*	Procedure: 0x00007C9B - 0x00007C9D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007C9B()
{



}

/*	Procedure: 0x00007C9E - 0x00007CE4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007C9E()
{



    bp = 0xbfbf;
    bp = 0xbcbc;
    bx = 0xbaba;
    sp = 0xbdbb;
    bp = 0xbbbd;
    ax = 0xb4b5;
    ah = 0xb4;
    dl = 0xb3;
    ch = 0xb4;
    bh = 0xba;
    dx = 0xb7ba;
    cl = 0xae;
    asm("scasb");
    asm("scasw");
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    asm("cmpsw");
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("cmpsb");
    asm("cmpsb");
    asm("cmpsb");
    asm("cmpsw");
    ax & 0xa5a7;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *L0000A0A1 = al;
    asm("lahf");
    asm("pushf");
    asm("pushf");
    asm("wait");
    L00009997();
    asm("cwd");
    L00009e9e();
    asm("pushf");
    asm("sahf");
    asm("popf");
    asm("sahf");
    asm("out dx,ax");
    asm("pushf");
    asm("cmpsw");
}

/*	Procedure: 0x00007D63 - 0x00007D65
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007D63()
{



    asm("Unknown opcode 0xc5");
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00007D66 - 0x00007D68
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007D66()
{



    asm("retf 0xcbcc");
}

/*	Procedure: 0x00007D69 - 0x00007D7E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007D69()
{



    asm("enter 0xc9c7,0xcb");
    asm("rcl ah,1");
    asm("aad 0xd4");
    asm("aad 0xd3");
    asm("xlatb");
    asm("aad 0xd7");
    asm("xlatb");
    asm("salc");
    asm("aam 0xcf");
    asm("rcl dl,1");
    asm("rcl cx,1");
    asm("iret");
}

/*	Procedure: 0x00007D7F - 0x00007D92
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007D7F()
{



    asm("rcl sp,cl");
    asm("rcl bx,cl");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("xlatb");
    asm("fcom st5");
    asm("rcl ah,cl");
    asm("salc");
    asm("salc");
    asm("xlatb");
    asm("fcmovu st1");
    asm("fcmovnu st3");
}

/* DEST BLOCK NOT FOUND: 00007d9d -> 00007d82 */
/* DEST BLOCK NOT FOUND: 00007da3 -> 00007d8a */
/* DEST BLOCK NOT FOUND: 00007db2 -> 00007d92 */
/*	Procedure: 0x00007D93 - 0x00007DCA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007D93()
{



    asm("Unknown opcode 0xdc");
    asm("Unknown opcode 0xd9");
    asm("fcmovnu st3");
    asm("fcmovnu st3");
    asm("Unknown opcode 0xdc");
    asm("Unknown opcode 0xdc");
    asm("fsubrp st0");
    < ? L00007d82 : ;
    asm("loop 0x7d81");
    asm("loope 0x7d84");
    < ? L00007d8a : ;
    asm("loop 0x7d89");
    asm("loopne 0x7d88");
    st6 = (frestore);
    asm("Unknown opcode 0xdf");
    asm("fsubrp st4");
    asm("in ax,0xe4");
    asm("in al,0xe3");
    < ? L00007d92 : ;
    asm("Unknown opcode 0xdf");
    st5 = (frestore);
    st5 = (frestore);
    asm("fcmovnu st3");
    asm("Unknown opcode 0xde");
    asm("fcmovu st2");
    asm("Unknown opcode 0xdc");
    asm("fcmovu st0");
    asm("xlatb");
    asm("xlatb");
    asm("Unknown opcode 0xd9");
    asm("fcom st6");
    asm("salc");
    asm("salc");
    asm("rcl ax,cl");
    asm("iret");
}

/*	Procedure: 0x00007DCB - 0x00007E24
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007DCB()
{



    asm("rcl cx,1");
    asm("ror di,1");
    asm("rcl cx,cl");
    asm("int 0xcd");
    asm("int 0xc8");
    sp = bp;
    (restore)bp;
    di = 0xc2c3;
    asm("rol cl,0xbf");
    si = 0xbdbc;
    sp = 0xb9ba;
    ax = 0xbbb9;
    sp = 0xbbbc;
    dx = 0xb5b8;
    ah = 0xb4;
    dl = 0xb2;
    bl = 0xb4;
    ah = 0xb6;
    cx = 0xbaba;
    dh = 0xb2;
    al = 0xaf;
    eax = *L0000BBBB;
    esi = 0xbbbf;
    *di = al;
    di = di + 1;
    al & 0xa6;
    asm("cmpsb");
    *di = *si;
    di = di + 4;
    si = si + 4;
    al & 0xa6;
    asm("cmpsw");
    asm("cmpsb");
    asm("cmpsb");
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A3A2 = ax;
    asm("lahf");
    asm("lahf");
    asm("pushf");
    L00009797();
    asm("cwd");
    asm("pushf");
    asm("pushf");
    asm("pushf");
    asm("popf");
    asm("popf");
    asm("sahf");
    al = *L00009C9F;
    asm("lahf");
    asm("popf");
    L000000a4();
}

/*	Procedure: 0x00007E91 - 0x00007EA3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007E91()
{



    si = 0xbebe;
    bp = 0xbebb;
    di = 0xc0c0;
    si = 0xbfbe;
    di = 0xc3c1;
    return;
}

/*	Procedure: 0x00007EA4 - 0x00007EA8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007EA4()
{



    asm("enter 0xc9ca,0xcd");
    asm("retf");
}

/*	Procedure: 0x00007EA9 - 0x00007EA9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007EA9()
{



    asm("retf");
}

/*	Procedure: 0x00007EAA - 0x00007EAD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007EAA()
{



    sp = bp;
    (restore)bp;
    asm("retf 0xd1cd");
}

/*	Procedure: 0x00007EAE - 0x00007EB9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007EAE()
{



    asm("aam 0xd5");
    asm("aad 0xd4");
    asm("rcl si,cl");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("aad 0xd3");
    asm("iret");
}

/*	Procedure: 0x00007EBA - 0x00007EBA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007EBA()
{



    asm("iret");
}

/*	Procedure: 0x00007EBB - 0x00007F0A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007EBB()
{



    asm("rcl dx,1");
    asm("rcl al,1");
    asm("aam 0xd2");
    asm("rcl bl,cl");
    asm("aad 0xd6");
    asm("aad 0xd6");
    asm("xlatb");
    asm("salc");
    asm("aam 0xd1");
    asm("aam 0xd5");
    asm("aad 0xd6");
    asm("fcomp st1");
    asm("fcmovu st2");
    asm("Unknown opcode 0xd9");
    asm("Unknown opcode 0xd9");
    asm("fcmovu st0");
    asm("Unknown opcode 0xd9");
    asm("fcmovu st1");
    asm("Unknown opcode 0xd9");
    st7 = (frestore);
    asm("loopne 0x7ec0");
    asm("loope 0x7ec0");
    asm("loopne 0x7ec4");
    asm("loope 0x7ec7");
    asm("loopne 0x7ec6");
    asm("Unknown opcode 0xde");
    asm("Unknown opcode 0xdf");
    st3 = (frestore);
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xdf");
    asm("out 0xe7,al");
    asm("out 0xe5,ax");
    asm("in al,0xe2");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xde");
    asm("Unknown opcode 0xdc");
    asm("fcmovu st6");
    asm("fcomp st2");
    asm("Unknown opcode 0xdc");
    asm("fcmovbe st7");
    asm("Unknown opcode 0xd9");
    asm("xlatb");
    asm("Unknown opcode 0xd9");
    asm("xlatb");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("xlatb");
    asm("aad 0xd6");
    asm("xlatb");
    asm("rcl dl,cl");
    asm("iret");
}

/*	Procedure: 0x00007F0B - 0x00007F0B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007F0B()
{



    asm("iret");
}

/*	Procedure: 0x00007F0C - 0x00007F0E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007F0C()
{



    asm("ror ch,1");
    asm("iret");
}

/*	Procedure: 0x00007F0F - 0x00007F12
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007F0F()
{



    asm("into");
    asm("ror ch,1");
    asm("retf");
}

/*	Procedure: 0x00007F13 - 0x00007F15
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007F13()
{



    asm("retf 0xc5ca");
}

/*	Procedure: 0x00007F16 - 0x00007F64
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007F16()
{



    bl = 0xc2;
    di = 0xc0bf;
    di = 0xbcbd;
    bp = 0xbabc;
    bx = 0xbbbc;
    bx = 0xbab8;
    bx = 0xbbbe;
    bx = 0xb7ba;
    ah = 0xb5;
    bl = 0xb2;
    cl = 0xb2;
    ch = 0xb4;
    dh = 0xb7;
    cx = 0xb4b7;
    ah = 0xb2;
    asm("scasw");
    eax = *esi;
    esi = esi + 4;
    ax & 0xa8a8;
    al & 0xa6;
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("cmpsb");
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A1A0 = ax;
    ax = *L00009C9F;
    L00009796();
    asm("cwd");
    ax = L0000a0a0();
    asm("lahf");
    al = *L00009FA0;
    asm("lahf");
    al = *L00009A9E;
    asm("in ax,dx");
    asm("xchg ax,si");
    *L00000000 = ax;
}

/*	Procedure: 0x00007FE4 - 0x00007FE8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007FE4()
{



    asm("enter 0xc9c8,0xcb");
    asm("retf");
}

/*	Procedure: 0x00007FE9 - 0x00007FEB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007FE9()
{



    asm("int3");
    asm("int3");
    asm("retf");
}

/*	Procedure: 0x00007FEC - 0x00008050
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007FEC()
{



    asm("into");
    asm("into");
    asm("aam 0xd6");
    asm("aad 0xd4");
    asm("rcl di,cl");
    asm("salc");
    asm("xlatb");
    asm("salc");
    asm("aam 0xd4");
    asm("rcl cx,1");
    asm("rcl dl,cl");
    asm("ror si,1");
    asm("rcl dx,cl");
    asm("rcl bl,cl");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("rcl dx,cl");
    asm("rcl bx,cl");
    asm("aad 0xd4");
    asm("xlatb");
    asm("fcmovu st1");
    asm("xlatb");
    asm("fcomp st1");
    asm("fcom st7");
    asm("fcomp st0");
    asm("Unknown opcode 0xd9");
    asm("xlatb");
    asm("Unknown opcode 0xd9");
    asm("fcmovu st4");
    st7 = (frestore);
    asm("Unknown opcode 0xde");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xdf");
    asm("fnstsw ax");
    asm("Unknown opcode 0xdf");
    st5 = (frestore);
    asm("Unknown opcode 0xdf");
    st6 = (frestore);
    asm("Unknown opcode 0xde");
    asm("Unknown opcode 0xdf");
    asm("loop 0x8015");
    asm("in al,0xe4");
    asm("loop 0x8014");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xdc");
    st2 = (frestore);
    asm("fcom st7");
    asm("xlatb");
    asm("fcom st3");
    asm("aad 0xd6");
    asm("salc");
    asm("fcom st6");
    asm("aad 0xd6");
    asm("aam 0xd4");
    asm("aam 0xd3");
    asm("ror bh,cl");
    asm("into");
    asm("ror ch,1");
    asm("int 0xce");
    asm("into");
    asm("retf");
}

/*	Procedure: 0x00008051 - 0x00008051
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008051()
{



    asm("retf");
}

/*	Procedure: 0x00008052 - 0x00008054
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008052()
{



    asm("retf 0xc6c8");
}

/*	Procedure: 0x00008055 - 0x0000805A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008055()
{



    cl = 0xc3;
}

/*	Procedure: 0x0000805B - 0x000080A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000805B()
{



    *(bp + 0xbcbd) = *(bp + 0xbcbd) >> 0xbb;
    dx = 0xb8ba;
    bx = 0xbabc;
    bx = 0xbbbc;
    dx = 0xb8bb;
    dh = 0xb6;
    ch = 0xb5;
    ah = 0xb1;
    asm("scasw");
    cl = 0xb5;
    ah = 0xb4;
    bh = 0xb8;
    dh = 0xb5;
    dh = 0xb3;
    0xab;
    0xa8;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A3A3 = 0xab;
    ax = *L00009D9E;
    asm("popf");
    asm("pushf");
    asm("cwd");
    asm("cbw");
    asm("xchg ax,di");
    asm("xchg ax,di");
    asm("xchg ax,di");
    asm("cwd");
    asm("cwd");
    L0000a2a1();
    *L0000A2A2 = al;
    *di = *si;
    di = di + 1;
    si = si + 1;
    al = *L00009CA0;
    asm("cbw");
    asm("in al,dx");
    asm("xchg ax,bp");
    ax = *L00000000;
}

/*	Procedure: 0x00008122 - 0x00008129
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008122()
{



    asm("Unknown opcode 0xc7");
    asm("enter 0xccc9,0xcd");
    asm("int 0xcb");
    asm("retf");
}

/*	Procedure: 0x0000812A - 0x00008189
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000812A()
{



    asm("int3");
    asm("int 0xcf");
    asm("int 0xd1");
    asm("aam 0xd5");
    asm("salc");
    asm("salc");
    asm("fcomp st0");
    asm("xlatb");
    asm("xlatb");
    asm("aam 0xd2");
    asm("rcl bl,cl");
    asm("rcl cx,1");
    asm("ror ah,1");
    asm("rcl dl,1");
    asm("rcl bx,cl");
    asm("salc");
    asm("aad 0xd6");
    asm("salc");
    asm("salc");
    asm("rcl cx,cl");
    asm("rcl cl,1");
    asm("rcl bx,cl");
    asm("rcl dh,cl");
    asm("fcom st6");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("xlatb");
    asm("xlatb");
    asm("xlatb");
    asm("xlatb");
    asm("xlatb");
    asm("salc");
    asm("fcom st7");
    asm("fcmovu st3");
    st6 = (frestore);
    st5 = (frestore);
    asm("Unknown opcode 0xde");
    asm("Unknown opcode 0xde");
    st3 = (frestore);
    asm("Unknown opcode 0xdc");
    asm("Unknown opcode 0xdc");
    asm("Unknown opcode 0xdf");
    asm("loope 0x814a");
    asm("loopne 0x814f");
    asm("loope 0x8152");
    asm("loop 0x8155");
    asm("loopne 0x8152");
    asm("loopne 0x8154");
    asm("fcmovu st2");
    asm("salc");
    asm("aad 0xd8");
    asm("xlatb");
    asm("aam 0xd5");
    asm("salc");
    asm("fcomp st0");
    asm("xlatb");
    asm("salc");
    asm("aam 0xd5");
    asm("rcl dx,cl");
    asm("rcl cl,cl");
    asm("iret");
}

/*	Procedure: 0x0000818A - 0x00008198
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000818A()
{



    asm("int 0xce");
    asm("into");
    asm("int3");
    asm("into");
    asm("int 0xcb");
    asm("enter 0xc6c9,0xc6");
    asm("Unknown opcode 0xc5");
}

/*	Procedure: 0x00008199 - 0x000081E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008199()
{



    di = 0xbfbf;
    di = 0xbcbc;
    dx = 0xbabb;
    dx = 0xbabc;
    dx = 0xbbba;
    bx = 0xbbba;
    sp = 0xb5b8;
    ch = 0xb6;
    bl = 0xb1;
    al = 0xb2;
    cl = 0xb3;
    ch = 0xb5;
    dh = 0xb4;
    bl = 0xb0;
    0xa0;
    0xa0;
    asm("cmpsw");
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A2A3 = al;
    ax = *L00009D9F;
    asm("pushf");
    ax = L00009897();
    asm("cwd");
    asm("cwd");
    asm("wait");
    asm("wait");
    *di = *si;
    di = di + 4;
    si = si + 4;
    *L0000A6A4 = *L0000A5A4;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 1;
    si = si + 1;
    ax = *L0000979C;
    asm("in ax,dx");
    asm("xchg ax,sp");
    *L00000000 = al;
}

/*	Procedure: 0x00008267 - 0x00008268
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008267()
{



    asm("into");
    asm("retf");
}

/*	Procedure: 0x00008269 - 0x0000826B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008269()
{



    asm("retf 0xd0cd");
}

/*	Procedure: 0x0000826C - 0x0000826C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000826C()
{



    asm("iret");
}

/*	Procedure: 0x0000826D - 0x0000826D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000826D()
{



    asm("iret");
}

/*	Procedure: 0x0000826E - 0x0000826E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000826E()
{



    asm("iret");
}

/*	Procedure: 0x0000826F - 0x000082D1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000826F()
{



    asm("rcl bp,1");
    asm("salc");
    asm("aad 0xda");
    asm("fcomp st0");
    asm("salc");
    asm("aam 0xd4");
    asm("rcl cx,1");
    asm("rcl ax,1");
    asm("into");
    asm("int 0xcf");
    asm("rcl bl,1");
    asm("aad 0xd6");
    asm("fcom st6");
    asm("salc");
    asm("aad 0xd2");
    asm("ror bh,1");
    asm("rcl bx,1");
    asm("rcl cl,1");
    asm("aam 0xd5");
    asm("salc");
    asm("aad 0xd5");
    asm("aad 0xd6");
    asm("xlatb");
    asm("xlatb");
    asm("xlatb");
    asm("salc");
    asm("aam 0xd5");
    asm("aad 0xd6");
    asm("fcomp st2");
    asm("Unknown opcode 0xdc");
    asm("Unknown opcode 0xdc");
    asm("fcmovnu st5");
    st1 = (frestore);
    asm("fcmovu st3");
    st7 = (frestore);
    asm("Unknown opcode 0xdf");
    asm("fnstsw ax");
    asm("loop 0x828f");
    asm("loopne 0x8294");
    asm("loope 0x8293");
    st5 = (frestore);
    asm("fcmovnu st3");
    asm("xlatb");
    asm("salc");
    asm("aad 0xd5");
    asm("xlatb");
    asm("salc");
    asm("aam 0xd3");
    asm("aad 0xd8");
    asm("aad 0xd3");
    asm("rcl bx,cl");
    asm("rcl al,1");
    asm("int 0xcf");
    asm("into");
    asm("int3");
    asm("int 0xce");
    asm("int 0xcb");
    asm("retf 0xc6c9");
}

/*	Procedure: 0x000082D2 - 0x00008324
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000082D2()
{



    asm("enter 0xc5c6,0xc2");
    asm("rol cl,0xbf");
    *(bx + 0xbdbe) = *(bx + 0xbdbe) >> 0xbb;
    cx = 0xbab9;
    dx = 0xbdbb;
    bp = 0xbcba;
    sp = 0xbabb;
    bx = 0xbcbc;
    cx = 0xb6b7;
    dh = 0xb2;
    dl = 0xb2;
    bl = 0xb2;
    ch = 0xb5;
    dh = 0xb4;
    dl = 0xb5;
    dl = 0xae;
    *di = al;
    di = di + 1;
    ax & 0xa8aa;
    asm("cmpsw");
    asm("cmpsb");
    *di = *si;
    di = di + 4;
    si = si + 4;
    *L0000A1A2 = ax;
    al = *L00009C9D;
    L00009797();
    asm("xchg ax,di");
    asm("xchg ax,si");
    asm("cbw");
    asm("cwd");
    asm("pushf");
    asm("sahf");
    ax = *L0000A5A5;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A5A3 = ax;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *L00009CA2 = *L0000A5A3;
    asm("xchg ax,di");
    asm("out dx,al");
    asm("xchg ax,bp");
    ax = *L00000000;
}

/*	Procedure: 0x00008393 - 0x0000839B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008393()
{



    di = 0xc1bf;
    asm("rol cx,0xc2");
}

/*	Procedure: 0x0000839C - 0x000083A8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000839C()
{



    asm("Unknown opcode 0xc4");
    dh = 0xc9;
    asm("int 0xcb");
    asm("int 0xd0");
    asm("ror ch,1");
    asm("int 0xcf");
    asm("iret");
}

/*	Procedure: 0x000083A9 - 0x000083AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000083A9()
{



    asm("int3");
    asm("into");
    asm("iret");
}

/*	Procedure: 0x000083AC - 0x000083C0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000083AC()
{



    asm("ror ah,1");
    asm("rcl bx,1");
    asm("Unknown opcode 0xd9");
    asm("aad 0xd7");
    asm("fcomp st3");
    asm("salc");
    asm("rcl bx,cl");
    asm("rcl dx,cl");
    asm("rcl cl,1");
    asm("ror ch,1");
    asm("int 0xd1");
    asm("iret");
}

/*	Procedure: 0x000083C1 - 0x00008406
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000083C1()
{



    asm("rcl sp,1");
    asm("salc");
    asm("aad 0xd5");
    asm("aam 0xd3");
    asm("salc");
    asm("rcl dl,cl");
    asm("rcl dl,cl");
    asm("rcl cx,1");
    asm("rcl bp,cl");
    asm("salc");
    asm("xlatb");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("xlatb");
    asm("xlatb");
    asm("salc");
    asm("aam 0xd3");
    asm("rcl bx,cl");
    asm("salc");
    asm("Unknown opcode 0xd9");
    asm("fcmovu st4");
    st3 = (frestore);
    asm("fcmovnu st1");
    asm("Unknown opcode 0xd9");
    asm("xlatb");
    asm("fcomp st5");
    st4 = (frestore);
    asm("fsubrp st0");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xde");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xdf");
    asm("Unknown opcode 0xdc");
    asm("Unknown opcode 0xdc");
    asm("fcmovu st4");
    asm("Unknown opcode 0xd9");
    asm("fcom st6");
    asm("rcl sp,cl");
    asm("aad 0xd4");
    asm("rcl bh,cl");
    asm("salc");
    asm("rcl cl,cl");
    asm("ror di,1");
    asm("int3");
    asm("retf");
}

/*	Procedure: 0x00008407 - 0x0000840C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008407()
{



    asm("int3");
    asm("into");
    asm("into");
    asm("int 0xcf");
    asm("iret");
}

/*	Procedure: 0x0000840D - 0x0000840E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000840D()
{



    asm("into");
    asm("retf");
}

/*	Procedure: 0x0000840F - 0x00008415
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000840F()
{



    asm("enter 0xc6c8,0xc7");
    asm("Unknown opcode 0xc5");
    asm("Unknown opcode 0xc4");
}

/*	Procedure: 0x00008416 - 0x00008464
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008416()
{



    *(bx + 0xbec0) = *(bx + 0xbec0) >> 0xbb;
    sp = 0xb9bb;
    cx = 0xb9b9;
    cx = 0xbbbb;
    bx = 0xbcb9;
    sp = 0xbbbc;
    dx = 0xbaba;
    ax = 0xb7b6;
    ax = 0xafb3;
    cl = 0xb4;
    dl = 0xb0;
    dh = 0xb3;
    cl = 0xb3;
    ah = 0xaf;
    *di = 0xac;
    di = di + 1;
    0xa8;
    asm("cmpsw");
    asm("cmpsb");
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A1A2 = al;
    asm("lahf");
    asm("pushf");
    ax = L00009797();
    asm("xchg ax,di");
    asm("xchg ax,di");
    asm("xchg ax,di");
    asm("cbw");
    asm("lahf");
    al = *L0000A6A3;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A2A0 = al;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *L0000999F = *L0000A2A0;
    asm("out dx,ax");
    asm("xchg ax,di");
    *L00000000 = ax;
}

/*	Procedure: 0x000084D4 - 0x000084D9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000084D4()
{



    asm("rol cx,0xbf");
    asm("Unknown opcode 0xc5");
    asm("Unknown opcode 0xc5");
}

/*	Procedure: 0x000084DA - 0x000084E8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000084DA()
{



    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc5");
    dh = 0xc9;
    asm("int 0xcd");
    asm("into");
    asm("rcl cl,1");
    asm("rcl ax,cl");
    asm("into");
    asm("into");
    asm("iret");
}

/*	Procedure: 0x000084E9 - 0x000084E9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000084E9()
{



    asm("iret");
}

/*	Procedure: 0x000084EA - 0x000084FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000084EA()
{



    asm("rcl bl,1");
    asm("ror bh,1");
    asm("into");
    asm("aam 0xd5");
    asm("aad 0xd6");
    asm("fcmovbe st7");
    asm("aad 0xd1");
    asm("rcl bx,1");
    asm("rcl cl,cl");
    asm("iret");
}

/*	Procedure: 0x000084FC - 0x000084FC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000084FC()
{



    asm("iret");
}

/*	Procedure: 0x000084FD - 0x000084FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000084FD()
{



    asm("int 0xcf");
    asm("iret");
}

/*	Procedure: 0x00008500 - 0x0000854B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008500()
{



    asm("rcl al,1");
    asm("rcl dx,1");
    asm("rcl dl,cl");
    asm("rcl ah,cl");
    asm("aad 0xd3");
    asm("rcl cl,cl");
    asm("rcl dx,1");
    asm("rcl dl,1");
    asm("aam 0xd5");
    asm("salc");
    asm("xlatb");
    asm("salc");
    asm("aad 0xd5");
    asm("salc");
    asm("aad 0xd3");
    asm("rcl bl,cl");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("fcomp st2");
    asm("fcmovu st2");
    asm("Unknown opcode 0xd9");
    asm("xlatb");
    asm("salc");
    asm("aam 0xd5");
    asm("fcmovu st1");
    asm("Unknown opcode 0xd9");
    asm("fcmovu st4");
    asm("fcmovu st3");
    st4 = (frestore);
    asm("Unknown opcode 0xdc");
    asm("Unknown opcode 0xdc");
    asm("Unknown opcode 0xd9");
    asm("fcmovu st2");
    asm("Unknown opcode 0xd9");
    asm("Unknown opcode 0xd9");
    asm("xlatb");
    asm("aam 0xd4");
    asm("aam 0xd4");
    asm("aam 0xd5");
    asm("xlatb");
    asm("xlatb");
    asm("ror bh,1");
    asm("into");
    asm("int3");
    asm("enter 0xcac9,0xcf");
    asm("into");
    asm("int3");
    asm("iret");
}

/*	Procedure: 0x0000854C - 0x00008550
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000854C()
{



    asm("into");
    asm("int3");
    asm("retf 0xc8c9");
}

/*	Procedure: 0x00008551 - 0x00008555
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008551()
{



    bh = 0xc3;
    asm("Unknown opcode 0xc5");
}

/*	Procedure: 0x00008556 - 0x000085A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008556()
{



    di = 0xc0c0;
    bp = 0xbbbc;
    sp = 0xb7b8;
    cx = 0xb8b9;
    dx = 0xb9ba;
    dx = 0xbbbc;
    si = 0xbabc;
    dx = 0xb6b9;
    dh = 0xb6;
    dh = 0xb1;
    al = 0xb0;
    bl = 0xb2;
    dl = 0xb0;
    asm("scasw");
    eax = *esi;
    esi = esi + 4;
    asm("scasw");
    asm("scasb");
    al = 0xad;
    *di = 0xad;
    di = di + 1;
    asm("cmpsw");
    *di = al;
    di = di + 1;
    asm("cmpsb");
    asm("cmpsb");
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *L0000A1A2 = ax;
    asm("lahf");
    asm("sahf");
    asm("pushf");
    L00009797();
    asm("xchg ax,si");
    asm("xchg ax,si");
    asm("cbw");
    ax = L0000a7a6();
    asm("cmpsw");
    *di = *si;
    di = di + 4;
    si = si + 4;
    *L0000A6A4 = ax;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 1;
    si = si + 1;
    al = *L000099A0;
    asm("out dx,ax");
    asm("cwd");
    *L00000000 = ax;
}

/*	Procedure: 0x0000860D - 0x00008615
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000860D()
{



    asm("rol dx,0xc0");
    asm("rol cx,0xbc");
}

/*	Procedure: 0x00008616 - 0x00008617
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008616()
{



    asm("Unknown opcode 0xc4");
}

/*	Procedure: 0x00008618 - 0x00008620
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008618()
{



    asm("Unknown opcode 0xc5");
    bl = 0xc9;
    sp = bp;
    (restore)bp;
    sp = bp;
    (restore)bp;
    asm("retf 0xcecb");
}

/*	Procedure: 0x00008621 - 0x00008622
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008621()
{



    asm("into");
    asm("iret");
}

/*	Procedure: 0x00008623 - 0x00008640
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008623()
{



    asm("rcl bl,cl");
    asm("aam 0xd0");
    asm("rcl bl,cl");
    asm("rcl bl,cl");
    asm("aam 0xd2");
    asm("rcl dl,cl");
    asm("rcl bx,cl");
    asm("aam 0xd5");
    asm("salc");
    asm("xlatb");
    asm("rcl cl,cl");
    asm("rcl cl,1");
    asm("ror bp,1");
    asm("int 0xce");
    asm("int 0xcd");
    asm("into");
    asm("iret");
}

/*	Procedure: 0x00008641 - 0x0000868B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008641()
{



    asm("rcl al,1");
    asm("rcl bx,1");
    asm("aam 0xd4");
    asm("aam 0xd3");
    asm("rcl bx,cl");
    asm("rcl ah,cl");
    asm("rcl bl,cl");
    asm("rcl bp,cl");
    asm("aad 0xd8");
    asm("fcomp st0");
    asm("aad 0xd5");
    asm("aam 0xd4");
    asm("rcl cl,cl");
    asm("rcl bp,cl");
    asm("aam 0xd4");
    asm("aad 0xd7");
    asm("fcomp st1");
    asm("fcmovnu st1");
    asm("salc");
    asm("aam 0xd5");
    asm("xlatb");
    asm("xlatb");
    asm("xlatb");
    asm("fcmovu st2");
    asm("fcmovu st3");
    st4 = (frestore);
    asm("fcmovnu st2");
    asm("Unknown opcode 0xd9");
    asm("fcmovnu st0");
    asm("fcomp st0");
    asm("salc");
    asm("aam 0xd5");
    asm("salc");
    asm("salc");
    asm("aad 0xd5");
    asm("xlatb");
    asm("aam 0xcf");
    asm("int3");
    asm("int 0xca");
    asm("enter 0xcac9,0xcd");
    asm("int 0xcb");
    asm("retf");
}

/*	Procedure: 0x0000868C - 0x00008693
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000868C()
{



    asm("int 0xcc");
    sp = bp;
    (restore)bp;
    asm("enter 0xc3c7,0xc2");
}

/*	Procedure: 0x00008694 - 0x00008696
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008694()
{



}

/*	Procedure: 0x00008697 - 0x000086E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008697()
{



    si = 0xbdbe;
    sp = 0xbbbb;
    bh = 0xb6;
    bh = 0xb8;
    bh = 0xb7;
    cx = 0xb9b9;
    bx = 0xbdbc;
    bp = 0xb8bb;
    bh = 0xb6;
    ah = 0xb6;
    bl = 0xb0;
    al = 0xaf;
    cl = 0xb3;
    dl = 0xb1;
    al = 0xb1;
    asm("scasb");
    al = 0xae;
    asm("scasb");
    al & 0xa8;
    al & 0xa9;
    asm("cmpsw");
    asm("cmpsw");
    *di = *si;
    di = di + 4;
    si = si + 4;
    *L0000A1A2 = ax;
    asm("lahf");
    asm("popf");
    asm("wait");
    asm("wait");
    L00009798();
    asm("cbw");
    asm("cwd");
    L0000a7a6() & 0xa6;
    *L0000A6A4 = ax;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *L00009FA0 = ax;
    asm("xchg ax,si");
    asm("out dx,ax");
    asm("cbw");
    *L00000000 = ax;
}

/*	Procedure: 0x00008764 - 0x00008778
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008764()
{



    asm("aad 0xd4");
    asm("aad 0xd4");
    asm("rcl sp,cl");
    asm("aam 0xd5");
    asm("salc");
    asm("xlatb");
    asm("aam 0xd4");
    asm("rcl dx,cl");
    asm("aam 0xd6");
    asm("rcl bl,cl");
    asm("rcl al,cl");
    asm("iret");
}

/*	Procedure: 0x00008779 - 0x000087C6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008779()
{



    asm("into");
    asm("int 0xcc");
    asm("int 0xcc");
    asm("int3");
    asm("int 0xce");
    asm("into");
    asm("rcl dl,1");
    asm("rcl sp,cl");
    asm("aad 0xd1");
    asm("aam 0xd5");
    asm("salc");
    asm("aad 0xd5");
    asm("aad 0xd3");
    asm("aad 0xd4");
    asm("aad 0xd6");
    asm("xlatb");
    asm("aad 0xd5");
    asm("rcl dl,cl");
    asm("ror bh,cl");
    asm("rcl cl,1");
    asm("rcl dx,cl");
    asm("rcl sp,cl");
    asm("aad 0xd4");
    asm("salc");
    asm("xlatb");
    asm("xlatb");
    asm("salc");
    asm("aad 0xd4");
    asm("xlatb");
    asm("aad 0xd6");
    asm("fcomp st0");
    asm("fcomp st2");
    asm("Unknown opcode 0xdc");
    asm("fcmovnu st0");
    asm("xlatb");
    asm("fcom st7");
    asm("aam 0xd5");
    asm("aam 0xd7");
    asm("xlatb");
    asm("salc");
    asm("xlatb");
    asm("salc");
    asm("aad 0xd5");
    asm("rcl cl,cl");
    asm("into");
    asm("int3");
    asm("int3");
    asm("retf 0xcac9");
}

/*	Procedure: 0x000087C7 - 0x000087C8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000087C7()
{



    asm("int3");
    asm("retf");
}

/*	Procedure: 0x000087C9 - 0x000087C9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000087C9()
{



    asm("retf");
}

/*	Procedure: 0x000087CA - 0x000087CA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000087CA()
{



    asm("retf");
}

/*	Procedure: 0x000087CB - 0x000087CE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000087CB()
{



    asm("int3");
    asm("retf 0xc7c9");
}

/*	Procedure: 0x000087CF - 0x000087D5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000087CF()
{



    si = 0xc1c2;
}

/*	Procedure: 0x000087D6 - 0x00008824
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000087D6()
{



    bp = 0xbabc;
    cx = 0xb7b6;
    ax = 0xb9ba;
    cx = 0xb7b8;
    dh = 0xb6;
    bh = 0xbc;
    bx = 0xb8ba;
    bh = 0xb6;
    ah = 0xb5;
    dl = 0xaf;
    esi = 0xbec2;
    *di = *L0000BEBE;
    di = di + 4;
    asm("scasb");
    asm("scasw");
    dl = 0xb3;
    bl = 0xb1;
    al = 0xaf;
    eax = *esi;
    esi = esi + 4;
    al = *esi;
    esi = esi + 1;
    al = *esi;
    esi = esi + 1;
    ax & 0xabac;
    *di = al;
    di = di + 1;
    al & 0xa5;
    *L0000A0A1 = al;
    asm("sahf");
    asm("wait");
    asm("cwd");
    L00009898();
    asm("cwd");
    asm("cbw");
    L0000a4a2();
    al & 0xa8;
    al & 0xa7;
    asm("cmpsb");
    asm("cmpsw");
    *di = *si;
    di = di + 4;
    si = si + 4;
    ax = *L00009CA0;
    asm("xchg ax,si");
    asm("out dx,ax");
    asm("cbw");
    ax = *L00000000;
}

/*	Procedure: 0x000088A0 - 0x000088DA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000088A0()
{



    asm("into");
    asm("int 0xcb");
    asm("aad 0xd5");
    asm("fcomp st1");
    asm("xlatb");
    asm("salc");
    asm("xlatb");
    asm("aam 0xd5");
    asm("aad 0xd8");
    asm("salc");
    asm("aam 0xd3");
    asm("rcl bl,cl");
    asm("aam 0xd2");
    asm("rcl dl,cl");
    asm("ror ch,1");
    asm("into");
    asm("int 0xcd");
    asm("into");
    asm("int3");
    asm("int 0xcd");
    asm("into");
    asm("into");
    asm("into");
    asm("rcl dx,1");
    asm("rcl dx,cl");
    asm("rcl ah,cl");
    asm("aad 0xd5");
    asm("aad 0xd5");
    asm("aad 0xd4");
    asm("aad 0xd5");
    asm("aad 0xd5");
    asm("salc");
    asm("aam 0xd2");
    asm("rcl cx,1");
    asm("ror di,1");
    asm("iret");
}

/*	Procedure: 0x000088DB - 0x00008909
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000088DB()
{



    asm("rcl dl,1");
    asm("rcl cx,1");
    asm("rcl bx,cl");
    asm("aam 0xd3");
    asm("aad 0xd5");
    asm("aam 0xd5");
    asm("salc");
    asm("aad 0xd6");
    asm("aad 0xd7");
    asm("fcomp st1");
    asm("fcmovu st4");
    asm("Unknown opcode 0xd9");
    asm("fcom st6");
    asm("salc");
    asm("xlatb");
    asm("aam 0xd3");
    asm("xlatb");
    asm("xlatb");
    asm("xlatb");
    asm("Unknown opcode 0xd9");
    asm("fcomp st0");
    asm("aam 0xd2");
    asm("ror bh,cl");
    asm("into");
    asm("int 0xcb");
    asm("int3");
    sp = bp;
    (restore)bp;
    sp = bp;
    (restore)bp;
    asm("retf 0xc8cb");
}

/*	Procedure: 0x0000890A - 0x00008964
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000890A()
{



    asm("enter 0xc9ca,0xc6");
    si = 0xc1c4;
    asm("rol al,0xc0");
    di = 0xbdbd;
    bp = 0xbbbb;
    cx = 0xb8b8;
    bh = 0xb8;
    sp = 0xb9ba;
    dx = 0xb7b8;
    dh = 0xb8;
    dx = 0xbbbb;
    ax = 0xb6b7;
    ah = 0xb4;
    cl = 0xb0;
    eax = *esi;
    esi = esi + 4;
    al = *esi;
    esi = esi + 1;
    eax = *esi;
    esi = esi + 4;
    asm("scasb");
    dl = 0xb4;
    dl = 0xb2;
    cl = 0xb1;
    asm("scasw");
    al = *esi;
    esi = esi + 1;
    eax = *esi;
    esi = esi + 4;
    al = *esi;
    esi = esi + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    asm("cmpsw");
    asm("cmpsb");
    *L00009EA2 = ax;
    L00009a9b();
    ax = L00009c9b();
    al = *L00009FA3;
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("cmpsw");
    *di = al;
    di = di + 1;
    asm("cmpsw");
    al & 0xa6;
    ax & 0xa4a6;
    asm("sahf");
    asm("lahf");
    asm("cbw");
    asm("out dx,ax");
    L00000000();
}

/*	Procedure: 0x000089CB - 0x000089CD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000089CB()
{



}

/*	Procedure: 0x000089CE - 0x000089DE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000089CE()
{



    asm("rol dx,0xc2");
    *(bx + 0xc3c1) = *(bx + 0xc3c1) >> 0xc7;
    asm("enter 0xc9c8,0xc8");
    di = 0xc9c8;
    asm("retf");
}

/*	Procedure: 0x000089DF - 0x000089E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000089DF()
{



    asm("into");
    asm("into");
    asm("int 0xcf");
    asm("iret");
}

/*	Procedure: 0x000089E4 - 0x000089F8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000089E4()
{



    asm("fcomp st2");
    asm("xlatb");
    asm("xlatb");
    asm("xlatb");
    asm("xlatb");
    asm("salc");
    asm("aad 0xd6");
    asm("xlatb");
    asm("aad 0xd3");
    asm("rcl bl,cl");
    asm("rcl bx,1");
    asm("rcl dl,cl");
    asm("ror bh,1");
    asm("retf");
}

/*	Procedure: 0x000089F9 - 0x000089FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000089F9()
{



    asm("retf 0xccca");
}

/*	Procedure: 0x000089FC - 0x000089FE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000089FC()
{



    asm("int 0xcc");
    asm("retf");
}

/*	Procedure: 0x000089FF - 0x00008A46
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000089FF()
{



    asm("int 0xcd");
    asm("int3");
    asm("int 0xcf");
    asm("rcl cx,1");
    asm("rcl bx,cl");
    asm("rcl bl,cl");
    asm("aam 0xd5");
    asm("salc");
    asm("aam 0xd5");
    asm("aad 0xd6");
    asm("aam 0xd3");
    asm("aad 0xd4");
    asm("rcl al,cl");
    asm("rcl al,cl");
    asm("into");
    asm("rcl al,1");
    asm("rcl cl,cl");
    asm("rcl bl,cl");
    asm("aam 0xd3");
    asm("rcl bp,cl");
    asm("aam 0xd5");
    asm("aad 0xd4");
    asm("aam 0xd3");
    asm("xlatb");
    asm("xlatb");
    asm("xlatb");
    asm("Unknown opcode 0xd9");
    asm("fcmovu st2");
    asm("fcom st5");
    asm("aam 0xd5");
    asm("aam 0xd2");
    asm("salc");
    asm("fcomp st2");
    asm("fcmovu st2");
    asm("fcom st7");
    asm("rcl cx,cl");
    asm("ror di,1");
    asm("int3");
    asm("int3");
    asm("into");
    asm("retf 0xc8c8");
}

/*	Procedure: 0x00008A47 - 0x00008A49
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008A47()
{



    asm("retf 0xc7c8");
}

/*	Procedure: 0x00008A4A - 0x00008A4F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008A4A()
{



    asm("Unknown opcode 0xc6");
    asm("enter 0xc5c5,0xc2");
}

/*	Procedure: 0x00008A50 - 0x00008A52
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008A50()
{



}

/*	Procedure: 0x00008A53 - 0x00008AA4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008A53()
{



    di = 0xbdbf;
    bp = 0xbbbd;
    bx = 0xb8b9;
    cx = 0xb8b7;
    cx = 0xbbba;
    cx = 0xbab8;
    ax = 0xb7b6;
    ax = 0xb9ba;
    ax = 0xb6b6;
    ah = 0xb6;
    bl = 0xb1;
    asm("scasw");
    asm("scasb");
    eax = *esi;
    esi = esi + 4;
    asm("scasw");
    cl = 0xb2;
    cl = 0xb2;
    dl = 0xb2;
    asm("scasw");
    al = 0xb0;
    al = 0xb0;
    al = *esi;
    esi = esi + 1;
    *di = al;
    di = di + 1;
    al = *esi;
    esi = esi + 1;
    ax & 0xa4a4;
    ax = *L00009A9E;
    L00009d9c();
    asm("sahf");
    al = *L0000A1A0;
    ax = *L0000A3A2;
    al = *L0000A7A5;
    asm("scasb");
    eax = *esi;
    esi = esi + 4;
    *di = eax;
    di = di + 4;
    eax = *esi;
    esi = esi + 4;
    ax & 0xa0a1;
    asm("pushf");
    asm("cbw");
    asm("out dx,ax");
    asm("cwd");
    ax = *L00000000;
}

/*	Procedure: 0x00008B09 - 0x00008B0B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B09()
{



}

/*	Procedure: 0x00008B0C - 0x00008B0E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B0C()
{



}

/*	Procedure: 0x00008B0F - 0x00008B0F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B0F()
{



}

/*	Procedure: 0x00008B10 - 0x00008B12
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B10()
{



}

/*	Procedure: 0x00008B13 - 0x00008B15
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B13()
{



}

/*	Procedure: 0x00008B16 - 0x00008B18
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B16()
{



    asm("retf 0xcbcb");
}

/*	Procedure: 0x00008B19 - 0x00008B19
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B19()
{



    asm("retf");
}

/*	Procedure: 0x00008B1A - 0x00008B1F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B1A()
{



    sp = bp;
    (restore)bp;
    asm("enter 0xccc8,0xc9");
    asm("retf");
}

/*	Procedure: 0x00008B20 - 0x00008B3A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B20()
{



    asm("int 0xcd");
    asm("rcl bx,1");
    asm("aad 0xd7");
    asm("salc");
    asm("aam 0xd7");
    asm("salc");
    asm("rcl sp,cl");
    asm("salc");
    asm("aam 0xd5");
    asm("rcl cl,cl");
    asm("rcl bx,1");
    asm("rcl dl,1");
    asm("rcl al,1");
    asm("into");
    asm("into");
    asm("int3");
    asm("retf");
}

/*	Procedure: 0x00008B3B - 0x00008B41
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B3B()
{



    asm("into");
    asm("ror ch,1");
    asm("int3");
    asm("int 0xcb");
    asm("retf");
}

/*	Procedure: 0x00008B42 - 0x00008B83
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B42()
{



    asm("int 0xcf");
    asm("rcl ah,cl");
    asm("aam 0xd3");
    asm("aam 0xd1");
    asm("rcl ah,cl");
    asm("aam 0xd4");
    asm("aad 0xd5");
    asm("aam 0xd3");
    asm("rcl bx,cl");
    asm("rcl bx,cl");
    asm("rcl bx,1");
    asm("rcl al,cl");
    asm("ror bh,1");
    asm("rcl dx,1");
    asm("aam 0xd5");
    asm("salc");
    asm("aad 0xd3");
    asm("aam 0xd5");
    asm("salc");
    asm("salc");
    asm("aad 0xd6");
    asm("salc");
    asm("fcomp st1");
    asm("fcmovu st0");
    asm("fcomp st2");
    asm("salc");
    asm("aam 0xd6");
    asm("aam 0xd3");
    asm("aam 0xd8");
    asm("Unknown opcode 0xd9");
    asm("fcomp st3");
    asm("fcmovnu st3");
    asm("Unknown opcode 0xd9");
    asm("aad 0xd1");
    asm("ror di,1");
    asm("retf 0xcbcc");
}

/*	Procedure: 0x00008B84 - 0x00008B8C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B84()
{



    sp = bp;
    (restore)bp;
    asm("Unknown opcode 0xc6");
    sp = bp;
    (restore)bp;
    sp = bp;
    (restore)bp;
    asm("enter 0xc5c6,0xc4");
}

/*	Procedure: 0x00008B8D - 0x00008B8F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B8D()
{



}

/*	Procedure: 0x00008B90 - 0x00008BE4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008B90()
{



    asm("rol al,0xbe");
    si = 0xbcbd;
    bx = 0xbabb;
    ax = 0xb9b8;
    bh = 0xb8;
    ax = 0xbab9;
    bh = 0xb9;
    cx = 0xb9b8;
    dh = 0xb7;
    ax = 0xb9b9;
    cx = 0xb6b7;
    ah = 0xb4;
    bl = 0xb2;
    asm("scasb");
    asm("scasb");
    asm("scasw");
    asm("scasb");
    asm("scasw");
    cl = 0xb1;
    asm("scasw");
    cl = 0xb2;
    cl = 0xb1;
    cl = 0xb0;
    asm("scasb");
    al = *esi;
    esi = esi + 1;
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    al & 0xa3;
    al = *L00009EA1;
    asm("wait");
    L00009e9d();
    asm("sahf");
    *L0000A3A3 = al;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000ABA3 = al;
    al = 0xaf;
    al = *esi;
    esi = esi + 1;
    asm("scasb");
    al & 0xa5;
    al = *L0000989D;
    asm("out dx,ax");
    asm("xchg ax,bp");
    asm("lahf");
}

/*	Procedure: 0x00008C4E - 0x00008C57
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008C4E()
{



    asm("rol ax,0xbd");
    di = 0xc1bd;
    asm("Unknown opcode 0xc5");
    sp = bp;
    (restore)bp;
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00008C58 - 0x00008C5A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008C58()
{



    asm("retf 0xcaca");
}

/*	Procedure: 0x00008C5B - 0x00008C5E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008C5B()
{



    sp = bp;
    (restore)bp;
    asm("retf 0xcbcc");
}

/*	Procedure: 0x00008C5F - 0x00008C70
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008C5F()
{



    asm("int3");
    sp = bp;
    (restore)bp;
    asm("int 0xd0");
    asm("rcl si,cl");
    asm("salc");
    asm("aam 0xd4");
    asm("rcl cx,1");
    asm("rcl cl,cl");
    asm("rcl bl,cl");
    asm("rcl cx,1");
    asm("iret");
}

/*	Procedure: 0x00008C71 - 0x00008C73
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008C71()
{



    asm("rcl cl,1");
    asm("iret");
}

/*	Procedure: 0x00008C74 - 0x00008C75
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008C74()
{



    asm("into");
    asm("iret");
}

/*	Procedure: 0x00008C76 - 0x00008C77
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008C76()
{



    asm("into");
    asm("iret");
}

/*	Procedure: 0x00008C78 - 0x00008C7D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008C78()
{



    asm("int 0xcd");
    asm("int3");
    asm("int 0xcd");
    asm("retf");
}

/*	Procedure: 0x00008C7E - 0x00008C80
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008C7E()
{



    asm("retf 0xcbca");
}

/*	Procedure: 0x00008C81 - 0x00008C8A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008C81()
{



    asm("int3");
    asm("int 0xd2");
    asm("rcl sp,cl");
    asm("rcl ah,cl");
    asm("rcl dx,cl");
    asm("iret");
}

/*	Procedure: 0x00008C8B - 0x00008CC1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008C8B()
{



    asm("rcl bl,cl");
    asm("rcl bx,cl");
    asm("rcl bx,cl");
    asm("rcl cx,cl");
    asm("rcl bl,cl");
    asm("rcl dx,cl");
    asm("rcl dl,cl");
    asm("rcl al,1");
    asm("rcl cl,1");
    asm("rcl bx,1");
    asm("aam 0xd6");
    asm("aad 0xd4");
    asm("aad 0xd6");
    asm("aad 0xd4");
    asm("salc");
    asm("Unknown opcode 0xd9");
    asm("fcom st7");
    asm("Unknown opcode 0xd9");
    asm("fcomp st0");
    asm("aam 0xd4");
    asm("rcl bp,cl");
    asm("aad 0xd5");
    asm("aam 0xd6");
    asm("Unknown opcode 0xd9");
    asm("xlatb");
    asm("Unknown opcode 0xd9");
    asm("fcmovu st2");
    asm("Unknown opcode 0xdc");
    asm("fcmovnbe st4");
    asm("ror dh,cl");
    asm("into");
    asm("retf");
}

/*	Procedure: 0x00008CC2 - 0x00008CCB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008CC2()
{



    sp = bp;
    (restore)bp;
    sp = bp;
    (restore)bp;
    si = 0xc7c6;
    ch = 0xc3;
}

/*	Procedure: 0x00008CCC - 0x00008CCC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008CCC()
{



}

/*	Procedure: 0x00008CCD - 0x00008CCF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008CCD()
{



}

/*	Procedure: 0x00008CD0 - 0x00008D24
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008CD0()
{



    *(bx + 0xbcbd) = *(bx + 0xbcbd) >> 0xbc;
    sp = 0xbcbc;
    dx = 0xb6b7;
    cx = 0xb8b8;
    dx = 0xb7ba;
    bh = 0xb6;
    ax = 0xb4b8;
    ch = 0xb7;
    ch = 0xb6;
    bh = 0xb8;
    bh = 0xb6;
    ah = 0xb3;
    bl = 0xb2;
    eax = *esi;
    esi = esi + 4;
    al = 0xb0;
    cl = 0xb0;
    bl = 0xb0;
    asm("scasw");
    al = 0xb2;
    cl = 0xb3;
    bl = 0xb1;
    asm("scasw");
    asm("scasb");
    *di = eax;
    di = di + 4;
    al = *esi;
    esi = esi + 1;
    ax & 0xa1a4;
    *L00009BA0 = al;
    asm("cwd");
    asm("pushf");
    asm("sahf");
    asm("sahf");
    asm("pushf");
    asm("popf");
    *L0000A5A1 = ax;
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("cmpsw");
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("cmpsb");
    ax & 0xaeaa;
    asm("scasw");
    *di = al;
    di = di + 1;
    eax = *esi;
    esi = esi + 4;
    *di = eax;
    di = di + 4;
    asm("cmpsw");
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("lahf");
    asm("cwd");
    asm("out dx,ax");
    asm("xchg ax,si");
    asm("pushf");
}

/*	Procedure: 0x00008D8E - 0x00008D9C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008D8E()
{



    si = 0xbabb;
    sp = 0xc3bc;
    asm("Unknown opcode 0xc5");
    asm("Unknown opcode 0xc7");
    asm("enter 0xc9c7,0xca");
    asm("retf 0xcace");
}

/*	Procedure: 0x00008D9D - 0x00008DA2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008D9D()
{



    asm("int3");
    asm("int 0xca");
    sp = bp;
    (restore)bp;
    sp = bp;
    (restore)bp;
    asm("iret");
}

/*	Procedure: 0x00008DA3 - 0x00008DA7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008DA3()
{



    asm("rcl sp,cl");
    asm("aam 0xd4");
    asm("iret");
}

/*	Procedure: 0x00008DA8 - 0x00008DA8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008DA8()
{



    asm("iret");
}

/*	Procedure: 0x00008DA9 - 0x00008DAF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008DA9()
{



    asm("into");
    asm("ror bh,1");
    asm("ror si,1");
    asm("into");
    asm("iret");
}

/*	Procedure: 0x00008DB0 - 0x00008DB0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008DB0()
{



    asm("iret");
}

/*	Procedure: 0x00008DB1 - 0x00008DB7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008DB1()
{



    asm("int 0xd0");
    asm("int3");
    asm("int 0xc9");
    asm("int3");
    asm("retf");
}

/*	Procedure: 0x00008DB8 - 0x00008DBF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008DB8()
{



    asm("int3");
    asm("int 0xcc");
    asm("int3");
    asm("int3");
    asm("retf 0xcac9");
}

/*	Procedure: 0x00008DC0 - 0x00008DC0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008DC0()
{



    asm("retf");
}

/*	Procedure: 0x00008DC1 - 0x00008DC1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008DC1()
{



    asm("retf");
}

/*	Procedure: 0x00008DC2 - 0x00008DCA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008DC2()
{



    asm("int 0xcf");
    asm("rcl ax,1");
    asm("rcl dx,1");
    asm("ror di,1");
    asm("iret");
}

/*	Procedure: 0x00008DCB - 0x00008DCB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008DCB()
{



    asm("iret");
}

/*	Procedure: 0x00008DCC - 0x00008E04
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008DCC()
{



    asm("rcl cl,cl");
    asm("rcl cx,1");
    asm("rcl cx,cl");
    asm("rcl dl,1");
    asm("rcl dx,cl");
    asm("rcl dx,1");
    asm("ror bh,1");
    asm("rcl cl,1");
    asm("rcl cl,cl");
    asm("rcl bp,cl");
    asm("salc");
    asm("salc");
    asm("aad 0xd6");
    asm("aad 0xd3");
    asm("aad 0xd7");
    asm("fcmovnu st1");
    asm("fcom st7");
    asm("fcom st4");
    asm("aam 0xd2");
    asm("rcl ch,cl");
    asm("salc");
    asm("aad 0xd8");
    asm("fcom st7");
    asm("fcomp st0");
    asm("fcomp st2");
    asm("fcmovnu st2");
    asm("xlatb");
    asm("rcl ax,1");
    asm("int3");
    sp = bp;
    (restore)bp;
    asm("retf 0xc7c9");
}

/*	Procedure: 0x00008E05 - 0x00008E0B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008E05()
{



    asm("Unknown opcode 0xc5");
    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc5");
    return(0xc4);
}

/*	Procedure: 0x00008E0C - 0x00008E0E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008E0C()
{



}

/*	Procedure: 0x00008E0F - 0x00008E64
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008E0F()
{



    di = 0xbcbd;
    dx = 0xbcbd;
    bx = 0xbaba;
    ax = 0xb7b6;
    cx = 0xb9b7;
    ax = 0xb8ba;
    ch = 0xb6;
    bh = 0xb5;
    ah = 0xb2;
    dh = 0xb4;
    bl = 0xb6;
    ax = 0xb6b8;
    bl = 0xb4;
    cl = 0xb0;
    asm("scasw");
    dl = 0xb3;
    dl = 0xb2;
    cl = 0xaf;
    asm("scasb");
    al = 0xb1;
    dl = 0xb4;
    cl = 0xb1;
    0xa8;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 4;
    si = si + 4;
    al = *L0000A09E;
    *L0000A1A3 = al;
    ax = *L0000A3A1;
    *L0000A6A5 = ax;
    asm("cmpsw");
    asm("cmpsw");
    ax & 0xacae;
    eax = *esi;
    esi = esi + 4;
    *di = al;
    di = di + 1;
    al & 0xaa;
    ax & 0xa7a8;
    *L0000EF9A = al;
    asm("xchg ax,di");
    asm("sahf");
}

/*	Procedure: 0x00008EF5 - 0x00008EF9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008EF5()
{



    sp = bp;
    (restore)bp;
    asm("Unknown opcode 0xc7");
    sp = bp;
    (restore)bp;
    asm("int3");
    asm("retf");
}

/*	Procedure: 0x00008EFA - 0x00008EFC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008EFA()
{



    asm("retf 0xcdcb");
}

/*	Procedure: 0x00008EFD - 0x00008EFF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008EFD()
{



    asm("retf 0xcbc9");
}

/*	Procedure: 0x00008F00 - 0x00008F00
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008F00()
{



    asm("retf");
}

/*	Procedure: 0x00008F01 - 0x00008F05
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008F01()
{



    asm("int3");
    asm("int3");
    asm("int 0xcd");
    asm("iret");
}

/*	Procedure: 0x00008F06 - 0x00008F06
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008F06()
{



    asm("iret");
}

/*	Procedure: 0x00008F07 - 0x00008F0D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008F07()
{



    asm("rcl cl,cl");
    asm("ror dh,1");
    asm("ror bh,1");
    asm("iret");
}

/*	Procedure: 0x00008F0E - 0x00008F0F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008F0E()
{



    asm("into");
    asm("iret");
}

/*	Procedure: 0x00008F10 - 0x00008F18
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008F10()
{



    asm("ror di,1");
    asm("rcl dl,1");
    asm("rcl cl,cl");
    asm("ror bh,1");
    asm("iret");
}

/*	Procedure: 0x00008F19 - 0x00008F19
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008F19()
{



    asm("iret");
}

/*	Procedure: 0x00008F1A - 0x00008F40
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008F1A()
{



    asm("rcl al,1");
    asm("rcl dx,1");
    asm("rcl bp,cl");
    asm("salc");
    asm("aam 0xd5");
    asm("salc");
    asm("aam 0xd5");
    asm("aad 0xd6");
    asm("Unknown opcode 0xd9");
    asm("xlatb");
    asm("xlatb");
    asm("aad 0xd6");
    asm("aad 0xd3");
    asm("aad 0xd3");
    asm("rcl bx,cl");
    asm("rcl bp,cl");
    asm("salc");
    asm("Unknown opcode 0xd9");
    asm("xlatb");
    asm("salc");
    asm("fcomp st0");
    asm("fcom st5");
    asm("rcl ax,cl");
    asm("into");
    asm("retf");
}

/*	Procedure: 0x00008F41 - 0x00008F48
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008F41()
{



    di = 0xc5c6;
    asm("Unknown opcode 0xc4");
}

/*	Procedure: 0x00008F49 - 0x00008F4A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008F49()
{



    asm("Unknown opcode 0xc4");
}

/*	Procedure: 0x00008F4B - 0x00008F4B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008F4B()
{



}

/*	Procedure: 0x00008F4C - 0x00008F4E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008F4C()
{



}

/*	Procedure: 0x00008F4F - 0x00008FA4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008F4F()
{



    bp = 0xbabc;
    bx = 0xbbbb;
    cx = 0xb8b9;
    bh = 0xb7;
    ax = 0xb7b7;
    ax = 0xb8b8;
    bh = 0xb5;
    bl = 0xb6;
    dh = 0xb3;
    bl = 0xb4;
    dl = 0xb2;
    bl = 0xb4;
    dh = 0xb4;
    bl = 0xb1;
    dl = 0xb0;
    asm("scasb");
    cl = 0xb1;
    al = 0xb2;
    dl = 0xb0;
    asm("scasw");
    al = 0xb2;
    dl = 0xb2;
    al = 0xaf;
    asm("scasb");
    al = *esi;
    esi = esi + 1;
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    ax & 0xa5a7;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 1;
    si = si + 1;
    al = *L0000A59F;
    *L0000A4A1 = al;
    *L0000A2A2 = al;
    asm("cmpsw");
    al & 0xa9;
    *di = al;
    di = di + 1;
    al = *esi;
    esi = esi + 1;
    asm("scasb");
    eax = *esi;
    esi = esi + 4;
    ax & 0xa5a7;
    *di = eax;
    di = di + 4;
    asm("cmpsw");
    asm("cmpsw");
    asm("cmpsw");
    *di = *si;
    di = di + 1;
    si = si + 1;
    L0000009c();
}

/*	Procedure: 0x00009017 - 0x0000901B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009017()
{



    asm("Unknown opcode 0xc5");
    asm("Unknown opcode 0xc7");
    sp = bp;
    (restore)bp;
    asm("Unknown opcode 0xc7");
    asm("retf");
}

/*	Procedure: 0x0000901C - 0x0000902F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000901C()
{



    asm("int 0xc7");
    asm("enter 0xc7c9,0xc7");
    asm("int3");
    asm("ror dh,1");
    asm("int 0xce");
    asm("int 0xcc");
    asm("int3");
    asm("int 0xcf");
    asm("into");
    asm("retf 0xceca");
}

/*	Procedure: 0x00009030 - 0x00009034
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009030()
{



    asm("into");
    sp = bp;
    (restore)bp;
    asm("retf 0xc9ca");
}

/*	Procedure: 0x00009035 - 0x00009036
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009035()
{



    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00009037 - 0x00009037
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009037()
{



    asm("retf");
}

/*	Procedure: 0x00009038 - 0x0000903A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009038()
{



    asm("int 0xcc");
    asm("retf");
}

/*	Procedure: 0x0000903B - 0x0000903D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000903B()
{



    asm("int 0xcc");
    asm("retf");
}

/*	Procedure: 0x0000903E - 0x00009041
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000903E()
{



    asm("int3");
    asm("retf 0xcdcb");
}

/*	Procedure: 0x00009042 - 0x00009043
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009042()
{



    asm("int3");
    asm("retf");
}

/*	Procedure: 0x00009044 - 0x00009044
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009044()
{



    asm("retf");
}

/*	Procedure: 0x00009045 - 0x00009047
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009045()
{



    asm("int 0xcf");
    asm("iret");
}

/*	Procedure: 0x00009048 - 0x00009052
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009048()
{



    asm("rcl al,cl");
    asm("ror si,1");
    asm("int 0xcc");
    asm("int 0xce");
    asm("into");
    asm("into");
    asm("iret");
}

/*	Procedure: 0x00009053 - 0x00009055
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009053()
{



    asm("rcl cx,1");
    asm("iret");
}

/*	Procedure: 0x00009056 - 0x00009087
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009056()
{



    asm("into");
    asm("int 0xce");
    asm("rcl al,1");
    asm("rcl dx,1");
    asm("rcl dl,1");
    asm("salc");
    asm("salc");
    asm("aad 0xd5");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("salc");
    asm("xlatb");
    asm("xlatb");
    asm("salc");
    asm("xlatb");
    asm("salc");
    asm("aam 0xd3");
    asm("rcl cx,cl");
    asm("rcl ax,1");
    asm("rcl bx,cl");
    asm("aam 0xd5");
    asm("salc");
    asm("xlatb");
    asm("aad 0xd6");
    asm("aad 0xd3");
    asm("ror bh,cl");
    asm("into");
    sp = bp;
    (restore)bp;
    ah = 0xc4;
    asm("Unknown opcode 0xc4");
}

/*	Procedure: 0x00009088 - 0x0000908A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009088()
{



}

/*	Procedure: 0x0000908B - 0x0000908B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000908B()
{



}

/*	Procedure: 0x0000908C - 0x000090E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000908C()
{



    *(bp + 0xbcbd) = *(bp + 0xbcbd) >> 0xbb;
    dx = 0xbbb9;
    dx = 0xb7b9;
    ax = 0xb8b9;
    ax = 0xb6b9;
    ax = 0xb7b7;
    bh = 0xb6;
    ah = 0xb4;
    ah = 0xb2;
    cl = 0xb3;
    dl = 0xb2;
    bl = 0xb3;
    bl = 0xb2;
    al = 0xaf;
    cl = 0xae;
    asm("scasb");
    asm("scasb");
    al = 0xae;
    asm("scasw");
    dl = 0xb0;
    asm("scasw");
    cl = 0xb1;
    cl = 0xaf;
    asm("scasw");
    asm("scasb");
    al = *esi;
    esi = esi + 1;
    eax = *esi;
    esi = esi + 4;
    eax = *esi;
    esi = esi + 4;
    asm("scasb");
    al = *esi;
    esi = esi + 1;
    ax & 0xa5a6;
    asm("cmpsb");
    *L0000A2A0 = al;
    asm("cmpsb");
    *L0000A5A4 = al;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *L0000A8A5 & 0xafaa;
    al = 0xae;
    *di = 0xae;
    di = di + 1;
    asm("cmpsw");
    al & 0xa9;
    asm("cmpsb");
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("cmpsb");
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("wait");
    asm("out dx,ax");
    asm("xchg ax,si");
    asm("cbw");
}

/*	Procedure: 0x0000915D - 0x00009160
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000915D()
{



    bh = 0xc8;
    asm("retf");
}

/*	Procedure: 0x00009161 - 0x00009172
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009161()
{



    asm("enter 0xcdcb,0xcd");
    sp = bp;
    (restore)bp;
    asm("int3");
    asm("int3");
    sp = bp;
    (restore)bp;
    asm("int3");
    asm("into");
    asm("int3");
    asm("int3");
    dh = 0xc8;
    asm("retf 0xc5c7");
}

/*	Procedure: 0x00009173 - 0x00009175
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009173()
{



    asm("Unknown opcode 0xc6");
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00009176 - 0x00009178
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009176()
{



    asm("retf 0xcfcd");
}

/*	Procedure: 0x00009179 - 0x00009186
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009179()
{



    asm("int 0xcd");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int 0xcd");
    asm("int3");
    asm("into");
    asm("int 0xcc");
    asm("int 0xcc");
    asm("iret");
}

/*	Procedure: 0x00009187 - 0x00009192
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009187()
{



    asm("rcl cx,1");
    asm("rcl dx,1");
    asm("ror si,1");
    asm("int 0xcc");
    asm("int3");
    asm("retf 0xccca");
}

/*	Procedure: 0x00009193 - 0x000091C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009193()
{



    asm("into");
    asm("into");
    asm("into");
    asm("int 0xce");
    asm("into");
    asm("int 0xcf");
    asm("rcl bl,cl");
    asm("aam 0xd3");
    asm("aad 0xd6");
    asm("aam 0xd6");
    asm("fcmovnu st2");
    asm("fcmovu st3");
    asm("fcmovu st2");
    asm("salc");
    asm("Unknown opcode 0xd9");
    asm("Unknown opcode 0xd9");
    asm("Unknown opcode 0xd9");
    asm("xlatb");
    asm("aad 0xd4");
    asm("aam 0xd3");
    asm("rcl sp,cl");
    asm("aam 0xd2");
    asm("rcl sp,1");
    asm("aad 0xd2");
    asm("rcl dx,1");
    asm("rcl cl,cl");
    asm("int 0xcb");
    return(0xc2);
}

/*	Procedure: 0x000091C4 - 0x000091C6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000091C4()
{



}

/*	Procedure: 0x000091C7 - 0x00009224
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000091C7()
{



    asm("rol cx,0xc1");
    asm("rol al,0xbd");
    sp = 0xbabb;
    dx = 0xb9b9;
    dx = 0xb8ba;
    cx = 0xb9b9;
    bh = 0xb7;
    bh = 0xb7;
    bh = 0xb7;
    bh = 0xb6;
    ch = 0xb4;
    ah = 0xb4;
    cl = 0xb1;
    bl = 0xb2;
    dl = 0xb3;
    ah = 0xb3;
    dl = 0xb1;
    al = 0xb0;
    asm("scasb");
    al = *esi;
    esi = esi + 1;
    eax = *esi;
    esi = esi + 4;
    asm("scasb");
    eax = *esi;
    esi = esi + 4;
    asm("scasb");
    asm("scasw");
    al = 0xae;
    asm("scasw");
    asm("scasw");
    asm("scasw");
    al = *esi;
    esi = esi + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    al = *esi;
    esi = esi + 1;
    al = *esi;
    esi = esi + 1;
    al = *esi;
    esi = esi + 1;
    asm("cmpsb");
    asm("cmpsb");
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 1;
    si = si + 1;
    ax = *L0000A3A4;
    *L0000A5A4 = ax;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A5A4 = al;
    al & 0xa8;
    *di = *L0000A5A4;
    di = di + 4;
    asm("scasw");
    eax = *esi;
    esi = esi + 4;
    *di = al;
    di = di + 1;
    *di = eax;
    di = di + 4;
    ax & 0xa9ad;
    asm("cmpsb");
    asm("cmpsb");
    *L0000EF9C = ax;
    asm("xchg ax,bp");
    asm("xchg ax,di");
}

/*	Procedure: 0x000092A1 - 0x000092A1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092A1()
{



    asm("retf");
}

/*	Procedure: 0x000092A2 - 0x000092A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092A2()
{



    asm("retf 0xcdca");
}

/*	Procedure: 0x000092A5 - 0x000092A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092A5()
{



    asm("retf 0xc9c9");
}

/*	Procedure: 0x000092A8 - 0x000092A8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092A8()
{



    asm("retf");
}

/*	Procedure: 0x000092A9 - 0x000092A9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092A9()
{



    asm("retf");
}

/*	Procedure: 0x000092AA - 0x000092AC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092AA()
{



    asm("retf 0xc8ca");
}

/*	Procedure: 0x000092AD - 0x000092B8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092AD()
{



    dh = 0xc7;
    sp = 0xc5c3;
    asm("enter 0xcaca,0xcc");
    asm("iret");
}

/*	Procedure: 0x000092B9 - 0x000092B9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092B9()
{



    asm("iret");
}

/*	Procedure: 0x000092BA - 0x000092BE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092BA()
{



    asm("int 0xcd");
    asm("int 0xcb");
    asm("iret");
}

/*	Procedure: 0x000092BF - 0x000092BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092BF()
{



    asm("iret");
}

/*	Procedure: 0x000092C0 - 0x000092C4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092C0()
{



    asm("ror bh,1");
    asm("rcl al,1");
    asm("iret");
}

/*	Procedure: 0x000092C5 - 0x000092C5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092C5()
{



    asm("iret");
}

/*	Procedure: 0x000092C6 - 0x000092C6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092C6()
{



    asm("iret");
}

/*	Procedure: 0x000092C7 - 0x000092CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092C7()
{



    asm("rcl sp,cl");
    asm("rcl dx,cl");
    asm("ror di,1");
    asm("int 0xcc");
    asm("retf");
}

/*	Procedure: 0x000092D0 - 0x000092FA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092D0()
{



    asm("int 0xcb");
    asm("int 0xd0");
    asm("rcl al,1");
    asm("rcl cl,1");
    asm("rcl ax,1");
    asm("rcl dl,1");
    asm("aad 0xd3");
    asm("rcl sp,cl");
    asm("salc");
    asm("xlatb");
    asm("fcomp st5");
    asm("Unknown opcode 0xde");
    asm("fcmovu st2");
    asm("Unknown opcode 0xdc");
    st4 = (frestore);
    asm("Unknown opcode 0xd9");
    asm("fcmovu st1");
    asm("aam 0xd6");
    asm("salc");
    asm("aam 0xd1");
    asm("rcl bx,1");
    asm("rcl dx,cl");
    asm("rcl bx,cl");
    asm("rcl cx,cl");
    asm("iret");
}

/*	Procedure: 0x000092FB - 0x000092FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092FB()
{



    asm("iret");
}

/*	Procedure: 0x000092FC - 0x000092FC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092FC()
{



    asm("iret");
}

/*	Procedure: 0x000092FD - 0x00009364
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000092FD()
{



    asm("into");
    sp = bp;
    (restore)bp;
    ah = 0xc2;
    asm("rol cl,0xc1");
    asm("rol al,0xc1");
    *(bx + 0xbebf) = *(bx + 0xbebf) >> 0xbd;
    sp = 0xbabb;
    cx = 0xb8b8;
    dx = 0xb9b9;
    ax = 0xb9b8;
    dh = 0xb6;
    bh = 0xb5;
    dh = 0xb5;
    bh = 0xb6;
    ch = 0xb4;
    dl = 0xb2;
    al = 0xb0;
    cl = 0xb3;
    dl = 0xb2;
    dl = 0xb3;
    asm("scasw");
    asm("scasw");
    al = 0xb0;
    al = *esi;
    esi = esi + 1;
    eax = *esi;
    esi = esi + 4;
    *di = eax;
    di = di + 4;
    al = *esi;
    esi = esi + 1;
    *di = eax;
    di = di + 4;
    eax = *esi;
    esi = esi + 4;
    al = *esi;
    esi = esi + 1;
    asm("scasb");
    al = *esi;
    esi = esi + 1;
    eax = *esi;
    esi = esi + 4;
    asm("scasb");
    asm("scasb");
    ax & 0xa9a8;
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    al = *esi;
    esi = esi + 1;
    al = *esi;
    esi = esi + 1;
    asm("cmpsb");
    *L0000A3A4 = ax;
    *L0000A3A3 = al;
    ax = *L0000A59F;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A3A2 = al;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("cmpsw");
    asm("cmpsw");
    *di = eax;
    di = di + 4;
    ax & 0xa8a7;
    *di = al;
    di = di + 1;
    asm("cmpsw");
    al & 0xa5;
    *L0000EF98 = ax;
    asm("xchg ax,di");
    asm("cbw");
}

/*	Procedure: 0x000093D6 - 0x000093EE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000093D6()
{



    si = 0xc4c8;
    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc5");
    bl = 0xc6;
    asm("enter 0xc7cc,0xc9");
    asm("enter 0xc8ca,0xc7");
    di = 0xc6c7;
    dh = 0xc4;
}

/*	Procedure: 0x000093EF - 0x000093F8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000093EF()
{



    ch = 0xc4;
    bh = 0xc7;
    sp = bp;
    (restore)bp;
    asm("retf 0xcdcb");
}

/*	Procedure: 0x000093F9 - 0x000093F9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000093F9()
{



    asm("iret");
}

/*	Procedure: 0x000093FA - 0x000093FA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000093FA()
{



    asm("iret");
}

/*	Procedure: 0x000093FB - 0x000093FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000093FB()
{



    asm("iret");
}

/*	Procedure: 0x000093FC - 0x00009400
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000093FC()
{



    asm("int3");
    asm("into");
    asm("rcl dl,1");
    asm("iret");
}

/*	Procedure: 0x00009401 - 0x0000940F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009401()
{



    asm("rcl bl,1");
    asm("rcl al,cl");
    asm("ror bh,1");
    asm("rcl bl,1");
    asm("rcl cl,cl");
    asm("ror si,1");
    asm("retf 0xcbca");
}

/*	Procedure: 0x00009410 - 0x00009410
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009410()
{



    asm("retf");
}

/*	Procedure: 0x00009411 - 0x00009411
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009411()
{



    asm("retf");
}

/*	Procedure: 0x00009412 - 0x00009412
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009412()
{



    asm("retf");
}

/*	Procedure: 0x00009413 - 0x00009416
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009413()
{



    asm("into");
    asm("ror bh,1");
    asm("iret");
}

/*	Procedure: 0x00009417 - 0x0000943B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009417()
{



    asm("rcl cx,1");
    asm("aam 0xd4");
    asm("Unknown opcode 0xd9");
    asm("fcmovu st1");
    asm("aam 0xd8");
    asm("fcmovnu st6");
    asm("Unknown opcode 0xdf");
    asm("loop 0x9409");
    asm("in al,0xdd");
    asm("loop 0x940d");
    asm("loop 0x940a");
    asm("Unknown opcode 0xde");
    asm("fcmovnu st3");
    asm("fsubr st1");
    st0 = (frestore);
    asm("aad 0xd8");
    asm("rcl si,cl");
    asm("xlatb");
    asm("salc");
    asm("salc");
    asm("rcl ax,cl");
    asm("iret");
}

/*	Procedure: 0x0000943C - 0x00009446
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000943C()
{



    asm("ror dl,1");
    asm("Unknown opcode 0xc7");
    sp = bp;
    (restore)bp;
    asm("enter 0xc5c6,0xc6");
}

/*	Procedure: 0x00009447 - 0x00009449
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009447()
{



}

/*	Procedure: 0x0000944A - 0x000094A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000944A()
{



    di = 0xc0c0;
    bp = 0xbcbc;
    sp = 0xbcbb;
    bx = 0xbabb;
    cx = 0xbbba;
    dx = 0xb9b7;
    ax = 0xb7b6;
    ax = 0xb6b7;
    ch = 0xb3;
    dl = 0xb3;
    cl = 0xb3;
    bl = 0xb4;
    dl = 0xb6;
    ah = 0xb4;
    dl = 0xb3;
    al = 0xad;
    eax = *esi;
    esi = esi + 4;
    eax = *esi;
    esi = esi + 4;
    *L0000C0C0 = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    al = *esi;
    esi = esi + 1;
    al = *esi;
    esi = esi + 1;
    al = *esi;
    esi = esi + 1;
    eax = *esi;
    esi = esi + 4;
    al = *esi;
    esi = esi + 1;
    al = *esi;
    esi = esi + 1;
    ax & 0xa9a9;
    *di = al;
    di = di + 1;
    ax & 0xabaa;
    al = *esi;
    esi = esi + 1;
    ax & 0xa7a8;
    asm("cmpsb");
    asm("cmpsw");
    *di = *si;
    di = di + 1;
    si = si + 1;
    *L0000A1A3 = al;
    ax = *L0000A8A7;
    asm("cmpsb");
    al & 0xab;
    ax & 0xa4a4;
    ax & 0xaca9;
    *di = al;
    di = di + 1;
    *di = eax;
    di = di + 4;
    eax = *esi;
    esi = esi + 4;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = eax;
    di = di + 4;
    *L0000EF9C = al;
    asm("sahf");
    asm("pushf");
}

/*	Procedure: 0x0000951C - 0x00009522
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000951C()
{



    asm("rol al,0xc1");
    asm("Unknown opcode 0xc7");
    asm("retf 0xc7c7");
}

/*	Procedure: 0x00009523 - 0x0000952A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009523()
{



    bp = 0xc5c4;
    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc5");
    asm("Unknown opcode 0xc5");
}

/*	Procedure: 0x0000952B - 0x00009530
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000952B()
{



    asm("rol cx,0xc1");
}

/*	Procedure: 0x00009531 - 0x0000953C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009531()
{



    asm("Unknown opcode 0xc4");
    ah = 0xc6;
    asm("Unknown opcode 0xc7");
    asm("enter 0xcac9,0xcd");
    asm("int 0xce");
    asm("iret");
}

/*	Procedure: 0x0000953D - 0x0000954D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000953D()
{



    asm("into");
    asm("ror bh,1");
    asm("into");
    asm("rcl al,1");
    asm("rcl bx,cl");
    asm("rcl cx,1");
    asm("rcl dl,cl");
    asm("rcl ax,1");
    asm("into");
    asm("int3");
    asm("retf");
}

/*	Procedure: 0x0000954E - 0x00009554
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000954E()
{



    sp = bp;
    (restore)bp;
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int 0xcd");
    asm("iret");
}

/*	Procedure: 0x00009555 - 0x00009555
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009555()
{



    asm("iret");
}

/*	Procedure: 0x00009556 - 0x00009556
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009556()
{



    asm("iret");
}

/*	Procedure: 0x00009557 - 0x000095E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009557()
{



    asm("rcl ah,cl");
    asm("rcl si,cl");
    asm("fcmovnu st2");
    asm("fcomp st2");
    asm("fcmovu st6");
    asm("loope 0x9543");
    asm("out 0xe8,al");
    asm("in ax,0xe5");
    asm("in al,0xe6");
    asm("in ax,0xe2");
    asm("loopne 0x954f");
    asm("Unknown opcode 0xdf");
    asm("in al,0xe3");
    asm("Unknown opcode 0xdf");
    asm("fcmovnu st1");
    asm("salc");
    asm("fcmovu st2");
    asm("fcomp st4");
    asm("fcom st1");
    asm("rcl al,cl");
    asm("int 0xc9");
    asm("enter 0xc6cb,0xc7");
    dh = 0xc7;
    asm("Unknown opcode 0xc4");
    asm("rol dx,0xc2");
    asm("rol cx,0xc0");
    di = 0xbcbe;
    sp = 0xbebd;
    sp = 0xbcbb;
    bx = 0xbaba;
    sp = 0xbaba;
    dx = 0xb7b8;
    bh = 0xb7;
    bh = 0xb5;
    bl = 0xb1;
    dl = 0xb0;
    cl = 0xb3;
    ah = 0xb2;
    ch = 0xb4;
    ah = 0xb2;
    ah = 0xb2;
    cl = 0xae;
    al = *esi;
    esi = esi + 1;
    *L0000BCBE = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    al & 0xa9;
    *di = al;
    di = di + 1;
    *di = eax;
    di = di + 4;
    ax & 0xa9ab;
    ax & 0xa6a7;
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("cmpsw");
    *di = eax;
    di = di + 4;
    al = *esi;
    esi = esi + 1;
    asm("scasb");
    cl = 0xad;
    al = *esi;
    esi = esi + 1;
    asm("scasb");
    al = *esi;
    esi = esi + 1;
    al = *esi;
    esi = esi + 1;
    asm("cmpsw");
    asm("cmpsw");
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *L0000ACA9 = ax;
    al = *esi;
    esi = esi + 1;
    asm("scasb");
    al = 0xaf;
    asm("scasb");
    al = *esi;
    esi = esi + 1;
    eax = *esi;
    esi = esi + 4;
    al = 0xb0;
    cl = 0xb3;
    bl = 0xaf;
    asm("scasw");
    al = *esi;
    esi = esi + 1;
    asm("cmpsw");
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("out dx,ax");
    *L0000009F = ax;
}

/*	Procedure: 0x0000966C - 0x00009671
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000966C()
{



    asm("rol dx,0xc2");
}

/*	Procedure: 0x00009672 - 0x0000967B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009672()
{



    dh = 0xc5;
    asm("enter 0xc9c7,0xc8");
    asm("retf 0xcdcb");
}

/*	Procedure: 0x0000967C - 0x0000967C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000967C()
{



    asm("iret");
}

/*	Procedure: 0x0000967D - 0x00009680
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000967D()
{



    asm("into");
    asm("retf 0xcccd");
}

/*	Procedure: 0x00009681 - 0x0000968D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009681()
{



    asm("int3");
    asm("into");
    asm("aam 0xd2");
    asm("rcl cx,cl");
    asm("rcl ax,1");
    asm("ror bp,1");
    asm("int 0xcd");
    asm("retf");
}

/*	Procedure: 0x0000968E - 0x0000968F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000968E()
{



    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00009690 - 0x00009692
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009690()
{



    asm("retf 0xcbcb");
}

/*	Procedure: 0x00009693 - 0x00009695
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009693()
{



    asm("int 0xcd");
    asm("iret");
}

/*	Procedure: 0x00009696 - 0x000096BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00009696()
{



    asm("rcl bx,1");
    asm("rcl sp,cl");
    asm("aad 0xda");
    asm("Unknown opcode 0xd9");
    asm("fcmovnu st3");
    asm("Unknown opcode 0xde");
    asm("fsubrp st0");
    asm("in al,0xe7");
    asm("out 0xeb,ax");
    asm("out 0xe9,al");
    L00007E91();
    asm("in ax,0xe3");
    L00007D93();
    asm("loope 0x9690");
    asm("fcmovu st6");
    asm("Unknown opcode 0xdc");
    asm("Unknown opcode 0xdc");
    st2 = (frestore);
    asm("Unknown opcode 0xd9");
    asm("aam 0xd1");
    asm("ror dl,1");
    asm("retf 0xc8cc");
}

/*	Procedure: 0x000096C0 - 0x000096C0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000096C0()
{



    asm("retf");
}

/*	Procedure: 0x000096C1 - 0x000096C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000096C1()
{



    asm("retf 0xcac9");
}

/*	Procedure: 0x000096C4 - 0x000096C4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000096C4()
{



    asm("retf");
}

/*	Procedure: 0x000096C5 - 0x000096CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000096C5()
{



    asm("enter 0xc3c4,0xc2");
}

/*	Procedure: 0x000096CC - 0x00009724
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000096CC()
{



    di = 0xbebd;
    bp = 0xbdbe;
    bp = 0xbcbd;
    bx = 0xc0ba;
    asm("rol al,0xc1");
    si = 0xb7b8;
    dh = 0xb6;
    ch = 0xb4;
    dl = 0xb1;
    cl = 0xb0;
    asm("scasw");
    dl = 0xb3;
    ah = 0xb4;
    ch = 0xb2;
    dl = 0xb1;
    cl = 0xb0;
    asm("scasb");
    *di = al;
    di = di + 1;
    *di = eax;
    di = di + 4;
    ax & 0xa8a9;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    al & 0xa7;
    al & 0xa7;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    al & 0xab;
    eax = *esi;
    esi = esi + 4;
    al = *esi;
    esi = esi + 1;
    asm("scasw");
    asm("scasb");
    *di = eax;
    di = di + 4;
    eax = *esi;
    esi = esi + 4;
    al = 0xb0;
    asm("scasb");
    eax = *esi;
    esi = esi + 4;
    *di = eax;
    di = di + 4;
    asm("cmpsb");
    *L0000A8A6 = ax;
    asm("scasb");
    al = 0xb0;
    al = 0xb2;
    asm("scasw");
    cl = 0xb1;
    asm("scasb");
    cl = 0xb1;
    cl = 0xb4;
    0xa5;
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("out dx,ax");
    *di = *si;
    di = di + 1;
    si = si + 1;
    al = *L00000000;
}

/*	Procedure: 0x0000BD6C - 0x0000C1BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000BD6C()
{



    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    ch = ch + bh + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh + bh + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    ch = ch + bh;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    ch = ch + bh;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ch = ch + bh;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("std");
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
