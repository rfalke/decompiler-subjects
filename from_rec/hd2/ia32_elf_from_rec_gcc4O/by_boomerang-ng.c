int main(int argc, char *argv[]);
__size32 hexdump(int param1, struct stat param2, unsigned int param3, char param4, union { int; char *; } param5, __size16 param6, __size8 param7, __size8 param8, __size8 param9);
__size16 dumpline(int param1, int param2, unsigned int param3, int param4, __size16 param5);

/** address: 0x080488a0 */
int main(int argc, char *argv[])
{
    __size8 al; 		// r8
    __size8 bl; 		// r11
    __size8 cl; 		// r9
    __size16 di; 		// r7
    __size32 eax; 		// r24
    unsigned int ebx; 		// r27
    unsigned int ebx_1; 		// r27{0}
    unsigned int ebx_2; 		// r27{0}
    __size32 edi; 		// r31
    int local0; 		// m[esp - 344]
    struct stat local1; 		// m[esp - 176]
    unsigned int local2; 		// m[esp - 132]
    char local3; 		// m[esp - 88]
    unsigned int local5; 		// ebx_1{0}

    ebx = 1;
    edi = 0;
    local5 = ebx;
    if (argc > 1) {
        do {
            ebx_1 = local5;
            eax = *(argv + ebx_1 * 4);
            eax = hexdump(local0, local1, local2, local3, eax, di, al, cl, bl); /* Warning: also results in di, al, cl, bl */
            edi += eax;
            ebx_2 = ebx_1 + 1;
            local5 = ebx_2;
        } while (argc > ebx_1 + 1);
    }
    return edi;
}

/** address: 0x080487af */
__size32 hexdump(int param1, struct stat param2, unsigned int param3, char param4, union { int; char *; } param5, __size16 param6, __size8 param7, __size8 param8, __size8 param9)
{
    __size8 al; 		// r8
    __size8 bl; 		// r11
    __size8 cl; 		// r9
    __size16 di; 		// r7
    __size32 eax; 		// r24
    __size32 eax_10; 		// r24{0}
    int eax_11; 		// r24{0}
    __size32 eax_2; 		// r24{0}
    int eax_3; 		// r24{0}
    int eax_6; 		// r24{0}
    __size32 eax_7; 		// r24{0}
    FILE *eax_8; 		// r24{0}
    int edx; 		// r26
    int esi; 		// r30
    unsigned int esi_1; 		// r30{0}
    int esi_2; 		// r30{0}
    int esp; 		// r28
    __size16 local12; 		// param6{0}
    __size8 local13; 		// param7{0}
    __size8 local14; 		// param8{0}
    __size8 local15; 		// param9{0}
    unsigned int local16; 		// esi_1{0}
    __size16 local17; 		// param6{0}
    __size8 local18; 		// param7{0}
    __size8 local19; 		// param8{0}
    __size8 local20; 		// param9{0}
    __size32 local21; 		// eax_2{0}
    __size32 local22; 		// eax{0}

    eax_3 = *20;
    eax_6 = stat(3, param5, &param2);
    local12 = param6;
    local13 = param7;
    local14 = param8;
    local15 = param9;
    local17 = param6;
    local18 = param7;
    local19 = param8;
    local20 = param9;
    if (eax_6 == 0) {
        eax_8 = fopen(param5, "rb");
        if (eax_8 == 0) {
            perror(param5);
            eax_10 = 1;
            local21 = eax_10;
        }
        else {
            esi = 0;
            local16 = esi;
            if (param3 != 0) {
                do {
                    param6 = local12;
                    param7 = local13;
                    param8 = local14;
                    param9 = local15;
                    esi_1 = local16;
                    eax_11 = fread(&param4, 1, 16, eax_8);
                    local17 = param6;
                    local18 = param7;
                    local19 = param8;
                    local20 = param9;
                    if (eax_11 != 0) {
                        di = dumpline(param1, esp - 48, esi_1, eax_11, param6); /* Warning: also results in al, cl, bl */
                        local12 = di;
                        local13 = al;
                        local14 = cl;
                        local15 = bl;
                        local17 = di;
                        local18 = al;
                        local19 = cl;
                        local20 = bl;
                        esi_2 = esi_1 + eax_11;
                        local16 = esi_2;
                    }
                } while (param3 > (unsigned int)(esi_1 + eax_11));
            }
            else {
            }
            param6 = local17;
            param7 = local18;
            param8 = local19;
            param9 = local20;
            fclose(eax_8);
            eax = 0;
            local21 = eax;
        }
    }
    else {
        perror(param5);
        eax_7 = 1;
        local21 = eax_7;
    }
    eax_2 = local21;
    edx = eax_3 ^ *20;
    local22 = eax_2;
    if (edx != 0) {
        eax = __stack_chk_fail();
        local22 = eax;
    }
    eax = local22;
    return eax; /* WARNING: Also returning: di := param6, al := param7, cl := param8, bl := param9 */
}

/** address: 0x08048600 */
__size16 dumpline(int param1, int param2, unsigned int param3, int param4, __size16 param5)
{
    char cl; 		// r9
    __size16 di; 		// r7
    __size32 eax; 		// r24
    int eax_1; 		// r24{0}
    union { int; __size8 *; } eax_10; 		// r24{0}
    __size32 eax_11; 		// r24{0}
    __size32 eax_12; 		// r24{0}
    unsigned int eax_4; 		// r24{0}
    int eax_5; 		// r24{0}
    __size32 eax_6; 		// r24{0}
    __size32 eax_7; 		// r24{0}
    int ebx; 		// r27
    int ecx; 		// r25
    int edi; 		// r31
    int edi_1; 		// r31{0}
    int edi_2; 		// r31{0}
    int edi_4; 		// r31{0}
    int edi_5; 		// r31{0}
    int edx; 		// r26
    int esi; 		// r30
    int esi_1; 		// r30{0}
    int esi_2; 		// r30{0}
    int esi_4; 		// r30{0}
    int esi_7; 		// r30{0}
    int *esp_10; 		// r28{0}
    int *esp_11; 		// r28{0}
    union { int *; __size32; } esp_19; 		// r28{0}
    int *esp_2; 		// r28{0}
    int esp_22; 		// r28{0}
    int *esp_5; 		// r28{0}
    int *esp_6; 		// r28{0}
    int *esp_9; 		// r28{0}
    unsigned int local0; 		// m[esp - 156]
    __size32 local1; 		// m[esp - 160]
    int local10; 		// edi_4{0}
    int local11; 		// param1{0}
    __size16 local12; 		// di{0}
    int *local13; 		// esp_9{0}
    int local14; 		// esi{0}
    __size16 local15; 		// di{0}
    int *local16; 		// esp_10{0}
    __size32 local17; 		// eax_11{0}
    union { __size8 *; int; } local18; 		// eax_10{0}
    int local19; 		// esi_1{0}
    __size32 local2; 		// m[esp - 164]
    union { __size32; int *; } local20; 		// esp_19{0}
    int local21; 		// esi{0}
    int local3; 		// m[esp - 172]
    int local4; 		// m[esp - 128]
    int local7; 		// edi_1{0}
    __size16 local8; 		// param5{0}
    int *local9; 		// esp_5{0}

    eax_1 = *20;
    local0 = param3;
    local1 = 0x80489a0;
    local2 = 80;
    local3 = (esp_22 - 112);
    esp_2 = __sprintf_chk();
    local8 = param5;
    local9 = esp_2;
    local11 = param1;
    esi = param4;
    if (param4 > 16) {
        esi = 16;
    }
    esi_4 = esi;
    edi = 1;
    local10 = edi;
    if (esi_4 <= 0) {
        do {
bb0x80486ac:
            param5 = local8;
            esp_5 = local9;
            edi_4 = local10;
            param1 = local11;
            *(__size32*)(esp_5 + 8) = 80;
            *(__size32*)(esp_5 + 4) = 0x80489ae;
            *(int*)esp_5 = esp_22 - 112;
            esp_11 = __strcat_chk();
            local8 = param5;
            local9 = esp_11;
            local11 = param1;
            local12 = param5;
            local13 = esp_11;
            local15 = param5;
            local16 = esp_11;
            edi_5 = edi_4 + 1;
            local10 = edi_5;
        } while (edi_4 <= 15);
        edi = esp_22 - 112;
        ecx = -1;
        do {
            tmpb = 0 - *edi;
            edi +=  (DF == 0) ? 1 : -1;
            ecx--;
        } while (tmpb != 0);
        *(__size32*)(esp_22 +  ~ecx - 113) = 0x7c2020;
        cl = (unsigned char)  ~ecx + 2;
        *(int*)(esp_22 - 128) =  ~ecx + 2;
        if (esi_4 > 0) {
bb0x8048707:
            di = local15;
            esp_10 = local16;
            esi_7 = esi_4;
            edx = esp_22 + *(esp_22 - 128) - 112;
            eax_6 = 0;
            local12 = di;
            local13 = esp_10;
            local14 = esi_7;
            local17 = eax_6;
            local20 = esp_10;
            local21 = esi_7;
            do {
                eax_11 = local17;
                ecx = *(unsigned char*)(param2 + eax_11);
                cl = (unsigned char) ecx;
                if ((unsigned char) ecx - 32 > 94) {
                    cl = 46;
                }
                *(char*)edx = cl;
                eax_7 = eax_11 + 1;
                edx++;
                local17 = eax_7;
            } while (eax_11 + 1 != esi_4);
            if (esi_4 <= 15) {
bb0x80486fc:
                di = local12;
                esp_9 = local13;
                esi = local14;
                eax_5 = esp_22 + *(esp_22 - 128) + esi - 112;
                local18 = eax_5;
                local19 = esi;
                local20 = esp_9;
                do {
                    eax_10 = local18;
                    esi_1 = local19;
                    *(__size8*)eax_10 = 32;
                    esi_2 = esi_1 + 1;
                    eax_12 = eax_10 + 1;
                    local18 = eax_12;
                    local19 = esi_2;
                    local21 = esi_2;
                } while (esi_1 + 1 <= 15);
            }
            else {
            }
        }
        else {
            esi = 0;
            local14 = esi;
            goto bb0x80486fc;
        }
    }
    else {
        di = 0;
        edi = 1 >> 16 & 0xffff;
        local4 = esi_4;
        ebx = (esp_22 - 103);
        local7 = edi;
        local8 = di;
        local11 = *(esp_22 - 128);
        local15 = di;
        do {
            edi_1 = local7;
            eax_4 = *(unsigned char*)(param2 + edi_1);
            *(unsigned int*)(esp_22 - 156) = eax_4;
            *(__size32*)(esp_22 - 160) = 0x80489a7;
            *(__size32*)(esp_22 - 164) = -1;
            *(int*)(esp_22 - 172) = ebx;
            esp_6 = __sprintf_chk();
            local9 = esp_6;
            local16 = esp_6;
            edi_2 = edi_1 + 1;
            ebx += 3;
            local7 = edi_2;
        } while (edi_1 + 1 < esi_4);
        if (esi_4 > 15) {
            edi = esp_22 - 112;
            ecx = -1;
            do {
                tmpb = 0 - *edi;
                edi +=  (DF == 0) ? 1 : -1;
                ecx--;
            } while (tmpb != 0);
            *(__size32*)(esp_22 +  ~ecx - 113) = 0x7c2020;
            *(int*)(esp_22 - 128) =  ~ecx + 2;
            goto bb0x8048707;
        }
        else {
            edi = esi_4 + 1;
            local10 = edi;
            goto bb0x80486ac;
        }
    }
    esp_19 = local20;
    esi = local21;
    *(__size16*)(esp_22 + esi + *(esp_22 - 128) - 112) = 124;
    *(int*)(esp_19 + 8) = esp_22 - 112;
    *(__size32*)(esp_19 + 4) = 0x80489b2;
    *(int*)esp_19 = 1;
    __printf_chk();
    eax = eax_1 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    ebx = *(esp_19 + 156);
    return di; /* WARNING: Also returning: al := (unsigned char) eax, cl := cl, bl := (unsigned char) ebx */
}

