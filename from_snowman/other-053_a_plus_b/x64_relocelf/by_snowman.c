
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

int64_t f(struct s0* rdi, struct s1* rsi) {
    struct s2* rdi3;
    struct s3* rsi4;
    struct s4* rdi5;
    struct s5* rsi6;
    struct s6* rdi7;
    struct s7* rsi8;
    int64_t v9;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s3*>(&rsi->f4);
    rdi3->f0 = rsi4->f0;
    rdi5 = reinterpret_cast<struct s4*>(&rdi3->f4);
    rsi6 = reinterpret_cast<struct s5*>(&rsi4->f4);
    rdi5->f0 = rsi6->f0;
    rdi7 = reinterpret_cast<struct s6*>(&rdi5->f4);
    rsi8 = reinterpret_cast<struct s7*>(&rsi6->f4);
    __asm__("addsd xmm0, [rbp-0x10]");
    rdi7->f0 = rsi8->f0;
    rdi7->f4 = rsi8->f4;
    return v9;
}
