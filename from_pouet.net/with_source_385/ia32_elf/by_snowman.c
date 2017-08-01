
void fun_80489d4();

void call_gmon_start() {
    int32_t eax1;
    int32_t v2;

    fun_80489d4();
    eax1 = *reinterpret_cast<int32_t*>(v2 + 0x1a84 + 0x6c);
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
        eax1 = __gmon_start__(0x804a454);
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
    ebx4 = reinterpret_cast<int32_t*>(0x804a444);
    if (eax3 != -1) {
        do {
            --ebx4;
            eax3();
            eax3 = *ebx4;
        } while (eax3 != -1);
    }
    return v1;
}

/* completed.1 */
signed char completed_1 = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x804a450);

void __do_global_dtors_aux() {
    int1_t zf1;
    int32_t* eax2;
    int32_t edx3;

    zf1 = completed_1 == 0;
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
        completed_1 = 1;
    }
    return;
}

int32_t MikMod_strerror = 0x804888a;

int32_t MikMod_strerror(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto MikMod_strerror;
}

int32_t fprintf = 0x804885a;

void fprintf(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto fprintf;
}

int32_t exit = 0x804892a;

void exit(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto exit;
}

int32_t Player_Load = 0x804896a;

int32_t Player_Load(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto Player_Load;
}

int32_t printf = 0x80488da;

void printf(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto printf;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80489d4() {
    int32_t eax1;
    struct s0* ebp2;

    eax1 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1a84 + 0x6c);
    if (eax1) {
        eax1();
    }
    goto ebp2->f4;
}

int32_t Player_Start = 0x804894a;

void Player_Start(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto Player_Start;
}

int32_t MikMod_Update = 0x804893a;

void MikMod_Update() {
    goto MikMod_Update;
}

struct s2 {
    signed char[8] pad8;
    int32_t f8;
    signed char[36] pad48;
    int32_t f48;
    signed char[4] pad56;
    int32_t f56;
};

struct s1 {
    signed char[140] pad140;
    struct s2* f140;
};

int32_t XClearWindow = 0x804895a;

void XClearWindow(struct s1* a1, int32_t a2) {
    goto XClearWindow;
}

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048df4() {
    struct s3* ebp1;

    __do_global_dtors_aux();
    goto ebp1->f4;
}

int32_t XMapWindow = 0x804883a;

void XMapWindow(struct s1* a1, int32_t a2) {
    goto XMapWindow;
}

struct s4 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t XLoadQueryFont = 0x80488ca;

struct s4* XLoadQueryFont(struct s1* a1, int32_t a2) {
    goto XLoadQueryFont;
}

int32_t XSetFont = 0x804891a;

void XSetFont(struct s1* a1, int32_t a2, int32_t a3) {
    goto XSetFont;
}

int32_t strlen = 0x804889a;

int32_t strlen(int32_t a1) {
    goto strlen;
}

int32_t XCreateSimpleWindow = 0x804886a;

int32_t XCreateSimpleWindow(struct s1* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    goto XCreateSimpleWindow;
}

int32_t sin = 0x804897a;

void sin() {
    goto sin;
}

struct s1* XOpenDisplay(int32_t a1);

struct s1* dis = reinterpret_cast<struct s1*>(0);

int32_t win = 0;

int32_t colormap = 0;

int32_t XCreateGC(struct s1* a1, int32_t a2, int32_t a3, int32_t a4);

int32_t green_gc = 0;

void XParseColor(struct s1* a1, int32_t a2, int32_t a3, int32_t a4);

void XAllocColor(struct s1* a1, int32_t a2, int32_t a3, int32_t a4);

int32_t green_col = 0;

void XSetForeground(struct s1* a1, int32_t a2, int32_t a3, int32_t a4);

void init(int32_t a1, int32_t a2) {
    struct s1* eax3;
    struct s1* eax4;
    int32_t v5;
    struct s1* eax6;
    int32_t v7;
    struct s1* v8;
    int32_t eax9;
    int32_t v10;
    struct s1* v11;
    struct s1* eax12;
    int32_t v13;
    struct s1* v14;
    int32_t eax15;
    int32_t v16;
    struct s1* v17;
    int32_t v18;
    struct s1* v19;
    int32_t v20;
    int32_t v21;
    struct s1* v22;

    eax3 = XOpenDisplay(0);
    dis = eax3;
    eax4 = dis;
    v5 = eax4->f140->f56;
    eax6 = dis;
    v7 = eax6->f140->f8;
    v8 = dis;
    eax9 = XCreateSimpleWindow(v8, v7, 0, 0, a1, a2, 0, 0, v5);
    win = eax9;
    v10 = win;
    v11 = dis;
    XMapWindow(v11, v10);
    eax12 = dis;
    colormap = eax12->f140->f48;
    v13 = win;
    v14 = dis;
    eax15 = XCreateGC(v14, v13, 0, 0);
    green_gc = eax15;
    v16 = colormap;
    v17 = dis;
    XParseColor(v17, v16, "#6eff00", 0x804a508);
    v18 = colormap;
    v19 = dis;
    XAllocColor(v19, v18, 0x804a508, 0x804a508);
    v20 = green_col;
    v21 = green_gc;
    v22 = dis;
    XSetForeground(v22, v21, v20, 0x804a508);
    return;
}

void FontInit(int32_t a1, int32_t a2) {
    struct s1* v3;
    struct s4* eax4;
    int32_t v5;
    int32_t v6;
    struct s1* v7;

    v3 = dis;
    eax4 = XLoadQueryFont(v3, a1);
    v5 = eax4->f4;
    v6 = green_gc;
    v7 = dis;
    XSetFont(v7, v6, v5);
    return;
}

void MikMod_RegisterAllDrivers();

void MikMod_RegisterAllLoaders();

int32_t MikMod_Init(int32_t a1);

int32_t MikMod_errno = 0;

int32_t stderr = 0;

void MikmodInit() {
    int32_t eax1;
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t eax5;
    int32_t v6;
    int32_t v7;
    int32_t eax8;
    int32_t v9;
    int32_t eax10;

    MikMod_RegisterAllDrivers();
    MikMod_RegisterAllLoaders();
    eax1 = MikMod_Init(0x8048e10);
    if (eax1) {
        v2 = MikMod_errno;
        eax5 = MikMod_strerror(v2, v3, v4, 0x8048c1c);
        v6 = stderr;
        fprintf(v6, "MikMod: %s\n", eax5, 0x8048c1c);
        exit(1, "MikMod: %s\n", eax5, 0x8048c1c);
    }
    v7 = 0x80;
    eax8 = Player_Load("ting.mod", 0x80, 0, 0x8048c1c);
    if (!eax8) {
        v9 = MikMod_errno;
        eax10 = MikMod_strerror(v9, 0x80, 0, 0x8048c1c);
        v7 = eax10;
        printf("MikMod Error: %s\n", v7, 0, 0x8048c1c);
        exit(1, v7, 0, 0x8048c1c);
    }
    Player_Start(eax8, v7, 0, 0x8048c1c);
    return;
}

int32_t MikMod_RegisterAllDrivers = 0x80488ea;

void MikMod_RegisterAllDrivers() {
    goto MikMod_RegisterAllDrivers;
}

void XDrawString(struct s1* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);

void XPrint(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t eax7;
    int32_t v8;
    int32_t v9;
    struct s1* v10;
    int32_t v11;
    int32_t v12;

    eax7 = strlen(a5);
    __asm__("fld qword [ebp-0x10]");
    __asm__("fnstcw word [ebp-0x12]");
    __asm__("fldcw word [ebp-0x14]");
    __asm__("fistp dword [ebp-0x18]");
    __asm__("fldcw word [ebp-0x12]");
    __asm__("fld qword [ebp-0x8]");
    __asm__("fldcw word [ebp-0x14]");
    __asm__("fistp dword [ebp-0x18]");
    __asm__("fldcw word [ebp-0x12]");
    v8 = green_gc;
    v9 = win;
    v10 = dis;
    XDrawString(v10, v9, v8, v11, v12, a5, eax7);
    return;
}

int32_t XOpenDisplay = 0x804899a;

struct s1* XOpenDisplay(int32_t a1) {
    goto XOpenDisplay;
}

int32_t XCreateGC = 0x804898a;

int32_t XCreateGC(struct s1* a1, int32_t a2, int32_t a3, int32_t a4) {
    goto XCreateGC;
}

int32_t XParseColor = 0x80488aa;

void XParseColor(struct s1* a1, int32_t a2, int32_t a3, int32_t a4) {
    goto XParseColor;
}

int32_t XAllocColor = 0x804890a;

void XAllocColor(struct s1* a1, int32_t a2, int32_t a3, int32_t a4) {
    goto XAllocColor;
}

int32_t XSetForeground = 0x804887a;

void XSetForeground(struct s1* a1, int32_t a2, int32_t a3, int32_t a4) {
    goto XSetForeground;
}

int32_t MikMod_RegisterAllLoaders = 0x804884a;

void MikMod_RegisterAllLoaders() {
    goto MikMod_RegisterAllLoaders;
}

int32_t MikMod_Init = 0x80488fa;

int32_t MikMod_Init(int32_t a1) {
    goto MikMod_Init;
}

int32_t XDrawString = 0x804882a;

void XDrawString(struct s1* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    goto XDrawString;
}

int32_t __libc_start_main = 0x80488ba;

void __libc_start_main(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t _init() {
    int32_t eax1;

    call_gmon_start();
    frame_dummy();
    eax1 = __do_global_ctors_aux();
    return eax1;
}

void fun_8048820() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048a26() {
}

void _fini() {
    fun_8048df4();
}

int32_t g804a460 = 0;

void fun_804882a() {
    goto g804a460;
}

void fun_804888a() {
    goto 0x8048814;
}

void fun_804885a() {
    goto 0x8048814;
}

void fun_804892a() {
    goto 0x8048814;
}

void fun_804896a() {
    goto 0x8048814;
}

int32_t tim = 0;

void main() {
    int32_t v1;
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int16_t ax6;
    int16_t fpu_status_word7;
    struct s1* v8;

    v1 = 100;
    init(0x12c, 100);
    v2 = 0x8048ced;
    FontInit("12x24", 100);
    MikmodInit();
    while (1) {
        __asm__("fld dword [0x804a588]");
        __asm__("fld dword [0x8048e40]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [esp]");
        sin();
        __asm__("fld qword [0x8048e48]");
        __asm__("fmulp st1, st0");
        __asm__("fld qword [0x8048e50]");
        __asm__("faddp st1, st0");
        __asm__("fstp qword [esp]");
        __asm__("fld dword [0x804a588]");
        __asm__("fld dword [0x8048e58]");
        __asm__("fdivp st1, st0");
        __asm__("fld dword [0x8048e5c]");
        __asm__("fsubrp st1, st0");
        __asm__("fstp qword [esp]");
        XPrint(v3, v4, v5, v2, "Hello everyone, this is a long boring scroller brought to you by **** l33t kru, we have no idea what to write in here, so lets have a technical description of the production. We spent 2 hours making this masterpiece, it is so advanced and all that, bla bla. Let's get to the fun part of this scroller <insert random german stuff here>. Fr09 is here to make you happy, and the product and all that, i like the speakers! And they have girls? What. Okey, seriously, this is a stupid production, we don't know why we made it, but we did, so there, hah! If you enjoy stuff like this you are our friend, at least not our enemy.                                             Seriously: this production sucks, it depends xlib, we had no idea how to make the window doublebuffer and we didn't bother googling for the answer, so we made some stupid stuff which would not make it flimmer that much, by not clearing the screen every frame, hah. Okey. This should not take a fast machine to run, but since we don't have a timing routine of", v1);
        __asm__("fld dword [0x804a588]");
        __asm__("fld qword [0x8048e60]");
        __asm__("faddp st1, st0");
        __asm__("fstp dword [0x804a588]");
        __asm__("fld dword [0x804a584]");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fstp dword [0x804a584]");
        __asm__("fld dword [0x804a584]");
        __asm__("fld dword [0x8048e68]");
        __asm__("fxch st0, st1");
        __asm__("fucompp ");
        ax6 = fpu_status_word7;
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax6) + 1) & 69)) {
            v1 = win;
            v8 = dis;
            v2 = 0x8048daa;
            XClearWindow(v8, v1);
            tim = 0;
        }
        MikMod_Update();
    }
}

void fun_80488da() {
    goto 0x8048814;
}

void fun_804894a() {
    goto 0x8048814;
}

void fun_804893a() {
    goto 0x8048814;
}

void fun_804895a() {
    goto 0x8048814;
}

void fun_804883a() {
    goto 0x8048814;
}

void fun_80488ca() {
    goto 0x8048814;
}

void fun_804891a() {
    goto 0x8048814;
}

void fun_804889a() {
    goto 0x8048814;
}

void fun_804886a() {
    goto 0x8048814;
}

void fun_804897a() {
    goto 0x8048814;
}

void fun_80488ea() {
    goto 0x8048814;
}

void fun_804899a() {
    goto 0x8048814;
}

void fun_804898a() {
    goto 0x8048814;
}

void fun_80488aa() {
    goto 0x8048814;
}

void fun_804890a() {
    goto 0x8048814;
}

void fun_804887a() {
    goto 0x8048814;
}

void fun_804884a() {
    goto 0x8048814;
}

void fun_80488fa() {
    goto 0x8048814;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    __libc_start_main(main, __return_address(), esp1, _init, _fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_80488ba() {
    goto 0x8048814;
}
