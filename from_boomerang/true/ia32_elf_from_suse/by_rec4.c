L080487B0()
{
    _unknown_ __ebp;

    L080489E4(__edx);
    L08048A50(__ecx);
    L08049ED0(__edx);
    return;
}

int __overflow(struct _IO_FILE* fp, int v)
{// addr = 0x080487E8
    struct _IO_FILE* fp;
    goto __imp____overflow;
}

int fputs_unlocked(char* str, struct _IO_FILE* fp)
{// addr = 0x080487F8
    goto __imp__fputs_unlocked;
}

int fprintf(struct _IO_FILE* fp, char* format)
{// addr = 0x08048808
    goto __imp__fprintf;
}

char* getenv(char* __name)
{// addr = 0x08048818
    goto __imp__getenv;
}

__builtin_va_list dcgettext(char* __domainname, char* __msgid, int __category)
{// addr = 0x08048828
    goto __imp__dcgettext;
}

__builtin_va_list setlocale(int __category, char* __locale)
{// addr = 0x08048838
    goto __imp__setlocale;
}

__cxa_atexit()
{// addr = 0x08048848
    goto __imp____cxa_atexit;
}

void abort()
{// addr = 0x08048878
    goto __imp__abort;
}

int vfprintf(struct _IO_FILE* fp, char* fmt0, _G_va_list vals)
{// addr = 0x08048888
    goto __imp__vfprintf;
}

__builtin_va_list bindtextdomain(char* __domainname, char* __dirname)
{// addr = 0x08048898
    goto __imp__bindtextdomain;
}

__libc_start_main()
{// addr = 0x080488C8
    goto __imp____libc_start_main;
}

__builtin_va_list textdomain(char* __domainname)
{// addr = 0x080488E8
    goto __imp__textdomain;
}

int printf(char* format)
{// addr = 0x080488F8
    goto __imp__printf;
}

void exit(int __status)
{// addr = 0x08048938
    goto __imp__exit;
}

L080489E4(_unknown_ __edx)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __edx = __edx;
    L1();
    _pop(__ebx);
    _push(__edx);
    __eax =  *((intOrPtr*)(_t2 + 11607 + -4));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__eax);
    return;
}

L080489ED(_unknown_ __edx)
{
    _unknown_ _t2;

    __edx = __edx;
    _pop(__ebx);
    _push(__edx);
    __eax =  *((intOrPtr*)(_t2 + 11607 + -4));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__eax);
    _pop(__ebx);
    _pop(__ebp);
    return;
}

L08048A10(_unknown_ __eax, _unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t2;
    intOrPtr* _t3;
    _unknown_ _t5;
    _unknown_ _t6;

    _t2 = __eax;
    _push(_t2);
    _push(_t2);
    if( *134526980 != 0) {
        return ;
    }
    _t3 =  *134526928;
    __edx =  *_t3;
    if(__edx == 0) {
L4:
         *134526980 = 1;
        return;
    } else {
        while(1) {
L3:
             *134526928 = _t3 + 4;
             *__edx();
            _t3 =  *134526928;
            __edx =  *_t3;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L08048A50(_unknown_ __ecx)
{
    _unknown_ __ebp;

    __ecx = __ecx;
    _push(__ecx);
    _push(__ecx);
    if( *134526576 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134526576);
    0();
    __esp = __esp + 16;
    return;
}

L08048A80(int _a4)
{
    char* _v20;
    char _v24;
    intOrPtr _v36;
    intOrPtr _v40;
    intOrPtr _v44;
    intOrPtr _v68;
    _unknown_ _v72;
    _unknown_ _v76;
    _unknown_ _v80;
    intOrPtr _v84;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t41;
    _unknown_ _t42;
    _unknown_ _t45;
    _unknown_ _t46;
    _unknown_ _t48;
    _unknown_ _t50;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t55;
    _unknown_ _t56;
    _unknown_ _t58;
    _unknown_ _t60;
    _unknown_ _t61;
    _unknown_ _t62;
    intOrPtr _t64;
    char* _t65;
    _unknown_ _t67;
    _unknown_ _t68;
    _unknown_ _t70;
    char* _t71;
    intOrPtr _t75;
    intOrPtr _t76;
    _unknown_ _t77;
    _unknown_ _t78;
    intOrPtr _t80;
    intOrPtr _t81;
    _unknown_ _t82;
    _unknown_ _t83;
    signed int _t85;
    _unknown_ _t86;
    char* _t88;

    _t85 = __esp;
    __esp = __esp - 24;
     *__esp = dcgettext(0, "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n", 5);
    _t71 =  *134527304;
    _v20 = _t71;
    _v24 = _t71;
    printf();
    fputs_unlocked(dcgettext(0, "      --help     display this help and exit\n", 5), __imp__stdout);
    fputs_unlocked(dcgettext(0, "      --version  output version information and exit\n", 5), __imp__stdout);
     *__esp = dcgettext(0, "\nReport bugs to <%s>.\n", 5);
    _v24 = "bug-coreutilsgnu.org";
    printf();
    exit(_a4);
    _t81 = _t80;
    _t76 = _t75;
    _push(_t85);
    __esp = __esp - 40;
    _v44 = _t64;
    _t65 = _v20;
    __esp = __esp & 240;
    _v40 = _t81;
    __esp = __esp - 16;
    _v36 = _t76;
     *__esp = 6;
     *134527304 =  *_t65;
    _v84 = 134520892;
    setlocale();
    bindtextdomain("coreutils", "/usr/share/locale");
    textdomain("coreutils");
    L08049E90(134515840);
    if(_v24 == 2) {
L3:
        _t88 = getenv("POSIXLY_CORRECT");
        if(_t88 == 0) {
            asm("cld ");
            _v24 = _t65[4];
            asm("rep cmpsb ");
            if(_t88 == 0) {
                 *__esp = 0;
                L08048A80();
                _t65 = _t65[4];
                _v24 = _t65;
            }
            asm("cld ");
            asm("rep cmpsb ");
            if(_t88 == 0) {
                _v68 = 0;
                _t65 = "GNU coreutils";
                L08049AF0(__imp__stdout, "true", _t65, "5.2.1", "Jim Meyering");
            }
        }
    }
    exit(0);
    goto L3;
}

main(intOrPtr _a4, char* _a8)
{// addr = 0x08048B60
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    char _v20;
    intOrPtr _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    intOrPtr _v56;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t26;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t30;
    intOrPtr _t32;
    char* _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    intOrPtr _t37;
    _unknown_ _t38;
    _unknown_ _t39;
    intOrPtr _t41;
    _unknown_ _t42;
    _unknown_ _t43;
    char* _t46;

    _v16 = _t32;
    _t33 = _a8;
    __esp = __esp & 240;
    _v12 = _t41;
    __esp = __esp - 16;
    _v8 = _t37;
     *__esp = 6;
     *134527304 =  *_t33;
    _v56 = 134520892;
    setlocale();
    bindtextdomain("coreutils", "/usr/share/locale");
    textdomain("coreutils");
    L08049E90(134515840);
    if(_a4 == 2) {
L2:
        _t46 = getenv("POSIXLY_CORRECT");
        if(_t46 != 0) {
            goto L1;
        }
        goto L3;
    }
L1:
    exit(0);
    goto L2;
L3:
    asm("cld ");
    _v20 = _t33[4];
    asm("rep cmpsb ");
    if(_t46 == 0) {
         *__esp = 0;
        L08048A80();
        _t33 = _t33[4];
        _v20 = _t33;
    }
    asm("cld ");
    asm("rep cmpsb ");
    if(_t46 == 0) {
        _v40 = 0;
        _t33 = "GNU coreutils";
        L08049AF0(__imp__stdout, "true", _t33, "5.2.1", "Jim Meyering");
    }
    goto L1;
}

L080498D0(struct _IO_FILE* _a4, char* _a8, int _a12, int _a16, void* _a20)
{
    int _v20;
    int _v24;
    int _v28;
    int _v32;
    int _v36;
    char* _v40;
    _unknown_ _t60;
    _unknown_ _t61;
    char* _t62;
    _unknown_ _t64;
    char** _t65;
    _unknown_ _t66;
    char** _t68;
    _unknown_ _t69;
    _unknown_ _t73;
    _unknown_ _t77;

    __ebx = 0;
    __edi = _a20;
    __esi = _a4;
    _v20 = _a12;
    __ecx = _a8;
    __edx =  &((__edi)[1]);
    _v24 = _a16;
    if( *__edi == 0) {
L4:
        if(__ecx == 0) {
L25:
            _v32 = _v24;
             *__esp = __esi;
            _v36 = _v20;
            _v40 = "%s %s\n";
            fprintf();
L6:
            if(__ebx > 9) {
                _v36 = 5;
                _t62 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
                goto L9;
            }
            switch( *((intOrPtr*)(__ebx * 4 +  &M0804A620))) {
                case 0:
                    _v36 = 5;
                    goto L9;
                case 1:
                    _v36 = 5;
                    goto L9;
                case 2:
                    __ecx = 5;
                    __edx = "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n";
                    _v36 = 5;
                    _v40 = "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n";
                    goto L10;
                case 3:
                    __ebx = "Written by %s, %s, %s,\n%s, %s, and %s.\n";
                    _v36 = 5;
                    _v40 = "Written by %s, %s, %s,\n%s, %s, and %s.\n";
                    goto L10;
                case 4:
                    _v36 = 5;
                    goto L9;
                case 5:
                    _v36 = 5;
                    goto L9;
                case 6:
                    __edx = 5;
                    _v36 = 5;
                    goto L9;
                case 7:
                    __ebx = 5;
                    __ecx = "Written by %s and %s.\n";
                    _v36 = 5;
                    _v40 = "Written by %s and %s.\n";
L10:
                    vfprintf(__esi, dcgettext(0), __edi);
                    _t65 =  *(__esi + 20);
                    if(_t65 >=  *((intOrPtr*)(__esi + 24))) {
                         *__esp = __esi;
                        __ebx = 10;
                        _v40 = 10;
                        __overflow();
                    } else {
                         *_t65 = 10;
                         *(__esi + 20) =  &(( *(__esi + 20))[0]);
                    }
                    _v40 = __esi;
                     *__esp =  *134526952;
                    L1();
                    _t68 =  *(__esi + 20);
                    if(_t68 >=  *((intOrPtr*)(__esi + 24))) {
                         *__esp = __esi;
                        __ecx = 10;
                        _v40 = 10;
                        __overflow();
                    } else {
                         *_t68 = 10;
                         *(__esi + 20) =  &(( *(__esi + 20))[0]);
                    }
                    _a8 = __esi;
                    __edx = 5;
                    _a4 = dcgettext(0, "This is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 5);
                    __esp =  &((__esp)[7]);
                    _pop(__ebx);
                    _pop(__esi);
                    _pop(__edi);
                    _pop(__ebp);
                    goto __imp__fputs_unlocked;
                case 8:
                    _v36 = 5;
                    goto L9;
                case 9:
                    abort();
                    goto L25;
            }
L9:
            _v40 = _t62;
            goto L10;
        }
    } else {
        __esi = __esi;
        while(1) {
L3:
            __ebx = __ebx + 1;
            _t73 =  *__edx;
            __edx = __edx + 4;
            if(_t73 == 0) {
                break;
            }
        }
        goto L4;
    }
L5:
    _v28 = _v24;
    _v36 = __ecx;
     *__esp = __esi;
    _v32 = _v20;
    _v40 = "%s (%s) %s\n";
    fprintf();
    goto L6;
}

L08049AF0(struct _IO_FILE* _a4, char* _a8, int _a12, int _a16, char _a20)
{
    _unknown_ _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    __esp = __esp - 24;
    L080498D0(_a4, _a8, _a12, _a16,  &_a20);
    return;
}

L08049E88()
{
    return;
}

L08049E90(intOrPtr _a4)
{
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ __ebx;
    intOrPtr _t5;
    _unknown_ _t6;
    _unknown_ _t8;

    _t5 = 0;
    __esp = __esp - 12;
    L08049E88();
    __edx =  *((intOrPtr*)(_t8 + 6310 + -8));
    if(__edx != 0) {
        _t5 =  *__edx;
    }
    _v12 = _t5;
    _v16 = 0;
     *__esp = _a4;
    __cxa_atexit();
    __esp = __esp + 12;
    return;
}

L08049ED0(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __ebx = 134526560;
    __eax =  *134526560;
    if(__eax != 255) {
        while(1) {
L1:
            __ebx = __ebx - 4;
             *__eax();
            __eax =  *__ebx;
            if(__eax == 255) {
                break;
            }
        }
    }
    _pop(__eax);
    return;
}

L08049EF4()
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t2;

    L1();
    _pop(__ebx);
    _push(__eax);
    L08048A10(__eax, __esi);
    _pop(__ecx);
    return;
}

L08049EFD()
{
    _unknown_ _t1;
    _unknown_ _t2;

    _pop(__ebx);
    _push(__eax);
    L08048A10(__eax, __esi);
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L08049EFD()
{
    _unknown_ _t1;
    _unknown_ _t2;

    _pop(__ebx);
    _push(__eax);
    @rec 0x08048A10@L08048A10@(__eax, __esi);
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//     145 Register nodes
//      63 Temporaries nodes
//       6 Casts
//     396 Statements
//      28 Labels
//      19 Gotos
//      28 Blocks
//     951 Nodes
//       8 Assembly nodes
//      82 Unknown Types


