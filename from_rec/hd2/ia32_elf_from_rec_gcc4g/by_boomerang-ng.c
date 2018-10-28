int main(int argc, char *argv[]);
__size32 hexdump(char param1, unsigned int param2, int param3, union { int; char *; } param4, __size8 param5);
__size32 __stat(union { char *; __size32; } param1, union { struct stat *; __size32; } param2);
__size8 dumpline(char param1, __size32 param2, unsigned int param3, int param4);
void __i686.get_pc_thunk.bx();

/** address: 0x080488ca */
int main(int argc, char *argv[])
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    char local0; 		// m[esp - 312]
    unsigned int local1; 		// m[esp - 128]
    int local2; 		// m[esp - 72]
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
__size32 hexdump(char param1, unsigned int param2, int param3, union { int; char *; } param4, __size8 param5)
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    FILE *eax_10; 		// r24{13}
    __size32 eax_12; 		// r24{16}
    int eax_13; 		// r24{20}
    __size32 eax_2; 		// r24{31}
    int eax_3; 		// r24{7}
    __size32 eax_6; 		// r24{8}
    __size32 eax_9; 		// r24{11}
    int edx; 		// r26
    int esp; 		// r28
    __size8 local10; 		// param5{24}
    __size32 local11; 		// eax_2{31}
    __size32 local12; 		// eax{35}
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
                if (eax_13 != 0) {
                    al = dumpline(param1, esp - 32, local2, eax_13);
                    local10 = al;
                    local2 += eax_13;
                }
                param5 = local10;
            }
            fclose(eax_10);
            eax = 0;
            local11 = eax;
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
__size8 dumpline(char param1, __size32 param2, unsigned int param3, int param4)
{
    unsigned char al; 		// r8
    __size32 eax; 		// r24
    int eax_1; 		// r24{6}
    size_t eax_11; 		// r24{24}
    unsigned int eax_21; 		// r24{28}
    unsigned int eax_24; 		// r24{30}
    unsigned int eax_27; 		// r24{32}
    unsigned int eax_6; 		// r24{13}
    int esp; 		// r28
    int local3; 		// m[esp + 12]
    int local4; 		// m[esp - 100]
    int local6; 		// param4{10}

    eax_1 = *20;
    sprintf(&param1, "%08lX:", param3);
    local6 = param4;
    if (param4 > 16) {
        local3 = 16;
        local6 = local3;
    }
    param4 = local6;
    local4 = 0;
    while (local4 < param4) {
        eax_6 = *(unsigned char*)(local4 + param2);
        sprintf(esp + local4 + local4 + local4 - 87, " %02lX", ((unsigned char) eax_6));
        local4++;
    }
    al =  (local4 <= 15) ? 1 : 0;
    local4++;
    while (al != 0) {
        strcat(&param1, "   ");
        al =  (local4 <= 15) ? 1 : 0;
        local4++;
    }
    eax_11 = strlen(&param1);
    memcpy(esp + eax_11 - 96, 0x8048a32, 4);
    local4 = 0;
    while (local4 < param4) {
        eax_21 = *(unsigned char*)(local4 + param2);
        if ((unsigned char) eax_21 <= 31) {
bb0x804874c:
            al = 46;
        }
        else {
            eax_24 = *(unsigned char*)(local4 + param2);
            if ((unsigned char) eax_24 > 126) {
                goto bb0x804874c;
            }
            else {
                eax_27 = *(unsigned char*)(local4 + param2);
                al = (unsigned char) eax_27;
            }
        }
        *(char*)(esp + eax_11 + local4 - 93) = al;
        local4++;
    }
    while (local4 <= 15) {
        *(__size8*)(esp + local4 + eax_11 - 93) = 32;
        local4++;
    }
    memcpy(esp + eax_11 + local4 - 93, 0x8048a36, 2);
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

