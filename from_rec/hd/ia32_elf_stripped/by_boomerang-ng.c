__size32 __environ = 0;// 4 bytes
__size32 global_0x080499ec = -1;// 4 bytes
__size32 global_0x080499f8 = 0;// 4 bytes
unsigned short __fpu_control;
__size32 _init(__size32 param1);
__size32 proc_0x080488e0(char param1[], unsigned int param2, char param3, int param4, __size32 param5, unsigned char param6, __size32 param7);
void _start(unsigned char param1, __size32 param2);
void _fini();
__size32 proc_0x08048980(__size32 param1);
__size32 proc_0x080487f0(char param1[], unsigned int param2, char param3, union { unsigned int; char *; } param4, unsigned char param5, __size32 param6);
void proc_0x08048620(__size32 param1);
__size32 proc_0x08048950();
__size8 proc_0x08048660(char param1[], __size32 param2, int param3, unsigned char param4, __size32 param5);

/** address: 0x080484a0 */
__size32 _init(__size32 param1)
{
    __size32 ebx; 		// r27

    ebx = proc_0x08048980(param1);
    return ebx;
}

/** address: 0x080488e0 */
__size32 proc_0x080488e0(char param1[], unsigned int param2, char param3, int param4, __size32 param5, unsigned char param6, __size32 param7)
{
    unsigned char cl; 		// r9
    __size32 eax; 		// r24
    __size32 local0; 		// m[esp - 12]
    int local1; 		// m[esp - 8]
    unsigned char local6; 		// param6{0}

    local0 = 0;
    local1 = 1;
    local6 = param6;
    param6 = local6;
    while (param4 > local1) {
        eax = *(param5 + local1 * 4);
        eax = proc_0x080487f0(param1, param2, param3, eax, param6, param7); /* Warning: also results in cl */
        local6 = cl;
        local0 += eax;
        local1++;
        param6 = local6;
    }
    return local0;
}

/** address: 0x080485a0 */
void _start(unsigned char param1, __size32 param2)
{
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    int esp; 		// r28
    int esp_1; 		// r28{0}
    union { __size32; __size32 *; } esp_4; 		// r28{0}

    *(__size32*)(((esp_4 + 4) & ~0x7) - 4) = 0;
    esp_1 = ((esp_4 + 4) & ~0x7) - 4;
    *(__size32*)(esp_1 - 4) = 0;
    *(__size32*)(esp_1 - 8) = 0;
    *(__size32*)(esp_1 - 12) = esp_4 + *esp_4 + *esp_4 + *esp_4 + *esp_4 + 8;
    *(__size32*)(esp_1 - 16) = (esp_4 + 4);
    *(__size32*)(esp_1 - 20) = *esp_4;
    eax = *(esp_1 - 12);
    __environ = eax;
    *(unsigned int*)(esp_1 - 24) = (__fpu_control);
    __setfpucw();
    __libc_init();
    *(__size32*)(esp_1 - 24) = 0x80489c0;
    eax = atexit(*(esp_1 - 24));
    ebx = _init(param2); /* Warning: also results in esp */
    eax = proc_0x080488e0(*(esp - 220), *(esp - 96), *(esp - 44), *esp, *(esp + 4), param1, ebx);
    *(__size32*)(esp - 4) = eax;
    exit(*(esp - 4));
    return;
}

/** address: 0x080489c0 */
void _fini()
{
    __size32 esi; 		// r30

    proc_0x08048620(esi);
    return;
}

/** address: 0x08048980 */
__size32 proc_0x08048980(__size32 param1)
{
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{0}
    __size32 ebx_4; 		// r27{0}
    __size32 esi; 		// r30
    __size32 esp_1; 		// r28{0}
    __size32 esp_2; 		// r28{0}
    __size32 esp_3; 		// r28{0}
    __size32 esp_6; 		// r28{0}
    union { __size32 *; __size32; } local2; 		// ebx{0}
    __size32 local3; 		// esp_3{0}

    ebp = esp_6 - 4;
    esp_1 = esp_6 - 8;
    ebx = 0x80499ec;
    flags = SUBFLAGS32(*0x80499ec, -1, global_0x080499ec + 1);
    local2 = ebx;
    local3 = esp_1;
    if (*0x80499ec != -1) {
        esi = param1;
        do {
            ebx = local2;
            esp_3 = local3;
            eax = *ebx;
            (*eax)(eax, ebx, ebp, esi, flags, ZF, CF, *(esp_6 - 4), *(esp_6 - 8));
            local3 = esp_2;
            ebx_4 = ebx_1 - 4;
            tmp1 = *(ebx_1 - 4) + 1;
            flags = SUBFLAGS32(*(ebx_1 - 4), -1, tmp1);
            local2 = ebx_4;
        } while (*(ebx_1 - 4) != -1);
    }
    ebx = *(ebp - 4);
    return ebx;
}

/** address: 0x080487f0 */
__size32 proc_0x080487f0(char param1[], unsigned int param2, char param3, union { unsigned int; char *; } param4, unsigned char param5, __size32 param6)
{
    unsigned char cl; 		// r9
    int eax; 		// r24
    FILE *eax_1; 		// r24{0}
    union { int; FILE *; } eax_4; 		// r24{0}
    int esp; 		// r28
    unsigned char local11; 		// param5{0}
    int local2; 		// m[esp - 24]

    eax = proc_0x08048950();
    local11 = param5;
    if (eax != 0) {
        eax_1 = fopen(param4, "rb");
        if (eax_1 != 0) {
            local2 = 0;
            param5 = local11;
            while (param2 > local2) {
                eax_4 = fread(&param3, 1, 16, eax_1);
                if (eax_4 != 0) {
                    cl = proc_0x08048660(param1, esp - 20, eax_4, param5, param6);
                    local11 = cl;
                    local2 += eax_4;
                }
                else {
                }
bb0x80488c0:
                fclose(eax_1);
                eax = 0;
                return eax; /* WARNING: Also returning: cl := param5 */
                param5 = local11;
            }
            goto bb0x80488c0;
        }
        else {
            perror(param4);
            eax = 1;
        }
    }
    else {
        perror(param4);
        eax = 1;
    }
    return eax; /* WARNING: Also returning: cl := param5 */
}

/** address: 0x08048620 */
void proc_0x08048620(__size32 param1)
{
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{0}
    __size32 ebx_4; 		// r27{0}
    __size32 esi; 		// r30
    __size32 esp_1; 		// r28{0}
    __size32 esp_2; 		// r28{0}
    __size32 esp_3; 		// r28{0}
    __size32 esp_6; 		// r28{0}
    union { __size32 *; __size32; } local2; 		// ebx{0}
    __size32 local3; 		// esp_3{0}

    ebp = esp_6 - 4;
    esp_2 = esp_6 - 8;
    ebx = 0x80499f8;
    flags = SUBFLAGS32(*0x80499f8, 0, global_0x080499f8);
    local2 = ebx;
    local3 = esp_2;
    if (*0x80499f8 != 0) {
        esi = param1;
        do {
            ebx = local2;
            esp_3 = local3;
            eax = *ebx;
            (*eax)(eax, ebx, ebp, esi, flags, ZF, CF, *(esp_6 - 4), *(esp_6 - 8));
            local3 = esp_1;
            ebx_4 = ebx_1 + 4;
            tmp1 = *(ebx_1 + 4);
            flags = SUBFLAGS32(*(ebx_1 + 4), 0, tmp1);
            local2 = ebx_4;
        } while (*(ebx_1 + 4) != 0);
    }
    return;
}

/** address: 0x08048950 */
__size32 proc_0x08048950()
{
    __size32 eax; 		// r24

    eax = _xstat();
    return eax;
}

/** address: 0x08048660 */
__size8 proc_0x08048660(char param1[], __size32 param2, int param3, unsigned char param4, __size32 param5)
{
    unsigned char cl; 		// r9
    int eax_2; 		// r24{0}
    __size32 ebx; 		// r27
    int esp; 		// r28
    int local11; 		// param3{0}
    unsigned char local12; 		// param4{0}
    int local13; 		// local5{0}
    unsigned char local14; 		// cl{0}
    __size32 local15; 		// param5{0}
    __size32 local16; 		// ebx{0}
    int local2; 		// m[esp + 12]
    int local3; 		// m[esp - 88]
    int local5; 		// m[esp - 88]{0}
    int local6; 		// m[esp - 88]{0}

    sprintf(&param1, 0x80489c8);
    local11 = param3;
    local12 = param4;
    local15 = param5;
    if (param3 > 16) {
        local2 = 16;
        local11 = local2;
    }
    param3 = local11;
    local3 = 0;
    param4 = local12;
    local13 = local3;
    local14 = param4;
    while (param3 > local3) {
        cl = (unsigned char) local3;
        sprintf(esp + local3 + local3 + local3 - 75, 0x80489cf);
        local12 = cl;
        local3++;
        param4 = local12;
        local13 = local3;
        local14 = param4;
    }
    local5 = local13;
    local6 = local5 + 1;
    local13 = local6;
    while (local5 <= 15) {
        strcat(&param1, 0x80489d6);
        local5 = local13;
        local6 = local5 + 1;
        local13 = local6;
    }
    eax_2 = strlen(&param1);
    strcpy(esp + eax_2 - 84, 0x80489da);
    local3 = 0;
    cl = local14;
    param5 = local15;
    local16 = param5;
    while (param3 > local3) {
        if (*(param2 + local3) <= 31 || *(param2 + local3) > 126) {
            cl = 46;
        }
        else {
            ebx = param2 + local3;
            cl = *ebx;
            local16 = ebx;
        }
        ebx = local16;
        *(unsigned char*)(eax_2 + local3 + esp - 84) = cl;
        local3++;
        local14 = cl;
        local15 = ebx;
        cl = local14;
        param5 = local15;
        local16 = param5;
    }
    while (local3 <= 15) {
        *(__size8*)(eax_2 + local3 + esp - 84) = 32;
        local3++;
    }
    strcpy(esp + eax_2 + local3 - 84, 0x80489de);
    printf("%s\n", &param1);
    return cl;
}

