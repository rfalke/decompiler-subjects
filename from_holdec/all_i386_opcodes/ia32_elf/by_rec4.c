L080482CC()
{
    intOrPtr _v402295602;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t5;

    __esp = __esp - 4;
    L1();
    _pop(__ebx);
    asm("invalid ");
    _v402295602 = _v402295602 + 1;
}

L080482D8()
{
    _unknown_ _t4;
    _unknown_ _t5;

    _pop(__ebx);
    asm("invalid ");
     *((intOrPtr*)(__ebp + -402295598)) =  *((intOrPtr*)(__ebp + -402295598)) + 1;
}

L0804830C()
{
    goto __imp____gmon_start__;
}

__libc_start_main()
{// addr = 0x0804831C
    goto __imp____libc_start_main;
}

void* malloc(int __size)
{// addr = 0x0804832C
    goto __imp__malloc;
}

L08048370(_unknown_ __esi)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t4;
    signed int _t5;
    signed int _t6;
    _unknown_ _t7;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;

    if( *134522784 != 0) {
        return ;
    }
    _t5 =  *134522788;
    _t10 = (4 >> 2) - 1;
    if(_t5 >= _t10) {
L4:
         *134522784 = 1;
        return;
    } else {
        while(1) {
L3:
            _t6 = _t5 + 1;
             *134522788 = _t6;
             *((intOrPtr*)(134522540 + _t6 * 4))();
            _t5 =  *134522788;
            if(_t5 >= _t10) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L080483D0()
{
    _unknown_ __ebp;

    __eax =  *134522548;
    if( *134522548 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
     *__esp = 134522548;
     *__eax();
    return;
}

L080483F4()
{
    asm("aaa ");
    return;
}

L080483F6()
{
    asm("aad 0xa");
    return;
}

L080483F9()
{
    asm("aad 0xf");
    return;
}

L080483FC()
{
    asm("aam 0xa");
    return;
}

L080483FF()
{
    asm("aam 0xf");
    return;
}

L08048402()
{
    asm("aas ");
    return;
}

L08048404()
{
    asm("adc al, 0x10");
    return;
}

L08048407()
{
    asm("adc al, 0x10");
    return;
}

L0804840A()
{
    asm("adc ax, 0x10");
    return;
}

L0804840F()
{
    asm("adc ax, 0x10");
    return;
}

L08048414()
{
    asm("adc eax, 0x10");
    return;
}

L08048418()
{
    asm("adc eax, 0x10");
    return;
}

L0804841E()
{
    asm("adc eax, [ebp+0x8]");
    return;
}

L08048422(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048425(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048428(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L0804842D(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048432(_unknown_ __eax)
{
    return __eax + 2;
}

L08048438(_unknown_ __eax)
{
    return __eax + -2;
}

L0804843E(_unknown_ __eax)
{
    return __eax +  *((intOrPtr*)(__ebp + 8));
}

L08048442(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048445(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048448(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L0804844D(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048452(signed int __eax)
{
    return __eax & 2;
}

L08048458(signed int __eax)
{
    return __eax & -2;
}

L0804845E(signed int __eax)
{
    return __eax &  *(__ebp + 8);
}

L08048462()
{
    asm("arpl bx, ax");
    return;
}

L08048465()
{
    asm("bound ax, [bx]");
    return;
}

L0804846A()
{
    asm("bound eax, [ebx]");
    return;
}

L0804846D()
{
    asm("bsf ax, [bx]");
    return;
}

L08048473()
{
    asm("bsf eax, [ebx]");
    return;
}

L08048477()
{
    asm("bsf eax, [bx]");
    return;
}

L0804847C()
{
    asm("bsf ax, [ebx]");
    return;
}

L08048481()
{
    asm("bsr ax, [bx]");
    return;
}

L08048487()
{
    asm("bsr eax, [ebx]");
    return;
}

L0804848B()
{
    asm("bsr eax, [bx]");
    return;
}

L08048490()
{
    asm("bsr ax, [ebx]");
    return;
}

L08048495()
{
    asm("bt ax, 0x4");
    return;
}

L0804849B()
{
    asm("bt ax, bx");
    return;
}

L080484A0()
{
    asm("bt eax, 0x1f");
    return;
}

L080484A5()
{
    asm("bt eax, ebx");
    return;
}

L080484A9()
{
    asm("bt [eax], ebx");
    return;
}

L080484AD()
{
    asm("btc ax, 0x4");
    return;
}

L080484B3()
{
    asm("btc ax, bx");
    return;
}

L080484B8()
{
    asm("btc eax, 0x1f");
    return;
}

L080484BD()
{
    asm("btc eax, ebx");
    return;
}

L080484C1()
{
    asm("btc [eax], ebx");
    return;
}

L080484C5()
{
    asm("btr ax, 0x4");
    return;
}

L080484CB()
{
    asm("btr ax, bx");
    return;
}

L080484D0()
{
    asm("btr eax, 0x1f");
    return;
}

L080484D5()
{
    asm("btr eax, ebx");
    return;
}

L080484D9()
{
    asm("btr [eax], ebx");
    return;
}

L080484DD()
{
    asm("bts ax, 0x4");
    return;
}

L080484E3()
{
    asm("bts ax, bx");
    return;
}

L080484E8()
{
    asm("bts eax, 0x1f");
    return;
}

L080484ED()
{
    asm("bts eax, ebx");
    return;
}

L080484F1()
{
    asm("bts [eax], ebx");
    return;
}

L080484F5()
{
    L080484F5();
    return;
}

L080484FB()
{
    L080484FB();
    return;
}

L08048501()
{
    malloc();
    return;
}

L08048507()
{
    4660();
    return;
}

L0804850D(_unknown_ __eax)
{
    __eax = __eax;
     *((intOrPtr*)(__eax))();
    return;
}

L08048510(_unknown_ __eax)
{
    __eax = __eax;
     *((intOrPtr*)(__eax))();
    return;
}

L08048513()
{
    asm("cwde ");
    return;
}

L08048515()
{
    asm("cbw ");
    return;
}

L08048518()
{
    asm("clc ");
    return;
}

L0804851A()
{
    asm("cld ");
    return;
}

L0804851C()
{
    asm("cli ");
    return;
}

L0804851E()
{
    asm("clts ");
    return;
}

L08048521()
{
    asm("cmc ");
    return;
}

L08048523(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048526(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048529(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L0804852E(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048533(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048539(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L0804853F(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048543(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048549()
{
    asm("cmpsb ");
    return;
}

L0804854B()
{
    asm("a16 cmpsb ");
    return;
}

L0804854E()
{
    asm("cmpsd ");
    return;
}

L08048550()
{
    asm("cmpsw ");
    return;
}

L08048553()
{
    asm("a16 cmpsw ");
    return;
}

L08048557()
{
    asm("a16 cmpsd ");
    return;
}

L0804855A()
{
    asm("cdq ");
    return;
}

L0804855C()
{
    asm("cwd ");
    return;
}

L0804855F()
{
    asm("daa ");
    return;
}

L08048561()
{
    asm("das ");
    return;
}

L08048563(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048566(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048569(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L0804856C(_unknown_ __eax)
{
    return __eax - 1;
}

L0804856E(_unknown_ __eax)
{
     *((char*)(__eax)) =  *((char*)(__eax)) - 1;
    return;
}

L08048571(_unknown_ __eax)
{
     *((short*)(__eax)) =  *((short*)(__eax)) - 1;
    return;
}

L08048575(_unknown_ __eax)
{
     *((intOrPtr*)(__eax)) =  *((intOrPtr*)(__eax)) - 1;
    return;
}

L08048578(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    return __eax / (__ebx & 4294967295);
}

L0804857B(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    return __eax / (__ebx & 4294967295);
}

L0804857F(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    return __eax / __ebx;
}

L08048582()
{
    asm("enter 0x1234, 0x0");
    return;
}

L08048587()
{
    asm("enter 0x1234, 0x1");
    return;
}

L0804858C()
{
    asm("enter 0x1234, 0x55");
    return;
}

L08048591()
{
    asm("hlt ");
    return;
}

L08048593(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    return __eax / (__ebx & 4294967295);
}

L08048596(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    return __eax / (__ebx & 4294967295);
}

L0804859A(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    return __eax / __ebx;
}

L0804859D(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    return __eax * (__ebx & 4294967295);
}

L080485A0(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    return __eax * (__ebx & 4294967295);
}

L080485A4(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    return __eax * __ebx;
}

L080485A7(signed int __eax, signed short* __ebx)
{
    __ebx = __ebx;
    return __eax *  *__ebx;
}

L080485AB(_unknown_ __ebx, _unknown_ __ecx)
{
    __ecx = __ecx;
    __ebx = __ebx;
    return;
}

L080485B0(_unknown_ __ebx, _unknown_ __ecx)
{
    _unknown_ _t2;

    __ebx = __ebx;
    return;
}

L080485B4(_unknown_ __ebx, _unknown_ __ecx)
{
    _unknown_ _t2;

    __ebx = __ebx;
    return;
}

L080485B8(_unknown_ __ebx, _unknown_ __ecx)
{
    __ecx = __ecx;
    __ebx = __ebx;
    return;
}

L080485BD(_unknown_ __ebx, _unknown_ __ecx)
{
    _unknown_ _t2;

    __ebx = __ebx;
    return;
}

L080485C1(_unknown_ __ebx, _unknown_ __ecx)
{
    _unknown_ _t2;

    __ebx = __ebx;
    return;
}

L080485C5()
{
    asm("in al, 0x12");
    return;
}

L080485C8()
{
    asm("in ax, 0x12");
    return;
}

L080485CC()
{
    asm("in eax, 0x12");
    return;
}

L080485CF()
{
    asm("in al, dx");
    return;
}

L080485D1()
{
    asm("in ax, dx");
    return;
}

L080485D4()
{
    asm("in eax, dx");
    return;
}

L080485D6(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L080485D9(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L080485DC(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L080485DF(_unknown_ __eax)
{
    return __eax + 1;
}

L080485E1(_unknown_ __eax)
{
     *((char*)(__eax)) =  *((char*)(__eax)) + 1;
    return;
}

L080485E4(_unknown_ __eax)
{
     *((short*)(__eax)) =  *((short*)(__eax)) + 1;
    return;
}

L080485E8(_unknown_ __eax)
{
     *((intOrPtr*)(__eax)) =  *((intOrPtr*)(__eax)) + 1;
    return;
}

L080485EB()
{
    asm("insb ");
    return;
}

L080485ED()
{
    asm("insw ");
    return;
}

L080485F0()
{
    asm("insd ");
    return;
}

L080485F2()
{
    asm("int3 ");
    return;
}

L080485F4()
{
    asm("int 0x12");
    return;
}

L080485F7()
{
    asm("into ");
    return;
}

L080485F9()
{
    asm("iretd ");
    return;
}

L080485FB()
{
    asm("iretw ");
    return;
}

L080485FE(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) >= 2) {
        return ;
    }
    return ;
}

L08048605(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) >= 2) {
        return ;
    }
    return ;
}

L0804860C(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) < 2) {
        return ;
    }
    return ;
}

L08048613(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) >= 2) {
        return ;
    }
    return ;
}

L0804861A(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) == 2) {
        return ;
    }
    return ;
}

L08048621(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) != 2) {
        return ;
    }
    return ;
}

L08048628(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) <= 2) {
        return ;
    }
    return ;
}

L0804862F(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) > 2) {
        return ;
    }
    return ;
}

L08048636(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) >= 2) {
        return ;
    }
    return ;
}

L0804863D(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) >= 2) {
        return ;
    }
    return ;
}

L08048644(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) != 2) {
        return ;
    }
    return ;
}

L0804864B(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) != 2) {
        return ;
    }
    return ;
}

L08048652(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) < 2) {
        return ;
    }
    return ;
}

L08048659(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) >= 2) {
        return ;
    }
    return ;
}

L08048660(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) <= 2) {
        return ;
    }
    return ;
}

L08048667(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) > 2) {
        return ;
    }
    return ;
}

L0804866E(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) >= 2) {
        return ;
    }
    return ;
}

L08048679(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) >= 2) {
        return ;
    }
    return ;
}

L08048684(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) < 2) {
        return ;
    }
    return ;
}

L0804868F(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) >= 2) {
        return ;
    }
    return ;
}

L0804869A(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) == 2) {
        return ;
    }
    return ;
}

L080486A5(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) != 2) {
        return ;
    }
    return ;
}

L080486B0(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) <= 2) {
        return ;
    }
    return ;
}

L080486BB(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) > 2) {
        return ;
    }
    return ;
}

L080486C6(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) >= 2) {
        return ;
    }
    return ;
}

L080486D1(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) >= 2) {
        return ;
    }
    return ;
}

L080486DC(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) != 2) {
        return ;
    }
    return ;
}

L080486E7(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) != 2) {
        return ;
    }
    return ;
}

L080486F2(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) < 2) {
        return ;
    }
    return ;
}

L080486FD(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) >= 2) {
        return ;
    }
    return ;
}

L08048708(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) <= 2) {
        return ;
    }
    return ;
}

L08048713(signed int __eax)
{
    __eax = __eax;
    if((__eax & 4294967295) > 2) {
        return ;
    }
    return ;
}

L0804871E(_unknown_ __eflags)
{
    __eflags = __eflags;
    if (__eflags < 0) goto 134514466;
    return;
}

L08048724()
{
    asm("jecxz 0x3");
    return;
}

L08048729()
{
    return;
}

L0804872E()
{
    return;
}

L08048736()
{
    goto ( *__ebx);
}

L08048739()
{
    asm("lahf ");
    return;
}

L0804873B()
{
    asm("lar ebx, ax");
    return;
}

L0804873F(_unknown_ __ebx)
{
    __ebx = __ebx;
    return __ebx + 66;
}

L08048743(_unknown_ __eax, _unknown_ __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    return;
}

L08048748()
{
    _pop(__ebp);
    return;
}

L0804874A()
{
    asm("o16 leave ");
    return;
}

L0804874D()
{
    asm("lgdt [eax]");
    return;
}

L08048751()
{
    asm("lidt [eax]");
    return;
}

L08048755()
{
    asm("lds edx, [ecx]");
    return;
}

L08048758()
{
    asm("lds dx, [ecx]");
    return;
}

L0804875C()
{
    asm("les edx, [ecx]");
    return;
}

L0804875F()
{
    asm("les dx, [ecx]");
    return;
}

L08048763()
{
    asm("lfs edx, [ecx]");
    return;
}

L08048767()
{
    asm("lfs dx, [ecx]");
    return;
}

L0804876C()
{
    asm("lgs edx, [ecx]");
    return;
}

L08048770()
{
    asm("lgs dx, [ecx]");
    return;
}

L08048775()
{
    asm("lss edx, [ecx]");
    return;
}

L08048779()
{
    asm("lss dx, [ecx]");
    return;
}

L0804877E()
{
    asm("lldt [eax]");
    return;
}

L08048782()
{
    asm("lmsw [eax]");
    return;
}

L08048786()
{
    asm("lodsb ");
    return;
}

L08048788()
{
    asm("lodsw ");
    return;
}

L0804878B()
{
    asm("lodsd ");
    return;
}

L0804878D()
{
    asm("loopnz 0xffffffffffffffff");
    return;
}

L08048791()
{
    asm("a16 loopnz 0xffffffffffffffff");
    return;
}

L08048796()
{
    asm("loope 0xffffffffffffffff");
    return;
}

L0804879A()
{
    asm("a16 loope 0xffffffffffffffff");
    return;
}

L0804879F()
{
    asm("loop 0xffffffffffffffff");
    return;
}

L080487A3()
{
    asm("a16 loop 0xffffffffffffffff");
    return;
}

L080487A8(_unknown_ __eax, _unknown_ __ebx)
{
    _unknown_ _t2;

    __eax = __eax;
    return;
}

L080487AC()
{
    asm("ltr bx");
    return;
}

L080487B0(_unknown_ __ebx, _unknown_ __ecx)
{
    __ecx = __ecx;
    __ebx = __ebx;
    return;
}

L080487B3(_unknown_ __eax, _unknown_ __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
    return;
}

L080487B6(_unknown_ __eax, _unknown_ __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
    return;
}

L080487B9(_unknown_ __ecx)
{
    __ecx = __ecx;
    return;
}

L080487BC(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L080487BF(signed int __eax, signed int* __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
     *__ebx = __eax & 4294967295;
    return;
}

L080487C2(_unknown_ __eax, _unknown_ __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    return;
}

L080487C5(_unknown_ __eax, _unknown_ __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
    return;
}

L080487C9(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L080487CE(signed int __eax, signed int* __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
     *__ebx = __eax & 4294967295;
    return;
}

L080487D2(_unknown_ __eax, _unknown_ __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
    return;
}

L080487D6(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L080487D9()
{
    return 16;
}

L080487DF(intOrPtr __eax, _unknown_ __ebx)
{
    __ebx = __ebx;
    __eax = __eax;
     *((intOrPtr*)(__ebx)) = __eax;
    return;
}

L080487E2(_unknown_ __ebx)
{
    __ebx = __ebx;
    return  *((intOrPtr*)(__ebx));
}

L080487E5()
{
    return cr4;
}

L080487E9(_unknown_ __eax)
{
    __eax = __eax;
    cr4 = __eax;
    return;
}

L080487ED()
{
    return dr4;
}

L080487F1(_unknown_ __eax)
{
    __eax = __eax;
    dr4 = __eax;
    return;
}

L080487F5()
{
    asm("invalid ");
    asm("lock ret ");
    asm("invalid ");
    asm("lock ret ");
    asm("movsb ");
    return;
}

L080487F9()
{
    asm("invalid ");
    asm("lock ret ");
    asm("movsb ");
    return;
}

L080487FD()
{
    asm("movsb ");
    return;
}

L080487FF()
{
    asm("movsw ");
    return;
}

L08048802()
{
    asm("movsd ");
    return;
}

L08048804(_unknown_ __eax, _unknown_ __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
    return;
}

L08048809(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L0804880D(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048811(_unknown_ __eax, _unknown_ __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
    return;
}

L08048816(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L0804881A(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L0804881E(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    return __eax * (__ebx & 4294967295);
}

L08048821(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    return __eax * (__ebx & 4294967295);
}

L08048825(signed int __eax, signed int __ebx)
{
    __ebx = __ebx;
    return __eax * __ebx;
}

L08048828(_unknown_ __ebx)
{
    __ebx = __ebx;
    return;
}

L0804882B(_unknown_ __ebx)
{
    __ebx = __ebx;
    return;
}

L0804882F(_unknown_ __ebx)
{
    _unknown_ _t2;

    return;
}

L08048832()
{
    return;
}

L08048834()
{
    asm("o16 nop ");
    return;
}

L08048837()
{
    return;
}

L0804883B()
{
    return;
}

L08048840()
{
    return;
}

L08048846()
{
    asm("o16 nop [eax+eax+0x0]");
    return;
}

L0804884D()
{
    return;
}

L08048855(_unknown_ __ebx)
{
    __ebx = __ebx;
    return;
}

L08048858(_unknown_ __ebx)
{
    __ebx = __ebx;
    return;
}

L0804885C(_unknown_ __ebx)
{
    _unknown_ _t2;

    return;
}

L0804885F(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048862(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048865(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L0804886A(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L0804886F(signed int __eax)
{
    return __eax | 2;
}

L08048875(signed int __eax)
{
    return __eax | -2;
}

L0804887B(signed int __eax)
{
    return __eax |  *(__ebp + 8);
}

L0804887F(signed int __eax)
{
    return __eax | 2;
}

L08048883(signed int __eax)
{
    return __eax | 242;
}

L08048889()
{
    asm("out 0x12, al");
    return;
}

L0804888C()
{
    asm("out 0x12, ax");
    return;
}

L08048890()
{
    asm("out 0x12, eax");
    return;
}

L08048893()
{
    asm("out dx, al");
    return;
}

L08048895()
{
    asm("out dx, ax");
    return;
}

L08048898()
{
    asm("out dx, eax");
    return;
}

L0804889A()
{
    asm("outsb ");
    return;
}

L0804889C()
{
    asm("outsw ");
    return;
}

L0804889F()
{
    asm("outsd ");
    return;
}

L080488A1(_unknown_ __eax)
{
    _pop( *((short*)(__eax)));
    return;
}

L080488A5(_unknown_ __eax)
{
    _pop( *((intOrPtr*)(__eax)));
    return;
}

L080488A8(signed int __eax)
{
    __eax = __eax;
    _pop(__eax & 4294967295);
    return;
}

L080488AB()
{
    _pop(__eax);
    return;
}

L080488AD()
{
    _pop(ds);
    return;
}

L080488AF()
{
    _pop(es);
    return;
}

L080488B1()
{
    _pop(fs);
    return;
}

L080488B4()
{
    _pop(gs);
    return;
}

L080488B7()
{
    _pop(ss);
    return;
}

L080488B9()
{
    asm("popad ");
    return;
}

L080488BB()
{
    asm("popa ");
    return;
}

L080488BE()
{
    asm("popfd ");
    return;
}

L080488C0()
{
    asm("popfw ");
    return;
}

L080488C3(_unknown_ __eax)
{
    __eax = __eax;
    _push( *((short*)(__eax)));
    return;
}

L080488C7(_unknown_ __eax)
{
    __eax = __eax;
    _push( *((intOrPtr*)(__eax)));
    return;
}

L080488CA(signed int __eax)
{
    __eax = __eax;
    _push(__eax & 4294967295);
    return;
}

L080488CD(_unknown_ __eax)
{
    __eax = __eax;
    _push(__eax);
    return;
}

L080488CF()
{
    _push(17);
    return;
}

L080488D2()
{
    _push(4386);
    return;
}

L080488D8()
{
    _push(287454020);
    return;
}

L080488DE()
{
    _push(ds);
    return;
}

L080488E0()
{
    _push(es);
    return;
}

L080488E2()
{
    _push(fs);
    return;
}

L080488E5()
{
    _push(gs);
    return;
}

L080488E8()
{
    _push(ss);
    return;
}

L080488EA()
{
    asm("pushad ");
    return;
}

L080488EC()
{
    asm("pusha ");
    return;
}

L080488EF()
{
    asm("pushfd ");
    return;
}

L080488F1()
{
    asm("pushfw ");
    return;
}

L080488F4()
{
    asm("rol byte [eax], 1");
    return;
}

L080488F7()
{
    asm("rol word [eax], 1");
    return;
}

L080488FB()
{
    asm("rol dword [eax], 1");
    return;
}

L080488FE()
{
    asm("ror byte [eax], 1");
    return;
}

L08048901()
{
    asm("ror word [eax], 1");
    return;
}

L08048905()
{
    asm("ror dword [eax], 1");
    return;
}

L08048908()
{
    asm("rcl byte [eax], 1");
    return;
}

L0804890B()
{
    asm("rcl word [eax], 1");
    return;
}

L0804890F()
{
    asm("rcl dword [eax], 1");
    return;
}

L08048912()
{
    asm("rcr byte [eax], 1");
    return;
}

L08048915()
{
    asm("rcr word [eax], 1");
    return;
}

L08048919()
{
    asm("rcr dword [eax], 1");
    return;
}

L0804891C(signed char* __eax)
{
     *__eax =  *__eax << 1;
    return;
}

L0804891F(signed short* __eax)
{
     *__eax =  *__eax << 1;
    return;
}

L08048923(signed int* __eax)
{
     *__eax =  *__eax << 1;
    return;
}

L08048926(unsigned char* __eax)
{
     *__eax =  *__eax >> 1;
    return;
}

L08048929(unsigned short* __eax)
{
     *__eax =  *__eax >> 1;
    return;
}

L0804892D(unsigned int* __eax)
{
     *__eax =  *__eax >> 1;
    return;
}

L08048930(signed char* __eax)
{
     *__eax =  *__eax >> 1;
    return;
}

L08048933(signed short* __eax)
{
     *__eax =  *__eax >> 1;
    return;
}

L08048937(signed int* __eax)
{
     *__eax =  *__eax >> 1;
    return;
}

L0804893A()
{
    asm("rol [eax], cl");
    return;
}

L0804893D()
{
    asm("rol word [eax], cl");
    return;
}

L08048941()
{
    asm("rol dword [eax], cl");
    return;
}

L08048944()
{
    asm("ror [eax], cl");
    return;
}

L08048947()
{
    asm("ror word [eax], cl");
    return;
}

L0804894B()
{
    asm("ror dword [eax], cl");
    return;
}

L0804894E()
{
    asm("rcl [eax], cl");
    return;
}

L08048951()
{
    asm("rcl word [eax], cl");
    return;
}

L08048955()
{
    asm("rcl dword [eax], cl");
    return;
}

L08048958()
{
    asm("rcr [eax], cl");
    return;
}

L0804895B()
{
    asm("rcr word [eax], cl");
    return;
}

L0804895F()
{
    asm("rcr dword [eax], cl");
    return;
}

L08048962(signed int* __eax, signed int __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
     *__eax =  *__eax << (__ecx & 4294967295);
    return;
}

L08048965(signed short* __eax, signed int __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
     *__eax =  *__eax << (__ecx & 4294967295);
    return;
}

L08048969(signed int* __eax, signed int __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
     *__eax =  *__eax << (__ecx & 4294967295);
    return;
}

L0804896C(unsigned int* __eax, signed int __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
     *__eax =  *__eax >> (__ecx & 4294967295);
    return;
}

L0804896F(unsigned short* __eax, signed int __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
     *__eax =  *__eax >> (__ecx & 4294967295);
    return;
}

L08048973(unsigned int* __eax, signed int __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
     *__eax =  *__eax >> (__ecx & 4294967295);
    return;
}

L08048976(signed int* __eax, signed int __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
     *__eax =  *__eax >> (__ecx & 4294967295);
    return;
}

L08048979(signed short* __eax, signed int __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
     *__eax =  *__eax >> (__ecx & 4294967295);
    return;
}

L0804897D(signed int* __eax, signed int __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
     *__eax =  *__eax >> (__ecx & 4294967295);
    return;
}

L08048980()
{
    asm("rol byte [eax], 0x4");
    return;
}

L08048984()
{
    asm("rol word [eax], 0x4");
    return;
}

L08048989()
{
    asm("rol dword [eax], 0x4");
    return;
}

L0804898D()
{
    asm("ror byte [eax], 0x4");
    return;
}

L08048991()
{
    asm("ror word [eax], 0x4");
    return;
}

L08048996()
{
    asm("ror dword [eax], 0x4");
    return;
}

L0804899A()
{
    asm("rcl byte [eax], 0x4");
    return;
}

L0804899E()
{
    asm("rcl word [eax], 0x4");
    return;
}

L080489A3()
{
    asm("rcl dword [eax], 0x4");
    return;
}

L080489A7()
{
    asm("rcr byte [eax], 0x4");
    return;
}

L080489AB()
{
    asm("rcr word [eax], 0x4");
    return;
}

L080489B0()
{
    asm("rcr dword [eax], 0x4");
    return;
}

L080489B4(signed char* __eax)
{
     *__eax =  *__eax << 4;
    return;
}

L080489B8(signed short* __eax)
{
     *__eax =  *__eax << 4;
    return;
}

L080489BD(signed int* __eax)
{
     *__eax =  *__eax << 4;
    return;
}

L080489C1(unsigned char* __eax)
{
     *__eax =  *__eax >> 4;
    return;
}

L080489C5(unsigned short* __eax)
{
     *__eax =  *__eax >> 4;
    return;
}

L080489CA(unsigned int* __eax)
{
     *__eax =  *__eax >> 4;
    return;
}

L080489CE(signed char* __eax)
{
     *__eax =  *__eax >> 4;
    return;
}

L080489D2(signed short* __eax)
{
     *__eax =  *__eax >> 4;
    return;
}

L080489D7(signed int* __eax)
{
     *__eax =  *__eax >> 4;
    return;
}

L080489DB()
{
    asm("repne insb ");
    return;
}

L080489DE()
{
    asm("repne insw ");
    return;
}

L080489E2()
{
    asm("repne insd ");
    return;
}

L080489E5()
{
    asm("rep insb ");
    return;
}

L080489E8()
{
    asm("rep insw ");
    return;
}

L080489EC()
{
    asm("rep insd ");
    return;
}

L080489EF()
{
    asm("repne movsb ");
    return;
}

L080489F2()
{
    asm("repne movsw ");
    return;
}

L080489F6()
{
    asm("repne movsd ");
    return;
}

L080489F9(signed int __ecx, _unknown_ __edi, _unknown_ __esi)
{
    _unknown_ _t3;
    _unknown_ _t6;

    __esi = __esi;
    _push(__ecx << 0);
    _push(__esi);
    _push(__edi);
    memcpy();
    __esp = __esp + 12;
    return;
}

L080489FC(_unknown_ __ecx, _unknown_ __edi, _unknown_ __esi)
{
    _unknown_ _t2;
    _unknown_ _t5;

    __esi = __esi;
    _push(__ecx);
    _push(__esi);
    _push(__edi);
    memcpy();
    __esp = __esp + 12;
    return;
}

L08048A00(signed int __ecx, _unknown_ __edi, _unknown_ __esi)
{
    _unknown_ _t3;
    _unknown_ _t6;

    __esi = __esi;
    _push(__ecx << 2);
    _push(__esi);
    _push(__edi);
    memcpy();
    __esp = __esp + 12;
    return;
}

L08048A03()
{
    asm("repne outsb ");
    return;
}

L08048A06()
{
    asm("repne outsw ");
    return;
}

L08048A0A()
{
    asm("repne outsd ");
    return;
}

L08048A0D()
{
    asm("rep outsb ");
    return;
}

L08048A10()
{
    asm("rep outsw ");
    return;
}

L08048A14()
{
    asm("rep outsd ");
    return;
}

L08048A17()
{
    asm("repne stosb ");
    return;
}

L08048A1A()
{
    asm("repne stosw ");
    return;
}

L08048A1E()
{
    asm("repne stosd ");
    return;
}

L08048A21(_unknown_ __eax, signed int __ecx, _unknown_ __edi)
{
    _unknown_ _t3;
    _unknown_ _t5;

    __eax = __eax;
    _push(__ecx << 0);
    _push(__eax);
    _push(__edi);
    memset();
    __esp = __esp + 12;
    return;
}

L08048A24(_unknown_ __eax, _unknown_ __ecx, _unknown_ __edi)
{
    _unknown_ _t2;
    _unknown_ _t4;

    __eax = __eax;
    _push(__ecx);
    _push(__eax);
    _push(__edi);
    memset();
    __esp = __esp + 12;
    return;
}

L08048A28(_unknown_ __eax, signed int __ecx, _unknown_ __edi)
{
    _unknown_ _t3;
    _unknown_ _t5;

    __eax = __eax;
    _push(__ecx << 2);
    _push(__eax);
    _push(__edi);
    memset();
    __esp = __esp + 12;
    return;
}

L08048A2B()
{
    asm("repne cmpsb ");
    return;
}

L08048A2E()
{
    asm("repne cmpsw ");
    return;
}

L08048A32()
{
    asm("repne cmpsd ");
    return;
}

L08048A35()
{
    asm("rep cmpsb ");
    return;
}

L08048A38()
{
    asm("rep cmpsw ");
    return;
}

L08048A3C()
{
    asm("rep cmpsd ");
    return;
}

L08048A3F()
{
    asm("repne scasb ");
    return;
}

L08048A42()
{
    asm("repne scasw ");
    return;
}

L08048A46()
{
    asm("repne scasd ");
    return;
}

L08048A49()
{
    asm("rep scasb ");
    return;
}

L08048A4C()
{
    asm("rep scasw ");
    return;
}

L08048A50()
{
    asm("rep scasd ");
    return;
}

L08048A53()
{
    return;
}

L08048A55()
{
    asm("o16 ret ");
    return;
}

L08048A58()
{
    asm("retf ");
    return;
}

L08048A5A()
{
    asm("o16 retf ");
    return;
}

L08048A5D()
{
    return;
}

L08048A61()
{
    asm("o16 ret 0x1234");
    return;
}

L08048A66()
{
    asm("retf 0x1234");
    return;
}

L08048A6A()
{
    asm("o16 retf 0x1234");
    return;
}

L08048A6F()
{
    asm("sahf ");
    return;
}

L08048A71()
{
    asm("sbb al, 0xe8");
    return;
}

L08048A74()
{
    asm("sbb ax, 0xe8");
    return;
}

L08048A79()
{
    asm("sbb eax, 0xe8");
    return;
}

L08048A7F()
{
    asm("sbb byte [eax], 0xe8");
    return;
}

L08048A83()
{
    asm("sbb word [eax], 0xe8");
    return;
}

L08048A89()
{
    asm("sbb dword [eax], 0xe8");
    return;
}

L08048A90()
{
    asm("sbb bx, ax");
    return;
}

L08048A94()
{
    asm("scasb ");
    return;
}

L08048A96()
{
    asm("scasw ");
    return;
}

L08048A99()
{
    asm("scasd ");
    return;
}

L08048A9B(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags > 0;
    return;
}

L08048A9F(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags < 0;
    return;
}

L08048AA3(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags > 0;
    return;
}

L08048AA7()
{
    asm("setnb [ecx]");
    return;
}

L08048AAB(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags == 0;
    return;
}

L08048AAF(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags != 0;
    return;
}

L08048AB3(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags < 0;
    return;
}

L08048AB7(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags > 0;
    return;
}

L08048ABB(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags < 0;
    return;
}

L08048ABF(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags > 0;
    return;
}

L08048AC3(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags ?_? 0;
    return;
}

L08048AC7(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags ?_? 0;
    return;
}

L08048ACB(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags < 0;
    return;
}

L08048ACF(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags >= 0;
    return;
}

L08048AD3(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags <= 0;
    return;
}

L08048AD7(_unknown_ __ecx, _unknown_ __eflags)
{
    __eflags = __eflags;
    __ecx = __ecx;
     *((intOrPtr*)(__ecx)) = __eflags > 0;
    return;
}

L08048ADB()
{
    asm("sgdt [eax]");
    return;
}

L08048ADF()
{
    asm("sidt [eax]");
    return;
}

L08048AE3()
{
    asm("shld bx, ax, 0x4");
    return;
}

L08048AE9()
{
    asm("shld ebx, eax, 0x4");
    return;
}

L08048AEE()
{
    asm("shld bx, ax, cl");
    return;
}

L08048AF3()
{
    asm("shld ebx, eax, cl");
    return;
}

L08048AF7()
{
    asm("shrd bx, ax, 0x4");
    return;
}

L08048AFD()
{
    asm("shrd ebx, eax, 0x4");
    return;
}

L08048B02()
{
    asm("shrd bx, ax, cl");
    return;
}

L08048B07()
{
    asm("shrd ebx, eax, cl");
    return;
}

L08048B0B()
{
    asm("sldt [eax]");
    return;
}

L08048B0F()
{
    asm("smsw [eax]");
    return;
}

L08048B13()
{
    asm("stc ");
    return;
}

L08048B15()
{
    asm("std ");
    return;
}

L08048B17()
{
    asm("sti ");
    return;
}

L08048B19()
{
    asm("stosb ");
    return;
}

L08048B1B()
{
    asm("stosw ");
    return;
}

L08048B1E()
{
    asm("stosd ");
    return;
}

L08048B20()
{
    asm("str [eax]");
    return;
}

L08048B24(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048B27(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048B2A(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048B2F(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048B34(_unknown_ __eax)
{
    return __eax - 2;
}

L08048B3A(_unknown_ __eax)
{
    return __eax - -2;
}

L08048B40(_unknown_ __eax)
{
    return __eax -  *((intOrPtr*)(__ebp + 8));
}

L08048B44(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048B47(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048B4C(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048B52(_unknown_ __ecx)
{
    __ecx = __ecx;
    return;
}

L08048B56(_unknown_ __ecx)
{
    __ecx = __ecx;
    return;
}

L08048B5C(_unknown_ __ecx)
{
    __ecx = __ecx;
    return;
}

L08048B63(_unknown_ __ebx, _unknown_ __ecx)
{
    __ecx = __ecx;
    __ebx = __ebx;
    return;
}

L08048B66(_unknown_ __ebx, _unknown_ __ecx)
{
    __ecx = __ecx;
    __ebx = __ebx;
    return;
}

L08048B6A(_unknown_ __ebx, _unknown_ __ecx)
{
    __ecx = __ecx;
    __ebx = __ebx;
    return;
}

verr()
{// addr = 0x08048B6D
    asm("verr [eax]");
    return;
}

L08048B71()
{
    asm("verw [eax]");
    return;
}

wait()
{// addr = 0x08048B75
    asm("wait ");
    return;
}

L08048B77()
{
    asm("xchg bx, ax");
    return;
}

L08048B7A()
{
    asm("xchg ebx, eax");
    return;
}

L08048B7C()
{
    asm("xchg [ecx], bl");
    return;
}

L08048B7F()
{
    asm("xchg [ecx], bx");
    return;
}

L08048B83()
{
    asm("xchg [ecx], ebx");
    return;
}

L08048B86()
{
    asm("xlatb ");
    return;
}

L08048B88()
{
    asm("a16 xlatb ");
    return;
}

L08048B8B(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048B8E(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048B91(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048B96(_unknown_ __eax)
{
    __eax = __eax;
    return;
}

L08048B9B(signed int __eax)
{
    return __eax ^ 2;
}

L08048BA1(signed int __eax)
{
    return __eax ^ -2;
}

L08048BA7(signed int __eax)
{
    return __eax ^  *(__ebp + 8);
}

L08048BAB(signed int __eax)
{
    return __eax ^ 2;
}

L08048BAF(signed int __eax)
{
    return __eax ^ 242;
}

main()
{// addr = 0x08048BB5
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t7;
    signed int _t11;
    _unknown_ _t18;
    _unknown_ _t22;
    signed int _t27;
    signed int* _t32;
    _unknown_ _t40;
    _unknown_ _t41;
    _unknown_ _t42;

    L080483F4();
    L080483F6();
    L080483F9();
    L080483FC();
    L080483FF();
    L08048402();
    L08048404();
    L08048407();
    L0804840A();
    L0804840F();
    L08048414();
    L08048418();
    L0804841E();
    L08048422(_t1);
    L08048425(_t1);
    L08048428(_t1);
    L0804842D(_t1);
    L08048442(L0804843E(L08048438(L08048432(_t1))));
    L08048445(_t4);
    L08048448(_t4);
    L0804844D(_t4);
    _t7 = L0804845E(L08048458(L08048452(_t4)));
    L08048462();
    L08048465();
    L0804846A();
    L0804846D();
    L08048473();
    L08048477();
    L0804847C();
    L08048481();
    L08048487();
    L0804848B();
    L08048490();
    L08048495();
    L0804849B();
    L080484A0();
    L080484A5();
    L080484A9();
    L080484AD();
    L080484B3();
    L080484B8();
    L080484BD();
    L080484C1();
    L080484C5();
    L080484CB();
    L080484D0();
    L080484D5();
    L080484D9();
    L080484DD();
    L080484E3();
    L080484E8();
    L080484ED();
    L080484F1();
    L080484F5();
    L080484FB();
    L08048501();
    L08048507();
    L0804850D(_t7);
    L08048510(_t7);
    L08048513();
    L08048515();
    L08048518();
    L0804851A();
    L0804851C();
    L0804851E();
    L08048521();
    L08048523(_t7);
    L08048526(_t7);
    L08048529(_t7);
    L0804852E(_t7);
    L08048533(_t7);
    L08048539(_t7);
    L0804853F(_t7);
    L08048543(_t7);
    L08048549();
    L0804854B();
    L0804854E();
    L08048550();
    L08048553();
    L08048557();
    L0804855A();
    L0804855C();
    L0804855F();
    L08048561();
    L08048563(_t7);
    L08048566(_t7);
    L08048569(_t7);
    L0804856E(L0804856C(_t7));
    L08048571(_t8);
    L08048575(_t8);
    _t11 = L0804857F(L0804857B(L08048578(_t8, __ebx), __ebx), __ebx);
    L08048582();
    L08048587();
    L0804858C();
    L08048591();
    _t18 = L080485A7(L080485A4(L080485A0(L0804859D(L0804859A(L08048596(L08048593(_t11, __ebx), __ebx), __ebx), __ebx), __ebx), __ebx), __ebx);
    L080485AB(__ebx, __ecx);
    L080485B0(__ebx, __ecx);
    L080485B4(__ebx, __ecx);
    L080485B8(__ebx, __ecx);
    L080485BD(__ebx, __ecx);
    L080485C1(__ebx, __ecx);
    L080485C5();
    L080485C8();
    L080485CC();
    L080485CF();
    L080485D1();
    L080485D4();
    L080485D6(_t18);
    L080485D9(_t18);
    L080485DC(_t18);
    L080485E1(L080485DF(_t18));
    L080485E4(_t19);
    L080485E8(_t19);
    L080485EB();
    L080485ED();
    L080485F0();
    L080485F2();
    L080485F4();
    L080485F7();
    L080485F9();
    L080485FB();
    L080485FE(_t19);
    L08048605(_t19);
    L0804860C(_t19);
    L08048613(_t19);
    L0804861A(_t19);
    L08048621(_t19);
    L08048628(_t19);
    L0804862F(_t19);
    L08048636(_t19);
    L0804863D(_t19);
    L08048644(_t19);
    L0804864B(_t19);
    L08048652(_t19);
    L08048659(_t19);
    L08048660(_t19);
    L08048667(_t19);
    L0804866E(_t19);
    L08048679(_t19);
    L08048684(_t19);
    L0804868F(_t19);
    L0804869A(_t19);
    L080486A5(_t19);
    L080486B0(_t19);
    L080486BB(_t19);
    L080486C6(_t19);
    L080486D1(_t19);
    L080486DC(_t19);
    L080486E7(_t19);
    L080486F2(_t19);
    L080486FD(_t19);
    L08048708(_t19);
    L08048713(_t19);
    L0804871E(__eflags);
    L08048724();
    L08048729();
    L0804872E();
    L08048736();
    L08048739();
    L0804873B();
    L08048743(L0804873F(__ebx), __ebx);
    L08048748();
    L0804874A();
    L0804874D();
    L08048751();
    L08048755();
    L08048758();
    L0804875C();
    L0804875F();
    L08048763();
    L08048767();
    L0804876C();
    L08048770();
    L08048775();
    L08048779();
    L0804877E();
    L08048782();
    L08048786();
    L08048788();
    L0804878B();
    L0804878D();
    L08048791();
    L08048796();
    L0804879A();
    L0804879F();
    L080487A3();
    L080487A8(_t20, __ebx);
    L080487AC();
    L080487B0(__ebx, __ecx);
    L080487B3(_t20, __ecx);
    L080487B6(_t20, __ecx);
    L080487B9(__ecx);
    L080487BC(_t20);
    L080487BF(_t20, __ebx);
    L080487C2(_t20, __ebx);
    L080487C5(_t20, __ecx);
    L080487C9(_t20);
    L080487CE(_t20, __ebx);
    L080487D2(_t20, __ebx);
    L080487D6(_t20);
    L080487DF(L080487D9(), __ebx);
    L080487E2(__ebx);
    L080487E9(L080487E5());
    L080487F1(L080487ED());
    L080487F5();
    L080487F9();
    L080487FD();
    L080487FF();
    L08048802();
    L08048804(_t24, __ecx);
    L08048809(_t24);
    L0804880D(_t24);
    L08048811(_t24, __ecx);
    L08048816(_t24);
    L0804881A(_t24);
    _t27 = L08048825(L08048821(L0804881E(_t24, __ebx), __ebx), __ebx);
    L08048828(__ebx);
    L0804882B(__ebx);
    L0804882F(__ebx);
    L08048832();
    L08048834();
    L08048837();
    L0804883B();
    L08048840();
    L08048846();
    L0804884D();
    L08048855(__ebx);
    L08048858(__ebx);
    L0804885C(__ebx);
    L0804885F(_t27);
    L08048862(_t27);
    L08048865(_t27);
    L0804886A(_t27);
    _t32 = L08048883(L0804887F(L0804887B(L08048875(L0804886F(_t27)))));
    L08048889();
    L0804888C();
    L08048890();
    L08048893();
    L08048895();
    L08048898();
    L0804889A();
    L0804889C();
    L0804889F();
    L080488A1(_t32);
    L080488A5(_t32);
    L080488A8(_t32);
    L080488AB();
    L080488AD();
    L080488AF();
    L080488B1();
    L080488B4();
    L080488B7();
    L080488B9();
    L080488BB();
    L080488BE();
    L080488C0();
    L080488C3(_t32);
    L080488C7(_t32);
    L080488CA(_t32);
    L080488CD(_t32);
    L080488CF();
    L080488D2();
    L080488D8();
    L080488DE();
    L080488E0();
    L080488E2();
    L080488E5();
    L080488E8();
    L080488EA();
    L080488EC();
    L080488EF();
    L080488F1();
    L080488F4();
    L080488F7();
    L080488FB();
    L080488FE();
    L08048901();
    L08048905();
    L08048908();
    L0804890B();
    L0804890F();
    L08048912();
    L08048915();
    L08048919();
    L0804891C(_t32);
    L0804891F(_t32);
    L08048923(_t32);
    L08048926(_t32);
    L08048929(_t32);
    L0804892D(_t32);
    L08048930(_t32);
    L08048933(_t32);
    L08048937(_t32);
    L0804893A();
    L0804893D();
    L08048941();
    L08048944();
    L08048947();
    L0804894B();
    L0804894E();
    L08048951();
    L08048955();
    L08048958();
    L0804895B();
    L0804895F();
    L08048962(_t32, __ecx);
    L08048965(_t32, __ecx);
    L08048969(_t32, __ecx);
    L0804896C(_t32, __ecx);
    L0804896F(_t32, __ecx);
    L08048973(_t32, __ecx);
    L08048976(_t32, __ecx);
    L08048979(_t32, __ecx);
    L0804897D(_t32, __ecx);
    L08048980();
    L08048984();
    L08048989();
    L0804898D();
    L08048991();
    L08048996();
    L0804899A();
    L0804899E();
    L080489A3();
    L080489A7();
    L080489AB();
    L080489B0();
    L080489B4(_t32);
    L080489B8(_t32);
    L080489BD(_t32);
    L080489C1(_t32);
    L080489C5(_t32);
    L080489CA(_t32);
    L080489CE(_t32);
    L080489D2(_t32);
    L080489D7(_t32);
    L080489DB();
    L080489DE();
    L080489E2();
    L080489E5();
    L080489E8();
    L080489EC();
    L080489EF();
    L080489F2();
    L080489F6();
    L080489F9(__ecx, __edi, __esi);
    L080489FC(__ecx, __edi, __esi);
    L08048A00(__ecx, __edi, __esi);
    L08048A03();
    L08048A06();
    L08048A0A();
    L08048A0D();
    L08048A10();
    L08048A14();
    L08048A17();
    L08048A1A();
    L08048A1E();
    L08048A21(_t32, __ecx, __edi);
    L08048A24(_t32, __ecx, __edi);
    L08048A28(_t32, __ecx, __edi);
    L08048A2B();
    L08048A2E();
    L08048A32();
    L08048A35();
    L08048A38();
    L08048A3C();
    L08048A3F();
    L08048A42();
    L08048A46();
    L08048A49();
    L08048A4C();
    L08048A50();
    L08048A53();
    L08048A55();
    L08048A58();
    L08048A5A();
    L08048A5D();
    L08048A61();
    L08048A66();
    L08048A6A();
    L08048A6F();
    L08048A71();
    L08048A74();
    L08048A79();
    L08048A7F();
    L08048A83();
    L08048A89();
    L08048A90();
    L08048A94();
    L08048A96();
    L08048A99();
    L08048A9B(__ecx, __eflags);
    L08048A9F(__ecx, __eflags);
    L08048AA3(__ecx, __eflags);
    L08048AA7();
    L08048AAB(__ecx, __eflags);
    L08048AAF(__ecx, __eflags);
    L08048AB3(__ecx, __eflags);
    L08048AB7(__ecx, __eflags);
    L08048ABB(__ecx, __eflags);
    L08048ABF(__ecx, __eflags);
    L08048AC3(__ecx, __eflags);
    L08048AC7(__ecx, __eflags);
    L08048ACB(__ecx, __eflags);
    L08048ACF(__ecx, __eflags);
    L08048AD3(__ecx, __eflags);
    L08048AD7(__ecx, __eflags);
    L08048ADB();
    L08048ADF();
    L08048AE3();
    L08048AE9();
    L08048AEE();
    L08048AF3();
    L08048AF7();
    L08048AFD();
    L08048B02();
    L08048B07();
    L08048B0B();
    L08048B0F();
    L08048B13();
    L08048B15();
    L08048B17();
    L08048B19();
    L08048B1B();
    L08048B1E();
    L08048B20();
    L08048B24(_t32);
    L08048B27(_t32);
    L08048B2A(_t32);
    L08048B2F(_t32);
    L08048B44(L08048B40(L08048B3A(L08048B34(_t32))));
    L08048B47(_t35);
    L08048B4C(_t35);
    L08048B52(__ecx);
    L08048B56(__ecx);
    L08048B5C(__ecx);
    L08048B63(__ebx, __ecx);
    L08048B66(__ebx, __ecx);
    L08048B6A(__ebx, __ecx);
    verr();
    L08048B71();
    wait();
    L08048B77();
    L08048B7A();
    L08048B7C();
    L08048B7F();
    L08048B83();
    L08048B86();
    L08048B88();
    L08048B8B(_t35);
    L08048B8E(_t35);
    L08048B91(_t35);
    L08048B96(_t35);
    L08048BAF(L08048BAB(L08048BA7(L08048BA1(L08048B9B(_t35)))));
    0;
    0;
    _push(_t41);
    _pop(__ebp);
    return;
}

L080495AA()
{
    return;
}

L080495B0()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134522532;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134522532;
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

L080495E8()
{
    _unknown_ _t1;
    _unknown_ _t2;

    _pop(__ebx);
    L08048370(__esi);
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L080495E8()
{
    _unknown_ _t1;
    _unknown_ _t2;

    _pop(__ebx);
    @rec 0x08048370@L08048370@(__esi);
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//     786 Register nodes
//     154 Temporaries nodes
//      40 Casts
//    3551 Statements
//       6 Labels
//       1 Gotos
//     497 Blocks
//    3843 Nodes
//     253 Assembly nodes
//     208 Unknown Types


