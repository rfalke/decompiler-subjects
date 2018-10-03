int main(int argc, char *argv[]);
__size32 hexdump(char param1[], unsigned int param2, char param3, union { unsigned int; char *; } param4, unsigned char param5, __size32 param6);
__size32 stat();
__size8 dumpline(char param1[], __size32 param2, int param3, unsigned char param4, __size32 param5);

/** address: 0x080488e0 */
int main(int argc, char *argv[])
{
    unsigned char cl; 		// r9
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    char local0[]; 		// m[esp - 216]
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

/** address: 0x080487f0 */
__size32 hexdump(char param1[], unsigned int param2, char param3, union { unsigned int; char *; } param4, unsigned char param5, __size32 param6)
{
    unsigned char cl; 		// r9
    int eax; 		// r24
    FILE *eax_1; 		// r24{0}
    union { int; FILE *; } eax_4; 		// r24{0}
    int esp; 		// r28
    unsigned char local11; 		// param5{0}
    int local2; 		// m[esp - 24]

    eax = stat();
    local11 = param5;
    if (eax != 0) {
        eax_1 = fopen(param4, "rb");
        if (eax_1 != 0) {
            local2 = 0;
            param5 = local11;
            while (param2 > local2) {
                eax_4 = fread(&param3, 1, 16, eax_1);
                if (eax_4 != 0) {
                    cl = dumpline(param1, esp - 20, eax_4, param5, param6);
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

/** address: 0x08048950 */
__size32 stat()
{
    __size32 eax; 		// r24

    eax = _xstat();
    return eax;
}

/** address: 0x08048660 */
__size8 dumpline(char param1[], __size32 param2, int param3, unsigned char param4, __size32 param5)
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

