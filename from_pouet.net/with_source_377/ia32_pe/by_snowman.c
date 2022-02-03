
struct s0 {
    signed char f0;
    signed char f1;
};

struct s0* g402104 = reinterpret_cast<struct s0*>(0);

struct s1 {
    signed char f0;
    signed char f1;
};

void fun_401000(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15) {
    struct s0* edx16;
    signed char bl17;
    struct s1* edx18;
    signed char* edx19;

    edx16 = g402104;
    bl17 = 0;
    do {
        edx16->f0 = bl17;
        edx18 = reinterpret_cast<struct s1*>(&edx16->f1);
        edx18->f0 = bl17;
        edx19 = &edx18->f1;
        *edx19 = bl17;
        edx16 = reinterpret_cast<struct s0*>(edx19 + 1 + 1);
        bl17 = reinterpret_cast<signed char>(bl17 + 1);
    } while (bl17);
    return;
}

struct s2 {
    signed char f0;
    signed char[1279] pad1280;
    signed char f500;
};

struct s2* g402118 = reinterpret_cast<struct s2*>(0);

struct s3 {
    signed char[200000] pad200000;
    signed char f30d40;
};

struct s3* g40211c = reinterpret_cast<struct s3*>(0);

int32_t fun_401017(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15) {
    int32_t ecx16;
    signed char* esi17;
    struct s2* edi18;
    void* ebx19;
    void* edi20;
    struct s2* esi21;
    uint16_t dx22;
    int16_t bx23;
    uint16_t dx24;
    struct s3* esi25;

    ecx16 = 0xf00;
    esi17 = reinterpret_cast<signed char*>(0x402136);
    edi18 = g402118;
    do {
        edi18->f0 = *esi17;
        ++esi17;
        edi18 = reinterpret_cast<struct s2*>(&edi18->pad1280);
        --ecx16;
    } while (ecx16);
    ebx19 = reinterpret_cast<void*>(0);
    edi20 = reinterpret_cast<void*>(0);
    do {
        esi21 = g402118;
        dx22 = 0x4fb;
        if (*reinterpret_cast<unsigned char*>(&ebx19) <= 0xfb && (*reinterpret_cast<unsigned char*>(&ebx19) >= *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx22) + 1) && (*reinterpret_cast<unsigned char*>(&bx23) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx19) >> 2), *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&bx23) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx19) + 1) >> 2), *reinterpret_cast<uint16_t*>(&edi20) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint16_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&bx23) + 1)) << 6) + bx23), *reinterpret_cast<uint16_t*>(&ebx19) = *reinterpret_cast<uint16_t*>(&ebx19), reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi21) + reinterpret_cast<int32_t>(edi20) - 0x21c4) & 0xfb) == 0)))))) {
            dx24 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx19) & 0xf0f);
            *reinterpret_cast<signed char*>(&dx24) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&dx24) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&dx24) + 1));
            dx22 = reinterpret_cast<uint16_t>(dx24 << 2);
        }
        esi25 = g40211c;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi25) + reinterpret_cast<int32_t>(ebx19)) = *reinterpret_cast<unsigned char*>(&dx22);
        *reinterpret_cast<uint16_t*>(&ebx19) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx19) - 1);
    } while (*reinterpret_cast<uint16_t*>(&ebx19));
    return 0;
}

struct s4 {
    signed char[1280] pad1280;
    signed char f500;
};

struct s4* g402100 = reinterpret_cast<struct s4*>(0);

struct s0* g4020cc = reinterpret_cast<struct s0*>(0);

int32_t GetClientRect = 0x4182;

struct s0* g4020d0 = reinterpret_cast<struct s0*>(0);

int32_t StretchDIBits = 0x4242;

void fun_401088(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15, struct s0* a16, struct s0* a17, struct s0* a18, struct s0* a19, struct s0* a20, struct s0* a21, struct s0* a22, struct s0* a23, struct s0* a24) {
    int32_t v25;
    signed char* eax26;
    int32_t ebx27;
    int32_t ecx28;
    void* edx29;
    void* bp30;
    signed char al31;
    void* edi32;
    unsigned char* tmp32_33;
    struct s2* esi34;
    int32_t ecx35;
    signed char* tmp32_36;
    signed char* esi37;
    signed char* tmp32_38;
    signed char* edi39;
    signed char* tmp32_40;
    struct s0* v41;
    struct s0* v42;

    v25 = reinterpret_cast<int32_t>(__return_address());
    __asm__("pushad ");
    eax26 = reinterpret_cast<signed char*>(0);
    ebx27 = 0;
    ecx28 = 0;
    *reinterpret_cast<int16_t*>(&ebx27) = 0x400;
    do {
        *reinterpret_cast<void**>(&ecx28) = reinterpret_cast<void*>(reinterpret_cast<int16_t>(*reinterpret_cast<void**>(&ecx28)) + 1);
        *reinterpret_cast<void**>(0x402136 + ebx27) = reinterpret_cast<void*>(reinterpret_cast<int16_t>(*reinterpret_cast<void**>(0x402136 + ebx27)) + reinterpret_cast<int16_t>(*reinterpret_cast<void**>(&ecx28)));
        __asm__("fild word [esi+ebx]");
        __asm__("fidiv word [0x402130]");
        __asm__("fsincos ");
        __asm__("fstp dword [esi+ebx+0x1f]");
        __asm__("fstp dword [esi+ebx+0x23]");
        *reinterpret_cast<signed char*>(&ebx27) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ebx27) + 8);
    } while (!__intrinsic());
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx27) + 1) = 3;
    edx29 = reinterpret_cast<void*>(0);
    do {
        bp30 = reinterpret_cast<void*>(0x80);
        while (1) {
            al31 = *reinterpret_cast<signed char*>(&edx29);
            *reinterpret_cast<signed char*>(&ebx27) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx28) + 1);
            do {
                *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(static_cast<int16_t>(reinterpret_cast<signed char>(al31 + 0x80)));
                *reinterpret_cast<void**>(0x402136 + ebx27) = *reinterpret_cast<void**>(&eax26);
                al31 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx29) + 1);
                *reinterpret_cast<int16_t*>(&ebx27) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx27) + 1) + 1);
                if (__intrinsic()) {
                    *reinterpret_cast<signed char*>(&ebx27) = 0;
                }
            } while (__intrinsic());
            *reinterpret_cast<void**>(0x402136 + ebx27) = bp30;
            *reinterpret_cast<signed char*>(&ebx27) = 0;
            do {
                __asm__("fild word [esi+ebx]");
                *reinterpret_cast<int16_t*>(&ebx27) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx27) + 1) + 1);
            } while (!__intrinsic());
            do {
                __asm__("fld st1");
                __asm__("fmul dword [esi+edi]");
                __asm__("fld st3");
                __asm__("fmul dword [esi+edi+0x4]");
                __asm__("faddp st1, st0");
                __asm__("fxch st0, st2");
                __asm__("fmul dword [esi+edi+0x4]");
                __asm__("fxch st0, st3");
                __asm__("fmul dword [esi+edi]");
                __asm__("fsubp st3, st0");
                __asm__("fxch st0, st1");
            } while (__intrinsic());
            __asm__("fiadd word [0x402132]");
            __asm__("fidiv word [0x402134]");
            __asm__("fdiv st2, st0");
            __asm__("fdivp st1, st0");
            __asm__("fistp dword [esi+ebx]");
            __asm__("fistp dword [esi+ebx]");
            edi32 = reinterpret_cast<void*>(reinterpret_cast<int16_t>(*reinterpret_cast<void**>(0x402136 + ebx27)) * 0x140 + reinterpret_cast<int16_t>(*reinterpret_cast<void**>(0x402136 + ebx27)));
            tmp32_33 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx29) + reinterpret_cast<int32_t>(g40211c));
            esi34 = g402118;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi34) + reinterpret_cast<int32_t>(edi32) + 0x7da0) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi34) + reinterpret_cast<int32_t>(edi32) + 0x7da0) + reinterpret_cast<unsigned char>(*tmp32_33 >> 5));
            do {
                *reinterpret_cast<int16_t*>(&edx29) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edx29) + 1);
                if (*reinterpret_cast<int16_t*>(&edx29)) 
                    break;
                bp30 = reinterpret_cast<void*>(-reinterpret_cast<int16_t>(bp30));
            } while (__intrinsic());
            break;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx28) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx28) + 1) + 2);
    } while (!__intrinsic());
    ecx35 = 0xfa00;
    tmp32_36 = &g402118->f500;
    esi37 = tmp32_36;
    tmp32_38 = &g402100->f500;
    edi39 = tmp32_38;
    do {
        *reinterpret_cast<signed char*>(&eax26) = *esi37;
        *esi37 = 0;
        tmp32_40 = reinterpret_cast<signed char*>(((reinterpret_cast<uint32_t>(eax26) & 0xff) << 2) + reinterpret_cast<int32_t>(g402104));
        eax26 = tmp32_40;
        *edi39 = *eax26;
        ++esi37;
        edi39 = edi39 + 4;
        --ecx35;
    } while (ecx35);
    __asm__("popad ");
    v41 = g4020cc;
    GetClientRect(v41, 0x4020f0, v25);
    v42 = g4020d0;
    StretchDIBits();
    goto v42;
}

int32_t GlobalAlloc = 0x40be;

struct s0* g40210c = reinterpret_cast<struct s0*>(0);

int32_t GetModuleHandleW = 0x40aa;

struct s0* g4020b4 = reinterpret_cast<struct s0*>(0);

int32_t LoadIconW = 0x41a8;

int32_t g4020b8 = 0;

int32_t LoadCursorW = 0x419a;

int32_t g4020bc = 0;

int32_t RegisterClassW = 0x41e4;

int32_t CreateWindowExW = 0x414a;

int32_t MessageBoxW = 0x41b4;

int32_t GetDC = 0x4192;

int32_t SetStretchBltMode = 0x422e;

int32_t PeekMessageW = 0x41c2;

int32_t g4020d8 = 0;

int32_t TranslateMessage = 0x4202;

int32_t DispatchMessageW = 0x416e;

uint32_t g402108 = 0;

int32_t ReleaseDC = 0x41f6;

int32_t GlobalFree = 0x40cc;

struct s0* g4020dc = reinterpret_cast<struct s0*>(0);

int32_t ExitProcess = 0x409c;

int32_t PostQuitMessage = 0x41d2;

int32_t DefWindowProcW = 0x415c;

void fun_4011f5(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9) {
    struct s0* v10;
    struct s0* eax11;
    struct s4* eax12;
    struct s3* eax13;
    struct s0* v14;
    struct s0* eax15;
    struct s0* v16;
    struct s0* v17;
    int32_t eax18;
    struct s0* v19;
    int32_t eax20;
    int32_t eax21;
    struct s0* v22;
    struct s0* eax23;
    struct s0* v24;
    struct s0* eax25;
    struct s0* v26;
    int1_t zf27;
    struct s0* v28;
    struct s0* v29;
    struct s0* v30;
    struct s0* v31;
    int1_t cf32;
    struct s0* edi33;
    struct s0* esi34;
    struct s0* ebx35;
    struct s0* ebp36;

    v10 = reinterpret_cast<struct s0*>(__return_address());
    eax11 = reinterpret_cast<struct s0*>(GlobalAlloc(0, 0xf4240, v10));
    if (!eax11 || ((g40210c = eax11, g402104 = eax11, eax12 = reinterpret_cast<struct s4*>(eax11 + 0x3e8), g402100 = eax12, eax13 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(eax12) + 0x61a80), g40211c = eax13, g402118 = reinterpret_cast<struct s2*>(&eax13->f30d40), v14 = reinterpret_cast<struct s0*>(0), eax15 = reinterpret_cast<struct s0*>(GetModuleHandleW(0, 0, 0xf4240, v10)), g4020b4 = eax15, v16 = reinterpret_cast<struct s0*>(0x7f00), v17 = reinterpret_cast<struct s0*>(0), eax18 = reinterpret_cast<int32_t>(LoadIconW(0, 0x7f00, 0, 0, 0xf4240, v10)), g4020b8 = eax18, v19 = reinterpret_cast<struct s0*>(0x7f00), eax20 = reinterpret_cast<int32_t>(LoadCursorW(0)), g4020bc = eax20, eax21 = reinterpret_cast<int32_t>(RegisterClassW(0x4020a4, 0)), eax21 == 0) || (v22 = g4020b4, eax23 = reinterpret_cast<struct s0*>(CreateWindowExW(0, "D", "<", 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0)), eax23 == 0))) {
        v14 = reinterpret_cast<struct s0*>(16);
        v16 = reinterpret_cast<struct s0*>(0);
        v17 = reinterpret_cast<struct s0*>("S");
        v19 = reinterpret_cast<struct s0*>(0);
        MessageBoxW();
    } else {
        g4020cc = eax23;
        v24 = eax23;
        eax25 = reinterpret_cast<struct s0*>(GetDC(v24, 0, "D", "<", 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0));
        g4020d0 = eax25;
        fun_401000(v24, 0, "D", "<", 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0);
        fun_401017(v24, 0, "D", "<", 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0);
        fun_401088(v24, 0, "D", "<", 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0, 0x7f00, 0, 0x7f00, 0, 0, 0xf4240, v10, a1, a2);
        v26 = g4020d0;
        SetStretchBltMode(v26, 4, v24, 0, "D", "<", 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0);
        while (PeekMessageW(0x4020d4, 0, 0, 0, 1, v26, 4, v24, 0, "D", "<", 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0), zf27 = g4020d8 == 18, !zf27) {
            TranslateMessage(0x4020d4, 0x4020d4, 0, 0, 0, 1, v26, 4, v24, 0, "D", "<", 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0);
            DispatchMessageW(0x4020d4, 0x4020d4, 0x4020d4, 0, 0, 0, 1, v26, 4, v24, 0, "D", "<", 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0);
            fun_401088(0x4020d4, 0x4020d4, 0x4020d4, 0, 0, 0, 1, v26, 4, v24, 0, "D", "<", 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0);
            ++g402108;
        }
    }
    v28 = g4020d0;
    v29 = g4020cc;
    ReleaseDC();
    v30 = g40210c;
    GlobalFree();
    v31 = g4020dc;
    ExitProcess();
    if (v29 == 2) {
        PostQuitMessage();
    } else {
        if (v29 == 5 && (cf32 = g402108 < 10, !cf32)) {
            fun_401088(edi33, esi34, ebx35, ebp36, v31, v30, v29, v28, v19, v17, v16, v14, 0, 0xf4240, v10, a1, a2, a3, a4, a5, a6, a7, a8, a9);
        }
        DefWindowProcW(v30, v29, v28);
    }
    goto v31;
}

void fun_4013a4() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    signed char* eax25;
    signed char* eax26;
    signed char al27;
    signed char* eax28;
    signed char* eax29;
    signed char al30;
    signed char* eax31;
    signed char* eax32;
    signed char al33;
    signed char* eax34;
    signed char* eax35;
    signed char al36;
    signed char* eax37;
    signed char* eax38;
    signed char al39;
    signed char* eax40;
    signed char* eax41;
    signed char al42;
    signed char* eax43;
    signed char* eax44;
    signed char al45;
    signed char* eax46;
    signed char* eax47;
    signed char al48;
    signed char* eax49;
    signed char* eax50;
    signed char al51;
    signed char* eax52;
    signed char* eax53;
    signed char al54;
    signed char* eax55;
    signed char* eax56;
    signed char al57;
    signed char* eax58;
    signed char* eax59;
    signed char al60;
    signed char* eax61;
    signed char* eax62;
    signed char al63;
    signed char* eax64;
    signed char* eax65;
    signed char al66;
    signed char* eax67;
    signed char* eax68;
    signed char al69;
    signed char* eax70;
    signed char* eax71;
    signed char al72;
    signed char* eax73;
    signed char* eax74;
    signed char al75;
    signed char* eax76;
    signed char* eax77;
    signed char al78;
    signed char* eax79;
    signed char* eax80;
    signed char al81;
    signed char* eax82;
    signed char* eax83;
    signed char al84;
    signed char* eax85;
    signed char* eax86;
    signed char al87;
    signed char* eax88;
    signed char* eax89;
    signed char al90;
    signed char* eax91;
    signed char* eax92;
    signed char al93;
    signed char* eax94;
    signed char* eax95;
    signed char al96;
    signed char* eax97;
    signed char* eax98;
    signed char al99;
    signed char* eax100;
    signed char* eax101;
    signed char al102;
    signed char* eax103;
    signed char* eax104;
    signed char al105;
    signed char* eax106;
    signed char* eax107;
    signed char al108;
    signed char* eax109;
    signed char* eax110;
    signed char al111;
    signed char* eax112;
    signed char* eax113;
    signed char al114;
    signed char* eax115;
    signed char* eax116;
    signed char al117;
    signed char* eax118;
    signed char* eax119;
    signed char al120;
    signed char* eax121;
    signed char* eax122;
    signed char al123;
    signed char* eax124;
    signed char* eax125;
    signed char al126;
    signed char* eax127;
    signed char* eax128;
    signed char al129;
    signed char* eax130;
    signed char* eax131;
    signed char al132;
    signed char* eax133;
    signed char* eax134;
    signed char al135;
    signed char* eax136;
    signed char* eax137;
    signed char al138;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
    *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
    *eax28 = reinterpret_cast<signed char>(*eax29 + al30);
    *eax31 = reinterpret_cast<signed char>(*eax32 + al33);
    *eax34 = reinterpret_cast<signed char>(*eax35 + al36);
    *eax37 = reinterpret_cast<signed char>(*eax38 + al39);
    *eax40 = reinterpret_cast<signed char>(*eax41 + al42);
    *eax43 = reinterpret_cast<signed char>(*eax44 + al45);
    *eax46 = reinterpret_cast<signed char>(*eax47 + al48);
    *eax49 = reinterpret_cast<signed char>(*eax50 + al51);
    *eax52 = reinterpret_cast<signed char>(*eax53 + al54);
    *eax55 = reinterpret_cast<signed char>(*eax56 + al57);
    *eax58 = reinterpret_cast<signed char>(*eax59 + al60);
    *eax61 = reinterpret_cast<signed char>(*eax62 + al63);
    *eax64 = reinterpret_cast<signed char>(*eax65 + al66);
    *eax67 = reinterpret_cast<signed char>(*eax68 + al69);
    *eax70 = reinterpret_cast<signed char>(*eax71 + al72);
    *eax73 = reinterpret_cast<signed char>(*eax74 + al75);
    *eax76 = reinterpret_cast<signed char>(*eax77 + al78);
    *eax79 = reinterpret_cast<signed char>(*eax80 + al81);
    *eax82 = reinterpret_cast<signed char>(*eax83 + al84);
    *eax85 = reinterpret_cast<signed char>(*eax86 + al87);
    *eax88 = reinterpret_cast<signed char>(*eax89 + al90);
    *eax91 = reinterpret_cast<signed char>(*eax92 + al93);
    *eax94 = reinterpret_cast<signed char>(*eax95 + al96);
    *eax97 = reinterpret_cast<signed char>(*eax98 + al99);
    *eax100 = reinterpret_cast<signed char>(*eax101 + al102);
    *eax103 = reinterpret_cast<signed char>(*eax104 + al105);
    *eax106 = reinterpret_cast<signed char>(*eax107 + al108);
    *eax109 = reinterpret_cast<signed char>(*eax110 + al111);
    *eax112 = reinterpret_cast<signed char>(*eax113 + al114);
    *eax115 = reinterpret_cast<signed char>(*eax116 + al117);
    *eax118 = reinterpret_cast<signed char>(*eax119 + al120);
    *eax121 = reinterpret_cast<signed char>(*eax122 + al123);
    *eax124 = reinterpret_cast<signed char>(*eax125 + al126);
    *eax127 = reinterpret_cast<signed char>(*eax128 + al129);
    *eax130 = reinterpret_cast<signed char>(*eax131 + al132);
    *eax133 = reinterpret_cast<signed char>(*eax134 + al135);
    *eax136 = reinterpret_cast<signed char>(*eax137 + al138);
}
