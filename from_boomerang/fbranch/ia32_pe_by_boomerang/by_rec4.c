L00401000()
{
    intOrPtr _v8;
    char _v12;
    _unknown_ __ebp;
    signed int _t21;
    _unknown_ _t22;
    _unknown_ _t23;

    _v8 = 1084227584;
    _push( ?_? ( &_v12));
    _push(4239424);
    L00401114(__esp);
    __esp = __esp + 8;
    asm("fld dword [ebp-0x8]");
    __esp = __esp - 8;
    asm("fstp qword [esp]");
    asm("fld dword [ebp-0x4]");
    __esp = __esp - 8;
    asm("fstp qword [esp]");
    _push("a is %f, b is %f\n");
    _t21 = L004010E3( &_v12, __esp);
    __esp = __esp + 20;
    asm("fld dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fucompp ");
    asm("fnstsw ax");
    if((_t21 & 4294967295 & 68) == 0) {
        _push("Equal\n");
        _t21 = L004010E3(_t21, __esp);
        __esp = __esp + 4;
    }
    asm("fld dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fucompp ");
    asm("fnstsw ax");
    if((_t21 & 4294967295 & 68) == 0) {
        _push("Not Equal\n");
        _t21 = L004010E3(_t21, __esp);
        __esp = __esp + 4;
    }
    asm("fld dword [ebp-0x4]");
    asm("fcomp dword [ebp-0x8]");
    asm("fnstsw ax");
    if((_t21 & 4294967295 & 65) == 0) {
        _push("Greater\n");
        _t21 = L004010E3(_t21, __esp);
        __esp = __esp + 4;
    }
    asm("fld dword [ebp-0x4]");
    asm("fcomp dword [ebp-0x8]");
    asm("fnstsw ax");
    if((_t21 & 4294967295 & 65) == 0) {
        _push("Less or Equal\n");
        _t21 = L004010E3(_t21, __esp);
        __esp = __esp + 4;
    }
    asm("fld dword [ebp-0x4]");
    asm("fcomp dword [ebp-0x8]");
    asm("fnstsw ax");
    if((_t21 & 4294967295 & 1) == 0) {
        _push("Greater or Equal\n");
        _t21 = L004010E3(_t21, __esp);
        __esp = __esp + 4;
    }
    asm("fld dword [ebp-0x4]");
    asm("fcomp dword [ebp-0x8]");
    asm("fnstsw ax");
    if((_t21 & 4294967295 & 5) != 0) {
        return 0;
    }
    _push(4239516);
    L004010E3(_t21, __esp);
    __esp = __esp + 4;
    return 0;
}

L004010E3(_unknown_ __eax, _unknown_ __esp, intOrPtr _a4, char _a8)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ _t4;
    _unknown_ _t6;
    _unknown_ _t8;
    _unknown_ _t10;
    _unknown_ _t12;
    _unknown_ _t13;

    __esp = __esp;
    _push(_t12);
    _push(_t10);
    _push(4239592);
    _t4 = L0040136E(__eax);
    _push( ?_? ( &_a8));
    _push(_a4);
    _push(4239592);
    _t6 = L004014C0( &_a8, _t8);
    _push(4239592);
    _push(_t4);
    L004013F6(__esp);
    __esp = __esp + 24;
    _pop(__edi);
    _pop(__esi);
    return _t6;
}

L00401114(_unknown_ __esp, intOrPtr _a4, char _a8)
{
    _unknown_ _t4;

    __esp = __esp;
    _push( ?_? ( &_a8));
    _push(_a4);
    _push(4239560);
    L00401DBC( &_a8, __ecx);
    __esp = __esp + 12;
    return;
}

L00401182(_unknown_ __esp, intOrPtr _a4)
{
    __esp = __esp;
    if( *4241968 != 2) {
        L00403391();
    }
    _push(_a4);
    L0040321A(__eax, __edx);
    _push(255);
     *4239544();
    _pop(__ecx);
    _pop(__ecx);
    return;
}

L0040136E(_unknown_ __eax, signed int* _a4)
{
    signed int* __esi;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    signed int _t21;
    _unknown_ _t22;
    signed int _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    signed int _t28;

    __esi = _a4;
    _push((__esi)[4]);
    _t18 = L00403DF1(__esp);
    _pop(__ecx);
    if(_t18 == 0) {
        return 0;
    }
    if(__esi != 4239592) {
        if(__esi != 4239624) {
            return 0;
        }
        _t21 = 1;
    } else {
        _t21 = 0;
    }
     *4241980 =  *4241980 + 1;
    if(((__esi)[3] & 268) != 0) {
        return 0;
    }
    _push(_t25);
    _push(_t27);
    _t28 = 4241972 + _t21 * 4;
    if( *_t28 != 0) {
L9:
        _t28 =  *_t28;
        (__esi)[2] = _t28;
         *__esi = _t28;
        (__esi)[6] = 4096;
        (__esi)[1] = 4096;
    } else {
        _push(4096);
        L00403DDF();
        _pop(__ecx);
         *_t28 = _t21;
        if(_t21 != 0) {
            goto L9;
        } else {
            _t24 =  &((__esi)[5]);
            _push(2);
            (__esi)[2] = _t24;
             *__esi = _t24;
            _pop(__eax);
            (__esi)[6] = _t24;
            (__esi)[1] = _t24;
        }
    }
L10:
    (__esi)[3] = (__esi)[3] | 4354;
    _pop(__edi);
    _pop(__ebx);
    return 1;
}

L004013F6(_unknown_ __esp, intOrPtr _a4, signed int* _a8)
{
    signed int* __esi;

    __esp = __esp;
    _push(__esi);
    if(_a4 == 0) {
        __eax = _a8;
        if(((__eax)[3] & 16) != 0) {
            _push(__eax);
            __eax = L00403E18(__esp);
            goto L5;
        }
    } else {
        __esi = _a8;
        if(((__esi)[3] & 16) != 0) {
            _push(__esi);
            __eax = L00403E18(__esp);
            (__esi)[3] = (__esi)[3] & 238;
            (__esi)[6] = (__esi)[6] & 0;
             *__esi =  *__esi & 0;
            (__esi)[2] = (__esi)[2] & 0;
L5:
            _pop(__ecx);
        }
L7:
    }
    _pop(__esi);
    return;
    goto L7;
}

L00401432(signed int __eax, signed int** __ecx, signed int* __esi)
{
    signed int _t10;
    signed int* _t13;

    __esi = __esi;
    __ecx = __ecx;
    _t10 = __eax;
    if(((__ecx)[3] & 64) == 0) {
L2:
        (__ecx)[1] = (__ecx)[1] - 1;
        if(_t13 >= 0) {
            _push(__ecx);
            _push(_t10 & 4294967295);
            _t10 = L00403F26();
            _pop(__ecx);
            _pop(__ecx);
        } else {
             *( *__ecx) = _t10 & 4294967295;
             *__ecx =  &(( *__ecx)[0]);
            _t10 = _t10 & 4294967295 & ;
        }
        if(_t10 != 255) {
            goto L7;
        } else {
             *__esi =  *__esi | _t10;
            return;
        }
    } else {
        _t13 = (__ecx)[2];
        if(_t13 == 0) {
L7:
             *__esi =  *__esi + 1;
            return;
        } else {
            goto L2;
        }
    }
L8:
}

L00401465(_unknown_ __esi, _unknown_ _a4, intOrPtr _a8, signed int** _a12)
{
    _unknown_ __ebp;
    _unknown_ _t7;
    intOrPtr* _t8;

    _t8 = __eax;
    while(_a8 > 0) {
        __ecx = _a12;
        _a8 = _a8 - 1;
        L00401432(__eax, _a12, _t8);
        if( *_t8 == 255) {
            return ;
        }
    }
}

L00401489(_unknown_ __esi, intOrPtr _a4)
{
    _unknown_ __ebx;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    intOrPtr* _t15;

    _push(_t10);
    _push(__esi);
    _t15 = __eax;
    _t11 = _t12;
    if(( *(__edi + 12) & 64) == 0 ||  *((intOrPtr*)(__edi + 8)) != 0) {
L4:
        while(_a4 > 0) {
            _a4 = _a4 - 1;
            L00401432(__eax, __edi, _t15);
            _t11 = _t11 + 1;
            if( *_t15 == 255) {
                goto L5;
            }
        }
    } else {
        __eax = _a4;
         *_t15 =  *_t15 + _a4;
    }
L5:
    _pop(__esi);
    _pop(__ebx);
    return;
}

L004014C0(_unknown_ __eax, signed int __ebx)
{
    _unknown_ __edi;
    _unknown_ __ebp;
    _unknown_ _t372;
    _unknown_ _t374;
    intOrPtr _t375;
    _unknown_ _t376;
    signed int _t377;
    _unknown_ _t379;
    _unknown_ _t382;
    _unknown_ _t383;
    _unknown_ _t385;
    intOrPtr _t386;
    _unknown_ _t388;

    __ebx = __ebx;
    _t388 = __esp + -468;
    __esp = __esp - 596;
     *((intOrPtr*)(_t388 + 464)) =  *4240536;
     *(_t388 - 72) = 0;
     *(_t388 - 76) = 0;
     *(_t388 - 96) = 0;
    _t375 =  *((intOrPtr*)(_t388 + 480));
    _push(__ebx);
    _t383 = 0;
    if((__ebx & 4294967295) == 0) {
L198:
        _pop(__ebx);
        L004041A2( *((intOrPtr*)(_t388 + 464)));
        __esp = _t388 + 468;
        return;
    } else {
        _push(__esi);
        _push(_t385);
        _t386 = _t375;
        while(1) {
             *((intOrPtr*)(_t388 + 480)) = _t386 + 1;
            if( *(_t388 - 76) < 0) {
                break;
            } else {
                if((__ebx & 4294967295) < 32 || (__ebx & 4294967295) > 120) {
                    _t377 = 0;
                } else {
                    _t377 =  *((__ebx & 4294967295) +  &__imp__SetStdHandle) & 15;
                }
                goto L8;
            }
        }
        _pop(__edi);
        _pop(__esi);
        goto L198;
    }
}

L00401D74(signed int __eax)
{
    _unknown_ __esi;
    signed int _t6;
    signed int _t8;

    _t8 = __eax;
    if( *4240544 <= 1) {
        _t6 =  *( *4240528 + _t8 * 2) & 255 & 4;
    } else {
        _push(4);
        _push(_t8);
        _t6 = L00404318(__ecx);
        _pop(__ecx);
        _pop(__ecx);
    }
    if(_t6 != 0) {
        return _t8;
    }
    _t8 = (_t8 & 223) - 7;
    return _t8;
}

L00401DA6(_unknown_ __eflags)
{
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;

    __eflags = __eflags;
     *((intOrPtr*)(__edx + 4)) =  *((intOrPtr*)(__edx + 4)) - 1;
    if(__eflags >= 0) {
        _push(__edx);
        L00404396(_t3, __esp);
        _pop(__ecx);
        return;
    } else {
         *__edx =  *__edx + 1;
        return;
    }
}

L00401DBC(_unknown_ __eax, _unknown_ __ecx)
{
    _unknown_ _t492;
    _unknown_ _t495;
    _unknown_ _t496;
    _unknown_ _t498;
    _unknown_ _t499;
    _unknown_ _t518;
    _unknown_ _t534;
    _unknown_ _t537;
    _unknown_ _t538;
    _unknown_ _t539;
    _unknown_ _t540;
    _unknown_ _t541;
    _unknown_ _t542;
    _unknown_ _t544;
    _unknown_ _t545;
    _unknown_ _t546;
    _unknown_ _t554;
    _unknown_ _t556;
    _unknown_ _t557;
    _unknown_ _t558;
    _unknown_ _t559;
    _unknown_ _t561;
    _unknown_ _t562;
    _unknown_ _t564;
    _unknown_ _t568;
    _unknown_ _t569;
    _unknown_ _t570;
    intOrPtr _t571;
    _unknown_ _t572;
    _unknown_ _t573;
    _unknown_ _t574;
    _unknown_ _t575;
    _unknown_ _t576;
    _unknown_ _t577;
    _unknown_ _t578;
    _unknown_ _t579;

    _t546 = __ecx;
    _push(460);
    _push(4231520);
    L00403BD0(_t538, _t561, _t570);
     *((intOrPtr*)(__ebp - 28)) =  *4240536;
    _t494 = 0;
     *((intOrPtr*)(__ebp + -444)) = 0;
     *((intOrPtr*)(__ebp + -472)) = 0;
     *((intOrPtr*)(__ebp + -432)) = 0;
     *((intOrPtr*)(__ebp + -404)) = 0;
     *((intOrPtr*)(__ebp + -405)) = 0;
     *((intOrPtr*)(__ebp + -388)) = 0;
     *((intOrPtr*)(__ebp + -440)) = 0;
    while(1) {
        _t571 =  *((intOrPtr*)(__ebp + 12));
        goto L2;
    }
    _t571 =  *((intOrPtr*)(__ebp + 12));
    goto L2;
L2:
    if((_t494 & 4294967295) == 0) {
        goto L300;
    } else {
L3:
        _t496 = _t494 & 4294967295 & ;
        if( *((intOrPtr*)(4240544)) <= 1) {
L5:
            _t546 =  *((intOrPtr*)(4240528));
            _t498 =  *((char*)(_t546 + _t496 * 2)) & 255 & 8;
        } else {
L4:
            _push(8);
            _push(_t496);
            _t498 = L00404318(_t546);
            _pop(__ecx);
            _pop(__ecx);
        }
        goto L6;
    }
L6:
    _t562 = 0;
    _t582 = _t498;
    if(_t498 == 0) {
        goto L13;
    } else {
L7:
         *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) - 1;
        goto L8;
    }
L8:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    L00401DA6(_t582);
    _t579 = _t498;
    _push(_t579);
    _t498 = L004044E0(__esp);
    _pop(__ecx);
    if(_t498 != 0) {
        goto L8;
    } else {
L9:
        if(_t579 == 255) {
        } else {
L10:
            _push( *((intOrPtr*)(__ebp + 8)));
            _push(_t579);
            L00404474();
            _pop(__ecx);
            _pop(__ecx);
        }
        goto L11;
    }
L11:
     *((intOrPtr*)(__ebp + 12)) =  *((intOrPtr*)(__ebp + 12)) + 1;
    _push( *((char*)( *((intOrPtr*)(__ebp + 12)))) & 255);
    _t494 = L004044E0(__esp);
    _pop(__ecx);
    if(_t494 != 0) {
        goto L11;
    } else {
L12:
        goto L1;
    }
L13:
    _t572 =  *((intOrPtr*)(__ebp + 12));
    __eflags =  *((char*)(_t572)) - 37;
    if(__eflags != 0) {
        goto L288;
    } else {
L14:
         *((intOrPtr*)(__ebp + -416)) = 0;
         *((char*)(__ebp + -408)) = 0;
         *((intOrPtr*)(__ebp + -412)) = 0;
         *((intOrPtr*)(__ebp + -436)) = 0;
         *((intOrPtr*)(__ebp + -396)) = 0;
         *((char*)(__ebp + -417)) = 0;
         *((char*)(__ebp + -407)) = 0;
         *((char*)(__ebp + -398)) = 0;
         *((char*)(__ebp + -381)) = 0;
         *((char*)(__ebp + -406)) = 0;
         *((char*)(__ebp + -389)) = 0;
         *((char*)(__ebp + -397)) = 1;
         *((intOrPtr*)(__ebp + -456)) = 0;
        goto L15;
    }
L15:
    _t572 = _t572 + 1;
    _t540 =  *((char*)(_t572)) & 255;
    _t499 = _t540 & 4294967295 & ;
    __eflags =  *((intOrPtr*)(4240544)) - 1;
    if( *((intOrPtr*)(4240544)) <= 1) {
L17:
        _t546 =  *((intOrPtr*)(4240528));
        _t494 =  *((char*)(_t546 + _t499 * 2)) & 255 & 4;
    } else {
L16:
        _push(4);
        _push(_t499);
        _t494 = L00404318(_t546);
        _pop(__ecx);
        _pop(__ecx);
    }
    goto L18;
L18:
    __eflags = _t494;
    if(_t494 == 0) {
        goto L20;
    } else {
L19:
         *((intOrPtr*)(__ebp + -436)) =  *((intOrPtr*)(__ebp + -436)) + 1;
        _t494 = _t562 + _t562 * 4;
        _t562 = _t540 + _t494 * 2 - 48;
        goto L47;
    }
L47:
    __eflags =  *((char*)(__ebp + -381));
    if( *((char*)(__ebp + -381)) == 0) {
        goto L15;
    } else {
        goto L48;
    }
L48:
     *((intOrPtr*)(__ebp + -396)) = _t562;
     *((intOrPtr*)(__ebp + 12)) = _t572;
    __eflags =  *((char*)(__ebp + -398));
    if( *((char*)(__ebp + -398)) != 0) {
L50:
        _t541 =  *((intOrPtr*)(__ebp + -432));
    } else {
L49:
        _t534 =  *((intOrPtr*)(__ebp + 16));
         *((intOrPtr*)(__ebp + -476)) = _t534;
        _t494 = _t534 + 4;
         *((intOrPtr*)(__ebp + 16)) = _t494;
        _t541 =  *((intOrPtr*)(_t494 - 4));
         *((intOrPtr*)(__ebp + -432)) = _t541;
    }
L51:
     *((char*)(__ebp + -381)) = 0;
    __eflags =  *((char*)(__ebp + -389));
    if( *((char*)(__ebp + -389)) != 0) {
        goto L55;
    } else {
        goto L52;
    }
L52:
    __eflags = (_t494 & 4294967295) - 83;
    if((_t494 & 4294967295) == 83) {
        goto L54;
    } else {
        goto L53;
    }
L53:
    __eflags = (_t494 & 4294967295) - 67;
     *((char*)(__ebp + -389)) = 255;
    if((_t494 & 4294967295) != 67) {
        goto L55;
    } else {
        goto L54;
    }
L54:
     *((char*)(__ebp + -389)) = 1;
    goto L55;
L55:
    _t564 =  *((char*)(_t572)) & 255 | 32;
     *((intOrPtr*)(__ebp + -448)) = _t564;
    __eflags = _t564 - 110;
    if(_t564 == 110) {
        goto L61;
    } else {
        goto L56;
    }
L56:
    __eflags = _t564 - 99;
    if(__eflags == 0) {
        goto L60;
    } else {
        goto L57;
    }
L57:
    __eflags = _t564 - 123;
    if(__eflags == 0) {
        goto L60;
    } else {
        goto L58;
    }
L58:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 =  *((intOrPtr*)(__ebp + 8));
    L00401DA6(__eflags);
    _t578 = _t494;
    _push(_t578);
    _t494 = L004044E0(__esp);
    _pop(__ecx);
    __eflags = _t494;
    if(__eflags != 0) {
        goto L58;
    } else {
L59:
         *((intOrPtr*)(__ebp + -404)) = _t578;
        _t572 =  *((intOrPtr*)(__ebp + 12));
        goto L61;
    }
L61:
    _t546 =  *((intOrPtr*)(__ebp + -436));
    __eflags = _t546;
    if(_t546 == 0) {
        goto L63;
    } else {
        goto L62;
    }
L62:
    __eflags =  *((intOrPtr*)(__ebp + -396));
    if( *((intOrPtr*)(__ebp + -396)) == 0) {
        goto L130;
    } else {
        goto L63;
    }
L63:
    __eflags = _t564 - 111;
    if(__eflags > 0) {
        goto L124;
    } else {
        goto L64;
    }
L64:
    if(__eflags == 0) {
        goto L210;
    } else {
        goto L65;
    }
L65:
    __eflags = _t564 - 99;
    if(_t564 == 99) {
        goto L120;
    } else {
        goto L66;
    }
L66:
    __eflags = _t564 - 100;
    if(__eflags == 0) {
        goto L210;
    } else {
        goto L67;
    }
L67:
    if(__eflags <= 0) {
        goto L129;
    } else {
        goto L68;
    }
L68:
    __eflags = _t564 - 103;
    if(_t564 <= 103) {
        goto L76;
    } else {
        goto L69;
    }
L69:
    __eflags = _t564 - 105;
    if(_t564 == 105) {
L73:
        _push(100);
        _pop(__edi);
        goto L74;
    } else {
        goto L70;
    }
L74:
    _t542 =  *((intOrPtr*)(__ebp + -404));
    __eflags = _t542 - 45;
    if(__eflags != 0) {
        goto L177;
    } else {
        goto L75;
    }
L75:
     *((char*)(__ebp + -407)) = 1;
    goto L178;
L178:
     *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 1;
    if(__eflags != 0) {
        goto L181;
    } else {
        goto L179;
    }
L179:
    __eflags = _t546;
    if(__eflags == 0) {
        goto L181;
    } else {
        goto L180;
    }
L180:
     *((char*)(__ebp + -381)) = 1;
    goto L182;
L182:
    __eflags = _t542 - 48;
    if(__eflags != 0) {
        goto L218;
    } else {
        goto L183;
    }
L183:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 =  *((intOrPtr*)(__ebp + 8));
    L00401DA6(__eflags);
    _t542 = _t494;
     *((intOrPtr*)(__ebp + -404)) = _t542;
    __eflags = (_t542 & 4294967295) - 120;
    if(__eflags == 0) {
        goto L194;
    } else {
        goto L184;
    }
L184:
    __eflags = (_t542 & 4294967295) - 88;
    if(__eflags == 0) {
        goto L194;
    } else {
        goto L185;
    }
L185:
     *((intOrPtr*)(__ebp + -412)) = 1;
    __eflags = _t564 - 120;
    if(_t564 == 120) {
        goto L191;
    } else {
        goto L186;
    }
L186:
    __eflags =  *((intOrPtr*)(__ebp + -436));
    if(__eflags != 0) {
L187:
         *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 1;
        if(__eflags == 0) {
L188:
             *((char*)(__ebp + -381)) =  *((char*)(__ebp + -381)) + 1;
        }
    }
L189:
    _push(111);
    goto L190;
L190:
    _pop(__edi);
    goto L218;
L218:
    __eflags =  *((intOrPtr*)(__ebp + -456));
    if( *((intOrPtr*)(__ebp + -456)) == 0) {
        goto L248;
    } else {
        goto L219;
    }
L219:
    __eflags =  *((char*)(__ebp + -381));
    if( *((char*)(__ebp + -381)) != 0) {
        goto L246;
    } else {
        goto L220;
    }
L220:
    goto L221;
L221:
    __eflags = _t564 - 120;
    if(_t564 == 120) {
        goto L231;
    } else {
        goto L222;
    }
L222:
    __eflags = _t564 - 112;
    if(_t564 == 112) {
        goto L231;
    } else {
        goto L223;
    }
L223:
    __eflags =  *((intOrPtr*)(4240544)) - 1;
    if( *((intOrPtr*)(4240544)) <= 1) {
L225:
        _t494 =  *((char*)( *((intOrPtr*)(4240528)) + _t542 * 2)) & 255 & 4;
    } else {
L224:
        _push(4);
        _push(_t542);
        L00404318(_t546);
        _pop(__ecx);
        _pop(__ecx);
    }
L226:
    __eflags = _t494;
    if(_t494 == 0) {
        goto L236;
    } else {
        goto L227;
    }
L227:
    __eflags = _t564 - 111;
    if(__eflags != 0) {
        goto L230;
    } else {
        goto L228;
    }
L228:
    __eflags = _t542 - 56;
    if(_t542 >= 56) {
        goto L236;
    } else {
        goto L229;
    }
L229:
    _t546 =  *((intOrPtr*)(__ebp + -424));
    asm("shld ecx, eax, 0x3");
    _t494 =  *((intOrPtr*)(__ebp + -428)) << 3;
     *((intOrPtr*)(__ebp + -428)) = _t494;
     *((intOrPtr*)(__ebp + -424)) = _t546;
    goto L237;
L237:
    __eflags =  *((char*)(__ebp + -381));
    if( *((char*)(__ebp + -381)) != 0) {
        goto L242;
    } else {
        goto L238;
    }
L238:
     *((intOrPtr*)(__ebp + -412)) =  *((intOrPtr*)(__ebp + -412)) + 1;
    _t494 = _t542 - 48;
    asm("cdq ");
     *((intOrPtr*)(__ebp + -428)) =  *((intOrPtr*)(__ebp + -428)) + _t494;
    asm("adc [ebp+0xfffffe58], edx");
    __eflags =  *((intOrPtr*)(__ebp + -436));
    if(__eflags == 0) {
        goto L241;
    } else {
        goto L239;
    }
L239:
     *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 1;
    if(__eflags != 0) {
        goto L241;
    } else {
        goto L240;
    }
L240:
     *((char*)(__ebp + -381)) = 1;
    goto L244;
L244:
    __eflags =  *((char*)(__ebp + -381));
    if( *((char*)(__ebp + -381)) == 0) {
        goto L221;
    } else {
        goto L245;
    }
L245:
     *((intOrPtr*)(__ebp + -404)) = _t542;
    goto L246;
L246:
    __eflags =  *((char*)(__ebp + -407));
    if( *((char*)(__ebp + -407)) != 0) {
L247:
        _t494 =  ~( *((intOrPtr*)(__ebp + -428)));
        asm("adc ecx, 0x0");
        _t546 =  ~( *((intOrPtr*)(__ebp + -424)));
         *((intOrPtr*)(__ebp + -428)) = _t494;
         *((intOrPtr*)(__ebp + -424)) = _t546;
    }
    goto L277;
L277:
    __eflags = _t564 - 70;
    if(_t564 == 70) {
L278:
         *((intOrPtr*)(__ebp + -412)) =  *((intOrPtr*)(__ebp + -412)) & 0;
    }
L279:
    __eflags =  *((intOrPtr*)(__ebp + -412));
    if( *((intOrPtr*)(__ebp + -412)) == 0) {
        goto L300;
    } else {
        goto L280;
    }
L280:
    __eflags =  *((char*)(__ebp + -398));
    if( *((char*)(__ebp + -398)) != 0) {
        goto L287;
    } else {
        goto L281;
    }
L281:
     *((intOrPtr*)(__ebp + -440)) =  *((intOrPtr*)(__ebp + -440)) + 1;
    _t541 =  *((intOrPtr*)(__ebp + -432));
    _t494 =  *((intOrPtr*)(__ebp + -416));
    goto L282;
L282:
    __eflags =  *((intOrPtr*)(__ebp + -456));
    if( *((intOrPtr*)(__ebp + -456)) == 0) {
L284:
        __eflags =  *((char*)(__ebp + -397));
        if( *((char*)(__ebp + -397)) == 0) {
L286:
             *((intOrPtr*)(_t541)) = _t494 & 4294967295;
        } else {
L285:
             *((intOrPtr*)(_t541)) = _t494;
        }
    } else {
L283:
         *((intOrPtr*)(_t541)) =  *((intOrPtr*)(__ebp + -428));
        _t494 =  *((intOrPtr*)(__ebp + -424));
         *((intOrPtr*)(_t541 + 4)) = _t494;
    }
    goto L287;
L287:
     *((char*)(__ebp + -405)) =  *((char*)(__ebp + -405)) + 1;
     *((intOrPtr*)(__ebp + 12)) =  *((intOrPtr*)(__ebp + 12)) + 1;
    _t571 =  *((intOrPtr*)(__ebp + 12));
    goto L297;
L297:
    __eflags =  *((intOrPtr*)(__ebp + -404)) - 255;
    if(__eflags != 0) {
        goto L2;
    } else {
        goto L298;
    }
L298:
    __eflags =  *((char*)(_t571)) - 37;
    if( *((char*)(_t571)) != 37) {
        goto L300;
    } else {
        goto L299;
    }
L299:
    _t494 =  *((intOrPtr*)(__ebp + 12));
    __eflags =  *((char*)(_t494 + 1)) - 110;
    if(__eflags == 0) {
        goto L1;
    } else {
        goto L300;
    }
L300:
    __eflags =  *((intOrPtr*)(__ebp + -472)) - 1;
    if( *((intOrPtr*)(__ebp + -472)) == 1) {
L301:
        _push( *((intOrPtr*)(__ebp + -444)));
        L0040403C(_t494);
        _pop(__ecx);
    }
L302:
    _t495 =  *((intOrPtr*)(__ebp + -440));
    __eflags =  *((intOrPtr*)(__ebp + -404)) - 255;
    if( *((intOrPtr*)(__ebp + -404)) == 255) {
L303:
        __eflags = _t495;
        if(_t495 == 0) {
L304:
            __eflags =  *((intOrPtr*)(__ebp + -405)) - (_t495 & 4294967295);
            if( *((intOrPtr*)(__ebp + -405)) == (_t495 & 4294967295)) {
L305:
                _t495 = _t495 | 255;
            }
        }
    }
L306:
    __esp = __ebp + -488;
    L004041A2( *((intOrPtr*)(__ebp - 28)));
    L00403C0B();
    return;
L307:
L241:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 =  *((intOrPtr*)(__ebp + 8));
    L00401DA6(__eflags);
    _t542 = _t494;
    goto L244;
L242:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) - 1;
    __eflags = _t542 - 255;
    if(_t542 != 255) {
L243:
        _push( *((intOrPtr*)(__ebp + 8)));
        _push(_t542);
        L00404474();
        _pop(__ecx);
        _pop(__ecx);
    }
    goto L244;
L236:
     *((char*)(__ebp + -381)) =  *((char*)(__ebp + -381)) + 1;
    goto L237;
L230:
    _push(0);
    _push(10);
    _push( *((intOrPtr*)(__ebp + -424)));
    _push( *((intOrPtr*)(__ebp + -428)));
    L00404730(__esp, __eflags);
     *((intOrPtr*)(__ebp + -428)) = _t494;
     *((intOrPtr*)(__ebp + -424)) = _t558;
    goto L237;
L231:
    __eflags =  *((intOrPtr*)(4240544)) - 1;
    if( *((intOrPtr*)(4240544)) <= 1) {
L233:
        _t494 =  *((char*)( *((intOrPtr*)(4240528)) + _t542 * 2)) & 255 & 128;
    } else {
L232:
        _push(128);
        _push(_t542);
        L00404318(_t546);
        _pop(__ecx);
        _pop(__ecx);
    }
L234:
    __eflags = _t494;
    if(_t494 == 0) {
        goto L236;
    } else {
        goto L235;
    }
L235:
    _t546 =  *((intOrPtr*)(__ebp + -424));
    asm("shld ecx, eax, 0x4");
     *((intOrPtr*)(__ebp + -428)) =  *((intOrPtr*)(__ebp + -428)) << 4;
     *((intOrPtr*)(__ebp + -424)) = _t546;
    _t494 = _t542;
    L00401D74(_t494);
    _t542 = _t494;
    goto L237;
L248:
    __eflags =  *((char*)(__ebp + -381));
    if( *((char*)(__ebp + -381)) != 0) {
        goto L275;
    } else {
        goto L249;
    }
L249:
    goto L250;
L250:
    __eflags = _t564 - 120;
    if(_t564 == 120) {
        goto L260;
    } else {
        goto L251;
    }
L251:
    __eflags = _t564 - 112;
    if(_t564 == 112) {
        goto L260;
    } else {
        goto L252;
    }
L252:
    __eflags =  *((intOrPtr*)(4240544)) - 1;
    if( *((intOrPtr*)(4240544)) <= 1) {
L254:
        _t494 =  *((char*)( *((intOrPtr*)(4240528)) + _t542 * 2)) & 255 & 4;
    } else {
L253:
        _push(4);
        _push(_t542);
        L00404318(_t546);
        _pop(__ecx);
        _pop(__ecx);
    }
L255:
    __eflags = _t494;
    if(_t494 == 0) {
        goto L265;
    } else {
        goto L256;
    }
L256:
    __eflags = _t564 - 111;
    if(_t564 != 111) {
        goto L259;
    } else {
        goto L257;
    }
L257:
    __eflags = _t542 - 56;
    if(_t542 >= 56) {
        goto L265;
    } else {
        goto L258;
    }
L258:
     *((intOrPtr*)(__ebp + -416)) =  *((intOrPtr*)(__ebp + -416)) << 3;
    goto L266;
L266:
    __eflags =  *((char*)(__ebp + -381));
    if( *((char*)(__ebp + -381)) != 0) {
        goto L271;
    } else {
        goto L267;
    }
L267:
     *((intOrPtr*)(__ebp + -412)) =  *((intOrPtr*)(__ebp + -412)) + 1;
    _t494 =  *((intOrPtr*)(__ebp + -416)) + _t542 - 48;
     *((intOrPtr*)(__ebp + -416)) = _t494;
    __eflags =  *((intOrPtr*)(__ebp + -436));
    if(__eflags == 0) {
        goto L270;
    } else {
        goto L268;
    }
L268:
     *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 1;
    if(__eflags != 0) {
        goto L270;
    } else {
        goto L269;
    }
L269:
     *((char*)(__ebp + -381)) = 1;
    goto L273;
L273:
    __eflags =  *((char*)(__ebp + -381));
    if( *((char*)(__ebp + -381)) == 0) {
        goto L250;
    } else {
        goto L274;
    }
L274:
     *((intOrPtr*)(__ebp + -404)) = _t542;
    goto L275;
L275:
    __eflags =  *((char*)(__ebp + -407));
    if( *((char*)(__ebp + -407)) != 0) {
L276:
         *((intOrPtr*)(__ebp + -416)) =  ~( *((intOrPtr*)(__ebp + -416)));
    }
    goto L277;
L270:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 =  *((intOrPtr*)(__ebp + 8));
    L00401DA6(__eflags);
    _t542 = _t494;
    goto L273;
L271:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) - 1;
    __eflags = _t542 - 255;
    if(_t542 != 255) {
L272:
        _push( *((intOrPtr*)(__ebp + 8)));
        _push(_t542);
        L00404474();
        _pop(__ecx);
        _pop(__ecx);
    }
    goto L273;
L265:
     *((char*)(__ebp + -381)) =  *((char*)(__ebp + -381)) + 1;
    goto L266;
L259:
    _t494 =  *((intOrPtr*)(__ebp + -416)) +  *((intOrPtr*)(__ebp + -416)) * 4 << 1;
     *((intOrPtr*)(__ebp + -416)) = _t494;
    goto L266;
L260:
    __eflags =  *((intOrPtr*)(4240544)) - 1;
    if( *((intOrPtr*)(4240544)) <= 1) {
L262:
        _t494 =  *((char*)( *((intOrPtr*)(4240528)) + _t542 * 2)) & 255 & 128;
    } else {
L261:
        _push(128);
        _push(_t542);
        L00404318(_t546);
        _pop(__ecx);
        _pop(__ecx);
    }
L263:
    __eflags = _t494;
    if(_t494 == 0) {
        goto L265;
    } else {
        goto L264;
    }
L264:
     *((intOrPtr*)(__ebp + -416)) =  *((intOrPtr*)(__ebp + -416)) << 4;
    _t494 = _t542;
    L00401D74(_t494);
    _t542 = _t494;
    goto L266;
L191:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) - 1;
    __eflags = _t542 - 255;
    if(_t542 != 255) {
L192:
        _push( *((intOrPtr*)(__ebp + 8)));
        _push(_t542);
        L00404474();
        _pop(__ecx);
        _pop(__ecx);
    }
L193:
    _push(48);
    _pop(__ebx);
    goto L217;
L217:
     *((intOrPtr*)(__ebp + -404)) = _t542;
    goto L218;
L194:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 =  *((intOrPtr*)(__ebp + 8));
    L00401DA6(__eflags);
    _t542 = _t494;
     *((intOrPtr*)(__ebp + -404)) = _t542;
    __eflags =  *((intOrPtr*)(__ebp + -436));
    if( *((intOrPtr*)(__ebp + -436)) != 0) {
L195:
         *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 2;
        __eflags =  *((intOrPtr*)(__ebp + -396)) - 1;
        if( *((intOrPtr*)(__ebp + -396)) < 1) {
L196:
             *((char*)(__ebp + -381)) =  *((char*)(__ebp + -381)) + 1;
        }
    }
L197:
    _push(120);
    goto L190;
L181:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 =  *((intOrPtr*)(__ebp + 8));
    L00401DA6(__eflags);
    _t542 = _t494;
     *((intOrPtr*)(__ebp + -404)) = _t542;
    goto L182;
L177:
    __eflags = _t542 - 43;
    if(__eflags != 0) {
        goto L182;
    } else {
        goto L178;
    }
L70:
    __eflags = _t564 - 110;
    if(_t564 != 110) {
        goto L129;
    } else {
        goto L71;
    }
L71:
    _t494 =  *((intOrPtr*)(__ebp + -388));
    __eflags =  *((char*)(__ebp + -398));
    if( *((char*)(__ebp + -398)) == 0) {
        goto L282;
    } else {
L72:
        goto L287;
    }
L129:
    _t494 =  *((char*)(_t572)) & 255;
    __eflags = _t494 -  *((intOrPtr*)(__ebp + -404));
    if(_t494 ==  *((intOrPtr*)(__ebp + -404))) {
        goto L131;
    } else {
        goto L130;
    }
L130:
    __eflags =  *((intOrPtr*)(__ebp + -404)) - 255;
    goto L294;
L294:
    if(__eflags != 0) {
L295:
        _push( *((intOrPtr*)(__ebp + 8)));
        _push( *((intOrPtr*)(__ebp + -404)));
        L00404474();
        _pop(__ecx);
        _pop(__ecx);
    }
    goto L300;
L131:
     *((char*)(__ebp + -405)) =  *((char*)(__ebp + -405)) - 1;
    __eflags =  *((char*)(__ebp + -398));
    if( *((char*)(__ebp + -398)) == 0) {
L132:
        _t494 =  *((intOrPtr*)(__ebp + -476));
         *((intOrPtr*)(__ebp + 16)) = _t494;
    }
    goto L287;
L76:
    _t577 = __ebp + -380;
    _t545 =  *((intOrPtr*)(__ebp + -404));
    __eflags = _t545 - 45;
    if(__eflags != 0) {
        goto L78;
    } else {
        goto L77;
    }
L77:
     *((intOrPtr*)(__ebp + -380)) = _t545 & 4294967295;
    _t577 = __ebp + -379;
    goto L79;
L79:
     *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 1;
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t569 =  *((intOrPtr*)(__ebp + 8));
    _t558 = _t569;
    L00401DA6(__eflags);
    _t545 = _t494;
     *((intOrPtr*)(__ebp + -404)) = _t545;
    goto L81;
L81:
    __eflags =  *((intOrPtr*)(__ebp + -436));
    if( *((intOrPtr*)(__ebp + -436)) == 0) {
        goto L83;
    } else {
        goto L82;
    }
L82:
    __eflags =  *((intOrPtr*)(__ebp + -396)) - 349;
    if( *((intOrPtr*)(__ebp + -396)) <= 349) {
        goto L84;
    } else {
        goto L83;
    }
L83:
     *((intOrPtr*)(__ebp + -396)) = 349;
    goto L84;
L84:
    __eflags =  *((intOrPtr*)(4240544)) - 1;
    if( *((intOrPtr*)(4240544)) <= 1) {
L86:
        _t494 =  *((char*)( *((intOrPtr*)(4240528)) + _t545 * 2)) & 255 & 4;
    } else {
L85:
        _push(4);
        _push(_t545);
        _t494 = L00404318(_t546);
        _pop(__ecx);
        _pop(__ecx);
    }
L87:
    __eflags = _t494;
    if(_t494 == 0) {
        goto L90;
    } else {
        goto L88;
    }
L88:
    _t494 =  *((intOrPtr*)(__ebp + -396));
     *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 1;
    __eflags = _t494;
    if(__eflags == 0) {
        goto L90;
    } else {
        goto L89;
    }
L89:
     *((intOrPtr*)(__ebp + -412)) =  *((intOrPtr*)(__ebp + -412)) + 1;
     *((intOrPtr*)(_t577)) = _t545 & 4294967295;
    _t577 = _t577 + 1;
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 = _t569;
    L00401DA6(__eflags);
    _t545 = _t494;
     *((intOrPtr*)(__ebp + -404)) = _t545;
    goto L84;
L90:
    __eflags =  *((intOrPtr*)(4240548)) - (_t545 & 4294967295);
    if( *((intOrPtr*)(4240548)) != (_t545 & 4294967295)) {
        goto L99;
    } else {
        goto L91;
    }
L91:
    _t494 =  *((intOrPtr*)(__ebp + -396));
     *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 1;
    __eflags = _t494;
    if(__eflags == 0) {
        goto L99;
    } else {
        goto L92;
    }
L92:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 = _t569;
    L00401DA6(__eflags);
    _t545 = _t494;
     *((intOrPtr*)(_t577)) = _t494 & 4294967295;
    _t577 = _t577 + 1;
    goto L93;
L93:
     *((intOrPtr*)(__ebp + -404)) = _t545;
    __eflags =  *((intOrPtr*)(4240544)) - 1;
    if( *((intOrPtr*)(4240544)) <= 1) {
L95:
        _t494 =  *((char*)( *((intOrPtr*)(4240528)) + _t545 * 2)) & 255 & 4;
    } else {
L94:
        _push(4);
        _push(_t545);
        _t494 = L00404318(_t546);
        _pop(__ecx);
        _pop(__ecx);
    }
L96:
    __eflags = _t494;
    if(_t494 == 0) {
        goto L99;
    } else {
        goto L97;
    }
L97:
    _t494 =  *((intOrPtr*)(__ebp + -396));
     *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 1;
    __eflags = _t494;
    if(__eflags == 0) {
        goto L99;
    } else {
        goto L98;
    }
L98:
     *((intOrPtr*)(__ebp + -412)) =  *((intOrPtr*)(__ebp + -412)) + 1;
     *((intOrPtr*)(_t577)) = _t545 & 4294967295;
    _t577 = _t577 + 1;
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 = _t569;
    L00401DA6(__eflags);
    _t545 = _t494;
    goto L93;
L99:
    __eflags =  *((intOrPtr*)(__ebp + -412));
    if( *((intOrPtr*)(__ebp + -412)) == 0) {
        goto L115;
    } else {
        goto L100;
    }
L100:
    __eflags = _t545 - 101;
    if(_t545 == 101) {
        goto L102;
    } else {
        goto L101;
    }
L101:
    __eflags = _t545 - 69;
    if(_t545 != 69) {
        goto L115;
    } else {
        goto L102;
    }
L102:
    _t494 =  *((intOrPtr*)(__ebp + -396));
     *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 1;
    __eflags = _t494;
    if(__eflags == 0) {
        goto L115;
    } else {
        goto L103;
    }
L103:
     *((char*)(_t577)) = 101;
    _t577 = _t577 + 1;
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 = _t569;
    L00401DA6(__eflags);
    _t545 = _t494;
     *((intOrPtr*)(__ebp + -404)) = _t545;
    __eflags = _t545 - 45;
    if(_t545 != 45) {
        goto L105;
    } else {
        goto L104;
    }
L104:
     *((intOrPtr*)(_t577)) = _t494 & 4294967295;
    _t577 = _t577 + 1;
    goto L106;
L106:
    _t494 =  *((intOrPtr*)(__ebp + -396));
     *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 1;
    __eflags = _t494;
    if(__eflags != 0) {
        goto L108;
    } else {
        goto L107;
    }
L107:
     *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) & _t494;
    goto L109;
L109:
    __eflags =  *((intOrPtr*)(4240544)) - 1;
    if( *((intOrPtr*)(4240544)) <= 1) {
L111:
        _t494 =  *((char*)( *((intOrPtr*)(4240528)) + _t545 * 2)) & 255 & 4;
    } else {
L110:
        _push(4);
        _push(_t545);
        _t494 = L00404318(_t546);
        _pop(__ecx);
        _pop(__ecx);
    }
L112:
    __eflags = _t494;
    if(_t494 == 0) {
        goto L115;
    } else {
        goto L113;
    }
L113:
    _t494 =  *((intOrPtr*)(__ebp + -396));
     *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 1;
    __eflags = _t494;
    if(__eflags == 0) {
        goto L115;
    } else {
        goto L114;
    }
L114:
     *((intOrPtr*)(__ebp + -412)) =  *((intOrPtr*)(__ebp + -412)) + 1;
     *((intOrPtr*)(_t577)) = _t545 & 4294967295;
    _t577 = _t577 + 1;
    goto L108;
L108:
    _t558 = _t569;
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    L00401DA6(__eflags);
    _t545 = _t494;
     *((intOrPtr*)(__ebp + -404)) = _t545;
    goto L109;
L115:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) - 1;
    __eflags = _t545 - 255;
    if(_t545 != 255) {
L116:
        _push(_t569);
        _push(_t545);
        _t494 = L00404474();
        _pop(__ecx);
        _pop(__ecx);
    }
L117:
    __eflags =  *((intOrPtr*)(__ebp + -412));
    if( *((intOrPtr*)(__ebp + -412)) == 0) {
        goto L300;
    } else {
        goto L118;
    }
L118:
    __eflags =  *((char*)(__ebp + -398));
    if( *((char*)(__ebp + -398)) == 0) {
L119:
         *((intOrPtr*)(__ebp + -440)) =  *((intOrPtr*)(__ebp + -440)) + 1;
         *((char*)(_t577)) = 0;
        _push(__ebp + -380);
        _push( *((intOrPtr*)(__ebp + -432)));
        _t494 =  *((char*)(__ebp + -397)) - 1;
        _push(_t494);
         *((intOrPtr*)(4240208))();
        __esp = __esp + 12;
    }
    goto L287;
L105:
    __eflags = _t545 - 43;
    if(_t545 != 43) {
        goto L109;
    } else {
        goto L106;
    }
L78:
    __eflags = _t545 - 43;
    if(__eflags != 0) {
        goto L80;
    } else {
        goto L79;
    }
L80:
    _t569 =  *((intOrPtr*)(__ebp + 8));
    goto L81;
L210:
    _t542 =  *((intOrPtr*)(__ebp + -404));
    __eflags = _t542 - 45;
    if(__eflags != 0) {
        goto L212;
    } else {
        goto L211;
    }
L211:
     *((char*)(__ebp + -407)) = 1;
    goto L213;
L213:
     *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 1;
    if(__eflags != 0) {
        goto L216;
    } else {
        goto L214;
    }
L214:
    __eflags = _t546;
    if(__eflags == 0) {
        goto L216;
    } else {
        goto L215;
    }
L215:
     *((char*)(__ebp + -381)) = 1;
    goto L218;
L216:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 =  *((intOrPtr*)(__ebp + 8));
    L00401DA6(__eflags);
    _t542 = _t494;
    goto L217;
L212:
    __eflags = _t542 - 43;
    if(__eflags != 0) {
        goto L218;
    } else {
        goto L213;
    }
L120:
    __eflags = _t546;
    if(_t546 == 0) {
L121:
         *((intOrPtr*)(__ebp + -436)) = 1;
         *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) + 1;
    }
    goto L122;
L122:
    __eflags =  *((char*)(__ebp + -389));
    if( *((char*)(__ebp + -389)) > 0) {
L123:
         *((char*)(__ebp + -406)) = 1;
    }
    goto L159;
L159:
    _t575 = _t541;
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) - 1;
    __eflags =  *((intOrPtr*)(__ebp + -404)) - 255;
    if( *((intOrPtr*)(__ebp + -404)) != 255) {
L160:
        _push( *((intOrPtr*)(__ebp + 8)));
        _push( *((intOrPtr*)(__ebp + -404)));
        L00404474();
        _pop(__ecx);
        _pop(__ecx);
    }
    goto L161;
L161:
    __eflags =  *((intOrPtr*)(__ebp + -436));
    if(__eflags == 0) {
        goto L163;
    } else {
        goto L162;
    }
L162:
    _t494 =  *((intOrPtr*)(__ebp + -396));
     *((intOrPtr*)(__ebp + -396)) =  *((intOrPtr*)(__ebp + -396)) - 1;
    __eflags = _t494;
    if(__eflags == 0) {
        goto L203;
    } else {
        goto L163;
    }
L163:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 =  *((intOrPtr*)(__ebp + 8));
    L00401DA6(__eflags);
     *((intOrPtr*)(__ebp + -404)) = _t494;
    __eflags = _t494 - 255;
    if(_t494 == 255) {
        goto L201;
    } else {
        goto L164;
    }
L164:
    __eflags = _t564 - 99;
    if(_t564 == 99) {
        goto L172;
    } else {
        goto L165;
    }
L165:
    __eflags = _t564 - 115;
    if(_t564 != 115) {
        goto L169;
    } else {
        goto L166;
    }
L166:
    __eflags = _t494 - 9;
    if(_t494 < 9) {
        goto L168;
    } else {
        goto L167;
    }
L167:
    __eflags = _t494 - 13;
    if(_t494 <= 13) {
        goto L169;
    } else {
        goto L168;
    }
L168:
    __eflags = _t494 - 32;
    if(_t494 != 32) {
        goto L172;
    } else {
        goto L169;
    }
L169:
    __eflags = _t564 - 123;
    if(_t564 != 123) {
        goto L201;
    } else {
        goto L170;
    }
L170:
    _t558 = 1 << (_t494 & 7 & 4294967295);
    _t546 =  *((char*)((_t494 >> 3) +  *((intOrPtr*)(__ebp + -444)))) ^  *((char*)(__ebp + -417));
    __eflags = _t546 & _t558;
    if((_t546 & _t558) == 0) {
        goto L201;
    } else {
        goto L171;
    }
L171:
    _t564 =  *((intOrPtr*)(__ebp + -448));
    goto L172;
L172:
    __eflags =  *((char*)(__ebp + -398));
    if( *((char*)(__ebp + -398)) != 0) {
L200:
        _t575 = _t575 + 1;
    } else {
L173:
        __eflags =  *((char*)(__ebp + -406));
        if( *((char*)(__ebp + -406)) == 0) {
L198:
             *((intOrPtr*)(_t541)) = _t494 & 4294967295;
            _t541 = _t541 + 1;
        } else {
L174:
             *((intOrPtr*)(__ebp + -452)) = _t494 & 4294967295;
            _t518 = _t494 & 4294967295 & ;
            _t546 =  *((intOrPtr*)(4240528));
            __eflags =  *((char*)(_t546 + 1 + _t518 * 2)) & 128;
            if(__eflags != 0) {
L175:
                 *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
                _t558 =  *((intOrPtr*)(__ebp + 8));
                L00401DA6(__eflags);
                 *((intOrPtr*)(__ebp + -451)) = _t518 & 4294967295;
            }
L176:
            _push( *((intOrPtr*)(4240544)));
            _push(__ebp + -452);
            _t494 = __ebp + -460;
            _push(_t494);
            L00404509(_t494);
            __esp = __esp + 12;
             *((intOrPtr*)(_t541)) = _t494 & 4294967295;
            _t541 = _t541 + 1 + 1;
        }
L199:
         *((intOrPtr*)(__ebp + -432)) = _t541;
    }
    goto L161;
L201:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) - 1;
    __eflags = _t494 - 255;
    if(_t494 != 255) {
L202:
        _push( *((intOrPtr*)(__ebp + 8)));
        _push(_t494);
        L00404474();
        _pop(__ecx);
        _pop(__ecx);
    }
    goto L203;
L203:
    __eflags = _t575 - _t541;
    if(_t575 == _t541) {
        goto L300;
    } else {
        goto L204;
    }
L204:
    __eflags =  *((char*)(__ebp + -398));
    if( *((char*)(__ebp + -398)) == 0) {
L205:
         *((intOrPtr*)(__ebp + -440)) =  *((intOrPtr*)(__ebp + -440)) + 1;
        __eflags =  *((intOrPtr*)(__ebp + -448)) - 99;
        if( *((intOrPtr*)(__ebp + -448)) != 99) {
L206:
            _t494 =  *((intOrPtr*)(__ebp + -432));
            __eflags =  *((char*)(__ebp + -406));
            if( *((char*)(__ebp + -406)) == 0) {
L208:
                 *((char*)(_t494)) = 0;
            } else {
L207:
                 *((short*)(_t494)) =  *((short*)(_t494)) & 0;
            }
        }
    }
    goto L287;
L124:
    _t494 = _t564 - 112;
    if(__eflags == 0) {
        goto L209;
    } else {
        goto L125;
    }
L125:
    _t494 = _t494 - 3;
    if(__eflags == 0) {
        goto L122;
    } else {
        goto L126;
    }
L126:
    _t494 = _t494 - 1 - 1;
    if(__eflags == 0) {
        goto L210;
    } else {
        goto L127;
    }
L127:
    _t494 = _t494 - 3;
    if(__eflags == 0) {
        goto L74;
    } else {
        goto L128;
    }
L128:
    _t494 = _t494 - 3;
    if(__eflags == 0) {
        goto L133;
    } else {
        goto L129;
    }
L133:
    __eflags =  *((char*)(__ebp + -389));
    if( *((char*)(__ebp + -389)) > 0) {
L134:
         *((char*)(__ebp + -406)) = 1;
    }
L135:
    _t568 =  *((intOrPtr*)(__ebp + 12)) + 1;
     *((intOrPtr*)(__ebp + 12)) = _t568;
     *((intOrPtr*)(__ebp + -464)) = _t568;
    __eflags =  *((char*)(_t568)) - 94;
    if( *((char*)(_t568)) == 94) {
L136:
        _t568 = _t568 + 1;
         *((intOrPtr*)(__ebp + -464)) = _t568;
         *((char*)(__ebp + -417)) = 255;
    }
L137:
    _t544 =  *((intOrPtr*)(__ebp + -444));
    __eflags = _t544;
    if(_t544 == 0) {
L138:
         *((intOrPtr*)(__ebp - 4)) =  *((intOrPtr*)(__ebp - 4)) & _t544;
        _push(32);
        _pop(__eax);
        L00403D30(_t494, _t546, __esp);
         *((intOrPtr*)(__ebp - 24)) = __esp;
        _t544 = __esp;
         *((intOrPtr*)(__ebp + -444)) = _t544;
         *((intOrPtr*)(__ebp - 4)) =  *((intOrPtr*)(__ebp - 4)) | 255;
    }
L139:
    _push(32);
    _push(0);
    _push(_t544);
    L004045E0(__esp);
    __esp = __esp + 12;
    __eflags =  *((intOrPtr*)(__ebp + -448)) - 123;
    if( *((intOrPtr*)(__ebp + -448)) != 123) {
        goto L153;
    } else {
        goto L140;
    }
L140:
    __eflags =  *((char*)(_t568)) - 93;
    if( *((char*)(_t568)) != 93) {
        goto L153;
    } else {
        goto L141;
    }
L141:
    _t568 = _t568 + 1;
     *((char*)(_t544 + 11)) = 32;
    goto L154;
L154:
    __eflags = (_t494 & 4294967295) - 93;
    if((_t494 & 4294967295) != 93) {
        goto L142;
    } else {
        goto L155;
    }
L155:
    __eflags = _t494 & 4294967295;
    if((_t494 & 4294967295) == 0) {
        goto L300;
    } else {
        goto L156;
    }
L156:
    _t541 =  *((intOrPtr*)(__ebp + -432));
    __eflags =  *((intOrPtr*)(__ebp + -448)) - 123;
    if( *((intOrPtr*)(__ebp + -448)) == 123) {
L157:
         *((intOrPtr*)(__ebp + 12)) = _t568;
    }
L158:
    _t564 =  *((intOrPtr*)(__ebp + -448));
    goto L159;
L142:
    _t568 = _t568 + 1;
    __eflags = (_t494 & 4294967295) - 45;
    if((_t494 & 4294967295) != 45) {
        goto L152;
    } else {
        goto L143;
    }
L143:
    __eflags = _t558 & 4294967295;
    if((_t558 & 4294967295) == 0) {
        goto L152;
    } else {
        goto L144;
    }
L144:
    __eflags = (_t546 & 4294967295) - 93;
    if((_t546 & 4294967295) == 93) {
        goto L152;
    } else {
        goto L145;
    }
L145:
    _t568 = _t568 + 1;
    __eflags = (_t558 & 4294967295) - (_t546 & 4294967295);
    if((_t558 & 4294967295) >= (_t546 & 4294967295)) {
L147:
    } else {
L146:
    }
L148:
    __eflags = (_t558 & 4294967295) - (_t494 & 4294967295);
    if(__eflags > 0) {
        goto L151;
    } else {
        goto L149;
    }
L149:
    _t576 = _t558 & 4294967295 & ;
     *((intOrPtr*)(__ebp + -468)) = _t494 & 4294967295 & ;
    goto L150;
L150:
    _t494 = (_t576 >> 3) + _t544;
    _t546 = _t576 & 7;
     *((intOrPtr*)(_t494)) =  *((intOrPtr*)(_t494)) | _t558 & 4294967295;
    _t576 = _t576 + 1;
     *((intOrPtr*)(__ebp + -468)) =  *((intOrPtr*)(__ebp + -468)) - 1;
    if(__eflags != 0) {
        goto L150;
    } else {
        goto L151;
    }
L151:
    goto L154;
L152:
     *((intOrPtr*)(__ebp + -408)) = _t494 & 4294967295;
    _t554 = _t494 & 4294967295 & ;
    _t494 = (_t554 >> 3) + _t544;
    _t546 = _t554 & 7;
     *((intOrPtr*)(_t494)) =  *((intOrPtr*)(_t494)) | _t558 & 4294967295;
    goto L153;
L153:
    goto L154;
L209:
     *((char*)(__ebp + -397)) = 1;
    goto L210;
L60:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 =  *((intOrPtr*)(__ebp + 8));
    L00401DA6(__eflags);
     *((intOrPtr*)(__ebp + -404)) = _t494;
    goto L61;
L20:
    __eflags = _t540 - 78;
    if(__eflags > 0) {
        goto L40;
    } else {
        goto L21;
    }
L21:
    if(__eflags == 0) {
        goto L47;
    } else {
        goto L22;
    }
L22:
    __eflags = _t540 - 42;
    if(_t540 == 42) {
L39:
         *((char*)(__ebp + -398)) =  *((char*)(__ebp + -398)) + 1;
        goto L47;
    } else {
        goto L23;
    }
L23:
    __eflags = _t540 - 70;
    if(_t540 == 70) {
        goto L47;
    } else {
        goto L24;
    }
L24:
    __eflags = _t540 - 73;
    if(_t540 == 73) {
        goto L27;
    } else {
        goto L25;
    }
L25:
    __eflags = _t540 - 76;
    if(_t540 != 76) {
        goto L43;
    } else {
L26:
         *((char*)(__ebp + -397)) =  *((char*)(__ebp + -397)) + 1;
        goto L47;
    }
L43:
     *((char*)(__ebp + -381)) =  *((char*)(__ebp + -381)) + 1;
    goto L47;
L27:
    __eflags = (_t546 & 4294967295) - 54;
    if((_t546 & 4294967295) != 54) {
        goto L30;
    } else {
        goto L28;
    }
L28:
    _t494 = _t572 + 2;
    __eflags =  *((char*)(_t494)) - 52;
    if( *((char*)(_t494)) != 52) {
        goto L30;
    } else {
L29:
        _t572 = _t494;
         *((intOrPtr*)(__ebp + -456)) =  *((intOrPtr*)(__ebp + -456)) + 1;
         *((intOrPtr*)(__ebp + -428)) =  *((intOrPtr*)(__ebp + -428)) & 0;
         *((intOrPtr*)(__ebp + -424)) =  *((intOrPtr*)(__ebp + -424)) & 0;
        goto L47;
    }
L30:
    __eflags = (_t546 & 4294967295) - 51;
    if((_t546 & 4294967295) != 51) {
        goto L33;
    } else {
        goto L31;
    }
L31:
    _t494 = _t572 + 2;
    __eflags =  *((char*)(_t494)) - 50;
    if( *((char*)(_t494)) != 50) {
        goto L33;
    } else {
L32:
        _t572 = _t494;
        goto L47;
    }
L33:
    __eflags = (_t546 & 4294967295) - 100;
    if((_t546 & 4294967295) == 100) {
        goto L47;
    } else {
        goto L34;
    }
L34:
    __eflags = (_t546 & 4294967295) - 105;
    if((_t546 & 4294967295) == 105) {
        goto L47;
    } else {
        goto L35;
    }
L35:
    __eflags = (_t546 & 4294967295) - 111;
    if((_t546 & 4294967295) == 111) {
        goto L47;
    } else {
        goto L36;
    }
L36:
    __eflags = (_t546 & 4294967295) - 120;
    if((_t546 & 4294967295) == 120) {
        goto L47;
    } else {
        goto L37;
    }
L37:
    __eflags = (_t546 & 4294967295) - 88;
    if((_t546 & 4294967295) != 88) {
        goto L43;
    } else {
L38:
        goto L47;
    }
L40:
    __eflags = _t540 - 104;
    if(_t540 == 104) {
L46:
         *((char*)(__ebp + -397)) =  *((char*)(__ebp + -397)) - 1;
         *((char*)(__ebp + -389)) =  *((char*)(__ebp + -389)) - 1;
        goto L47;
    } else {
        goto L41;
    }
L41:
    __eflags = _t540 - 108;
    if(_t540 == 108) {
L44:
         *((char*)(__ebp + -397)) =  *((char*)(__ebp + -397)) + 1;
        goto L45;
    } else {
        goto L42;
    }
L45:
     *((char*)(__ebp + -389)) =  *((char*)(__ebp + -389)) + 1;
    goto L47;
L42:
    __eflags = _t540 - 119;
    if(_t540 == 119) {
        goto L45;
    } else {
        goto L43;
    }
L288:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    L00401DA6(__eflags);
    _t539 = _t498;
     *((intOrPtr*)(__ebp + -404)) = _t539;
    _t494 =  *((char*)(_t572)) & 255;
    _t571 = _t572 + 1;
     *((intOrPtr*)(__ebp + 12)) = _t571;
    __eflags = ( *((char*)(_t572)) & 255) - _t539;
    if(( *((char*)(_t572)) & 255) != _t539) {
        goto L293;
    } else {
        goto L289;
    }
L289:
    _t494 = _t539 & 4294967295 & ;
    _t546 =  *((intOrPtr*)(4240528));
    __eflags =  *((char*)(_t546 + 1 + _t494 * 2)) & 128;
    if(__eflags == 0) {
        goto L297;
    } else {
        goto L290;
    }
L290:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) + 1;
    _t558 =  *((intOrPtr*)(__ebp + 8));
    L00401DA6(__eflags);
    _t546 =  *((char*)(_t571)) & 255;
    _t571 = _t571 + 1;
     *((intOrPtr*)(__ebp + 12)) = _t571;
    __eflags = _t546 - _t494;
    if(_t546 == _t494) {
        goto L296;
    } else {
        goto L291;
    }
L291:
    __eflags = _t494 - 255;
    if(_t494 != 255) {
L292:
        _push( *((intOrPtr*)(__ebp + 8)));
        _push(_t494);
        L00404474();
        _pop(__ecx);
        _pop(__ecx);
    }
    goto L293;
L293:
    __eflags = _t539 - 255;
    goto L294;
L296:
     *((intOrPtr*)(__ebp + -388)) =  *((intOrPtr*)(__ebp + -388)) - 1;
    goto L297;
}

L0040307F(_unknown_ __eax, _unknown_ __esp, _unknown_ _a4)
{
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ _t4;
    struct HINSTANCE__* _t5;
    intOrPtr* _t6;
    _unknown_ _t7;
    intOrPtr* _t9;
    _Unknown_base(*)()* _t10;
    _unknown_ _t11;
    intOrPtr* _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    intOrPtr* _t16;

    __esp = __esp;
    _t5 = GetModuleHandleA("mscoree.dll");
    if(_t5 != 0) {
        _t10 = GetProcAddress(_t5, "CorExitProcess");
        if(_t10 != 0) {
            _push( *(__esp + 4));
             *_t10();
        }
    }
    ExitProcess( *(__esp + 4));
    asm("int3 ");
    _t6 =  *4239532;
    if(_t6 != 0) {
        _push( *(__esp + 4));
         *_t6();
        _pop(__ecx);
    }
    _push(_t15);
    _push(_t13);
    _t12 = 4239372;
    _t14 = 4239388;
    _t7 = 0;
    _t16 = _t12;
    if(_t12 >= _t14) {
L12:
        _push(4209441);
        L004053B0(_t7);
        _t16 = 4239360;
        _t14 = 4239368;
        _pop(__ecx);
        if(_t16 < _t14) {
            while(1) {
L13:
                _t9 =  *_t16;
                if(_t9 != 0) {
                     *_t9();
                }
                _t16 = _t16 + 4;
                if(_t16 >= _t14) {
                    break;
                }
            }
        }
        _t7 = 0;
L17:
        _pop(__edi);
        _pop(__esi);
        return;
L18:
    }
    while(_t7 == 0) {
        _t12 =  *_t16;
        if(_t12 != 0) {
             *_t12();
        }
        _t16 = _t16 + 4;
        if(_t16 < _t14) {
            continue;
        } else {
            if(_t7 == 0) {
                goto L12;
            }
        }
        goto L17;
    }
}

L004030AF(intOrPtr _a4)
{
    _unknown_ __edi;
    _unknown_ __esi;
    intOrPtr* _t2;
    _unknown_ _t3;
    intOrPtr* _t5;
    _unknown_ _t6;
    intOrPtr* _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    intOrPtr* _t11;

    _t2 =  *4239532;
    if(_t2 != 0) {
        _push(_a4);
         *_t2();
        _pop(__ecx);
    }
    _push(_t10);
    _push(_t8);
    _t7 = 4239372;
    _t9 = 4239388;
    _t3 = 0;
    _t11 = _t7;
    if(_t7 >= _t9) {
L8:
        _push(4209441);
        L004053B0(_t3);
        _t11 = 4239360;
        _t9 = 4239368;
        _pop(__ecx);
        if(_t11 < _t9) {
            while(1) {
L9:
                _t5 =  *_t11;
                if(_t5 != 0) {
                     *_t5();
                }
                _t11 = _t11 + 4;
                if(_t11 >= _t9) {
                    break;
                }
            }
        }
        _t3 = 0;
L13:
        _pop(__edi);
        _pop(__esi);
        return;
L14:
    }
    while(_t3 == 0) {
        _t7 =  *_t11;
        if(_t7 != 0) {
             *_t7();
        }
        _t11 = _t11 + 4;
        if(_t11 < _t9) {
            continue;
        } else {
            if(_t3 == 0) {
                goto L8;
            }
        }
        goto L13;
    }
}

L00403119(intOrPtr _a4, intOrPtr _a8, intOrPtr _a12)
{
    _unknown_ __ebp;
    signed int _t8;
    intOrPtr* _t9;
    _unknown_ _t10;
    intOrPtr* _t11;
    intOrPtr* _t13;
    intOrPtr* _t14;
    _unknown_ _t17;
    intOrPtr* _t18;
    intOrPtr* _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    intOrPtr _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t28;

    _push(_t20);
    _t22 = 1;
    _push(_t17);
    if( *4242076 == _t22) {
        _push(_a4);
        _push(GetCurrentProcess());
        _t8 = TerminateProcess();
    }
     *4242072 = _t22;
     *4242068 = _t8 & 4294967295;
    if(_a8 != 0) {
L13:
        _t9 = 4239404;
        _t18 = _t9;
        if(_t9 >= 4239408) {
            goto L17;
        }
    } else {
        __ecx =  *4243432;
        if(__ecx == 0) {
L9:
            _t19 = 4239392;
            if(4239392 >= 4239400) {
                goto L13;
            } else {
                goto L10;
            }
            while(1) {
L10:
                _t11 =  *_t19;
                if(_t11 != 0) {
                     *_t11();
                }
                _t19 = _t19 + 4;
                if(_t19 >= 4239400) {
                    break;
                }
            }
            goto L13;
            while(1) {
L14:
                _t9 =  *_t18;
                if(_t9 != 0) {
                     *_t9();
                }
                _t18 = _t18 + 4;
                if(_t18 >= 4239408) {
                    break;
                }
            }
L17:
            _pop(__edi);
            _pop(__esi);
            if(_a12 != 0) {
                return ;
            }
            _push(_a4);
             *4242076 = 1;
            L0040307F(_t9, __esp);
            return;
        }
        _t13 =  *4243428 - 4;
        _t28 = _t13 - __ecx;
        while(1) {
             *4243428 = _t13;
            if(_t28 < 0) {
                break;
            }
            _t14 =  *_t13;
            if(_t14 != 0) {
                 *_t14();
            }
            _t13 =  *4243428 - 4;
        }
        goto L9;
    }
    goto L14;
}

L004031DA(_unknown_ __esp, intOrPtr _a4)
{
    __esp = __esp;
    L00403119(_a4, 0, 0);
    return;
}

L004031EB(_unknown_ __esp, intOrPtr _a4)
{
    __esp = __esp;
    L00403119(_a4, 1, 0);
    return;
}

L004031FC()
{
    L00403119(0, 0, 1);
    return;
}

L0040321A(_unknown_ __eax, _unknown_ __edx)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t21;
    int _t23;
    _unknown_ _t25;
    _unknown_ _t30;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t42;
    _unknown_ _t46;
    _unknown_ _t47;
    intOrPtr _t49;
    _unknown_ _t51;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t55;
    signed int _t57;
    _unknown_ _t58;

    _t58 = __esp + -140;
    __esp = __esp - 268;
    _t49 =  *((intOrPtr*)(_t58 + 148));
    _push(_t47);
    _push(_t55);
     *((intOrPtr*)(_t58 + 136)) =  *4240536;
    _push(_t53);
    _t23 = 0;
    while(_t49 !=  *((intOrPtr*)(4240224 + _t23 * 8))) {
        _t23 = _t23 + 1;
        if(_t23 < 19) {
            continue;
        }
        _t57 = _t23 << 3;
        if(_t49 !=  *((intOrPtr*)(_t57 + 4240224))) {
L14:
            __esp = _t58 + -140;
            L004041A2( *((intOrPtr*)(_t58 + 136)));
            _pop(__edi);
            _pop(__esi);
            _pop(__ebx);
            __esp = _t58 + 140;
            return;
        }
        _t23 =  *4241968;
        if(_t23 == 1 || _t23 == 0 &&  *4239548 == 1) {
            _push(0);
            _push(_t58 + 148);
            _t57 = _t57 + 4240228;
            _push( *_t57);
            _t25 = L00404080(_t58 + 148, __esp);
            _pop(__ecx);
            _push(_t25);
            _push( *_t57);
            _push(GetStdHandle(244));
            _t23 = WriteFile();
        } else {
            if(_t49 == 252) {
                goto L14;
            }
            _push(260);
            _push(_t58 - 128);
            _push(0);
             *((intOrPtr*)(_t58 + 132)) = 0;
            if(GetModuleFileNameA() == 0) {
                _push("<program name unknown>");
                _push(_t58 - 128);
                L00404F20(0, __esp);
                _pop(__ecx);
                _pop(__ecx);
            }
            _t53 = _t58 - 128;
            _push(_t53);
            _t30 = L00404080(_t53, __esp);
            _t31 = _t30 + 1;
            _pop(__ecx);
            if(_t30 + 1 > 60) {
                _push(_t53);
                _t42 = L00404080(_t53, __esp);
                _push(3);
                _t53 = _t42 + _t58 - 128 - 59;
                _push("...");
                _push(_t53);
                _t31 = L004054F0(_t58 - 128 - 59, __esp);
                __esp = __esp + 16;
            }
            _push(_t53);
            _t32 = L00404080(_t31, __esp);
            _push( *(_t57 + 4240228));
            _t33 = L00404080(_t32, __esp);
            _pop(__ecx);
            _pop(__ecx);
            L00403D30(_t32 + _t33 + 28 + 3 & 252, _t49, __esp);
            _t47 = __esp;
            _push("Runtime Error!\n\nProgram: ");
            _push(_t47);
            _t37 = L00404F20(0, __esp);
            _push(_t53);
            _push(_t47);
            _t38 = L00404F30(_t37, __esp);
            _push("\n\n");
            _push(_t47);
            _t39 = L00404F30(_t38, __esp);
            _push( *(_t57 + 4240228));
            _push(_t47);
            _t40 = L00404F30(_t39, __esp);
            _push(73744);
            _push("Microsoft Visual C++ Runtime Library");
            _push(_t47);
            _t23 = L004053EA(_t40);
            __esp = __esp + 44;
        }
        goto L14;
    }
}

L00403391()
{
    intOrPtr _t1;
    intOrPtr* _t2;

    _t1 =  *4241968;
    if(_t1 != 1) {
        if(_t1 != 0) {
            return ;
        }
        if( *4239548 != 1) {
            return ;
        }
    }
    _push(252);
    L0040321A(_t1, __edx);
    _t2 =  *4242080;
    _pop(__ecx);
    if(_t2 != 0) {
         *_t2();
    }
    _push(255);
    L0040321A(_t2, __edx);
    _pop(__ecx);
    return;
}

L0040353B(signed int __eax)
{
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t10;
    _unknown_ _t11;
    _unknown_ _t13;
    _unknown_ _t14;
    intOrPtr _t15;
    _unknown_ _t16;
    _unknown_ _t17;

    _t10 = __eax;
    __ebx = 0;
    if( *4243436 == 0) {
        _t10 = L004059DE();
    }
    _t15 =  *4241960;
    _t13 = 0;
    if(_t15 == __ebx) {
        return _t10 | 255;
    }
    while((_t10 & 4294967295) != (__ebx & 4294967295)) {
        if((_t10 & 4294967295) != 61) {
            _t13 = _t13 + 1;
        }
        _push(_t15);
        _t10 = L00404080(_t10, __esp);
        _pop(__ecx);
        _t15 = _t15 + _t10 + 1;
    }
}

L00403602(signed int* __eax, signed int __ecx, signed int* __esi, signed int _a4, intOrPtr* _a8)
{
    signed int _v8;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __ebp;
    signed int* _t57;
    signed int _t58;
    _unknown_ _t59;
    intOrPtr* _t60;
    signed int _t61;
    _unknown_ _t62;
    _unknown_ _t63;
    signed int _t64;
    _unknown_ _t65;
    signed int _t66;
    _unknown_ _t67;
    _unknown_ _t68;
    _unknown_ _t69;
    signed int _t70;

    __esi = __esi;
    _t64 = __ecx;
    _t57 = __eax;
    _push(_t64);
    _push(_t59);
    _t60 = _a8;
    _t66 = 0;
    _push(_t69);
     *__esi = 0;
    _t70 = _t64;
     *_t60 = 1;
    if(_a4 != 0) {
        _t64 = _a4;
        _a4 = _a4 + 4;
         *_t64 = _t70;
    }
    goto L2;
    do {
L2:
        if( *_t57 != 34) {
             *__esi =  *__esi + 1;
            __eflags = _t70;
            if(_t70 != 0) {
                 *_t70 = _t64 & 4294967295;
                _t70 = _t70 + 1;
            }
            _t61 = _t64 & 4294967295 & ;
            _t57 =  &(_t57[0]);
            __eflags =  *(_t61 + 4242593) & 4;
            if(( *(_t61 + 4242593) & 4) != 0) {
                 *__esi =  *__esi + 1;
                __eflags = _t70;
                if(_t70 != 0) {
                     *_t70 = _t61 & 4294967295;
                    _t70 = _t70 + 1;
                }
                _t57 =  &(_t57[0]);
            }
            __eflags = _t64 & 4294967295;
            _t60 = _a8;
            if((_t64 & 4294967295) == 0) {
                _t57 = _t57 - 1;
L16:
                _v8 = _v8 & 0;
                while( *_t57 != 0) {
                    while((_t64 & 4294967295) == 32 || (_t64 & 4294967295) == 9) {
                        _t57 =  &(_t57[0]);
                    }
                }
            } else {
                goto L11;
            }
            __eflags =  *_t57;
            if( *_t57 == 0) {
                _t58 = _a4;
                __eflags = _t58;
                if(_t58 != 0) {
                     *_t58 =  *_t58 & 0;
                }
                 *_t60 =  *_t60 + 1;
                _pop(__edi);
                _pop(__ebx);
                return;
            }
            __eflags = _a4;
            if(_a4 != 0) {
                _t64 = _a4;
                _a4 = _a4 + 4;
                 *_t64 = _t70;
            }
             *_t60 =  *_t60 + 1;
            while(1) {
                _t63 = 1;
                _t67 = 0;
                goto L28;
            }
        } else {
            _t64 = 0;
            _t57 =  &(_t57[0]);
            _t66 = 0;
        }
L11:
    } while(_t66 != 0 || (_t64 & 4294967295) != 32 && (_t64 & 4294967295) != 9);
    if(_t70 != 0) {
         *((char*)(_t70 - 1)) = 0;
    }
    goto L16;
}

L0040376E()
{
    signed int _v8;
    char _v12;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __ebp;
    _unknown_ _t9;
    char* _t10;
    signed int _t14;
    signed int _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    signed int* _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t26;
    _unknown_ _t27;
    signed int _t28;
    _unknown_ _t29;
    _unknown_ _t30;

    _push(_t23);
    _push(_t23);
    _push(_t21);
    _push(_t29);
    _push(_t26);
    if( *4243436 == 0) {
        L004059DE();
    }
    _push(260);
    _push(4242088);
    _push(0);
     *4242348 = 0;
    GetModuleFileNameA();
    _t10 =  *4247556;
     *4242060 = 4242088;
    if(_t10 == 0) {
L4:
        _t22 = 4242088;
    } else {
        _t22 = _t10;
        if( *_t10 == 0) {
            goto L4;
        }
L9:
    }
    _push( &_v8);
    _push(0);
    L00403602(_t22, 0,  &_v12);
    _t14 = _v12 + (_v8 << 2);
    _push(_t14);
    L00403DDF();
    _t28 = _t14;
    __esp = __esp + 12;
    if(_t28 != 0) {
        _push( &_v8);
        _push(_t28);
        L00403602(_t22,  ?_? ( &_v12) + _t28,  &_v12);
        _pop(__ecx);
         *4242032 = _v8 - 1;
        _pop(__ecx);
         *4242036 = _t28;
        _t19 = 0;
    } else {
        _t19 = _t14 | 255;
    }
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return _t19;
    goto L9;
}

L00403810(_unknown_ __esp)
{
    intOrPtr _v4;
    intOrPtr _v36;
    intOrPtr _v40;
    signed int _v72;
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    WCHAR* _t13;
    _unknown_ _t14;
    _unknown_ _t16;
    _unknown_ _t17;
    WCHAR* _t18;
    intOrPtr _t21;
    _unknown_ _t22;
    intOrPtr* _t23;
    WCHAR* _t26;
    CHAR* _t27;
    WCHAR* _t28;
    intOrPtr _t30;

    __esp = __esp;
    _t13 =  *4242352;
    _t23 = __imp__GetEnvironmentStringsW;
    __ebx = 0;
    _t26 = 0;
    _push(2);
    _pop(__ebp);
    if(_t13 != 0) {
L6:
        if(_t13 != 1) {
            if(_t13 != _t28) {
                if(_t13 != __ebx) {
                    return ;
                }
            }
            GetEnvironmentStrings();
            _t27 = _t13;
            if(_t27 == __ebx) {
                return ;
            }
            if( *_t27 == (__ebx & 4294967295)) {
L25:
                _t16 = _t13 - _t27 + 1;
                _t29 = _t16;
                _push(_t16);
                L00403DDF();
                _t24 = _t16;
                _pop(__ecx);
                if(_t16 != __ebx) {
                    L00405A00(_t24, _t27, _t29);
                } else {
                    _t24 = 0;
                }
                __eax = FreeEnvironmentStringsA(_t27);
                return;
            } else {
                goto L23;
            }
            do {
                while(1) {
L23:
                    _t13 =  &(_t13[0]);
                    if( *_t13 == (__ebx & 4294967295)) {
                        break;
                    }
                }
                _t13 =  &(_t13[0]);
            } while( *_t13 != (__ebx & 4294967295));
            goto L25;
        }
        goto L7;
    }
     *_t23();
    _t26 = _t13;
    if(_t26 == 0) {
        GetLastError();
        if(_t13 != 120) {
            _t13 =  *4242352;
        } else {
            _t13 = _t28;
             *4242352 = _t13;
        }
        goto L6;
    } else {
         *4242352 = 1;
    }
L7:
    if(_t26 == __ebx) {
         *_t23();
        _t26 = _t13;
        if(_t26 == __ebx) {
            return ;
        }
    }
    _t18 = _t26;
    if( *_t26 == (__ebx & 4294967295)) {
L12:
        _push(__ebx);
        _push(__ebx);
        _push(__ebx);
        _push(__ebx);
        _t21 = 1 + (_t18 - _t26 >> 1);
        _push(_t21);
        _push(_t26);
        _push(__ebx);
        _push(__ebx);
        _v4 = _t21;
         *WideCharToMultiByte();
        _t30 = _t21;
        if(_t30 != __ebx) {
            _push(_t30);
            L00403DDF();
            _pop(__ecx);
            _v40 = _t21;
            if(_t21 != __ebx) {
                 *WideCharToMultiByte(__ebx, __ebx, _t26, _v36, _t21, _t30, __ebx, __ebx);
                if(_t21 == 0) {
                    _push(_v72);
                    L0040403C(_t21);
                    _pop(__ecx);
                    _v72 = __ebx;
                }
                __ebx = _v72;
            }
        }
        __eax = FreeEnvironmentStringsW(_t26);
        return;
    } else {
        goto L10;
    }
    do {
        while(1) {
L10:
            _t18 = _t18 + _t28;
            if( *_t18 == (__ebx & 4294967295)) {
                break;
            }
        }
        _t18 = _t18 + _t28;
    } while( *_t18 != (__ebx & 4294967295));
    goto L12;
}

L00403932(signed int __eax)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t37;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t41;
    _unknown_ _t46;
    _unknown_ _t47;
    _unknown_ _t48;
    _unknown_ _t49;
    _unknown_ _t50;
    _unknown_ _t54;
    _unknown_ _t57;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t60;
    _unknown_ _t61;
    _unknown_ _t66;
    _unknown_ _t67;
    _unknown_ _t68;
    _unknown_ _t69;
    _unknown_ _t70;
    _unknown_ _t71;
    _unknown_ _t72;

    _t37 = __eax;
    _push(256);
    L00403DDF();
    _pop(__ecx);
    if(_t37 == 0) {
        return _t37 | 255;
    }
     *4243168 = _t37;
     *4243144 = 32;
    _t61 = _t37 + 256;
    while(_t37 < _t61) {
    }
}

L00403ADD()
{
    intOrPtr* _t10;

    _push(12);
    _push(4232680);
    L00403BD0(__ebx, __edi, __esi);
     *((intOrPtr*)(__ebp - 28)) = 4234748;
    while( *((intOrPtr*)(__ebp - 28)) < 4234748) {
         *(__ebp - 4) =  *(__ebp - 4) & 0;
        _t10 =  *((intOrPtr*)( *((intOrPtr*)(__ebp - 28))));
        if(_t10 != 0) {
             *_t10();
        }
         *(__ebp - 4) =  *(__ebp - 4) | 255;
         *((intOrPtr*)(__ebp - 28)) =  *((intOrPtr*)(__ebp - 28)) + 4;
    }
}

L00403B65()
{
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;

    if( *4242012 == 2) {
        if( *4242024 >= 5) {
            return ;
        }
    }
    _push(3);
    _pop(__eax);
    return;
}

L00403B7F(_unknown_ __eax, _unknown_ _a4)
{
    _unknown_ _t3;
    _unknown_ _t4;
    void* _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t9;
    _unknown_ _t10;

    _t5 = HeapCreate(0, 4096, 0);
     *4243136 = 0;
    if(0 == 0) {
        return 0;
    } else {
        L00403B65();
         *4243140 = _t5;
        if(_t5 != 3) {
            return 1;
        } else {
            _push(1016);
            _t9 = L00405D3D(_t5, __esp);
            _pop(__ecx);
            if(_t9 != 0) {
                return 1;
            } else {
                HeapDestroy( *4243136);
                return 0;
            }
        }
    }
}

L00403BD0(_unknown_ __ebx, _unknown_ __edi, _unknown_ __esi)
{
    intOrPtr _t15;
    _unknown_ _t16;

    __esi = __esi;
    __edi = __edi;
    __ebx = __ebx;
    _push(4209700);
    _push( *fs:0x0]);
     *((intOrPtr*)(__esp + 16)) = _t15;
    _t16 = __esp + 16;
    __esp = __esp -  *((intOrPtr*)(__esp + 16));
    _push(__ebx);
    _push(__esi);
    _push(__edi);
     *((intOrPtr*)(_t16 - 24)) = __esp;
    _push( *((intOrPtr*)(_t16 - 8)));
     *((intOrPtr*)(_t16 - 4)) = -1;
     *((intOrPtr*)(_t16 - 8)) =  *((intOrPtr*)(_t16 - 4));
     *fs:0x0] = _t16 - 16;
    return;
}

L00403C0B()
{
    __ecx =  *((intOrPtr*)(__ebp - 16));
     *fs:0x0] =  *((intOrPtr*)(__ebp - 16));
    _pop(__ecx);
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    _pop(__ebp);
    _push( *((intOrPtr*)(__ebp - 16)));
    return;
}

L00403D30(signed int __eax, _unknown_ __ecx, _unknown_ __esp, char _a4)
{
    signed int _t9;
    _unknown_ _t10;
    _unknown_ _t16;
    char* _t17;
    _unknown_ _t19;
    _unknown_ _t21;

    __esp = __esp;
    _t16 = __ecx;
    _t9 = __eax;
    if(_t9 >= 4096) {
        _push(_t16);
        _t17 =  &_a4;
        while(1) {
L3:
            _t17 = _t17 - 4096;
            _t9 = _t9 - 4096;
            if(_t9 < 4096) {
                break;
            }
        }
        _t10 = __esp;
        __esp = _t17 - _t9;
        _push( *((intOrPtr*)(_t10 + 4)));
        return;
L5:
    }
    asm("xchg esp, eax");
    _push( *((intOrPtr*)( ~_t9 + __esp + 4)));
    return;
    goto L5;
}

L00403D6D(_unknown_ __eax, long _a4)
{
    _unknown_ __esi;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    long _t5;

    _t2 = __eax;
    _t5 = _a4;
    if( *4243140 == 3 && _t5 <=  *4242564) {
        _push(_t5);
        _t4 = L00406564(_t2);
        _pop(__ecx);
        if(_t4 != 0) {
            return ;
        }
    }
    if(_t5 == 0) {
        _t5 = _t5 + 1;
    }
    if( *4243140 != 1) {
        _t5 = _t5 + 15 & 240;
    }
    HeapAlloc( *4243136, 0, _t5);
    return;
}

L00403DB3(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8)
{
    _unknown_ _t5;
    _unknown_ _t6;

    _t5 = __eax;
    if(_a4 > 224) {
        return 0;
    }
    while(1) {
        _push(_a4);
        L00403D6D(_t5);
        _pop(__ecx);
        if(_t5 != 0) {
            break;
        } else {
            if(_a8 == _t5) {
                return _t5;
            }
            _push(_a4);
            _t5 = L00406B77(__esp);
            _pop(__ecx);
            if(_t5 == 0) {
                return 0;
            }
            continue;
        }
    }
    return _t5;
}

L00403DDF(intOrPtr _a4)
{
    _unknown_ _t2;
    _unknown_ _t3;

    _push( *4242504);
    _push(_a4);
    L00403DB3(_t2);
    _pop(__ecx);
    _pop(__ecx);
    return;
}

L00403DF1(_unknown_ __esp, signed int _a4)
{
    signed int _t7;
    _unknown_ _t11;

    __esp = __esp;
    _t7 = _a4;
    if(_t7 <  *4243144) {
        return  *( *((intOrPtr*)(4243168 + (_t7 >> 5) * 4)) + 4 + (_t7 & 31) * 8) & 64;
    }
    return 0;
}

L00403E18(_unknown_ __esp, intOrPtr* _a4)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    signed int _t19;
    intOrPtr _t22;
    signed int _t23;
    _unknown_ _t25;
    _unknown_ _t27;
    _unknown_ _t28;
    intOrPtr* _t29;

    __esp = __esp;
    _push(_t28);
    _t29 = _a4;
    _t19 =  *(_t29 + 12);
    __ebx = 0;
    if((_t19 & 4294967295) != 2 || (_t19 & 4294967295 & 264) == 0) {
L8:
         *(_t29 + 4) =  *(_t29 + 4) & 0;
         *_t29 =  *((intOrPtr*)(_t29 + 8));
        _pop(__esi);
        return __ebx;
    } else {
        _t22 =  *((intOrPtr*)(_t29 + 8));
        _push(_t25);
        _t27 =  *_t29 - _t22;
        if(_t27 > 0) {
            _push(_t27);
            _push(_t22);
            _push( *((intOrPtr*)(_t29 + 16)));
            L00406B92();
            __esp = __esp + 12;
            if(_t22 != _t27) {
                 *(_t29 + 12) =  *(_t29 + 12) | 32;
                __ebx = 0xff;
            } else {
                _t23 =  *(_t29 + 12);
                if((_t23 & 4294967295) < 0) {
                     *(_t29 + 12) = _t23 & 253;
                }
            }
        }
        _pop(__edi);
        goto L8;
    }
}

L00403F26(signed int _a4, signed int _a8)
{
    signed int __ebx;
    _unknown_ __edi;
    signed int __esi;
    _unknown_ __ebp;
    signed int _t55;
    signed int _t56;
    signed int _t60;
    signed int _t63;
    _unknown_ _t64;
    _unknown_ _t65;
    signed int _t73;
    _unknown_ _t75;
    _unknown_ _t76;
    _unknown_ _t77;

    __esi = _a8;
    _t55 =  *(__esi + 12);
    __ebx =  *(__esi + 16);
    if((_t55 & 4294967295 & 130) == 0 || (_t55 & 4294967295 & 64) != 0) {
L24:
        _t56 = _t55 | 32;
         *(__esi + 12) = _t56;
        return _t56 | 255;
    } else {
        if((_t55 & 4294967295 & 1) == 0) {
L5:
             *(__esi + 4) =  *(__esi + 4) & 0;
            _a8 = _a8 & 0;
            _t60 =  *(__esi + 12) & 239 | 2;
             *(__esi + 12) = _t60;
            if((_t60 & 4294967295 & 268) != 0) {
L10:
                _push(_t75);
                if(( *(__esi + 12) & 264) == 0) {
L20:
                    _t77 = 1;
                    _push(_t77);
                    _t56 =  &_a4;
                    _push(_t56);
                    _push(__ebx);
                    L00406B92();
                    __esp = __esp + 12;
                    _a8 = _t56;
                    goto L21;
                }
                goto L11;
L21:
                _pop(__edi);
                if(_a8 == _t77) {
                    return _a4 & 255;
                }
                 *(__esi + 12) =  *(__esi + 12) | 32;
L25:
                return _t56 | 255;
            }
            goto L6;
L11:
            _t63 =  *(__esi + 8);
             *__esi = _t63 + 1;
            _t77 =  *__esi - _t63;
            _t73 =  *((intOrPtr*)(__esi + 24)) - 1;
             *(__esi + 4) = _t73;
            if(_t77 <= 0) {
                if(__ebx == 255) {
                    _t64 = 4240512;
                } else {
                    _t73 = __ebx & 31;
                    _t64 =  *((intOrPtr*)(4243168 + (__ebx >> 5) * 4)) + _t73 * 8;
                }
                if(( *(_t64 + 4) & 32) == 0) {
L19:
                    _t56 =  *(__esi + 8);
                     *_t56 = _t73 & 4294967295;
                    goto L21;
                } else {
                    _push(2);
                    _push(0);
                    _push(__ebx);
                    L00406DD9(_t64);
L18:
                    __esp = __esp + 12;
                    goto L19;
                }
                goto L20;
            }
            _push(_t77);
            _push(_t63);
            _push(__ebx);
            L00406B92();
            _a8 = _t63;
            goto L18;
        }
         *(__esi + 4) =  *(__esi + 4) & 0;
        if((_t55 & 4294967295 & 16) == 0) {
            goto L24;
        } else {
             *__esi =  *(__esi + 8);
             *(__esi + 12) = _t55 & 254;
            goto L5;
        }
        goto L25;
L6:
        if(__esi == 4239592 || __esi == 4239624) {
            _push(__ebx);
            _t60 = L00403DF1(__esp);
            _pop(__ecx);
            if(_t60 != 0) {
                goto L10;
            }
        }
L9:
        _push(__esi);
        L00406E65(_t60, __esp);
        _pop(__ecx);
        goto L10;
    }
}

L0040403C(_unknown_ __eax, intOrPtr _a4)
{
    intOrPtr __esi;
    _unknown_ _t2;
    _unknown_ _t3;

    _t2 = __eax;
    __esi = _a4;
    if(__esi == 0) {
        return ;
    }
    _push(__esi);
    if( *4243140 != 3) {
L4:
        _push(0);
        _push( *4243136);
        HeapFree();
        return;
    }
    L00405D85(__esp);
    _pop(__ecx);
    _push(__esi);
    if(_t2 == 0) {
        goto L4;
    }
    _push(_t2);
    L00405DB0();
    _pop(__ecx);
    _pop(__ecx);
    return;
    return;
    goto L6;
}

L00404080(signed int __eax, _unknown_ __esp, signed int _a4)
{
    char _v0;
    signed int _t27;
    signed int _t31;
    _unknown_ _t40;
    signed int _t41;
    _unknown_ _t46;

    __esp = __esp;
    _t27 = __eax;
    _t41 = _a4;
    if((_t41 & 3) == 0) {
        while(1) {
L4:
            _t41 = _t41 + 4;
            if((( *_t41 ^ 255 ^ 2130640639 +  *_t41) & -2130640640) != 0) {
                _t31 =  *(_t41 - 4);
                if((_t31 & 4294967295) == 0) {
                    return _t41 - 4 - _a4;
                }
                if((_t31 & 4294967295) == 0) {
                    return _t41 - 3 - _a4;
                }
                if((_t31 & 16711680) == 0) {
                    return _t41 - 2 - _a4;
                }
                if((_t31 & -16777216) == 0) {
                    return _t41 - 1 - _a4;
                }
            }
        }
    } else {
        goto L1;
    }
    while(1) {
L1:
        _t41 = _t41 + 1;
        if((_t27 & 4294967295) == 0) {
            break;
        }
        if((_t41 & 3) != 0) {
            continue;
        } else {
             &_v0 =  &_v0;
            goto L4;
        }
        break;
    }
    return _t41 - 1 - _a4;
}

L0040410B(signed int __ecx, signed int _a4, char _a8)
{
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t10;
    _unknown_ _t12;
    signed int _t13;
    _unknown_ _t15;
    _unknown_ _t16;

    _t13 = __ecx;
    _t10 = _a4;
    _push(_t15);
    if(_t10 != 0) {
        if( *4242516 != 0) {
            _push( &_a4);
            _push(0);
            _push( *4240544);
            _a4 = 0;
            _push(_t10);
            _push(1);
            _push( &_a8);
            _push(0);
            _push( *4242532);
            _t10 = WideCharToMultiByte();
            if(_t10 == 0 || _a4 != 0) {
L7:
                 *4242000 = 42;
                _t10 = _t10 | 255;
            }
            goto L8;
        }
        goto L3;
    }
    _t10 = 0;
L8:
    _pop(__esi);
    return;
L3:
    if((_t13 & 4294967295) > 255) {
        goto L7;
    }
     *_t10 = _t13 & 4294967295;
    _t10 = 1;
    goto L8;
}

L004041A2(_unknown_ __ecx)
{
L0:
    while(1) {
L0:
        __ecx = __ecx;
        if(__ecx ==  *4240536) {
            break;
        }
L4:
L1:
        _push(8);
        _push(4234000);
        L00403BD0(__ebx, __edi, __esi);
         *(__ebp - 4) =  *(__ebp - 4) & 0;
        _push(0);
        _push(1);
        L00406F0F();
        _pop(__ecx);
        _pop(__ecx);
L2:
         *(__ebp - 4) =  *(__ebp - 4) | 255;
        ExitProcess(3);
        asm("int3 ");
    }
    return;
}

L004041B0(_unknown_ __esp, _unknown_ __eflags, signed int _a4, unsigned int _a8, signed int _a12, unsigned int _a16)
{
    signed int __esi;
    unsigned int _t48;
    signed int _t49;
    signed int _t50;
    signed int _t52;
    signed int _t53;
    signed int _t63;
    signed int _t64;
    _unknown_ _t66;
    unsigned int _t67;
    _unknown_ _t71;
    signed int _t72;
    unsigned int _t74;
    _unknown_ _t75;
    _unknown_ _t76;
    _unknown_ _t78;
    _unknown_ _t80;
    _unknown_ _t81;
    _unknown_ _t82;
    _unknown_ _t83;
    _unknown_ _t84;

    __eflags = __eflags;
    __esp = __esp;
    _t48 = _a16;
    if(__eflags != 0) {
        _t67 = _t48;
        _t64 = _a12;
        _t74 = _a8;
        _t49 = _a4;
        while(1) {
L3:
            asm("rcr ebx, 1");
            _t74 = _t74 >> 1;
            asm("rcr eax, 1");
            _t67 = _t67 >> 1;
            if(__eflags == 0) {
                break;
            }
        }
        _t50 = _t49 / _t64;
        __esi = _t50;
        _t52 = _a12;
        _t53 = _t52 * __esi;
        _t78 = (_t52 * __esi >> 32) + _t50 * _a16;
        if(__eflags < 0) {
L8:
            __esi = __esi - 1;
            _t53 = _t53 - _a12;
            asm("sbb edx, [esp+0x14]");
        } else {
            __eflags = _t78 - _a8;
            if(__eflags > 0) {
                goto L8;
            } else {
                if(__eflags >= 0) {
                    __eflags = _t53 - _a4;
                    if(_t53 > _a4) {
                        goto L8;
                    }
                }
                goto L9;
L10:
                asm("sbb edx, [esp+0xc]");
                asm("sbb edx, 0x0");
                return __esi;
            }
        }
L9:
        goto L10;
    }
    _t72 = _a12;
    __esi = _a4 / _t72;
    _t63 = __esi;
    _t53 = _t63 * _a12;
    _t78 = (_t63 * _a12 >> 32) + _a8 / _t72 * _a12;
    goto L10;
}

L00404245(_unknown_ __esp, signed int _a4, signed int _a8)
{
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    void* _t3;
    _unknown_ _t6;
    _unknown_ _t7;
    void* _t8;
    signed int _t10;

    __esp = __esp;
    _t10 = _a4 * _a8;
    _push(_t7);
    __ebx = _t10;
    if(_t10 == 0) {
        _t10 = _t10 + 1;
    }
    goto L2;
    do {
L2:
        _t8 = 0;
        if(_t10 > 224) {
L7:
            if( *4242504 == 0) {
                goto L11;
            }
            goto L8;
        }
        if( *4243140 != 3) {
L6:
            _t8 = HeapAlloc( *4243136, 8, _t10);
            if(_t8 != 0) {
                goto L11;
            }
            goto L7;
        }
        _t10 = _t10 + 15 & 240;
        if(__ebx >  *4242564) {
            goto L6;
        }
        _push(__ebx);
        _t8 = L00406564(_t3);
        _pop(__ecx);
        if(_t8 != 0) {
            _push(__ebx);
            _push(0);
            _push(_t8);
            L004045E0(__esp);
            __esp = __esp + 12;
            goto L11;
        }
        goto L6;
L11:
        _t3 = _t8;
L12:
        _pop(__edi);
        return;
        goto L7;
L8:
        _push(_t10);
        _t3 = L00406B77(__esp);
        _pop(__ecx);
    } while(_t3 != 0);
    goto L12;
}

L00404318(_unknown_ __ecx, signed int _a4, signed short _a6, signed int _a8)
{
    signed int _v6;
    signed int _v7;
    char _v8;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t23;
    _unknown_ _t24;
    _unknown_ _t26;
    signed int _t27;
    signed int _t32;
    _unknown_ _t35;

    _push(__ecx);
    _t23 = _a4;
    if(_t23 + 1 > 256) {
        _t32 = _t23 >> 8;
        _push(_t35);
        _pop(__esi);
        if(( *( *4240528 + 1 + (_t32 & 4294967295 & ) * 2) & 128) == 0) {
            _v8 = _t23 & 4294967295;
            _v7 = 0;
            _t23 = 1;
        } else {
            _push(2);
            _v7 = _t23 & 4294967295;
            _v8 = _t32 & 4294967295;
            _v6 = 0;
            _pop(__eax);
        }
        _push(1);
        _push( *4242516);
        _push( *4242532);
        _push( &_a6);
        _push(_t23);
        _push( &_v8);
        _push(1);
        _t26 = L004070AD();
        __esp = __esp + 28;
        if(_t26 == 0) {
            return _t26;
        }
        _t27 = _a6 & 65535;
        return _t27 & _a8;
    }
    _t27 =  *( *4240528 + _t23 * 2) & 65535;
    return _t27 & _a8;
}

L00404396(_unknown_ __eax, _unknown_ __esp, signed char** _a4)
{
    signed char** __esi;
    _unknown_ _t51;
    signed int _t52;
    signed int _t54;
    signed int _t56;
    _unknown_ _t61;
    signed char* _t62;
    signed int _t64;
    signed int _t65;
    signed int _t66;
    _unknown_ _t68;
    _unknown_ _t69;

    __esp = __esp;
    __esi = _a4;
    _t52 = (__esi)[3];
    if((_t52 & 4294967295 & 131) == 0) {
        return _t52 | 255;
    }
    if((_t52 & 4294967295 & 64) != 0) {
        return _t52 | 255;
    }
    if((_t52 & 4294967295 & 2) != 0) {
        _t52 = _t52 | 32;
        (__esi)[3] = _t52;
        return _t52 | 255;
    }
    _t54 = _t52 | 1;
    (__esi)[3] = _t54;
    if((_t54 & 4294967295 & 268) != 0) {
         *__esi = (__esi)[2];
    } else {
        _push(__esi);
        L00406E65(_t54, __esp);
        _pop(__ecx);
    }
    _t56 = L00407267((__esi)[4], (__esi)[2], (__esi)[6]);
    (__esi)[1] = _t56;
    if(_t56 == 0 || _t56 == 255) {
        asm("sbb eax, eax");
        _t52 = ( ~_t56 & 16) + 16;
        (__esi)[3] = (__esi)[3] | _t52;
        (__esi)[1] = (__esi)[1] & 0;
        return _t52 | 255;
    } else {
        _t66 = (__esi)[3];
        if((_t66 & 4294967295 & 130) == 0) {
            _t65 = (__esi)[4];
            _push(_t68);
            if(_t65 != 255) {
                _t65 = _t65 & 31;
            }
            _pop(__edi);
            if((_t65 & 4294967295) == 130) {
                (__esi)[3] = _t66 | 8192;
            }
        }
    }
    if((__esi)[6] == 512) {
        _t64 = (__esi)[3];
        if((_t64 & 4294967295 & 8) != 0 && (_t64 & 4294967295 & 4) == 0) {
            (__esi)[6] = 4096;
        }
    }
    _t62 =  *__esi;
    (__esi)[1] = _t56 - 1;
     *__esi =  &(_t62[1]);
    return  *_t62 & 255;
    return _t52 | 255;
    goto L22;
}

L00404474(signed int _a4, signed int* _a8)
{
    signed int __ebx;
    signed int* __esi;
    signed int _t23;
    signed int _t24;
    signed int* _t25;

    __ebx = _a4;
    _push(__esi);
    if(__ebx == 255) {
L12:
        _t24 = _t23 | 255;
        goto L13;
    }
    __esi = _a8;
    _t23 = (__esi)[3];
    if((_t23 & 4294967295 & 1) != 0 || (_t23 & 4294967295) < 0 && (_t23 & 4294967295 & 2) == 0) {
        if((__esi)[2] == 0) {
            _push(__esi);
            L00406E65(_t23, __esp);
            _pop(__ecx);
        }
        _t23 =  *__esi;
        if(_t23 != (__esi)[2]) {
L9:
             *__esi =  *__esi - 1;
            _t25 =  *__esi;
            if(((__esi)[3] & 64) == 0) {
                 *_t25 = __ebx & 4294967295;
                goto L15;
            }
            goto L10;
L15:
            (__esi)[1] = (__esi)[1] + 1;
            (__esi)[3] = (__esi)[3] & 239 | 1;
            _t24 = __ebx & 255;
            goto L13;
        }
        if((__esi)[1] != 0) {
            goto L12;
        }
         *__esi = _t23 + 1;
        goto L9;
L10:
        if( *_t25 == (__ebx & 4294967295)) {
            goto L15;
        }
        _t23 =  &(_t25[0]);
         *__esi = _t23;
    }
    goto L12;
L13:
    _pop(__esi);
    return _t24;
}

L004044E0(_unknown_ __esp, signed int _a4)
{
    _unknown_ _t8;
    _unknown_ _t9;

    __esp = __esp;
    if( *4240544 <= 1) {
        return  *( *4240528 + _a4 * 2) & 255 & 8;
    }
    _push(8);
    _push(_a4);
    _t8 = L00404318(_t9);
    _pop(__ecx);
    _pop(__ecx);
    return _t8;
}

L00404509(signed int __eax, signed int _a4, char* _a8, intOrPtr _a12)
{
    signed int __ebx;
    char* __esi;
    _unknown_ __ebp;
    signed int _t28;
    _unknown_ _t29;
    signed int _t30;
    _unknown_ _t31;
    signed int _t32;
    _unknown_ _t33;
    int _t36;
    short* _t37;
    intOrPtr _t38;
    _unknown_ _t39;
    signed int _t40;

    _t28 = __eax;
    __esi = _a8;
    __ebx = 0;
    if(__esi == 0) {
        return 0;
    }
    if(_a12 == 0) {
        return 0;
    }
    if((_t28 & 4294967295) == 0) {
        _t37 = _a4;
        if(_t37 != 0) {
             *_t37 = 0;
        }
        return 0;
    }
    __eflags =  *4242516;
    if( *4242516 == 0) {
        _t40 = _a4;
        __eflags = _t40;
        if(_t40 == 0) {
            return 1;
        }
         *_t40 = _t28 & 4294967295;
        return 1;
    }
    _t38 =  *4240528;
    _t30 = _t28 & 4294967295 & ;
    __eflags =  *(_t38 + 1 + _t30 * 2) & 128;
    if(( *(_t38 + 1 + _t30 * 2) & 128) == 0) {
        __eflags = _a4;
        _t32 = MultiByteToWideChar( *4242532, 9, __esi, 1, _a4, 0);
        __eflags = 0;
        if(0 != 0) {
            return 1;
        }
        goto L18;
    }
    _t32 =  *4240544;
    __eflags = _t32 - 1;
    if(_t32 <= 1) {
L15:
        __eflags = _a12 - _t32;
        goto L16;
    }
    __eflags = _a12 - _t32;
    if(__eflags < 0) {
        goto L16;
    }
    __eflags = _a4;
    _t36 = MultiByteToWideChar( *4242532, 9, __esi, _t32, _a4, 0);
    __eflags = _t36;
    _t32 =  *4240544;
    if(_t36 != 0) {
        return _t32;
    }
    goto L15;
L16:
    if(__eflags >= 0) {
        __eflags = (__esi)[1] - (__ebx & 4294967295);
        if((__esi)[1] != (__ebx & 4294967295)) {
            return _t32;
        }
    }
L18:
     *4242000 = 42;
    return _t32 | 255;
}

L004045E0(_unknown_ __esp, signed int _a4, _unknown_ _a8, signed int _a12)
{
    _unknown_ __edi;
    signed int _t11;
    signed int _t16;
    signed int _t18;
    unsigned int _t21;
    signed int _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    signed int _t25;
    _unknown_ _t27;
    signed int _t28;

    __esp = __esp;
    __edx = _a12;
    _t16 = _a4;
    if(__edx == 0) {
        return _a4;
    }
    _t11 = 0;
    _push(_t24);
    _t25 = _t16;
    _t27 = __edx - 4;
    if(_t27 < 0) {
        goto L7;
    } else {
        _t18 =  ~_t16 & 3;
        if(_t27 != 0) {
            __edx = __edx - _t18;
            while(1) {
L4:
                 *_t25 = _t11 & 4294967295;
                _t25 = _t25 + 1;
                _t18 = _t18 - 1;
                if(_t27 == 0) {
                    break;
                }
            }
        }
        _t11 = ((_t11 << 8) + _t11 << 16) + (_t11 << 8) + _t11;
        _t21 = __edx;
        __edx = __edx & 3;
        _t22 = _t21 >> 2;
        if(_t27 == 0) {
            goto L7;
        } else {
            _push(_t22 << 2);
            _push(_t11);
            _push(_t25);
            memset();
            __esp = __esp + 12;
            _t25 = _t25 + _t22;
            _t28 = __edx;
            if(_t28 != 0) {
                while(1) {
L7:
                     *_t25 = _t11 & 4294967295;
                    _t25 = _t25 + 1;
                    __edx = __edx - 1;
                    if(_t28 == 0) {
                        break;
                    }
                }
            }
        }
    }
L8:
    _pop(__edi);
    return _a4;
    goto L10;
}

L00404730(_unknown_ __esp, _unknown_ __eflags, signed int _a4, _unknown_ _a8, signed int _a12, _unknown_ _a16)
{
    _unknown_ __ebx;
    _unknown_ _t23;
    _unknown_ _t25;
    _unknown_ _t31;
    _unknown_ _t35;
    signed int _t36;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t40;
    _unknown_ _t41;

    __eflags = __eflags;
    __esp = __esp;
    _t36 = _a12;
    if(__eflags == 0) {
        return _a4 * _t36;
    }
    _push(_t31);
    _pop(__ebx);
    return _a4 * _t36;
}

L00404BE0(signed int _a4, intOrPtr _a8, unsigned int _a12)
{
    signed int* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t129;
    signed int _t130;
    _unknown_ _t138;
    signed int _t140;
    signed int _t141;
    signed int _t143;
    signed int _t145;
    signed int _t146;
    signed int _t147;
    signed int _t148;
    _unknown_ _t149;
    signed int _t150;
    signed int _t151;
    _unknown_ _t152;
    signed int _t154;
    intOrPtr _t156;
    _unknown_ _t157;
    _unknown_ _t158;

    _t156 = _a8;
    _t144 = _a12;
    _t151 = _a4;
    _t147 = _t144;
    _t129 = _t144 + _t156;
    if(_t151 <= _t156 || _t151 >= _t129) {
        if((_t151 & 3) != 0) {
            _t130 = _t151;
            _t148 = 3;
            _t145 = _t144 - 4;
            if(_t162 < 0) {
                goto ( *((intOrPtr*)(_t145 * 4 +  &M00404D3C)));
            }
            goto L6;
        }
        goto L3;
L6:
        _t140 = _t130 & 3;
        _t145 = _t145 + _t140;
        goto ( *((intOrPtr*)(_t140 * 4 +  &M00404C40)));
    } else {
        _t158 = _t144 + _t156 - 4;
        _t154 = _t144 + _t151 - 4;
        if((_t154 & 3) != 0) {
            _t141 = _t154;
            if(_t144 < 4) {
                goto ( *((intOrPtr*)(_t144 * 4 +  &M00404EC8)));
            }
            goto L26;
        }
        _t146 = _t144 >> 2;
        _t150 = _t147 & 3;
        if(_t146 < 8) {
            _t144 =  ~_t146;
            goto  *((intOrPtr*)( ~_t146 * 4 +  &M00404E78))[L28]goto ( *((intOrPtr*)( ~_t146 * 4 +  &M00404E78)));
            goto ( *((intOrPtr*)(0xc +  &M00404EC8)));
        }
        asm("std ");
        _push(_t146 << 2);
        _push(_t158);
        _push(_t154);
        memcpy();
        __esp = __esp + 12;
        _t154 = _t158 + _t146 + _t146;
        _t146 = 0;
        asm("cld ");
        switch( *((intOrPtr*)(_t150 * 4 +  &M00404EC8))) {
            case 0:
                return _a4;
                goto L33;
            case 1:
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
                goto L33;
            case 2:
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
                goto L33;
            case 3:
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
L33:
        }
L26:
        _t143 = _t141 & 3;
        _t144 = _t144 - _t143;
        goto ( *((intOrPtr*)(_t143 * 4 +  &M00404DCC)));
    }
L3:
    _t145 = _t144 >> 2;
    _t148 = _t147 & 3;
    _t162 = _t145 - 8;
    if(_t145 < 8) {
        switch( *((intOrPtr*)(_t145 * 4 +  &M00404CC0))) {
            case 0:
                goto L9;
            case 1:
L10:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 24)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 24));
                goto L11;
            case 2:
L11:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 20)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 20));
                goto L12;
            case 3:
L12:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 16)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 16));
                goto L13;
            case 4:
L13:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 12)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 12));
                goto L14;
            case 5:
L14:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 8)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 8));
                goto L15;
            case 6:
L15:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 4)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 4));
                goto L16;
            case 7:
L16:
                goto ( *((intOrPtr*)(_t148 * 4 +  &M00404D2C)));
        }
    }
    _push(_t145 << 2);
    _push(_t156);
    _push(_t151);
    memcpy();
    __esp = __esp + 12;
    _t151 = _t156 + _t145 + _t145;
    _t144 = 0;
    switch( *((intOrPtr*)(_t148 * 4 +  &M00404D2C))) {
        case 0:
            return _a4;
            goto L33;
        case 1:
             *__edi = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L33;
        case 2:
             *__edi = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L33;
        case 3:
             *__edi = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L33;
    }
L9:
     *((intOrPtr*)(_t151 + _t145 * 4 - 28)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 28));
    goto L10;
}

L00404F20(signed int __edx, _unknown_ __esp, signed int* _a4, signed int _a8)
{
    signed int* __edi;
    signed int _t28;
    signed int _t33;
    _unknown_ _t34;

    __esp = __esp;
    _t33 = __edx;
    __edi = _a4;
    __ecx = _a8;
    if((__ecx & 3) == 0) {
        while(1) {
L6:
            _t28 =  *__ecx ^ 255 ^ 2130640639 +  *__ecx;
            _t33 =  *__ecx;
            __ecx = __ecx + 4;
            if((_t28 & -2130640640) != 0) {
                break;
            }
L5:
             *__edi = _t33;
            __edi =  &((__edi)[1]);
        }
        if((_t33 & 4294967295) == 0) {
L15:
             *__edi = _t33 & 4294967295;
            return _a4;
        } else {
            if((_t33 & 4294967295) == 0) {
                 *__edi = _t33 & 4294967295;
                return _a4;
            } else {
                if((_t33 & 16711680) == 0) {
                     *__edi = _t33 & 4294967295;
                    (__edi)[0] = 0;
                    return _a4;
                } else {
                    if((_t33 & -16777216) == 0) {
                         *__edi = _t33;
                        return _a4;
                    } else {
                        goto L5;
                    }
                }
            }
        }
L16:
    } else {
        goto L2;
    }
    while(1) {
L2:
        __ecx = __ecx + 1;
        if((_t33 & 4294967295) == 0) {
            break;
        }
         *__edi = _t33 & 4294967295;
        __edi =  &((__edi)[0]);
        if((__ecx & 3) != 0) {
            continue;
        } else {
            goto L6;
        }
        goto L16;
    }
    goto L15;
}

L00404F30(signed int __eax, _unknown_ __esp, signed int _a4, signed int _a8)
{
    _unknown_ __edi;
    signed int _t45;
    signed int _t46;
    signed int _t49;
    signed int _t57;
    signed int _t58;
    signed int _t59;
    _unknown_ _t60;
    _unknown_ _t61;
    _unknown_ _t63;
    signed int* _t64;

    __esp = __esp;
    _t45 = __eax;
    _t57 = _a4;
    _push(_t63);
    if((_t57 & 3) == 0) {
        while(1) {
L4:
            _t46 =  *_t57;
            _t59 = 2130640639 + _t46;
            _t57 = _t57 + 4;
            if(((_t46 ^ 255 ^ _t59) & -2130640640) == 0) {
                break;
            } else {
                continue;
            }
            do {
L4:
                _t46 =  *_t57;
                _t59 = 2130640639 + _t46;
                _t57 = _t57 + 4;
            } while(((_t46 ^ 255 ^ _t59) & -2130640640) == 0);
        }
        _t49 =  *((signed int*)(_t57 - 4));
        if((_t49 & 4294967295) == 0) {
            _t64 = _t57 - 4;
        } else {
            if((_t49 & 4294967295) == 0) {
                _t64 = _t57 - 3;
            } else {
                if((_t49 & 16711680) == 0) {
                    _t64 = _t57 - 2;
                } else {
                    if((_t49 & -16777216) == 0) {
L10:
                        _t64 = _t57 - 1;
                    } else {
                        goto L4;
                    }
                }
            }
        }
L14:
        _t58 = _a8;
        if((_t58 & 3) == 0) {
            while(1) {
L19:
                _t59 =  *_t58;
                _t58 = _t58 + 4;
                if((( *_t58 ^ 255 ^ 2130640639 +  *_t58) & -2130640640) != 0) {
                    break;
                }
L18:
                 *_t64 = _t59;
                _t64 =  &(_t64[1]);
            }
            if((_t59 & 4294967295) == 0) {
L28:
                 *_t64 = _t59 & 4294967295;
                _pop(__edi);
                return _a4;
            } else {
                if((_t59 & 4294967295) == 0) {
                     *_t64 = _t59 & 4294967295;
                    _pop(__edi);
                    return _a4;
                } else {
                    if((_t59 & 16711680) == 0) {
                         *_t64 = _t59 & 4294967295;
                        _t64[0] = 0;
                        _pop(__edi);
                        return _a4;
                    } else {
                        if((_t59 & -16777216) == 0) {
                             *_t64 = _t59;
                            _pop(__edi);
                            return _a4;
                        } else {
                            goto L18;
                        }
                    }
                }
            }
L29:
        } else {
            goto L15;
        }
        while(1) {
L15:
            _t58 = _t58 + 1;
            if((_t59 & 4294967295) == 0) {
                break;
            }
             *_t64 = _t59 & 4294967295;
            _t64 =  &(_t64[0]);
            if((_t58 & 3) != 0) {
                continue;
            } else {
                goto L19;
            }
            goto L29;
        }
        goto L28;
    } else {
        goto L1;
    }
    while(1) {
L1:
        _t57 = _t57 + 1;
        if((_t45 & 4294967295) == 0) {
            break;
        }
        if((_t57 & 3) != 0) {
            continue;
        } else {
            goto L4;
        }
        goto L14;
    }
    goto L10;
}

L0040532E(_unknown_ __eax, _unknown_ __esp, intOrPtr _a4)
{
    _unknown_ __esi;
    _unknown_ _t4;
    intOrPtr _t5;
    _unknown_ _t7;
    intOrPtr* _t8;
    _unknown_ _t9;
    _unknown_ _t17;

    __esp = __esp;
    _t4 = __eax;
    _push( *4243432);
    L00408240(_t4, __esp);
    _pop(__ecx);
    _t8 =  *4243428;
    _t17 = _t4;
    _t5 =  *4243432;
    if(_t17 < _t8 - _t5 + 4) {
        _t9 = 2048;
        if(_t17 < _t9) {
            _t9 = _t17;
        }
        _push(_t9 + _t17);
        _push(_t5);
        L004080DE(_t5);
        _pop(__ecx);
        _pop(__ecx);
        if(_t5 == 0) {
            _push(_t17 + 16);
            _push( *4243432);
            L004080DE(_t5);
            _pop(__ecx);
            _pop(__ecx);
            if(_t5 == 0) {
                return ;
            }
        }
         *4243432 = _t5;
        _t8 = _t5 + ( *4243428 -  *4243432 >> 2) * 4;
         *4243428 = _t8;
    }
     *_t8 = _a4;
     *4243428 =  *4243428 + 4;
    return;
    goto L8;
}

L004053B0(signed int __eax, intOrPtr _a4)
{
    signed int _t2;

    _t2 = __eax;
    _push(_a4);
    L0040532E(_t2, __esp);
    asm("sbb eax, eax");
    _pop(__ecx);
    return  ~( ~_t2) - 1;
}

L004053EA(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, signed char _a14)
{
    char _v8;
    signed char _v12;
    char _v20;
    struct HINSTANCE__* __ebx;
    struct HINSTANCE__* __edi;
    _unknown_ __ebp;
    _unknown_ _t13;
    struct HINSTANCE__* _t14;
    struct HINSTANCE__* _t15;
    _unknown_ _t16;

    __ebx = 0;
    if( *4242400 == 0) {
        _t15 = LoadLibraryA("user32.dll");
        __edi = _t15;
        if(__edi == 0) {
            return ;
        }
         *GetProcAddress(__edi, "MessageBoxA");
         *4242400 = _t15;
        if(_t15 == 0) {
            return ;
        }
         *GetProcAddress(__edi, "GetActiveWindow");
        _push("GetLastActivePopup");
        _push(__edi);
         *4242404 = _t15;
         *GetProcAddress();
         *4242408 = _t15;
        if( *4242012 == 2) {
             *GetProcAddress(__edi, "GetUserObjectInformationA");
             *4242416 = _t15;
            if(_t15 != 0) {
                 *GetProcAddress(__edi, "GetProcessWindowStation");
                 *4242412 = _t15;
            }
        }
    }
    _t14 =  *4242412;
    if(_t14 == 0) {
L14:
        _t14 =  *4242404;
        if(_t14 != 0) {
            _t14->i();
            __ebx = _t14;
            if(__ebx != 0) {
                _t14 =  *4242408;
                if(_t14 != 0) {
                    _push(__ebx);
                    _t14->i();
                    __ebx = _t14;
                }
            }
        }
L18:
        _push(_a12);
        _push(_a8);
        _push(_a4);
        _push(__ebx);
         *4242400();
        return;
    }
    _t14->i();
    if(_t14 == 0) {
L10:
        if( *4242024 < 4) {
            _a14 = _a14 | 4;
        } else {
            _a14 = _a14 | 32;
        }
        goto L18;
    }
    _push( &_v8);
    _push(12);
    _push( &_v20);
    _push(1);
    _push(_t14);
     *4242416();
    if(_t14 == 0 || (_v12 & 1) == 0) {
        goto L10;
    }
    goto L14;
}

L004054F0(signed int __eax, _unknown_ __esp, signed int _a4, signed int _a8, unsigned int _a12)
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

L00405614(_unknown_ __eax, _unknown_ __eflags)
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;

    __eflags = __eflags;
    if(__eflags == 0) {
        return 1041;
    }
    if(__eflags == 0) {
        return 2052;
    }
    if(__eflags == 0) {
        return 1042;
    }
    if(__eflags == 0) {
        return 1028;
    }
    return 0;
L9:
}

L00405643()
{
    _unknown_ __edi;
    _unknown_ _t2;
    _unknown_ _t3;
    signed int _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;

    _push(64);
    _pop(__ecx);
    _push(_t4 << 2);
    _push(0);
    _push(4242592);
    memset();
    __esp = __esp + 12;
    asm("stosb ");
     *4242852 = 0;
     *4242584 = 0;
     *4242580 = 0;
    asm("stosd ");
    asm("stosd ");
    asm("stosd ");
    return;
}

L0040566C(signed int __ecx)
{
    intOrPtr _v8;
    char _v21;
    _unknown_ _v22;
    struct _cpinfo _v28;
    char _v284;
    char _v540;
    char _v796;
    char _v1308;
    signed int _t66;
    signed int _t67;
    _unknown_ _t70;
    _unknown_ _t73;
    _unknown_ _t76;
    _unknown_ _t77;
    signed int _t78;
    signed int _t81;
    signed int _t82;
    _unknown_ _t83;
    signed int _t85;
    signed char* _t86;
    _unknown_ _t88;
    _unknown_ _t89;
    _unknown_ _t90;
    _unknown_ _t91;
    _unknown_ _t92;

    _t78 = __ecx;
    _v8 =  *4240536;
    _push(_t91);
    if(GetCPInfo( *4242852,  &_v28) != 1) {
        _t66 = 0;
        goto L19;
        do {
            goto L19;
L27:
            _t66 = _t66 + 1;
        } while(_t66 < 256);
        goto L28;
    } else {
        _t67 = 0;
        while(1) {
L2:
             *(__ebp + _t67 + -280) = _t67 & 4294967295;
            _t67 = _t67 + 1;
            if(_t67 >= 256) {
                break;
            }
        }
        _v284 = 32;
        if((_t67 & 4294967295) == 0) {
L9:
            _push(0);
            _push( *4242580);
            _push( *4242852);
            _push( &_v1308);
            _push(256);
            _push( &_v284);
            _push(1);
            L004070AD();
            _push(0);
            _push( *4242852);
            _push(256);
            _push( &_v540);
            _push(256);
            _push( &_v284);
            _push(256);
            _push( *4242580);
            L00407455();
            _push(0);
            _push( *4242852);
            _push(256);
            _push( &_v796);
            _push(256);
            _push( &_v284);
            _push(512);
            _push( *4242580);
            L00407455();
            __esp = __esp + 92;
            _t77 = 0;
            goto L10;
            do {
                goto L10;
L16:
                _t77 = _t77 + 1;
            } while(_t77 < 256);
L28:
            _pop(__esi);
            L004041A2(_v8);
            return;
        }
        _push(__ebx);
        _t86 =  &_v21;
        _push(_t88);
        while(1) {
L5:
            _t78 =  *_t86 & 255;
            _t67 = _t67 & 4294967295 & ;
            if(_t67 <= _t78) {
                _t81 = _t78 - _t67 + 1;
                __ebx = _t81;
                _t82 = _t81 >> 2;
                _t89 = __ebp + _t67 + -280;
                _t67 = 538976288;
                _push(_t82 << 2);
                _push(_t67);
                _push(_t89);
                memset();
                __esp = __esp + 12;
                _t90 = _t89 + _t82;
                _t85 = _t81 & 3;
                _push(_t85 << 0);
                _push(_t67);
                _push(_t90);
                memset();
                __esp = __esp + 12;
                _t88 = _t90 + _t85;
                _t78 = 0;
            }
            _t86 =  &(( &(_t86[1]))[1]);
            if((_t67 & 4294967295) == 0) {
                break;
            }
        }
        _pop(__edi);
        _pop(__ebx);
        goto L9;
L10:
        if((_t78 & 4294967295 & 1) == 0) {
            if((_t78 & 4294967295 & 2) == 0) {
                 *(_t77 + 4242880) = 0;
                goto L16;
            }
             *(_t77 + 4242593) =  *(_t77 + 4242593) | 32;
L12:
             *(_t77 + 4242880) = _t78 & 4294967295;
            goto L16;
        }
         *(_t77 + 4242593) =  *(_t77 + 4242593) | 16;
        goto L12;
    }
L19:
    if(_t66 < 65 || _t66 > 90) {
        if(_t66 < 97 || _t66 > 122) {
             *(_t66 + 4242880) = 0;
        } else {
             *(_t66 + 4242593) =  *(_t66 + 4242593) | 32;
L22:
             *(_t66 + 4242880) = _t78 & 4294967295;
        }
        goto L27;
    }
     *(_t66 + 4242593) =  *(_t66 + 4242593) | 16;
    goto L22;
}

L004057F8(int _a4)
{
    intOrPtr _v8;
    char _v21;
    char _v22;
    intOrPtr _v28;
    _unknown_ _v32;
    _unknown_ _t45;
    _unknown_ _t46;
    _unknown_ _t47;
    _unknown_ _t49;
    _unknown_ _t52;
    _unknown_ _t53;
    signed int _t54;
    signed int _t57;
    int _t58;
    _unknown_ _t59;
    _unknown_ _t60;
    _unknown_ _t61;
    signed int _t62;
    _unknown_ _t64;
    _unknown_ _t67;
    _unknown_ _t68;
    _unknown_ _t69;
    _unknown_ _t70;
    _unknown_ _t71;
    _unknown_ _t72;
    _unknown_ _t73;
    signed int _t74;
    _unknown_ _t75;
    int _t76;
    _unknown_ _t77;

    _push(_t59);
    _push(_t75);
    _t76 = _a4;
    _v8 =  *4240536;
    _push(_t67);
     *4242420 = 0;
    if(_t76 != 254) {
        __eflags = _t76 - 253;
        if(__eflags != 0) {
            __eflags = _t76 - 252;
            if(__eflags == 0) {
                _t58 =  *4242532;
                 *4242420 = 1;
                goto L6;
            }
            goto L7;
L41:
            _pop(__edi);
            _pop(__esi);
            _pop(__ebx);
            L004041A2(_v8);
            return;
        } else {
             *4242420 = 1;
            _t58 = GetACP();
            goto L6;
        }
    } else {
         *4242420 = 1;
        _t58 = GetOEMCP();
L6:
        _a4 = _t58;
        _t76 = _t58;
    }
L7:
    if(_t76 !=  *4242852) {
        if(_t76 == 0) {
L37:
            L00405643();
        } else {
            __edx = 0;
            _t46 = 0;
            while( *((intOrPtr*)(_t46 + 4240616)) != _t76) {
                _t46 = _t46 + 48;
                __edx = __edx + 1;
                if(_t46 < 240) {
                    continue;
                } else {
                    if(GetCPInfo(_t76,  &_v28) != 1) {
                        __eflags =  *4242420;
                        if( *4242420 != 0) {
                            goto L37;
                        }
                    } else {
                        _push(64);
                        _pop(__ecx);
                        _push(_t62 << 2);
                        _push(0);
                        _push(4242592);
                        memset();
                        __esp = __esp + 12;
                        _t62 = 0;
                        asm("stosb ");
                        _t74 = 1;
                         *4242852 = _t76;
                         *4242580 = 0;
                        if(_v28 <= _t74) {
                             *4242584 = 0;
                        } else {
                            if(_v22 != 0) {
                                _t62 =  &_v21;
                                while((__edx & 4294967295) != 0) {
                                    _t57 =  *(_t62 - 1) & 255;
                                    __edx = __edx & 4294967295 & ;
                                    while(_t57 <= __edx) {
                                         *(_t57 + 4242593) =  *(_t57 + 4242593) | 4;
                                        _t57 = _t57 + 1;
                                    }
                                }
                            }
                            _t54 = _t74;
                            while(1) {
L32:
                                 *(_t54 + 4242593) =  *(_t54 + 4242593) | 8;
                                _t54 = _t54 + 1;
                                _t90 = _t54 - 255;
                                if(_t54 >= 255) {
                                    break;
                                }
                            }
                             *4242580 = L00405614(_t76, _t90);
                             *4242584 = _t74;
                        }
                        _t67 = 4242864;
                        asm("stosd ");
                        asm("stosd ");
                        asm("stosd ");
                        goto L38;
                    }
                }
                goto L41;
            }
        }
L38:
        L0040566C(_t62);
        goto L39;
    }
    goto L41;
}

L004059DE()
{
    if( *4243436 != 0) {
        return 0;
    }
    L004057F8(253);
     *4243436 = 1;
    return 0;
}

L00405A00(signed int _a4, intOrPtr _a8, unsigned int _a12)
{
    signed int* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t129;
    signed int _t130;
    _unknown_ _t138;
    signed int _t140;
    signed int _t141;
    signed int _t143;
    signed int _t145;
    signed int _t146;
    signed int _t147;
    signed int _t148;
    _unknown_ _t149;
    signed int _t150;
    signed int _t151;
    _unknown_ _t152;
    signed int _t154;
    intOrPtr _t156;
    _unknown_ _t157;
    _unknown_ _t158;

    _t156 = _a8;
    _t144 = _a12;
    _t151 = _a4;
    _t147 = _t144;
    _t129 = _t144 + _t156;
    if(_t151 <= _t156 || _t151 >= _t129) {
        if((_t151 & 3) != 0) {
            _t130 = _t151;
            _t148 = 3;
            _t145 = _t144 - 4;
            if(_t162 < 0) {
                goto ( *((intOrPtr*)(_t145 * 4 +  &M00405B5C)));
            }
            goto L6;
        }
        goto L3;
L6:
        _t140 = _t130 & 3;
        _t145 = _t145 + _t140;
        goto ( *((intOrPtr*)(_t140 * 4 +  &M00405A60)));
    } else {
        _t158 = _t144 + _t156 - 4;
        _t154 = _t144 + _t151 - 4;
        if((_t154 & 3) != 0) {
            _t141 = _t154;
            if(_t144 < 4) {
                goto ( *((intOrPtr*)(_t144 * 4 +  &M00405CE8)));
            }
            goto L26;
        }
        _t146 = _t144 >> 2;
        _t150 = _t147 & 3;
        if(_t146 < 8) {
            _t144 =  ~_t146;
            goto  *((intOrPtr*)( ~_t146 * 4 +  &M00405C98))[L28]goto ( *((intOrPtr*)( ~_t146 * 4 +  &M00405C98)));
            goto ( *((intOrPtr*)(0xc +  &M00405CE8)));
        }
        asm("std ");
        _push(_t146 << 2);
        _push(_t158);
        _push(_t154);
        memcpy();
        __esp = __esp + 12;
        _t154 = _t158 + _t146 + _t146;
        _t146 = 0;
        asm("cld ");
        switch( *((intOrPtr*)(_t150 * 4 +  &M00405CE8))) {
            case 0:
                return _a4;
                goto L33;
            case 1:
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
                goto L33;
            case 2:
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
                goto L33;
            case 3:
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
L33:
        }
L26:
        _t143 = _t141 & 3;
        _t144 = _t144 - _t143;
        goto ( *((intOrPtr*)(_t143 * 4 +  &M00405BEC)));
    }
L3:
    _t145 = _t144 >> 2;
    _t148 = _t147 & 3;
    _t162 = _t145 - 8;
    if(_t145 < 8) {
        switch( *((intOrPtr*)(_t145 * 4 +  &M00405AE0))) {
            case 0:
                goto L9;
            case 1:
L10:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 24)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 24));
                goto L11;
            case 2:
L11:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 20)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 20));
                goto L12;
            case 3:
L12:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 16)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 16));
                goto L13;
            case 4:
L13:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 12)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 12));
                goto L14;
            case 5:
L14:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 8)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 8));
                goto L15;
            case 6:
L15:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 4)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 4));
                goto L16;
            case 7:
L16:
                goto ( *((intOrPtr*)(_t148 * 4 +  &M00405B4C)));
        }
    }
    _push(_t145 << 2);
    _push(_t156);
    _push(_t151);
    memcpy();
    __esp = __esp + 12;
    _t151 = _t156 + _t145 + _t145;
    _t144 = 0;
    switch( *((intOrPtr*)(_t148 * 4 +  &M00405B4C))) {
        case 0:
            return _a4;
            goto L33;
        case 1:
             *__edi = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L33;
        case 2:
             *__edi = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L33;
        case 3:
             *__edi = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L33;
    }
L9:
     *((intOrPtr*)(_t151 + _t145 * 4 - 28)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 28));
    goto L10;
}

L00405D3D(_unknown_ __eax, _unknown_ __esp, _unknown_ _a4)
{
    _unknown_ _t2;
    void* _t3;
    _unknown_ _t4;

    __esp = __esp;
    _t3 = HeapAlloc( *4243136, 0, 320);
     *4242560 = _t3;
    if(_t3 == 0) {
        return _t3;
    }
     *4242552 =  *4242552 & 0;
     *4242556 =  *4242556 & 0;
     *4242568 = _t3;
     *4242564 =  *((intOrPtr*)(__esp + 4));
     *4242572 = 16;
    return 1;
}

L00405D85(_unknown_ __esp, intOrPtr _a4)
{
    intOrPtr _t8;
    _unknown_ _t9;
    _unknown_ _t11;

    __esp = __esp;
    _t8 =  *4242560;
    _t11 = _t8 + ( *4242556 +  *4242556 * 4) * 4;
    while(_t8 < _t11) {
        if(_a4 -  *((intOrPtr*)(_t8 + 12)) < 1048576) {
            return ;
        }
        _t8 = _t8 + 20;
    }
}

L00405DB0(unsigned int _a4, unsigned int _a8, signed int _a11)
{
    signed int _v8;
    signed int _v12;
    signed int _v16;
    unsigned int _v20;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t179;
    unsigned int _t180;
    unsigned int _t186;
    unsigned int _t191;
    _unknown_ _t196;
    signed int _t197;
    _unknown_ _t201;
    _unknown_ _t202;
    _unknown_ _t203;
    _unknown_ _t209;
    signed int _t211;
    signed int _t213;
    unsigned int _t214;
    signed int _t219;
    intOrPtr _t221;
    signed int _t223;
    signed int _t235;
    signed int _t237;
    signed int _t240;
    signed int _t260;
    signed int _t263;
    _unknown_ _t264;
    _unknown_ _t267;
    signed int _t272;
    _unknown_ _t276;
    signed int _t279;
    _unknown_ _t280;
    signed int _t281;
    unsigned int _t282;
    signed int _t283;
    _unknown_ _t287;
    signed int _t289;
    signed int _t291;
    _unknown_ _t296;
    _unknown_ _t297;
    _unknown_ _t302;
    signed int _t307;

    _t214 = _a4;
    _t178 =  *(_t214 + 16);
    _push(_t280);
    _t281 = _a8;
    _push(_t276);
    _t282 = _t281 + -4;
    _t279 = _t281 -  *((intOrPtr*)(_t214 + 12)) >> 15;
    _v20 = _t279 * _t279 + _t178 + 324;
    _t219 =  *_t282 - 1;
    _v8 = _t219;
    if((_t219 & 4294967295 & 1) != 0) {
L49:
        _pop(__edi);
        _pop(__esi);
        return;
    }
    _push(_t196);
    _t197 = _t219 + _t282;
    _v16 =  *_t197;
    _v12 =  *(_t282 - 4);
    _t260 = _v16;
    _a8 = _t197;
    if((_t260 & 4294967295 & 1) != 0) {
L12:
        _t263 = (_t219 >> 4) - 1;
        _t297 = _t263 - 63;
        if(_t297 > 0) {
            _push(63);
            _pop(__edx);
        }
        _v16 = _v12 & 1;
        if(_t297 != 0) {
            _t200 = _a4;
        } else {
            _t283 = _t282 - _v12;
            _push(63);
            _a8 = _t283;
            _t200 = (_v12 >> 4) - 1;
            _pop(__esi);
            if(_t200 > _t283) {
                _t200 = _t283;
            }
            _t240 = _t219 + _v12;
            _t263 = (_t240 >> 4) - 1;
            _v8 = _t240;
            if(_t263 > _t283) {
                _t263 = _t283;
            }
            if(_t200 != _t263) {
                if( *((intOrPtr*)(_a8 + 4)) ==  *((intOrPtr*)(_a8 + 8))) {
                    _t302 = _t200 - 32;
                    if(_t302 >= 0) {
                        _t289 =  !(-2147483648 >> (_t200 - 32 & 4294967295));
                         *(_t178 + 196 + _t279 * 4) =  *(_t178 + 196 + _t279 * 4) & _t289;
                         *((char*)(_t200 + _t178 + 4)) =  *((char*)(_t200 + _t178 + 4)) - 1;
                        if(__eflags == 0) {
                             *(_a4 + 4) =  *(_a4 + 4) & _t289;
                        }
                    } else {
                        _t291 =  !(-2147483648 >> (_t200 & 4294967295));
                         *(_t178 + 68 + _t279 * 4) =  *(_t178 + 68 + _t279 * 4) & _t291;
                         *((char*)(_t200 + _t178 + 4)) =  *((char*)(_t200 + _t178 + 4)) - 1;
                        if(_t302 == 0) {
                             *_a4 =  *_a4 & _t291;
                        }
                    }
                }
                 *((intOrPtr*)( *((intOrPtr*)(_a8 + 8)) + 4)) =  *((intOrPtr*)(_a8 + 4));
                 *((intOrPtr*)( *((intOrPtr*)(_a8 + 4)) + 8)) =  *((intOrPtr*)(_a8 + 8));
            }
            _t282 = _a8;
        }
        if(_v16 != 0 || _t200 != _t263) {
            _t221 = _v20 + _t263 * 8;
            _t200 =  *(_t221 + 4);
             *((intOrPtr*)(_t282 + 8)) = _t221;
             *(_t282 + 4) =  *(_t221 + 4);
             *(_t221 + 4) = _t282;
             *( *(_t282 + 4) + 8) = _t282;
            _t223 =  *(_t282 + 4);
            if(_t223 ==  *((intOrPtr*)(_t282 + 8))) {
                _a11 = _t223 & 4294967295;
                 *(_t263 + _t178 + 4) = _t223 & 4294967295;
                if(_t263 >= 32) {
                    __eflags = _a11;
                    if(_a11 == 0) {
                        _t235 = _t263 - 32;
                        _t200 = -2147483648 >> (_t235 & 4294967295);
                         *(_a4 + 4) =  *(_a4 + 4) | -2147483648 >> (_t235 & 4294967295);
                    }
                     *(_t178 + 196 + _t279 * 4) =  *(_t178 + 196 + _t279 * 4) | -2147483648 >> (_t263 - 32 & 4294967295);
                } else {
                    _t307 = _a11;
                    if(_t307 == 0) {
                         *_a4 =  *_a4 | -2147483648 >> (_t263 & 4294967295);
                    }
                    _t237 = _t263;
                    _t200 = -2147483648 >> (_t237 & 4294967295);
                     *(_t178 + 68 + _t279 * 4) =  *(_t178 + 68 + _t279 * 4) | -2147483648 >> (_t237 & 4294967295);
                }
            }
        }
        _t179 = _v8;
         *_t282 = _t179;
         *(_t282 - 4 + _t179) = _t179;
        _t178 = _v20;
         *_v20 =  *_v20 - 1;
        if(_t307 == 0) {
            _t180 =  *4242552;
            if(_t180 != 0) {
                _t282 = VirtualFree;
                _push(16384);
                _t200 = 32768;
                _push(_t200);
                _push(( *4242576 << 15) +  *((intOrPtr*)(_t180 + 12)));
                 *VirtualFree();
                 *( *4242552 + 8) =  *( *4242552 + 8) | -2147483648 >> ( *4242576 & 4294967295);
                 *( *( *4242552 + 16) + 196 +  *4242576 * 4) =  *( *( *4242552 + 16) + 196 +  *4242576 * 4) & 0;
                ( *( *4242552 + 16))[0x10] = ( *( *4242552 + 16))[0x10] - 1;
                _t186 =  *4242552;
                if( *((char*)( *((intOrPtr*)(_t186 + 16)) + 67)) == 0) {
                     *(_t186 + 4) =  *(_t186 + 4) & 254;
                    _t186 =  *4242552;
                }
                if( *((intOrPtr*)(_t186 + 8)) == 255) {
                    _push(_t200);
                    _push(0);
                    _push( *((intOrPtr*)(_t186 + 12)));
                     *_t282();
                    HeapFree( *4243136, 0,  *( *4242552 + 16));
                    _t191 =  *4242552;
                    _push(( *4242556 +  *4242556 * 4 << 2) - _t191 +  *4242560 - 20);
                    _push(_t191 + 20);
                    _push(_t191);
                    L00404BE0();
                    __esp = __esp + 12;
                     *4242556 =  *4242556 - 1;
                    if(_a4 >  *4242552) {
                        _a4 = _a4 - 20;
                    }
                     *4242568 =  *4242560;
                }
            }
            _t178 = _a4;
             *4242552 = _a4;
             *4242576 = _t279;
        }
        _pop(__ebx);
        goto L49;
    } else {
        _t272 = (_t260 >> 4) - 1;
        if(_t272 > 63) {
            _push(63);
            _pop(__edx);
        }
    }
    if( *((intOrPtr*)(_t197 + 4)) !=  *((intOrPtr*)(_t197 + 8))) {
L11:
        _t219 = _v8 + _v16;
         *((intOrPtr*)( *((intOrPtr*)(_t197 + 8)) + 4)) =  *((intOrPtr*)(_t197 + 4));
         *((intOrPtr*)( *((intOrPtr*)(_a8 + 4)) + 8)) =  *((intOrPtr*)(_a8 + 8));
        _v8 = _t219;
        goto L12;
    }
    _t296 = _t272 - 32;
    if(_t296 >= 0) {
        _t211 =  !(-2147483648 >> (_t272 - 32 & 4294967295));
         *(_t178 + 196 + _t279 * 4) =  *(_t178 + 196 + _t279 * 4) & _t211;
         *((char*)(_t272 + _t178 + 4)) =  *((char*)(_t272 + _t178 + 4)) - 1;
        if(__eflags == 0) {
             *(_a4 + 4) =  *(_a4 + 4) & _t211;
        }
    } else {
        _t213 =  !(-2147483648 >> (_t272 & 4294967295));
         *(_t178 + 68 + _t279 * 4) =  *(_t178 + 68 + _t279 * 4) & _t213;
         *((char*)(_t272 + _t178 + 4)) =  *((char*)(_t272 + _t178 + 4)) - 1;
        if(_t296 == 0) {
             *_a4 =  *_a4 & _t213;
        }
    }
    _t197 = _a8;
    goto L11;
}

L004060C8()
{
    long __edi;
    _unknown_ __esi;
    signed int _t15;
    void* _t17;
    void* _t18;
    void* _t20;
    _unknown_ _t21;
    void* _t24;
    _unknown_ _t25;
    signed int _t26;
    _unknown_ _t28;
    void* _t29;

    _t15 =  *4242556;
    _t26 =  *4242572;
    __edi = 0;
    if(_t15 == _t26) {
        _t24 = HeapReAlloc( *4243136, 0,  *4242560, _t26 + 80 + _t26 * 4 << 2);
        if(_t24 == 0) {
            return 0;
        }
         *4242572 =  *4242572 + 16;
         *4242560 = _t24;
        _t15 =  *4242556;
    }
    _push(_t28);
    _push(16836);
    _push(8);
    _push( *4243136);
    _t29 =  &(( *4242560)[_t15 + _t15 * 4]);
    _t17 = HeapAlloc();
    _t29[4] = _t17;
    if(_t17 != __edi) {
        _t18 = VirtualAlloc(__edi, 1048576, 8192, 4);
        _t29[3] = _t18;
        if(_t18 != __edi) {
            _t29[2] = _t29[2] | 255;
             *_t29 = __edi;
            _t29[1] = __edi;
             *4242556 =  *4242556 + 1;
             *(_t29[4]) =  *(_t29[4]) | 255;
            _t20 = _t29;
            goto L9;
        }
        HeapFree( *4243136, __edi, _t29[4]);
        goto L5;
    } else {
L5:
        _t20 = 0;
    }
L9:
    _pop(__esi);
    return _t20;
}

L0040617F(_unknown_ __ecx, intOrPtr _a4)
{
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t54;
    intOrPtr _t57;
    signed int _t58;
    signed int _t60;
    intOrPtr _t61;
    signed int _t62;
    intOrPtr* _t63;
    _unknown_ _t64;
    signed int _t65;
    _unknown_ _t66;
    intOrPtr _t67;
    intOrPtr _t68;
    signed int _t69;
    _unknown_ _t74;
    _unknown_ _t75;
    intOrPtr _t76;
    _unknown_ _t77;
    _unknown_ _t82;
    signed int _t85;
    _unknown_ _t86;
    _unknown_ _t87;
    intOrPtr _t88;
    signed int _t89;

    _t66 = __ecx;
    _push(_t66);
    _push(_t66);
    _t67 = _a4;
    _t54 =  *(_t67 + 8);
    _push(_t64);
    _push(_t87);
    _t88 =  *((intOrPtr*)(_t67 + 16));
    _push(_t82);
    _t65 = 0;
    while(1) {
        _t89 = _t54;
        if(_t89 < 0) {
            break;
        }
        _t54 = _t54 << 1;
        _t65 = _t65 + 1;
    }
    _t57 = _t65 * _t65 + _t88 + 324;
    _push(63);
    _v12 = _t57;
    _pop(__edx);
    while(1) {
L4:
         *((intOrPtr*)(_t57 + 8)) = _t57;
         *((intOrPtr*)(_t57 + 4)) = _t57;
        _t57 = _t57 + 8;
        _t75 = _t75 - 1;
        if(_t89 == 0) {
            break;
        }
    }
    _push(4);
    _push(4096);
    _t85 = (_t65 << 15) +  *((intOrPtr*)(_t67 + 12));
    _push(32768);
    _push(_t85);
    _t58 = VirtualAlloc();
    if(_t58 != 0) {
        _t76 = _t85 + 28672;
        __eflags = _t85 - _t76;
        _v8 = _t76;
        if(__eflags <= 0) {
            _t63 = _t85 + 16;
            _t74 = (_t76 - _t85 >> 12) + 1;
            while(1) {
L9:
                 *(_t63 - 8) =  *(_t63 - 8) | 255;
                 *(_t63 + 4076) =  *(_t63 + 4076) | 255;
                 *_t63 = _t63 + 4092;
                 *((intOrPtr*)(_t63 - 4)) = 4080;
                 *((intOrPtr*)(_t63 + 4)) = _t63 + -4100;
                 *((intOrPtr*)(_t63 + 4072)) = 4080;
                _t63 = _t63 + 4096;
                _t74 = _t74 - 1;
                if(__eflags == 0) {
                    break;
                }
            }
            _t76 = _v8;
        }
        _t60 = _v12 + 504;
        _t68 = _t85 + 12;
         *((intOrPtr*)(_t60 + 4)) = _t68;
         *(_t68 + 8) = _t60;
        _t69 = _t76 + 12;
         *(_t60 + 8) = _t69;
         *(_t69 + 4) = _t60;
         *(_t88 + 68 + _t65 * 4) =  *(_t88 + 68 + _t65 * 4) & 0;
        _t85 = 1;
         *(_t88 + 196 + _t65 * 4) = _t85;
        __eflags = _t60 & 4294967295;
        _t61 = _a4;
         *(_t88 + 67) = _t69 & 4294967295;
        if((_t60 & 4294967295) == 0) {
             *(_t61 + 4) =  *(_t61 + 4) | _t85;
        }
         *(_t61 + 8) =  *(_t61 + 8) &  !(-2147483648 >> (_t65 & 4294967295));
        _t62 = _t65;
L14:
        _pop(__edi);
        _pop(__esi);
        _pop(__ebx);
        return _t62;
    }
    _t62 = _t58 | 255;
    goto L14;
}

L00406285(signed int* _a4, unsigned int _a8, signed int _a11, signed int _a12, signed int _a15)
{
    signed int _v8;
    signed int _v12;
    intOrPtr _v16;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t201;
    _unknown_ _t202;
    _unknown_ _t203;
    signed int _t204;
    signed int* _t205;
    intOrPtr _t206;
    signed int* _t207;
    signed int* _t208;
    _unknown_ _t209;
    unsigned int _t211;
    _unknown_ _t212;
    signed int _t214;
    signed int _t216;
    signed int _t219;
    signed int _t221;
    _unknown_ _t223;
    _unknown_ _t224;
    _unknown_ _t225;
    signed int _t227;
    signed int _t229;
    signed int* _t230;
    signed int _t235;
    intOrPtr _t236;
    intOrPtr _t238;
    signed int _t240;
    signed int _t241;
    signed int _t242;
    signed int _t244;
    signed int _t256;
    signed int _t262;
    signed int _t263;
    signed int _t264;
    signed int _t265;
    signed int _t267;
    signed int _t278;
    _unknown_ _t279;
    unsigned int _t281;
    _unknown_ _t282;
    _unknown_ _t284;
    unsigned int _t285;
    _unknown_ _t287;
    _unknown_ _t288;
    _unknown_ _t291;
    signed int _t294;
    signed int _t299;
    signed int _t303;
    _unknown_ _t311;

    _t230 = _a4;
    _t201 = _t230[4];
    _push(_t209);
    _push(_t291);
    _push(_t284);
    _t285 = _a8;
    _t278 = _t285 - _t230[3] >> 15;
    _v16 = _t278 * _t278 + _t201 + 324;
    _t294 = _a12 + 23 & 240;
    _t235 =  *((intOrPtr*)(_t285 - 4)) - 1;
    _t286 = _t235 + _t285 - 4;
    _t210 =  *_t286;
    _a12 = _t235;
    _v8 = _t210;
    if(_t294 <= _t235) {
L27:
        if(__eflags < 0) {
            _t211 = _a8;
            _a12 = _a12 - _t294;
            _t236 = _t294 + 1;
             *((intOrPtr*)(_t211 - 4)) = _t236;
            _t210 = _t211 + _t294 - 4;
            _t294 = (_a12 >> 4) - 1;
            __eflags = _t294 - 63;
            _a8 = _t210;
             *((intOrPtr*)(_t210 - 4)) = _t236;
            if(_t294 > 63) {
                _push(63);
                _pop(__esi);
            }
            __eflags = _v8 & 1;
            if((_v8 & 1) == 0) {
                _t299 = (_v8 >> 4) - 1;
                __eflags = _t299 - 63;
                if(_t299 > 63) {
                    _push(63);
                    _pop(__esi);
                }
                __eflags =  *(_t286 + 4) -  *(_t286 + 8);
                if( *(_t286 + 4) ==  *(_t286 + 8)) {
                    __eflags = _t299 - 32;
                    if(__eflags >= 0) {
                        _t214 =  !(-2147483648 >> (_t299 - 32 & 4294967295));
                         *(_t201 + 196 + _t278 * 4) =  *(_t201 + 196 + _t278 * 4) & _t214;
                         *((char*)(_t299 + _t201 + 4)) =  *((char*)(_t299 + _t201 + 4)) - 1;
                        if(__eflags == 0) {
                            _a4[1] = _a4[1] & _t214;
                        }
                    } else {
                        _t216 =  !(-2147483648 >> (_t299 & 4294967295));
                         *(_t201 + 68 + _t278 * 4) =  *(_t201 + 68 + _t278 * 4) & _t216;
                         *((char*)(_t299 + _t201 + 4)) =  *((char*)(_t299 + _t201 + 4)) - 1;
                        if(__eflags == 0) {
                             *_a4 =  *_a4 & _t216;
                        }
                    }
                    _t210 = _a8;
                }
                 *((intOrPtr*)( *(_t286 + 8) + 4)) =  *(_t286 + 4);
                 *((intOrPtr*)( *(_t286 + 4) + 8)) =  *(_t286 + 8);
                _t303 = _a12 + _v8;
                _a12 = _t303;
                _t294 = (_t303 >> 4) - 1;
                __eflags = _t294 - 63;
                if(_t294 > 63) {
                    _push(63);
                    _pop(__esi);
                }
            }
            _t238 = _v16 + _t294 * 8;
            _t286 =  *(_t238 + 4);
             *((intOrPtr*)(_t210 + 8)) = _t238;
             *(_t210 + 4) =  *(_t238 + 4);
             *(_t238 + 4) = _t210;
             *( *(_t210 + 4) + 8) = _t210;
            _t240 =  *(_t210 + 4);
            __eflags = _t240 -  *((intOrPtr*)(_t210 + 8));
            if(_t240 ==  *((intOrPtr*)(_t210 + 8))) {
                _a11 = _t240 & 4294967295;
                __eflags = _t294 - 32;
                 *(_t294 + _t201 + 4) = _t240 & 4294967295;
                if(_t294 >= 32) {
                    __eflags = _a11;
                    if(_a11 == 0) {
                        _t242 = _t294 - 32;
                        _t286 = -2147483648 >> (_t242 & 4294967295);
                        _a4[1] = _a4[1] | -2147483648 >> (_t242 & 4294967295);
                    }
                    _t205 = _t201 + 196 + _t278 * 4;
                    _t241 = _t294 - 32;
                } else {
                    __eflags = _a11;
                    if(_a11 == 0) {
                        _t244 = _t294;
                        _t286 = -2147483648 >> (_t244 & 4294967295);
                         *_a4 =  *_a4 | -2147483648 >> (_t244 & 4294967295);
                    }
                    _t205 = _t201 + 68 + _t278 * 4;
                    _t241 = _t294;
                }
                 *_t205 =  *_t205 | -2147483648 >> (_t241 & 4294967295);
            }
            _t204 = _a12;
             *_t210 = _t204;
             *(_t204 + _t210 - 4) = _t204;
        }
        goto L52;
    }
    if((_t210 & 4294967295 & 1) != 0 || _t294 > _t210) {
        _t203 = 0;
        goto L53;
    } else {
        _t256 = (_v8 >> 4) - 1;
        _v12 = _t256;
        if(_t256 > 63) {
            _push(63);
            _pop(__ecx);
            _v12 = _t256;
        }
        if( *(_t286 + 4) ==  *(_t286 + 8)) {
            _t311 = _t256 - 32;
            if(_t311 >= 0) {
                _t227 =  !(-2147483648 >> (_t256 + -32 & 4294967295));
                 *(_t201 + 196 + _t278 * 4) =  *((signed int*)(_t201 + 196 + _t278 * 4)) & _t227;
                 *((char*)(_v12 + _t201 + 4)) =  *((char*)(_v12 + _t201 + 4)) - 1;
                if(__eflags == 0) {
                    _a4[1] = _a4[1] & _t227;
                }
            } else {
                _t229 =  !(-2147483648 >> (_t256 & 4294967295));
                 *(_t201 + 68 + _t278 * 4) =  *((signed int*)(_t201 + 68 + _t278 * 4)) & _t229;
                 *((char*)(_v12 + _t201 + 4)) =  *((char*)(_v12 + _t201 + 4)) - 1;
                if(_t311 == 0) {
                     *_a4 =  *_a4 & _t229;
                }
            }
        }
        _t210 =  *(_t286 + 4);
         *( *(_t286 + 8) + 4) =  *(_t286 + 4);
         *( *(_t286 + 4) + 8) = _t286;
        _v8 = _v8 + _a12 - _t294;
        if(_v8 <= 0) {
            _t281 = _a8;
        } else {
            _t286 = (_v8 >> 4) - 1;
            _t262 = _a8 + _t294 - 4;
            if(_t286 > 63) {
                _push(63);
                _pop(__edi);
            }
            _t219 = _v16 + _t286 * 8;
            _a12 = _t219;
             *(_t262 + 4) =  *(_t219 + 4);
            _t221 = _a12;
             *(_t262 + 8) = _t221;
             *(_t221 + 4) = _t262;
             *( *(_t262 + 4) + 8) = _t262;
            _t210 =  *(_t262 + 4);
            if( *(_t262 + 4) ==  *(_t262 + 8)) {
                _a15 = _t262 & 4294967295;
                 *(_t286 + _t201 + 4) = _t262 & 4294967295;
                if(_t286 >= 32) {
                    __eflags = _a15;
                    if(_a15 == 0) {
                        _t265 = _t286 - 32;
                        _t210 = -2147483648 >> (_t265 & 4294967295);
                        _a4[1] = _a4[1] | -2147483648 >> (_t265 & 4294967295);
                    }
                    _t208 = _t201 + 196 + _t278 * 4;
                    _t264 = _t286 - 32;
                } else {
                    if(_a15 == 0) {
                        _t267 = _t286;
                        _t210 = -2147483648 >> (_t267 & 4294967295);
                         *_a4 =  *_a4 | -2147483648 >> (_t267 & 4294967295);
                    }
                    _t208 = _t201 + 68 + _t278 * 4;
                    _t264 = _t286;
                }
                 *_t208 =  *_t208 | -2147483648 >> (_t264 & 4294967295);
            }
            _t281 = _a8;
            _t263 = _v8;
            _t207 = _t281 + _t294 - 4;
             *_t207 = _t263;
             *(_t263 + _t207 - 4) = _t263;
        }
        _t206 = _t294 + 1;
         *((intOrPtr*)(_t281 - 4)) = _t206;
         *((intOrPtr*)(_t281 + _t294 - 8)) = _t206;
L52:
        _t203 = 1;
L53:
        _pop(__edi);
        _pop(__esi);
        _pop(__ebx);
        return _t203;
    }
    goto L27;
}

L00406564(_unknown_ __eax, signed int* _a4, _unknown_ _a7)
{
    signed int _v8;
    signed int _v12;
    signed int _v16;
    signed int _v20;
    _unknown_ _v24;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t159;
    signed int _t161;
    signed int* _t164;
    signed int* _t165;
    _unknown_ _t166;
    _unknown_ _t170;
    signed int* _t171;
    _unknown_ _t172;
    _unknown_ _t174;
    _unknown_ _t176;
    signed int _t180;
    signed int _t182;
    signed int _t186;
    signed int* _t187;
    signed int _t192;
    _unknown_ _t195;
    _unknown_ _t196;
    _unknown_ _t197;
    _unknown_ _t204;
    _unknown_ _t206;
    _unknown_ _t223;
    signed int* _t227;
    signed int _t228;
    _unknown_ _t231;
    _unknown_ _t232;
    _unknown_ _t233;
    _unknown_ _t236;
    _unknown_ _t237;
    signed int _t238;
    _unknown_ _t241;
    _unknown_ _t246;
    _unknown_ _t248;
    _unknown_ _t250;
    signed int _t259;
    signed int _t260;
    _unknown_ _t265;
    _unknown_ _t266;
    _unknown_ _t267;
    _unknown_ _t271;
    _unknown_ _t275;
    _unknown_ _t280;

    _t227 =  *4242560;
    _t180 =  &(_a4[5]) & 240;
    _push(_t170);
    _v20 = _t180;
    _push(_t259);
    _t161 =  *4242556 +  *4242556 * 4;
    _push(_t237);
    _t182 = (_t180 >> 4) - 1;
    _t238 =  &(_t227[_t161]);
    _v8 = _t238;
    if(_t182 >= 32) {
        _t260 = 0;
        _v12 = (_t161 | 255) >> (_t182 + -32 & 4294967295);
    } else {
        _t260 = (_t259 | 255) >> (_t182 & 4294967295);
        _v12 = _v12 | 255;
    }
    _t164 =  *4242568;
    _t171 = _t164;
    _v16 = _t260;
    _t271 = _t171 - _t238;
    while(1) {
L6:
        _a4 = _t171;
        if(_t271 >= 0) {
            break;
        }
        _t186 = _t171[1] & _v12 |  *_t171 & _t260;
        if(__eflags != 0) {
            break;
        } else {
            _t171 =  &(_t171[5]);
            __eflags = _t171 - _v8;
        }
    }
    if(_t171 != _v8) {
L13:
         *4242568 = _t171;
        _t165 = _t171[4];
        _t228 =  *_t165;
        _t275 = _t228 - 255;
        _v8 = _t228;
        if(_t275 == 0 || _t275 == 0) {
            _v8 = _v8 & 0;
            _t187 =  &(_t165[0x11]);
            _t260 = _v16;
            if(_t275 != 0) {
L17:
                _t228 = _v8;
                goto L18;
            } else {
                goto L16;
            }
            while(1) {
L16:
                _v8 = _v8 + 1;
                _t187 =  &(_t187[1]);
                if(_t275 != 0) {
                    break;
                }
            }
            goto L17;
        } else {
L18:
            _v16 =  &(_t165[0x51]) + _t228 * _t228;
            _t241 = 0;
            _t192 =  *(_t165 + 68 + _t228 * 4) & _t260;
            if(_t275 == 0) {
                _t192 =  *(_t165 + 196 + _t228 * 4) & _v12;
                _push(32);
                _pop(__edi);
            }
L33:
            while(_t192 >= 0) {
L32:
                _t192 = _t192 << 1;
                _t241 = _t241 + 1;
                goto L33;
            }
        }
        goto L16;
    } else {
        _t171 = _t227;
        goto L11;
    }
    while(1) {
L11:
        _a4 = _t171;
        if(_t171 >= _t164) {
            break;
        }
        _t186 = _t171[1] & _v12 |  *_t171 & _t260;
        if(__eflags != 0) {
            break;
        } else {
            _t171 =  &(_t171[5]);
            continue;
        }
        goto L13;
    }
    if(_t171 == _t164) {
        while(1) {
            __eflags = _t171 - _v8;
            if(_t171 >= _v8) {
                break;
            }
            __eflags = _t171[2];
            if(_t171[2] != 0) {
                goto L23;
            }
            _t171 =  &(_t171[5]);
            _a4 = _t171;
            continue;
L24:
            _t171 = _t227;
            while(1) {
                __eflags = _t171 - _t164;
                _a4 = _t171;
                if(_t171 >= _t164) {
                    break;
                }
                __eflags = _t171[2];
                if(_t171[2] != 0) {
                    break;
                }
                _t171 =  &(_t171[5]);
                continue;
L29:
                _t171 = L004060C8();
                __eflags = _t171;
                _a4 = _t171;
                if(_t171 == 0) {
L31:
                    _t166 = 0;
                    _pop(__edi);
                    _pop(__esi);
                    _pop(__ebx);
                    return _t166;
                }
L30:
                 *(_t171[4]) = L0040617F(_t186, _t171);
                __eflags =  *(_t171[4]) - 255;
                if(__eflags != 0) {
                    goto L13;
                }
                goto L31;
            }
            __eflags = _t171 - _t164;
            if(_t171 != _t164) {
                goto L30;
            }
            goto L29;
        }
        goto L23;
    }
    goto L13;
L23:
    __eflags = _t171 - _v8;
    if(_t171 != _v8) {
        goto L30;
    }
    goto L24;
}

L00406B77(_unknown_ __esp, intOrPtr _a4)
{
    intOrPtr* _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;

    __esp = __esp;
    _t2 =  *4242500;
    if(_t2 == 0) {
        return ;
    }
    _push(_a4);
     *_t2();
    _pop(__ecx);
    if(_t2 == 0) {
        return ;
    }
    return;
}

L00406B92()
{
    _unknown_ _t69;
    intOrPtr* _t73;
    signed int* _t78;
    long _t85;
    _unknown_ _t88;
    signed int _t89;
    _unknown_ _t93;
    signed int _t94;
    signed int _t95;
    long _t97;
    signed int _t98;
    _unknown_ _t101;

    _t101 = __esp + -924;
    __esp = __esp - 1052;
    _t89 =  *(_t101 + 932);
    _t68 =  *4240536;
    _push(__ebx);
    _push(_t98);
     *(_t101 + 920) =  *4240536;
    _push(_t95);
    if(_t89 >=  *4243144) {
L31:
         *4242004 =  *4242004 & 0;
        goto L32;
    }
    __ebx = 4243168 + (_t89 >> 5) * 4;
    _t68 =  *__ebx;
    _t98 = (_t89 & 31) << 3;
     *(_t101 - 128) = __ebx;
    if((_t68 & 4294967295 & 1) == 0) {
        goto L31;
    }
    _t95 = 0;
     *(_t101 - 116) = 0;
     *(_t101 - 124) = 0;
    if( *((intOrPtr*)(_t101 + 940)) != 0) {
        if((_t68 & 4294967295 & 32) != 0) {
            L004082D7(_t68, _t89, _t93, _t89, 0, 0, 2);
        }
        _t73 =  *__ebx + _t98;
        if(( *(_t73 + 4) & 128) == 0) {
            _push(_t95);
            _t91 = _t101 - 120;
            _push(_t101 - 120);
            _push( *((intOrPtr*)(_t101 + 940)));
            _push( *(_t101 + 936));
            _push( *_t73);
            if(WriteFile() == 0) {
                 *(_t101 + 932) = GetLastError();
            } else {
                 *(_t101 + 932) = _t95;
                 *(_t101 - 116) =  *(_t101 - 120);
            }
            goto L19;
        } else {
             *(_t101 - 112) =  *(_t101 + 936);
             *(_t101 + 932) = _t95;
            if( *((intOrPtr*)(_t101 + 940)) <= _t95) {
L27:
                _t68 =  *__ebx;
                if(( *( *__ebx + _t98 + 4) & 64) == 0) {
L29:
                     *4242000 = 28;
                     *4242004 = _t95;
                    goto L33;
                }
                goto L28;
            } else {
                goto L8;
            }
            do {
L8:
                _t91 =  *(_t101 - 112) -  *(_t101 + 936);
                _t78 = _t101 - 108;
                while(_t91 <  *((intOrPtr*)(_t101 + 940))) {
                    _t94 =  *(_t101 - 112);
                     *(_t101 - 112) =  *(_t101 - 112) + 1;
                    _t91 = _t91 + 1;
                    if((_t94 & 4294967295) == 10) {
                         *(_t101 - 124) =  *(_t101 - 124) + 1;
                         *_t78 = 13;
                        _t78 =  &(_t78[0]);
                        _t95 = _t95 + 1;
                    }
                    __ebx =  *(_t101 - 128);
                     *_t78 = _t94 & 4294967295;
                    _t78 =  &(_t78[0]);
                    _t95 = _t95 + 1;
                    if(_t95 < 1024) {
                        continue;
                    }
                    _t97 = _t78 - _t101 - 108;
                    if(WriteFile( *( *__ebx + _t98), _t101 - 108, _t97, _t101 - 120, 0) == 0) {
                         *(_t101 + 932) = GetLastError();
                        goto L18;
                    }
                    _t85 =  *(_t101 - 120);
                     *(_t101 - 116) =  *(_t101 - 116) + _t85;
                    if(_t85 < _t97) {
                        goto L18;
                    }
                    break;
L19:
                    _t68 =  *(_t101 - 116);
                    if(_t68 != _t95) {
                        goto L34;
                    }
                    if( *(_t101 + 932) == _t95) {
                        goto L27;
                    }
                    _push(5);
                    _pop(__eax);
                    if( *(_t101 + 932) != _t68) {
                        _push( *(_t101 + 932));
                        L00408278(__esp);
                        _pop(__ecx);
L33:
L34:
                        _pop(__edi);
                        _pop(__esi);
                        _pop(__ebx);
                        L004041A2( *(_t101 + 920));
                        __esp = _t101 + 924;
                        return;
                    }
                     *4242004 = _t68;
                    goto L32;
L18:
                    _t95 = 0;
                    goto L19;
                }
L15:
                _t95 = 0;
            } while( *(_t101 - 112) -  *(_t101 + 936) <  *((intOrPtr*)(_t101 + 940)));
            goto L19;
L28:
            _t68 =  *(_t101 + 936);
            if( *( *(_t101 + 936)) == 26) {
                goto L3;
            }
            goto L29;
        }
    }
L3:
    goto L34;
L32:
     *4242000 = 9;
    goto L33;
}

L00406DD9(_unknown_ __eax, long _a4, long _a8, long _a12)
{
    long __ebx;
    intOrPtr* __edi;
    _unknown_ __esi;
    _unknown_ _t12;
    long _t13;
    signed int _t14;
    signed int _t21;

    _t13 = _a4;
    _push(__ebx);
    _push(_t21);
    _push(__edi);
    if(_t13 >=  *4243144) {
L9:
         *4242004 =  *4242004 & 0;
L10:
         *4242000 = 9;
L11:
        _t14 = _t13 | 255;
L12:
        _pop(__edi);
        _pop(__esi);
        _pop(__ebx);
        return _t14;
    }
    __edi = 4243168 + (_t13 >> 5) * 4;
    _t21 = (_t13 & 31) << 3;
    if(( *( *__edi + _t21 + 4) & 1) == 0) {
        goto L9;
    }
    _push(_t13);
    _t13 = L004083F0(__esp);
    _pop(__ecx);
    if(_t13 == 255) {
        goto L10;
    }
    __ebx = SetFilePointer(_t13, _a8, 0, _a12);
    if(__ebx != 255) {
        _t13 = 0;
    } else {
        _t13 = GetLastError();
    }
    if(_t13 == 0) {
         *( *__edi + _t21 + 4) =  *( *__edi + _t21 + 4) & 253;
        _t14 = __ebx;
    } else {
        _push(_t13);
        L00408278(__esp);
        _pop(__ecx);
        goto L11;
    }
    goto L12;
}

L00406E65(intOrPtr __eax, _unknown_ __esp, intOrPtr* _a4)
{
    intOrPtr _t14;
    _unknown_ _t17;
    intOrPtr* _t18;

    __esp = __esp;
    _t14 = __eax;
     *4241980 =  *4241980 + 1;
    _push(4096);
    L00403DDF();
    _pop(__ecx);
    _t18 = _a4;
     *((intOrPtr*)(_t18 + 8)) = _t14;
    if(_t14 == 0) {
         *(_t18 + 12) =  *(_t18 + 12) | 4;
         *((intOrPtr*)(_t18 + 8)) = _t18 + 20;
         *((intOrPtr*)(_t18 + 24)) = 2;
    } else {
         *(_t18 + 12) =  *(_t18 + 12) | 8;
         *((intOrPtr*)(_t18 + 24)) = 4096;
    }
     *(_t18 + 4) =  *(_t18 + 4) & 0;
     *_t18 =  *((intOrPtr*)(_t18 + 8));
    return;
}

L00406F0F()
{
    _unknown_ __edi;
    _unknown_ __esi;
    intOrPtr* _t35;
    _unknown_ _t37;
    signed int _t38;
    signed int _t39;
    signed int _t40;
    signed int _t44;
    _unknown_ _t45;
    signed int _t46;
    signed int _t47;
    _unknown_ _t50;
    signed int _t51;
    signed int _t53;
    char* _t54;
    signed int _t55;
    intOrPtr _t56;
    _unknown_ _t57;
    intOrPtr _t58;

    _push(280);
    _push(4234544);
    L00403BD0(_t50, _t53, _t56);
     *((intOrPtr*)(__ebp - 28)) =  *4240536;
    _t35 =  *4242540;
    __ecx = 0;
    if(_t35 == 0) {
        if(__eflags == 0) {
            _t54 = "Buffer overrun detected!";
             *((intOrPtr*)(__ebp + -296)) = "A buffer overrun has been detected which has corrupted the program's\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n";
            _t57 = 185;
        } else {
            _t54 = "Unknown security failure detected!";
             *((intOrPtr*)(__ebp + -296)) = "A security error of unknown cause has been detected which has\ncorrupted the program's internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n";
            _t57 = 212;
        }
         *(__ebp - 32) = __ecx & 4294967295;
        _push(260);
        _t38 = __ebp + -292;
        _push(_t38);
        _push(__ecx);
        GetModuleFileNameA();
        __eflags = _t38;
        if(_t38 == 0) {
            _push("<program name unknown>");
            _push(__ebp + -292);
            L00404F20(__edx, __esp);
            _pop(__ecx);
            _pop(__ecx);
        }
        _t51 = __ebp + -292;
        _t39 = _t51;
        _push(_t39);
        L00404080(_t39, __esp);
        _pop(__ecx);
        _t40 = _t39 + 11;
        __eflags = _t40 - 60;
        if(_t40 > 60) {
            _t47 = _t51;
            _push(_t47);
            L00404080(_t47, __esp);
            _t40 = __ebp + -292 - 49;
            _t51 = _t47 + _t40;
            _push(3);
            _push("...");
            _push(_t51);
            L004054F0(_t40, __esp);
            __esp = __esp + 16;
        }
        _push(_t51);
        L00404080(_t40, __esp);
        _pop(__ecx);
        _t43 = _t40 + _t57 + 12 + 3 & 252;
        L00403D30(_t40 + _t57 + 12 + 3 & 252, __ecx, __esp);
         *((intOrPtr*)(__ebp - 24)) = __esp;
        _t56 = __esp;
        _push(_t54);
        _push(_t56);
        L00404F20(__edx, __esp);
        _t53 = "\n\n";
        _push(_t53);
        _push(_t56);
        L00404F30(_t40 + _t57 + 12 + 3 & 252, __esp);
        _push("Program: ");
        _push(_t56);
        L00404F30(_t40 + _t57 + 12 + 3 & 252, __esp);
        _push(_t51);
        _push(_t56);
        L00404F30(_t43, __esp);
        _push(_t53);
        _push(_t56);
        L00404F30(_t43, __esp);
        _push( *((intOrPtr*)(__ebp + -296)));
        _push(_t56);
        L00404F30(_t43, __esp);
        _push(73744);
        _push("Microsoft Visual C++ Runtime Library");
        _push(_t56);
        L004053EA(_t43);
        __esp = __esp + 60;
    } else {
         *(__ebp - 4) = 0;
        _push( *((intOrPtr*)(__ebp + 12)));
        _push( *((intOrPtr*)(__ebp + 8)));
         *_t35();
        _pop(__ecx);
        _pop(__ecx);
         *(__ebp - 4) =  *(__ebp - 4) | 255;
    }
    _push(3);
    L004031EB(__esp);
    asm("int3 ");
    _push(_t56);
    _t58 =  *((intOrPtr*)(__esp + 8));
    _t44 =  *(_t58 + 12);
    _push(_t53);
    _t55 = _t53 | 255;
    if((_t44 & 4294967295 & 64) == 0) {
        __eflags = _t44 & 4294967295 & 131;
        if((_t44 & 4294967295 & 131) != 0) {
            _push(_t58);
            L00403E18(__esp);
            _push(_t58);
            _t55 = _t44;
            L004084DF();
            _push( *((intOrPtr*)(_t58 + 16)));
            L0040842C();
            __esp = __esp + 12;
            __eflags = _t44;
            if(_t44 >= 0) {
                _t46 =  *(_t58 + 28);
                __eflags = _t46;
                if(_t46 != 0) {
                    _push(_t46);
                    L0040403C(_t46);
                     *(_t58 + 28) =  *(_t58 + 28) & 0;
                    _pop(__ecx);
                }
            } else {
                _t55 = _t55 | 255;
            }
        }
    }
     *(_t58 + 12) =  *(_t58 + 12) & 0;
    _pop(__edi);
    _pop(__esi);
    return;
}

L004070AD()
{
    short* _t40;
    short* _t42;
    _unknown_ _t43;
    short* _t49;
    int _t50;
    _unknown_ _t55;
    intOrPtr _t56;
    _unknown_ _t57;
    _unknown_ _t58;
    int _t59;
    int _t60;
    int _t61;
    _unknown_ _t62;
    int _t63;
    _unknown_ _t64;
    short* _t65;
    short* _t66;

    _push(28);
    _push(4234560);
    L00403BD0(_t55, _t58, _t64);
    _t65 = 0;
    if( *4242544 == 0) {
        _push(__ebp - 28);
        _t63 = 1;
        _push(_t63);
        _push(4234556);
        _push(_t63);
        if(GetStringTypeW() == 0) {
            if(GetLastError() == 120) {
                 *4242544 = 2;
            }
        } else {
             *4242544 = _t63;
        }
    }
    _t40 =  *4242544;
    if(_t40 == 2 || _t40 == _t65) {
        _t56 =  *((intOrPtr*)(__ebp + 28));
        if(_t56 == _t65) {
            _t56 =  *4242516;
        }
        _t59 =  *(__ebp + 24);
        if(_t59 == 0) {
            _t59 =  *4242532;
        }
        L0040850A(_t56);
        if(_t40 != 255) {
L26:
            if(_t40 == _t59) {
L29:
                _push( *((intOrPtr*)(__ebp + 20)));
                _push( *(__ebp + 16));
                _push( *(__ebp + 12));
                _push( *((intOrPtr*)(__ebp + 8)));
                _push(_t56);
                _t60 = GetStringTypeA();
                if(_t65 != 0) {
                    _push(_t65);
                    L0040403C(_t41);
                    _pop(__ecx);
                }
                _t42 = _t60;
                goto L32;
            }
        } else {
L25:
            _t42 = 0;
L32:
            __esp = __ebp - 56;
            L00403C0B();
            return _t42;
        }
L27:
        _push(0);
        _push(0);
        __ecx = __ebp + 16;
        _push(__ebp + 16);
        _push( *(__ebp + 12));
        _push(_t40);
        _push(_t59);
        L0040854D();
        __esp =  &((__esp)[0xc]);
        _t65 = _t40;
        if(_t65 == 0) {
            goto L25;
        }
         *(__ebp + 12) = _t65;
        goto L29;
    }
    if(_t40 != 1) {
        goto L25;
    }
     *(__ebp - 36) = _t65;
     *(__ebp - 32) = _t65;
    if( *(__ebp + 24) == _t65) {
         *(__ebp + 24) =  *4242532;
    }
    _t61 = MultiByteToWideChar( *(__ebp + 24), 1,  *(__ebp + 12),  *(__ebp + 16), _t65, _t65);
     *(__ebp - 40) = _t61;
    if(_t61 == 0) {
        goto L25;
    } else {
         *(__ebp - 4) =  *(__ebp - 4) & 0;
        _t57 = _t61 + _t61;
        L00403D30(_t57 + 3 & 252, __ecx, __esp);
         *(__ebp - 24) = __esp;
        _t66 = __esp;
         *(__ebp - 44) = _t66;
        _push(_t57);
        _push(0);
        _push(_t66);
        _t49 = L004045E0(__esp);
        __esp =  &((__esp)[6]);
         *(__ebp - 4) =  *(__ebp - 4) | 255;
        if(_t66 != 0) {
L15:
            _t50 = MultiByteToWideChar( *(__ebp + 24), 1,  *(__ebp + 12),  *(__ebp + 16), _t66, _t61);
            if(_t50 != 0) {
                 *(__ebp - 36) = _t50;
            }
            if( *(__ebp - 32) != 0) {
                _push(_t66);
                L0040403C(_t50);
                _pop(__ecx);
            }
            _t42 =  *(__ebp - 36);
            goto L32;
        }
        _push(_t61);
        _push(2);
        L00404245(__esp);
        _pop(__ecx);
        _pop(__ecx);
        _t66 = _t49;
        if(_t66 == 0) {
            goto L25;
        }
         *(__ebp - 32) = 1;
        goto L15;
    }
    goto L26;
}

L00407267(signed int _a4, signed int _a8, long _a12)
{
    char _v5;
    signed int _v12;
    signed int _v16;
    long _v20;
    _unknown_ __ebx;
    signed int* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t91;
    signed int _t92;
    long _t99;
    signed int _t102;
    signed int _t103;
    signed int _t104;
    signed int _t109;
    _unknown_ _t110;
    signed int _t113;
    void* _t118;
    void* _t120;
    signed int _t121;
    signed int _t123;
    signed int _t126;
    signed int _t128;

    _t126 = _a4;
    _push(__edi);
    if(_t126 >=  *4243144) {
L44:
         *4242004 =  *4242004 & 0;
        goto L45;
    }
    __edi = 4243168 + (_t126 >> 5) * 4;
    _t128 = (_t126 & 31) << 3;
    _t91 =  *__edi + _t128;
    if((__edx & 4294967295 & 1) == 0) {
        goto L44;
    }
    _v16 = _v16 & 0;
    _t118 = _a8;
    _t120 = _t118;
    if(_a12 == 0 || (__edx & 4294967295 & 2) != 0) {
L11:
        _t92 = 0;
        goto L47;
    } else {
        if((__edx & 4294967295 & 72) != 0) {
            if( *((char*)(_t91 + 5)) != 10) {
                _a12 = _a12 - 1;
                 *_t118 =  *__edi & 4294967295;
                _t120 =  &(_t118[0]);
                _v16 = 1;
                 *( *__edi + _t128 + 5) = 10;
            }
        }
        if(ReadFile( *( *__edi + _t128), _t120, _a12,  &_v20, 0) != 0) {
            _t99 = _v20;
            _t121 =  *__edi;
            _v16 = _v16 + _t99;
            if(( *(_t121 + _t128 + 4) & 128) == 0) {
L43:
                _t92 = _v16;
L47:
                _pop(__edi);
                return _t92;
            }
            goto L14;
        }
        _t91 = GetLastError();
        _push(5);
        _pop(__ecx);
        if(_t91 != _t120) {
            if(_t91 != 109) {
                goto L12;
            }
            goto L11;
        } else {
             *4242004 = _t120;
        }
        goto L45;
L14:
        if(_t99 == 0 ||  *_t118 != 10) {
             *( *__edi + _t128 + 4) =  *( *__edi + _t128 + 4) & 251;
        } else {
             *(_t121 + _t128 + 4) =  *(_t121 + _t128 + 4) | 4;
        }
        _t102 = _a8;
        _t123 = _v16 + _t102;
        _v12 = _t102;
        _v16 = _t123;
        if(_t102 >= _t123) {
L42:
            _v16 = _t118 - _a8;
        } else {
            while(1) {
                _t103 = _v12;
                if((_t103 & 4294967295) == 26) {
                    break;
                }
                if((_t103 & 4294967295) == 13) {
                    if(_v12 >= _t123 - 1) {
                        _v12 = _v12 + 1;
                        if(ReadFile( *( *__edi + _t128),  &_v5, 1,  &_v20, 0) != 0 || GetLastError() == 0) {
                            if(_v20 == 0) {
                                goto L36;
                            }
                            _t109 =  *__edi;
                            if(( *(_t109 + _t128 + 4) & 72) == 0) {
                                if(_t118 != _a8 || _v5 != 10) {
                                    _push(1);
                                    _push(255);
                                    _push(_a4);
                                    L00406DD9(_t109);
                                    __esp = __esp + 12;
                                    if(_v5 == 10) {
                                        goto L38;
                                    }
                                } else {
L34:
                                     *_t118 = 10;
                                    goto L37;
                                }
                                goto L36;
                            }
                            if((_t109 & 4294967295) == 10) {
                                goto L34;
                            }
                             *_t118 = 13;
                             *( *__edi + _t128 + 5) = _t109 & 4294967295;
                            goto L37;
L37:
                            _t118 =  &(_t118[0]);
                            goto L38;
                        }
L36:
                         *_t118 = 13;
                        goto L37;
                    }
                    goto L23;
                }
                 *_t118 = _t103 & 4294967295;
                _t118 =  &(_t118[0]);
                _v12 = _v12 + 1;
L38:
                _t123 = _v16;
                if(_v12 < _t123) {
                    continue;
                }
                goto L42;
L23:
                _t113 = _v12 + 1;
                if( *_t113 != 10) {
                    _v12 = _t113;
                    goto L36;
                }
                _v12 = _v12 + 2;
                goto L34;
            }
            _t104 =  *__edi;
            if(( *(_t104 + _t128 + 4) & 64) == 0) {
                 *(_t104 + _t128 + 4) =  *(_t104 + _t128 + 4) | 2;
            }
            goto L42;
        }
        goto L43;
    }
L12:
    _push(_t91);
    L00408278(__esp);
    _pop(__ecx);
L46:
    _t92 = _t91 | 255;
    goto L47;
L45:
     *4242000 = 9;
    goto L46;
}

L00407455()
{
    short* _t118;
    int _t120;
    _unknown_ _t123;
    _unknown_ _t124;
    short* _t136;
    signed int _t138;
    _unknown_ _t143;
    _unknown_ _t144;
    _unknown_ _t146;
    _unknown_ _t147;
    signed int _t148;
    int _t149;
    _unknown_ _t150;
    signed int _t151;
    int _t152;
    int _t155;
    _unknown_ _t156;
    int _t157;

    _push(56);
    _push(4234576);
    L00403BD0(_t143, _t147, _t150);
    if( *4242548 == 0) {
        _push(0);
        _push(0);
        _t157 = 1;
        _push(_t157);
        _push(4234556);
        _push(256);
        _push(0);
        if(LCMapStringW() == 0) {
            if(GetLastError() == 120) {
                 *4242548 = 2;
            }
        } else {
             *4242548 = _t157;
        }
    }
    if( *(__ebp + 20) <= 0) {
L11:
        _t118 =  *4242548;
        if(_t118 == 2 || _t118 == 0) {
             *(__ebp - 40) = 0;
            _t148 = 0;
             *(__ebp - 60) = 0;
            if( *(__ebp + 8) == 0) {
                _t118 =  *4242516;
                 *(__ebp + 8) = _t118;
            }
            if( *(__ebp + 32) == 0) {
                _t118 =  *4242532;
                 *(__ebp + 32) = _t118;
            }
            L0040850A( *(__ebp + 8));
             *(__ebp - 64) = _t118;
            if(_t118 != 255) {
                goto L47;
            } else {
                goto L46;
            }
            goto L48;
        } else {
            if(_t118 != 1) {
L46:
                _t120 = 0;
                goto L64;
            }
            _t149 = 0;
             *(__ebp - 44) = 0;
             *(__ebp - 56) = 0;
             *(__ebp - 52) = 0;
            if( *(__ebp + 32) == 0) {
                 *(__ebp + 32) =  *4242532;
            }
            _t155 = MultiByteToWideChar( *(__ebp + 32), 1,  *(__ebp + 16),  *(__ebp + 20), 0, 0);
             *(__ebp - 48) = _t155;
            if(_t155 == 0) {
                goto L46;
            } else {
                 *(__ebp - 4) = 1;
                L00403D30( &((_t155 + _t155)[1]) & 252, _t145, __esp);
                 *(__ebp - 24) = __esp;
                 *(__ebp - 28) = __esp;
                 *(__ebp - 4) =  *(__ebp - 4) | 255;
                if( *(__ebp - 28) != 0) {
L21:
                    if(MultiByteToWideChar( *(__ebp + 32), 1,  *(__ebp + 16),  *(__ebp + 20),  *(__ebp - 28), _t155) == 0) {
L36:
                        if( *(__ebp - 52) != 0) {
                            _push( *(__ebp - 32));
                            L0040403C(_t131);
                            _pop(__ecx);
                        }
                        if( *(__ebp - 56) != 0) {
                            _push( *(__ebp - 28));
                            L0040403C(_t131);
                            _pop(__ecx);
                        }
                        _t120 = _t149;
L64:
                        __esp = __ebp - 84;
                        L00403C0B();
                        return _t120;
                    }
                } else {
                    _t136 = _t155 + _t155;
                    _push(_t136);
                    L00403DDF();
                    _pop(__ecx);
                     *(__ebp - 28) = _t136;
                    if(_t136 == 0) {
                        goto L46;
                    }
                     *(__ebp - 56) = 1;
                    goto L21;
                }
L22:
                _t149 = LCMapStringW( *(__ebp + 8),  *(__ebp + 12),  *(__ebp - 28), _t155, 0, 0);
                 *(__ebp - 44) = _t149;
                if(_t149 == 0) {
                    goto L36;
                }
                if(( *(__ebp + 13) & 4) == 0) {
                     *(__ebp - 4) = 2;
                    L00403D30(_t149 + _t149 + 3 & 252, _t145, __esp);
                     *(__ebp - 24) = __esp;
                     *(__ebp - 32) = __esp;
                     *(__ebp - 4) =  *(__ebp - 4) | 255;
                    if( *(__ebp - 32) != 0) {
L31:
                        if(LCMapStringW( *(__ebp + 8),  *(__ebp + 12),  *(__ebp - 28), _t155,  *(__ebp - 32), _t149) != 0) {
                            _push(0);
                            _push(0);
                            if( *(__ebp + 28) != 0) {
                                _push( *(__ebp + 28));
                                _push( *(__ebp + 24));
                            } else {
                                _push(0);
                                _push(0);
                            }
                            _push(_t149);
                            _push( *(__ebp - 32));
                            _push(0);
                            _push( *(__ebp + 32));
                            _t149 = WideCharToMultiByte();
                        }
                        goto L36;
                    }
                    _t131 = _t149 + _t149;
                    _push(_t131);
                    L00403DDF();
                    _pop(__ecx);
                     *(__ebp - 32) = _t131;
                    if(_t131 == 0) {
                        goto L36;
                    }
                     *(__ebp - 52) = 1;
                    goto L31;
                }
                if( *(__ebp + 28) != 0 && _t149 <=  *(__ebp + 28)) {
                    _t131 = LCMapStringW( *(__ebp + 8),  *(__ebp + 12),  *(__ebp - 28), _t155,  *(__ebp + 24),  *(__ebp + 28));
                }
                goto L36;
            }
L47:
            if(_t118 ==  *(__ebp + 32)) {
                _push( *(__ebp + 28));
                _push( *(__ebp + 24));
                _push( *(__ebp + 20));
                _push( *(__ebp + 16));
                _push( *(__ebp + 12));
                _push( *(__ebp + 8));
                _t151 = LCMapStringA();
                goto L61;
            }
L48:
            _push(0);
            _push(0);
            _t145 = __ebp + 20;
            _push(__ebp + 20);
            _push( *(__ebp + 16));
            _push(_t118);
            _push( *(__ebp + 32));
            L0040854D();
            __esp = __esp + 24;
             *(__ebp - 40) = _t118;
            if(_t118 == 0) {
                goto L46;
            }
            _push(0);
            _push(0);
            _push( *(__ebp + 20));
            _push(_t118);
            _push( *(__ebp + 12));
            _push( *(__ebp + 8));
            _t152 = LCMapStringA();
             *(__ebp - 36) = _t152;
            if(_t152 == 0) {
                _t151 =  *(__ebp - 72);
                goto L58;
            }
             *(__ebp - 4) = 0;
            L00403D30(_t119 + 3 & 252, _t145, __esp);
             *(__ebp - 24) = __esp;
            _t148 = __esp;
             *(__ebp - 68) = _t148;
            _push(_t152);
            _push(0);
            _push(_t148);
            _t119 = L004045E0(__esp);
            __esp = __esp + 12;
             *(__ebp - 4) =  *(__ebp - 4) | 255;
            if(_t148 != 0) {
L54:
                _push( *(__ebp - 36));
                _push(_t148);
                _push( *(__ebp + 20));
                _push( *(__ebp - 40));
                _push( *(__ebp + 12));
                _push( *(__ebp + 8));
                _t119 = LCMapStringA();
                 *(__ebp - 36) = _t119;
                if(_t119 != 0) {
                    goto L56;
                }
            } else {
                _push( *(__ebp - 36));
                L00403DDF();
                _pop(__ecx);
                _t148 = _t119;
                if(_t148 == 0) {
                    goto L55;
                }
                _push( *(__ebp - 36));
                _push(0);
                _push(_t148);
                L004045E0(__esp);
                __esp = __esp + 12;
                 *(__ebp - 60) = 1;
                goto L54;
L56:
                _push( *(__ebp + 28));
                _push( *(__ebp + 24));
                _t119 = __ebp - 36;
                _push(_t119);
                _push(_t148);
                _push( *(__ebp + 32));
                _push( *(__ebp - 64));
                L0040854D();
                __esp = __esp + 24;
                asm("sbb esi, esi");
                _t151 =  ~( ~_t119);
                goto L58;
            }
L55:
            _t151 = 0;
L58:
            if( *(__ebp - 60) != 0) {
                _push(_t148);
                L0040403C(_t119);
                _pop(__ecx);
            }
L61:
            if( *(__ebp - 40) != 0) {
                _push( *(__ebp - 40));
                L0040403C(_t119);
                _pop(__ecx);
            }
            _t120 = _t151;
            goto L64;
        }
    } else {
        _t146 =  *(__ebp + 20);
        _t138 =  *(__ebp + 16);
        goto L7;
    }
    while(1) {
L7:
        _t145 = _t146 - 1;
        if( *_t138 == 0) {
            break;
        }
        _t138 = _t138 + 1;
        if(_t145 != 0) {
            continue;
        }
        _t145 = _t145 | 255;
        break;
    }
     *(__ebp + 20) =  *(__ebp + 20) + (_t138 | 255) - _t145;
    goto L11;
}

L004080DE(long __eax, void* _a4, long _a8)
{
    void* __ebx;
    void* __edi;
    _unknown_ __esi;
    long __ebp;
    long _t6;
    long _t11;
    _unknown_ _t12;
    long _t13;
    long _t16;
    long _t17;
    _unknown_ _t18;
    long _t19;

    _t6 = __eax;
    __ebx = _a4;
    __eflags = __ebx;
    _push(__ebp);
    _push(__edi);
    if(__ebx != 0) {
        _push(_t18);
        _t19 = _a8;
        __eflags = _t19;
        if(_t19 != 0) {
            __eflags =  *4243140 - 3;
            if( *4243140 != 3) {
                goto L30;
                do {
L30:
                    _t6 = 0;
                    __eflags = _t19 - 224;
                    if(_t19 > 224) {
L34:
                        __eflags =  *4242504;
                        if( *4242504 == 0) {
                            goto L37;
                        }
                        goto L35;
                    }
                    goto L31;
L35:
                    _push(_t19);
                    __eflags = L00406B77(__esp);
                    _pop(__ecx);
                } while(__eflags != 0);
                goto L36;
            } else {
                goto L5;
            }
            do {
                goto L5;
L27:
                _push(_t19);
                _t6 = L00406B77(__esp);
                __eflags = _t6;
                _pop(__ecx);
            } while(_t6 != 0);
L36:
            _t6 = 0;
L37:
            _pop(__esi);
            goto L38;
L31:
            __eflags = _t19;
            if(_t19 == 0) {
                _t19 = _t19 + 1;
            }
            _t6 = HeapReAlloc( *4243136, 0, __ebx, _t19);
            __eflags = _t6;
            if(_t6 != 0) {
                goto L37;
            } else {
                goto L34;
            }
            goto L38;
        }
        goto L3;
L5:
        __edi = 0;
        __eflags = _t19 - 224;
        if(_t19 > 224) {
L26:
            __eflags =  *4242504;
            if( *4242504 == 0) {
                goto L29;
            }
            goto L27;
        }
        _push(__ebx);
        L00405D85(__esp);
        __ebp = _t6;
        __eflags = __ebp;
        _pop(__ecx);
        if(__ebp == 0) {
L22:
            __eflags = _t19;
            if(_t19 == 0) {
                _t19 = _t19 + 1;
            }
            _t19 = _t19 + 15 & 240;
            __edi = HeapReAlloc( *4243136, 0, __ebx, _t19);
            goto L25;
        }
        __eflags = _t19 -  *4242564;
        if(_t19 >  *4242564) {
L15:
            __eflags = _t19;
            if(_t19 == 0) {
                _t19 = _t19 + 1;
            }
            _t19 = _t19 + 15 & 240;
            __edi = HeapAlloc( *4243136, 0, _t19);
            __eflags = __edi;
            if(__edi != 0) {
                _t11 =  *((intOrPtr*)(__ebx - 4)) - 1;
                __eflags = _t11 - _t19;
                if(_t11 >= _t19) {
                    _t11 = _t19;
                }
                _push(_t11);
                _push(__ebx);
                _push(__edi);
                L00405A00();
                _push(__ebx);
                _push(__ebp);
                L00405DB0();
                __esp = __esp + 20;
            }
L21:
            __eflags = __ebp;
            if(__ebp != 0) {
L25:
                __eflags = __edi;
                if(__edi != 0) {
L29:
                    _t6 = __edi;
                    goto L37;
                }
                goto L26;
            }
            goto L22;
        }
        _push(_t19);
        _push(__ebx);
        _push(__ebp);
        _t13 = L00406285();
        __esp = __esp + 12;
        __eflags = _t13;
        if(_t13 == 0) {
            _push(_t19);
            __edi = L00406564(_t13);
            __eflags = __edi;
            _pop(__ecx);
            if(__edi == 0) {
                goto L15;
            }
            goto L11;
        }
        __edi = __ebx;
L14:
        __eflags = __edi;
        if(__edi != 0) {
            goto L21;
        }
        goto L15;
L11:
        _t16 =  *((intOrPtr*)(__ebx - 4)) - 1;
        __eflags = _t16 - _t19;
        if(_t16 >= _t19) {
            _t16 = _t19;
        }
        _push(_t16);
        _push(__ebx);
        _push(__edi);
        _t17 = L00405A00();
        _push(__ebx);
        L00405D85(__esp);
        __ebp = _t17;
        _push(__ebx);
        _push(__ebp);
        L00405DB0();
        __esp = __esp + 24;
        goto L14;
    }
    _push(_a8);
    L00403DDF();
    _pop(__ecx);
L38:
    _pop(__edi);
    _pop(__ebp);
    return;
L3:
    _push(__ebx);
    L0040403C(_t6);
    _pop(__ecx);
    goto L36;
}

L00408240(_unknown_ __eax, _unknown_ __esp, intOrPtr _a4)
{
    intOrPtr __esi;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    __esp = __esp;
    _t4 = __eax;
    if( *4243140 != 3) {
        _push(_a4);
    } else {
        __esi = _a4;
        _push(__esi);
        L00405D85(__esp);
        _pop(__ecx);
        if(_t4 != 0) {
            return ;
        }
        _push(__esi);
    }
    _push(0);
    _push( *4243136);
    HeapSize();
    return;
}

L00408278(_unknown_ __esp, intOrPtr _a4)
{
    intOrPtr _t6;

    __esp = __esp;
    _t6 = _a4;
     *4242004 = _t6;
    __ecx = 0;
    while(_t6 !=  *((intOrPtr*)(4240888 + __ecx * 8))) {
        __ecx = __ecx + 1;
        if(__ecx < 45) {
            continue;
        } else {
            if(_t6 < 19) {
L7:
                if(_t6 >= 188) {
                     *4242000 = 8;
                    if(_t6 <= 202) {
                        return ;
                    }
                }
                 *4242000 = 22;
                return;
            }
            if(_t6 > 36) {
                goto L7;
            } else {
                 *4242000 = 13;
                return;
            }
        }
        goto L11;
    }
}

L004082D7(_unknown_ __eax, _unknown_ __ecx, _unknown_ __edx, long _a4, long _a8, long _a12, long _a16)
{
    long _v8;
    long _v12;
    intOrPtr* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t20;
    long _t21;
    signed int _t22;
    long _t23;
    _unknown_ _t26;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    signed int _t36;

    _t26 = __ecx;
    _push(_t26);
    _push(_t26);
    _t21 = _a4;
    _push(_t36);
    _push(__edi);
    if(_t21 >=  *4243144) {
L7:
         *4242004 =  *4242004 & 0;
L8:
         *4242000 = 9;
L9:
        _t22 = _t21 | 255;
L10:
        _pop(__edi);
        _pop(__esi);
        return _t22;
    }
    __edi = 4243168 + (_t21 >> 5) * 4;
    _t36 = (_t21 & 31) << 3;
    if(( *( *__edi + _t36 + 4) & 1) == 0) {
        goto L7;
    }
    _v12 = _a8;
    _push(_t21);
    _v8 = _a12;
    _t21 = L004083F0(__esp);
    _pop(__ecx);
    if(_t21 == 255) {
        goto L8;
    }
    _t23 = SetFilePointer(_t21, _v12,  &_v8, _a16);
    _v12 = _t23;
    if(_t23 != 255) {
L6:
         *( *__edi + _t36 + 4) =  *( *__edi + _t36 + 4) & 253;
        _t22 = _v12;
    } else {
        _t21 = GetLastError();
        if(_t21 == 0) {
            goto L6;
        } else {
            _push(_t21);
            L00408278(__esp);
            _pop(__ecx);
            goto L9;
        }
    }
    goto L10;
}

L00408376(_unknown_ __esp, signed int _a4)
{
    intOrPtr* __edi;
    _unknown_ __esi;
    signed int _t9;
    signed int _t10;
    _unknown_ _t15;
    _unknown_ _t16;
    signed int _t17;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    signed int _t21;
    _unknown_ _t27;

    __esp = __esp;
    _t17 = _a4;
    _push(_t21);
    _push(__edi);
    if(_t17 >=  *4243144) {
L12:
         *4242004 =  *4242004 & 0;
         *4242000 = 9;
        _t10 = _t9 | 255;
        goto L13;
    }
    __edi = 4243168 + (_t17 >> 5) * 4;
    _t21 = (_t17 & 31) << 3;
    _t9 =  *__edi + _t21;
    if(( *(_t9 + 4) & 1) == 0 ||  *_t9 == 255) {
        goto L12;
    } else {
        _t27 =  *4239548 - 1;
        if(_t27 != 0) {
L11:
             *(_t21 +  *__edi) =  *(_t21 +  *__edi) | 255;
            _t10 = 0;
            goto L13;
        }
        if(_t27 == 0) {
            _push(0);
            _push(246);
            goto L10;
        }
        if(_t27 == 0) {
            _push(0);
            _push(245);
            goto L10;
        }
        if(_t27 != 0) {
            goto L11;
        }
        _push(0);
        _push(244);
        goto L10;
L10:
        SetStdHandle();
        goto L11;
    }
L13:
    _pop(__edi);
    _pop(__esi);
    return _t10;
}

L004083F0(_unknown_ __esp, signed int _a4)
{
    signed int _t8;

    __esp = __esp;
    _t8 = _a4;
    if(_t8 <  *4243144) {
        _t8 =  *((intOrPtr*)(4243168 + (_t8 >> 5) * 4)) + (_t8 & 31) * 8;
        if(( *(_t8 + 4) & 1) != 0) {
            return  *_t8;
        }
    }
     *4242004 =  *4242004 & 0;
     *4242000 = 9;
    return _t8 | 255;
}

L0040842C(signed int _a4)
{
    signed int* __ebx;
    signed int __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t10;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t18;
    void* _t19;
    signed int _t24;
    long _t25;

    __edi = _a4;
    if(__edi >=  *4243144) {
L12:
         *4242004 =  *4242004 & 0;
         *4242000 = 9;
        return _t10 | 255;
    }
    __ebx = 4243168 + (__edi >> 5) * 4;
    _t10 =  *__ebx;
    _t24 = (__edi & 31) << 3;
    if(( *(_t10 + _t24 + 4) & 1) == 0) {
        goto L12;
    }
    _push(__edi);
    _t14 = L004083F0(__esp);
    _pop(__ecx);
    if(_t14 == 255) {
L8:
        _t25 = 0;
        goto L9;
    }
    if(__edi == 1 || __edi == 2) {
        _push(2);
        _t17 = L004083F0(__esp);
        _push(1);
        _t18 = L004083F0(__esp);
        _pop(__ecx);
        _pop(__ecx);
        if(_t18 == _t17) {
            goto L8;
        }
    }
L6:
    _push(__edi);
    _t19 = L004083F0(__esp);
    _pop(__ecx);
    if(CloseHandle(_t19) != 0) {
        goto L8;
    }
    _t25 = GetLastError();
L9:
    _push(__edi);
    L00408376(__esp);
    _t10 =  *__ebx;
    _pop(__ecx);
     *(_t10 + _t24 + 4) = 0;
    if(_t25 == 0) {
        return 0;
    }
    _push(_t25);
    L00408278(__esp);
    _pop(__ecx);
L13:
    return _t10 | 255;
    goto L13;
}

L004084DF(intOrPtr* _a4)
{
    intOrPtr* __esi;
    signed int _t14;
    _unknown_ _t15;

    __esi = _a4;
    _t14 =  *(__esi + 12);
    if((_t14 & 4294967295 & 131) == 0) {
        return ;
    }
    if((_t14 & 4294967295 & 8) == 0) {
        return ;
    }
    _push( *((intOrPtr*)(__esi + 8)));
    L0040403C(_t14);
     *(__esi + 12) =  *(__esi + 12) & 64503;
    _pop(__ecx);
     *__esi = 0;
     *((intOrPtr*)(__esi + 8)) = 0;
     *((intOrPtr*)(__esi + 4)) = 0;
    return;
}

L0040850A(intOrPtr _a4)
{
    intOrPtr _v8;
    char _v10;
    char _v16;
    signed int _t9;
    signed int _t11;
    _unknown_ _t12;

    _push(6);
    _v8 =  *4240536;
    _push( &_v16);
    _push(4100);
    _push(_a4);
    _v10 = 0;
    _t9 = GetLocaleInfoA();
    if(_t9 != 0) {
        _push( ?_? ( &_v16));
        L004089CE( &_v16);
        _pop(__ecx);
    } else {
        _t11 = _t9 | 255;
    }
    L004041A2(_v8);
    return;
}

L0040854D()
{
    _unknown_ _t56;
    _unknown_ _t60;
    int _t61;
    short* _t62;
    _unknown_ _t65;
    _unknown_ _t66;
    _unknown_ _t67;
    int _t69;

    _push(56);
    _push(4234648);
    L00403BD0(_t60, _t65, _t67);
     *((intOrPtr*)(__ebp - 28)) =  *4240536;
     *(__ebp - 52) = 0;
     *(__ebp - 68) = 0;
    _t61 =  *( *(__ebp + 20));
     *(__ebp - 64) = _t61;
     *(__ebp - 60) = 0;
    _t55 =  *(__ebp + 8);
    if(_t55 ==  *(__ebp + 12)) {
        _t62 =  *(__ebp - 72);
    } else {
        _t63 = __ebp - 48;
         *GetCPInfo(_t55, __ebp - 48);
        if(_t55 != 0 &&  *(__ebp - 48) == 1) {
            _t55 = __ebp - 48;
             *GetCPInfo( *(__ebp + 12), _t55);
            if(_t55 != 0 &&  *(__ebp - 48) == 1) {
                 *(__ebp - 60) = 1;
            }
        }
        if( *(__ebp - 60) == 0) {
            _t69 =  *(__ebp - 56);
        } else {
            if(_t61 == 255) {
                _push( *(__ebp + 16));
                L00404080(_t55, __esp);
                _pop(__ecx);
                _t69 =  &((_t55)[1]);
            } else {
                _t69 = _t61;
            }
             *(__ebp - 56) = _t69;
        }
        if( *(__ebp - 60) != 0) {
L14:
             *(__ebp - 4) = 0;
            L00403D30( &((_t69 + _t69)[3]) & 252, _t63, __esp);
             *(__ebp - 24) = __esp;
            _t62 = __esp;
             *(__ebp - 72) = _t62;
            _t55 = _t69 + _t69;
            _push(_t55);
            _push(0);
            _push(_t62);
            L004045E0(__esp);
            __esp =  &((__esp)[6]);
             *(__ebp - 4) =  *(__ebp - 4) | 255;
            if(_t62 != 0) {
L19:
                MultiByteToWideChar( *(__ebp + 8), 1,  *(__ebp + 16),  *(__ebp - 64), _t62, _t69);
                if(_t55 == 0) {
                    goto L31;
                }
            } else {
                _push(_t69);
                _push(2);
                L00404245(__esp);
                _pop(__ecx);
                _pop(__ecx);
                _t62 = _t55;
                if(_t62 != 0) {
                     *(__ebp - 68) = 1;
                    goto L19;
                }
L17:
L34:
                __esp = __ebp - 84;
                L004041A2( *((intOrPtr*)(__ebp - 28)));
                L00403C0B();
                return;
            }
L20:
            if( *(__ebp + 24) == 0) {
                if( *(__ebp - 60) != 0) {
L25:
                    _push(_t69);
                    _push(1);
                    L00404245(__esp);
                    _pop(__ecx);
                    _pop(__ecx);
                     *(__ebp - 52) = _t55;
                    if(_t55 != 0) {
                        WideCharToMultiByte( *(__ebp + 12), 0, _t62, _t69, _t55, _t69, 0, 0);
                        if(_t55 != 0) {
                            if( *(__ebp - 64) != 255) {
                                _t63 =  *(__ebp + 20);
                                 *( *(__ebp + 20)) = _t55;
                            }
                        } else {
                            _push( *(__ebp - 52));
                            L0040403C(_t55);
                            _pop(__ecx);
                             *(__ebp - 52) = 0;
                        }
                    }
                    goto L31;
                }
                goto L24;
            }
            WideCharToMultiByte( *(__ebp + 12), 0, _t62, _t69,  *(__ebp + 24),  *(__ebp + 28), 0, 0);
            if(_t55 != 0) {
                _t55 =  *(__ebp + 24);
                 *(__ebp - 52) =  *(__ebp + 24);
            }
            goto L31;
L24:
            WideCharToMultiByte( *(__ebp + 12), 0, _t62, _t69, 0, 0, 0, 0);
            _t69 = _t55;
            if(_t69 == 0) {
                goto L31;
            }
            goto L25;
        }
        MultiByteToWideChar( *(__ebp + 8), 1,  *(__ebp + 16), _t61, 0, 0);
        _t69 = _t55;
         *(__ebp - 56) = _t69;
        if(_t69 == 0) {
            goto L17;
        }
        goto L14;
    }
L31:
    if( *(__ebp - 68) != 0) {
        _push(_t62);
        L0040403C(_t55);
        _pop(__ecx);
    }
    goto L34;
}

L004089CE(_unknown_ __eax, signed char* _a4)
{
    _unknown_ __esi;
    _unknown_ _t6;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t12;
    signed int _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    signed char* _t16;
    signed char* _t17;

    _push(_t15);
    _t16 = _a4;
    while(1) {
        _push( *_t16 & 255);
        _t8 = L00408A26();
        _pop(__ecx);
        if(_t8 == 0) {
            break;
        } else {
            _t16 =  &(_t16[1]);
            continue;
        }
    }
    _t13 =  *_t16 & 255;
    _t17 =  &(_t16[1]);
    __edx = _t13;
    if(_t13 == 45 || _t13 == 43) {
        _t13 =  *_t17 & 255;
        _t17 =  &(_t17[1]);
    }
    _t9 = 0;
    while() {
    }
}

L00408A26(signed int _a4, char _a6, signed int _a7)
{
    short _v6;
    signed char _v8;
    _unknown_ __ebp;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t30;
    signed int _t31;
    _unknown_ _t32;
    _unknown_ _t33;

    _push(_t30);
    _t31 = _a4;
    if(_t31 <= 255) {
        if( *4240544 <= 1) {
            return  *( *4240528 + _t31 * 2) & 255 & 8;
        }
        _push(8);
        _push(_t31);
        _t20 = L00404318(_t31);
        _pop(__ecx);
        _pop(__ecx);
        return _t20;
    } else {
        _v8 = _v8 & 0;
        _push(_t32);
        asm("stosw ");
        _a6 = _t31 >> 8 & 4294967295;
        _a7 = _t31 & 4294967295;
        _pop(__edi);
        if( *4242584 == 0) {
            return 0;
        }
        _push(1);
        _push( *4242580);
        _push( *4242852);
        _push( &_v8);
        _push(2);
        _push( &_a6);
        _push(1);
        _t26 = L004070AD();
        __esp = __esp + 28;
        if(_t26 == 0) {
            return 0;
        }
        if(_v6 != 0) {
            return 0;
        }
        if((_v8 & 8) == 0) {
            return 0;
        }
        return 1;
    }
    goto L10;
L10:
}

L00408A26(signed int _a4, char _a6, signed int _a7)
{
    short _v6;
    signed char _v8;
    _unknown_ __ebp;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t30;
    signed int _t31;
    _unknown_ _t32;
    _unknown_ _t33;

    _push(_t30);
    _t31 = _a4;
    if(_t31 <= 255) {
        if( *4240544 <= 1) {
            return  *( *4240528 + _t31 * 2) & 255 & 8;
        }
        _push(8);
        _push(_t31);
        _t20 = @rec 0x00404318@L00404318@(_t31);
        _pop(__ecx);
        _pop(__ecx);
        return _t20;
    } else {
        _v8 = _v8 & 0;
        _push(_t32);
        asm("stosw ");
        _a6 = _t31 >> 8 & 4294967295;
        _a7 = _t31 & 4294967295;
        _pop(__edi);
        if( *4242584 == 0) {
            return 0;
        }
        _push(1);
        _push( *4242580);
        _push( *4242852);
        _push( &_v8);
        _push(2);
        _push( &_a6);
        _push(1);
        _t26 = @rec 0x004070AD@L004070AD@();
        __esp = __esp + 28;
        if(_t26 == 0) {
            return 0;
        }
        if(_v6 != 0) {
            return 0;
        }
        if((_v8 & 8) == 0) {
            return 0;
        }
        return 1;
    }
    goto L10;
L10:
}

// Statistics:
//    1380 Register nodes
//    2920 Temporaries nodes
//     191 Casts
//    3505 Statements
//     846 Labels
//     338 Gotos
//     298 Blocks
//   15571 Nodes
//      49 Assembly nodes
//     601 Unknown Types


