union { __size32 * x413; long long * x412; __size8; int[]; double x313; } bright_html_carray;
int n_tokens = 0xea60;
int cur_color = -1;
__size32 one_token;// 4 bytes
__size32 global_0x080796a8;// 4 bytes
__size32 symb_flag;// 4 bytes
__size32 sign_cmp_flag;// 4 bytes
__size32 approximate_roots;// 4 bytes
__size32 zero_token;// 4 bytes
__size32 global_0x08079918;// 4 bytes
int gfp;
union { int; void *; } lhs[100];
__size32 partial_flag;// 4 bytes
__size32 rhs[100];
__size32 domain_check;// 4 bytes
__size32 high_prec;// 4 bytes
__size32 repeat_flag;// 4 bytes
int main(int argc, char *argv[]);
__size80 init_gvars();
__size32 init_mem(__size8 param2, __size8 param3, __size8 param3, __size80 param4);
void usage();
__size32 get_screen_size();
__size32 load_rc(char param1);
__size32 clean_up(__size32 param1, __size32 param2);
__size32 error(__size32 param1, __size32 param2, __size32 param3);
void set_signals();
void f_to_fraction(double *param1, double param2, double param3, union { union { __size64; double; } *; __size32; } param4, union { union { __size64; double; } *; __size32; } param5, union { __size80; double; } param7, unsigned int param8, union { __size80; double; } param9, union { __size80; double; } param10, __size80 param10);
void main_io_loop(__size32 param1, __size32 param2);
void exit_program(int param1);
void read_file(int param1, char param2, union { union { char; __size8; } *; __size32; } param3, __size32 param4, __size32 param5);
__size32 alloc_next_espace(int param1);
__size8 clear_all();
void set_error_level(union { __size32; char *; unsigned char *; } param1);
void set_options();
__size32 set_color(int param1, __size32 param2, __size32 param3);
__size32 default_color(__size32 param1, __size32 param2);
__size80 my_round(double *param1, union { double; __size32; } param2, union { __size80; double; } param3, unsigned int param4);
__size80 gcd(double param1, double param2, union { __size80; double; } param3, union { __size80; double; } param4, __size80 param5, __size80 param6);
void reset_attr();
__size32 read_sub(int param1, union { FILE *; __size32; } param2);
__size32 alloc_espace(int param1, __size32 param2, __size32 param3);
__size32 warning(__size32 param1, __size32 param3, __size32 param3);
void remove_trailing_spaces(__size32 param1);
__size32 skip_space(union { unsigned char *; __size32; } param1, __size32 param2, __size32 param3);
void skip_param(unsigned int param1, int param2, union { unsigned int; unsigned char *; } param3, __size32 param5, __size32 param5);
void skip_no(union { __size32 *; __size32; } param1);
void output_current_directory(char param1, __size32 param2);
void decstrtol(union { int; char *; } param1, union { int * x1; unsigned int; char **; } param2);
void extra_characters(__size32 param1, __size32 param3, __size32 param3);
void my_strlcpy(__size32 param1);
void strcmp_tospace(union { unsigned char *; __size32; } param1, union { unsigned char *; __size32; } param2);
void save_set_options(__size32 param1, __size32 param2);
__size32 display_process(__size32 param1, __size32 param2, __size32 param3);
__size32 isdelimiter(unsigned int param1);
void output_options(__size32 param1);
void version_report();

/** address: 0x080498b9 */
int main(int argc, char *argv[])
{
    char ah; 		// r12
    __size8 al; 		// r8
    unsigned char al_1; 		// r8{183}
    short ax; 		// r0
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    __size32 eax; 		// r24
    char *eax_11; 		// r24{134}
    union { char *; int; } eax_13; 		// r24{35}
    int eax_16; 		// r24{38}
    union { __size32; FILE *; } eax_17; 		// r24{85}
    union { FILE *; int; } eax_18; 		// r24{87}
    int eax_2; 		// r24{0}
    int eax_6; 		// r24{24}
    int eax_9; 		// r24{122}
    int ebp; 		// r29
    unsigned int ebx; 		// r27
    int ecx; 		// r25
    int edi_1; 		// r31{29}
    __size32 edi_10; 		// r31{0}
    int edi_4; 		// r31{41}
    int edi_7; 		// r31{105}
    int edx; 		// r26
    __size32 esi_1; 		// r30{27}
    __size32 esi_10; 		// r30{44}
    __size32 esi_13; 		// r30{104}
    __size32 esi_16; 		// r30{0}
    __size32 esi_4; 		// r30{83}
    __size32 esi_7; 		// r30{33}
    int esp; 		// r28
    unsigned short fcw; 		// r42
    unsigned short local0; 		// m[esp - 54]
    short local1; 		// m[esp - 56]
    union { __size32; char *; } local17; 		// m[esp - 24]
    __size32 local18; 		// m[esp - 76]
    union { char *; __size32; } local19; 		// m[esp - 80]
    char local2; 		// m[esp - 0x1088]
    __size32 local20; 		// m[esp - 84]
    long long local21; 		// m[esp - 88]
    __size32 local23; 		// m[r28]{204}
    union { double; __size64; } local25; 		// m[r28]{209}
    union { double; __size64; } local27; 		// m[r28]{215}
    __size32 local28; 		// esi_13{104}
    int local29; 		// edi_7{105}
    __size32 local3; 		// m[esp - 60]
    union { double; __size80; } local30; 		// st_1{106}
    char **local5; 		// m[esp - 96]
    int local6; 		// m[esp - 92]
    __size80 st; 		// r32
    __size80 st1; 		// r33
    __size80 st2; 		// r34
    __size80 st3; 		// r35
    __size80 st4; 		// r36
    __size80 st5; 		// r37
    __size80 st6; 		// r38
    double st7; 		// r39
    union { __size80; double; } st_1; 		// r32{106}
    double st_2; 		// r32{68}

    init_gvars();
    local30 = st;
    eax_6 = *(&bright_html_carray + 0x1790);
    *(int*)(&bright_html_carray + 0x1acc) = eax_6;
    *(int*)(&bright_html_carray + 0x9bf4) = eax_6;
    esi_1 = 0;
    local3 = 0;
    edi_1 = 0;
    local28 = esi_1;
    local29 = edi_1;
    for(;;) {
bb0x8049a9f:
        esi_13 = local28;
        edi_7 = local29;
        st_1 = local30;
        getopt(argc, argv, "s:bqrtchuvwxm:");
        local28 = esi_13;
        local28 = esi_13;
        local28 = esi_13;
        local28 = esi_13;
        local28 = esi_13;
        local28 = esi_13;
        local28 = esi_13;
        local29 = edi_7;
        local29 = edi_7;
        local29 = edi_7;
        local29 = edi_7;
        local29 = edi_7;
        local29 = edi_7;
        local29 = edi_7;
        local29 = edi_7;
        local29 = edi_7;
        local30 = st_1;
        local30 = st_1;
        local30 = st_1;
        local30 = st_1;
        local30 = st_1;
        local30 = st_1;
        local30 = st_1;
        local30 = st_1;
        local30 = st_1;
        if (eax_9 < 0) {
            if (*(&bright_html_carray + 0x1550) <= 99) {
                __fprintf_chk();
                exit(2);
            }
            init_mem((unsigned char) argc, cl, (unsigned char) argv, st7);
            if (eax == 0) {
                __fprintf_chk();
                exit(2);
            }
            if (*0x80792a4 != 0) {
                getenv("HOME");
                if (eax_11 != 0) {
                    edx = *(&bright_html_carray + 0x16b0);
                    dl = (unsigned char) edx;
                    if (edx != 0) {
                        __snprintf_chk();
                        *(__size32*)(&bright_html_carray + 0x1d20) = 0x8081a20;
                    }
                }
                rl_initialize();
                using_history();
                stifle_history();
                *(__size32*)(&bright_html_carray + 0x1750) = 1;
                if (*0x8082f10 == 0) {
                    tigetnum("colors");
                    al =  (eax > 7) ? 1 : 0;
                    *(unsigned int*)(&bright_html_carray + 0x1694) = (al);
                }
                eax = *(&bright_html_carray + 0x1d20);
                al = (unsigned char) eax;
                read_history();
            }
            get_screen_size();
            if (*0x8082f10 != 0) {
                __printf_chk();
            }
            if (*0x80796c0 == 0) {
                if (*0x807969c == 0) {
                    if (*(&bright_html_carray + 0x1d10) > 1) {
                        __printf_chk();
                    }
                    __printf_chk();
                    __printf_chk();
                    eax = *(&bright_html_carray + 0x1550);
                    tmpl = (eax << 5) * 0x10624dd3;
                    al = (unsigned char) tmpl;
                    dl = (unsigned char) (unsigned long long)(tmpl >> 32) >> 6;
                    __printf_chk();
                    if (*0x80796c0 == 0) {
                        goto bb0x8049cb4;
                    }
                    goto bb0x8049ceb;
                }
bb0x8049cb4:
                load_rc(local2);
                if (eax == 0) {
                    eax = *(&bright_html_carray + 0x1774);
                    al = (unsigned char) eax;
                    __fprintf_chk();
                }
            }
bb0x8049ceb:
            if (esi_13 != 0) {
                *(__size32*)(&bright_html_carray + 0x156c) = 0;
                *(__size32*)(&bright_html_carray + 0x1570) = 0;
            }
            if ((edi_7 & 0x1) != 0) {
                al_1 =  (*0x8079284 == 0) ? 1 : 0;
                al = (unsigned char) (al_1);
                *(unsigned int*)(&bright_html_carray + 0x1694) = (al_1);
            }
            if (local3 != 0) {
                *(__size32*)(&bright_html_carray + 0x1694) = 1;
                *(__size32*)(&bright_html_carray + 0x1ee0) = 1;
            }
            if (*0x80796c0 != 0) {
                *(__size32*)(&bright_html_carray + 0x1694) = 0;
            }
            if ( ~(*0x807969c != 0 || *0x8079284 == 0)) {
            }
            _setjmp();
            if (eax != 0) {
                clean_up(ecx, edx);
                if (eax == 14) {
                    error(0x80719bb, ecx, edx);
                }
                __printf_chk();
                main_io_loop();
            }
            set_signals(ax, al, cl, dl, ah, eax, ecx, edx, eax, esp - 4, esi_13, edi_7, st_1, st1, st2, st3, st4, st5, st6, st7, fcw, LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), LOGICALFLAGS32(eax), argc, argv, ebp, edi_10, esi_16, ebx, local17, local0, local1, local3, local18, local19, local20, local21, local6, local5, 0x8079600, pc, local2);
        }
        if ((unsigned int)(eax_9 - 98) > 22) {
bb0x8049a86:
            usage();
            exit(2);
        }
        switch(eax_2) {
        case 98:
        case 99:
            edi_4 = edi_7 + 1;
            local29 = edi_4;
            goto bb0x8049a9f;
        case 100:
            goto bb0x8049a86;
        case 101:
            goto bb0x8049a86;
        case 102:
            goto bb0x8049a86;
        case 103:
            goto bb0x8049a86;
        case 104:
            usage();
            exit(0);
        case 105:
            goto bb0x8049a86;
        case 106:
            goto bb0x8049a86;
        case 107:
            goto bb0x8049a86;
        case 108:
            goto bb0x8049a86;
        case 109:
            eax = *0x80793a0;
            strtod(eax, &0);
            __fprintf_chk();
            exit(2);
        case 110:
            goto bb0x8049a86;
        case 111:
            goto bb0x8049a86;
        case 112:
            goto bb0x8049a86;
        case 113:
            *(__size32*)(&bright_html_carray + 0x1aac) = 1;
            goto bb0x8049a9f;
        case 114:
            *(__size32*)(&bright_html_carray + 0x16b4) = 0;
            goto bb0x8049a9f;
        case 115:
            eax_13 = *0x80793a0;
            ah = eax_13 >> 8 & 0xff;
            ax = (unsigned short) eax_13;
            strtol(eax_13, 0, 10);
            *(int*)(&bright_html_carray + 0x1d10) = eax_16;
            goto bb0x8049a9f;
        case 116:
            *(__size32*)(&bright_html_carray + 0x16b4) = 0;
            *(__size32*)(&bright_html_carray + 0x1ad0) = 1;
            esi_4 = 1;
            local28 = esi_4;
            goto bb0x8049a9f;
        case 117:
            eax_17 = *0x8079380;
            setbuf(eax_17, 0);
            eax_18 = *0x8079364;
            ah = eax_18 >> 8 & 0xff;
            ax = (unsigned short) eax_18;
            setbuf(eax_18, 0);
            goto bb0x8049a9f;
        case 118:
            version_report();
            exit(0);
        case 119:
            esi_7 = 1;
            local28 = esi_7;
            goto bb0x8049a9f;
        case 120:
            *(__size32*)(&bright_html_carray + 0xb320) = 1;
            esi_10 = 1;
            local28 = esi_10;
            goto bb0x8049a9f;
        }
        local3 = 1;
    }
}

/** address: 0x08049fd0 */
__size80 init_gvars()
{
    domain_check = 0;
    high_prec = 0;
    partial_flag = 1;
    symb_flag = 0;
    sign_cmp_flag = 0;
    approximate_roots = 0;
    repeat_flag = 0;
    global_0x08079918 = 1;
    zero_token = 0;
    *(union { double; __size64; }*)0x807991c = 0.;
    global_0x080796a8 = 1;
    one_token = 0;
    *(union { double; __size64; }*)0x80796ac = 1.;
    return 1.;
}

/** address: 0x0804b351 */
__size32 init_mem(__size8 param2, __size8 param3, __size8 param3, __size80 param4)
{
    __size8 al; 		// r8
    __size8 cl; 		// r9
    __size8 dl; 		// r10
    unsigned int eax; 		// r24
    void *eax_1; 		// r24
    void *eax_2; 		// r24{6}
    void *eax_3; 		// r24{10}
    void *eax_4; 		// r24{14}
    int ecx; 		// r25
    __size32 edx; 		// r26
    __size8 local1; 		// param2{29}
    __size8 local2; 		// param3{30}
    __size8 local3; 		// param3{31}
    __size80 local4; 		// param4{35}
    __size80 st7; 		// r39

    eax = *(&bright_html_carray + 0x1550);
    eax_2 = malloc((int)((eax * 3 >> 31) + eax * 3) >> 1 << 4); /* Warning: also results in ecx, edx */
    local1 = param2;
    local2 = param3;
    local3 = param3;
    local4 = param4;
    *(union { void *; __size32; }*)0x8082a20 = eax_2;
    if (eax_2 == 0) {
bb0x804b3dd:
        eax = 0;
    }
    else {
        eax = *(&bright_html_carray + 0x1550);
        eax_3 = malloc(eax << 4); /* Warning: also results in ecx, edx */
        *(union { void *; __size32; }*)0x8082f20 = eax_3;
        if (eax_3 == 0) {
            goto bb0x804b3dd;
        }
        else {
            eax = *(&bright_html_carray + 0x1550);
            eax_4 = malloc(eax << 4); /* Warning: also results in ecx, edx */
            *(union { void *; __size32; }*)0x80795f0 = eax_4;
            if (eax_4 == 0) {
                goto bb0x804b3dd;
            }
            else {
                eax = *(&bright_html_carray + 0x1550);
                eax_1 = malloc(eax << 4); /* Warning: also results in ecx, edx */
                *(union { void *; __size32; }*)0x80795f8 = eax_1;
                if (eax_1 == 0) {
                    goto bb0x804b3dd;
                }
                else {
                    eax = alloc_next_espace(ecx); /* Warning: also results in ecx, edx */
                    if (eax < 0) {
                        goto bb0x804b3dd;
                    }
                    else {
                        al = clear_all(); /* Warning: also results in cl, dl, ecx, edx, st7 */
                        local1 = al;
                        local2 = cl;
                        local3 = dl;
                        local4 = st7;
                        eax = 1;
                    }
                }
            }
        }
    }
    param2 = local1;
    param3 = local2;
    param3 = local3;
    param4 = local4;
    return eax; /* WARNING: Also returning: al := param2, cl := param3, dl := param3, ecx := ecx, edx := edx, st7 := param4 */
}

/** address: 0x080494f0 */
void usage()
{
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    __printf_chk();
    return;
}

/** address: 0x0804abac */
__size32 get_screen_size()
{
    short ax; 		// r0
    int eax; 		// r24
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28

    ax = (unsigned short) (esp - 20);
    eax = ioctl(1, 0x5413); /* Warning: also results in ecx, edx */
    if (eax >= 0) {
        eax = 0;
        ax = 0;
    }
    return eax; /* WARNING: Also returning: ax := ax, ecx := ecx, edx := edx */
}

/** address: 0x08049673 */
__size32 load_rc(char param1)
{
    __size32 eax; 		// r24
    char *eax_11; 		// r24{12}
    int eax_3; 		// r24{3}
    char *eax_6; 		// r24{4}
    FILE *eax_9; 		// r24{7}
    int ecx; 		// r25
    int edx; 		// r26

    eax_3 = *20;
    eax_6 = getenv("HOME"); /* Warning: also results in ecx */
    if (eax_6 != 0) {
        __snprintf_chk();
        eax_9 = fopen(0x8082f40, "r"); /* Warning: also results in ecx */
        if (eax_9 != 0) {
            eax_11 = fgets(&param1, 0x1000, eax_9);
            if (eax_11 != 0) {
                set_error_level(eax_11);
                set_options();
            }
            ecx = fclose(eax_9);
        }
    }
    eax = 1;
    edx = eax_3 ^ *20;
    if (edx != 0) {
        eax = __stack_chk_fail(); /* Warning: also results in ecx, edx */
    }
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x0804ab33 */
__size32 clean_up(__size32 param1, __size32 param2)
{
    int eax; 		// r24
    unsigned int eax_1; 		// r24{19}
    unsigned int eax_2; 		// r24{23}
    int ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 local1; 		// param1{8}
    __size32 local2; 		// param2{9}
    unsigned int local3; 		// eax_1{19}
    unsigned int local4; 		// eax{25}
    __size32 local5; 		// edx{26}

    init_gvars();
    local1 = param1;
    local2 = param2;
    eax = *0x80817e4;
    if (eax != *0x80796bc) {
        if ( ~(eax == *0x8079380 || eax == *0x8079364)) {
            ecx = fclose(eax); /* Warning: also results in edx */
            local1 = ecx;
            local2 = edx;
        }
        param1 = local1;
        param2 = local2;
        eax = *(&bright_html_carray + 0x1acc);
        *(__size32*)(&bright_html_carray + 0x9bf4) = eax;
    }
    ebx = *(&bright_html_carray + 0x9e10);
    local4 = eax;
    local5 = param2;
    if (ebx > 0) {
        eax = 0;
        edx = 0x8082d80;
        local3 = eax;
        local5 = edx;
        do {
            eax_1 = local3;
            if (bright_html_carray[eax_1] <= 0) {
                bright_html_carray[eax_1] = 0;
                bright_html_carray[eax_1] = 0;
            }
            eax_2 = eax_1 + 1;
            local3 = eax_2;
            local4 = eax_2;
        } while (eax_1 + 1 != ebx);
    }
    eax = local4;
    edx = local5;
    return eax; /* WARNING: Also returning: ecx := param1, edx := edx */
}

/** address: 0x0804ad7a */
__size32 error(__size32 param1, __size32 param2, __size32 param3)
{
    __size32 eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    *(__size32*)(&bright_html_carray + 0x9e14) = param1;
    set_color(2, param2, param3);
    ecx = __printf_chk(); /* Warning: also results in edx */
    eax = default_color(ecx, edx); /* Warning: also results in ecx, edx */
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x08049760 */
void set_signals()
{
    __size32 eax; 		// r24

    signal(8, 0x8049390);
    eax = signal(2, 0x8049478);
    if (eax == -1) {
bb0x80497a5:
        signal(3, 0x8049478);
    }
    goto bb0x80497a5;
}

/** address: 0x0807057d */
void f_to_fraction(double *param1, double param2, double param3, union { union { __size64; double; } *; __size32; } param4, union { union { __size64; double; } *; __size32; } param5, union { __size80; double; } param7, unsigned int param8, union { __size80; double; } param9, union { __size80; double; } param10, __size80 param10)
{
    int eax_1; 		// r24{16}
    int eax_5; 		// r24{19}
    int eax_6; 		// r24{23}
    union { double; __size64; } local4; 		// m[esp - 36]
    union { double; __size64; } local5; 		// m[esp - 28]
    int local6; 		// eax_5{19}
    double st; 		// r32
    unsigned int st1; 		// r33
    __size80 st5; 		// r37
    double st6; 		// r38
    double st7; 		// r39
    double st7_1; 		// r39{13}
    double st_1; 		// r32{30}
    double st_12; 		// r32{41}
    double st_4; 		// r32{31}
    union { __size80; double; } st_6; 		// r32{37}
    double st_9; 		// r32{39}

    st7_1 = param3;
    *(union { double; __size64; }*)param4 = st7_1;
    *(union { double; __size64; }*)param5 = 1.;
    eax_1 = __finite();
    local6 = eax_1;
    if (eax_1 != 0) {
        st6 = st7_1;
        do {
            eax_5 = local6;
            st6 = st6 - 1. * trunc(st6 / 1.);
            st6 =  (1. < 0) ?  -st6 : st6;
            eax_6 = (eax_5 & ~0xff00 | /* Fflags() */  << 8) & ~0xff;
            local6 = eax_6;
        } while (LOGICALFLAGS32(eax_1));
        if (SUBFLAGSFL(st6, st6)) {
bb0x80705c4:
            fmod(st7_1, param2);
        }
        else {
            if ( ~true) {
                goto bb0x80705c4;
            }
        }
        if ( ~( ~SUBFLAGSFL(param7, 0.) && param7 == 0.)) {
            st_1 = *((double *)&*(&bright_html_carray + 0x16a0));
            st_4 = my_round(param1, st7_1, st7_1, param8);
            if ( ~SUBFLAGSFL(st_4, param8) && st_4 == param8) {
bb0x8070631:
                st_6 = gcd(1., st7_1, 1., param8, param9, param10); /* Warning: also results in st1, st5 */
                if (st_6 <= st1) {
                }
                else {
                    st_9 = my_round(param1, st7_1 / st1, st7_1, st7_1 / st1);
                    local4 = st_9;
                    st_12 = my_round(param1, 1. / st_6, 1. / st_6, st7_1 / st1);
                    local5 = st_12;
                    if (fabs(st_9) >= 1e+12.) {
                    }
                    else {
                        if (st_12 >= st7_1 / st1) {
                        }
                        else {
                            if (2. <= param9) {
                                st = gcd(st_9, param10, st_12, 2., param9, st5); /* Warning: also results in st1 */
                                if (st > st1) {
                                    local4 = st_9 / st1;
                                    local5 = st_12 / st1;
                                }
                                st = local4 / local5;
                                st7 = fabs(st) * *((double *)&*0x8079290);
                                if (fabs(st - st7_1) <= st7) {
                                    *(union { double; __size64; }*)param4 = local4;
                                    *(union { double; __size64; }*)param5 = local5;
                                }
                            }
                        }
                    }
                }
            }
            else {
                if (fabs(st7_1) * st_1 < fabs(st_4 - st7_1)) {
                    goto bb0x8070631;
                }
                else {
                    *(union { double; __size64; }*)param4 = param9;
                }
            }
        }
    }
    return;
}

/** address: 0x0804982a */
void main_io_loop(__size32 param1, __size32 param2)
{
    default_color(param1, param2);
}

/** address: 0x08049395 */
void exit_program(int param1)
{
    __size32 eax; 		// r24

    reset_attr();
    if (*0x8082f10 != 0) {
        __printf_chk();
    }
    if (*0x80792a4 != 0) {
        eax = write_history();
        if (eax != 0) {
            __fprintf_chk();
        }
    }
    if ( ~(param1 != 0 || *0x807969c != 0 || *0x8082f10 != 0)) {
        __printf_chk();
    }
    exit(param1);
    return;
}

/** address: 0x08057973 */
void read_file(int param1, char param2, union { union { char; __size8; } *; __size32; } param3, __size32 param4, __size32 param5)
{
    __size32 eax; 		// r24
    int eax_2; 		// r24{7}
    FILE *eax_5; 		// r24{12}
    FILE *eax_8; 		// r24{15}
    int ecx; 		// r25
    int edx; 		// r26
    union { FILE *; __size32; } esi; 		// r30

    eax_2 = *20;
    if (*param3 != 0) {
        __snprintf_chk();
        eax_5 = fopen(&param2, "r");
        esi = eax_5;
        if (eax_5 != 0) {
bb0x8057a25:
            eax = read_sub(param1, esi);
            if (eax == 0) {
                if (*0x807969c == 0) {
                    __printf_chk();
                }
            }
            else {
                __printf_chk();
            }
            fclose(esi);
        }
        else {
            eax_8 = fopen(param3, "r"); /* Warning: also results in ecx, edx */
            esi = eax_8;
            if (eax_8 != 0) {
                goto bb0x8057a25;
            }
            else {
                error(0x8075e1d, ecx, edx);
            }
        }
    }
    else {
        error(0x8075946, param4, param5);
    }
    edx = eax_2 ^ *20;
    if (edx != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804ac74 */
__size32 alloc_next_espace(int param1)
{
    int eax; 		// r24
    int ebx; 		// r27
    int ebx_1; 		// r27{11}
    int ecx; 		// r25
    int edi; 		// r31
    int edx; 		// r26
    int edx_1; 		// r26{28}
    int edx_2; 		// r26{29}
    int local1; 		// param1{13}
    int local2; 		// edx{25}
    int local3; 		// edx_1{28}
    int local4; 		// param1{39}
    int local5; 		// ecx{45}

    edx = *(&bright_html_carray + 0x1ab0);
    edi = *(&bright_html_carray + 0x9e10);
    local1 = param1;
    local4 = param1;
    if (edx >= edi) {
bb0x804acbf:
        param1 = local1;
        eax = alloc_espace(edi, param1, edx); /* Warning: also results in ecx, edx */
        local5 = ecx;
        if (eax != 0) {
            *(__size32*)(&bright_html_carray + 0x9e10)++;
            edx = edi;
        }
        else {
            ecx = warning(0x80720b4, ecx, edx);
            eax = *(&bright_html_carray + 0x9e10);
            if (eax <= 0) {
bb0x804ad3f:
                edx = -1;
                local5 = ecx;
            }
            else {
                edx = 0;
                ecx = 0x8082d80;
                local2 = edx;
                local3 = edx;
                local5 = ecx;
                if (*0x8082d80 != 0) {
                    do {
                        edx_1 = local3;
                        edx_2 = edx_1 + 1;
                        local2 = edx_2;
                        local3 = edx_2;
                        if (edx_1 + 1 < eax) {
bb0x804acf5:
                        }
                        else {
                            goto bb0x804ad3f;
                        }
                        goto bb0x804acf5;
                    } while (bright_html_carray[(edx_1 + 1)] != 0);
bb0x804acfb:
                    edx = local2;
                    bright_html_carray[edx] = 0;
                }
                else {
                    goto bb0x804acfb;
                }
            }
        }
    }
    else {
        if (bright_html_carray[edx] != 0) {
            ecx = edx - (((unsigned int) (unsigned int)((edx + 1) * 0x51eb851f) >> 32 >> 5) - (edx + 1 >> 31)) * 100 + 1;
            edx = ecx;
            ebx = 1;
            ebx_1 = ebx;
            local1 = ecx;
            local4 = ecx;
            while (edx < edi) {
                if (bright_html_carray[edx] == 0) {
bb0x804ad32:
                    param1 = local4;
                    bright_html_carray[edx] = 0;
                    local5 = param1;
                }
                else {
                    ebx = ebx_1 + 1;
                    if (ebx_1 + 1 == 100) {
                        goto bb0x804ad3f;
                    }
                    ecx = edx - (((unsigned int) (unsigned int)((edx + 1) * 0x51eb851f) >> 32 >> 5) - (edx + 1 >> 31)) * 100 + 1;
                    edx = ecx;
                }
                ecx = local5;
                return edx; /* WARNING: Also returning: ecx := ecx, edx := edx */
                ebx_1 = ebx;
                local1 = ecx;
                local4 = ecx;
            }
            goto bb0x804acbf;
        }
        else {
            goto bb0x804ad32;
        }
    }
    ecx = local5;
    return edx; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x0804b29e */
__size8 clear_all()
{
    char dl; 		// r10
    __size32 eax; 		// r24
    unsigned int ebx; 		// r27
    unsigned int ebx_1; 		// r27{9}
    unsigned int ebx_2; 		// r27{12}
    int ecx; 		// r25
    __size32 edi; 		// r31
    int edx; 		// r26
    int edx_1; 		// r26{24}
    unsigned int local1; 		// ebx_1{9}
    int local2; 		// edx{32}
    __size80 st7; 		// r39

    *(__size32*)(&bright_html_carray + 0x1ab0) = 0;
    *(__size32*)(&bright_html_carray + 0xb190) = 0;
    *(__size32*)(&bright_html_carray + 0x1d50) = 0;
    eax = *(&bright_html_carray + 0x1ef0);
    if (eax != 0) {
        ebx = 0;
        local1 = ebx;
        do {
            ebx_1 = local1;
            free(eax);
            bright_html_carray[ebx_1] = 0;
            ebx_2 = ebx_1 + 1;
            eax = bright_html_carray[(ebx_1 + 1)];
            local1 = ebx_2;
        } while (bright_html_carray[(ebx_1 + 1)] != 0);
    }
    edi = 0x80798c0;
    edx = 64;
    dl = 64;
    edx_1 = edx;
    local2 = edx_1;
    if ((edi & 0x2) != 0) {
        *(__size16*)edi = 0;
        edi += 2;
        edx = edx_1 - 2;
        dl = (unsigned char) edx_1 - 2;
        local2 = edx;
    }
    edx = local2;
    ecx = (unsigned int)edx >> 2;
    if ((unsigned int)edx >> 2 != 0) {
        *(__size32*)edi = 0;
        edi +=  (DF == 0) ? 4 : -4;
        ecx = ((unsigned int)edx >> 2) - 1;
    }
    if ((dl & 0x2) != 0) {
        *(__size16*)edi = 0;
        edi += 2;
    }
    if ((dl & 0x1) != 0) {
        *(__size8*)edi = 0;
    }
    st7 = init_gvars();
    return 0; /* WARNING: Also returning: cl := 100, dl := dl, ecx := ecx, edx := edx, st7 := st7 */
}

/** address: 0x08050428 */
void set_error_level(union { __size32; char *; unsigned char *; } param1)
{
    char bl; 		// r11
    union { __size32; __size32 *; } eax; 		// r24
    unsigned int ebx; 		// r27
    int edx; 		// r26
    __size32 esi; 		// r30
    __size32 esi_1; 		// r30{14}
    __size32 esi_2; 		// r30{19}
    __size32 local2; 		// esi_1{14}

    esi = param1;
    *(__size32*)(&bright_html_carray + 0xc354) = 1;
    eax = strpbrk(param1, ";\n\r\1a");
    local2 = esi;
    if (eax != 0) {
        *(union { char; __size8; }*)eax = 0;
    }
    remove_trailing_spaces(param1);
    ebx = *(unsigned char*)param1;
    bl = (unsigned char) ebx;
    if ((unsigned char) ebx != 0) {
        eax = __ctype_b_loc();
        do {
            esi_1 = local2;
            edx = *eax;
            tmpb = *(edx + (int) bl * 2 + 1) & 0x40;
            if (tmpb == 0) {
                *(__size32*)(&bright_html_carray + 0xc354) = 0;
            }
            esi_2 = esi_1 + 1;
            ebx = *(unsigned char*)(esi_1 + 1);
            bl = (unsigned char) ebx;
            local2 = esi_2;
        } while ((unsigned char) ebx != 0);
    }
    return;
}

/** address: 0x080558a8 */
void set_options()
{
    for(;;) {
bb0x80558b1:
        *(__size32*)%esp = %eax;
        skip_space(*(%esp + 4), %ecx, %edx);
        *(__size32*)(%ebp + 8) = %eax;
        if (flags) {
            if (flags) {
bb0x8055957:
                *(__size32*)%esp = %eax;
                skip_no(*(%esp + 4));
                *(__size32*)%esp = %ebx;
                skip_param(*(%esp - 32), *(%esp - 28), *(%esp + 4), %ecx, %edx);
                *(__size32*)(%ebp + 8) = %eax;
                *(__size32*)(%esp + 8) = 5;
                *(__size32*)(%esp + 4) = 0x8075b9d;
                *(__size32*)%esp = %ebx;
                strncasecmp(*(%esp + 4), *(%esp + 8), *(%esp + 12));
                if (flags) {
                    *(__size32*)(%esp + 8) = 7;
                    *(__size32*)(%esp + 4) = 0x8075ba3;
                    *(__size32*)%esp = %ebx;
                    strncasecmp(*(%esp + 4), *(%esp + 8), *(%esp + 12));
                    if (flags) {
                        *(__size32*)(%esp + 8) = 6;
                        *(__size32*)(%esp + 4) = 0x8075bab;
                        *(__size32*)%esp = %ebx;
                        strncasecmp(*(%esp + 4), *(%esp + 8), *(%esp + 12));
                        if (flags) {
                            *(__size32*)(%esp + 8) = 4;
                            *(__size32*)(%esp + 4) = 0x8075bb3;
                            *(__size32*)%esp = %ebx;
                            strncasecmp(*(%esp + 4), *(%esp + 8), *(%esp + 12));
                            if (flags) {
                                *(__size32*)(%esp + 8) = 4;
                                *(__size32*)(%esp + 4) = 0x8075bb8;
                                *(__size32*)%esp = %ebx;
                                strncasecmp(*(%esp + 4), *(%esp + 8), *(%esp + 12));
                                if (flags) {
                                    *(__size32*)(%esp + 4) = 0x8075bc2;
                                    *(__size32*)%esp = %ebx;
                                    strcmp_tospace();
                                }
                                *(__size32*)(%esp + 4) = %eax;
                                *(__size32*)%esp = %esi;
                                decstrtol(*(%esp + 4), *(%esp + 8));
                                if ( ~flags && flags) {
                                    *(__size32*)(&bright_html_carray + 0x1554) = %eax;
                                }
                                else {
                                    *(__size32*)%esp = 0x80766e4;
                                    error(*(%esp + 4), %ecx, %edx);
                                }
                            }
                            else {
                                if ( ~flags) {
                                    *(__size32*)(&bright_html_carray + 0x156c) = 0;
                                    *(__size32*)(&bright_html_carray + 0x1570) = 0;
                                    goto bb0x80558b1;
                                }
                                get_screen_size();
                            }
                        }
                        else {
                            if (flags) {
                                *(__size32*)(%esp + 4) = %eax;
                                *(__size32*)%esp = %esi;
                                decstrtol(*(%esp + 4), *(%esp + 8));
                                if ( ~flags && flags) {
                                    *(__size32*)(%ebp + 8) = %edx;
                                    *(__size32*)(&bright_html_carray + 0x156c) = %eax;
bb0x8055fba:
                                    *(__size32*)%esp = %eax;
                                    extra_characters(*(%esp + 4), %ecx, %edx);
                                }
                                else {
                                    *(__size32*)%esp = 0x80766a4;
                                    error(*(%esp + 4), %ecx, %edx);
                                }
                            }
                            else {
                                *(__size32*)(&bright_html_carray + 0x156c) = 0;
                                goto bb0x8055fba;
                            }
                        }
                    }
                    else {
                        if (flags) {
                            *(__size32*)(%esp + 8) = 256;
                            *(__size32*)(%esp + 4) = %esi;
                            *(__size32*)%esp = 0x8079180;
                            my_strlcpy();
                        }
                        *(__size8*)(&bright_html_carray + 0x1590) = 0;
                    }
                }
                else {
                    if (flags) {
                        *(__size32*)(%esp + 4) = %eax;
                        *(__size32*)%esp = %esi;
                        decstrtol(*(%esp + 4), *(%esp + 8));
                        if (flags) {
                            *(__size32*)(%ebp + 8) = %edx;
                            *(__size32*)(&bright_html_carray + 0xafe8) = %eax;
                            goto bb0x8055fba;
                        }
                        else {
                            *(__size32*)%esp = 0x807667c;
                            error(*(%esp + 4), %ecx, %edx);
                        }
                    }
                    else {
                        *(__size32*)(&bright_html_carray + 0xafe8) = 0;
                        goto bb0x8055fba;
                    }
                }
            }
            else {
                *(__size32*)(%esp + 8) = 3;
                *(__size32*)(%esp + 4) = 0x8075b7f;
                *(__size32*)%esp = %eax;
                strncasecmp(*(%esp + 4), *(%esp + 8), *(%esp + 12));
                if (flags) {
                    goto bb0x8055957;
                }
                else {
                    *(__size32*)%esp = %ebx;
                    skip_param(*(%esp - 32), *(%esp - 28), *(%esp + 4), %ecx, %edx);
                    *(__size32*)(%ebp + 8) = %eax;
                    if ( ~flags) {
                        *(__size32*)%esp = 0x8071918;
                        getenv(*(%esp + 4));
                        *(__size32*)(%ebp - 28) = %eax;
                        if ( ~flags) {
                            *(__size32*)(%ebp + 8) = %eax;
                        }
                    }
                    *(__size32*)%esp = %eax;
                    chdir(*(%esp + 4));
                    if (flags) {
                        *(__size32*)%esp = %eax;
                        output_current_directory(*(%esp - 0x1010), *(%esp + 4));
                    }
                    else {
                        *(__size32*)%esp = 0x8075b83;
                        error(*(%esp + 4), %ecx, %edx);
                    }
                }
            }
        }
        else {
            goto bb0x80558c6;
        }
        return;
    }
bb0x80558c6:
    return;
}

/** address: 0x0806e52f */
__size32 set_color(int param1, __size32 param2, __size32 param3)
{
    int eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 local0; 		// param2{22}
    __size32 local1; 		// param3{23}

    eax = gfp;
    local0 = param2;
    local0 = param2;
    local1 = param3;
    local1 = param3;
    if (gfp == *0x8079380) {
        eax = cur_color;
        if ( ~(cur_color == param1 || *0x8079284 == 0)) {
            if (*0x8082f10 == 0) {
                eax = __printf_chk(); /* Warning: also results in ecx, edx */
            }
            else {
                if (cur_color >= 0) {
                    __printf_chk();
                }
                if (*0x8079ad0 == 0) {
                    eax = __printf_chk(); /* Warning: also results in ecx, edx */
                }
                else {
                    eax = __printf_chk(); /* Warning: also results in ecx, edx */
                }
            }
            *(int*)(&bright_html_carray + 0x1698) = param1;
            local0 = ecx;
            local1 = edx;
        }
    }
    param2 = local0;
    param3 = local1;
    return eax; /* WARNING: Also returning: ecx := param2, edx := param3 */
}

/** address: 0x0806fd58 */
__size32 default_color(__size32 param1, __size32 param2)
{
    __size32 eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    eax = set_color(0, param1, param2); /* Warning: also results in ecx, edx */
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x08070529 */
__size80 my_round(double *param1, union { double; __size32; } param2, union { __size80; double; } param3, unsigned int param4)
{
    double st7; 		// r39

    st7 = param2;
    if (st7 < param4) {
        modf(st7 - 0.5, param1);
    }
    else {
        modf(param3 + 0.5, param1);
    }
    return param2;
}

/** address: 0x08070300 */
__size80 gcd(double param1, double param2, union { __size80; double; } param3, union { __size80; double; } param4, __size80 param5, __size80 param6)
{
    __size32 eax; 		// r24
    __size80 local0; 		// param3{20}
    __size80 local1; 		// param4{21}
    __size80 local2; 		// param3{27}
    __size80 local3; 		// param6{29}
    double st; 		// r32
    double st1; 		// r33
    double st5; 		// r37
    double st7; 		// r39

    st7 = param1;
    eax = __finite();
    local0 = param3;
    local1 = param4;
    local2 = param3;
    local3 = param6;
    if (eax == 0) {
bb0x807041f:
    }
    else {
        eax = __finite();
        if (eax == 0) {
            goto bb0x807041f;
        }
        else {
            st5 = fabs(st7);
            local3 = st5;
            if (SUBFLAGSFL(fabs(st7), param5)) {
                st5 = fabs(param2);
bb0x8070354:
                param3 = local0;
                param4 = local1;
                local2 = param3;
                local3 = st5;
                if (st5 != param5 || SUBFLAGSFL(st5, param5)) {
                }
            }
            else {
                if (fabs(st7) == param5) {
                    st = 0.;
                    local2 = st;
                }
                else {
                    st = param4;
                    st1 = param3;
                    local0 = st;
                    local1 = st1;
                    goto bb0x8070354;
                }
            }
        }
    }
    param3 = local2;
    param6 = local3;
    return param3; /* WARNING: Also returning: st1 := param4, st5 := param6 */
}

/** address: 0x08070286 */
void reset_attr()
{
    __size32 eax; 		// r24

    if (*0x8079284 != 0) {
        tmp1 = *(&bright_html_carray + 0x1698);
        if (tmp1 >= 0) {
            if (*0x8082f10 == 0) {
                __printf_chk();
            }
            else {
                __printf_chk();
            }
        }
    }
    *(__size32*)(&bright_html_carray + 0x1698) = -1;
    eax = fflush(0);
    if (eax != 0) {
        perror("fflush(3) call failed");
    }
    return;
}

/** address: 0x080578b1 */
__size32 read_sub(int param1, union { FILE *; __size32; } param2)
{
    void *eax; 		// r24
    char *eax_11; 		// r24{16}
    __size32 eax_2; 		// r24{5}
    int eax_5; 		// r24{14}
    union { __size32; char *; } eax_8; 		// r24{15}
    int ecx; 		// r25
    int edx; 		// r26

    memmove(&param1, 0x8079600, 156);
    eax_2 = _setjmp(); /* Warning: also results in ecx, edx */
    if (eax_2 == 0) {
        for(;;) {
            eax_5 = *(&bright_html_carray + 0x1550);
            eax_8 = *0x80795f0;
            eax_11 = fgets(eax_8, eax_5 << 4, param2); /* Warning: also results in ecx, edx */
            if (eax_11 != 0) {
                eax = display_process(eax_11, ecx, edx);
                if (eax != 0) {
                    continue;
                }
                __longjmp_chk();
            }
        }
    }
    else {
        ecx = clean_up(ecx, edx); /* Warning: also results in edx */
        if (eax_2 == 14) {
            error(0x80719bb, ecx, edx);
        }
    }
    memmove(0x8079600, &param1, 156);
    return eax_2;
}

/** address: 0x0804aaa1 */
__size32 alloc_espace(int param1, __size32 param2, __size32 param3)
{
    __size32 eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 local2; 		// param2{18}
    __size32 local3; 		// param3{19}
    __size32 local4; 		// param2{22}
    __size32 local5; 		// param3{23}
    __size32 local6; 		// ecx{26}
    __size32 local7; 		// edx{27}

    local2 = param2;
    local3 = param3;
    local4 = param2;
    local5 = param3;
    if (param1 > 99) {
bb0x804ab1d:
        param2 = local2;
        param3 = local3;
        eax = 0;
        local6 = param2;
        local7 = param3;
    }
    else {
        if (lhs[param1] != 0 && rhs[param1] != 0) {
bb0x804ab24:
            param2 = local4;
            param3 = local5;
            eax = 1;
            local6 = param2;
            local7 = param3;
        }
        else {
            eax = malloc(n_tokens << 4); /* Warning: also results in ecx, edx */
            local2 = ecx;
            local3 = edx;
            lhs[param1] = eax;
            if (eax == 0) {
                goto bb0x804ab1d;
            }
            else {
                eax = malloc(n_tokens << 4); /* Warning: also results in ecx, edx */
                local4 = ecx;
                local5 = edx;
                rhs[param1] = eax;
                if (eax != 0) {
                    goto bb0x804ab24;
                }
                else {
                    eax = lhs[param1];
                    ecx = free(lhs[param1]); /* Warning: also results in edx */
                    local6 = ecx;
                    local7 = edx;
                    lhs[param1] = 0;
                    eax = 0;
                }
            }
        }
    }
    ecx = local6;
    edx = local7;
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x0804ac01 */
__size32 warning(__size32 param1, __size32 param3, __size32 param3)
{
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 local1; 		// param3{11}

    *(__size32*)(&bright_html_carray + 0xb184) = param1;
    tmp1 = *(&bright_html_carray + 0xafe8);
    local1 = param3;
    if (tmp1 >= 0) {
        set_color(1, param3, param3);
        ecx = __printf_chk(); /* Warning: also results in edx */
        ecx = default_color(ecx, edx);
        local1 = ecx;
    }
    param3 = local1;
    return param3;
}

/** address: 0x080503d7 */
void remove_trailing_spaces(__size32 param1)
{
    union { __size32; __size32 *; } eax; 		// r24
    int ebx; 		// r27
    int ebx_1; 		// r27{21}
    int ecx; 		// r25
    __size32 edi; 		// r31
    int edx; 		// r26

    edi = param1;
    ecx = -1;
    do {
        tmpb = 0 - *edi;
        edi +=  (DF == 0) ? 1 : -1;
        ecx--;
    } while (tmpb != 0);
    ebx =  ~ecx - 2;
    if ( ~ecx >= 2) {
        eax = __ctype_b_loc();
        edi = param1 +  ~ecx - 1;
        do {
            ebx_1 = ebx;
            ecx = (int) *(edi - 1);
            edx = *eax;
            tmpb = *(edx + ecx * 2 + 1) & 0x20;
            if (tmpb != 0) {
                *(__size8*)(edi - 1) = 0;
                edi--;
                ebx = ebx_1 - 1;
            }
        } while (ebx_1 < 1);
    }
    return;
}

/** address: 0x0804a4ff */
__size32 skip_space(union { unsigned char *; __size32; } param1, __size32 param2, __size32 param3)
{
    char bl; 		// r11
    union { __size32; __size32 *; } eax; 		// r24
    unsigned int ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    __size32 esi_1; 		// r30{18}
    __size32 local0; 		// param2{21}
    __size32 local1; 		// param3{22}
    __size32 local2; 		// esi{23}

    esi = param1;
    local0 = param2;
    local0 = param2;
    local1 = param3;
    local1 = param3;
    local2 = esi;
    local2 = esi;
    if (param1 != 0) {
        ebx = *(unsigned char*)param1;
        bl = (unsigned char) ebx;
        if ((unsigned char) ebx != 0) {
            eax = __ctype_b_loc(); /* Warning: also results in ecx, edx */
            local0 = ecx;
            local0 = ecx;
            local1 = edx;
            local1 = edx;
            eax = *eax;
            do {
                esi_1 = esi;
                tmpb = *(eax + (int) bl * 2 + 1) & 0x20;
                local2 = esi_1;
                if (tmpb != 0) {
                    esi = esi_1 + 1;
                    ebx = *(unsigned char*)(esi_1 + 1);
                    bl = (unsigned char) ebx;
                    local2 = esi;
                }
            } while ((unsigned char) ebx == 0);
        }
    }
    param2 = local0;
    param3 = local1;
    esi = local2;
    return esi; /* WARNING: Also returning: ecx := param2, edx := param3 */
}

/** address: 0x0804a535 */
void skip_param(unsigned int param1, int param2, union { unsigned int; unsigned char *; } param3, __size32 param5, __size32 param5)
{
    char al; 		// r8
    unsigned int eax; 		// r24
    union { char *; unsigned int; } eax_1; 		// r24{35}
    int eax_2; 		// r24{36}
    union { unsigned char *; unsigned int; } ebx; 		// r27
    unsigned int ebx_1; 		// r27{24}
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    int local0; 		// m[esp - 28]
    unsigned int local1; 		// m[esp - 32]
    __size32 local10; 		// param5{32}
    __size32 local11; 		// param5{33}
    unsigned int local12; 		// ebx{34}
    __size32 local2; 		// ecx{13}
    __size32 local3; 		// edx{14}
    int local4; 		// local0{15}
    unsigned int local5; 		// local1{16}
    __size32 local6; 		// param5{22}
    __size32 local7; 		// param5{23}
    int local8; 		// param2{25}
    unsigned int local9; 		// param1{26}

    ebx = param3;
    local6 = param5;
    local7 = param5;
    local8 = param2;
    local9 = param1;
    local10 = param5;
    local11 = param5;
    local12 = ebx;
    if (param3 != 0) {
        eax = *(unsigned char*)param3;
        al = (unsigned char) eax;
        if ((unsigned char) eax != 0) {
            do {
                param5 = local6;
                param5 = local7;
                ebx_1 = ebx;
                param2 = local8;
                param1 = local9;
                local2 = param5;
                local3 = param5;
                local4 = param2;
                local5 = param1;
                local12 = ebx_1;
                if (al < 0) {
bb0x804a54c:
                    ecx = local2;
                    edx = local3;
                    local0 = local4;
                    local1 = local5;
                    ebx = ebx_1 + 1;
                    eax = *(unsigned char*)(ebx_1 + 1);
                    al = (unsigned char) eax;
                    local6 = ecx;
                    local7 = edx;
                    local8 = local0;
                    local9 = local1;
                    local10 = ecx;
                    local11 = edx;
                    local12 = ebx;
                }
                else {
                    local0 = (int) al;
                    eax = isdelimiter((int) al); /* Warning: also results in ecx, edx */
                    local2 = ecx;
                    local3 = edx;
                    local4 = local0;
                    local5 = local1;
                    local10 = ecx;
                    local11 = edx;
                    if (eax != 0) {
                        break;
                    }
                    goto bb0x804a54c;
                }
                goto bb0x804a54c;
            } while ((unsigned char) eax == 0);
        }
        param5 = local10;
        param5 = local11;
        ebx = local12;
        eax_1 = skip_space(ebx, param5, param5);
        eax_2 = (int) *eax_1;
        eax = isdelimiter(eax_2); /* Warning: also results in ecx, edx */
        if (eax != 0) {
            skip_space(eax_1 + 1, ecx, edx);
        }
    }
    return;
}

/** address: 0x08051a6a */
void skip_no(union { __size32 *; __size32; } param1)
{
    __size32 eax; 		// r24
    int ebp; 		// r29
    __size32 ebx; 		// r27
    unsigned int esp; 		// r28

    eax = *param1;
    strcmp_tospace(eax, param1, esp - 4, SUBFLAGS32(esp - 8, 20, esp - 28), esp == 28, (unsigned int)(esp - 8) < 20, param1, ebp, ebx, 0x8075670, eax, pc);
}

/** address: 0x08055821 */
void output_current_directory(char param1, __size32 param2)
{
    int eax_2; 		// r24{4}
    char *eax_4; 		// r24{6}
    int edx; 		// r26

    eax_2 = *20;
    if ( ~(*(&bright_html_carray + 0x1d10) > 2 || param2 == 0)) {
        eax_4 = getcwd(&param1, 0x1000);
        if (eax_4 != 0) {
            __fprintf_chk();
        }
    }
    edx = eax_2 ^ *20;
    if (edx != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804a597 */
void decstrtol(union { int; char *; } param1, union { int * x1; unsigned int; char **; } param2)
{
    int eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    ecx = strtol(param1, param2, 10); /* Warning: also results in edx */
    if (param2 != 0) {
        eax = *param2;
        if (eax != param1) {
            eax = skip_space(eax, ecx, edx);
            *(int*)param2 = eax;
        }
    }
    return;
}

/** address: 0x0804adb9 */
void extra_characters(__size32 param1, __size32 param3, __size32 param3)
{
    __size8 *eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    if (param1 != 0) {
        eax = skip_space(param1, param3, param3); /* Warning: also results in ecx, edx */
        if (*eax != 0) {
            error(0x8072160, ecx, edx);
        }
    }
    return;
}

/** address: 0x0805037e */
void my_strlcpy(__size32 param1)
{
    __size32 ecx; 		// r25
    __size32 edi; 		// r31

    edi = param1;
    ecx = -1;
bb0x805039d:
    tmpb = 0 - *edi;
    edi +=  (DF == 0) ? 1 : -1;
    ecx--;
    if (tmpb != 0) {
        goto bb0x805039d;
    }
}

/** address: 0x0804a45e */
void strcmp_tospace(union { unsigned char *; __size32; } param1, union { unsigned char *; __size32; } param2)
{
    char al; 		// r8
    unsigned int eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{28}
    __size32 esi; 		// r30
    __size32 esi_1; 		// r30{19}
    __size32 esi_2; 		// r30{9}
    __size32 local1; 		// esi_1{19}

    eax = *(unsigned char*)param1;
    al = (unsigned char) eax;
    esi = param1;
    local1 = esi;
    if ((unsigned char) eax != 0) {
bb0x804a48d:
        esi_1 = local1;
        eax = isdelimiter((int) al);
        if (eax == 0) {
            esi_2 = esi_1 + 1;
            eax = *(unsigned char*)(esi_1 + 1);
            al = (unsigned char) eax;
            local1 = esi_2;
            if ((unsigned char) eax != 0) {
                goto bb0x804a48d;
            }
bb0x804a482:
            eax = *(unsigned char*)param2;
            al = (unsigned char) eax;
            ebx = param2;
            if ((unsigned char) eax != 0) {
bb0x804a4a8:
                ebx_1 = ebx;
                eax = isdelimiter((int) al);
                if (eax == 0) {
                    ebx = ebx_1 + 1;
                    eax = *(unsigned char*)(ebx_1 + 1);
                    al = (unsigned char) eax;
                    if ((unsigned char) eax == 0) {
bb0x804a4b7:
                    }
                    goto bb0x804a4a8;
                }
                goto bb0x804a4b7;
            }
            goto bb0x804a4b7;
        }
        goto bb0x804a482;
    }
    goto bb0x804a482;
}

/** address: 0x080524df */
void save_set_options(__size32 param1, __size32 param2)
{
    __size32 eax; 		// r24
    int ecx; 		// r25
    int edx; 		// r26

    if (*0x8082f40 != 0) {
        eax = fopen(0x8082f40, "w"); /* Warning: also results in ecx, edx */
        if (eax != 0) {
            __fprintf_chk();
            __fprintf_chk();
            output_options(eax);
            eax = fclose(eax); /* Warning: also results in ecx, edx */
            if (eax != 0) {
                error(0x80757ff, ecx, edx);
            }
            else {
                __printf_chk();
            }
        }
        else {
            error(0x807605c, ecx, edx);
        }
    }
    else {
        error(0x8076034, param1, param2);
    }
    return;
}

/** address: 0x0804f44b */
__size32 display_process(__size32 param1, __size32 param2, __size32 param3)
{
    if (param1 != 0) {
        default_color(param2, param3);
    }
    return 0;
}

/** address: 0x0804a42b */
__size32 isdelimiter(unsigned int param1)
{
    unsigned char al; 		// r8
    union { __size32; unsigned int *; } eax; 		// r24
    int ecx; 		// r25
    int edx; 		// r26

    eax = __ctype_b_loc(); /* Warning: also results in ecx, edx */
    eax = *eax;
    tmpb = *(eax + param1 * 2 + 1) & 0x20;
    if (tmpb == 0 && param1 != 44) {
        al =  (param1 == 61) ? 1 : 0;
        eax = (al);
    }
    else {
        eax = 1;
    }
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x08052177 */
void output_options(__size32 param1)
{
    if (param1 != 0) {
        __fprintf_chk();
        if (*0x8079164 == 0) {
            __fprintf_chk();
        }
        __fprintf_chk();
        if (*0x8079168 == 0) {
            __fprintf_chk();
        }
        __fprintf_chk();
        if (*0x807916c == 0) {
            __fprintf_chk();
        }
        __fprintf_chk();
        __fprintf_chk();
        if (*0x8079148 == 0) {
            __fprintf_chk();
        }
        __fprintf_chk();
        if (*0x8079284 == 0) {
            __fprintf_chk();
        }
        __fprintf_chk();
        if (*0x8079ad0 == 0) {
            __fprintf_chk();
        }
        __fprintf_chk();
        if (*0x807914c == 0) {
            __fprintf_chk();
        }
        __fprintf_chk();
        if (*0x8079150 == 0) {
            __fprintf_chk();
        }
        __fprintf_chk();
        if (*0x8079154 == 0) {
            __fprintf_chk();
        }
        __fprintf_chk();
        __fprintf_chk();
        __fprintf_chk();
        if (*0x8082bdc == 0) {
            __fprintf_chk();
        }
        __fprintf_chk();
        if (*0x8079904 == 0) {
            __fprintf_chk();
        }
        __fprintf_chk();
        if (*0x8079280 == 0) {
            __fprintf_chk();
        }
        __fprintf_chk();
        __fprintf_chk();
    }
    return;
}

/** address: 0x080525b0 */
void version_report()
{
    __fprintf_chk();
    __fprintf_chk();
    __fprintf_chk();
    __fprintf_chk();
    __fprintf_chk();
    __fprintf_chk();
    __fprintf_chk();
    return;
}

