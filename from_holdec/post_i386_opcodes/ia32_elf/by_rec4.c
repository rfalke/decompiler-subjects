L08048274()
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __esp = __esp - 4;
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 13220 + -4)) != 0) {
        __gmon_start__();
    }
    L08048370();
    L0804A450();
    _pop(__eax);
    return;
}

L08048280()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 13220 + -4)) != 0) {
        __gmon_start__();
    }
    L08048370();
    L0804A450();
    _pop(__eax);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

__gmon_start__()
{// addr = 0x080482B4
    goto __imp____gmon_start__;
}

__libc_start_main()
{// addr = 0x080482C4
    goto __imp____libc_start_main;
}

L08048370()
{
    _unknown_ __ebp;

    __eax =  *134526292;
    if( *134526292 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
     *__esp = 134526292;
     *__eax();
    return;
}

L08048394()
{
    asm("bswap eax");
    return;
}

L08048397()
{
    asm("bswap eax");
    return;
}

L0804839A()
{
    asm("bswap eax");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080483FB()
{
    asm("cmpxchg bl, al");
    return;
}

L080483FF()
{
    asm("cmpxchg bl, al");
    return;
}

L08048403()
{
    asm("cmpxchg bl, al");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048465()
{
    asm("cmpxchg bx, ax");
    return;
}

L0804846A()
{
    asm("cmpxchg bx, ax");
    return;
}

L0804846F()
{
    asm("cmpxchg bx, ax");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080484D2()
{
    asm("cmpxchg ebx, eax");
    return;
}

L080484D6()
{
    asm("cmpxchg ebx, eax");
    return;
}

L080484DA()
{
    asm("cmpxchg ebx, eax");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L0804853C()
{
    asm("cmpxchg [ebx], eax");
    return;
}

L08048540()
{
    asm("cmpxchg [ebx], eax");
    return;
}

L08048544()
{
    asm("cmpxchg [ebx], eax");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080485A6()
{
    asm("cmpxchg al, al");
    return;
}

L080485AA()
{
    asm("cmpxchg al, al");
    return;
}

L080485AE()
{
    asm("cmpxchg al, al");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048610()
{
    asm("lock cmpxchg bl, al");
    return;
}

L08048615()
{
    asm("lock cmpxchg bl, al");
    return;
}

L0804861A()
{
    asm("lock cmpxchg bl, al");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L0804867D()
{
    asm("lock cmpxchg bx, ax");
    return;
}

L08048683()
{
    asm("lock cmpxchg bx, ax");
    return;
}

L08048689()
{
    asm("lock cmpxchg bx, ax");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080486ED()
{
    asm("lock cmpxchg ebx, eax");
    return;
}

L080486F2()
{
    asm("lock cmpxchg ebx, eax");
    return;
}

L080486F7()
{
    asm("lock cmpxchg ebx, eax");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L0804875A()
{
    asm("lock cmpxchg [ebx], eax");
    return;
}

L0804875F()
{
    asm("lock cmpxchg [ebx], eax");
    return;
}

L08048764()
{
    asm("lock cmpxchg [ebx], eax");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080487C7()
{
    asm("lock cmpxchg al, al");
    return;
}

L080487CC()
{
    asm("lock cmpxchg al, al");
    return;
}

L080487D1()
{
    asm("lock cmpxchg al, al");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048834()
{
    asm("cpuid ");
    return;
}

L08048837()
{
    asm("cpuid ");
    return;
}

L0804883A()
{
    asm("cpuid ");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L0804889B()
{
    asm("invd ");
    return;
}

L0804889E()
{
    asm("invd ");
    return;
}

L080488A1()
{
    asm("invd ");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048902()
{
    asm("invlpg [eax]");
    return;
}

L08048906()
{
    asm("invlpg [eax]");
    return;
}

L0804890A()
{
    asm("invlpg [eax]");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L0804896C()
{
    asm("wbinvd ");
    return;
}

L0804896F()
{
    asm("wbinvd ");
    return;
}

L08048972()
{
    asm("wbinvd ");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080489D3()
{
    asm("xadd bl, al");
    return;
}

L080489D7()
{
    asm("xadd bl, al");
    return;
}

L080489DB()
{
    asm("xadd bl, al");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048A3D()
{
    asm("xadd ebx, eax");
    return;
}

L08048A42()
{
    asm("xadd ebx, eax");
    return;
}

L08048A47()
{
    asm("xadd ebx, eax");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048AAA()
{
    asm("xadd ebx, eax");
    return;
}

L08048AAE()
{
    asm("xadd ebx, eax");
    return;
}

L08048AB2()
{
    asm("xadd ebx, eax");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048B14()
{
    asm("xadd [ebx], eax");
    return;
}

L08048B18()
{
    asm("xadd [ebx], eax");
    return;
}

L08048B1C()
{
    asm("xadd [ebx], eax");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048B7E()
{
    asm("xadd al, al");
    return;
}

L08048B82()
{
    asm("xadd al, al");
    return;
}

L08048B86()
{
    asm("xadd al, al");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048BE8()
{
    asm("lock xadd bl, al");
    return;
}

L08048BED()
{
    asm("lock xadd bl, al");
    return;
}

L08048BF2()
{
    asm("lock xadd bl, al");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048C55()
{
    asm("lock xadd ebx, eax");
    return;
}

L08048C5B()
{
    asm("lock xadd ebx, eax");
    return;
}

L08048C61()
{
    asm("lock xadd ebx, eax");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048CC5()
{
    asm("lock xadd ebx, eax");
    return;
}

L08048CCA()
{
    asm("lock xadd ebx, eax");
    return;
}

L08048CCF()
{
    asm("lock xadd ebx, eax");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048D32()
{
    asm("lock xadd [ebx], eax");
    return;
}

L08048D37()
{
    asm("lock xadd [ebx], eax");
    return;
}

L08048D3C()
{
    asm("lock xadd [ebx], eax");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048D9F()
{
    asm("lock xadd al, al");
    return;
}

L08048DA4()
{
    asm("lock xadd al, al");
    return;
}

L08048DA9()
{
    asm("lock xadd al, al");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048E0C()
{
    asm("cmpxchg8b [eax]");
    return;
}

L08048E10()
{
    asm("cmpxchg8b [eax]");
    return;
}

L08048E14()
{
    asm("cmpxchg8b [eax]");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048E76()
{
    asm("lock cmpxchg8b [eax]");
    return;
}

L08048E7B()
{
    asm("lock cmpxchg8b [eax]");
    return;
}

L08048E80()
{
    asm("lock cmpxchg8b [eax]");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048EE3()
{
    asm("rdtsc ");
    return;
}

L08048EE6()
{
    asm("rdtsc ");
    return;
}

L08048EE9()
{
    asm("rdtsc ");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048F4A()
{
    asm("rdmsr ");
    return;
}

L08048F4D()
{
    asm("rdmsr ");
    return;
}

L08048F50()
{
    asm("rdmsr ");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08048FB1()
{
    asm("wrmsr ");
    return;
}

L08048FB4()
{
    asm("wrmsr ");
    return;
}

L08048FB7()
{
    asm("wrmsr ");
     *8192 =  *4096;
     *8196 =  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049018(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    _t1 =  >  ? __ebx & 4294967295 : __eax & 4294967295;
    return;
}

L0804901D(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    _t1 =  >  ? __ebx & 4294967295 : __eax & 4294967295;
    return;
}

L08049022()
{
    __eax =  *4096;
    __ebx =  *4100;
    _t1 =  >  ? __ebx & 4294967295 : __eax & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049085(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    _t1 =  >  ? __ebx & 4294967295 : __eax & 4294967295;
    return;
}

L0804908A(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    _t1 =  >  ? __ebx & 4294967295 : __eax & 4294967295;
    return;
}

L0804908F()
{
    __eax =  *4096;
    __ebx =  *4100;
    _t1 =  >  ? __ebx & 4294967295 : __eax & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080490F2(signed int __eax, _unknown_ __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    _t1 =  >  ?  *((void*)(__ebx + 12)) : __eax & 4294967295;
    return;
}

L080490F8(signed int __eax, _unknown_ __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    _t1 =  >  ?  *((void*)(__ebx + 12)) : __eax & 4294967295;
    return;
}

L080490FE()
{
    __eax =  *4096;
    __ebx =  *4100;
    _t1 =  >  ?  *((void*)(__ebx + 12)) : __eax & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049162(_unknown_ __eax, _unknown_ __ebx)
{
    __ebx = __ebx;
    _t3 =  >  ?  *((void*)(__ebx + 34)) : __eax;
    return  >  ?  *((void*)(__ebx + 34)) : __eax;
}

L08049167(_unknown_ __eax, _unknown_ __ebx)
{
    __ebx = __ebx;
    _t3 =  >  ?  *((void*)(__ebx + 34)) : __eax;
    return  >  ?  *((void*)(__ebx + 34)) : __eax;
}

L0804916C()
{
    __ebx =  *4100;
    _t3 =  >  ?  *((void*)(__ebx + 34)) :  *4096;
     *8192 =  >  ?  *((void*)(__ebx + 34)) :  *4096;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080491CF(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L080491D6(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L080491DD()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049242(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L08049249(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L08049250()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080492B5(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags < 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L080492BC(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags < 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L080492C3()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags < 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049328(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L0804932F(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L08049336()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L0804939B(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags == 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L080493A2(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags == 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L080493A9()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags == 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L0804940E(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags != 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L08049415(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags != 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L0804941C()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags != 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049481(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags <= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L08049488(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags <= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L0804948F()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags <= 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080494F4(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags > 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L080494FB(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags > 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L08049502()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags > 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049567(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L0804956E(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L08049575()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080495DA(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L080495E1(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L080495E8()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L0804964D(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags != 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L08049654(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags != 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L0804965B()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags != 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080496C0(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags != 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L080496C7(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags != 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L080496CE()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags != 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049733(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags < 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L0804973A(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags < 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L08049741()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags < 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080497A6(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L080497AD(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L080497B4()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags >= 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049819(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags <= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L08049820(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags <= 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L08049827()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags <= 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L0804988C(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags > 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L08049893(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags > 0 ? __eax & 4294967295 : __ebx & 4294967295;
    return;
}

L0804989A()
{
    __eax =  *4096;
    __ebx =  *4100;
    __eflags = (__eax & 4294967295) - 2;
    _t2 = __eflags > 0 ? __eax & 4294967295 : __ebx & 4294967295;
     *8192 = __eax;
     *8196 = __ebx;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080498FF(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax : __ebx;
    return;
}

L08049905(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax : __ebx;
    return;
}

L0804990B()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags >= 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L0804996F(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax : __ebx;
    return;
}

L08049975(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax : __ebx;
    return;
}

L0804997B()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags >= 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L080499DF(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags < 0 ? __eax : __ebx;
    return;
}

L080499E5(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags < 0 ? __eax : __ebx;
    return;
}

L080499EB()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags < 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags < 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049A4F(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax : __ebx;
    return;
}

L08049A55(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax : __ebx;
    return;
}

L08049A5B()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags >= 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049ABF(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags == 0 ? __eax : __ebx;
    return;
}

L08049AC5(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags == 0 ? __eax : __ebx;
    return;
}

L08049ACB()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags == 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags == 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049B2F(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags != 0 ? __eax : __ebx;
    return;
}

L08049B35(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags != 0 ? __eax : __ebx;
    return;
}

L08049B3B()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags != 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags != 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049B9F(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags <= 0 ? __eax : __ebx;
    return;
}

L08049BA5(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags <= 0 ? __eax : __ebx;
    return;
}

L08049BAB()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags <= 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags <= 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049C0F(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags > 0 ? __eax : __ebx;
    return;
}

L08049C15(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags > 0 ? __eax : __ebx;
    return;
}

L08049C1B()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags > 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags > 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049C7F(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax : __ebx;
    return;
}

L08049C85(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax : __ebx;
    return;
}

L08049C8B()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags >= 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049CEF(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax : __ebx;
    return;
}

L08049CF5(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax : __ebx;
    return;
}

L08049CFB()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags >= 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049D5F(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags != 0 ? __eax : __ebx;
    return;
}

L08049D65(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags != 0 ? __eax : __ebx;
    return;
}

L08049D6B()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags != 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags != 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049DCF(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags != 0 ? __eax : __ebx;
    return;
}

L08049DD5(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags != 0 ? __eax : __ebx;
    return;
}

L08049DDB()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags != 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags != 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049E3F(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags < 0 ? __eax : __ebx;
    return;
}

L08049E45(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags < 0 ? __eax : __ebx;
    return;
}

L08049E4B()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags < 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags < 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049EAF(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax : __ebx;
    return;
}

L08049EB5(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax : __ebx;
    return;
}

L08049EBB()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags >= 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags >= 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049F1F(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags <= 0 ? __eax : __ebx;
    return;
}

L08049F25(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags <= 0 ? __eax : __ebx;
    return;
}

L08049F2B()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags <= 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags <= 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

L08049F8F(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags > 0 ? __eax : __ebx;
    return;
}

L08049F95(signed int __eax, _unknown_ __ebx)
{
    _unknown_ _t4;

    __eax = __eax;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags > 0 ? __eax : __ebx;
    return;
}

L08049F9B()
{
    __eax =  *4096;
    __eflags = (__eax & 4294967295) - 2;
    _t4 = __eflags > 0 ? __eax :  *4100;
     *8192 = __eax;
     *8196 = __eflags > 0 ? __eax :  *4100;
     *8200 =  *4104;
     *8204 =  *4108;
     *8208 =  *4112;
     *8212 =  *4116;
     *8216 =  *4120;
     *8220 =  *4124;
    return;
}

main()
{// addr = 0x08049FFF
    _unknown_ __ebp;
    signed int _t1;
    signed int _t3;
    _unknown_ _t4;
    _unknown_ _t5;

    L08048394();
    L08048397();
    L0804839A();
    L080483FB();
    L080483FF();
    L08048403();
    L08048465();
    L0804846A();
    L0804846F();
    L080484D2();
    L080484D6();
    L080484DA();
    L0804853C();
    L08048540();
    L08048544();
    L080485A6();
    L080485AA();
    L080485AE();
    L08048610();
    L08048615();
    L0804861A();
    L0804867D();
    L08048683();
    L08048689();
    L080486ED();
    L080486F2();
    L080486F7();
    L0804875A();
    L0804875F();
    L08048764();
    L080487C7();
    L080487CC();
    L080487D1();
    L08048834();
    L08048837();
    L0804883A();
    L0804889B();
    L0804889E();
    L080488A1();
    L08048902();
    L08048906();
    L0804890A();
    L0804896C();
    L0804896F();
    L08048972();
    L080489D3();
    L080489D7();
    L080489DB();
    L08048A3D();
    L08048A42();
    L08048A47();
    L08048AAA();
    L08048AAE();
    L08048AB2();
    L08048B14();
    L08048B18();
    L08048B1C();
    L08048B7E();
    L08048B82();
    L08048B86();
    L08048BE8();
    L08048BED();
    L08048BF2();
    L08048C55();
    L08048C5B();
    L08048C61();
    L08048CC5();
    L08048CCA();
    L08048CCF();
    L08048D32();
    L08048D37();
    L08048D3C();
    L08048D9F();
    L08048DA4();
    L08048DA9();
    L08048E0C();
    L08048E10();
    L08048E14();
    L08048E76();
    L08048E7B();
    L08048E80();
    L08048EE3();
    L08048EE6();
    L08048EE9();
    L08048F4A();
    L08048F4D();
    L08048F50();
    L08048FB1();
    L08048FB4();
    L08048FB7();
    L08049018(_t1, __ebx);
    L0804901D(_t1, __ebx);
    L08049022();
    L08049085(_t1, __ebx);
    L0804908A(_t1, __ebx);
    L0804908F();
    L080490F2(_t1, __ebx);
    L080490F8(_t1, __ebx);
    L080490FE();
    _t3 = L08049167(L08049162(_t1, __ebx), __ebx);
    L0804916C();
    L080491CF(_t3, __ebx);
    L080491D6(_t3, __ebx);
    L080491DD();
    L08049242(_t3, __ebx);
    L08049249(_t3, __ebx);
    L08049250();
    L080492B5(_t3, __ebx);
    L080492BC(_t3, __ebx);
    L080492C3();
    L08049328(_t3, __ebx);
    L0804932F(_t3, __ebx);
    L08049336();
    L0804939B(_t3, __ebx);
    L080493A2(_t3, __ebx);
    L080493A9();
    L0804940E(_t3, __ebx);
    L08049415(_t3, __ebx);
    L0804941C();
    L08049481(_t3, __ebx);
    L08049488(_t3, __ebx);
    L0804948F();
    L080494F4(_t3, __ebx);
    L080494FB(_t3, __ebx);
    L08049502();
    L08049567(_t3, __ebx);
    L0804956E(_t3, __ebx);
    L08049575();
    L080495DA(_t3, __ebx);
    L080495E1(_t3, __ebx);
    L080495E8();
    L0804964D(_t3, __ebx);
    L08049654(_t3, __ebx);
    L0804965B();
    L080496C0(_t3, __ebx);
    L080496C7(_t3, __ebx);
    L080496CE();
    L08049733(_t3, __ebx);
    L0804973A(_t3, __ebx);
    L08049741();
    L080497A6(_t3, __ebx);
    L080497AD(_t3, __ebx);
    L080497B4();
    L08049819(_t3, __ebx);
    L08049820(_t3, __ebx);
    L08049827();
    L0804988C(_t3, __ebx);
    L08049893(_t3, __ebx);
    L0804989A();
    L080498FF(_t3, __ebx);
    L08049905(_t3, __ebx);
    L0804990B();
    L0804996F(_t3, __ebx);
    L08049975(_t3, __ebx);
    L0804997B();
    L080499DF(_t3, __ebx);
    L080499E5(_t3, __ebx);
    L080499EB();
    L08049A4F(_t3, __ebx);
    L08049A55(_t3, __ebx);
    L08049A5B();
    L08049ABF(_t3, __ebx);
    L08049AC5(_t3, __ebx);
    L08049ACB();
    L08049B2F(_t3, __ebx);
    L08049B35(_t3, __ebx);
    L08049B3B();
    L08049B9F(_t3, __ebx);
    L08049BA5(_t3, __ebx);
    L08049BAB();
    L08049C0F(_t3, __ebx);
    L08049C15(_t3, __ebx);
    L08049C1B();
    L08049C7F(_t3, __ebx);
    L08049C85(_t3, __ebx);
    L08049C8B();
    L08049CEF(_t3, __ebx);
    L08049CF5(_t3, __ebx);
    L08049CFB();
    L08049D5F(_t3, __ebx);
    L08049D65(_t3, __ebx);
    L08049D6B();
    L08049DCF(_t3, __ebx);
    L08049DD5(_t3, __ebx);
    L08049DDB();
    L08049E3F(_t3, __ebx);
    L08049E45(_t3, __ebx);
    L08049E4B();
    L08049EAF(_t3, __ebx);
    L08049EB5(_t3, __ebx);
    L08049EBB();
    L08049F1F(_t3, __ebx);
    L08049F25(_t3, __ebx);
    L08049F2B();
    L08049F8F(_t3, __ebx);
    L08049F95(_t3, __ebx);
    L08049F9B();
    _push(_t4);
    _pop(__ebp);
    return;
}

L0804A44A()
{
    return;
}

L0804A450()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134526276;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134526276;
    asm("o16 nop ");
    while(1) {
L2:
        __ebx = __ebx - 4;
         *__eax();
        __eax =  *__ebx;
        if(__eax == 255) {
            break;
        }
    }
    return;
}

L0804A450()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134526276;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134526276;
    asm("o16 nop ");
    while(1) {
L2:
        __ebx = __ebx - 4;
         *__eax();
        __eax =  *__ebx;
        if(__eax == 255) {
            break;
        }
    }
    return;
}

// Statistics:
//     951 Register nodes
//     183 Temporaries nodes
//      11 Casts
//    2928 Statements
//       2 Labels
//       0 Gotos
//     206 Blocks
//    6227 Nodes
//      91 Assembly nodes
//      79 Unknown Types


