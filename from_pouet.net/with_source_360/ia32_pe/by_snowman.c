
struct s0 {
    unsigned char f0;
    unsigned char f1;
};

struct s0* g402104 = reinterpret_cast<struct s0*>(0);

struct s1 {
    unsigned char f0;
    unsigned char f1;
};

void fun_401000(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15) {
    struct s0* edx16;
    unsigned char bl17;
    unsigned char al18;
    struct s1* edx19;
    unsigned char* edx20;

    edx16 = g402104;
    bl17 = 0;
    do {
        al18 = reinterpret_cast<unsigned char>(bl17 << 1);
        if (bl17 >= 0x80) {
            edx16->f0 = al18;
        }
        edx19 = reinterpret_cast<struct s1*>(&edx16->f1);
        edx19->f0 = al18;
        edx20 = &edx19->f1;
        *edx20 = al18;
        edx16 = reinterpret_cast<struct s0*>(edx20 + 1 + 1);
        bl17 = reinterpret_cast<unsigned char>(bl17 + 1);
    } while (bl17);
    return;
}

uint24_t g40213b = 40;

int16_t g40213e = 0;

int32_t g40211c = 0;

int32_t g402120 = 0;

int32_t g402100 = 0;

struct s0* g4020cc = reinterpret_cast<struct s0*>(0);

int32_t GetClientRect = 0x3182;

struct s0* g4020d0 = reinterpret_cast<struct s0*>(0);

int32_t StretchDIBits = 0x3242;

void fun_401020(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15, struct s0* a16, struct s0* a17, struct s0* a18, struct s0* a19, struct s0* a20, struct s0* a21, struct s0* a22, struct s0* a23, struct s0* a24) {
    int32_t v25;
    unsigned char eax26;
    int32_t ebx27;
    signed char al28;
    uint16_t dx29;
    int16_t ax30;
    int16_t ax31;
    uint16_t tmp16_32;
    uint16_t ax33;
    unsigned char ch34;
    int16_t cx35;
    uint16_t ax36;
    unsigned char dh37;
    int32_t ebp38;
    int32_t ebp39;
    int32_t edi40;
    int16_t si41;
    int32_t v42;
    int32_t v43;
    int16_t cx44;
    uint16_t ax45;
    uint16_t ax46;
    uint16_t di47;
    int32_t ebp48;
    int32_t ebp49;
    int32_t ebp50;
    unsigned char* tmp32_51;
    struct s0* v52;
    struct s0* v53;

    v25 = reinterpret_cast<int32_t>(__return_address());
    __asm__("pushad ");
    eax26 = reinterpret_cast<unsigned char>(0);
    ebx27 = 0;
    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&g40213b) + 1) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&g40213b) + 1) - 1);
    *reinterpret_cast<uint16_t*>(&ebx27) = 0;
    do {
        al28 = *reinterpret_cast<signed char*>(&ebx27);
        dx29 = 0xf400;
        do {
            ax30 = reinterpret_cast<signed char>(al28 - 0x80);
            g40213e = ax30;
            dx29 = reinterpret_cast<uint16_t>(dx29 - reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&ax30) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&ax30)))));
            __asm__("fild word [0x40213e]");
            al28 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx27) + 1);
        } while (__intrinsic());
        __asm__("fpatan ");
        __asm__("fimul word [0x40213a]");
        __asm__("fistp word [0x40213e]");
        ax31 = g40213e;
        tmp16_32 = reinterpret_cast<uint16_t>(ax31 + *reinterpret_cast<uint16_t*>(&g40213b));
        ax33 = tmp16_32;
        ch34 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax33) + 1);
        *reinterpret_cast<signed char*>(&cx35) = 0;
        *reinterpret_cast<unsigned char*>(&ax33) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx29) + 1);
        ax36 = reinterpret_cast<uint16_t>(ax33 & 0x707);
        dh37 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ax36) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax36) + 1)) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx29) + 1));
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx29) + 1) >= 0xef) {
            *reinterpret_cast<signed char*>(&cx35) = 80;
        }
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx29) + 1) <= 0xea) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx35) + 1) = reinterpret_cast<unsigned char>(ch34 & 31);
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx35) + 1) <= 3) {
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx29) + 1) >= 0xe9) {
                    __asm__("ror dh, 0x3");
                    dh37 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx29) + 1) + 0x9b);
                    cx35 = reinterpret_cast<int16_t>(cx35 - 1);
                }
                dh37 = reinterpret_cast<unsigned char>(dh37 - 20);
            }
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx29) + 1) <= 0xb4) {
                cx35 = reinterpret_cast<int16_t>(cx35 - 1);
            }
        }
        ebp38 = g40211c;
        *reinterpret_cast<signed char*>(ebx27 + ebp38) = *reinterpret_cast<signed char*>(&cx35);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx29) + 1) = reinterpret_cast<unsigned char>(dh37 + 0x80);
        ebp39 = g402120;
        *reinterpret_cast<unsigned char*>(ebx27 + ebp39) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx29) + 1);
        *reinterpret_cast<uint16_t*>(&ebx27) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx27) + 1);
    } while (*reinterpret_cast<uint16_t*>(&ebx27));
    edi40 = 0x3e800;
    si41 = -100;
    do {
        *reinterpret_cast<int16_t*>(&ebp39) = 0xff60;
        do {
            v42 = ebp39;
            v43 = edi40;
            cx44 = 0x7f40;
            __asm__("cwd ");
            ax45 = 0x1000;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax45) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax45) + 1) - 16);
            dx29 = reinterpret_cast<uint16_t>(dx29 ^ ax45);
            ax46 = reinterpret_cast<uint16_t>(ax45 + ax45);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx29) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx29) + 1) + 36);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax46) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax46) + 1) - 1);
            di47 = ax46;
            while (cx44 = reinterpret_cast<int16_t>(cx44 + *reinterpret_cast<int16_t*>(&ebp39)), dx29 = reinterpret_cast<uint16_t>(dx29 + si41), di47 = reinterpret_cast<uint16_t>(di47 - 0xa0), *reinterpret_cast<uint16_t*>(&ebx27) = di47, *reinterpret_cast<signed char*>(&ebx27) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&cx44) + 1), ebp48 = g40211c, (&eax26)[1] = *reinterpret_cast<unsigned char*>(ebx27 + ebp48), ebp49 = g402120, eax26 = *reinterpret_cast<unsigned char*>(ebx27 + ebp49), ebp39 = ebp39, reinterpret_cast<signed char>((&eax26)[1]) >= reinterpret_cast<signed char>(0)) {
                if (!(&eax26)[1]) {
                    addr_401138_19:
                    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx29) + 1) <= 70) 
                        continue; else 
                        break;
                } else {
                    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx29) + 1) < (&eax26)[1]) 
                        continue;
                    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&dx29) + 1) < reinterpret_cast<signed char>((&eax26)[1])) 
                        goto addr_401138_19;
                }
                eax26 = reinterpret_cast<unsigned char>(eax26 + (&eax26)[1]);
                goto addr_401138_19;
            }
            ebp50 = g402100;
            tmp32_51 = reinterpret_cast<unsigned char*>(((eax26 & 0xff) << 2) + reinterpret_cast<int32_t>(g402104));
            eax26 = *tmp32_51;
            *reinterpret_cast<unsigned char*>(v43 + ebp50) = eax26;
            ebp39 = v42;
            edi40 = v43 - 4;
            *reinterpret_cast<int16_t*>(&ebp39) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp39) + 1);
        } while (*reinterpret_cast<int16_t*>(&ebp39) != 0xa0);
        si41 = reinterpret_cast<int16_t>(si41 + 1);
    } while (si41 != 100);
    __asm__("popad ");
    v52 = g4020cc;
    GetClientRect(v52, 0x4020f0, v25);
    v53 = g4020d0;
    StretchDIBits();
    goto v53;
}

int32_t GlobalAlloc = 0x30be;

struct s0* g40210c = reinterpret_cast<struct s0*>(0);

int32_t GetModuleHandleW = 0x30aa;

struct s0* g4020b4 = reinterpret_cast<struct s0*>(0);

int32_t LoadIconW = 0x31a8;

int32_t g4020b8 = 0;

int32_t LoadCursorW = 0x319a;

int32_t g4020bc = 0;

int32_t RegisterClassW = 0x31e4;

int32_t CreateWindowExW = 0x314a;

int32_t MessageBoxW = 0x31b4;

int32_t GetDC = 0x3192;

int32_t SetStretchBltMode = 0x322e;

int32_t PeekMessageW = 0x31c2;

int32_t g4020d8 = 0;

int32_t TranslateMessage = 0x3202;

int32_t DispatchMessageW = 0x316e;

uint32_t g402108 = 0;

int32_t ReleaseDC = 0x31f6;

int32_t GlobalFree = 0x30cc;

struct s0* g4020dc = reinterpret_cast<struct s0*>(0);

int32_t ExitProcess = 0x309c;

int32_t PostQuitMessage = 0x31d2;

int32_t DefWindowProcW = 0x315c;

void fun_4011c5(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9) {
    struct s0* v10;
    struct s0* eax11;
    int32_t eax12;
    int32_t eax13;
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
    if (!eax11 || ((g40210c = eax11, g402104 = eax11, eax12 = reinterpret_cast<int32_t>(eax11 + 0x3e8), g402100 = eax12, eax13 = eax12 + 0x61a80, g40211c = eax13, g402120 = eax13 + 0x30d40, v14 = reinterpret_cast<struct s0*>(0), eax15 = reinterpret_cast<struct s0*>(GetModuleHandleW(0, 0, 0xf4240, v10)), g4020b4 = eax15, v16 = reinterpret_cast<struct s0*>(0x7f00), v17 = reinterpret_cast<struct s0*>(0), eax18 = reinterpret_cast<int32_t>(LoadIconW(0, 0x7f00, 0, 0, 0xf4240, v10)), g4020b8 = eax18, v19 = reinterpret_cast<struct s0*>(0x7f00), eax20 = reinterpret_cast<int32_t>(LoadCursorW(0)), g4020bc = eax20, eax21 = reinterpret_cast<int32_t>(RegisterClassW(0x4020a4, 0)), eax21 == 0) || (v22 = g4020b4, eax23 = reinterpret_cast<struct s0*>(CreateWindowExW(0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0)), eax23 == 0))) {
        v14 = reinterpret_cast<struct s0*>(16);
        v16 = reinterpret_cast<struct s0*>(0);
        v17 = reinterpret_cast<struct s0*>(0x40204c);
        v19 = reinterpret_cast<struct s0*>(0);
        MessageBoxW();
    } else {
        g4020cc = eax23;
        v24 = eax23;
        eax25 = reinterpret_cast<struct s0*>(GetDC(v24, 0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0));
        g4020d0 = eax25;
        fun_401000(v24, 0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0);
        fun_401020(v24, 0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0, 0x7f00, 0, 0x7f00, 0, 0, 0xf4240, v10, a1, a2);
        v26 = g4020d0;
        SetStretchBltMode(v26, 4, v24, 0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0);
        while (PeekMessageW(0x4020d4, 0, 0, 0, 1, v26, 4, v24, 0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0), zf27 = g4020d8 == 18, !zf27) {
            TranslateMessage(0x4020d4, 0x4020d4, 0, 0, 0, 1, v26, 4, v24, 0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0);
            DispatchMessageW(0x4020d4, 0x4020d4, 0x4020d4, 0, 0, 0, 1, v26, 4, v24, 0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0);
            fun_401020(0x4020d4, 0x4020d4, 0x4020d4, 0, 0, 0, 1, v26, 4, v24, 0, 0x402000, 0x402012, 0x10cf0000, 0x8000, 0x8000, 0x21c, 0x190, 0, 0, v22, 0, 0x4020a4, 0);
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
            fun_401020(edi33, esi34, ebx35, ebp36, v31, v30, v29, v28, v19, v17, v16, v14, 0, 0xf4240, v10, a1, a2, a3, a4, a5, a6, a7, a8, a9);
        }
        DefWindowProcW(v30, v29, v28);
    }
    goto v31;
}

void fun_40136f() {
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
    signed char* eax139;
    signed char* eax140;
    signed char al141;
    signed char* eax142;
    signed char* eax143;
    signed char al144;
    signed char* eax145;
    signed char* eax146;
    signed char al147;
    signed char* eax148;
    signed char* eax149;
    signed char al150;
    signed char* eax151;
    signed char* eax152;
    signed char al153;
    signed char* eax154;
    signed char* eax155;
    signed char al156;
    signed char* eax157;
    signed char* eax158;
    signed char al159;
    signed char* eax160;
    signed char* eax161;
    signed char al162;
    signed char* eax163;
    signed char* eax164;
    signed char al165;
    signed char* eax166;
    signed char* eax167;
    signed char al168;
    signed char* eax169;
    signed char* eax170;
    signed char al171;
    signed char* eax172;
    signed char* eax173;
    signed char al174;
    signed char* eax175;
    signed char* eax176;
    signed char al177;
    signed char* eax178;
    signed char* eax179;
    signed char al180;
    signed char* eax181;
    signed char* eax182;
    signed char al183;
    signed char* eax184;
    signed char* eax185;
    signed char al186;
    signed char* eax187;
    signed char* eax188;
    signed char al189;
    signed char* eax190;
    signed char* eax191;
    signed char al192;
    signed char* eax193;
    signed char* eax194;
    signed char al195;
    signed char* eax196;
    signed char* eax197;
    signed char al198;
    signed char* eax199;
    signed char* eax200;
    signed char al201;
    signed char* eax202;
    signed char* eax203;
    signed char al204;
    signed char* eax205;
    signed char* eax206;
    signed char al207;
    signed char* eax208;
    signed char* eax209;
    signed char al210;
    signed char* eax211;
    signed char* eax212;
    signed char al213;
    signed char* eax214;
    signed char* eax215;
    signed char al216;

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
    *eax139 = reinterpret_cast<signed char>(*eax140 + al141);
    *eax142 = reinterpret_cast<signed char>(*eax143 + al144);
    *eax145 = reinterpret_cast<signed char>(*eax146 + al147);
    *eax148 = reinterpret_cast<signed char>(*eax149 + al150);
    *eax151 = reinterpret_cast<signed char>(*eax152 + al153);
    *eax154 = reinterpret_cast<signed char>(*eax155 + al156);
    *eax157 = reinterpret_cast<signed char>(*eax158 + al159);
    *eax160 = reinterpret_cast<signed char>(*eax161 + al162);
    *eax163 = reinterpret_cast<signed char>(*eax164 + al165);
    *eax166 = reinterpret_cast<signed char>(*eax167 + al168);
    *eax169 = reinterpret_cast<signed char>(*eax170 + al171);
    *eax172 = reinterpret_cast<signed char>(*eax173 + al174);
    *eax175 = reinterpret_cast<signed char>(*eax176 + al177);
    *eax178 = reinterpret_cast<signed char>(*eax179 + al180);
    *eax181 = reinterpret_cast<signed char>(*eax182 + al183);
    *eax184 = reinterpret_cast<signed char>(*eax185 + al186);
    *eax187 = reinterpret_cast<signed char>(*eax188 + al189);
    *eax190 = reinterpret_cast<signed char>(*eax191 + al192);
    *eax193 = reinterpret_cast<signed char>(*eax194 + al195);
    *eax196 = reinterpret_cast<signed char>(*eax197 + al198);
    *eax199 = reinterpret_cast<signed char>(*eax200 + al201);
    *eax202 = reinterpret_cast<signed char>(*eax203 + al204);
    *eax205 = reinterpret_cast<signed char>(*eax206 + al207);
    *eax208 = reinterpret_cast<signed char>(*eax209 + al210);
    *eax211 = reinterpret_cast<signed char>(*eax212 + al213);
    *eax214 = reinterpret_cast<signed char>(*eax215 + al216);
}
