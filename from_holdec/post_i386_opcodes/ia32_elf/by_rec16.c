/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_holdec/post_i386_opcodes/ia32_elf/subject.exe'
 */

/*	Procedure: 0x08048274 - 0x080482A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_init()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L08048280();
    (restore)ebx;
    if(*(ebx + 61652 + -4) != 0) {
        L080482B4();
    }
    frame_dummy();
    __do_global_ctors_aux();
    (restore)eax;
}

/*	Procedure: 0x080482A4 - 0x080482B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482A4()
{



    (save) *L08057358;
    goto ( *L0805735c);
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 080482bf -> 080482a4 */
/*	Procedure: 0x080482B4 - 0x080482C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482B4()
{



    goto ( *L08057360);
    (save)0;
    goto L080482A4;
}

/* DEST BLOCK NOT FOUND: 080482cf -> 080482a4 */
/*	Procedure: 0x080482C4 - 0x080482D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482C4()
{



    goto ( *L08057364);
    (save)8;
    goto L080482A4;
}

/*	Procedure: 0x080482E0 - 0x0804830F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_start()
{



    ebp = 0;
    (restore)esi;
    ecx = esp;
    esp = esp & -16;
    (save)eax;
    (save)esp;
    (save)edx;
    (save)__libc_csu_fini;
    (save)__libc_csu_init;
    (save)ecx;
    (save)esi;
    (save)main;
    L080482C4();
    asm("hlt");
}

/*	Procedure: 0x08048310 - 0x08048364
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_dtors_aux()
{
	/* unknown */ void  ebx;



    if(completed.5978 == 0) {
        eax = dtor_idx.5980;
        ebx = (__DTOR_END__ - __DTOR_LIST__ >> 2) - 1;
        do {
            eax = eax + 1;
            dtor_idx.5980 = eax;
            *(dtor_idx.5980 * 4 + __DTOR_LIST__)();
            eax = dtor_idx.5980;
        } while(dtor_idx.5980 < ebx);
        completed.5978 = 1;
    }
}

/*	Procedure: 0x08048365 - 0x0804836F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048365()
{



}

/*	Procedure: 0x08048370 - 0x08048392
 *	Argument size: -24
 *	Local size: 24
 *	Save regs size: 0
 */

frame_dummy()
{



    eax = __JCR_LIST__;
    if(__JCR_LIST__ != 0) {
        eax = 0;
        if(0 != 0) {
            *esp = __JCR_LIST__;
            eax = *L00000000();
        }
    }
}

/*	Procedure: 0x08048393 - 0x08048393
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048393()
{



}

/*	Procedure: 0x08048394 - 0x0804839B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bswap_plain()
{



    asm("bswap eax");
    return(0);
}

/*	Procedure: 0x0804839C - 0x0804848C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bswap_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("bswap eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804848D - 0x08048572
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bswap_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("bswap eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x08048573 - 0x08048658
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bswap_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("bswap eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x08048659 - 0x0804873F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bswap_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("bswap eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x08048740 - 0x08048748
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg1_plain()
{



    asm("cmpxchg bl,al");
    return(0);
}

/*	Procedure: 0x08048749 - 0x0804883A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg1_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("cmpxchg bl,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804883B - 0x08048921
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg1_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("cmpxchg bl,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x08048922 - 0x08048A08
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg1_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("cmpxchg bl,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x08048A09 - 0x08048AF0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg1_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("cmpxchg bl,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x08048AF1 - 0x08048AFA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg2_plain()
{



    asm("cmpxchg bx,ax");
    return(0);
}

/*	Procedure: 0x08048AFB - 0x08048BED
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg2_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("cmpxchg bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x08048BEE - 0x08048CD5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg2_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("cmpxchg bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x08048CD6 - 0x08048DBD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg2_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("cmpxchg bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x08048DBE - 0x08048EA6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg2_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("cmpxchg bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x08048EA7 - 0x08048EAF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg3_plain()
{



    asm("cmpxchg ebx,eax");
    return(0);
}

/*	Procedure: 0x08048EB0 - 0x08048FA1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg3_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("cmpxchg ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x08048FA2 - 0x08049088
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg3_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("cmpxchg ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x08049089 - 0x0804916F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg3_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("cmpxchg ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x08049170 - 0x08049257
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg3_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("cmpxchg ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x08049258 - 0x08049260
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg4_plain()
{



    asm("cmpxchg [ebx],eax");
    return(0);
}

/*	Procedure: 0x08049261 - 0x08049352
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg4_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("cmpxchg [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x08049353 - 0x08049439
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg4_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("cmpxchg [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804943A - 0x08049520
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg4_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("cmpxchg [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x08049521 - 0x08049608
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg4_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("cmpxchg [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x08049609 - 0x08049611
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg5_plain()
{



    asm("cmpxchg al,al");
    return(0);
}

/*	Procedure: 0x08049612 - 0x08049703
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg5_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("cmpxchg al,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x08049704 - 0x080497EA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg5_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("cmpxchg al,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x080497EB - 0x080498D1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg5_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("cmpxchg al,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x080498D2 - 0x080499B9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg5_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("cmpxchg al,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x080499BA - 0x080499C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg_locked_plain()
{



    asm("lock cmpxchg [ebx],eax");
    return(0);
}

/*	Procedure: 0x080499C4 - 0x08049AB6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg_locked_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("lock cmpxchg [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x08049AB7 - 0x08049B9E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg_locked_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("lock cmpxchg [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x08049B9F - 0x08049C86
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg_locked_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("lock cmpxchg [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x08049C87 - 0x08049D6F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg_locked_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("lock cmpxchg [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x08049D70 - 0x08049D77
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cpuid_plain()
{



    asm("cpuid");
    return(0);
}

/*	Procedure: 0x08049D78 - 0x08049E68
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cpuid_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("cpuid");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x08049E69 - 0x08049F4E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cpuid_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("cpuid");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x08049F4F - 0x0804A034
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cpuid_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("cpuid");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804A035 - 0x0804A11B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cpuid_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("cpuid");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804A11C - 0x0804A123
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invd_plain()
{



    asm("invd");
    return(0);
}

/*	Procedure: 0x0804A124 - 0x0804A214
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invd_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("invd");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804A215 - 0x0804A2FA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invd_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("invd");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804A2FB - 0x0804A3E0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invd_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("invd");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804A3E1 - 0x0804A4C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invd_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("invd");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804A4C8 - 0x0804A4D0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invlpg_plain()
{



    asm("invlpg [eax]");
    return(0);
}

/*	Procedure: 0x0804A4D1 - 0x0804A5C2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invlpg_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("invlpg [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804A5C3 - 0x0804A6A9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invlpg_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("invlpg [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804A6AA - 0x0804A790
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invlpg_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("invlpg [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804A791 - 0x0804A878
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invlpg_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("invlpg [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804A879 - 0x0804A880
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wbinvd_plain()
{



    asm("wbinvd");
    return(0);
}

/*	Procedure: 0x0804A881 - 0x0804A971
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wbinvd_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("wbinvd");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804A972 - 0x0804AA57
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wbinvd_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("wbinvd");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804AA58 - 0x0804AB3D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wbinvd_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("wbinvd");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804AB3E - 0x0804AC24
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wbinvd_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("wbinvd");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804AC25 - 0x0804AC2D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd1_plain()
{



    asm("xadd bl,al");
    return(0);
}

/*	Procedure: 0x0804AC2E - 0x0804AD1F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd1_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("xadd bl,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804AD20 - 0x0804AE06
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd1_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("xadd bl,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804AE07 - 0x0804AEED
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd1_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("xadd bl,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804AEEE - 0x0804AFD5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd1_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("xadd bl,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804AFD6 - 0x0804AFDF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd2_plain()
{



    asm("xadd bx,ax");
    return(0);
}

/*	Procedure: 0x0804AFE0 - 0x0804B0D2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd2_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("xadd bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804B0D3 - 0x0804B1BA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd2_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("xadd bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804B1BB - 0x0804B2A2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd2_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("xadd bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804B2A3 - 0x0804B38B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd2_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("xadd bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804B38C - 0x0804B394
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd3_plain()
{



    asm("xadd ebx,eax");
    return(0);
}

/*	Procedure: 0x0804B395 - 0x0804B486
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd3_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("xadd ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804B487 - 0x0804B56D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd3_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("xadd ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804B56E - 0x0804B654
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd3_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("xadd ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804B655 - 0x0804B73C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd3_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("xadd ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804B73D - 0x0804B745
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd4_plain()
{



    asm("xadd [ebx],eax");
    return(0);
}

/*	Procedure: 0x0804B746 - 0x0804B837
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd4_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("xadd [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804B838 - 0x0804B91E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd4_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("xadd [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804B91F - 0x0804BA05
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd4_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("xadd [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804BA06 - 0x0804BAED
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd4_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("xadd [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804BAEE - 0x0804BAF6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd5_plain()
{



    asm("xadd al,al");
    return(0);
}

/*	Procedure: 0x0804BAF7 - 0x0804BBE8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd5_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("xadd al,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804BBE9 - 0x0804BCCF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd5_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("xadd al,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804BCD0 - 0x0804BDB6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd5_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("xadd al,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804BDB7 - 0x0804BE9E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd5_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("xadd al,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804BE9F - 0x0804BEA8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd_locked_plain()
{



    asm("lock xadd [ebx],eax");
    return(0);
}

/*	Procedure: 0x0804BEA9 - 0x0804BF9B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd_locked_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("lock xadd [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804BF9C - 0x0804C083
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd_locked_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("lock xadd [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804C084 - 0x0804C16B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd_locked_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("lock xadd [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804C16C - 0x0804C254
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd_locked_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("lock xadd [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804C255 - 0x0804C25D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_plain()
{



    asm("cmpxchg8b [eax]");
    return(0);
}

/*	Procedure: 0x0804C25E - 0x0804C34F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("cmpxchg8b [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804C350 - 0x0804C436
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("cmpxchg8b [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804C437 - 0x0804C51D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("cmpxchg8b [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804C51E - 0x0804C605
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("cmpxchg8b [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804C606 - 0x0804C60F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_locked_plain()
{



    asm("lock cmpxchg8b [eax]");
    return(0);
}

/*	Procedure: 0x0804C610 - 0x0804C702
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_locked_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("lock cmpxchg8b [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804C703 - 0x0804C7EA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_locked_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("lock cmpxchg8b [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804C7EB - 0x0804C8D2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_locked_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("lock cmpxchg8b [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804C8D3 - 0x0804C9BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_locked_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("lock cmpxchg8b [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804C9BC - 0x0804C9C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdtsc_plain()
{



    asm("rdtsc");
    return(0);
}

/*	Procedure: 0x0804C9C4 - 0x0804CAB4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdtsc_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("rdtsc");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804CAB5 - 0x0804CB9A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdtsc_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("rdtsc");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804CB9B - 0x0804CC80
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdtsc_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("rdtsc");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804CC81 - 0x0804CD67
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdtsc_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("rdtsc");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804CD68 - 0x0804CD6F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdmsr_plain()
{



    asm("rdmsr");
    return(0);
}

/*	Procedure: 0x0804CD70 - 0x0804CE60
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdmsr_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("rdmsr");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804CE61 - 0x0804CF46
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdmsr_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("rdmsr");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804CF47 - 0x0804D02C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdmsr_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("rdmsr");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804D02D - 0x0804D113
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdmsr_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("rdmsr");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804D114 - 0x0804D11B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wrmsr_plain()
{



    asm("wrmsr");
    return(0);
}

/*	Procedure: 0x0804D11C - 0x0804D20C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wrmsr_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("wrmsr");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804D20D - 0x0804D2F2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wrmsr_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("wrmsr");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804D2F3 - 0x0804D3D8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wrmsr_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("wrmsr");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804D3D9 - 0x0804D4BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wrmsr_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("wrmsr");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804D4C0 - 0x0804D4C9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov1_plain()
{



    asm("cmova ax,bx");
    return(0);
}

/*	Procedure: 0x0804D4CA - 0x0804D5BC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov1_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("cmova ax,bx");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804D5BD - 0x0804D6A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov1_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("cmova ax,bx");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804D6A5 - 0x0804D78C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov1_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("cmova ax,bx");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804D78D - 0x0804D875
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov1_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("cmova ax,bx");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804D876 - 0x0804D87F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov2_plain()
{



    asm("cmova ax,bx");
    return(0);
}

/*	Procedure: 0x0804D880 - 0x0804D972
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov2_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("cmova ax,bx");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804D973 - 0x0804DA5A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov2_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("cmova ax,bx");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804DA5B - 0x0804DB42
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov2_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("cmova ax,bx");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804DB43 - 0x0804DC2B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov2_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("cmova ax,bx");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804DC2C - 0x0804DC36
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov3_plain()
{



    asm("cmova ax,[ebx+0xc]");
    return(0);
}

/*	Procedure: 0x0804DC37 - 0x0804DD2A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov3_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("cmova ax,[ebx+0xc]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804DD2B - 0x0804DE13
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov3_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("cmova ax,[ebx+0xc]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804DE14 - 0x0804DEFC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov3_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("cmova ax,[ebx+0xc]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804DEFD - 0x0804DFE6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov3_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("cmova ax,[ebx+0xc]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804DFE7 - 0x0804DFF0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov4_plain()
{



    asm("cmova eax,[ebx+0x22]");
    return(0);
}

/*	Procedure: 0x0804DFF1 - 0x0804E0E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov4_allregs()
{



    (save) *L00001100;
    asm("popfw");
    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    *L00002050 = esp;
    asm("cmova eax,[ebx+0x22]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804E0E4 - 0x0804E1CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov4_constant_simple()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 4;
    ebp = 5;
    esi = 6;
    edi = 7;
    *L00002050 = esp;
    asm("cmova eax,[ebx+0x22]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0804E1CC - 0x0804E2B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov4_constant_complex1()
{



    asm("o16 push +0x0");
    asm("popfw");
    eax = -1548650108;
    ebx = 107420375;
    ecx = 1181241928;
    edx = 958682820;
    ebp = -1131847516;
    esi = -1388565128;
    edi = -463085230;
    *L00002050 = esp;
    asm("cmova eax,[ebx+0x22]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804E2B4 - 0x0804E39C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov4_constant_complex2()
{



    (save)65279;
    asm("popfw");
    eax = 826196200;
    ebx = 1231978947;
    ecx = 507473074;
    edx = 1315513779;
    ebp = 1328621072;
    esi = 792175781;
    edi = -1851189324;
    *L00002050 = esp;
    asm("cmova eax,[ebx+0x22]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L00002200 ? : ;
    *L00002201 ? : ;
    asm("setc [0x2202]");
    asm("setnc [0x2203]");
    *L00002204 ? : ;
    *L00002205 ? : ;
    asm("setna [0x2206]");
    *L00002207 ? : ;
    *L00002208 ? : ;
    *L00002209 ? : ;
    asm("setpe [0x220a]");
    asm("setpo [0x220b]");
    *L0000220C ? : ;
    asm("setnl [0x220d]");
    asm("setng [0x220e]");
    *L0000220F ? : ;
    asm("pushfw");
    (restore)ax;
    *L00002100 = ax;
    *L00002020 = *L00002050 - esp;
    return(0);
}

/*	Procedure: 0x0804E39D - 0x0804E3A8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_0_plain()
{



    al :: 2;
    asm("cmovo bx,ax");
    return(0);
}

/*	Procedure: 0x0804E3A9 - 0x0804E49D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_0_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804E49E - 0x0804E587
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_0_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804E588 - 0x0804E671
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_0_constant_complex1()
{



}

/*	Procedure: 0x0804E672 - 0x0804E75C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_0_constant_complex2()
{



}

/*	Procedure: 0x0804E75D - 0x0804E768
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_1_plain()
{



    al :: 2;
    asm("cmovno bx,ax");
    return(0);
}

/*	Procedure: 0x0804E769 - 0x0804E85D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_1_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804E85E - 0x0804E947
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_1_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804E948 - 0x0804EA31
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_1_constant_complex1()
{



}

/*	Procedure: 0x0804EA32 - 0x0804EB1C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_1_constant_complex2()
{



}

/*	Procedure: 0x0804EB1D - 0x0804EB28
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_2_plain()
{



    al :: 2;
    asm("cmovc bx,ax");
    return(0);
}

/*	Procedure: 0x0804EB29 - 0x0804EC1D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_2_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804EC1E - 0x0804ED07
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_2_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804ED08 - 0x0804EDF1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_2_constant_complex1()
{



}

/*	Procedure: 0x0804EDF2 - 0x0804EEDC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_2_constant_complex2()
{



}

/*	Procedure: 0x0804EEDD - 0x0804EEE8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_3_plain()
{



    al :: 2;
    asm("cmovnc bx,ax");
    return(0);
}

/*	Procedure: 0x0804EEE9 - 0x0804EFDD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_3_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804EFDE - 0x0804F0C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_3_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804F0C8 - 0x0804F1B1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_3_constant_complex1()
{



}

/*	Procedure: 0x0804F1B2 - 0x0804F29C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_3_constant_complex2()
{



}

/*	Procedure: 0x0804F29D - 0x0804F2A8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_4_plain()
{



    al :: 2;
    asm("cmovz bx,ax");
    return(0);
}

/*	Procedure: 0x0804F2A9 - 0x0804F39D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_4_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804F39E - 0x0804F487
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_4_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804F488 - 0x0804F571
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_4_constant_complex1()
{



}

/*	Procedure: 0x0804F572 - 0x0804F65C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_4_constant_complex2()
{



}

/*	Procedure: 0x0804F65D - 0x0804F668
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_5_plain()
{



    al :: 2;
    asm("cmovnz bx,ax");
    return(0);
}

/*	Procedure: 0x0804F669 - 0x0804F75D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_5_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804F75E - 0x0804F847
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_5_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804F848 - 0x0804F931
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_5_constant_complex1()
{



}

/*	Procedure: 0x0804F932 - 0x0804FA1C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_5_constant_complex2()
{



}

/*	Procedure: 0x0804FA1D - 0x0804FA28
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_6_plain()
{



    al :: 2;
    asm("cmovna bx,ax");
    return(0);
}

/*	Procedure: 0x0804FA29 - 0x0804FB1D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_6_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804FB1E - 0x0804FC07
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_6_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804FC08 - 0x0804FCF1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_6_constant_complex1()
{



}

/*	Procedure: 0x0804FCF2 - 0x0804FDDC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_6_constant_complex2()
{



}

/*	Procedure: 0x0804FDDD - 0x0804FDE8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_7_plain()
{



    al :: 2;
    asm("cmova bx,ax");
    return(0);
}

/*	Procedure: 0x0804FDE9 - 0x0804FEDD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_7_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804FEDE - 0x0804FFC7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_7_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804FFC8 - 0x080500B1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_7_constant_complex1()
{



}

/*	Procedure: 0x080500B2 - 0x0805019C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_7_constant_complex2()
{



}

/*	Procedure: 0x0805019D - 0x080501A8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_8_plain()
{



    al :: 2;
    asm("cmovs bx,ax");
    return(0);
}

/*	Procedure: 0x080501A9 - 0x0805029D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_8_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0805029E - 0x08050387
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_8_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08050388 - 0x08050471
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_8_constant_complex1()
{



}

/*	Procedure: 0x08050472 - 0x0805055C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_8_constant_complex2()
{



}

/*	Procedure: 0x0805055D - 0x08050568
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_9_plain()
{



    al :: 2;
    asm("cmovns bx,ax");
    return(0);
}

/*	Procedure: 0x08050569 - 0x0805065D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_9_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0805065E - 0x08050747
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_9_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08050748 - 0x08050831
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_9_constant_complex1()
{



}

/*	Procedure: 0x08050832 - 0x0805091C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_9_constant_complex2()
{



}

/*	Procedure: 0x0805091D - 0x08050928
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_a_plain()
{



    al :: 2;
    asm("cmovpe bx,ax");
    return(0);
}

/*	Procedure: 0x08050929 - 0x08050A1D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_a_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x08050A1E - 0x08050B07
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_a_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08050B08 - 0x08050BF1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_a_constant_complex1()
{



}

/*	Procedure: 0x08050BF2 - 0x08050CDC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_a_constant_complex2()
{



}

/*	Procedure: 0x08050CDD - 0x08050CE8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_b_plain()
{



    al :: 2;
    asm("cmovpo bx,ax");
    return(0);
}

/*	Procedure: 0x08050CE9 - 0x08050DDD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_b_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x08050DDE - 0x08050EC7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_b_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08050EC8 - 0x08050FB1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_b_constant_complex1()
{



}

/*	Procedure: 0x08050FB2 - 0x0805109C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_b_constant_complex2()
{



}

/*	Procedure: 0x0805109D - 0x080510A8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_c_plain()
{



    al :: 2;
    asm("cmovl bx,ax");
    return(0);
}

/*	Procedure: 0x080510A9 - 0x0805119D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_c_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0805119E - 0x08051287
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_c_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08051288 - 0x08051371
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_c_constant_complex1()
{



}

/*	Procedure: 0x08051372 - 0x0805145C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_c_constant_complex2()
{



}

/*	Procedure: 0x0805145D - 0x08051468
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_d_plain()
{



    al :: 2;
    asm("cmovnl bx,ax");
    return(0);
}

/*	Procedure: 0x08051469 - 0x0805155D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_d_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0805155E - 0x08051647
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_d_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08051648 - 0x08051731
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_d_constant_complex1()
{



}

/*	Procedure: 0x08051732 - 0x0805181C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_d_constant_complex2()
{



}

/*	Procedure: 0x0805181D - 0x08051828
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_e_plain()
{



    al :: 2;
    asm("cmovng bx,ax");
    return(0);
}

/*	Procedure: 0x08051829 - 0x0805191D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_e_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0805191E - 0x08051A07
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_e_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08051A08 - 0x08051AF1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_e_constant_complex1()
{



}

/*	Procedure: 0x08051AF2 - 0x08051BDC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_e_constant_complex2()
{



}

/*	Procedure: 0x08051BDD - 0x08051BE8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_f_plain()
{



    al :: 2;
    asm("cmovg bx,ax");
    return(0);
}

/*	Procedure: 0x08051BE9 - 0x08051CDD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_f_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x08051CDE - 0x08051DC7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_f_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08051DC8 - 0x08051EB1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_f_constant_complex1()
{



}

/*	Procedure: 0x08051EB2 - 0x08051F9C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_f_constant_complex2()
{



}

/*	Procedure: 0x08051F9D - 0x08051FA7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_0_plain()
{



    al :: 2;
    asm("cmovo ebx,eax");
    return(0);
}

/*	Procedure: 0x08051FA8 - 0x0805209B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_0_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0805209C - 0x08052184
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_0_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08052185 - 0x0805226D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_0_constant_complex1()
{



}

/*	Procedure: 0x0805226E - 0x08052357
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_0_constant_complex2()
{



}

/*	Procedure: 0x08052358 - 0x08052362
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_1_plain()
{



    al :: 2;
    asm("cmovno ebx,eax");
    return(0);
}

/*	Procedure: 0x08052363 - 0x08052456
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_1_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x08052457 - 0x0805253F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_1_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08052540 - 0x08052628
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_1_constant_complex1()
{



}

/*	Procedure: 0x08052629 - 0x08052712
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_1_constant_complex2()
{



}

/*	Procedure: 0x08052713 - 0x0805271D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_2_plain()
{



    al :: 2;
    asm("cmovc ebx,eax");
    return(0);
}

/*	Procedure: 0x0805271E - 0x08052811
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_2_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x08052812 - 0x080528FA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_2_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x080528FB - 0x080529E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_2_constant_complex1()
{



}

/*	Procedure: 0x080529E4 - 0x08052ACD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_2_constant_complex2()
{



}

/*	Procedure: 0x08052ACE - 0x08052AD8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_3_plain()
{



    al :: 2;
    asm("cmovnc ebx,eax");
    return(0);
}

/*	Procedure: 0x08052AD9 - 0x08052BCC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_3_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x08052BCD - 0x08052CB5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_3_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08052CB6 - 0x08052D9E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_3_constant_complex1()
{



}

/*	Procedure: 0x08052D9F - 0x08052E88
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_3_constant_complex2()
{



}

/*	Procedure: 0x08052E89 - 0x08052E93
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_4_plain()
{



    al :: 2;
    asm("cmovz ebx,eax");
    return(0);
}

/*	Procedure: 0x08052E94 - 0x08052F87
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_4_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x08052F88 - 0x08053070
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_4_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08053071 - 0x08053159
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_4_constant_complex1()
{



}

/*	Procedure: 0x0805315A - 0x08053243
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_4_constant_complex2()
{



}

/*	Procedure: 0x08053244 - 0x0805324E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_5_plain()
{



    al :: 2;
    asm("cmovnz ebx,eax");
    return(0);
}

/*	Procedure: 0x0805324F - 0x08053342
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_5_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x08053343 - 0x0805342B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_5_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x0805342C - 0x08053514
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_5_constant_complex1()
{



}

/*	Procedure: 0x08053515 - 0x080535FE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_5_constant_complex2()
{



}

/*	Procedure: 0x080535FF - 0x08053609
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_6_plain()
{



    al :: 2;
    asm("cmovna ebx,eax");
    return(0);
}

/*	Procedure: 0x0805360A - 0x080536FD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_6_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x080536FE - 0x080537E6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_6_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x080537E7 - 0x080538CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_6_constant_complex1()
{



}

/*	Procedure: 0x080538D0 - 0x080539B9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_6_constant_complex2()
{



}

/*	Procedure: 0x080539BA - 0x080539C4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_7_plain()
{



    al :: 2;
    asm("cmova ebx,eax");
    return(0);
}

/*	Procedure: 0x080539C5 - 0x08053AB8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_7_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x08053AB9 - 0x08053BA1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_7_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08053BA2 - 0x08053C8A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_7_constant_complex1()
{



}

/*	Procedure: 0x08053C8B - 0x08053D74
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_7_constant_complex2()
{



}

/*	Procedure: 0x08053D75 - 0x08053D7F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_8_plain()
{



    al :: 2;
    asm("cmovs ebx,eax");
    return(0);
}

/*	Procedure: 0x08053D80 - 0x08053E73
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_8_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x08053E74 - 0x08053F5C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_8_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08053F5D - 0x08054045
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_8_constant_complex1()
{



}

/*	Procedure: 0x08054046 - 0x0805412F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_8_constant_complex2()
{



}

/*	Procedure: 0x08054130 - 0x0805413A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_9_plain()
{



    al :: 2;
    asm("cmovns ebx,eax");
    return(0);
}

/*	Procedure: 0x0805413B - 0x0805422E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_9_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0805422F - 0x08054317
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_9_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08054318 - 0x08054400
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_9_constant_complex1()
{



}

/*	Procedure: 0x08054401 - 0x080544EA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_9_constant_complex2()
{



}

/*	Procedure: 0x080544EB - 0x080544F5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_a_plain()
{



    al :: 2;
    asm("cmovpe ebx,eax");
    return(0);
}

/*	Procedure: 0x080544F6 - 0x080545E9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_a_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x080545EA - 0x080546D2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_a_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x080546D3 - 0x080547BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_a_constant_complex1()
{



}

/*	Procedure: 0x080547BC - 0x080548A5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_a_constant_complex2()
{



}

/*	Procedure: 0x080548A6 - 0x080548B0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_b_plain()
{



    al :: 2;
    asm("cmovpo ebx,eax");
    return(0);
}

/*	Procedure: 0x080548B1 - 0x080549A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_b_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x080549A5 - 0x08054A8D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_b_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08054A8E - 0x08054B76
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_b_constant_complex1()
{



}

/*	Procedure: 0x08054B77 - 0x08054C60
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_b_constant_complex2()
{



}

/*	Procedure: 0x08054C61 - 0x08054C6B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_c_plain()
{



    al :: 2;
    asm("cmovl ebx,eax");
    return(0);
}

/*	Procedure: 0x08054C6C - 0x08054D5F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_c_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x08054D60 - 0x08054E48
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_c_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08054E49 - 0x08054F31
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_c_constant_complex1()
{



}

/*	Procedure: 0x08054F32 - 0x0805501B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_c_constant_complex2()
{



}

/*	Procedure: 0x0805501C - 0x08055026
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_d_plain()
{



    al :: 2;
    asm("cmovnl ebx,eax");
    return(0);
}

/*	Procedure: 0x08055027 - 0x0805511A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_d_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x0805511B - 0x08055203
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_d_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x08055204 - 0x080552EC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_d_constant_complex1()
{



}

/*	Procedure: 0x080552ED - 0x080553D6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_d_constant_complex2()
{



}

/*	Procedure: 0x080553D7 - 0x080553E1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_e_plain()
{



    al :: 2;
    asm("cmovng ebx,eax");
    return(0);
}

/*	Procedure: 0x080553E2 - 0x080554D5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_e_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x080554D6 - 0x080555BE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_e_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x080555BF - 0x080556A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_e_constant_complex1()
{



}

/*	Procedure: 0x080556A8 - 0x08055791
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_e_constant_complex2()
{



}

/*	Procedure: 0x08055792 - 0x0805579C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_f_plain()
{



    al :: 2;
    asm("cmovg ebx,eax");
    return(0);
}

/*	Procedure: 0x0805579D - 0x08055890
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_f_allregs()
{



}

stack space not deallocated on return
/*	Procedure: 0x08055891 - 0x08055979
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_f_constant_simple()
{



}

stack space not deallocated on return
/*	Procedure: 0x0805597A - 0x08055A62
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_f_constant_complex1()
{



}

/*	Procedure: 0x08055A63 - 0x08055B4C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_f_constant_complex2()
{



}

/*	Procedure: 0x08055B4D - 0x080560F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

callAll()
{



    bswap_plain();
    bswap_allregs();
    bswap_constant_simple();
    bswap_constant_complex1();
    bswap_constant_complex2();
    cmpxchg1_plain();
    cmpxchg1_allregs();
    cmpxchg1_constant_simple();
    cmpxchg1_constant_complex1();
    cmpxchg1_constant_complex2();
    cmpxchg2_plain();
    cmpxchg2_allregs();
    cmpxchg2_constant_simple();
    cmpxchg2_constant_complex1();
    cmpxchg2_constant_complex2();
    cmpxchg3_plain();
    cmpxchg3_allregs();
    cmpxchg3_constant_simple();
    cmpxchg3_constant_complex1();
    cmpxchg3_constant_complex2();
    cmpxchg4_plain();
    cmpxchg4_allregs();
    cmpxchg4_constant_simple();
    cmpxchg4_constant_complex1();
    cmpxchg4_constant_complex2();
    cmpxchg5_plain();
    cmpxchg5_allregs();
    cmpxchg5_constant_simple();
    cmpxchg5_constant_complex1();
    cmpxchg5_constant_complex2();
    cmpxchg_locked_plain();
    cmpxchg_locked_allregs();
    cmpxchg_locked_constant_simple();
    cmpxchg_locked_constant_complex1();
    cmpxchg_locked_constant_complex2();
    cpuid_plain();
    cpuid_allregs();
    cpuid_constant_simple();
    cpuid_constant_complex1();
    cpuid_constant_complex2();
    invd_plain();
    invd_allregs();
    invd_constant_simple();
    invd_constant_complex1();
    invd_constant_complex2();
    invlpg_plain();
    invlpg_allregs();
    invlpg_constant_simple();
    invlpg_constant_complex1();
    invlpg_constant_complex2();
    wbinvd_plain();
    wbinvd_allregs();
    wbinvd_constant_simple();
    wbinvd_constant_complex1();
    wbinvd_constant_complex2();
    xadd1_plain();
    xadd1_allregs();
    xadd1_constant_simple();
    xadd1_constant_complex1();
    xadd1_constant_complex2();
    xadd2_plain();
    xadd2_allregs();
    xadd2_constant_simple();
    xadd2_constant_complex1();
    xadd2_constant_complex2();
    xadd3_plain();
    xadd3_allregs();
    xadd3_constant_simple();
    xadd3_constant_complex1();
    xadd3_constant_complex2();
    xadd4_plain();
    xadd4_allregs();
    xadd4_constant_simple();
    xadd4_constant_complex1();
    xadd4_constant_complex2();
    xadd5_plain();
    xadd5_allregs();
    xadd5_constant_simple();
    xadd5_constant_complex1();
    xadd5_constant_complex2();
    xadd_locked_plain();
    xadd_locked_allregs();
    xadd_locked_constant_simple();
    xadd_locked_constant_complex1();
    xadd_locked_constant_complex2();
    cmpxchg8b_plain();
    cmpxchg8b_allregs();
    cmpxchg8b_constant_simple();
    cmpxchg8b_constant_complex1();
    cmpxchg8b_constant_complex2();
    cmpxchg8b_locked_plain();
    cmpxchg8b_locked_allregs();
    cmpxchg8b_locked_constant_simple();
    cmpxchg8b_locked_constant_complex1();
    cmpxchg8b_locked_constant_complex2();
    rdtsc_plain();
    rdtsc_allregs();
    rdtsc_constant_simple();
    rdtsc_constant_complex1();
    rdtsc_constant_complex2();
    rdmsr_plain();
    rdmsr_allregs();
    rdmsr_constant_simple();
    rdmsr_constant_complex1();
    rdmsr_constant_complex2();
    wrmsr_plain();
    wrmsr_allregs();
    wrmsr_constant_simple();
    wrmsr_constant_complex1();
    wrmsr_constant_complex2();
    cmov1_plain();
    cmov1_allregs();
    cmov1_constant_simple();
    cmov1_constant_complex1();
    cmov1_constant_complex2();
    cmov2_plain();
    cmov2_allregs();
    cmov2_constant_simple();
    cmov2_constant_complex1();
    cmov2_constant_complex2();
    cmov3_plain();
    cmov3_allregs();
    cmov3_constant_simple();
    cmov3_constant_complex1();
    cmov3_constant_complex2();
    cmov4_plain();
    cmov4_allregs();
    cmov4_constant_simple();
    cmov4_constant_complex1();
    cmov4_constant_complex2();
    cmov_w_with_code_0_plain();
    cmov_w_with_code_0_allregs();
    cmov_w_with_code_0_constant_simple();
    cmov_w_with_code_0_constant_complex1();
    cmov_w_with_code_0_constant_complex2();
    cmov_w_with_code_1_plain();
    cmov_w_with_code_1_allregs();
    cmov_w_with_code_1_constant_simple();
    cmov_w_with_code_1_constant_complex1();
    cmov_w_with_code_1_constant_complex2();
    cmov_w_with_code_2_plain();
    cmov_w_with_code_2_allregs();
    cmov_w_with_code_2_constant_simple();
    cmov_w_with_code_2_constant_complex1();
    cmov_w_with_code_2_constant_complex2();
    cmov_w_with_code_3_plain();
    cmov_w_with_code_3_allregs();
    cmov_w_with_code_3_constant_simple();
    cmov_w_with_code_3_constant_complex1();
    cmov_w_with_code_3_constant_complex2();
    cmov_w_with_code_4_plain();
    cmov_w_with_code_4_allregs();
    cmov_w_with_code_4_constant_simple();
    cmov_w_with_code_4_constant_complex1();
    cmov_w_with_code_4_constant_complex2();
    cmov_w_with_code_5_plain();
    cmov_w_with_code_5_allregs();
    cmov_w_with_code_5_constant_simple();
    cmov_w_with_code_5_constant_complex1();
    cmov_w_with_code_5_constant_complex2();
    cmov_w_with_code_6_plain();
    cmov_w_with_code_6_allregs();
    cmov_w_with_code_6_constant_simple();
    cmov_w_with_code_6_constant_complex1();
    cmov_w_with_code_6_constant_complex2();
    cmov_w_with_code_7_plain();
    cmov_w_with_code_7_allregs();
    cmov_w_with_code_7_constant_simple();
    cmov_w_with_code_7_constant_complex1();
    cmov_w_with_code_7_constant_complex2();
    cmov_w_with_code_8_plain();
    cmov_w_with_code_8_allregs();
    cmov_w_with_code_8_constant_simple();
    cmov_w_with_code_8_constant_complex1();
    cmov_w_with_code_8_constant_complex2();
    cmov_w_with_code_9_plain();
    cmov_w_with_code_9_allregs();
    cmov_w_with_code_9_constant_simple();
    cmov_w_with_code_9_constant_complex1();
    cmov_w_with_code_9_constant_complex2();
    cmov_w_with_code_a_plain();
    cmov_w_with_code_a_allregs();
    cmov_w_with_code_a_constant_simple();
    cmov_w_with_code_a_constant_complex1();
    cmov_w_with_code_a_constant_complex2();
    cmov_w_with_code_b_plain();
    cmov_w_with_code_b_allregs();
    cmov_w_with_code_b_constant_simple();
    cmov_w_with_code_b_constant_complex1();
    cmov_w_with_code_b_constant_complex2();
    cmov_w_with_code_c_plain();
    cmov_w_with_code_c_allregs();
    cmov_w_with_code_c_constant_simple();
    cmov_w_with_code_c_constant_complex1();
    cmov_w_with_code_c_constant_complex2();
    cmov_w_with_code_d_plain();
    cmov_w_with_code_d_allregs();
    cmov_w_with_code_d_constant_simple();
    cmov_w_with_code_d_constant_complex1();
    cmov_w_with_code_d_constant_complex2();
    cmov_w_with_code_e_plain();
    cmov_w_with_code_e_allregs();
    cmov_w_with_code_e_constant_simple();
    cmov_w_with_code_e_constant_complex1();
    cmov_w_with_code_e_constant_complex2();
    cmov_w_with_code_f_plain();
    cmov_w_with_code_f_allregs();
    cmov_w_with_code_f_constant_simple();
    cmov_w_with_code_f_constant_complex1();
    cmov_w_with_code_f_constant_complex2();
    cmov_l_with_code_0_plain();
    cmov_l_with_code_0_allregs();
    cmov_l_with_code_0_constant_simple();
    cmov_l_with_code_0_constant_complex1();
    cmov_l_with_code_0_constant_complex2();
    cmov_l_with_code_1_plain();
    cmov_l_with_code_1_allregs();
    cmov_l_with_code_1_constant_simple();
    cmov_l_with_code_1_constant_complex1();
    cmov_l_with_code_1_constant_complex2();
    cmov_l_with_code_2_plain();
    cmov_l_with_code_2_allregs();
    cmov_l_with_code_2_constant_simple();
    cmov_l_with_code_2_constant_complex1();
    cmov_l_with_code_2_constant_complex2();
    cmov_l_with_code_3_plain();
    cmov_l_with_code_3_allregs();
    cmov_l_with_code_3_constant_simple();
    cmov_l_with_code_3_constant_complex1();
    cmov_l_with_code_3_constant_complex2();
    cmov_l_with_code_4_plain();
    cmov_l_with_code_4_allregs();
    cmov_l_with_code_4_constant_simple();
    cmov_l_with_code_4_constant_complex1();
    cmov_l_with_code_4_constant_complex2();
    cmov_l_with_code_5_plain();
    cmov_l_with_code_5_allregs();
    cmov_l_with_code_5_constant_simple();
    cmov_l_with_code_5_constant_complex1();
    cmov_l_with_code_5_constant_complex2();
    cmov_l_with_code_6_plain();
    cmov_l_with_code_6_allregs();
    cmov_l_with_code_6_constant_simple();
    cmov_l_with_code_6_constant_complex1();
    cmov_l_with_code_6_constant_complex2();
    cmov_l_with_code_7_plain();
    cmov_l_with_code_7_allregs();
    cmov_l_with_code_7_constant_simple();
    cmov_l_with_code_7_constant_complex1();
    cmov_l_with_code_7_constant_complex2();
    cmov_l_with_code_8_plain();
    cmov_l_with_code_8_allregs();
    cmov_l_with_code_8_constant_simple();
    cmov_l_with_code_8_constant_complex1();
    cmov_l_with_code_8_constant_complex2();
    cmov_l_with_code_9_plain();
    cmov_l_with_code_9_allregs();
    cmov_l_with_code_9_constant_simple();
    cmov_l_with_code_9_constant_complex1();
    cmov_l_with_code_9_constant_complex2();
    cmov_l_with_code_a_plain();
    cmov_l_with_code_a_allregs();
    cmov_l_with_code_a_constant_simple();
    cmov_l_with_code_a_constant_complex1();
    cmov_l_with_code_a_constant_complex2();
    cmov_l_with_code_b_plain();
    cmov_l_with_code_b_allregs();
    cmov_l_with_code_b_constant_simple();
    cmov_l_with_code_b_constant_complex1();
    cmov_l_with_code_b_constant_complex2();
    cmov_l_with_code_c_plain();
    cmov_l_with_code_c_allregs();
    cmov_l_with_code_c_constant_simple();
    cmov_l_with_code_c_constant_complex1();
    cmov_l_with_code_c_constant_complex2();
    cmov_l_with_code_d_plain();
    cmov_l_with_code_d_allregs();
    cmov_l_with_code_d_constant_simple();
    cmov_l_with_code_d_constant_complex1();
    cmov_l_with_code_d_constant_complex2();
    cmov_l_with_code_e_plain();
    cmov_l_with_code_e_allregs();
    cmov_l_with_code_e_constant_simple();
    cmov_l_with_code_e_constant_complex1();
    cmov_l_with_code_e_constant_complex2();
    cmov_l_with_code_f_plain();
    cmov_l_with_code_f_allregs();
    cmov_l_with_code_f_constant_simple();
    cmov_l_with_code_f_constant_complex1();
    cmov_l_with_code_f_constant_complex2();
}

/*	Procedure: 0x080560F8 - 0x08056101
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    return(0);
}

/*	Procedure: 0x08056102 - 0x0805610F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08056102()
{



}

/*	Procedure: 0x08056110 - 0x08056114
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x08056115 - 0x0805611F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08056115()
{



}

/*	Procedure: 0x08056120 - 0x08056179
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vffffffe4;
	/* unknown */ void  Vffffffe8;



    __i686.get_pc_thunk.bx();
    ebx = ebx + 4649;
    esp = esp - 28;
    _init();
    edi = ebx + -224;
    eax = ebx + -224;
    edi = edi - eax >> 2;
    if(edi != 0) {
        esi = 0;
        do {
            Vffffffe8 = A10;
            Vffffffe4 = Ac;
            *esp = A8;
            eax = *(ebx + esi * 4 + -224)();
            esi = esi + 1;
        } while(esi < edi);
    }
    esp = esp + 28;
}

/*	Procedure: 0x0805617A - 0x0805617D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__i686.get_pc_thunk.bx()
{



    ebx = *esp;
}

/*	Procedure: 0x0805617E - 0x0805617F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0805617E()
{



}

/*	Procedure: 0x08056180 - 0x080561A9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;



    eax = __CTOR_LIST__;
    if(__CTOR_LIST__ != -1) {
        ebx = __CTOR_LIST__;
        asm("o16 nop");
        do {
            ebx = ebx - 4;
            *eax();
            eax = *ebx;
        } while(eax != -1);
    }
}

/*	Procedure: 0x080561AA - 0x080561AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080561AA()
{



}

/*	Procedure: 0x080561AC - 0x080561C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L080561b8();
    (restore)ebx;
    ebx = ebx + 4508;
    (restore)ecx;
    return(__do_global_dtors_aux());
}

/*	Procedure: 0x080561C8 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fp_hw()
{



}

/* address  size  */
/* 0x00000000 134513268 */ /* unknown */ void 	__libc_start_main;
/* 0x08048274     108 */ /* unknown */ void 	_init;
/* 0x080482e0      48 */ /* unknown */ void 	_start;
/* 0x08048310      96 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048370      36 */ /* unknown */ void 	frame_dummy;
/* 0x08048394       8 */ /* unknown */ void 	bswap_plain;
/* 0x0804839c     241 */ /* unknown */ void 	bswap_allregs;
/* 0x0804848d     230 */ /* unknown */ void 	bswap_constant_simple;
/* 0x08048573     230 */ /* unknown */ void 	bswap_constant_complex1;
/* 0x08048659     231 */ /* unknown */ void 	bswap_constant_complex2;
/* 0x08048740       9 */ /* unknown */ void 	cmpxchg1_plain;
/* 0x08048749     242 */ /* unknown */ void 	cmpxchg1_allregs;
/* 0x0804883b     231 */ /* unknown */ void 	cmpxchg1_constant_simple;
/* 0x08048922     231 */ /* unknown */ void 	cmpxchg1_constant_complex1;
/* 0x08048a09     232 */ /* unknown */ void 	cmpxchg1_constant_complex2;
/* 0x08048af1      10 */ /* unknown */ void 	cmpxchg2_plain;
/* 0x08048afb     243 */ /* unknown */ void 	cmpxchg2_allregs;
/* 0x08048bee     232 */ /* unknown */ void 	cmpxchg2_constant_simple;
/* 0x08048cd6     232 */ /* unknown */ void 	cmpxchg2_constant_complex1;
/* 0x08048dbe     233 */ /* unknown */ void 	cmpxchg2_constant_complex2;
/* 0x08048ea7       9 */ /* unknown */ void 	cmpxchg3_plain;
/* 0x08048eb0     242 */ /* unknown */ void 	cmpxchg3_allregs;
/* 0x08048fa2     231 */ /* unknown */ void 	cmpxchg3_constant_simple;
/* 0x08049089     231 */ /* unknown */ void 	cmpxchg3_constant_complex1;
/* 0x08049170     232 */ /* unknown */ void 	cmpxchg3_constant_complex2;
/* 0x08049258       9 */ /* unknown */ void 	cmpxchg4_plain;
/* 0x08049261     242 */ /* unknown */ void 	cmpxchg4_allregs;
/* 0x08049353     231 */ /* unknown */ void 	cmpxchg4_constant_simple;
/* 0x0804943a     231 */ /* unknown */ void 	cmpxchg4_constant_complex1;
/* 0x08049521     232 */ /* unknown */ void 	cmpxchg4_constant_complex2;
/* 0x08049609       9 */ /* unknown */ void 	cmpxchg5_plain;
/* 0x08049612     242 */ /* unknown */ void 	cmpxchg5_allregs;
/* 0x08049704     231 */ /* unknown */ void 	cmpxchg5_constant_simple;
/* 0x080497eb     231 */ /* unknown */ void 	cmpxchg5_constant_complex1;
/* 0x080498d2     232 */ /* unknown */ void 	cmpxchg5_constant_complex2;
/* 0x080499ba      10 */ /* unknown */ void 	cmpxchg_locked_plain;
/* 0x080499c4     243 */ /* unknown */ void 	cmpxchg_locked_allregs;
/* 0x08049ab7     232 */ /* unknown */ void 	cmpxchg_locked_constant_simple;
/* 0x08049b9f     232 */ /* unknown */ void 	cmpxchg_locked_constant_complex1;
/* 0x08049c87     233 */ /* unknown */ void 	cmpxchg_locked_constant_complex2;
/* 0x08049d70       8 */ /* unknown */ void 	cpuid_plain;
/* 0x08049d78     241 */ /* unknown */ void 	cpuid_allregs;
/* 0x08049e69     230 */ /* unknown */ void 	cpuid_constant_simple;
/* 0x08049f4f     230 */ /* unknown */ void 	cpuid_constant_complex1;
/* 0x0804a035     231 */ /* unknown */ void 	cpuid_constant_complex2;
/* 0x0804a11c       8 */ /* unknown */ void 	invd_plain;
/* 0x0804a124     241 */ /* unknown */ void 	invd_allregs;
/* 0x0804a215     230 */ /* unknown */ void 	invd_constant_simple;
/* 0x0804a2fb     230 */ /* unknown */ void 	invd_constant_complex1;
/* 0x0804a3e1     231 */ /* unknown */ void 	invd_constant_complex2;
/* 0x0804a4c8       9 */ /* unknown */ void 	invlpg_plain;
/* 0x0804a4d1     242 */ /* unknown */ void 	invlpg_allregs;
/* 0x0804a5c3     231 */ /* unknown */ void 	invlpg_constant_simple;
/* 0x0804a6aa     231 */ /* unknown */ void 	invlpg_constant_complex1;
/* 0x0804a791     232 */ /* unknown */ void 	invlpg_constant_complex2;
/* 0x0804a879       8 */ /* unknown */ void 	wbinvd_plain;
/* 0x0804a881     241 */ /* unknown */ void 	wbinvd_allregs;
/* 0x0804a972     230 */ /* unknown */ void 	wbinvd_constant_simple;
/* 0x0804aa58     230 */ /* unknown */ void 	wbinvd_constant_complex1;
/* 0x0804ab3e     231 */ /* unknown */ void 	wbinvd_constant_complex2;
/* 0x0804ac25       9 */ /* unknown */ void 	xadd1_plain;
/* 0x0804ac2e     242 */ /* unknown */ void 	xadd1_allregs;
/* 0x0804ad20     231 */ /* unknown */ void 	xadd1_constant_simple;
/* 0x0804ae07     231 */ /* unknown */ void 	xadd1_constant_complex1;
/* 0x0804aeee     232 */ /* unknown */ void 	xadd1_constant_complex2;
/* 0x0804afd6      10 */ /* unknown */ void 	xadd2_plain;
/* 0x0804afe0     243 */ /* unknown */ void 	xadd2_allregs;
/* 0x0804b0d3     232 */ /* unknown */ void 	xadd2_constant_simple;
/* 0x0804b1bb     232 */ /* unknown */ void 	xadd2_constant_complex1;
/* 0x0804b2a3     233 */ /* unknown */ void 	xadd2_constant_complex2;
/* 0x0804b38c       9 */ /* unknown */ void 	xadd3_plain;
/* 0x0804b395     242 */ /* unknown */ void 	xadd3_allregs;
/* 0x0804b487     231 */ /* unknown */ void 	xadd3_constant_simple;
/* 0x0804b56e     231 */ /* unknown */ void 	xadd3_constant_complex1;
/* 0x0804b655     232 */ /* unknown */ void 	xadd3_constant_complex2;
/* 0x0804b73d       9 */ /* unknown */ void 	xadd4_plain;
/* 0x0804b746     242 */ /* unknown */ void 	xadd4_allregs;
/* 0x0804b838     231 */ /* unknown */ void 	xadd4_constant_simple;
/* 0x0804b91f     231 */ /* unknown */ void 	xadd4_constant_complex1;
/* 0x0804ba06     232 */ /* unknown */ void 	xadd4_constant_complex2;
/* 0x0804baee       9 */ /* unknown */ void 	xadd5_plain;
/* 0x0804baf7     242 */ /* unknown */ void 	xadd5_allregs;
/* 0x0804bbe9     231 */ /* unknown */ void 	xadd5_constant_simple;
/* 0x0804bcd0     231 */ /* unknown */ void 	xadd5_constant_complex1;
/* 0x0804bdb7     232 */ /* unknown */ void 	xadd5_constant_complex2;
/* 0x0804be9f      10 */ /* unknown */ void 	xadd_locked_plain;
/* 0x0804bea9     243 */ /* unknown */ void 	xadd_locked_allregs;
/* 0x0804bf9c     232 */ /* unknown */ void 	xadd_locked_constant_simple;
/* 0x0804c084     232 */ /* unknown */ void 	xadd_locked_constant_complex1;
/* 0x0804c16c     233 */ /* unknown */ void 	xadd_locked_constant_complex2;
/* 0x0804c255       9 */ /* unknown */ void 	cmpxchg8b_plain;
/* 0x0804c25e     242 */ /* unknown */ void 	cmpxchg8b_allregs;
/* 0x0804c350     231 */ /* unknown */ void 	cmpxchg8b_constant_simple;
/* 0x0804c437     231 */ /* unknown */ void 	cmpxchg8b_constant_complex1;
/* 0x0804c51e     232 */ /* unknown */ void 	cmpxchg8b_constant_complex2;
/* 0x0804c606      10 */ /* unknown */ void 	cmpxchg8b_locked_plain;
/* 0x0804c610     243 */ /* unknown */ void 	cmpxchg8b_locked_allregs;
/* 0x0804c703     232 */ /* unknown */ void 	cmpxchg8b_locked_constant_simple;
/* 0x0804c7eb     232 */ /* unknown */ void 	cmpxchg8b_locked_constant_complex1;
/* 0x0804c8d3     233 */ /* unknown */ void 	cmpxchg8b_locked_constant_complex2;
/* 0x0804c9bc       8 */ /* unknown */ void 	rdtsc_plain;
/* 0x0804c9c4     241 */ /* unknown */ void 	rdtsc_allregs;
/* 0x0804cab5     230 */ /* unknown */ void 	rdtsc_constant_simple;
/* 0x0804cb9b     230 */ /* unknown */ void 	rdtsc_constant_complex1;
/* 0x0804cc81     231 */ /* unknown */ void 	rdtsc_constant_complex2;
/* 0x0804cd68       8 */ /* unknown */ void 	rdmsr_plain;
/* 0x0804cd70     241 */ /* unknown */ void 	rdmsr_allregs;
/* 0x0804ce61     230 */ /* unknown */ void 	rdmsr_constant_simple;
/* 0x0804cf47     230 */ /* unknown */ void 	rdmsr_constant_complex1;
/* 0x0804d02d     231 */ /* unknown */ void 	rdmsr_constant_complex2;
/* 0x0804d114       8 */ /* unknown */ void 	wrmsr_plain;
/* 0x0804d11c     241 */ /* unknown */ void 	wrmsr_allregs;
/* 0x0804d20d     230 */ /* unknown */ void 	wrmsr_constant_simple;
/* 0x0804d2f3     230 */ /* unknown */ void 	wrmsr_constant_complex1;
/* 0x0804d3d9     231 */ /* unknown */ void 	wrmsr_constant_complex2;
/* 0x0804d4c0      10 */ /* unknown */ void 	cmov1_plain;
/* 0x0804d4ca     243 */ /* unknown */ void 	cmov1_allregs;
/* 0x0804d5bd     232 */ /* unknown */ void 	cmov1_constant_simple;
/* 0x0804d6a5     232 */ /* unknown */ void 	cmov1_constant_complex1;
/* 0x0804d78d     233 */ /* unknown */ void 	cmov1_constant_complex2;
/* 0x0804d876      10 */ /* unknown */ void 	cmov2_plain;
/* 0x0804d880     243 */ /* unknown */ void 	cmov2_allregs;
/* 0x0804d973     232 */ /* unknown */ void 	cmov2_constant_simple;
/* 0x0804da5b     232 */ /* unknown */ void 	cmov2_constant_complex1;
/* 0x0804db43     233 */ /* unknown */ void 	cmov2_constant_complex2;
/* 0x0804dc2c      11 */ /* unknown */ void 	cmov3_plain;
/* 0x0804dc37     244 */ /* unknown */ void 	cmov3_allregs;
/* 0x0804dd2b     233 */ /* unknown */ void 	cmov3_constant_simple;
/* 0x0804de14     233 */ /* unknown */ void 	cmov3_constant_complex1;
/* 0x0804defd     234 */ /* unknown */ void 	cmov3_constant_complex2;
/* 0x0804dfe7      10 */ /* unknown */ void 	cmov4_plain;
/* 0x0804dff1     243 */ /* unknown */ void 	cmov4_allregs;
/* 0x0804e0e4     232 */ /* unknown */ void 	cmov4_constant_simple;
/* 0x0804e1cc     232 */ /* unknown */ void 	cmov4_constant_complex1;
/* 0x0804e2b4     233 */ /* unknown */ void 	cmov4_constant_complex2;
/* 0x0804e39d      12 */ /* unknown */ void 	cmov_w_with_code_0_plain;
/* 0x0804e3a9     245 */ /* unknown */ void 	cmov_w_with_code_0_allregs;
/* 0x0804e49e     234 */ /* unknown */ void 	cmov_w_with_code_0_constant_simple;
/* 0x0804e588     234 */ /* unknown */ void 	cmov_w_with_code_0_constant_complex1;
/* 0x0804e672     235 */ /* unknown */ void 	cmov_w_with_code_0_constant_complex2;
/* 0x0804e75d      12 */ /* unknown */ void 	cmov_w_with_code_1_plain;
/* 0x0804e769     245 */ /* unknown */ void 	cmov_w_with_code_1_allregs;
/* 0x0804e85e     234 */ /* unknown */ void 	cmov_w_with_code_1_constant_simple;
/* 0x0804e948     234 */ /* unknown */ void 	cmov_w_with_code_1_constant_complex1;
/* 0x0804ea32     235 */ /* unknown */ void 	cmov_w_with_code_1_constant_complex2;
/* 0x0804eb1d      12 */ /* unknown */ void 	cmov_w_with_code_2_plain;
/* 0x0804eb29     245 */ /* unknown */ void 	cmov_w_with_code_2_allregs;
/* 0x0804ec1e     234 */ /* unknown */ void 	cmov_w_with_code_2_constant_simple;
/* 0x0804ed08     234 */ /* unknown */ void 	cmov_w_with_code_2_constant_complex1;
/* 0x0804edf2     235 */ /* unknown */ void 	cmov_w_with_code_2_constant_complex2;
/* 0x0804eedd      12 */ /* unknown */ void 	cmov_w_with_code_3_plain;
/* 0x0804eee9     245 */ /* unknown */ void 	cmov_w_with_code_3_allregs;
/* 0x0804efde     234 */ /* unknown */ void 	cmov_w_with_code_3_constant_simple;
/* 0x0804f0c8     234 */ /* unknown */ void 	cmov_w_with_code_3_constant_complex1;
/* 0x0804f1b2     235 */ /* unknown */ void 	cmov_w_with_code_3_constant_complex2;
/* 0x0804f29d      12 */ /* unknown */ void 	cmov_w_with_code_4_plain;
/* 0x0804f2a9     245 */ /* unknown */ void 	cmov_w_with_code_4_allregs;
/* 0x0804f39e     234 */ /* unknown */ void 	cmov_w_with_code_4_constant_simple;
/* 0x0804f488     234 */ /* unknown */ void 	cmov_w_with_code_4_constant_complex1;
/* 0x0804f572     235 */ /* unknown */ void 	cmov_w_with_code_4_constant_complex2;
/* 0x0804f65d      12 */ /* unknown */ void 	cmov_w_with_code_5_plain;
/* 0x0804f669     245 */ /* unknown */ void 	cmov_w_with_code_5_allregs;
/* 0x0804f75e     234 */ /* unknown */ void 	cmov_w_with_code_5_constant_simple;
/* 0x0804f848     234 */ /* unknown */ void 	cmov_w_with_code_5_constant_complex1;
/* 0x0804f932     235 */ /* unknown */ void 	cmov_w_with_code_5_constant_complex2;
/* 0x0804fa1d      12 */ /* unknown */ void 	cmov_w_with_code_6_plain;
/* 0x0804fa29     245 */ /* unknown */ void 	cmov_w_with_code_6_allregs;
/* 0x0804fb1e     234 */ /* unknown */ void 	cmov_w_with_code_6_constant_simple;
/* 0x0804fc08     234 */ /* unknown */ void 	cmov_w_with_code_6_constant_complex1;
/* 0x0804fcf2     235 */ /* unknown */ void 	cmov_w_with_code_6_constant_complex2;
/* 0x0804fddd      12 */ /* unknown */ void 	cmov_w_with_code_7_plain;
/* 0x0804fde9     245 */ /* unknown */ void 	cmov_w_with_code_7_allregs;
/* 0x0804fede     234 */ /* unknown */ void 	cmov_w_with_code_7_constant_simple;
/* 0x0804ffc8     234 */ /* unknown */ void 	cmov_w_with_code_7_constant_complex1;
/* 0x080500b2     235 */ /* unknown */ void 	cmov_w_with_code_7_constant_complex2;
/* 0x0805019d      12 */ /* unknown */ void 	cmov_w_with_code_8_plain;
/* 0x080501a9     245 */ /* unknown */ void 	cmov_w_with_code_8_allregs;
/* 0x0805029e     234 */ /* unknown */ void 	cmov_w_with_code_8_constant_simple;
/* 0x08050388     234 */ /* unknown */ void 	cmov_w_with_code_8_constant_complex1;
/* 0x08050472     235 */ /* unknown */ void 	cmov_w_with_code_8_constant_complex2;
/* 0x0805055d      12 */ /* unknown */ void 	cmov_w_with_code_9_plain;
/* 0x08050569     245 */ /* unknown */ void 	cmov_w_with_code_9_allregs;
/* 0x0805065e     234 */ /* unknown */ void 	cmov_w_with_code_9_constant_simple;
/* 0x08050748     234 */ /* unknown */ void 	cmov_w_with_code_9_constant_complex1;
/* 0x08050832     235 */ /* unknown */ void 	cmov_w_with_code_9_constant_complex2;
/* 0x0805091d      12 */ /* unknown */ void 	cmov_w_with_code_a_plain;
/* 0x08050929     245 */ /* unknown */ void 	cmov_w_with_code_a_allregs;
/* 0x08050a1e     234 */ /* unknown */ void 	cmov_w_with_code_a_constant_simple;
/* 0x08050b08     234 */ /* unknown */ void 	cmov_w_with_code_a_constant_complex1;
/* 0x08050bf2     235 */ /* unknown */ void 	cmov_w_with_code_a_constant_complex2;
/* 0x08050cdd      12 */ /* unknown */ void 	cmov_w_with_code_b_plain;
/* 0x08050ce9     245 */ /* unknown */ void 	cmov_w_with_code_b_allregs;
/* 0x08050dde     234 */ /* unknown */ void 	cmov_w_with_code_b_constant_simple;
/* 0x08050ec8     234 */ /* unknown */ void 	cmov_w_with_code_b_constant_complex1;
/* 0x08050fb2     235 */ /* unknown */ void 	cmov_w_with_code_b_constant_complex2;
/* 0x0805109d      12 */ /* unknown */ void 	cmov_w_with_code_c_plain;
/* 0x080510a9     245 */ /* unknown */ void 	cmov_w_with_code_c_allregs;
/* 0x0805119e     234 */ /* unknown */ void 	cmov_w_with_code_c_constant_simple;
/* 0x08051288     234 */ /* unknown */ void 	cmov_w_with_code_c_constant_complex1;
/* 0x08051372     235 */ /* unknown */ void 	cmov_w_with_code_c_constant_complex2;
/* 0x0805145d      12 */ /* unknown */ void 	cmov_w_with_code_d_plain;
/* 0x08051469     245 */ /* unknown */ void 	cmov_w_with_code_d_allregs;
/* 0x0805155e     234 */ /* unknown */ void 	cmov_w_with_code_d_constant_simple;
/* 0x08051648     234 */ /* unknown */ void 	cmov_w_with_code_d_constant_complex1;
/* 0x08051732     235 */ /* unknown */ void 	cmov_w_with_code_d_constant_complex2;
/* 0x0805181d      12 */ /* unknown */ void 	cmov_w_with_code_e_plain;
/* 0x08051829     245 */ /* unknown */ void 	cmov_w_with_code_e_allregs;
/* 0x0805191e     234 */ /* unknown */ void 	cmov_w_with_code_e_constant_simple;
/* 0x08051a08     234 */ /* unknown */ void 	cmov_w_with_code_e_constant_complex1;
/* 0x08051af2     235 */ /* unknown */ void 	cmov_w_with_code_e_constant_complex2;
/* 0x08051bdd      12 */ /* unknown */ void 	cmov_w_with_code_f_plain;
/* 0x08051be9     245 */ /* unknown */ void 	cmov_w_with_code_f_allregs;
/* 0x08051cde     234 */ /* unknown */ void 	cmov_w_with_code_f_constant_simple;
/* 0x08051dc8     234 */ /* unknown */ void 	cmov_w_with_code_f_constant_complex1;
/* 0x08051eb2     235 */ /* unknown */ void 	cmov_w_with_code_f_constant_complex2;
/* 0x08051f9d      11 */ /* unknown */ void 	cmov_l_with_code_0_plain;
/* 0x08051fa8     244 */ /* unknown */ void 	cmov_l_with_code_0_allregs;
/* 0x0805209c     233 */ /* unknown */ void 	cmov_l_with_code_0_constant_simple;
/* 0x08052185     233 */ /* unknown */ void 	cmov_l_with_code_0_constant_complex1;
/* 0x0805226e     234 */ /* unknown */ void 	cmov_l_with_code_0_constant_complex2;
/* 0x08052358      11 */ /* unknown */ void 	cmov_l_with_code_1_plain;
/* 0x08052363     244 */ /* unknown */ void 	cmov_l_with_code_1_allregs;
/* 0x08052457     233 */ /* unknown */ void 	cmov_l_with_code_1_constant_simple;
/* 0x08052540     233 */ /* unknown */ void 	cmov_l_with_code_1_constant_complex1;
/* 0x08052629     234 */ /* unknown */ void 	cmov_l_with_code_1_constant_complex2;
/* 0x08052713      11 */ /* unknown */ void 	cmov_l_with_code_2_plain;
/* 0x0805271e     244 */ /* unknown */ void 	cmov_l_with_code_2_allregs;
/* 0x08052812     233 */ /* unknown */ void 	cmov_l_with_code_2_constant_simple;
/* 0x080528fb     233 */ /* unknown */ void 	cmov_l_with_code_2_constant_complex1;
/* 0x080529e4     234 */ /* unknown */ void 	cmov_l_with_code_2_constant_complex2;
/* 0x08052ace      11 */ /* unknown */ void 	cmov_l_with_code_3_plain;
/* 0x08052ad9     244 */ /* unknown */ void 	cmov_l_with_code_3_allregs;
/* 0x08052bcd     233 */ /* unknown */ void 	cmov_l_with_code_3_constant_simple;
/* 0x08052cb6     233 */ /* unknown */ void 	cmov_l_with_code_3_constant_complex1;
/* 0x08052d9f     234 */ /* unknown */ void 	cmov_l_with_code_3_constant_complex2;
/* 0x08052e89      11 */ /* unknown */ void 	cmov_l_with_code_4_plain;
/* 0x08052e94     244 */ /* unknown */ void 	cmov_l_with_code_4_allregs;
/* 0x08052f88     233 */ /* unknown */ void 	cmov_l_with_code_4_constant_simple;
/* 0x08053071     233 */ /* unknown */ void 	cmov_l_with_code_4_constant_complex1;
/* 0x0805315a     234 */ /* unknown */ void 	cmov_l_with_code_4_constant_complex2;
/* 0x08053244      11 */ /* unknown */ void 	cmov_l_with_code_5_plain;
/* 0x0805324f     244 */ /* unknown */ void 	cmov_l_with_code_5_allregs;
/* 0x08053343     233 */ /* unknown */ void 	cmov_l_with_code_5_constant_simple;
/* 0x0805342c     233 */ /* unknown */ void 	cmov_l_with_code_5_constant_complex1;
/* 0x08053515     234 */ /* unknown */ void 	cmov_l_with_code_5_constant_complex2;
/* 0x080535ff      11 */ /* unknown */ void 	cmov_l_with_code_6_plain;
/* 0x0805360a     244 */ /* unknown */ void 	cmov_l_with_code_6_allregs;
/* 0x080536fe     233 */ /* unknown */ void 	cmov_l_with_code_6_constant_simple;
/* 0x080537e7     233 */ /* unknown */ void 	cmov_l_with_code_6_constant_complex1;
/* 0x080538d0     234 */ /* unknown */ void 	cmov_l_with_code_6_constant_complex2;
/* 0x080539ba      11 */ /* unknown */ void 	cmov_l_with_code_7_plain;
/* 0x080539c5     244 */ /* unknown */ void 	cmov_l_with_code_7_allregs;
/* 0x08053ab9     233 */ /* unknown */ void 	cmov_l_with_code_7_constant_simple;
/* 0x08053ba2     233 */ /* unknown */ void 	cmov_l_with_code_7_constant_complex1;
/* 0x08053c8b     234 */ /* unknown */ void 	cmov_l_with_code_7_constant_complex2;
/* 0x08053d75      11 */ /* unknown */ void 	cmov_l_with_code_8_plain;
/* 0x08053d80     244 */ /* unknown */ void 	cmov_l_with_code_8_allregs;
/* 0x08053e74     233 */ /* unknown */ void 	cmov_l_with_code_8_constant_simple;
/* 0x08053f5d     233 */ /* unknown */ void 	cmov_l_with_code_8_constant_complex1;
/* 0x08054046     234 */ /* unknown */ void 	cmov_l_with_code_8_constant_complex2;
/* 0x08054130      11 */ /* unknown */ void 	cmov_l_with_code_9_plain;
/* 0x0805413b     244 */ /* unknown */ void 	cmov_l_with_code_9_allregs;
/* 0x0805422f     233 */ /* unknown */ void 	cmov_l_with_code_9_constant_simple;
/* 0x08054318     233 */ /* unknown */ void 	cmov_l_with_code_9_constant_complex1;
/* 0x08054401     234 */ /* unknown */ void 	cmov_l_with_code_9_constant_complex2;
/* 0x080544eb      11 */ /* unknown */ void 	cmov_l_with_code_a_plain;
/* 0x080544f6     244 */ /* unknown */ void 	cmov_l_with_code_a_allregs;
/* 0x080545ea     233 */ /* unknown */ void 	cmov_l_with_code_a_constant_simple;
/* 0x080546d3     233 */ /* unknown */ void 	cmov_l_with_code_a_constant_complex1;
/* 0x080547bc     234 */ /* unknown */ void 	cmov_l_with_code_a_constant_complex2;
/* 0x080548a6      11 */ /* unknown */ void 	cmov_l_with_code_b_plain;
/* 0x080548b1     244 */ /* unknown */ void 	cmov_l_with_code_b_allregs;
/* 0x080549a5     233 */ /* unknown */ void 	cmov_l_with_code_b_constant_simple;
/* 0x08054a8e     233 */ /* unknown */ void 	cmov_l_with_code_b_constant_complex1;
/* 0x08054b77     234 */ /* unknown */ void 	cmov_l_with_code_b_constant_complex2;
/* 0x08054c61      11 */ /* unknown */ void 	cmov_l_with_code_c_plain;
/* 0x08054c6c     244 */ /* unknown */ void 	cmov_l_with_code_c_allregs;
/* 0x08054d60     233 */ /* unknown */ void 	cmov_l_with_code_c_constant_simple;
/* 0x08054e49     233 */ /* unknown */ void 	cmov_l_with_code_c_constant_complex1;
/* 0x08054f32     234 */ /* unknown */ void 	cmov_l_with_code_c_constant_complex2;
/* 0x0805501c      11 */ /* unknown */ void 	cmov_l_with_code_d_plain;
/* 0x08055027     244 */ /* unknown */ void 	cmov_l_with_code_d_allregs;
/* 0x0805511b     233 */ /* unknown */ void 	cmov_l_with_code_d_constant_simple;
/* 0x08055204     233 */ /* unknown */ void 	cmov_l_with_code_d_constant_complex1;
/* 0x080552ed     234 */ /* unknown */ void 	cmov_l_with_code_d_constant_complex2;
/* 0x080553d7      11 */ /* unknown */ void 	cmov_l_with_code_e_plain;
/* 0x080553e2     244 */ /* unknown */ void 	cmov_l_with_code_e_allregs;
/* 0x080554d6     233 */ /* unknown */ void 	cmov_l_with_code_e_constant_simple;
/* 0x080555bf     233 */ /* unknown */ void 	cmov_l_with_code_e_constant_complex1;
/* 0x080556a8     234 */ /* unknown */ void 	cmov_l_with_code_e_constant_complex2;
/* 0x08055792      11 */ /* unknown */ void 	cmov_l_with_code_f_plain;
/* 0x0805579d     244 */ /* unknown */ void 	cmov_l_with_code_f_allregs;
/* 0x08055891     233 */ /* unknown */ void 	cmov_l_with_code_f_constant_simple;
/* 0x0805597a     233 */ /* unknown */ void 	cmov_l_with_code_f_constant_complex1;
/* 0x08055a63     234 */ /* unknown */ void 	cmov_l_with_code_f_constant_complex2;
/* 0x08055b4d    1451 */ /* unknown */ void 	callAll;
/* 0x080560f8      24 */ /* unknown */ void 	main;
/* 0x08056110      16 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08056120      90 */ /* unknown */ void 	__libc_csu_init;
/* 0x0805617a       6 */ /* unknown */ void 	__i686.get_pc_thunk.bx;
/* 0x08056180      44 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080561ac       0 */ /* unknown */ void 	_fini;
/* 0x080561c8       4 */ /* unknown */ void 	_fp_hw;
/* 0x080561cc       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x080561d0       0 */ /* unknown */ void 	__dso_handle;
/* 0x08056270       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08057274       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08057274       0 */ /* unknown */ void 	__init_array_end;
/* 0x08057274       0 */ /* unknown */ void 	__init_array_start;
/* 0x08057278       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0805727c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08057280       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08057284       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08057284       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08057288       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08057354       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08057368       0 */ /* unknown */ void 	data_start;
/* 0x08057368       0 */ /* unknown */ void 	__data_start;
/* 0x0805736c       1 */ /* unknown */ void 	completed.5978;
/* 0x08057370       4 */ /* unknown */ void 	dtor_idx.5980;
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
option: -flag16
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
option: +usesymtab
option: -validatebr
option: -validatereg
option: +validatestr
#endif
