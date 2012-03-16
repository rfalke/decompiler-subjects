__size32 global0 = -1;// 4 bytes
__size32 __environ = 0;// 4 bytes
unsigned short __fpu_control;
__size32 global67 = 0;// 4 bytes

__size32 proc1(char param1[][][], unsigned int param2, char param3, int param4, void *param5, unsigned char param6, unsigned char *param7);
void _start(unsigned char param1, __size32 param2);
void _fini();
__size32 proc2(__size32 param1);
__size32 proc3(char param1[][], unsigned int param2, char param3, char *param4, unsigned char param5, unsigned char *param6);
void proc4(__size32 param1);
__size32 proc5();
unsigned char proc6(char param1[][][], char *param2, int param3, unsigned char param4, unsigned char *param5);

// address: 0x80484a0
__size32 _init(__size32 param1) {
    __size32 ebx; 		// r27

    ebx = proc2(param1);
    return ebx;
}

// address: 0x80488e0
__size32 proc1(char param1[][][], unsigned int param2, char param3, int param4, void *param5, unsigned char param6, unsigned char *param7) {
    unsigned char cl; 		// r9
    char *eax; 		// r24
    __size32 local0; 		// m[esp - 12]
    int local1; 		// m[esp - 8]
    unsigned char local6; 		// param6{44}

    local0 = 0;
    local1 = 1;
    local6 = param6;
    param6 = local6;
    while (param4 > local1) {
        eax = *(param5 + local1 * 4);
        eax = proc3(param1, param2, param3, eax, param6, param7); /* Warning: also results in cl */
        local6 = cl;
        local0 += eax;
        local1++;
        param6 = local6;
    }
    return local0;
}

// address: 0x80485a0
void _start(unsigned char param1, __size32 param2) {
    __size32 eax; 		// r24
    unsigned char *ebx; 		// r27
    int edx; 		// r26
    int esp; 		// r28
    int esp_1; 		// r28
    __size32 local0; 		// m[esp]

    edx = local0 + local0 + local0 + local0;
    *(__size32*)(((esp + 4) & 0xfffffff8) - 4) = 0;
    esp_1 = ((esp + 4) & 0xfffffff8) - 4;
    *(__size32*)(esp_1 - 4) = 0;
    *(__size32*)(esp_1 - 8) = 0;
    *(void **)(esp_1 - 12) = esp + edx + 8;
    *(void **)(esp_1 - 16) = (esp + 4);
    *(__size32*)(esp_1 - 20) = local0;
    eax = *(esp_1 - 12);
    __environ = eax;
    *(unsigned int*)(esp_1 - 24) = (__fpu_control);
    __setfpucw();
    __libc_init();
    *(__size32*)(esp - 24) = 0x80489c0;
    eax = atexit(*(esp - 24));
    ebx = _init(param2); /* Warning: also results in esp */
    eax = proc1(*(esp - 220), *(esp - 96), *(esp - 44), *(esp + 4), param1, ebx, *esp);
    *(__size32*)(esp - 4) = eax;
    exit(*(esp - 4));
    return;
}

// address: 0x80489c0
void _fini() {
    __size32 esi; 		// r30

    proc4(esi);
    return;
}

// address: 0x8048980
__size32 proc2(__size32 param1) {
    __size32 eax; 		// r24
    __size32 *ebp; 		// r29
    __size32 *ebx; 		// r27
    void *ebx_1; 		// r27{15}
    __size32 esi; 		// r30
    void *esp; 		// r28
    void *esp_1; 		// r28{5}
    void *esp_2; 		// r28{15}
    void *esp_3; 		// r28{31}
    __size32 local0; 		// m[esp - 8]
    __size32 local1; 		// m[esp - 4]
    void *local2; 		// esp_3{31}

    ebp = esp - 4;
    esp_1 = esp - 8;
    ebx = 0x80499ec;
    flags = SUBFLAGS32(*0x80499ec, -1, global0 + 1);
    local2 = esp_1;
    if (*0x80499ec != -1) {
        esi = param1;
        do {
            esp_3 = local2;
            eax = *ebx;
            (*eax)(local0, local1, eax, ebx, ebp, esi, flags, ZF, CF);
            local2 = esp_2;
            ebx = ebx_1 - 4;
            tmp1 = *(ebx_1 - 4) + 1;
            flags = SUBFLAGS32(*(ebx_1 - 4), -1, tmp1);
        } while (*(ebx_1 - 4) != -1);
    }
    ebx = *(ebp - 4);
    return ebx;
}

// address: 0x80487f0
__size32 proc3(char param1[][], unsigned int param2, char param3, char *param4, unsigned char param5, unsigned char *param6) {
    unsigned char cl; 		// r9
    __size32 eax; 		// r24
    FILE *eax_1; 		// r24{44}
    unsigned char local10; 		// param5{133}
    unsigned int local2; 		// m[esp - 24]

    eax = proc5();
    local10 = param5;
    if (eax != 0) {
        eax_1 = fopen(param4, "rb");
        if (eax_1 != 0) {
            local2 = 0;
            param5 = local10;
            while (param2 > local2) {
                eax = fread(&param3, 1, 16, eax_1);
                if (eax == 0) {
                    break;
                }
                cl = proc6(param1, &param3, eax, param5, param6);
                local10 = cl;
                local2 += eax;
                param5 = local10;
            }
            fclose(eax_1);
            eax = 0;
        } else {
            perror(param4);
            eax = 1;
        }
    } else {
        perror(param4);
        eax = 1;
    }
    return eax; /* WARNING: Also returning: cl := param5 */
}

// address: 0x8048620
void proc4(__size32 param1) {
    __size32 eax; 		// r24
    __size32 *ebp; 		// r29
    __size32 *ebx; 		// r27
    __size32 ebx_1; 		// r27{15}
    __size32 esi; 		// r30
    void *esp; 		// r28
    void *esp_1; 		// r28{5}
    void *esp_2; 		// r28{15}
    void *esp_3; 		// r28{31}
    __size32 local0; 		// m[esp - 8]
    __size32 local1; 		// m[esp - 4]
    void *local2; 		// esp_3{31}

    ebp = esp - 4;
    esp_1 = esp - 8;
    ebx = 0x80499f8;
    flags = SUBFLAGS32(*0x80499f8, 0, global67);
    local2 = esp_1;
    if (*0x80499f8 != 0) {
        esi = param1;
        do {
            esp_3 = local2;
            eax = *ebx;
            (*eax)(local0, local1, eax, ebx, ebp, esi, flags, ZF, CF);
            local2 = esp_2;
            ebx = ebx_1 + 4;
            tmp1 = *(ebx_1 + 4);
            flags = SUBFLAGS32(*(ebx_1 + 4), 0, tmp1);
        } while (*(ebx_1 + 4) != 0);
    }
    return;
}

// address: 0x8048950
__size32 proc5() {
    __size32 eax; 		// r24

    eax = _xstat();
    return eax;
}

// address: 0x8048660
unsigned char proc6(char param1[][][], char *param2, int param3, unsigned char param4, unsigned char *param5) {
    unsigned char cl; 		// r9
    __size32 eax; 		// r24
    int eax_1; 		// r24{97}
    unsigned char *ebx; 		// r27
    int esp; 		// r28
    unsigned char *local10; 		// param5{235}
    unsigned char *local11; 		// ebx{250}
    int local2; 		// m[esp + 12]
    int local3; 		// m[esp - 88]
    int local5; 		// m[esp - 88]{268}
    int local7; 		// param3{262}
    unsigned char local8; 		// param4{214}
    unsigned char local9; 		// cl{231}

    sprintf(&param1, 0x80489c8);
    local7 = param3;
    local8 = param4;
    local10 = param5;
    if (param3 > 16) {
        local2 = 16;
        local7 = local2;
    }
    param3 = local7;
    local3 = 0;
    param4 = local8;
    local9 = param4;
    while (param3 > local3) {
        cl = (unsigned char) local3;
        eax = esp + local3 + local3 + local3 - 84;
        sprintf(eax + 9, 0x80489cf);
        local8 = cl;
        local3++;
        param4 = local8;
        local9 = param4;
    }
    local5 = local3;
    local3 = local5 + 1;
    while (local5 <= 15) {
        strcat(&param1, 0x80489d6);
        local5 = local3;
        local3 = local5 + 1;
    }
    eax_1 = strlen(&param1);
    strcpy(esp + eax_1 - 84, 0x80489da);
    local3 = 0;
    cl = local9;
    param5 = local10;
    local11 = param5;
    while (param3 > local3) {
        eax = eax_1 + local3;
        if (*ecx <= 31) {
L5:
            cl = 46;
        } else {
            if (*ecx > 126) {
                goto L5;
            } else {
                ebx = param2 + local3;
                cl = *ebx;
                local11 = ebx;
            }
        }
        ebx = local11;
        *(unsigned char*)(eax + esp - 84) = cl;
        local3++;
        local9 = cl;
        local10 = ebx;
        cl = local9;
        param5 = local10;
        local11 = param5;
    }
    while (local3 <= 15) {
        eax = eax_1 + local3;
        *(__size8*)(eax + esp - 84) = 32;
        local3++;
    }
    eax = esp + eax_1 + local3 - 84;
    strcpy(eax, 0x80489de);
    printf("%s\n", &param1);
    return cl;
}

