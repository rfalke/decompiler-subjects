
int FontInit(unsigned int param0) {
    →XLoadQueryFont();
    return →XSetFont();
}

int MikmodInit() {
    →MikMod_RegisterAllDrivers();
    →MikMod_RegisterAllLoaders();
    int v0 = →MikMod_Init();
    if(v0) {
        int v1 = →MikMod_strerror();
        →fprintf(stderr, "MikMod: %s\n", v1);
        /*NO_RETURN*/ →exit(1);
    }
    int v2 = →Player_Load();
    if(!v2) {
        int v3 = →MikMod_strerror();
        →printf("MikMod Error: %s\n", v3);
        /*NO_RETURN*/ →exit(1);
    }
    return →Player_Start();
}

int XPrint(int param0, int param1, int param2, int param3, char* __s) {
    short v0;
    int v1 = param0;
    int v2 = param1;
    int v3 = param2;
    int v4 = param3;
    size_t v5 = →strlen(__s);
    short v0 = fnstcw();
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fldcw(v0);
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fldcw(v0);
    return →XDrawString();
}

int init(int param0, int param1) {
    int v0 = →XOpenDisplay();
    dis = v0;
    int v1 = →XCreateSimpleWindow();
    win = v1;
    →XMapWindow();
    colormap = *(unsigned int*)(*(int*)(dis + 140) + 48);
    int v2 = →XCreateGC();
    green_gc = v2;
    →XParseColor();
    →XAllocColor();
    return →XSetForeground();
}

void main() {
    int v0;
    __SyntheticTypeUnknown v1;
    int v2;
    int v3;
    char v4;
    __SyntheticTypeUnknownF v5;
    init(300, 100);
    void* ptr0 = (void*)&loc_8048CED;
    FontInit("12x24");
    MikmodInit();
    while(1) {
        char* __s = (char*)&dude;
        *(long long*)&v0 = rut / 300.0;
        v1[v4] = →sin(*(double*)&v0);
        *(long long*)&v2 = v5 * 20.0 + 60.0;
        *(long long*)&v0 = (float)(400.0 - rut / 2.0);
        int v6 = XPrint(v0, v3, v2, (int)ptr0, __s);
        rut += 0.1;
        tim += 1.0;
        fucompp(50.0, tim);
        fnstsw((unsigned short)v6);
        if(!((unsigned char)(v6 >>> 8) & 0x45)) {
            unsigned int v7 = win;
            ptr0 = (void*)&loc_8048DAA;
            →XClearWindow();
            tim = 0;
        }
        →MikMod_Update();
    }
}

int sub_804881A() {
    return gvar_804A460();
}
