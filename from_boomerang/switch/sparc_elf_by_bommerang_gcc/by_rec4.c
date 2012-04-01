L00010988(_unknown_ __i7)
{
    _unknown_ _t10;
    _unknown_ _t12;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t25;

    __i7 = __i7;
    L1();
    __o1 =  *((void*)(0x10d00 + __o7 + ("/usr/lib/ld.so.1" | 4)));
    2348902840();
    if( *((void*)( *__o1)) - "/usr/lib/ld.so.1") {
        goto ( *((void*)( *__o1 - 4)) + "/usr/lib/ld.so.1");
        asm("bne,a 0xffffffe0");
    }
    __deregister_frame_info(__i0, __i7);
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010994(signed int __l7, _unknown_ __i7)
{
    _unknown_ _t10;
    _unknown_ _t12;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t25;

    __i7 = __i7;
    __o1 =  *((void*)((__l7 | 256) + __o7 + ("/usr/lib/ld.so.1" | 4)));
    2349009040();
    if( *((void*)( *__o1)) - "/usr/lib/ld.so.1") {
        goto ( *((void*)( *__o1 - 4)) + "/usr/lib/ld.so.1");
        asm("bne,a 0xffffffe0");
    }
    __deregister_frame_info(__i0, __i7);
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010A10(_unknown_ __i7)
{
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t12;

    __i7 = __i7;
    L1();
    __register_frame_info(__i1, __i7);
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010A1C(_unknown_ __l7, _unknown_ __i7)
{
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t12;

    __i7 = __i7;
    __register_frame_info(__i1, __i7);
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

main(_unknown_ __i0, _unknown_ __i7)
{// addr = 0x00010A54
    _unknown_ _t4;
    _unknown_ _t7;
    signed int _t8;
    _unknown_ _t11;

    __i7 = __i7;
    _t8 = __i0 + 4294967294;
    if(_t8 - 5) {
        goto ( *((void*)(0x10a7c + (_t8 << 2))) + "/usr/lib/ld.so.1");
        asm("!UNIMP");
        asm("!UNIMP");
        asm("!UNIMP");
        asm("!UNIMP");
        asm("!UNIMP");
        asm("!UNIMP");
    }
    printf();
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010AF4(signed int __o0, signed int __o1, signed int __o2, _unknown_ __o7, signed int __i0, signed int __i1, signed int* __i2, signed int* __i3, signed int* __i4, _unknown_ __i7, signed int __flags, char _a8)
{
    signed int _t20;
    signed int _t22;

    __flags = __flags;
    __i7 = __i7;
    __i4 = __i4;
    __i3 = __i3;
    __i2 = __i2;
    __i1 = __i1;
    __i0 = __i0;
    __o7 = __o7;
    __o1 = __o1;
    __o0 = __o0;
    _t22 = "/usr/lib/ld.so.1" | __o2;
    __o3 = _t22;
    while(1) {
        __r3 =  *__o0;
        __o0 = __o0 + 1;
        _t20 = (__r3 & 127) << _t22;
        asm("andcc %g3, 128, %g0");
        "/usr/lib/ld.so.1" = 637458432;
        if(__flags) {
            break;
        }
        __o3 = __o3 | _t20;
    }
    goto ( &_a8);
    __o3 =  *__o1;
    __r3 = "/usr/lib/ld.so.1" | __r3;
    __o2 = __r3;
    while(1) {
L5:
        __o3 =  *__o0;
        __o0 = __o0 + 1;
        __r2 = __o3 & 127;
        __r2 = (__o3 & 127) << __r3;
        __o2 = __o2 | __r2;
        asm("andcc %o3, 128, %g0");
        "/usr/lib/ld.so.1" = 637458432;
        if(__flags) {
            break;
        }
    }
    __r3 = __r3 + 7;
    __flags = __r3 - 31;
    "/usr/lib/ld.so.1" = 637458432;
    if(__flags) {
        asm("andcc %o3, 64, %g0");
        "/usr/lib/ld.so.1" = 637458432;
        if(__flags) {
            __r2 = 4294967295 | __r2;
            __o2 = __o2 | __r2;
        }
    }
    goto ( &_a8);
    __o2 =  *__o1;
    __r2 = __o1 << 2;
    __flags = __o1 - "/usr/lib/ld.so.1";
    "/usr/lib/ld.so.1" = 637458432;
    if(__o1 - "/usr/lib/ld.so.1") {
        __o2 =  *(__o0 + __r2);
        __o0 = __r2 + __o0;
        while(1) {
L12:
            __o3 =  *__o0;
            __o2 =  *(__o0 - 4);
            __r3 =  *(__o3 + 8);
            __r2 =  *(__o2 + 8);
            __flags =  *(__o3 + 8) -  *(__o2 + 8);
            asm("bpos 0x00000018");
            asm("addcc %o1, -1, %o1");
            __o2 =  *__o0;
            __o3 =  *(__o0 - 4);
            "/usr/lib/ld.so.1" = 637458432;
            if(__flags) {
                break;
            }
        }
        __o0 = __o0 + 4294967292;
    }
    __r2 =  *__o0;
    __o1 = "/usr/lib/ld.so.1" | __o1;
    __flags =  *__o0 - __o1;
    "/usr/lib/ld.so.1" = 637458432;
    if( *__o0 - __o1) {
        while(1) {
L17:
            __r2 =  *(__o0 + 4);
            __flags =  *(__o0 + 4) - "/usr/lib/ld.so.1";
            asm("be,a 0x0000001c");
             *__o0 =  *((void*)(__o0 + 8));
            __flags =  *((void*)(__o0 + 8)) - "/usr/lib/ld.so.1";
            asm("bne,a 0x00000008");
            __o1 = __o1 + 1;
            __r2 =  *__o0;
            __r2 = __o0 +  *__o0;
            __r3 =  *(__r2 + 4);
            __flags =  *(__r2 + 4) - "/usr/lib/ld.so.1";
            "/usr/lib/ld.so.1" = 637458432;
            if( *(__r2 + 4) - "/usr/lib/ld.so.1") {
                break;
            }
        }
        __o0 = __r2 + 4;
    }
    goto ( &_a8);
    __o0 = __o1;
    __l0 =  *__i2;
    __l2 =  *__i3;
    __o0 =  *__i0;
    __flags =  *__i0 - "/usr/lib/ld.so.1";
    "/usr/lib/ld.so.1" = 637458432;
    if( *__i0 - "/usr/lib/ld.so.1") {
        __l1 =  *__i4;
        goto L22;
        do {
L22:
            __o0 =  *(__i0 + 4);
            __flags =  *(__i0 + 4) - "/usr/lib/ld.so.1";
            asm("be,a 0x00000050");
             *__i0 =  *(__i0 + 8);
            __flags =  *(__i0 + 8) - "/usr/lib/ld.so.1";
            "/usr/lib/ld.so.1" = 637458432;
            if( *(__i0 + 8) - "/usr/lib/ld.so.1") {
                __o1 = __l0;
                __o0 = __i1;
                L10();
                __o2 = __i0;
                __o1 =  *(__i0 + 8);
                __flags = __o1 - __l2;
                "/usr/lib/ld.so.1" = 637458432;
                if( !(__o1 - __l2)) {
                    __l0 = __l0 + 1;
                    __l2 = __o1;
                }
                __o0 =  *(__i0 + 12);
                __o0 = __o1 +  *(__i0 + 12);
                __flags = __o0 - __l1;
                asm("bgu,a 0x00000008");
                __l1 = __o0;
            }
            goto L26;
L26:
            __o0 =  *__i0;
            __o0 = __i0 +  *__i0;
            __o1 =  *(__o0 + 4);
            __flags =  *(__o0 + 4) - "/usr/lib/ld.so.1";
            "/usr/lib/ld.so.1" = 637458432;
        } while( *(__o0 + 4) - "/usr/lib/ld.so.1");
        __i0 = __o0 + 4;
    }
    __l0 =  *__i2;
    __l2 =  *__i3;
    __l1 =  *__i4;
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010B28(signed int __r3, _unknown_ __o0, signed int __o1, _unknown_ __o7, void* __i0, _unknown_ __i1, _unknown_ __i2, void* __i3, _unknown_ __i4, _unknown_ __i7, _unknown_ __flags, char _a8)
{
    _unknown_ _t19;
    signed int _t22;
    _unknown_ _t26;
    signed int _t31;
    _unknown_ _t35;
    _unknown_ _t36;
    void* _t37;
    void* _t38;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t43;
    _unknown_ _t45;
    _unknown_ _t47;
    signed int _t50;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t56;
    _unknown_ _t57;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t60;
    _unknown_ _t62;
    _unknown_ _t63;
    _unknown_ _t66;
    _unknown_ _t67;
    _unknown_ _t68;
    _unknown_ _t69;
    _unknown_ _t70;
    _unknown_ _t71;
    _unknown_ _t72;
    void _t73;
    _unknown_ _t74;
    _unknown_ _t75;
    void* _t76;
    _unknown_ _t77;
    _unknown_ _t78;
    _unknown_ _t79;
    _unknown_ _t83;
    _unknown_ _t84;
    _unknown_ _t87;
    _unknown_ _t90;

    _t78 = __flags;
    __i7 = __i7;
    __i4 = __i4;
    __i3 = __i3;
    __i2 = __i2;
    __i1 = __i1;
    _t76 = __i0;
    __o7 = __o7;
    _t50 = __o1;
    _t35 = __o0;
    _t31 = "/usr/lib/ld.so.1" | __r3;
    while(1) {
L1:
        _t36 = _t35 + 1;
        asm("andcc %o3, 128, %g0");
        if(_t78) {
            break;
        }
    }
    _t79 = _t31 + 7 - 31;
    if(_t79) {
        asm("andcc %o3, 64, %g0");
        if(_t79) {
        }
    }
    goto ( &_a8);
    _t22 = _t50 << 2;
    if(_t50 - "/usr/lib/ld.so.1") {
        _t37 = _t22 + _t36;
        while(1) {
L8:
            asm("bpos 0x00000018");
            asm("addcc %o1, -1, %o1");
            if( *((void*)( *_t37 + 8)) -  *((void*)( *((void*)(_t37 - 4)) + 8))) {
                break;
            }
        }
        _t38 = _t37 + 4294967292;
    }
    if( *_t38 - ("/usr/lib/ld.so.1" | _t50)) {
        while(1) {
L13:
            asm("be,a 0x0000001c");
            asm("bne,a 0x00000008");
            if( *((void*)(_t38 +  *_t38 + 4)) - "/usr/lib/ld.so.1") {
                break;
            }
        }
    }
    goto L15;
L16:
    _t73 =  *__i3;
    if( *_t76 - "/usr/lib/ld.so.1") {
        goto L18;
        do {
L18:
            asm("be,a 0x00000050");
            if( *((void*)(_t76 + 8)) - "/usr/lib/ld.so.1") {
                L6();
                if( !( *((void*)(_t76 + 8)) - _t73)) {
                }
                asm("bgu,a 0x00000008");
            }
            goto L22;
L22:
        } while( *((void*)(_t76 +  *_t76 + 4)) - "/usr/lib/ld.so.1");
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
L15:
    goto ( &_a8);
    goto L16;
}

L00010B74(_unknown_ __o0, signed int __o1, _unknown_ __o7, void* __i0, _unknown_ __i1, void* __i2, void* __i3, _unknown_ __i4, _unknown_ __i7, char _a8)
{
    signed int _t17;
    _unknown_ _t21;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    void* _t36;
    void* _t37;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t42;
    _unknown_ _t46;
    signed int _t49;
    _unknown_ _t51;
    _unknown_ _t55;
    _unknown_ _t57;
    _unknown_ _t58;
    _unknown_ _t60;
    void _t61;
    _unknown_ _t62;
    _unknown_ _t63;
    _unknown_ _t64;
    _unknown_ _t65;
    _unknown_ _t66;
    void _t67;
    _unknown_ _t68;
    _unknown_ _t69;
    void* _t70;
    _unknown_ _t71;
    _unknown_ _t75;
    _unknown_ _t76;
    _unknown_ _t79;
    _unknown_ _t82;

    __i7 = __i7;
    __i4 = __i4;
    __i3 = __i3;
    __i2 = __i2;
    __i1 = __i1;
    _t70 = __i0;
    __o7 = __o7;
    _t49 = __o1;
    _t35 = __o0;
    _t17 = _t49 << 2;
    if(_t49 - "/usr/lib/ld.so.1") {
        _t36 = _t17 + _t35;
        while(1) {
L2:
            asm("bpos 0x00000018");
            asm("addcc %o1, -1, %o1");
            if( *((void*)( *_t36 + 8)) -  *((void*)( *((void*)(_t36 - 4)) + 8))) {
                break;
            }
        }
        _t37 = _t36 + 4294967292;
    }
    if( *_t37 - ("/usr/lib/ld.so.1" | _t49)) {
        while(1) {
L7:
            asm("be,a 0x0000001c");
            asm("bne,a 0x00000008");
            if( *((void*)(_t37 +  *_t37 + 4)) - "/usr/lib/ld.so.1") {
                break;
            }
        }
    }
    goto L9;
L10:
    _t61 =  *__i2;
    _t67 =  *__i3;
    if( *_t70 - "/usr/lib/ld.so.1") {
        goto L12;
        do {
L12:
            asm("be,a 0x00000050");
            if( *((void*)(_t70 + 8)) - "/usr/lib/ld.so.1") {
                L00010B74(__i1, _t61, __o7, _t70, __i1, __i2, __i3, __i4, __i7);
                if( !( *((void*)(_t70 + 8)) - _t67)) {
                }
                asm("bgu,a 0x00000008");
            }
            goto L16;
L16:
        } while( *((void*)(_t70 +  *_t70 + 4)) - "/usr/lib/ld.so.1");
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
L9:
    goto ( &_a8);
    goto L10;
}

L00010BBC(_unknown_ __l0, _unknown_ __l1, _unknown_ __l2, void* __i0, void* __i2, void* __i3, _unknown_ __i4, _unknown_ __i7, char _a8)
{
    _unknown_ _t13;
    void* _t17;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t22;
    _unknown_ _t26;
    signed int _t29;
    _unknown_ _t31;
    _unknown_ _t35;
    void _t36;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t41;
    _unknown_ _t42;
    _unknown_ _t43;
    void _t44;
    _unknown_ _t45;
    _unknown_ _t46;
    void* _t47;
    _unknown_ _t48;
    _unknown_ _t50;
    _unknown_ _t51;
    _unknown_ _t54;
    _unknown_ _t57;

    __i7 = __i7;
    __i4 = __i4;
    __i3 = __i3;
    __i2 = __i2;
    _t47 = __i0;
    if( *_t17 - ("/usr/lib/ld.so.1" | _t29)) {
        while(1) {
L2:
            asm("be,a 0x0000001c");
            asm("bne,a 0x00000008");
            if( *((void*)(_t17 +  *_t17 + 4)) - "/usr/lib/ld.so.1") {
                break;
            }
        }
    }
    goto ( &_a8);
    _t36 =  *__i2;
    _t44 =  *__i3;
    if( *_t47 - "/usr/lib/ld.so.1") {
        goto L7;
        do {
L7:
            asm("be,a 0x00000050");
            if( *((void*)(_t47 + 8)) - "/usr/lib/ld.so.1") {
                L00010B74(__i1, _t36, __o7, _t47, __i1, __i2, __i3, __i4, __i7);
                if( !( *((void*)(_t47 + 8)) - _t44)) {
                }
                asm("bgu,a 0x00000008");
            }
            goto L11;
L11:
        } while( *((void*)(_t47 +  *_t47 + 4)) - "/usr/lib/ld.so.1");
    }
    goto L13;
L14:
L13:
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
    goto L14;
}

L00010C10(_unknown_ __l0, _unknown_ __l1, _unknown_ __l2, void* __i0, void* __i2, void* __i3, _unknown_ __i4, _unknown_ __i7)
{
    _unknown_ _t9;
    _unknown_ _t13;
    _unknown_ _t19;
    void _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    void _t28;
    _unknown_ _t29;
    _unknown_ _t30;
    void* _t31;
    _unknown_ _t32;
    _unknown_ _t34;
    _unknown_ _t37;

    __i7 = __i7;
    __i4 = __i4;
    __i3 = __i3;
    __i2 = __i2;
    _t31 = __i0;
    _t20 =  *__i2;
    _t28 =  *__i3;
    if( *_t31 - "/usr/lib/ld.so.1") {
        while(1) {
L2:
            asm("be,a 0x00000050");
            if( *((void*)(_t31 + 8)) - "/usr/lib/ld.so.1") {
                L00010B74(__i1, _t20, __o7, _t31, __i1, __i2, __i3, __i4, __i7);
                if( !( *((void*)(_t31 + 8)) - _t28)) {
                }
                asm("bgu,a 0x00000008");
            }
            if( *((void*)(_t31 +  *_t31 + 4)) - "/usr/lib/ld.so.1") {
                break;
            }
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010CAC(_unknown_ __i0, _unknown_ __i6)
{
    _unknown_ _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    void* _t28;
    _unknown_ _t30;
    signed int _t33;
    signed int _t34;
    _unknown_ _t36;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t41;
    _unknown_ _t42;
    _unknown_ _t43;
    _unknown_ _t44;
    void* _t45;
    _unknown_ _t46;
    _unknown_ _t47;
    _unknown_ _t48;
    _unknown_ _t49;
    void* _t50;
    void* _t52;
    _unknown_ _t54;
    signed int _t55;
    _unknown_ _t56;

    __i6 = __i6;
    __i0 = __i0;
    _t28 =  *((void*)(__i0 + 12));
    if(_t28 - "/usr/lib/ld.so.1") {
        L00010BBC(__l0, __l1, __l2, __i0, __i2, __i3, __i4, __i7);
L6:
L7:
        malloc();
        _t34 = _t33 << 2;
        "/usr/lib/ld.so.1" =  *((void*)(__i6 - 28));
        "/usr/lib/ld.so.1" =  *(__i6 - 20);
        _t45 =  *((void*)(__i0 + 12));
        if(_t45 - "/usr/lib/ld.so.1") {
            L00010C10(__l0, __l1, __l2, __i0, __i2, __i3, __i4, __i7);
        } else {
            _t55 = _t34;
            _t52 = _t45;
            if( *_t52 - "/usr/lib/ld.so.1") {
                while(1) {
L10:
                    L00010C10(_t52, _t55, __l2, __i0, __i2, __i3, __i4, __i7);
                    if( *((void*)(_t52 + 4)) - "/usr/lib/ld.so.1") {
                        break;
                    }
                }
            }
L14:
        }
        goto (__i7 + 8);
        asm("restore %g0, %g0, %g0");
        goto L14;
    }
    _t50 = _t28;
    "/usr/lib/ld.so.1" =  *(__i6 - 20);
    if( *_t50 - "/usr/lib/ld.so.1") {
        goto L6;
    } else {
        while(1) {
L3:
            L00010BBC(_t50, _t54, __l2, __i0, __i2, __i3, __i4, __i7);
            if( *((void*)(_t50 + 4)) - "/usr/lib/ld.so.1") {
                break;
            }
        }
        _t33 =  *(__i6 - 20);
    }
    goto L7;
}

L00010DBC(signed int __o3, _unknown_ __i0, _unknown_ __i7)
{
    _unknown_ _t15;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    signed int _t23;
    signed int _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t30;
    _unknown_ _t31;
    void* _t32;
    void _t33;
    void _t34;
    _unknown_ _t35;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t41;
    _unknown_ _t44;
    _unknown_ _t45;
    _unknown_ _t47;
    _unknown_ _t48;
    _unknown_ _t49;
    _unknown_ _t51;

    __i7 = __i7;
    _t38 = __i0;
    _t23 = __o3;
    L1();
    _t32 =  *((void*)( *((void*)(0x108cc + __o7 + ("/usr/lib/ld.so.1" | 24)))));
    if(_t32 - "/usr/lib/ld.so.1") {
        __l1 = _t38;
        if( *_t32 - "/usr/lib/ld.so.1") {
            L00010CAC(_t38, __i6);
        }
        asm("bcs,a 0x0000001c");
        _t33 =  *((void*)(_t32 + 20));
        if(__l1 -  *((void*)(_t33 + 4)) ^ 0) {
            _t34 =  *((void*)(_t33 + 20));
            asm("bne,a 0xffffffc4");
            _t49 = _t34 - "/usr/lib/ld.so.1";
        }
    }
    if(_t49) {
        _t24 = "/usr/lib/ld.so.1" | _t23;
        if( !(_t24 -  *((void*)(_t34 + 16)))) {
            goto L9;
            do {
L9:
                asm("bcc,a 0x00000010");
            } while(_t24 - 637458432 ^ 0);
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010DC8(signed int __o3, _unknown_ __i0, _unknown_ __i7)
{
    _unknown_ _t15;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    signed int _t23;
    signed int _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t30;
    _unknown_ _t31;
    void* _t32;
    void _t33;
    void _t34;
    signed int _t35;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t41;
    _unknown_ _t44;
    _unknown_ _t45;
    _unknown_ _t47;
    _unknown_ _t48;
    _unknown_ _t49;
    _unknown_ _t51;

    __i7 = __i7;
    _t38 = __i0;
    _t23 = __o3;
    _t32 =  *((void*)( *((void*)((_t35 | 204) + __o7 + ("/usr/lib/ld.so.1" | 24)))));
    if(_t32 - "/usr/lib/ld.so.1") {
        __l1 = _t38;
        if( *_t32 - "/usr/lib/ld.so.1") {
            L00010CAC(_t38, __i6);
        }
        asm("bcs,a 0x0000001c");
        _t33 =  *((void*)(_t32 + 20));
        if(__l1 -  *((void*)(_t33 + 4)) ^ 0) {
            _t34 =  *((void*)(_t33 + 20));
            asm("bne,a 0xffffffc4");
            _t49 = _t34 - "/usr/lib/ld.so.1";
        }
    }
    if(_t49) {
        _t24 = "/usr/lib/ld.so.1" | _t23;
        if( !(_t24 -  *((void*)(_t34 + 16)))) {
            while(1) {
L8:
                asm("bcc,a 0x00000010");
                if(_t24 - 637458432 ^ 0) {
                    break;
                }
            }
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010EA4(_unknown_ __o0, _unknown_ __i6, _unknown_ __i7)
{
    _unknown_ _t14;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t19;
    _unknown_ _t29;
    _unknown_ _t30;
    signed int _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t36;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t41;
    _unknown_ _t42;
    _unknown_ _t47;
    _unknown_ _t49;
    _unknown_ _t56;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t60;
    signed int _t63;
    _unknown_ _t65;

    __i7 = __i7;
    __i6 = __i6;
    L1();
    strcmp();
    if( *__i1 - "/usr/lib/ld.so.1") {
L5:
        strlen();
        _t52 =  *__i1;
        __l0 =  *__i1 +  *__i1;
        _t61 = __l0 + 1;
        strcmp();
        asm("bne,a 0x00000038");
        "/usr/lib/ld.so.1" =  *((void*)(__i1 + 4));
        _t55 = (__l0 + 1)[0] << 16 |  *(__l0 + 1) << 24;
        _t62 = __l0 + 5;
        _t31 = __l0 + 5;
        L00010AF4(_t31,  *(_t61 + 2) << 8 | (__l0 + 1)[0] << 16 |  *(__l0 + 1) << 24, (__l0 + 1)[0] << 16 |  *(__l0 + 1) << 24, __o7, __l0 + 5, __i1, __i2, __i3, __i4, __i7, _t52 - "/usr/lib/ld.so.1");
        L00010B28(__r3, _t31, __i1 + 8, __o7, _t62, __i1, __i2, __i3, __i4, __i7, _t52 - "/usr/lib/ld.so.1");
        _t63 = _t31;
        _t48 =  *__i1;
        _t70 =  *((void*)( *__i1)) - 122;
        if( *((void*)( *__i1)) - 122) {
            L00010AF4(_t63 + 1, _t48, _t55, __o7, _t63 + 1, __i1, __i2, __i3, __i4, __i7, _t70);
        }
    } else {
        strcmp();
        if( *__i1 - "/usr/lib/ld.so.1") {
            goto L5;
        } else {
            if( *((void*)( *__i1)) - 122) {
                goto L5;
            }
L8:
        }
    }
L7:
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
    goto L8;
}

L00010EB0(_unknown_ __o0, _unknown_ __i6, _unknown_ __i7)
{
    _unknown_ _t14;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t19;
    _unknown_ _t29;
    _unknown_ _t30;
    signed int _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t36;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t41;
    _unknown_ _t42;
    _unknown_ _t47;
    _unknown_ _t49;
    _unknown_ _t56;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t60;
    signed int _t63;
    _unknown_ _t65;

    __i7 = __i7;
    __i6 = __i6;
    strcmp();
    __o7 = 637458432;
    if( *__i1 - "/usr/lib/ld.so.1") {
L4:
        strlen();
        _t52 =  *__i1;
        __l0 =  *__i1 +  *__i1;
        _t61 = __l0 + 1;
        strcmp();
        asm("bne,a 0x00000038");
        "/usr/lib/ld.so.1" =  *((void*)(__i1 + 4));
        _t55 = (__l0 + 1)[0] << 16 |  *(__l0 + 1) << 24;
        _t62 = __l0 + 5;
        _t31 = __l0 + 5;
        L00010AF4(_t31,  *(_t61 + 2) << 8 | (__l0 + 1)[0] << 16 |  *(__l0 + 1) << 24, (__l0 + 1)[0] << 16 |  *(__l0 + 1) << 24, __o7, __l0 + 5, __i1, __i2, __i3, __i4, __i7, _t52 - "/usr/lib/ld.so.1");
        L00010B28(__r3, _t31, __i1 + 8, __o7, _t62, __i1, __i2, __i3, __i4, __i7, _t52 - "/usr/lib/ld.so.1");
        _t63 = _t31;
        _t48 =  *__i1;
        _t70 =  *((void*)( *__i1)) - 122;
        __o7 = 637458432;
        if( *((void*)( *__i1)) - 122) {
L5:
            L00010AF4(_t63 + 1, _t48, _t55, 637458432, _t63 + 1, __i1, __i2, __i3, __i4, __i7, _t70);
        }
        goto L6;
    }
    strcmp();
    __o7 = 637458432;
    if( *__i1 - "/usr/lib/ld.so.1") {
        goto L4;
    }
    __o7 = 637458432;
    if( *((void*)( *__i1)) - 122) {
L6:
        goto (__i7 + 8);
        asm("restore %g0, %g0, %g0");
    }
    goto L4;
}

L00010FCC(_unknown_ __o0, _unknown_ __o7, _unknown_ __i1, _unknown_ __i2, signed int* __i3, _unknown_ __i6, _unknown_ __flags, char _a20)
{
    _unknown_ _t15;
    _unknown_ _t17;
    _unknown_ _t19;
    signed int* _t20;
    _unknown_ _t21;

    __flags = __flags;
    __i6 = __i6;
    __i3 = __i3;
    __i2 = __i2;
    __i1 = __i1;
    __o7 = __o7;
    __o2 =  *_t20;
    asm("andcc %o2, 64, %g0");
    __o7 = 637458432;
    if(__flags) {
        asm("andcc %o2, 128, %g0");
        __o7 = 637458432;
        if(__flags) {
            asm("andcc %o2, 192, %g0");
            __o7 = 637458432;
            if(__flags) {
                __o7 = 637458432;
                if(__flags) {
                    abort();
                } else {
                    __o1 = __o2 << 2;
                    L8();
                    __o0 =  ?_? ( &_a20);
                    __o0 =  *( &_a20 + __o1);
                    goto (637458432 +  *( &_a20 + __o1));
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    asm("!UNIMP");
                    __o0 =  *__i0;
                    __o2 =  *(__i0 + 1);
                    __o1 =  *(__i0 + 2);
                    __o0 =  *__i0 << 24;
                     *(__i0 + 1) << 16 =  *(__i0 + 1) << 16 |  *__i0 << 24;
                    __o1 =  *(__i0 + 2) << 8;
                    __o0 =  *(__i0 + 3);
                    __o1 =  *(__i0 + 2) << 8 |  *(__i0 + 1) << 16 |  *__i0 << 24;
                    __o0 =  *__i3;
                }
            } else {
                __flags = __o2 - 46;
                 *(__i6 - 24) = __i1 +  *(__i6 - 24);
            }
        } else {
            __o0 = __o2 & 63;
            __o0 =  *(__i6 - 24);
            L00010AF4(__o0, __o1, __o2, 637458432, __i0, __i1, __i2, __i3, __i4, __i7, __flags);
            __o1 = __i6 + 4294967276;
            __o2 =  *(__i6 - 20);
            __i0 = __o0;
            __o1 =  *(__i2 + 12);
            L00021730();
             *(__i6 - 20) =  *(__i6 - 20);
            __o1 =  *(__i6 - 24);
            __o0 = 1 |  *(__i6 - 20);
            __o1 = __i1 +  *(__i6 - 24);
            __o0 =  *(__o1 + 428);
            asm("ldd [%fp - 24], %o0");
             *(__o1 + 428) << 2 = __i1 + ( *(__o1 + 428) << 2);
        }
    } else {
        L00021730();
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00011040(_unknown_ __o0, _unknown_ __o1, _unknown_ __i0, _unknown_ __i3, _unknown_ __i7)
{
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t16;

    __i7 = __i7;
    __i3 = __i3;
    __i0 = __i0;
    goto (__o7 +  *((void*)(__o0 + __o1)));
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

__register_frame_info(void* __i1, _unknown_ __i7)
{// addr = 0x00011378
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t14;
    void* _t15;
    _unknown_ _t16;

    __i7 = __i7;
    _t15 = __i1;
    L1();
    "/usr/lib/ld.so.1" =  *((void*)(_t15 + 4));
    "/usr/lib/ld.so.1" =  *_t15;
    "/usr/lib/ld.so.1" =  *((void*)(_t15 + 12));
    "/usr/lib/ld.so.1" =  *((void*)(_t15 + 16));
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00011384(_unknown_ __l7, void* __i1, _unknown_ __i7)
{
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t14;
    void* _t15;
    _unknown_ _t16;

    __i7 = __i7;
    _t15 = __i1;
    "/usr/lib/ld.so.1" =  *((void*)(_t15 + 4));
    "/usr/lib/ld.so.1" =  *_t15;
    "/usr/lib/ld.so.1" =  *((void*)(_t15 + 12));
    "/usr/lib/ld.so.1" =  *((void*)(_t15 + 16));
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L000113CC(_unknown_ __l7, void* __i1, _unknown_ __i7)
{
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;
    void* _t17;
    _unknown_ _t18;

    __i7 = __i7;
    _t17 = __i1;
    "/usr/lib/ld.so.1" =  *((void*)(_t17 + 4));
    "/usr/lib/ld.so.1" =  *_t17;
    "/usr/lib/ld.so.1" =  *((void*)(_t17 + 16));
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

__deregister_frame_info(_unknown_ __i0, _unknown_ __i7)
{// addr = 0x00011408
    _unknown_ _t10;
    _unknown_ _t11;
    void _t13;
    void* _t14;
    _unknown_ _t15;
    _unknown_ _t16;

    __i7 = __i7;
    __i0 = __i0;
    L1();
    _t14 =  *((void*)(0x10280 + __o7 + ("/usr/lib/ld.so.1" | 24)));
    2349011724();
    if( *_t14 - "/usr/lib/ld.so.1") {
L8:
        abort();
    } else {
        goto L3;
        do {
L3:
            __o1 =  *_t14;
            2349011744();
            if( *((void*)(__o1 + 8)) - __i0) {
                goto L6;
            } else {
                2349011764();
                if( *__o1 - "/usr/lib/ld.so.1") {
                    free();
                    _t13 =  *((void*)(__o1 + 12));
                    asm("ba,a 0x00000018");
                    goto L6;
                }
L10:
            }
            goto L9;
L6:
            2349011788();
        } while(_t13 - "/usr/lib/ld.so.1");
        goto L8;
    }
L9:
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
    goto L10;
}

L00011414(signed int __l7, _unknown_ __i0, _unknown_ __i7)
{
    _unknown_ _t10;
    _unknown_ _t11;
    void _t13;
    void* _t14;
    _unknown_ _t15;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;

    __i7 = __i7;
    __i0 = __i0;
    _t14 =  *((void*)((__l7 | 640) + __o7 + ("/usr/lib/ld.so.1" | 24)));
    if( *_t14 - "/usr/lib/ld.so.1") {
L7:
        abort();
    } else {
        goto L2;
        do {
L2:
            __o1 =  *_t14;
            if( *((void*)(__o1 + 8)) - __i0) {
                goto L5;
            } else {
                if( *__o1 - "/usr/lib/ld.so.1") {
                    free();
                    _t13 =  *((void*)(__o1 + 12));
                    asm("ba,a 0x00000018");
                    goto L5;
                }
L9:
            }
            goto L8;
L5:
        } while(_t13 - "/usr/lib/ld.so.1");
        goto L7;
    }
L8:
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
    goto L9;
}

L000115B0(_unknown_ __i7)
{
    void _t7;
    _unknown_ _t10;
    _unknown_ _t11;
    void* _t12;
    _unknown_ _t14;

    __i7 = __i7;
    L1();
    _t7 =  *((void*)(0x100d8 + __o7 + ("/usr/lib/ld.so.1" | 28)));
    if( *((void*)(_t7 - 4)) - 4294967295) {
        _t12 = _t7 + 4294967292;
        while(1) {
L3:
            goto ( *_t12 + "/usr/lib/ld.so.1");
            if( *((void*)(_t12 + 4294967292)) - 4294967295) {
                break;
            }
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L000115BC(signed int __l7, _unknown_ __i7)
{
    void _t7;
    void* _t10;

    __i7 = __i7;
    _t7 =  *((void*)((__l7 | 216) + __o7 + ("/usr/lib/ld.so.1" | 28)));
    __o7 = 637458432;
    if( *((void*)(_t7 - 4)) - 4294967295) {
        _t10 = _t7 + 4294967292;
        while(1) {
L2:
            goto ( *_t10 + "/usr/lib/ld.so.1");
            __o7 = 637458432;
            if( *((void*)(_t10 + 4294967292)) - 4294967295) {
                break;
            }
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00011610(_unknown_ __i7)
{
    __i7 = __i7;
    L00010A10(__i7);
    L000115B0(__i7);
    "/usr/lib/ld.so.1" = "/usr/lib/ld.so.1";
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

atexit()
{// addr = 0x000216DC
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;

    asm("ba,a 0xffffffcc");
    asm("ba,a 0xffffffc0");
    asm("ba,a 0xffffffb4");
    asm("ba,a 0xffffffa8");
    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("ba,a 0xffffff6c");
    asm("ba,a 0xffffff60");
    asm("ba,a 0xffffff54");
    asm("ba,a 0xffffff48");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221362560();
    asm("!UNIMP");
    3221362572();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221360568();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    "/usr/lib/ld.so.1" = 389120;
    2486325304();
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

exit()
{// addr = 0x000216E8
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;

    asm("ba,a 0xffffffc0");
    asm("ba,a 0xffffffb4");
    asm("ba,a 0xffffffa8");
    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("ba,a 0xffffff6c");
    asm("ba,a 0xffffff60");
    asm("ba,a 0xffffff54");
    asm("ba,a 0xffffff48");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221362560();
    asm("!UNIMP");
    3221362572();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221360568();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    "/usr/lib/ld.so.1" = 389120;
    2486325304();
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

_exit()
{// addr = 0x000216F4
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;

    asm("ba,a 0xffffffb4");
    asm("ba,a 0xffffffa8");
    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("ba,a 0xffffff6c");
    asm("ba,a 0xffffff60");
    asm("ba,a 0xffffff54");
    asm("ba,a 0xffffff48");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221362560();
    asm("!UNIMP");
    3221362572();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221360568();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    "/usr/lib/ld.so.1" = 389120;
    2486325304();
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

printf()
{// addr = 0x00021700
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;

    asm("ba,a 0xffffffa8");
    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("ba,a 0xffffff6c");
    asm("ba,a 0xffffff60");
    asm("ba,a 0xffffff54");
    asm("ba,a 0xffffff48");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221362560();
    asm("!UNIMP");
    3221362572();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221360568();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    "/usr/lib/ld.so.1" = 389120;
    2486325304();
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

malloc()
{// addr = 0x0002170C
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;

    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("ba,a 0xffffff6c");
    asm("ba,a 0xffffff60");
    asm("ba,a 0xffffff54");
    asm("ba,a 0xffffff48");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221362560();
    asm("!UNIMP");
    3221362572();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221360568();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    "/usr/lib/ld.so.1" = 389120;
    2486325304();
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

strcmp()
{// addr = 0x00021718
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;

    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("ba,a 0xffffff6c");
    asm("ba,a 0xffffff60");
    asm("ba,a 0xffffff54");
    asm("ba,a 0xffffff48");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221362560();
    asm("!UNIMP");
    3221362572();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221360568();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    "/usr/lib/ld.so.1" = 389120;
    2486325304();
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

strlen()
{// addr = 0x00021724
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;

    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("ba,a 0xffffff6c");
    asm("ba,a 0xffffff60");
    asm("ba,a 0xffffff54");
    asm("ba,a 0xffffff48");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221362560();
    asm("!UNIMP");
    3221362572();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221360568();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    "/usr/lib/ld.so.1" = 389120;
    2486325304();
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

L00021730()
{
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;

    asm("ba,a 0xffffff78");
    asm("ba,a 0xffffff6c");
    asm("ba,a 0xffffff60");
    asm("ba,a 0xffffff54");
    asm("ba,a 0xffffff48");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221362560();
    asm("!UNIMP");
    3221362572();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221360568();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    "/usr/lib/ld.so.1" = 389120;
    2486325304();
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

memcpy()
{// addr = 0x0002173C
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    asm("ba,a 0xffffff6c");
    asm("ba,a 0xffffff60");
    asm("ba,a 0xffffff54");
    asm("ba,a 0xffffff48");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221362560();
    asm("!UNIMP");
    3221362572();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221360568();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    "/usr/lib/ld.so.1" = 389120;
    2486325304();
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

free()
{// addr = 0x00021748
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;

    asm("ba,a 0xffffff60");
    asm("ba,a 0xffffff54");
    asm("ba,a 0xffffff48");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221362560();
    asm("!UNIMP");
    3221362572();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221360568();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    "/usr/lib/ld.so.1" = 389120;
    2486325304();
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

abort()
{// addr = 0x00021754
    _unknown_ _t1;
    _unknown_ _t2;

    asm("ba,a 0xffffff54");
    asm("ba,a 0xffffff48");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221362560();
    asm("!UNIMP");
    3221362572();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221360568();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    "/usr/lib/ld.so.1" = 389120;
    2486325304();
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

memset()
{// addr = 0x00021760
    asm("ba,a 0xffffff48");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221362560();
    asm("!UNIMP");
    3221362572();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221360568();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    "/usr/lib/ld.so.1" = 389120;
    2486325304();
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

memset()
{// addr = 0x00021760
    asm("ba,a 0xffffff48");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221362560();
    asm("!UNIMP");
    3221362572();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221360568();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    "/usr/lib/ld.so.1" = 389120;
    2486325304();
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("unimplemented, op2 = 5");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

// Statistics:
//     608 Register nodes
//     233 Temporaries nodes
//      76 Casts
//    2902 Statements
//      98 Labels
//      36 Gotos
//      37 Blocks
//    4663 Nodes
//    1856 Assembly nodes
//     417 Unknown Types


