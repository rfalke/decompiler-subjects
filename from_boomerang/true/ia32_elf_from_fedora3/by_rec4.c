L080488BC()
{
    _unknown_ __ebp;

    L08048AE4(__edx);
    L08048B3C(__esi);
    L0804A0D0(__edx);
    return;
}

__fpending()
{// addr = 0x080488E4
    goto __imp____fpending;
}

int __overflow(struct _IO_FILE* fp, int v)
{// addr = 0x080488F4
    struct _IO_FILE* fp;
    goto __imp____overflow;
}

int fputs_unlocked(char* str, struct _IO_FILE* fp)
{// addr = 0x08048904
    goto __imp__fputs_unlocked;
}

int fprintf(struct _IO_FILE* fp, char* format)
{// addr = 0x08048914
    goto __imp__fprintf;
}

char* getenv(char* __name)
{// addr = 0x08048924
    goto __imp__getenv;
}

__builtin_va_list dcgettext(char* __domainname, char* __msgid, int __category)
{// addr = 0x08048934
    goto __imp__dcgettext;
}

__builtin_va_list setlocale(int __category, char* __locale)
{// addr = 0x08048944
    goto __imp__setlocale;
}

__cxa_atexit()
{// addr = 0x08048954
    goto __imp____cxa_atexit;
}

int* __errno_location()
{// addr = 0x08048964
    goto __imp____errno_location;
}

void* malloc(int __size)
{// addr = 0x08048974
    goto __imp__malloc;
}

void abort()
{// addr = 0x08048984
    goto __imp__abort;
}

int vfprintf(struct _IO_FILE* fp, char* fmt0, _G_va_list vals)
{// addr = 0x08048994
    goto __imp__vfprintf;
}

__builtin_va_list bindtextdomain(char* __domainname, char* __dirname)
{// addr = 0x080489A4
    goto __imp__bindtextdomain;
}

mbrtowc()
{// addr = 0x080489B4
    goto __imp__mbrtowc;
}

__libc_start_main()
{// addr = 0x080489C4
    goto __imp____libc_start_main;
}

void* realloc(void* __ptr, int __size)
{// addr = 0x080489D4
    goto __imp__realloc;
}

__builtin_va_list textdomain(char* __domainname)
{// addr = 0x080489E4
    goto __imp__textdomain;
}

int printf(char* format)
{// addr = 0x080489F4
    goto __imp__printf;
}

int fclose(struct _IO_FILE* fp)
{// addr = 0x08048A14
    goto __imp__fclose;
}

__ctype_get_mb_cur_max()
{// addr = 0x08048A24
    goto __imp____ctype_get_mb_cur_max;
}

void exit(int __status)
{// addr = 0x08048A34
    goto __imp__exit;
}

iswprint()
{// addr = 0x08048A54
    goto __imp__iswprint;
}

void free(void* __ptr)
{// addr = 0x08048A64
    goto __imp__free;
}

void* memset(void* __s, int __c, int __n)
{// addr = 0x08048A74
    goto __imp__memset;
}

mbsinit()
{// addr = 0x08048A84
    goto __imp__mbsinit;
}

void error(int __status, int __errnum, char* __format)
{// addr = 0x08048A94
    goto __imp__error;
}

__ctype_b_loc()
{// addr = 0x08048AA4
    goto __imp____ctype_b_loc;
}

L08048AE4(_unknown_ __edx)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __edx = __edx;
    L1();
    _pop(__ebx);
    _push(__edx);
    __eax =  *((intOrPtr*)(_t2 + 11871 + -4));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__eax);
    return;
}

L08048AED(_unknown_ __edx)
{
    _unknown_ _t2;

    __edx = __edx;
    _pop(__ebx);
    _push(__edx);
    __eax =  *((intOrPtr*)(_t2 + 11871 + -4));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__eax);
    _pop(__ebx);
    _pop(__ebp);
    return;
}

L08048B08()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if( *134527488 != 0) {
        return ;
    }
    while(1) {
        _t2 =  *134527444;
        __edx =  *_t2;
        if(__edx == 0) {
            break;
        }
         *134527444 = _t2 + 4;
         *__edx();
    }
     *134527488 = 1;
    return;
}

L08048B3C(_unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t3;

    __eax =  *134527036;
    if( *134527036 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134527036);
     *__eax();
    __esp = __esp + 16;
    return;
}

L08048B68(int _a4)
{
    intOrPtr* _v20;
    intOrPtr _v24;
    intOrPtr _v32;
    int _v84;
    _unknown_ _v88;
    _unknown_ _v92;
    _unknown_ _v96;
    _unknown_ _v100;
    char* _t53;
    _unknown_ _t54;
    char* _t56;
    _unknown_ _t57;
    _unknown_ _t60;
    char* _t62;
    _unknown_ _t63;
    _unknown_ _t65;
    _unknown_ _t69;
    _unknown_ _t71;
    _unknown_ _t72;
    _unknown_ _t76;
    _unknown_ _t79;
    _unknown_ _t86;
    _unknown_ _t87;
    _unknown_ _t91;
    _unknown_ _t92;
    intOrPtr* _t94;
    _unknown_ _t99;
    _unknown_ _t100;
    _unknown_ _t101;
    struct _IO_FILE** _t102;
    _unknown_ _t104;
    _unknown_ _t105;
    _unknown_ _t106;
    _unknown_ _t107;
    char* _t109;

    L08048D64();
    _t87 = _t86 + 11738;
    __esp = __esp - 16;
    _t53 = dcgettext(0, _t87 + -6196, 5);
    _t94 =  *((intOrPtr*)( *((intOrPtr*)(_t87 + -20))));
     *__esp = _t53;
    _v20 = _t94;
    _v24 = _t94;
    printf();
    _t56 = dcgettext(0, _t87 + -6044, 5);
    _t102 =  *(_t87 + -12);
    fputs_unlocked(_t56,  *_t102);
    fputs_unlocked(dcgettext(0, _t87 + -5996, 5),  *_t102);
    _t62 = dcgettext(0, _t87 + -5942, 5);
    _v24 = _t87 + -5919;
    printf(_t62);
    exit(_a4);
    _push(_t106);
    _push(_t99);
    _push(_t102);
    _push(_t87);
    L08048D64();
    _t88 = _t87 + 11511;
    __esp = __esp - 44;
    __esp = __esp & 240;
    __esp = __esp - 16;
     *((intOrPtr*)( *((intOrPtr*)(_t87 + 11511 + -20)))) =  *_v20;
    setlocale(6, _t88 + -5920);
    bindtextdomain(_t88 + -5823, _t88 + -5897);
    textdomain(_t88 + -5823);
    L0804A0A0(_t88,  *((intOrPtr*)(_t88 + -32)));
    if(_v24 == 2) {
L3:
        _t109 = getenv(_t88 + -5879);
        if(_t109 == 0) {
            asm("cld ");
            _v32 =  *((intOrPtr*)(_a4 + 4));
            asm("rep cmpsb ");
            if(_t109 == 0) {
                 *__esp = 0;
                L08048B68();
                _v32 =  *((intOrPtr*)(_a4 + 4));
            }
            asm("cld ");
            asm("rep cmpsb ");
            if(_t109 == 0) {
                _v84 = 0;
                L08049CCD( *((intOrPtr*)( *((intOrPtr*)(_t88 + -12)))), _t88 + -5813, _t88 + -5827, _t88 + -5833, _t88 + -5846);
            }
        }
    }
    exit(0);
    goto L3;
}

main(intOrPtr _a4, intOrPtr* _a8)
{// addr = 0x08048C4A
    intOrPtr _v28;
    int _v56;
    _unknown_ _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ _t34;
    _unknown_ _t36;
    _unknown_ _t37;
    _unknown_ _t41;
    _unknown_ _t44;
    _unknown_ _t51;
    _unknown_ _t55;
    _unknown_ _t56;
    _unknown_ _t57;
    _unknown_ _t58;
    _unknown_ _t60;
    _unknown_ _t61;
    char* _t63;

    L08048D64();
    _t52 = _t51 + 11511;
    __esp = __esp - 44;
    __esp = __esp & 240;
    __esp = __esp - 16;
     *((intOrPtr*)( *((intOrPtr*)(_t51 + 11511 + -20)))) =  *_a8;
    setlocale(6, _t52 + -5920);
    bindtextdomain(_t52 + -5823, _t52 + -5897);
    textdomain(_t52 + -5823);
    L0804A0A0(_t52,  *((intOrPtr*)(_t52 + -32)));
    if(_a4 == 2) {
L2:
        _t63 = getenv(_t52 + -5879);
        if(_t63 != 0) {
            goto L1;
        }
        goto L3;
    }
L1:
    exit(0);
    goto L2;
L3:
    asm("cld ");
    _v28 =  *((intOrPtr*)(_a8 + 4));
    asm("rep cmpsb ");
    if(_t63 == 0) {
         *__esp = 0;
        L08048B68();
        _v28 =  *((intOrPtr*)(_a8 + 4));
    }
    asm("cld ");
    asm("rep cmpsb ");
    if(_t63 == 0) {
        _v56 = 0;
        L08049CCD( *((intOrPtr*)( *((intOrPtr*)(_t52 + -12)))), _t52 + -5813, _t52 + -5827, _t52 + -5833, _t52 + -5846);
    }
    goto L1;
}

L08048D64()
{
    return;
}

L08048F36(intOrPtr _a4, signed char _a8, signed int _a12)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t17;
    _unknown_ _t24;
    _unknown_ _t25;
    signed int _t26;
    intOrPtr _t29;
    signed int* _t34;
    signed int _t36;

    L08048D64();
    _t25 = _t24 + 10763;
    _t26 = _a8 & 255;
    _t29 = _a4;
    _t36 = _a12;
    _t17 = (_t26 & 4294967295 & ) << 2;
    _t34 = _t17 + _t29 + 4;
    if(_t29 == 0) {
         *(_t25 + _t17 + 472) =  *(_t25 + _t17 + 472) ^ (_t36 & 1 ^  *(_t25 + _t17 + 472) >> (_t26 & 31 & 4294967295) & 1) << (_t26 & 31 & 4294967295);
        return;
    } else {
         *_t34 =  *_t34 ^ (_t36 & 1 ^  *_t34 >> (_t26 & 31 & 4294967295) & 1) << (_t26 & 31 & 4294967295);
        return;
    }
}

L08048FF6(signed int __eax, signed int __edx, intOrPtr _a4, signed int _a8, signed int _a12, intOrPtr _a16)
{
    signed int _v32;
    char _v36;
    signed int _v40;
    signed int _v44;
    signed int _v48;
    signed int _v52;
    signed int _v56;
    signed int _v60;
    signed int _v64;
    signed int _v68;
    signed int _v72;
    signed int _v92;
    signed int _v96;
    signed int _v100;
    signed int* _v104;
    signed int _v108;
    signed int _v112;
    signed int _v128;
    intOrPtr _v132;
    intOrPtr _v136;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t241;
    _unknown_ _t244;
    signed int _t246;
    signed int _t248;
    _unknown_ _t249;
    signed int _t254;
    _unknown_ _t255;
    signed int _t260;
    _unknown_ _t268;
    signed int _t276;
    signed int _t279;
    _unknown_ _t281;
    _unknown_ _t283;
    _unknown_ _t288;
    _unknown_ _t289;
    _unknown_ _t290;
    _unknown_ _t296;
    _unknown_ _t300;
    signed int _t307;
    signed int _t310;
    _unknown_ _t323;
    signed int _t325;
    _unknown_ _t337;
    _unknown_ _t339;
    _unknown_ _t346;
    _unknown_ _t352;

    _t307 = __edx;
    _t241 = __eax;
    L08048D64();
    __esp = __esp - 124;
    _v44 = _t241;
    _v48 = _t307;
    _v56 = 0;
    _v60 = 0;
    _v64 = 0;
    _v68 = 0;
    __ctype_get_mb_cur_max();
    _v72 = _t241 & 4294967295 & ;
    if(_a12 <= 6) {
        _t307 = _a12;
        goto __eax;
    }
    _v52 = 0;
    if(_a8 == 255) {
L30:
        if( *(_a4 + _v52) != 0) {
            goto L4;
        }
    } else {
L3:
        _t307 = _a8;
        if(_v52 == _t307) {
            goto L31;
        }
L4:
        if((_t307 & 0) != 0 && _v52 + _v64 <= _a8) {
            asm("cld ");
            asm("rep cmpsb ");
            if(_v64 == _v64) {
                if(_v56 < _v48) {
                     *((char*)(_v44 + _v56)) = 92;
                }
                _v56 = _v56 + 1;
            }
        }
        _t246 =  *(_a4 + _v52) & 255;
        _v92 = _t246 & 4294967295;
        if((_t246 & 4294967295 & ) > 126) {
            _t248 = _v72;
            if(_t248 == 0) {
                _v36 = 0;
                _v108 =  &_v36;
                _v32 = 0;
                _v96 = 0;
                _v100 = 1;
                if(_a8 == 255) {
                    asm("cld ");
                    asm("repne scasb ");
                    _a8 =  !_a8 - 1;
                }
                _t310 = _v52 + _a4;
                _v104 =  &_v40;
                _v112 = _t310;
                while(1) {
                    _v128 = _v108;
                    _t339 = _v52 + _v96;
                    _v132 = _a8 - _t339;
                    _v136 = _t339 + _a4;
                    _t254 = _v104;
                     *__esp = _t254;
                    mbrtowc();
                    _t325 = _t254;
                    if(_t254 == 0) {
                        break;
                    }
                    if(_t254 == 255) {
                        _v100 = 0;
                        if(_v96 <= 1) {
                            goto L47;
                        }
                        goto L55;
                    }
                    if(_t254 == 254) {
                        _v100 = 0;
                        if(_t339 >= _a8) {
                            break;
                        }
                        _t310 = _v112;
                        if( *((char*)(_t310 + _v96)) == 0) {
                            break;
                        } else {
                            goto L58;
                        }
                        while(1) {
L58:
                            _v96 = _v96 + 1;
                            if(_v52 + _v96 >= _a8) {
                                break;
                            }
                            if( *((char*)(_v112 + _v96)) != 0) {
                                continue;
                            }
                            if(_v96 <= 1) {
                                goto L47;
                            }
L14:
                            _t296 = _v52 + _v96;
                            while() {
                            }
                        }
                        break;
L47:
                        if((_t310 & 0) != 0) {
                            goto L14;
                        }
L48:
                        _t310 = _v52 + 1;
                        if(_v68 != 0 && ( *(_a16 + 4 + (_v92 & 255 & 4294967295 & ) * 4) >> (_v92 & 255 & 31 & 4294967295) & 4294967295 & 1) != 0) {
                            if(_v56 < _v48) {
                                 *((char*)(_v44 + _v56)) = 92;
                            }
                            _v56 = _v56 + 1;
                            _t310 = _v52 + 1;
                        }
                        if(_v56 < _v48) {
                             *((intOrPtr*)(_v44 + _v56)) = _v92 & 255 & 4294967295;
                        }
                        _v56 = _v56 + 1;
                        _v52 = _t310;
                        if(_a8 != 255) {
                            goto L3;
                        }
                        goto L30;
                    }
                    _t276 = _v40;
                     *__esp = _t276;
                    iswprint();
                    _v96 = _v96 + _t325;
                    _v100 = _v100 &  ~(_t276 & 4294967295 & );
                    _t279 = _v108;
                     *__esp = _t279;
                    mbsinit();
                    if(_t279 == 0) {
                        continue;
                    }
                    break;
L55:
                    goto L14;
                }
L46:
                if(_v96 > 1) {
                    goto L14;
                }
                goto L47;
            }
            goto L13;
        }
        goto __eax;
L13:
        _v96 = 1;
        __ctype_b_loc();
        _t310 =  *( *_t248 + (_v92 & 255) * 2) & 65535 & 16384;
        _v100 = _t310;
        if((_t310 & 0) == 0) {
            goto L48;
        }
        goto L14;
L32:
L37:
        if(_v56 < _v48) {
             *((char*)(_v44 + _v56)) = 0;
        }
        __esp =  &((__esp)[0x1f]);
        return _v56;
    }
L31:
    if(_v60 != 0) {
        while(1) {
            _t260 =  *_v60 & 255;
            if((_t260 & 4294967295) == 0) {
                break;
            }
            if(_v56 < _v48) {
                 *(_v44 + _v56) = _t260 & 4294967295;
            }
            _v56 = _v56 + 1;
            _v60 = _v60 + 1;
        }
        goto L37;
    }
    goto L32;
}

L080496C3(signed int _a4, signed int _a8, intOrPtr _a12, intOrPtr _a16, intOrPtr* _a20)
{
    int _v20;
    intOrPtr* _v32;
    intOrPtr _v36;
    intOrPtr _v40;
    _unknown_ __ebx;
    intOrPtr* __edi;
    _unknown_ __ebp;
    int* _t12;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;

    L08048D64();
    _t20 = _t19 + 8830;
    __esp = __esp - 28;
    __edi = _a20;
    if(__edi == 0) {
        __edi = _t20 + 468;
    }
    _t12 = __errno_location();
    _v32 = __edi;
    _v20 =  *_t12;
    _v36 =  *__edi;
    _v40 = _a16;
     *__esp = _a12;
    L08048FF6(_a4, _a8);
     *_t12 = _v20;
    __esp = __esp + 28;
    return;
}

L08049721(signed int __eax, intOrPtr __edx, intOrPtr _a4, intOrPtr* _a8)
{
    signed int _v20;
    intOrPtr _v24;
    int _v28;
    signed int _v32;
    intOrPtr* _v44;
    intOrPtr _v48;
    intOrPtr _v52;
    intOrPtr _v56;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __ebp;
    _unknown_ _t71;
    _unknown_ _t72;
    signed int _t73;
    intOrPtr _t74;
    intOrPtr _t76;
    intOrPtr _t79;
    signed int _t81;
    intOrPtr* _t84;
    intOrPtr _t86;
    _unknown_ _t90;
    _unknown_ _t91;
    _unknown_ _t92;
    _unknown_ _t95;
    signed int _t109;
    signed int _t111;
    intOrPtr _t112;
    intOrPtr* _t113;
    _unknown_ _t115;
    _unknown_ _t116;

L0:
    while(1) {
L0:
        L08048D64();
        _t92 = _t91 + 8736;
        __esp = __esp - 44;
        _v20 = __eax;
        _v24 = __edx;
        _v28 =  *(__errno_location());
        if(_v20 < 0) {
            break;
        }
L11:
        abort();
L12:
        L08049D10();
        _push(_t115);
        _push(_t92);
        L08048D64();
        _v56 = -1;
        _v52 = _t92 + 8341 + 468;
        _pop(__ebx);
        _pop(__ebp);
    }
    _t73 = _v20;
    if( *(_t92 + 144) <= _t73) {
        _t111 = _t73 + 1;
        if(_t111 > 536870911) {
            goto L12;
        } else {
            _t113 =  *((intOrPtr*)(_t92 + 156));
            _t84 = _t92 + 148;
            if(_t113 == _t84) {
                 *__esp = 8;
                L08049DC5(_t113);
                _t113 = _t84;
                 *((intOrPtr*)(_t92 + 156)) = _t84;
                 *_t113 =  *((intOrPtr*)(_t92 + 148));
                 *((intOrPtr*)(_t113 + 4)) =  *((intOrPtr*)(_t92 + 152));
            }
            _t86 = 0 + _t111 * 8;
             *__esp = _t113;
            _v56 = _t86;
            L08049E3F(_t113);
            _t107 =  *(_t92 + 144);
             *((intOrPtr*)(_t92 + 156)) = _t86;
            memset(_t86 +  *(_t92 + 144) * 8, 0, _t111 - _t107 << 3);
             *(_t92 + 144) = _t111;
        }
    }
L5:
    _t74 =  *((intOrPtr*)(_t92 + 156));
    _v32 =  *((intOrPtr*)(_t74 + _v20 * 8));
    _t109 =  *((intOrPtr*)(_t74 + 4 + _v20 * 8));
    _v44 = _a8;
    _v48 = _a4;
    _t76 = _v24;
    _v52 = _t76;
     *__esp = _t109;
    _v56 = _v32;
    L080496C3();
    if(_v32 <= _t76) {
        _t79 = _t76 + 1;
        _t112 =  *((intOrPtr*)(_t92 + 156));
        _v32 = _t79;
         *((intOrPtr*)(_t112 + _v20 * 8)) = _t79;
        if(_t109 != _t92 + 212) {
            L08049FE0(_t109);
            _t112 =  *((intOrPtr*)(_t92 + 156));
        }
        _t81 = _v32;
         *__esp = _t81;
        L08049DC5(_t112);
         *((intOrPtr*)(_t112 + 4 + _v20 * 8)) = _t81;
        _t109 = _t81;
        L080496C3(_t109, _v32, _v24, _a4, _a8);
    }
     *(__errno_location()) = _v28;
    __esp = __esp + 44;
    return _t109;
}

L080499F0(intOrPtr _a4, char _a8)
{
    intOrPtr _v28;
    intOrPtr _v32;
    intOrPtr _v36;
    intOrPtr _v40;
    intOrPtr _v44;
    intOrPtr _v48;
    intOrPtr _v52;
    intOrPtr _v56;
    char _v60;
    intOrPtr _v68;
    char _v72;
    _unknown_ __ebx;
    intOrPtr* __esi;
    _unknown_ __ebp;
    _unknown_ _t34;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t37;

    L08048D64();
    _t37 = _t36 + 8018;
    __esi =  ?_? ( &_v60);
    __esp = __esp - 64;
    _v60 =  *((intOrPtr*)(_t37 + 468));
    _v56 =  *((intOrPtr*)(_t37 + 472));
    _v52 =  *((intOrPtr*)(_t37 + 476));
    _v48 =  *((intOrPtr*)(_t37 + 480));
    _v44 =  *((intOrPtr*)(_t37 + 484));
    _v40 =  *((intOrPtr*)(_t37 + 488));
    _v36 =  *((intOrPtr*)(_t37 + 492));
    _v32 =  *((intOrPtr*)(_t37 + 496));
    _v72 = _a8;
     *__esp =  &_v60;
    _v28 =  *((intOrPtr*)(_t37 + 500));
    _v68 = 1;
    L08048F36();
    L08049721(0, _a4, -1, __esi);
    __esp = __esp + 64;
    return;
}

L08049A8B(intOrPtr _a4)
{
    _unknown_ _v24;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;

    L08048D64();
    __esp = __esp - 20;
    L080499F0(_a4, 58);
    __esp = __esp + 20;
    return;
}

L08049AC0(intOrPtr _a4, intOrPtr _a8, _unknown_ _a12, _unknown_ _a16, intOrPtr* _a20)
{
    _unknown_ _v28;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebx;
    intOrPtr __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr* _t43;
    _unknown_ _t47;
    _unknown_ _t50;
    _unknown_ _t51;
    _unknown_ _t52;
    _unknown_ _t55;
    _unknown_ _t56;
    _unknown_ _t57;
    _unknown_ _t60;
    _unknown_ _t62;
    _unknown_ _t65;
    _unknown_ _t66;
    _unknown_ _t67;
    intOrPtr* _t69;

    __esi = 0;
    L08048D64();
    _t67 = _t66 + 7807;
    __esp = __esp - 28;
    __edi = _a4;
    __ecx = _a8;
    _t69 = _a20 + 4;
    _t43 = _a20;
    while( *_t43 != 0) {
        _t43 = _t69;
        __esi = __esi + 1;
        _t69 = _t69 + 4;
    }
}

L08049CCD(intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr _a16, char _a20)
{
    _unknown_ _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t15;
    _unknown_ _t16;

    L08048D64();
    __esp = __esp - 20;
    L08049AC0(_a4, _a8, _a12, _a16,  &_a20);
    __esp = __esp + 20;
    return;
}

L08049D10()
{
    char* _v16;
    intOrPtr _v20;
    char* _v24;
    void _t12;
    char* _t14;
    _unknown_ _t18;
    _unknown_ _t19;

    L08048D64();
    _t19 = _t18 + 7219;
    __esp = __esp - 20;
    _t12 =  *( *(_t19 + -36));
    if(_t12 != 0) {
L2:
         *_t12();
        __esi = __esi;
    }
    _t14 = dcgettext(0,  *(_t19 + -8), 5);
    _v24 = 0;
    _v16 = _t14;
    _v20 = _t19 + -5792;
     *__esp =  *((intOrPtr*)( *((intOrPtr*)(_t19 + -16))));
    error();
    _t12 = abort();
    goto L2;
}

L08049DC5(_unknown_ __esi, int _a4)
{
    signed int _v0;
    signed int _v4;
    void* _v8;
    int _v32;
    void* _v36;
    signed int _v56;
    signed int* _v60;
    intOrPtr _v64;
    void** _v88;
    signed int _v92;
    int _v120;
    _unknown_ _v144;
    _unknown_ _v148;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t38;
    _unknown_ _t44;
    _unknown_ _t46;
    _unknown_ _t47;
    void* _t49;
    _unknown_ _t50;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t54;
    _unknown_ _t55;
    _unknown_ _t56;
    _unknown_ _t57;
    _unknown_ _t58;
    signed int _t60;
    signed int _t63;
    _unknown_ _t65;
    _unknown_ _t66;
    _unknown_ _t68;
    _unknown_ _t69;
    _unknown_ _t70;
    _unknown_ _t71;
    void** _t72;
    _unknown_ _t73;
    signed int _t74;
    signed int* _t75;
    _unknown_ _t76;
    void* _t78;
    signed int _t80;
    _unknown_ _t82;
    int* _t83;
    int* _t84;
    int* _t85;
    int* _t86;
    _unknown_ _t87;

    _t76 = __esi;
    _push(_t52);
    L08048D64();
    _t53 = _t52 + 7038;
    __esp = __esp - 4;
    if(malloc(_a4) == 0) {
        L08049D10();
        _push(_t82);
        _t83 = __esp;
        _push(_t73);
        _push(_t76);
        _push(_t53);
        L08048D64();
        _t54 = _t53 + 6981;
        __esp = __esp - 12;
        _t74 = _v0;
        _t59 = _v4;
        _t78 = _v8;
        if(-1 / _t74 < _v4 || realloc(_t78, _t59 * _t74) == 0) {
            L08049D10();
            _push(_t83);
            _t84 = __esp;
            _push(_t54);
            L08048D64();
            _t55 = _t54 + 6916;
            __esp = __esp - 20;
            if(realloc(_v36, _v32) == 0) {
                L08049D10();
                _push(_t84);
                _t85 = __esp;
                _push(_t74);
                _push(_t78);
                _push(_t55);
                L08048D64();
                _t56 = _t55 + 6860;
                __esp = __esp - 12;
                _t75 = _v60;
                _t80 = _v56;
                _t60 =  *_t75;
                if(_v64 == 0) {
                    if(_t60 == 0) {
                        _t60 = 64 / _t80;
                    }
L11:
                     *_t75 = _t60;
                    _v92 = _t60 * _t80;
                     *__esp = _v8;
                    L6();
                    __esp =  &((__esp)[3]);
                    _pop(__ebx);
                    _pop(__esi);
                    _pop(__edi);
                    return;
                    goto L21;
                }
                if(2147483647 / _t80 < _t60) {
                    L08049D10();
                    _push(_t85);
                    _t86 = __esp;
                    _push(_t56);
                    L08048D64();
                    _t57 = _t56 + 6753;
                    __esp = __esp - 20;
                    _t63 = _v92;
                    _t72 = _v88;
                    _t49 =  *_t72;
                    if(_t63 == 0) {
                        if(_t49 == 0) {
                        }
L17:
                         *_t72 = _t49;
                        _v120 = _t49;
                         *__esp = _t63;
                        L6();
                        __esp =  &((__esp)[5]);
                        _pop(__ebx);
                        return;
                        goto L21;
                    }
                    if(_t49 >= 0) {
                        L08049D10();
                        _push(_t86);
                        _push(_t80);
                        _push(_t57);
                        L08048D64();
                        __esp = __esp - 16;
                        _t81 = _v120;
                         *__esp = _v120;
                        L08049DC5(_t81);
                        memset(_t49, 0, _t81);
                        __esp =  &((__esp)[4]);
                        _pop(__ebx);
                        _pop(__esi);
                        return;
                    } else {
                        _t49 = _t49 + _t49;
                        goto L17;
                    }
                } else {
                    _t60 = _t60 + _t60;
                    goto L11;
                }
            } else {
                __esp =  &((__esp)[5]);
                _pop(__ebx);
                return;
            }
        } else {
            __esp =  &((__esp)[3]);
            _pop(__ebx);
            _pop(__esi);
            _pop(__edi);
            return;
        }
    } else {
        __esp =  &((__esp)[1]);
        _pop(__ebx);
        return;
    }
L21:
}

L08049E3F(_unknown_ __esi, void* _a4, int _a8)
{
    intOrPtr _v0;
    signed int _v16;
    signed int* _v20;
    intOrPtr _v24;
    void** _v48;
    signed int _v52;
    int _v80;
    _unknown_ _v104;
    _unknown_ _v108;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t30;
    _unknown_ _t32;
    _unknown_ _t33;
    void* _t35;
    _unknown_ _t36;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t41;
    signed int _t42;
    _unknown_ _t47;
    _unknown_ _t48;
    _unknown_ _t49;
    _unknown_ _t50;
    void** _t51;
    _unknown_ _t52;
    signed int* _t53;
    _unknown_ _t54;
    signed int _t56;
    _unknown_ _t58;
    int* _t59;
    int* _t60;
    _unknown_ _t61;

    _t54 = __esi;
    _push(_t37);
    L08048D64();
    _t38 = _t37 + 6916;
    __esp = __esp - 20;
    if(realloc(_a4, _a8) == 0) {
        L08049D10();
        _push(_t58);
        _t59 = __esp;
        _push(_t52);
        _push(_t54);
        _push(_t38);
        L08048D64();
        _t39 = _t38 + 6860;
        __esp = __esp - 12;
        _t53 = _v20;
        _t56 = _v16;
        _t42 =  *_t53;
        if(_v24 == 0) {
            if(_t42 == 0) {
                _t42 = 64 / _t56;
            }
L5:
             *_t53 = _t42;
            _v52 = _t42 * _t56;
            L08049E3F(_t56, _v0);
            __esp =  &((__esp)[3]);
            _pop(__ebx);
            _pop(__esi);
            _pop(__edi);
            return;
            goto L15;
        }
        if(2147483647 / _t56 < _t42) {
            L08049D10();
            _push(_t59);
            _t60 = __esp;
            _push(_t39);
            L08048D64();
            _t40 = _t39 + 6753;
            __esp = __esp - 20;
            _t45 = _v52;
            _t51 = _v48;
            _t35 =  *_t51;
            if(_v52 == 0) {
                if(_t35 == 0) {
                }
L11:
                 *_t51 = _t35;
                _v80 = _t35;
                L08049E3F(_t56, _t45);
                __esp =  &((__esp)[5]);
                _pop(__ebx);
                return;
                goto L15;
            }
            if(_t35 >= 0) {
                L08049D10();
                _push(_t60);
                _push(_t56);
                _push(_t40);
                L08048D64();
                __esp = __esp - 16;
                _t57 = _v80;
                 *__esp = _v80;
                L08049DC5(_t57);
                memset(_t35, 0, _t57);
                __esp =  &((__esp)[4]);
                _pop(__ebx);
                _pop(__esi);
                return;
            } else {
                _t35 = _t35 + _t35;
                goto L11;
            }
        } else {
            _t42 = _t42 + _t42;
            goto L5;
        }
    } else {
        __esp =  &((__esp)[5]);
        _pop(__ebx);
        return;
    }
L15:
}

L08049FE0(void* _a4)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t3;

    L08048D64();
    __esp = __esp - 4;
    __eax = _a4;
    if(_a4 != 0) {
        __eax = free(__eax);
    }
    __esp = __esp + 4;
    return;
}

L0804A016()
{
    intOrPtr _t7;
    _unknown_ _t10;
    _unknown_ _t11;

    _pop(__ebx);
    _t11 = _t10 + 6454;
    L080488BC();
    _t7 = _t11 + -288;
    __edx = _t11 + -288;
     *((intOrPtr*)(__ebp - 16)) = _t7;
    __esi = 0;
    if(0 < _t7 - __edx >> 2) {
        __edi = __edx;
        while(1) {
L2:
             *((intOrPtr*)(__edx + __esi * 4))();
            __esi = __esi + 1;
            __edx = __edi;
            if(__esi >=  *((intOrPtr*)(__ebp - 16)) - __edi >> 2) {
                break;
            }
        }
    }
    __esp = __esp + 12;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L0804A067()
{
    _unknown_ _t9;
    _unknown_ _t10;

    _pop(__ebx);
    _t10 = _t9 + 6373;
    __edi = _t10 + -288;
    _t8 = _t10 + -288 - __edi >> 2;
    __esp = __esp - 12;
    __esi = (_t10 + -288 - __edi >> 2) - 1;
    while(__esi != 255) {
         *((intOrPtr*)(__edi + __esi * 4))();
        __esi = __esi - 1;
    }
}

L0804A0A0(_unknown_ __ebx, intOrPtr _a4)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t6;

    _t4 = __ebx;
    _push(_t4);
    L1();
    _pop(__ebx);
    __edx =  *((intOrPtr*)(_t4 + 6307 + -24));
    __eax = 0;
    if(__edx != 0) {
        __eax =  *__edx;
    }
    _push(__eax);
    _push(0);
    _push(_a4);
    __cxa_atexit();
    return;
}

L0804A0A9()
{
    _unknown_ _t4;
    _unknown_ _t6;

    _pop(__ebx);
    __edx =  *((intOrPtr*)(_t4 + 6307 + -24));
    __eax = 0;
    if(__edx != 0) {
        __eax =  *__edx;
    }
    _push(__eax);
    _push(0);
    _push( *((intOrPtr*)(__ebp + 8)));
    __cxa_atexit();
    _pop(__ebp);
    return;
}

L0804A0D0(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __ebx = 134527020;
    __eax =  *134527020;
    while(__eax != 255) {
        __ebx = __ebx - 4;
         *__eax();
        __eax =  *__ebx;
    }
}

L0804A0F4(_unknown_ __eax)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t2;

    __eax = __eax;
    L1();
    _pop(__ebx);
    _push(__eax);
    L08048B08();
    _pop(__ecx);
    return;
}

L0804A0FD(_unknown_ __eax)
{
    _unknown_ _t1;
    _unknown_ _t2;

    __eax = __eax;
    _pop(__ebx);
    _push(__eax);
    L08048B08();
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L0804A0FD(_unknown_ __eax)
{
    _unknown_ _t1;
    _unknown_ _t2;

    __eax = __eax;
    _pop(__ebx);
    _push(__eax);
    @rec 0x08048B08@L08048B08@();
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//     264 Register nodes
//     394 Temporaries nodes
//      55 Casts
//     783 Statements
//      60 Labels
//      32 Gotos
//      54 Blocks
//    2650 Nodes
//      12 Assembly nodes
//     212 Unknown Types


