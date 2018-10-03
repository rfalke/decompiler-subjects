int main(int argc, char *argv[]);
__size32 hexdump(char param1[], unsigned int param2, char param3, union { int; char *; } param4, __size8 param5);
__size32 __stat(union { char *; __size32; } param1, union { struct stat *; __size32; } param2);
__size8 dumpline(char param1[], __size32 param2, int param3);
void __i686.get_pc_thunk.bx();

/** address: 0x080488ca */
int main(int argc, char *argv[])
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    char local0[]; 		// m[esp - 312]
    unsigned int local1; 		// m[esp - 128]
    char local2; 		// m[esp - 72]
    __size32 local3; 		// m[esp - 12]
    unsigned int local4; 		// m[esp - 8]

    local3 = 0;
    local4 = 1;
    while ((int)local4 < argc) {
        eax = *(local4 * 4 + argv);
        eax = hexdump(local0, local1, local2, eax, al); /* Warning: also results in al */
        local3 += eax;
        local4++;
    }
    return local3;
}

/** address: 0x080487c6 */
__size32 hexdump(char param1[], unsigned int param2, char param3, union { int; char *; } param4, __size8 param5)
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    FILE *eax_10; 		// r24{0}
    __size32 eax_12; 		// r24{0}
    int eax_13; 		// r24{0}
    __size32 eax_2; 		// r24{0}
    int eax_3; 		// r24{0}
    __size32 eax_6; 		// r24{0}
    __size32 eax_9; 		// r24{0}
    int edx; 		// r26
    int esp; 		// r28
    __size8 local10; 		// param5{0}
    __size32 local11; 		// eax_2{0}
    __size32 local12; 		// eax{0}
    int local2; 		// m[esp - 36]

    eax_3 = *20;
    eax_6 = __stat(param4, (esp - 132));
    local10 = param5;
    if (eax_6 == 0) {
        eax_10 = fopen(param4, "rb");
        if (eax_10 != 0) {
            local2 = 0;
            param5 = local10;
            while (param2 > local2) {
                eax_13 = fread(&param3, 1, 16, eax_10);
                if (eax_13 == 0) {
                }
                else {
                    al = dumpline(param1, esp - 32, eax_13);
                    local10 = al;
                    local2 += eax_13;
                }
bb0x80488a7:
                fclose(eax_10);
                eax = 0;
                local11 = eax;
                goto bb0x80488b7;
                param5 = local10;
            }
            goto bb0x80488a7;
        }
        else {
            perror(param4);
            eax_12 = 1;
            local11 = eax_12;
        }
    }
    else {
        perror(param4);
        eax_9 = 1;
        local11 = eax_9;
    }
bb0x80488b7:
    eax_2 = local11;
    edx = eax_3 ^ *20;
    local12 = eax_2;
    if (edx != 0) {
        eax = __stack_chk_fail();
        local12 = eax;
    }
    eax = local12;
    return eax; /* WARNING: Also returning: al := param5 */
}

/** address: 0x08048990 */
__size32 __stat(union { char *; __size32; } param1, union { struct stat *; __size32; } param2)
{
    int eax; 		// r24

    __i686.get_pc_thunk.bx();
    eax = stat(3, param1, param2);
    return eax;
}

/** address: 0x08048634 */
__size8 dumpline(char param1[], __size32 param2, int param3)
{
    unsigned char al; 		// r8
    __size32 eax; 		// r24
    int eax_1; 		// r24{0}
    int eax_17; 		// r24{0}
    unsigned int eax_27; 		// r24{0}
    unsigned int eax_30; 		// r24{0}
    unsigned int eax_33; 		// r24{0}
    int esp; 		// r28
    int local2; 		// m[esp + 12]
    int local3; 		// m[esp - 100]
    int local6; 		// param3{0}

    eax_1 = *20;
    sprintf(&param1, 0x8048a20);
    local6 = param3;
    if (param3 > 16) {
        local2 = 16;
        local6 = local2;
    }
    param3 = local6;
    local3 = 0;
    while (local3 < param3) {
        sprintf(esp + local3 + local3 + local3 - 87, 0x8048a27);
        local3++;
    }
    al =  (local3 <= 15) ? 1 : 0;
    local3++;
    while (al != 0) {
        strcat(&param1, 0x8048a2e);
        al =  (local3 <= 15) ? 1 : 0;
        local3++;
    }
    eax_17 = strlen(&param1);
    memcpy(esp + eax_17 - 96, 0x8048a32, 4);
    local3 = 0;
    while (local3 < param3) {
        eax_27 = *(unsigned char*)(local3 + param2);
        if ((unsigned char) eax_27 <= 31) {
bb0x804874c:
            al = 46;
        }
        else {
            eax_30 = *(unsigned char*)(local3 + param2);
            if ((unsigned char) eax_30 > 126) {
                goto bb0x804874c;
            }
            else {
                eax_33 = *(unsigned char*)(local3 + param2);
                al = (unsigned char) eax_33;
            }
        }
        *(char*)(esp + eax_17 + local3 - 93) = al;
        local3++;
    }
    while (local3 <= 15) {
        *(__size8*)(esp + local3 + eax_17 - 93) = 32;
        local3++;
    }
    memcpy(esp + eax_17 + local3 - 93, 0x8048a36, 2);
    puts(&param1);
    eax = eax_1 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return (unsigned char) eax;
}

/** address: 0x0804898a */
void __i686.get_pc_thunk.bx()
{
    return;
}

