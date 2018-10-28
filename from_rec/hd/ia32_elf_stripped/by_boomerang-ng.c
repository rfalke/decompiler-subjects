__size32 __environ = 0;// 4 bytes
__size32 global_0x080499ec = -1;// 4 bytes
__size32 global_0x080499f8 = 0;// 4 bytes
unsigned short __fpu_control;
__size32 _init(__size32 param1);
__size32 proc_0x080488e0(char param1[], unsigned int param2, int param3, int param4, __size32 param5, unsigned char param6, __size32 param7);
void _start(unsigned char param1, __size32 param2);
int _fini();
__size32 proc_0x08048980(__size32 param1);
__size32 proc_0x080487f0(char param1[], unsigned int param2, int param3, union { unsigned int; char *; } param4, unsigned char param5, __size32 param6);
__size32 proc_0x08048620(__size32 param1, __size32 param2);
__size32 proc_0x08048950();
__size8 proc_0x08048660(char param1[], int param2, unsigned int param3, int param4, unsigned char param5, __size32 param6);

/** address: 0x080484a0 */
__size32 _init(__size32 param1)
{
    __size32 ebx; 		// r27

    ebx = proc_0x08048980(param1);
    return ebx;
}

/** address: 0x080488e0 */
__size32 proc_0x080488e0(char param1[], unsigned int param2, int param3, int param4, __size32 param5, unsigned char param6, __size32 param7)
{
    unsigned char cl; 		// r9
    __size32 eax; 		// r24
    __size32 local0; 		// m[esp - 12]
    int local1; 		// m[esp - 8]
    unsigned char local6; 		// param6{11}

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
    int esp_1; 		// r28{6}
    union { __size32; __size32 *; } esp_4; 		// r28{1}

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
int _fini()
{
    __size32 eax; 		// r24
    __size32 esi; 		// r30

    eax = proc_0x08048620(eax, esi);
    return eax;
}

/** address: 0x08048980 */
__size32 proc_0x08048980(__size32 param1)
{
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{18}
    __size32 ebx_4; 		// r27{19}
    __size32 esi; 		// r30
    __size32 esp_1; 		// r28{4}
    __size32 esp_2; 		// r28{18}
    __size32 esp_3; 		// r28{10}
    __size32 esp_6; 		// r28{1}
    union { __size32 *; __size32; } local2; 		// ebx{9}
    __size32 local3; 		// esp_3{10}

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
__size32 proc_0x080487f0(char param1[], unsigned int param2, int param3, union { unsigned int; char *; } param4, unsigned char param5, __size32 param6)
{
    unsigned char cl; 		// r9
    int eax; 		// r24
    FILE *eax_1; 		// r24{13}
    union { int; FILE *; } eax_4; 		// r24{23}
    int esp; 		// r28
    unsigned char local11; 		// param5{19}
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
                    cl = proc_0x08048660(param1, esp - 20, local2, eax_4, param5, param6);
                    local11 = cl;
                    local2 += eax_4;
                }
                param5 = local11;
            }
            fclose(eax_1);
            eax = 0;
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
__size32 proc_0x08048620(__size32 param1, __size32 param2)
{
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{19}
    __size32 ebx_4; 		// r27{20}
    __size32 esi; 		// r30
    __size32 esp_1; 		// r28{19}
    __size32 esp_2; 		// r28{5}
    __size32 esp_3; 		// r28{11}
    __size32 esp_6; 		// r28{1}
    union { __size32 *; __size32; } local2; 		// ebx{10}
    __size32 local3; 		// esp_3{11}
    __size32 local4; 		// param1{24}

    ebp = esp_6 - 4;
    esp_2 = esp_6 - 8;
    ebx = 0x80499f8;
    flags = SUBFLAGS32(*0x80499f8, 0, global_0x080499f8);
    local2 = ebx;
    local3 = esp_2;
    local4 = param1;
    if (*0x80499f8 != 0) {
        esi = param2;
        do {
            ebx = local2;
            esp_3 = local3;
            eax = *ebx;
            (*eax)(eax, ebx, ebp, esi, flags, ZF, CF, *(esp_6 - 4), *(esp_6 - 8));
            local3 = esp_1;
            local4 = eax;
            ebx_4 = ebx_1 + 4;
            tmp1 = *(ebx_1 + 4);
            flags = SUBFLAGS32(*(ebx_1 + 4), 0, tmp1);
            local2 = ebx_4;
        } while (*(ebx_1 + 4) != 0);
    }
    param1 = local4;
    return param1;
}

/** address: 0x08048950 */
__size32 proc_0x08048950()
{
    __size32 eax; 		// r24

    eax = _xstat();
    return eax;
}

/** address: 0x08048660 */
__size8 proc_0x08048660(char param1[], int param2, unsigned int param3, int param4, unsigned char param5, __size32 param6)
{
    unsigned char cl; 		// r9
    int eax; 		// r24
    __size32 ebx; 		// r27
    int edx; 		// r26
    int esp; 		// r28
    int local12; 		// param4{11}
    unsigned char local13; 		// param5{13}
    int local14; 		// local6{22}
    unsigned char local15; 		// cl{31}
    __size32 local16; 		// param6{32}
    __size32 local17; 		// ebx{42}
    int local3; 		// m[esp + 12]
    int local4; 		// m[esp - 88]
    int local6; 		// m[esp - 88]{22}
    int local7; 		// m[esp - 88]{23}

    sprintf(&param1, "%08lX:", param3);
    local12 = param4;
    local13 = param5;
    local16 = param6;
    if (param4 > 16) {
        local3 = 16;
        local12 = local3;
    }
    param4 = local12;
    local4 = 0;
    param5 = local13;
    local14 = local4;
    local15 = param5;
    while (param4 > local4) {
        edx = *(unsigned char*)(param2 + local4);
        cl = (unsigned char) local4;
        sprintf(esp + local4 + local4 + local4 - 75, " %02lX", edx);
        local13 = cl;
        local4++;
        param5 = local13;
        local14 = local4;
        local15 = param5;
    }
    local6 = local14;
    local7 = local6 + 1;
    local14 = local7;
    while (local6 <= 15) {
        strcat(&param1, "   ");
        local6 = local14;
        local7 = local6 + 1;
        local14 = local7;
    }
    eax = strlen(&param1);
    strcpy(esp + eax - 84, "  |");
    local4 = 0;
    cl = local15;
    param6 = local16;
    local17 = param6;
    while (param4 > local4) {
        if (*(param2 + local4) <= 31 || *(param2 + local4) > 126) {
            cl = 46;
        }
        else {
            ebx = param2 + local4;
            cl = *ebx;
            local17 = ebx;
        }
        ebx = local17;
        *(unsigned char*)(eax + local4 + esp - 84) = cl;
        local4++;
        local15 = cl;
        local16 = ebx;
        cl = local15;
        param6 = local16;
        local17 = param6;
    }
    while (local4 <= 15) {
        *(__size8*)(eax + local4 + esp - 84) = 32;
        local4++;
    }
    strcpy(esp + eax + local4 - 84, "|");
    printf("%s\n", &param1);
    return cl;
}

