L08048254()
{
    _unknown_ __ebp;

    L080482D0(__eax, __ebx);
    L08048330();
    L080484B8(__edx);
    return;
}

__xstat()
{// addr = 0x0804827C
    goto __imp____xstat;
}

__libc_start_main()
{// addr = 0x0804828C
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x0804829C
    goto __imp__printf;
}

L080482D0(_unknown_ __eax, _unknown_ __ebx)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    intOrPtr* _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    _t5 = __ebx;
    _push(_t5);
    _push(__eax);
    L1();
    _pop(__ebx);
    _t4 =  *((intOrPtr*)(_t5 + 5010 + 24));
    if(_t4 == 0) {
        return ;
    }
     *_t4();
    return ;
}

L080482DA()
{
    _unknown_ _t3;
    _unknown_ _t5;

    _pop(__ebx);
    __eax =  *((intOrPtr*)(_t3 + 5010 + 24));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__ebp);
    return;
}

L080482F4()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if( *134518408 != 0) {
        return ;
    }
    _t2 =  *134518156;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518408 = 1;
        return;
    } else {
        while(1) {
L3:
             *134518156 = _t2 + 4;
             *__edx();
            _t2 =  *134518156;
            __edx =  *_t2;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L08048330()
{
    _unknown_ __ebp;

    if( *134518376 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518376);
    0();
    __esp = __esp + 16;
    return;
}

main(intOrPtr _a8)
{// addr = 0x0804835C
    intOrPtr _v36;
    intOrPtr _v44;
    intOrPtr _v52;
    intOrPtr _v56;
    intOrPtr _v60;
    intOrPtr _v64;
    intOrPtr _v72;
    intOrPtr _v76;
    intOrPtr _v80;
    intOrPtr _v84;
    intOrPtr _v88;
    intOrPtr _v92;
    intOrPtr _v96;
    intOrPtr _v104;
    char _v108;
    _unknown_ __ecx;
    _unknown_ __ebp;
    intOrPtr _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t34;

    __esp = __esp & 240;
    _push(__ecx);
    __edx =  ?_? ( &_v108);
    _push( &_v108);
    _t19 = _a8;
    _push( *((intOrPtr*)(_t19 + 4)));
    _push(3);
    __xstat();
    _pop(__ecx);
    _pop(__edx);
    _push(_t19);
    printf("res: %i\n");
    __esp = __esp + 8;
    _push(_v104);
    _push(_v108);
    _push("dev: %i\n");
    printf();
    _pop(__eax);
    _pop(__edx);
    _push(_v96);
    printf("ino: %i\n");
    _pop(__eax);
    _push(_v92);
    _push("mode: %i\n");
    printf();
    _pop(__eax);
    _pop(__edx);
    _push(_v88);
    printf("nlink: %i\n");
    _pop(__eax);
    _push(_v84);
    _push("uid: %i\n");
    printf();
    _pop(__eax);
    _pop(__edx);
    _push(_v80);
    printf("gid: %i\n");
    __esp = __esp + 8;
    _push(_v72);
    _push(_v76);
    printf("rdev: %i\n");
    _pop(__eax);
    _push(_v64);
    _push("size: %i\n");
    printf();
    _pop(__eax);
    _pop(__edx);
    _push(_v60);
    printf("blksize: %i\n");
    _pop(__eax);
    _push(_v56);
    _push("blocks: %i\n");
    printf();
    _pop(__eax);
    _pop(__edx);
    _push(_v52);
    printf("atime: %i\n");
    _pop(__eax);
    _push(_v44);
    _push("mtime: %i\n");
    printf();
    _pop(__eax);
    _pop(__edx);
    _push(_v36);
    _push("ctime: %i\n");
    printf();
    return 0;
}

L080484B8(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518360;
    __ebx = 134518360;
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

L080484E6()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    L080482F4();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L080484E6()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    @rec 0x080482F4@L080482F4@();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//      64 Register nodes
//      15 Temporaries nodes
//       3 Casts
//     195 Statements
//       6 Labels
//       1 Gotos
//      11 Blocks
//     353 Nodes
//       0 Assembly nodes
//      34 Unknown Types


