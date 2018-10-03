__size32 green_gc;// 4 bytes
__size32 colormap;// 4 bytes
__size32 win;// 4 bytes
__size32 dis;// 4 bytes
float tim;
float rut;
int main(int argc, char *argv[]);
void init();
void FontInit();
void MikmodInit();
void XPrint(union { char[] *; __size32; } param1);

/** address: 0x08048cbe */
int main(int argc, char *argv[])
{
    unsigned int local0; 		// m[esp - 36]
    __size32 local1; 		// m[esp - 28]

    init();
    local1 = 0x8048e38;
    FontInit();
    MikmodInit();
bb0x8048cf5:
    sin(rut / 300.);
    XPrint(0x8049020);
    *(union { float; __size32; }*)0x804a588 = rut + 0.1;
    *(union { float; __size32; }*)0x804a584 = tim + 1.;
    if (tim > 50.) {
        local1 = win;
        XClearWindow();
        tim = 0;
bb0x8048db7:
        MikMod_Update();
        goto bb0x8048cf5;
    }
    goto bb0x8048db7;
}

/** address: 0x08048b14 */
void init()
{
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

/** address: 0x08048a54 */
void FontInit()
{
    XLoadQueryFont();
    XSetFont();
    return;
}

/** address: 0x08048c0c */
void MikmodInit()
{
    __size32 eax; 		// r24
    union { __size32; FILE *; } local0; 		// m[esp - 28]

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

/** address: 0x08048a98 */
void XPrint(union { char[] *; __size32; } param1)
{
    strlen(param1);
    XDrawString();
    return;
}

