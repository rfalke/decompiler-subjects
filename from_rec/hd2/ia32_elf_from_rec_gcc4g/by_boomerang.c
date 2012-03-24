__size32 hexdump(union { char * x7; unsigned int x8; } param1[], struct stat param2, unsigned int param3, char param4, char *param5, __size8 param6);
__size32 stat(char *param1, struct stat *param2);
__size8 dumpline(union { char * x7; unsigned int x8; } param1[], char *param2, int param3);
void __i686.get_pc_thunk.bx();

// address: 0x80488ca
int main(int argc, char *argv[], char *envp[]) {
    __size8 al; 		// r8
    char **eax; 		// r24
    char *eax_1; 		// r24
    union { char * x7; unsigned int x8; } local0[]; 		// m[esp - 312]
    struct stat local1; 		// m[esp - 172]
    unsigned int local2; 		// m[esp - 128]
    char local3; 		// m[esp - 72]
    __size32 local4; 		// m[esp - 12]
    unsigned int local5; 		// m[esp - 8]

    local4 = 0;
    local5 = 1;
    while ((int)local5 < (int)argc) {
        eax = local5 * 4 + argv;
        eax_1 = *eax;
        eax = hexdump(local0, local1, local2, local3, eax_1, al); /* Warning: also results in al */
        local4 += eax;
        local5++;
    }
    return local4;
}

// address: 0x80487c6
__size32 hexdump(union { char * x7; unsigned int x8; } param1[], struct stat param2, unsigned int param3, char param4, char *param5, __size8 param6) {
    __size8 al; 		// r8
    __size32 eax; 		// r24
    FILE *eax_1; 		// r24
    __size32 eax_2; 		// r24{101}
    int eax_3; 		// r24{9}
    int edx; 		// r26
    unsigned int local2; 		// m[esp - 36]
    __size8 local8; 		// param6{108}

    eax_3 = *20;
    eax = stat(param5, &param2);
    local8 = param6;
    if (eax == 0) {
        eax = fopen(param5, "rb");
        if (eax != 0) {
            local2 = 0;
            param6 = local8;
            while (param3 > local2) {
                eax = fread(&param4, 1, 16, eax);
                if (eax == 0) {
                    goto L4;
                }
                al = dumpline(param1, &param4, eax);
                local8 = al;
                local2 += eax;
                param6 = local8;
            }
L4:
            fclose(eax_1);
            eax = 0;
        } else {
            perror(param5);
            eax = 1;
        }
    } else {
        perror(param5);
        eax = 1;
    }
    eax_2 = eax;
    edx = eax_3 ^ *20;
    if (edx != 0) {
        eax_2 = __stack_chk_fail();
    }
    return eax_2; /* WARNING: Also returning: al := param6 */
}

// address: 0x8048990
__size32 stat(char *param1, struct stat *param2) {
    __size32 eax; 		// r24

    __i686.get_pc_thunk.bx();
    eax = stat(3, param1, param2);
    return eax;
}

// address: 0x8048634
__size8 dumpline(union { char * x7; unsigned int x8; } param1[], char *param2, int param3) {
    unsigned char al; 		// r8
    int eax; 		// r24
    unsigned char *eax_1; 		// r24
    int eax_2; 		// r24{12}
    __size32 edx; 		// r26
    int esp; 		// r28
    int local2; 		// m[esp + 12]
    int local3; 		// m[esp - 100]
    int local6; 		// param3{289}

    eax_2 = *20;
    sprintf(&param1, 0x8048a20);
    local6 = param3;
    if (param3 > 16) {
        local2 = 16;
        local6 = local2;
    }
    param3 = local6;
    local3 = 0;
    while (local3 < param3) {
        edx = local3 + local3 + local3 + 9;
        sprintf(esp + edx - 96, 0x8048a27);
        local3++;
    }
    al =  (local3 <= 15) ? 1 : 0;
    local3++;
    while (al != 0) {
        strcat(&param1, 0x8048a2e);
        al =  (local3 <= 15) ? 1 : 0;
        local3++;
    }
    eax = strlen(&param1);
    memcpy(esp + eax - 96, 0x8048a32, 4);
    local3 = 0;
    while (local3 < param3) {
        eax_1 = local3 + param2;
        eax = *(unsigned char*)eax_1;
        if ((unsigned char) eax <= 31) {
L4:
            al = 46;
        } else {
            eax_1 = local3 + param2;
            eax = *(unsigned char*)eax_1;
            if ((unsigned char) eax > 126) {
                goto L4;
            } else {
                eax_1 = local3 + param2;
                eax = *(unsigned char*)eax_1;
                al = (unsigned char) eax;
            }
        }
        *(char*)(esp + eax + local3 - 93) = al;
        local3++;
    }
    while (local3 <= 15) {
        *(__size8*)(esp + local3 + eax - 93) = 32;
        local3++;
    }
    eax = esp + eax + local3 - 93;
    memcpy(eax, 0x8048a36, 2);
    puts(&param1);
    eax = eax_2 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return (unsigned char) eax;
}

// address: 0x804898a
void __i686.get_pc_thunk.bx() {
    return;
}

