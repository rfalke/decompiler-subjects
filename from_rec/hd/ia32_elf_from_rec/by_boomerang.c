__size32 hexdump(char param1[][], unsigned int param2, char param3, char *param4, unsigned char param5, unsigned char *param6);
__size32 stat();
unsigned char dumpline(char param1[][][], char *param2, int param3, unsigned char param4, unsigned char *param5);

// address: 0x80488e0
int main(int argc, char *argv[], char *envp[]) {
    unsigned char cl; 		// r9
    char *eax; 		// r24
    unsigned char *ebx; 		// r27
    char local0[][][]; 		// m[esp - 216]
    unsigned int local1; 		// m[esp - 92]
    char local2; 		// m[esp - 40]
    __size32 local3; 		// m[esp - 12]
    int local4; 		// m[esp - 8]

    local3 = 0;
    local4 = 1;
    while (argc > local4) {
        eax = *(argv + local4 * 4);
        eax = hexdump(local0, local1, local2, eax, cl, ebx); /* Warning: also results in cl */
        local3 += eax;
        local4++;
    }
    return local3;
}

// address: 0x80487f0
__size32 hexdump(char param1[][], unsigned int param2, char param3, char *param4, unsigned char param5, unsigned char *param6) {
    unsigned char cl; 		// r9
    __size32 eax; 		// r24
    FILE *eax_1; 		// r24{44}
    unsigned char local10; 		// param5{133}
    unsigned int local2; 		// m[esp - 24]

    eax = stat();
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
                cl = dumpline(param1, &param3, eax, param5, param6);
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

// address: 0x8048950
__size32 stat() {
    __size32 eax; 		// r24

    eax = _xstat();
    return eax;
}

// address: 0x8048660
unsigned char dumpline(char param1[][][], char *param2, int param3, unsigned char param4, unsigned char *param5) {
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

