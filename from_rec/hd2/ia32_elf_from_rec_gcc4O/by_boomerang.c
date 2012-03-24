__size32 hexdump(int param1, struct stat param2, unsigned int param3, char param4, char *param5, __size16 param6, __size8 param7, __size8 param8, __size8 param9);
__size16 dumpline(int param1, __size8 *param2, unsigned int param3, int param4, __size16 param5);

// address: 0x80488a0
int main(int argc, char *argv[], char *envp[]) {
    __size8 al; 		// r8
    __size8 bl; 		// r11
    __size8 cl; 		// r9
    __size16 di; 		// r7
    char *eax; 		// r24
    unsigned int ebx; 		// r27
    unsigned int ebx_1; 		// r27{57}
    __size32 edi; 		// r31
    int local0; 		// m[esp - 344]
    struct stat local1; 		// m[esp - 176]
    unsigned int local2; 		// m[esp - 132]
    char local3; 		// m[esp - 88]

    ebx = 1;
    edi = 0;
    if (argc > 1) {
        do {
            ebx_1 = ebx;
            eax = *(argv + ebx_1 * 4);
            eax = hexdump(local0, local1, local2, local3, eax, di, al, cl, bl); /* Warning: also results in di, al, cl, bl */
            edi += eax;
            ebx = ebx_1 + 1;
        } while (argc > ebx_1 + 1);
    }
    return edi;
}

// address: 0x80487af
__size32 hexdump(int param1, struct stat param2, unsigned int param3, char param4, char *param5, __size16 param6, __size8 param7, __size8 param8, __size8 param9) {
    __size8 al; 		// r8
    __size8 bl; 		// r11
    __size8 cl; 		// r9
    __size16 di; 		// r7
    __size32 eax; 		// r24
    FILE *eax_1; 		// r24
    __size32 eax_2; 		// r24{99}
    int eax_3; 		// r24{14}
    int edx; 		// r26
    unsigned int esi; 		// r30
    unsigned int esi_1; 		// r30{123}
    __size16 local12; 		// param6{114}
    __size8 local13; 		// param7{115}
    __size8 local14; 		// param8{116}
    __size8 local15; 		// param9{117}
    __size16 local16; 		// param6{128}
    __size8 local17; 		// param7{129}
    __size8 local18; 		// param8{130}
    __size8 local19; 		// param9{131}

    eax_3 = *20;
    eax = stat(3, param5, &param2);
    local12 = param6;
    local13 = param7;
    local14 = param8;
    local15 = param9;
    local16 = param6;
    local17 = param7;
    local18 = param8;
    local19 = param9;
    if (eax == 0) {
        eax = fopen(param5, "rb");
        if (eax == 0) {
            perror(param5);
            eax = 1;
        } else {
            esi = 0;
            if (param3 != 0) {
                do {
                    param6 = local12;
                    param7 = local13;
                    param8 = local14;
                    param9 = local15;
                    esi_1 = esi;
                    eax = fread(&param4, 1, 16, eax);
                    local16 = param6;
                    local17 = param7;
                    local18 = param8;
                    local19 = param9;
                    if (eax == 0) {
                        break;
                    }
                    di = dumpline(param1, &param4, esi_1, eax, param6); /* Warning: also results in al, cl, bl */
                    local12 = di;
                    local13 = al;
                    local14 = cl;
                    local15 = bl;
                    local16 = di;
                    local17 = al;
                    local18 = cl;
                    local19 = bl;
                    esi = esi_1 + eax;
                } while (param3 > (unsigned int)(esi_1 + eax));
            }
            param6 = local16;
            param7 = local17;
            param8 = local18;
            param9 = local19;
            fclose(eax_1);
            eax = 0;
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
    return eax_2; /* WARNING: Also returning: di := param6, al := param7, cl := param8, bl := param9 */
}

// address: 0x8048600
__size16 dumpline(int param1, __size8 *param2, unsigned int param3, int param4, __size16 param5) {
    char cl; 		// r9
    __size16 di; 		// r7
    int eax; 		// r24
    int eax_1; 		// r24{15}
    union { void * x141; int x142; } ebx; 		// r27
    __size32 ecx; 		// r25
    int edi; 		// r31
    int edi_1; 		// r31{240}
    int edi_2; 		// r31{254}
    __size32 edx; 		// r26
    int esi; 		// r30
    int esi_1; 		// r30{321}
    int esi_2; 		// r30{232}
    int esp; 		// r28
    union { void * x143; int x144; } *esp_1; 		// r28{33}
    union { void * x143; int x144; } *esp_2; 		// r28{61}
    union { void * x143; int x144; } *esp_3; 		// r28{87}
    union { void * x143; int x144; } *esp_4; 		// r28{252}
    union { void * x143; int x144; } *esp_5; 		// r28{297}
    union { void * x143; int x144; } *esp_6; 		// r28{281}
    union { void * x143; int x144; } *esp_7; 		// r28{334}
    unsigned int local0; 		// m[esp - 156]
    __size32 local1; 		// m[esp - 160]
    __size16 local10; 		// di{273}
    union { void * x143; int x144; } *local11; 		// esp_6{281}
    __size16 local12; 		// di{289}
    union { void * x143; int x144; } *local13; 		// esp_5{297}
    union { void * x143; int x144; } *local14; 		// esp_7{334}
    __size32 local2; 		// m[esp - 164]
    union { void * x139; int x140; } local3; 		// m[esp - 172]
    int local4; 		// m[esp - 128]
    __size16 local7; 		// param5{245}
    union { void * x143; int x144; } *local8; 		// esp_4{252}
    int local9; 		// param1{366}

    eax_1 = *20;
    local0 = param3;
    local1 = 0x80489a0;
    local2 = 80;
    local3 = (esp - 112);
    esp_1 = __sprintf_chk();
    local7 = param5;
    local8 = esp_1;
    local9 = param1;
    esi = param4;
    if (param4 > 16) {
        esi = 16;
    }
    esi_2 = esi;
    edi = 1;
    if (esi_2 <= 0) {
        do {
L17:
            param5 = local7;
            esp_4 = local8;
            edi_2 = edi;
            param1 = local9;
            *(__size32*)(esp_4 + 8) = 80;
            *(__size32*)(esp_4 + 4) = 0x80489ae;
            *(union { void * x143; int x144; }*)esp_4 = esp - 112;
            esp_3 = __strcat_chk();
            local7 = param5;
            local8 = esp_3;
            local9 = param1;
            local10 = param5;
            local11 = esp_3;
            local12 = param5;
            local13 = esp_3;
            edi = edi_2 + 1;
        } while (edi_2 <= 15);
        edi = esp - 112;
        ecx = -1;
        do {
            if (ecx == 0) {
                goto L12;
            }
            tmpb = 0 - *edi;
            edi +=  (DF == 0) ? 1 : -1;
            ecx = ecx - 1;
        } while (tmpb != 0);
L12:
        *(__size32*)(esp +  !ecx - 113) = 0x7c2020;
        cl = (unsigned char)  !ecx + 2;
        local4 =  !ecx + 2;
        if (esi_2 > 0) {
L10:
            di = local12;
            esp_5 = local13;
            esi = esi_2;
            edx = esp + local4 - 112;
            eax = 0;
            local10 = di;
            local11 = esp_5;
            local14 = esp_5;
            do {
                ecx = *(unsigned char*)(param2 + eax);
                cl = (unsigned char) ecx;
                if ((unsigned char) ecx - 32 > 94) {
                    cl = 46;
                }
                *(char*)edx = cl;
                eax++;
                edx++;
            } while (eax + 1 != esi_2);
            if (esi_2 <= 15) {
L5:
                di = local10;
                esp_6 = local11;
                eax = esp + local4 + esi - 112;
                local14 = esp_6;
                do {
                    esi_1 = esi;
                    *(__size8*)eax = 32;
                    esi = esi_1 + 1;
                    eax++;
                } while (esi_1 + 1 <= 15);
            }
        } else {
            esi = 0;
            goto L5;
        }
    } else {
        di = 0;
        edi = 1 >> 16 & 0xffff;
        local4 = esi_2;
        ebx = (esp - 103);
        local7 = di;
        local9 = local4;
        local12 = di;
        do {
            edi_1 = edi;
            eax = *(unsigned char*)(param2 + edi_1);
            local0 = eax;
            local1 = 0x80489a7;
            local2 = -1;
            local3 = ebx;
            esp_2 = __sprintf_chk();
            local8 = esp_2;
            local13 = esp_2;
            edi = edi_1 + 1;
            ebx += 3;
        } while (edi_1 + 1 < esi_2);
        if (esi_2 > 15) {
            edi = esp - 112;
            ecx = -1;
            do {
                if (ecx == 0) {
                    goto L18;
                }
                tmpb = 0 - *edi;
                edi +=  (DF == 0) ? 1 : -1;
                ecx = ecx - 1;
            } while (tmpb != 0);
L18:
            *(__size32*)(esp +  !ecx - 113) = 0x7c2020;
            local4 =  !ecx + 2;
            goto L10;
        } else {
            edi = esi_2 + 1;
            goto L17;
        }
    }
    esp_7 = local14;
    esi += local4;
    *(__size16*)(esp + esi - 112) = 124;
    *(union { void * x149; int x150; }*)(esp_7 + 8) = esp - 112;
    *(__size32*)(esp_7 + 4) = 0x80489b2;
    *(union { void * x143; int x144; }*)esp_7 = 1;
    __printf_chk();
    eax = eax_1 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    ebx = *(esp_7 + 156);
    return di; /* WARNING: Also returning: al := (unsigned char) eax, cl := cl, bl := (unsigned char) ebx */
}

