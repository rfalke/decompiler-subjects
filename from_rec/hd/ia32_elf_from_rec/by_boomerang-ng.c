int main(int argc, char *argv[]);
__size32 hexdump(char param1[], unsigned int param2, int param3, union { unsigned int; char *; } param4, unsigned char param5, __size32 param6);
__size32 stat();
__size8 dumpline(char param1[], int param2, unsigned int param3, int param4, unsigned char param5, __size32 param6);

/** address: 0x080488e0 */
int main(int argc, char *argv[])
{
    unsigned char cl; 		// r9
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    char local0[]; 		// m[esp - 216]
    unsigned int local1; 		// m[esp - 92]
    int local2; 		// m[esp - 40]
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
__size32 hexdump(char param1[], unsigned int param2, int param3, union { unsigned int; char *; } param4, unsigned char param5, __size32 param6)
{
    unsigned char cl; 		// r9
    int eax; 		// r24
    FILE *eax_1; 		// r24{13}
    union { int; FILE *; } eax_4; 		// r24{23}
    int esp; 		// r28
    unsigned char local11; 		// param5{19}
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
                    cl = dumpline(param1, esp - 20, local2, eax_4, param5, param6);
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

/** address: 0x08048950 */
__size32 stat()
{
    __size32 eax; 		// r24

    eax = _xstat();
    return eax;
}

/** address: 0x08048660 */
__size8 dumpline(char param1[], int param2, unsigned int param3, int param4, unsigned char param5, __size32 param6)
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

