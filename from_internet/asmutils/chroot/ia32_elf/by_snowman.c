
struct s0 {
    void* f0;
    signed char[83886079] pad83886080;
    unsigned char f5000000;
};

struct s1 {
    signed char[77] pad77;
    signed char f4d;
};

struct s2 {
    signed char[77] pad77;
    unsigned char f4d;
};

struct s3 {
    signed char[77] pad77;
    unsigned char f4d;
};

struct s4 {
    signed char[77] pad77;
    signed char f4d;
};

void fun_8048000(int32_t* ecx, int32_t a2, int32_t a3) {
    int1_t less_or_equal4;
    int32_t eax5;
    int32_t* ebx6;
    int32_t* ebx7;
    int32_t eax8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    void** eax21;
    signed char al22;
    signed char* eax23;
    struct s0* eax24;
    signed char dh25;
    void* tmp8_26;
    uint1_t cf27;
    unsigned char tmp8_28;
    struct s1* ebp29;
    signed char bl30;
    int1_t cf31;
    struct s2* ebp32;
    struct s3* ebp33;
    struct s4* ebp34;

    if (less_or_equal4) {
        *ecx = *ecx + eax5;
        *ebx6 = *ebx7 + eax8;
        *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(al22 + *eax23);
        eax24 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<int32_t>(*eax21));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<int32_t>(eax24));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) + 44);
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) + dh25);
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<int32_t>(eax24));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax24) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax24) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
        eax24->f0 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(eax24->f0)));
        eax24->f5000000 = reinterpret_cast<unsigned char>(eax24->f5000000 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    }
    tmp8_26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_26) < reinterpret_cast<unsigned char>(eax24->f0));
    eax24->f0 = tmp8_26;
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24))) + cf27);
    tmp8_28 = reinterpret_cast<unsigned char>(ebp29->f4d + bl30);
    cf31 = tmp8_28 < ebp32->f4d;
    ebp33->f4d = tmp8_28;
    if (ebp34->f4d && (cf31 = 0, !__intrinsic())) {
        cf31 = 0;
        if (!a3) {
        }
        __asm__("int 0x80");
    }
    __asm__("int 0x80");
    __asm__("das ");
    __asm__("das ");
    if (!cf31) {
    }
}
