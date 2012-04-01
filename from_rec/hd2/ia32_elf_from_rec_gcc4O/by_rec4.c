L08048450()
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __esp = __esp - 4;
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 7064 + -4)) != 0) {
        __gmon_start__();
    }
    L080485D0();
    L08048950();
    _pop(__eax);
    return;
}

L0804845C()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 7064 + -4)) != 0) {
        __gmon_start__();
    }
    L080485D0();
    L08048950();
    _pop(__eax);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

__xstat()
{// addr = 0x08048490
    goto __imp____xstat;
}

__gmon_start__()
{// addr = 0x080484A0
    goto __imp____gmon_start__;
}

__printf_chk()
{// addr = 0x080484B0
    goto __imp____printf_chk;
}

__libc_start_main()
{// addr = 0x080484C0
    goto __imp____libc_start_main;
}

void perror(char* msg)
{// addr = 0x080484D0
    goto __imp__perror;
}

__strcat_chk()
{// addr = 0x080484E0
    goto __imp____strcat_chk;
}

int fclose(struct _IO_FILE* fp)
{// addr = 0x080484F0
    goto __imp__fclose;
}

struct _IO_FILE* fopen(char* name, char* mode)
{// addr = 0x08048500
    goto __imp__fopen;
}

__stack_chk_fail()
{// addr = 0x08048510
    goto __imp____stack_chk_fail;
}

__sprintf_chk()
{// addr = 0x08048520
    goto __imp____sprintf_chk;
}

int fread(_G_va_list dst, int sz, int nitems, struct _IO_FILE* fp)
{// addr = 0x08048530
    goto __imp__fread;
}

L080485D0()
{
    _unknown_ __ebp;

    __eax =  *134520604;
    if( *134520604 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
     *__esp = 134520604;
     *__eax();
    return;
}

L08048600(intOrPtr _a4, signed int _a8, intOrPtr _a12)
{
    signed int _v32;
    char _v103;
    char _v112;
    intOrPtr _v128;
    signed int _v156;
    char* _v160;
    intOrPtr _v164;
    intOrPtr _v168;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t50;
    _unknown_ _t55;
    intOrPtr _t57;
    char* _t60;
    char* _t61;
    signed int _t63;
    _unknown_ _t66;
    intOrPtr _t67;
    char* _t69;
    _unknown_ _t70;
    signed int _t71;
    signed int _t73;
    _unknown_ _t74;
    signed int _t75;
    signed int* _t78;
    intOrPtr _t80;
    _unknown_ _t81;
    intOrPtr _t82;
    _unknown_ _t83;
    intOrPtr _t84;
    intOrPtr _t86;
    _unknown_ _t93;

    _t67 = _a4;
    _v32 =  *gs:0x14];
    _v156 = _a8;
    _v160 = "%08lX:";
    _v164 = 80;
    _v168 = 1;
     *__esp =  &_v112;
    __sprintf_chk();
    _t84 = _a12;
    if(_t84 > 16) {
        _t84 = 16;
    }
    _t80 = 1;
    if(_t84 <= 0) {
        goto L7;
    } else {
        _v128 = _t84;
        _t86 = _t67;
        _t69 =  &_v103;
        while(1) {
L4:
            _v156 =  *(_t86 + _t80) & 255;
            _v160 = " %02lX";
            _v164 = -1;
            _v168 = 1;
             *__esp = _t69;
            __sprintf_chk();
            _t80 = _t80 + 1;
            _t69 = _t69 + 3;
            if(_t80 >= _v128) {
                break;
            }
        }
        _t67 = _t86;
        _t84 = _v128;
        if(_t84 > 15) {
            asm("repne scasb ");
            _t75 =  !-1;
             *((intOrPtr*)( &_v112 + _t75 - 1)) = 8134688;
            _v128 = _t75 + 2;
L11:
            _t78 = __ebp + _v128 - 108;
            _t57 = 0;
            _t82 = _t67;
            while(1) {
L12:
                _t73 =  *(_t82 + _t57) & 255;
                if((_t73 - 32 & 4294967295) > 94) {
                    _t73 = 46;
                }
                 *_t78 = _t73 & 4294967295;
                _t57 = _t57 + 1;
                _t78 =  &(_t78[0]);
                if(_t57 == _t84) {
                    break;
                }
            }
            if(_t84 <= 15) {
L10:
                _t60 = __ebp + _v128 + _t84 - 108;
                while(1) {
L17:
                     *_t60 = 32;
                    _t84 = _t84 + 1;
                    _t60 = _t60 + 1;
                    _t93 = _t84 - 15;
                    if(_t93 > 0) {
                        break;
                    }
                }
L18:
                _t61 =  &_v112;
                 *((short*)(_t61 + _t84 + _v128)) = 124;
                _v164 = _t61;
                _v168 = 134515122;
                 *__esp = 1;
                __printf_chk();
                _t63 = _v32 ^  *gs:0x14];
                if(_t93 == 0) {
                    return _t63;
                }
                goto L21;
            }
            goto L18;
        }
        _t80 = _t84 + 1;
        while(1) {
L7:
            _v164 = 80;
            _v168 = 134515118;
             *__esp =  &_v112;
            __strcat_chk();
            _t80 = _t80 + 1;
            if(_t80 - 1 > 15) {
                break;
            }
        }
        goto L8;
L21:
        __stack_chk_fail();
        return _t63;
    }
L8:
    asm("repne scasb ");
    _t71 =  !-1;
     *((intOrPtr*)( &_v112 + _t71 - 1)) = 8134688;
    _v128 = _t71 + 2;
    if(_t84 > 0) {
        goto L11;
    }
    _t84 = 0;
    goto L10;
}

L080487AF(char* _a4)
{
    intOrPtr _v32;
    char _v48;
    struct _IO_FILE* _v92;
    char _v136;
    struct _IO_FILE* _v144;
    _unknown_ _v160;
    struct _IO_FILE* _v164;
    char* _v168;
    _unknown_ __ebx;
    void* __edi;
    int __esi;
    _unknown_ __ebp;
    _unknown_ _t20;
    struct _IO_FILE* _t21;
    struct _IO_FILE* _t22;
    _unknown_ _t23;
    int _t24;
    int _t25;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    int _t31;
    _unknown_ _t33;

    _t30 = _a4;
    _v32 =  *gs:0x14];
    _t21 =  &_v136;
    _v164 = _t21;
    _v168 = _a4;
     *__esp = 3;
    __xstat();
    __eflags = _t21;
    if(_t21 == 0) {
        _t22 = fopen(_t30, 134515126);
        _v144 = _t22;
        __eflags = _t22;
        if(_t22 == 0) {
            perror(_t30);
            _t24 = 1;
            goto L9;
        }
        goto L3;
        while(1) {
L6:
            _t25 = fread(__edi, 1, 16, _v144);
            _t31 = _t25;
            __eflags = _t31;
            if(_t31 == 0) {
                break;
            }
            L08048600(__edi, __esi, _t25);
            __esi = __esi + _t31;
            __eflags = _v92 - __esi;
            if(_v92 > __esi) {
                continue;
            }
            break;
        }
L8:
        fclose(_v144);
        _t24 = 0;
        goto L9;
    }
    perror(_t30);
    _t24 = 1;
L9:
    if(__eflags == 0) {
        return _t24;
    }
    __stack_chk_fail();
    return _t24;
L3:
    __esi = 0;
    __edi =  &_v48;
    __eflags = _v92;
    if(_v92 != 0) {
        goto L6;
    }
    goto L8;
}

main(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8)
{// addr = 0x080488A0
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t6;
    _unknown_ _t10;
    signed int _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    intOrPtr _t15;

    __esp = __esp & 240;
    _push(_t12);
    _push(_t14);
    _push(_t10);
    __esp = __esp - 20;
    _t15 = _a8;
    _t11 = 1;
    _t13 = 0;
    if(_a4 > 1) {
        while(1) {
L1:
            _t13 = _t13 + L080487AF( *((intOrPtr*)(_t15 + _t11 * 4)));
            _t11 = _t11 + 1;
            if(_a4 <= _t11) {
                break;
            }
        }
    }
    __esp = __esp + 20;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    return _t13;
}

L0804894A()
{
    return;
}

L08048950()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134520588;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134520588;
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

L08048950()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134520588;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134520588;
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
//      55 Register nodes
//     111 Temporaries nodes
//       6 Casts
//     201 Statements
//      30 Labels
//      11 Gotos
//      19 Blocks
//     622 Nodes
//       3 Assembly nodes
//      37 Unknown Types


