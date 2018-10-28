int nwarning.1508;
int ncomment.1507;
int iexit.1504;
int main(int argc, char *argv[]);
void MAIN__(union { void *; int; } param1, int param2, union { void *; int; } param3, int param4, union { void *; int; } param5, int param6, union { void *; int; } param7, int param8, union { void *; int; } param9, int param10, union { void *; int; } param11, int param12, int param14, union { int; void *; } param15, int param15, double param17, int param18, int param18);
void herald_(union { int; void *; } param1, int param2, union { int; void *; } param3, int param4, union { int; void *; } param5, int param6, union { int; void *; } param7, int param8, union { int; void *; } param9, int param10, union { int; void *; } param11, int param12, int param13);
__size32 wffopen_(union { void *; int; } param1, int param2, union { void *; int; } param3, int param4, union { void *; int; } param5, int param6, union { void *; int; } param7, int param8, union { void *; int; } param9, int param10, union { void *; int; } param11, int param12, union { void *; int; } param13, int param14, int param15, int param16, __size32 param17, union { __size32 *; __size32; } param18, union { __size32 *; __size32; } param19, union { void *; __size32; } param20, union { __size32 *; __size32; } param21, union { __size32 *; __size32; } param22, union { __size32 *; __size32; } param23, union { __size32 *; __size32; } param24, union { __size32 *; __size32; } param25);
void hdr_io_wfftype_(__size32 param30);
void wrtout_(union { int; void *; } param1, int param2, union { int; void *; } param3, int param4, union { int; void *; } param5, int param6, union { int; void *; } param7, int param8, union { int; void *; } param9, int param10, union { int; void *; } param11, int param12, union { int; void *; } param13, int param14, int param15, int param16, __size32 param17, union { __size32 *; __size32; } param18, union { void *; __size32; } param19);
void leave_new_(union { void *; int; } param1, int param2, union { void *; int; } param3, int param4, union { void *; int; } param5, int param6, union { void *; int; } param7, int param8, union { void *; int; } param9, int param10, union { void *; int; } param11, int param12, union { void *; int; } param13, int param14, int param15, int param16, __size32 param17);
void hdr_io_int_(union { void *; int; } param1, int param2, union { void *; int; } param3, int param4, union { void *; int; } param5, int param6, union { void *; int; } param7, int param8, union { void *; int; } param9, int param10, union { void *; int; } param11, int param12, union { void *; int; } param13, int param14, int param15, int param16, __size32 param17, union { int; void *; } param18, int param19, int param20, __size32 param21, __size32 param22, int param23, __size32 param24, __size32 param25, int param26, int param27, __size32 param28, union { unsigned int *; __size32; } param29, union { long long * x1; unsigned int; __size32 *; } param30, union { __size32 *; __size32; } param31);
void leave_myproc_(union { __size32 *; __size32; } param2, __size32 param2);
void print_ij_(union { __size32 *; __size32; } param1);

/** address: 0x080707e0 */
int main(int argc, char *argv[])
{
    __size32 eax; 		// r24
    int ebp; 		// r29
    union { char *[] *; __size32; } ebx; 		// r27
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28

    _gfortran_store_exe_path();
    eax = _gfortran_set_args(); /* Warning: also results in ecx, edx */
    MAIN__(eax, ecx, edx, argv, esp - 4, SUBFLAGS32(esp - 8, 28, esp - 36), esp == 36, (unsigned int)(esp - 8) < 28, argc, argv, ebp, ebx, argv, argc, pc);
    return 0;
}

/** address: 0x08048e54 */
void MAIN__(union { void *; int; } param1, int param2, union { void *; int; } param3, int param4, union { void *; int; } param5, int param6, union { void *; int; } param7, int param8, union { void *; int; } param9, int param10, union { void *; int; } param11, int param12, int param14, union { int; void *; } param15, int param15, double param17, int param18, int param18)
{
    __size32 eax; 		// r24
    int ebx; 		// r27
    int ecx; 		// r25
    int edi; 		// r31
    int edx; 		// r26
    int edx_1; 		// r26{86}
    int edx_2; 		// r26{83}
    int edx_4; 		// r26{84}
    int esp; 		// r28
    int local123; 		// param18{79}
    int local124; 		// edx_1{86}
    int local125; 		// ebx{87}
    double st7; 		// r39

    _gfortran_set_options();
    local123 = param18;
    memmove(&param18, 0x8070900, 24);
    herald_(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param14);
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_st_read();
    _gfortran_transfer_character();
    _gfortran_st_read_done();
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_st_read();
    _gfortran_transfer_character();
    _gfortran_st_read_done();
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_st_read();
    _gfortran_transfer_character();
    _gfortran_st_read_done();
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_string_trim();
    _gfortran_transfer_character();
    if (param15 <= 0 || param15 == 0) {
bb0x8049427:
        _gfortran_st_write_done();
        _gfortran_st_open();
        _gfortran_st_rewind();
        _gfortran_st_read();
        _gfortran_transfer_character();
        _gfortran_st_read_done();
        _gfortran_st_read();
        _gfortran_transfer_character();
        _gfortran_st_read_done();
        _gfortran_st_read();
        _gfortran_transfer_character();
        _gfortran_st_read_done();
        _gfortran_st_read();
        _gfortran_transfer_character();
        _gfortran_st_read_done();
        wffopen_(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, esp - 68, esp - 0xbd8, esp - 600, esp - 0x99c, esp - 0xe4c, esp - 0x9f8, esp - 0xa0c, 0x8070a4c);
        wffopen_(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, esp - 68, esp - 0xbd8, esp - 732, esp - 0x99c, esp - 0xf14, esp - 0x9f8, esp - 0xa0c, 0x8070a50);
        wffopen_(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, esp - 68, esp - 0xbd8, esp - 864, esp - 0x99c, esp - 0xfdc, esp - 0x9f8, esp - 0xa0c, 0x8070a54);
        ecx = wffopen_(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, esp - 68, esp - 0xbd8, esp - 996, esp - 0x99c, esp - 0x10a4, esp - 0x9f8, esp - 0xa0c, 0x8070a58);
        hdr_io_wfftype_(esp - 0xe4c);
        st7 = param17;
        eax = 1;
bb0x80498d3:
        param18 = local123;
        local125 = param18;
        if (eax > 3) {
        }
        edi = eax + eax + eax - 4;
        edx_2 = eax + eax + eax - 4;
        edx_4 = 1;
        local124 = edx_4;
bb0x80498f5:
        edx_1 = local124;
        ebx = local125;
        local123 = ebx;
        if (edx_1 > 3) {
            eax++;
            goto bb0x80498d3;
        }
        ecx = edx_1 + edx_2;
        ebx = edx_1 + edi;
        st7 = *((double *)&*(esp + (edx_1 + edi) * 8 - 1984));
        *(union { double; __size64; }*)(esp + (edx_1 + edx_2) * 8 - 0xbbc) = st7;
        edx = edx_1 + 1;
        local124 = edx;
        local125 = ebx;
        goto bb0x80498f5;
    }
    free(param15);
    goto bb0x8049427;
}

/** address: 0x0806e304 */
void herald_(union { int; void *; } param1, int param2, union { int; void *; } param3, int param4, union { int; void *; } param5, int param6, union { int; void *; } param7, int param8, union { int; void *; } param9, int param10, union { int; void *; } param11, int param12, int param13)
{
    unsigned char al; 		// r8
    __size32 eax; 		// r24

    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_string_trim();
    _gfortran_transfer_character();
    if ( ~(param12 <= 0 || param11 == 0)) {
        free(param11);
    }
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_string_trim();
    _gfortran_transfer_character();
    if ( ~(param10 <= 0 || param9 == 0)) {
        free(param9);
    }
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_string_trim();
    eax = _gfortran_compare_string();
    al =  (eax == 0) ? 1 : 0;
    if ( ~(param8 <= 0 || param7 == 0)) {
        free(param7);
    }
    if ((al) != 0) {
        _gfortran_st_write();
        _gfortran_transfer_character();
        _gfortran_string_trim();
        _gfortran_transfer_character();
        if ( ~(param6 <= 0 || param5 == 0)) {
            free(param5);
        }
        _gfortran_transfer_character();
        _gfortran_transfer_character();
        _gfortran_transfer_character();
        _gfortran_st_write_done();
    }
    _gfortran_string_trim();
    eax = _gfortran_compare_string();
    al =  (eax == 0) ? 1 : 0;
    if ( ~(param4 <= 0 || param3 == 0)) {
        free(param3);
    }
    if ((al) != 0) {
        _gfortran_st_write();
        _gfortran_transfer_character();
        _gfortran_string_trim();
        _gfortran_transfer_character();
        if ( ~(param2 <= 0 || param1 == 0)) {
            free(param1);
        }
        _gfortran_transfer_character();
        _gfortran_transfer_character();
        _gfortran_transfer_character();
        _gfortran_transfer_character();
        _gfortran_transfer_character();
        _gfortran_st_write_done();
    }
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_date_and_time();
    if (param13 > 2) {
    }
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_transfer_integer();
    _gfortran_transfer_character();
    _gfortran_transfer_integer();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    return;
}

/** address: 0x0806af3c */
__size32 wffopen_(union { void *; int; } param1, int param2, union { void *; int; } param3, int param4, union { void *; int; } param5, int param6, union { void *; int; } param7, int param8, union { void *; int; } param9, int param10, union { void *; int; } param11, int param12, union { void *; int; } param13, int param14, int param15, int param16, __size32 param17, union { __size32 *; __size32; } param18, union { __size32 *; __size32; } param19, union { void *; __size32; } param20, union { __size32 *; __size32; } param21, union { __size32 *; __size32; } param22, union { __size32 *; __size32; } param23, union { __size32 *; __size32; } param24, union { __size32 *; __size32; } param25)
{
    __size32 eax; 		// r24
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28
    __size32 local64; 		// m[esp - 0x754]

    edx = *param25;
    *(__size32*)param22 = edx;
    edx = *param18;
    *(__size32*)(param22 + 4) = edx;
    ecx = memmove(param22 + 16, param20, 132);
    edx = *param24;
    *(__size32*)(param22 + 152) = edx;
    edx = *param23;
    *(__size32*)(param22 + 148) = edx;
    edx = *param19;
    *(__size32*)(param22 + 160) = edx;
    *(__size32*)param21 = 0;
    eax = *param18;
    if (eax != 0) {
        eax = *param18;
        if (eax != -1) {
            _gfortran_st_write();
            _gfortran_transfer_character();
            _gfortran_transfer_character();
            _gfortran_transfer_character();
            _gfortran_transfer_character();
            _gfortran_transfer_character();
            _gfortran_transfer_character();
            _gfortran_transfer_character();
            _gfortran_transfer_character();
            _gfortran_transfer_integer();
            _gfortran_transfer_character();
            _gfortran_transfer_character();
            _gfortran_transfer_character();
            _gfortran_st_write_done();
            wrtout_(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, 0x80734c4, esp - 512);
            leave_new_(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, local64);
        }
        edx = *param23;
        eax = *param24;
        if (edx == eax) {
            _gfortran_st_open();
            ecx = _gfortran_st_rewind();
        }
    }
    else {
        _gfortran_st_open();
        ecx = _gfortran_st_rewind();
    }
    return ecx;
}

/** address: 0x0805caa0 */
void hdr_io_wfftype_(__size32 param30)
{
    __size32 eax; 		// r24
    __size32 edx; 		// r26
    union { void *; int; } local10; 		// m[esp - 0xe48]
    int local11; 		// m[esp - 0xe44]
    union { void *; int; } local12; 		// m[esp - 0xe40]
    int local13; 		// m[esp - 0xe3c]
    union { void *; int; } local14; 		// m[esp - 0xe38]
    int local15; 		// m[esp - 0xe34]
    union { void *; int; } local16; 		// m[esp - 0xe30]
    int local17; 		// m[esp - 0xe2c]
    union { void *; int; } local18; 		// m[esp - 0xe28]
    int local19; 		// m[esp - 0xe24]
    int local20; 		// m[esp - 0xe10]
    int local21; 		// m[esp - 0xc1c]
    __size32 local22; 		// m[esp - 0xa24]
    union { int; void *; } local23; 		// m[esp - 0x5bc]
    int local24; 		// m[esp - 0x5b8]
    int local25; 		// m[esp - 772]
    __size32 local26; 		// m[esp - 768]
    __size32 local27; 		// m[esp - 764]
    int local28; 		// m[esp - 724]
    __size32 local29; 		// m[esp - 720]
    __size32 local30; 		// m[esp - 716]
    int local31; 		// m[esp - 164]
    int local32; 		// m[esp - 158]
    __size32 local33; 		// m[esp - 128]
    __size32 local34; 		// m[esp + 4]
    __size32 local35; 		// m[esp + 8]
    __size32 local36; 		// m[esp + 12]
    union { void *; int; } local6; 		// m[esp - 0xe58]
    int local7; 		// m[esp - 0xe54]
    union { void *; int; } local8; 		// m[esp - 0xe50]
    int local9; 		// m[esp - 0xe4c]

    eax = *(param30 + 4);
    if (eax == 0) {
bb0x805caf2:
        hdr_io_int_(local6, local7, local8, local9, local10, local11, local12, local13, local14, local15, local16, local17, local18, local19, local20, local21, local22, local23, local24, local25, local26, local27, local28, local29, local30, local31, local32, local33, local34, local35, local36);
    }
    else {
        eax = *(param30 + 4);
        if (eax != -1) {
bb0x805cad1:
            eax = *(param30 + 4);
            if (eax == 1) {
                edx = *(param30 + 148);
                eax = *(param30 + 152);
                if (edx == eax) {
                    goto bb0x805caf2;
                }
            }
        }
        else {
            edx = *(param30 + 148);
            eax = *(param30 + 152);
            if (edx == eax) {
                goto bb0x805caf2;
            }
            else {
                goto bb0x805cad1;
            }
        }
    }
    return;
}

/** address: 0x0806f9a4 */
void wrtout_(union { int; void *; } param1, int param2, union { int; void *; } param3, int param4, union { int; void *; } param5, int param6, union { int; void *; } param7, int param8, union { int; void *; } param9, int param10, union { int; void *; } param11, int param12, union { int; void *; } param13, int param14, int param15, int param16, __size32 param17, union { __size32 *; __size32; } param18, union { void *; __size32; } param19)
{
    unsigned char al; 		// r8
    void *eax; 		// r24
    __size32 local21; 		// param17{38}
    __size32 local3; 		// m[esp - 36]
    __size32 local4; 		// m[esp - 0x66c]

    eax = _gfortran_compare_string();
    local21 = param17;
    if (eax == 0) {
        local4 = 128;
        _gfortran_st_write();
        _gfortran_st_write_done();
    }
    else {
        memmove(&param16, param19, 500);
        eax = _gfortran_string_index();
        local3 = eax;
        local21 = local3;
        if (eax != 0) {
        }
        local4 = 0x1000;
        _gfortran_st_write();
        _gfortran_string_trim();
        _gfortran_transfer_character();
        if ( ~(param14 <= 0 || param13 == 0)) {
            free(param13);
        }
        _gfortran_st_write_done();
    }
    param17 = local21;
    _gfortran_string_trim();
    eax = _gfortran_string_index();
    al =  (eax != 0) ? 1 : 0;
    if ( ~(param12 <= 0 || param11 == 0)) {
        free(param11);
    }
    if ((al) != 0) {
        _gfortran_st_write();
        _gfortran_transfer_character();
        _gfortran_st_write_done();
        local4 = 128;
        _gfortran_st_write();
        _gfortran_st_write_done();
    }
    _gfortran_string_trim();
    _gfortran_string_trim();
    eax = _gfortran_string_index();
    if (eax != 0) {
bb0x806ff51:
        eax = 1;
    }
    else {
        eax = _gfortran_string_index();
        if (eax == 0) {
            eax = 0;
        }
        else {
            goto bb0x806ff51;
        }
    }
    if ( ~(param10 <= 0 || param9 == 0)) {
        free(param9);
    }
    if ( ~(param8 <= 0 || param7 == 0)) {
        free(param7);
    }
    if (eax != 0) {
        if (nwarning.1508 > 0x270f || ncomment.1507 > 999) {
            _gfortran_st_write();
            _gfortran_transfer_character();
            _gfortran_transfer_integer();
            _gfortran_transfer_character();
            _gfortran_transfer_integer();
            _gfortran_transfer_character();
            _gfortran_st_write_done();
        }
        else {
            _gfortran_st_write();
            _gfortran_transfer_character();
            _gfortran_transfer_integer();
            _gfortran_transfer_character();
            _gfortran_transfer_integer();
            _gfortran_transfer_character();
            _gfortran_st_write_done();
        }
        local4 = 0x1000;
        if (iexit.1504 != 0) {
            local4 = 0x1000;
            _gfortran_st_write();
            _gfortran_transfer_character();
            _gfortran_st_write_done();
        }
    }
    _gfortran_string_trim();
    eax = _gfortran_string_index();
    al =  (eax != 0) ? 1 : 0;
    if ( ~(param6 <= 0 || param5 == 0)) {
        free(param5);
    }
    if ((al) != 0) {
        iexit.1504 = 1;
    }
    _gfortran_string_trim();
    eax = _gfortran_string_index();
    if (eax == 0) {
bb0x8070317:
        eax = 0;
    }
    else {
        eax = *param18;
        if (eax != 6) {
            goto bb0x8070317;
        }
        else {
            eax = 1;
        }
    }
    if ( ~(param4 <= 0 || param3 == 0)) {
        free(param3);
    }
    if (eax != 0) {
        nwarning.1508++;
    }
    _gfortran_string_trim();
    eax = _gfortran_string_index();
    if (eax == 0) {
bb0x80703b7:
        eax = 0;
    }
    else {
        eax = *param18;
        if (eax != 6) {
            goto bb0x80703b7;
        }
        else {
            eax = 1;
        }
    }
    if ( ~(param2 <= 0 || param1 == 0)) {
        free(param1);
    }
    if (eax != 0) {
        ncomment.1507++;
    }
    return;
}

/** address: 0x0806edd8 */
void leave_new_(union { void *; int; } param1, int param2, union { void *; int; } param3, int param4, union { void *; int; } param5, int param6, union { void *; int; } param7, int param8, union { void *; int; } param9, int param10, union { void *; int; } param11, int param12, union { void *; int; } param13, int param14, int param15, int param16, __size32 param17)
{
    int esp; 		// r28
    union { __size32 *; __size32; } local34; 		// m[esp - 0x494]
    __size32 local35; 		// m[esp - 912]

    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    wrtout_(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, 0x8074180, esp - 512);
    leave_myproc_(local34, local35);
    return;
}

/** address: 0x0805cb14 */
void hdr_io_int_(union { void *; int; } param1, int param2, union { void *; int; } param3, int param4, union { void *; int; } param5, int param6, union { void *; int; } param7, int param8, union { void *; int; } param9, int param10, union { void *; int; } param11, int param12, union { void *; int; } param13, int param14, int param15, int param16, __size32 param17, union { int; void *; } param18, int param19, int param20, __size32 param21, __size32 param22, int param23, __size32 param24, __size32 param25, int param26, int param27, __size32 param28, union { unsigned int *; __size32; } param29, union { long long * x1; unsigned int; __size32 *; } param30, union { __size32 *; __size32; } param31)
{
    unsigned char al; 		// r8
    __size32 eax; 		// r24
    long long eax_1; 		// r24
    long long eax_10; 		// r24{784}
    long long eax_11; 		// r24{786}
    int eax_2; 		// r24{610}
    long long eax_3; 		// r24{624}
    long long eax_4; 		// r24{627}
    long long eax_5; 		// r24{626}
    long long eax_6; 		// r24{642}
    long long eax_7; 		// r24{661}
    int eax_8; 		// r24{696}
    long long eax_9; 		// r24{781}
    int ebx; 		// r27
    long long ebx_2; 		// r27{646}
    long long ebx_3; 		// r27{645}
    long long ebx_4; 		// r27{656}
    long long ebx_5; 		// r27{665}
    long long ebx_6; 		// r27{664}
    int esp; 		// r28
    int local161; 		// m[esp - 52]
    int local198; 		// m[esp - 48]
    int local205; 		// m[esp - 56]
    int local219; 		// m[esp - 60]
    int local22; 		// m[esp - 132]
    int local246; 		// m[esp - 136]
    int local253; 		// m[esp - 36]
    __size32 local273; 		// m[esp - 0xd84]
    int local276; 		// param26{84}
    int local277; 		// param23{268}
    long long local278; 		// eax_4{627}
    long long local279; 		// ebx_2{646}
    long long local280; 		// ebx_5{665}
    int local79; 		// m[esp - 692]
    double st7; 		// r39

    eax = *param31;
    local276 = param26;
    local277 = param23;
    local277 = param23;
    local277 = param23;
    local277 = param23;
    local277 = param23;
    local277 = param23;
    if (eax == 1) {
bb0x805cb53:
        eax = *param31;
        if (eax == 1) {
            _gfortran_st_rewind();
        }
        _gfortran_st_read();
        _gfortran_transfer_character();
        _gfortran_transfer_integer();
        _gfortran_st_read_done();
        eax = *param29;
        if (eax != 1) {
            eax = *param29;
            if (eax != 2) {
                eax = *param29;
                if (eax != 51) {
                    eax = *param29;
                    if (eax != 52) {
                        eax = *param29;
                        if (eax != 101) {
                            eax = *param29;
                            if (eax == 102) {
                                goto bb0x805cc7d;
                            }
                            _gfortran_st_backspace();
                            _gfortran_st_read();
                            _gfortran_transfer_character();
                            _gfortran_transfer_integer();
                            _gfortran_transfer_integer();
                            _gfortran_st_read_done();
                            if ( ~(param26 == 23 || param26 == 34 || param26 == 40 || param26 == 41 || param26 == 42 || param26 == 44 || param26 == 53)) {
                                _gfortran_st_write();
                                _gfortran_transfer_character();
                                _gfortran_transfer_character();
                                _gfortran_transfer_character();
                                _gfortran_transfer_character();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_character();
                                _gfortran_transfer_character();
                                _gfortran_transfer_character();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_character();
                                _gfortran_transfer_character();
                                _gfortran_transfer_character();
                                _gfortran_st_write_done();
                                wrtout_(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, 0x8072630, esp - 676);
                                leave_new_(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, local273);
                            }
bb0x805cfd0:
                            param26 = local276;
                            memmove(param30 + 792, &param27, 6);
                            *(int*)(param30 + 8) = param26;
                            *(__size32*)(param30 + 32) = 1;
                            *(__size32*)(param30 + 36) = 1;
                            *(__size32*)(param30 + 52) = 1;
                            *(__size32*)(param30 + 56) = 1;
                            *(__size32*)(param30 + 60) = 0;
                            *(union { double; __size64; }*)(param30 + 388) = 0.;
                            *(union { double; __size64; }*)(param30 + 396) = 0.;
                            *(union { double; __size64; }*)(param30 + 404) = 0.;
                            eax_1 = 1;
                            while (eax_1 <= 3) {
                                *(union { double; __size64; }*)(param30 + (eax_1 - 1) * 8 + 444) = 0.;
                                eax_1++;
                            }
                            *(union { double; __size64; }*)(param30 + 540) = 0.;
                            *(union { double; __size64; }*)(param30 + 548) = 0.;
                            *(union { double; __size64; }*)(param30 + 556) = 0.;
                            if (param26 == 22) {
                                _gfortran_st_read();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_array();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_array();
                                _gfortran_transfer_real();
                                _gfortran_transfer_array();
                                _gfortran_st_read_done();
                                local79 = param20;
                                local277 = local79;
bb0x805ea0b:
                                param23 = local277;
                                *(__size32*)param30 = param28;
                                *(__size32*)(param30 + 20) = param25;
                                *(__size32*)(param30 + 24) = param24;
                                *(int*)(param30 + 28) = param23;
                                *(__size32*)(param30 + 40) = param22;
                                *(__size32*)(param30 + 44) = param21;
                                *(int*)(param30 + 48) = param20;
                                st7 = *((double *)&*(param30 + 404));
                                al =  (st7 > 1e-6.) ? 1 : 0;
                                if ( ~((al) == 0 || param26 > 43)) {
                                    eax = *param29;
                                    if (eax != 51) {
                                        eax = *param29;
                                        if (eax != 52) {
                                            eax = *param29;
                                            if (eax != 101) {
                                                eax = *param29;
                                                if (eax != 102) {
                                                    _gfortran_st_write();
                                                    _gfortran_transfer_character();
                                                    _gfortran_transfer_character();
                                                    _gfortran_transfer_character();
                                                    _gfortran_transfer_character();
                                                    _gfortran_transfer_real();
                                                    _gfortran_transfer_character();
                                                    _gfortran_transfer_character();
                                                    _gfortran_transfer_character();
                                                    _gfortran_transfer_character();
                                                    _gfortran_transfer_character();
                                                    _gfortran_transfer_character();
                                                    _gfortran_transfer_character();
                                                    _gfortran_transfer_character();
                                                    _gfortran_transfer_character();
                                                    _gfortran_st_write_done();
                                                    wrtout_(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, 0x8072630, esp - 676);
                                                    leave_new_(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, local273);
                                                }
                                            }
                                        }
                                    }
                                }
                                *(__size32*)(param30 + 84) = 265;
                                *(__size32*)(param30 + 92) = 1;
                                *(__size32*)(param30 + 96) = param24;
                                *(__size32*)(param30 + 88) = 1;
                            }
                            if (param26 == 23) {
                                _gfortran_st_read();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_array();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_array();
                                _gfortran_transfer_real();
                                _gfortran_transfer_array();
                                _gfortran_st_read_done();
                                local79 = param20;
                                local277 = local79;
                                goto bb0x805ea0b;
                            }
                            if (param26 == 34) {
                                _gfortran_st_read();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_array();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_real();
                                _gfortran_transfer_array();
                                _gfortran_st_read_done();
                                goto bb0x805ea0b;
                            }
                            if (param26 == 40) {
                                _gfortran_st_read();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_array();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_transfer_array();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_st_read_done();
                                goto bb0x805ea0b;
                            }
                            if (param26 == 41) {
                                _gfortran_st_read();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_array();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_transfer_array();
                                _gfortran_transfer_array();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_st_read_done();
                                goto bb0x805ea0b;
                            }
                            if (param26 == 42) {
                                _gfortran_st_read();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_array();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_transfer_array();
                                _gfortran_transfer_array();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_st_read_done();
                                goto bb0x805ea0b;
                            }
                            if (param26 > 43) {
                                _gfortran_st_read();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_array();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_integer();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_transfer_array();
                                _gfortran_transfer_array();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_st_read_done();
                                goto bb0x805ea0b;
                            }
                            goto bb0x805ea0b;
                        }
                    }
                }
            }
        }
bb0x805cc7d:
        local22 = 22;
        local276 = local22;
        goto bb0x805cfd0;
    }
    eax = *param31;
    if (eax == 5) {
        goto bb0x805cb53;
    }
    eax = *param31;
    if (eax == 2) {
bb0x8062708:
        eax = *param31;
        if (eax == 2) {
            _gfortran_st_rewind();
        }
        _gfortran_st_write();
        _gfortran_transfer_character();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_st_write_done();
        _gfortran_st_write();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_transfer_array();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_transfer_integer();
        _gfortran_transfer_real();
        _gfortran_transfer_real();
        _gfortran_transfer_real();
        _gfortran_transfer_real();
        _gfortran_transfer_array();
        _gfortran_transfer_array();
        _gfortran_transfer_real();
        _gfortran_transfer_real();
        _gfortran_transfer_real();
        _gfortran_st_write_done();
        _gfortran_st_write();
        _gfortran_transfer_array();
        _gfortran_transfer_array();
        _gfortran_transfer_array();
        _gfortran_transfer_array();
        _gfortran_transfer_array();
        _gfortran_transfer_array();
        _gfortran_transfer_array();
        _gfortran_transfer_array();
        _gfortran_transfer_array();
        _gfortran_transfer_array();
        _gfortran_transfer_array();
        _gfortran_transfer_array();
        _gfortran_st_write_done();
        ebx = *(param30 + 28);
        local161 = 1;
        if (1 <= ebx) {
            do {
                _gfortran_st_write();
                _gfortran_transfer_character();
                _gfortran_transfer_real();
                _gfortran_transfer_real();
                _gfortran_transfer_integer();
                _gfortran_transfer_integer();
                _gfortran_transfer_integer();
                _gfortran_transfer_integer();
                _gfortran_transfer_integer();
                _gfortran_st_write_done();
                al =  (local161 == ebx) ? 1 : 0;
                local161++;
            } while ((al) == 0);
        }
        _gfortran_st_write();
        _gfortran_transfer_real();
        _gfortran_transfer_array();
        _gfortran_transfer_real();
        _gfortran_transfer_real();
        _gfortran_st_write_done();
        eax = *(param30 + 60);
        if (eax == 1) {
        }
    }
    else {
        eax = *param31;
        if (eax != 6) {
            eax = *param31;
            if (eax == 3) {
bb0x8063d1d:
                _gfortran_st_write();
                _gfortran_transfer_character();
                _gfortran_st_write_done();
                eax = *param31;
                if (eax == 3) {
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_st_write_done();
                }
                eax = *param31;
                if (eax == 4) {
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_st_write_done();
                }
                _gfortran_st_write();
                _gfortran_transfer_character();
                _gfortran_st_write_done();
                _gfortran_st_write();
                _gfortran_transfer_character();
                _gfortran_st_write_done();
                _gfortran_st_write();
                _gfortran_transfer_character();
                _gfortran_transfer_character();
                _gfortran_transfer_integer();
                _gfortran_transfer_integer();
                _gfortran_st_write_done();
                _gfortran_st_write();
                _gfortran_transfer_character();
                _gfortran_st_write_done();
                _gfortran_st_write();
                _gfortran_transfer_character();
                _gfortran_st_write_done();
                _gfortran_st_write();
                _gfortran_transfer_character();
                _gfortran_transfer_integer();
                _gfortran_transfer_integer();
                _gfortran_transfer_integer();
                _gfortran_transfer_integer();
                _gfortran_st_write_done();
                _gfortran_st_write();
                _gfortran_transfer_character();
                _gfortran_transfer_array();
                _gfortran_transfer_integer();
                _gfortran_st_write_done();
                eax = *(param30 + 8);
                if (eax > 22) {
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_transfer_integer();
                    _gfortran_transfer_integer();
                    _gfortran_st_write_done();
                }
                eax = *(param30 + 8);
                if (eax > 23) {
                    eax = *(param30 + 8);
                    if (eax > 40) {
                        eax = *(param30 + 8);
                        if (eax == 41) {
bb0x806464f:
                            _gfortran_st_write();
                            _gfortran_transfer_character();
                            _gfortran_transfer_integer();
                            _gfortran_transfer_integer();
                            _gfortran_transfer_integer();
                            _gfortran_transfer_integer();
                            _gfortran_transfer_integer();
                            _gfortran_transfer_integer();
                            _gfortran_st_write_done();
                        }
                        else {
                            eax = *(param30 + 8);
                            if (eax != 42) {
                                eax = *(param30 + 8);
                                if (eax > 43) {
                                    _gfortran_st_write();
                                    _gfortran_transfer_character();
                                    _gfortran_transfer_integer();
                                    _gfortran_transfer_integer();
                                    _gfortran_transfer_integer();
                                    _gfortran_transfer_integer();
                                    _gfortran_st_write_done();
                                    _gfortran_st_write();
                                    _gfortran_transfer_character();
                                    _gfortran_transfer_integer();
                                    _gfortran_transfer_integer();
                                    _gfortran_transfer_integer();
                                    _gfortran_st_write_done();
                                }
                            }
                            else {
                                goto bb0x806464f;
                            }
                        }
                    }
                    else {
                        _gfortran_st_write();
                        _gfortran_transfer_character();
                        _gfortran_transfer_integer();
                        _gfortran_transfer_integer();
                        _gfortran_transfer_integer();
                        _gfortran_transfer_integer();
                        _gfortran_transfer_integer();
                        _gfortran_st_write_done();
                    }
                }
                else {
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_transfer_integer();
                    _gfortran_transfer_integer();
                    _gfortran_transfer_integer();
                    _gfortran_transfer_integer();
                    _gfortran_st_write_done();
                }
                eax = *(param30 + 8);
                if (eax == 40) {
bb0x806498d:
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_transfer_real();
                    _gfortran_transfer_real();
                    _gfortran_st_write_done();
                }
                else {
                    eax = *(param30 + 8);
                    if (eax == 41) {
                        goto bb0x806498d;
                    }
                    else {
                        eax = *(param30 + 8);
                        if (eax != 42) {
                            eax = *(param30 + 8);
                            if (eax > 43) {
                                _gfortran_st_write();
                                _gfortran_transfer_character();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_transfer_real();
                                _gfortran_st_write_done();
                            }
                        }
                        else {
                            goto bb0x806498d;
                        }
                    }
                }
                _gfortran_st_write();
                _gfortran_transfer_character();
                _gfortran_transfer_real();
                _gfortran_st_write_done();
                eax = *(param30 + 8);
                if (eax > 40) {
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_transfer_array();
                    _gfortran_st_write_done();
                }
                _gfortran_st_write();
                _gfortran_transfer_character();
                _gfortran_transfer_array();
                _gfortran_st_write_done();
                _gfortran_st_write();
                _gfortran_transfer_character();
                _gfortran_transfer_array();
                _gfortran_st_write_done();
                _gfortran_st_write();
                _gfortran_transfer_character();
                _gfortran_transfer_array();
                _gfortran_st_write_done();
                eax = *(param30 + 8);
                if (eax == 40) {
bb0x8064f77:
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_transfer_real();
                    _gfortran_transfer_real();
                    _gfortran_st_write_done();
                }
                else {
                    eax = *(param30 + 8);
                    if (eax != 41) {
                        eax = *(param30 + 8);
                        if (eax > 41) {
                            _gfortran_st_write();
                            _gfortran_transfer_character();
                            _gfortran_transfer_real();
                            _gfortran_transfer_real();
                            _gfortran_transfer_real();
                            _gfortran_st_write_done();
                        }
                    }
                    else {
                        goto bb0x8064f77;
                    }
                }
                _gfortran_st_write();
                _gfortran_st_write_done();
                eax = *param31;
                if (eax != 3) {
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_st_write_done();
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_transfer_array();
                    _gfortran_st_write_done();
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_transfer_array();
                    _gfortran_st_write_done();
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_transfer_array();
                    _gfortran_st_write_done();
                    eax = *(param30 + 8);
                    if (eax > 39) {
                        _gfortran_st_write();
                        _gfortran_transfer_character();
                        _gfortran_transfer_array();
                        _gfortran_st_write_done();
                    }
                    eax = *(param30 + 8);
                    if (eax > 39) {
                        _gfortran_st_write();
                        _gfortran_transfer_character();
                        _gfortran_st_write_done();
                        _gfortran_st_write();
                        _gfortran_transfer_array();
                        _gfortran_st_write_done();
                    }
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_st_write_done();
                    eax = *(param30 + 44);
                    eax = ((unsigned int)eax >> 31) + eax >> 1;
                    local198 = 1;
                    if (1 <= eax) {
                        do {
                            _gfortran_st_write();
                            _gfortran_transfer_character();
                            _gfortran_transfer_array();
                            _gfortran_transfer_character();
                            _gfortran_transfer_array();
                            _gfortran_st_write_done();
                            al =  (local198 == eax) ? 1 : 0;
                            local198++;
                        } while ((al) == 0);
                    }
                    eax = *(param30 + 44);
                    eax_2 = ((unsigned int)eax >> 31) + eax >> 1;
                    eax = *(param30 + 44);
                    if (eax_2 + eax_2 != eax) {
                        _gfortran_st_write();
                        _gfortran_transfer_character();
                        _gfortran_transfer_array();
                        _gfortran_st_write_done();
                    }
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_transfer_array();
                    _gfortran_st_write_done();
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_st_write_done();
                    eax_3 = *(param30 + 24);
                    local278 = eax_3;
                    if (eax_3 > 50) {
                        eax_5 = 50;
                        local278 = eax_5;
                    }
                    eax_4 = local278;
                    local205 = 1;
                    if (1 <= eax_4) {
                        do {
                            _gfortran_st_write();
                            _gfortran_transfer_character();
                            _gfortran_transfer_array();
                            _gfortran_st_write_done();
                            al =  (local205 == eax_4) ? 1 : 0;
                            local205++;
                        } while ((al) == 0);
                    }
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_st_write_done();
                    eax_6 = *(param30 + 24);
                    local205 = 1;
                    if (eax_6 > 0) {
                        ebx_3 = (unsigned long long)((eax_6 - 1) * (unsigned long long)0xcccccccd >> 32) >> 3;
                        local279 = ebx_3;
                        for(;;) {
                            ebx_2 = local279;
                            _gfortran_st_write();
                            _gfortran_transfer_character();
                            eax = *(param30 + 24);
                            if (local205 + 9 >= eax) {
                            }
                            _gfortran_transfer_array();
                            _gfortran_st_write_done();
                            local205 += 10;
                            if (ebx_2 == 0) {
                                break;
                            }
                            ebx_4 = ebx_2 - 1;
                            local279 = ebx_4;
                        }
                    }
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_st_write_done();
                    eax_7 = *param30;
                    local219 = 1;
                    if (eax_7 > 0) {
                        ebx_6 = (unsigned long long)((eax_7 - 1) * (unsigned long long)0xcccccccd >> 32) >> 3;
                        local280 = ebx_6;
                        for(;;) {
                            ebx_5 = local280;
                            _gfortran_st_write();
                            _gfortran_transfer_character();
                            eax = *param30;
                            if (local219 + 9 >= eax) {
                            }
                            _gfortran_transfer_array();
                            _gfortran_st_write_done();
                            local219 += 10;
                            if (ebx_5 == 0) {
                                break;
                            }
                            ebx = ebx_5 - 1;
                            local280 = ebx;
                        }
                    }
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_st_write_done();
                    eax = *(param30 + 44);
                    eax = ((unsigned int)eax >> 31) + eax >> 1;
                    local198 = 1;
                    if (1 <= eax) {
                        do {
                            _gfortran_st_write();
                            _gfortran_transfer_character();
                            _gfortran_transfer_array();
                            _gfortran_transfer_character();
                            _gfortran_transfer_array();
                            _gfortran_st_write_done();
                            al =  (local198 == eax) ? 1 : 0;
                            local198++;
                        } while ((al) == 0);
                    }
                    eax = *(param30 + 44);
                    eax_8 = ((unsigned int)eax >> 31) + eax >> 1;
                    eax = *(param30 + 44);
                    if (eax_8 + eax_8 != eax) {
                        _gfortran_st_write();
                        _gfortran_transfer_character();
                        _gfortran_transfer_array();
                        _gfortran_st_write_done();
                    }
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_transfer_array();
                    _gfortran_st_write_done();
                    _gfortran_st_write();
                    _gfortran_st_write_done();
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_st_write_done();
                    ebx = *(param30 + 28);
                    local161 = 1;
                    if (1 <= ebx) {
                        do {
                            _gfortran_st_write();
                            _gfortran_transfer_character();
                            _gfortran_string_trim();
                            _gfortran_transfer_character();
                            if ( ~(param19 <= 0 || param18 == 0)) {
                                free(param18);
                            }
                            _gfortran_st_write_done();
                            _gfortran_st_write();
                            _gfortran_transfer_character();
                            _gfortran_transfer_real();
                            _gfortran_transfer_character();
                            _gfortran_transfer_real();
                            _gfortran_transfer_character();
                            _gfortran_transfer_integer();
                            _gfortran_transfer_character();
                            _gfortran_transfer_integer();
                            _gfortran_transfer_character();
                            _gfortran_transfer_integer();
                            _gfortran_transfer_character();
                            _gfortran_transfer_integer();
                            _gfortran_st_write_done();
                            eax = *(param30 + 8);
                            if (eax > 43) {
                                eax = *(param30 + 60);
                                if (eax != 1) {
                                    _gfortran_st_write();
                                    _gfortran_transfer_character();
                                    _gfortran_transfer_integer();
                                    _gfortran_st_write_done();
                                    goto bb0x8066cd7;
                                }
                                else {
                                    _gfortran_st_write();
                                    _gfortran_transfer_character();
                                    _gfortran_transfer_integer();
                                    _gfortran_st_write_done();
                                }
                            }
bb0x8066cd7:
                            al =  (local161 == ebx) ? 1 : 0;
                            local161++;
                        } while ((al) == 0);
                    }
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_st_write_done();
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_st_write_done();
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_transfer_real();
                    _gfortran_transfer_real();
                    _gfortran_transfer_real();
                    _gfortran_st_write_done();
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_st_write_done();
                    ebx = *(param30 + 20);
                    local246 = 1;
                    if (1 <= ebx) {
                        do {
                            _gfortran_st_write();
                            _gfortran_transfer_character();
                            _gfortran_transfer_array();
                            _gfortran_st_write_done();
                            al =  (local246 == ebx) ? 1 : 0;
                            local246++;
                        } while ((al) == 0);
                    }
                    eax_9 = *(param30 + 60);
                    if (eax_9 == 1) {
                        local253 = 1;
                        eax_10 = *(param30 + 20);
                        if (eax_10 > 1) {
                            eax_11 = *(param30 + 20);
                            local253 = eax_11 - 1;
                        }
                        eax_1 = *(param30 + 20);
                        if (local253 <= 0) {
                            if (eax_1 <= 1) {
                                for(;;) {
bb0x8067155:
                                    *(__size32*)(%ebp - 40) = %eax;
                                    *(__size32*)(%ebp - 0x898) = %eax;
                                    *(__size32*)(%ebp - 164) = 1;
                                    if ( ~flags) {
                                        *(__size32*)(%ebp - 0x880) = 0x8072540;
                                        *(__size32*)(%ebp - 0x87c) = 699;
                                        *(__size32*)(%ebp - 0x858) = 0x8072eac;
                                        *(__size32*)(%ebp - 0x854) = 13;
                                        *(__size32*)(%ebp - 0x888) = 0x1000;
                                        *(__size32*)(%ebp - 0x884) = %eax;
                                        *(__size32*)%esp = %eax;
                                        _gfortran_st_write();
                                        *(__size32*)(%esp + 8) = 7;
                                        *(__size32*)(%esp + 4) = 0x8072eb9;
                                        *(__size32*)%esp = %eax;
                                        _gfortran_transfer_character();
                                        *(__size32*)(%esp + 8) = 4;
                                        *(__size32*)(%esp + 4) = %eax;
                                        *(__size32*)%esp = %eax;
                                        _gfortran_transfer_integer();
                                        *(__size32*)(%esp + 8) = 1;
                                        *(__size32*)(%esp + 4) = 0x8072ec0;
                                        *(__size32*)%esp = %eax;
                                        _gfortran_transfer_character();
                                        *(__size32*)(%esp + 8) = 4;
                                        *(__size32*)(%esp + 4) = %eax;
                                        *(__size32*)%esp = %eax;
                                        _gfortran_transfer_integer();
                                        *(__size32*)(%esp + 8) = 48;
                                        *(__size32*)(%esp + 4) = 0x8072ec4;
                                        *(__size32*)%esp = %eax;
                                        _gfortran_transfer_character();
                                        *(__size32*)%esp = %eax;
                                        _gfortran_st_write_done();
                                        *(__size32*)(%ebp - 0x88c) = %ecx;
                                        *(__size32*)(%ebp - 1496) = 537;
                                        *(__size32*)(%ebp - 1488) = 1;
                                        *(__size32*)(%ebp - 1484) = %eax;
                                        *(__size32*)(%ebp - 1492) = %esi;
                                        *(__size32*)(%ebp - 0x97c) = %eax;
                                        *(__size32*)(%ebp - 1504) = %eax;
                                        *(__size32*)(%ebp - 1500) = 0;
                                        *(__size32*)%esp = %eax;
                                        _gfortran_internal_pack();
                                        *(__size32*)(%ebp - 0x890) = %eax;
                                        *(__size32*)(%ebp - 0x894) = %esi;
                                        *(__size32*)(%ebp - 1472) = 265;
                                        *(__size32*)(%ebp - 1464) = 1;
                                        *(__size32*)(%ebp - 1460) = %eax;
                                        *(__size32*)(%ebp - 1468) = %esi;
                                        *(__size32*)(%ebp - 0x978) = %eax;
                                        *(__size32*)(%ebp - 1480) = %eax;
                                        *(__size32*)(%ebp - 1476) = 0;
                                        *(__size32*)%esp = %eax;
                                        _gfortran_internal_pack();
                                        *(__size32*)(%ebp - 0x974) = %eax;
                                        *(__size32*)(%ebp - 0x970) = %eax;
                                        *(__size32*)(%esp + 36) = 0x8072ef4;
                                        *(__size32*)(%esp + 32) = 0x8072ef8;
                                        *(__size32*)(%esp + 28) = %esi;
                                        *(__size32*)(%esp + 24) = 0x8072ef4;
                                        *(__size32*)(%esp + 20) = %ecx;
                                        *(__size32*)(%esp + 16) = 0x8072f00;
                                        *(__size32*)(%esp + 12) = 0x8072ef4;
                                        *(__size32*)(%esp + 8) = %ebx;
                                        *(__size32*)(%esp + 4) = %eax;
                                        *(__size32*)%esp = %eax;
                                        print_ij_();
                                    }
                                    *(__size32*)(%ebp - 132) = %eax;
                                    if (flags) {
                                        break;
                                    }
                                    *(__size32*)(%ebp - 0x8a0)--;
                                }
                            }
                        }
                        else {
                            if (eax_1 > 0) {
                                goto bb0x8067155;
                            }
                        }
                    }
                    if ( ~flags) {
                        *(__size32*)(%ebp - 0x880) = 0x8072540;
                        *(__size32*)(%ebp - 0x87c) = 708;
                        *(__size32*)(%ebp - 0x858) = 0x807297f;
                        *(__size32*)(%ebp - 0x854) = 3;
                        *(__size32*)(%ebp - 0x888) = 0x1000;
                        *(__size32*)(%ebp - 0x884) = %eax;
                        *(__size32*)%esp = %eax;
                        _gfortran_st_write();
                        *(__size32*)(%esp + 8) = 48;
                        *(__size32*)(%esp + 4) = 0x8072f04;
                        *(__size32*)%esp = %eax;
                        _gfortran_transfer_character();
                        *(__size32*)%esp = %eax;
                        _gfortran_st_write_done();
                    }
                    if ( ~flags) {
                        *(__size32*)(%ebp - 0x880) = 0x8072540;
                        *(__size32*)(%ebp - 0x87c) = 709;
                        *(__size32*)(%ebp - 0x858) = 0x807297f;
                        *(__size32*)(%ebp - 0x854) = 3;
                        *(__size32*)(%ebp - 0x888) = 0x1000;
                        *(__size32*)(%ebp - 0x884) = %eax;
                        *(__size32*)%esp = %eax;
                        _gfortran_st_write();
                        *(__size32*)(%esp + 8) = 40;
                        *(__size32*)(%esp + 4) = 0x8072f34;
                        *(__size32*)%esp = %eax;
                        _gfortran_transfer_character();
                        *(__size32*)%esp = %eax;
                        _gfortran_st_write_done();
                    }
                    *(__size32*)(%ebp - 0x880) = 0x8072540;
                    *(__size32*)(%ebp - 0x87c) = 711;
                    *(__size32*)(%ebp - 0x858) = 0x807297f;
                    *(__size32*)(%ebp - 0x854) = 3;
                    *(__size32*)(%ebp - 0x888) = 0x1000;
                    *(__size32*)(%ebp - 0x884) = %eax;
                    *(__size32*)%esp = %eax;
                    _gfortran_st_write();
                    *(__size32*)(%esp + 8) = 80;
                    *(__size32*)(%esp + 4) = 0x8072984;
                    *(__size32*)%esp = %eax;
                    _gfortran_transfer_character();
                    *(__size32*)%esp = %eax;
                    _gfortran_st_write_done();
                }
                else {
                    _gfortran_st_write();
                    _gfortran_transfer_character();
                    _gfortran_transfer_integer();
                    _gfortran_transfer_character();
                    _gfortran_st_write_done();
                }
            }
            else {
                eax = *param31;
                if (eax == 4) {
                    goto bb0x8063d1d;
                }
            }
        }
        else {
            goto bb0x8062708;
        }
    }
    if ( ~flags) {
        *(__size32*)%esp = %eax;
        free(*(%esp + 4));
    }
    *(__size32*)(%ebp - 724) = 0;
    if ( ~flags) {
        *(__size32*)%esp = %eax;
        free(*(%esp + 4));
    }
    *(__size32*)(%ebp - 156) = 0;
    if ( ~flags) {
        *(__size32*)%esp = %eax;
        free(*(%esp + 4));
    }
    *(__size32*)(%ebp - 116) = 0;
    return;
}

/** address: 0x08070748 */
void leave_myproc_(union { __size32 *; __size32; } param2, __size32 param2)
{
    __size32 eax; 		// r24
    int ebp; 		// r29
    __size32 ebx; 		// r27
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28
    int local3; 		// m[esp - 252]
    int local6; 		// m[esp - 264]

    local3 = 56;
    local6 = 256;
    _gfortran_st_inquire();
    if (param2 != 0) {
        local3 = 57;
        local6 = 0;
        _gfortran_st_close();
    }
    _gfortran_exit_i4();
    _gfortran_store_exe_path();
    eax = _gfortran_set_args(); /* Warning: also results in ecx, edx */
    MAIN__(eax, ecx, edx, param2, esp - 288, SUBFLAGS32(esp - 292, 28, esp - 320), esp - 284 == 36, (unsigned int)(esp - 292) < 28, ebp, esp - 16, local3, 0x80743cc, 7, local6, 0x80743e0, esp - 4, ebx, param2, param1, pc, param2, param2, param1);
    return;
}

/** address: 0x0806d2a0 */
void print_ij_(union { __size32 *; __size32; } param1)
{
    __size32 eax; 		// r24

    eax = *param1;
    if (eax + 1 <= 1) {
bb0x806d2c0:
    }
    goto bb0x806d2c0;
}

