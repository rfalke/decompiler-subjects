L00401000(_unknown_ __esp, intOrPtr _a4)
{
    signed int _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;

    __esp = __esp;
    _t5 = _a4 + -2;
    if(_t5 > 5) {
        _push("Other!\n");
        L004010A0(_t5, __esp);
        __esp = __esp + 4;
        return 0;
    } else {
        switch( *((intOrPtr*)(_t5 * 4 +  &M00401084))) {
            case 0:
                _push(4218976);
                L004010A0(_t5, __esp);
                __esp = __esp + 4;
                return 0;
                goto L9;
            case 1:
                _push("Three!\n");
                __eax = L004010A0(__eax, __esp);
                __esp = __esp + 4;
                __eax = 0;
                return 0;
                goto L9;
            case 2:
                _push("Four!\n");
                __eax = L004010A0(__eax, __esp);
                __esp = __esp + 4;
                __eax = 0;
                return 0;
                goto L9;
            case 3:
                _push("Five!\n");
                __eax = L004010A0(__eax, __esp);
                __esp = __esp + 4;
                __eax = 0;
                return 0;
                goto L9;
            case 4:
                _push("Six!\n");
                __eax = L004010A0(__eax, __esp);
                __esp = __esp + 4;
                __eax = 0;
                return 0;
                goto L9;
            case 5:
                _push("Seven!\n");
                __eax = L004010A0(__eax, __esp);
                __esp = __esp + 4;
                __eax = 0;
                return 0;
                goto L9;
        }
    }
L9:
}

L004010A0(_unknown_ __eax, _unknown_ __esp, intOrPtr _a4, char _a8)
{
    _unknown_ _t4;
    _unknown_ _t6;

    __esp = __esp;
    _push(4219032);
    _t4 = L00401230(__eax, __esp);
    __esp = __esp + 4;
    _push( ?_? ( &_a8));
    _push(_a4);
    _push(4219032);
    _t6 = L00401330( &_a8, __edx);
    __esp = __esp + 12;
    _push(4219032);
    _push(_t4);
    L004012D0(__esp);
    __esp = __esp + 8;
    return _t6;
}

L00401200(_unknown_ __esp, intOrPtr _a4)
{
    _unknown_ _t3;

    __esp = __esp;
    if( *4229376 != 2) {
        L00402D90();
    }
    _push(_a4);
    L00402DD0();
    __esp = __esp + 4;
    _push(255);
     *4218984();
    __esp = __esp + 4;
    return;
}

L00401230(_unknown_ __eax, _unknown_ __esp, intOrPtr* _a4)
{
    signed int __edi;
    intOrPtr* __esi;
    _unknown_ _t17;
    _unknown_ _t19;
    _unknown_ _t20;
    intOrPtr _t22;
    intOrPtr _t23;
    _unknown_ _t26;

    __esp = __esp;
    __esi = _a4;
    _push(__edi);
    _push( *((intOrPtr*)(__esi + 16)));
    _t19 = L00403060(__esp);
    __esp = __esp + 4;
    if(_t19 == 0) {
L9:
        _pop(__edi);
        return 0;
    } else {
        if(__esi != 4219032) {
            if(__esi != 4219064) {
                goto L9;
            } else {
                __edi = 1;
                goto L5;
            }
        } else {
            __edi = 0;
L5:
             *4229392 =  *4229392 + 1;
            if(( *(__esi + 12) & 268) != 0) {
                goto L9;
            } else {
                _t22 =  *((intOrPtr*)(4229384 + __edi * 4));
                if(_t22 != 0) {
L8:
                    _t23 =  *((intOrPtr*)(4229384 + __edi * 4));
                     *((intOrPtr*)(__esi + 24)) = 4096;
                     *((intOrPtr*)(__esi + 8)) = _t23;
                     *__esi = _t23;
                     *((intOrPtr*)(__esi + 4)) = 4096;
                     *(__esi + 12) =  *(__esi + 12) | 4354;
                    _pop(__edi);
                    return 1;
                } else {
                    _push(4096);
                    L00402FB0(__esp);
                    __esp = __esp + 4;
                     *((intOrPtr*)(4229384 + __edi * 4)) = _t22;
                    if(_t22 == 0) {
                        goto L9;
                    } else {
                        goto L8;
                    }
                }
            }
        }
    }
L10:
}

L004012D0(_unknown_ __esp, intOrPtr _a4, signed int _a8)
{
    signed int __esi;
    _unknown_ _t19;

    __esp = __esp;
    _push(__esi);
    if(_a4 == 0) {
        _t18 = _a8;
        if(( *(_t18 + 12) & 4294967295 & 16) != 0) {
            _push(_t18);
            _t18 = L004030E0(__esp);
            __esp = __esp + 4;
        }
L5:
        _pop(__esi);
        return;
L6:
    }
    __esi = _a8;
    _t18 =  *(__esi + 12);
    if(( *(__esi + 12) & 4294967295 & 16) == 0) {
        goto L5;
    } else {
        _push(__esi);
        L004030E0(__esp);
        __esp = __esp + 4;
         *((intOrPtr*)(__esi + 24)) = 0;
         *(__esi + 12) =  *(__esi + 12);
         *__esi = 0;
         *((intOrPtr*)(__esi + 8)) = 0;
        _pop(__esi);
        return;
    }
    goto L6;
}

L00401330(_unknown_ __eax, _unknown_ __edx)
{
    signed int __ebx;
    signed int __edi;
    signed int __esi;
    signed int __ebp;
    _unknown_ _t357;
    _unknown_ _t358;
    signed int _t360;
    signed int _t362;
    _unknown_ _t364;
    _unknown_ _t365;
    _unknown_ _t370;
    _unknown_ _t371;

    __ecx = 0;
    __ebp = 0;
     *(__esp + 28) = 0;
     *(__esp + 64) = __ebx & 4294967295;
     *(__esp + 612) =  *(__esp + 612) + 1;
    if((__ebx & 4294967295) == 0) {
        return ;
    }
    while( *(__esp + 28) >= 0) {
        _t362 =  *(__ecx + 4214800 + _t360 * 8) >> 4;
         *(__esp + 60) = _t362;
        if(_t362 > 7) {
L153:
             *(__esp + 64) = __ebx & 4294967295;
             *(__esp + 612) =  *(__esp + 612) + 1;
            if((__ebx & 4294967295) == 0) {
                return ;
            }
            __ecx =  *(__esp + 60);
            continue;
        }
        switch( *((intOrPtr*)(_t362 * 4 +  &M00401BAC))) {
            case 0:
                 *(__esp + 68) = 0;
                 *(__esp + 52) = 0;
                 *(__esp + 40) = 0;
                 *(__esp + 36) = 0;
                 *(__esp + 16) = 0;
                 *(__esp + 24) = -1;
                 *(__esp + 44) = 0;
                goto L153;
            case 1:
                __eax = __ebx & 4294967295;
                __eax = (__ebx & 4294967295) + -32;
                __eflags = __eax - 16;
                if(__eax > 16) {
                    goto L153;
                }
                __ecx = 0;
                switch( *((intOrPtr*)(0 +  &M00401BCC))) {
                    case 0:
                        goto L13;
                    case 1:
                        goto L14;
                    case 2:
                        goto L15;
                    case 3:
                        goto L16;
                    case 4:
                        goto L17;
                    case 5:
                        goto L153;
                }
                goto L154;
            case 2:
L13:
                __eax =  *(__esp + 16);
                 *(__esp + 16) = __eax;
                goto L153;
            case 3:
L14:
                __eax =  *(__esp + 16);
                 *(__esp + 16) = __eax;
                goto L153;
            case 4:
L15:
                __eax =  *(__esp + 16);
                 *(__esp + 16) = __eax;
                goto L153;
            case 5:
L16:
                __eax =  *(__esp + 16);
                 *(__esp + 16) = __eax;
                goto L153;
            case 6:
L17:
                __eax =  *(__esp + 16);
                 *(__esp + 16) = __eax;
                goto L153;
            case 7:
                __eflags = (__ebx & 4294967295) - 42;
                if((__ebx & 4294967295) != 42) {
                    __ecx = __ebx & 4294967295;
                    __eax = __esi + __esi * 4;
                    __edx = (__ebx & 4294967295) + __eax * 2 - 48;
                     *(__esp + 40) = __edx;
                } else {
                    __edx = __esp + 616;
                    _push(__edx);
                    __eax = L00401D90(__esp);
                    __esp = __esp + 4;
                     *(__esp + 40) = __eax;
                    __eflags = __eax;
                    if(__eax < 0) {
                        __edx =  *(__esp + 16);
                        __edx =  *(__esp + 16) | 4;
                        __eax =  ~__eax;
                         *(__esp + 16) = __edx;
                         *(__esp + 40) = __eax;
                    }
                }
                goto L153;
            case 8:
                 *(__esp + 24) = __edx;
                goto L153;
            case 9:
                __eflags = (__ebx & 4294967295) - 42;
                if((__ebx & 4294967295) != 42) {
                    __eax =  *(__esp + 24);
                    __edx = __ebx & 4294967295;
                    __ecx =  *(__esp + 24) + __eax * 4;
                    __eax = __edx + ( *(__esp + 24) + __eax * 4) * 2 - 48;
                     *(__esp + 24) = __eax;
                } else {
                    __eax = __esp + 616;
                    _push(__esp + 616);
                    __eax = L00401D90(__esp);
                    __esp = __esp + 4;
                     *(__esp + 24) = __eax;
                    __eflags = __eax;
                    if(__eax < 0) {
                         *(__esp + 24) = -1;
                    }
                }
                goto L153;
            case 0xa:
                __eax = __ebx & 4294967295;
                __eax = (__ebx & 4294967295) + -73;
                __eflags = __eax - 46;
                if(__eax > 46) {
                    goto L153;
                }
                __ecx = 0;
                switch( *((intOrPtr*)(0 +  &M00401BF8))) {
                    case 0:
                        __eax =  *(__esp + 16);
                         *(__esp + 16) = __eax;
                        goto L153;
                    case 1:
                        __eflags =  *__edi - 54;
                        if( *__edi != 54) {
L33:
                             *(__esp + 60) = __edx;
                            goto L34;
                        }
                        __eflags =  *(__edi + 1) - 52;
                        if( *(__edi + 1) != 52) {
                            goto L33;
                        } else {
                            __eax =  *(__esp + 16);
                            __edi = __edi + 2;
                             *(__esp + 612) = __edi;
                             *(__esp + 16) = __eax;
                        }
                        goto L153;
                    case 2:
                        __eax =  *(__esp + 16);
                         *(__esp + 16) = __eax;
                        goto L153;
                    case 3:
                        __eax =  *(__esp + 16);
                         *(__esp + 16) = __eax;
                        goto L153;
                    case 4:
                        goto L153;
                }
                goto L154;
            case 0xb:
L34:
                __eax =  *4220224;
                 *(__esp + 44) = __edx;
                 *(__esp + 64) =  *(__esp + 64) & 255;
                __eflags =  *( *4220224 + 1 + ( *(__esp + 64) & 255) * 2) & 128;
                if(__eflags != 0) {
                    __edx =  *(__esp + 608);
                    __ecx = __esp + 28;
                    __eax = __ebx & 4294967295;
                    _push(__esp + 28);
                    _push(__edx);
                    _push(__ebx & 4294967295);
                    L00401CC0(__esp, __eflags);
                    __esp = __esp + 12;
                    __edi = __edi + 1;
                     *(__esp + 612) = __edi;
                }
                __edx =  *(__esp + 608);
                __ecx = __esp + 28;
                __eax = __ebx & 4294967295;
                _push(__esp + 28);
                _push(__edx);
                _push(__eax);
                L00401CC0(__esp, __eflags);
                __esp = __esp + 12;
                goto L153;
            case 0xc:
                __eax = __ebx & 4294967295;
                __eax = (__ebx & 4294967295) + -67;
                __eflags = __eax - 53;
                if(__eax > 53) {
L130:
                    __eax =  *(__esp + 52);
                    __eflags = __eax;
                    if(__eax != 0) {
                        goto L153;
                    }
                    goto L131;
                }
                __ecx = 0;
                switch( *((intOrPtr*)(0 +  &M00401C3C))) {
                    case 0:
                        __eax =  *(__esp + 16);
                        __eflags = __eax & 2096;
                        if((__eax & 2096) == 0) {
                             *(__esp + 16) = __eax;
                        }
                        goto L43;
                    case 1:
L43:
                        __eflags =  *(__esp + 16) & 2064;
                        if(( *(__esp + 16) & 2064) == 0) {
                            __ecx = __esp + 616;
                            _push(__esp + 616);
                            __eax = L00401D90(__esp);
                            __esp = __esp + 4;
                             *(__esp + 92) = __eax & 4294967295;
                            __ebp = 1;
L47:
                            __edx = __esp + 92;
                             *(__esp + 20) = __edx;
                            goto L130;
                        }
                        __edx = __esp + 616;
                        _push(__esp + 616);
                        L00401DD0(__esp);
                        __esp = __esp + 4;
                        _push(__eax);
                        __eax = __esp + 96;
                        _push(__esp + 96);
                        L004031E0(__esp);
                        __ebp = __eax;
                        __esp = __esp + 8;
                        __eflags = __ebp;
                        if(__ebp >= 0) {
                            goto L47;
                        } else {
                            __edx = __esp + 92;
                             *(__esp + 52) = 1;
                             *(__esp + 20) = __edx;
                        }
                        goto L130;
                    case 2:
                        __eax = __esp + 616;
                        _push(__esp + 616);
                        __eax = L00401D90(__esp);
                        __esp = __esp + 4;
                        __eflags = __eax;
                        if(__eax == 0) {
L53:
                            __edi =  *4218992;
                            __ecx = __ecx | 255;
                            __eax = 0;
                             *(__esp + 20) = __edi;
                            asm("repne scasb ");
                            __ecx =  !__ecx;
                            __ebp = __ecx;
                            goto L130;
                        }
                        __ecx =  *(__eax + 4);
                        __eflags = __ecx;
                        if(__ecx == 0) {
                            goto L53;
                        }
                        __edx =  *(__esp + 16);
                        __eflags = __edx & 4294967295 & 8;
                        if((__edx & 4294967295 & 8) == 0) {
                            __ebp =  *__eax;
                             *(__esp + 44) = 0;
                             *(__esp + 20) = __ecx;
                        } else {
                            __ebp =  *__eax;
                             *(__esp + 20) = __ecx;
                             *(__esp + 44) = 1;
                            __ebp =  *__eax >> 1;
                        }
                        goto L130;
                    case 3:
                        __eax =  *(__esp + 16);
                        __eflags = __eax & 2096;
                        if((__eax & 2096) == 0) {
                             *(__esp + 16) = __eax;
                        }
                        goto L56;
                    case 4:
L56:
                        __eax =  *(__esp + 24);
                        __esi = 2147483647;
                        __eflags = __eax - 255;
                        if(__eax != 255) {
                            __esi = __eax;
                        }
                        __ecx = __esp + 616;
                        _push(__esp + 616);
                        __ecx = L00401D90(__esp);
                        __eax =  *(__esp + 20);
                        __esp = __esp + 4;
                         *(__esp + 20) = __ecx;
                        __eflags = __eax & 2064;
                        if((__eax & 2064) == 0) {
L65:
                            __eflags = __ecx;
                            if(__ecx == 0) {
                                __ecx =  *4218992;
                                 *(__esp + 20) = __ecx;
                            }
                            __edx = __esi;
                            __esi = __esi - 1;
                            __eflags = __edx;
                            __eax = __ecx;
                            if(__edx == 0) {
L70:
                                __ebp = __eax;
                                goto L130;
                            } else {
                                goto L68;
                            }
                            while(1) {
L68:
                                __eflags =  *__eax;
                                if( *__eax == 0) {
                                    break;
                                }
L69:
                                __eax = __eax + 1;
                                __edx = __esi;
                                __esi = __esi - 1;
                                __eflags = __edx;
                                if(__edx != 0) {
                                    continue;
                                }
                                goto L70;
                            }
                            goto L70;
                        } else {
                            __eflags = __ecx;
                            if(__ecx == 0) {
                                __ecx =  *4218996;
                                 *(__esp + 20) = __ecx;
                            }
                            __edx = __esi;
                            __esi = __esi - 1;
                            __eflags = __edx;
                             *(__esp + 44) = 1;
                            __eax = __ecx;
                            if(__edx == 0) {
L64:
                                __eax = __eax - __ecx;
                                __ebp = __eax;
                                goto L130;
                            } else {
                                while(1) {
                                    __eflags =  *__eax;
                                    if( *__eax == 0) {
                                        break;
                                    }
                                    __eax = __eax + 2;
                                    __edx = __esi;
                                    __esi = __esi - 1;
                                    __eflags = __edx;
                                    if(__edx != 0) {
                                        continue;
                                    }
                                    goto L64;
                                }
                                goto L64;
                            }
                            goto L65;
                        }
                    case 5:
                        __eax = __esp + 616;
                        _push(__esp + 616);
                        __eax = L00401D90(__esp);
                        __esp = __esp + 4;
                        __eflags = __ecx & 4294967295 & 32;
                        if((__ecx & 4294967295 & 32) == 0) {
                            __edx =  *(__esp + 28);
                             *(__esp + 52) = 1;
                             *__eax = __edx;
                        } else {
                             *(__esp + 52) = 1;
                             *__eax = __ecx & 4294967295;
                        }
                        goto L130;
                    case 6:
                         *(__esp + 68) = 1;
                        goto L75;
                    case 7:
L75:
                        __edx =  *(__esp + 16);
                        __eax = __esp + 92;
                         *(__esp + 20) = __esp + 92;
                        __eax =  *(__esp + 24);
                        __edx =  *(__esp + 16) | 64;
                        __eflags =  *(__esp + 24);
                         *(__esp + 16) =  *(__esp + 16) | 64;
                        if(__eflags >= 0) {
                            if(__eflags == 0) {
                                __eflags = (__ebx & 4294967295) - 103;
                                if(__eflags == 0) {
                                     *(__esp + 24) = 1;
                                }
                            }
                        } else {
                             *(__esp + 24) = 6;
                        }
                        __eax =  *(__esp + 616);
                        __edi =  *(__esp + 24);
                        __eax =  *(__esp + 616) + 8;
                         *(__esp + 616) = __eax;
                        __ecx =  *(__eax - 8);
                         *(__esp + 76) =  *(__eax - 8);
                        __edx =  *(__eax - 4);
                        __eax =  *(__esp + 68);
                         *(__esp + 80) = __edx;
                        __ecx = __ebx & 4294967295;
                        _push( *(__esp + 68));
                        _push(__edi);
                        __edx = __esp + 100;
                        _push(__ecx);
                        __eax = __esp + 88;
                        _push(__edx);
                        _push(__eax);
                         *4220200();
                        __esi =  *(__esp + 36);
                        __esp = __esp + 20;
                        __esi = __esi & 128;
                        if(__eflags != 0) {
                            __eflags = __edi;
                            if(__edi == 0) {
                                __ecx = __esp + 92;
                                _push(__ecx);
                                 *4220212();
                                __esp = __esp + 4;
                            }
                        }
                        __eflags = (__ebx & 4294967295) - 103;
                        if((__ebx & 4294967295) == 103) {
                            __eflags = __esi;
                            if(__esi == 0) {
                                __edx = __esp + 92;
                                _push(__edx);
                                 *4220204();
                                __esp = __esp + 4;
                            }
                        }
                        __eflags =  *(__esp + 92) - 45;
                        if( *(__esp + 92) == 45) {
                            __eax =  *(__esp + 16);
                             *(__esp + 16) =  *(__esp + 16);
                            __eax = __esp + 93;
                             *(__esp + 20) = __esp + 93;
                        }
                        __edi =  *(__esp + 20);
                        __ecx = __ecx | 255;
                        __eax = 0;
                        asm("repne scasb ");
                        __ecx =  !__ecx;
                        __ebp = __ecx;
                        goto L130;
                    case 8:
                        __eax =  *(__esp + 16);
                         *(__esp + 48) = 10;
                         *(__esp + 16) =  *(__esp + 16);
                        goto L98;
                    case 9:
                         *(__esp + 48) = 10;
                        goto L98;
                    case 0xa:
                         *(__esp + 24) = 8;
                        goto L92;
                    case 0xb:
L92:
                         *((intOrPtr*)(__esp + 56)) = 7;
                        goto L94;
                    case 0xc:
                         *((intOrPtr*)(__esp + 56)) = 39;
L94:
                         *(__esp + 48) = 16;
                        __eflags = __eax & 4294967295 & 128;
                        if((__eax & 4294967295 & 128) != 0) {
                             *(__esp + 34) = 48;
                             *(__esp + 36) = 2;
                             *(__esp + 35) = __ecx & 4294967295;
                        }
                        goto L98;
                    case 0xd:
                         *(__esp + 48) = 8;
                        __eflags = __eax & 4294967295 & 128;
                        if((__eax & 4294967295 & 128) != 0) {
                            __eax =  *(__esp + 16);
                             *(__esp + 16) =  *(__esp + 16);
                        }
L98:
                        __ebx =  *(__esp + 16);
                        __eflags = __ebx & 4294967295 & 128;
                        if((__ebx & 4294967295 & 128) == 0) {
                            __eflags = __ebx & 4294967295 & 32;
                            if((__ebx & 4294967295 & 32) == 0) {
                                __eflags = __ebx & 4294967295 & 64;
                                if((__ebx & 4294967295 & 64) == 0) {
                                    __eax = __esp + 616;
                                    _push(__esp + 616);
                                    L00401D90(__esp);
                                    __esp = __esp + 4;
                                    __edx = 0;
                                } else {
                                    __edx = __esp + 616;
                                    _push(__edx);
                                    L00401D90(__esp);
                                    __esp = __esp + 4;
                                    asm("cdq ");
                                }
                            } else {
                                __eflags = __ebx & 4294967295 & 64;
                                if((__ebx & 4294967295 & 64) == 0) {
                                    __ecx = __esp + 616;
                                    _push(__esp + 616);
                                    L00401D90(__esp);
                                    __esp = __esp + 4;
                                    __eax = __eax & 65535;
                                    asm("cdq ");
                                } else {
                                    __eax = __esp + 616;
                                    _push(__esp + 616);
                                    L00401D90(__esp);
                                    __eax = __eax & 4294967295;
                                    __esp = __esp + 4;
                                    asm("cdq ");
                                }
                            }
                        } else {
                            __edx = __esp + 616;
                            _push(__esp + 616);
                            L00401DB0(__esp);
                            __esp = __esp + 4;
                        }
                        __eflags = __ebx & 4294967295 & 64;
                        if((__ebx & 4294967295 & 64) == 0) {
L112:
                            __esi = __eax;
                            __edi = __edx;
                        } else {
                            __eflags = __edx;
                            if(__eflags > 0) {
                                goto L112;
                            }
                            if(__eflags < 0) {
L111:
                                __eax =  ~__eax;
                                asm("adc edx, 0x0");
                                __esi = __eax;
                                __edi = __edx;
                                 *(__esp + 16) = __ebx;
                                goto L113;
                            }
                            __eflags = __eax;
                            if(__eax >= 0) {
                                goto L112;
                            }
                            goto L111;
                        }
L113:
                        __eflags = __ebx & 4294967295 & 128;
                        if((__ebx & 4294967295 & 128) == 0) {
                            __edi = __edi & 0;
                        }
                        __ecx =  *(__esp + 24);
                        __eflags = __ecx;
                        if(__eflags >= 0) {
                            __ebx = __ebx & 247;
                             *(__esp + 16) = __ebx;
                        } else {
                            __ecx = 1;
                        }
                        __esi = __esi | __edi;
                        if(__eflags == 0) {
                             *(__esp + 36) = 0;
                        }
                        __eax = __esp + 603;
                         *(__esp + 20) = __eax;
                        while(1) {
                            __edx = __ecx;
                            __ecx = __ecx - 1;
                            __eflags = __edx;
                             *(__esp + 24) = __ecx;
                            if(__eflags <= 0) {
                                break;
                            }
L123:
                            __eax =  *(__esp + 48);
                            asm("cdq ");
                            __ebp =  *(__esp + 48);
                            _push(__edx);
                            _push(__ebp);
                            _push(__edi);
                            _push(__esi);
                             *(__esp + 104) = __edx;
                            L004032D0(__esp, __eflags);
                            __edx =  *(__esp + 88);
                            __ebx = __eax;
                            _push( *(__esp + 88));
                            _push(__ebp);
                            _push(__edi);
                            _push(__esi);
                            __ebx = __eax + 48;
                            L00403260(__esp, __eflags);
                            __eflags = __ebx - 57;
                            __esi = __eax;
                            __edi = __edx;
                            if(__ebx > 57) {
                                __ebx = __ebx +  *((intOrPtr*)(__esp + 56));
                            }
                            __eax =  *(__esp + 20);
                            __ecx =  *(__esp + 24);
                             *__eax = __ebx & 4294967295;
                            __eax = __eax - 1;
                             *(__esp + 20) = __eax;
                            __edx = __ecx;
                            __ecx = __ecx - 1;
                            __eflags = __edx;
                             *(__esp + 24) = __ecx;
                            if(__eflags <= 0) {
                                break;
                            }
                        }
                        __esi = __esi | __edi;
                        if(__eflags == 0) {
                            __ecx =  *(__esp + 16);
                            __ebp = __esp + 603;
                            __ebp = __esp + 603 - __eax;
                            __eax = __eax + 1;
                            __eflags = __ecx & 4294967295 & 2;
                             *(__esp + 20) = __eax;
                            if((__ecx & 4294967295 & 2) == 0) {
                                goto L130;
                            }
                            goto L127;
                        }
                        goto L123;
L127:
                        __eflags =  *__eax - 48;
                        if( *__eax != 48) {
L129:
                            __eax = __eax - 1;
                            __ebp = __ebp + 1;
                             *(__esp + 20) = __eax;
                             *__eax = 48;
                            goto L130;
                        }
                        __eflags = __ebp;
                        if(__ebp != 0) {
                            goto L130;
                        }
                        goto L129;
                    case 0xe:
                        goto L130;
                }
L131:
                __ebx =  *(__esp + 16);
                __eflags = __ebx & 4294967295 & 64;
                if((__ebx & 4294967295 & 64) == 0) {
L139:
                    __edi =  *(__esp + 40);
                    __edx =  *(__esp + 36);
                    __edi =  *(__esp + 40) -  *(__esp + 36);
                    __edi =  *(__esp + 40) -  *(__esp + 36) - __ebp;
                    __eflags = __ebx & 4294967295 & 12;
                    if((__ebx & 4294967295 & 12) != 0) {
                        __esi =  *(__esp + 608);
                    } else {
                        __esi =  *(__esp + 608);
                        __eax = __esp + 28;
                        _push(__esp + 28);
                        _push(__esi);
                        _push(__edi);
                        _push(32);
                        L00401D10();
                        __esp = __esp + 16;
                    }
                    __edx =  *(__esp + 36);
                    __ecx = __esp + 28;
                    _push(__esp + 28);
                    _push(__esi);
                    __eax = __esp + 42;
                    _push(__edx);
                    _push(__eax);
                    L00401D50();
                    __esp = __esp + 16;
                    __eflags = __ebx & 4294967295 & 8;
                    if((__ebx & 4294967295 & 8) != 0) {
                        __eflags = __ebx & 4294967295 & 4;
                        if((__ebx & 4294967295 & 4) == 0) {
                            __ecx = __esp + 28;
                            _push(__esp + 28);
                            _push(__esi);
                            _push(__edi);
                            _push(48);
                            L00401D10();
                            __esp = __esp + 16;
                        }
                    }
                    __eax =  *(__esp + 44);
                    __eflags = __eax;
                    if(__eax == 0) {
L155:
                        __eax =  *(__esp + 20);
                        __edx = __esp + 28;
                        _push(__edx);
                        _push(__esi);
                        _push(__ebp);
                        _push(__eax);
                        L00401D50();
                        __esp = __esp + 16;
                        goto L151;
                    } else {
                        __eflags = __ebp;
                        if(__ebp <= 0) {
                            goto L155;
                        }
                        __esi =  *(__esp + 20);
                        __ebx = __ebp - 1;
                        while(1) {
                            __edx = __esp + 72;
                            _push(__eax);
                            _push(__edx);
                            __esi = __esi + 2;
                            L004031E0(__esp);
                            __esp = __esp + 8;
                            __eflags = __eax;
                            if(__eax <= 0) {
                                break;
                            }
                            __edx =  *(__esp + 608);
                            __ecx = __esp + 28;
                            _push(__esp + 28);
                            _push(__edx);
                            _push(__eax);
                            __eax = __esp + 84;
                            _push(__esp + 84);
                            L00401D50();
                            __esp = __esp + 16;
                            __ecx = __ebx;
                            __ebx = __ebx - 1;
                            __eflags = __ecx;
                            if(__ecx != 0) {
                                continue;
                            }
                            break;
                        }
L150:
                        __ebx =  *(__esp + 16);
L151:
                        __eflags = __ebx & 4294967295 & 4;
                        if((__ebx & 4294967295 & 4) != 0) {
                            __edx =  *(__esp + 608);
                            __ecx = __esp + 28;
                            _push(__esp + 28);
                            _push(__edx);
                            _push(__edi);
                            _push(32);
                            L00401D10();
                            __esp = __esp + 16;
                        }
                        goto L153;
                    }
                }
                __eflags = __ebx & 4294967295 & 1;
                if((__ebx & 4294967295 & 1) == 0) {
                    __eflags = __ebx & 4294967295 & 1;
                    if((__ebx & 4294967295 & 1) == 0) {
                        __eflags = __ebx & 4294967295 & 2;
                        if((__ebx & 4294967295 & 2) == 0) {
                            goto L139;
                        }
                        goto L137;
                    }
                    goto L135;
L137:
                     *(__esp + 34) = 32;
                    goto L138;
                }
                 *(__esp + 34) = 45;
L138:
                 *(__esp + 36) = 1;
                goto L139;
L135:
                 *(__esp + 34) = 43;
                goto L138;
            case 0xd:
                goto L153;
        }
L154:
        return;
    }
}

L00401CC0(_unknown_ __esp, _unknown_ __eflags, signed int _a4, signed int** _a8, signed int* _a12)
{
    signed int _t12;
    signed int _t14;
    signed int** _t15;

    __esp = __esp;
    _t15 = _a8;
    _t15[1] = _t15[1] - 1;
    if(__eflags >= 0) {
        _push(_t15);
        _push(_a4);
        _t12 = L00403350(_a4, __esp);
        __esp = __esp + 8;
    } else {
        _t14 = _a4;
         *( *_t15) = _t14 & 4294967295;
        _t12 = _t14 & 255;
         *_t15 =  &(( *_t15)[0]);
    }
    if(_t12 != 255) {
         *_a12 =  *_a12 + 1;
        return;
    } else {
         *_a12 = _t12;
        return;
    }
}

L00401D10()
{
    intOrPtr __ebx;
    intOrPtr __edi;
    intOrPtr* __esi;
    _unknown_ __ebp;
    intOrPtr _t5;
    _unknown_ _t6;

    _t5 =  *((intOrPtr*)(__esp + 16));
    _push(__esi);
    _t6 = _t5 - 1;
    _t7 = _t5;
    _push(__edi);
    if(_t5 > 0) {
        __esi =  *((intOrPtr*)(__esp + 32));
        __edi =  *((intOrPtr*)(__esp + 28));
        __ebx =  *((intOrPtr*)(__esp + 20));
        while(1) {
            _push(__esi);
            _push(__edi);
            _push(__ebx);
            L00401CC0(__esp, _t7);
            __esp = __esp + 12;
            if( *__esi == 255) {
                break;
            }
            _t6 = _t6 - 1;
            if(_t6 > 0) {
                continue;
            }
            goto L4;
        }
    }
L4:
    _pop(__edi);
    _pop(__esi);
    return;
}

L00401D50()
{
    intOrPtr __ebx;
    intOrPtr* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t7;
    char* _t8;
    intOrPtr _t9;
    _unknown_ _t10;

    _t9 =  *((intOrPtr*)(__esp + 16));
    _push(_t7);
    _t10 = _t9 - 1;
    _t11 = _t9;
    _push(__edi);
    if(_t9 > 0) {
        __edi =  *((intOrPtr*)(__esp + 32));
        __ebx =  *((intOrPtr*)(__esp + 28));
        _t8 =  *((intOrPtr*)(__esp + 20));
        while(1) {
            _push(__edi);
            _push(__ebx);
            _push( *_t8);
            _t7 = _t8 + 1;
            L00401CC0(__esp, _t11);
            __esp = __esp + 12;
            if( *__edi == 255) {
                break;
            }
            _t10 = _t10 - 1;
            if(_t10 > 0) {
                continue;
            }
            goto L4;
        }
    }
L4:
    _pop(__edi);
    _pop(__esi);
    return;
}

L00401D90(_unknown_ __esp, intOrPtr* _a4)
{
    intOrPtr* _t3;
    intOrPtr _t7;

    __esp = __esp;
    _t3 = _a4;
    _t7 =  *_t3 + 4;
     *_t3 = _t7;
    return  *((intOrPtr*)(_t7 - 4));
}

L00401DB0(_unknown_ __esp, intOrPtr* _a4)
{
    intOrPtr* _t4;
    intOrPtr _t7;

    __esp = __esp;
    _t4 = _a4;
    _t7 =  *_t4 + 8;
     *_t4 = _t7;
    return  *((intOrPtr*)(_t7 - 8));
}

L00401DD0(_unknown_ __esp, intOrPtr* _a4)
{
    _unknown_ _t5;

    __esp = __esp;
     *_a4 =  *_a4 + 4;
    return;
}

L00401ED0()
{
    __eax =  *4230380;
    if(__eax != 0) {
         *__eax();
    }
    _push(4218896);
    _push(4218888);
    L00401FF0(__esp);
    __esp = __esp + 8;
    _push(4218884);
    _push(4218880);
    L00401FF0(__esp);
    __esp = __esp + 8;
    return;
}

L00401F00(_unknown_ __esp, intOrPtr _a4)
{
    __esp = __esp;
    _push(0);
    _push(0);
    _push(_a4);
    L00401F40(__esp);
    __esp = __esp + 12;
    return;
}

L00401F40(_unknown_ __esp, intOrPtr _a4, intOrPtr* _a8, signed int _a12)
{
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t8;
    _unknown_ _t9;
    signed int _t10;
    intOrPtr* _t11;
    _unknown_ _t13;
    intOrPtr _t14;

    __esp = __esp;
    _push(_t9);
    _push(_t13);
    _t14 = _a4;
    _push(_t11);
    if( *4229468 == 1) {
        _push(_t14);
        _push(GetCurrentProcess());
        TerminateProcess();
    }
    _t6 = _a8;
    _t10 = _a12;
     *4229464 = 1;
     *4229460 = _t10 & 4294967295;
    if(_a8 == 0) {
        __ecx =  *4230376;
        if(__ecx != 0) {
            _t11 =  *4230372 - 4;
            if(_t11 >= __ecx) {
                while(1) {
L5:
                    _t6 =  *_t11;
                    if(_t6 != 0) {
                         *_t6();
                        __ecx =  *4230376;
                    }
                    _t11 = _t11 - 4;
                    if(_t11 < __ecx) {
                        break;
                    }
                }
            }
        }
        _push(4218908);
        _push(4218900);
        L00401FF0(__esp);
        __esp = __esp + 8;
    }
    _push(4218916);
    _push(4218912);
    L00401FF0(__esp);
    __esp = __esp + 8;
    if(_t10 == 0) {
        _push(_t14);
         *4229468 = 1;
        ExitProcess();
    }
    _pop(__esi);
    _pop(__ebp);
    _pop(__ebx);
    return;
}

L00401FF0(_unknown_ __esp, intOrPtr* _a4, intOrPtr _a8)
{
    _unknown_ __edi;
    intOrPtr* __esi;
    _unknown_ _t3;
    intOrPtr _t4;

    __esp = __esp;
    __esi = _a4;
    _push(_t3);
    _t4 = _a8;
    if(__esi < _t4) {
        while(1) {
L1:
            __eax =  *__esi;
            if(__eax != 0) {
                 *__eax();
            }
            __esi = __esi + 4;
            if(__esi >= _t4) {
                break;
            }
        }
    }
    _pop(__edi);
    return;
}

L004021A0()
{
    _unknown_ __ebx;
    _unknown_ __ecx;
    _unknown_ __edi;
    _unknown_ __esi;
    signed int __ebp;
    _unknown_ _t25;
    signed int* _t26;
    _unknown_ _t28;
    _unknown_ _t29;
    signed int* _t30;
    signed int* _t31;
    _unknown_ _t33;
    signed int _t34;
    unsigned int _t38;
    signed int _t39;
    _unknown_ _t40;
    signed int _t42;
    signed int _t45;
    signed int _t52;
    signed int* _t53;
    _unknown_ _t54;

    __edx =  *4229368;
    _t52 = 0;
    _push(_t45);
    if(0 != 0) {
        while() {
        }
    }
    _t26 = 4 + _t52 * 4;
    _push(_t26);
    L00402FB0(__esp);
    _t53 = _t26;
    __esp = __esp + 4;
     *(__esp + 16) = _t53;
     *4229436 = _t53;
    if(_t53 == 0) {
        _push(9);
        L00401200(__esp);
        __esp = __esp + 4;
    }
    __ebp =  *4229368;
    if((__edx & 4294967295) != 0) {
        while(1) {
L7:
            _t45 = __ebp;
            asm("repne scasb ");
            _t34 =  !(_t34 | 255) - 1;
            _t33 = _t34 + 1;
            if((__edx & 4294967295) != 61) {
                _push(_t33);
                L00402FB0(__esp);
                __esp = __esp + 4;
                 *_t53 = 0;
                if(0 == 0) {
                    _push(9);
                    L00401200(__esp);
                    __esp = __esp + 4;
                }
                asm("repne scasb ");
                _t30 =  *(__esp + 16);
                _t38 =  !(_t34 | 255);
                __edx = _t38;
                _t54 = __ebp - _t38;
                _t39 = _t38 >> 2;
                _push(_t39 << 2);
                _push(_t54);
                _push( *_t30);
                memcpy();
                __esp = __esp + 12;
                _t42 = __edx & 3;
                _t31 =  &(_t30[1]);
                _push(_t42 << 0);
                _push(_t54);
                _push(_t54 + _t39 + _t39);
                memcpy();
                __esp = __esp + 12;
                _t45 = _t54 + _t42 + _t42;
                _t34 = 0;
                 *(__esp + 16) = _t31;
                _t53 = _t31;
            }
            __ebp = __ebp + _t33;
            if((__edx & 4294967295) == 0) {
                break;
            }
        }
    }
    goto L12;
L13:
L12:
    _push( *4229368);
    L00403590( *4229368, __esp);
    __esp = __esp + 4;
     *4229368 = 0;
     *_t53 = 0;
    _pop(__edi);
    return;
    goto L13;
}

L00402290(_unknown_ __esp)
{
    _unknown_ _v4;
    _unknown_ _v8;
    _unknown_ __edi;
    signed int __esi;
    _unknown_ _t13;
    signed int _t15;
    signed int _t17;
    _unknown_ _t19;
    signed int _t21;
    intOrPtr _t22;
    _unknown_ _t25;
    CHAR* _t26;

    __esp = __esp;
    _push(_t25);
    GetModuleFileNameA(0, 4229480, 260);
    _t26 =  *4234500;
     *4229452 = 4229480;
    if( *_t26 == 0) {
        _t26 = 4229480;
    }
    _t19 = __esp + 8;
    _push(__esp + 12);
    _push(_t19);
    _push(0);
    _push(0);
    _push(_t26);
    L00402330(_t19);
    _t22 =  *((intOrPtr*)(__esp + 32));
    _t15 =  *(__esp + 28);
    __esp = __esp + 20;
    _push(_t22 + _t15 * 4);
    L00402FB0(__esp);
    __esi = _t15;
    __esp = __esp + 4;
    if(__esi == 0) {
        _push(8);
        L00401200(__esp);
        __esp = __esp + 4;
    }
    _t21 =  *(__esp + 8);
    _push(__esp + 12);
    _push(__esp + 12);
    _push(__esi + _t21 * 4);
    _push(__esi);
    _push(_t26);
    L00402330(_t21);
    _t17 =  *(__esp + 28);
    __esp = __esp + 20;
     *4229428 = __esi;
    _pop(__edi);
     *4229424 = _t17 - 1;
    return;
}

L00402330(signed int __ecx)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t75;
    char* _t76;
    _unknown_ _t77;
    _unknown_ _t78;
    signed int _t79;
    signed int _t83;
    _unknown_ _t87;
    _unknown_ _t88;
    _unknown_ _t90;
    _unknown_ _t96;
    signed int _t100;
    signed int _t101;
    signed int _t103;
    signed int _t107;
    _unknown_ _t110;
    signed int _t111;
    _unknown_ _t112;
    signed int _t113;
    _unknown_ _t114;
    signed int _t115;
    _unknown_ _t116;
    signed int _t118;

    _t83 = __ecx;
    _t75 =  *(__esp + 16);
    _push(_t78);
    _push(_t114);
    _t115 =  *(__esp + 16);
    _push(_t112);
    _t113 =  *(__esp + 24);
    _push(_t110);
    _t111 =  *(__esp + 36);
    _t118 = _t115;
     *_t111 = 0;
     *_t75 = 1;
    _t76 =  *((intOrPtr*)(__esp + 20));
    _t79 = 4;
    if(_t118 != 0) {
         *_t115 = _t113;
        _t115 = _t115 + _t79;
         *(__esp + 24) = _t115;
    }
    if( *_t76 != 34) {
        while(1) {
            __eflags = _t113;
             *_t111 =  *_t111 + 1;
            if(_t113 != 0) {
                 *_t113 = _t83 & 4294967295;
                _t113 = _t113 + 1;
            }
            _t76 = _t76 + 1;
             *(__esp + 36) = _t83 & 4294967295;
            _t100 =  *(__esp + 36) & 255;
            __eflags =  *(_t100 + 4229753) & _t79 & 4294967295;
            if(( *(_t100 + 4229753) & _t79 & 4294967295) != 0) {
                _t103 =  *_t111 + 1;
                __eflags = _t113;
                 *_t111 = _t103;
                if(_t113 != 0) {
                     *_t113 = _t103 & 4294967295;
                    _t113 = _t113 + 1;
                }
                _t76 = _t76 + 1;
            }
            __eflags = (_t83 & 4294967295) - 32;
            if((_t83 & 4294967295) == 32) {
                break;
            }
            __eflags = _t83 & 4294967295;
            if((_t83 & 4294967295) == 0) {
L25:
                _t76 = _t76 - 1;
L28:
                _t101 = 0;
                 *(__esp + 36) = 0;
                while( *_t76 != 0) {
                    while((_t83 & 4294967295) == 32 || (_t83 & 4294967295) == 9) {
                        _t76 = _t76 + 1;
                    }
                }
            }
            __eflags = (_t83 & 4294967295) - 9;
            if((_t83 & 4294967295) != 9) {
                continue;
            }
            break;
L26:
            __eflags = _t113;
            if(_t113 != 0) {
                 *(_t113 - 1) = 0;
            }
            goto L28;
        }
L24:
        __eflags = _t83 & 4294967295;
        if((_t83 & 4294967295) != 0) {
            goto L26;
        }
        goto L25;
    }
    _t76 = _t76 + 1;
    if((_t83 & 4294967295) == 34) {
L11:
         *_t111 =  *_t111 + 1;
        if(_t113 != 0) {
             *_t113 = 0;
            _t113 = _t113 + 1;
        }
        if( *_t76 == 34) {
            _t76 = _t76 + 1;
        }
        goto L28;
    }
    while((_t83 & 4294967295) != 0) {
        _t107 =  *_t111 + 1;
         *_t111 = _t107;
        if(_t113 != 0) {
             *_t113 = _t107 & 4294967295;
            _t113 = _t113 + 1;
        }
        _t76 = _t76 + 1;
        if((_t83 & 4294967295) != 34) {
            continue;
        }
        goto L11;
    }
}

L00402540(signed int __ecx)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    CHAR* _t11;
    _unknown_ _t12;
    CHAR* _t13;
    signed int _t15;
    _unknown_ _t17;
    _unknown_ _t18;
    WCHAR* _t19;
    char* _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    CHAR* _t25;
    char* _t26;
    signed int _t27;
    signed int _t28;
    signed int _t29;
    _unknown_ _t30;
    _unknown_ _t33;
    _unknown_ _t34;
    intOrPtr* _t35;
    _unknown_ _t40;
    int _t41;
    _unknown_ _t42;
    WCHAR* _t43;
    signed int _t44;
    CHAR* _t45;
    _unknown_ _t46;
    intOrPtr* _t47;
    signed int _t48;
    int _t49;

    _t27 = __ecx;
    _t11 =  *4229744;
    _push(_t46);
    _t47 = __imp__GetEnvironmentStrings;
    _push(_t42);
    _t43 = 0;
    _t25 = 0;
    _push(_t34);
    _t35 = __imp__GetEnvironmentStringsW;
    if(_t11 != 0) {
L6:
        if(_t11 != 1) {
            if(_t11 != 2) {
                goto L27;
            } else {
                if(_t25 != 0) {
L21:
                    _t13 = _t25;
                    if((_t27 & 4294967295) != 0) {
                        goto L22;
                        do {
                            while(1) {
L22:
                                _t13 =  &(_t13[1]);
                                if((_t27 & 4294967295) == 0) {
                                    break;
                                }
                            }
                            _t13 =  &(_t13[1]);
                        } while((_t27 & 4294967295) != 0);
                    }
                    _t15 = _t13 - _t25 + 1;
                    _t44 = _t15;
                    _push(_t44);
                    L00402FB0(__esp);
                    _t48 = _t15;
                    __esp = __esp + 4;
                    if(_t48 != 0) {
                        _t28 = _t44;
                        _t45 = _t25;
                        _t29 = _t28 >> 2;
                        _push(_t29 << 2);
                        _push(_t45);
                        _push(_t48);
                        memcpy();
                        __esp = __esp + 12;
                        _push(_t25);
                        _push((_t28 & 3) << 0);
                        _push(_t45);
                        _push( &(( &(_t45[_t29]))[_t29]));
                        memcpy();
                        __esp = __esp + 12;
                        FreeEnvironmentStringsA();
                        _pop(__edi);
                        _pop(__esi);
                        _pop(__ebp);
                        return;
                    } else {
                        __eax = FreeEnvironmentStringsA(_t25);
                        _pop(__edi);
                        _pop(__esi);
                        _pop(__ebp);
                        return;
                    }
                    goto L28;
                }
                 *_t47();
                _t25 = _t11;
                if(_t25 == 0) {
                    goto L27;
                } else {
                    goto L21;
                }
            }
        } else {
            if(_t43 != 0) {
L9:
                _t19 = _t43;
                if( *_t43 != 0) {
                    goto L10;
                    do {
                        while(1) {
L10:
                            _t19 =  &(_t19[1]);
                            if( *_t19 == 0) {
                                break;
                            }
                        }
                        _t19 =  &(_t19[1]);
                    } while( *_t19 != 0);
                }
                _push(0);
                _t22 =  &((1)[_t19 - _t43 >> 1]);
                _push(0);
                _t49 = _t22;
                _push(0);
                _push(0);
                _push(_t49);
                _push(_t43);
                _push(0);
                _push(0);
                WideCharToMultiByte();
                _t41 = _t22;
                if(_t41 == 0) {
L17:
                    __eax = FreeEnvironmentStringsW(_t43);
                    _pop(__edi);
                    _pop(__esi);
                    _pop(__ebp);
                    return;
                } else {
                    _push(_t41);
                    L00402FB0(__esp);
                    _t26 = _t22;
                    __esp = __esp + 4;
                    if(_t26 == 0) {
                        goto L17;
                    } else {
                        WideCharToMultiByte(0, 0, _t43, _t49, _t26, _t41, 0, 0);
                        if(_t22 == 0) {
                            _push(_t26);
                            L00403590(_t22, __esp);
                            __esp = __esp + 4;
                            _t26 = 0;
                        }
                        __eax = FreeEnvironmentStringsW(_t43);
                        _pop(__edi);
                        _pop(__esi);
                        _pop(__ebp);
                        return;
                    }
                }
                goto L28;
            }
             *_t35();
            _t43 = _t11;
            if(_t43 == 0) {
                goto L27;
            } else {
                goto L9;
            }
        }
    } else {
         *_t35();
        _t43 = _t11;
        if(_t43 == 0) {
             *_t47();
            _t25 = _t11;
            if(_t25 == 0) {
L27:
                _pop(__edi);
                _pop(__esi);
                _pop(__ebp);
                return;
            } else {
                _t11 = 2;
                goto L5;
            }
        } else {
            _t11 = 1;
L5:
             *4229744 = _t11;
            goto L6;
        }
    }
L28:
}

L004026A0(_unknown_ __eax)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t53;
    intOrPtr _t54;
    intOrPtr* _t57;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t63;
    signed int _t64;
    _unknown_ _t66;
    _unknown_ _t67;
    _unknown_ _t68;
    _unknown_ _t69;
    signed int _t70;
    signed int _t71;
    _unknown_ _t72;
    _unknown_ _t73;
    signed int _t74;
    _unknown_ _t76;
    _unknown_ _t77;
    _unknown_ _t78;
    _unknown_ _t81;
    signed int _t82;
    _unknown_ _t83;
    _unknown_ _t85;
    _unknown_ _t86;
    _unknown_ _t87;
    _unknown_ _t88;
    _unknown_ _t89;
    _unknown_ _t90;
    _unknown_ _t91;
    _unknown_ _t92;
    _unknown_ _t93;
    _unknown_ _t94;
    _unknown_ _t95;
    _unknown_ _t96;
    int _t97;
    _unknown_ _t98;

    _t54 =  *((intOrPtr*)(__esp + 4));
    __esp = __esp - 20;
    _push(_t74);
    _push(_t96);
    _push(_t93);
    _push(_t87);
    _push(_t54);
    _t97 = L00402890(__esp);
    __esp = __esp + 4;
     *(__esp + 40) = _t97;
    if(_t97 !=  *4230012) {
        if(_t97 != 0) {
            _t83 = 0;
            _t57 = 4219784;
            while( *_t57 != _t97) {
                _t57 = _t57 + 48;
                _t83 = _t83 + 1;
                if(_t57 < 4220024) {
                    continue;
                } else {
                    _t64 = GetCPInfo(_t97, __esp + 16);
                    if(_t64 != 1) {
                        if( *4230036 == 0) {
                            _pop(__edi);
                            _pop(__esi);
                            _pop(__ebp);
                            _pop(__ebx);
                            __esp = __esp + 20;
                            return _t64 | 255;
                        } else {
                            L00402940();
                            _pop(__edi);
                            _pop(__esi);
                            _pop(__ebp);
                            _pop(__ebx);
                            __esp = __esp + 20;
                            return 0;
                        }
                    } else {
                        _push(64 << 2);
                        _push(0);
                        _push(4229752);
                        memset();
                        __esp = __esp + 12;
                        _t82 = 0;
                        asm("stosb ");
                        if( *(__esp + 16) <= 1) {
                             *4230012 = 0;
                             *4230016 = 0;
                        } else {
                            if(0 != 0) {
                                _t86 = __esp + 23;
                                while((_t82 & 4294967295) != 0) {
                                    _t71 = 0;
                                    _t82 = _t82 & 255;
                                    if(0 <= _t82) {
                                        while(1) {
L13:
                                             *(_t71 + 4229753) = _t74 & 4294967295;
                                            _t71 = _t71 + 1;
                                            if(_t71 > _t82) {
                                                break;
                                            }
                                        }
                                    }
                                    _t86 = _t86 + 2;
                                    if((_t71 & 4294967295) != 0) {
                                        continue;
                                    }
                                    goto L15;
                                }
                            }
L15:
                            _t69 = 1;
                            while(1) {
L16:
                                 *(_t69 + 4229753) = _t74 & 4294967295;
                                _t69 = _t69 + 1;
                                if(_t69 >= 255) {
                                    break;
                                }
                            }
                            _push(_t97);
                             *4230012 = _t97;
                            _t70 = L004028E0(__esp);
                            __esp = __esp + 4;
                             *4230016 = _t70;
                        }
                         *4230024 = 0;
                         *4230028 = 0;
                         *4230032 = 0;
                        _pop(__edi);
                        _pop(__esi);
                        _pop(__ebp);
                        _pop(__ebx);
                        __esp = __esp + 20;
                        return 0;
                    }
                }
                goto L32;
            }
        }
        L00402940();
        _pop(__edi);
        _pop(__esi);
        _pop(__ebp);
        _pop(__ebx);
        __esp = __esp + 20;
        return 0;
    } else {
        _pop(__edi);
        _pop(__esi);
        _pop(__ebp);
        _pop(__ebx);
        __esp = __esp + 20;
        return 0;
    }
L32:
}

L00402890(_unknown_ __esp, intOrPtr _a4)
{
    intOrPtr _t2;

    __esp = __esp;
    _t2 = _a4;
     *4230036 = 0;
    if(_t2 != 254) {
        if(_t2 != 253) {
            if(_t2 != 252) {
                return _t2;
            }
            goto L7;
        }
        goto L4;
L7:
         *4230036 = 1;
        return  *4230072;
    }
     *4230036 = 1;
    goto __imp__GetOEMCP;
L4:
     *4230036 = 1;
    goto __imp__GetACP;
}

L004028E0(_unknown_ __esp, intOrPtr _a4)
{
    _unknown_ _t8;
    _unknown_ _t9;

    __esp = __esp;
    if(_a4 + -932 > 18) {
        return 0;
    }
    switch( *((intOrPtr*)(0 +  &M00402918))) {
        case 0:
            return 1041;
            goto L7;
        case 1:
            return 2052;
            goto L7;
        case 2:
            return 1042;
            goto L7;
        case 3:
            return 1028;
            goto L7;
        case 4:
            return 0;
L7:
    }
}

L00402940()
{
    _unknown_ __edi;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;

    _push(_t6);
    _push(64 << 2);
    _push(0);
    _push(4229752);
    memset();
    __esp = __esp + 12;
    asm("stosb ");
    _pop(__edi);
     *4230012 = 0;
     *4230016 = 0;
     *4230024 = 0;
     *4230028 = 0;
     *4230032 = 0;
    return;
}

L00402970()
{
    _unknown_ _t1;
    _unknown_ _t2;

    _push(253);
    L004026A0(_t1);
    __esp = __esp + 4;
    return;
}

L00402980(intOrPtr* __eax)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t65;
    signed int* _t70;
    int _t71;
    signed int _t72;
    signed int _t74;
    signed int _t77;
    signed int _t78;
    signed int _t79;
    void* _t81;
    signed int _t82;
    intOrPtr _t91;
    void* _t97;
    signed int* _t98;
    intOrPtr* _t99;
    void** _t100;
    signed int _t101;
    int* _t102;
    intOrPtr* _t103;
    void** _t104;

    _push(256);
    L00402FB0(__esp);
    _t99 = __eax;
    __esp = __esp + 4;
    if(_t99 == 0) {
        _push(27);
        L00401200(__esp);
        __esp = __esp + 4;
    }
     *4230112 = _t99;
     *4230368 = 32;
    if(_t99 >= _t99 + 256) {
L4:
        GetStartupInfoA(__esp + 20);
        if( *((short*)(__esp + 70)) == 0) {
L23:
            _t103 = __imp__GetStdHandle;
            _t78 = 0;
            goto L24;
            do {
                goto L24;
L37:
                _t78 = _t78 + 1;
            } while(_t78 < 3);
            __eax = SetHandleCount( *4230368);
            return;
        }
        goto L5;
L24:
        _t91 =  *4230112;
        _t65 =  *(_t91 + _t78 * 8);
        _t100 = _t91 + _t78 * 8;
        if(_t65 != 255) {
L35:
            goto L36;
        }
        _t100[1] = 129;
        if(_t78 != 0) {
            asm("sbb eax, eax");
            _t65 =  ~(_t78 - 1) + -11;
        } else {
            _t65 = -10;
        }
        _push(_t65);
         *_t103();
        _t97 = _t65;
        if(_t97 != 255) {
            __eax = GetFileType(_t97);
            if(_t65 == 0) {
                goto L34;
            }
            _t65 = _t65 & 255;
             *_t100 = _t97;
            if(_t65 != 2) {
                if(_t65 != 3) {
                    goto L37;
                }
                goto L33;
            }
L33:
        }
        goto L36;
L36:
        _t100[1] = _t65 & 4294967295;
        goto L37;
    } else {
        goto L3;
    }
    while(1) {
L3:
         *((char*)(_t99 + 4)) = 0;
         *_t99 = -1;
         *(_t99 + 5) = _t77 & 4294967295;
        _t99 = _t99 + 8;
        if(_t99 >=  *4230112 + 256) {
            break;
        }
    }
    goto L4;
L5:
    _t70 =  *(__esp + 72);
    if(_t70 == 0) {
        goto L23;
    }
    _t79 =  *_t70;
    _t98 =  &(_t70[1]);
     *(__esp + 16) = _t79;
    _t104 = _t98 + _t79;
    if(_t79 >= 2048) {
         *(__esp + 16) = 2048;
    }
    _t71 =  *(__esp + 16);
    if( *4230368 >= _t71) {
L16:
        _t72 =  *(__esp + 16);
        _t101 = 0;
        if(_t72 <= 0) {
            goto L23;
        } else {
            goto L17;
        }
        while(1) {
L17:
            _t81 =  *_t104;
            if(_t81 != 255 && (_t72 & 4294967295 & 1) != 0 && ((_t72 & 4294967295 & 8) != 0 || GetFileType(_t81) != 0)) {
                _t74 = _t101 & 31;
                _t82 =  *(4230112 + (_t101 >> 5) * 4);
                 *(_t82 + _t74 * 8) =  *_t104;
                (_t82 + _t74 * 8)[1] = _t82 & 4294967295;
            }
            _t72 =  *(__esp + 16);
            _t101 = _t101 + 1;
            _t98 =  &(_t98[0]);
            _t104 =  &(_t104[1]);
            if(_t101 >= _t72) {
                break;
            }
        }
        goto L23;
    }
    _t102 = 4230116;
    while(1) {
        _push(256);
        L00402FB0(__esp);
        __esp = __esp + 4;
        if(_t71 == 0) {
            break;
        }
         *_t102 = _t71;
         *4230368 =  *4230368 + 32;
        if(_t71 >= _t71 + 256) {
L13:
            _t71 =  *4230368;
            _t102 =  &(_t102[1]);
            if(_t71 <  *(__esp + 16)) {
                continue;
            }
            goto L14;
        } else {
            goto L12;
        }
        while(1) {
L12:
             *((char*)(_t71 + 4)) = 0;
             *_t71 = -1;
             *(_t71 + 5) = _t77 & 4294967295;
            _t71 = _t71 + 8;
            if(_t71 >=  *_t102 + 256) {
                break;
            }
        }
        goto L13;
L14:
        goto L16;
    }
     *(__esp + 16) =  *4230368;
    goto L16;
}

L00402B80(_unknown_ __eax)
{
    _unknown_ _t1;
    void* _t2;
    _unknown_ _t4;
    _unknown_ _t6;
    _unknown_ _t7;

    _t2 = HeapCreate(1, 4096, 0);
     *4230100 = _t2;
    if(_t2 == 0) {
        return _t2;
    }
    if(L004035E0() != 0) {
        return 1;
    }
    HeapDestroy( *4230100);
    return 0;
L5:
}

L00402D90()
{
    intOrPtr _t1;
    _unknown_ _t2;
    intOrPtr* _t3;

    _t1 =  *4229376;
    if(_t1 != 1) {
        if(_t1 != 0) {
            return ;
        }
        if( *4218988 != 1) {
            return ;
        }
    }
    _push(252);
    L00402DD0();
    _t3 =  *4230040;
    __esp = __esp + 4;
    if(_t3 != 0) {
         *_t3();
    }
    _push(255);
    L00402DD0();
    __esp = __esp + 4;
    return;
}

L00402DD0()
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    int _t29;
    intOrPtr _t30;
    _unknown_ _t32;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t41;
    signed int _t42;
    signed int _t43;
    signed int _t44;
    signed int _t46;
    signed int _t47;
    signed int _t52;
    _unknown_ _t53;
    _unknown_ _t54;
    signed int _t56;
    _unknown_ _t57;
    signed int _t59;
    _unknown_ _t60;
    _unknown_ _t63;
    signed int _t65;
    _unknown_ _t66;
    signed int _t68;
    _unknown_ _t69;
    _unknown_ _t72;
    signed int _t74;
    _unknown_ _t75;
    signed int _t77;
    _unknown_ _t78;
    _unknown_ _t81;
    _unknown_ _t86;
    _unknown_ _t87;
    intOrPtr _t88;
    _unknown_ _t90;
    _unknown_ _t91;
    intOrPtr _t92;
    _unknown_ _t93;
    _unknown_ _t94;
    _unknown_ _t96;
    _unknown_ _t100;
    _unknown_ _t104;
    _unknown_ _t112;
    _unknown_ _t120;
    _unknown_ _t121;
    _unknown_ _t122;
    _unknown_ _t124;
    void* _t125;
    _unknown_ _t127;
    _unknown_ _t128;
    _unknown_ _t129;
    _unknown_ _t131;
    signed int _t132;

    _t46 =  *(__esp + 4);
    __esp = __esp - 424;
    _t29 = 4220056;
    _push(_t40);
    _push(_t131);
    _push(_t125);
    _push(_t92);
    _t132 = 0;
    while(_t46 !=  *_t29) {
        _t29 = _t29 + 8;
        _t132 = _t132 + 1;
        if(_t29 < 4220200) {
            continue;
        }
        if(_t46 !=  *((intOrPtr*)(4220056 + _t132 * 8))) {
L17:
            _pop(__edi);
            _pop(__esi);
            _pop(__ebp);
            _pop(__ebx);
            __esp = __esp + 424;
            return _t29;
        } else {
            _t29 =  *4229376;
            if(_t29 == 1 || _t29 == 0 &&  *4218988 == 1) {
                _t30 =  *4230112;
                if(_t30 == 0) {
L15:
                    _t125 = GetStdHandle(244);
                } else {
                    _t125 =  *(_t30 + 16);
                    if(_t125 == 255) {
                        goto L15;
                    }
                }
                _t88 =  *((intOrPtr*)(4220060 + _t132 * 8));
                _t47 = __esp + 16;
                _push(0);
                _push(_t47);
                _t92 = _t88;
                asm("repne scasb ");
                _push( !(_t47 | 255) - 1);
                _push(_t88);
                _push(_t125);
                _t29 = WriteFile();
                goto L17;
            }
            if(_t46 == 252) {
                goto L17;
            } else {
                if(GetModuleFileNameA(0, __esp + 180, 260) == 0) {
                    _t122 = __esp + 180;
                    _push(5 << 2);
                    _push("<program name unknown>");
                    _push(_t122);
                    memcpy();
                    __esp = __esp + 12;
                    _t46 = 0;
                    asm("movsw ");
                    asm("movsb ");
                }
                _t41 = __esp + 180;
                asm("repne scasb ");
                _t52 =  !(_t46 | 255);
                if(_t52 > 60) {
                    asm("repne scasb ");
                    _push(3);
                    _t86 = __esp + 184 - 59;
                    _push("...");
                    _t41 =  !(_t52 | 255) - 1 + _t86;
                    _push(_t41);
                    L00403D90(0, __esp);
                    __esp = __esp + 12;
                }
                _t94 = __esp + 20;
                _push(6 << 2);
                _push("Runtime Error!\n\nProgram: ");
                _push(_t94);
                memcpy();
                __esp = __esp + 12;
                asm("movsw ");
                asm("repne scasb ");
                _t56 =  !0x000000FF;
                _t42 = _t56;
                _t127 = _t41 - _t56;
                asm("repne scasb ");
                _t100 = __esp + 20 - 1;
                _t59 = _t42 >> 2;
                _push(_t59 << 2);
                _push(_t127);
                _push(_t100);
                memcpy();
                __esp = __esp + 12;
                _t90 = __esp + 20;
                _push(73744);
                _push((_t42 & 3) << 0);
                _push(_t127);
                _push(_t127 + _t59 + _t59);
                memcpy();
                __esp = __esp + 12;
                asm("repne scasb ");
                _t65 =  !0x000000FF;
                _push("Microsoft Visual C++ Runtime Library");
                _t128 = "\n\n" - _t65;
                _t43 = _t65;
                asm("repne scasb ");
                _t68 = _t43 >> 2;
                _push(_t68 << 2);
                _push(_t128);
                _push(_t90 - 1);
                memcpy();
                __esp = __esp + 12;
                _t91 = __esp + 28;
                _push((_t43 & 3) << 0);
                _push(_t128);
                _push(_t128 + _t68 + _t68);
                memcpy();
                __esp = __esp + 12;
                asm("repne scasb ");
                _t74 =  !0x000000FF;
                _t129 =  *((intOrPtr*)(4220060 + _t132 * 8)) - _t74;
                _t44 = _t74;
                asm("repne scasb ");
                _t77 = _t44 >> 2;
                _push(_t77 << 2);
                _push(_t129);
                _push(_t91 - 1);
                memcpy();
                __esp = __esp + 12;
                _push(__esp + 28);
                _push((_t44 & 3) << 0);
                _push(_t129);
                _push(_t129 + _t77 + _t77);
                memcpy();
                __esp = __esp + 12;
                _t38 = L00403D00(__esp);
                __esp = __esp + 12;
                _pop(__edi);
                _pop(__esi);
                _pop(__ebp);
                _pop(__ebx);
                __esp = __esp + 424;
                return _t38;
            }
        }
L18:
    }
}

L00402FB0(_unknown_ __esp, intOrPtr _a4)
{
    _unknown_ _t3;

    __esp = __esp;
    _push( *4230092);
    _push(_a4);
    L00402FD0( *4230092, __esp);
    __esp = __esp + 8;
    return;
}

L00402FD0(_unknown_ __eax, _unknown_ __esp, intOrPtr _a4, intOrPtr _a8)
{
    intOrPtr __edi;
    intOrPtr __esi;
    _unknown_ _t3;
    _unknown_ _t4;

    __esp = __esp;
    __esi = _a4;
    _push(__edi);
    if(__esi > 224) {
        _t4 = 0;
        goto L11;
    }
    if(__esi == 0) {
        __esi = 1;
    }
    __edi = _a8;
    while() {
    }
L11:
    _pop(__edi);
    return _t4;
}

L00403020(_unknown_ __eax, _unknown_ __esp, intOrPtr _a4)
{
    _unknown_ __esi;
    _unknown_ _t3;
    void* _t6;
    _unknown_ _t9;
    unsigned int _t11;

    __esp = __esp;
    _push(_t9);
    _t5 =  *4228980;
    _t11 = _a4 + 15 & 240;
    if(_t11 >  *4228980) {
L2:
        _t6 = HeapAlloc( *4230100, 0, _t11);
    } else {
        _push(_t11 >> 4);
        _t6 = L00403940(_t5);
        __esp = __esp + 4;
        if(_t6 == 0) {
            goto L2;
        }
L4:
    }
    _pop(__esi);
    return;
    goto L4;
}

L00403060(_unknown_ __esp, signed int _a4)
{
    signed int _t8;
    _unknown_ _t11;
    _unknown_ _t14;

    __esp = __esp;
    _t8 = _a4;
    if(_t8 <  *4230368) {
        return _t8 & 31 & 64;
    }
    return 0;
}

L004030E0(_unknown_ __esp, intOrPtr* _a4)
{
    intOrPtr __ebx;
    _unknown_ __edi;
    intOrPtr* __esi;
    signed int _t22;
    intOrPtr _t25;
    _unknown_ _t26;
    signed int _t27;
    _unknown_ _t29;
    _unknown_ _t32;

    __esp = __esp;
    __esi = _a4;
    __ebx = 0;
    _push(_t32);
    _t22 =  *(__esi + 12);
    if((_t22 & 3 & 4294967295) != 2 || (_t22 & 264) == 0) {
L7:
         *((intOrPtr*)(__esi + 4)) = 0;
         *__esi =  *((intOrPtr*)(__esi + 8));
        _pop(__edi);
        return __ebx;
    } else {
        _t25 =  *((intOrPtr*)(__esi + 8));
        _t32 =  *__esi - _t25;
        if(_t32 <= 0) {
            goto L7;
        } else {
            _push(_t32);
            _push(_t25);
            _push( *((intOrPtr*)(__esi + 16)));
            _t26 = L00403F10();
            __esp = __esp + 12;
            _t27 =  *(__esi + 12);
            if(_t26 != _t32) {
                __ebx = 0xff;
                 *(__esi + 12) = _t27;
                goto L7;
            }
            if((_t27 & 4294967295 & 128) == 0) {
                goto L7;
            } else {
                 *((intOrPtr*)(__esi + 4)) = 0;
                 *(__esi + 12) = _t27;
                 *__esi =  *((intOrPtr*)(__esi + 8));
                _pop(__edi);
                return 0;
            }
        }
    }
L8:
}

L004031E0(_unknown_ __esp, signed int* _a4, char _a8)
{
    intOrPtr _v28;
    _unknown_ _t12;
    _unknown_ _t13;
    signed int _t14;

    __esp = __esp;
    _t10 = _a4;
    if(_t10 != 0) {
        _t14 =  *4230056;
        if(_t14 != 0) {
            _push( &_a4);
            _push(0);
            _push( *4228992);
            _push(_t10);
            _push(1);
            _push( &_a8);
            _push(544);
            _push( *4230072);
            _a4 = 0;
            if(WideCharToMultiByte() != 0) {
                if(_v28 == 0) {
                    return ;
                }
            }
L7:
             *4229396 = 42;
            return;
        }
    } else {
        return;
    }
L3:
    if((_t14 & 4294967295) > 255) {
        goto L7;
    } else {
         *_t10 = _t14 & 4294967295;
        return;
    }
    goto L9;
    return;
    goto L9;
}

L00403260(_unknown_ __esp, _unknown_ __eflags, signed int _a4, unsigned int _a8, signed int _a12, unsigned int _a16)
{
    _unknown_ __ebx;
    signed int __esi;
    unsigned int _t34;
    signed int _t35;
    signed int _t36;
    signed int _t38;
    signed int _t39;
    _unknown_ _t41;
    signed int _t45;
    unsigned int _t47;
    unsigned int _t51;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t55;
    _unknown_ _t56;
    _unknown_ _t57;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t60;

    __eflags = __eflags;
    __esp = __esp;
    _t34 = _a16;
    if(__eflags == 0) {
        return _a4 / _a12;
    }
    _t47 = _t34;
    _t45 = _a12;
    _t51 = _a8;
    _t35 = _a4;
    while(1) {
L3:
        asm("rcr ebx, 1");
        _t51 = _t51 >> 1;
        asm("rcr eax, 1");
        _t47 = _t47 >> 1;
        if(__eflags == 0) {
            break;
        }
    }
    _t36 = _t35 / _t45;
    __esi = _t36;
    _t38 = _a12;
    _t39 = _t38 * __esi;
    _t55 = (_t38 * __esi >> 32) + _t36 * _a16;
    if(__eflags < 0) {
L8:
        __esi = __esi - 1;
        return __esi;
    }
    __eflags = _t55 - _a8;
    if(__eflags > 0) {
        goto L8;
    }
    if(__eflags < 0) {
        return __esi;
    }
    __eflags = _t39 - _a4;
    if(_t39 <= _a4) {
        return __esi;
    }
    goto L8;
    return __esi;
}

L004032D0(_unknown_ __esp, _unknown_ __eflags, signed int _a4, unsigned int _a8, signed int _a12, unsigned int _a16)
{
    signed int __ebx;
    unsigned int _t37;
    signed int _t38;
    signed int _t39;
    signed int _t40;
    signed int _t41;
    _unknown_ _t44;
    _unknown_ _t45;
    _unknown_ _t47;
    unsigned int _t49;
    unsigned int _t53;
    _unknown_ _t54;
    _unknown_ _t55;
    _unknown_ _t57;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t60;
    _unknown_ _t62;

    __eflags = __eflags;
    __esp = __esp;
    _t37 = _a16;
    if(__eflags == 0) {
        return _a4 % _a12;
    }
    _t49 = _t37;
    __ebx = _a12;
    _t53 = _a8;
    _t38 = _a4;
    while(1) {
L3:
        asm("rcr ebx, 1");
        _t53 = _t53 >> 1;
        asm("rcr eax, 1");
        _t49 = _t49 >> 1;
        if(__eflags == 0) {
            break;
        }
    }
    _t39 = _t38 / __ebx;
    _t40 = _t39 * _a16;
    asm("xchg ecx, eax");
    _t41 = _t40 * _a12;
    _t57 = (_t40 * _a12 >> 32) + _t39;
    if(__eflags < 0) {
L8:
        _t41 = _t41 - _a12;
        asm("sbb edx, [esp+0x14]");
        goto L9;
    }
    __eflags = _t57 - _a8;
    if(__eflags > 0) {
        goto L8;
    }
    if(__eflags < 0) {
        goto L9;
    }
    __eflags = _t41 - _a4;
    if(_t41 <= _a4) {
        goto L9;
    }
    goto L8;
    return __eax;
L9:
    asm("sbb edx, [esp+0xc]");
    asm("sbb edx, 0x0");
    return  ~(_t41 - _a4);
}

L00403350(_unknown_ __eax, _unknown_ __esp, signed int _a4, signed int** _a8)
{
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t61;
    signed int _t62;
    signed int _t64;
    signed int _t65;
    signed int _t68;
    signed int* _t70;
    signed int _t71;
    signed int _t74;
    _unknown_ _t75;
    _unknown_ _t86;
    _unknown_ _t87;
    _unknown_ _t89;
    signed int** _t90;
    _unknown_ _t91;
    signed int _t92;

    __esp = __esp;
    _push(_t91);
    _push(_t89);
    _t90 = _a8;
    _push(_t86);
    _t62 = _t90[3];
    _t92 = _t90[4];
    if((_t62 & 4294967295 & 130) == 0 || (_t62 & 4294967295 & 64) != 0) {
L23:
        _pop(__edi);
        _t90[3] = _t62;
        _pop(__esi);
        _pop(__ebp);
        return _t62 | 255;
    } else {
        __ebx = 0;
        if((_t62 & 4294967295 & 1) == 0) {
L5:
            _t64 = _t90[3];
            _t90[1] = __ebx;
            _t90[3] = _t64;
            if((_t64 & 268) == 0) {
                if(_t90 == 4219032 || _t90 == 4219064) {
                    _push(_t92);
                    _t75 = L00403060(__esp);
                    __esp = __esp + 4;
                    if(_t75 == 0) {
                        goto L9;
                    }
                } else {
L9:
                    _push(_t90);
                    L00404200(__esp);
                    __esp = __esp + 4;
                }
            }
            if((_t90[3] & 264) == 0) {
                _t87 = 1;
                _push(_t87);
                _push( &_a4);
                _push(_t92);
                _t65 = L00403F10();
                __esp = __esp + 12;
                __ebx = _t65;
            } else {
                _t70 = _t90[2];
                _t87 =  *_t90 - _t70;
                 *_t90 =  &(_t70[0]);
                _t90[1] = _t90[6] - 1;
                if(_t87 <= __ebx) {
                    if(_t92 == 255) {
                        _t71 = 4220024;
                    } else {
                        _t71 =  *((intOrPtr*)(4230112 + (_t92 >> 5) * 4)) + (_t92 & 31) * 8;
                    }
                    if(( *(_t71 + 4) & 32) != 0) {
                        _push(2);
                        _push(__ebx);
                        _push(_t92);
                        _t71 = L00404140(_t71, __esp);
                        __esp = __esp + 12;
                    }
                     *(_t90[2]) = _t71 & 4294967295;
                } else {
                    _push(_t87);
                    _push(_t70);
                    _push(_t92);
                    _t74 = L00403F10();
                    __ebx = _t74;
                    __esp = __esp + 12;
                     *(_t90[2]) = _t74 & 4294967295;
                }
            }
            if(__ebx == _t87) {
                _pop(__edi);
                _pop(__esi);
                _pop(__ebp);
                return _a4 & 255;
            } else {
                _t68 = _t90[3];
                _t90[3] = _t68;
                _pop(__edi);
                _pop(__esi);
                _pop(__ebp);
                return _t68 | 255;
            }
            goto L24;
        }
        _t90[1] = 0;
        if((_t62 & 4294967295 & 16) == 0) {
            goto L23;
        } else {
             *_t90 = _t90[2];
            _t90[3] = _t62;
            goto L5;
        }
    }
L24:
}

L00403590(_unknown_ __eax, _unknown_ __esp, void* _a4)
{
    char _v4;
    _unknown_ __ecx;
    void* __esi;
    _unknown_ _t6;
    _unknown_ _t8;
    _unknown_ _t9;

    __esp = __esp;
    __esi = _a4;
    if(__esi == 0) {
        return ;
    }
    _push( &_a4);
    _push( &_v4);
    _push(__esi);
    _t8 = L00403880(__esp);
    __esp = __esp + 12;
    if(_t8 == 0) {
        HeapFree( *4230100, 0, __esi);
        return;
    }
    _push(_t8);
    _push(_a4);
    _push(_v4);
    L004038E0(__esp);
    __esp = __esp + 12;
    return;
    return;
    goto L5;
}

L004035E0()
{
    _unknown_ __edi;
    void* __esi;
    void* __ebp;
    void* _t22;
    _unknown_ _t24;
    _unknown_ _t27;
    _unknown_ _t28;
    signed int _t30;
    _unknown_ _t31;
    void _t35;
    _unknown_ _t36;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t41;
    _unknown_ _t49;
    _unknown_ _t51;

    _t22 =  *4220768;
    _push(__esi);
    _push(_t48);
    if(_t22 != 255) {
        _t22 = HeapAlloc( *4230100, 0, 8224);
        __ebp = _t22;
        if(__ebp == 0) {
            goto L20;
        } else {
            goto L3;
        }
    } else {
        __ebp = 4220752;
L3:
        _t48 = VirtualAlloc;
         *VirtualAlloc(0, 4194304, 8192, 4);
        __esi = _t22;
        if(__esi == 0) {
L18:
            if(__ebp != 4220752) {
                HeapFree( *4230100, 0, __ebp);
            }
L20:
            _pop(__edi);
            _pop(__esi);
            return;
            goto L21;
        }
         *VirtualAlloc(__esi, 65536, 4096, 4);
        if(_t22 == 0) {
            VirtualFree(__esi, 0, 32768);
        } else {
            if(__ebp != 4220752) {
                 *__ebp = 4220752;
                (__ebp)[1] =  *4220756;
                 *4220756 = __ebp;
                 *((__ebp)[1]) = __ebp;
            } else {
                if( *4220752 == 0) {
                     *4220752 = 4220752;
                }
                if( *4220756 == 0) {
                     *4220756 = 4220752;
                }
            }
            _t35 =  &((__ebp)[6]);
            (__ebp)[5] =  &((__esi)[0x100000]);
            (__ebp)[4] = __esi;
            (__ebp)[2] = _t35;
            (__ebp)[3] =  &((__ebp)[0x26]);
            _t27 = 0;
            while(1) {
L12:
                _t35 = _t35 + 8;
                _t27 = _t27 + 1;
                 *((intOrPtr*)(_t35 - 8)) = 0xf0;
                 *((intOrPtr*)(_t35 - 4)) = 241;
                if(_t27 >= 1024) {
                    break;
                }
            }
            _push(16384 << 2);
            _push(0);
            _push(__esi);
            memset();
            __esp = __esp + 12;
            _t30 = (__ebp)[4] + 65536;
            if(__esi < _t30) {
                while(1) {
L15:
                    (__esi)[1] = 240;
                     *__esi =  &((__esi)[2]);
                    (__esi)[0x3e] = _t30 & 4294967295;
                    __esi =  &((__esi)[0x400]);
                    if(__esi >= (__ebp)[4] + 65536) {
                        break;
                    }
                }
            }
            _pop(__edi);
            _pop(__esi);
            return;
            goto L21;
        }
        goto L18;
    }
L21:
}

L00403750(_unknown_ __esp, intOrPtr* _a4)
{
    intOrPtr* __esi;
    _unknown_ _t8;
    _unknown_ _t11;

    __esp = __esp;
    __esi = _a4;
    VirtualFree( *(__esi + 16), 0, 32768);
    if( *4228976 == __esi) {
         *4228976 =  *((intOrPtr*)(__esi + 4));
    }
    if(__esi == 4220752) {
         *4220768 = -1;
        return;
    } else {
        _push(__esi);
        _push(0);
         *((intOrPtr*)( *((intOrPtr*)(__esi + 4)))) =  *__esi;
         *((intOrPtr*)( *__esi + 4)) =  *((intOrPtr*)(__esi + 4));
        _push( *4230100);
        HeapFree();
        return;
    }
}

L004037B0()
{
    _unknown_ __ebx;
    intOrPtr __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t15;
    _unknown_ _t17;
    _unknown_ _t24;

    __edi =  *4220756;
    while(1) {
    }
}

L00403880(_unknown_ __esp, intOrPtr _a4, _unknown_ _a8, _unknown_ _a12)
{
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t14;
    intOrPtr _t16;

    __esp = __esp;
    _t16 = _a4;
    _t11 = 4220752;
    while(_t16 <=  *((intOrPtr*)(_t11 + 16)) || _t16 >=  *((intOrPtr*)(_t11 + 20))) {
    }
}

L004038E0(_unknown_ __esp, intOrPtr _a4, intOrPtr _a8, char* _a12)
{
    _unknown_ __esi;
    intOrPtr _t13;
    intOrPtr* _t14;
    signed int _t18;
    _unknown_ _t21;

    __esp = __esp;
    _t13 = _a4;
    _push(_t21);
    _t18 = _a8 -  *((intOrPtr*)(_t13 + 16)) >> 12;
    _t14 = _t13 + 24 + _t18 * 8;
     *_t14 =  *((intOrPtr*)(_t13 + 24 + _t18 * 8));
     *_a12 = 0;
     *((intOrPtr*)(_t14 + 4)) = 241;
    if( *_t14 == 240) {
        _t14 =  *4230076 + 1;
         *4230076 = _t14;
        if(_t14 == 32) {
            _push(16);
            L004037B0();
            __esp = __esp + 4;
        }
    }
    _pop(__esi);
    return;
}

L00403940(_unknown_ __eax)
{
    _unknown_ __ebx;
    _unknown_ __ecx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t55;
    intOrPtr _t56;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t62;
    _unknown_ _t64;
    _unknown_ _t65;
    _unknown_ _t66;
    _unknown_ _t67;
    _unknown_ _t72;
    _unknown_ _t73;
    _unknown_ _t74;
    _unknown_ _t75;
    _unknown_ _t76;
    intOrPtr _t77;
    intOrPtr _t79;
    _unknown_ _t80;
    _unknown_ _t81;
    _unknown_ _t82;
    _unknown_ _t83;
    _unknown_ _t87;
    _unknown_ _t88;
    _unknown_ _t90;
    _unknown_ _t95;
    _unknown_ _t102;
    _unknown_ _t108;
    _unknown_ _t109;
    _unknown_ _t116;
    _unknown_ _t117;
    _unknown_ _t118;
    _unknown_ _t119;
    _unknown_ _t120;

    _t79 =  *4228976;
    _t77 =  *((intOrPtr*)(__esp + 12));
    _push(_t117);
    _push(_t109);
    _push(_t102);
     *((intOrPtr*)(__esp + 16)) = _t79;
    while(1) {
        _t56 =  *((intOrPtr*)(_t79 + 16));
        if(_t56 == 255) {
            goto L14;
        } else {
            goto L2;
        }
    }
}

L00403B80(_unknown_ __esp, signed int _a4, intOrPtr _a8, signed int _a12)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    signed int __ebp;
    intOrPtr _t50;
    signed int _t51;
    signed int _t52;
    _unknown_ _t53;
    signed int _t54;
    _unknown_ _t56;
    signed int _t57;
    _unknown_ _t58;
    signed int _t64;
    _unknown_ _t65;
    _unknown_ _t74;
    _unknown_ _t75;
    intOrPtr _t76;
    signed int _t78;
    intOrPtr _t80;
    intOrPtr _t82;
    signed int _t85;
    _unknown_ _t89;
    signed int _t90;
    _unknown_ _t91;

    __esp = __esp;
    _t85 = _a12;
    _push(_t74);
    _push(__ebp);
    _push(_t91);
    _push(_t89);
    _t90 = _a4;
    _t50 =  *((intOrPtr*)(_t90 + 4));
    _t78 =  *_t90;
    _a4 = _t78;
    _t92 = _t78;
    _t75 = _t90 + 248;
    if(_t50 < _t85) {
        _t51 = _t50 + _t78;
        if( *_t51 != 0) {
            _t92 = _t51;
        }
        _t52 = _t92 + _t85;
        _t76 = _a8;
        if(_t52 >= _t75) {
L22:
            __ebp = _t90 + 8;
            _t92 = __ebp;
            if(_t92 < _t78) {
                while(1) {
                    _t54 = _t90 + 248;
                    if(_t92 + _t85 >= _t54) {
                        break;
                    }
                    if((_t54 & 4294967295) != 0) {
                        _t92 = _t92 + (_t54 & 255);
                    } else {
                        _t57 = _t92 + 1;
                        _t80 = 1;
                        if( *(_t92 + 1) == 0) {
                            while(1) {
L26:
                                _t57 = _t57 + 1;
                                _t80 = _t80 + 1;
                                if( *_t57 != 0) {
                                    break;
                                }
                            }
                        }
                        if(_t80 >= _t85) {
                            _t58 = _t92 + _t85;
                            if(_t58 >= _t90 + 248) {
                                 *_t90 = __ebp;
                                goto L36;
                            }
                             *_t90 = _t58;
                             *((intOrPtr*)(_t90 + 4)) = _t80 - _t85;
                            goto L37;
                        }
                        _t76 = _t76 - _t80;
                        if(_t76 < _t85) {
                            goto L38;
                        } else {
                            _t92 = _t57;
                            goto L31;
                        }
                        goto L39;
                    }
L31:
                    if(_t92 < _a4) {
                        continue;
                    } else {
                        _pop(__edi);
                        _pop(__esi);
                        _pop(__ebp);
                        _pop(__ebx);
                        return 0;
                    }
                    goto L39;
                }
            }
            goto L38;
        } else {
            goto L8;
            do {
L8:
                if((_t52 & 4294967295) != 0) {
                    _t92 = _t92 + (_t52 & 255);
                } else {
                    _t64 = _t92 + 1;
                    _t82 = 1;
                    if( *(_t92 + 1) == 0) {
                        while(1) {
L10:
                            _t64 = _t64 + 1;
                            _t82 = _t82 + 1;
                            if( *_t64 != 0) {
                                break;
                            }
                        }
                    }
                    if(_t82 >= _t85) {
                        _t65 = _t92 + _t85;
                        if(_t65 >= _t90 + 248) {
                             *_t90 = _t90 + 8;
L36:
                             *((intOrPtr*)(_t90 + 4)) = 0;
L37:
                             *_t92 = _t85 & 4294967295;
                            _pop(__edi);
                            _pop(__esi);
                            _pop(__ebp);
                            _pop(__ebx);
                            return (_t92 + 8 << 4) - _t90 + _t90 * 2 + (_t90 + _t90 * 2) * 4;
                            goto L39;
                        }
                         *_t90 = _t65;
                         *((intOrPtr*)(_t90 + 4)) = _t82 - _t85;
                        goto L37;
                    }
                    __ebp = _a4;
                    if(_t92 != __ebp) {
                        _t76 = _t76 - _t82;
                        if(_t76 < _t85) {
L38:
                            _pop(__edi);
                            _pop(__esi);
                            _pop(__ebp);
                            _pop(__ebx);
                            return 0;
                        } else {
                            _t78 = _a4;
                            _t92 = _t64;
                            goto L17;
                        }
                    } else {
                         *((intOrPtr*)(_t90 + 4)) = _t82;
                        _t92 = _t64;
                        _t78 = __ebp;
                        goto L17;
                    }
                    goto L39;
                }
L17:
                __ebp = _t92 + _t85;
                _t52 = _t90 + 248;
            } while(_t92 + _t85 < _t52);
            goto L22;
        }
    } else {
         *_t78 = _t85 & 4294967295;
        if(_t78 + _t85 >= _t75) {
             *((intOrPtr*)(_t90 + 4)) = 0;
             *_t90 = _t90 + 8;
        } else {
            _t92 =  *_t90 + _t85;
             *_t90 =  *_t90 + _t85;
             *((intOrPtr*)(_t90 + 4)) =  *((intOrPtr*)(_t90 + 4)) - _t85;
        }
        _pop(__edi);
        _pop(__esi);
        _pop(__ebp);
        _pop(__ebx);
        return (_t78 + 8 << 4) - _t90 + _t90 * 2 + (_t90 + _t90 * 2) * 4;
    }
L39:
}

L00403D00(_unknown_ __esp, intOrPtr _a4, intOrPtr _a8, intOrPtr _a12)
{
    struct HINSTANCE__* __ebx;
    intOrPtr* __edi;
    struct HINSTANCE__* __esi;
    struct HINSTANCE__* _t5;
    struct HINSTANCE__* _t7;
    struct HINSTANCE__* _t8;
    _unknown_ _t9;

    __esp = __esp;
    __ebx = 0;
    _push(__esi);
    _push(__edi);
    if( *4230080 != 0) {
L4:
        _t5 =  *4230084;
        if(_t5 != 0) {
            _t5->i();
            __ebx = _t5;
        }
        if(__ebx != 0) {
            _t7 =  *4230088;
            if(_t7 != 0) {
                _push(__ebx);
                _t7->i();
                __ebx = _t7;
            }
        }
        _push(_a12);
        _push(_a8);
        _push(_a4);
        _push(__ebx);
         *4230080();
        _pop(__edi);
        _pop(__esi);
        return;
    } else {
        _t8 = LoadLibraryA("user32.dll");
        __esi = _t8;
        if(__esi == 0) {
L10:
            _pop(__edi);
            _pop(__esi);
            return;
        } else {
            __edi = GetProcAddress;
             *GetProcAddress(__esi, "MessageBoxA");
             *4230080 = _t8;
            if(_t8 == 0) {
                goto L10;
            } else {
                 *GetProcAddress(__esi, "GetActiveWindow");
                _push("GetLastActivePopup");
                _push(__esi);
                 *4230084 = _t8;
                 *GetProcAddress();
                 *4230088 = _t8;
                goto L4;
            }
        }
    }
}

L00403D90(signed int __eax, _unknown_ __esp, signed int _a4, signed int _a8, unsigned int _a12)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    signed int _t31;
    _unknown_ _t37;
    signed int _t38;
    unsigned int _t39;
    unsigned int _t40;
    unsigned int _t41;
    _unknown_ _t42;
    signed int _t44;
    _unknown_ _t45;
    _unknown_ _t48;
    signed int _t49;
    _unknown_ _t50;
    signed int _t51;
    signed int _t53;
    signed int _t54;

    __esp = __esp;
    _t31 = __eax;
    _t39 = _a12;
    _push(_t48);
    if(_t39 == 0) {
L19:
        _pop(__edi);
        return _a4;
    } else {
        _push(_t50);
        _push(_t37);
        _t38 = _t39;
        _t51 = _a8;
        _t53 = _t51 & 3;
        _t49 = _a4;
        if(_t53 != 0) {
            while(1) {
                _t51 = _t51 + 1;
                 *_t49 = _t31 & 4294967295;
                _t49 = _t49 + 1;
                _t39 = _t39 - 1;
                if(__eflags == 0) {
                    break;
                }
                __eflags = _t31 & 4294967295;
                if((_t31 & 4294967295) == 0) {
                    __eflags = _t49 & 3;
                    if(__eflags == 0) {
L15:
                        _t38 = _t39;
                        _t40 = _t39 >> 2;
                        if(__eflags != 0) {
                            goto L31;
                        }
                        goto L16;
                    } else {
                        while(1) {
                             *_t49 = _t31 & 4294967295;
                            _t49 = _t49 + 1;
                            _t39 = _t39 - 1;
                            if(__eflags == 0) {
                                break;
                            }
                            __eflags = _t49 & 3;
                            if(__eflags != 0) {
                                continue;
                            } else {
                                goto L15;
                            }
                            goto L35;
                        }
                        goto L34;
                    }
                } else {
                    __eflags = _t51 & 3;
                    if(__eflags != 0) {
                        continue;
                    } else {
                        _t38 = _t39;
                        _t41 = _t39 >> 2;
                        if(__eflags != 0) {
                            goto L21;
                        } else {
                            goto L8;
                        }
                    }
                }
                goto L35;
            }
            goto L11;
        } else {
            _t41 = _t39 >> 2;
            if(_t53 != 0) {
                goto L21;
                do {
L21:
                    _t31 =  *_t51 ^ 255 ^ 2130640639 +  *_t51;
                    _t44 =  *_t51;
                    _t51 = _t51 + 4;
                    __eflags = _t31 & -2130640640;
                    if(__eflags == 0) {
                        goto L20;
                    } else {
                        __eflags = _t44 & 4294967295;
                        if(__eflags == 0) {
                             *_t49 = 0;
L30:
                            _t49 = _t49 + 4;
                            _t31 = 0;
                            _t40 = _t41 - 1;
                            if(__eflags != 0) {
L31:
                                _t31 = 0;
                                while(1) {
L32:
                                     *_t49 = _t31;
                                    _t49 = _t49 + 4;
                                    _t40 = _t40 - 1;
                                    if(__eflags == 0) {
                                        break;
                                    }
                                }
                            }
                            _t38 = _t38 & 3;
                            if(__eflags != 0) {
                                goto L16;
                            }
L34:
                            _pop(__ebx);
                            _pop(__esi);
                            _pop(__edi);
                            return _a4;
                            goto L35;
                        }
                        __eflags = _t44 & 4294967295;
                        if(__eflags == 0) {
                             *_t49 = _t44 & 255;
                            goto L30;
                        }
                        __eflags = _t44 & 16711680;
                        if(__eflags == 0) {
                             *_t49 = _t44 & 65535;
                            goto L30;
                        }
                        __eflags = _t44 & -16777216;
                        if(__eflags != 0) {
                            goto L20;
                        } else {
                             *_t49 = _t44;
                            goto L30;
                        }
                    }
                    goto L35;
L20:
                     *_t49 = _t44;
                    _t49 = _t49 + 4;
                    _t41 = _t41 - 1;
                } while(__eflags != 0);
L8:
                _t38 = _t38 & 3;
                if(__eflags == 0) {
                    goto L11;
                } else {
                    goto L9;
                }
            } else {
                while(1) {
L9:
                    _t51 = _t51 + 1;
                     *_t49 = _t31 & 4294967295;
                    _t49 = _t49 + 1;
                    _t54 = _t31 & 4294967295;
                    if(_t54 == 0) {
                        break;
                    }
                    _t38 = _t38 - 1;
                    if(_t54 != 0) {
                        continue;
                    } else {
L11:
                        _pop(__ebx);
                        _pop(__esi);
                        _pop(__edi);
                        return _a4;
                    }
                    goto L35;
                }
L17:
                _t38 = _t38 - 1;
                if(__eflags != 0) {
L16:
                     *_t49 = _t31 & 4294967295;
                    _t49 = _t49 + 1;
                    goto L17;
                }
                _pop(__ebx);
                _pop(__esi);
                goto L19;
            }
        }
    }
L35:
}

L00403E90(_unknown_ __esp, intOrPtr _a4)
{
    intOrPtr* _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    __esp = __esp;
    _t2 =  *4230096;
    if(_t2 == 0) {
        return ;
    }
    _push(_a4);
     *_t2();
    __esp = __esp + 4;
    if(_t2 == 0) {
        return ;
    }
    return;
}

L00403F10()
{
    intOrPtr __ebx;
    char* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t58;
    intOrPtr* _t61;
    intOrPtr _t64;
    _unknown_ _t65;
    _unknown_ _t66;
    signed int* _t70;
    _unknown_ _t71;
    intOrPtr _t75;
    _unknown_ _t78;
    _unknown_ _t79;
    signed int _t82;
    _unknown_ _t83;
    signed int _t86;
    _unknown_ _t87;
    _unknown_ _t90;
    intOrPtr* _t94;
    signed int _t100;
    _unknown_ _t104;
    char* _t107;
    _unknown_ _t108;

    _t58 =  *(__esp + 4);
    __esp = __esp - 1052;
    _push(__ebx);
    _push(_t107);
    _push(_t100);
    _push(__edi);
    if(_t58 >=  *4230368) {
L27:
         *4229396 = 9;
L28:
        _pop(__edi);
        _pop(__esi);
        _pop(__ebp);
         *4229400 = 0;
        _pop(__ebx);
        __esp = __esp + 1052;
        return _t58 | 255;
L33:
    }
    _t82 = _t58 >> 5;
    __edi = 4230112 + _t82 * 4;
    _t100 = (_t58 & 31) << 3;
     *((intOrPtr*)(__esp + 36)) = __edi;
     *(__esp + 20) = _t100;
    if((_t82 & 4294967295 & 1) == 0) {
        goto L27;
    }
    __ebx =  *((intOrPtr*)(__esp + 1080));
     *((intOrPtr*)(__esp + 16)) = 0;
     *((intOrPtr*)(__esp + 32)) = 0;
    if(__ebx != 0) {
        if((_t82 & 4294967295 & 32) != 0) {
            _push(2);
            _push(0);
            _push(_t58);
            L00404140(_t58, __esp);
            __esp = __esp + 12;
        }
        _t61 =  *__edi + _t100;
        if(( *(_t61 + 4) & 128) == 0) {
            _t83 = __esp + 28;
            _push(0);
            _t107 =  *((intOrPtr*)(__esp + 1080));
            _push(_t83);
            _push(__ebx);
            _push(_t107);
            _push( *_t61);
            if(WriteFile() == 0) {
                 *(__esp + 24) = GetLastError();
            } else {
                 *(__esp + 24) = 0;
                 *((intOrPtr*)(__esp + 16)) =  *((intOrPtr*)(__esp + 28));
            }
        } else {
            _t107 =  *((intOrPtr*)(__esp + 1076));
             *(__esp + 24) = 0;
            __edi = _t107;
            if(__ebx > 0) {
                goto L8;
                do {
L8:
                    _t70 = __esp + 40;
                    while(1) {
                        _t86 = __edi - _t107;
                        if(_t86 >= __ebx) {
                            break;
                        }
                        __edi = __edi + 1;
                        if((_t86 & 4294967295) == 10) {
                             *_t70 = 13;
                            _t70 =  &(_t70[0]);
                             *((intOrPtr*)(__esp + 32)) =  *((intOrPtr*)(__esp + 32)) + 1;
                        }
                         *_t70 = _t86 & 4294967295;
                        _t70 =  &(_t70[0]);
                        if(_t70 - __esp + 40 < 1024) {
                            continue;
                        }
                        break;
                    }
L13:
                    _t71 = __esp + 28;
                    _t104 = _t70 - __esp + 40;
                    _t94 =  *((intOrPtr*)(__esp + 36));
                    _push(0);
                    _push(_t71);
                    _t87 = __esp + 48;
                    _push(_t104);
                    _push(_t87);
                    _push( *((intOrPtr*)( *((intOrPtr*)(__esp + 36)) +  *_t94)));
                    if(WriteFile() == 0) {
                         *(__esp + 24) = GetLastError();
                        break;
                    } else {
                        goto L14;
                    }
                    goto L33;
L14:
                    _t75 =  *((intOrPtr*)(__esp + 28));
                     *((intOrPtr*)(__esp + 16)) =  *((intOrPtr*)(__esp + 16)) + _t75;
                } while(_t75 >= _t104 && __edi - _t107 < __ebx);
                _t100 =  *(__esp + 20);
            }
        }
        goto L17;
    } else {
        _pop(__edi);
        _pop(__esi);
        _pop(__ebp);
        _pop(__ebx);
        __esp = __esp + 1052;
        return 0;
    }
    goto L33;
L17:
    _t64 =  *((intOrPtr*)(__esp + 16));
    if(_t64 != 0) {
        _t65 = _t64 -  *((intOrPtr*)(__esp + 32));
        _pop(__edi);
        _pop(__esi);
        _pop(__ebp);
        _pop(__ebx);
        __esp = __esp + 1052;
        return _t65;
    } else {
        _t58 =  *(__esp + 24);
        if(_t58 == 0) {
            if(( *(_t100 +  *((intOrPtr*)( *((intOrPtr*)(__esp + 36)))) + 4) & 64) == 0 ||  *_t107 != 26) {
                 *4229396 = 28;
                goto L28;
            }
            _pop(__edi);
            _pop(__esi);
            _pop(__ebp);
            _pop(__ebx);
            __esp = __esp + 1052;
            return 0;
        } else {
            if(_t58 != 5) {
                _push(_t58);
                L004043D0(__esp);
                __esp = __esp + 4;
                _pop(__edi);
                _pop(__esi);
                _pop(__ebp);
                _pop(__ebx);
                __esp = __esp + 1052;
                return _t58 | 255;
            } else {
                 *4229400 = _t58;
                 *4229396 = 9;
                _pop(__edi);
                _pop(__esi);
                _pop(__ebp);
                _pop(__ebx);
                __esp = __esp + 1052;
                return _t58 | 255;
            }
        }
    }
    goto L33;
}

L00404140(_unknown_ __eax, _unknown_ __esp, signed int _a4, long _a8, signed int _a12)
{
    intOrPtr* __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ _t20;
    signed int _t21;
    void* _t23;
    signed int _t25;
    signed int _t33;
    signed int _t34;
    _unknown_ _t37;
    long _t38;
    signed int _t39;

    __esp = __esp;
    _t21 = _a4;
    _push(__ebx);
    _push(_t39);
    _push(_t37);
    if(_t21 >=  *4230368) {
L10:
        _pop(__edi);
        _pop(__esi);
         *4229396 = 9;
         *4229400 = 0;
        _pop(__ebx);
        return _t21 | 255;
    } else {
        _t33 = _t21 >> 5;
        __ebx = 4230112 + _t33 * 4;
        _t39 = (_t21 & 31) << 3;
        if(( *( *((intOrPtr*)(4230112 + _t33 * 4)) + _t39 + 4) & 1) == 0) {
            goto L10;
        } else {
            _push(_t21);
            _t23 = L00404380(__esp);
            __esp = __esp + 4;
            if(_t23 != 255) {
                _t34 = _a12;
                _t38 = SetFilePointer(_t23, _a8, 0, _t34);
                if(_t38 != 255) {
                    _t25 = 0;
                } else {
                    _t25 = GetLastError();
                }
                if(_t25 == 0) {
                     *( *__ebx + _t39 + 4) = _t34 & 4294967295;
                    _pop(__edi);
                    _pop(__esi);
                    _pop(__ebx);
                    return _t38;
                } else {
                    _push(_t25);
                    L004043D0(__esp);
                    __esp = __esp + 4;
                    _pop(__edi);
                    _pop(__esi);
                    _pop(__ebx);
                    return _t25 | 255;
                }
            } else {
                 *4229396 = 9;
                _pop(__edi);
                _pop(__esi);
                _pop(__ebx);
                return _t23;
            }
        }
    }
L11:
}

L00404200(_unknown_ __esp, intOrPtr* _a4)
{
    intOrPtr _t18;
    intOrPtr _t19;
    intOrPtr _t20;

    __esp = __esp;
    _push(4096);
    _t18 =  *4229392 + 1;
     *4229392 = _t18;
    L00402FB0(__esp);
    __ecx = _a4;
    __esp = __esp + 4;
     *((intOrPtr*)(__ecx + 8)) = _t18;
    _t19 =  *((intOrPtr*)(__ecx + 12));
    if(_t18 == 0) {
         *((intOrPtr*)(__ecx + 24)) = 2;
         *((intOrPtr*)(__ecx + 12)) = _t19;
        _t20 = __ecx + 20;
         *((intOrPtr*)(__ecx + 8)) = _t20;
         *__ecx = _t20;
         *((intOrPtr*)(__ecx + 4)) = 0;
        return;
    } else {
         *((intOrPtr*)(__ecx + 12)) = _t19;
         *((intOrPtr*)(__ecx + 24)) = 4096;
         *__ecx =  *((intOrPtr*)(__ecx + 8));
         *((intOrPtr*)(__ecx + 4)) = 0;
        return;
    }
}

L00404380(_unknown_ __esp, signed int _a4)
{
    signed int _t13;
    signed int _t19;

    __esp = __esp;
    _t13 = _a4;
    if(_t13 <  *4230368) {
        _t19 = _t13 >> 5;
        _t13 =  *((intOrPtr*)(4230112 + _t19 * 4)) + (_t13 & 31) * 8;
        if((_t19 & 4294967295 & 1) != 0) {
            return  *_t13;
        }
    }
     *4229396 = 9;
     *4229400 = 0;
    return _t13 | 255;
}

L004043D0(_unknown_ __esp, intOrPtr _a4)
{
    intOrPtr* _t4;

    __esp = __esp;
    __edx = _a4;
     *4229400 = __edx;
    __ecx = 0;
    _t4 = 4229008;
    while(__edx !=  *_t4) {
        _t4 = _t4 + 8;
        __ecx = __ecx + 1;
        if(_t4 < 4229368) {
            continue;
        } else {
            if(__edx < 19) {
L6:
                if(__edx >= 188) {
                     *4229396 = 8;
                    if(__edx <= 202) {
                        return ;
                    }
                }
                 *4229396 = 22;
                return;
            }
            if(__edx > 36) {
                goto L6;
            } else {
                 *4229396 = 13;
                return;
            }
        }
        goto L11;
    }
}

L004043D0(_unknown_ __esp, intOrPtr _a4)
{
    intOrPtr* _t4;

    __esp = __esp;
    __edx = _a4;
     *4229400 = __edx;
    __ecx = 0;
    _t4 = 4229008;
    while(__edx !=  *_t4) {
        _t4 = _t4 + 8;
        __ecx = __ecx + 1;
        if(_t4 < 4229368) {
            continue;
        } else {
            if(__edx < 19) {
L6:
                if(__edx >= 188) {
                     *4229396 = 8;
                    if(__edx <= 202) {
                        return ;
                    }
                }
                 *4229396 = 22;
                return;
            }
            if(__edx > 36) {
                goto L6;
            } else {
                 *4229396 = 13;
                return;
            }
        }
        goto L11;
    }
}

// Statistics:
//    1699 Register nodes
//    1238 Temporaries nodes
//      99 Casts
//    1126 Statements
//     295 Labels
//     217 Gotos
//      55 Blocks
//    9400 Nodes
//      32 Assembly nodes
//     367 Unknown Types


