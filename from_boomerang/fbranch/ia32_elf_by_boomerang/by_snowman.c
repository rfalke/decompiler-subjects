
void call_gmon_start();

int32_t frame_dummy();

int32_t __do_global_ctors_aux();

int32_t _init() {
    int32_t eax1;

    call_gmon_start();
    frame_dummy();
    eax1 = __do_global_ctors_aux();
    return eax1;
}

void fun_804830e();

void call_gmon_start() {
    int32_t eax1;
    int32_t eax2;

    fun_804830e();
    eax1 = *reinterpret_cast<int32_t*>(eax2 + 0x13ae + 28);
    if (eax1) {
        eax1();
    }
    return;
}

int32_t __JCR_END__ = 0;

int32_t __gmon_start__(int32_t a1);

int32_t frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && (eax1 = 0, !1)) {
        eax1 = __gmon_start__(0x80496b8);
    }
    return eax1;
}

int32_t __CTOR_LIST__ = -1;

int32_t __do_global_ctors_aux() {
    int32_t v1;
    int32_t edx2;
    int32_t eax3;
    int32_t* ebx4;

    v1 = edx2;
    eax3 = __CTOR_LIST__;
    ebx4 = reinterpret_cast<int32_t*>(0x80496a8);
    if (eax3 != -1) {
        do {
            --ebx4;
            eax3();
            eax3 = *ebx4;
        } while (eax3 != -1);
    }
    return v1;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804830e() {
    int32_t eax1;
    struct s0* ebp2;

    eax1 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x13ae + 28);
    if (eax1) {
        eax1();
    }
    goto ebp2->f4;
}

int32_t puts = 0x80482a6;

void puts(int32_t a1, void* a2) {
    goto puts;
}

void __do_global_dtors_aux();

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048566(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t scanf = 0x80482b6;

int32_t scanf(int32_t a1, void* a2) {
    goto scanf;
}

int32_t printf = 0x80482d6;

void printf(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, void* a6) {
    goto printf;
}

signed char _edata = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x80496b4);

void __do_global_dtors_aux() {
    int1_t zf1;
    int32_t* eax2;
    int32_t edx3;

    zf1 = _edata == 0;
    if (zf1) {
        eax2 = p_0;
        edx3 = *eax2;
        if (edx3) {
            do {
                p_0 = eax2 + 1;
                edx3();
                eax2 = p_0;
                edx3 = *eax2;
            } while (edx3);
        }
        _edata = 1;
    }
    return;
}

int32_t __libc_start_main = 0x80482c6;

void __libc_start_main(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void fun_804829c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048362() {
}

void __libc_csu_fini() {
    int32_t v1;
    int32_t v2;
    int32_t ebp3;
    int32_t v4;
    int32_t ebx5;
    int32_t v6;
    int32_t eax7;
    int32_t ebx8;
    int32_t edx9;

    v1 = reinterpret_cast<int32_t>(__return_address());
    v2 = ebp3;
    v4 = ebx5;
    v6 = eax7;
    ebx8 = -1;
    if (0) {
        do {
            *reinterpret_cast<int32_t*>(ebx8 * 4 + 0x80495d4)(v6);
            edx9 = ebx8;
            --ebx8;
        } while (edx9);
    }
    fun_8048566(edx9, v4, v2, v1);
}

void fun_8048526() {
}

int32_t g80496c4 = 0;

void fun_80482a6() {
    goto g80496c4;
}

void main() {
    void* v1;
    int32_t eax2;
    int16_t ax3;
    int16_t fpu_status_word4;
    int16_t ax5;
    int16_t fpu_status_word6;
    int16_t ax7;
    int16_t fpu_status_word8;
    int16_t ax9;
    int16_t fpu_status_word10;
    int16_t ax11;
    int16_t fpu_status_word12;
    int16_t ax13;
    int16_t fpu_status_word14;

    v1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    eax2 = scanf("%f", v1);
    __asm__("fld dword [ebp-0x4]");
    __asm__("fstp qword [esp]");
    printf("a is %f, b is %f\n", 0, 0x40140000, eax2, "%f", v1);
    __asm__("fld dword [ebp-0x4]");
    __asm__("fld dword [0x80485cc]");
    __asm__("fxch st0, st1");
    __asm__("fucom st1");
    ax3 = fpu_status_word4;
    __asm__("fstp st1");
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 69) ^ 64)) {
        __asm__("fstp st0");
        puts("Equal", v1);
        __asm__("fld dword [ebp-0x4]");
    }
    __asm__("fld dword [0x80485cc]");
    __asm__("fucomp st1");
    ax5 = fpu_status_word6;
    if ((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) & 69) != 64) {
        __asm__("fstp st0");
        puts("Not Equal", v1);
        __asm__("fld dword [ebp-0x4]");
    }
    __asm__("fld dword [0x80485cc]");
    __asm__("fucomp st1");
    ax7 = fpu_status_word8;
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax7) + 1) & 69)) {
        __asm__("fstp st0");
        puts("Greater", v1);
        __asm__("fld dword [ebp-0x4]");
    }
    __asm__("fld dword [0x80485cc]");
    __asm__("fxch st0, st1");
    __asm__("fucom st1");
    ax9 = fpu_status_word10;
    __asm__("fstp st1");
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax9) + 1) & 1)) {
        __asm__("fstp st0");
        puts("Less or Equal", v1);
        __asm__("fld dword [ebp-0x4]");
    }
    __asm__("fld dword [0x80485cc]");
    __asm__("fucomp st1");
    ax11 = fpu_status_word12;
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax11) + 1) & 1)) {
        __asm__("fstp st0");
        puts("Greater or Equal", v1);
        __asm__("fld dword [ebp-0x4]");
    }
    __asm__("fld dword [0x80485cc]");
    __asm__("fxch st0, st1");
    __asm__("fucompp ");
    ax13 = fpu_status_word14;
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax13) + 1) & 69)) {
        puts("Less", v1);
    }
    return;
}

void fun_80484b6() {
}

void fun_804849a() {
}

void fun_804844e() {
}

void fun_80482b6() {
    goto 0x8048290;
}

void fun_80482d6() {
    goto 0x8048290;
}

int32_t __libc_csu_init() {
    int32_t eax1;
    uint32_t ebx2;

    _init();
    eax1 = 0;
    ebx2 = 0;
    if (!1) {
        do {
            eax1 = reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(ebx2 * 4 + 0x80495d4)());
            ++ebx2;
        } while (ebx2 < 0);
    }
    return eax1;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    __libc_start_main(main, __return_address(), esp1, __libc_csu_init, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_80482c6() {
    goto 0x8048290;
}
