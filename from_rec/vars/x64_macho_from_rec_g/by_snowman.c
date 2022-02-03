
int64_t _exit = 0x100000ef4;

void _exit(int64_t rdi) {
    goto _exit;
}

struct s0 {
    int32_t f0;
    signed char[12] pad16;
    signed char f10;
    signed char[7] pad24;
    int64_t f18;
};

void _func(struct s0* rdi);

int32_t _func2(struct s0* rdi);

int32_t _main() {
    int32_t eax1;

    _func(0x100001100);
    eax1 = _func2(0x100001100);
    return eax1;
}

void _func(struct s0* rdi) {
    rdi->f0 = 1;
    rdi->f10 = 0x6b;
    rdi->f18 = 10;
    return;
}

int32_t _gs1 = 0;

struct s1 {
    int32_t f0;
    signed char[4] pad8;
    int32_t* f8;
};

struct s1* g100001108 = reinterpret_cast<struct s1*>(0);

signed char g100001110 = 0;

int64_t g100001118 = 0;

int32_t _func2(struct s0* rdi) {
    struct s1* rax2;
    struct s1* rax3;
    int32_t* rax4;

    _gs1 = 1;
    g100001108 = reinterpret_cast<struct s1*>(0x100001100);
    g100001110 = 0x6b;
    g100001118 = 10;
    rax2 = g100001108;
    rax2->f0 = 2;
    rax3 = g100001108;
    rax4 = rax3->f8;
    *rax4 = 3;
    return *reinterpret_cast<int32_t*>(&rax4);
}

void start() {
    int64_t rdi1;
    int64_t rdx2;
    int64_t* rcx3;
    int32_t eax4;
    int64_t rdi5;

    rdi1 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(&rdx2) = *reinterpret_cast<int32_t*>(&rdi1) + 1 << 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx2) + 4) = 0;
    rcx3 = reinterpret_cast<int64_t*>(rdx2 + (reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 16));
    while (*rcx3) {
        ++rcx3;
    }
    eax4 = _main();
    *reinterpret_cast<int32_t*>(&rdi5) = eax4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
    _exit(rdi5);
    __asm__("hlt ");
}

int64_t g100001000 = 0;

void fun_100000ef4() {
    goto g100001000;
}
