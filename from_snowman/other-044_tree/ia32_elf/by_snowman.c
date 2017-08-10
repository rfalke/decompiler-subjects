
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_8048330();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x157b - 4)) {
        fun_8048330();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0x8048336;

void fun_8048330() {
    goto __gmon_start__;
}

int32_t rand(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 3;
    if (!0 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = rand(0x8049880, v2);
        return eax3;
    }
}

struct s0 {
    int32_t f0;
    struct s0* f4;
    struct s0* f8;
};

void insert(struct s0** a1, struct s0* a2) {
    struct s0** edx3;
    struct s0** edx4;

    if (*a1) {
        if (a2->f0 >= (*a1)->f0) {
            if (a2->f0 > (*a1)->f0) {
                edx3 = &(*a1)->f4;
                insert(edx3, a2);
            }
        } else {
            edx4 = &(*a1)->f8;
            insert(edx4, a2);
        }
    } else {
        *a1 = a2;
    }
    return;
}

struct s1 {
    struct s0* f0;
    struct s1* f4;
    struct s1* f8;
};

void fun_8048310(int32_t a1, struct s0* a2);

void printout(struct s1* a1, struct s0* a2) {
    struct s1* v3;
    struct s0* v4;
    struct s0* v5;
    struct s1* v6;

    if (a1->f8) {
        v3 = a1->f8;
        printout(v3, v4);
    }
    v5 = a1->f0;
    fun_8048310("%d\n", v5);
    if (a1->f4) {
        v6 = a1->f4;
        printout(v6, v5);
    }
    return;
}

int32_t printf = 0x8048316;

void fun_8048310(int32_t a1, struct s0* a2) {
    goto printf;
}

int32_t __libc_start_main = 0x8048346;

void fun_8048340(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t malloc = 0x8048326;

struct s0* fun_8048320(int32_t a1, struct s0* a2) {
    goto malloc;
}

int32_t rand = 0x8048356;

int32_t fun_8048350(int32_t a1, struct s0* a2) {
    goto rand;
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_804830c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t fun_80483ca() {
    int32_t eax1;

    if (!0 || 1) {
        return 0;
    } else {
        eax1 = rand(0x8049880, 0);
        return eax1;
    }
}

signed char __TMC_END__ = 0;

int32_t fun_8048407() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

int32_t __JCR_END__ = 0;

void frame_dummy() {
    int32_t eax1;
    int32_t v2;

    eax1 = __JCR_END__;
    if (!eax1 || 1) {
        goto 0x80483d0;
    } else {
        rand(0x8049768, v2);
        goto 0x80483d0;
    }
}

void __libc_csu_init(int32_t a1, int32_t a2, int32_t a3) {
    int32_t edi4;
    int32_t ebx5;
    int32_t ebx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t esi9;

    edi4 = 0;
    __x86_get_pc_thunk_bx();
    ebx5 = ebx6 + 0x12ad;
    ebp7 = a1;
    _init();
    esi8 = ebx5 - 0xf4 - (ebx5 - 0xf8) >> 2;
    if (esi8) {
        esi9 = esi8;
        do {
            *reinterpret_cast<int32_t*>(ebx5 + edi4 * 4 - 0xf8)(ebp7, a2, a3);
            ++edi4;
        } while (edi4 != esi9);
    }
    return;
}

void fun_8048601() {
    return;
}

int32_t g8049860 = 0;

void fun_8048336() {
    goto g8049860;
}

void fun_8048316() {
    goto 0x8048300;
}

void main() {
    void* esp1;
    int32_t v2;
    struct s0* v3;
    struct s0* eax4;
    int32_t eax5;
    struct s0*** esp6;

    esp1 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 32);
    v2 = 1;
    while (v2 <= 10) {
        eax4 = fun_8048320(12, v3);
        eax4->f4 = reinterpret_cast<struct s0*>(0);
        eax4->f8 = eax4->f4;
        eax5 = fun_8048350(12, v3);
        esp6 = reinterpret_cast<struct s0***>(reinterpret_cast<uint32_t>(esp1) - 4 + 4 - 4 + 4);
        eax4->f0 = eax5;
        v3 = eax4;
        insert(esp6 + 5, v3);
        esp1 = reinterpret_cast<void*>(esp6 - 1 + 1);
        ++v2;
    }
    printout(0, v3);
    return;
}

void fun_8048346() {
    goto 0x8048300;
}

void fun_8048326() {
    goto 0x8048300;
}

void fun_8048356() {
    goto 0x8048300;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048340(main, __return_address(), esp1, __libc_csu_init, 0x8048610, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}
