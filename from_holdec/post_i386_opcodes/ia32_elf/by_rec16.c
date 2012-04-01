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
    if(*(ebx + 13220 + -4) != 0) {
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



    (save) *L0804B628;
    goto ( *L0804b62c);
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



    goto ( *L0804b630);
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



    goto ( *L0804b634);
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

/*	Procedure: 0x08048394 - 0x08048396
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bswap()
{



    asm("bswap eax");
}

/*	Procedure: 0x08048397 - 0x08048399
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bswap_constant()
{



    asm("bswap eax");
}

/*	Procedure: 0x0804839A - 0x080483FA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bswap_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("bswap eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080483FB - 0x080483FE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg1()
{



    asm("cmpxchg bl,al");
}

/*	Procedure: 0x080483FF - 0x08048402
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg1_constant()
{



    asm("cmpxchg bl,al");
}

/*	Procedure: 0x08048403 - 0x08048464
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg1_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("cmpxchg bl,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048465 - 0x08048469
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg2()
{



    asm("cmpxchg bx,ax");
}

/*	Procedure: 0x0804846A - 0x0804846E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg2_constant()
{



    asm("cmpxchg bx,ax");
}

/*	Procedure: 0x0804846F - 0x080484D1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg2_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("cmpxchg bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080484D2 - 0x080484D5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg3()
{



    asm("cmpxchg ebx,eax");
}

/*	Procedure: 0x080484D6 - 0x080484D9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg3_constant()
{



    asm("cmpxchg ebx,eax");
}

/*	Procedure: 0x080484DA - 0x0804853B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg3_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("cmpxchg ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x0804853C - 0x0804853F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg4()
{



    asm("cmpxchg [ebx],eax");
}

/*	Procedure: 0x08048540 - 0x08048543
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg4_constant()
{



    asm("cmpxchg [ebx],eax");
}

/*	Procedure: 0x08048544 - 0x080485A5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg4_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("cmpxchg [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080485A6 - 0x080485A9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg5()
{



    asm("cmpxchg al,al");
}

/*	Procedure: 0x080485AA - 0x080485AD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg5_constant()
{



    asm("cmpxchg al,al");
}

/*	Procedure: 0x080485AE - 0x0804860F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg5_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("cmpxchg al,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048610 - 0x08048614
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg1_locked()
{



    asm("lock cmpxchg bl,al");
}

/*	Procedure: 0x08048615 - 0x08048619
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg1_locked_constant()
{



    asm("lock cmpxchg bl,al");
}

/*	Procedure: 0x0804861A - 0x0804867C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg1_locked_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("lock cmpxchg bl,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x0804867D - 0x08048682
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg2_locked()
{



    asm("lock cmpxchg bx,ax");
}

/*	Procedure: 0x08048683 - 0x08048688
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg2_locked_constant()
{



    asm("lock cmpxchg bx,ax");
}

/*	Procedure: 0x08048689 - 0x080486EC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg2_locked_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("lock cmpxchg bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080486ED - 0x080486F1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg3_locked()
{



    asm("lock cmpxchg ebx,eax");
}

/*	Procedure: 0x080486F2 - 0x080486F6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg3_locked_constant()
{



    asm("lock cmpxchg ebx,eax");
}

/*	Procedure: 0x080486F7 - 0x08048759
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg3_locked_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("lock cmpxchg ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x0804875A - 0x0804875E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg4_locked()
{



    asm("lock cmpxchg [ebx],eax");
}

/*	Procedure: 0x0804875F - 0x08048763
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg4_locked_constant()
{



    asm("lock cmpxchg [ebx],eax");
}

/*	Procedure: 0x08048764 - 0x080487C6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg4_locked_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("lock cmpxchg [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080487C7 - 0x080487CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg5_locked()
{



    asm("lock cmpxchg al,al");
}

/*	Procedure: 0x080487CC - 0x080487D0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg5_locked_constant()
{



    asm("lock cmpxchg al,al");
}

/*	Procedure: 0x080487D1 - 0x08048833
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg5_locked_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("lock cmpxchg al,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048834 - 0x08048836
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cpuid()
{



    asm("cpuid");
}

/*	Procedure: 0x08048837 - 0x08048839
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cpuid_constant()
{



    asm("cpuid");
}

/*	Procedure: 0x0804883A - 0x0804889A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cpuid_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("cpuid");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x0804889B - 0x0804889D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invd()
{



    asm("invd");
}

/*	Procedure: 0x0804889E - 0x080488A0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invd_constant()
{



    asm("invd");
}

/*	Procedure: 0x080488A1 - 0x08048901
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invd_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("invd");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048902 - 0x08048905
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invlpg()
{



    asm("invlpg [eax]");
}

/*	Procedure: 0x08048906 - 0x08048909
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invlpg_constant()
{



    asm("invlpg [eax]");
}

/*	Procedure: 0x0804890A - 0x0804896B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

invlpg_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("invlpg [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x0804896C - 0x0804896E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wbinvd()
{



    asm("wbinvd");
}

/*	Procedure: 0x0804896F - 0x08048971
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wbinvd_constant()
{



    asm("wbinvd");
}

/*	Procedure: 0x08048972 - 0x080489D2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wbinvd_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("wbinvd");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080489D3 - 0x080489D6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd1()
{



    asm("xadd bl,al");
}

/*	Procedure: 0x080489D7 - 0x080489DA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd1_constant()
{



    asm("xadd bl,al");
}

/*	Procedure: 0x080489DB - 0x08048A3C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd1_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("xadd bl,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048A3D - 0x08048A41
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd2()
{



    asm("xadd bx,ax");
}

/*	Procedure: 0x08048A42 - 0x08048A46
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd2_constant()
{



    asm("xadd bx,ax");
}

/*	Procedure: 0x08048A47 - 0x08048AA9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd2_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("xadd bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048AAA - 0x08048AAD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd3()
{



    asm("xadd ebx,eax");
}

/*	Procedure: 0x08048AAE - 0x08048AB1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd3_constant()
{



    asm("xadd ebx,eax");
}

/*	Procedure: 0x08048AB2 - 0x08048B13
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd3_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("xadd ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048B14 - 0x08048B17
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd4()
{



    asm("xadd [ebx],eax");
}

/*	Procedure: 0x08048B18 - 0x08048B1B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd4_constant()
{



    asm("xadd [ebx],eax");
}

/*	Procedure: 0x08048B1C - 0x08048B7D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd4_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("xadd [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048B7E - 0x08048B81
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd5()
{



    asm("xadd al,al");
}

/*	Procedure: 0x08048B82 - 0x08048B85
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd5_constant()
{



    asm("xadd al,al");
}

/*	Procedure: 0x08048B86 - 0x08048BE7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd5_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("xadd al,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048BE8 - 0x08048BEC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd1_locked()
{



    asm("lock xadd bl,al");
}

/*	Procedure: 0x08048BED - 0x08048BF1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd1_locked_constant()
{



    asm("lock xadd bl,al");
}

/*	Procedure: 0x08048BF2 - 0x08048C54
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd1_locked_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("lock xadd bl,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048C55 - 0x08048C5A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd2_locked()
{



    asm("lock xadd bx,ax");
}

/*	Procedure: 0x08048C5B - 0x08048C60
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd2_locked_constant()
{



    asm("lock xadd bx,ax");
}

/*	Procedure: 0x08048C61 - 0x08048CC4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd2_locked_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("lock xadd bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048CC5 - 0x08048CC9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd3_locked()
{



    asm("lock xadd ebx,eax");
}

/*	Procedure: 0x08048CCA - 0x08048CCE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd3_locked_constant()
{



    asm("lock xadd ebx,eax");
}

/*	Procedure: 0x08048CCF - 0x08048D31
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd3_locked_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("lock xadd ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048D32 - 0x08048D36
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd4_locked()
{



    asm("lock xadd [ebx],eax");
}

/*	Procedure: 0x08048D37 - 0x08048D3B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd4_locked_constant()
{



    asm("lock xadd [ebx],eax");
}

/*	Procedure: 0x08048D3C - 0x08048D9E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd4_locked_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("lock xadd [ebx],eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048D9F - 0x08048DA3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd5_locked()
{



    asm("lock xadd al,al");
}

/*	Procedure: 0x08048DA4 - 0x08048DA8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd5_locked_constant()
{



    asm("lock xadd al,al");
}

/*	Procedure: 0x08048DA9 - 0x08048E0B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xadd5_locked_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("lock xadd al,al");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048E0C - 0x08048E0F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b()
{



    asm("cmpxchg8b [eax]");
}

/*	Procedure: 0x08048E10 - 0x08048E13
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_constant()
{



    asm("cmpxchg8b [eax]");
}

/*	Procedure: 0x08048E14 - 0x08048E75
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("cmpxchg8b [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048E76 - 0x08048E7A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_locked()
{



    asm("lock cmpxchg8b [eax]");
}

/*	Procedure: 0x08048E7B - 0x08048E7F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_locked_constant()
{



    asm("lock cmpxchg8b [eax]");
}

/*	Procedure: 0x08048E80 - 0x08048EE2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmpxchg8b_locked_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("lock cmpxchg8b [eax]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048EE3 - 0x08048EE5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdtsc()
{



    asm("rdtsc");
}

/*	Procedure: 0x08048EE6 - 0x08048EE8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdtsc_constant()
{



    asm("rdtsc");
}

/*	Procedure: 0x08048EE9 - 0x08048F49
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdtsc_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("rdtsc");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048F4A - 0x08048F4C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdmsr()
{



    asm("rdmsr");
}

/*	Procedure: 0x08048F4D - 0x08048F4F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdmsr_constant()
{



    asm("rdmsr");
}

/*	Procedure: 0x08048F50 - 0x08048FB0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rdmsr_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("rdmsr");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08048FB1 - 0x08048FB3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wrmsr()
{



    asm("wrmsr");
}

/*	Procedure: 0x08048FB4 - 0x08048FB6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wrmsr_constant()
{



    asm("wrmsr");
}

/*	Procedure: 0x08048FB7 - 0x08049017
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wrmsr_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("wrmsr");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049018 - 0x0804901C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov1()
{



    asm("cmova ax,bx");
}

/*	Procedure: 0x0804901D - 0x08049021
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov1_constant()
{



    asm("cmova ax,bx");
}

/*	Procedure: 0x08049022 - 0x08049084
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov1_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("cmova ax,bx");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049085 - 0x08049089
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov2()
{



    asm("cmova ax,bx");
}

/*	Procedure: 0x0804908A - 0x0804908E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov2_constant()
{



    asm("cmova ax,bx");
}

/*	Procedure: 0x0804908F - 0x080490F1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov2_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("cmova ax,bx");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080490F2 - 0x080490F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov3()
{



    asm("cmova ax,[ebx+0xc]");
}

/*	Procedure: 0x080490F8 - 0x080490FD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov3_constant()
{



    asm("cmova ax,[ebx+0xc]");
}

/*	Procedure: 0x080490FE - 0x08049161
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov3_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("cmova ax,[ebx+0xc]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049162 - 0x08049166
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov4()
{



    asm("cmova eax,[ebx+0x22]");
}

/*	Procedure: 0x08049167 - 0x0804916B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov4_constant()
{



    asm("cmova eax,[ebx+0x22]");
}

/*	Procedure: 0x0804916C - 0x080491CE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov4_allregs()
{



    eax = *L00001000;
    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    asm("cmova eax,[ebx+0x22]");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080491CF - 0x080491D5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_0()
{



    al :: 2;
    asm("cmovo bx,ax");
}

/*	Procedure: 0x080491D6 - 0x080491DC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_0_constant()
{



    al :: 2;
    asm("cmovo bx,ax");
}

/*	Procedure: 0x080491DD - 0x08049241
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_0_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovo bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049242 - 0x08049248
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_1()
{



    al :: 2;
    asm("cmovno bx,ax");
}

/*	Procedure: 0x08049249 - 0x0804924F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_1_constant()
{



    al :: 2;
    asm("cmovno bx,ax");
}

/*	Procedure: 0x08049250 - 0x080492B4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_1_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovno bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080492B5 - 0x080492BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_2()
{



    al :: 2;
    asm("cmovc bx,ax");
}

/*	Procedure: 0x080492BC - 0x080492C2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_2_constant()
{



    al :: 2;
    asm("cmovc bx,ax");
}

/*	Procedure: 0x080492C3 - 0x08049327
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_2_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovc bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049328 - 0x0804932E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_3()
{



    al :: 2;
    asm("cmovnc bx,ax");
}

/*	Procedure: 0x0804932F - 0x08049335
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_3_constant()
{



    al :: 2;
    asm("cmovnc bx,ax");
}

/*	Procedure: 0x08049336 - 0x0804939A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_3_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovnc bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x0804939B - 0x080493A1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_4()
{



    al :: 2;
    asm("cmovz bx,ax");
}

/*	Procedure: 0x080493A2 - 0x080493A8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_4_constant()
{



    al :: 2;
    asm("cmovz bx,ax");
}

/*	Procedure: 0x080493A9 - 0x0804940D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_4_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovz bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x0804940E - 0x08049414
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_5()
{



    al :: 2;
    asm("cmovnz bx,ax");
}

/*	Procedure: 0x08049415 - 0x0804941B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_5_constant()
{



    al :: 2;
    asm("cmovnz bx,ax");
}

/*	Procedure: 0x0804941C - 0x08049480
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_5_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovnz bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049481 - 0x08049487
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_6()
{



    al :: 2;
    asm("cmovna bx,ax");
}

/*	Procedure: 0x08049488 - 0x0804948E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_6_constant()
{



    al :: 2;
    asm("cmovna bx,ax");
}

/*	Procedure: 0x0804948F - 0x080494F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_6_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovna bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080494F4 - 0x080494FA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_7()
{



    al :: 2;
    asm("cmova bx,ax");
}

/*	Procedure: 0x080494FB - 0x08049501
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_7_constant()
{



    al :: 2;
    asm("cmova bx,ax");
}

/*	Procedure: 0x08049502 - 0x08049566
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_7_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmova bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049567 - 0x0804956D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_8()
{



    al :: 2;
    asm("cmovs bx,ax");
}

/*	Procedure: 0x0804956E - 0x08049574
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_8_constant()
{



    al :: 2;
    asm("cmovs bx,ax");
}

/*	Procedure: 0x08049575 - 0x080495D9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_8_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovs bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080495DA - 0x080495E0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_9()
{



    al :: 2;
    asm("cmovns bx,ax");
}

/*	Procedure: 0x080495E1 - 0x080495E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_9_constant()
{



    al :: 2;
    asm("cmovns bx,ax");
}

/*	Procedure: 0x080495E8 - 0x0804964C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_9_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovns bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x0804964D - 0x08049653
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_a()
{



    al :: 2;
    asm("cmovpe bx,ax");
}

/*	Procedure: 0x08049654 - 0x0804965A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_a_constant()
{



    al :: 2;
    asm("cmovpe bx,ax");
}

/*	Procedure: 0x0804965B - 0x080496BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_a_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovpe bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080496C0 - 0x080496C6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_b()
{



    al :: 2;
    asm("cmovpo bx,ax");
}

/*	Procedure: 0x080496C7 - 0x080496CD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_b_constant()
{



    al :: 2;
    asm("cmovpo bx,ax");
}

/*	Procedure: 0x080496CE - 0x08049732
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_b_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovpo bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049733 - 0x08049739
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_c()
{



    al :: 2;
    asm("cmovl bx,ax");
}

/*	Procedure: 0x0804973A - 0x08049740
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_c_constant()
{



    al :: 2;
    asm("cmovl bx,ax");
}

/*	Procedure: 0x08049741 - 0x080497A5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_c_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovl bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080497A6 - 0x080497AC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_d()
{



    al :: 2;
    asm("cmovnl bx,ax");
}

/*	Procedure: 0x080497AD - 0x080497B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_d_constant()
{



    al :: 2;
    asm("cmovnl bx,ax");
}

/*	Procedure: 0x080497B4 - 0x08049818
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_d_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovnl bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049819 - 0x0804981F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_e()
{



    al :: 2;
    asm("cmovng bx,ax");
}

/*	Procedure: 0x08049820 - 0x08049826
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_e_constant()
{



    al :: 2;
    asm("cmovng bx,ax");
}

/*	Procedure: 0x08049827 - 0x0804988B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_e_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovng bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x0804988C - 0x08049892
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_f()
{



    al :: 2;
    asm("cmovg bx,ax");
}

/*	Procedure: 0x08049893 - 0x08049899
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_f_constant()
{



    al :: 2;
    asm("cmovg bx,ax");
}

/*	Procedure: 0x0804989A - 0x080498FE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_w_with_code_f_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovg bx,ax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080498FF - 0x08049904
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_0()
{



    al :: 2;
    asm("cmovo ebx,eax");
}

/*	Procedure: 0x08049905 - 0x0804990A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_0_constant()
{



    al :: 2;
    asm("cmovo ebx,eax");
}

/*	Procedure: 0x0804990B - 0x0804996E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_0_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovo ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x0804996F - 0x08049974
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_1()
{



    al :: 2;
    asm("cmovno ebx,eax");
}

/*	Procedure: 0x08049975 - 0x0804997A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_1_constant()
{



    al :: 2;
    asm("cmovno ebx,eax");
}

/*	Procedure: 0x0804997B - 0x080499DE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_1_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovno ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x080499DF - 0x080499E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_2()
{



    al :: 2;
    asm("cmovc ebx,eax");
}

/*	Procedure: 0x080499E5 - 0x080499EA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_2_constant()
{



    al :: 2;
    asm("cmovc ebx,eax");
}

/*	Procedure: 0x080499EB - 0x08049A4E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_2_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovc ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049A4F - 0x08049A54
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_3()
{



    al :: 2;
    asm("cmovnc ebx,eax");
}

/*	Procedure: 0x08049A55 - 0x08049A5A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_3_constant()
{



    al :: 2;
    asm("cmovnc ebx,eax");
}

/*	Procedure: 0x08049A5B - 0x08049ABE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_3_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovnc ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049ABF - 0x08049AC4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_4()
{



    al :: 2;
    asm("cmovz ebx,eax");
}

/*	Procedure: 0x08049AC5 - 0x08049ACA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_4_constant()
{



    al :: 2;
    asm("cmovz ebx,eax");
}

/*	Procedure: 0x08049ACB - 0x08049B2E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_4_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovz ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049B2F - 0x08049B34
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_5()
{



    al :: 2;
    asm("cmovnz ebx,eax");
}

/*	Procedure: 0x08049B35 - 0x08049B3A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_5_constant()
{



    al :: 2;
    asm("cmovnz ebx,eax");
}

/*	Procedure: 0x08049B3B - 0x08049B9E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_5_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovnz ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049B9F - 0x08049BA4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_6()
{



    al :: 2;
    asm("cmovna ebx,eax");
}

/*	Procedure: 0x08049BA5 - 0x08049BAA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_6_constant()
{



    al :: 2;
    asm("cmovna ebx,eax");
}

/*	Procedure: 0x08049BAB - 0x08049C0E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_6_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovna ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049C0F - 0x08049C14
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_7()
{



    al :: 2;
    asm("cmova ebx,eax");
}

/*	Procedure: 0x08049C15 - 0x08049C1A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_7_constant()
{



    al :: 2;
    asm("cmova ebx,eax");
}

/*	Procedure: 0x08049C1B - 0x08049C7E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_7_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmova ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049C7F - 0x08049C84
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_8()
{



    al :: 2;
    asm("cmovs ebx,eax");
}

/*	Procedure: 0x08049C85 - 0x08049C8A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_8_constant()
{



    al :: 2;
    asm("cmovs ebx,eax");
}

/*	Procedure: 0x08049C8B - 0x08049CEE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_8_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovs ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049CEF - 0x08049CF4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_9()
{



    al :: 2;
    asm("cmovns ebx,eax");
}

/*	Procedure: 0x08049CF5 - 0x08049CFA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_9_constant()
{



    al :: 2;
    asm("cmovns ebx,eax");
}

/*	Procedure: 0x08049CFB - 0x08049D5E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_9_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovns ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049D5F - 0x08049D64
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_a()
{



    al :: 2;
    asm("cmovpe ebx,eax");
}

/*	Procedure: 0x08049D65 - 0x08049D6A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_a_constant()
{



    al :: 2;
    asm("cmovpe ebx,eax");
}

/*	Procedure: 0x08049D6B - 0x08049DCE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_a_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovpe ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049DCF - 0x08049DD4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_b()
{



    al :: 2;
    asm("cmovpo ebx,eax");
}

/*	Procedure: 0x08049DD5 - 0x08049DDA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_b_constant()
{



    al :: 2;
    asm("cmovpo ebx,eax");
}

/*	Procedure: 0x08049DDB - 0x08049E3E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_b_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovpo ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049E3F - 0x08049E44
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_c()
{



    al :: 2;
    asm("cmovl ebx,eax");
}

/*	Procedure: 0x08049E45 - 0x08049E4A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_c_constant()
{



    al :: 2;
    asm("cmovl ebx,eax");
}

/*	Procedure: 0x08049E4B - 0x08049EAE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_c_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovl ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049EAF - 0x08049EB4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_d()
{



    al :: 2;
    asm("cmovnl ebx,eax");
}

/*	Procedure: 0x08049EB5 - 0x08049EBA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_d_constant()
{



    al :: 2;
    asm("cmovnl ebx,eax");
}

/*	Procedure: 0x08049EBB - 0x08049F1E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_d_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovnl ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049F1F - 0x08049F24
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_e()
{



    al :: 2;
    asm("cmovng ebx,eax");
}

/*	Procedure: 0x08049F25 - 0x08049F2A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_e_constant()
{



    al :: 2;
    asm("cmovng ebx,eax");
}

/*	Procedure: 0x08049F2B - 0x08049F8E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_e_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovng ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049F8F - 0x08049F94
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_f()
{



    al :: 2;
    asm("cmovg ebx,eax");
}

/*	Procedure: 0x08049F95 - 0x08049F9A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_f_constant()
{



    al :: 2;
    asm("cmovg ebx,eax");
}

/*	Procedure: 0x08049F9B - 0x08049FFE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmov_l_with_code_f_allregs()
{



    ebx = *L00001004;
    ecx = *L00001008;
    edx = *L0000100C;
    ebp = *L00001010;
    esi = *L00001014;
    edi = *L00001018;
    esp = *L0000101C;
    *L00001000 :: 2;
    asm("cmovg ebx,eax");
    *L00002000 = eax;
    *L00002004 = ebx;
    *L00002008 = ecx;
    *L0000200C = edx;
    *L00002010 = ebp;
    *L00002014 = esi;
    *L00002018 = edi;
    *L0000201C = esp;
}

/*	Procedure: 0x08049FFF - 0x0804A3DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    bswap();
    bswap_constant();
    bswap_allregs();
    cmpxchg1();
    cmpxchg1_constant();
    cmpxchg1_allregs();
    cmpxchg2();
    cmpxchg2_constant();
    cmpxchg2_allregs();
    cmpxchg3();
    cmpxchg3_constant();
    cmpxchg3_allregs();
    cmpxchg4();
    cmpxchg4_constant();
    cmpxchg4_allregs();
    cmpxchg5();
    cmpxchg5_constant();
    cmpxchg5_allregs();
    cmpxchg1_locked();
    cmpxchg1_locked_constant();
    cmpxchg1_locked_allregs();
    cmpxchg2_locked();
    cmpxchg2_locked_constant();
    cmpxchg2_locked_allregs();
    cmpxchg3_locked();
    cmpxchg3_locked_constant();
    cmpxchg3_locked_allregs();
    cmpxchg4_locked();
    cmpxchg4_locked_constant();
    cmpxchg4_locked_allregs();
    cmpxchg5_locked();
    cmpxchg5_locked_constant();
    cmpxchg5_locked_allregs();
    cpuid();
    cpuid_constant();
    cpuid_allregs();
    invd();
    invd_constant();
    invd_allregs();
    invlpg();
    invlpg_constant();
    invlpg_allregs();
    wbinvd();
    wbinvd_constant();
    wbinvd_allregs();
    xadd1();
    xadd1_constant();
    xadd1_allregs();
    xadd2();
    xadd2_constant();
    xadd2_allregs();
    xadd3();
    xadd3_constant();
    xadd3_allregs();
    xadd4();
    xadd4_constant();
    xadd4_allregs();
    xadd5();
    xadd5_constant();
    xadd5_allregs();
    xadd1_locked();
    xadd1_locked_constant();
    xadd1_locked_allregs();
    xadd2_locked();
    xadd2_locked_constant();
    xadd2_locked_allregs();
    xadd3_locked();
    xadd3_locked_constant();
    xadd3_locked_allregs();
    xadd4_locked();
    xadd4_locked_constant();
    xadd4_locked_allregs();
    xadd5_locked();
    xadd5_locked_constant();
    xadd5_locked_allregs();
    cmpxchg8b();
    cmpxchg8b_constant();
    cmpxchg8b_allregs();
    cmpxchg8b_locked();
    cmpxchg8b_locked_constant();
    cmpxchg8b_locked_allregs();
    rdtsc();
    rdtsc_constant();
    rdtsc_allregs();
    rdmsr();
    rdmsr_constant();
    rdmsr_allregs();
    wrmsr();
    wrmsr_constant();
    wrmsr_allregs();
    cmov1();
    cmov1_constant();
    cmov1_allregs();
    cmov2();
    cmov2_constant();
    cmov2_allregs();
    cmov3();
    cmov3_constant();
    cmov3_allregs();
    cmov4();
    cmov4_constant();
    cmov4_allregs();
    cmov_w_with_code_0();
    cmov_w_with_code_0_constant();
    cmov_w_with_code_0_allregs();
    cmov_w_with_code_1();
    cmov_w_with_code_1_constant();
    cmov_w_with_code_1_allregs();
    cmov_w_with_code_2();
    cmov_w_with_code_2_constant();
    cmov_w_with_code_2_allregs();
    cmov_w_with_code_3();
    cmov_w_with_code_3_constant();
    cmov_w_with_code_3_allregs();
    cmov_w_with_code_4();
    cmov_w_with_code_4_constant();
    cmov_w_with_code_4_allregs();
    cmov_w_with_code_5();
    cmov_w_with_code_5_constant();
    cmov_w_with_code_5_allregs();
    cmov_w_with_code_6();
    cmov_w_with_code_6_constant();
    cmov_w_with_code_6_allregs();
    cmov_w_with_code_7();
    cmov_w_with_code_7_constant();
    cmov_w_with_code_7_allregs();
    cmov_w_with_code_8();
    cmov_w_with_code_8_constant();
    cmov_w_with_code_8_allregs();
    cmov_w_with_code_9();
    cmov_w_with_code_9_constant();
    cmov_w_with_code_9_allregs();
    cmov_w_with_code_a();
    cmov_w_with_code_a_constant();
    cmov_w_with_code_a_allregs();
    cmov_w_with_code_b();
    cmov_w_with_code_b_constant();
    cmov_w_with_code_b_allregs();
    cmov_w_with_code_c();
    cmov_w_with_code_c_constant();
    cmov_w_with_code_c_allregs();
    cmov_w_with_code_d();
    cmov_w_with_code_d_constant();
    cmov_w_with_code_d_allregs();
    cmov_w_with_code_e();
    cmov_w_with_code_e_constant();
    cmov_w_with_code_e_allregs();
    cmov_w_with_code_f();
    cmov_w_with_code_f_constant();
    cmov_w_with_code_f_allregs();
    cmov_l_with_code_0();
    cmov_l_with_code_0_constant();
    cmov_l_with_code_0_allregs();
    cmov_l_with_code_1();
    cmov_l_with_code_1_constant();
    cmov_l_with_code_1_allregs();
    cmov_l_with_code_2();
    cmov_l_with_code_2_constant();
    cmov_l_with_code_2_allregs();
    cmov_l_with_code_3();
    cmov_l_with_code_3_constant();
    cmov_l_with_code_3_allregs();
    cmov_l_with_code_4();
    cmov_l_with_code_4_constant();
    cmov_l_with_code_4_allregs();
    cmov_l_with_code_5();
    cmov_l_with_code_5_constant();
    cmov_l_with_code_5_allregs();
    cmov_l_with_code_6();
    cmov_l_with_code_6_constant();
    cmov_l_with_code_6_allregs();
    cmov_l_with_code_7();
    cmov_l_with_code_7_constant();
    cmov_l_with_code_7_allregs();
    cmov_l_with_code_8();
    cmov_l_with_code_8_constant();
    cmov_l_with_code_8_allregs();
    cmov_l_with_code_9();
    cmov_l_with_code_9_constant();
    cmov_l_with_code_9_allregs();
    cmov_l_with_code_a();
    cmov_l_with_code_a_constant();
    cmov_l_with_code_a_allregs();
    cmov_l_with_code_b();
    cmov_l_with_code_b_constant();
    cmov_l_with_code_b_allregs();
    cmov_l_with_code_c();
    cmov_l_with_code_c_constant();
    cmov_l_with_code_c_allregs();
    cmov_l_with_code_d();
    cmov_l_with_code_d_constant();
    cmov_l_with_code_d_allregs();
    cmov_l_with_code_e();
    cmov_l_with_code_e_constant();
    cmov_l_with_code_e_allregs();
    cmov_l_with_code_f();
    cmov_l_with_code_f_constant();
    cmov_l_with_code_f_allregs();
}

/*	Procedure: 0x0804A3E0 - 0x0804A3E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x0804A3E5 - 0x0804A3EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804A3E5()
{



}

/*	Procedure: 0x0804A3F0 - 0x0804A449
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

/*	Procedure: 0x0804A44A - 0x0804A44D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__i686.get_pc_thunk.bx()
{



    ebx = *esp;
}

/*	Procedure: 0x0804A44E - 0x0804A44F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804A44E()
{



}

/*	Procedure: 0x0804A450 - 0x0804A479
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

/*	Procedure: 0x0804A47A - 0x0804A47B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804A47A()
{



}

/*	Procedure: 0x0804A47C - 0x0804A497
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L0804a488();
    (restore)ebx;
    ebx = ebx + 4508;
    (restore)ecx;
    return(__do_global_dtors_aux());
}

/*	Procedure: 0x0804A498 - 0x00000000
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
/* 0x08048394       3 */ /* unknown */ void 	bswap;
/* 0x08048397       3 */ /* unknown */ void 	bswap_constant;
/* 0x0804839a      97 */ /* unknown */ void 	bswap_allregs;
/* 0x080483fb       4 */ /* unknown */ void 	cmpxchg1;
/* 0x080483ff       4 */ /* unknown */ void 	cmpxchg1_constant;
/* 0x08048403      98 */ /* unknown */ void 	cmpxchg1_allregs;
/* 0x08048465       5 */ /* unknown */ void 	cmpxchg2;
/* 0x0804846a       5 */ /* unknown */ void 	cmpxchg2_constant;
/* 0x0804846f      99 */ /* unknown */ void 	cmpxchg2_allregs;
/* 0x080484d2       4 */ /* unknown */ void 	cmpxchg3;
/* 0x080484d6       4 */ /* unknown */ void 	cmpxchg3_constant;
/* 0x080484da      98 */ /* unknown */ void 	cmpxchg3_allregs;
/* 0x0804853c       4 */ /* unknown */ void 	cmpxchg4;
/* 0x08048540       4 */ /* unknown */ void 	cmpxchg4_constant;
/* 0x08048544      98 */ /* unknown */ void 	cmpxchg4_allregs;
/* 0x080485a6       4 */ /* unknown */ void 	cmpxchg5;
/* 0x080485aa       4 */ /* unknown */ void 	cmpxchg5_constant;
/* 0x080485ae      98 */ /* unknown */ void 	cmpxchg5_allregs;
/* 0x08048610       5 */ /* unknown */ void 	cmpxchg1_locked;
/* 0x08048615       5 */ /* unknown */ void 	cmpxchg1_locked_constant;
/* 0x0804861a      99 */ /* unknown */ void 	cmpxchg1_locked_allregs;
/* 0x0804867d       6 */ /* unknown */ void 	cmpxchg2_locked;
/* 0x08048683       6 */ /* unknown */ void 	cmpxchg2_locked_constant;
/* 0x08048689     100 */ /* unknown */ void 	cmpxchg2_locked_allregs;
/* 0x080486ed       5 */ /* unknown */ void 	cmpxchg3_locked;
/* 0x080486f2       5 */ /* unknown */ void 	cmpxchg3_locked_constant;
/* 0x080486f7      99 */ /* unknown */ void 	cmpxchg3_locked_allregs;
/* 0x0804875a       5 */ /* unknown */ void 	cmpxchg4_locked;
/* 0x0804875f       5 */ /* unknown */ void 	cmpxchg4_locked_constant;
/* 0x08048764      99 */ /* unknown */ void 	cmpxchg4_locked_allregs;
/* 0x080487c7       5 */ /* unknown */ void 	cmpxchg5_locked;
/* 0x080487cc       5 */ /* unknown */ void 	cmpxchg5_locked_constant;
/* 0x080487d1      99 */ /* unknown */ void 	cmpxchg5_locked_allregs;
/* 0x08048834       3 */ /* unknown */ void 	cpuid;
/* 0x08048837       3 */ /* unknown */ void 	cpuid_constant;
/* 0x0804883a      97 */ /* unknown */ void 	cpuid_allregs;
/* 0x0804889b       3 */ /* unknown */ void 	invd;
/* 0x0804889e       3 */ /* unknown */ void 	invd_constant;
/* 0x080488a1      97 */ /* unknown */ void 	invd_allregs;
/* 0x08048902       4 */ /* unknown */ void 	invlpg;
/* 0x08048906       4 */ /* unknown */ void 	invlpg_constant;
/* 0x0804890a      98 */ /* unknown */ void 	invlpg_allregs;
/* 0x0804896c       3 */ /* unknown */ void 	wbinvd;
/* 0x0804896f       3 */ /* unknown */ void 	wbinvd_constant;
/* 0x08048972      97 */ /* unknown */ void 	wbinvd_allregs;
/* 0x080489d3       4 */ /* unknown */ void 	xadd1;
/* 0x080489d7       4 */ /* unknown */ void 	xadd1_constant;
/* 0x080489db      98 */ /* unknown */ void 	xadd1_allregs;
/* 0x08048a3d       5 */ /* unknown */ void 	xadd2;
/* 0x08048a42       5 */ /* unknown */ void 	xadd2_constant;
/* 0x08048a47      99 */ /* unknown */ void 	xadd2_allregs;
/* 0x08048aaa       4 */ /* unknown */ void 	xadd3;
/* 0x08048aae       4 */ /* unknown */ void 	xadd3_constant;
/* 0x08048ab2      98 */ /* unknown */ void 	xadd3_allregs;
/* 0x08048b14       4 */ /* unknown */ void 	xadd4;
/* 0x08048b18       4 */ /* unknown */ void 	xadd4_constant;
/* 0x08048b1c      98 */ /* unknown */ void 	xadd4_allregs;
/* 0x08048b7e       4 */ /* unknown */ void 	xadd5;
/* 0x08048b82       4 */ /* unknown */ void 	xadd5_constant;
/* 0x08048b86      98 */ /* unknown */ void 	xadd5_allregs;
/* 0x08048be8       5 */ /* unknown */ void 	xadd1_locked;
/* 0x08048bed       5 */ /* unknown */ void 	xadd1_locked_constant;
/* 0x08048bf2      99 */ /* unknown */ void 	xadd1_locked_allregs;
/* 0x08048c55       6 */ /* unknown */ void 	xadd2_locked;
/* 0x08048c5b       6 */ /* unknown */ void 	xadd2_locked_constant;
/* 0x08048c61     100 */ /* unknown */ void 	xadd2_locked_allregs;
/* 0x08048cc5       5 */ /* unknown */ void 	xadd3_locked;
/* 0x08048cca       5 */ /* unknown */ void 	xadd3_locked_constant;
/* 0x08048ccf      99 */ /* unknown */ void 	xadd3_locked_allregs;
/* 0x08048d32       5 */ /* unknown */ void 	xadd4_locked;
/* 0x08048d37       5 */ /* unknown */ void 	xadd4_locked_constant;
/* 0x08048d3c      99 */ /* unknown */ void 	xadd4_locked_allregs;
/* 0x08048d9f       5 */ /* unknown */ void 	xadd5_locked;
/* 0x08048da4       5 */ /* unknown */ void 	xadd5_locked_constant;
/* 0x08048da9      99 */ /* unknown */ void 	xadd5_locked_allregs;
/* 0x08048e0c       4 */ /* unknown */ void 	cmpxchg8b;
/* 0x08048e10       4 */ /* unknown */ void 	cmpxchg8b_constant;
/* 0x08048e14      98 */ /* unknown */ void 	cmpxchg8b_allregs;
/* 0x08048e76       5 */ /* unknown */ void 	cmpxchg8b_locked;
/* 0x08048e7b       5 */ /* unknown */ void 	cmpxchg8b_locked_constant;
/* 0x08048e80      99 */ /* unknown */ void 	cmpxchg8b_locked_allregs;
/* 0x08048ee3       3 */ /* unknown */ void 	rdtsc;
/* 0x08048ee6       3 */ /* unknown */ void 	rdtsc_constant;
/* 0x08048ee9      97 */ /* unknown */ void 	rdtsc_allregs;
/* 0x08048f4a       3 */ /* unknown */ void 	rdmsr;
/* 0x08048f4d       3 */ /* unknown */ void 	rdmsr_constant;
/* 0x08048f50      97 */ /* unknown */ void 	rdmsr_allregs;
/* 0x08048fb1       3 */ /* unknown */ void 	wrmsr;
/* 0x08048fb4       3 */ /* unknown */ void 	wrmsr_constant;
/* 0x08048fb7      97 */ /* unknown */ void 	wrmsr_allregs;
/* 0x08049018       5 */ /* unknown */ void 	cmov1;
/* 0x0804901d       5 */ /* unknown */ void 	cmov1_constant;
/* 0x08049022      99 */ /* unknown */ void 	cmov1_allregs;
/* 0x08049085       5 */ /* unknown */ void 	cmov2;
/* 0x0804908a       5 */ /* unknown */ void 	cmov2_constant;
/* 0x0804908f      99 */ /* unknown */ void 	cmov2_allregs;
/* 0x080490f2       6 */ /* unknown */ void 	cmov3;
/* 0x080490f8       6 */ /* unknown */ void 	cmov3_constant;
/* 0x080490fe     100 */ /* unknown */ void 	cmov3_allregs;
/* 0x08049162       5 */ /* unknown */ void 	cmov4;
/* 0x08049167       5 */ /* unknown */ void 	cmov4_constant;
/* 0x0804916c      99 */ /* unknown */ void 	cmov4_allregs;
/* 0x080491cf       7 */ /* unknown */ void 	cmov_w_with_code_0;
/* 0x080491d6       7 */ /* unknown */ void 	cmov_w_with_code_0_constant;
/* 0x080491dd     101 */ /* unknown */ void 	cmov_w_with_code_0_allregs;
/* 0x08049242       7 */ /* unknown */ void 	cmov_w_with_code_1;
/* 0x08049249       7 */ /* unknown */ void 	cmov_w_with_code_1_constant;
/* 0x08049250     101 */ /* unknown */ void 	cmov_w_with_code_1_allregs;
/* 0x080492b5       7 */ /* unknown */ void 	cmov_w_with_code_2;
/* 0x080492bc       7 */ /* unknown */ void 	cmov_w_with_code_2_constant;
/* 0x080492c3     101 */ /* unknown */ void 	cmov_w_with_code_2_allregs;
/* 0x08049328       7 */ /* unknown */ void 	cmov_w_with_code_3;
/* 0x0804932f       7 */ /* unknown */ void 	cmov_w_with_code_3_constant;
/* 0x08049336     101 */ /* unknown */ void 	cmov_w_with_code_3_allregs;
/* 0x0804939b       7 */ /* unknown */ void 	cmov_w_with_code_4;
/* 0x080493a2       7 */ /* unknown */ void 	cmov_w_with_code_4_constant;
/* 0x080493a9     101 */ /* unknown */ void 	cmov_w_with_code_4_allregs;
/* 0x0804940e       7 */ /* unknown */ void 	cmov_w_with_code_5;
/* 0x08049415       7 */ /* unknown */ void 	cmov_w_with_code_5_constant;
/* 0x0804941c     101 */ /* unknown */ void 	cmov_w_with_code_5_allregs;
/* 0x08049481       7 */ /* unknown */ void 	cmov_w_with_code_6;
/* 0x08049488       7 */ /* unknown */ void 	cmov_w_with_code_6_constant;
/* 0x0804948f     101 */ /* unknown */ void 	cmov_w_with_code_6_allregs;
/* 0x080494f4       7 */ /* unknown */ void 	cmov_w_with_code_7;
/* 0x080494fb       7 */ /* unknown */ void 	cmov_w_with_code_7_constant;
/* 0x08049502     101 */ /* unknown */ void 	cmov_w_with_code_7_allregs;
/* 0x08049567       7 */ /* unknown */ void 	cmov_w_with_code_8;
/* 0x0804956e       7 */ /* unknown */ void 	cmov_w_with_code_8_constant;
/* 0x08049575     101 */ /* unknown */ void 	cmov_w_with_code_8_allregs;
/* 0x080495da       7 */ /* unknown */ void 	cmov_w_with_code_9;
/* 0x080495e1       7 */ /* unknown */ void 	cmov_w_with_code_9_constant;
/* 0x080495e8     101 */ /* unknown */ void 	cmov_w_with_code_9_allregs;
/* 0x0804964d       7 */ /* unknown */ void 	cmov_w_with_code_a;
/* 0x08049654       7 */ /* unknown */ void 	cmov_w_with_code_a_constant;
/* 0x0804965b     101 */ /* unknown */ void 	cmov_w_with_code_a_allregs;
/* 0x080496c0       7 */ /* unknown */ void 	cmov_w_with_code_b;
/* 0x080496c7       7 */ /* unknown */ void 	cmov_w_with_code_b_constant;
/* 0x080496ce     101 */ /* unknown */ void 	cmov_w_with_code_b_allregs;
/* 0x08049733       7 */ /* unknown */ void 	cmov_w_with_code_c;
/* 0x0804973a       7 */ /* unknown */ void 	cmov_w_with_code_c_constant;
/* 0x08049741     101 */ /* unknown */ void 	cmov_w_with_code_c_allregs;
/* 0x080497a6       7 */ /* unknown */ void 	cmov_w_with_code_d;
/* 0x080497ad       7 */ /* unknown */ void 	cmov_w_with_code_d_constant;
/* 0x080497b4     101 */ /* unknown */ void 	cmov_w_with_code_d_allregs;
/* 0x08049819       7 */ /* unknown */ void 	cmov_w_with_code_e;
/* 0x08049820       7 */ /* unknown */ void 	cmov_w_with_code_e_constant;
/* 0x08049827     101 */ /* unknown */ void 	cmov_w_with_code_e_allregs;
/* 0x0804988c       7 */ /* unknown */ void 	cmov_w_with_code_f;
/* 0x08049893       7 */ /* unknown */ void 	cmov_w_with_code_f_constant;
/* 0x0804989a     101 */ /* unknown */ void 	cmov_w_with_code_f_allregs;
/* 0x080498ff       6 */ /* unknown */ void 	cmov_l_with_code_0;
/* 0x08049905       6 */ /* unknown */ void 	cmov_l_with_code_0_constant;
/* 0x0804990b     100 */ /* unknown */ void 	cmov_l_with_code_0_allregs;
/* 0x0804996f       6 */ /* unknown */ void 	cmov_l_with_code_1;
/* 0x08049975       6 */ /* unknown */ void 	cmov_l_with_code_1_constant;
/* 0x0804997b     100 */ /* unknown */ void 	cmov_l_with_code_1_allregs;
/* 0x080499df       6 */ /* unknown */ void 	cmov_l_with_code_2;
/* 0x080499e5       6 */ /* unknown */ void 	cmov_l_with_code_2_constant;
/* 0x080499eb     100 */ /* unknown */ void 	cmov_l_with_code_2_allregs;
/* 0x08049a4f       6 */ /* unknown */ void 	cmov_l_with_code_3;
/* 0x08049a55       6 */ /* unknown */ void 	cmov_l_with_code_3_constant;
/* 0x08049a5b     100 */ /* unknown */ void 	cmov_l_with_code_3_allregs;
/* 0x08049abf       6 */ /* unknown */ void 	cmov_l_with_code_4;
/* 0x08049ac5       6 */ /* unknown */ void 	cmov_l_with_code_4_constant;
/* 0x08049acb     100 */ /* unknown */ void 	cmov_l_with_code_4_allregs;
/* 0x08049b2f       6 */ /* unknown */ void 	cmov_l_with_code_5;
/* 0x08049b35       6 */ /* unknown */ void 	cmov_l_with_code_5_constant;
/* 0x08049b3b     100 */ /* unknown */ void 	cmov_l_with_code_5_allregs;
/* 0x08049b9f       6 */ /* unknown */ void 	cmov_l_with_code_6;
/* 0x08049ba5       6 */ /* unknown */ void 	cmov_l_with_code_6_constant;
/* 0x08049bab     100 */ /* unknown */ void 	cmov_l_with_code_6_allregs;
/* 0x08049c0f       6 */ /* unknown */ void 	cmov_l_with_code_7;
/* 0x08049c15       6 */ /* unknown */ void 	cmov_l_with_code_7_constant;
/* 0x08049c1b     100 */ /* unknown */ void 	cmov_l_with_code_7_allregs;
/* 0x08049c7f       6 */ /* unknown */ void 	cmov_l_with_code_8;
/* 0x08049c85       6 */ /* unknown */ void 	cmov_l_with_code_8_constant;
/* 0x08049c8b     100 */ /* unknown */ void 	cmov_l_with_code_8_allregs;
/* 0x08049cef       6 */ /* unknown */ void 	cmov_l_with_code_9;
/* 0x08049cf5       6 */ /* unknown */ void 	cmov_l_with_code_9_constant;
/* 0x08049cfb     100 */ /* unknown */ void 	cmov_l_with_code_9_allregs;
/* 0x08049d5f       6 */ /* unknown */ void 	cmov_l_with_code_a;
/* 0x08049d65       6 */ /* unknown */ void 	cmov_l_with_code_a_constant;
/* 0x08049d6b     100 */ /* unknown */ void 	cmov_l_with_code_a_allregs;
/* 0x08049dcf       6 */ /* unknown */ void 	cmov_l_with_code_b;
/* 0x08049dd5       6 */ /* unknown */ void 	cmov_l_with_code_b_constant;
/* 0x08049ddb     100 */ /* unknown */ void 	cmov_l_with_code_b_allregs;
/* 0x08049e3f       6 */ /* unknown */ void 	cmov_l_with_code_c;
/* 0x08049e45       6 */ /* unknown */ void 	cmov_l_with_code_c_constant;
/* 0x08049e4b     100 */ /* unknown */ void 	cmov_l_with_code_c_allregs;
/* 0x08049eaf       6 */ /* unknown */ void 	cmov_l_with_code_d;
/* 0x08049eb5       6 */ /* unknown */ void 	cmov_l_with_code_d_constant;
/* 0x08049ebb     100 */ /* unknown */ void 	cmov_l_with_code_d_allregs;
/* 0x08049f1f       6 */ /* unknown */ void 	cmov_l_with_code_e;
/* 0x08049f25       6 */ /* unknown */ void 	cmov_l_with_code_e_constant;
/* 0x08049f2b     100 */ /* unknown */ void 	cmov_l_with_code_e_allregs;
/* 0x08049f8f       6 */ /* unknown */ void 	cmov_l_with_code_f;
/* 0x08049f95       6 */ /* unknown */ void 	cmov_l_with_code_f_constant;
/* 0x08049f9b     100 */ /* unknown */ void 	cmov_l_with_code_f_allregs;
/* 0x08049fff     993 */ /* unknown */ void 	main;
/* 0x0804a3e0      16 */ /* unknown */ void 	__libc_csu_fini;
/* 0x0804a3f0      90 */ /* unknown */ void 	__libc_csu_init;
/* 0x0804a44a       6 */ /* unknown */ void 	__i686.get_pc_thunk.bx;
/* 0x0804a450      44 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0804a47c       0 */ /* unknown */ void 	_fini;
/* 0x0804a498       4 */ /* unknown */ void 	_fp_hw;
/* 0x0804a49c       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x0804a4a0       0 */ /* unknown */ void 	__dso_handle;
/* 0x0804a540       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0804b544       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x0804b544       0 */ /* unknown */ void 	__init_array_end;
/* 0x0804b544       0 */ /* unknown */ void 	__init_array_start;
/* 0x0804b548       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804b54c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x0804b550       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x0804b554       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x0804b554       0 */ /* unknown */ void 	__JCR_END__;
/* 0x0804b558       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x0804b624       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0804b638       0 */ /* unknown */ void 	data_start;
/* 0x0804b638       0 */ /* unknown */ void 	__data_start;
/* 0x0804b63c       1 */ /* unknown */ void 	completed.5978;
/* 0x0804b640       4 */ /* unknown */ void 	dtor_idx.5980;
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
