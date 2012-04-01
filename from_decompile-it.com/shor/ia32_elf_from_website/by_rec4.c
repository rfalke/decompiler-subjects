L080487E4()
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __esp = __esp - 4;
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 55300 + -8)) != 0) {
        __gmon_start__();
    }
    L08048AC0();
    L08054220();
    _pop(__eax);
    return;
}

L080487F0()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 55300 + -8)) != 0) {
        __gmon_start__();
    }
    L08048AC0();
    L08054220();
    _pop(__eax);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

void abort()
{// addr = 0x08048824
    goto __imp__abort;
}

void srand(int __seed)
{// addr = 0x08048834
    goto __imp__srand;
}

__cxa_atexit()
{// addr = 0x08048844
    goto __imp____cxa_atexit;
}

__gmon_start__()
{// addr = 0x08048854
    goto __imp____gmon_start__;
}

void* realloc(void* __ptr, int __size)
{// addr = 0x08048864
    goto __imp__realloc;
}

char* getenv(char* __name)
{// addr = 0x08048874
    goto __imp__getenv;
}

void* calloc(int __nmemb, int __size)
{// addr = 0x08048884
    goto __imp__calloc;
}

int putchar(int ch)
{// addr = 0x08048894
    goto __imp__putchar;
}

pow()
{// addr = 0x080488A4
    goto __imp__pow;
}

__libc_start_main()
{// addr = 0x080488B4
    goto __imp____libc_start_main;
}

void perror(char* msg)
{// addr = 0x080488C4
    goto __imp__perror;
}

void free(void* __ptr)
{// addr = 0x080488D4
    goto __imp__free;
}

int fflush(struct _IO_FILE* fp)
{// addr = 0x080488E4
    goto __imp__fflush;
}

sqrt()
{// addr = 0x080488F4
    goto __imp__sqrt;
}

int fclose(struct _IO_FILE* fp)
{// addr = 0x08048904
    goto __imp__fclose;
}

void* memcpy(void* __dest, void* __src, int __n)
{// addr = 0x08048914
    goto __imp__memcpy;
}

struct _IO_FILE* fopen(char* name, char* mode)
{// addr = 0x08048924
    goto __imp__fopen;
}

cos()
{// addr = 0x08048934
    goto __imp__cos;
}

int fgetc(struct _IO_FILE* fp)
{// addr = 0x08048944
    goto __imp__fgetc;
}

int feof(struct _IO_FILE* fp)
{// addr = 0x08048954
    goto __imp__feof;
}

int printf(char* format)
{// addr = 0x08048964
    goto __imp__printf;
}

int atoi(char* __nptr)
{// addr = 0x08048974
    goto __imp__atoi;
}

int fwrite(void* src, int sz, int nitems, struct _IO_FILE* fp)
{// addr = 0x08048984
    goto __imp__fwrite;
}

int fprintf(struct _IO_FILE* fp, char* format)
{// addr = 0x08048994
    goto __imp__fprintf;
}

time()
{// addr = 0x080489A4
    goto __imp__time;
}

void* malloc(int __size)
{// addr = 0x080489B4
    goto __imp__malloc;
}

__stack_chk_fail()
{// addr = 0x080489C4
    goto __imp____stack_chk_fail;
}

log()
{// addr = 0x080489D4
    goto __imp__log;
}

int puts(char* str)
{// addr = 0x080489E4
    goto __imp__puts;
}

int rand()
{// addr = 0x080489F4
    goto __imp__rand;
}

int fread(_G_va_list dst, int sz, int nitems, struct _IO_FILE* fp)
{// addr = 0x08048A04
    goto __imp__fread;
}

sin()
{// addr = 0x08048A14
    goto __imp__sin;
}

L08048AC0()
{
    _unknown_ __ebp;

    __eax =  *134569744;
    if( *134569744 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
     *__esp = 134569744;
     *__eax();
    return;
}

int quantum_ipow(int a, int b)
{// addr = 0x08048AE4
    int i;
    int r;
    intOrPtr _v8;
    signed int _v12;
    _unknown_ __ebp;

    _v12 = 1;
    _v8 = 0;
    while(_v8 < b) {
        _v12 = _v12 * a;
        _v8 = _v8 + 1;
    }
}

int quantum_gcd(int u, int v)
{// addr = 0x08048B15
    int r;
    signed int _v8;
    _unknown_ __ebp;
    _unknown_ _t16;
    _unknown_ _t21;

    while(v != 0) {
        _v8 = u % v;
        u = v;
        v = _v8;
    }
}

quantum_frac_approx(int* a, int* b, int width)
{// addr = 0x08048B42
    float f;
    float g;
    int i;
    int num2;
    int den2;
    int num1;
    int den1;
    int num;
    int den;
    intOrPtr _v8;
    intOrPtr _v12;
    signed int _v16;
    int _v20;
    signed int _v24;
    signed int _v28;
    signed int _v32;
    signed int _v36;
    signed int _v40;
    signed short _v58;
    signed int _v60;
    _unknown_ _v64;
    _unknown_ __ebp;
    _unknown_ _t53;
    _unknown_ _t67;

    _push( *a);
    asm("fild dword [esp]");
    _push( *b);
    asm("fild dword [esp]");
    asm("fdivp st1, st0");
    asm("fstp dword [ebp-0x4]");
    _v12 = _v8;
    _v20 = 0;
    _v24 = 1;
    _v28 = 1;
    _v32 = 0;
    _v36 = 0;
    _v40 = 0;
    asm("fnstcw word [ebp-0x36]");
    _v60 = _v58 & 65535 & 4294967295;
    while(1) {
        asm("fld dword [ebp-0x8]");
        asm("fld qword [0x8054278]");
        asm("faddp st1, st0");
        asm("fldcw word [ebp-0x38]");
        asm("fistp dword [ebp-0xc]");
        asm("fldcw word [ebp-0x36]");
        asm("fld dword [ebp-0x8]");
        asm("fild dword [ebp-0xc]");
        asm("fld qword [0x8054278]");
        asm("fsubp st1, st0");
        asm("fsubp st1, st0");
        asm("fstp dword [ebp-0x8]");
        asm("fld1 ");
        asm("fdiv dword [ebp-0x8]");
        asm("fstp dword [ebp-0x8]");
        __eflags = _v16 * _v32 + _v24 - 1 << (width & 4294967295);
        if(__eflags > 0) {
            break;
        }
        _v36 = _v16 * _v28 + _v20;
        _v40 = _v16 * _v32 + _v24;
        _v20 = _v28;
        _v24 = _v32;
        _v28 = _v36;
        _v32 = _v40;
        asm("fild dword [ebp-0x20]");
        asm("fild dword [ebp-0x24]");
        asm("fdivp st1, st0");
        asm("fld dword [ebp-0x4]");
        asm("fsubp st1, st0");
        asm("fabs ");
        _push(2 << (width & 4294967295));
        asm("fild dword [esp]");
        asm("fld1 ");
        asm("fdivrp st1, st0");
        asm("fxch st0, st1");
        asm("fucompp ");
        asm("fnstsw ax");
        asm("sahf ");
        if(__eflags > 0) {
            continue;
        }
        break;
    }
L3:
     *a = _v36;
     *b = _v40;
    return;
}

int quantum_getwidth(int n)
{// addr = 0x08048C63
    int i;
    signed int _v8;
    _unknown_ __ebp;
    _unknown_ _t8;

    _v8 = 1;
    while(1 << (_v8 & 4294967295) < n) {
        _v8 = _v8 + 1;
    }
}

int quantum_inverse_mod(int n, int c)
{// addr = 0x08048C8A
    int i;
    signed int _v8;
    _unknown_ __ebp;
    _unknown_ _t15;
    _unknown_ _t20;

    _v8 = 1;
    while(_v8 * c % n != 1) {
        _v8 = _v8 + 1;
    }
}

complex float quantum_conj(complex float a)
{// addr = 0x08048CBC
    float r;
    float i;
    complex float _v20;
    complex float _v24;
    complex float _v36;
    intOrPtr _v48;
    intOrPtr _v52;
    complex float _v56;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t18;
    _unknown_ _t24;
    _unknown_ _t25;
    complex float _t26;
    _unknown_ _t30;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t37;
    _unknown_ _t39;
    _unknown_ _t40;
    complex float _t41;

     *__esp = a;
    _v56 = _a8;
    quantum_real();
    asm("fstp dword [ebp-0x10]");
     *__esp = a;
    _v56 = _a8;
    quantum_imag();
    asm("fstp dword [ebp-0x14]");
    _t41 = _v20;
    _v48 = -1082130432;
    _v52 = -2147483648;
    _v56 = 0;
     *__esp = _v24;
    _t26 = L08052B40(_v24, _t41, __eflags);
    _v36 = _t41;
    asm("fld dword [ebp-0x20]");
    _v36 = 0;
    asm("fld dword [ebp-0x20]");
    _v36 = _t26;
    asm("fld dword [ebp-0x20]");
    _v36 = 0;
    asm("fld dword [ebp-0x20]");
    asm("fxch st0, st1");
    asm("faddp st3, st0");
    asm("faddp st1, st0");
    asm("fxch st0, st1");
    asm("fstp dword [ebp-0x20]");
    asm("fstp dword [ebp-0x20]");
    return _v36;
}

float quantum_real(complex float a)
{// addr = 0x08048D63
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t7;

    _v8 =  &a;
    _t7 =  *_v8;
    _v24 = _t7;
    asm("fld dword [ebp-0x14]");
    return _t7;
}

float quantum_imag(complex float a)
{// addr = 0x08048D7C
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t8;

    _v8 =  &a;
    _t8 = _v8[0];
    _v24 = _t8;
    asm("fld dword [ebp-0x14]");
    return _t8;
}

float quantum_prob(complex float a)
{// addr = 0x08048D98
    float _v8;
    intOrPtr _v24;
    _unknown_ __ebp;
    float _t8;

     *__esp = a;
    _v24 = _a8;
    quantum_prob_inline();
    asm("fstp dword [ebp-0x4]");
    _t8 = _v8;
    _v8 = _t8;
    asm("fld dword [ebp-0x4]");
    return _t8;
}

float quantum_prob_inline(complex float a)
{// addr = 0x08048DBE
    float r;
    float i;
    float _v24;
    _unknown_ __ebp;
    float _t10;

     *__esp = a;
    _v24 = _a8;
    quantum_real();
    asm("fstp dword [ebp-0x4]");
     *__esp = a;
    _t10 = _a8;
    _v24 = _t10;
    quantum_imag();
    asm("fstp dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fmul dword [ebp-0x4]");
    asm("fld dword [ebp-0x8]");
    asm("fmul dword [ebp-0x8]");
    asm("faddp st1, st0");
    return _t10;
}

complex float quantum_cexp(float phi)
{// addr = 0x08048DFE
    _unknown_ _v8;
    char _v28;
    complex float _v56;
    _unknown_ __ebp;
    _unknown_ _t6;
    _unknown_ _t11;
    _unknown_ _t13;

    _push(__ebx);
    __esp = __esp - 100;
    asm("fld dword [ebp+0x8]");
    asm("fstp qword [esp]");
    cos();
    asm("fstp qword [ebp-0x28]");
    asm("fldz ");
    asm("fstp qword [ebp-0x30]");
    asm("fld dword [ebp+0x8]");
    asm("fstp qword [esp]");
    sin();
    asm("fldz ");
    asm("fld1 ");
    asm("fstp qword [esp+0x1c]");
    asm("fldz ");
    asm("fstp qword [esp+0x14]");
    asm("fstp qword [esp+0xc]");
    asm("fstp qword [esp+0x4]");
    L080531E0(__esi, __eflags,  &_v28);
    asm("fld qword [ebp-0x18]");
    asm("fld qword [ebp-0x10]");
    asm("fld qword [ebp-0x28]");
    asm("fld qword [ebp-0x30]");
    asm("fxch st0, st3");
    asm("faddp st1, st0");
    asm("fxch st0, st1");
    asm("faddp st2, st0");
    asm("fstp dword [ebp-0x1c]");
    asm("fld dword [ebp-0x1c]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp-0x1c]");
    asm("fld dword [ebp-0x1c]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp-0x34]");
    asm("fstp dword [ebp-0x34]");
    return _v56;
}

float quantum_get_decoherence()
{// addr = 0x08048E84
    float _v8;
    _unknown_ __ebp;

    __eax = quantum_lambda;
    _v8 = __eax;
    asm("fld dword [ebp-0x4]");
    return __eax;
}

quantum_set_decoherence(float l)
{// addr = 0x08048E97
    _unknown_ __ebp;
    _unknown_ _t2;

    __eflags = __eflags;
    asm("fld dword [ebp+0x8]");
    asm("fldz ");
    asm("fxch st0, st1");
    asm("fucompp ");
    asm("fnstsw ax");
    asm("sahf ");
    if(__eflags != 0 || __eflags != 0) {
        quantum_status = 1;
        quantum_lambda = l;
        return;
    }
    quantum_status = 0;
    return;
}

quantum_decohere(quantum_reg* reg)
{// addr = 0x08048ECA
    float u;
    float v;
    float s;
    float x;
    float* nrands;
    float angle;
    int i;
    int j;
    void* _v40;
    _unknown_ _v44;
    intOrPtr _v48;
    _unknown_ _v52;
    _unknown_ _v60;
    _unknown_ _v112;
    _unknown_ _v116;
    _unknown_ _v120;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __ebp;
    _unknown_ _t57;
    _unknown_ _t58;
    _unknown_ _t66;
    _unknown_ _t71;
    _unknown_ _t74;
    _unknown_ _t80;
    _unknown_ _t81;
    _unknown_ _t82;
    _unknown_ _t85;
    _unknown_ _t88;
    _unknown_ _t103;
    _unknown_ _t108;
    _unknown_ _t112;
    _unknown_ _t116;
    _unknown_ _t119;
    _unknown_ _t121;
    _unknown_ _t123;
    _unknown_ _t125;

    quantum_gate_counter(1);
    if(quantum_status == 0) {
        return ;
    }
    _v40 = calloc(reg->width, 4);
    if(_v40 == 0) {
        quantum_error(2);
    }
    quantum_memman(reg->width << 2);
    _v48 = 0;
    while(reg->width > _v48) {
        while(1) {
L4:
            quantum_frand();
            asm("fld st0, st0");
            asm("faddp st1, st0");
            asm("fld1 ");
            asm("fsubp st1, st0");
            asm("fstp dword [ebp-0x14]");
            quantum_frand();
            asm("fld st0, st0");
            asm("faddp st1, st0");
            asm("fld1 ");
            asm("fsubp st1, st0");
            asm("fstp dword [ebp-0x18]");
            asm("fld dword [ebp-0x14]");
            asm("fmul dword [ebp-0x14]");
            asm("fld dword [ebp-0x18]");
            asm("fmul dword [ebp-0x18]");
            asm("faddp st1, st0");
            asm("fstp dword [ebp-0x1c]");
            asm("fld dword [ebp-0x1c]");
            asm("fld1 ");
            asm("fxch st0, st1");
            asm("fucompp ");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags < 0) {
                break;
            }
        }
        asm("fld dword [ebp-0x14]");
        asm("fstp qword [ebp-0x50]");
        asm("fld dword [ebp-0x1c]");
        asm("fstp qword [esp]");
        log();
        asm("fld qword [0x8054280]");
        asm("fmulp st1, st0");
        asm("fld dword [ebp-0x1c]");
        asm("fdivp st1, st0");
        asm("fstp qword [ebp-0x48]");
        asm("fld qword [ebp-0x48]");
        asm("fsqrt ");
        asm("fstp qword [ebp-0x60]");
        asm("fld qword [ebp-0x60]");
        asm("fucomp st0");
        asm("fnstsw ax");
        asm("sahf ");
        if(__eflags != 0 || __eflags != 0) {
            asm("fld qword [ebp-0x48]");
            asm("fstp qword [esp]");
            sqrt();
            asm("fstp qword [ebp-0x60]");
        }
        asm("fld qword [ebp-0x60]");
        asm("fmul qword [ebp-0x50]");
        asm("fstp dword [ebp-0x20]");
        asm("fld dword [ebp-0x20]");
        asm("fstp qword [ebp-0x40]");
        asm("fld dword [0x80560d0]");
        asm("fadd st0, st0");
        asm("fstp qword [esp]");
        sqrt();
        asm("fmul qword [ebp-0x40]");
        asm("fstp dword [ebp-0x20]");
        asm("fld dword [ebp-0x20]");
        asm("fld dword [0x8054288]");
        asm("fdivp st1, st0");
        asm("fstp dword [eax]");
        _v48 = _v48 + 1;
    }
}

quantum_density_op quantum_new_density_op(int num, float* prob, quantum_reg* reg)
{// addr = 0x0804911C
    int i;
    quantum_density_op rho;
    int* phash;
    int hashw;
    signed int _v8;
    void _v12;
    void _v16;
    void* _v20;
    void* _v24;
    float* _v28;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t99;
    void* _t169;
    void* _t171;
    void* _t176;
    void* _t182;

    _v28 = prob;
    _v24 = calloc(prob, 4);
    if(_v24 == 0) {
        quantum_error(2);
    }
    _v20 = calloc(prob, 20);
    if(_v20 == 0) {
        quantum_error(2);
    }
    quantum_memman(prob + prob + prob << 3);
     *_v24 = reg->width;
    _v12 = _a16[4];
    _v16 = _a16[2];
    _t169 = _v20;
    _t176 = _a16;
     *_t169 =  *_t176;
    _t169[1] = _t176[1];
    _t169[2] = _t176[2];
    _t169[3] = _t176[3];
    _t169[4] = _t176[4];
    _a16[1] = 0;
     *_a16 = 0;
    _a16[3] = 0;
    _a16[4] = 0;
    _v8 = 1;
    while(_v8 < prob) {
        _v24[_v8] =  *(reg + (_v8 << 2));
        _t171 =  &(_v20[(_v8 << 2) + _v8]);
        _t182 =  &(_a16[(_v8 << 2) + _v8]);
         *_t171 =  *_t182;
        _t171[1] = _t182[1];
        _t171[2] = _t182[2];
        _t171[3] = _t182[3];
        _t171[4] = _t182[4];
        ( &(_v20[(_v8 << 2) + _v8]))[4] = _v12;
        ( &(_v20[(_v8 << 2) + _v8]))[2] = _v16;
        ( &(_a16[(_v8 << 2) + _v8]))[1] = 0;
        _a16[(_v8 << 2) + _v8] = 0;
        ( &(_a16[(_v8 << 2) + _v8]))[3] = 0;
        ( &(_a16[(_v8 << 2) + _v8]))[4] = 0;
        _v8 = _v8 + 1;
    }
}

quantum_density_op quantum_qureg2density_op(quantum_reg* reg)
{// addr = 0x08049315
    float f;
    _unknown_ _v8;
    struct quantum_reg_struct _v12;
    intOrPtr _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t9;
    struct quantum_density_op_struct _t14;
    _unknown_ _t15;

    _push(__ebx);
    __esp = __esp - 36;
    _t14 = reg;
    _v12 = 1065353216;
    _v32 = _a8;
    quantum_new_density_op(_t14, 1,  &_v12);
    __esp = __esp - 4;
    return _t14;
}

quantum_reduced_density_op(int pos, quantum_density_op* rho)
{// addr = 0x08049351
    int i;
    int j;
    double p0;
    double ptmp;
    long long unsigned int pos2;
    quantum_reg rtmp;
    _unknown_ _v8;
    signed int _v16;
    signed int _v20;
    signed int _v40;
    signed int _v44;
    float _v48;
    float _v52;
    float _v56;
    float _v60;
    float _v64;
    _unknown_ _v108;
    _unknown_ _v112;
    _unknown_ _v116;
    _unknown_ _v120;
    _unknown_ _v124;
    _unknown_ _v128;
    _unknown_ _v132;
    _unknown_ _v136;
    _unknown_ _v140;
    _unknown_ _v144;
    _unknown_ _v148;
    intOrPtr _v152;
    _unknown_ _v156;
    _unknown_ __ebp;
    _unknown_ _t170;
    _unknown_ _t171;
    signed int _t172;
    _unknown_ _t175;
    _unknown_ _t177;
    _unknown_ _t178;
    _unknown_ _t218;
    _unknown_ _t220;
    _unknown_ _t221;
    _unknown_ _t222;
    _unknown_ _t226;
    _unknown_ _t227;
    _unknown_ _t269;
    _unknown_ _t270;
    _unknown_ _t271;
    signed int _t272;
    signed int _t286;
    _unknown_ _t287;
    float* _t289;
    intOrPtr* _t297;
    _unknown_ _t298;
    _unknown_ _t299;

    _push(__ebx);
    __esp = __esp - 148;
    asm("fldz ");
    asm("fstp qword [ebp-0x18]");
    rho->prob = realloc(rho->prob, rho->num << 3);
    if(rho->prob == 0) {
        quantum_error(2);
    }
    rho->reg = realloc(rho->reg,  &(rho->num[rho->num]) << 3);
    if(rho->reg == 0) {
        quantum_error(2);
    }
    quantum_memman(rho->num + rho->num + rho->num << 3);
    _t272 = pos;
    _t286 = 0;
    asm("shld edx, eax, cl");
    _t172 = 1 << (_t272 & 4294967295);
    if((_t272 & 4294967295 & 32) != 0) {
        _t286 = _t172;
        _t172 = 0;
    }
    _v44 = _t172;
    _v40 = _t286;
    _v16 = 0;
    while(rho->num > _v16) {
        asm("fld dword [eax]");
        asm("fstp qword [ebp-0x20]");
        _t289 =  &(rho->reg[(_v16 << 2) + _v16]);
        _v64 =  *_t289;
        _v60 = _t289[1];
        _v56 = _t289[2];
        _v52 = _t289[3];
        _v48 = _t289[4];
        asm("fldz ");
        asm("fstp qword [ebp-0x18]");
        _v20 = 0;
        while(( &(rho->reg[(_v16 << 2) + _v16]))[1] > _v20) {
            if(( *(( &(rho->reg[(_v16 << 2) + _v16]))[3] + (_v20 << 4) + 8) & _v44 |  *(( &(rho->reg[(_v16 << 2) + _v16]))[3] + (_v20 << 4) + 12) & _v40) == 0) {
                _t297 = ( &(rho->reg[(_v16 << 2) + _v16]))[3] + (_v20 << 4);
                 *__esp =  *_t297;
                _v152 =  *((intOrPtr*)(_t297 + 4));
                quantum_prob_inline();
                asm("fld qword [ebp-0x18]");
                asm("faddp st1, st0");
                asm("fstp qword [ebp-0x18]");
            }
            _v20 = _v20 + 1;
        }
    }
}

float quantum_prob_inline(complex float a)
{// addr = 0x0804966A
    float r;
    float i;
    float _v24;
    _unknown_ __ebp;
    float _t10;

     *__esp = a;
    _v24 = _a8;
    quantum_real();
    asm("fstp dword [ebp-0x4]");
     *__esp = a;
    _t10 = _a8;
    _v24 = _t10;
    quantum_imag();
    asm("fstp dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fmul dword [ebp-0x4]");
    asm("fld dword [ebp-0x8]");
    asm("fmul dword [ebp-0x8]");
    asm("faddp st1, st0");
    return _t10;
}

float quantum_real(complex float a)
{// addr = 0x080496AA
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t7;

    _v8 =  &a;
    _t7 =  *_v8;
    _v24 = _t7;
    asm("fld dword [ebp-0x14]");
    return _t7;
}

float quantum_imag(complex float a)
{// addr = 0x080496C3
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t8;

    _v8 =  &a;
    _t8 = _v8[0];
    _v24 = _t8;
    asm("fld dword [ebp-0x14]");
    return _t8;
}

quantum_matrix quantum_density_matrix(quantum_density_op* rho)
{// addr = 0x080496DF
    int i;
    int j;
    int k;
    int l1;
    int l2;
    int dim;
    quantum_matrix m;
    _unknown_ _v16;
    signed int _v20;
    signed int _v24;
    signed int _v28;
    signed int _v32;
    signed int _v36;
    int _v40;
    intOrPtr _v44;
    signed int _v48;
    _unknown_ _v52;
    signed int _v68;
    complex float _v80;
    signed int _v88;
    signed int _v92;
    signed int _v96;
    int _v100;
    complex float _v104;
    signed int _v108;
    _unknown_ __ebx;
    complex float* __edi;
    _unknown_ __ebp;
    _unknown_ _t117;
    _unknown_ _t120;
    signed int _t138;
    signed int _t150;
    _unknown_ _t164;
    _unknown_ _t165;
    signed int* _t179;
    signed int _t181;
    complex float _t196;
    _unknown_ _t219;
    _unknown_ _t225;
    signed int* _t230;
    signed int* _t232;
    _unknown_ _t237;
    signed int _t241;
    int _t245;
    complex float _t247;
    _unknown_ _t250;

    __esp = __esp - 92;
    _v40 = 1 << ( *( *(_a8 + 8)) & 4294967295);
    if(_v40 < 0) {
        quantum_error(3);
    }
    _v100 = _v40;
    quantum_new_matrix( &_v52, _v40);
    __esp = __esp - 4;
    _v28 = 0;
    while( *_a8 > _v28) {
        quantum_reconstruct_hash( &(( *(_a8 + 8))[(_v28 << 2) + _v28]));
        _v20 = 0;
        while(1) {
            __eflags = _v20 - _v40;
            if(_v20 >= _v40) {
                break;
            }
            _v24 = 0;
            while(1) {
                __eflags = _v24 - _v40;
                if(_v24 >= _v40) {
                    break;
                }
                _t230 =  &(( *(_a8 + 8))[(_v28 << 2) + _v28]);
                _t138 = _v20;
                _v104 =  *_t230;
                _v100 = _t230[1];
                _v96 = _t230[2];
                _v92 = _t230[3];
                _v88 = _t230[4];
                 *__esp = _t138;
                _v108 = _t138 >> 31;
                _v32 = quantum_get_state();
                _t232 =  &(( *(_a8 + 8))[(_v28 << 2) + _v28]);
                _t150 = _v24;
                _v104 =  *_t232;
                _v100 = _t232[1];
                _v96 = _t232[2];
                _v92 = _t232[3];
                _v88 = _t232[4];
                 *__esp = _t150;
                _v108 = _t150 >> 31;
                _v36 = quantum_get_state();
                __eflags = _v32;
                if(_v32 < 0) {
                    __eflags = _v36;
                    if(__eflags < 0) {
                        __edi = _v44 + (_v48 * _v24 + _v20 << 3);
                        asm("fld dword [eax]");
                        asm("fstp dword [ebp-0x44]");
                        asm("fld dword [eax+0x4]");
                        asm("fstp dword [ebp-0x48]");
                        _t179 =  &(( *(_a8 + 8))[(_v28 << 2) + _v28])->node + (_v36 << 4);
                        _t241 =  *_t179;
                        _v100 = _t179[1];
                        _v104 = _t241;
                        _v108 = 0;
                         *__esp =  *( *((intOrPtr*)(_a8 + 4)) + (_v28 << 2));
                        _t181 = L08052B40(0, 0, __eflags);
                        _v68 = _t241;
                        _t245 =  &(( *(_a8 + 8))[(_v28 << 2) + _v28])->node + (_v32 << 4);
                         *__esp =  *_t245;
                        _v108 =  *(_t245 + 4);
                        _t247 = quantum_conj();
                        _v100 = _t245;
                        _v104 = _t247;
                        _v108 = _v68;
                         *__esp = _t181;
                        _t196 = L08052B40(_t245, _t181, __eflags);
                        asm("fld dword [ebp-0x44]");
                        asm("fld dword [ebp-0x48]");
                        _v80 = _t196;
                        asm("fld dword [ebp-0x4c]");
                        _v80 = _t247;
                        asm("fld dword [ebp-0x4c]");
                        asm("fxch st0, st1");
                        asm("faddp st3, st0");
                        asm("faddp st1, st0");
                        asm("fxch st0, st1");
                        asm("fstp dword [ebp-0x4c]");
                        asm("fstp dword [ebp-0x4c]");
                         *__edi = _v80;
                        (__edi)[0] = _v80;
                    }
                }
                _v24 = _v24 + 1;
            }
            _v20 = _v20 + 1;
        }
        _v28 = _v28 + 1;
    }
}

quantum_reconstruct_hash(quantum_reg* reg)
{// addr = 0x08049996
    int i;
    signed int _v8;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t30;
    _unknown_ _t41;

    _v8 = 0;
    while(1 << (reg->hashw & 4294967295) > _v8) {
        reg->hash[_v8] = 0;
        _v8 = _v8 + 1;
    }
}

quantum_add_hash(long long unsigned int a, int pos, quantum_reg* reg)
{// addr = 0x08049A19
    int i;
    int mark;
    unsigned int _v8;
    intOrPtr _v12;
    int _v24;
    long long unsigned int _v28;
    intOrPtr _v36;
    int _v40;
    _unknown_ __ebp;
    _unknown_ _t42;

    _v28 = a;
    _v24 = pos;
    _v12 = 0;
    _v36 =  *((intOrPtr*)(_a16 + 8));
     *__esp = _v28;
    _v40 = _v24;
    _v8 = quantum_hash64();
    while( *((intOrPtr*)( *((intOrPtr*)(_a16 + 16)) + (_v8 << 2))) != 0) {
    }
}

unsigned int quantum_hash64(long long unsigned int key, int width)
{// addr = 0x08049AB8
    unsigned int k32;
    unsigned int _v8;
    int _v24;
    long long unsigned int _v28;
    _unknown_ __ebp;
    _unknown_ _t18;
    _unknown_ _t23;
    _unknown_ _t26;
    _unknown_ _t29;

    _v28 = key;
    _v24 = width;
    _v8 = _v24 ^ _v28;
    _v8 = _v8 * _v8;
    _v8 = _v8 >> (32 - _a12 & 4294967295);
    return _v8;
}

int quantum_get_state(long long unsigned int a, quantum_reg reg)
{// addr = 0x08049AFA
    int i;
    signed int _v8;
    signed int _v24;
    signed int _v28;
    int _v32;
    quantum_reg_node* _v44;
    signed int _v48;
    _unknown_ __ebp;
    _unknown_ _t52;
    _unknown_ _t60;

    _v28 = a;
    _v24 = reg.width;
    if(reg.node == 0) {
        _v32 = _v28;
        return _v32;
    }
    _v44 = reg.node;
     *__esp = _v28;
    _v48 = _v24;
    _v8 = quantum_hash64();
    while( *((intOrPtr*)(_a28 + (_v8 << 2))) != 0) {
        if(( *(reg.hash +  ~(1 -  *((intOrPtr*)(_a28 + (_v8 << 2))) << 4) + 8) ^ _v28 |  *(reg.hash +  ~(1 -  *((intOrPtr*)(_a28 + (_v8 << 2))) << 4) + 12) ^ _v24) != 0) {
            _v8 = _v8 + 1;
            if(1 << (reg.node & 4294967295) == _v8) {
                _v8 = 0;
            }
            continue;
        }
        _v32 =  *((intOrPtr*)(_a28 + (_v8 << 2))) - 1;
        return _v32;
    }
}

quantum_print_density_matrix(quantum_density_op* rho)
{// addr = 0x08049BC0
    quantum_matrix m;
    struct quantum_matrix_struct _v24;
    quantum_density_op* _v36;
    intOrPtr _v40;
    intOrPtr _v44;
    quantum_density_op* _v56;
    intOrPtr _v60;
    _unknown_ __ebp;

    _v56 = rho;
    quantum_density_matrix( &_v44);
    __esp = __esp - 4;
    _v24.rows = _v44;
    _v24.cols = _v40;
    _v24.t = _v36;
     *__esp = _v24;
    _v60 = _v24.cols;
    _v56 = _v24.t;
    quantum_print_matrix();
    quantum_delete_matrix( &_v24);
    return;
}

quantum_delete_density_op(quantum_density_op* rho)
{// addr = 0x08049C13
    int i;
    signed int _v8;
    _unknown_ __ebp;
    _unknown_ _t33;
    _unknown_ _t36;
    _unknown_ _t40;

    quantum_destroy_hash(rho->reg);
    _v8 = 0;
    while(rho->num > _v8) {
        quantum_delete_qureg_hashpreserve(rho->reg + ((_v8 << 2) + _v8 << 2));
        _v8 = _v8 + 1;
    }
}

float quantum_purity(quantum_density_op* rho)
{// addr = 0x08049C9E
    int i;
    int j;
    int k;
    int l;
    float f;
    complex float g;
    complex float dp;
    intOrPtr _v20;
    _unknown_ _v24;
    _unknown_ _v28;
    _unknown_ _v32;
    intOrPtr _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v68;
    _unknown_ _v84;
    _unknown_ _v88;
    _unknown_ _v92;
    _unknown_ _v96;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t113;
    _unknown_ _t114;
    _unknown_ _t117;
    _unknown_ _t119;
    _unknown_ _t120;
    _unknown_ _t121;
    _unknown_ _t123;
    _unknown_ _t124;
    _unknown_ _t146;
    _unknown_ _t161;
    _unknown_ _t168;
    _unknown_ _t169;
    _unknown_ _t172;
    _unknown_ _t174;
    _unknown_ _t175;
    _unknown_ _t176;
    _unknown_ _t178;
    _unknown_ _t179;
    _unknown_ _t182;
    _unknown_ _t192;
    _unknown_ _t194;
    _unknown_ _t211;
    _unknown_ _t228;
    _unknown_ _t229;
    _unknown_ _t238;
    _unknown_ _t239;
    _unknown_ _t240;
    _unknown_ _t242;
    _unknown_ _t248;
    _unknown_ _t249;
    _unknown_ _t250;
    _unknown_ _t251;
    _unknown_ _t255;
    _unknown_ _t259;
    _unknown_ _t261;

    _v36 = 0;
    _v20 = 0;
    while(rho->num > _v20) {
        asm("fld dword [eax]");
        asm("fld dword [eax]");
        asm("fmulp st1, st0");
        asm("fld dword [ebp-0x20]");
        asm("faddp st1, st0");
        asm("fstp dword [ebp-0x20]");
        _v20 = _v20 + 1;
    }
}

_Unknown_base* quantum_error_handler(_None* f)
{// addr = 0x08049F64
    _unknown_ __ebp;

    if(f == 0) {
        return errfunc;
    }
    errfunc = f;
    return errfunc;
}

const char* quantum_strerr(int errno)
{// addr = 0x08049F7C
    char* _v8;
    int _v12;
    _unknown_ __ebp;

    _v12 = errno;
    if(_v12 == 3) {
        _v8 = "matrix too large";
        return _v8;
    }
    if(_v12 > 3) {
        if(_v12 == 5) {
L16:
            _v8 = "hash table full";
            return _v8;
        }
        if(_v12 < 5) {
            goto L15;
        }
        if(_v12 == 65536) {
            goto L17;
        }
        if(_v12 == 65537) {
            goto L18;
        } else {
        }
        goto L19;
L18:
        _v8 = "unknown opcode";
        return _v8;
        goto L16;
L17:
        _v8 = "single-column matrix expected";
        return _v8;
    } else {
        if(_v12 == 1) {
            _v8 = "failure";
            return _v8;
        }
        if(_v12 > 1) {
            _v8 = "malloc failed";
            return _v8;
        }
        if(_v12 == 0) {
            _v8 = "success";
            return _v8;
        }
    }
L19:
    _v8 = "unknown error code";
    return _v8;
L15:
    _v8 = "wrong matrix size";
    return _v8;
}

quantum_error(int errno)
{// addr = 0x0804A01C
    _None* p;
    signed int _v0;
    _Unknown_base* _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    signed int _v20;
    quantum_reg* _v24;
    intOrPtr _v28;
    int _v36;
    _unknown_ _v40;
    intOrPtr _v52;
    _unknown_ _v88;
    _unknown_ _v92;
    _unknown_ _v96;
    _unknown_ _v100;
    _unknown_ __ebp;
    _unknown_ _t51;
    int _t54;
    _unknown_ _t61;
    _unknown_ _t66;
    _unknown_ _t80;
    _unknown_ _t83;
    _unknown_ _t88;
    _unknown_ _t89;

    _v8 = quantum_error_handler(0);
    if(_v8 == 0) {
        fflush(__imp__stdout);
        _t54 = errno;
        quantum_strerr(_t54);
        _v36 = _t54;
        fprintf(__imp__stderr, "ERROR: %s\n");
        fflush(__imp__stderr);
        abort();
        _push(_t88);
        __esp = __esp - 56;
        quantum_sigma_x(_v28 + 1 + _v28 + 1, _v24);
        _v52 = 1;
        while(_v12 <= _a8) {
            _v20 = errno % _v0;
            _v16 = 1;
            while(_v16 < _v12) {
                _v20 = _v20 * _v20;
                _v20 = _v20 % _v0;
                _v16 = _v16 + 1;
            }
        }
    }
     *__esp = errno;
     *_v8();
    return;
}

quantum_exp_mod_n(int N, int x, int width_input, int width, quantum_reg* reg)
{// addr = 0x0804A088
    int i;
    int j;
    int f;
    intOrPtr _v8;
    intOrPtr _v12;
    signed int _v16;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebp;
    _unknown_ _t49;
    _unknown_ _t54;
    _unknown_ _t65;
    _unknown_ _t68;

    quantum_sigma_x(width + 1 + width + 1, reg);
    _v8 = 1;
    while(_v8 <= width_input) {
        _v16 = x % N;
        _v12 = 1;
        while(_v12 < _v8) {
            _v16 = _v16 * _v16;
            _v16 = _v16 % N;
            _v12 = _v12 + 1;
        }
    }
}

quantum_cnot(int control, int target, quantum_reg* reg)
{// addr = 0x0804A130
    int i;
    int qec;
    signed int _v24;
    intOrPtr _v28;
    intOrPtr _v40;
    int* _v48;
    unsigned char _v52;
    int _v68;
    int _v72;
    signed int __edi;
    signed int __esi;
    _unknown_ __ebp;
    _unknown_ _t64;
    signed int _t65;
    _unknown_ _t73;
    signed int _t75;
    signed int _t82;
    signed int _t83;
    intOrPtr _t85;
    signed int _t88;
    signed int _t92;
    _unknown_ _t95;

    quantum_qec_get_status( &_v28, 0);
    if(_v28 == 0) {
        _v68 = target;
        _v72 = control;
        if(quantum_objcode_put(1) != 0) {
            return ;
        }
        _v24 = 0;
        while(reg->size > _v24) {
            _t64 = reg->node + (_v24 << 4);
            _t65 =  *(_t64 + 8);
            _t82 = control;
            asm("shrd eax, edx, cl");
            _t88 =  *(_t64 + 12) >> (_t82 & 4294967295);
            if((_t82 & 4294967295 & 32) != 0) {
                _t65 = _t88;
            }
            if((_t65 & 1 & 4294967295) != 0) {
                _v40 = reg->node + (_v24 << 4);
                _t73 = reg->node + (_v24 << 4);
                __esi =  *(_t73 + 8);
                __edi =  *(_t73 + 12);
                _t83 = target;
                _v52 = 1;
                _v48 = 0;
                _t92 = _v48;
                asm("shld edx, eax, cl");
                _t75 = _v52 << (_t83 & 4294967295);
                if((_t83 & 4294967295 & 32) != 0) {
                    _t92 = _t75;
                    _t75 = 0;
                }
                _t85 = _v40;
                 *(_t85 + 8) = __esi ^ _t75;
                 *(_t85 + 12) = __edi ^ _t92;
            }
            _v24 = _v24 + 1;
        }
    }
    quantum_cnot_ft(control, target, reg);
    return;
}

quantum_toffoli(int control1, int control2, int target, quantum_reg* reg)
{// addr = 0x0804A252
    int i;
    int qec;
    signed int _v24;
    intOrPtr _v28;
    intOrPtr _v40;
    int* _v48;
    signed int _v52;
    int _v64;
    int _v68;
    int _v72;
    signed int __edi;
    signed int __esi;
    _unknown_ __ebp;
    _unknown_ _t81;
    signed int _t82;
    _unknown_ _t87;
    signed int _t88;
    _unknown_ _t96;
    signed int _t98;
    signed int _t106;
    signed int _t107;
    signed int _t108;
    intOrPtr _t110;
    signed int _t113;
    signed int _t116;
    signed int _t120;
    _unknown_ _t123;
    _unknown_ _t124;

    quantum_qec_get_status( &_v28, 0);
    if(_v28 == 0) {
        _v64 = target;
        _v68 = control2;
        _v72 = control1;
        if(quantum_objcode_put(2) != 0) {
            return ;
        }
        _v24 = 0;
        while(reg->size > _v24) {
            _t81 = reg->node + (_v24 << 4);
            _t82 =  *(_t81 + 8);
            _t106 = control1;
            asm("shrd eax, edx, cl");
            _t113 =  *(_t81 + 12) >> (_t106 & 4294967295);
            if((_t106 & 4294967295 & 32) != 0) {
                _t82 = _t113;
            }
            if((_t82 & 1 & 4294967295) != 0) {
                _t87 = reg->node + (_v24 << 4);
                _t88 =  *(_t87 + 8);
                _t107 = control2;
                asm("shrd eax, edx, cl");
                _t116 =  *(_t87 + 12) >> (_t107 & 4294967295);
                if((_t107 & 4294967295 & 32) != 0) {
                    _t88 = _t116;
                }
                if((_t88 & 1 & 4294967295) != 0) {
                    _v40 = reg->node + (_v24 << 4);
                    _t96 = reg->node + (_v24 << 4);
                    __esi =  *(_t96 + 8);
                    __edi =  *(_t96 + 12);
                    _t108 = target;
                    _v52 = 1;
                    _v48 = 0;
                    _t120 = _v48;
                    asm("shld edx, eax, cl");
                    _t98 = _v52 << (_t108 & 4294967295);
                    if((_t108 & 4294967295 & 32) != 0) {
                        _t120 = _t98;
                        _t98 = 0;
                    }
                    _t110 = _v40;
                     *(_t110 + 8) = __esi ^ _t98;
                     *(_t110 + 12) = __edi ^ _t120;
                }
            }
            _v24 = _v24 + 1;
        }
    }
    quantum_toffoli_ft(control1, control2, target, reg);
    return;
}

quantum_unbounded_toffoli(int controlling, quantum_reg* reg)
{// addr = 0x0804A3B3
    va_list bits;
    int target;
    int* controls;
    int i;
    int j;
    void* _v24;
    _unknown_ _v28;
    void* _v32;
    signed int _v36;
    _unknown_ _v40;
    _unknown_ _v56;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t77;
    _unknown_ _t98;
    _unknown_ _t100;
    _unknown_ _t106;
    _unknown_ _t110;
    _unknown_ _t113;
    _unknown_ _t117;
    _unknown_ _t123;
    _unknown_ _t125;
    _unknown_ _t126;
    void* _t127;
    _unknown_ _t128;
    _unknown_ _t132;
    _unknown_ _t137;
    _unknown_ _t138;
    _unknown_ _t139;

    _v32 = malloc(controlling << 2);
    if(_v32 == 0) {
        quantum_error(2);
    }
    quantum_memman(controlling << 2);
    _v24 =  &_a12;
    _v36 = 0;
    while(_v36 < controlling) {
        _t127 = _v24;
        _v24 =  &(_t127[1]);
        _v32[_v36] =  *_t127;
        _v36 = _v36 + 1;
    }
}

quantum_sigma_x(int target, quantum_reg* reg)
{// addr = 0x0804A535
    int i;
    int qec;
    signed int _v24;
    intOrPtr _v28;
    intOrPtr _v40;
    int* _v48;
    signed int _v52;
    int _v56;
    signed int __edi;
    signed int __esi;
    _unknown_ __ebp;
    _unknown_ _t50;
    signed int _t52;
    signed int _t58;
    intOrPtr _t60;
    signed int _t64;

    quantum_qec_get_status( &_v28, 0);
    if(_v28 == 0) {
        _v56 = target;
        if(quantum_objcode_put(3) != 0) {
            return ;
        }
        _v24 = 0;
        while(reg->size > _v24) {
            _v40 = reg->node + (_v24 << 4);
            _t50 = reg->node + (_v24 << 4);
            __esi =  *(_t50 + 8);
            __edi =  *(_t50 + 12);
            _t58 = target;
            _v52 = 1;
            _v48 = 0;
            _t64 = _v48;
            asm("shld edx, eax, cl");
            _t52 = _v52 << (_t58 & 4294967295);
            if((_t58 & 4294967295 & 32) != 0) {
                _t64 = _t52;
                _t52 = 0;
            }
            _t60 = _v40;
             *(_t60 + 8) = __esi ^ _t52;
             *(_t60 + 12) = __edi ^ _t64;
            _v24 = _v24 + 1;
        }
    }
    quantum_sigma_x_ft(target, reg);
    return;
}

quantum_sigma_y(int target, quantum_reg* reg)
{// addr = 0x0804A615
    int i;
    signed int _v24;
    intOrPtr _v40;
    signed int _v48;
    signed int _v52;
    intOrPtr _v64;
    signed int _v68;
    int _v72;
    _unknown_ __ebx;
    signed int __edi;
    _unknown_ __ebp;
    _unknown_ _t70;
    _unknown_ _t81;
    signed int _t83;
    _unknown_ _t89;
    signed int _t90;
    intOrPtr* _t98;
    _unknown_ _t100;
    _unknown_ _t101;
    intOrPtr* _t110;
    _unknown_ _t112;
    _unknown_ _t113;
    signed int _t120;
    intOrPtr _t122;
    signed int _t123;
    _unknown_ _t128;
    signed int _t132;
    signed int _t137;
    int _t141;
    int _t146;
    _unknown_ _t148;
    _unknown_ _t149;
    signed int _t150;
    intOrPtr* _t151;
    intOrPtr* _t152;

    _v72 = target;
    if(quantum_objcode_put(4) != 0) {
        return ;
    }
    _v24 = 0;
    while(reg->size > _v24) {
        _v40 = reg->node + (_v24 << 4);
        _t81 = reg->node + (_v24 << 4);
        _t150 =  *(_t81 + 8);
        __edi =  *(_t81 + 12);
        _t120 = target;
        _v52 = 1;
        _v48 = 0;
        _t132 = _v48;
        asm("shld edx, eax, cl");
        _t83 = _v52 << (_t120 & 4294967295);
        __eflags = _t120 & 4294967295 & 32;
        if((_t120 & 4294967295 & 32) != 0) {
            _t132 = _t83;
            _t83 = 0;
        }
        _t122 = _v40;
         *(_t122 + 8) = _t150 ^ _t83;
         *(_t122 + 12) = __edi ^ _t132;
        _t89 = reg->node + (_v24 << 4);
        _t90 =  *(_t89 + 8);
        _t123 = target;
        asm("shrd eax, edx, cl");
        _t137 =  *(_t89 + 12) >> (_t123 & 4294967295);
        __eflags = _t123 & 4294967295 & 32;
        if((_t123 & 4294967295 & 32) != 0) {
            _t90 = _t137;
        }
        __eflags = _t90 & 1 & 4294967295;
        if(__eflags == 0) {
            _t151 = reg->node + (_v24 << 4);
            _t98 = reg->node + (_v24 << 4);
            _t141 =  *(_t98 + 4);
            _v64 = -1082130432;
            _v68 = 0;
            _v72 = _t141;
             *__esp =  *_t98;
             *_t151 = L08052B40( *_t98, _t151, __eflags);
             *(_t151 + 4) = _t141;
        } else {
            _t152 = reg->node + (_v24 << 4);
            _t110 = reg->node + (_v24 << 4);
            _t146 =  *(_t110 + 4);
            _v64 = 1065353216;
            _v68 = 0;
            _v72 = _t146;
             *__esp =  *_t110;
             *_t152 = L08052B40( *_t110, _t152, __eflags);
             *(_t152 + 4) = _t146;
        }
        _v24 = _v24 + 1;
    }
}

quantum_sigma_z(int target, quantum_reg* reg)
{// addr = 0x0804A79E
    int i;
    signed int _v8;
    intOrPtr _v24;
    int _v40;
    _unknown_ __ebp;
    _unknown_ _t43;
    signed int _t44;
    intOrPtr* _t52;
    signed int _t56;
    intOrPtr* _t57;
    signed int _t60;
    _unknown_ _t65;

    _v40 = target;
    if(quantum_objcode_put(5) != 0) {
        return ;
    }
    _v8 = 0;
    while(reg->size > _v8) {
        _t43 = reg->node + (_v8 << 4);
        _t44 =  *(_t43 + 8);
        _t56 = target;
        asm("shrd eax, edx, cl");
        _t60 =  *(_t43 + 12) >> (_t56 & 4294967295);
        if((_t56 & 4294967295 & 32) != 0) {
            _t44 = _t60;
        }
        if((_t44 & 1 & 4294967295) != 0) {
            _t57 = reg->node + (_v8 << 4);
            _t52 = reg->node + (_v8 << 4);
            _v24 =  *_t52;
            asm("fld dword [ebp-0x14]");
            _v24 =  *((intOrPtr*)(_t52 + 4));
            asm("fld dword [ebp-0x14]");
            asm("fxch st0, st1");
            asm("fchs ");
            asm("fxch st0, st1");
            asm("fchs ");
            asm("fxch st0, st1");
            asm("fstp dword [ebp-0x14]");
            asm("fstp dword [ebp-0x14]");
             *_t57 = _v24;
             *((intOrPtr*)(_t57 + 4)) = _v24;
        }
        _v8 = _v8 + 1;
    }
}

quantum_swaptheleads(int width, quantum_reg* reg)
{// addr = 0x0804A85F
    int i;
    int j;
    int pat1;
    int pat2;
    int qec;
    long long unsigned int l;
    signed int _v24;
    int* _v28;
    signed int _v32;
    int* _v36;
    intOrPtr _v40;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v68;
    int _v72;
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    quantum_reg* _t102;
    _unknown_ _t110;
    signed int _t111;
    _unknown_ _t121;
    signed int _t122;
    _unknown_ _t128;
    signed int _t150;
    signed int _t151;
    signed int _t153;
    signed int _t154;
    _unknown_ _t158;
    _unknown_ _t160;
    _unknown_ _t161;
    _unknown_ _t163;
    _unknown_ _t165;
    _unknown_ _t171;
    _unknown_ _t174;
    _unknown_ _t176;
    _unknown_ _t179;
    _unknown_ _t180;

    quantum_qec_get_status( &_v40, 0);
    if(_v40 != 0) {
        _v24 = 0;
        while(_v24 < width) {
            quantum_cnot(_v24, width + _v24, reg);
            quantum_cnot(width + _v24, _v24, reg);
            quantum_cnot(_v24, width + _v24, reg);
            _v24 = _v24 + 1;
        }
    }
    _v24 = 0;
    while(1) {
L15:
        _t102 = reg;
        _t103 = _t102->size;
        if(_t102->size <= _v24) {
            break;
        }
        _v72 = width;
        if(quantum_objcode_put(14) != 0) {
            return ;
        }
        _t150 =  *((intOrPtr*)(reg->node + (_v24 << 4) + 8));
        _t153 = width;
        asm("shld edx, eax, cl");
        _t111 = 1 << (_t153 & 4294967295);
        if((_t153 & 4294967295 & 32) != 0) {
            _t111 = 0;
        }
        _v32 = _t111 - 1 & _t150;
        _v36 = 0;
        _v28 = 0;
        while(_v28 < width) {
            _t151 =  *(reg->node + (_v24 << 4) + 8);
            _t154 = _v28 + width;
            asm("shld edx, eax, cl");
            _t122 = 1 << (_t154 & 4294967295);
            if((_t154 & 4294967295 & 32) != 0) {
                _t122 = 0;
            }
            _v36 = _v36 + (_t151 & _t122);
            _v28 =  &(_v28[0]);
        }
    }
    return;
    goto L15;
}

quantum_swaptheleads_omuln_controlled(int control, int width, quantum_reg* reg)
{// addr = 0x0804AA4B
    int i;
    intOrPtr _v8;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v8 = 0;
    while(_v8 < width) {
        quantum_toffoli(control, width + _v8, width + width + _v8 + 2, reg);
        quantum_toffoli(control, width + width + _v8 + 2, width + _v8, reg);
        quantum_toffoli(control, width + _v8, width + width + _v8 + 2, reg);
        _v8 = _v8 + 1;
    }
}

quantum_gate1(int target, quantum_matrix m, quantum_reg* reg)
{// addr = 0x0804AAF9
    int i;
    int j;
    int k;
    int iset;
    int addsize;
    int decsize;
    int sorted;
    complex float t;
    complex float tnot;
    float limit;
    char* done;
    signed int _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    signed int _v48;
    signed int _v52;
    signed int _v56;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    signed int _v76;
    signed int _v80;
    _unknown_ _v108;
    _unknown_ _v112;
    _unknown_ _v116;
    _unknown_ _v120;
    _unknown_ _v124;
    _unknown_ _v160;
    signed int _v168;
    signed int _v172;
    int* _v180;
    quantum_reg_node* _v184;
    int _v188;
    int _v192;
    int _v196;
    signed int _v200;
    _unknown_ _v204;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __ebp;
    _unknown_ _t406;
    _unknown_ _t407;
    _unknown_ _t408;
    _unknown_ _t416;
    signed int _t418;
    int _t421;
    _unknown_ _t425;
    _unknown_ _t426;
    _unknown_ _t440;
    _unknown_ _t447;
    _unknown_ _t453;
    _unknown_ _t454;
    _unknown_ _t463;
    _unknown_ _t467;
    _unknown_ _t468;
    _unknown_ _t473;
    _unknown_ _t479;
    _unknown_ _t480;
    _unknown_ _t482;
    _unknown_ _t483;
    _unknown_ _t487;
    _unknown_ _t489;
    _unknown_ _t496;
    _unknown_ _t501;
    _unknown_ _t504;
    _unknown_ _t507;
    _unknown_ _t514;
    _unknown_ _t515;
    _unknown_ _t519;
    _unknown_ _t520;
    _unknown_ _t522;
    _unknown_ _t529;
    _unknown_ _t531;
    _unknown_ _t538;
    _unknown_ _t549;
    _unknown_ _t558;
    _unknown_ _t562;
    _unknown_ _t578;
    _unknown_ _t587;
    _unknown_ _t603;
    _unknown_ _t608;
    _unknown_ _t611;
    _unknown_ _t614;
    _unknown_ _t617;
    _unknown_ _t623;
    _unknown_ _t626;
    _unknown_ _t629;
    _unknown_ _t632;
    _unknown_ _t639;
    _unknown_ _t642;
    _unknown_ _t645;
    _unknown_ _t654;
    quantum_reg* _t658;
    _unknown_ _t660;
    _unknown_ _t662;
    signed int _t684;
    _unknown_ _t692;
    _unknown_ _t694;
    _unknown_ _t696;
    _unknown_ _t697;
    _unknown_ _t698;
    _unknown_ _t708;
    _unknown_ _t709;
    _unknown_ _t711;
    _unknown_ _t713;
    _unknown_ _t729;
    signed int _t731;
    _unknown_ _t742;
    _unknown_ _t744;
    _unknown_ _t748;
    _unknown_ _t761;
    _unknown_ _t762;
    _unknown_ _t764;
    _unknown_ _t771;
    _unknown_ _t774;
    _unknown_ _t777;
    _unknown_ _t778;
    _unknown_ _t782;
    _unknown_ _t787;
    _unknown_ _t791;
    _unknown_ _t795;
    _unknown_ _t798;
    _unknown_ _t803;
    _unknown_ _t806;
    _unknown_ _t811;
    _unknown_ _t814;
    _unknown_ _t819;
    signed int _t820;
    _unknown_ _t821;
    _unknown_ _t823;
    _unknown_ _t827;
    signed int _t828;
    _unknown_ _t831;
    _unknown_ _t832;
    _unknown_ _t833;
    _unknown_ _t834;
    _unknown_ _t835;
    _unknown_ _t836;
    _unknown_ _t837;
    _unknown_ _t838;

    _v48 = 0;
    _v52 = 0;
    _v56 = 1;
    _v80 = 0;
    _v76 = 0;
    if(m.cols != 2 || m.rows != 2) {
        quantum_error(4);
    }
    quantum_reconstruct_hash(_a20);
    _v32 = 0;
    while(_a20->size > _v32) {
        _t416 = _a20->node + (_v32 << 4);
        _t828 =  *(_t416 + 8);
        _t820 =  *(_t416 + 12);
        _t684 = target;
        _v172 = 1;
        _v168 = 0;
        _t731 = _v168;
        asm("shld edx, eax, cl");
        _t418 = _v172 << (_t684 & 4294967295);
        __eflags = _t684 & 4294967295 & 32;
        if((_t684 & 4294967295 & 32) != 0) {
            _t731 = _t418;
            _t418 = 0;
        }
        _t658 = _a20;
        _v196 = _t658->width;
        _v192 = _t658->size;
        _v188 = _t658->hashw;
        _v184 = _t658->node;
        _v180 = _t658->hash;
         *__esp = _t828 ^ _t418;
        _v200 = _t820 ^ _t731;
        _t421 = quantum_get_state();
        __eflags = _t421 - 255;
        if(_t421 == 255) {
            _v48 = _v48 + 1;
        }
        _v32 = _v32 + 1;
    }
}

quantum_reconstruct_hash(quantum_reg* reg)
{// addr = 0x0804B509
    int i;
    signed int _v8;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t30;
    _unknown_ _t41;

    _v8 = 0;
    while(1 << (reg->hashw & 4294967295) > _v8) {
        reg->hash[_v8] = 0;
        _v8 = _v8 + 1;
    }
}

quantum_add_hash(long long unsigned int a, int pos, quantum_reg* reg)
{// addr = 0x0804B58C
    int i;
    int mark;
    unsigned int _v8;
    intOrPtr _v12;
    int _v24;
    long long unsigned int _v28;
    intOrPtr _v36;
    int _v40;
    _unknown_ __ebp;
    _unknown_ _t42;

    _v28 = a;
    _v24 = pos;
    _v12 = 0;
    _v36 =  *((intOrPtr*)(_a16 + 8));
     *__esp = _v28;
    _v40 = _v24;
    _v8 = quantum_hash64();
    while( *((intOrPtr*)( *((intOrPtr*)(_a16 + 16)) + (_v8 << 2))) != 0) {
    }
}

unsigned int quantum_hash64(long long unsigned int key, int width)
{// addr = 0x0804B62B
    unsigned int k32;
    unsigned int _v8;
    int _v24;
    long long unsigned int _v28;
    _unknown_ __ebp;
    _unknown_ _t18;
    _unknown_ _t23;
    _unknown_ _t26;
    _unknown_ _t29;

    _v28 = key;
    _v24 = width;
    _v8 = _v24 ^ _v28;
    _v8 = _v8 * _v8;
    _v8 = _v8 >> (32 - _a12 & 4294967295);
    return _v8;
}

int quantum_get_state(long long unsigned int a, quantum_reg reg)
{// addr = 0x0804B66D
    int i;
    signed int _v8;
    signed int _v24;
    signed int _v28;
    int _v32;
    quantum_reg_node* _v44;
    signed int _v48;
    _unknown_ __ebp;
    _unknown_ _t52;
    _unknown_ _t60;

    _v28 = a;
    _v24 = reg.width;
    if(reg.node == 0) {
        _v32 = _v28;
        return _v32;
    }
    _v44 = reg.node;
     *__esp = _v28;
    _v48 = _v24;
    _v8 = quantum_hash64();
    while( *((intOrPtr*)(_a28 + (_v8 << 2))) != 0) {
        if(( *(reg.hash +  ~(1 -  *((intOrPtr*)(_a28 + (_v8 << 2))) << 4) + 8) ^ _v28 |  *(reg.hash +  ~(1 -  *((intOrPtr*)(_a28 + (_v8 << 2))) << 4) + 12) ^ _v24) != 0) {
            _v8 = _v8 + 1;
            if(1 << (reg.node & 4294967295) == _v8) {
                _v8 = 0;
            }
            continue;
        }
        _v32 =  *((intOrPtr*)(_a28 + (_v8 << 2))) - 1;
        return _v32;
    }
}

float quantum_prob_inline(complex float a)
{// addr = 0x0804B733
    float r;
    float i;
    float _v24;
    _unknown_ __ebp;
    float _t10;

     *__esp = a;
    _v24 = _a8;
    quantum_real();
    asm("fstp dword [ebp-0x4]");
     *__esp = a;
    _t10 = _a8;
    _v24 = _t10;
    quantum_imag();
    asm("fstp dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fmul dword [ebp-0x4]");
    asm("fld dword [ebp-0x8]");
    asm("fmul dword [ebp-0x8]");
    asm("faddp st1, st0");
    return _t10;
}

float quantum_real(complex float a)
{// addr = 0x0804B773
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t7;

    _v8 =  &a;
    _t7 =  *_v8;
    _v24 = _t7;
    asm("fld dword [ebp-0x14]");
    return _t7;
}

float quantum_imag(complex float a)
{// addr = 0x0804B78C
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t8;

    _v8 =  &a;
    _t8 = _v8[0];
    _v24 = _t8;
    asm("fld dword [ebp-0x14]");
    return _t8;
}

quantum_gate2(int target1, int target2, quantum_matrix m, quantum_reg* reg)
{// addr = 0x0804B7A8
    int i;
    int j;
    int k;
    int l;
    int addsize;
    int decsize;
    complex float[3] psi_sub;
    int[3] base;
    int[1] bits;
    float limit;
    char* done;
    signed int _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    signed int _v48;
    signed int _v52;
    _unknown_ _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v148;
    _unknown_ _v152;
    _unknown_ _v156;
    _unknown_ _v192;
    _unknown_ _v200;
    _unknown_ _v204;
    _unknown_ _v208;
    _unknown_ _v212;
    _unknown_ _v216;
    _unknown_ _v220;
    _unknown_ _v228;
    _unknown_ _v232;
    _unknown_ _v236;
    _unknown_ _v240;
    _unknown_ _v244;
    _unknown_ _v248;
    _unknown_ _v252;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __ebp;
    _unknown_ _t433;
    _unknown_ _t436;
    _unknown_ _t447;
    _unknown_ _t455;
    _unknown_ _t457;
    _unknown_ _t460;
    _unknown_ _t464;
    _unknown_ _t466;
    _unknown_ _t469;
    _unknown_ _t481;
    _unknown_ _t488;
    _unknown_ _t494;
    _unknown_ _t495;
    _unknown_ _t504;
    _unknown_ _t508;
    _unknown_ _t509;
    _unknown_ _t516;
    _unknown_ _t520;
    _unknown_ _t528;
    _unknown_ _t530;
    _unknown_ _t538;
    _unknown_ _t540;
    _unknown_ _t548;
    _unknown_ _t550;
    _unknown_ _t552;
    _unknown_ _t559;
    _unknown_ _t565;
    _unknown_ _t571;
    _unknown_ _t572;
    _unknown_ _t577;
    _unknown_ _t578;
    _unknown_ _t580;
    _unknown_ _t581;
    _unknown_ _t586;
    _unknown_ _t587;
    _unknown_ _t589;
    _unknown_ _t600;
    _unknown_ _t604;
    _unknown_ _t619;
    _unknown_ _t628;
    _unknown_ _t645;
    _unknown_ _t648;
    _unknown_ _t650;
    _unknown_ _t652;
    _unknown_ _t654;
    _unknown_ _t657;
    _unknown_ _t664;
    _unknown_ _t671;
    _unknown_ _t678;
    _unknown_ _t680;
    _unknown_ _t682;
    _unknown_ _t684;
    _unknown_ _t693;
    _unknown_ _t702;
    _unknown_ _t705;
    _unknown_ _t708;
    _unknown_ _t711;
    _unknown_ _t716;
    _unknown_ _t720;
    _unknown_ _t728;
    _unknown_ _t730;
    _unknown_ _t734;
    _unknown_ _t752;
    _unknown_ _t757;
    _unknown_ _t762;
    _unknown_ _t764;
    _unknown_ _t765;
    _unknown_ _t770;
    _unknown_ _t772;
    _unknown_ _t775;
    _unknown_ _t778;
    _unknown_ _t779;
    _unknown_ _t780;
    _unknown_ _t781;
    _unknown_ _t782;
    _unknown_ _t783;
    _unknown_ _t784;
    _unknown_ _t785;
    _unknown_ _t786;
    _unknown_ _t787;
    _unknown_ _t788;
    _unknown_ _t789;

    _v48 = 0;
    _v52 = 0;
    if(m.cols != 4 || m.rows != 4) {
        quantum_error(4);
    }
    _v32 = 0;
    while(1 << ( *(_a24 + 8) & 4294967295) > _v32) {
         *( *((intOrPtr*)(_a24 + 16)) + (_v32 << 2)) = 0;
        _v32 = _v32 + 1;
    }
}

int quantum_bitmask(long long unsigned int a, int width, int* bits)
{// addr = 0x0804C059
    int i;
    int mask;
    signed int _v8;
    signed int _v12;
    int _v24;
    long long unsigned int _v28;
    _unknown_ __ebp;
    signed int _t31;
    _unknown_ _t33;
    signed int _t36;
    signed int _t39;
    _unknown_ _t40;

    _v28 = a;
    _v24 = width;
    _v12 = 0;
    _v8 = 0;
    while(_v8 < bits) {
        _t36 =  *((_v8 << 2) + _a16);
        _t31 = _v28;
        asm("shrd eax, edx, cl");
        _t39 = _v24 >> (_t36 & 4294967295);
        if((_t36 & 4294967295 & 32) != 0) {
            _t31 = _t39;
        }
        if((_t31 & 1 & 4294967295) != 0) {
            _v12 = _v12 + (1 << (_v8 & 4294967295));
        }
        _v8 = _v8 + 1;
    }
}

quantum_hadamard(int target, quantum_reg* reg)
{// addr = 0x0804C0BF
    quantum_matrix m;
    struct quantum_matrix_struct _v24;
    int _v36;
    int _v40;
    intOrPtr _v44;
    quantum_reg* _v64;
    struct quantum_matrix_struct _v76;
    _unknown_ __ebp;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t42;
    _unknown_ _t43;
    _unknown_ _t45;
    _unknown_ _t46;
    _unknown_ _t48;
    _unknown_ _t49;
    int _t56;
    intOrPtr* _t57;
    intOrPtr* _t58;
    intOrPtr* _t59;

    _v76.cols = target;
    if(quantum_objcode_put(6) != 0) {
        return ;
    }
    _v76.t = 2;
    quantum_new_matrix( &_v44, 2);
    __esp = __esp - 4;
    _v24.rows = _v44;
    _v24.cols = _v40;
    _v24.t = _v36;
    _t56 = _v24.t;
     *_t56 = 1060439283;
     *((intOrPtr*)(_t56 + 4)) = 0;
    _t57 = _v24.t + 8;
     *_t57 = 1060439283;
     *((intOrPtr*)(_t57 + 4)) = 0;
    _t58 = _v24.t + 16;
     *_t58 = 1060439283;
     *((intOrPtr*)(_t58 + 4)) = 0;
    _t59 = _v24.t + 24;
     *_t59 = -1087044365;
     *((intOrPtr*)(_t59 + 4)) = 0;
    _v64 = reg;
    _v76 = _v24;
    _v76.cols = _v24.cols;
    _v76.t = _v24.t;
     *__esp = target;
    quantum_gate1();
    quantum_delete_matrix( &_v24);
    return;
}

quantum_walsh(int width, quantum_reg* reg)
{// addr = 0x0804C195
    int i;
    int _v8;
    _unknown_ _v24;
    _unknown_ __ebp;

    _v8 = 0;
    while(_v8 < width) {
        quantum_hadamard(_v8, reg);
        _v8 = _v8 + 1;
    }
}

quantum_r_x(int target, float gamma, quantum_reg* reg)
{// addr = 0x0804C1C4
    quantum_matrix m;
    _unknown_ _v8;
    struct quantum_matrix_struct _v24;
    intOrPtr* _v36;
    intOrPtr _v40;
    intOrPtr _v44;
    char _v68;
    intOrPtr _v80;
    int _v132;
    int _v136;
    struct quantum_matrix_struct _v148;
    _unknown_ __ebp;
    _unknown_ _t51;
    _unknown_ _t55;
    _unknown_ _t65;
    intOrPtr* _t66;
    intOrPtr* _t67;
    intOrPtr* _t68;
    intOrPtr* _t69;
    _unknown_ _t70;
    _unknown_ _t73;

    _push(__ebx);
    __esp = __esp - 132;
    asm("fld dword [ebp+0xc]");
    asm("fstp qword [esp+0x8]");
    _v136 = target;
    __eflags = quantum_objcode_put(7);
    if(__eflags != 0) {
        return ;
    }
    _v132 = 2;
    quantum_new_matrix( &_v44, 2);
    __esp = __esp - 4;
    _v24.rows = _v44;
    _v24.cols = _v40;
    _v24.t = _v36;
    _t66 = _v24.t;
    asm("fld dword [ebp+0xc]");
    asm("fld dword [0x8054350]");
    asm("fdivp st1, st0");
    asm("fstp qword [esp]");
    cos();
    asm("fstp dword [ebp-0x2c]");
    asm("fld dword [ebp-0x2c]");
    asm("fstp dword [ebp-0x4c]");
     *_t66 = _v80;
     *((intOrPtr*)(_t66 + 4)) = 0;
    _t67 = _v24.t + 8;
    asm("fld dword [ebp+0xc]");
    asm("fld dword [0x8054350]");
    asm("fdivp st1, st0");
    asm("fstp qword [esp]");
    sin();
    asm("fldz ");
    asm("fld1 ");
    asm("fchs ");
    asm("fstp qword [esp+0x1c]");
    asm("fldz ");
    asm("fstp qword [esp+0x14]");
    asm("fstp qword [esp+0xc]");
    asm("fstp qword [esp+0x4]");
    L080531E0(__esi, __eflags,  &_v68);
    asm("fld qword [ebp-0x40]");
    asm("fld qword [ebp-0x38]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp-0x2c]");
    asm("fld dword [ebp-0x2c]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp-0x2c]");
    asm("fld dword [ebp-0x2c]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp-0x4c]");
    asm("fstp dword [ebp-0x4c]");
     *_t67 = _v80;
     *((intOrPtr*)(_t67 + 4)) = _v80;
    _t68 = _v24.t + 16;
    asm("fld dword [ebp+0xc]");
    asm("fld dword [0x8054350]");
    asm("fdivp st1, st0");
    asm("fstp qword [esp]");
    sin();
    asm("fldz ");
    asm("fld1 ");
    asm("fchs ");
    asm("fstp qword [esp+0x1c]");
    asm("fldz ");
    asm("fstp qword [esp+0x14]");
    asm("fstp qword [esp+0xc]");
    asm("fstp qword [esp+0x4]");
    L080531E0(__esi, __eflags,  &_v68);
    asm("fld qword [ebp-0x40]");
    asm("fld qword [ebp-0x38]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp-0x2c]");
    asm("fld dword [ebp-0x2c]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp-0x2c]");
    asm("fld dword [ebp-0x2c]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp-0x4c]");
    asm("fstp dword [ebp-0x4c]");
     *_t68 = _v80;
     *((intOrPtr*)(_t68 + 4)) = _v80;
    _t69 = _v24.t + 24;
    asm("fld dword [ebp+0xc]");
    asm("fld dword [0x8054350]");
    asm("fdivp st1, st0");
    asm("fstp qword [esp]");
    cos();
    asm("fstp dword [ebp-0x2c]");
    asm("fld dword [ebp-0x2c]");
    asm("fstp dword [ebp-0x4c]");
     *_t69 = _v80;
     *((intOrPtr*)(_t69 + 4)) = 0;
    _v136 = reg;
    _v148 = _v24;
    _v148.cols = _v24.cols;
    _v148.t = _v24.t;
     *__esp = target;
    quantum_gate1();
    _t43 =  &_v24;
    quantum_delete_matrix( &_v24);
    return ;
}

quantum_r_y(int target, float gamma, quantum_reg* reg)
{// addr = 0x0804C382
    quantum_matrix m;
    _unknown_ _v8;
    struct quantum_matrix_struct _v24;
    int _v36;
    int _v40;
    intOrPtr _v44;
    intOrPtr _v64;
    quantum_reg* _v96;
    struct quantum_matrix_struct _v108;
    _unknown_ __ebp;
    _unknown_ _t57;
    int _t58;
    intOrPtr* _t59;
    intOrPtr* _t60;
    intOrPtr* _t61;
    _unknown_ _t62;
    _unknown_ _t63;
    _unknown_ _t64;
    _unknown_ _t65;

    _push(__ebx);
    __esp = __esp - 100;
    asm("fld dword [ebp+0xc]");
    asm("fstp qword [esp+0x8]");
    _v108.cols = target;
    if(quantum_objcode_put(8) != 0) {
        return ;
    }
    _v108.t = 2;
    quantum_new_matrix( &_v44, 2);
    __esp = __esp - 4;
    _v24.rows = _v44;
    _v24.cols = _v40;
    _v24.t = _v36;
    _t58 = _v24.t;
    asm("fld dword [ebp+0xc]");
    asm("fld dword [0x8054350]");
    asm("fdivp st1, st0");
    asm("fstp qword [esp]");
    cos();
    asm("fstp dword [ebp-0x2c]");
    asm("fld dword [ebp-0x2c]");
    asm("fstp dword [ebp-0x3c]");
     *_t58 = _v64;
     *((intOrPtr*)(_t58 + 4)) = 0;
    _t59 = _v24.t + 8;
    asm("fld dword [ebp+0xc]");
    asm("fld dword [0x8054354]");
    asm("fdivp st1, st0");
    asm("fstp qword [esp]");
    sin();
    asm("fstp dword [ebp-0x2c]");
    asm("fld dword [ebp-0x2c]");
    asm("fstp dword [ebp-0x3c]");
     *_t59 = _v64;
     *((intOrPtr*)(_t59 + 4)) = 0;
    _t60 = _v24.t + 16;
    asm("fld dword [ebp+0xc]");
    asm("fld dword [0x8054350]");
    asm("fdivp st1, st0");
    asm("fstp qword [esp]");
    sin();
    asm("fstp dword [ebp-0x2c]");
    asm("fld dword [ebp-0x2c]");
    asm("fstp dword [ebp-0x3c]");
     *_t60 = _v64;
     *((intOrPtr*)(_t60 + 4)) = 0;
    _t61 = _v24.t + 24;
    asm("fld dword [ebp+0xc]");
    asm("fld dword [0x8054350]");
    asm("fdivp st1, st0");
    asm("fstp qword [esp]");
    cos();
    asm("fstp dword [ebp-0x2c]");
    asm("fld dword [ebp-0x2c]");
    asm("fstp dword [ebp-0x3c]");
     *_t61 = _v64;
     *((intOrPtr*)(_t61 + 4)) = 0;
    _v96 = reg;
    _v108 = _v24;
    _v108.cols = _v24.cols;
    _v108.t = _v24.t;
     *__esp = target;
    quantum_gate1();
    _t39 =  &_v24;
    quantum_delete_matrix( &_v24);
    return ;
}

quantum_r_z(int target, float gamma, quantum_reg* reg)
{// addr = 0x0804C4CB
    int i;
    complex float z;
    signed int _v16;
    intOrPtr _v20;
    complex float _v24;
    intOrPtr _v32;
    complex float _v36;
    int _v40;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t54;
    _unknown_ _t64;
    signed int _t65;
    intOrPtr* _t73;
    intOrPtr* _t84;
    signed int _t96;
    intOrPtr _t101;
    signed int _t105;
    complex float _t109;
    complex float _t114;
    _unknown_ _t116;
    _unknown_ _t117;
    intOrPtr* _t118;
    intOrPtr* _t119;

    _t101 = __edx;
    asm("fld dword [ebp+0xc]");
    asm("fstp qword [esp+0x8]");
    _v40 = target;
    if(quantum_objcode_put(9) != 0) {
        return ;
    }
    asm("fld dword [ebp+0xc]");
    asm("fld dword [0x8054350]");
    asm("fdivp st1, st0");
    asm("fstp dword [esp]");
    _v24 = quantum_cexp();
    _v20 = _t101;
    _v16 = 0;
    while(reg->size > _v16) {
        _t64 = reg->node + (_v16 << 4);
        _t65 =  *(_t64 + 8);
        _t96 = target;
        asm("shrd eax, edx, cl");
        _t105 =  *(_t64 + 12) >> (_t96 & 4294967295);
        __eflags = _t96 & 4294967295 & 32;
        if((_t96 & 4294967295 & 32) != 0) {
            _t65 = _t105;
        }
        __eflags = _t65 & 1 & 4294967295;
        if(__eflags == 0) {
            _t118 = reg->node + (_v16 << 4);
            _t73 = reg->node + (_v16 << 4);
            _t109 = _v24;
            _v32 = _v20;
            _v36 = _t109;
            _v40 =  *(_t73 + 4);
             *__esp =  *_t73;
             *_t118 = L08053890( *(_t73 + 4), _t118, __eflags);
             *(_t118 + 4) = _t109;
        } else {
            _t119 = reg->node + (_v16 << 4);
            _t84 = reg->node + (_v16 << 4);
            _t114 = _v24;
            _v32 = _v20;
            _v36 = _t114;
            _v40 =  *(_t84 + 4);
             *__esp =  *_t84;
             *_t119 = L08052B40( *(_t84 + 4), _t119, __eflags);
             *(_t119 + 4) = _t114;
        }
        _v16 = _v16 + 1;
    }
}

quantum_phase_scale(int target, float gamma, quantum_reg* reg)
{// addr = 0x0804C612
    int i;
    complex float z;
    signed int _v16;
    intOrPtr _v20;
    complex float _v24;
    intOrPtr _v32;
    complex float _v36;
    int _v40;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t28;
    intOrPtr* _t42;
    intOrPtr _t54;
    complex float _t59;
    _unknown_ _t61;
    intOrPtr* _t62;

    _t54 = __edx;
    asm("fld dword [ebp+0xc]");
    asm("fstp qword [esp+0x8]");
    _v40 = target;
    if(quantum_objcode_put(11) != 0) {
        return ;
    }
    _v24 = quantum_cexp(gamma);
    _v20 = _t54;
    _v16 = 0;
    while(reg->size > _v16) {
        _t62 = reg->node + (_v16 << 4);
        _t42 = reg->node + (_v16 << 4);
        _t59 = _v24;
        _v32 = _v20;
        _v36 = _t59;
        _v40 =  *(_t42 + 4);
         *__esp =  *_t42;
         *_t62 = L08052B40( *(_t42 + 4), _t62, __eflags);
         *(_t62 + 4) = _t59;
        _v16 = _v16 + 1;
    }
}

quantum_phase_kick(int target, float gamma, quantum_reg* reg)
{// addr = 0x0804C6CD
    int i;
    complex float z;
    signed int _v16;
    intOrPtr _v20;
    complex float _v24;
    intOrPtr _v32;
    complex float _v36;
    int _v40;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t40;
    _unknown_ _t51;
    signed int _t52;
    intOrPtr* _t60;
    signed int _t70;
    intOrPtr _t73;
    signed int _t77;
    complex float _t81;
    _unknown_ _t83;
    _unknown_ _t84;
    intOrPtr* _t85;

    _t73 = __edx;
    asm("fld dword [ebp+0xc]");
    asm("fstp qword [esp+0x8]");
    _v40 = target;
    if(quantum_objcode_put(10) != 0) {
        return ;
    }
    _v24 = quantum_cexp(gamma);
    _v20 = _t73;
    _v16 = 0;
    while(reg->size > _v16) {
        _t51 = reg->node + (_v16 << 4);
        _t52 =  *(_t51 + 8);
        _t70 = target;
        asm("shrd eax, edx, cl");
        _t77 =  *(_t51 + 12) >> (_t70 & 4294967295);
        __eflags = _t70 & 4294967295 & 32;
        if((_t70 & 4294967295 & 32) != 0) {
            _t52 = _t77;
        }
        __eflags = _t52 & 1 & 4294967295;
        if(__eflags != 0) {
            _t85 = reg->node + (_v16 << 4);
            _t60 = reg->node + (_v16 << 4);
            _t81 = _v24;
            _v32 = _v20;
            _v36 = _t81;
            _v40 =  *(_t60 + 4);
             *__esp =  *_t60;
             *_t85 = L08052B40( *(_t60 + 4), _t85, __eflags);
             *(_t85 + 4) = _t81;
        }
        _v16 = _v16 + 1;
    }
}

quantum_cond_phase(int control, int target, quantum_reg* reg)
{// addr = 0x0804C7B9
    int i;
    complex float z;
    signed int _v16;
    signed int _v20;
    complex float _v24;
    signed int _v64;
    int _v68;
    int _v72;
    char _v76;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t60;
    _unknown_ _t65;
    signed int _t66;
    _unknown_ _t74;
    signed int _t75;
    signed int _t76;
    _unknown_ _t80;
    signed int _t81;
    intOrPtr* _t89;
    signed int _t99;
    signed int _t101;
    signed int _t102;
    _unknown_ _t105;
    signed int _t107;
    signed int _t111;
    signed int _t114;
    int _t118;
    _unknown_ _t120;
    _unknown_ _t121;
    _unknown_ _t122;
    intOrPtr* _t123;

    _v68 = target;
    _v72 = control;
    if(quantum_objcode_put(12) != 0) {
        return ;
    }
    _t99 = control - target;
    _t107 = 0;
    asm("shld edx, eax, cl");
    _t66 = 1 << (_t99 & 4294967295);
    if((_t99 & 4294967295 & 32) != 0) {
        _t107 = _t66;
        _t66 = 0;
    }
    _push(_t107);
    _push(_t66);
    asm("fild qword [esp]");
    __esp =  &_v76;
    asm("fstp tword [ebp-0x38]");
    if(_t107 < 0) {
        asm("fld tword [0x8054330]");
        asm("fld tword [ebp-0x38]");
        asm("faddp st1, st0");
        asm("fstp tword [ebp-0x38]");
    }
    asm("fld tword [ebp-0x38]");
    asm("fstp qword [ebp-0x20]");
    asm("fld qword [ebp-0x20]");
    asm("fld qword [0x8054358]");
    asm("fdivrp st1, st0");
    asm("fstp dword [ebp-0x24]");
    asm("fld dword [ebp-0x24]");
    asm("fstp dword [esp]");
    _v24 = quantum_cexp();
    _v20 = _t107;
    _v16 = 0;
    while(reg->size > _v16) {
        _t74 = reg->node + (_v16 << 4);
        _t75 =  *(_t74 + 8);
        _t101 = control;
        asm("shrd eax, edx, cl");
        _t111 =  *(_t74 + 12) >> (_t101 & 4294967295);
        __eflags = _t101 & 4294967295 & 32;
        if((_t101 & 4294967295 & 32) != 0) {
            _t75 = _t111;
        }
        _t76 = _t75 & 1;
        __eflags = _t76 & 4294967295;
        if((_t76 & 4294967295) != 0) {
            _t80 = reg->node + (_v16 << 4);
            _t81 =  *(_t80 + 8);
            _t102 = target;
            asm("shrd eax, edx, cl");
            _t114 =  *(_t80 + 12) >> (_t102 & 4294967295);
            __eflags = _t102 & 4294967295 & 32;
            if((_t102 & 4294967295 & 32) != 0) {
                _t81 = _t114;
            }
            __eflags = _t81 & 1 & 4294967295;
            if(__eflags != 0) {
                _t123 = reg->node + (_v16 << 4);
                _t89 = reg->node + (_v16 << 4);
                _t118 = _v24;
                _v64 = _v20;
                _v68 = _t118;
                _v72 =  *(_t89 + 4);
                 *__esp =  *_t89;
                 *_t123 = L08052B40( *(_t89 + 4), _t123, __eflags);
                 *(_t123 + 4) = _t118;
            }
        }
        _v16 = _v16 + 1;
    }
}

quantum_cond_phase_inv(int control, int target, quantum_reg* reg)
{// addr = 0x0804C929
    int i;
    complex float z;
    signed int _v16;
    signed int _v20;
    complex float _v24;
    signed int _v64;
    complex float _v68;
    intOrPtr _v72;
    char _v76;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t56;
    _unknown_ _t58;
    signed int _t59;
    _unknown_ _t67;
    signed int _t68;
    signed int _t69;
    _unknown_ _t73;
    signed int _t74;
    intOrPtr* _t82;
    signed int _t92;
    signed int _t94;
    signed int _t95;
    _unknown_ _t98;
    signed int _t100;
    signed int _t104;
    signed int _t107;
    complex float _t111;
    _unknown_ _t113;
    _unknown_ _t114;
    _unknown_ _t115;
    intOrPtr* _t116;

    _t92 = control - target;
    _t100 = 0;
    asm("shld edx, eax, cl");
    _t59 = 1 << (_t92 & 4294967295);
    if((_t92 & 4294967295 & 32) != 0) {
        _t100 = _t59;
        _t59 = 0;
    }
    _push(_t100);
    _push(_t59);
    asm("fild qword [esp]");
    __esp =  &_v76;
    asm("fstp tword [ebp-0x38]");
    if(_t100 < 0) {
        asm("fld tword [0x8054330]");
        asm("fld tword [ebp-0x38]");
        asm("faddp st1, st0");
        asm("fstp tword [ebp-0x38]");
    }
    asm("fld tword [ebp-0x38]");
    asm("fstp qword [ebp-0x20]");
    asm("fld qword [ebp-0x20]");
    asm("fld qword [0x8054360]");
    asm("fdivrp st1, st0");
    asm("fstp dword [ebp-0x24]");
    asm("fld dword [ebp-0x24]");
    asm("fstp dword [esp]");
    _v24 = quantum_cexp();
    _v20 = _t100;
    _v16 = 0;
    while(reg->size > _v16) {
        _t67 = reg->node + (_v16 << 4);
        _t68 =  *(_t67 + 8);
        _t94 = control;
        asm("shrd eax, edx, cl");
        _t104 =  *(_t67 + 12) >> (_t94 & 4294967295);
        __eflags = _t94 & 4294967295 & 32;
        if((_t94 & 4294967295 & 32) != 0) {
            _t68 = _t104;
        }
        _t69 = _t68 & 1;
        __eflags = _t69 & 4294967295;
        if((_t69 & 4294967295) != 0) {
            _t73 = reg->node + (_v16 << 4);
            _t74 =  *(_t73 + 8);
            _t95 = target;
            asm("shrd eax, edx, cl");
            _t107 =  *(_t73 + 12) >> (_t95 & 4294967295);
            __eflags = _t95 & 4294967295 & 32;
            if((_t95 & 4294967295 & 32) != 0) {
                _t74 = _t107;
            }
            __eflags = _t74 & 1 & 4294967295;
            if(__eflags != 0) {
                _t116 = reg->node + (_v16 << 4);
                _t82 = reg->node + (_v16 << 4);
                _t111 = _v24;
                _v64 = _v20;
                _v68 = _t111;
                _v72 =  *((intOrPtr*)(_t82 + 4));
                 *__esp =  *_t82;
                 *_t116 = L08052B40( *((intOrPtr*)(_t82 + 4)), _t116, __eflags);
                 *(_t116 + 4) = _t111;
            }
        }
        _v16 = _v16 + 1;
    }
}

quantum_cond_phase_kick(int control, int target, float gamma, quantum_reg* reg)
{// addr = 0x0804CA77
    int i;
    complex float z;
    signed int _v16;
    intOrPtr _v20;
    complex float _v24;
    intOrPtr _v48;
    int _v52;
    int _v56;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t54;
    _unknown_ _t66;
    signed int _t67;
    signed int _t68;
    _unknown_ _t72;
    signed int _t73;
    intOrPtr* _t81;
    signed int _t91;
    signed int _t92;
    intOrPtr _t95;
    signed int _t99;
    signed int _t102;
    int _t106;
    _unknown_ _t108;
    _unknown_ _t109;
    _unknown_ _t110;
    intOrPtr* _t111;

    _t95 = __edx;
    asm("fld dword [ebp+0x10]");
    asm("fstp qword [esp+0xc]");
    _v52 = target;
    _v56 = control;
    if(quantum_objcode_put(12) != 0) {
        return ;
    }
    _v24 = quantum_cexp(gamma);
    _v20 = _t95;
    _v16 = 0;
    while(reg->size > _v16) {
        _t66 = reg->node + (_v16 << 4);
        _t67 =  *(_t66 + 8);
        _t91 = control;
        asm("shrd eax, edx, cl");
        _t99 =  *(_t66 + 12) >> (_t91 & 4294967295);
        __eflags = _t91 & 4294967295 & 32;
        if((_t91 & 4294967295 & 32) != 0) {
            _t67 = _t99;
        }
        _t68 = _t67 & 1;
        __eflags = _t68 & 4294967295;
        if((_t68 & 4294967295) != 0) {
            _t72 = reg->node + (_v16 << 4);
            _t73 =  *(_t72 + 8);
            _t92 = target;
            asm("shrd eax, edx, cl");
            _t102 =  *(_t72 + 12) >> (_t92 & 4294967295);
            __eflags = _t92 & 4294967295 & 32;
            if((_t92 & 4294967295 & 32) != 0) {
                _t73 = _t102;
            }
            __eflags = _t73 & 1 & 4294967295;
            if(__eflags != 0) {
                _t111 = reg->node + (_v16 << 4);
                _t81 = reg->node + (_v16 << 4);
                _t106 = _v24;
                _v48 = _v20;
                _v52 = _t106;
                _v56 =  *(_t81 + 4);
                 *__esp =  *_t81;
                 *_t111 = L08052B40( *(_t81 + 4), _t111, __eflags);
                 *(_t111 + 4) = _t106;
            }
        }
        _v16 = _v16 + 1;
    }
}

int quantum_gate_counter(int inc)
{// addr = 0x0804CB9A
    _unknown_ __ebp;

    if(inc <= 0) {
        if(inc >= 0) {
            return counter;
        }
        goto L3;
    }
    counter = counter + inc;
    return counter;
L3:
    counter = 0;
    return counter;
}

long unsigned int quantum_memman(long int change)
{// addr = 0x0804CBCC
    _unknown_ __ebp;

    mem = mem + change;
    if(mem <= max) {
        return mem;
    }
    max = mem;
    return mem;
}

quantum_matrix quantum_new_matrix(int cols, int rows)
{// addr = 0x0804CBFC
    quantum_matrix m;
    void* _v8;
    int _v12;
    signed int _v16;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t30;

    _v16 = _a12;
    _v12 = rows;
    _v8 = calloc(rows * _a12, 8);
    if(_v8 == 0) {
        quantum_error(2);
    }
    quantum_memman(_a12 * rows << 3);
     *cols = _v16;
     *(cols + 4) = _v12;
     *(cols + 8) = _v8;
    return cols;
}

quantum_delete_matrix(quantum_matrix* m)
{// addr = 0x0804CC70
    _unknown_ __ebp;
    _unknown_ _t10;
    _unknown_ _t18;

    free(m->t);
    quantum_memman( ~(m->rows * m->cols << 3));
    m->t = 0;
    return;
}

quantum_print_matrix(quantum_matrix m)
{// addr = 0x0804CCAD
    int i;
    int j;
    int z;
    signed int _v8;
    signed int _v12;
    signed int _v16;
    intOrPtr _v56;
    _unknown_ __ebp;
    _unknown_ _t33;
    _unknown_ _t49;
    _unknown_ _t50;
    _unknown_ _t51;
    _unknown_ _t52;
    intOrPtr* _t55;
    intOrPtr* _t57;

    _v16 = 0;
    while(1) {
L1:
        _v16 = _v16 + 1;
        if((m.rows & 4294967295) == 0) {
            break;
        }
    }
    _v16 = _v16 - 1;
    _v8 = 0;
    while(m.rows > _v8) {
        _v12 = 0;
        while(m.cols > _v12) {
            _t55 = m.t + (m.cols * _v8 + _v12 << 3);
             *__esp =  *_t55;
            _v56 =  *((intOrPtr*)(_t55 + 4));
            quantum_imag();
            asm("fstp qword [ebp-0x18]");
            _t57 = m.t + (m.cols * _v8 + _v12 << 3);
             *__esp =  *_t57;
            _v56 =  *((intOrPtr*)(_t57 + 4));
            quantum_real();
            asm("fld qword [ebp-0x18]");
            asm("fstp qword [esp+0xc]");
            asm("fstp qword [esp+0x4]");
            printf("%g %+gi ");
            _v12 = _v12 + 1;
        }
    }
}

float quantum_imag(complex float a)
{// addr = 0x0804CD85
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t8;

    _v8 =  &a;
    _t8 = _v8[0];
    _v24 = _t8;
    asm("fld dword [ebp-0x14]");
    return _t8;
}

float quantum_real(complex float a)
{// addr = 0x0804CDA1
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t7;

    _v8 =  &a;
    _t7 =  *_v8;
    _v24 = _t7;
    asm("fld dword [ebp-0x14]");
    return _t7;
}

quantum_matrix quantum_mmult(quantum_matrix A, quantum_matrix B)
{// addr = 0x0804CDBA
    int i;
    int j;
    int k;
    quantum_matrix C;
    _unknown_ _v16;
    signed int _v20;
    signed int _v24;
    signed int _v28;
    intOrPtr _v32;
    signed int _v36;
    _unknown_ _v40;
    intOrPtr _v56;
    int _v68;
    intOrPtr _v72;
    intOrPtr _v76;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t64;
    intOrPtr* _t88;
    intOrPtr _t90;
    _unknown_ _t103;
    intOrPtr _t110;
    _unknown_ _t116;
    intOrPtr* _t117;

    __esp = __esp - 60;
    if(A.t != _a20) {
        quantum_error(4);
    }
    _v68 = A.cols;
    quantum_new_matrix( &_v40, _a24);
    __esp = __esp - 4;
    _v20 = 0;
    while(_a24 > _v20) {
        _v24 = 0;
        while(1) {
            __eflags = A.cols - _v24;
            if(A.cols <= _v24) {
                break;
            }
            _v28 = 0;
            while(1) {
                __eflags = _a20 - _v28;
                if(__eflags <= 0) {
                    break;
                }
                _t117 = _v32 + (_v36 * _v24 + _v20 << 3);
                asm("fld dword [eax+0x4]");
                asm("fstp dword [ebp-0x30]");
                asm("fld dword [eax+0x4]");
                _t88 = _a28 + (_a24 * _v28 + _v20 << 3);
                _t110 =  *_t88;
                asm("fstp dword [ebp-0x34]");
                _v68 =  *(_t88 + 4);
                _v72 = _t110;
                _v76 = _v56;
                 *__esp = B.t[A.t * _v24 + _v28];
                _t90 = L08052B40(_v56, _t117, __eflags);
                _v56 =  *((intOrPtr*)(_v32 + (_v36 * _v24 + _v20 << 3)));
                asm("fld dword [ebp-0x34]");
                asm("fld dword [ebp-0x30]");
                _v56 = _t90;
                asm("fld dword [ebp-0x34]");
                _v56 = _t110;
                asm("fld dword [ebp-0x34]");
                asm("fxch st0, st1");
                asm("faddp st3, st0");
                asm("faddp st1, st0");
                asm("fxch st0, st1");
                asm("fstp dword [ebp-0x34]");
                asm("fstp dword [ebp-0x34]");
                 *_t117 = _v56;
                 *((intOrPtr*)(_t117 + 4)) = _v56;
                _v28 = _v28 + 1;
            }
            _v24 = _v24 + 1;
        }
        _v20 = _v20 + 1;
    }
}

double quantum_frand()
{// addr = 0x0804CF20
    _unknown_ _v12;
    _unknown_ __ebp;
    _unknown_ _t2;
    double _t3;

    _t3 = rand();
    _push(_t3);
    asm("fild dword [esp]");
    asm("fld qword [0x8054378]");
    asm("fdivp st1, st0");
    return _t3;
}

long long unsigned int quantum_measure(quantum_reg reg)
{// addr = 0x0804CF3D
    double r;
    int i;
    signed int _v8;
    long long unsigned int _v24;
    long long unsigned int _v28;
    intOrPtr _v40;
    _unknown_ __ebp;
    _unknown_ _t23;
    int _t24;
    _unknown_ _t32;
    intOrPtr* _t35;
    _unknown_ _t36;

    _t24 = quantum_objcode_put(128);
    __eflags = _t24;
    if(_t24 == 0) {
        quantum_frand();
        asm("fstp qword [ebp-0x10]");
        _v8 = 0;
        while(1) {
L6:
            __eflags = _a8 - _v8;
            if(__eflags <= 0) {
                break;
            }
            goto L3;
        }
        _v28 = -1;
        _v24 = -1;
        return _v28;
    }
    _v28 = 0;
    _v24 = 0;
    return _v28;
L3:
    _t35 = _a16 + (_v8 << 4);
     *__esp =  *_t35;
    _v40 =  *((intOrPtr*)(_t35 + 4));
    quantum_prob_inline();
    asm("fld qword [ebp-0x10]");
    asm("fsubrp st1, st0");
    asm("fstp qword [ebp-0x10]");
    asm("fld qword [ebp-0x10]");
    asm("fldz ");
    asm("fucompp ");
    asm("fnstsw ax");
    asm("sahf ");
    if(__eflags < 0) {
        _v8 = _v8 + 1;
        goto L6;
    }
    _t32 = _a16 + (_v8 << 4);
    _v28 =  *(_t32 + 8);
    _v24 =  *(_t32 + 12);
    return _v28;
}

float quantum_prob_inline(complex float a)
{// addr = 0x0804CFE0
    float r;
    float i;
    float _v24;
    _unknown_ __ebp;
    float _t10;

     *__esp = a;
    _v24 = _a8;
    quantum_real();
    asm("fstp dword [ebp-0x4]");
     *__esp = a;
    _t10 = _a8;
    _v24 = _t10;
    quantum_imag();
    asm("fstp dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fmul dword [ebp-0x4]");
    asm("fld dword [ebp-0x8]");
    asm("fmul dword [ebp-0x8]");
    asm("faddp st1, st0");
    return _t10;
}

float quantum_real(complex float a)
{// addr = 0x0804D020
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t7;

    _v8 =  &a;
    _t7 =  *_v8;
    _v24 = _t7;
    asm("fld dword [ebp-0x14]");
    return _t7;
}

float quantum_imag(complex float a)
{// addr = 0x0804D039
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t8;

    _v8 =  &a;
    _t8 = _v8[0];
    _v24 = _t8;
    asm("fld dword [ebp-0x14]");
    return _t8;
}

int quantum_bmeasure(int pos, quantum_reg* reg)
{// addr = 0x0804D055
    int i;
    int result;
    double pa;
    double r;
    long long unsigned int pos2;
    quantum_reg out;
    _unknown_ _v8;
    signed int _v16;
    int _v20;
    signed int _v40;
    signed int _v44;
    int* _v48;
    quantum_reg_node* _v52;
    int _v56;
    int _v60;
    int _v64;
    int _v80;
    int* _v96;
    quantum_reg_node* _v100;
    int _v104;
    int _v108;
    int _v112;
    int _v116;
    int _v120;
    _unknown_ __ebp;
    signed int _t63;
    _unknown_ _t64;
    signed int _t65;
    _unknown_ _t71;
    _unknown_ _t97;
    signed int _t98;
    signed int _t101;
    quantum_reg* _t105;
    quantum_reg* _t106;
    char** _t108;

    _push(__ebx);
    __esp = __esp - 116;
    _v20 = 0;
    asm("fldz ");
    asm("fstp qword [ebp-0x18]");
    _v120 = pos;
    _t63 = quantum_objcode_put(129);
    __eflags = _t63;
    if(_t63 == 0) {
        _t98 = pos;
        _t101 = 0;
        asm("shld edx, eax, cl");
        _t65 = 1 << (_t98 & 4294967295);
        __eflags = _t98 & 4294967295 & 32;
        if((_t98 & 4294967295 & 32) != 0) {
            _t101 = _t65;
            _t65 = 0;
        }
        _v44 = _t65;
        _v40 = _t101;
        _v16 = 0;
        while(1) {
            __eflags = reg->size - _v16;
            if(__eflags <= 0) {
                break;
            }
            _t71 = reg->node + (_v16 << 4);
            __eflags =  *(_t71 + 8) & _v44 |  *(_t71 + 12) & _v40;
            if(( *(_t71 + 8) & _v44 |  *(_t71 + 12) & _v40) == 0) {
                _t108 = reg->node + (_v16 << 4);
                 *__esp =  *_t108;
                _v120 = _t108[1];
                quantum_prob_inline();
                asm("fld qword [ebp-0x18]");
                asm("faddp st1, st0");
                asm("fstp qword [ebp-0x18]");
            }
            _v16 = _v16 + 1;
        }
        quantum_frand();
        asm("fstp qword [ebp-0x20]");
        asm("fld qword [ebp-0x20]");
        asm("fld qword [ebp-0x18]");
        asm("fxch st0, st1");
        asm("fucompp ");
        asm("fnstsw ax");
        asm("sahf ");
        if(__eflags > 0) {
            _v20 = 1;
        }
        _t105 = reg;
        _v112 = _t105->width;
        _v108 = _t105->size;
        _v104 = _t105->hashw;
        _v100 = _t105->node;
        _v96 = _t105->hash;
        _v116 = _v20;
        _v120 = pos;
         *__esp =  &_v64;
        quantum_state_collapse();
        __esp = __esp - 4;
        quantum_delete_qureg_hashpreserve(reg);
        _t106 = reg;
        _t106->width = _v64;
        _t106->size = _v60;
        _t106->hashw = _v56;
        _t106->node = _v52;
        _t106->hash = _v48;
        _v80 = _v20;
        return _v80;
    }
    _v80 = 0;
    return _v80;
}

int quantum_bmeasure_bitpreserve(int pos, quantum_reg* reg)
{// addr = 0x0804D1A8
    int i;
    int j;
    int size;
    int result;
    double d;
    double pa;
    double r;
    long long unsigned int pos2;
    quantum_reg out;
    signed int _v16;
    signed int _v20;
    int _v24;
    signed int _v28;
    signed int _v56;
    signed int _v60;
    int* _v64;
    signed int _v68;
    int _v72;
    int _v76;
    int _v80;
    intOrPtr _v100;
    int _v104;
    intOrPtr* _v108;
    intOrPtr _v112;
    int _v116;
    intOrPtr _v136;
    signed int _v144;
    intOrPtr _v148;
    int _v152;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t143;
    signed int _t145;
    _unknown_ _t146;
    signed int _t147;
    _unknown_ _t153;
    quantum_reg* _t162;
    _unknown_ _t167;
    _unknown_ _t179;
    _unknown_ _t180;
    _unknown_ _t189;
    _unknown_ _t190;
    _unknown_ _t197;
    intOrPtr* _t209;
    _unknown_ _t216;
    _unknown_ _t220;
    _unknown_ _t222;
    _unknown_ _t223;
    _unknown_ _t225;
    signed int _t240;
    _unknown_ _t243;
    _unknown_ _t244;
    _unknown_ _t248;
    signed int _t249;
    intOrPtr* _t257;
    _unknown_ _t265;
    intOrPtr _t266;
    quantum_reg* _t268;
    signed int* _t270;
    intOrPtr* _t272;
    signed int* _t274;
    intOrPtr* _t276;

    _v24 = 0;
    _v28 = 0;
    asm("fldz ");
    asm("fstp qword [ebp-0x20]");
    asm("fldz ");
    asm("fstp qword [ebp-0x28]");
    _v152 = pos;
    _t145 = quantum_objcode_put(130);
    __eflags = _t145;
    if(_t145 != 0) {
        _v116 = 0;
        return _v116;
    }
    _t240 = pos;
    _t249 = 0;
    asm("shld edx, eax, cl");
    _t147 = 1 << (_t240 & 4294967295);
    __eflags = _t240 & 4294967295 & 32;
    if((_t240 & 4294967295 & 32) != 0) {
        _t249 = _t147;
        _t147 = 0;
    }
    _v60 = _t147;
    _v56 = _t249;
    _v16 = 0;
    while(1) {
        __eflags = reg->size - _v16;
        if(__eflags <= 0) {
            break;
        }
        _t153 = reg->node + (_v16 << 4);
        __eflags =  *(_t153 + 8) & _v60 |  *(_t153 + 12) & _v56;
        if(( *(_t153 + 8) & _v60 |  *(_t153 + 12) & _v56) == 0) {
            _t276 = reg->node + (_v16 << 4);
             *__esp =  *_t276;
            _v152 =  *(_t276 + 4);
            quantum_prob_inline();
            asm("fld qword [ebp-0x28]");
            asm("faddp st1, st0");
            asm("fstp qword [ebp-0x28]");
        }
        _v16 = _v16 + 1;
    }
    quantum_frand();
    asm("fstp qword [ebp-0x30]");
    asm("fld qword [ebp-0x30]");
    asm("fld qword [ebp-0x28]");
    asm("fxch st0, st1");
    asm("fucompp ");
    asm("fnstsw ax");
    asm("sahf ");
    if(__eflags > 0) {
        _v28 = 1;
    }
    _v16 = 0;
    while(1) {
        _t162 = reg;
        __eflags = _t162->size - _v16;
        if(_t162->size <= _v16) {
            break;
        }
        _t167 = reg->node + (_v16 << 4);
        __eflags =  *(_t167 + 8) & _v60 |  *(_t167 + 12) & _v56;
        if(( *(_t167 + 8) & _v60 |  *(_t167 + 12) & _v56) == 0) {
            __eflags = _v28;
            if(_v28 == 0) {
                _t257 = reg->node + (_v16 << 4);
                 *__esp =  *_t257;
                _v152 =  *(_t257 + 4);
                quantum_prob_inline();
                asm("fld qword [ebp-0x20]");
                asm("faddp st1, st0");
                asm("fstp qword [ebp-0x20]");
                _v24 = _v24 + 1;
            } else {
                _t270 = reg->node + (_v16 << 4);
                 *_t270 = 0;
                _t270[1] = 0;
            }
        } else {
            __eflags = _v28;
            if(_v28 != 0) {
                _t272 = reg->node + (_v16 << 4);
                 *__esp =  *_t272;
                _v152 =  *(_t272 + 4);
                quantum_prob_inline();
                asm("fld qword [ebp-0x20]");
                asm("faddp st1, st0");
                asm("fstp qword [ebp-0x20]");
                _v24 = _v24 + 1;
            } else {
                _t274 = reg->node + (_v16 << 4);
                 *_t274 = 0;
                _t274[1] = 0;
            }
        }
        _v16 = _v16 + 1;
    }
    _v76 = _v24;
    _v68 = calloc(_v24, 16);
    __eflags = _v68;
    if(_v68 == 0) {
        quantum_error(2);
    }
    quantum_memman(_v24 << 4);
    _v72 = reg->hashw;
    _v64 = reg->hash;
    _v80 = reg->width;
    _v16 = 0;
    _v20 = 0;
    while(1) {
        __eflags = reg->size - _v16;
        if(__eflags <= 0) {
            break;
        }
        _t209 = reg->node + (_v16 << 4);
        _v112 =  *((intOrPtr*)(_t209 + 4));
        _v136 =  *_t209;
        asm("fld dword [ebp+0xffffff7c]");
        asm("fldz ");
        asm("fxch st0, st1");
        asm("fucompp ");
        asm("fnstsw ax");
        asm("sahf ");
        if(__eflags != 0 || __eflags != 0) {
L28:
            _t243 = _v68 + (_v20 << 4);
            _t216 = reg->node + (_v16 << 4);
             *((intOrPtr*)(_t243 + 8)) =  *((intOrPtr*)(_t216 + 8));
             *((intOrPtr*)(_t243 + 12)) =  *((intOrPtr*)(_t216 + 12));
            _v108 = _v68 + (_v20 << 4);
            asm("fld dword [eax]");
            asm("fstp dword [ebp-0x60]");
            asm("fld dword [eax+0x4]");
            asm("fstp dword [ebp-0x64]");
            asm("fld qword [ebp-0x20]");
            asm("fsqrt ");
            asm("fstp qword [ebp-0x80]");
            asm("fld qword [ebp-0x80]");
            asm("fucomp st0");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags != 0 || __eflags != 0) {
                asm("fld qword [ebp-0x20]");
                asm("fstp qword [esp]");
                sqrt();
                asm("fstp qword [ebp-0x80]");
            }
            asm("fld qword [ebp-0x80]");
            asm("fstp dword [ebp-0x5c]");
            asm("fld dword [ebp-0x5c]");
            asm("fstp dword [ebp+0xffffff7c]");
            __esi = _v100;
            _t266 = _v136;
            _v144 = 0;
            _v148 = _t266;
            _v152 = _v104;
             *__esp = __esi;
             *_v108 = L08053890(0, __esi, __eflags);
             *((intOrPtr*)(_v108 + 4)) = _t266;
            _v20 = _v20 + 1;
            goto L32;
        } else {
            asm("fld dword [ebp-0x6c]");
            asm("fldz ");
            asm("fxch st0, st1");
            asm("fucompp ");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags != 0 || __eflags != 0) {
                goto L28;
            }
L32:
            _v16 = _v16 + 1;
            continue;
        }
    }
    quantum_delete_qureg_hashpreserve(reg);
    _t268 = reg;
    _t268->width = _v80;
    _t268->size = _v76;
    _t268->hashw = _v72;
    _t268->node = _v68;
    _t268->hash = _v64;
    _v116 = _v28;
    return _v116;
}

test_sum(int compare, int width, quantum_reg* reg)
{// addr = 0x0804D538
    int i;
    int _v16;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t192;
    signed int _t194;
    signed int _t290;
    signed int _t306;
    _unknown_ _t338;

    _t192 = compare;
    _t290 = width - 1;
    _t194 = _t192;
    asm("shrd eax, edx, cl");
    _t306 = _t192 >> 31 >> (_t290 & 4294967295);
    if((_t290 & 4294967295 & 32) != 0) {
        _t194 = _t306;
    }
    if((_t194 & 1 & 4294967295) == 0) {
        quantum_sigma_x(width + width - 1, reg);
        quantum_cnot(width + width - 1, width - 1, reg);
    } else {
        quantum_cnot(width + width - 1, width - 1, reg);
        quantum_sigma_x(width + width - 1, reg);
        quantum_cnot(width + width - 1, 0, reg);
    }
    _v16 = width - 2;
    while(_v16 > 0) {
        if((compare >> (_v16 & 4294967295) & 1 & 4294967295) == 0) {
            quantum_sigma_x(width + _v16, reg);
            quantum_toffoli(_v16 + 1, width + _v16, _v16, reg);
        } else {
            quantum_toffoli(_v16 + 1, width + _v16, _v16, reg);
            quantum_sigma_x(width + _v16, reg);
            quantum_toffoli(_v16 + 1, width + _v16, 0, reg);
        }
        _v16 = _v16 - 1;
    }
}

muxfa(int a, int b_in, int c_in, int c_out, int xlt_l, int L, int total, quantum_reg* reg)
{// addr = 0x0804D8FE
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    if(a == 0) {
        quantum_toffoli(b_in, c_in, c_out, reg);
        quantum_cnot(b_in, c_in, reg);
    }
    if(a == 3) {
        quantum_toffoli(L, c_in, c_out, reg);
        quantum_cnot(L, c_in, reg);
        quantum_toffoli(b_in, c_in, c_out, reg);
        quantum_cnot(b_in, c_in, reg);
    }
    if(a == 1) {
        quantum_toffoli(L, xlt_l, b_in, reg);
        quantum_toffoli(b_in, c_in, c_out, reg);
        quantum_toffoli(L, xlt_l, b_in, reg);
        quantum_toffoli(b_in, c_in, c_out, reg);
        quantum_toffoli(L, xlt_l, c_in, reg);
        quantum_toffoli(b_in, c_in, c_out, reg);
        quantum_cnot(b_in, c_in, reg);
    }
    if(a != 2) {
        return ;
    }
    quantum_sigma_x(xlt_l, reg);
    quantum_toffoli(L, xlt_l, b_in, reg);
    quantum_toffoli(b_in, c_in, c_out, reg);
    quantum_toffoli(L, xlt_l, b_in, reg);
    quantum_toffoli(b_in, c_in, c_out, reg);
    quantum_toffoli(L, xlt_l, c_in, reg);
    quantum_toffoli(b_in, c_in, c_out, reg);
    quantum_cnot(b_in, c_in, reg);
    quantum_sigma_x(xlt_l, reg);
    return;
}

muxfa_inv(int a, int b_in, int c_in, int c_out, int xlt_l, int L, int total, quantum_reg* reg)
{// addr = 0x0804DBA7
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    if(a == 0) {
        quantum_cnot(b_in, c_in, reg);
        quantum_toffoli(b_in, c_in, c_out, reg);
    }
    if(a == 3) {
        quantum_cnot(b_in, c_in, reg);
        quantum_toffoli(b_in, c_in, c_out, reg);
        quantum_cnot(L, c_in, reg);
        quantum_toffoli(L, c_in, c_out, reg);
    }
    if(a == 1) {
        quantum_cnot(b_in, c_in, reg);
        quantum_toffoli(b_in, c_in, c_out, reg);
        quantum_toffoli(L, xlt_l, c_in, reg);
        quantum_toffoli(b_in, c_in, c_out, reg);
        quantum_toffoli(L, xlt_l, b_in, reg);
        quantum_toffoli(b_in, c_in, c_out, reg);
        quantum_toffoli(L, xlt_l, b_in, reg);
    }
    if(a != 2) {
        return ;
    }
    quantum_sigma_x(xlt_l, reg);
    quantum_cnot(b_in, c_in, reg);
    quantum_toffoli(b_in, c_in, c_out, reg);
    quantum_toffoli(L, xlt_l, c_in, reg);
    quantum_toffoli(b_in, c_in, c_out, reg);
    quantum_toffoli(L, xlt_l, b_in, reg);
    quantum_toffoli(b_in, c_in, c_out, reg);
    quantum_toffoli(L, xlt_l, b_in, reg);
    quantum_sigma_x(xlt_l, reg);
    return;
}

muxha(int a, int b_in, int c_in, int xlt_l, int L, int total, quantum_reg* reg)
{// addr = 0x0804DE50
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    if(a == 0) {
        quantum_cnot(b_in, c_in, reg);
    }
    if(a == 3) {
        quantum_cnot(L, c_in, reg);
        quantum_cnot(b_in, c_in, reg);
    }
    if(a == 1) {
        quantum_toffoli(L, xlt_l, c_in, reg);
        quantum_cnot(b_in, c_in, reg);
    }
    if(a != 2) {
        return ;
    }
    quantum_sigma_x(xlt_l, reg);
    quantum_toffoli(L, xlt_l, c_in, reg);
    quantum_cnot(b_in, c_in, reg);
    quantum_sigma_x(xlt_l, reg);
    return;
}

muxha_inv(int a, int b_in, int c_in, int xlt_l, int L, int total, quantum_reg* reg)
{// addr = 0x0804DF51
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    if(a == 0) {
        quantum_cnot(b_in, c_in, reg);
    }
    if(a == 3) {
        quantum_cnot(b_in, c_in, reg);
        quantum_cnot(L, c_in, reg);
    }
    if(a == 1) {
        quantum_cnot(b_in, c_in, reg);
        quantum_toffoli(L, xlt_l, c_in, reg);
    }
    if(a != 2) {
        return ;
    }
    quantum_sigma_x(xlt_l, reg);
    quantum_cnot(b_in, c_in, reg);
    quantum_toffoli(L, xlt_l, c_in, reg);
    quantum_sigma_x(xlt_l, reg);
    return;
}

madd(int a, int a_inv, int width, quantum_reg* reg)
{// addr = 0x0804E052
    int i;
    int j;
    int total;
    int _v16;
    int _v20;
    int _v24;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;

    _v24 = width + width + 1 + width + width + 1;
    _v16 = 0;
    while(width - 1 > _v16) {
        if((a >> (_v16 & 4294967295) & 1 & 4294967295) == 0) {
            _v20 = 0;
        } else {
            _v20 = 2;
        }
        if((a_inv >> (_v16 & 4294967295) & 1 & 4294967295) != 0) {
            _v20 = _v20 + 1;
        }
        muxfa(_v20, width + _v16, _v16, _v16 + 1, width + width, width + width + 1, _v24, reg);
        _v16 = _v16 + 1;
    }
}

madd_inv(int a, int a_inv, int width, quantum_reg* reg)
{// addr = 0x0804E187
    int i;
    int j;
    int total;
    int _v16;
    int _v20;
    int _v24;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;

    _v24 = width + width + 1 + width + width + 1;
    _v20 = 0;
    if((a >> (width - 1 & 4294967295) & 1 & 4294967295) != 0) {
        _v20 = 2;
    }
    if((a_inv >> (width - 1 & 4294967295) & 1 & 4294967295) != 0) {
        _v20 = _v20 + 1;
    }
    muxha_inv(_v20, width - 1, width + width - 1, width + width, width + width + 1, _v24, reg);
    _v16 = width - 2;
    while(_v16 >= 0) {
        if((a >> (_v16 & 4294967295) & 1 & 4294967295) == 0) {
            _v20 = 0;
        } else {
            _v20 = 2;
        }
        if((a_inv >> (_v16 & 4294967295) & 1 & 4294967295) != 0) {
            _v20 = _v20 + 1;
        }
        muxfa_inv(_v20, _v16, width + _v16, width + 1 + _v16, width + width, width + width + 1, _v24, reg);
        _v16 = _v16 - 1;
    }
}

addn(int N, int a, int width, quantum_reg* reg)
{// addr = 0x0804E2BE
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t20;

    test_sum(N - a, width, reg);
    madd((1 << (width & 4294967295)) + a - N, a, width, reg);
    return;
}

addn_inv(int N, int a, int width, quantum_reg* reg)
{// addr = 0x0804E317
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t31;

    quantum_cnot(width + width + 1, width + width, reg);
    madd_inv((1 << (width & 4294967295)) - a, N - a, width, reg);
    quantum_swaptheleads(width, reg);
    test_sum(a, width, reg);
    return;
}

add_mod_n(int N, int a, int width, quantum_reg* reg)
{// addr = 0x0804E3A0
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    addn(N, a, width, reg);
    addn_inv(N, a, width, reg);
    return;
}

quantum_mu2char(long long unsigned int mu, unsigned char* buf)
{// addr = 0x0804E3E8
    int i;
    int size;
    signed int _v16;
    intOrPtr _v20;
    signed int _v32;
    signed int _v36;
    _unknown_ __ebx;
    _unknown_ __ebp;
    signed int _t43;
    _unknown_ _t47;
    signed int _t48;
    signed int* _t51;
    signed int _t52;
    signed int _t53;
    signed int _t56;
    signed int _t58;
    _unknown_ _t59;

    _v36 = mu;
    _v32 = buf;
    _v20 = 8;
    _v16 = 0;
    while(_v16 < _v20) {
        _t51 = _v16 + _a12;
        _t52 = 0 +  !(_v16 - _v20) * 8;
        _t43 = _v36;
        asm("shrd eax, edx, cl");
        _t56 = _v32 >> (_t52 & 4294967295);
        if((_t52 & 4294967295 & 32) != 0) {
            _t43 = _t56;
        }
         *_t51 = _t43 & 4294967295;
        _t53 = 0 +  !(_v16 - _v20) * 8;
        _t58 = 0;
        asm("shld edx, eax, cl");
        _t48 = 1 << (_t53 & 4294967295);
        if((_t53 & 4294967295 & 32) != 0) {
            _t58 = _t48;
            _t48 = 0;
        }
        asm("adc edx, 0xff");
        _v36 = _v36 & _t48 + -1;
        _v32 = _v32 & _t58;
        _v16 = _v16 + 1;
    }
}

quantum_int2char(int j, unsigned char* buf)
{// addr = 0x0804E481
    int i;
    int size;
    intOrPtr _v12;
    intOrPtr _v16;
    signed int _v36;
    int _v40;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t41;
    _unknown_ _t48;
    _unknown_ _t50;
    _unknown_ _t59;
    _unknown_ _t60;
    _unknown_ _t62;
    _unknown_ _t65;

    _v16 = 4;
    _v12 = 0;
    while(_v12 < _v16) {
        _v40 = j;
         *(_v12 + buf) = _v40 / (1 << (0 +  !(_v12 - _v16) * 8 & 4294967295)) & 4294967295;
        _v36 = 1 << (0 +  !(_v12 - _v16) * 8 & 4294967295);
        j = j % _v36;
        _v12 = _v12 + 1;
    }
}

quantum_double2char(double d, unsigned char* buf)
{// addr = 0x0804E509
    int i;
    unsigned char* p;
    intOrPtr _v8;
    char* _v12;
    unsigned char* _v24;
    char _v28;
    _unknown_ __ebp;

    _v28 = d;
    _v24 = buf;
    _v12 =  &_v28;
    _v8 = 0;
    while(_v8 <= 7) {
         *(_v8 + _a12) =  *(_v8 + _v12) & 255 & 4294967295;
        _v8 = _v8 + 1;
    }
}

long long unsigned int quantum_char2mu(unsigned char* buf)
{// addr = 0x0804E54B
    int i;
    int size;
    long long unsigned int mu;
    intOrPtr _v16;
    intOrPtr _v20;
    intOrPtr _v24;
    intOrPtr _v28;
    _unknown_ __ebp;
    signed int _t34;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t39;

    _v28 = 0;
    _v24 = 0;
    _v20 = 8;
    _v16 = _v20 - 1;
    while(_v16 >= 0) {
        __ecx = 0 +  !(_v16 - _v20) * 8;
        asm("shld edx, eax, cl");
        _t34 = ( *(_v16 + buf) & 255 & 4294967295 & ) << (__ecx & 4294967295);
        if((__ecx & 4294967295 & 32) != 0) {
            _t34 = 0;
        }
        _v28 = _v28 + _t34;
        asm("adc [ebp-0x14], edx");
        _v16 = _v16 - 1;
    }
}

int quantum_char2int(unsigned char* buf)
{// addr = 0x0804E5C6
    int i;
    int size;
    int j;
    intOrPtr _v12;
    intOrPtr _v16;
    intOrPtr _v20;
    _unknown_ __ebp;

    _v20 = 0;
    _v16 = 4;
    _v12 = _v16 - 1;
    while(_v12 >= 0) {
        _v20 = _v20 + (( *(_v12 + buf) & 255 & 4294967295 & ) << (0 +  !(_v12 - _v16) * 8 & 4294967295));
        _v12 = _v12 - 1;
    }
}

double quantum_char2double(unsigned char* buf)
{// addr = 0x0804E61D
    double* d;
    double _v8;
    _unknown_ __ebp;

    _v8 = buf;
    asm("fld qword [eax]");
    return _v8;
}

quantum_objcode_start()
{// addr = 0x0804E630
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t4;

    opstatus = 1;
    allocated = 1;
    objcode = malloc(65536);
    if(objcode == 0) {
        quantum_error(2);
    }
    quantum_memman(65536);
    return;
}

quantum_objcode_stop()
{// addr = 0x0804E67E
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t6;

    opstatus = 0;
    free(objcode);
    objcode = 0;
    quantum_memman( ~(allocated << 16));
    allocated = 0;
    return;
}

int quantum_objcode_put(unsigned char operation)
{// addr = 0x0804E6C3
    int i;
    int size;
    va_list args;
    unsigned char[79] buf;
    double d;
    long long unsigned int mu;
    intOrPtr _v8;
    char _v88;
    int _v92;
    int _v96;
    int* _v100;
    int _v112;
    int _v116;
    signed int _v120;
    unsigned char* _v124;
    int _v128;
    char* _v148;
    int _v152;
    _unknown_ __ebp;
    _unknown_ _t135;
    int _t139;
    int _t149;
    _unknown_ _t156;
    _unknown_ _t176;
    _unknown_ _t195;
    int* _t220;
    long unsigned int _t226;
    _unknown_ _t232;
    int* _t234;
    int* _t235;
    int* _t236;
    int* _t238;
    int* _t239;
    int* _t240;
    int* _t242;
    int* _t243;
    int* _t244;
    int* _t245;

    _v120 = operation & 4294967295;
    _v8 =  *gs:0x14];
    _v96 = 0;
    __eflags = opstatus;
    if(__eflags != 0) {
        _v100 =  &_a8;
        _v88 = _v120 & 255 & 4294967295;
        _v124 = _v120 & 255;
        __eflags = _v124 - 11;
        if(_v124 > 11) {
            __eflags = _v124 - 128;
            if(_v124 == 128) {
L24:
                _v96 = 1;
L26:
                _t226 = position;
                _t139 = _v96;
                __eflags = _t226 + _t139 >> 16 - position >> 16;
                if(_t226 + _t139 >> 16 > position >> 16) {
                    allocated = allocated + 1;
                    objcode = realloc(objcode, allocated << 16);
                    __eflags = objcode;
                    if(objcode == 0) {
                        quantum_error(2);
                    }
                    quantum_memman(65536);
                }
                _v92 = 0;
                while(1) {
                    __eflags = _v92 - _v96;
                    if(__eflags >= 0) {
                        break;
                    }
                    objcode[position] =  *(__ebp + _v92 - 84) & 255 & 4294967295;
                    position = position + 1;
                    _v92 = _v92 + 1;
                }
                _v128 = 1;
                goto L34;
            }
            goto L10;
L25:
            quantum_error(65537);
            goto L26;
        }
        goto L3;
L10:
        __eflags = _v124 - 128;
        if(_v124 > 128) {
            __eflags = _v124 - 130;
            if(_v124 <= 130) {
                goto L21;
            }
            goto L16;
        }
        __eflags = _v124 - 13;
        if(_v124 == 13) {
L23:
            _t235 = _v100;
            _v100 =  &(_t235[1]);
            _v92 =  *_t235;
            quantum_int2char(_v92,  &(( &_v88)[1]));
            _t236 = _v100;
            _v100 =  &(_t236[1]);
            _v92 =  *_t236;
            quantum_int2char(_v92,  &(( &_v88)[5]));
            _v100 =  &(_v100[2]);
            asm("fld qword [eax]");
            asm("fstp qword [ebp-0x68]");
            _v148 =  &(( &_v88)[9]);
            asm("fld qword [ebp-0x68]");
            asm("fstp qword [esp]");
            quantum_double2char();
            _v96 = 17;
            goto L26;
        }
        __eflags = _v124 - 13;
        if(_v124 < 13) {
L19:
            _t238 = _v100;
            _v100 =  &(_t238[1]);
            _v92 =  *_t238;
            quantum_int2char(_v92,  &(( &_v88)[1]));
            _t239 = _v100;
            _v100 =  &(_t239[1]);
            _v92 =  *_t239;
            quantum_int2char(_v92,  &(( &_v88)[5]));
            _v96 = 9;
            goto L26;
        }
        __eflags = _v124 - 14;
        if(_v124 == 14) {
L21:
            _t234 = _v100;
            _v100 =  &(_t234[1]);
            _v92 =  *_t234;
            quantum_int2char(_v92,  &(( &_v88)[1]));
            _v96 = 5;
            goto L26;
        }
        goto L25;
L16:
        __eflags = _v124 - 255;
        if(_v124 == 255) {
            goto L24;
        }
        goto L25;
    }
    _v128 = 0;
L34:
    _t149 = _v128;
    if(__eflags == 0) {
        return _t149;
    }
    __stack_chk_fail();
    return _t149;
L3:
    __eflags = _v124 - 7;
    if(_v124 >= 7) {
L22:
        _t240 = _v100;
        _v100 =  &(_t240[1]);
        _v92 =  *_t240;
        _v100 =  &(_v100[2]);
        asm("fld qword [eax]");
        asm("fstp qword [ebp-0x68]");
        quantum_int2char(_v92,  &(( &_v88)[1]));
        _v148 =  &(( &_v88)[5]);
        asm("fld qword [ebp-0x68]");
        asm("fstp qword [esp]");
        quantum_double2char();
        _v96 = 13;
        goto L26;
    }
    __eflags = _v124 - 2;
    if(_v124 == 2) {
        _t242 = _v100;
        _v100 =  &(_t242[1]);
        _v92 =  *_t242;
        quantum_int2char(_v92,  &(( &_v88)[1]));
        _t243 = _v100;
        _v100 =  &(_t243[1]);
        _v92 =  *_t243;
        quantum_int2char(_v92,  &(( &_v88)[5]));
        _t244 = _v100;
        _v100 =  &(_t244[1]);
        _v92 =  *_t244;
        quantum_int2char(_v92,  &(( &_v88)[9]));
        _v96 = 13;
        goto L26;
    }
    __eflags = _v124 - 2;
    if(_v124 > 2) {
        goto L21;
    }
    __eflags = _v124;
    if(_v124 == 0) {
        _t245 = _v100;
        _v100 =  &(_t245[2]);
        _t220 = _t245;
        _v116 =  *_t220;
        _v112 = _t220[1];
        _v148 =  &((char*)( &_v88)[0]);
         *__esp = _v116;
        _v152 = _v112;
        quantum_mu2char();
        _v96 = 9;
        goto L26;
    }
    __eflags = _v124 - 1;
    if(_v124 == 1) {
        goto L19;
    }
    goto L25;
}

int quantum_objcode_write(char* file)
{// addr = 0x0804EA7D
    FILE* fhd;
    struct _IO_FILE* _v8;
    int _v24;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t23;
    _unknown_ _t25;
    _unknown_ _t29;

    if(opstatus != 0) {
        if(file == 0) {
            file = globalfile;
        }
        _v8 = fopen(file, "w");
        if(_v8 != 0) {
            fwrite(objcode, position, 1, _v8);
            fclose(_v8);
            _v24 = 0;
            return _v24;
        }
        _v24 = -1;
        return _v24;
    }
    fwrite("Object code generation not active! Forgot to call quantum_objcode_start?\n", 1, 73, __imp__stderr);
    _v24 = 1;
    return _v24;
}

quantum_objcode_file(char* file)
{// addr = 0x0804EB2B
    _unknown_ __ebp;

    globalfile = file;
    return;
}

quantum_objcode_exit(char* file)
{// addr = 0x0804EB38
    _unknown_ __ebp;

    quantum_objcode_write(0);
    quantum_objcode_stop();
    return;
}

quantum_objcode_run(char* file, quantum_reg* reg)
{// addr = 0x0804EB51
    int i;
    int j;
    int k;
    int l;
    FILE* fhd;
    unsigned char operation;
    unsigned char[79] buf;
    long long unsigned int mu;
    double d;
    _unknown_ _v8;
    signed int _v16;
    _unknown_ _v96;
    _unknown_ _v97;
    char* _v104;
    char* _v108;
    _unknown_ _v112;
    _unknown_ _v116;
    struct _IO_FILE* _v120;
    _unknown_ _v128;
    _unknown_ _v132;
    char* _v144;
    quantum_reg* _v148;
    _unknown_ _v172;
    _unknown_ _v176;
    _unknown_ _v180;
    _unknown_ _v184;
    _unknown_ _v188;
    _unknown_ _v196;
    _unknown_ _v200;
    _unknown_ _v204;
    _unknown_ _v208;
    _unknown_ _v236;
    _unknown_ _v240;
    char* _v244;
    _unknown_ _v248;
    _unknown_ __ebp;
    _unknown_ _t224;
    int _t228;
    _unknown_ _t237;
    _unknown_ _t240;
    _unknown_ _t247;
    _unknown_ _t250;
    _unknown_ _t261;
    signed int _t263;
    _unknown_ _t266;
    _unknown_ _t271;
    _unknown_ _t276;
    _unknown_ _t283;
    _unknown_ _t288;
    _unknown_ _t300;
    _unknown_ _t305;
    _unknown_ _t309;
    _unknown_ _t312;
    _unknown_ _t317;
    _unknown_ _t322;
    _unknown_ _t331;
    _unknown_ _t341;
    _unknown_ _t343;
    _unknown_ _t344;
    _unknown_ _t346;
    _unknown_ _t347;
    _unknown_ _t348;
    _unknown_ _t349;
    _unknown_ _t352;

    _push(__ebx);
    __esp = __esp - 244;
    _v144 = file;
    _v148 = reg;
    _v16 =  *gs:0x14];
    _v120 = fopen(_v144, "r");
    __eflags = _v120;
    if(_v120 != 0) {
        _v104 = 0;
        while(1) {
            _t228 = feof(_v120);
            __eflags = _t228;
            if(_t228 != 0) {
                break;
            } else {
                _v108 = 0;
                goto L5;
            }
        }
    } else {
        _v244 = _v144;
        fprintf(__imp__stderr, "quantum_objcode_run: Could not open %s: ");
        perror(0);
L54:
        _t263 = _v16 ^  *gs:0x14];
        if(__eflags == 0) {
            return _t263;
        }
        __stack_chk_fail();
        return _t263;
    }
    fclose(_v120);
    goto L54;
}

emul(int a, int L, int width, quantum_reg* reg)
{// addr = 0x0804F2F4
    int i;
    signed int _v8;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v8 = width - 1;
    while(_v8 >= 0) {
        if((a >> (_v8 & 4294967295) & 1 & 4294967295) != 0) {
            quantum_toffoli(width + 1 + width + 1, L, width + _v8, reg);
        }
        _v8 = _v8 - 1;
    }
}

muln(int N, int a, int ctl, int width, quantum_reg* reg)
{// addr = 0x0804F34C
    int i;
    int L;
    signed int _v8;
    int _v12;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t77;
    _unknown_ _t95;
    _unknown_ _t107;
    _unknown_ _t114;

    _v12 = width + width + 1;
    quantum_toffoli(ctl, width + 1 + width + 1, _v12, reg);
    emul(a % N, _v12, width, reg);
    quantum_toffoli(ctl, width + 1 + width + 1, _v12, reg);
    _v8 = 1;
    while(_v8 < width) {
        quantum_toffoli(ctl, width + 1 + width + 1 + _v8, _v12, reg);
        add_mod_n(N, (a << (_v8 & 4294967295)) % N, width, reg);
        quantum_toffoli(ctl, width + 1 + width + 1 + _v8, _v12, reg);
        _v8 = _v8 + 1;
    }
}

muln_inv(int N, int a, int ctl, int width, quantum_reg* reg)
{// addr = 0x0804F472
    int i;
    int L;
    signed int _v8;
    int _v12;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t89;
    _unknown_ _t106;
    _unknown_ _t122;
    _unknown_ _t129;

    _v12 = width + width + 1;
    a = quantum_inverse_mod(N, a);
    _v8 = width - 1;
    while(_v8 > 0) {
        quantum_toffoli(ctl, width + 1 + width + 1 + _v8, _v12, reg);
        add_mod_n(N, N - (a << (_v8 & 4294967295)) % N, width, reg);
        quantum_toffoli(ctl, width + 1 + width + 1 + _v8, _v12, reg);
        _v8 = _v8 - 1;
    }
}

mul_mod_n(int N, int a, int ctl, int width, quantum_reg* reg)
{// addr = 0x0804F5B6
    _unknown_ _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    muln(N, a, ctl, width, reg);
    quantum_swaptheleads_omuln_controlled(ctl, width, reg);
    muln_inv(N, a, ctl, width, reg);
    return;
}

quantum_qec_set_status(int stype, int swidth)
{// addr = 0x0804F628
    _unknown_ __ebp;

     *134570228 = stype;
     *134570232 = swidth;
    return;
}

quantum_qec_get_status(int* ptype, int* pwidth)
{// addr = 0x0804F63D
    _unknown_ __ebp;

    if(ptype != 0) {
         *ptype =  *134570228;
    }
    if(pwidth == 0) {
        return ;
    }
     *pwidth =  *134570232;
    return;
}

quantum_qec_encode(int type, int width, quantum_reg* reg)
{// addr = 0x0804F664
    int i;
    float lambda;
    int _v8;
    float _v12;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t48;

    quantum_get_decoherence();
    asm("fstp dword [ebp-0x8]");
    quantum_set_decoherence(0);
    _v8 = 0;
    while(reg->width > _v8) {
        if(reg->width - 1 == _v8) {
            quantum_set_decoherence(_v12);
        }
        if(_v8 >= width) {
            quantum_cnot(_v8, reg->width + _v8, reg);
            quantum_cnot(_v8, reg->width + reg->width + _v8, reg);
        } else {
            quantum_hadamard(reg->width + _v8, reg);
            quantum_hadamard(reg->width + reg->width + _v8, reg);
            quantum_cnot(reg->width + _v8, _v8, reg);
            quantum_cnot(reg->width + reg->width + _v8, _v8, reg);
        }
        _v8 = _v8 + 1;
    }
}

quantum_qec_decode(int type, int width, quantum_reg* reg)
{// addr = 0x0804F79F
    int i;
    int a;
    int b;
    int swidth;
    float lambda;
    int _v8;
    _unknown_ _v12;
    _unknown_ _v16;
    intOrPtr _v20;
    float _v24;
    signed int _v40;
    signed int _v44;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebp;
    _unknown_ _t90;
    _unknown_ _t94;
    _unknown_ _t101;

    quantum_get_decoherence();
    asm("fstp dword [ebp-0x14]");
    quantum_set_decoherence(0);
    _v40 = reg->width;
    _v44 = 1431655766;
    _v20 = (_v44 * _v40 >> 32) - (_v40 >> 31);
    quantum_qec_set_status(0, 0);
    _v40 = reg->width;
    _v44 = 1431655766;
    _v8 = (_v44 * _v40 >> 32) - (_v40 >> 31) - 1;
    while(_v8 >= 0) {
        if(_v8 == 0) {
            quantum_set_decoherence(_v24);
        }
        if(_v8 >= width) {
            quantum_cnot(_v8, _v20 + _v20 + _v8, reg);
            quantum_cnot(_v8, _v20 + _v8, reg);
        } else {
            quantum_cnot(_v20 + _v20 + _v8, _v8, reg);
            quantum_cnot(_v20 + _v8, _v8, reg);
            quantum_hadamard(_v20 + _v20 + _v8, reg);
            quantum_hadamard(_v20 + _v8, reg);
        }
        _v8 = _v8 - 1;
    }
}

int quantum_qec_counter(int inc, int frequency, quantum_reg* reg)
{// addr = 0x0804F96E
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    if(inc <= 0) {
        if(inc < 0) {
             *134570236 = 0;
        }
    } else {
         *134570236 =  *134570236 + inc;
    }
    if(frequency > 0) {
        freq = frequency;
    }
    if( *134570236 < freq) {
        return  *134570236;
    }
     *134570236 = 0;
    quantum_qec_decode( *134570228,  *134570232, reg);
    quantum_qec_encode( *134570228,  *134570232, reg);
    return  *134570236;
}

quantum_sigma_x_ft(int target, quantum_reg* reg)
{// addr = 0x0804FA05
    int tmp;
    float lambda;
    int _v8;
    float _v12;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t17;
    _unknown_ _t27;

    _v8 =  *134570228;
     *134570228 = 0;
    quantum_get_decoherence();
    asm("fstp dword [ebp-0x8]");
    quantum_set_decoherence(0);
    quantum_sigma_x(target, reg);
    quantum_sigma_x( *134570232 + target, reg);
    quantum_set_decoherence(_v12);
    quantum_sigma_x( *134570232 +  *134570232 + target, reg);
    quantum_qec_counter(1, 0, reg);
     *134570228 = _v8;
    return;
}

quantum_cnot_ft(int control, int target, quantum_reg* reg)
{// addr = 0x0804FAA8
    int tmp;
    float lambda;
    int _v8;
    float _v12;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t23;
    _unknown_ _t37;

    _v8 =  *134570228;
     *134570228 = 0;
    quantum_get_decoherence();
    asm("fstp dword [ebp-0x8]");
    quantum_set_decoherence(0);
    quantum_cnot(control, target, reg);
    quantum_cnot( *134570232 + control,  *134570232 + target, reg);
    quantum_set_decoherence(_v12);
    quantum_cnot( *134570232 +  *134570232 + control,  *134570232 +  *134570232 + target, reg);
    quantum_qec_counter(1, 0, reg);
     *134570228 = _v8;
    return;
}

quantum_toffoli_ft(int control1, int control2, int target, quantum_reg* reg)
{// addr = 0x0804FB70
    int i;
    int c1;
    int c2;
    long long unsigned int mask;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    signed int _v32;
    signed int _v36;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t128;
    _unknown_ _t130;
    signed int _t131;
    _unknown_ _t134;
    signed int _t135;
    _unknown_ _t142;
    signed int _t143;
    _unknown_ _t148;
    signed int _t150;
    _unknown_ _t155;
    signed int _t158;
    _unknown_ _t163;
    signed int _t164;
    _unknown_ _t169;
    signed int _t171;
    _unknown_ _t176;
    signed int _t179;
    _unknown_ _t187;
    _unknown_ _t192;
    _unknown_ _t193;
    signed int _t194;
    _unknown_ _t195;
    signed int _t201;
    signed int _t203;
    signed int _t205;
    signed int _t206;
    signed int _t208;
    signed int _t210;
    signed int _t211;
    signed int _t213;
    signed int _t215;
    _unknown_ _t217;
    _unknown_ _t218;
    signed int _t219;
    signed int _t222;
    signed int _t225;
    signed int _t228;
    signed int _t231;
    signed int _t234;
    signed int _t237;
    _unknown_ _t242;
    _unknown_ _t243;
    _unknown_ _t244;
    _unknown_ _t245;
    _unknown_ _t246;
    _unknown_ _t247;
    _unknown_ _t248;
    _unknown_ _t249;
    _unknown_ _t254;
    _unknown_ _t255;

    _t201 = target;
    asm("shld esi, ebx, cl");
    _t194 = 1 << (_t201 & 4294967295);
    if((_t201 & 4294967295 & 32) != 0) {
        _t194 = 0;
    }
    _t203 =  *134570232 + target;
    asm("shld edx, eax, cl");
    _t131 = 1 << (_t203 & 4294967295);
    if((_t203 & 4294967295 & 32) != 0) {
        _t131 = 0;
    }
    _t195 = _t194 + _t131;
    asm("adc esi, edx");
    _t205 =  *134570232 +  *134570232 + target;
    _t219 = 0;
    asm("shld edx, eax, cl");
    _t135 = 1 << (_t205 & 4294967295);
    if((_t205 & 4294967295 & 32) != 0) {
        _t219 = _t135;
        _t135 = 0;
    }
    asm("adc edx, esi");
    _v36 = _t135 + _t195;
    _v32 = _t219;
    _v16 = 0;
    while(reg->size > _v16) {
        _v20 = 0;
        _v24 = 0;
        _t142 = reg->node + (_v16 << 4);
        _t143 =  *(_t142 + 8);
        _t206 = control1;
        asm("shrd eax, edx, cl");
        _t222 =  *(_t142 + 12) >> (_t206 & 4294967295);
        if((_t206 & 4294967295 & 32) != 0) {
            _t143 = _t222;
        }
        if((_t143 & 1 & 4294967295) != 0) {
            _v20 = 1;
        }
        _t148 = reg->node + (_v16 << 4);
        _t208 =  *134570232 + control1;
        _t150 =  *(_t148 + 8);
        asm("shrd eax, edx, cl");
        _t225 =  *(_t148 + 12) >> (_t208 & 4294967295);
        if((_t208 & 4294967295 & 32) != 0) {
            _t150 = _t225;
        }
        if((_t150 & 1 & 4294967295) != 0) {
            _v20 = _v20 ^ 1;
        }
        _t155 = reg->node + (_v16 << 4);
        _t210 =  *134570232 +  *134570232 + control1;
        _t158 =  *(_t155 + 8);
        asm("shrd eax, edx, cl");
        _t228 =  *(_t155 + 12) >> (_t210 & 4294967295);
        if((_t210 & 4294967295 & 32) != 0) {
            _t158 = _t228;
        }
        if((_t158 & 1 & 4294967295) != 0) {
            _v20 = _v20 ^ 1;
        }
        _t163 = reg->node + (_v16 << 4);
        _t164 =  *(_t163 + 8);
        _t211 = control2;
        asm("shrd eax, edx, cl");
        _t231 =  *(_t163 + 12) >> (_t211 & 4294967295);
        if((_t211 & 4294967295 & 32) != 0) {
            _t164 = _t231;
        }
        if((_t164 & 1 & 4294967295) != 0) {
            _v24 = 1;
        }
        _t169 = reg->node + (_v16 << 4);
        _t213 =  *134570232 + control2;
        _t171 =  *(_t169 + 8);
        asm("shrd eax, edx, cl");
        _t234 =  *(_t169 + 12) >> (_t213 & 4294967295);
        if((_t213 & 4294967295 & 32) != 0) {
            _t171 = _t234;
        }
        if((_t171 & 1 & 4294967295) != 0) {
            _v24 = _v24 ^ 1;
        }
        _t176 = reg->node + (_v16 << 4);
        _t215 =  *134570232 +  *134570232 + control2;
        _t179 =  *(_t176 + 8);
        asm("shrd eax, edx, cl");
        _t237 =  *(_t176 + 12) >> (_t215 & 4294967295);
        if((_t215 & 4294967295 & 32) != 0) {
            _t179 = _t237;
        }
        if((_t179 & 1 & 4294967295) != 0) {
            _v24 = _v24 ^ 1;
        }
        if(_v20 == 1 && _v24 == 1) {
            _t254 = reg->node + (_v16 << 4);
            _t187 = reg->node + (_v16 << 4);
             *(_t254 + 8) =  *(_t187 + 8) ^ _v36;
             *(_t254 + 12) =  *(_t187 + 12) ^ _v32;
        }
        _v16 = _v16 + 1;
    }
}

quantum_qft(int width, quantum_reg* reg)
{// addr = 0x0804FDE4
    int i;
    int j;
    int _v8;
    int _v12;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v8 = width - 1;
    while(_v8 >= 0) {
        _v12 = width - 1;
        while(_v12 > _v8) {
            quantum_cond_phase(_v12, _v8, reg);
            _v12 = _v12 - 1;
        }
    }
}

quantum_qft_inv(int width, quantum_reg* reg)
{// addr = 0x0804FE43
    int i;
    int j;
    int _v8;
    int _v12;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v8 = 0;
    while(_v8 < width) {
        quantum_hadamard(_v8, reg);
        _v12 = _v8 + 1;
        while(_v12 < width) {
            quantum_cond_phase_inv(_v12, _v8, reg);
            _v12 = _v12 + 1;
        }
    }
}

quantum_rk4(quantum_reg* reg, double t, double dt, _None* H)
{// addr = 0x0804FEA4
    quantum_reg k;
    quantum_reg out;
    quantum_reg tmp;
    double r;
    int i;
    _Unknown_base* hash;
    int hashw;
    signed int _v16;
    int* _v20;
    int _v24;
    struct quantum_reg_struct _v56;
    intOrPtr _v60;
    intOrPtr _v64;
    intOrPtr _v68;
    intOrPtr _v72;
    char _v76;
    struct quantum_reg_struct _v96;
    double _v112;
    double _v116;
    intOrPtr _v120;
    _None* _v124;
    intOrPtr _v140;
    intOrPtr _v144;
    intOrPtr _v148;
    intOrPtr _v152;
    char _v156;
    char _v172;
    char* _v192;
    quantum_reg* _v236;
    char* _v248;
    quantum_reg* _v256;
    quantum_reg* _v260;
    int _v264;
    char* _v268;
    char* _v272;
    quantum_reg* _v276;
    quantum_reg* _v280;
    char* _v284;
    quantum_reg* _v288;
    quantum_reg* _v292;
    quantum_reg* _v296;
    char* _v304;
    char* _v308;
    _unknown_ __ebp;
    _unknown_ _t233;
    _unknown_ _t235;
    _unknown_ _t263;
    _unknown_ _t265;
    _unknown_ _t288;
    _unknown_ _t311;
    _unknown_ _t313;
    _unknown_ _t333;
    _unknown_ _t335;
    _unknown_ _t337;
    _unknown_ _t342;
    _unknown_ _t347;
    _unknown_ _t351;
    char** _t355;
    _unknown_ _t356;
    _unknown_ _t357;

    _v116 = t;
    _v112 = dt;
    _v124 = H;
    _v120 = _a20;
    asm("fldz ");
    asm("fstp qword [ebp-0x20]");
    _v20 = reg->hash;
    reg->hash = 0;
    _v24 = reg->hashw;
    reg->hashw = 0;
    _v236 = reg;
    asm("fld qword [ebp-0x70]");
    asm("fstp qword [esp+0x8]");
    _v248 = _a24;
     *__esp =  &_v156;
    quantum_matrix_qureg();
    __esp = __esp - 4;
    _v56.width = _v156;
    _v56.size = _v152;
    _v56.hashw = _v148;
    _v56.node = _v144;
    _v56.hash = _v140;
    asm("fld qword [ebp-0x78]");
    asm("fldz ");
    asm("fld1 ");
    asm("fchs ");
    asm("fstp qword [esp+0x1c]");
    asm("fldz ");
    asm("fstp qword [esp+0x14]");
    asm("fstp qword [esp+0xc]");
    asm("fstp qword [esp+0x4]");
    L080531E0(__esi, _t357,  &_v172);
    asm("fld qword [ebp+0xffffff58]");
    asm("fld qword [ebp+0xffffff60]");
    asm("fldz ");
    asm("fstp qword [esp+0x1c]");
    asm("fld qword [0x8054430]");
    asm("fstp qword [esp+0x14]");
    asm("fstp qword [esp+0xc]");
    asm("fstp qword [esp+0x4]");
    L08053D00( &_v156, __esi, _t357,  &_v172);
    asm("fld qword [ebp+0xffffff58]");
    asm("fld qword [ebp+0xffffff60]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp+0xffffff54]");
    asm("fld dword [ebp+0xffffff54]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp+0xffffff54]");
    asm("fld dword [ebp+0xffffff54]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp+0xffffff44]");
    asm("fstp dword [ebp+0xffffff44]");
    _v256 =  &_v56;
     *__esp = _v192;
    _v260 = _v192;
    quantum_scalar_qureg();
    _v256 =  &_v56;
    _v260 = reg;
     *__esp =  &_v156;
    quantum_vectoradd();
    __esp = __esp - 4;
    _v96.width = _v156;
    _v96.size = _v152;
    _v96.hashw = _v148;
    _v96.node = _v144;
    _v96.hash = _v140;
    _v260 =  &_v56;
     *__esp = 1051372203;
    _v264 = 0;
    quantum_scalar_qureg();
    _v260 =  &_v56;
    _v264 = reg;
     *__esp =  &_v156;
    quantum_vectoradd();
    __esp = __esp - 4;
    _v76 = _v156;
    _v72 = _v152;
    _v68 = _v148;
    _v64 = _v144;
    _v60 = _v140;
    quantum_delete_qureg( &_v56);
    asm("fld qword [ebp-0x78]");
    asm("fld qword [0x8054430]");
    asm("fdivp st1, st0");
    asm("fadd qword [ebp-0x70]");
    _v256 =  &_v96;
    asm("fstp qword [esp+0x8]");
    _v268 = _a24;
     *__esp =  &_v156;
    quantum_matrix_qureg();
    __esp = __esp - 4;
    _v56.width = _v156;
    _v56.size = _v152;
    _v56.hashw = _v148;
    _v56.node = _v144;
    _v56.hash = _v140;
    quantum_delete_qureg( &_v96);
    asm("fld qword [ebp-0x78]");
    asm("fldz ");
    asm("fld1 ");
    asm("fchs ");
    asm("fstp qword [esp+0x1c]");
    asm("fldz ");
    asm("fstp qword [esp+0x14]");
    asm("fstp qword [esp+0xc]");
    asm("fstp qword [esp+0x4]");
    L080531E0(__esi, _t357,  &_v172);
    asm("fld qword [ebp+0xffffff58]");
    asm("fld qword [ebp+0xffffff60]");
    asm("fldz ");
    asm("fstp qword [esp+0x1c]");
    asm("fld qword [0x8054430]");
    asm("fstp qword [esp+0x14]");
    asm("fstp qword [esp+0xc]");
    asm("fstp qword [esp+0x4]");
    L08053D00( &_v156, __esi, _t357,  &_v172);
    asm("fld qword [ebp+0xffffff58]");
    asm("fld qword [ebp+0xffffff60]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp+0xffffff54]");
    asm("fld dword [ebp+0xffffff54]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp+0xffffff54]");
    asm("fld dword [ebp+0xffffff54]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp+0xffffff44]");
    asm("fstp dword [ebp+0xffffff44]");
    _v276 =  &_v56;
     *__esp = _v192;
    _v280 = _v192;
    quantum_scalar_qureg();
    _v276 =  &_v56;
    _v280 = reg;
     *__esp =  &_v156;
    quantum_vectoradd();
    __esp = __esp - 4;
    _v96.width = _v156;
    _v96.size = _v152;
    _v96.hashw = _v148;
    _v96.node = _v144;
    _v96.hash = _v140;
    _v280 =  &_v56;
     *__esp = 1059760811;
    _v284 = 0;
    quantum_scalar_qureg();
    _v284 =  &_v56;
     *__esp =  &_v76;
    quantum_vectoradd_inplace();
    quantum_delete_qureg( &_v56);
    asm("fld qword [ebp-0x78]");
    asm("fld qword [0x8054430]");
    asm("fdivp st1, st0");
    asm("fadd qword [ebp-0x70]");
    _v272 =  &_v96;
    asm("fstp qword [esp+0x8]");
    _v284 = _a24;
     *__esp =  &_v156;
    quantum_matrix_qureg();
    __esp = __esp - 4;
    _v56.width = _v156;
    _v56.size = _v152;
    _v56.hashw = _v148;
    _v56.node = _v144;
    _v56.hash = _v140;
    quantum_delete_qureg( &_v96);
    asm("fld qword [ebp-0x78]");
    asm("fldz ");
    asm("fld1 ");
    asm("fchs ");
    asm("fstp qword [esp+0x1c]");
    asm("fldz ");
    asm("fstp qword [esp+0x14]");
    asm("fstp qword [esp+0xc]");
    asm("fstp qword [esp+0x4]");
    L080531E0(__esi, _t357,  &_v172);
    asm("fld qword [ebp+0xffffff58]");
    asm("fld qword [ebp+0xffffff60]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp+0xffffff54]");
    asm("fld dword [ebp+0xffffff54]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp+0xffffff54]");
    asm("fld dword [ebp+0xffffff54]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp+0xffffff44]");
    asm("fstp dword [ebp+0xffffff44]");
    _v288 =  &_v56;
     *__esp = _v192;
    _v292 = _v192;
    quantum_scalar_qureg();
    _v288 =  &_v56;
    _v292 = reg;
     *__esp =  &_v156;
    quantum_vectoradd();
    __esp = __esp - 4;
    _v96 = _v156;
    _v96.size = _v152;
    _v96.hashw = _v148;
    _v96.node = _v144;
    _v96.hash = _v140;
    _v292 =  &_v56;
     *__esp = 1051372203;
    _v296 = 0;
    quantum_scalar_qureg();
    _v296 =  &_v56;
     *__esp =  &_v76;
    quantum_vectoradd_inplace();
    quantum_delete_qureg( &_v56);
    asm("fld qword [ebp-0x70]");
    asm("fadd qword [ebp-0x78]");
    _v284 =  &_v96;
    asm("fstp qword [esp+0x8]");
    _v296 = _a24;
     *__esp =  &_v156;
    quantum_matrix_qureg();
    __esp = __esp - 4;
    _v56 = _v156;
    _v56.size = _v152;
    _v56.hashw = _v148;
    _v56.node = _v144;
    _v56.hash = _v140;
    quantum_delete_qureg( &_v96);
    asm("fld qword [ebp-0x78]");
    asm("fldz ");
    asm("fld1 ");
    asm("fchs ");
    asm("fstp qword [esp+0x1c]");
    asm("fldz ");
    asm("fstp qword [esp+0x14]");
    asm("fstp qword [esp+0xc]");
    asm("fstp qword [esp+0x4]");
    L080531E0(__esi, _t357,  &_v172);
    asm("fld qword [ebp+0xffffff58]");
    asm("fld qword [ebp+0xffffff60]");
    asm("fldz ");
    asm("fstp qword [esp+0x1c]");
    asm("fld qword [0x8054438]");
    asm("fstp qword [esp+0x14]");
    asm("fstp qword [esp+0xc]");
    asm("fstp qword [esp+0x4]");
    L08053D00( &_v156, __esi, _t357,  &_v172);
    asm("fld qword [ebp+0xffffff58]");
    asm("fld qword [ebp+0xffffff60]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp+0xffffff54]");
    asm("fld dword [ebp+0xffffff54]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp+0xffffff54]");
    asm("fld dword [ebp+0xffffff54]");
    asm("fxch st0, st1");
    asm("fstp dword [ebp+0xffffff44]");
    asm("fstp dword [ebp+0xffffff44]");
    _v304 =  &_v56;
     *__esp = _v192;
    _v308 = _v192;
    quantum_scalar_qureg();
    _v308 =  &_v56;
     *__esp =  &_v76;
    quantum_vectoradd_inplace();
    quantum_delete_qureg( &_v56);
    quantum_delete_qureg(reg);
    _v16 = 0;
    while(_v72 > _v16) {
        _t355 = _v64 + (_v16 << 4);
         *__esp =  *_t355;
        _v280 = _t355[1];
        quantum_prob();
        asm("fld qword [ebp-0x20]");
        asm("faddp st1, st0");
        asm("fstp qword [ebp-0x20]");
        _v16 = _v16 + 1;
    }
}

double quantum_rk4a(quantum_reg* reg, double t, double* dt, double epsilon, _None* H)
{// addr = 0x0805057C
    quantum_reg reg2;
    quantum_reg old;
    quantum_reg tmp;
    double delta;
    double r;
    double dtused;
    int i;
    _Unknown_base* hash;
    int hashw;
    signed int _v16;
    int* _v20;
    double _v24;
    void* _v60;
    char _v72;
    int* _v76;
    void* _v80;
    int _v84;
    int _v88;
    int _v92;
    struct quantum_reg_struct _v112;
    double* _v128;
    double _v132;
    intOrPtr _v136;
    _None* _v140;
    quantum_reg* _v176;
    intOrPtr _v184;
    _unknown_ _v196;
    quantum_reg* _v200;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t206;
    _unknown_ _t209;
    _unknown_ _t212;
    quantum_reg** _t220;
    quantum_reg** _t223;
    quantum_reg** _t229;
    quantum_reg** _t232;
    quantum_reg** _t238;
    quantum_reg** _t241;
    quantum_reg** _t247;
    quantum_reg** _t250;
    quantum_reg** _t256;
    quantum_reg** _t259;
    quantum_reg** _t265;
    quantum_reg** _t268;
    _unknown_ _t271;
    _unknown_ _t272;
    _unknown_ _t273;
    double _t275;
    _unknown_ _t295;
    _unknown_ _t300;
    quantum_reg* _t333;
    quantum_reg* _t334;

    _v132 = t;
    _v128 = dt;
    _v140 = H;
    _v136 = _a24;
    _v20 = reg->hash;
    reg->hash = 0;
    _v24 = reg->hashw;
    reg->hashw = 0;
    quantum_copy_qureg(reg,  &_v92);
    quantum_copy_qureg(reg,  &_v72);
    goto L1;
    do {
L1:
        asm("fld qword [eax]");
        _v184 = _a28;
        asm("fstp qword [esp+0xc]");
        asm("fld qword [ebp-0x80]");
        asm("fstp qword [esp+0x4]");
         *__esp = reg;
        quantum_rk4();
        asm("fld qword [eax]");
        asm("fld qword [0x8054430]");
        asm("fdivp st1, st0");
        _v184 = _a28;
        asm("fstp qword [esp+0xc]");
        asm("fld qword [ebp-0x80]");
        asm("fstp qword [esp+0x4]");
         *__esp =  &_v72;
        quantum_rk4();
        asm("fld qword [eax]");
        asm("fld qword [0x8054430]");
        asm("fdivp st1, st0");
        _v184 = _a28;
        asm("fstp qword [esp+0xc]");
        asm("fld qword [ebp-0x80]");
        asm("fstp qword [esp+0x4]");
         *__esp =  &_v72;
        quantum_rk4();
        asm("fldz ");
        asm("fstp qword [ebp-0x20]");
        _v16 = 0;
        while(1) {
            __eflags = reg->size - _v16;
            if(__eflags <= 0) {
                break;
            }
            _t220 = reg->node + (_v16 << 4);
            _t223 = _v60 + (_v16 << 4);
            _v176 =  *_t220;
            asm("fld dword [ebp+0xffffff54]");
            _v176 = _t220[1];
            asm("fld dword [ebp+0xffffff54]");
            _v176 =  *_t223;
            asm("fld dword [ebp+0xffffff54]");
            _v176 = _t223[1];
            asm("fld dword [ebp+0xffffff54]");
            asm("fxch st0, st1");
            asm("fsubp st3, st0");
            asm("fsubp st1, st0");
            asm("fxch st0, st1");
            asm("fstp dword [ebp+0xffffff54]");
            asm("fstp dword [ebp+0xffffff54]");
             *__esp = _v176;
            _v200 = _v176;
            quantum_real();
            asm("fstp dword [ebp+0xffffff64]");
            _t229 = reg->node + (_v16 << 4);
            _t232 = _v60 + (_v16 << 4);
            _v176 =  *_t229;
            asm("fld dword [ebp+0xffffff54]");
            _v176 = _t229[1];
            asm("fld dword [ebp+0xffffff54]");
            _v176 =  *_t232;
            asm("fld dword [ebp+0xffffff54]");
            _v176 = _t232[1];
            asm("fld dword [ebp+0xffffff54]");
            asm("fxch st0, st1");
            asm("fsubp st3, st0");
            asm("fsubp st1, st0");
            asm("fxch st0, st1");
            asm("fstp dword [ebp+0xffffff54]");
            asm("fstp dword [ebp+0xffffff54]");
             *__esp = _v176;
            _v200 = _v176;
            quantum_imag();
            asm("fld dword [ebp+0xffffff64]");
            asm("fucompp ");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags <= 0) {
                _t238 = reg->node + (_v16 << 4);
                _t241 = _v60 + (_v16 << 4);
                _v176 =  *_t238;
                asm("fld dword [ebp+0xffffff54]");
                _v176 = _t238[1];
                asm("fld dword [ebp+0xffffff54]");
                _v176 =  *_t241;
                asm("fld dword [ebp+0xffffff54]");
                _v176 = _t241[1];
                asm("fld dword [ebp+0xffffff54]");
                asm("fxch st0, st1");
                asm("fsubp st3, st0");
                asm("fsubp st1, st0");
                asm("fxch st0, st1");
                asm("fstp dword [ebp+0xffffff54]");
                asm("fstp dword [ebp+0xffffff54]");
                 *__esp = _v176;
                _v200 = _v176;
                quantum_imag();
                asm("fld st0, st0");
                asm("faddp st1, st0");
                asm("fstp dword [ebp+0xffffff6c]");
                _t247 = reg->node + (_v16 << 4);
                _t250 = _v60 + (_v16 << 4);
                _v176 =  *_t247;
                asm("fld dword [ebp+0xffffff54]");
                _v176 = _t247[1];
                asm("fld dword [ebp+0xffffff54]");
                _v176 =  *_t250;
                asm("fld dword [ebp+0xffffff54]");
                _v176 = _t250[1];
                asm("fld dword [ebp+0xffffff54]");
                asm("fxch st0, st1");
                asm("faddp st3, st0");
                asm("faddp st1, st0");
                asm("fxch st0, st1");
                asm("fstp dword [ebp+0xffffff54]");
                asm("fstp dword [ebp+0xffffff54]");
                 *__esp = _v176;
                _v200 = _v176;
                quantum_imag();
                asm("fdivr dword [ebp+0xffffff6c]");
                asm("fstp qword [ebp-0x28]");
            } else {
                _t256 = reg->node + (_v16 << 4);
                _t259 = _v60 + (_v16 << 4);
                _v176 =  *_t256;
                asm("fld dword [ebp+0xffffff54]");
                _v176 = _t256[1];
                asm("fld dword [ebp+0xffffff54]");
                _v176 =  *_t259;
                asm("fld dword [ebp+0xffffff54]");
                _v176 = _t259[1];
                asm("fld dword [ebp+0xffffff54]");
                asm("fxch st0, st1");
                asm("fsubp st3, st0");
                asm("fsubp st1, st0");
                asm("fxch st0, st1");
                asm("fstp dword [ebp+0xffffff54]");
                asm("fstp dword [ebp+0xffffff54]");
                 *__esp = _v176;
                _v200 = _v176;
                quantum_real();
                asm("fld st0, st0");
                asm("faddp st1, st0");
                asm("fstp dword [ebp+0xffffff68]");
                _t265 = reg->node + (_v16 << 4);
                _t268 = _v60 + (_v16 << 4);
                _v176 =  *_t265;
                asm("fld dword [ebp+0xffffff54]");
                _v176 = _t265[1];
                asm("fld dword [ebp+0xffffff54]");
                _v176 =  *_t268;
                asm("fld dword [ebp+0xffffff54]");
                _v176 = _t268[1];
                asm("fld dword [ebp+0xffffff54]");
                asm("fxch st0, st1");
                asm("faddp st3, st0");
                asm("faddp st1, st0");
                asm("fxch st0, st1");
                asm("fstp dword [ebp+0xffffff54]");
                asm("fstp dword [ebp+0xffffff54]");
                 *__esp = _v176;
                _v200 = _v176;
                quantum_real();
                asm("fdivr dword [ebp+0xffffff68]");
                asm("fstp qword [ebp-0x28]");
            }
            asm("fld qword [ebp-0x28]");
            asm("fld qword [ebp-0x20]");
            asm("fxch st0, st1");
            asm("fucompp ");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags > 0) {
                asm("fld qword [ebp-0x28]");
                asm("fstp qword [ebp-0x20]");
            }
            _v16 = _v16 + 1;
        }
        asm("fld qword [eax]");
        asm("fstp qword [ebp-0x30]");
        asm("fld qword [eax]");
        asm("fstp qword [ebp+0xffffff70]");
        asm("fld qword [ebp+0xffffff78]");
        asm("fdiv qword [ebp-0x20]");
        asm("fld qword [0x8054440]");
        asm("fstp qword [esp+0x8]");
        asm("fstp qword [esp]");
        pow();
        asm("fmul qword [ebp+0xffffff70]");
        asm("fstp qword [eax]");
        asm("fld qword [ebp-0x20]");
        asm("fld qword [ebp+0xffffff78]");
        asm("fxch st0, st1");
        asm("fucompp ");
        asm("fnstsw ax");
        asm("sahf ");
        if(__eflags > 0) {
            _t333 = reg;
            _v112.width = _t333->width;
            _v112.size = _t333->size;
            _v112.hashw = _t333->hashw;
            _v112.node = _t333->node;
            _v112.hash = _t333->hash;
            _t334 = reg;
            _t334->width = _v92;
            _t334->size = _v88;
            _t334->hashw = _v84;
            _t334->node = _v80;
            _t334->hash = _v76;
            _v92 = _v112;
            _v88 = _v112.size;
            _v84 = _v112.hashw;
            _v80 = _v112.node;
            _v76 = _v112.hash;
            memcpy(_v60, reg->node, reg->size << 4);
            memcpy(_v80, reg->node, reg->size << 4);
        }
        asm("fld qword [ebp-0x20]");
        asm("fld qword [ebp+0xffffff78]");
        asm("fxch st0, st1");
        asm("fucompp ");
        asm("fnstsw ax");
        asm("sahf ");
    } while(__eflags > 0);
    reg->hash = _v20;
    _t275 = _v24;
    reg->hashw = _t275;
    asm("fld qword [ebp-0x30]");
    return _t275;
}

float quantum_real(complex float a)
{// addr = 0x08050B0E
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t7;

    _v8 =  &a;
    _t7 =  *_v8;
    _v24 = _t7;
    asm("fld dword [ebp-0x14]");
    return _t7;
}

float quantum_imag(complex float a)
{// addr = 0x08050B27
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t8;

    _v8 =  &a;
    _t8 = _v8[0];
    _v24 = _t8;
    asm("fld dword [ebp-0x14]");
    return _t8;
}

quantum_reg quantum_matrix2qureg(quantum_matrix* m, int width)
{// addr = 0x08050B44
    quantum_reg reg;
    int i;
    int j;
    int size;
    intOrPtr _v8;
    _unknown_ _v12;
    intOrPtr _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ _v28;
    _unknown_ _v32;
    intOrPtr _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v56;
    _unknown_ __ebp;
    _unknown_ _t89;
    _unknown_ _t99;
    _unknown_ _t100;
    _unknown_ _t104;
    _unknown_ _t106;
    _unknown_ _t112;
    _unknown_ _t116;
    _unknown_ _t122;
    _unknown_ _t132;
    _unknown_ _t133;

    _v16 = 0;
    if( *((intOrPtr*)(width + 4)) != 1) {
        quantum_error(65536);
    }
    _v36 = _a12;
    _v8 = 0;
    while() {
    }
}

quantum_reg quantum_new_qureg(long long unsigned int initval, int width)
{// addr = 0x08050D20
    quantum_reg reg;
    char* c;
    char* _v8;
    void* _v12;
    void* _v16;
    signed int _v20;
    int _v24;
    intOrPtr _v28;
    void _v40;
    int _v44;
    void _v52;
    int _v56;
    _unknown_ __ebp;
    _unknown_ _t56;
    _unknown_ _t57;
    _unknown_ _t61;
    _unknown_ _t63;
    _unknown_ _t65;
    _unknown_ _t66;
    _unknown_ _t69;
    void* _t80;
    void* _t82;

    _v44 = width;
    _v40 = _a12;
    _v28 = _a16;
    _v24 = 1;
    _v20 = _a16 + 2;
    _v16 = calloc(1, 16);
    if(_v16 == 0) {
        quantum_error(2);
    }
    quantum_memman(16);
    _v12 = calloc(1 << (_v20 & 4294967295), 4);
    if(_v12 == 0) {
        quantum_error(2);
    }
    quantum_memman(4 << (_v20 & 4294967295));
    _t80 = _v16;
    _t80[2] = _v44;
    _t80[3] = _v40;
    _t82 = _v16;
     *_t82 = 1065353216;
    _t82[1] = 0;
    _v8 = getenv("QUOBFILE");
    if(_v8 != 0) {
        quantum_objcode_start();
        quantum_objcode_file(_v8);
        L080541E0(quantum_objcode_exit);
    }
    _v56 = _v44;
    _v52 = _v40;
    quantum_objcode_put(0);
     *initval = _v28;
     *(initval + 4) = _v24;
     *(initval + 8) = _v20;
     *(initval + 12) = _v16;
     *(initval + 16) = _v12;
    return initval;
}

quantum_reg quantum_new_qureg_size(int n, int width)
{// addr = 0x08050E60
    quantum_reg reg;
    intOrPtr _v8;
    void* _v12;
    intOrPtr _v16;
    int _v20;
    intOrPtr _v24;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t34;

    _v24 = _a12;
    _v20 = width;
    _v16 = 0;
    _v8 = 0;
    _v12 = calloc(width, 16);
    if(_v12 == 0) {
        quantum_error(2);
    }
    quantum_memman(width << 4);
     *n = _v24;
     *(n + 4) = _v20;
     *((intOrPtr*)(n + 8)) = _v16;
     *(n + 12) = _v12;
     *((intOrPtr*)(n + 16)) = _v8;
    return n;
}

quantum_matrix quantum_qureg2matrix(quantum_reg reg)
{// addr = 0x08050EEA
    quantum_matrix m;
    int i;
    signed int _v8;
    intOrPtr _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    signed int _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t31;
    intOrPtr* _t41;
    intOrPtr* _t49;
    _unknown_ _t52;

    _v36 = 1 << (reg.size & 4294967295);
    quantum_new_matrix( &_v20, 1);
    __esp = __esp - 4;
    _v8 = 0;
    while(reg.hashw > _v8) {
        _t49 = _v12 + ( *(reg.hash + (_v8 << 4) + 8) << 3);
        _t41 = reg.hash + (_v8 << 4);
         *_t49 =  *_t41;
         *((intOrPtr*)(_t49 + 4)) =  *((intOrPtr*)(_t41 + 4));
        _v8 = _v8 + 1;
    }
}

quantum_destroy_hash(quantum_reg* reg)
{// addr = 0x08050F7A
    _unknown_ __ebp;
    _unknown_ _t10;
    _unknown_ _t12;
    _unknown_ _t14;

    free(reg->hash);
    quantum_memman(-4 << (reg->hashw & 4294967295));
    reg->hash = 0;
    return;
}

quantum_delete_qureg(quantum_reg* reg)
{// addr = 0x08050FAF
    _unknown_ __ebp;
    _unknown_ _t16;
    _unknown_ _t21;

    if(reg->hashw != 0 && reg->hash != 0) {
        quantum_destroy_hash(reg);
    }
    free(reg->node);
    quantum_memman( ~(reg->size << 4));
    reg->node = 0;
    return;
}

quantum_delete_qureg_hashpreserve(quantum_reg* reg)
{// addr = 0x08051001
    _unknown_ __ebp;
    _unknown_ _t9;
    _unknown_ _t14;

    free(reg->node);
    quantum_memman( ~(reg->size << 4));
    reg->node = 0;
    return;
}

quantum_copy_qureg(quantum_reg* src, quantum_reg* dst)
{// addr = 0x08051034
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t55;
    _unknown_ _t63;
    _unknown_ _t65;
    _unknown_ _t72;
    _unknown_ _t74;
    quantum_reg* _t75;
    quantum_reg* _t79;

    _t75 = dst;
    _t79 = src;
    _t75->width = _t79->width;
    _t75->size = _t79->size;
    _t75->hashw = _t79->hashw;
    _t75->node = _t79->node;
    _t75->hash = _t79->hash;
    dst->node = calloc(dst->size, 16);
    if(dst->node == 0) {
        quantum_error(2);
    }
    quantum_memman(dst->size << 4);
    if(dst->hashw != 0) {
        dst->hash = calloc(1 << (dst->hashw & 4294967295), 4);
        if(dst->hash == 0) {
            quantum_error(2);
        }
        quantum_memman(4 << (dst->hashw & 4294967295));
    }
    memcpy(dst->node, src->node, src->size << 4);
    return;
}

quantum_print_qureg(quantum_reg reg)
{// addr = 0x08051124
    int i;
    int j;
    signed int _v16;
    signed int _v20;
    intOrPtr _v68;
    intOrPtr _v72;
    signed int _v88;
    _unknown_ __ebp;
    _unknown_ _t50;
    _unknown_ _t59;
    _unknown_ _t69;
    signed int _t70;
    _unknown_ _t72;
    _unknown_ _t73;
    _unknown_ _t74;
    _unknown_ _t75;
    signed int _t78;
    intOrPtr* _t80;
    intOrPtr* _t83;
    intOrPtr* _t85;
    signed int _t89;
    _unknown_ _t90;

    _v16 = 0;
    while(reg.size > _v16) {
        _t80 = reg.node + (_v16 << 4);
         *__esp =  *_t80;
        _v88 =  *(_t80 + 4);
        quantum_prob_inline();
        asm("fstp qword [ebp-0x28]");
        _t50 = reg.node + (_v16 << 4);
        _t83 = reg.node + (_v16 << 4);
         *__esp =  *_t83;
        _v88 =  *(_t83 + 4);
        quantum_imag();
        asm("fstp qword [ebp-0x20]");
        _t85 = reg.node + (_v16 << 4);
         *__esp =  *_t85;
        _v88 =  *(_t85 + 4);
        quantum_real();
        asm("fld qword [ebp-0x28]");
        asm("fstp qword [esp+0x1c]");
        _v72 =  *((intOrPtr*)(_t50 + 8));
        _v68 =  *((intOrPtr*)(_t50 + 12));
        asm("fld qword [ebp-0x20]");
        asm("fstp qword [esp+0xc]");
        asm("fstp qword [esp+0x4]");
        printf("% f %+fi|%lli> (%e) (|");
        _v20 = reg.width - 1;
        while(_v20 >= 0) {
            if((_v20 + (_v20 >> 31 >> 30) & 3) - (_v20 >> 31 >> 30) == 3) {
                putchar(32);
            }
            _t69 = reg.node + (_v16 << 4);
            _t70 =  *(_t69 + 8);
            _t78 = _v20;
            asm("shrd eax, edx, cl");
            _t89 =  *(_t69 + 12) >> (_t78 & 4294967295);
            if((_t78 & 4294967295 & 32) != 0) {
                _t70 = _t89;
            }
            _v88 = _t70 & 1;
            printf("%i");
            _v20 = _v20 - 1;
        }
    }
}

float quantum_prob_inline(complex float a)
{// addr = 0x0805126A
    float r;
    float i;
    float _v24;
    _unknown_ __ebp;
    float _t10;

     *__esp = a;
    _v24 = _a8;
    quantum_real();
    asm("fstp dword [ebp-0x4]");
     *__esp = a;
    _t10 = _a8;
    _v24 = _t10;
    quantum_imag();
    asm("fstp dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fmul dword [ebp-0x4]");
    asm("fld dword [ebp-0x8]");
    asm("fmul dword [ebp-0x8]");
    asm("faddp st1, st0");
    return _t10;
}

float quantum_imag(complex float a)
{// addr = 0x080512AA
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t8;

    _v8 =  &a;
    _t8 = _v8[0];
    _v24 = _t8;
    asm("fld dword [ebp-0x14]");
    return _t8;
}

float quantum_real(complex float a)
{// addr = 0x080512C6
    float* p;
    complex float* _v8;
    float _v24;
    _unknown_ __ebp;
    float _t7;

    _v8 =  &a;
    _t7 =  *_v8;
    _v24 = _t7;
    asm("fld dword [ebp-0x14]");
    return _t7;
}

quantum_print_expn(quantum_reg reg)
{// addr = 0x080512DF
    int i;
    signed int _v16;
    intOrPtr _v32;
    intOrPtr _v36;
    intOrPtr _v48;
    intOrPtr _v52;
    signed int _v56;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t25;
    _unknown_ _t34;
    _unknown_ _t43;

    _v16 = 0;
    while(reg.size > _v16) {
        _t25 = reg.node + (_v16 << 4);
        _v36 =  *((intOrPtr*)(_t25 + 8));
        _v32 =  *((intOrPtr*)(_t25 + 12));
        asm("sbb ebx, edx");
        _v52 = _v36 - (_v16 << ((reg.width >> 31) + reg.width >> 1 & 4294967295));
        _v48 = _v32;
        _v56 = _v16;
        printf("%i: %lli\n");
        _v16 = _v16 + 1;
    }
}

quantum_addscratch(int bits, quantum_reg* reg)
{// addr = 0x0805135C
    int i;
    int oldwidth;
    long long unsigned int l;
    signed int _v8;
    int _v12;
    signed int _v16;
    signed int _v20;
    _unknown_ __ebp;
    _unknown_ _t43;
    signed int _t45;
    signed int _t50;
    _unknown_ _t51;
    signed int _t55;

    _v12 = reg->width;
    reg->width = reg->width + bits;
    _v8 = 0;
    while(reg->size > _v8) {
        _t43 = reg->node + (_v8 << 4);
        _t55 =  *(_t43 + 12);
        _t50 = bits;
        asm("shld edx, eax, cl");
        _t45 =  *(_t43 + 8) << (_t50 & 4294967295);
        if((_t50 & 4294967295 & 32) != 0) {
            _t55 = _t45;
            _t45 = 0;
        }
        _v20 = _t45;
        _v16 = _t55;
        _t51 = reg->node + (_v8 << 4);
         *(_t51 + 8) = _v20;
         *(_t51 + 12) = _v16;
        _v8 = _v8 + 1;
    }
}

quantum_print_hash(quantum_reg reg)
{// addr = 0x080513DA
    int i;
    signed int _v12;
    intOrPtr _v28;
    intOrPtr _v32;
    intOrPtr _v36;
    signed int _v40;
    _unknown_ __ebp;
    _unknown_ _t23;
    _unknown_ _t29;
    _unknown_ _t33;
    _unknown_ _t40;

    _v12 = 0;
    while(1 << (_a12 & 4294967295) > _v12) {
        if(_v12 != 0) {
            _t33 = _a16 +  ~(1 -  *((intOrPtr*)(_a20 + (_v12 << 2))) << 4);
            _v32 =  *((intOrPtr*)(_t33 + 8));
            _v28 =  *((intOrPtr*)(_t33 + 12));
            _v36 =  *((intOrPtr*)(_a20 + (_v12 << 2))) - 1;
            _v40 = _v12;
            printf("%i: %i %llu\n");
        }
        _v12 = _v12 + 1;
    }
}

quantum_reg quantum_kronecker(quantum_reg* reg1, quantum_reg* reg2)
{// addr = 0x08051461
    int i;
    int j;
    quantum_reg reg;
    signed int _v20;
    signed int _v24;
    void* _v28;
    void* _v32;
    signed int _v36;
    int _v40;
    intOrPtr _v44;
    intOrPtr _v52;
    intOrPtr _v64;
    intOrPtr _v68;
    intOrPtr _v72;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __ebp;
    _unknown_ _t100;
    _unknown_ _t119;
    _unknown_ _t120;
    _unknown_ _t124;
    _unknown_ _t126;
    signed int* _t129;
    _unknown_ _t139;
    _unknown_ _t144;
    intOrPtr* _t155;
    intOrPtr* _t159;
    signed int _t175;
    intOrPtr _t177;
    _unknown_ _t183;
    intOrPtr _t196;
    signed int _t201;
    intOrPtr* _t202;
    signed int _t205;

    _v44 = reg2->width +  *_a12;
    _v40 = _a12[1] * reg2->size;
    _v36 = _a12[1] * reg2->size + 2;
    _v32 = calloc(_v40, 16);
    if(_v32 == 0) {
        quantum_error(2);
    }
    quantum_memman(_v40 << 4);
    _v28 = calloc(1 << (_v36 & 4294967295), 4);
    if(_v28 == 0) {
        quantum_error(2);
    }
    quantum_memman(4 << (_v36 & 4294967295));
    _v20 = 0;
    while(reg2->size > _v20) {
        _v24 = 0;
        while(1) {
            _t129 = _a12;
            __eflags = _t129[1] - _v24;
            if(_t129[1] <= _v24) {
                break;
            }
            _v52 = _v32 + (_a12[1] * _v20 + _v24 << 4);
            _t139 = reg2->node + (_v20 << 4);
            _t175 =  *_a12;
            _t201 =  *(_t139 + 12);
            asm("shld edi, esi, cl");
            _t205 =  *(_t139 + 8) << (_t175 & 4294967295);
            __eflags = _t175 & 4294967295 & 32;
            if(__eflags != 0) {
                _t201 = _t205;
                _t205 = 0;
            }
            _t144 = _a12[3] + (_v24 << 4);
            _t177 = _v52;
             *(_t177 + 8) = _t205 |  *(_t144 + 8);
             *(_t177 + 12) = _t201 |  *(_t144 + 12);
            _t202 = _v32 + (_a12[1] * _v20 + _v24 << 4);
            _t155 = reg2->node + (_v20 << 4);
            _t159 = _a12[3] + (_v24 << 4);
            _t196 =  *_t159;
            _v64 =  *((intOrPtr*)(_t159 + 4));
            _v68 = _t196;
            _v72 =  *((intOrPtr*)(_t155 + 4));
             *__esp =  *_t155;
             *_t202 = L08052B40( *((intOrPtr*)(_t155 + 4)),  *_t155, __eflags);
             *((intOrPtr*)(_t202 + 4)) = _t196;
            _v24 = _v24 + 1;
        }
        _v20 = _v20 + 1;
    }
}

quantum_reg quantum_state_collapse(int pos, int value, quantum_reg reg)
{// addr = 0x0805165E
    int i;
    int j;
    int k;
    int size;
    double d;
    long long unsigned int lpat;
    long long unsigned int rpat;
    long long unsigned int pos2;
    quantum_reg out;
    signed int _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    signed int _v28;
    signed int _v40;
    signed int _v44;
    signed int _v48;
    signed int _v52;
    signed int _v56;
    signed int _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ _v76;
    _unknown_ _v80;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ _v108;
    _unknown_ _v120;
    _unknown_ _v128;
    _unknown_ _v132;
    intOrPtr _v136;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t162;
    _unknown_ _t163;
    signed int _t164;
    _unknown_ _t168;
    _unknown_ _t174;
    _unknown_ _t190;
    _unknown_ _t196;
    _unknown_ _t202;
    _unknown_ _t207;
    _unknown_ _t208;
    _unknown_ _t211;
    _unknown_ _t214;
    _unknown_ _t215;
    _unknown_ _t218;
    _unknown_ _t228;
    _unknown_ _t229;
    _unknown_ _t231;
    signed int _t249;
    _unknown_ _t256;
    _unknown_ _t257;
    _unknown_ _t259;
    _unknown_ _t262;
    signed int _t263;
    _unknown_ _t279;
    _unknown_ _t282;
    _unknown_ _t291;
    _unknown_ _t292;
    _unknown_ _t294;
    _unknown_ _t295;
    intOrPtr* _t297;
    _unknown_ _t298;

    __esp = __esp + -128;
    _v28 = 0;
    asm("fldz ");
    asm("fstp qword [ebp-0x20]");
    _v44 = 0;
    _v40 = 0;
    _v52 = 0;
    _v48 = 0;
    _t249 = value;
    _t263 = 0;
    asm("shld edx, eax, cl");
    _t164 = 1 << (_t249 & 4294967295);
    if((_t249 & 4294967295 & 32) != 0) {
        _t263 = _t164;
        _t164 = 0;
    }
    _v60 = _t164;
    _v56 = _t263;
    _v16 = 0;
    while(reg.hashw > _v16) {
        _t168 = reg.hash + (_v16 << 4);
        __eflags =  *(_t168 + 8) & _v60 |  *(_t168 + 12) & _v56;
        if(( *(_t168 + 8) & _v60 |  *(_t168 + 12) & _v56) == 0) {
L5:
            _t174 = reg.hash + (_v16 << 4);
            __eflags =  *(_t174 + 8) & _v60 |  *(_t174 + 12) & _v56;
            if(( *(_t174 + 8) & _v60 |  *(_t174 + 12) & _v56) != 0) {
                goto L8;
            }
            goto L6;
        }
        __eflags = reg.width;
        if(reg.width != 0) {
L7:
            _t297 = reg.hash + (_v16 << 4);
             *__esp =  *_t297;
            _v136 =  *((intOrPtr*)(_t297 + 4));
            quantum_prob_inline();
            asm("fld qword [ebp-0x20]");
            asm("faddp st1, st0");
            asm("fstp qword [ebp-0x20]");
            _v28 = _v28 + 1;
            goto L8;
        }
        goto L5;
L8:
        _v16 = _v16 + 1;
        continue;
L6:
        __eflags = reg.width;
        if(reg.width != 0) {
            goto L8;
        }
        goto L7;
    }
}

complex float quantum_dot_product(quantum_reg* reg1, quantum_reg* reg2)
{// addr = 0x080519B9
    int i;
    int j;
    complex float f;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    signed int _v28;
    signed int _v32;
    int* _v36;
    quantum_reg_node* _v40;
    int _v44;
    int _v48;
    int _v52;
    complex float _v56;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t54;
    _unknown_ _t62;
    complex float _t74;
    int* _t79;
    _unknown_ _t98;
    quantum_reg* _t100;
    _unknown_ _t102;
    complex float* _t104;
    int _t107;

    _v28 = 0;
    _v24 = 0;
    if(reg2->hashw != 0) {
        quantum_reconstruct_hash(reg2);
    }
    _v16 = 0;
    while(reg1->size > _v16) {
        _t62 = reg1->node + (_v16 << 4);
        _t100 = reg2;
        _v52 = _t100->width;
        _v48 = _t100->size;
        _v44 = _t100->hashw;
        _v40 = _t100->node;
        _v36 = _t100->hash;
         *__esp =  *(_t62 + 8);
        _v56 =  *(_t62 + 12);
        _v20 = quantum_get_state();
        __eflags = _v20;
        if(__eflags < 0) {
            _t104 = reg1->node + (_v16 << 4);
             *__esp =  *_t104;
            _v56 = _t104[0];
            _t74 = quantum_conj();
            _t79 = reg2->node + (_v20 << 4);
            _t107 =  *_t79;
            __esi = _t74;
            _v48 = _t79[1];
            _v52 = _t107;
            _v56 = _t104;
             *__esp = __esi;
            _v32 = L08052B40(_t104, __esi, __eflags);
            asm("fld dword [ebp-0x1c]");
            _v32 = _t107;
            asm("fld dword [ebp-0x1c]");
            asm("fld dword [ebp-0x18]");
            asm("fld dword [ebp-0x14]");
            asm("fxch st0, st1");
            asm("faddp st3, st0");
            asm("faddp st1, st0");
            asm("fxch st0, st1");
            asm("fstp dword [ebp-0x1c]");
            asm("fstp dword [ebp-0x1c]");
            _v28 = _v32;
            _v24 = _v32;
        }
        _v16 = _v16 + 1;
    }
}

quantum_reconstruct_hash(quantum_reg* reg)
{// addr = 0x08051AF8
    int i;
    signed int _v8;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t30;
    _unknown_ _t41;

    _v8 = 0;
    while(1 << (reg->hashw & 4294967295) > _v8) {
        reg->hash[_v8] = 0;
        _v8 = _v8 + 1;
    }
}

quantum_add_hash(long long unsigned int a, int pos, quantum_reg* reg)
{// addr = 0x08051B7B
    int i;
    int mark;
    unsigned int _v8;
    intOrPtr _v12;
    int _v24;
    long long unsigned int _v28;
    intOrPtr _v36;
    int _v40;
    _unknown_ __ebp;
    _unknown_ _t42;

    _v28 = a;
    _v24 = pos;
    _v12 = 0;
    _v36 =  *((intOrPtr*)(_a16 + 8));
     *__esp = _v28;
    _v40 = _v24;
    _v8 = quantum_hash64();
    while( *((intOrPtr*)( *((intOrPtr*)(_a16 + 16)) + (_v8 << 2))) != 0) {
    }
}

unsigned int quantum_hash64(long long unsigned int key, int width)
{// addr = 0x08051C1A
    unsigned int k32;
    unsigned int _v8;
    int _v24;
    long long unsigned int _v28;
    _unknown_ __ebp;
    _unknown_ _t18;
    _unknown_ _t23;
    _unknown_ _t26;
    _unknown_ _t29;

    _v28 = key;
    _v24 = width;
    _v8 = _v24 ^ _v28;
    _v8 = _v8 * _v8;
    _v8 = _v8 >> (32 - _a12 & 4294967295);
    return _v8;
}

int quantum_get_state(long long unsigned int a, quantum_reg reg)
{// addr = 0x08051C5C
    int i;
    signed int _v8;
    signed int _v24;
    signed int _v28;
    int _v32;
    quantum_reg_node* _v44;
    signed int _v48;
    _unknown_ __ebp;
    _unknown_ _t52;
    _unknown_ _t60;

    _v28 = a;
    _v24 = reg.width;
    if(reg.node == 0) {
        _v32 = _v28;
        return _v32;
    }
    _v44 = reg.node;
     *__esp = _v28;
    _v48 = _v24;
    _v8 = quantum_hash64();
    while( *((intOrPtr*)(_a28 + (_v8 << 2))) != 0) {
        if(( *(reg.hash +  ~(1 -  *((intOrPtr*)(_a28 + (_v8 << 2))) << 4) + 8) ^ _v28 |  *(reg.hash +  ~(1 -  *((intOrPtr*)(_a28 + (_v8 << 2))) << 4) + 12) ^ _v24) != 0) {
            _v8 = _v8 + 1;
            if(1 << (reg.node & 4294967295) == _v8) {
                _v8 = 0;
            }
            continue;
        }
        _v32 =  *((intOrPtr*)(_a28 + (_v8 << 2))) - 1;
        return _v32;
    }
}

complex float quantum_dot_product_noconj(quantum_reg* reg1, quantum_reg* reg2)
{// addr = 0x08051D22
    int i;
    int j;
    complex float f;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    signed int _v28;
    signed int _v32;
    int* _v36;
    quantum_reg_node* _v40;
    int _v44;
    int _v48;
    int _v52;
    intOrPtr _v56;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t54;
    _unknown_ _t62;
    intOrPtr* _t72;
    int* _t76;
    _unknown_ _t93;
    quantum_reg* _t95;
    _unknown_ _t97;
    int _t100;

    _v28 = 0;
    _v24 = 0;
    if(reg2->hashw != 0) {
        quantum_reconstruct_hash(reg2);
    }
    _v16 = 0;
    while(reg1->size > _v16) {
        _t62 = reg1->node + (_v16 << 4);
        _t95 = reg2;
        _v52 = _t95->width;
        _v48 = _t95->size;
        _v44 = _t95->hashw;
        _v40 = _t95->node;
        _v36 = _t95->hash;
         *__esp =  *((intOrPtr*)(_t62 + 8));
        _v56 =  *((intOrPtr*)(_t62 + 12));
        _v20 = quantum_get_state();
        __eflags = _v20;
        if(__eflags < 0) {
            _t72 = reg1->node + (_v16 << 4);
            _t76 = reg2->node + (_v20 << 4);
            _t100 =  *_t76;
            __esi =  *_t72;
            _v48 = _t76[1];
            _v52 = _t100;
            _v56 =  *((intOrPtr*)(_t72 + 4));
             *__esp = __esi;
            _v32 = L08052B40( *((intOrPtr*)(_t72 + 4)), __esi, __eflags);
            asm("fld dword [ebp-0x1c]");
            _v32 = _t100;
            asm("fld dword [ebp-0x1c]");
            asm("fld dword [ebp-0x18]");
            asm("fld dword [ebp-0x14]");
            asm("fxch st0, st1");
            asm("faddp st3, st0");
            asm("faddp st1, st0");
            asm("fxch st0, st1");
            asm("fstp dword [ebp-0x1c]");
            asm("fstp dword [ebp-0x1c]");
            _v28 = _v32;
            _v24 = _v32;
        }
        _v16 = _v16 + 1;
    }
}

quantum_reg quantum_vectoradd(quantum_reg* reg1, quantum_reg* reg2)
{// addr = 0x08051E46
    int i;
    int j;
    int k;
    int addsize;
    quantum_reg reg;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    signed int _v28;
    _unknown_ _v32;
    _unknown_ _v40;
    struct quantum_reg_struct _v48;
    intOrPtr _v64;
    int* _v68;
    quantum_reg_node* _v72;
    int _v76;
    int _v80;
    int _v84;
    intOrPtr _v88;
    _unknown_ __ebx;
    intOrPtr* __esi;
    _unknown_ __ebp;
    _unknown_ _t143;
    _unknown_ _t158;
    _unknown_ _t166;
    _unknown_ _t178;
    intOrPtr* _t185;
    intOrPtr* _t191;
    intOrPtr* _t195;
    _unknown_ _t211;
    intOrPtr* _t212;
    quantum_reg* _t215;
    quantum_reg* _t218;

    _v28 = 0;
    quantum_copy_qureg(reg2,  &_v48);
    if(reg2->hashw != 0 ||  *((intOrPtr*)(_a12 + 8)) != 0) {
        quantum_reconstruct_hash(reg2);
        quantum_copy_qureg(reg2,  &_v48);
        _v16 = 0;
L6:
        while( *((intOrPtr*)(_a12 + 4)) > _v16) {
            goto L3;
        }
    } else {
        _v48.size = _v48.size + _v28;
        _v48.node = realloc(_v48.node, _v48.size << 4);
        if(_v36 == 0) {
            quantum_error(2);
        }
        quantum_memman(_v28 << 4);
        _v24 = reg2->size;
        _v16 = 0;
        while( *((intOrPtr*)(_a12 + 4)) > _v16) {
            _t166 =  *((intOrPtr*)(_a12 + 12)) + (_v16 << 4);
            _t218 = reg2;
            _v84 = _t218->width;
            _v80 = _t218->size;
            _v76 = _t218->hashw;
            _v72 = _t218->node;
            _v68 = _t218->hash;
             *__esp =  *((intOrPtr*)(_t166 + 8));
            _v88 =  *((intOrPtr*)(_t166 + 12));
            _v20 = quantum_get_state();
            if(_v20 >= 0) {
                _t211 = _v48.node + (_v24 << 4);
                _t178 =  *((intOrPtr*)(_a12 + 12)) + (_v16 << 4);
                 *((intOrPtr*)(_t211 + 8)) =  *((intOrPtr*)(_t178 + 8));
                 *((intOrPtr*)(_t211 + 12)) =  *((intOrPtr*)(_t178 + 12));
                _t212 = _v48.node + (_v24 << 4);
                _t185 =  *((intOrPtr*)(_a12 + 12)) + (_v16 << 4);
                 *_t212 =  *_t185;
                 *((intOrPtr*)(_t212 + 4)) =  *((intOrPtr*)(_t185 + 4));
                _v24 = _v24 + 1;
            } else {
                __esi = _v48.node + (_v20 << 4);
                _t191 = _v48.node + (_v20 << 4);
                _t195 =  *((intOrPtr*)(_a12 + 12)) + (_v16 << 4);
                _v64 =  *_t191;
                asm("fld dword [ebp-0x3c]");
                _v64 =  *((intOrPtr*)(_t191 + 4));
                asm("fld dword [ebp-0x3c]");
                _v64 =  *_t195;
                asm("fld dword [ebp-0x3c]");
                _v64 =  *((intOrPtr*)(_t195 + 4));
                asm("fld dword [ebp-0x3c]");
                asm("fxch st0, st1");
                asm("faddp st3, st0");
                asm("faddp st1, st0");
                asm("fxch st0, st1");
                asm("fstp dword [ebp-0x3c]");
                asm("fstp dword [ebp-0x3c]");
                 *__esi = _v64;
                 *((intOrPtr*)(__esi + 4)) = _v64;
            }
            _v16 = _v16 + 1;
        }
    }
L3:
    _t143 =  *((intOrPtr*)(_a12 + 12)) + (_v16 << 4);
    _t215 = reg2;
    _v84 = _t215->width;
    _v80 = _t215->size;
    _v76 = _t215->hashw;
    _v72 = _t215->node;
    _v68 = _t215->hash;
     *__esp =  *((intOrPtr*)(_t143 + 8));
    _v88 =  *((intOrPtr*)(_t143 + 12));
    if(quantum_get_state() == 255) {
        _v28 = _v28 + 1;
    }
    _v16 = _v16 + 1;
    goto L6;
}

quantum_vectoradd_inplace(quantum_reg* reg1, quantum_reg* reg2)
{// addr = 0x080520A8
    int i;
    int j;
    int k;
    int addsize;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    signed int _v28;
    intOrPtr _v32;
    int* _v36;
    quantum_reg_node* _v40;
    int _v44;
    int _v48;
    int _v52;
    intOrPtr _v56;
    _unknown_ __ebx;
    intOrPtr* __esi;
    _unknown_ __ebp;
    _unknown_ _t129;
    _unknown_ _t147;
    _unknown_ _t155;
    _unknown_ _t168;
    intOrPtr* _t176;
    intOrPtr* _t184;
    intOrPtr* _t188;
    _unknown_ _t201;
    intOrPtr* _t202;
    quantum_reg* _t205;
    quantum_reg* _t210;

    _v28 = 0;
    if(reg1->hashw != 0 || reg2->hashw != 0) {
        quantum_reconstruct_hash(reg1);
        _v16 = 0;
L6:
        while(reg2->size > _v16) {
            goto L3;
        }
    } else {
        reg1->node = realloc(reg1->node, reg1->size + _v28 << 4);
        if(reg1->node == 0) {
            quantum_error(2);
        }
        quantum_memman(_v28 << 4);
        _v24 = reg1->size;
        _v16 = 0;
        while(reg2->size > _v16) {
            _t155 = reg2->node + (_v16 << 4);
            _t210 = reg1;
            _v52 = _t210->width;
            _v48 = _t210->size;
            _v44 = _t210->hashw;
            _v40 = _t210->node;
            _v36 = _t210->hash;
             *__esp =  *((intOrPtr*)(_t155 + 8));
            _v56 =  *((intOrPtr*)(_t155 + 12));
            _v20 = quantum_get_state();
            if(_v20 >= 0) {
                _t201 = reg1->node + (_v24 << 4);
                _t168 = reg2->node + (_v16 << 4);
                 *((intOrPtr*)(_t201 + 8)) =  *((intOrPtr*)(_t168 + 8));
                 *((intOrPtr*)(_t201 + 12)) =  *((intOrPtr*)(_t168 + 12));
                _t202 = reg1->node + (_v24 << 4);
                _t176 = reg2->node + (_v16 << 4);
                 *_t202 =  *_t176;
                 *((intOrPtr*)(_t202 + 4)) =  *((intOrPtr*)(_t176 + 4));
                _v24 = _v24 + 1;
            } else {
                __esi = reg1->node + (_v20 << 4);
                _t184 = reg1->node + (_v20 << 4);
                _t188 = reg2->node + (_v16 << 4);
                _v32 =  *_t184;
                asm("fld dword [ebp-0x1c]");
                _v32 =  *((intOrPtr*)(_t184 + 4));
                asm("fld dword [ebp-0x1c]");
                _v32 =  *_t188;
                asm("fld dword [ebp-0x1c]");
                _v32 =  *((intOrPtr*)(_t188 + 4));
                asm("fld dword [ebp-0x1c]");
                asm("fxch st0, st1");
                asm("faddp st3, st0");
                asm("faddp st1, st0");
                asm("fxch st0, st1");
                asm("fstp dword [ebp-0x1c]");
                asm("fstp dword [ebp-0x1c]");
                 *__esi = _v32;
                 *((intOrPtr*)(__esi + 4)) = _v32;
            }
            _v16 = _v16 + 1;
        }
    }
L3:
    _t129 = reg2->node + (_v16 << 4);
    _t205 = reg1;
    _v52 = _t205->width;
    _v48 = _t205->size;
    _v44 = _t205->hashw;
    _v40 = _t205->node;
    _v36 = _t205->hash;
     *__esp =  *((intOrPtr*)(_t129 + 8));
    _v56 =  *((intOrPtr*)(_t129 + 12));
    if(quantum_get_state() == 255) {
        _v28 = _v28 + 1;
    }
    _v16 = _v16 + 1;
    goto L6;
}

quantum_reg quantum_matrix_qureg(_None* A, double t, quantum_reg* reg)
{// addr = 0x080522D8
    long long unsigned int i;
    quantum_reg reg2;
    quantum_reg tmp;
    _unknown_ _v12;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    void* _v28;
    signed int _v32;
    signed int _v36;
    signed int _v40;
    struct quantum_reg_struct _v60;
    intOrPtr _v64;
    quantum_reg* _v68;
    struct quantum_reg_struct _v108;
    signed int _v112;
    signed int _v116;
    signed int _v148;
    signed int _v152;
    signed int* _v156;
    char** __esi;
    _unknown_ __ebp;
    _unknown_ _t82;
    _unknown_ _t89;
    _unknown_ _t91;
    signed int _t92;
    char* _t107;
    _unknown_ _t115;
    _unknown_ _t119;
    void* _t127;

    _v68 = reg;
    _v64 = _a16;
    _v40 =  *_a20;
    _v36 = 1 << (_v40 & 4294967295);
    _v32 = 0;
    _v24 = 0;
    _v28 = calloc(_v36, 16);
    if(_v28 == 0) {
        quantum_error(2);
    }
    quantum_memman(_v36 << 4);
    _v20 = 0;
    _v16 = 0;
    while(1) {
        _t92 = 1 << ( *_a20 & 4294967295);
        _v116 = _t92;
        _v112 = _t92 >> 31;
        if(_v112 <= _v16 && (_v112 < _v16 || _v116 <= _v20)) {
            break;
        }
        _t119 = _v28 + (_v20 << 4);
         *(_t119 + 8) = _v20;
         *(_t119 + 12) = _v16;
        asm("fld qword [ebp-0x40]");
        asm("fstp qword [esp+0xc]");
        _v152 = _v20;
        _v148 = _v16;
         *__esp =  &_v108;
         *t();
        __esp = __esp - 4;
        _v60 = _v108;
        _v60.size = _v108.size;
        _v60.hashw = _v108.hashw;
        _v60.node = _v108.node;
        _v60.hash = _v108.hash;
        _t127 = _v28;
        __esi = _t127 + (_v20 << 4);
        _v156 = _a20;
        _t107 =  &_v60;
         *__esp = _t107;
        quantum_dot_product_noconj();
         *__esi = _t107;
        (__esi)[1] = _t127;
        quantum_delete_qureg( &_v60);
        _v20 = _v20 + 1;
        asm("adc dword [ebp-0xc], 0x0");
    }
     *A = _v40;
     *(A + 4) = _v36;
     *(A + 8) = _v32;
     *(A + 12) = _v28;
     *(A + 16) = _v24;
    return;
}

quantum_scalar_qureg(complex float r, quantum_reg* reg)
{// addr = 0x08052462
    int i;
    signed int _v16;
    quantum_reg* _v32;
    complex float _v36;
    intOrPtr _v40;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t22;
    intOrPtr* _t31;
    _unknown_ _t40;
    complex float _t44;
    _unknown_ _t46;
    intOrPtr* _t47;

    _v16 = 0;
    while(1) {
        __eflags =  *((intOrPtr*)(_a12 + 4)) - _v16;
        if(__eflags <= 0) {
            break;
        }
        _t47 =  *((intOrPtr*)(_a12 + 12)) + (_v16 << 4);
        _t31 =  *((intOrPtr*)(_a12 + 12)) + (_v16 << 4);
        _t44 = r;
        _v32 = reg;
        _v36 = _t44;
        _v40 =  *((intOrPtr*)(_t31 + 4));
         *__esp =  *_t31;
         *_t47 = L08052B40( *((intOrPtr*)(_t31 + 4)), _t47, __eflags);
         *(_t47 + 4) = _t44;
        _v16 = _v16 + 1;
    }
    return;
}

quantum_print_timeop(int width, _None* f)
{// addr = 0x080524D7
    int i;
    int j;
    quantum_reg tmp;
    quantum_matrix m;
    _unknown_ _v8;
    signed int _v16;
    signed int _v20;
    intOrPtr _v24;
    signed int _v28;
    intOrPtr _v32;
    intOrPtr _v36;
    intOrPtr _v40;
    intOrPtr _v44;
    intOrPtr _v48;
    char _v52;
    intOrPtr _v68;
    signed int _v72;
    intOrPtr _v76;
    intOrPtr _v92;
    intOrPtr _v96;
    intOrPtr _v100;
    intOrPtr _v104;
    char _v108;
    signed int _v116;
    signed int _v120;
    signed int _v124;
    _unknown_ __ebp;
    _unknown_ _t65;
    _unknown_ _t66;
    _unknown_ _t71;
    signed int _t73;
    intOrPtr* _t93;
    _unknown_ _t101;
    _unknown_ _t104;
    intOrPtr* _t111;
    _unknown_ _t115;

    _push(__ebx);
    __esp = __esp - 116;
    _v116 = 1 << (width & 4294967295);
    quantum_new_matrix( &_v76, 1 << (width & 4294967295));
    __esp = __esp - 4;
    _v32 = _v76;
    _v28 = _v72;
    _v24 = _v68;
    _v16 = 0;
    while(1 << (width & 4294967295) > _v16) {
        _t73 = _v16;
        _v116 = width;
        _v124 = _t73;
        _v120 = _t73 >> 31;
         *__esp =  &_v108;
        quantum_new_qureg();
        __esp = __esp - 4;
        _v52 = _v108;
        _v48 = _v104;
        _v44 = _v100;
        _v40 = _v96;
        _v36 = _v92;
         *__esp =  &_v52;
         *f();
        _v20 = 0;
        while(_v48 > _v20) {
            _t111 = _v24 + ( *((intOrPtr*)(_v40 + (_v20 << 4) + 8)) + _v28 * _v16 << 3);
            _t93 = _v40 + (_v20 << 4);
             *_t111 =  *_t93;
             *((intOrPtr*)(_t111 + 4)) =  *((intOrPtr*)(_t93 + 4));
            _v20 = _v20 + 1;
        }
    }
}

int main(int argc, char** argv)
{// addr = 0x08052614
    quantum_reg qr;
    int i;
    int width;
    int swidth;
    int x;
    int N;
    int c;
    int q;
    int a;
    int b;
    int factor;
    intOrPtr _v12;
    _unknown_ _v20;
    int _v24;
    int _v28;
    int _v32;
    int _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ _v76;
    _unknown_ _v96;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ _v108;
    _unknown_ _v112;
    int _v116;
    int* _v120;
    _unknown_ _v148;
    _unknown_ _v180;
    intOrPtr _v184;
    int _v188;
    _unknown_ _v192;
    _unknown_ _v196;
    _unknown_ __ebp;
    _unknown_ _t215;
    _unknown_ _t232;
    _unknown_ _t239;
    _unknown_ _t241;
    _unknown_ _t265;
    _unknown_ _t292;
    _unknown_ _t297;
    _unknown_ _t302;
    _unknown_ _t314;
    _unknown_ _t321;
    _unknown_ _t322;
    _unknown_ _t331;
    _unknown_ _t332;
    _unknown_ _t344;
    _unknown_ _t351;
    _unknown_ _t354;
    _unknown_ _t356;
    _unknown_ _t358;
    _unknown_ _t361;
    _unknown_ _t362;
    _unknown_ _t367;
    _unknown_ _t368;
    int* _t369;
    _unknown_ _t382;
    _unknown_ _t399;
    _unknown_ _t400;
    _unknown_ _t403;
    _unknown_ _t404;
    _unknown_ _t409;
    _unknown_ _t410;
    _unknown_ _t413;
    signed int _t414;

    _t369 =  &argc;
    __esp = __esp & 240;
    _push( *((intOrPtr*)(_t369 - 4)));
    _push(_t413);
    _t414 = __esp;
    _push(_t369);
    __esp = __esp - 180;
    _v120 = _t369;
    _v32 = 0;
     *__esp = 0;
    time();
    srand(__eax);
    if( *_v120 != 1) {
        _v36 = atoi( *(_v120[1] + 4));
        if(_v36 > 14) {
            _v24 = quantum_getwidth(_v36 * _v36);
            _v28 = quantum_getwidth(_v36);
            _v184 = _v28 + _v28 + _v28 + _v24 + 2;
            _v188 = _v36;
            printf("N = %i, %i qubits required\n");
            if( *_v120 > 2) {
                _v32 = atoi( *(_v120[1] + 8));
            }
            while() {
            }
        } else {
            puts("Invalid number\n");
            _v116 = 3;
        }
    } else {
        puts("Usage: shor [number]\n");
        _v116 = 3;
    }
L34:
    __esp = _t414;
    _pop(__ebp);
    __esp = _v12 - 4;
    return _v116;
}

const _None* quantum_get_version()
{// addr = 0x08052B30
    _unknown_ __ebp;

    return 134563284;
}

L08052B40(_unknown_ __ecx, _unknown_ __esi, signed int __eflags)
{
    _unknown_ _v28;
    intOrPtr _v60;
    _unknown_ __ebp;
    signed int _t53;
    _unknown_ _t55;
    _unknown_ _t56;
    signed int _t57;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t60;
    _unknown_ _t61;
    _unknown_ _t62;
    _unknown_ _t63;

    __eflags = __eflags;
    _t59 = __esi;
    asm("fld dword [ebp+0x8]");
    asm("fld dword [ebp+0xc]");
    asm("fld dword [ebp+0x10]");
    asm("fld dword [ebp+0x14]");
    asm("fld st0, st3");
    asm("fmul st0, st2");
    L080531D5();
    asm("fstp dword [ebp-0x4]");
    asm("fld st0, st2");
    asm("fmul st0, st1");
    asm("fstp dword [ebp-0x8]");
    asm("fld st0, st3");
    asm("fmul st0, st1");
    asm("fstp dword [ebp-0xc]");
    asm("fld st0, st2");
    asm("fmul st0, st2");
    asm("fstp dword [ebp-0x10]");
    asm("fld dword [ebp-0x4]");
    asm("fld dword [ebp-0x8]");
    asm("fld st0, st1");
    asm("fsub st0, st1");
    asm("fld dword [ebp-0xc]");
    asm("fstp dword [ebp-0x3c]");
    asm("fld dword [ebp-0x10]");
    asm("fst dword [ebp-0x34]");
    asm("fadd dword [ebp-0x3c]");
    asm("fstp dword [ebp-0x18]");
    asm("fucom st0");
    asm("fnstsw ax");
    asm("sahf ");
    if(__eflags != 0) {
L8:
        asm("fld dword [ebp-0x18]");
        asm("fucomp st0");
        asm("fnstsw ax");
        asm("sahf ");
        if(__eflags != 0) {
L10:
            asm("fld st0, st6");
            asm("fsub st0, st7");
            asm("fst dword [ebp-0x30]");
            asm("fxch st0, st7");
            asm("fucom st0");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags != 0) {
                asm("fstp st7");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st4");
                asm("fxch st0, st5");
                asm("fxch st0, st6");
L128:
                asm("fld st0, st6");
                asm("fsub st0, st7");
                asm("fst dword [ebp-0x2c]");
                asm("fxch st0, st7");
                asm("fucom st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    asm("fstp st7");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st5");
                    asm("fxch st0, st6");
                    goto L139;
                }
                if(__eflags != 0) {
                    goto L138;
                }
                asm("fxch st0, st7");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags == 0) {
L135:
                    if(__eflags != 0) {
                        goto L131;
                    }
                    goto L136;
                }
L131:
                asm("fxam ");
                asm("fnstsw ax");
                asm("fstp st0");
                __eflags = _t53 & 4294967295 & 2;
                asm("fldz ");
                if((_t53 & 4294967295 & 2) == 0) {
                    asm("fxch st0, st1");
                    asm("fxch st0, st6");
                    asm("fxch st0, st5");
                    asm("fxch st0, st4");
                    asm("fxch st0, st3");
                    asm("fxch st0, st2");
                    asm("fxch st0, st1");
                } else {
                    asm("fstp st0");
                    asm("fldz ");
                    asm("fchs ");
                    asm("fxch st0, st1");
                    asm("fxch st0, st6");
                    asm("fxch st0, st5");
                    asm("fxch st0, st4");
                    asm("fxch st0, st3");
                    asm("fxch st0, st2");
                    asm("fxch st0, st1");
                }
L134:
                asm("fld1 ");
                asm("fstp dword [ebp-0x28]");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st4");
                asm("fxch st0, st5");
L25:
                asm("fxam ");
                asm("fnstsw ax");
                asm("fstp st0");
                asm("fld dword [ebp-0x28]");
                __eflags = _t53 & 4294967295 & 2;
                asm("fabs ");
                if(__eflags == 0) {
                    asm("fxch st0, st5");
                } else {
                    asm("fchs ");
                    asm("fxch st0, st5");
                }
                asm("fucom st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
L140:
                    asm("fxam ");
                    asm("fnstsw ax");
                    asm("fstp st0");
                    __eflags = _t53 & 4294967295 & 2;
                    asm("fldz ");
                    if(__eflags == 0) {
                        asm("fxch st0, st4");
                    } else {
                        asm("fstp st0");
                        asm("fldz ");
                        asm("fchs ");
                        asm("fxch st0, st4");
                    }
L32:
                    asm("fucom st0");
                    asm("fnstsw ax");
                    _t57 = 1;
                    asm("sahf ");
                    asm("o16 nop ");
                    if(__eflags != 0) {
L157:
                        asm("fxam ");
                        asm("fnstsw ax");
                        asm("fstp st0");
                        __eflags = _t53 & 4294967295 & 2;
                        asm("fldz ");
                        if(__eflags != 0) {
                            asm("fstp st0");
                            asm("fldz ");
                            asm("fchs ");
                        }
                        asm("fxch st0, st5");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        asm("fxch st0, st4");
                        asm("fxch st0, st6");
                        asm("fxch st0, st2");
                        _t57 = 1;
L35:
                        asm("fld st0, st6");
                        asm("fsub st0, st7");
                        asm("fst dword [ebp-0x24]");
                        asm("fxch st0, st7");
                        asm("fucom st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            asm("fstp st7");
                            asm("fxch st0, st1");
                            asm("fxch st0, st2");
                            asm("fxch st0, st3");
                            asm("fxch st0, st4");
                            asm("fxch st0, st5");
                            asm("fxch st0, st6");
                            goto L66;
                        }
                        if(__eflags != 0) {
                            goto L64;
                        }
                        asm("fxch st0, st7");
                        asm("fucomp st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            asm("fstp st3");
                            asm("fstp st3");
                            asm("fstp st0");
                            goto L41;
                        }
                        _t59 = _t59;
                        if(__eflags == 0) {
                            goto L65;
                        }
                        asm("fstp st3");
                        asm("fstp st3");
                        asm("fstp st0");
                        goto L41;
L66:
                        asm("fld st0, st6");
                        asm("fsub st0, st7");
                        asm("fst dword [ebp-0x20]");
                        asm("fxch st0, st7");
                        asm("fucom st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            asm("fstp st7");
                            asm("fxch st0, st1");
                            asm("fxch st0, st2");
                            asm("fxch st0, st3");
                            asm("fxch st0, st4");
                            asm("fxch st0, st5");
                            asm("fxch st0, st6");
                            goto L76;
                        }
                        if(__eflags != 0) {
                            goto L74;
                        }
                        asm("fxch st0, st7");
                        asm("fucomp st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            asm("fstp st3");
                            asm("fstp st3");
                            asm("fstp st3");
                            goto L72;
                        }
                        if(__eflags == 0) {
                            goto L75;
                        }
                        asm("fstp st3");
                        asm("fstp st3");
                        asm("fstp st3");
                        goto L72;
L76:
                        __eflags = _t57 & 4294967295;
                        if(__eflags != 0) {
                            asm("fstp st6");
                            asm("fstp st3");
                            asm("fstp st3");
                            asm("fxch st0, st3");
                            goto L62;
                        }
                        asm("fld st0, st6");
                        asm("fsub st0, st7");
                        asm("fst dword [ebp-0x1c]");
                        asm("fxch st0, st7");
                        asm("fucomp st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            asm("fstp st6");
                            asm("fxch st0, st1");
                            asm("fxch st0, st2");
                            asm("fxch st0, st3");
                            asm("fxch st0, st4");
                            asm("fxch st0, st5");
                            goto L84;
                        }
                        if(__eflags != 0) {
                            goto L83;
                        }
                        asm("fxch st0, st6");
                        asm("fucomp st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            asm("fstp st4");
                            asm("fstp st2");
                            asm("o16 nop ");
                            goto L110;
                        }
                        _t59 = _t59;
                        if(__eflags != 0) {
                            goto L104;
                        }
                        asm("fxch st0, st1");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        asm("fxch st0, st4");
                        asm("fxch st0, st5");
                        goto L84;
L105:
                        asm("fstp st3");
                        asm("fxch st0, st1");
L110:
                        asm("fucom st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0 || __eflags != 0) {
                            asm("fxam ");
                            asm("fnstsw ax");
                            asm("fstp st0");
                            __eflags = _t53 & 4294967295 & 2;
                            asm("fldz ");
                            if(__eflags != 0) {
                                asm("fstp st0");
                                asm("fldz ");
                                asm("fchs ");
                            }
                            asm("fxch st0, st1");
                        } else {
                            asm("fxch st0, st1");
                        }
                        asm("fucom st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
L145:
                            asm("fxam ");
                            asm("fnstsw ax");
                            asm("fstp st0");
                            __eflags = _t53 & 4294967295 & 2;
                            asm("fldz ");
                            if(__eflags != 0) {
                                asm("fstp st0");
                                asm("fldz ");
                                asm("fchs ");
                            }
                            asm("fxch st0, st2");
L116:
                            asm("fucom st0");
                            asm("fnstsw ax");
                            asm("sahf ");
                            if(__eflags != 0 || __eflags != 0) {
                                asm("fxam ");
                                asm("fnstsw ax");
                                asm("fstp st0");
                                __eflags = _t53 & 4294967295 & 2;
                                asm("fldz ");
                                if(__eflags != 0) {
                                    asm("fstp st0");
                                    asm("fldz ");
                                    asm("fchs ");
                                }
                                asm("fxch st0, st3");
                            } else {
                                asm("fxch st0, st3");
                            }
                            asm("fucom st0");
                            asm("fnstsw ax");
                            asm("sahf ");
                            if(__eflags != 0 || __eflags != 0) {
                                asm("fxam ");
                                asm("fnstsw ax");
                                asm("fstp st0");
                                __eflags = _t53 & 4294967295 & 2;
                                asm("fldz ");
                                if((_t53 & 4294967295 & 2) == 0) {
                                    asm("fxch st0, st1");
                                    asm("fxch st0, st2");
                                    asm("fxch st0, st3");
                                    asm("fxch st0, st1");
                                    goto L59;
                                }
                                asm("fstp st0");
                                asm("fldz ");
                                asm("fxch st0, st1");
                                asm("fxch st0, st2");
                                asm("fxch st0, st3");
                                asm("fxch st0, st1");
L123:
                                asm("fchs ");
L59:
                                asm("fxch st0, st2");
                                asm("fxch st0, st3");
                                asm("fxch st0, st2");
L62:
                                asm("fld st0, st3");
                                asm("fmul st0, st2");
                                asm("fld st0, st3");
                                asm("fmul st0, st2");
                                asm("fsubp st1, st0");
                                asm("fld dword [ecx+0xffffe5e8]");
                                asm("fmul st1, st0");
                                asm("fxch st0, st5");
                                asm("fmulp st2, st0");
                                asm("fxch st0, st3");
                                asm("fmulp st2, st0");
                                asm("faddp st1, st0");
                                asm("fmulp st2, st0");
                                asm("fxch st0, st1");
                                asm("fstp dword [ebp-0x18]");
                                goto L7;
                            }
                            goto L61;
                        }
                        _t59 = _t59;
                        if(__eflags != 0) {
                            goto L145;
                        }
                        asm("fxch st0, st2");
                        goto L116;
L104:
                        asm("fstp st4");
                        asm("fstp st2");
                        goto L110;
L84:
                        asm("fld st0, st5");
                        asm("fsub st0, st6");
                        asm("fxch st0, st6");
                        asm("fucomp st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            asm("fstp st5");
                            asm("fxch st0, st1");
                            asm("fxch st0, st2");
                            asm("fxch st0, st3");
                            asm("fxch st0, st4");
                            goto L91;
                        }
                        if(__eflags != 0) {
                            goto L90;
                        }
                        asm("fxch st0, st5");
                        asm("fucomp st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            goto L105;
                        }
                        if(__eflags != 0) {
                            goto L106;
                        }
                        asm("fxch st0, st1");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        asm("fxch st0, st4");
                        goto L91;
L107:
                        asm("fstp st4");
                        asm("fxch st0, st2");
                        goto L110;
L106:
                        asm("fstp st3");
                        asm("fxch st0, st1");
                        goto L110;
L91:
                        asm("fld dword [ebp-0x3c]");
                        asm("fsub st0, st0");
                        asm("fld dword [ebp-0x3c]");
                        asm("fucomp st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            asm("fstp st0");
                            _t59 = _t59;
                            goto L98;
                        }
                        if(__eflags != 0) {
                            goto L97;
                        }
                        asm("fucomp st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            goto L107;
                        }
                        asm("o16 nop ");
                        if(__eflags != 0) {
                            goto L98;
                        }
                        _t59 = _t59;
                        asm("fstp st4");
                        asm("fxch st0, st2");
                        goto L110;
L99:
                        if(__eflags != 0) {
                            asm("fstp st0");
                            asm("fstp st0");
                            asm("fstp st0");
                            asm("fstp st0");
                            asm("fstp st0");
                            goto L7;
                        }
                        asm("fucomp st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            asm("fstp st4");
                            asm("fxch st0, st2");
                            goto L110;
                        }
                        _t61 = _t59;
                        if(__eflags == 0) {
                            asm("fstp st0");
                            asm("fstp st0");
                            asm("fstp st0");
                            asm("fstp st0");
                            goto L7;
                        }
                        asm("fstp st4");
                        asm("fxch st0, st2");
                        _t59 = _t61;
                        goto L110;
L98:
                        asm("fld dword [ebp-0x34]");
                        asm("fsub st0, st0");
                        asm("fld dword [ebp-0x34]");
                        asm("fucomp st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            asm("fstp st0");
                            asm("fstp st0");
                            asm("fstp st0");
                            asm("fstp st0");
                            asm("fstp st0");
                            goto L7;
                        }
                        goto L99;
L97:
                        asm("fstp st0");
                        goto L98;
L90:
                        asm("fstp st5");
                        asm("fxch st0, st1");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        asm("fxch st0, st4");
                        goto L91;
L83:
                        asm("fstp st6");
                        asm("fxch st0, st1");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        asm("fxch st0, st4");
                        asm("fxch st0, st5");
                        goto L84;
L61:
                        asm("fxch st0, st1");
                        asm("fxch st0, st3");
                        asm("fxch st0, st1");
                        goto L62;
L72:
                        asm("fld1 ");
                        asm("fldz ");
                        asm("fxch st0, st3");
                        asm("fxch st0, st4");
                        asm("fxch st0, st2");
                        asm("fxch st0, st5");
                        asm("fxch st0, st2");
L48:
                        asm("fucom st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0 || __eflags != 0) {
                            asm("fxam ");
                            asm("fnstsw ax");
                            asm("fstp st0");
                            __eflags = _t53 & 4294967295 & 2;
                            asm("fldz ");
                            if(__eflags != 0) {
                                asm("fstp st0");
                                asm("fldz ");
                                asm("fchs ");
                            }
                            asm("fxch st0, st4");
                        } else {
                            asm("fxch st0, st4");
                        }
                        asm("fucom st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0 || __eflags != 0) {
                            asm("fxam ");
                            asm("fnstsw ax");
                            asm("fstp st0");
                            __eflags = _t53 & 4294967295 & 2;
                            asm("fldz ");
                            if((_t53 & 4294967295 & 2) != 0) {
                                asm("fstp st0");
                                asm("fldz ");
                                asm("fchs ");
                            }
                            asm("fxch st0, st5");
                        } else {
                            asm("fxch st0, st5");
                        }
                        asm("fxam ");
                        asm("fnstsw ax");
                        asm("fstp st0");
                        asm("fxch st0, st2");
                        __eflags = _t53 & 4294967295 & 2;
                        asm("fabs ");
                        if((_t53 & 4294967295 & 2) != 0) {
                            asm("fchs ");
                        }
                        asm("fxch st0, st1");
                        asm("fxam ");
                        asm("fnstsw ax");
                        asm("fstp st0");
                        asm("fxch st0, st1");
                        __eflags = _t53 & 4294967295 & 2;
                        asm("fabs ");
                        if((_t53 & 4294967295 & 2) != 0) {
                            goto L123;
                        }
                        goto L59;
L75:
                        asm("fxch st0, st1");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        asm("fxch st0, st4");
                        asm("fxch st0, st5");
                        asm("fxch st0, st6");
                        goto L76;
L74:
                        asm("fstp st7");
                        asm("fxch st0, st1");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        asm("fxch st0, st4");
                        asm("fxch st0, st5");
                        asm("fxch st0, st6");
                        goto L76;
L41:
                        asm("fld st0, st2");
                        asm("fsub st0, st3");
                        asm("fucomp st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            asm("fxch st0, st2");
                            goto L45;
                        }
                        if(__eflags == 0) {
L162:
                            asm("fldz ");
                            asm("fld1 ");
                            asm("fxch st0, st3");
                            asm("fxch st0, st2");
                            asm("fxch st0, st4");
                            asm("fxch st0, st2");
                            goto L48;
                        }
                        asm("fxch st0, st2");
L45:
                        asm("fucom st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0) {
                            asm("fxch st0, st2");
                            goto L162;
                        }
                        asm("o16 nop ");
                        if(__eflags != 0) {
                            goto L161;
                        }
                        asm("fld1 ");
                        asm("fld st0, st0");
                        asm("fxch st0, st3");
                        goto L48;
L161:
                        asm("fxch st0, st2");
                        goto L162;
L65:
                        asm("fxch st0, st1");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        asm("fxch st0, st4");
                        asm("fxch st0, st5");
                        asm("fxch st0, st6");
                        goto L66;
L64:
                        asm("fstp st7");
                        asm("fxch st0, st1");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        asm("fxch st0, st4");
                        asm("fxch st0, st5");
                        asm("fxch st0, st6");
                        goto L66;
                    }
                    asm("o16 nop ");
                    if(__eflags != 0) {
                        goto L157;
                    }
                    asm("fxch st0, st5");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st6");
                    asm("fxch st0, st2");
                    goto L35;
                }
                _t59 = _t59;
                if(__eflags != 0) {
                    goto L140;
                }
                asm("fxch st0, st4");
                goto L32;
L136:
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st4");
                asm("fxch st0, st5");
                asm("fxch st0, st6");
L139:
                _t57 = 0;
                goto L35;
L138:
                asm("fstp st7");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st4");
                asm("fxch st0, st5");
                asm("fxch st0, st6");
                goto L139;
            }
            goto L11;
L127:
            asm("fstp st7");
            asm("fxch st0, st1");
            asm("fxch st0, st2");
            asm("fxch st0, st3");
            asm("fxch st0, st4");
            asm("fxch st0, st5");
            asm("fxch st0, st6");
            goto L128;
        }
        goto L9;
L11:
        if(__eflags != 0) {
            goto L127;
        }
        asm("fxch st0, st7");
        asm("fucomp st0");
        asm("fnstsw ax");
        asm("sahf ");
        if(__eflags == 0) {
            if(__eflags != 0) {
                asm("fxch st0, st6");
L15:
                asm("fxam ");
                asm("fnstsw ax");
                asm("fstp st0");
                __eflags = _t53 & 4294967295 & 2;
                asm("fld1 ");
                if(__eflags != 0) {
                    asm("fstp st0");
                    asm("fld1 ");
                    asm("fchs ");
                }
                asm("fld st0, st5");
                asm("fsub st0, st6");
                asm("fst dword [ebp-0x14]");
                asm("fxch st0, st6");
                asm("fucom st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    asm("fstp st6");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st5");
                    goto L24;
                } else {
                    if(__eflags != 0) {
                        goto L23;
                    }
                    asm("fxch st0, st6");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        goto L134;
                    }
                    asm("o16 nop ");
                    if(__eflags != 0) {
                        goto L134;
                    }
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st5");
                    goto L24;
L24:
                    asm("fldz ");
                    asm("fstp dword [ebp-0x28]");
                    goto L25;
                }
L23:
                asm("fstp st6");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st4");
                asm("fxch st0, st5");
                goto L24;
            }
            asm("fxch st0, st1");
            asm("fxch st0, st2");
            asm("fxch st0, st3");
            asm("fxch st0, st4");
            asm("fxch st0, st5");
            asm("fxch st0, st6");
            goto L128;
        }
        asm("fxch st0, st6");
        goto L15;
    }
    if(__eflags != 0) {
        goto L8;
    } else {
        asm("fstp st5");
        asm("fstp st0");
        asm("fstp st0");
        asm("fstp st0");
        asm("fstp st0");
        asm("fstp st1");
L7:
        asm("fstp dword [ebp-0x38]");
        return _v60;
    }
L9:
    if(__eflags == 0) {
        asm("fstp st5");
        asm("fstp st0");
        asm("fstp st0");
        asm("fstp st0");
        asm("fstp st0");
        asm("fstp st1");
        goto L7;
    }
    goto L10;
}

L080531D5()
{
    return;
}

L080531E0(_unknown_ __esi, signed int __eflags, intOrPtr _a4)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    signed int _t55;
    _unknown_ _t57;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t60;
    _unknown_ _t61;
    _unknown_ _t62;

    __eflags = __eflags;
    _t59 = __esi;
    __edx = _a4;
    asm("fld qword [ebp+0xc]");
    asm("fld qword [ebp+0x14]");
    asm("fld qword [ebp+0x1c]");
    asm("fld qword [ebp+0x24]");
    asm("fld st0, st3");
    asm("fmul st0, st2");
    L08053887();
    asm("fstp qword [ebp-0x10]");
    asm("fld st0, st2");
    asm("fmul st0, st1");
    asm("fstp qword [ebp-0x18]");
    asm("fld st0, st3");
    asm("fmul st0, st1");
    asm("fstp qword [ebp-0x20]");
    asm("fld st0, st2");
    asm("fmul st0, st2");
    asm("fstp qword [ebp-0x28]");
    asm("fld qword [ebp-0x10]");
    asm("fld qword [ebp-0x18]");
    asm("fst qword [ebp-0x78]");
    asm("fsubr st0, st1");
    asm("fld qword [ebp-0x20]");
    asm("fst qword [ebp-0x70]");
    asm("fld qword [ebp-0x28]");
    asm("fst qword [ebp-0x68]");
    asm("faddp st1, st0");
    asm("fxch st0, st1");
    asm("fucom st0");
    asm("fnstsw ax");
    asm("sahf ");
    if(__eflags != 0) {
        asm("fxch st0, st1");
        goto L10;
    }
    if(__eflags != 0) {
        goto L9;
    } else {
        asm("fstp st5");
        asm("fstp st5");
        asm("fstp st0");
        asm("fstp st0");
        asm("fstp st0");
L7:
        asm("fstp qword [edx]");
        asm("fstp qword [edx+0x8]");
        return __edx;
    }
L10:
    asm("fucom st0");
    asm("fnstsw ax");
    asm("sahf ");
    if(__eflags != 0) {
L12:
        asm("fld st0, st6");
        asm("fsub st0, st7");
        asm("fst qword [ebp-0x60]");
        asm("fxch st0, st7");
        asm("fucom st0");
        asm("fnstsw ax");
        asm("sahf ");
        if(__eflags != 0) {
            asm("fstp st7");
            asm("fxch st0, st1");
            asm("fxch st0, st2");
            asm("fxch st0, st3");
            asm("fxch st0, st4");
            asm("fxch st0, st5");
            asm("fxch st0, st6");
L130:
            asm("fld st0, st6");
            asm("fsub st0, st7");
            asm("fst qword [ebp-0x58]");
            asm("fxch st0, st7");
            asm("fucom st0");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags != 0) {
                asm("fstp st7");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st4");
                asm("fxch st0, st5");
                asm("fxch st0, st6");
                goto L141;
            }
            if(__eflags != 0) {
                goto L140;
            }
            asm("fxch st0, st7");
            asm("fucomp st0");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags == 0) {
L137:
                if(__eflags != 0) {
                    goto L133;
                }
                goto L138;
            }
L133:
            asm("fxam ");
            asm("fnstsw ax");
            asm("fstp st0");
            __eflags = _t55 & 4294967295 & 2;
            asm("fldz ");
            if((_t55 & 4294967295 & 2) == 0) {
                asm("fxch st0, st1");
                asm("fxch st0, st6");
                asm("fxch st0, st5");
                asm("fxch st0, st4");
                asm("fxch st0, st3");
                asm("fxch st0, st2");
                asm("fxch st0, st1");
            } else {
                asm("fstp st0");
                asm("fldz ");
                asm("fchs ");
                asm("fxch st0, st1");
                asm("fxch st0, st6");
                asm("fxch st0, st5");
                asm("fxch st0, st4");
                asm("fxch st0, st3");
                asm("fxch st0, st2");
                asm("fxch st0, st1");
            }
L136:
            asm("fld1 ");
            asm("fstp qword [ebp-0x50]");
            asm("fxch st0, st1");
            asm("fxch st0, st2");
            asm("fxch st0, st3");
            asm("fxch st0, st4");
            asm("fxch st0, st5");
L27:
            asm("fxam ");
            asm("fnstsw ax");
            asm("fstp st0");
            asm("fld qword [ebp-0x50]");
            __eflags = _t55 & 4294967295 & 2;
            asm("fabs ");
            if(__eflags == 0) {
                asm("fxch st0, st5");
            } else {
                asm("fchs ");
                asm("fxch st0, st5");
            }
            asm("fucom st0");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags != 0) {
L142:
                asm("fxam ");
                asm("fnstsw ax");
                asm("fstp st0");
                __eflags = _t55 & 4294967295 & 2;
                asm("fldz ");
                if(__eflags == 0) {
                    asm("fxch st0, st4");
                } else {
                    asm("fstp st0");
                    asm("fldz ");
                    asm("fchs ");
                    asm("fxch st0, st4");
                }
L34:
                asm("fucom st0");
                asm("fnstsw ax");
                __ecx = 1;
                asm("sahf ");
                asm("o16 nop ");
                if(__eflags != 0) {
L159:
                    asm("fxam ");
                    asm("fnstsw ax");
                    asm("fstp st0");
                    __eflags = _t55 & 4294967295 & 2;
                    asm("fldz ");
                    if(__eflags != 0) {
                        asm("fstp st0");
                        asm("fldz ");
                        asm("fchs ");
                    }
                    asm("fxch st0, st5");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st6");
                    asm("fxch st0, st2");
                    __ecx = 1;
L37:
                    asm("fld st0, st6");
                    asm("fsub st0, st7");
                    asm("fst qword [ebp-0x48]");
                    asm("fxch st0, st7");
                    asm("fucom st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        asm("fstp st7");
                        asm("fxch st0, st1");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        asm("fxch st0, st4");
                        asm("fxch st0, st5");
                        asm("fxch st0, st6");
                        goto L68;
                    }
                    if(__eflags != 0) {
                        goto L66;
                    }
                    asm("fxch st0, st7");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        asm("fstp st3");
                        asm("fstp st3");
                        asm("fstp st0");
                        goto L43;
                    }
                    _t59 = _t59;
                    if(__eflags == 0) {
                        goto L67;
                    }
                    asm("fstp st3");
                    asm("fstp st3");
                    asm("fstp st0");
                    goto L43;
L68:
                    asm("fld st0, st6");
                    asm("fsub st0, st7");
                    asm("fst qword [ebp-0x40]");
                    asm("fxch st0, st7");
                    asm("fucom st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        asm("fstp st7");
                        asm("fxch st0, st1");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        asm("fxch st0, st4");
                        asm("fxch st0, st5");
                        asm("fxch st0, st6");
                        goto L78;
                    }
                    if(__eflags != 0) {
                        goto L76;
                    }
                    asm("fxch st0, st7");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        asm("fstp st3");
                        asm("fstp st3");
                        asm("fstp st3");
                        goto L74;
                    }
                    if(__eflags == 0) {
                        goto L77;
                    }
                    asm("fstp st3");
                    asm("fstp st3");
                    asm("fstp st3");
                    goto L74;
L78:
                    __eflags = __ecx & 4294967295;
                    if(__eflags != 0) {
                        asm("fstp st6");
                        asm("fstp st3");
                        asm("fstp st3");
                        asm("fxch st0, st3");
                        goto L64;
                    }
                    asm("fld st0, st6");
                    asm("fsub st0, st7");
                    asm("fst qword [ebp-0x38]");
                    asm("fxch st0, st7");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        asm("fstp st6");
                        asm("fxch st0, st1");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        asm("fxch st0, st4");
                        asm("fxch st0, st5");
                        goto L86;
                    }
                    if(__eflags != 0) {
                        goto L85;
                    }
                    asm("fxch st0, st6");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        asm("fstp st4");
                        asm("fstp st2");
                        goto L112;
                    }
                    _t59 = _t59;
                    if(__eflags != 0) {
                        goto L106;
                    }
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st5");
                    goto L86;
L107:
                    asm("fstp st5");
                    asm("fstp st3");
                    asm("fxch st0, st1");
L112:
                    asm("fucom st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0 || __eflags != 0) {
                        asm("fxam ");
                        asm("fnstsw ax");
                        asm("fstp st0");
                        __eflags = _t55 & 4294967295 & 2;
                        asm("fldz ");
                        if(__eflags != 0) {
                            asm("fstp st0");
                            asm("fldz ");
                            asm("fchs ");
                        }
                        asm("fxch st0, st1");
                    } else {
                        asm("fxch st0, st1");
                    }
                    asm("fucom st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
L147:
                        asm("fxam ");
                        asm("fnstsw ax");
                        asm("fstp st0");
                        __eflags = _t55 & 4294967295 & 2;
                        asm("fldz ");
                        if(__eflags != 0) {
                            asm("fstp st0");
                            asm("fldz ");
                            asm("fchs ");
                        }
                        asm("fxch st0, st2");
L118:
                        asm("fucom st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0 || __eflags != 0) {
                            asm("fxam ");
                            asm("fnstsw ax");
                            asm("fstp st0");
                            __eflags = _t55 & 4294967295 & 2;
                            asm("fldz ");
                            if(__eflags != 0) {
                                asm("fstp st0");
                                asm("fldz ");
                                asm("fchs ");
                            }
                            asm("fxch st0, st3");
                        } else {
                            asm("fxch st0, st3");
                        }
                        asm("fucom st0");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags != 0 || __eflags != 0) {
                            asm("fxam ");
                            asm("fnstsw ax");
                            asm("fstp st0");
                            __eflags = _t55 & 4294967295 & 2;
                            asm("fldz ");
                            if((_t55 & 4294967295 & 2) == 0) {
                                asm("fxch st0, st1");
                                asm("fxch st0, st2");
                                asm("fxch st0, st3");
                                asm("fxch st0, st1");
                                goto L61;
                            }
                            asm("fstp st0");
                            asm("fldz ");
                            asm("fxch st0, st1");
                            asm("fxch st0, st2");
                            asm("fxch st0, st3");
                            asm("fxch st0, st1");
L125:
                            asm("fchs ");
L61:
                            asm("fxch st0, st2");
                            asm("fxch st0, st3");
                            asm("fxch st0, st2");
L64:
                            asm("fld st0, st3");
                            asm("fmul st0, st2");
                            asm("fld st0, st3");
                            asm("fmul st0, st2");
                            asm("fsubp st1, st0");
                            asm("fld dword [ebx+0xffffe5e8]");
                            asm("fmul st1, st0");
                            asm("fxch st0, st5");
                            asm("fmulp st2, st0");
                            asm("fxch st0, st3");
                            asm("fmulp st2, st0");
                            asm("faddp st1, st0");
                            asm("fmulp st2, st0");
                            goto L7;
                        }
                        goto L63;
                    }
                    _t59 = _t59;
                    if(__eflags != 0) {
                        goto L147;
                    }
                    asm("fxch st0, st2");
                    goto L118;
L106:
                    asm("fstp st4");
                    asm("fstp st2");
                    goto L112;
L86:
                    asm("fld qword [ebp-0x78]");
                    asm("fsub st0, st0");
                    asm("fld qword [ebp-0x78]");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        asm("fstp st0");
                        goto L93;
                    }
                    if(__eflags != 0) {
                        goto L92;
                    }
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        goto L107;
                    }
                    if(__eflags != 0) {
                        goto L93;
                    }
                    _t59 = _t59;
                    asm("fstp st5");
                    asm("fstp st3");
                    asm("fxch st0, st1");
                    goto L112;
L94:
                    if(__eflags != 0) {
L99:
                        asm("fstp st0");
                        goto L100;
                    }
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        asm("fstp st5");
                        asm("fstp st3");
                        asm("fxch st0, st1");
                        goto L112;
                    }
                    _t59 = _t59;
                    if(__eflags != 0) {
                        goto L100;
                    }
                    _t59 = _t59;
                    asm("fstp st5");
                    asm("fstp st3");
                    asm("fxch st0, st1");
                    goto L112;
L101:
                    if(__eflags != 0) {
                        asm("fstp st0");
                        asm("fstp st0");
                        asm("fstp st0");
                        asm("fstp st0");
                        asm("fstp st0");
                        asm("fxch st0, st1");
                        goto L7;
                    }
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        asm("fstp st5");
                        asm("fstp st3");
                        asm("fxch st0, st1");
                        goto L112;
                    }
                    _t61 = _t59;
                    if(__eflags == 0) {
                        asm("fstp st0");
                        asm("fstp st0");
                        asm("fstp st0");
                        asm("fstp st0");
                        asm("fxch st0, st1");
                        goto L7;
                    }
                    asm("fstp st5");
                    asm("fstp st3");
                    asm("fxch st0, st1");
                    _t59 = _t61;
                    goto L112;
L100:
                    asm("fld qword [ebp-0x68]");
                    asm("fsub st0, st0");
                    asm("fld qword [ebp-0x68]");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        asm("fstp st0");
                        asm("fstp st0");
                        asm("fstp st0");
                        asm("fstp st0");
                        asm("fstp st0");
                        asm("fxch st0, st1");
                        goto L7;
                    }
                    goto L101;
L93:
                    asm("fld qword [ebp-0x70]");
                    asm("fsub st0, st0");
                    asm("fld qword [ebp-0x70]");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        asm("fstp st0");
                        _t59 = _t59;
                        goto L100;
                    }
                    goto L94;
L92:
                    asm("fstp st0");
                    goto L93;
L85:
                    asm("fstp st6");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st5");
                    goto L86;
L63:
                    asm("fxch st0, st1");
                    asm("fxch st0, st3");
                    asm("fxch st0, st1");
                    goto L64;
L74:
                    asm("fld1 ");
                    asm("fldz ");
                    asm("fxch st0, st1");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st2");
                    asm("fxch st0, st5");
                    asm("fxch st0, st2");
L50:
                    asm("fucom st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0 || __eflags != 0) {
                        asm("fxam ");
                        asm("fnstsw ax");
                        asm("fstp st0");
                        __eflags = _t55 & 4294967295 & 2;
                        asm("fldz ");
                        if(__eflags != 0) {
                            asm("fstp st0");
                            asm("fldz ");
                            asm("fchs ");
                        }
                        asm("fxch st0, st4");
                    } else {
                        asm("fxch st0, st4");
                    }
                    asm("fucom st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0 || __eflags != 0) {
                        asm("fxam ");
                        asm("fnstsw ax");
                        asm("fstp st0");
                        __eflags = _t55 & 4294967295 & 2;
                        asm("fldz ");
                        if((_t55 & 4294967295 & 2) != 0) {
                            asm("fstp st0");
                            asm("fldz ");
                            asm("fchs ");
                        }
                        asm("fxch st0, st5");
                    } else {
                        asm("fxch st0, st5");
                    }
                    asm("fxam ");
                    asm("fnstsw ax");
                    asm("fstp st0");
                    __eflags = _t55 & 4294967295 & 2;
                    asm("fabs ");
                    if((_t55 & 4294967295 & 2) != 0) {
                        asm("fchs ");
                    }
                    asm("fxch st0, st1");
                    asm("fxam ");
                    asm("fnstsw ax");
                    asm("fstp st0");
                    asm("fxch st0, st1");
                    __eflags = _t55 & 4294967295 & 2;
                    asm("fabs ");
                    if((_t55 & 4294967295 & 2) != 0) {
                        goto L125;
                    }
                    goto L61;
L77:
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st5");
                    asm("fxch st0, st6");
                    goto L78;
L76:
                    asm("fstp st7");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st5");
                    asm("fxch st0, st6");
                    goto L78;
L43:
                    asm("fld st0, st2");
                    asm("fsub st0, st3");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        asm("fxch st0, st2");
                        goto L47;
                    }
                    if(__eflags == 0) {
L164:
                        asm("fldz ");
                        asm("fld1 ");
                        asm("fxch st0, st1");
                        asm("fxch st0, st3");
                        asm("fxch st0, st2");
                        asm("fxch st0, st4");
                        asm("fxch st0, st2");
                        goto L50;
                    }
                    asm("fxch st0, st2");
L47:
                    asm("fucom st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        asm("fxch st0, st2");
                        goto L164;
                    }
                    asm("o16 nop ");
                    if(__eflags != 0) {
                        goto L163;
                    }
                    asm("fld1 ");
                    asm("fld st0, st0");
                    asm("fxch st0, st3");
                    goto L50;
L163:
                    asm("fxch st0, st2");
                    goto L164;
L67:
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st5");
                    asm("fxch st0, st6");
                    goto L68;
L66:
                    asm("fstp st7");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st5");
                    asm("fxch st0, st6");
                    goto L68;
                }
                asm("o16 nop ");
                if(__eflags != 0) {
                    goto L159;
                }
                asm("fxch st0, st5");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st4");
                asm("fxch st0, st6");
                asm("fxch st0, st2");
                goto L37;
            }
            _t59 = _t59;
            if(__eflags != 0) {
                goto L142;
            }
            asm("fxch st0, st4");
            goto L34;
L138:
            asm("fxch st0, st1");
            asm("fxch st0, st2");
            asm("fxch st0, st3");
            asm("fxch st0, st4");
            asm("fxch st0, st5");
            asm("fxch st0, st6");
L141:
            __ecx = 0;
            goto L37;
L140:
            asm("fstp st7");
            asm("fxch st0, st1");
            asm("fxch st0, st2");
            asm("fxch st0, st3");
            asm("fxch st0, st4");
            asm("fxch st0, st5");
            asm("fxch st0, st6");
            goto L141;
        }
        goto L13;
L129:
        asm("fstp st7");
        asm("fxch st0, st1");
        asm("fxch st0, st2");
        asm("fxch st0, st3");
        asm("fxch st0, st4");
        asm("fxch st0, st5");
        asm("fxch st0, st6");
        goto L130;
    }
    _t59 = _t59;
    if(__eflags == 0) {
        asm("fstp st6");
        asm("fstp st4");
        asm("fstp st0");
        asm("fstp st0");
        asm("fstp st0");
        goto L7;
    }
    goto L12;
L13:
    if(__eflags != 0) {
        goto L129;
    }
    asm("fxch st0, st7");
    asm("fucomp st0");
    asm("fnstsw ax");
    asm("sahf ");
    if(__eflags == 0) {
        if(__eflags != 0) {
            asm("fxch st0, st6");
L17:
            asm("fxam ");
            asm("fnstsw ax");
            asm("fstp st0");
            __eflags = _t55 & 4294967295 & 2;
            asm("fld1 ");
            if(__eflags != 0) {
                asm("fstp st0");
                asm("fld1 ");
                asm("fchs ");
            }
            asm("fld st0, st5");
            asm("fsub st0, st6");
            asm("fst qword [ebp-0x30]");
            asm("fxch st0, st6");
            asm("fucom st0");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags != 0) {
                asm("fstp st6");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st4");
                asm("fxch st0, st5");
                goto L26;
            } else {
                if(__eflags != 0) {
                    goto L25;
                }
                asm("fxch st0, st6");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    goto L136;
                }
                asm("o16 nop ");
                if(__eflags != 0) {
                    goto L136;
                }
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st4");
                asm("fxch st0, st5");
                goto L26;
L26:
                asm("fldz ");
                asm("fstp qword [ebp-0x50]");
                goto L27;
            }
L25:
            asm("fstp st6");
            asm("fxch st0, st1");
            asm("fxch st0, st2");
            asm("fxch st0, st3");
            asm("fxch st0, st4");
            asm("fxch st0, st5");
            goto L26;
        }
        asm("fxch st0, st1");
        asm("fxch st0, st2");
        asm("fxch st0, st3");
        asm("fxch st0, st4");
        asm("fxch st0, st5");
        asm("fxch st0, st6");
        goto L130;
    }
    asm("fxch st0, st6");
    _t59 = _t59;
    goto L17;
L9:
    asm("fxch st0, st1");
    goto L10;
}

L08053887()
{
    return;
}

L08053890(_unknown_ __ecx, _unknown_ __esi, signed int __eflags)
{
    intOrPtr _v12;
    _unknown_ __ebp;
    signed int _t39;
    _unknown_ _t41;
    _unknown_ _t42;
    signed int _t43;
    _unknown_ _t44;
    _unknown_ _t45;
    _unknown_ _t46;
    _unknown_ _t47;
    _unknown_ _t48;

    __eflags = __eflags;
    _t45 = __esi;
    asm("fld dword [ebp+0x8]");
    asm("fld dword [ebp+0xc]");
    asm("fld dword [ebp+0x10]");
    asm("fld dword [ebp+0x14]");
    asm("fld st0, st1");
    asm("fabs ");
    asm("fld st0, st1");
    asm("fabs ");
    asm("fucompp ");
    asm("fnstsw ax");
    L080531D5();
    asm("sahf ");
    if(__eflags <= 0) {
        asm("fld st0, st0");
        asm("fdiv st0, st2");
        asm("fld st0, st1");
        asm("fmul st0, st1");
        asm("fadd st0, st3");
        asm("fld st0, st4");
        asm("fmul st0, st2");
        asm("fadd st0, st6");
        asm("fdiv st0, st1");
        asm("fxch st0, st2");
        asm("fmul st0, st6");
        asm("fld st0, st5");
        asm("fsubrp st1, st0");
        asm("fdivrp st1, st0");
        asm("fxch st0, st1");
    } else {
        asm("fld st0, st1");
        asm("fdiv st0, st1");
        asm("fld st0, st2");
        asm("fmul st0, st1");
        asm("fadd st0, st2");
        asm("fld st0, st5");
        asm("fmul st0, st2");
        asm("fadd st0, st5");
        asm("fdiv st0, st1");
        asm("fld st0, st5");
        asm("fmulp st3, st0");
        asm("fxch st0, st2");
        asm("fsub st0, st6");
        asm("fdivrp st1, st0");
        asm("fxch st0, st1");
    }
    asm("fucom st0");
    asm("fnstsw ax");
    asm("sahf ");
    if(__eflags != 0) {
        asm("fxch st0, st1");
L17:
        asm("fucom st0");
        asm("fnstsw ax");
        asm("sahf ");
        if(__eflags != 0) {
L19:
            asm("fldz ");
            asm("fxch st0, st4");
            asm("fucom st4");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags != 0) {
                asm("fstp st4");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st2");
L25:
                asm("fld st0, st5");
                asm("fsub st0, st6");
                asm("fst dword [ebp-0x4]");
                asm("fxch st0, st6");
                asm("fucom st0");
                asm("fnstsw ax");
                asm("fxch st0, st6");
                asm("sahf ");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
L30:
                    asm("fld st0, st2");
                    asm("fsub st0, st3");
                    asm("fucom st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
L51:
                        asm("fxch st0, st4");
                        asm("fxch st0, st5");
                        asm("fxch st0, st1");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        goto L55;
                    }
                    goto L31;
L52:
                    asm("fxch st0, st4");
                    asm("fxch st0, st5");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    goto L55;
                }
L26:
                asm("fld st0, st4");
                asm("fsub st0, st5");
                asm("fxch st0, st5");
                asm("fucom st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    asm("fstp st5");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    goto L79;
                }
                if(__eflags != 0) {
                    goto L77;
                }
                asm("fxch st0, st5");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    goto L30;
                }
                asm("o16 nop ");
                if(__eflags == 0) {
                    goto L78;
                }
                goto L30;
L78:
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st4");
L79:
                asm("fld st0, st3");
                asm("fsub st0, st4");
                asm("fxch st0, st4");
L55:
                asm("fucom st0");
                asm("fnstsw ax");
                asm("fxch st0, st4");
                asm("sahf ");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
L60:
                    asm("fld dword [ebp-0x4]");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        goto L9;
                    }
                    goto L61;
L10:
                    asm("fstp st0");
                    asm("fstp st4");
                    asm("fstp st2");
                    asm("fstp st0");
                    goto L13;
                }
                asm("fld st0, st4");
                asm("fsub st0, st5");
                asm("fxch st0, st5");
                asm("fucom st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    goto L6;
                }
                if(__eflags != 0) {
                    goto L7;
                }
                asm("fxch st0, st5");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    goto L60;
                }
                _t45 = _t45;
                if(__eflags == 0) {
                    goto L8;
                }
                goto L60;
L9:
                asm("fstp st0");
                asm("fstp st4");
                asm("fstp st2");
                asm("fstp st0");
                goto L13;
L8:
                asm("fstp st0");
                asm("fstp st4");
                asm("fstp st2");
                asm("fstp st0");
                goto L13;
L7:
                asm("fstp st0");
                asm("fstp st0");
                asm("fstp st4");
                asm("fstp st2");
                asm("fstp st0");
                goto L13;
L61:
                if(__eflags != 0) {
                    goto L10;
                }
                asm("fld st0, st0");
                asm("fsub st0, st1");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    goto L11;
                }
                if(__eflags != 0) {
                    goto L12;
                }
                asm("fstp st2");
                asm("fstp st0");
                __eflags = _t43 & 4294967295;
                if((_t43 & 4294967295) != 0) {
                    asm("fld1 ");
                    asm("fxch st0, st2");
                } else {
                    asm("fldz ");
                    asm("fxch st0, st2");
                }
                asm("fxam ");
                asm("fnstsw ax");
                asm("fstp st0");
                asm("fxch st0, st1");
                __eflags = _t39 & 4294967295 & 2;
                asm("fabs ");
                if(__eflags != 0) {
                    asm("fchs ");
                }
                asm("fld st0, st2");
                asm("fsub st0, st3");
                asm("fxch st0, st3");
                asm("fucom st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    asm("fstp st3");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    goto L91;
                } else {
                    if(__eflags != 0) {
                        goto L89;
                    }
                    asm("fxch st0, st3");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0 || __eflags != 0) {
                        asm("fld1 ");
                        asm("fxch st0, st3");
                    } else {
                        goto L90;
                    }
L73:
                    asm("fxam ");
                    asm("fnstsw ax");
                    asm("fstp st0");
                    asm("fxch st0, st2");
                    __eflags = _t39 & 4294967295 & 2;
                    asm("fabs ");
                    if((_t39 & 4294967295 & 2) != 0) {
                        asm("fchs ");
                    }
                    asm("fld st0, st3");
                    asm("fmul st0, st3");
                    asm("fld st0, st2");
                    asm("fmul st0, st2");
                    asm("faddp st1, st0");
                    asm("fldz ");
                    asm("fmul st1, st0");
                    asm("fxch st0, st4");
                    asm("fmulp st3, st0");
                    asm("fxch st0, st4");
                    asm("fmulp st1, st0");
                    asm("fsubp st1, st0");
                    asm("fmulp st1, st0");
                    asm("fxch st0, st1");
                    goto L13;
L90:
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
L91:
                    asm("fldz ");
                    asm("fxch st0, st3");
                    asm("fxch st0, st2");
                    asm("fxch st0, st1");
                    goto L73;
                }
L89:
                asm("fstp st3");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                goto L91;
L12:
                asm("fstp st0");
                asm("fstp st4");
                asm("fstp st2");
                asm("fstp st0");
                goto L13;
L11:
                asm("fstp st0");
                asm("fstp st4");
                asm("fstp st2");
                asm("fstp st0");
                goto L13;
L77:
                asm("fstp st5");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st4");
                goto L79;
L31:
                _t45 = _t45;
                if(__eflags != 0) {
                    goto L52;
                }
                asm("fld st0, st4");
                asm("fsub st0, st5");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    goto L53;
                }
                _t45 = _t45;
                if(__eflags != 0) {
                    goto L54;
                }
                asm("fstp st0");
                asm("fstp st0");
                asm("fstp st0");
                __eflags = _t43 & 4294967295;
                if((_t43 & 4294967295) != 0) {
                    asm("fld1 ");
                    asm("fxch st0, st4");
                } else {
                    asm("fldz ");
                    asm("fxch st0, st4");
                }
                asm("fxam ");
                asm("fnstsw ax");
                asm("fstp st0");
                asm("fxch st0, st3");
                __eflags = _t39 & 4294967295 & 2;
                asm("fabs ");
                if(__eflags != 0) {
                    asm("fchs ");
                }
                asm("fld st0, st2");
                asm("fsub st0, st3");
                asm("fxch st0, st3");
                asm("fucom st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    asm("fstp st3");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    goto L96;
                } else {
                    if(__eflags != 0) {
                        goto L94;
                    }
                    asm("fxch st0, st3");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0 || __eflags != 0) {
                        asm("fld1 ");
                        asm("fxch st0, st3");
                    } else {
                        goto L95;
                    }
L43:
                    asm("fxam ");
                    asm("fnstsw ax");
                    asm("fstp st0");
                    asm("fxch st0, st2");
                    __eflags = _t39 & 4294967295 & 2;
                    asm("fabs ");
                    if((_t39 & 4294967295 & 2) != 0) {
                        asm("fchs ");
                    }
                    asm("fld st0, st2");
                    asm("fmul st0, st4");
                    asm("fld st0, st1");
                    asm("fmul st0, st3");
                    asm("faddp st1, st0");
                    asm("fld dword [ecx+0xffffe5e8]");
                    asm("fmul st1, st0");
                    asm("fxch st0, st2");
                    asm("fmulp st5, st0");
                    asm("fxch st0, st3");
                    asm("fmulp st2, st0");
                    asm("fxch st0, st3");
                    asm("fsubrp st1, st0");
                    asm("fmulp st2, st0");
                    goto L13;
L95:
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
L96:
                    asm("fldz ");
                    asm("fxch st0, st3");
                    asm("fxch st0, st2");
                    asm("fxch st0, st1");
                    goto L43;
                }
L94:
                asm("fstp st3");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                goto L96;
L54:
                asm("fxch st0, st4");
                asm("fxch st0, st5");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                goto L55;
L53:
                asm("fxch st0, st4");
                asm("fxch st0, st5");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                goto L55;
            }
            goto L20;
L24:
            asm("fstp st4");
            asm("fxch st0, st2");
            asm("fxch st0, st3");
            asm("fxch st0, st2");
            goto L25;
        }
        _t45 = _t45;
        if(__eflags == 0) {
            asm("fstp st5");
            asm("fstp st3");
            asm("fstp st0");
            asm("fstp st0");
            goto L13;
        }
        goto L19;
L6:
        asm("fstp st0");
        asm("fstp st0");
        asm("fstp st4");
        asm("fstp st2");
        asm("fstp st0");
        goto L13;
L20:
        _t45 = _t45;
        if(__eflags != 0) {
            goto L24;
        }
        asm("fxch st0, st3");
        asm("fucom st4");
        asm("fnstsw ax");
        asm("fstp st4");
        asm("sahf ");
        if(__eflags != 0) {
            goto L25;
        }
        _t45 = _t45;
        if(__eflags != 0) {
            goto L25;
        } else {
            asm("fxch st0, st5");
            asm("fucom st0");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags != 0) {
                asm("fxch st0, st4");
L48:
                asm("fucom st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
L50:
                    asm("fld st0, st4");
                    asm("fsub st0, st5");
                    asm("fstp dword [ebp-0x4]");
                    asm("fld st0, st2");
                    asm("fsub st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st5");
                    asm("fxch st0, st6");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    goto L55;
                }
                _t45 = _t45;
                if(__eflags != 0) {
                    asm("fstp st3");
                    asm("fstp st0");
                    asm("fstp st3");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    goto L85;
                }
                goto L50;
            }
            asm("o16 nop ");
            if(__eflags != 0) {
                goto L47;
            }
            asm("fstp st5");
            asm("fstp st0");
            asm("fstp st1");
L85:
            asm("fxam ");
            asm("fnstsw ax");
            asm("fstp st0");
            __eflags = _t39 & 4294967295 & 2;
            asm("fld dword [ecx+0xffffe5e8]");
            if((_t39 & 4294967295 & 2) != 0) {
                asm("fstp st0");
                asm("fld dword [ecx+0xffffe5ec]");
            }
            asm("fld st0, st0");
            asm("fmulp st3, st0");
            asm("fmulp st1, st0");
            asm("fxch st0, st1");
            goto L13;
L47:
            asm("fxch st0, st4");
            goto L48;
        }
        goto L26;
    } else {
        if(__eflags != 0) {
            goto L16;
        }
        asm("fstp st4");
        asm("fstp st4");
        asm("fstp st0");
        asm("fstp st0");
L13:
        asm("fstp dword [ebp-0x8]");
        asm("fstp dword [ebp-0x8]");
        return _v12;
    }
L16:
    asm("fxch st0, st1");
    goto L17;
}

L08053D00(signed int __edx, _unknown_ __esi, signed int __eflags, intOrPtr _a4)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    signed int _t38;
    _unknown_ _t40;
    _unknown_ _t41;
    _unknown_ _t42;
    _unknown_ _t43;
    _unknown_ _t44;
    _unknown_ _t45;

    __eflags = __eflags;
    _t42 = __esi;
    __edx = __edx;
    __ecx = _a4;
    asm("fld qword [ebp+0xc]");
    asm("fld qword [ebp+0x14]");
    asm("fld qword [ebp+0x1c]");
    asm("fld qword [ebp+0x24]");
    asm("fld st0, st1");
    asm("fabs ");
    asm("fld st0, st1");
    asm("fabs ");
    asm("fucompp ");
    asm("fnstsw ax");
    L08053887();
    asm("sahf ");
    if(__eflags <= 0) {
        asm("fld st0, st0");
        asm("fdiv st0, st2");
        asm("fld st0, st1");
        asm("fmul st0, st1");
        asm("fadd st0, st3");
        asm("fld st0, st4");
        asm("fmul st0, st2");
        asm("fadd st0, st6");
        asm("fdiv st0, st1");
        asm("fxch st0, st2");
        asm("fmul st0, st6");
        asm("fld st0, st5");
        asm("fsubrp st1, st0");
        asm("fdivrp st1, st0");
        asm("fxch st0, st1");
    } else {
        asm("fld st0, st1");
        asm("fdiv st0, st1");
        asm("fld st0, st2");
        asm("fmul st0, st1");
        asm("fadd st0, st2");
        asm("fld st0, st5");
        asm("fmul st0, st2");
        asm("fadd st0, st5");
        asm("fdiv st0, st1");
        asm("fld st0, st5");
        asm("fmulp st3, st0");
        asm("fxch st0, st2");
        asm("fsub st0, st6");
        asm("fdivrp st1, st0");
        asm("fxch st0, st1");
    }
    asm("fucom st0");
    asm("fnstsw ax");
    asm("sahf ");
    if(__eflags != 0) {
        asm("fxch st0, st1");
L17:
        asm("fucom st0");
        asm("fnstsw ax");
        asm("sahf ");
        if(__eflags != 0) {
L19:
            asm("fldz ");
            asm("fxch st0, st4");
            asm("fucom st4");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags != 0) {
                asm("fstp st4");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st2");
L25:
                asm("fld st0, st5");
                asm("fsub st0, st6");
                asm("fst qword [ebp-0x10]");
                asm("fxch st0, st6");
                asm("fucom st0");
                asm("fnstsw ax");
                asm("fxch st0, st6");
                asm("sahf ");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
L30:
                    asm("fld st0, st2");
                    asm("fsub st0, st3");
                    asm("fucom st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
L51:
                        asm("fxch st0, st4");
                        asm("fxch st0, st5");
                        asm("fxch st0, st1");
                        asm("fxch st0, st2");
                        asm("fxch st0, st3");
                        goto L55;
                    }
                    goto L31;
L52:
                    asm("fxch st0, st4");
                    asm("fxch st0, st5");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    goto L55;
                }
L26:
                asm("fld st0, st4");
                asm("fsub st0, st5");
                asm("fxch st0, st5");
                asm("fucom st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    asm("fstp st5");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    asm("fxch st0, st4");
                    goto L79;
                }
                if(__eflags != 0) {
                    goto L77;
                }
                asm("fxch st0, st5");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    goto L30;
                }
                asm("o16 nop ");
                if(__eflags == 0) {
                    goto L78;
                }
                goto L30;
L78:
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st4");
L79:
                asm("fld st0, st3");
                asm("fsub st0, st4");
                asm("fxch st0, st4");
L55:
                asm("fucom st0");
                asm("fnstsw ax");
                asm("fxch st0, st4");
                asm("sahf ");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
L60:
                    asm("fld qword [ebp-0x10]");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0) {
                        goto L9;
                    }
                    goto L61;
L10:
                    asm("fstp st0");
                    asm("fstp st4");
                    asm("fstp st2");
                    asm("fstp st0");
                    goto L13;
                }
                asm("fld st0, st4");
                asm("fsub st0, st5");
                asm("fxch st0, st5");
                asm("fucom st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    goto L6;
                }
                if(__eflags != 0) {
                    goto L7;
                }
                asm("fxch st0, st5");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    goto L60;
                }
                _t42 = _t42;
                if(__eflags == 0) {
                    goto L8;
                }
                goto L60;
L9:
                asm("fstp st0");
                asm("fstp st4");
                asm("fstp st2");
                asm("fstp st0");
                goto L13;
L8:
                asm("fstp st0");
                asm("fstp st4");
                asm("fstp st2");
                asm("fstp st0");
                goto L13;
L7:
                asm("fstp st0");
                asm("fstp st0");
                asm("fstp st4");
                asm("fstp st2");
                asm("fstp st0");
                goto L13;
L61:
                if(__eflags != 0) {
                    goto L10;
                }
                asm("fld st0, st0");
                asm("fsub st0, st1");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    goto L11;
                }
                if(__eflags != 0) {
                    goto L12;
                }
                asm("fstp st2");
                asm("fstp st0");
                __eflags = __edx & 4294967295;
                if((__edx & 4294967295) != 0) {
                    asm("fld1 ");
                    asm("fxch st0, st2");
                } else {
                    asm("fldz ");
                    asm("fxch st0, st2");
                }
                asm("fxam ");
                asm("fnstsw ax");
                asm("fstp st0");
                asm("fxch st0, st1");
                __eflags = _t38 & 4294967295 & 2;
                asm("fabs ");
                if(__eflags != 0) {
                    asm("fchs ");
                }
                asm("fld st0, st2");
                asm("fsub st0, st3");
                asm("fxch st0, st3");
                asm("fucom st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    asm("fstp st3");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    goto L91;
                } else {
                    if(__eflags != 0) {
                        goto L89;
                    }
                    asm("fxch st0, st3");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0 || __eflags != 0) {
                        asm("fld1 ");
                        asm("fxch st0, st3");
                    } else {
                        goto L90;
                    }
L73:
                    asm("fxam ");
                    asm("fnstsw ax");
                    asm("fstp st0");
                    asm("fxch st0, st2");
                    __eflags = _t38 & 4294967295 & 2;
                    asm("fabs ");
                    if((_t38 & 4294967295 & 2) != 0) {
                        asm("fchs ");
                    }
                    asm("fld st0, st3");
                    asm("fmul st0, st3");
                    asm("fld st0, st2");
                    asm("fmul st0, st2");
                    asm("faddp st1, st0");
                    asm("fldz ");
                    asm("fmul st1, st0");
                    asm("fxch st0, st4");
                    asm("fmulp st3, st0");
                    asm("fxch st0, st4");
                    asm("fmulp st1, st0");
                    asm("fsubp st1, st0");
                    asm("fmulp st1, st0");
                    asm("fxch st0, st1");
                    goto L13;
L90:
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
L91:
                    asm("fldz ");
                    asm("fxch st0, st3");
                    asm("fxch st0, st2");
                    asm("fxch st0, st1");
                    goto L73;
                }
L89:
                asm("fstp st3");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                goto L91;
L12:
                asm("fstp st0");
                asm("fstp st4");
                asm("fstp st2");
                asm("fstp st0");
                goto L13;
L11:
                asm("fstp st0");
                asm("fstp st4");
                asm("fstp st2");
                asm("fstp st0");
                goto L13;
L77:
                asm("fstp st5");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                asm("fxch st0, st4");
                goto L79;
L31:
                _t42 = _t42;
                if(__eflags != 0) {
                    goto L52;
                }
                asm("fld st0, st4");
                asm("fsub st0, st5");
                asm("fucomp st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    goto L53;
                }
                _t42 = _t42;
                if(__eflags != 0) {
                    goto L54;
                }
                asm("fstp st0");
                asm("fstp st0");
                asm("fstp st0");
                __eflags = __edx & 4294967295;
                if((__edx & 4294967295) != 0) {
                    asm("fld1 ");
                    asm("fxch st0, st4");
                } else {
                    asm("fldz ");
                    asm("fxch st0, st4");
                }
                asm("fxam ");
                asm("fnstsw ax");
                asm("fstp st0");
                asm("fxch st0, st3");
                __eflags = _t38 & 4294967295 & 2;
                asm("fabs ");
                if(__eflags != 0) {
                    asm("fchs ");
                }
                asm("fld st0, st2");
                asm("fsub st0, st3");
                asm("fxch st0, st3");
                asm("fucom st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
                    asm("fstp st3");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    goto L96;
                } else {
                    if(__eflags != 0) {
                        goto L94;
                    }
                    asm("fxch st0, st3");
                    asm("fucomp st0");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(__eflags != 0 || __eflags != 0) {
                        asm("fld1 ");
                        asm("fxch st0, st3");
                    } else {
                        goto L95;
                    }
L43:
                    asm("fxam ");
                    asm("fnstsw ax");
                    asm("fstp st0");
                    asm("fxch st0, st2");
                    __eflags = _t38 & 4294967295 & 2;
                    asm("fabs ");
                    if((_t38 & 4294967295 & 2) != 0) {
                        asm("fchs ");
                    }
                    asm("fld st0, st2");
                    asm("fmul st0, st4");
                    asm("fld st0, st1");
                    asm("fmul st0, st3");
                    asm("faddp st1, st0");
                    asm("fld dword [ebx+0xffffe5e8]");
                    asm("fmul st1, st0");
                    asm("fxch st0, st2");
                    asm("fmulp st5, st0");
                    asm("fxch st0, st3");
                    asm("fmulp st2, st0");
                    asm("fxch st0, st3");
                    asm("fsubrp st1, st0");
                    asm("fmulp st2, st0");
                    goto L13;
L95:
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
L96:
                    asm("fldz ");
                    asm("fxch st0, st3");
                    asm("fxch st0, st2");
                    asm("fxch st0, st1");
                    goto L43;
                }
L94:
                asm("fstp st3");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                goto L96;
L54:
                asm("fxch st0, st4");
                asm("fxch st0, st5");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                goto L55;
L53:
                asm("fxch st0, st4");
                asm("fxch st0, st5");
                asm("fxch st0, st1");
                asm("fxch st0, st2");
                asm("fxch st0, st3");
                goto L55;
            }
            goto L20;
L24:
            asm("fstp st4");
            asm("fxch st0, st2");
            asm("fxch st0, st3");
            asm("fxch st0, st2");
            goto L25;
        }
        _t42 = _t42;
        if(__eflags == 0) {
            asm("fstp st5");
            asm("fstp st3");
            asm("fstp st0");
            asm("fstp st0");
            goto L13;
        }
        goto L19;
L6:
        asm("fstp st0");
        asm("fstp st0");
        asm("fstp st4");
        asm("fstp st2");
        asm("fstp st0");
        goto L13;
L20:
        _t42 = _t42;
        if(__eflags != 0) {
            goto L24;
        }
        asm("fxch st0, st3");
        asm("fucom st4");
        asm("fnstsw ax");
        asm("fstp st4");
        asm("sahf ");
        if(__eflags != 0) {
            goto L25;
        }
        _t42 = _t42;
        if(__eflags != 0) {
            goto L25;
        } else {
            asm("fxch st0, st5");
            asm("fucom st0");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags != 0) {
                asm("fxch st0, st4");
L48:
                asm("fucom st0");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags != 0) {
L50:
                    asm("fld st0, st4");
                    asm("fsub st0, st5");
                    asm("fstp qword [ebp-0x10]");
                    asm("fld st0, st2");
                    asm("fsub st0, st3");
                    asm("fxch st0, st4");
                    asm("fxch st0, st5");
                    asm("fxch st0, st6");
                    asm("fxch st0, st2");
                    asm("fxch st0, st3");
                    goto L55;
                }
                _t42 = _t42;
                if(__eflags != 0) {
                    asm("fstp st3");
                    asm("fstp st0");
                    asm("fstp st3");
                    asm("fxch st0, st1");
                    asm("fxch st0, st2");
                    goto L85;
                }
                goto L50;
            }
            asm("o16 nop ");
            if(__eflags != 0) {
                goto L47;
            }
            asm("fstp st5");
            asm("fstp st0");
            asm("fstp st1");
L85:
            asm("fxam ");
            asm("fnstsw ax");
            asm("fstp st0");
            __eflags = _t38 & 4294967295 & 2;
            asm("fld dword [ebx+0xffffe5e8]");
            if((_t38 & 4294967295 & 2) != 0) {
                asm("fstp st0");
                asm("fld dword [ebx+0xffffe5ec]");
            }
            asm("fld st0, st0");
            asm("fmulp st3, st0");
            asm("fmulp st1, st0");
            asm("fxch st0, st1");
            goto L13;
L47:
            asm("fxch st0, st4");
            goto L48;
        }
        goto L26;
    } else {
        if(__eflags != 0) {
            goto L16;
        }
        asm("fstp st4");
        asm("fstp st4");
        asm("fstp st0");
        asm("fstp st0");
L13:
        asm("fstp qword [ecx]");
        asm("fstp qword [ecx+0x8]");
        return __ecx;
    }
L16:
    asm("fxch st0, st1");
    goto L17;
}

L080541E0(intOrPtr _a4)
{
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ __ebx;
    intOrPtr _t5;
    _unknown_ _t7;
    _unknown_ _t8;

    _t5 = 0;
    L08053887();
    _t8 = _t7 + 7689;
    __esp = __esp - 12;
    __edx =  *((intOrPtr*)(_t8 + -4));
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

L08054220()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134569728;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134569728;
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

L08054220()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134569728;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134569728;
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
//     698 Register nodes
//    1396 Temporaries nodes
//     121 Casts
//    5871 Statements
//     432 Labels
//     323 Gotos
//     189 Blocks
//   18084 Nodes
//    2601 Assembly nodes
//    1216 Unknown Types


