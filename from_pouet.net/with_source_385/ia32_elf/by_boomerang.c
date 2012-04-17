__size32 green_gc;// 4 bytes
__size32 colormap;// 4 bytes
__size32 win;// 4 bytes
__size32 dis;// 4 bytes
float rut;
float tim;

void init();
void FontInit();
void MikmodInit();
void XPrint(char param1[]);

// address: 0x8048cbe
int main(int argc, char *argv[], char *envp[]) {
    unsigned int local0; 		// m[esp - 36]
    __size32 local1; 		// m[esp - 28]

L-1:
    init();
L-1:
    local1 = 0x8048e38;
    FontInit();
L-1:
    MikmodInit();
L-1:
    sin(rut / 300.);
L-1:
    XPrint(0x8049020);
L-1:
    rut = rut + 0.1;
    tim = tim + 1.;
    if (tim > 50.) {
L-1:
        local1 = win;
        XClearWindow();
L-1:
        tim = 0;
L-1:
        MikMod_Update();
        goto L-1;
    }
    goto L-1;
}

// address: 0x8048b14
void init() {
    __size32 eax; 		// r24

    eax = XOpenDisplay();
    dis = eax;
    eax = XCreateSimpleWindow();
    win = eax;
    XMapWindow();
    eax = *(dis + 140);
    eax = *(eax + 48);
    colormap = eax;
    eax = XCreateGC();
    green_gc = eax;
    XParseColor();
    XAllocColor();
    XSetForeground();
    return;
}

// address: 0x8048a54
void FontInit() {
    XLoadQueryFont();
    XSetFont();
    return;
}

// address: 0x8048c0c
void MikmodInit() {
    __size32 eax; 		// r24
    FILE *local0; 		// m[esp - 28]

    MikMod_RegisterAllDrivers();
    MikMod_RegisterAllLoaders();
    eax = MikMod_Init();
    if (eax != 0) {
        eax = MikMod_strerror();
        local0 = *0x804a4e0;
        fprintf(local0, "MikMod: %s\n", eax);
        exit(1);
    }
    eax = Player_Load();
    if (eax == 0) {
        eax = MikMod_strerror();
        printf("MikMod Error: %s\n", eax);
        exit(1);
    }
    Player_Start();
    return;
}

// address: 0x8048a98
void XPrint(char param1[]) {
    strlen(param1);
    XDrawString();
    return;
}

