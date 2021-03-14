
int FontInit(unsigned int param0) {
    int result;
    →XLoadQueryFont();
    →XSetFont();
    return result;
}

int MikmodInit() {
    int result;
    int v0;
    →MikMod_RegisterAllDrivers();
    →MikMod_RegisterAllLoaders();
    →MikMod_Init();
    if(v0) {
        →MikMod_strerror();
        →fprintf(stderr, "MikMod: %s\n", v0);
        /*NO_RETURN*/ →exit(1);
    }
    →Player_Load();
    if(!v0) {
        →MikMod_strerror();
        result = →printf("MikMod Error: %s\n", v0);
        /*NO_RETURN*/ →exit(1);
    }
    →Player_Start();
    return result;
}

int XPrint(int param0, int param1, int param2, int param3, char* __s) {
    short v0;
    short v1;
    int result;
    int v2 = param0;
    int v3 = param1;
    int v4 = param2;
    int v5 = param3;
    size_t v6 = →strlen(__s);
    v1 = fnstcw(v1);
    short v0 = fldcw((unsigned short)(unsigned char)v1 | ((unsigned short)12 << 8));
    fistp();
    v1 = fldcw(v1);
    v0 = fldcw(v0);
    fistp();
    v1 = fldcw(v1);
    →XDrawString();
    return result;
}

unsigned int init(int param0, int param1) {
    unsigned int v0;
    →XOpenDisplay();
    dis = v0;
    →XCreateSimpleWindow();
    win = v0;
    →XMapWindow();
    unsigned int result = *(unsigned int*)(*(int*)(dis + 140) + 48);
    colormap = *(unsigned int*)(*(int*)(dis + 140) + 48);
    →XCreateGC();
    green_gc = v0;
    →XParseColor();
    →XAllocColor();
    →XSetForeground();
    return result;
}

void main() {
    int v0;
    __SyntheticTypeUnknown v1;
    int v2;
    int v3;
    int v4;
    __SyntheticTypeUnknownF v5;
    int v6;
    __SyntheticTypeUnknownF v7;
    char v8;
    __SyntheticTypeUnknownF v9;
    init(300, 100);
    FontInit("12x24");
    MikmodInit();
    while(1) {
        char* __s = (char*)&dude;
        *(long long*)&v0 = rut / 300.0;
        v1[v8] = →sin(*(double*)&v0);
        *(long long*)&v2 = v7 * 20.0 + 60.0;
        v1[v8 + 1] = fsubrp(rut / 2.0, 400.0);
        *(long long*)&v0 = v9;
        int v10 = XPrint(v0, v3, v2, v4, __s);
        rut += 0.1;
        fld1();
        tim += v5;
        fucompp();
        short v12 = fnstsw((unsigned short)v10);
        if(!((unsigned char)(v6 >>> 8) & 0x45)) {
            unsigned int v11 = win;
            v4 = &loc_8048DAA;
            →XClearWindow();
            tim = 0;
        }
        →MikMod_Update();
    }
}

void sub_8048814() {
    jump gvar_804A460;
}

int sub_804882A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804883A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804884A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804885A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804886A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804887A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804888A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804889A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_80488AA() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_80488BA() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_80488CA() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_80488DA() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_80488EA() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_80488FA() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804890A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804891A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804892A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804893A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804894A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804895A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804896A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804897A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804898A() {
    /*BAD_CALL!*/ sub_8048814();
}

int sub_804899A() {
    /*BAD_CALL!*/ sub_8048814();
}

void sub_8048A26() {
}
