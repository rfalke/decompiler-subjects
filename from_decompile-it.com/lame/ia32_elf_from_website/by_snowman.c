
void fun_804a018(int32_t a1, int32_t a2);

void fun_804a18c();

void frame_dummy();

void __do_global_ctors_aux();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_804a018(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0x10fdc - 4)) {
        fun_804a18c();
    }
    frame_dummy();
    __do_global_ctors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804a018(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x10fdc - 4)) {
        fun_804a18c();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x804a192;

void fun_804a18c() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void lame_get_VBR_mean_bitrate_kbps(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        lame_get_VBR_mean_bitrate_kbps(0x805af0c);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x805aefc);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t __libc_start_main = 0x804a2c2;

void fun_804a2bc(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void** silent = reinterpret_cast<void**>(0);

int32_t ignore_tag_errors = 0;

int32_t brhist = 0;

void** mp3_delay = reinterpret_cast<void**>(0);

int32_t mp3_delay_set = 0;

void** print_clipping_info = reinterpret_cast<void**>(0);

int32_t disable_wav_header = 0;

void fun_804a17c(void** a1);

void fun_804a1ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** fun_804a5cc(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a74c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a2fc(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a7dc(void** a1, void** a2, void** a3, void** a4, void** a5);

uint32_t fun_804a51c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a4bc(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a60c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a38c(void** a1, void** a2, void** a3, void** a4, void** a5);

void* fun_804a19c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a8fc(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a8bc(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a5bc(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_804a9bc(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a41c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804aa4c(void** a1, void** a2, void** a3, void** a4, void** a5);

void** error_printf(void** a1, void** a2, void** a3, void** a4, void** a5, ...);

void fun_804a8ac(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a67c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a34c(void** a1, int32_t a2, void** a3, void** a4, void** a5);

void fun_804a77c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a1fc(void** a1, void** a2, void** a3, void** a4, void** a5);

void** input_format = reinterpret_cast<void**>(0);

void fun_804a93c(void** a1, void** a2, void** a3, void** a4, void** a5, ...);

uint32_t swapbytes = 0;

uint32_t local_strcasecmp(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a66c(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_804aabc(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a88c(void** a1, void** a2, void** a3, void** a4, void** a5);

void** in_bitwidth = reinterpret_cast<void**>(16);

int32_t in_signed = -1;

int32_t in_endian = 0;

int32_t presets_set(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a14c(void** a1, void** a2, void** a3, void** a4, void** a5);

int32_t flush_write = 0;

void fun_804a39c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a32c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804aa0c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a9ac(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a12c(void** a1, void** a2, void** a3, void** a4, void** a5);

int32_t fun_804aa6c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void fun_804a57c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a42c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a5ec(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a2dc(void** a1, void** a2, void** a3, void** a4, void** a5);

void** id3_tag(void** a1, void** a2, void** a3, void** a4, void** a5);

int32_t set_id3_albumart(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a7bc(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a0cc(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a0dc(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804aa8c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a78c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a71c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a9dc(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a35c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a33c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a85c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a63c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a50c(void** a1, void** a2, void** a3, void** a4, void** a5);

uint32_t fun_804a81c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a46c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a52c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a54c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804aa5c(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a99c(void** a1, void** a2, void** a3, void** a4, void** a5);

void** resample_rate(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a56c(void** a1, void** a2, void** a3, void** a4, void** a5);

int32_t fun_804a30c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void fun_804a7ec(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a48c(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_804a4dc(void** a1, void** a2, void** a3, void** a4, void** a5);

void** console_printf(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, ...);

void** filename_to_type(void** a1, void** a2, void** a3, void** a4, void** a5);

int32_t fun_804a6ac(void** a1, void** a2, void** a3, void** a4, void** a5);

int32_t fun_804a0bc(void** a1, void** a2, void** a3, void** a4, void** a5, ...);

int32_t fun_804a89c(void** a1, void** a2, void** a3, void** a4, void** a5);

void** g805bce8 = reinterpret_cast<void**>(0);

int32_t usage(void** a1, void** a2, void** a3, void** a4, void** a5);

void** stdout = reinterpret_cast<void**>(0);

int32_t long_help(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_804a80c(int32_t a1, int32_t a2, void** a3, void** a4, void** a5);

void** genre_list_handler(void** a1, void** a2);

int32_t print_license(void** a1, void** a2, void** a3, void** a4, void** a5);

int32_t short_help(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_804a0ac(int32_t a1, int32_t a2, void** a3, void** a4, void** a5);

void fun_804aaac(void** a1, void** a2, void** a3, void** a4, void** a5);

void** parse_args(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void* ebp8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    void** v13;
    void** v14;
    int32_t v15;
    int32_t v16;
    void** v17;
    void** v18;
    uint32_t eax19;
    void** v20;
    uint32_t eax21;
    uint32_t eax22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void** v31;
    void** v32;
    void** edx33;
    void** eax34;
    void** v35;
    void** v36;
    void* v37;
    void** eax38;
    void** v39;
    uint32_t eax40;
    uint32_t eax41;
    uint32_t eax42;
    void** eax43;
    void** v44;
    void** v45;
    void** eax46;
    void** v47;
    void** v48;
    uint32_t eax49;
    uint32_t eax50;
    uint32_t eax51;
    void** eax52;
    uint32_t eax53;
    void** eax54;
    uint32_t eax55;
    void* eax56;
    void* eax57;
    void** eax58;
    void** eax59;
    uint32_t eax60;
    int32_t eax61;
    uint32_t eax62;
    void** eax63;
    void** v64;
    void** v65;
    uint32_t eax66;
    void** v67;
    uint32_t eax68;
    uint32_t eax69;
    uint32_t eax70;
    uint32_t eax71;
    uint32_t eax72;
    uint32_t eax73;
    void** eax74;
    void** v75;
    void** eax76;
    void** eax77;
    void** eax78;
    void** eax79;
    void** eax80;
    void** eax81;
    uint32_t eax82;
    uint32_t eax83;
    void** eax84;
    uint32_t eax85;
    uint32_t eax86;
    uint32_t eax87;
    uint32_t eax88;
    uint32_t eax89;
    uint32_t eax90;
    uint32_t eax91;
    uint32_t eax92;
    uint32_t eax93;
    uint32_t eax94;
    int32_t eax95;
    uint32_t eax96;
    uint32_t eax97;
    uint32_t eax98;
    void** eax99;
    uint32_t eax100;
    uint32_t eax101;
    uint32_t eax102;
    uint32_t eax103;
    uint32_t eax104;
    uint32_t eax105;
    void** v106;
    void** v107;
    int32_t eax108;
    void** v109;
    void** v110;
    int32_t eax111;
    void** v112;
    void** v113;
    int32_t eax114;
    uint32_t eax115;
    uint32_t eax116;
    uint32_t eax117;
    uint32_t eax118;
    uint32_t eax119;
    uint32_t eax120;
    uint32_t eax121;
    uint32_t eax122;
    uint32_t eax123;
    uint32_t eax124;
    uint32_t eax125;
    uint32_t eax126;
    void** eax127;
    int32_t eax128;
    void** eax129;
    uint32_t eax130;
    void** eax131;
    int32_t eax132;
    void** eax133;
    uint32_t eax134;
    void** eax135;
    void** eax136;
    uint32_t eax137;
    int32_t eax138;
    int32_t eax139;
    uint32_t eax140;
    uint32_t eax141;
    uint32_t eax142;
    uint32_t eax143;
    uint32_t eax144;
    uint32_t eax145;
    uint32_t eax146;
    void** eax147;
    void** eax148;
    void** eax149;
    uint32_t eax150;
    uint32_t eax151;
    uint1_t zf152;
    uint32_t eax153;
    uint1_t zf154;
    uint32_t eax155;
    uint1_t zf156;
    uint32_t eax157;
    uint1_t zf158;
    uint1_t zf159;
    void** v160;
    uint32_t eax161;
    uint1_t zf162;
    uint32_t eax163;
    uint32_t eax164;
    uint32_t eax165;
    void** eax166;
    uint32_t eax167;
    uint32_t eax168;
    uint1_t zf169;
    uint1_t zf170;
    uint1_t zf171;
    uint1_t zf172;
    uint1_t zf173;
    uint32_t eax174;
    uint32_t eax175;
    uint32_t v176;
    uint32_t eax177;
    uint32_t eax178;
    uint32_t v179;
    uint32_t eax180;
    uint32_t eax181;
    uint32_t v182;
    uint32_t eax183;
    uint32_t eax184;
    uint32_t v185;
    uint32_t eax186;
    uint32_t eax187;
    uint32_t eax188;
    uint32_t eax189;
    uint32_t eax190;
    uint32_t eax191;
    void** v192;
    uint32_t eax193;
    uint32_t eax194;
    uint32_t eax195;
    uint32_t eax196;
    uint32_t eax197;
    uint32_t eax198;
    uint32_t eax199;
    uint32_t eax200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    int32_t eax205;
    void** v206;
    void** v207;
    int32_t eax208;
    void** v209;
    void** v210;
    int32_t eax211;
    void** v212;
    void** v213;
    int32_t eax214;
    void** eax215;
    int32_t eax216;
    uint32_t eax217;
    uint32_t eax218;
    uint32_t eax219;
    uint32_t eax220;
    uint32_t eax221;
    uint32_t eax222;
    void** v223;
    void** v224;
    uint1_t zf225;
    uint1_t zf226;
    uint1_t zf227;
    void** v228;
    int32_t eax229;
    void** eax230;
    uint32_t eax231;
    void** eax232;
    uint32_t eax233;
    uint32_t eax234;
    void** v235;
    void** v236;
    void** v237;
    void** v238;
    int32_t eax239;
    void** eax240;
    void** v241;
    void** v242;
    void** v243;
    void** v244;
    uint32_t eax245;
    void** eax246;
    void** eax247;
    void** eax248;
    int32_t eax249;
    void** v250;
    int32_t eax251;
    void** eax252;
    void** eax253;
    void** eax254;
    void** eax255;
    void** v256;
    void** v257;
    void** eax258;
    void** eax259;
    void** eax260;
    void** eax261;
    void** eax262;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = *reinterpret_cast<void***>(a3);
    v14 = reinterpret_cast<void**>(0);
    v15 = 0;
    v16 = 0;
    *reinterpret_cast<void***>(a4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a5) = reinterpret_cast<void**>(0);
    silent = reinterpret_cast<void**>(0);
    ignore_tag_errors = 0;
    brhist = 1;
    mp3_delay = reinterpret_cast<void**>(0);
    mp3_delay_set = 0;
    print_clipping_info = reinterpret_cast<void**>(0);
    disable_wav_header = 0;
    fun_804a17c(a1);
    v17 = reinterpret_cast<void**>(0);
    while (++v17, reinterpret_cast<signed char>(v17) < reinterpret_cast<signed char>(a2)) {
        v18 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v17) << 2) + reinterpret_cast<unsigned char>(a3));
        eax19 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v18));
        v20 = v18 + 1;
        if (*reinterpret_cast<signed char*>(&eax19) != 45) {
            if (!v11) {
                eax21 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4));
                if (*reinterpret_cast<signed char*>(&eax21)) {
                    eax22 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a5));
                    if (*reinterpret_cast<signed char*>(&eax22)) 
                        goto addr_80526a6_7;
                    eax23 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v17) << 2) + reinterpret_cast<unsigned char>(a3));
                    v24 = reinterpret_cast<void**>(0x1001);
                    v25 = eax23;
                    fun_804a1ec(a5, v25, 0x1001, v26, v27, v28, v29);
                    continue;
                } else {
                    eax30 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v17) << 2) + reinterpret_cast<unsigned char>(a3));
                    v24 = reinterpret_cast<void**>(0x1001);
                    v25 = eax30;
                    fun_804a1ec(a4, v25, 0x1001, v26, v27, v31, v32);
                    v9 = 1;
                    continue;
                }
            } else {
                if (!a7) 
                    goto addr_8052624_11;
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(a7)) <= reinterpret_cast<signed char>(v14)) 
                    goto addr_8052624_11;
                edx33 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v17) << 2) + reinterpret_cast<unsigned char>(a3));
                eax34 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v14) << 2) + reinterpret_cast<unsigned char>(a6));
                ++v14;
                v24 = reinterpret_cast<void**>(0x1001);
                v25 = edx33;
                fun_804a1ec(eax34, v25, 0x1001, v26, v27, v35, v36);
                v9 = 1;
                continue;
            }
        }
        v37 = reinterpret_cast<void*>(0);
        if (reinterpret_cast<signed char>(v17 + 1) >= reinterpret_cast<signed char>(a2)) {
            eax38 = reinterpret_cast<void**>(0x8055592);
        } else {
            eax38 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v17 + 1) << 2) + reinterpret_cast<unsigned char>(a3));
        }
        v39 = eax38;
        eax40 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v20));
        if (!*reinterpret_cast<signed char*>(&eax40)) {
            v9 = 1;
            eax41 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4));
            if (*reinterpret_cast<signed char*>(&eax41)) {
                eax42 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a5));
                if (!*reinterpret_cast<signed char*>(&eax42)) {
                    eax43 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v17) << 2) + reinterpret_cast<unsigned char>(a3));
                    v24 = reinterpret_cast<void**>(0x1001);
                    v25 = eax43;
                    fun_804a1ec(a5, v25, 0x1001, v26, v27, v44, v45);
                }
            } else {
                eax46 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v17) << 2) + reinterpret_cast<unsigned char>(a3));
                v24 = reinterpret_cast<void**>(0x1001);
                v25 = eax46;
                fun_804a1ec(a4, v25, 0x1001, v26, v27, v47, v48);
            }
        }
        eax49 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v20));
        if (*reinterpret_cast<signed char*>(&eax49) != 45) {
            while (eax50 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v20)), ++v20, reinterpret_cast<uint1_t>(!!*reinterpret_cast<signed char*>(&eax50))) {
                eax51 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v20));
                if (!*reinterpret_cast<signed char*>(&eax51)) {
                    eax52 = v39;
                } else {
                    eax52 = v20;
                }
                eax53 = *reinterpret_cast<signed char*>(&eax50) - 63;
                switch (eax53) {
                case 3:
                    v37 = reinterpret_cast<void*>(1);
                    eax54 = fun_804a5cc(eax52, v25, v24, v26, v27);
                    v25 = eax54;
                    fun_804a74c(a1, v25, v24, v26, v27);
                    break;
                case 7:
                    v25 = reinterpret_cast<void**>(1);
                    fun_804a2fc(a1, 1, v24, v26, v27);
                    break;
                case 20:
                    silent = reinterpret_cast<void**>(10);
                    break;
                case 21:
                    v25 = reinterpret_cast<void**>(1);
                    fun_804a7dc(a1, 1, v24, v26, v27);
                    v12 = 1;
                    disable_wav_header = 0;
                    break;
                case 23:
                    v37 = reinterpret_cast<void*>(1);
                    eax55 = fun_804a51c(a1, v25, v24, v26, v27);
                    if (!eax55) {
                        v25 = reinterpret_cast<void**>(4);
                        fun_804a4bc(a1, 4, v24, v26, v27);
                    }
                    fun_804a60c(eax52, v25, v24, v26, v27);
                    __asm__("fstp dword [ebp+0xffffff54]");
                    __asm__("fld dword [ebp+0xffffff54]");
                    __asm__("fstp dword [esp+0x4]");
                    fun_804a38c(a1, v25, v24, v26, v27);
                    break;
                case 25:
                    v26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xffffff84);
                    v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xffffff8c);
                    v25 = reinterpret_cast<void**>("%d,%d");
                    eax56 = fun_804a19c(eax52, "%d,%d", v24, v26, v27);
                    if (reinterpret_cast<int1_t>(eax56 == 1)) {
                    }
                    v37 = reinterpret_cast<void*>(1);
                    break;
                case 26:
                    v25 = reinterpret_cast<void**>(1);
                    fun_804a8fc(a1, 1, v24, v26, v27);
                    break;
                case 27:
                    v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xffffff84);
                    v25 = reinterpret_cast<void**>("%d");
                    eax57 = fun_804a19c(eax52, "%d", v24, v26, v27);
                    v37 = eax57;
                    break;
                case 34:
                    v10 = 1;
                    v25 = reinterpret_cast<void**>(3);
                    fun_804a8bc(a1, 3, v24, v26, v27);
                    break;
                case 35:
                    v37 = reinterpret_cast<void*>(1);
                    eax58 = fun_804a5cc(eax52, v25, v24, v26, v27);
                    fun_804a5bc(a1, eax58, v24, v26, v27);
                    eax59 = fun_804a9bc(a1, eax58, v24, v26, v27);
                    v25 = eax59;
                    fun_804a41c(a1, v25, v24, v26, v27);
                    break;
                case 36:
                    v25 = reinterpret_cast<void**>(1);
                    fun_804aa4c(a1, 1, v24, v26, v27);
                    break;
                case 37:
                case 44:
                    v25 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax50)));
                    error_printf("WARNING: -%c is obsolete.\n", v25, v24, v26, v27, "WARNING: -%c is obsolete.\n", v25, v24, v26, v27);
                    break;
                case 38:
                    v37 = reinterpret_cast<void*>(1);
                    eax60 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax52));
                    eax61 = *reinterpret_cast<signed char*>(&eax60);
                    if (eax61 == 99) {
                        v25 = reinterpret_cast<void**>(3);
                        fun_804a8ac(a1, 3, v24, v26, v27);
                    } else {
                        if (eax61 == 0x6e) {
                            v25 = reinterpret_cast<void**>(0);
                            fun_804a8ac(a1, 0, v24, v26, v27);
                        } else {
                            if (eax61 != 53) 
                                goto addr_80524a4_50;
                            v25 = reinterpret_cast<void**>(1);
                            fun_804a8ac(a1, 1, v24, v26, v27);
                        }
                    }
                    break;
                case 39:
                    v25 = reinterpret_cast<void**>(7);
                    fun_804a67c(a1, 7, v24, v26, v27);
                    break;
                case 41:
                    v25 = reinterpret_cast<void**>(2);
                    fun_804a67c(a1, 2, v24, v26, v27);
                    break;
                case 46:
                    v37 = reinterpret_cast<void*>(1);
                    eax62 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax52));
                    switch (*reinterpret_cast<signed char*>(&eax62) - 97) {
                    case 0:
                        v25 = reinterpret_cast<void**>(1);
                        fun_804a8bc(a1, 1, v24, v26, v27);
                        break;
                    case 3:
                        v25 = reinterpret_cast<void**>(2);
                        fun_804a8bc(a1, 2, v24, v26, v27);
                        break;
                    case 5:
                        fun_804a34c(a1, 1, v24, v26, v27);
                    case 9:
                        v25 = reinterpret_cast<void**>(1);
                        fun_804a8bc(a1, 1, v24, v26, v27);
                        break;
                    case 12:
                        v25 = reinterpret_cast<void**>(3);
                        fun_804a8bc(a1, 3, v24, v26, v27);
                        break;
                    case 18:
                        v25 = reinterpret_cast<void**>(0);
                        fun_804a8bc(a1, 0, v24, v26, v27);
                    case 1:
                    case 2:
                    case 4:
                    case 6:
                    case 7:
                    case 8:
                    case 10:
                    case 11:
                    case 13:
                    case 14:
                    case 15:
                    case 16:
                    case 17:
                        goto 0x8052119;
                    }
                    break;
                case 48:
                    v25 = reinterpret_cast<void**>(0);
                    fun_804a77c(a1, 0, v24, v26, v27);
                    break;
                case 49:
                    v25 = reinterpret_cast<void**>(1);
                    fun_804a1fc(a1, 1, v24, v26, v27);
                    break;
                case 50:
                    v37 = reinterpret_cast<void*>(1);
                    eax63 = fun_804a5cc(eax52, v25, v24, v26, v27);
                    v64 = eax63;
                    if (reinterpret_cast<signed char>(v64) < reinterpret_cast<signed char>(0)) {
                        v64 = reinterpret_cast<void**>(0);
                    }
                    if (reinterpret_cast<signed char>(v64) > reinterpret_cast<signed char>(9)) {
                        v64 = reinterpret_cast<void**>(9);
                    }
                    v25 = v64;
                    fun_804a67c(a1, v25, v24, v26, v27);
                    break;
                case 51:
                    input_format = reinterpret_cast<void**>(1);
                    break;
                case 52:
                    v37 = reinterpret_cast<void*>(1);
                    fun_804a60c(eax52, v25, v24, v26, v27);
                    __asm__("fstp qword [ebp+0xffffff78]");
                    __asm__("fld qword [ebp+0xffffff78]");
                    __asm__("fld qword [0x8059860]");
                    __asm__("fucomip st0, st1");
                    __asm__("fstp st0");
                    if (eax53 < 57) {
                        __asm__("fld1 ");
                    } else {
                        __asm__("fld qword [0x8059828]");
                    }
                    __asm__("fmul qword [ebp+0xffffff78]");
                    __asm__("fld qword [0x8059848]");
                    __asm__("faddp st1, st0");
                    __asm__("fnstcw word [ebp+0xffffff52]");
                    __asm__("fldcw word [ebp+0xffffff50]");
                    __asm__("fistp dword [ebp+0xffffff4c]");
                    __asm__("fldcw word [ebp+0xffffff52]");
                    v25 = v65;
                    fun_804a93c(a1, v25, v24, v26, v27, a1, v25, v24, v26, v27);
                    break;
                case 53:
                    v25 = reinterpret_cast<void**>(0);
                    fun_804a7dc(a1, 0, v24, v26, v27);
                    disable_wav_header = 1;
                    break;
                case 55:
                    eax66 = fun_804a51c(a1, v25, v24, v26, v27);
                    if (eax66) {
                        break;
                    } else {
                        v25 = reinterpret_cast<void**>(4);
                        fun_804a4bc(a1, 4, v24, v26, v27);
                        break;
                    }
                case 57:
                    swapbytes = 1;
                case 1:
                case 2:
                case 4:
                case 5:
                case 6:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                case 22:
                case 24:
                case 28:
                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 40:
                case 42:
                case 43:
                case 45:
                case 47:
                case 54:
                case 56:
                    goto 0x8052562;
                case 0:
                    goto 0x8052535;
                }
                if (!v37) 
                    continue;
                if (eax52 != v20) {
                    ++v17;
                } else {
                    v20 = reinterpret_cast<void**>(0x8055592);
                }
                v37 = reinterpret_cast<void*>(0);
            }
            continue;
        }
        v67 = v20 + 1;
        eax68 = local_strcasecmp(v67, "resample", v24, v26, v27);
        if (!eax68) 
            goto addr_8050665_88;
        eax69 = local_strcasecmp(v67, "vbr-old", v24, v26, v27);
        if (!eax69) {
            v25 = reinterpret_cast<void**>(2);
            fun_804a4bc(a1, 2, v24, v26, v27);
            goto addr_805203c_91;
        }
        eax70 = local_strcasecmp(v67, "vbr-new", v24, v26, v27);
        if (!eax70) {
            v25 = reinterpret_cast<void**>(4);
            fun_804a4bc(a1, 4, v24, v26, v27);
            goto addr_805203c_91;
        }
        eax71 = local_strcasecmp(v67, "vbr-mtrh", v24, v26, v27);
        if (!eax71) {
            v25 = reinterpret_cast<void**>(4);
            fun_804a4bc(a1, 4, v24, v26, v27);
            goto addr_805203c_91;
        }
        eax72 = local_strcasecmp(v67, "cbr", v24, v26, v27);
        if (!eax72) {
            v25 = reinterpret_cast<void**>(0);
            fun_804a4bc(a1, 0, v24, v26, v27);
            goto addr_805203c_91;
        }
        eax73 = local_strcasecmp(v67, "abr", v24, v26, v27);
        if (!eax73) {
            v37 = reinterpret_cast<void*>(1);
            fun_804a4bc(a1, 3, v24, v26, v27);
            eax74 = fun_804a5cc(v39, 3, v24, v26, v27);
            v75 = eax74;
            fun_804a66c(a1, v75, v24, v26, v27);
            eax76 = fun_804aabc(a1, v75, v24, v26, v27);
            if (reinterpret_cast<signed char>(eax76) > reinterpret_cast<signed char>(0x1f3f)) {
                eax77 = fun_804aabc(a1, v75, v24, v26, v27);
                v75 = reinterpret_cast<void**>((__intrinsic() >> 6) - reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax77 + 0x1f4) >> 31));
                fun_804a66c(a1, v75, v24, v26, v27);
            }
            eax78 = fun_804aabc(a1, v75, v24, v26, v27);
            if (reinterpret_cast<signed char>(eax78) > reinterpret_cast<signed char>(0x13f)) {
                eax79 = reinterpret_cast<void**>(0x140);
            } else {
                eax79 = fun_804aabc(a1, v75, v24, v26, v27);
            }
            fun_804a66c(a1, eax79, v24, v26, v27);
            eax80 = fun_804aabc(a1, eax79, v24, v26, v27);
            if (reinterpret_cast<signed char>(eax80) <= reinterpret_cast<signed char>(8)) {
                eax81 = reinterpret_cast<void**>(8);
            } else {
                eax81 = fun_804aabc(a1, eax79, v24, v26, v27);
            }
            v25 = eax81;
            fun_804a66c(a1, v25, v24, v26, v27);
            goto addr_805203c_91;
        }
        eax82 = local_strcasecmp(v67, "r3mix", v24, v26, v27);
        if (!eax82) {
            v25 = reinterpret_cast<void**>(0x3e8);
            fun_804a88c(a1, 0x3e8, v24, v26, v27);
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("bitwidth");
        eax83 = local_strcasecmp(v67, "bitwidth", v24, v26, v27);
        if (!eax83) {
            v37 = reinterpret_cast<void*>(1);
            eax84 = fun_804a5cc(v39, "bitwidth", v24, v26, v27);
            in_bitwidth = eax84;
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("signed");
        eax85 = local_strcasecmp(v67, "signed", v24, v26, v27);
        if (!eax85) {
            in_signed = 1;
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("unsigned");
        eax86 = local_strcasecmp(v67, "unsigned", v24, v26, v27);
        if (!eax86) {
            in_signed = 0;
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("little-endian");
        eax87 = local_strcasecmp(v67, "little-endian", v24, v26, v27);
        if (!eax87) {
            in_endian = 0;
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("big-endian");
        eax88 = local_strcasecmp(v67, "big-endian", v24, v26, v27);
        if (!eax88) {
            in_endian = 1;
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("mp1input");
        eax89 = local_strcasecmp(v67, "mp1input", v24, v26, v27);
        if (!eax89) {
            input_format = reinterpret_cast<void**>(4);
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("mp2input");
        eax90 = local_strcasecmp(v67, "mp2input", v24, v26, v27);
        if (!eax90) {
            input_format = reinterpret_cast<void**>(5);
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("mp3input");
        eax91 = local_strcasecmp(v67, "mp3input", v24, v26, v27);
        if (!eax91) {
            input_format = reinterpret_cast<void**>(6);
            goto addr_805203c_91;
        }
        eax92 = local_strcasecmp(v67, "ogginput", v24, v26, v27);
        if (!eax92) 
            goto addr_80509d3_127;
        eax93 = local_strcasecmp(v67, "phone", v24, v26, v27);
        if (!eax93) 
            goto addr_8050a00_129;
        eax94 = local_strcasecmp(v67, "voice", v24, v26, v27);
        if (!eax94) {
            v27 = v13;
            v26 = v67;
            v24 = reinterpret_cast<void**>(0);
            v25 = reinterpret_cast<void**>(0);
            eax95 = presets_set(a1, 0, 0, v26, v27);
            if (eax95 < 0) 
                goto addr_8050a8c_132;
            error_printf("Warning: --voice is deprecated, use --preset voice instead!", 0, 0, v26, v27, "Warning: --voice is deprecated, use --preset voice instead!", 0, 0, v26, v27);
            goto addr_805203c_91;
        }
        eax96 = local_strcasecmp(v67, "decode", v24, v26, v27);
        if (!eax96) {
            v25 = reinterpret_cast<void**>(1);
            fun_804a14c(a1, 1, v24, v26, v27);
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("flush");
        eax97 = local_strcasecmp(v67, "flush", v24, v26, v27);
        if (!eax97) {
            flush_write = 1;
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("decode-mp3delay");
        eax98 = local_strcasecmp(v67, "decode-mp3delay", v24, v26, v27);
        if (!eax98) {
            eax99 = fun_804a5cc(v39, "decode-mp3delay", v24, v26, v27);
            mp3_delay = eax99;
            mp3_delay_set = 1;
            v37 = reinterpret_cast<void*>(1);
            goto addr_805203c_91;
        }
        eax100 = local_strcasecmp(v67, "nores", v24, v26, v27);
        if (!eax100) {
            v25 = reinterpret_cast<void**>(1);
            fun_804a39c(a1, 1, v24, v26, v27);
            goto addr_805203c_91;
        }
        eax101 = local_strcasecmp(v67, "strictly-enforce-ISO", v24, v26, v27);
        if (!eax101) {
            v25 = reinterpret_cast<void**>(1);
            fun_804a32c(a1, 1, v24, v26, v27);
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("scale");
        eax102 = local_strcasecmp(v67, "scale", v24, v26, v27);
        if (!eax102) {
            v37 = reinterpret_cast<void*>(1);
            fun_804a60c(v39, "scale", v24, v26, v27);
            __asm__("fstp dword [ebp+0xffffff54]");
            __asm__("fld dword [ebp+0xffffff54]");
            __asm__("fstp dword [esp+0x4]");
            fun_804aa0c(a1, "scale", v24, v26, v27);
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("scale-l");
        eax103 = local_strcasecmp(v67, "scale-l", v24, v26, v27);
        if (!eax103) {
            v37 = reinterpret_cast<void*>(1);
            fun_804a60c(v39, "scale-l", v24, v26, v27);
            __asm__("fstp dword [ebp+0xffffff54]");
            __asm__("fld dword [ebp+0xffffff54]");
            __asm__("fstp dword [esp+0x4]");
            fun_804a9ac(a1, "scale-l", v24, v26, v27);
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("scale-r");
        eax104 = local_strcasecmp(v67, "scale-r", v24, v26, v27);
        if (!eax104) {
            v37 = reinterpret_cast<void*>(1);
            fun_804a60c(v39, "scale-r", v24, v26, v27);
            __asm__("fstp dword [ebp+0xffffff54]");
            __asm__("fld dword [ebp+0xffffff54]");
            __asm__("fstp dword [esp+0x4]");
            fun_804a12c(a1, "scale-r", v24, v26, v27);
            goto addr_805203c_91;
        }
        eax105 = local_strcasecmp(v67, "noasm", v24, v26, v27);
        if (!eax105) {
            v37 = reinterpret_cast<void*>(1);
            eax108 = fun_804aa6c(v39, "mmx", v24, v26, v27, v106, v107);
            if (!eax108) {
                v24 = reinterpret_cast<void**>(0);
                fun_804a57c(a1, 1, 0, v26, v27);
            }
            eax111 = fun_804aa6c(v39, "3dnow", v24, v26, v27, v109, v110);
            if (!eax111) {
                v24 = reinterpret_cast<void**>(0);
                fun_804a57c(a1, 2, 0, v26, v27);
            }
            v25 = reinterpret_cast<void**>("sse");
            eax114 = fun_804aa6c(v39, "sse", v24, v26, v27, v112, v113);
            if (!eax114) {
                v24 = reinterpret_cast<void**>(0);
                v25 = reinterpret_cast<void**>(3);
                fun_804a57c(a1, 3, 0, v26, v27);
                goto addr_805203c_91;
            }
        }
        eax115 = local_strcasecmp(v67, "freeformat", v24, v26, v27);
        if (!eax115) {
            v25 = reinterpret_cast<void**>(1);
            fun_804a42c(a1, 1, v24, v26, v27);
            goto addr_805203c_91;
        }
        eax116 = local_strcasecmp(v67, "replaygain-fast", v24, v26, v27);
        if (!eax116) {
            v25 = reinterpret_cast<void**>(1);
            fun_804a5ec(a1, 1, v24, v26, v27);
            goto addr_805203c_91;
        }
        eax117 = local_strcasecmp(v67, "replaygain-accurate", v24, v26, v27);
        if (!eax117) {
            fun_804a2dc(a1, 1, v24, v26, v27);
            v25 = reinterpret_cast<void**>(1);
            fun_804a5ec(a1, 1, v24, v26, v27);
            goto addr_805203c_91;
        }
        eax118 = local_strcasecmp(v67, "noreplaygain", v24, v26, v27);
        if (!eax118) {
            v15 = 1;
            v25 = reinterpret_cast<void**>(0);
            fun_804a5ec(a1, 0, v24, v26, v27);
            goto addr_805203c_91;
        }
        eax119 = local_strcasecmp(v67, "clipdetect", v24, v26, v27);
        if (!eax119) {
            print_clipping_info = reinterpret_cast<void**>(1);
            v25 = reinterpret_cast<void**>(1);
            fun_804a2dc(a1, 1, v24, v26, v27);
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("nohist");
        eax120 = local_strcasecmp(v67, "nohist", v24, v26, v27);
        if (!eax120) {
            brhist = 0;
            goto addr_805203c_91;
        }
        eax121 = local_strcasecmp(v67, "tt", v24, v26, v27);
        if (!eax121) {
            v37 = reinterpret_cast<void*>(1);
            v26 = v39;
            v24 = reinterpret_cast<void**>(0);
            v25 = reinterpret_cast<void**>(0x74);
            id3_tag(a1, 0x74, 0, v26, v27);
            goto addr_805203c_91;
        }
        eax122 = local_strcasecmp(v67, "ta", v24, v26, v27);
        if (!eax122) {
            v37 = reinterpret_cast<void*>(1);
            v26 = v39;
            v24 = reinterpret_cast<void**>(0);
            v25 = reinterpret_cast<void**>(97);
            id3_tag(a1, 97, 0, v26, v27);
            goto addr_805203c_91;
        }
        eax123 = local_strcasecmp(v67, "tl", v24, v26, v27);
        if (!eax123) {
            v37 = reinterpret_cast<void*>(1);
            v26 = v39;
            v24 = reinterpret_cast<void**>(0);
            v25 = reinterpret_cast<void**>(0x6c);
            id3_tag(a1, 0x6c, 0, v26, v27);
            goto addr_805203c_91;
        }
        eax124 = local_strcasecmp(v67, "ty", v24, v26, v27);
        if (!eax124) {
            v37 = reinterpret_cast<void*>(1);
            v26 = v39;
            v24 = reinterpret_cast<void**>(0);
            v25 = reinterpret_cast<void**>(0x79);
            id3_tag(a1, 0x79, 0, v26, v27);
            goto addr_805203c_91;
        }
        eax125 = local_strcasecmp(v67, "tc", v24, v26, v27);
        if (!eax125) {
            v37 = reinterpret_cast<void*>(1);
            v26 = v39;
            v24 = reinterpret_cast<void**>(0);
            v25 = reinterpret_cast<void**>(99);
            id3_tag(a1, 99, 0, v26, v27);
            goto addr_805203c_91;
        }
        eax126 = local_strcasecmp(v67, "tn", v24, v26, v27);
        if (!eax126) {
            v26 = v39;
            v24 = reinterpret_cast<void**>(0);
            v25 = reinterpret_cast<void**>(0x6e);
            eax127 = id3_tag(a1, 0x6e, 0, v26, v27);
            v37 = reinterpret_cast<void*>(1);
            if (!eax127) 
                goto addr_805203c_91;
            eax128 = ignore_tag_errors;
            if (eax128) 
                goto addr_805203c_91;
            if (v16 == 1) 
                goto addr_8051025_183;
            if (v16 == 2) 
                goto addr_805203c_91;
            eax129 = silent;
            if (reinterpret_cast<signed char>(eax129) > reinterpret_cast<signed char>(9)) 
                goto addr_805203c_91;
            error_printf("The track number has to be between 1 and 255 for ID3v1, ignored for ID3v1.\n", 0x6e, 0, v26, v27, "The track number has to be between 1 and 255 for ID3v1, ignored for ID3v1.\n", 0x6e, 0, v26, v27);
            goto addr_805203c_91;
        }
        eax130 = local_strcasecmp(v67, "tg", v24, v26, v27);
        if (!eax130) {
            v26 = v39;
            v24 = reinterpret_cast<void**>(0);
            v25 = reinterpret_cast<void**>(0x67);
            eax131 = id3_tag(a1, 0x67, 0, v26, v27);
            v37 = reinterpret_cast<void*>(1);
            if (!eax131) 
                goto addr_805203c_91;
            eax132 = ignore_tag_errors;
            if (eax132) 
                goto addr_805203c_91;
            if (reinterpret_cast<int1_t>(eax131 == 0xffffffff)) 
                goto addr_80510c8_191;
            if (!reinterpret_cast<int1_t>(eax131 == 0xfffffffe)) 
                goto addr_805113e_193;
            if (v16 == 1) 
                goto addr_80510f1_195;
            if (v16 == 2) 
                goto addr_805203c_91;
            eax133 = silent;
            if (reinterpret_cast<signed char>(eax133) > reinterpret_cast<signed char>(9)) 
                goto addr_805203c_91;
            v25 = v39;
            error_printf("Unknown ID3v1 genre: '%s'.  Setting ID3v1 genre to 'Other'\n", v25, 0, v26, v27, "Unknown ID3v1 genre: '%s'.  Setting ID3v1 genre to 'Other'\n", v25, 0, v26, v27);
            goto addr_805203c_91;
        }
        eax134 = local_strcasecmp(v67, "tv", v24, v26, v27);
        if (!eax134) {
            v37 = reinterpret_cast<void*>(1);
            v26 = v39;
            v24 = reinterpret_cast<void**>(0);
            v25 = reinterpret_cast<void**>(0x76);
            eax135 = id3_tag(a1, 0x76, 0, v26, v27);
            if (eax135 && (eax136 = silent, reinterpret_cast<signed char>(eax136) <= reinterpret_cast<signed char>(9))) {
                v25 = v39;
                error_printf("Invalid field value: '%s'. Ignored\n", v25, 0, v26, v27, "Invalid field value: '%s'. Ignored\n", v25, 0, v26, v27);
                goto addr_805203c_91;
            }
        }
        eax137 = local_strcasecmp(v67, "ti", v24, v26, v27);
        if (!eax137) {
            v37 = reinterpret_cast<void*>(1);
            v25 = v39;
            eax138 = set_id3_albumart(a1, v25, v24, v26, v27);
            if (!eax138) 
                goto addr_805203c_91;
            eax139 = ignore_tag_errors;
            if (eax139) 
                goto addr_805203c_91; else 
                goto addr_8051207_205;
        }
        v25 = reinterpret_cast<void**>("ignore-tag-errors");
        eax140 = local_strcasecmp(v67, "ignore-tag-errors", v24, v26, v27);
        if (!eax140) {
            ignore_tag_errors = 1;
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("add-id3v2");
        eax141 = local_strcasecmp(v67, "add-id3v2", v24, v26, v27);
        if (!eax141) {
            fun_804a7bc(a1, "add-id3v2", v24, v26, v27);
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("id3v1-only");
        eax142 = local_strcasecmp(v67, "id3v1-only", v24, v26, v27);
        if (!eax142) {
            fun_804a0cc(a1, "id3v1-only", v24, v26, v27);
            v16 = 1;
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("id3v2-only");
        eax143 = local_strcasecmp(v67, "id3v2-only", v24, v26, v27);
        if (!eax143) {
            fun_804a0dc(a1, "id3v2-only", v24, v26, v27);
            v16 = 2;
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("space-id3v1");
        eax144 = local_strcasecmp(v67, "space-id3v1", v24, v26, v27);
        if (!eax144) {
            fun_804aa8c(a1, "space-id3v1", v24, v26, v27);
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("pad-id3v2");
        eax145 = local_strcasecmp(v67, "pad-id3v2", v24, v26, v27);
        if (!eax145) {
            fun_804a78c(a1, "pad-id3v2", v24, v26, v27);
            goto addr_805203c_91;
        }
        eax146 = local_strcasecmp(v67, "pad-id3v2-size", v24, v26, v27);
        if (!eax146) {
            eax147 = fun_804a5cc(v39, "pad-id3v2-size", v24, v26, v27);
            eax148 = reinterpret_cast<void**>(0x1f400);
            if (reinterpret_cast<signed char>(eax147) <= reinterpret_cast<signed char>(0x1f400)) {
                eax148 = eax147;
            }
            eax149 = reinterpret_cast<void**>(0);
            if (reinterpret_cast<signed char>(eax148) >= reinterpret_cast<signed char>(0)) {
                eax149 = eax148;
            }
            v25 = eax149;
            fun_804a71c(a1, v25, v24, v26, v27);
            v37 = reinterpret_cast<void*>(1);
            goto addr_805203c_91;
        }
        eax150 = local_strcasecmp(v67, "genre-list", v24, v26, v27);
        if (!eax150) 
            goto addr_8051385_225;
        eax151 = local_strcasecmp(v67, "lowpass", v24, v26, v27);
        zf152 = reinterpret_cast<uint1_t>(eax151 == 0);
        if (zf152) 
            goto addr_80513be_227;
        eax153 = local_strcasecmp(v67, "lowpass-width", v24, v26, v27);
        zf154 = reinterpret_cast<uint1_t>(eax153 == 0);
        if (!zf154) {
            eax155 = local_strcasecmp(v67, "highpass", v24, v26, v27);
            zf156 = reinterpret_cast<uint1_t>(eax155 == 0);
            if (!zf156) {
                eax157 = local_strcasecmp(v67, "highpass-width", v24, v26, v27);
                zf158 = reinterpret_cast<uint1_t>(eax157 == 0);
                if (zf158) {
                    fun_804a60c(v39, "highpass-width", v24, v26, v27);
                    __asm__("fstp qword [ebp+0xffffff78]");
                    v37 = reinterpret_cast<void*>(1);
                    __asm__("fld qword [ebp+0xffffff78]");
                    __asm__("fld qword [0x8059830]");
                    __asm__("fucomip st0, st1");
                    __asm__("fstp st0");
                    zf159 = reinterpret_cast<uint1_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf158)))) == 0);
                    if (!zf159) 
                        goto addr_805171a_232;
                    __asm__("fld qword [ebp+0xffffff78]");
                    __asm__("fld qword [0x8059838]");
                    __asm__("fxch st0, st1");
                    __asm__("fucomip st0, st1");
                    __asm__("fstp st0");
                    if (reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf159)))) 
                        goto addr_805171a_232;
                    __asm__("fld qword [ebp+0xffffff78]");
                    __asm__("fnstcw word [ebp+0xffffff52]");
                    __asm__("fldcw word [ebp+0xffffff50]");
                    __asm__("fistp dword [ebp+0xffffff4c]");
                    __asm__("fldcw word [ebp+0xffffff52]");
                    v25 = v160;
                    fun_804a9dc(a1, v25, v24, v26, v27);
                    goto addr_805203c_91;
                }
                v25 = reinterpret_cast<void**>("comp");
                eax161 = local_strcasecmp(v67, "comp", v24, v26, v27);
                zf162 = reinterpret_cast<uint1_t>(eax161 == 0);
                if (zf162) {
                    v37 = reinterpret_cast<void*>(1);
                    fun_804a60c(v39, "comp", v24, v26, v27);
                    __asm__("fstp qword [ebp+0xffffff78]");
                    __asm__("fld qword [ebp+0xffffff78]");
                    __asm__("fld1 ");
                    __asm__("fucomip st0, st1");
                    __asm__("fstp st0");
                    if (reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf162)))) 
                        goto addr_80517ba_237;
                    __asm__("fld qword [ebp+0xffffff78]");
                    __asm__("fstp dword [ebp+0xffffff54]");
                    __asm__("fld dword [ebp+0xffffff54]");
                    __asm__("fstp dword [esp+0x4]");
                    fun_804a35c(a1, "comp", v24, v26, v27);
                    goto addr_805203c_91;
                }
                eax163 = local_strcasecmp(v67, "notemp", v24, v26, v27);
                if (!eax163) {
                    v25 = reinterpret_cast<void**>(0);
                    fun_804a33c(a1, 0, v24, v26, v27);
                    goto addr_805203c_91;
                }
                v25 = reinterpret_cast<void**>("interch");
                eax164 = local_strcasecmp(v67, "interch", v24, v26, v27);
                if (!eax164) {
                    v37 = reinterpret_cast<void*>(1);
                    fun_804a60c(v39, "interch", v24, v26, v27);
                    __asm__("fstp dword [ebp+0xffffff54]");
                    __asm__("fld dword [ebp+0xffffff54]");
                    __asm__("fstp dword [esp+0x4]");
                    fun_804a85c(a1, "interch", v24, v26, v27);
                    goto addr_805203c_91;
                }
                eax165 = local_strcasecmp(v67, "temporal-masking", v24, v26, v27);
                if (!eax165) {
                    v37 = reinterpret_cast<void*>(1);
                    eax166 = fun_804a5cc(v39, "temporal-masking", v24, v26, v27);
                    v25 = reinterpret_cast<void**>(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!eax166))));
                    fun_804a33c(a1, v25, v24, v26, v27);
                    goto addr_805203c_91;
                }
                v25 = reinterpret_cast<void**>("nspsytune");
                eax167 = local_strcasecmp(v67, "nspsytune", v24, v26, v27);
                if (!eax167) 
                    goto addr_805203c_91;
                eax168 = local_strcasecmp(v67, "nssafejoint", v24, v26, v27);
                if (!eax168) 
                    goto addr_80518e5_247;
            } else {
                fun_804a60c(v39, "highpass", v24, v26, v27);
                __asm__("fstp qword [ebp+0xffffff78]");
                v37 = reinterpret_cast<void*>(1);
                __asm__("fld qword [ebp+0xffffff78]");
                __asm__("fldz ");
                __asm__("fucomip st0, st1");
                __asm__("fstp st0");
                zf169 = reinterpret_cast<uint1_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf156)))) == 0);
                if (!zf169) {
                    v25 = reinterpret_cast<void**>(0xffffffff);
                    fun_804a63c(a1, 0xffffffff, v24, v26, v27);
                    goto addr_805203c_91;
                }
                __asm__("fld qword [ebp+0xffffff78]");
                __asm__("fld qword [0x8059830]");
                __asm__("fucomip st0, st1");
                __asm__("fstp st0");
                zf170 = reinterpret_cast<uint1_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf169)))) == 0);
                if (!zf170) 
                    goto addr_8051630_251;
                __asm__("fld qword [ebp+0xffffff78]");
                __asm__("fld qword [0x8059838]");
                __asm__("fxch st0, st1");
                __asm__("fucomip st0, st1");
                __asm__("fstp st0");
                zf171 = reinterpret_cast<uint1_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf170)))) == 0);
                if (!zf171) 
                    goto addr_8051630_251;
                __asm__("fld qword [ebp+0xffffff78]");
                __asm__("fld qword [0x8059850]");
                __asm__("fucomip st0, st1");
                __asm__("fstp st0");
                if (!reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf171)))) 
                    goto addr_8051665_254; else 
                    goto addr_805165d_255;
            }
        } else {
            fun_804a60c(v39, "lowpass-width", v24, v26, v27);
            __asm__("fstp qword [ebp+0xffffff78]");
            v37 = reinterpret_cast<void*>(1);
            __asm__("fld qword [ebp+0xffffff78]");
            __asm__("fld qword [0x8059830]");
            __asm__("fucomip st0, st1");
            __asm__("fstp st0");
            zf172 = reinterpret_cast<uint1_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf154)))) == 0);
            if (!zf172) 
                goto addr_805151b_257;
            __asm__("fld qword [ebp+0xffffff78]");
            __asm__("fld qword [0x8059838]");
            __asm__("fxch st0, st1");
            __asm__("fucomip st0, st1");
            __asm__("fstp st0");
            zf173 = reinterpret_cast<uint1_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf172)))) == 0);
            if (!zf173) 
                goto addr_805151b_257;
            __asm__("fld qword [ebp+0xffffff78]");
            __asm__("fld qword [0x8059850]");
            __asm__("fucomip st0, st1");
            __asm__("fstp st0");
            if (!reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf173)))) 
                goto addr_8051550_260; else 
                goto addr_8051548_261;
        }
        v25 = reinterpret_cast<void**>("nsmsfix");
        eax174 = local_strcasecmp(v67, "nsmsfix", v24, v26, v27);
        if (!eax174) {
            v37 = reinterpret_cast<void*>(1);
            fun_804a60c(v39, "nsmsfix", v24, v26, v27);
            __asm__("fstp qword [esp+0x4]");
            fun_804a50c(a1, "nsmsfix", v24, v26, v27);
            goto addr_805203c_91;
        }
        eax175 = local_strcasecmp(v67, "ns-bass", v24, v26, v27);
        if (!eax175) {
            v37 = reinterpret_cast<void*>(1);
            fun_804a60c(v39, "ns-bass", v24, v26, v27);
            __asm__("fstp qword [ebp+0xffffff70]");
            __asm__("fld qword [ebp+0xffffff70]");
            __asm__("fld qword [0x8059858]");
            __asm__("fmulp st1, st0");
            __asm__("fnstcw word [ebp+0xffffff52]");
            __asm__("fldcw word [ebp+0xffffff50]");
            __asm__("fistp dword [ebp-0x50]");
            __asm__("fldcw word [ebp+0xffffff52]");
            if (reinterpret_cast<int32_t>(v176) < reinterpret_cast<int32_t>(0xffffffe0)) {
                v176 = 0xffffffe0;
            }
            if (reinterpret_cast<int32_t>(v176) > reinterpret_cast<int32_t>(31)) {
                v176 = 31;
            }
            if (reinterpret_cast<int32_t>(v176) < reinterpret_cast<int32_t>(0)) {
                v176 = v176 + 64;
            }
            eax177 = fun_804a81c(a1, "ns-bass", v24, v26, v27);
            v25 = reinterpret_cast<void**>(eax177 | v176 << 2);
            fun_804a46c(a1, v25, v24, v26, v27);
            goto addr_805203c_91;
        }
        eax178 = local_strcasecmp(v67, "ns-alto", v24, v26, v27);
        if (!eax178) {
            v37 = reinterpret_cast<void*>(1);
            fun_804a60c(v39, "ns-alto", v24, v26, v27);
            __asm__("fstp qword [ebp+0xffffff68]");
            __asm__("fld qword [ebp+0xffffff68]");
            __asm__("fld qword [0x8059858]");
            __asm__("fmulp st1, st0");
            __asm__("fnstcw word [ebp+0xffffff52]");
            __asm__("fldcw word [ebp+0xffffff50]");
            __asm__("fistp dword [ebp-0x54]");
            __asm__("fldcw word [ebp+0xffffff52]");
            if (reinterpret_cast<int32_t>(v179) < reinterpret_cast<int32_t>(0xffffffe0)) {
                v179 = 0xffffffe0;
            }
            if (reinterpret_cast<int32_t>(v179) > reinterpret_cast<int32_t>(31)) {
                v179 = 31;
            }
            if (reinterpret_cast<int32_t>(v179) < reinterpret_cast<int32_t>(0)) {
                v179 = v179 + 64;
            }
            eax180 = fun_804a81c(a1, "ns-alto", v24, v26, v27);
            v25 = reinterpret_cast<void**>(eax180 | v179 << 8);
            fun_804a46c(a1, v25, v24, v26, v27);
            goto addr_805203c_91;
        }
        eax181 = local_strcasecmp(v67, "ns-treble", v24, v26, v27);
        if (!eax181) {
            v37 = reinterpret_cast<void*>(1);
            fun_804a60c(v39, "ns-treble", v24, v26, v27);
            __asm__("fstp qword [ebp+0xffffff60]");
            __asm__("fld qword [ebp+0xffffff60]");
            __asm__("fld qword [0x8059858]");
            __asm__("fmulp st1, st0");
            __asm__("fnstcw word [ebp+0xffffff52]");
            __asm__("fldcw word [ebp+0xffffff50]");
            __asm__("fistp dword [ebp-0x58]");
            __asm__("fldcw word [ebp+0xffffff52]");
            if (reinterpret_cast<int32_t>(v182) < reinterpret_cast<int32_t>(0xffffffe0)) {
                v182 = 0xffffffe0;
            }
            if (reinterpret_cast<int32_t>(v182) > reinterpret_cast<int32_t>(31)) {
                v182 = 31;
            }
            if (reinterpret_cast<int32_t>(v182) < reinterpret_cast<int32_t>(0)) {
                v182 = v182 + 64;
            }
            eax183 = fun_804a81c(a1, "ns-treble", v24, v26, v27);
            v25 = reinterpret_cast<void**>(eax183 | v182 << 14);
            fun_804a46c(a1, v25, v24, v26, v27);
            goto addr_805203c_91;
        }
        eax184 = local_strcasecmp(v67, "ns-sfb21", v24, v26, v27);
        if (!eax184) {
            v37 = reinterpret_cast<void*>(1);
            fun_804a60c(v39, "ns-sfb21", v24, v26, v27);
            __asm__("fstp qword [ebp+0xffffff58]");
            __asm__("fld qword [ebp+0xffffff58]");
            __asm__("fld qword [0x8059858]");
            __asm__("fmulp st1, st0");
            __asm__("fnstcw word [ebp+0xffffff52]");
            __asm__("fldcw word [ebp+0xffffff50]");
            __asm__("fistp dword [ebp-0x5c]");
            __asm__("fldcw word [ebp+0xffffff52]");
            if (reinterpret_cast<int32_t>(v185) < reinterpret_cast<int32_t>(0xffffffe0)) {
                v185 = 0xffffffe0;
            }
            if (reinterpret_cast<int32_t>(v185) > reinterpret_cast<int32_t>(31)) {
                v185 = 31;
            }
            if (reinterpret_cast<int32_t>(v185) < reinterpret_cast<int32_t>(0)) {
                v185 = v185 + 64;
            }
            eax186 = fun_804a81c(a1, "ns-sfb21", v24, v26, v27);
            v25 = reinterpret_cast<void**>(eax186 | v185 << 20);
            fun_804a46c(a1, v25, v24, v26, v27);
            goto addr_805203c_91;
        }
        v25 = reinterpret_cast<void**>("nspsytune2");
        eax187 = local_strcasecmp(v67, "nspsytune2", v24, v26, v27);
        if (!eax187) {
            addr_805203c_91:
            v17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v17) + reinterpret_cast<uint32_t>(v37));
            continue;
        } else {
            v25 = reinterpret_cast<void**>("quiet");
            eax188 = local_strcasecmp(v67, "quiet", v24, v26, v27);
            if (!eax188 || (v25 = reinterpret_cast<void**>("silent"), eax189 = local_strcasecmp(v67, "silent", v24, v26, v27), !eax189)) {
                silent = reinterpret_cast<void**>(10);
                goto addr_805203c_91;
            } else {
                v25 = reinterpret_cast<void**>("brief");
                eax190 = local_strcasecmp(v67, "brief", v24, v26, v27);
                if (eax190) {
                    v25 = reinterpret_cast<void**>("verbose");
                    eax191 = local_strcasecmp(v67, "verbose", v24, v26, v27);
                    if (eax191) {
                        v192 = reinterpret_cast<void**>("version");
                        eax193 = local_strcasecmp(v67, "version", v24, v26, v27);
                        if (!eax193) 
                            goto addr_8051cda_302;
                        v192 = reinterpret_cast<void**>("license");
                        eax194 = local_strcasecmp(v67, "license", v24, v26, v27);
                        if (!eax194) 
                            goto addr_8051cda_302;
                        eax195 = local_strcasecmp(v67, "help", v24, v26, v27);
                        if (!eax195) 
                            goto addr_8051d1f_305;
                        eax196 = local_strcasecmp(v67, "usage", v24, v26, v27);
                        if (!eax196) 
                            goto addr_8051d1f_305;
                        eax197 = local_strcasecmp(v67, "longhelp", v24, v26, v27);
                        if (!eax197) 
                            goto addr_8051d5b_308;
                        eax198 = local_strcasecmp(v67, "?", v24, v26, v27);
                        if (!eax198) 
                            goto addr_8051d9f_310;
                        eax199 = local_strcasecmp(v67, "preset", v24, v26, v27);
                        if (!eax199) 
                            goto addr_8051e1e_312;
                        eax200 = local_strcasecmp(v67, "alt-preset", v24, v26, v27);
                        if (eax200) 
                            goto addr_8051f19_314;
                    } else {
                        silent = reinterpret_cast<void**>(0xfffffff6);
                        goto addr_805203c_91;
                    }
                } else {
                    silent = reinterpret_cast<void**>(0xfffffffb);
                    goto addr_805203c_91;
                }
            }
        }
        addr_8051e1e_312:
        v37 = reinterpret_cast<void*>(1);
        v201 = reinterpret_cast<void**>(0);
        v202 = reinterpret_cast<void**>(0);
        while ((eax205 = fun_804aa6c(v39, "fast", v24, v26, v27, v203, v204), eax205 == 0) || (eax208 = fun_804aa6c(v39, "cbr", v24, v26, v27, v206, v207), eax208 == 0)) {
            eax211 = fun_804aa6c(v39, "fast", v24, v26, v27, v209, v210);
            if (!eax211 && reinterpret_cast<signed char>(v201) <= reinterpret_cast<signed char>(0)) {
                v201 = reinterpret_cast<void**>(1);
            }
            eax214 = fun_804aa6c(v39, "cbr", v24, v26, v27, v212, v213);
            if (!eax214 && reinterpret_cast<signed char>(v202) <= reinterpret_cast<signed char>(0)) {
                v202 = reinterpret_cast<void**>(1);
            }
            v37 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v37) + 1);
            if (reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(v17) + reinterpret_cast<uint32_t>(v37)) >= reinterpret_cast<signed char>(a2)) {
                eax215 = reinterpret_cast<void**>(0x8055592);
            } else {
                eax215 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v17) + reinterpret_cast<uint32_t>(v37) << 2) + reinterpret_cast<unsigned char>(a3));
            }
            v39 = eax215;
        }
        v27 = v13;
        v26 = v39;
        v24 = v202;
        v25 = v201;
        eax216 = presets_set(a1, v25, v24, v26, v27);
        if (eax216 < 0) 
            goto addr_8051f0f_327;
        goto addr_805203c_91;
        addr_8051f19_314:
        v25 = reinterpret_cast<void**>("disptime");
        eax217 = local_strcasecmp(v67, "disptime", v24, v26, v27);
        if (eax217) {
            v25 = reinterpret_cast<void**>("nogaptags");
            eax218 = local_strcasecmp(v67, "nogaptags", v24, v26, v27);
            if (eax218) {
                eax219 = local_strcasecmp(v67, "nogapout", v24, v26, v27);
                if (eax219) {
                    v25 = reinterpret_cast<void**>("nogap");
                    eax220 = local_strcasecmp(v67, "nogap", v24, v26, v27);
                    if (eax220) {
                        v25 = reinterpret_cast<void**>("athaa-sensitivity");
                        eax221 = local_strcasecmp(v67, "athaa-sensitivity", v24, v26, v27);
                        if (eax221) 
                            goto addr_8052017_333;
                        v37 = reinterpret_cast<void*>(1);
                        fun_804a60c(v39, "athaa-sensitivity", v24, v26, v27);
                        __asm__("fstp dword [ebp+0xffffff54]");
                        __asm__("fld dword [ebp+0xffffff54]");
                        __asm__("fstp dword [esp+0x4]");
                        fun_804a52c(a1, "athaa-sensitivity", v24, v26, v27);
                        goto addr_805203c_91;
                    } else {
                        v11 = 1;
                        goto addr_805203c_91;
                    }
                } else {
                    v25 = v39;
                    fun_804a54c(a5, v25, v24, v26, v27);
                    v37 = reinterpret_cast<void*>(1);
                    goto addr_805203c_91;
                }
            } else {
                v12 = 1;
                goto addr_805203c_91;
            }
        } else {
            v37 = reinterpret_cast<void*>(1);
            fun_804a60c(v39, "disptime", v24, v26, v27);
            __asm__("fstp dword [ebp+0xffffff54]");
            __asm__("fld dword [ebp+0xffffff54]");
            __asm__("fstp dword [0x805c550]");
            goto addr_805203c_91;
        }
        addr_80518e5_247:
        eax222 = fun_804a81c(a1, "nssafejoint", v24, v26, v27);
        v25 = reinterpret_cast<void**>(eax222 | 2);
        fun_804a46c(a1, v25, v24, v26, v27);
        goto addr_805203c_91;
        addr_8051665_254:
        __asm__("fld1 ");
        addr_8051667_339:
        __asm__("fmul qword [ebp+0xffffff78]");
        __asm__("fld qword [0x8059848]");
        __asm__("faddp st1, st0");
        __asm__("fnstcw word [ebp+0xffffff52]");
        __asm__("fldcw word [ebp+0xffffff50]");
        __asm__("fistp dword [ebp+0xffffff4c]");
        __asm__("fldcw word [ebp+0xffffff52]");
        v25 = v223;
        fun_804a63c(a1, v25, v24, v26, v27);
        goto addr_805203c_91;
        addr_805165d_255:
        __asm__("fld qword [0x8059828]");
        goto addr_8051667_339;
        addr_8051550_260:
        __asm__("fld1 ");
        addr_8051552_340:
        __asm__("fmul qword [ebp+0xffffff78]");
        __asm__("fld qword [0x8059848]");
        __asm__("faddp st1, st0");
        __asm__("fnstcw word [ebp+0xffffff52]");
        __asm__("fldcw word [ebp+0xffffff50]");
        __asm__("fistp dword [ebp+0xffffff4c]");
        __asm__("fldcw word [ebp+0xffffff52]");
        v25 = v224;
        fun_804aa5c(a1, v25, v24, v26, v27);
        goto addr_805203c_91;
        addr_8051548_261:
        __asm__("fld qword [0x8059828]");
        goto addr_8051552_340;
        addr_80513be_227:
        fun_804a60c(v39, "lowpass", v24, v26, v27);
        __asm__("fstp qword [ebp+0xffffff78]");
        v37 = reinterpret_cast<void*>(1);
        __asm__("fld qword [ebp+0xffffff78]");
        __asm__("fldz ");
        __asm__("fucomip st0, st1");
        __asm__("fstp st0");
        zf225 = reinterpret_cast<uint1_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf152)))) == 0);
        if (!zf225) {
            v25 = reinterpret_cast<void**>(0xffffffff);
            fun_804a99c(a1, 0xffffffff, v24, v26, v27);
            goto addr_805203c_91;
        }
        __asm__("fld qword [ebp+0xffffff78]");
        __asm__("fld qword [0x8059830]");
        __asm__("fucomip st0, st1");
        __asm__("fstp st0");
        zf226 = reinterpret_cast<uint1_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf225)))) == 0);
        if (!zf226) 
            goto addr_8051431_343;
        __asm__("fld qword [ebp+0xffffff78]");
        __asm__("fld qword [0x8059838]");
        __asm__("fxch st0, st1");
        __asm__("fucomip st0, st1");
        __asm__("fstp st0");
        zf227 = reinterpret_cast<uint1_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf226)))) == 0);
        if (!zf227) 
            goto addr_8051431_343;
        __asm__("fld qword [ebp+0xffffff78]");
        __asm__("fld qword [0x8059840]");
        __asm__("fucomip st0, st1");
        __asm__("fstp st0");
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf227)))) 
            goto addr_805145e_346;
        __asm__("fld1 ");
        addr_8051468_348:
        __asm__("fmul qword [ebp+0xffffff78]");
        __asm__("fld qword [0x8059848]");
        __asm__("faddp st1, st0");
        __asm__("fnstcw word [ebp+0xffffff52]");
        __asm__("fldcw word [ebp+0xffffff50]");
        __asm__("fistp dword [ebp+0xffffff4c]");
        __asm__("fldcw word [ebp+0xffffff52]");
        v25 = v228;
        fun_804a99c(a1, v25, v24, v26, v27);
        goto addr_805203c_91;
        addr_805145e_346:
        __asm__("fld qword [0x8059828]");
        goto addr_8051468_348;
        addr_8050a00_129:
        v27 = v13;
        v26 = v67;
        v24 = reinterpret_cast<void**>(0);
        v25 = reinterpret_cast<void**>(0);
        eax229 = presets_set(a1, 0, 0, v26, v27);
        if (eax229 < 0) 
            goto addr_8050a2d_349;
        error_printf("Warning: --phone is deprecated, use --preset phone instead!", 0, 0, v26, v27, "Warning: --phone is deprecated, use --preset phone instead!", 0, 0, v26, v27);
        goto addr_805203c_91;
        addr_8050665_88:
        v37 = reinterpret_cast<void*>(1);
        fun_804a60c(v39, "resample", v24, v26, v27);
        __asm__("fstp qword [esp]");
        eax230 = resample_rate(v39, "resample", v24, v26, v27);
        v25 = eax230;
        fun_804a56c(a1, v25, v24, v26, v27);
        goto addr_805203c_91;
    }
    if (v9) {
        eax231 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4));
        if (*reinterpret_cast<signed char*>(&eax231) == 45) {
            eax232 = silent;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax232) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax232 == 0)) {
                eax232 = reinterpret_cast<void**>(1);
            }
            silent = eax232;
        }
        eax233 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a5));
        if (!*reinterpret_cast<signed char*>(&eax233) && !v14) {
            eax234 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4));
            if (*reinterpret_cast<signed char*>(&eax234) != 45) {
                v24 = reinterpret_cast<void**>(0xffd);
                fun_804a1ec(a5, a4, 0xffd, v26, v27, v235, v236);
                eax239 = fun_804a30c(a1, a4, 0xffd, v26, v27, v237, v238);
                if (!eax239) {
                    v25 = reinterpret_cast<void**>(".mp3");
                    fun_804a7ec(a5, ".mp3", 0xffd, v26, v27);
                } else {
                    v25 = reinterpret_cast<void**>(".wav");
                    fun_804a7ec(a5, ".wav", 0xffd, v26, v27);
                }
            } else {
                v24 = reinterpret_cast<void**>(2);
                v25 = reinterpret_cast<void**>("-");
                fun_804a48c(a5, "-", 2, v26, v27);
            }
        }
        if (!v15) {
            v25 = reinterpret_cast<void**>(1);
            fun_804a5ec(a1, 1, v24, v26, v27);
        }
        if (v11 && ((eax240 = fun_804a4dc(a1, v25, v24, v26, v27), !!eax240) && !v12)) {
            console_printf("Note: Disabling VBR Xing/Info tag since it interferes with --nogap\n", v25, v24, v26, v27, v241, v242, v243, v244);
            v25 = reinterpret_cast<void**>(0);
            fun_804a7dc(a1, 0, v24, v26, v27);
        }
        eax245 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a5));
        if (*reinterpret_cast<signed char*>(&eax245) == 45) {
            v25 = reinterpret_cast<void**>(0);
            fun_804a7dc(a1, 0, v24, v26, v27);
        }
        eax246 = input_format;
        if (!eax246) {
            eax247 = filename_to_type(a4, v25, v24, v26, v27);
            input_format = eax247;
        }
        eax248 = input_format;
        if (!reinterpret_cast<int1_t>(eax248 == 8)) {
            if (!v10) {
                eax249 = fun_804a6ac(a1, v25, v24, v26, v27);
                if (eax249 != 3) {
                    v250 = reinterpret_cast<void**>(2);
                    fun_804a0bc(a1, 2, v24, v26, v27, a1, 2, v24, v26, v27);
                } else {
                    v250 = reinterpret_cast<void**>(1);
                    fun_804a0bc(a1, 1, v24, v26, v27, a1, 1, v24, v26, v27);
                }
            } else {
                v250 = reinterpret_cast<void**>(2);
                fun_804a0bc(a1, 2, v24, v26, v27, a1, 2, v24, v26, v27);
            }
            eax251 = fun_804a89c(a1, v250, v24, v26, v27);
            if (!eax251 || (eax252 = fun_804a9bc(a1, v250, v24, v26, v27), reinterpret_cast<signed char>(eax252) > reinterpret_cast<signed char>(7)) && (eax253 = fun_804a9bc(a1, v250, v24, v26, v27), reinterpret_cast<signed char>(eax253) <= reinterpret_cast<signed char>(0x280))) {
                if (a7) {
                    *reinterpret_cast<void***>(a7) = v14;
                }
                eax254 = reinterpret_cast<void**>(0);
            } else {
                error_printf("For free format, specify a bitrate between 8 and 640 kbps\n", v250, v24, v26, v27, "For free format, specify a bitrate between 8 and 640 kbps\n", v250, v24, v26, v27);
                error_printf("with the -b <bitrate> option\n", v250, v24, v26, v27, "with the -b <bitrate> option\n", v250, v24, v26, v27);
                eax254 = reinterpret_cast<void**>(0xffffffff);
            }
        } else {
            error_printf("sorry, vorbis support in LAME is deprecated.\n", v25, v24, v26, v27, "sorry, vorbis support in LAME is deprecated.\n", v25, v24, v26, v27);
            eax254 = reinterpret_cast<void**>(0xffffffff);
        }
    } else {
        eax255 = g805bce8;
        usage(eax255, v13, v24, v26, v27);
        eax254 = reinterpret_cast<void**>(0xffffffff);
    }
    addr_8052912_383:
    return eax254;
    addr_80526a6_7:
    v256 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v17) << 2) + reinterpret_cast<unsigned char>(a3));
    error_printf("%s: excess arg %s\n", v13, v256, v26, v27, "%s: excess arg %s\n", v13, v256, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_8052624_11:
    error_printf("Error: 'nogap option'.  Calling program does not allow nogap option, or\nyou have exceeded maximum number of input files for the nogap option\n", v25, v24, v26, v27, "Error: 'nogap option'.  Calling program does not allow nogap option, or\nyou have exceeded maximum number of input files for the nogap option\n", v25, v24, v26, v27);
    *reinterpret_cast<void***>(a7) = reinterpret_cast<void**>(0xffffffff);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    v257 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax50)));
    error_printf("%s: unrecognized option -%c\n", v13, v257, v26, v27, "%s: unrecognized option -%c\n", v13, v257, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    eax258 = stdout;
    long_help(a1, eax258, v13, 0, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    error_printf("%s: -m mode must be s/d/j/f/m not %s\n", v13, eax52, v26, v27, "%s: -m mode must be s/d/j/f/m not %s\n", v13, eax52, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_80524a4_50:
    error_printf("%s: -e emp must be n/5/c not %s\n", v13, eax52, v26, v27, "%s: -e emp must be n/5/c not %s\n", v13, eax52, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_80509d3_127:
    error_printf("sorry, vorbis support in LAME is deprecated.\n", "ogginput", v24, v26, v27, "sorry, vorbis support in LAME is deprecated.\n", "ogginput", v24, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_8051385_225:
    fun_804a80c(genre_list_handler, 0, v24, v26, v27);
    eax254 = reinterpret_cast<void**>(0xfffffffe);
    goto addr_8052912_383;
    addr_8051cda_302:
    eax259 = stdout;
    print_license(eax259, v192, v24, v26, v27);
    eax254 = reinterpret_cast<void**>(0xfffffffe);
    goto addr_8052912_383;
    addr_8051d1f_305:
    eax260 = stdout;
    short_help(a1, eax260, v13, v26, v27);
    eax254 = reinterpret_cast<void**>(0xfffffffe);
    goto addr_8052912_383;
    addr_8051d5b_308:
    eax261 = stdout;
    long_help(a1, eax261, v13, 0, v27);
    eax254 = reinterpret_cast<void**>(0xfffffffe);
    goto addr_8052912_383;
    addr_8051d9f_310:
    eax262 = fun_804a0ac("less -Mqc", "w", v24, v26, v27);
    long_help(a1, eax262, v13, 0, v27);
    fun_804aaac(eax262, eax262, v13, 0, v27);
    eax254 = reinterpret_cast<void**>(0xfffffffe);
    goto addr_8052912_383;
    addr_8051f0f_327:
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_8052017_333:
    error_printf("%s: unrecognized option --%s\n", v13, v67, v26, v27, "%s: unrecognized option --%s\n", v13, v67, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_80517ba_237:
    error_printf("Must specify compression ratio >= 1.0\n", "comp", v24, v26, v27, "Must specify compression ratio >= 1.0\n", "comp", v24, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_805171a_232:
    error_printf("Must specify highpass width with --highpass-width freq, freq >= 0.001 kHz\n", "highpass-width", v24, v26, v27, "Must specify highpass width with --highpass-width freq, freq >= 0.001 kHz\n", "highpass-width", v24, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_8051630_251:
    error_printf("Must specify highpass with --highpass freq, freq >= 0.001 kHz\n", "highpass", v24, v26, v27, "Must specify highpass with --highpass freq, freq >= 0.001 kHz\n", "highpass", v24, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_805151b_257:
    error_printf("Must specify lowpass width with --lowpass-width freq, freq >= 0.001 kHz\n", "lowpass-width", v24, v26, v27, "Must specify lowpass width with --lowpass-width freq, freq >= 0.001 kHz\n", "lowpass-width", v24, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_8051431_343:
    error_printf("Must specify lowpass with --lowpass freq, freq >= 0.001 kHz\n", "lowpass", v24, v26, v27, "Must specify lowpass with --lowpass freq, freq >= 0.001 kHz\n", "lowpass", v24, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_8051207_205:
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_80510c8_191:
    error_printf("Unknown ID3v1 genre number: '%s'.\n", v39, 0, v26, v27, "Unknown ID3v1 genre number: '%s'.\n", v39, 0, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_805113e_193:
    error_printf("Internal error.\n", 0x67, 0, v26, v27, "Internal error.\n", 0x67, 0, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_80510f1_195:
    error_printf("Unknown ID3v1 genre: '%s'.\n", v39, 0, v26, v27, "Unknown ID3v1 genre: '%s'.\n", v39, 0, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_8051025_183:
    error_printf("The track number has to be between 1 and 255 for ID3v1.\n", 0x6e, 0, v26, v27, "The track number has to be between 1 and 255 for ID3v1.\n", 0x6e, 0, v26, v27);
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_8050a8c_132:
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
    addr_8050a2d_349:
    eax254 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8052912_383;
}

int32_t free = 0x804a382;

void fun_804a37c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto free;
}

int32_t strcmp = 0x804aa72;

int32_t fun_804aa6c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto strcmp;
}

void** g805bcec = reinterpret_cast<void**>(0);

void** my_console_printing(void** a1, void** a2, void* a3);

void** error_printf(void** a1, void** a2, void** a3, void** a4, void** a5, ...) {
    void** eax6;
    void** eax7;

    eax6 = g805bcec;
    eax7 = my_console_printing(eax6, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 12);
    return eax7;
}

int32_t lame_get_out_samplerate = 0x804a962;

int32_t fun_804a95c(void** a1, void** a2, void** a3, void** a4, ...) {
    goto lame_get_out_samplerate;
}

void** console_printf(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, ...) {
    void** eax10;
    void** eax11;

    eax10 = g805bce8;
    eax11 = my_console_printing(eax10, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 12);
    return eax11;
}

int32_t lame_get_num_samples = 0x804a212;

void** fun_804a20c(void** a1, void** a2, void** a3, void** a4) {
    goto lame_get_num_samples;
}

struct s1 {
    signed char[1] pad1;
    void** f1;
};

int32_t strlen = 0x804a4b2;

struct s1* fun_804a4ac(void** a1, void** a2, void** a3, void** a4) {
    goto strlen;
}

int32_t lame_get_in_samplerate = 0x804a072;

void** fun_804a06c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto lame_get_in_samplerate;
}

void** fun_804a64c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void Write32BitsLowHigh(void** a1, void** a2, void** a3, void** a4);

void Write16BitsLowHigh(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t fun_804aa1c(void** a1, void** a2, void** a3, void** a4, void** a5);

int32_t WriteWaveHeader(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    unsigned char* eax8;
    uint32_t v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    int32_t eax29;
    int32_t eax30;

    eax8 = reinterpret_cast<unsigned char*>(a5 + 7);
    if (reinterpret_cast<int32_t>(eax8) < reinterpret_cast<int32_t>(0)) {
        eax8 = eax8 + 7;
    }
    v9 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax8) >> 3);
    fun_804a64c("RIFF", 1, 4, a1, v10, v11);
    Write32BitsLowHigh(a1, a2 + 36, 4, a1);
    fun_804a64c("WAVEfmt ", 2, 4, a1, v12, v13);
    Write32BitsLowHigh(a1, 16, 4, a1);
    Write16BitsLowHigh(a1, 1, 4, a1, v14, v15, v16);
    Write16BitsLowHigh(a1, a4, 4, a1, v17, v18, v19);
    Write32BitsLowHigh(a1, a3, 4, a1);
    Write32BitsLowHigh(a1, reinterpret_cast<unsigned char>(a3) * reinterpret_cast<unsigned char>(a4) * v9, 4, a1);
    Write16BitsLowHigh(a1, reinterpret_cast<unsigned char>(a4) * v9, 4, a1, v20, v21, v22);
    Write16BitsLowHigh(a1, a5, 4, a1, v23, v24, v25);
    fun_804a64c("data", 1, 4, a1, v26, v27);
    Write32BitsLowHigh(a1, a2, 4, a1);
    eax29 = fun_804aa1c(a1, a2, 4, a1, v28);
    if (!eax29) {
        eax30 = 0;
    } else {
        eax30 = -1;
    }
    return eax30;
}

/* last.3337 */
void** last_3337 = reinterpret_cast<void**>(0);

void** decoder_progress(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** edx8;
    void** eax9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    uint32_t eax24;
    void** eax25;
    uint32_t eax26;
    void** eax27;
    void** edx28;
    void** eax29;
    uint32_t eax30;
    void** eax31;
    void** eax32;
    void** eax33;
    void** eax34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** eax43;

    edx8 = *reinterpret_cast<void***>(a1 + 32);
    eax9 = *reinterpret_cast<void***>(a1 + 36);
    v10 = *reinterpret_cast<void***>(a1 + 12);
    v11 = edx8;
    v12 = eax9;
    console_printf("\rFrame#%6i/%-6i %3i kbps", v12, v11, v10, v13, v14, v15, v16, v17);
    if (*reinterpret_cast<int32_t*>(a1 + 16) != 1) {
        console_printf("         ", v12, v11, v10, v18, v19, v20, v21, v22);
        last_3337 = reinterpret_cast<void**>(0);
    } else {
        v23 = *reinterpret_cast<void***>(a1 + 20);
        eax24 = reinterpret_cast<unsigned char>(v23) & 1;
        if (!*reinterpret_cast<signed char*>(&eax24)) {
            eax25 = last_3337;
            eax26 = reinterpret_cast<unsigned char>(eax25) & 1;
            if (!*reinterpret_cast<signed char*>(&eax26)) {
                eax27 = reinterpret_cast<void**>(32);
            } else {
                eax27 = reinterpret_cast<void**>(0x69);
            }
            edx28 = eax27;
        } else {
            eax29 = last_3337;
            eax30 = reinterpret_cast<unsigned char>(eax29) & 1;
            if (!*reinterpret_cast<signed char*>(&eax30)) {
                eax31 = reinterpret_cast<void**>(0x69);
            } else {
                eax31 = reinterpret_cast<void**>(73);
            }
            edx28 = eax31;
        }
        if (!(reinterpret_cast<unsigned char>(v23) & 2)) {
            eax32 = last_3337;
            if (!(reinterpret_cast<unsigned char>(eax32) & 2)) {
                eax33 = reinterpret_cast<void**>("L  R");
            } else {
                eax33 = reinterpret_cast<void**>("LMSR");
            }
        } else {
            eax34 = last_3337;
            if (!(reinterpret_cast<unsigned char>(eax34) & 2)) {
                eax33 = reinterpret_cast<void**>("LMSR");
            } else {
                eax33 = reinterpret_cast<void**>(" MS ");
            }
        }
        v11 = edx28;
        v12 = eax33;
        console_printf("  %s  %c", v12, v11, v10, v35, v36, v37, v23, v38);
        last_3337 = v23;
    }
    eax43 = console_printf(0x8059aa6, v12, v11, v10, v39, v40, v41, v23, v42);
    return eax43;
}

void fun_804a3ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void console_flush(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** ebp14;

    eax8 = g805bce8;
    fun_804a3ec(eax8, v9, v10, v11, v12, v13, ebp14);
    return;
}

void fun_804a90c(uint32_t a1, void** a2);

void Write16BitsLowHigh(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;
    int32_t eax9;

    eax8 = a2;
    fun_804a90c(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax8)), a1);
    eax9 = reinterpret_cast<signed char>(a2) >> 8;
    fun_804a90c(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax9)), a1);
    return;
}

int32_t fflush = 0x804a3f2;

void fun_804a3ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto fflush;
}

int32_t fseek = 0x804a412;

int32_t fun_804a40c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, ...) {
    goto fseek;
}

void** decoder_progress_finish(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** ebp13;
    void** eax14;

    eax14 = console_printf("\n", v8, v9, v10, v11, v12, ebp13, __return_address(), a1);
    return eax14;
}

void** print_lame_tag_leading_info(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** ebp17;

    eax11 = fun_804a4dc(a1, v7, v8, v9, v10);
    if (eax11) {
        eax11 = console_printf("Writing LAME Tag...", v12, v13, v14, v15, v16, ebp17, __return_address(), a1);
    }
    return eax11;
}

int32_t fun_804a92c(void** a1);

int32_t fun_804a11c(void** a1);

void** fun_804a49c(void** a1, void** a2);

void** fun_804a16c(void** a1, void** a2);

void fun_804a22c(void** a1, void** a2);

void** print_trailing_info(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    int32_t eax20;
    int32_t eax21;
    void** eax22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
    uint1_t zf35;
    void** eax36;
    uint1_t zf37;
    uint1_t below_or_equal38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;

    eax11 = fun_804a4dc(a1, v7, v8, v9, v10);
    if (eax11) {
        console_printf("done\n", v12, v13, v14, v15, v16, v17, v18, v19);
    }
    eax20 = fun_804a92c(a1);
    if (eax20) {
        eax21 = fun_804a11c(a1);
        __asm__("fild dword [ebp-0xc]");
        __asm__("fld qword [0x8054f18]");
        __asm__("fdivp st1, st0");
        if (eax21 <= 0) {
            eax22 = reinterpret_cast<void**>(0x80548b4);
        } else {
            eax22 = reinterpret_cast<void**>("+");
        }
        __asm__("fstp qword [esp+0x8]");
        v23 = eax22;
        console_printf("ReplayGain: %s%.1fdB\n", v23, v24, v25, v26, v27, v28, v29, v30);
        if (eax21 > 0x1fe || eax21 < 0xfffffe02) {
            error_printf("WARNING: ReplayGain exceeds the -51dB to +51dB range. Such a result is too\n         high to be stored in the header.\n", v23, v31, v32, v33);
        }
    }
    eax34 = print_clipping_info;
    if (eax34 && (eax34 = fun_804a49c(a1, v23), zf35 = reinterpret_cast<uint1_t>(eax34 == 0), !zf35)) {
        eax36 = fun_804a16c(a1, v23);
        __asm__("fild dword [ebp-0x1c]");
        __asm__("fld dword [0x8054f20]");
        __asm__("fdivp st1, st0");
        __asm__("fstp dword [ebp-0x10]");
        fun_804a22c(a1, v23);
        __asm__("fstp dword [ebp-0x14]");
        __asm__("fld dword [ebp-0x10]");
        __asm__("fldz ");
        __asm__("fxch st0, st1");
        __asm__("fucomip st0, st1");
        __asm__("fstp st0");
        zf37 = reinterpret_cast<uint1_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf35)))) == 0);
        below_or_equal38 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf37));
        if (zf37) {
            __asm__("fld dword [ebp-0x10]");
            __asm__("fld qword [0x8054f28]");
            __asm__("fxch st0, st1");
            __asm__("fucomip st0, st1");
            __asm__("fstp st0");
            if (!reinterpret_cast<uint1_t>(!below_or_equal38)) {
                __asm__("fld dword [ebp-0x10]");
                __asm__("fchs ");
                __asm__("fstp qword [esp+0x4]");
                eax34 = console_printf("\nThe waveform does not clip and is at least %.1fdB away from full scale.\n", v23, v39, v40, v41, v42, v43, eax36, v44);
            } else {
                eax34 = console_printf("\nThe waveform does not clip and is less than 0.1dB away from full scale.\n", v23, v45, v46, v47, v48, v49, eax36, v50);
            }
        } else {
            __asm__("fld dword [ebp-0x10]");
            __asm__("fstp qword [esp+0x4]");
            console_printf("WARNING: clipping occurs at the current gain. Set your decoder to decrease\n         the  gain  by  at least %.1fdB or encode again ", v23, v51, v52, v53, v54, v55, eax36, v56);
            __asm__("fld dword [ebp-0x14]");
            __asm__("fldz ");
            __asm__("fxch st0, st1");
            __asm__("fucomip st0, st1");
            __asm__("fstp st0");
            if (!reinterpret_cast<uint1_t>(!below_or_equal38)) {
                eax34 = console_printf("using --scale <arg>\n         (For   a   suggestion  on  the  optimal  value  of  <arg>  encode\n         with  --scale 1  first)\n", v23, v57, v58, v59, v60, v61, eax36, v62);
            } else {
                __asm__("fld dword [ebp-0x14]");
                __asm__("fstp qword [esp+0x4]");
                console_printf("using  --scale %.2f\n", v23, v63, v64, v65, v66, v67, eax36, v68);
                eax34 = console_printf("         or less (the value under --scale is approximate).\n", v23, v69, v70, v71, v72, v73, eax36, v74);
            }
        }
    }
    return eax34;
}

int32_t lame_get_findReplayGain = 0x804a932;

int32_t fun_804a92c(void** a1) {
    goto lame_get_findReplayGain;
}

int32_t lame_get_RadioGain = 0x804a122;

int32_t fun_804a11c(void** a1) {
    goto lame_get_RadioGain;
}

int32_t lame_get_decode_on_the_fly = 0x804a4a2;

void** fun_804a49c(void** a1, void** a2) {
    goto lame_get_decode_on_the_fly;
}

int32_t lame_get_noclipGainChange = 0x804a172;

void** fun_804a16c(void** a1, void** a2) {
    goto lame_get_noclipGainChange;
}

int32_t lame_get_noclipScale = 0x804a232;

void fun_804a22c(void** a1, void** a2) {
    goto lame_get_noclipScale;
}

int32_t __stack_chk_fail = 0x804a712;

void** fun_804a70c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    goto __stack_chk_fail;
}

uint32_t g14;

void encoder_progress_begin(void** a1, void** a2, void** a3);

void** fun_804a1bc(void** a1, void** a2, void** a3);

void** get_audio(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void encoder_progress(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_804a27c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** encoder_progress_end(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_804a62c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_804a72c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_804a7fc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** write_xing_frame(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** lame_encoder(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void* ebp8;
    void** v9;
    void** v10;
    void** v11;
    uint32_t eax12;
    uint32_t v13;
    void** v14;
    void** eax15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** eax21;
    int32_t eax22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** eax28;
    void** eax29;
    void** eax30;
    int32_t eax31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** eax37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** eax43;
    void** v44;
    void** eax45;
    void** eax46;
    int32_t eax47;
    void** v48;
    void** eax49;
    void** eax50;
    void** eax51;
    int32_t eax52;
    void** v53;
    void** v54;
    int32_t eax55;
    void** eax56;
    uint32_t edx57;
    void** v58;
    void** v59;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v9 = a1;
    v10 = a2;
    v11 = a5;
    eax12 = g14;
    v13 = eax12;
    encoder_progress_begin(v9, a4, v11);
    v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffdbff4);
    eax15 = fun_804a1bc(v9, v14, 0x24000);
    if (reinterpret_cast<unsigned char>(eax15) <= reinterpret_cast<unsigned char>(0x24000)) {
        v16 = v10;
        v17 = eax15;
        v18 = reinterpret_cast<void**>(1);
        eax21 = fun_804a64c(reinterpret_cast<int32_t>(ebp8) + 0xfffdbff4, 1, v17, v16, v19, v20);
        if (eax21 == eax15) {
            eax22 = flush_write;
            if (eax22 == 1) {
                fun_804a3ec(v10, 1, v17, v16, v23, v24, v25);
            }
            v26 = eax15;
            do {
                v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffd9be4);
                eax28 = get_audio(v9, v18, v17, v16, v27, 0x24000);
                if (reinterpret_cast<signed char>(eax28) >= reinterpret_cast<signed char>(0)) {
                    encoder_progress(v9, v18, v17, v16, v27, 0x24000);
                    v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffdbff4);
                    v16 = eax28;
                    v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) - 0x2641c + 0x1200);
                    v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffd9be4);
                    eax29 = fun_804a27c(v9, v18, v17, v16, v27, 0x24000);
                    if (reinterpret_cast<signed char>(eax29) < reinterpret_cast<signed char>(0)) 
                        goto addr_804b96f_8;
                    v16 = v10;
                    v17 = eax29;
                    v18 = reinterpret_cast<void**>(1);
                    eax30 = fun_804a64c(reinterpret_cast<int32_t>(ebp8) + 0xfffdbff4, 1, v17, v16, v27, 0x24000);
                    if (eax30 != eax29) 
                        goto addr_804b9e4_10;
                }
                eax31 = flush_write;
                if (eax31 == 1) {
                    fun_804a3ec(v10, v18, v17, v16, v27, 0x24000, v32);
                }
            } while (reinterpret_cast<signed char>(eax28) > reinterpret_cast<signed char>(0));
        } else {
            encoder_progress_end(v9, 1, v17, v16, v33, v34);
            v35 = reinterpret_cast<void**>("Error writing ID3v2 tag \n");
            error_printf("Error writing ID3v2 tag \n", 1, v17, v16, v36);
            eax37 = reinterpret_cast<void**>(1);
            goto addr_804bc72_15;
        }
    } else {
        encoder_progress_end(v9, v14, 0x24000, v38, v39, v40);
        v17 = eax15;
        v18 = reinterpret_cast<void**>(0x24000);
        v35 = reinterpret_cast<void**>("Error writing ID3v2 tag: buffer too small: buffer size=%d  ID3v2 size=%d\n");
        error_printf("Error writing ID3v2 tag: buffer too small: buffer size=%d  ID3v2 size=%d\n", 0x24000, v17, v41, v42);
        eax37 = reinterpret_cast<void**>(1);
        goto addr_804bc72_15;
    }
    if (!a3) {
        v17 = reinterpret_cast<void**>(0x24000);
        v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffdbff4);
        eax43 = fun_804a62c(v9, v18, 0x24000, v16, v27, 0x24000);
        v44 = eax43;
    } else {
        v17 = reinterpret_cast<void**>(0x24000);
        v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffdbff4);
        eax45 = fun_804a72c(v9, v18, 0x24000, v16, v27, 0x24000);
        v44 = eax45;
    }
    if (reinterpret_cast<signed char>(v44) >= reinterpret_cast<signed char>(0)) {
        encoder_progress_end(v9, v18, 0x24000, v16, v27, 0x24000);
        v16 = v10;
        v17 = v44;
        v18 = reinterpret_cast<void**>(1);
        eax46 = fun_804a64c(reinterpret_cast<int32_t>(ebp8) + 0xfffdbff4, 1, v17, v16, v27, 0x24000);
        if (eax46 == v44) {
            eax47 = flush_write;
            if (eax47 == 1) {
                fun_804a3ec(v10, 1, v17, v16, v27, 0x24000, v48);
            }
            v17 = reinterpret_cast<void**>(0x24000);
            v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffdbff4);
            eax49 = fun_804a7fc(v9, v18, 0x24000, v16, v27, 0x24000);
            if (reinterpret_cast<unsigned char>(eax49) > reinterpret_cast<unsigned char>(0x24000)) 
                goto addr_804bb60_25;
        } else {
            v35 = reinterpret_cast<void**>("Error writing mp3 output \n");
            error_printf("Error writing mp3 output \n", 1, v17, v16, v27, "Error writing mp3 output \n", 1, v17, v16, v27);
            eax37 = reinterpret_cast<void**>(1);
            goto addr_804bc72_15;
        }
    } else {
        if (!reinterpret_cast<int1_t>(v44 == 0xffffffff)) {
            v18 = v44;
            v35 = reinterpret_cast<void**>("mp3 internal error:  error code=%i\n");
            error_printf("mp3 internal error:  error code=%i\n", v18, 0x24000, v16, v27, "mp3 internal error:  error code=%i\n", v18, 0x24000, v16, v27);
        } else {
            v35 = reinterpret_cast<void**>("mp3 buffer is not big enough... \n");
            error_printf("mp3 buffer is not big enough... \n", v18, 0x24000, v16, v27, "mp3 buffer is not big enough... \n", v18, 0x24000, v16, v27);
        }
        eax37 = reinterpret_cast<void**>(1);
        goto addr_804bc72_15;
    }
    if (reinterpret_cast<signed char>(eax49) <= reinterpret_cast<signed char>(0)) {
        addr_804bbf5_32:
        eax50 = silent;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax50) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax50 == 0))) {
            print_lame_tag_leading_info(v9, v18, v17, v16, v27, 0x24000);
        }
    } else {
        v16 = v10;
        v17 = eax49;
        v18 = reinterpret_cast<void**>(1);
        eax51 = fun_804a64c(reinterpret_cast<int32_t>(ebp8) + 0xfffdbff4, 1, v17, v16, v27, 0x24000);
        if (eax51 == eax49) {
            eax52 = flush_write;
            if (eax52 == 1) {
                fun_804a3ec(v10, 1, v17, v16, v27, 0x24000, v53);
                goto addr_804bbf5_32;
            }
        } else {
            v35 = reinterpret_cast<void**>("Error writing ID3v1 tag \n");
            error_printf("Error writing ID3v1 tag \n", 1, v17, v16, v27, "Error writing ID3v1 tag \n", 1, v17, v16, v27);
            eax37 = reinterpret_cast<void**>(1);
            goto addr_804bc72_15;
        }
    }
    v17 = reinterpret_cast<void**>(0);
    v18 = v26;
    eax55 = fun_804a40c(v10, v18, 0, v16, v27, 0x24000, v54);
    if (!eax55) {
        v18 = v10;
        v35 = v9;
        write_xing_frame(v35, v18, 0, v16, v27, 0x24000);
    } else {
        v35 = reinterpret_cast<void**>("fatal error: can't update LAME-tag frame!\n");
        error_printf("fatal error: can't update LAME-tag frame!\n", v18, 0, v16, v27, "fatal error: can't update LAME-tag frame!\n", v18, 0, v16, v27);
    }
    eax56 = silent;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax56) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax56 == 0))) {
        v35 = v9;
        print_trailing_info(v35, v18, 0, v16, v27, 0x24000);
    }
    eax37 = reinterpret_cast<void**>(0);
    addr_804bc72_15:
    edx57 = v13 ^ g14;
    if (edx57) {
        eax37 = fun_804a70c(v35, v18, v17, v16, v27, 0x24000, v58, v59, v11);
    }
    return eax37;
    addr_804bb60_25:
    v17 = eax49;
    v18 = reinterpret_cast<void**>(0x24000);
    error_printf("Error writing ID3v1 tag: buffer too small: buffer size=%d  ID3v1 size=%d\n", 0x24000, v17, v16, v27, "Error writing ID3v1 tag: buffer too small: buffer size=%d  ID3v1 size=%d\n", 0x24000, v17, v16, v27);
    goto addr_804bbf5_32;
    addr_804b96f_8:
    if (!reinterpret_cast<int1_t>(eax29 == 0xffffffff)) {
        v18 = eax29;
        v35 = reinterpret_cast<void**>("mp3 internal error:  error code=%i\n");
        error_printf("mp3 internal error:  error code=%i\n", v18, v17, v16, v27, "mp3 internal error:  error code=%i\n", v18, v17, v16, v27);
    } else {
        v35 = reinterpret_cast<void**>("mp3 buffer is not big enough... \n");
        error_printf("mp3 buffer is not big enough... \n", v18, v17, v16, v27, "mp3 buffer is not big enough... \n", v18, v17, v16, v27);
    }
    eax37 = reinterpret_cast<void**>(1);
    goto addr_804bc72_15;
    addr_804b9e4_10:
    v35 = reinterpret_cast<void**>("Error writing mp3 output \n");
    error_printf("Error writing mp3 output \n", 1, v17, v16, v27, "Error writing mp3 output \n", 1, v17, v16, v27);
    eax37 = reinterpret_cast<void**>(1);
    goto addr_804bc72_15;
}

void brhist_jump_back(void** a1);

void** timestatus(void** a1);

void brhist_disp(void** a1);

void** timestatus_finish(void** a1);

void** encoder_progress_end(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** eax7;
    int32_t eax8;
    void** v9;
    void** v10;
    int32_t eax11;

    eax7 = silent;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax7 == 0))) {
        eax8 = brhist;
        if (eax8) {
            brhist_jump_back(v9);
        }
        v10 = a1;
        timestatus(v10);
        eax11 = brhist;
        if (eax11) {
            v10 = a1;
            brhist_disp(v10);
        }
        eax7 = timestatus_finish(v10);
    }
    return eax7;
}

void** get_audio_common(void** a1, void** a2, void** a3);

void** get_audio(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** eax7;

    eax7 = get_audio_common(a1, a2, 0);
    return eax7;
}

void** fun_804a84c(void** a1);

int32_t GetRealTime(void** a1);

void encoder_progress(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** eax7;
    void** eax8;
    uint1_t zf9;
    int32_t eax10;
    void** v11;
    int32_t eax12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;

    eax7 = silent;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax7 == 0))) {
        addr_80538a9_2:
        return;
    } else {
        eax8 = fun_804a84c(a1);
        __asm__("fld dword [0x805c550]");
        __asm__("fldz ");
        __asm__("fucomip st0, st1");
        __asm__("fstp st0");
        if (0) {
            if (!eax8 || (eax8 == 9 || ((GetRealTime(a1), zf9 = reinterpret_cast<uint1_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax8) >= reinterpret_cast<unsigned char>(9))) == 0), zf9) || !reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf9)))))) {
                GetRealTime(a1);
                __asm__("fstp qword [0x805b408]");
                goto addr_8053874_6;
            } else {
                goto addr_80538a9_2;
            }
        } else {
            if (!(eax8 - ((__intrinsic() >> 5) - (reinterpret_cast<signed char>(eax8) >> 31)) * 100)) {
                addr_8053874_6:
                eax10 = brhist;
                if (eax10) {
                    brhist_jump_back(a1);
                }
            } else {
                goto addr_80538a9_2;
            }
        }
    }
    v11 = a1;
    timestatus(v11);
    eax12 = brhist;
    if (eax12) {
        v11 = a1;
        brhist_disp(v11);
    }
    console_flush(v11, v13, v14, v15, v16, v17, v18);
    goto addr_80538a9_2;
}

int32_t lame_encode_buffer_int = 0x804a282;

void** fun_804a27c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto lame_encode_buffer_int;
}

int32_t lame_encode_flush_nogap = 0x804a732;

void** fun_804a72c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto lame_encode_flush_nogap;
}

int32_t lame_get_id3v1_tag = 0x804a802;

void** fun_804a7fc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto lame_get_id3v1_tag;
}

int32_t fwrite = 0x804a652;

void** fun_804a64c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto fwrite;
}

int32_t brhist_init(void** a1, void** a2, void** a3);

void** fun_804a24c(void** a1);

void** fun_804a28c(void** a1);

int32_t brhist_init_package(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    int32_t eax8;
    int32_t eax9;
    void** eax10;
    void** eax11;

    eax8 = brhist;
    if (!eax8) {
        eax9 = brhist_init(a1, 0x80, 0x80);
    } else {
        eax10 = fun_804a24c(a1);
        eax11 = fun_804a28c(a1);
        eax9 = brhist_init(a1, eax11, eax10);
        if (eax9) {
            brhist = 0;
        }
    }
    return eax9;
}

int32_t lame_get_VBR_max_bitrate_kbps = 0x804a252;

void** fun_804a24c(void** a1) {
    goto lame_get_VBR_max_bitrate_kbps;
}

int32_t lame_get_VBR_min_bitrate_kbps = 0x804a292;

void** fun_804a28c(void** a1) {
    goto lame_get_VBR_min_bitrate_kbps;
}

int32_t g805b4c0 = 0;

void fun_804a5dc(void** a1, int32_t a2);

void** calculate_index(void*** a1, void** a2, void** a3);

void** brhist = reinterpret_cast<void**>(0);

void** g805b484 = reinterpret_cast<void**>(0);

void fun_804a25c(void** a1, void** a2, void** a3, void** a4);

int32_t brhist_init(void** a1, void** a2, void** a3) {
    void** eax4;
    void** eax5;
    void** eax6;
    void** eax7;
    void** v8;
    void** v9;
    int32_t eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;

    g805b4c0 = 0;
    fun_804a5dc(a1, 0x805b488);
    eax4 = calculate_index(0x805b488, 14, a2);
    brhist = eax4;
    eax5 = calculate_index(0x805b488, 14, a3);
    g805b484 = eax5;
    eax6 = brhist;
    if (reinterpret_cast<signed char>(eax6) > reinterpret_cast<signed char>(13) || (eax7 = g805b484, reinterpret_cast<signed char>(eax7) > reinterpret_cast<signed char>(13))) {
        error_printf("lame internal error: VBR min %d kbps or VBR max %d kbps not allowed.\n", a2, a3, v8, v9);
        eax10 = -1;
    } else {
        fun_804a25c(0x805b4c4, 42, 0x200, v11);
        fun_804a25c(0x805b6c5, 37, 0x200, v12);
        fun_804a25c(0x805bac7, 45, 0x200, v13);
        fun_804a25c(0x805b8c6, 45, 0x200, v14);
        eax10 = 0;
    }
    return eax10;
}

int32_t strncpy = 0x804a1f2;

void fun_804a1ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto strncpy;
}

int32_t strcat = 0x804a7f2;

void fun_804a7ec(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto strcat;
}

int32_t memset = 0x804a262;

void fun_804a25c(void** a1, void** a2, void** a3, void** a4) {
    goto memset;
}

int32_t init_console(void** a1);

int32_t frontend_open_console(void** a1, void** a2, void** a3) {
    int32_t eax4;

    eax4 = init_console(0x805bce0);
    return eax4;
}

int32_t lame_init = 0x804a9d2;

void** fun_804a9cc(void** a1, void** a2, void** a3) {
    goto lame_init;
}

struct s2 {
    signed char[8] pad8;
    void** f8;
    signed char[7] pad16;
    void** f10;
    signed char[51] pad68;
    void** f44;
};

void deinit_console(struct s2* a1);

void frontend_close_console(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    deinit_console(0x805bce0);
    return;
}

int32_t lame_version_print(void** a1, void** a2);

void fun_804a65c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t usage(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;

    lame_version_print(a1, v6);
    fun_804a65c(a1, "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be \"-\", which means stdin/stdout.\n\nTry:\n     \"%s --help\"           for general usage information\n or:\n     \"%s --preset help\"    for information on suggested predefined settings\n or:\n     \"%s --longhelp\"\n  or \"%s -?\"              for a complete options list\n\n", a2, a2, a2, a2, a2);
    return 0;
}

int32_t lame_close = 0x804a3c2;

void fun_804a3bc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto lame_close;
}

void fun_804a69c(void** a1, void** a2, void** a3);

void parse_nogap_filenames(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    uint32_t eax13;
    uint32_t eax14;
    uint32_t eax15;
    void** v16;
    void** v17;
    struct s1* eax18;
    uint32_t eax19;
    void** v20;
    void** v21;
    struct s1* eax22;
    uint32_t eax23;
    void** v24;
    void** v25;
    struct s1* eax26;
    uint32_t eax27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    struct s1* eax33;
    uint32_t eax34;
    uint32_t eax35;
    uint32_t eax36;
    uint32_t eax37;
    void** v38;
    void** v39;
    struct s1* eax40;
    uint32_t eax41;
    void** v42;
    void** v43;
    struct s1* eax44;
    uint32_t eax45;
    void** v46;
    void** v47;
    struct s1* eax48;
    uint32_t eax49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    struct s1* eax54;
    uint32_t eax55;
    uint32_t eax56;
    uint32_t eax57;
    uint32_t eax58;

    v8 = a4;
    fun_804a54c(a3, v8, v9, v10, v11);
    if (a1) {
        v12 = a2 + 0xffd;
        while ((eax13 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v12)), *reinterpret_cast<signed char*>(&eax13) != 47) && ((eax14 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v12)), *reinterpret_cast<signed char*>(&eax14) != 92) && (v12 != a2 && (eax15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v12)), *reinterpret_cast<signed char*>(&eax15) != 58)))) {
            --v12;
        }
        if (v12 == a2) 
            goto addr_804be75_6;
        eax18 = fun_804a4ac(a3, v8, v16, v17);
        eax19 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax18) - 1 + reinterpret_cast<unsigned char>(a3));
        if (*reinterpret_cast<signed char*>(&eax19) == 47) 
            goto addr_804be6f_8;
        eax22 = fun_804a4ac(a3, v8, v20, v21);
        eax23 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax22) - 1 + reinterpret_cast<unsigned char>(a3));
        if (*reinterpret_cast<signed char*>(&eax23) == 92) 
            goto addr_804be6f_8;
        eax26 = fun_804a4ac(a3, v8, v24, v25);
        eax27 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax26) - 1 + reinterpret_cast<unsigned char>(a3));
        if (*reinterpret_cast<signed char*>(&eax27) == 58) 
            goto addr_804be6f_8;
    } else {
        fun_804a1ec(a3, a2, 0xffd, v28, v29, v30, v31);
        eax33 = fun_804a4ac(a3, a2, 0xffd, v32);
        eax34 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax33) - 3 + reinterpret_cast<unsigned char>(a3));
        if (*reinterpret_cast<signed char*>(&eax34) != 0x77 || ((eax35 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax33 - 1) + reinterpret_cast<unsigned char>(a3)), *reinterpret_cast<signed char*>(&eax35) != 97) || ((eax36 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax33) - 1 + reinterpret_cast<unsigned char>(a3)), *reinterpret_cast<signed char*>(&eax36) != 0x76) || (eax37 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax33 - 2) + reinterpret_cast<unsigned char>(a3)), *reinterpret_cast<signed char*>(&eax37) != 46)))) {
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<uint32_t>(eax33)) = 46;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(&eax33->f1) + reinterpret_cast<unsigned char>(a3)) = 0x6d;
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax33 + 1) + reinterpret_cast<unsigned char>(a3)) = 0x70;
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax33) + 3 + reinterpret_cast<unsigned char>(a3)) = 51;
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax33 + 2) + reinterpret_cast<unsigned char>(a3)) = 0;
            goto addr_804bfa3_13;
        } else {
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax33) - 3 + reinterpret_cast<unsigned char>(a3)) = 0x6d;
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax33 - 1) + reinterpret_cast<unsigned char>(a3)) = 0x70;
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax33) - 1 + reinterpret_cast<unsigned char>(a3)) = 51;
            goto addr_804bfa3_13;
        }
    }
    addr_804be75_6:
    if (v12 == a2 && ((eax40 = fun_804a4ac(a3, v8, v38, v39), eax41 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax40) - 1 + reinterpret_cast<unsigned char>(a3)), *reinterpret_cast<signed char*>(&eax41) != 47) && ((eax44 = fun_804a4ac(a3, v8, v42, v43), eax45 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax44) - 1 + reinterpret_cast<unsigned char>(a3)), *reinterpret_cast<signed char*>(&eax45) != 92) && (eax48 = fun_804a4ac(a3, v8, v46, v47), eax49 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax48) - 1 + reinterpret_cast<unsigned char>(a3)), *reinterpret_cast<signed char*>(&eax49) != 58)))) {
        fun_804a7ec(a3, "/", v50, v51, v52);
    }
    addr_804bed9_16:
    fun_804a69c(a3, v12, 0xffd);
    eax54 = fun_804a4ac(a3, v12, 0xffd, v53);
    eax55 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax54) - 3 + reinterpret_cast<unsigned char>(a3));
    if (*reinterpret_cast<signed char*>(&eax55) != 0x77 || ((eax56 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax54 - 1) + reinterpret_cast<unsigned char>(a3)), *reinterpret_cast<signed char*>(&eax56) != 97) || ((eax57 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax54) - 1 + reinterpret_cast<unsigned char>(a3)), *reinterpret_cast<signed char*>(&eax57) != 0x76) || (eax58 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax54 - 2) + reinterpret_cast<unsigned char>(a3)), *reinterpret_cast<signed char*>(&eax58) != 46)))) {
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<uint32_t>(eax54)) = 46;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(&eax54->f1) + reinterpret_cast<unsigned char>(a3)) = 0x6d;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax54 + 1) + reinterpret_cast<unsigned char>(a3)) = 0x70;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax54) + 3 + reinterpret_cast<unsigned char>(a3)) = 51;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax54 + 2) + reinterpret_cast<unsigned char>(a3)) = 0;
    } else {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax54) - 3 + reinterpret_cast<unsigned char>(a3)) = 0x6d;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax54 - 1) + reinterpret_cast<unsigned char>(a3)) = 0x70;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax54) - 1 + reinterpret_cast<unsigned char>(a3)) = 51;
    }
    addr_804bfa3_13:
    return;
    addr_804be6f_8:
    ++v12;
    goto addr_804bed9_16;
}

void init_infile(void** a1, void** a2, void** a3, void** a4);

void** init_outfile(void** a1, int32_t a2, void** a3, void** a4);

void** init_files(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    int32_t eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    int32_t eax19;
    void** v20;
    void** v21;
    void** v22;
    int32_t eax23;
    void** eax24;
    void** eax25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;

    eax13 = fun_804aa6c("-", a3, v8, v9, v10, v11, v12);
    if (!eax13 || (eax19 = fun_804aa6c(a2, a3, v14, v15, v16, v17, v18), !!eax19)) {
        init_infile(a1, a2, a4, a5);
        eax23 = fun_804a30c(a1, a2, a4, a5, v20, v21, v22);
        eax24 = init_outfile(a3, eax23, a4, a5);
        if (eax24) {
            eax25 = eax24;
        } else {
            error_printf("Can't init outfile '%s'\n", a3, a4, a5, v26);
            eax25 = reinterpret_cast<void**>(0);
        }
    } else {
        error_printf("Input file and Output file are the same. Abort.\n", a3, v27, v28, v29);
        eax25 = reinterpret_cast<void**>(0);
    }
    return eax25;
}

void display_bitrate(void** a1, void** a2, void** a3, void** a4);

void fun_804a73c(int32_t a1, void** a2, void** a3, void** a4, void** a5);

int32_t display_bitrates(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** v10;
    void** ebp11;

    display_bitrate(a1, "1", 1, 1);
    display_bitrate(a1, "2", 2, 0);
    display_bitrate(a1, "2.5", 4, 0);
    fun_804a73c(10, a1, 4, 0, v8);
    fun_804a3ec(a1, a1, 4, 0, v9, v10, ebp11);
    return 0;
}

int32_t lame_get_decode_only = 0x804a312;

int32_t fun_804a30c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto lame_get_decode_only;
}

void** fun_804a75c(void** a1, void** a2, void** a3, void** a4);

void** g805c57c = reinterpret_cast<void**>(0);

uint32_t g805c578 = 0;

uint32_t fun_804a7ac(void** a1, void** a2, void** a3, void** a4);

struct s3 {
    signed char[529] pad529;
    void** f211;
};

struct s3* fun_804a3fc(void** a1, void** a2, void** a3);

void fun_804aa7c(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void WriteBytes(void** a1);

void WriteBytesSwapped(void** a1, int32_t a2, int32_t a3);

uint32_t g805c580 = 0;

void** get_audio16(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

uint32_t g805c584 = 0;

int32_t fun_804a43c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t lame_decoder(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void* ebp8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** v14;
    void** eax15;
    void** esi16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    struct s1* eax27;
    void** ebx28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    int32_t eax34;
    void** eax35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** eax44;
    void** eax45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** eax51;
    void** eax52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** eax58;
    void** eax59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** eax65;
    void** eax66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** eax72;
    void** eax73;
    void** v74;
    int32_t eax75;
    void** ebx76;
    void** v77;
    uint32_t eax78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** eax83;
    void** v84;
    int32_t eax85;
    void** ebx86;
    void** v87;
    uint32_t eax88;
    void** v89;
    void** v90;
    void** v91;
    struct s3* eax92;
    void** eax93;
    void** v94;
    int32_t eax95;
    void** ebx96;
    void** v97;
    uint32_t eax98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    int32_t v104;
    int32_t v105;
    void** v106;
    void** v107;
    void** eax108;
    struct s1* eax109;
    void** ebx110;
    void** v111;
    int32_t eax112;
    void** eax113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    int32_t eax123;
    void** v124;
    void** v125;
    void** eax126;
    void** v127;
    uint32_t eax128;
    int32_t eax129;
    int32_t v130;
    void** eax131;
    uint32_t edx132;
    void** v133;
    void** eax134;
    void** v135;
    uint32_t ecx136;
    uint32_t eax137;
    void** eax138;
    void** eax139;
    void** v140;
    uint32_t eax141;
    uint32_t eax142;
    uint32_t edx143;
    uint32_t eax144;
    int32_t eax145;
    uint32_t eax146;
    uint32_t eax147;
    void* edx148;
    int32_t eax149;
    uint1_t zf150;
    void** eax151;
    void** eax152;
    int32_t eax153;
    int32_t eax154;
    int32_t eax155;
    void** v156;
    void** eax157;
    void** eax158;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v9 = reinterpret_cast<void**>(0);
    eax13 = fun_804a75c(a1, v10, v11, v12);
    v14 = eax13;
    eax15 = silent;
    if (reinterpret_cast<signed char>(eax15) <= reinterpret_cast<signed char>(9)) {
        if (v14 == 1) {
            esi16 = reinterpret_cast<void**>(0x80548b4);
        } else {
            esi16 = reinterpret_cast<void**>("s");
        }
        fun_804a06c(a1, v17, v18, v19, v20, v21, v22, v23);
        __asm__("fild dword [ebp+0xffffedd0]");
        __asm__("fld qword [0x8054f08]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [ebp+0xffffedc0]");
        eax27 = fun_804a4ac(a4, v24, v25, v26);
        if (reinterpret_cast<uint32_t>(eax27) <= 26) {
            ebx28 = reinterpret_cast<void**>("  ");
        } else {
            ebx28 = reinterpret_cast<void**>("\n\t");
        }
        eax34 = fun_804aa6c(a4, "-", v29, v30, v31, v32, v33);
        if (!eax34) {
            eax35 = reinterpret_cast<void**>("<stdin>");
        } else {
            eax35 = a4;
        }
        v36 = esi16;
        v37 = v14;
        __asm__("fld qword [ebp+0xffffedc0]");
        __asm__("fstp qword [esp+0xc]");
        v38 = ebx28;
        v39 = eax35;
        console_printf("\rinput:  %s%s(%g kHz, %i channel%s, ", v39, v38, v40, v41, v37, v36, v42, v43);
    }
    eax44 = input_format;
    switch (eax44) {
    default:
        eax45 = silent;
        if (reinterpret_cast<signed char>(eax45) <= reinterpret_cast<signed char>(9)) {
            console_printf("unknown", v39, v38, v46, v47, v37, v36, v48, v49);
        }
        eax51 = fun_804a20c(a1, v39, v38, v50);
        g805c57c = eax51;
        g805c578 = 0x480;
        a3 = reinterpret_cast<void**>(0);
        break;
    case 1:
        eax52 = silent;
        if (reinterpret_cast<signed char>(eax52) <= reinterpret_cast<signed char>(9)) {
            console_printf("raw PCM data", v39, v38, v53, v54, v37, v36, v55, v56);
        }
        eax58 = fun_804a20c(a1, v39, v38, v57);
        g805c57c = eax58;
        g805c578 = 0x480;
        a3 = reinterpret_cast<void**>(0);
        break;
    case 2:
        eax59 = silent;
        if (reinterpret_cast<signed char>(eax59) <= reinterpret_cast<signed char>(9)) {
            console_printf("Microsoft WAVE", v39, v38, v60, v61, v37, v36, v62, v63);
        }
        eax65 = fun_804a20c(a1, v39, v38, v64);
        g805c57c = eax65;
        g805c578 = 0x480;
        a3 = reinterpret_cast<void**>(0);
        break;
    case 3:
        eax66 = silent;
        if (reinterpret_cast<signed char>(eax66) <= reinterpret_cast<signed char>(9)) {
            console_printf("SGI/Apple AIFF", v39, v38, v67, v68, v37, v36, v69, v70);
        }
        eax72 = fun_804a20c(a1, v39, v38, v71);
        g805c57c = eax72;
        g805c578 = 0x480;
        a3 = reinterpret_cast<void**>(0);
        break;
    case 4:
        a3 = a3 + 0xf1;
        eax73 = silent;
        if (reinterpret_cast<signed char>(eax73) > reinterpret_cast<signed char>(9)) {
            break;
        } else {
            eax75 = fun_804a95c(a1, v39, v38, v74);
            if (eax75 > 0x3e7f) {
                ebx76 = reinterpret_cast<void**>(0x80548b4);
            } else {
                ebx76 = reinterpret_cast<void**>(".5");
            }
            eax78 = fun_804a7ac(a1, v39, v38, v77);
            v79 = reinterpret_cast<void**>("I");
            v38 = ebx76;
            v39 = reinterpret_cast<void**>(2 - eax78);
            console_printf("MPEG-%u%s Layer %s", v39, v38, "I", v80, v37, v36, v81, v82);
            break;
        }
    case 5:
        a3 = a3 + 0xf1;
        eax83 = silent;
        if (reinterpret_cast<signed char>(eax83) > reinterpret_cast<signed char>(9)) {
            break;
        } else {
            eax85 = fun_804a95c(a1, v39, v38, v84);
            if (eax85 > 0x3e7f) {
                ebx86 = reinterpret_cast<void**>(0x80548b4);
            } else {
                ebx86 = reinterpret_cast<void**>(".5");
            }
            eax88 = fun_804a7ac(a1, v39, v38, v87);
            v79 = reinterpret_cast<void**>("II");
            v38 = ebx86;
            v39 = reinterpret_cast<void**>(2 - eax88);
            console_printf("MPEG-%u%s Layer %s", v39, v38, "II", v89, v37, v36, v90, v91);
            break;
        }
        addr_804ae34_38:
    case 6:
        if (a3) {
            a3 = a3 + 0x211;
        } else {
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(a6)) >= reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(a7)) >= reinterpret_cast<signed char>(0)) {
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(a6)) >= reinterpret_cast<signed char>(0)) {
                    a3 = *reinterpret_cast<void***>(a6) + 0x211;
                }
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(a7)) >= reinterpret_cast<signed char>(0)) {
                    v9 = *reinterpret_cast<void***>(a7) - 0x211;
                }
            } else {
                eax92 = fun_804a3fc(a1, v39, v38);
                a3 = reinterpret_cast<void**>(&eax92->f211);
            }
        }
        eax93 = silent;
        if (reinterpret_cast<signed char>(eax93) > reinterpret_cast<signed char>(9)) {
            break;
        } else {
            eax95 = fun_804a95c(a1, v39, v38, v94);
            if (eax95 > 0x3e7f) {
                ebx96 = reinterpret_cast<void**>(0x80548b4);
            } else {
                ebx96 = reinterpret_cast<void**>(".5");
            }
            eax98 = fun_804a7ac(a1, v39, v38, v97);
            v79 = reinterpret_cast<void**>("III");
            v38 = ebx96;
            v39 = reinterpret_cast<void**>(2 - eax98);
            console_printf("MPEG-%u%s Layer %s", v39, v38, "III", v99, v37, v36, v100, v101);
            break;
        }
    case 7:
        error_printf("Internal error.  Aborting.", v39, v38, v102, v103, "Internal error.  Aborting.", v39, v38, v104, v105);
        fun_804aa7c(-1, v39, v38, v106, v107, v37, v36);
        goto addr_804ae34_38;
    }
    eax108 = silent;
    if (reinterpret_cast<signed char>(eax108) <= reinterpret_cast<signed char>(9)) {
        eax109 = fun_804a4ac(a5, v39, v38, v79);
        if (reinterpret_cast<uint32_t>(eax109) <= 45) {
            ebx110 = reinterpret_cast<void**>("  ");
        } else {
            ebx110 = reinterpret_cast<void**>("\n\t");
        }
        eax112 = fun_804aa6c(a5, "-", v38, v79, v111, v37, v36);
        if (!eax112) {
            eax113 = reinterpret_cast<void**>("<stdout>");
        } else {
            eax113 = a5;
        }
        v38 = ebx110;
        v39 = eax113;
        console_printf(")\noutput: %s%s(16 bit, Microsoft WAVE)\n", v39, v38, v79, v114, v37, v36, v115, v116);
        if (reinterpret_cast<signed char>(a3) > reinterpret_cast<signed char>(0)) {
            v39 = a3;
            console_printf("skipping initial %i samples (encoder+decoder delay)\n", v39, v38, v79, v117, v37, v36, v118, v119);
        }
        if (reinterpret_cast<signed char>(v9) > reinterpret_cast<signed char>(0)) {
            v39 = v9;
            console_printf("skipping final %i samples (encoder padding-decoder delay)\n", v39, v38, v79, v120, v37, v36, v121, v122);
        }
    }
    eax123 = disable_wav_header;
    if (!eax123) {
        eax126 = fun_804a06c(a1, v39, v38, v79, v124, v37, v36, v125);
        v79 = v14;
        v38 = eax126;
        WriteWaveHeader(a2, 0x7fffffff, v38, v79, 16, v37, v36);
    }
    v127 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(v9)));
    __asm__("fild dword [ebp+0xffffedd0]");
    __asm__("fstp qword [ebp-0x28]");
    eax128 = swapbytes;
    if (!eax128) {
        eax129 = reinterpret_cast<int32_t>(WriteBytes);
    } else {
        eax129 = reinterpret_cast<int32_t>(WriteBytesSwapped);
    }
    v130 = eax129;
    eax131 = g805c57c;
    edx132 = g805c578;
    g805c580 = reinterpret_cast<unsigned char>(eax131) / edx132;
    do {
        v133 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xffffedd8);
        eax134 = get_audio16(a1, v133, v38, v79, 16, v37, v36);
        v135 = eax134;
        if (reinterpret_cast<signed char>(v135) >= reinterpret_cast<signed char>(0)) {
            ecx136 = g805c584;
            eax137 = g805c578;
            g805c584 = ecx136 + reinterpret_cast<signed char>(v135) / reinterpret_cast<int32_t>(eax137);
            __asm__("fild dword [ebp-0xc]");
            __asm__("fld qword [ebp-0x28]");
            __asm__("faddp st1, st0");
            __asm__("fstp qword [ebp-0x28]");
            eax138 = silent;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax138) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax138 == 0))) {
                decoder_progress(0x805c560, v133, v38, v79, 16, v37, v36);
                console_flush(0x805c560, v133, v38, v79, 16, v37, v36);
            }
            eax139 = a3;
            if (reinterpret_cast<signed char>(v135) <= reinterpret_cast<signed char>(eax139)) {
                eax139 = v135;
            }
            v140 = eax139;
            a3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v140));
            if (reinterpret_cast<signed char>(v9) <= reinterpret_cast<signed char>(0x480) || (eax141 = g805c584, eax142 = g805c580, reinterpret_cast<int32_t>(eax141 + 2) <= reinterpret_cast<int32_t>(eax142))) {
                edx143 = g805c584;
                eax144 = g805c580;
                if (edx143 == eax144 && v135) {
                    v135 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v135) - reinterpret_cast<unsigned char>(v9));
                }
            } else {
                v135 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v135) + (0x480 - reinterpret_cast<unsigned char>(v9)));
                v9 = reinterpret_cast<void**>(0x480);
            }
            while (reinterpret_cast<signed char>(v140) < reinterpret_cast<signed char>(v135)) {
                eax145 = disable_wav_header;
                if (!eax145) {
                    eax146 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp8) + reinterpret_cast<unsigned char>(v140) * 2 - 0x1228);
                    v133 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax146)));
                    Write16BitsLowHigh(a2, v133, v38, v79, 16, v37, v36);
                    if (reinterpret_cast<int1_t>(v14 == 2)) {
                        eax147 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp8) + reinterpret_cast<uint32_t>(v140 + 0x480) * 2 - 0x1228);
                        v133 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax147)));
                        Write16BitsLowHigh(a2, v133, v38, v79, 16, v37, v36);
                    }
                } else {
                    v38 = reinterpret_cast<void**>(2);
                    v133 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) - 0x1228 + (reinterpret_cast<unsigned char>(v140) + reinterpret_cast<unsigned char>(v140)));
                    v130(a2, v133, 2, v79, 16, v37, v36);
                    if (reinterpret_cast<int1_t>(v14 == 2)) {
                        edx148 = reinterpret_cast<void*>(v140 + 0x480);
                        v38 = reinterpret_cast<void**>(2);
                        v133 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) - 0x1228 + (reinterpret_cast<uint32_t>(edx148) + reinterpret_cast<uint32_t>(edx148)));
                        v130(a2, v133, 2, v79, 16, v37, v36);
                    }
                }
                ++v140;
            }
            eax149 = flush_write;
            if (eax149 == 1) {
                fun_804a3ec(a2, v133, v38, v79, 16, v37, v36);
            }
        }
    } while (reinterpret_cast<signed char>(v135) > reinterpret_cast<signed char>(0));
    __asm__("fld qword [ebp-0x28]");
    __asm__("fldz ");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    zf150 = reinterpret_cast<uint1_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v14) + reinterpret_cast<unsigned char>(v14)) >= reinterpret_cast<unsigned char>(v14))) == 0);
    if (zf150) {
        __asm__("fild qword [ebp+0xffffedc8]");
        __asm__("fld qword [ebp-0x28]");
        __asm__("fucomip st0, st1");
        __asm__("fstp st0");
        if (!reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf150)))) {
            __asm__("fild dword [ebp-0x14]");
            __asm__("fld qword [ebp-0x28]");
            __asm__("fmulp st1, st0");
            __asm__("fstp qword [ebp-0x28]");
        } else {
            eax151 = silent;
            if (reinterpret_cast<signed char>(eax151) <= reinterpret_cast<signed char>(9)) {
                error_printf("Very huge WAVE file, can't set filesize accordingly\n", v133, v38, v79, 16, "Very huge WAVE file, can't set filesize accordingly\n", v133, v38, v79, 16);
            }
            __asm__("fld qword [0x8054f10]");
            __asm__("fstp qword [ebp-0x28]");
        }
    } else {
        eax152 = silent;
        if (reinterpret_cast<signed char>(eax152) <= reinterpret_cast<signed char>(9)) {
            error_printf("WAVE file contains 0 PCM samples\n", v133, v38, v79, 16, "WAVE file contains 0 PCM samples\n", v133, v38, v79, 16);
        }
        __asm__("fldz ");
        __asm__("fstp qword [ebp-0x28]");
    }
    eax153 = disable_wav_header;
    if (!eax153 && ((v133 = a5, eax154 = fun_804aa6c("-", v133, v38, v79, 16, v37, v36), !!eax154) && (v38 = reinterpret_cast<void**>(0), v133 = reinterpret_cast<void**>(0), eax155 = fun_804a40c(a2, 0, 0, v79, 16, v37, v36), !eax155))) {
        eax157 = fun_804a06c(a1, 0, 0, v79, 16, v37, v36, v156);
        __asm__("fld qword [ebp-0x28]");
        __asm__("fnstcw word [ebp+0xffffedd6]");
        __asm__("fldcw word [ebp+0xffffedd4]");
        __asm__("fistp dword [ebp+0xffffedd0]");
        __asm__("fldcw word [ebp+0xffffedd6]");
        v79 = v14;
        v38 = eax157;
        v133 = v127;
        WriteWaveHeader(a2, v133, v38, v79, 16, v37, v36);
    }
    fun_804a43c(a2, v133, v38, v79, 16, v37, v36);
    eax158 = silent;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax158) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax158 == 0))) {
        decoder_progress_finish(a2, v133, v38, v79, 16, v37, v36);
    }
    return 0;
}

int32_t lame_init_bitstream = 0x804a462;

void fun_804a45c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto lame_init_bitstream;
}

int32_t lame_set_nogap_total = 0x804a3d2;

void fun_804a3cc(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto lame_set_nogap_total;
}

int32_t lame_set_nogap_currentindex = 0x804a502;

void fun_804a4fc(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto lame_set_nogap_currentindex;
}

int32_t fclose = 0x804a442;

int32_t fun_804a43c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto fclose;
}

void** g805b3e0 = reinterpret_cast<void**>(0);

void CloseSndFile(void** a1, void** a2);

void close_infile(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** edx8;
    void** eax9;

    edx8 = g805b3e0;
    eax9 = input_format;
    CloseSndFile(eax9, edx8);
    return;
}

int32_t vfprintf = 0x804a8f2;

void** fun_804a8ec(void** a1, void** a2, void* a3) {
    goto vfprintf;
}

int32_t tgetent = 0x804a3e2;

int32_t fun_804a3dc(void** a1, void** a2) {
    goto tgetent;
}

int32_t tgetnum = 0x804a7a2;

void** fun_804a79c(int32_t a1, void** a2) {
    goto tgetnum;
}

int32_t strcpy = 0x804a552;

void fun_804a54c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto strcpy;
}

int32_t tgetstr = 0x804a982;

void** fun_804a97c(void** a1, void** a2) {
    goto tgetstr;
}

void** stderr = reinterpret_cast<void**>(0);

void fun_804a68c(void** a1, uint32_t a2, int32_t a3, void** a4);

void** apply_termcap_settings(void** a1, void** a2, void** a3, void** a4);

int32_t init_console(void** a1) {
    void** edx2;
    void** edx3;
    void** eax4;
    void** v5;

    *reinterpret_cast<void***>(a1 + 20) = reinterpret_cast<void**>(80);
    *reinterpret_cast<void***>(a1 + 24) = reinterpret_cast<void**>(25);
    edx2 = stderr;
    *reinterpret_cast<void***>(a1 + 8) = edx2;
    edx3 = stderr;
    *reinterpret_cast<void***>(a1 + 12) = edx3;
    *reinterpret_cast<int32_t*>(a1 + 16) = 0;
    eax4 = *reinterpret_cast<void***>(a1 + 8);
    fun_804a68c(eax4, a1 + 68, 0, 0x800);
    fun_804a48c(a1 + 28, 0x8054f47, 4, 0x800, v5);
    apply_termcap_settings(a1, 0x8054f47, 4, 0x800);
    *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0x434f4e53);
    *reinterpret_cast<int32_t*>(a1 + 0x844) = 0;
    return 0;
}

int32_t setvbuf = 0x804a692;

void fun_804a68c(void** a1, uint32_t a2, int32_t a3, void** a4) {
    goto setvbuf;
}

int32_t fopen64 = 0x804a272;

void** fun_804a26c(void** a1, void** a2) {
    goto fopen64;
}

int32_t lame_set_stream_binary_mode(void** a1, void** a2);

void** init_outfile(void** a1, int32_t a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    int32_t eax10;
    void** eax11;
    void** v12;
    void** eax13;
    void** eax14;

    eax10 = fun_804aa6c(a1, "-", v5, v6, v7, v8, v9);
    if (eax10) {
        eax11 = fun_804a26c(a1, "w+b");
        v12 = eax11;
        if (v12) {
            addr_804cee3_3:
            eax13 = v12;
        } else {
            eax13 = reinterpret_cast<void**>(0);
        }
        return eax13;
    } else {
        eax14 = stdout;
        v12 = eax14;
        lame_set_stream_binary_mode(v12, "-");
        goto addr_804cee3_3;
    }
}

int32_t lame_set_stream_binary_mode(void** a1, void** a2) {
    return 0;
}

void** lame_decode_fromfile(void** a1, void** a2, void** a3, void** a4);

void** g805c564 = reinterpret_cast<void**>(0);

void** g805c568 = reinterpret_cast<void**>(0);

void** read_samples_mp3(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** eax6;
    void** v7;
    void** eax8;
    void** edx9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** edx16;
    void** eax17;
    void** v18;
    void** eax19;

    v4 = a3 + 0x900;
    v5 = a3;
    eax6 = lame_decode_fromfile(a2, v5, v4, 0x805c560);
    v7 = eax6;
    if (reinterpret_cast<signed char>(v7) >= reinterpret_cast<signed char>(0)) {
        eax8 = fun_804a75c(a1, v5, v4, 0x805c560);
        edx9 = g805c564;
        if (eax8 != edx9) {
            eax10 = silent;
            if (reinterpret_cast<signed char>(eax10) <= reinterpret_cast<signed char>(9)) {
                v5 = reinterpret_cast<void**>("MP3 file");
                error_printf("Error: number of channels has changed in %s - not supported\n", "MP3 file", v4, 0x805c560, v11);
            }
            v7 = reinterpret_cast<void**>(0xffffffff);
        }
        eax15 = fun_804a06c(a1, v5, v4, 0x805c560, v12, v13, v14, v7);
        edx16 = g805c568;
        if (eax15 != edx16) {
            eax17 = silent;
            if (reinterpret_cast<signed char>(eax17) <= reinterpret_cast<signed char>(9)) {
                error_printf("Error: sample frequency has changed in %s - not supported\n", "MP3 file", v4, 0x805c560, v18);
            }
            v7 = reinterpret_cast<void**>(0xffffffff);
        }
        eax19 = v7;
    } else {
        fun_804a25c(a3, 0, 0x1200, 0x805c560);
        eax19 = reinterpret_cast<void**>(0);
    }
    return eax19;
}

int32_t is_mpeg_file_format(void** a1, void** a2, void** a3, void** a4) {
    int32_t eax5;

    if (a1 == 5) {
        eax5 = 2;
    } else {
        if (reinterpret_cast<signed char>(a1) > reinterpret_cast<signed char>(5)) {
            if (a1 == 6) {
                eax5 = 3;
            } else {
                if (a1 == 7) {
                    eax5 = -1;
                } else {
                    goto addr_804f08c_9;
                }
            }
        } else {
            if (a1 == 4) {
                eax5 = 1;
            } else {
                goto addr_804f08c_9;
            }
        }
    }
    addr_804f091_13:
    return eax5;
    addr_804f08c_9:
    eax5 = 0;
    goto addr_804f091_13;
}

void Write32BitsLowHigh(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** ebp9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;

    Write16BitsLowHigh(a1, reinterpret_cast<unsigned char>(a2) & 0xffff, v5, v6, v7, v8, ebp9);
    Write16BitsLowHigh(a1, reinterpret_cast<unsigned char>(a2) >> 16, v10, v11, v12, v13, ebp9);
    return;
}

int32_t ferror = 0x804aa22;

int32_t fun_804aa1c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto ferror;
}

void** g805b3d0 = reinterpret_cast<void**>(0);

void** g805b3d8 = reinterpret_cast<void**>(0);

void** unpack_read_samples(void** a1, void** a2, void** a3, void** a4, void** a5);

uint32_t g805b3d4 = 0;

void** read_samples_pcm(void** a1, void** a2, void** a3) {
    void** eax4;
    int32_t eax5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** eax21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** eax26;
    void** v27;
    int32_t eax28;
    void** v29;
    uint32_t eax30;
    void** eax31;
    void** eax32;
    int32_t eax33;
    void** eax34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;

    eax4 = g805b3d0;
    if (eax4 == 16) 
        goto addr_804d9dc_2;
    if (reinterpret_cast<signed char>(eax4) > reinterpret_cast<signed char>(16)) {
        if (eax4 == 24 || reinterpret_cast<int1_t>(eax4 == 32)) {
            addr_804d9dc_2:
            eax5 = in_signed;
            if (!eax5) {
                error_printf("Unsigned input only supported with bitwidth 8\n", v6, v7, v8, v9);
                fun_804aa7c(1, v10, v11, v12, v13, v14, v15);
            }
        } else {
            addr_804da8b_6:
            eax16 = silent;
            if (reinterpret_cast<signed char>(eax16) <= reinterpret_cast<signed char>(9)) {
                error_printf("Only 8, 16, 24 and 32 bit input files supported \n", v17, v18, v19, v20);
                goto addr_804daa1_8;
            }
        }
    } else {
        if (eax4 == 8) {
            eax21 = g805b3d8;
            v22 = a1;
            v23 = a2;
            v24 = eax21;
            v25 = reinterpret_cast<void**>(1);
            eax26 = unpack_read_samples(a3, 1, v24, v23, v22);
            v27 = eax26;
            goto addr_804daad_11;
        } else {
            goto addr_804da8b_6;
        }
    }
    eax28 = in_endian;
    v29 = reinterpret_cast<void**>(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!eax28))));
    eax30 = g805b3d4;
    if (eax30) {
        v29 = reinterpret_cast<void**>(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(v29 == 0))));
    }
    eax31 = g805b3d0;
    if (reinterpret_cast<signed char>(eax31) < reinterpret_cast<signed char>(0)) {
        eax31 = eax31 + 7;
    }
    v22 = a1;
    v23 = a2;
    v24 = v29;
    v25 = reinterpret_cast<void**>(reinterpret_cast<signed char>(eax31) >> 3);
    eax32 = unpack_read_samples(a3, v25, v24, v23, v22);
    v27 = eax32;
    addr_804daad_11:
    eax33 = fun_804aa1c(a1, v25, v24, v23, v22);
    if (eax33) {
        eax34 = silent;
        if (reinterpret_cast<signed char>(eax34) <= reinterpret_cast<signed char>(9)) {
            error_printf("Error reading input file\n", v25, v24, v23, v22);
        }
        fun_804aa7c(1, v25, v24, v23, v22, v35, v36);
    }
    return v27;
    addr_804daa1_8:
    fun_804aa7c(1, v37, v38, v39, v40, v41, v42);
    goto addr_804daad_11;
}

int32_t exit = 0x804aa82;

void fun_804aa7c(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto exit;
}

void** fun_804a94c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** unpack_read_samples(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    void** v11;
    void*** v12;
    void* v13;
    uint32_t eax14;
    void* v15;
    uint32_t eax16;
    uint32_t eax17;
    void* v18;
    uint32_t eax19;
    uint32_t eax20;
    uint32_t eax21;
    void* v22;
    uint32_t eax23;
    uint32_t eax24;
    uint32_t eax25;
    uint32_t eax26;
    void* v27;
    uint32_t eax28;
    void* v29;
    uint32_t eax30;
    uint32_t eax31;
    void* v32;
    uint32_t eax33;
    uint32_t eax34;
    uint32_t eax35;
    void* v36;
    uint32_t eax37;
    uint32_t eax38;
    uint32_t eax39;
    uint32_t eax40;

    v6 = a4;
    eax10 = fun_804a94c(a4, a2, a1, a5, v7, v8, v9, 32);
    v11 = eax10;
    v12 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v11) << 2) + reinterpret_cast<unsigned char>(a4));
    if (a3) {
        if (reinterpret_cast<int1_t>(a2 == 1)) {
            v13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(v11));
            while (v13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v13) - reinterpret_cast<unsigned char>(a2)), reinterpret_cast<int32_t>(v13) >= reinterpret_cast<int32_t>(0)) {
                v12 = v12 - 4;
                eax14 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v13) + reinterpret_cast<unsigned char>(v6))) ^ 0xffffff80;
                *v12 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax14)) << 24 | 0x7f0000);
            }
        }
        if (reinterpret_cast<int1_t>(a2 == 2)) {
            v15 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(v11));
            while (v15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v15) - reinterpret_cast<unsigned char>(a2)), reinterpret_cast<int32_t>(v15) >= reinterpret_cast<int32_t>(0)) {
                v12 = v12 - 4;
                eax16 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v15) + reinterpret_cast<unsigned char>(v6));
                eax17 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v15) + 1 + reinterpret_cast<unsigned char>(v6));
                *v12 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax16)) << 24 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax17)) << 16);
            }
        }
        if (reinterpret_cast<int1_t>(a2 == 3)) {
            v18 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(v11));
            while (v18 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v18) - reinterpret_cast<unsigned char>(a2)), reinterpret_cast<int32_t>(v18) >= reinterpret_cast<int32_t>(0)) {
                v12 = v12 - 4;
                eax19 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v18) + reinterpret_cast<unsigned char>(v6));
                eax20 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v18) + 1 + reinterpret_cast<unsigned char>(v6));
                eax21 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v18) + 2 + reinterpret_cast<unsigned char>(v6));
                *v12 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax19)) << 24 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax20)) << 16 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax21)) << 8);
            }
        }
        if (reinterpret_cast<int1_t>(a2 == 4)) {
            v22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(v11));
            while (v22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v22) - reinterpret_cast<unsigned char>(a2)), reinterpret_cast<int32_t>(v22) >= reinterpret_cast<int32_t>(0)) {
                v12 = v12 - 4;
                eax23 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v22) + reinterpret_cast<unsigned char>(v6));
                eax24 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v22) + 1 + reinterpret_cast<unsigned char>(v6));
                eax25 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v22) + 2 + reinterpret_cast<unsigned char>(v6));
                eax26 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v22) + 3 + reinterpret_cast<unsigned char>(v6));
                *v12 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax23)) << 24 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax24)) << 16 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax25)) << 8 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax26)));
            }
        }
    } else {
        if (reinterpret_cast<int1_t>(a2 == 1)) {
            v27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(v11));
            while (v27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v27) - reinterpret_cast<unsigned char>(a2)), reinterpret_cast<int32_t>(v27) >= reinterpret_cast<int32_t>(0)) {
                v12 = v12 - 4;
                eax28 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v27) + reinterpret_cast<unsigned char>(v6));
                *v12 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax28)) << 24);
            }
        }
        if (reinterpret_cast<int1_t>(a2 == 2)) {
            v29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(v11));
            while (v29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v29) - reinterpret_cast<unsigned char>(a2)), reinterpret_cast<int32_t>(v29) >= reinterpret_cast<int32_t>(0)) {
                v12 = v12 - 4;
                eax30 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v29) + reinterpret_cast<unsigned char>(v6));
                eax31 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v29) + 1 + reinterpret_cast<unsigned char>(v6));
                *v12 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax30)) << 16 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax31)) << 24);
            }
        }
        if (reinterpret_cast<int1_t>(a2 == 3)) {
            v32 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(v11));
            while (v32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v32) - reinterpret_cast<unsigned char>(a2)), reinterpret_cast<int32_t>(v32) >= reinterpret_cast<int32_t>(0)) {
                v12 = v12 - 4;
                eax33 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v32) + reinterpret_cast<unsigned char>(v6));
                eax34 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v32) + 1 + reinterpret_cast<unsigned char>(v6));
                eax35 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v32) + 2 + reinterpret_cast<unsigned char>(v6));
                *v12 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax33)) << 8 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax34)) << 16 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax35)) << 24);
            }
        }
        if (reinterpret_cast<int1_t>(a2 == 4)) {
            v36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(v11));
            while (v36 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v36) - reinterpret_cast<unsigned char>(a2)), reinterpret_cast<int32_t>(v36) >= reinterpret_cast<int32_t>(0)) {
                v12 = v12 - 4;
                eax37 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v36) + reinterpret_cast<unsigned char>(v6));
                eax38 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v36) + 1 + reinterpret_cast<unsigned char>(v6));
                eax39 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v36) + 2 + reinterpret_cast<unsigned char>(v6));
                eax40 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v36) + 3 + reinterpret_cast<unsigned char>(v6));
                *v12 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax37)) | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax38)) << 8 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax39)) << 16 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax40)) << 24);
            }
        }
    }
    return v11;
}

void** Read16BitsLowHigh(void** a1, void** a2, void** a3);

void** Read32Bits(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** eax6;
    void** v7;
    void** v8;
    void** eax9;

    eax6 = Read16BitsLowHigh(a1, v4, v5);
    eax9 = Read16BitsLowHigh(a1, v7, v8);
    return ((reinterpret_cast<unsigned char>(eax9) & 0xffff) << 16) + (reinterpret_cast<unsigned char>(eax6) & 0xffff);
}

uint32_t fun_804a2ec(void** a1);

void** Read16BitsLowHigh(void** a1, void** a2, void** a3) {
    uint32_t eax4;
    uint32_t eax5;
    void** v6;

    eax4 = fun_804a2ec(a1);
    eax5 = fun_804a2ec(a1);
    v6 = reinterpret_cast<void**>(((eax5 & 0xff) << 8) + (eax4 & 0xff));
    if (reinterpret_cast<unsigned char>(v6) & 0x8000) {
        v6 = v6 - 0x10000;
    }
    return v6;
}

void** fun_804a04c(void** a1);

int32_t fstat64(void** a1, void** a2);

void** min_size_t(void** a1, void** a2, void** a3, void** a4);

void** fskip(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** v6;
    uint32_t eax7;
    uint32_t v8;
    void** eax9;
    void** v10;
    void** v11;
    int32_t eax12;
    uint32_t v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    int32_t eax19;
    void** eax20;
    void** v21;
    void** v22;
    void** eax23;
    void** v24;
    void** eax25;
    void** v26;
    void** v27;
    void** v28;
    void** eax29;
    void** eax30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
    uint32_t edx35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v6 = a1;
    eax7 = g14;
    v8 = eax7;
    eax9 = fun_804a04c(v6);
    v10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffef80);
    v11 = eax9;
    eax12 = fstat64(v11, v10);
    if (eax12 || (v13 & 0xf000) != 0x1000) {
        v14 = a3;
        v10 = a2;
        v11 = v6;
        eax19 = fun_804a40c(v11, v10, v14, v15, v16, v17, v18);
        if (eax19) {
            if (!reinterpret_cast<int1_t>(a3 == 1) || reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0)) {
                eax20 = silent;
                if (reinterpret_cast<signed char>(eax20) <= reinterpret_cast<signed char>(9)) {
                    v11 = reinterpret_cast<void**>("fskip problem: Mostly the return status of functions is not evaluate so it is more secure to polute <stderr>.\n");
                    error_printf("fskip problem: Mostly the return status of functions is not evaluate so it is more secure to polute <stderr>.\n", v10, v14, v21, v22);
                }
                eax23 = reinterpret_cast<void**>(0xffffffff);
            } else {
                while (reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(0)) {
                    eax25 = min_size_t(0x1000, a2, v14, v24);
                    v24 = v6;
                    v14 = eax25;
                    v10 = reinterpret_cast<void**>(1);
                    v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4);
                    eax29 = fun_804a94c(v11, 1, v14, v24, v26, v27, v28, v6);
                    if (!eax29) 
                        goto addr_804ce5c_9;
                    a2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(eax29));
                }
                goto addr_804ce75_11;
            }
        } else {
            eax23 = reinterpret_cast<void**>(0);
        }
    } else {
        if (!reinterpret_cast<int1_t>(a3 == 1) || reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0)) {
            eax23 = reinterpret_cast<void**>(0xffffffff);
        } else {
            while (reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(0)) {
                eax30 = min_size_t(0x1000, a2, v14, v24);
                v24 = v6;
                v14 = eax30;
                v10 = reinterpret_cast<void**>(1);
                v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4);
                eax34 = fun_804a94c(v11, 1, v14, v24, v31, v32, v33, v6);
                if (!eax34) 
                    goto addr_804cd8d_17;
                a2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(eax34));
            }
            goto addr_804cda9_19;
        }
    }
    addr_804ce7a_20:
    edx35 = v8 ^ g14;
    if (edx35) {
        eax23 = fun_804a70c(v11, v10, v14, v24, v36, v37, v38, v6, v39);
    }
    return eax23;
    addr_804ce75_11:
    eax23 = reinterpret_cast<void**>(0);
    goto addr_804ce7a_20;
    addr_804ce5c_9:
    eax23 = reinterpret_cast<void**>(0xffffffff);
    goto addr_804ce7a_20;
    addr_804cda9_19:
    eax23 = reinterpret_cast<void**>(0);
    goto addr_804ce7a_20;
    addr_804cd8d_17:
    eax23 = reinterpret_cast<void**>(0xffffffff);
    goto addr_804ce7a_20;
}

int32_t lame_set_num_samples = 0x804a882;

void fun_804a87c(void** a1, void** a2, void** a3, void** a4, ...) {
    goto lame_set_num_samples;
}

uint32_t Read16BitsHighLow(void** a1, void** a2, void** a3);

void** Read32BitsHighLow(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    uint32_t eax6;
    void** v7;
    void** v8;
    uint32_t eax9;

    eax6 = Read16BitsHighLow(a1, v4, v5);
    eax9 = Read16BitsHighLow(a1, v7, v8);
    return ((eax6 & 0xffff) << 16) + (eax9 & 0xffff);
}

void** make_even_number_of_bytes_in_length(void** a1, void** a2, void** a3) {
    uint32_t eax4;
    void** eax5;

    eax4 = reinterpret_cast<unsigned char>(a1) & 1;
    if (!*reinterpret_cast<signed char*>(&eax4)) {
        eax5 = a1;
    } else {
        eax5 = a1 + 1;
    }
    return eax5;
}

uint32_t Read16BitsHighLow(void** a1, void** a2, void** a3) {
    uint32_t eax4;
    uint32_t eax5;
    uint32_t v6;

    eax4 = fun_804a2ec(a1);
    eax5 = fun_804a2ec(a1);
    v6 = ((eax4 & 0xff) << 8) + (eax5 & 0xff);
    if (v6 & 0x8000) {
        v6 = v6 - 0x10000;
    }
    return v6;
}

void ReadBytes(void** a1, void** a2, void** a3);

void ConvertFromIeeeExtended(void** a1, void** a2, void** a3);

void** ReadIeeeExtendedHighLow(void** a1, void** a2, void** a3) {
    void* ebp4;
    uint32_t eax5;
    void** v6;
    void** v7;
    void** eax8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = g14;
    v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xffffffea);
    ReadBytes(a1, v6, 10);
    v7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xffffffea);
    ConvertFromIeeeExtended(v7, v6, 10);
    eax8 = reinterpret_cast<void**>(eax5 ^ g14);
    if (eax8) {
        __asm__("fstp st0");
        eax8 = fun_804a70c(v7, v6, 10, v9, v10, v11, v12, a1, v13);
    }
    return eax8;
}

void** IFF_ID_SSND = reinterpret_cast<void**>(68);

int32_t aiff_check2(void** a1, void** a2, void** a3) {
    void** eax4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t ecx7;
    void** eax8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    int32_t eax13;
    uint32_t eax14;
    uint32_t eax15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** eax21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** eax26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;

    eax4 = IFF_ID_SSND;
    if (*reinterpret_cast<void***>(a1 + 20) == eax4) {
        eax5 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a1 + 8));
        eax6 = *reinterpret_cast<int16_t*>(&eax5) - 8;
        if (eax6 > 24 || (ecx7 = eax6, (1 << *reinterpret_cast<unsigned char*>(&ecx7) & 0x1010101) == 0)) {
            eax8 = silent;
            if (reinterpret_cast<signed char>(eax8) <= reinterpret_cast<signed char>(9)) {
                error_printf("ERROR: input sound data is not 8, 16, 24 or 32 bits\n", v9, v10, v11, v12);
            }
            eax13 = 1;
        } else {
            eax14 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a1));
            if (*reinterpret_cast<int16_t*>(&eax14) != 1) {
                eax15 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a1));
                if (*reinterpret_cast<int16_t*>(&eax15) == 2) {
                    addr_804de80_8:
                    if (!*reinterpret_cast<int32_t*>(a1 + 28)) {
                        eax13 = 0;
                    } else {
                        eax16 = silent;
                        if (reinterpret_cast<signed char>(eax16) <= reinterpret_cast<signed char>(9)) {
                            error_printf("ERROR: block size of input sound data is not 0 bytes\n", v17, v18, v19, v20);
                        }
                        eax13 = 1;
                    }
                } else {
                    eax21 = silent;
                    if (reinterpret_cast<signed char>(eax21) <= reinterpret_cast<signed char>(9)) {
                        error_printf("ERROR: input sound data is not mono or stereo\n", v22, v23, v24, v25);
                    }
                    eax13 = 1;
                }
            } else {
                goto addr_804de80_8;
            }
        }
    } else {
        eax26 = silent;
        if (reinterpret_cast<signed char>(eax26) <= reinterpret_cast<signed char>(9)) {
            error_printf("ERROR: input sound data is not PCM\n", v27, v28, v29, v30);
        }
        eax13 = 1;
    }
    return eax13;
}

void** WAV_ID_WAVE = reinterpret_cast<void**>(69);

void** WAV_ID_FMT = reinterpret_cast<void**>(32);

void** WAV_ID_DATA = reinterpret_cast<void**>(97);

uint16_t WAVE_FORMAT_EXTENSIBLE = 0xfffe;

uint16_t WAVE_FORMAT_PCM = 1;

int32_t parse_wave_header(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    int32_t v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** edx14;
    int32_t v15;
    void** v16;
    void** eax17;
    void** eax18;
    void** eax19;
    void** eax20;
    void** v21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** v28;
    uint32_t eax29;
    void** v30;
    void** eax31;
    void** eax32;
    int32_t eax33;
    uint32_t eax34;
    void** v35;
    void** v36;
    int32_t v37;
    int32_t v38;
    int32_t eax39;
    void** v40;
    void** v41;
    int32_t v42;
    int32_t v43;
    unsigned char* eax44;
    void** v45;
    void** eax46;
    void** v47;
    void** v48;
    int32_t v49;
    int32_t v50;
    void** eax51;
    void** v52;
    void** v53;
    int32_t v54;
    int32_t v55;
    void** eax56;

    v3 = reinterpret_cast<void**>(0);
    v4 = reinterpret_cast<void**>(0);
    v5 = reinterpret_cast<void**>(0);
    v6 = reinterpret_cast<void**>(0);
    v7 = 0;
    v8 = reinterpret_cast<void**>(0);
    Read32BitsHighLow(a2, v9, v10);
    eax13 = Read32BitsHighLow(a2, v11, v12);
    edx14 = WAV_ID_WAVE;
    if (eax13 == edx14) {
        v15 = 0;
        while (v15 <= 19) {
            eax17 = Read32BitsHighLow(a2, v16, 1);
            eax18 = WAV_ID_FMT;
            if (eax17 != eax18) {
                eax19 = WAV_ID_DATA;
                if (eax17 == eax19) 
                    goto addr_804dc90_6;
                eax20 = Read32Bits(a2, v16, 1);
                v16 = eax20;
                eax22 = fskip(a2, v16, 1, v21);
                if (eax22) 
                    goto addr_804dcd9_8;
            } else {
                eax23 = Read32Bits(a2, v16, 1);
                if (reinterpret_cast<signed char>(eax23) <= reinterpret_cast<signed char>(15)) 
                    goto addr_804db98_10;
                eax24 = Read16BitsLowHigh(a2, v16, 1);
                v3 = eax24;
                eax25 = Read16BitsLowHigh(a2, v16, 1);
                v4 = eax25;
                eax26 = Read32Bits(a2, v16, 1);
                v6 = eax26;
                Read32Bits(a2, v16, 1);
                Read16BitsLowHigh(a2, v16, 1);
                eax27 = Read16BitsLowHigh(a2, v16, 1);
                v5 = eax27;
                v28 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax23 - 2) - 2 - 4 - 4 - 2 - 2);
                if (reinterpret_cast<signed char>(v28) <= reinterpret_cast<signed char>(9)) 
                    goto addr_804dc54_12;
                eax29 = WAVE_FORMAT_EXTENSIBLE;
                if (!reinterpret_cast<int1_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax29)) == v3)) 
                    goto addr_804dc54_12; else 
                    goto addr_804dc21_14;
            }
            addr_804dce3_15:
            ++v15;
            continue;
            addr_804dc54_12:
            if (reinterpret_cast<signed char>(v28) <= reinterpret_cast<signed char>(0)) 
                goto addr_804dce3_15;
            v16 = v28;
            eax31 = fskip(a2, v16, 1, v30);
            if (!eax31) 
                goto addr_804dce3_15; else 
                goto addr_804dc7c_17;
            addr_804dc21_14:
            Read16BitsLowHigh(a2, v16, 1);
            Read16BitsLowHigh(a2, v16, 1);
            Read32Bits(a2, v16, 1);
            eax32 = Read16BitsLowHigh(a2, v16, 1);
            v3 = eax32;
            v28 = v28 - 10;
            goto addr_804dc54_12;
        }
    } else {
        eax33 = -1;
        goto addr_804ddce_19;
    }
    addr_804dcf1_20:
    if (!v7) {
        eax33 = -1;
    } else {
        eax34 = WAVE_FORMAT_PCM;
        if (static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax34)) == v3) {
            eax39 = fun_804a0bc(a1, v4, 1, v35, v36, a1, v4, 1, v37, v38);
            if (eax39 != -1) {
                fun_804a93c(a1, v6, 1, v40, v41, a1, v6, 1, v42, v43);
                g805b3d0 = v5;
                g805b3d8 = reinterpret_cast<void**>(1);
                eax44 = reinterpret_cast<unsigned char*>(v5 + 7);
                if (reinterpret_cast<int32_t>(eax44) < reinterpret_cast<int32_t>(0)) {
                    eax44 = eax44 + 7;
                }
                fun_804a87c(a1, reinterpret_cast<signed char>(v8) / reinterpret_cast<int32_t>((reinterpret_cast<int32_t>(eax44) >> 3) * reinterpret_cast<unsigned char>(v4)), 1, v45);
                eax33 = 1;
            } else {
                eax46 = silent;
                if (reinterpret_cast<signed char>(eax46) <= reinterpret_cast<signed char>(9)) {
                    error_printf("Unsupported number of channels: %u\n", v4, 1, v47, v48, "Unsupported number of channels: %u\n", v4, 1, v49, v50);
                }
                eax33 = 0;
            }
        } else {
            eax51 = silent;
            if (reinterpret_cast<signed char>(eax51) <= reinterpret_cast<signed char>(9)) {
                error_printf("Unsupported data format: 0x%04X\n", v3, 1, v52, v53, "Unsupported data format: 0x%04X\n", v3, 1, v54, v55);
            }
            eax33 = 0;
        }
    }
    addr_804ddce_19:
    return eax33;
    addr_804dc90_6:
    eax56 = Read32Bits(a2, v16, 1);
    v8 = eax56;
    v7 = 1;
    goto addr_804dcf1_20;
    addr_804dcd9_8:
    eax33 = -1;
    goto addr_804ddce_19;
    addr_804db98_10:
    eax33 = -1;
    goto addr_804ddce_19;
    addr_804dc7c_17:
    eax33 = -1;
    goto addr_804ddce_19;
}

void** IFF_ID_NONE = reinterpret_cast<void**>(69);

void** IFF_ID_AIFF = reinterpret_cast<void**>(70);

void** IFF_ID_AIFC = reinterpret_cast<void**>(67);

void** IFF_ID_COMM = reinterpret_cast<void**>(77);

void** fun_804a55c(void** a1, void** a2, void** a3);

void** IFF_ID_2CLE = reinterpret_cast<void**>(0x74);

void** IFF_ID_2CBE = reinterpret_cast<void**>(0x73);

int32_t parse_aiff_header(void** a1, void** a2) {
    void* ebp3;
    void** eax4;
    void** v5;
    int32_t v6;
    int32_t v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    void** eax14;
    void** v15;
    void** eax16;
    void** eax17;
    void** eax18;
    void* v19;
    void** eax20;
    void** eax21;
    void** eax22;
    uint32_t eax23;
    uint16_t v24;
    void** eax25;
    void** v26;
    uint32_t eax27;
    uint16_t v28;
    void** v29;
    void** eax30;
    void** eax31;
    void** v32;
    void** eax33;
    void** eax34;
    void** eax35;
    void** eax36;
    void** v37;
    void** eax38;
    void** eax39;
    void** eax40;
    void** eax41;
    void** eax42;
    void** v43;
    void** eax44;
    int32_t eax45;
    void** eax46;
    void** eax47;
    void** eax48;
    uint32_t eax49;
    uint32_t eax50;
    uint32_t eax51;
    int32_t eax52;
    uint32_t eax53;
    void** v54;
    void** v55;
    int32_t eax56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    int32_t v61;
    uint32_t eax62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    int32_t v67;
    int32_t v68;
    int32_t v69;
    int32_t v70;
    int32_t eax71;
    void** eax72;
    void** v73;
    void** v74;
    int32_t v75;
    int32_t v76;
    void** eax77;
    uint32_t eax78;
    void** v79;
    void** v80;
    void** v81;
    void** eax82;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax4 = IFF_ID_NONE;
    v5 = eax4;
    v6 = 0;
    v7 = 0;
    v8 = reinterpret_cast<void**>(0xffffffff);
    v9 = reinterpret_cast<void**>(32);
    v10 = reinterpret_cast<void**>(0);
    fun_804a25c(reinterpret_cast<int32_t>(ebp3) + 0xffffffb4, 0, 32, v11);
    eax12 = Read32BitsHighLow(a2, 0, 32);
    v13 = eax12;
    eax14 = Read32BitsHighLow(a2, 0, 32);
    v15 = eax14;
    eax16 = IFF_ID_AIFF;
    if (v15 == eax16 || (eax17 = IFF_ID_AIFC, v15 == eax17)) {
        do {
            addr_804e165_2:
            if (reinterpret_cast<signed char>(v13) <= reinterpret_cast<signed char>(0)) 
                break;
            eax18 = Read32BitsHighLow(a2, v10, v9);
            v19 = reinterpret_cast<void*>(v13 - 4);
            eax20 = IFF_ID_COMM;
            if (eax18 == eax20) {
                v6 = v7 + 1;
                eax21 = Read32BitsHighLow(a2, v10, v9);
                eax22 = make_even_number_of_bytes_in_length(eax21, v10, v9);
                v13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v19) - reinterpret_cast<unsigned char>(eax22));
                eax23 = Read16BitsHighLow(a2, v10, v9);
                v24 = *reinterpret_cast<uint16_t*>(&eax23);
                eax25 = Read32BitsHighLow(a2, v10, v9);
                v26 = eax25;
                eax27 = Read16BitsHighLow(a2, v10, v9);
                v28 = *reinterpret_cast<uint16_t*>(&eax27);
                ReadIeeeExtendedHighLow(a2, v10, v9);
                __asm__("fstp qword [ebp-0x40]");
                v29 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax22 - 2) - 4 - 2 - 10);
                eax30 = IFF_ID_AIFC;
                if (v15 == eax30) {
                    eax31 = Read32BitsHighLow(a2, v10, v9);
                    v5 = eax31;
                    v29 = v29 - 4;
                }
                v9 = reinterpret_cast<void**>(1);
                v10 = v29;
                eax33 = fskip(a2, v10, 1, v32);
                if (!eax33) 
                    goto addr_804e165_2; else 
                    goto addr_804e034_7;
            }
            eax34 = IFF_ID_SSND;
            if (eax18 != eax34) {
                eax35 = Read32BitsHighLow(a2, v10, v9);
                eax36 = make_even_number_of_bytes_in_length(eax35, v10, v9);
                v13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v19) - reinterpret_cast<unsigned char>(eax36));
                v9 = reinterpret_cast<void**>(1);
                v10 = eax36;
                eax38 = fskip(a2, v10, 1, v37);
                if (!eax38) 
                    goto addr_804e165_2; else 
                    goto addr_804e15b_10;
            }
            v7 = 1;
            eax39 = Read32BitsHighLow(a2, v10, v9);
            eax40 = make_even_number_of_bytes_in_length(eax39, v10, v9);
            v13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v19) - reinterpret_cast<unsigned char>(eax40));
            eax41 = Read32BitsHighLow(a2, v10, v9);
            Read32BitsHighLow(a2, v10, v9);
            if (v6 > 0) 
                goto addr_804e0a7_12;
            eax42 = fun_804a55c(a2, v10, v9);
            v8 = eax42;
            if (reinterpret_cast<signed char>(v8) < reinterpret_cast<signed char>(0)) 
                continue;
            v8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax41) + reinterpret_cast<unsigned char>(v8));
            v9 = reinterpret_cast<void**>(1);
            v10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax40 - 4) - 4);
            eax44 = fskip(a2, v10, 1, v43);
        } while (!eax44);
        goto addr_804e111_16;
    } else {
        eax45 = -1;
        goto addr_804e2e2_18;
    }
    addr_804e172_20:
    eax46 = IFF_ID_2CLE;
    if (v5 != eax46) {
        eax47 = IFF_ID_2CBE;
        if (v5 != eax47) {
            eax48 = IFF_ID_NONE;
            if (v5 != eax48) {
                eax45 = -1;
            } else {
                eax49 = swapbytes;
                g805b3d4 = reinterpret_cast<uint1_t>(eax49 == 0);
                goto addr_804e1ce_25;
            }
        } else {
            eax50 = swapbytes;
            g805b3d4 = reinterpret_cast<uint1_t>(eax50 == 0);
            goto addr_804e1ce_25;
        }
    } else {
        eax51 = swapbytes;
        g805b3d4 = eax51;
        goto addr_804e1ce_25;
    }
    addr_804e2e2_18:
    return eax45;
    addr_804e1ce_25:
    if (!v6 || v7 <= 0 && v26) {
        eax45 = -1;
        goto addr_804e2e2_18;
    } else {
        eax52 = aiff_check2(reinterpret_cast<int32_t>(ebp3) + 0xffffffb4, v10, v9);
        if (!eax52) {
            eax53 = v24;
            eax56 = fun_804a0bc(a1, static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax53)), v9, v54, v55);
            if (eax56 != -1) {
                __asm__("fld qword [ebp-0x40]");
                __asm__("fnstcw word [ebp-0x5a]");
                __asm__("fldcw word [ebp-0x5c]");
                __asm__("fistp dword [ebp-0x60]");
                __asm__("fldcw word [ebp-0x5a]");
                fun_804a93c(a1, v57, v9, v58, v59);
                fun_804a87c(a1, v26, v9, v60, a1, v26, v9, v61);
                eax62 = v28;
                g805b3d0 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax62)));
                g805b3d8 = reinterpret_cast<void**>(0);
                if (reinterpret_cast<signed char>(v8) < reinterpret_cast<signed char>(0) || (eax71 = fun_804a40c(a2, v8, 0, v63, v64, v65, v66, a2, v8, 0, v67, v68, v69, v70), eax71 == 0)) {
                    eax45 = 1;
                    goto addr_804e2e2_18;
                } else {
                    eax72 = silent;
                    if (reinterpret_cast<signed char>(eax72) <= reinterpret_cast<signed char>(9)) {
                        error_printf("Can't rewind stream to audio data position\n", v8, 0, v73, v74, "Can't rewind stream to audio data position\n", v8, 0, v75, v76);
                    }
                    eax45 = 0;
                    goto addr_804e2e2_18;
                }
            } else {
                eax77 = silent;
                if (reinterpret_cast<signed char>(eax77) <= reinterpret_cast<signed char>(9)) {
                    eax78 = v24;
                    error_printf("Unsupported number of channels: %u\n", static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax78)), v9, v79, v80);
                }
                eax45 = 0;
                goto addr_804e2e2_18;
            }
        } else {
            eax45 = 0;
            goto addr_804e2e2_18;
        }
    }
    addr_804e15b_10:
    eax45 = -1;
    goto addr_804e2e2_18;
    addr_804e0a7_12:
    v9 = reinterpret_cast<void**>(1);
    v10 = eax41;
    eax82 = fskip(a2, v10, 1, v81);
    if (!eax82) {
        goto addr_804e172_20;
    } else {
        eax45 = -1;
        goto addr_804e2e2_18;
    }
    addr_804e111_16:
    eax45 = -1;
    goto addr_804e2e2_18;
    addr_804e034_7:
    eax45 = -1;
    goto addr_804e2e2_18;
}

void** g805b3e4 = reinterpret_cast<void**>(0);

void fun_804a8cc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_804a76c(void** a1, void** a2, void** a3);

uint32_t check_aid(void** a1, void** a2, void** a3, void** a4);

int32_t is_syncword_mp123(void** a1, void** a2, void** a3, void** a4);

int32_t fun_804aa2c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** lame_decode_initfile(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* ebp9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    uint32_t eax14;
    uint32_t v15;
    int32_t v16;
    void** v17;
    void** v18;
    void** eax19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** eax33;
    uint32_t eax34;
    unsigned char v35;
    uint32_t eax36;
    unsigned char v37;
    uint32_t eax38;
    unsigned char v39;
    void** eax40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** eax49;
    void** eax50;
    uint32_t eax51;
    unsigned char v52;
    unsigned char v53;
    uint32_t eax54;
    unsigned char v55;
    uint32_t eax56;
    unsigned char v57;
    uint32_t eax58;
    unsigned char v59;
    uint32_t eax60;
    uint32_t eax61;
    uint32_t eax62;
    uint32_t eax63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** eax68;
    uint32_t eax69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** eax74;
    uint32_t eax75;
    unsigned char v76;
    uint32_t edx77;
    unsigned char v78;
    void** eax79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** eax88;
    int32_t eax89;
    void* v90;
    uint32_t edx91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** eax96;
    uint32_t eax97;
    void** eax98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** eax103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    int32_t eax108;
    void** eax109;
    void** eax110;
    int32_t eax111;
    void** eax112;
    uint32_t edx113;

    ebp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v10 = a1;
    v11 = a2;
    v12 = a3;
    v13 = a4;
    eax14 = g14;
    v15 = eax14;
    v16 = 0;
    v17 = v11;
    fun_804a25c(v17, 0, 40, v18);
    eax19 = g805b3e4;
    if (eax19) {
        eax20 = g805b3e4;
        v17 = eax20;
        fun_804a8cc(v17, 0, 40, v21, v22, v23);
    }
    eax24 = fun_804a76c(v17, 0, 40);
    g805b3e4 = eax24;
    v25 = v10;
    v26 = reinterpret_cast<void**>(4);
    v27 = reinterpret_cast<void**>(1);
    v28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffff90);
    eax33 = fun_804a94c(v28, 1, 4, v25, v29, v30, v31, v32);
    if (eax33 == 4) {
        eax34 = v35;
        if (*reinterpret_cast<signed char*>(&eax34) != 73) 
            goto addr_804eb42_5;
        eax36 = v37;
        if (*reinterpret_cast<signed char*>(&eax36) != 68) 
            goto addr_804eb42_5;
        eax38 = v39;
        if (*reinterpret_cast<signed char*>(&eax38) != 51) 
            goto addr_804eb42_5;
        eax40 = silent;
        if (reinterpret_cast<signed char>(eax40) <= reinterpret_cast<signed char>(9)) {
            console_printf("ID3v2 found. Be aware that the ID3 tag is currently lost when transcoding.\n", 1, 4, v25, v41, v42, v43, v44, v13);
        }
        v25 = v10;
        v26 = reinterpret_cast<void**>(6);
        v27 = reinterpret_cast<void**>(1);
        v28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffff90);
        eax49 = fun_804a94c(v28, 1, 6, v25, v45, v46, v47, v48);
        if (eax49 != 6) 
            goto addr_804ea82_11;
    } else {
        eax50 = reinterpret_cast<void**>(0xffffffff);
        goto addr_804ee55_13;
    }
    eax51 = static_cast<uint32_t>(v52) & 0x7f;
    v53 = *reinterpret_cast<unsigned char*>(&eax51);
    eax54 = static_cast<uint32_t>(v55) & 0x7f;
    eax56 = static_cast<uint32_t>(v57) & 0x7f;
    eax58 = static_cast<uint32_t>(v59) & 0x7f;
    eax60 = v53;
    eax61 = *reinterpret_cast<unsigned char*>(&eax54);
    eax62 = *reinterpret_cast<unsigned char*>(&eax56);
    eax63 = *reinterpret_cast<unsigned char*>(&eax58);
    fskip(v10, (((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax60)) << 7) + *reinterpret_cast<unsigned char*>(&eax61) << 7) + *reinterpret_cast<unsigned char*>(&eax62) << 7) + *reinterpret_cast<unsigned char*>(&eax63), 1, v25);
    v25 = v10;
    v26 = reinterpret_cast<void**>(4);
    v27 = reinterpret_cast<void**>(1);
    v28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffff90);
    eax68 = fun_804a94c(v28, 1, 4, v25, v64, v65, v66, v67);
    if (eax68 == 4) {
        addr_804eb42_5:
        eax69 = check_aid(reinterpret_cast<int32_t>(ebp9) + 0xffffff90, 1, 4, v25);
        if (!eax69) {
            addr_804ec14_15:
        } else {
            v25 = v10;
            v26 = reinterpret_cast<void**>(2);
            v27 = reinterpret_cast<void**>(1);
            v28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffff90);
            eax74 = fun_804a94c(v28, 1, 2, v25, v70, v71, v72, v73);
            if (eax74 == 2) {
                eax75 = v76;
                edx77 = v78;
                eax79 = silent;
                if (reinterpret_cast<signed char>(eax79) <= reinterpret_cast<signed char>(9)) {
                    console_printf("Album ID found.  length=%i \n", *reinterpret_cast<unsigned char*>(&eax75) + (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx77)) << 8), 2, v25, v80, v81, v82, v83, v13);
                }
                fskip(v10, reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax75) + (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx77)) << 8)) - 6, 1, v25);
                v25 = v10;
                v26 = reinterpret_cast<void**>(4);
                v27 = reinterpret_cast<void**>(1);
                v28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffff90);
                eax88 = fun_804a94c(v28, 1, 4, v25, v84, v85, v86, v87);
                if (eax88 == 4) 
                    goto addr_804ec14_15; else 
                    goto addr_804ec0a_20;
            } else {
                eax50 = reinterpret_cast<void**>(0xffffffff);
                goto addr_804ee55_13;
            }
        }
    } else {
        eax50 = reinterpret_cast<void**>(0xffffffff);
        goto addr_804ee55_13;
    }
    do {
        eax89 = is_syncword_mp123(reinterpret_cast<int32_t>(ebp9) + 0xffffff90, 1, v26, v25);
        if (eax89) 
            break;
        v90 = reinterpret_cast<void*>(0);
        while (3 > reinterpret_cast<uint32_t>(v90)) {
            edx91 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp9) + (reinterpret_cast<uint32_t>(v90) + 1) - 0x70);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp9) + reinterpret_cast<uint32_t>(v90) - 0x70) = *reinterpret_cast<signed char*>(&edx91);
            v90 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v90) + 1);
        }
        v25 = v10;
        v26 = reinterpret_cast<void**>(1);
        v27 = reinterpret_cast<void**>(1);
        v28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) - 0x70 + 3);
        eax96 = fun_804a94c(v28, 1, 1, v25, v92, v93, v94, v95);
    } while (eax96 == 1);
    goto addr_804ec88_28;
    eax97 = v53;
    if (!(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax97)) & 0xf0)) {
        eax98 = silent;
        if (reinterpret_cast<signed char>(eax98) <= reinterpret_cast<signed char>(9)) {
            console_printf("Input file is freeformat.\n", 1, v26, v25, v99, v100, v101, v102, v13);
        }
        v16 = 1;
    }
    eax103 = g805b3e4;
    v104 = v13;
    v105 = v12;
    v106 = v11;
    v107 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffed7c);
    v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff67c);
    v26 = reinterpret_cast<void**>(4);
    v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffff90);
    v28 = eax103;
    eax108 = fun_804aa2c(v28, v27, 4, v25, v107, v106, v105, v104);
    if (eax108 != -1) {
        do {
            if (*reinterpret_cast<void***>(v11)) 
                break;
            v25 = v10;
            v26 = reinterpret_cast<void**>(100);
            v27 = reinterpret_cast<void**>(1);
            v28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffff90);
            eax109 = fun_804a94c(v28, 1, 100, v25, v107, v106, v105, v104);
            if (eax109 != 100) 
                goto addr_804ed64_37;
            eax110 = g805b3e4;
            v104 = v13;
            v105 = v12;
            v106 = v11;
            v107 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffed7c);
            v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff67c);
            v26 = eax109;
            v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffff90);
            v28 = eax110;
            eax111 = fun_804aa2c(v28, v27, v26, v25, v107, v106, v105, v104);
        } while (eax111 != -1);
        goto addr_804edc4_39;
    } else {
        eax50 = reinterpret_cast<void**>(0xffffffff);
        goto addr_804ee55_13;
    }
    if (*reinterpret_cast<void***>(v11 + 12) || v16) {
        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v11 + 32)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(v11 + 32) == 0))) {
            *reinterpret_cast<int32_t*>(v11 + 28) = -1;
        }
        eax50 = reinterpret_cast<void**>(0);
    } else {
        eax112 = silent;
        if (reinterpret_cast<signed char>(eax112) <= reinterpret_cast<signed char>(9)) {
            error_printf("fail to sync...\n", v27, v26, v25, v107, "fail to sync...\n", v27, v26, v25, v107);
        }
        v25 = v13;
        v26 = v12;
        v27 = v11;
        v28 = v10;
        eax50 = lame_decode_initfile(v28, v27, v26, v25, v107, v106, v105, v104);
    }
    addr_804ee55_13:
    edx113 = v15 ^ g14;
    if (edx113) {
        eax50 = fun_804a70c(v28, v27, v26, v25, v107, v106, v105, v104, v13);
    }
    return eax50;
    addr_804ed64_37:
    eax50 = reinterpret_cast<void**>(0xffffffff);
    goto addr_804ee55_13;
    addr_804edc4_39:
    eax50 = reinterpret_cast<void**>(0xffffffff);
    goto addr_804ee55_13;
    addr_804ec88_28:
    eax50 = reinterpret_cast<void**>(0xffffffff);
    goto addr_804ee55_13;
    addr_804ec0a_20:
    eax50 = reinterpret_cast<void**>(0xffffffff);
    goto addr_804ee55_13;
    addr_804ea82_11:
    eax50 = reinterpret_cast<void**>(0xffffffff);
    goto addr_804ee55_13;
}

int32_t stat64(void** a1, void* a2);

void** lame_get_file_size(void** a1, void** a2, void** a3, void** a4) {
    int32_t eax5;
    void** eax6;
    void** v7;

    eax5 = stat64(a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x68);
    if (eax5) {
        eax6 = reinterpret_cast<void**>(0xffffffff);
    } else {
        eax6 = v7;
    }
    return eax6;
}

int32_t hip_decode_exit = 0x804a8d2;

void fun_804a8cc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto hip_decode_exit;
}

int32_t hip_decode_init = 0x804a772;

void** fun_804a76c(void** a1, void** a2, void** a3) {
    goto hip_decode_init;
}

int32_t fread = 0x804a952;

void** fun_804a94c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto fread;
}

void** fun_804a3ac(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** lame_decode_fromfile(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    uint32_t eax10;
    uint32_t v11;
    void** eax12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    void** v20;
    void** v21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** v25;
    void** eax26;
    void** eax27;
    void** eax28;
    void** eax29;
    uint32_t edx30;
    void** v31;
    void** v32;
    void** eax33;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v6 = a1;
    v7 = a2;
    v8 = a3;
    v9 = a4;
    eax10 = g14;
    v11 = eax10;
    eax12 = g805b3e4;
    v13 = v9;
    v14 = v8;
    v15 = v7;
    v16 = reinterpret_cast<void**>(0);
    v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffbf4);
    v18 = eax12;
    eax19 = fun_804a3ac(v18, v17, 0, v15, v14, v13);
    if (!eax19) {
        while (eax22 = fun_804a94c(reinterpret_cast<int32_t>(ebp5) + 0xfffffbf4, 1, 0x400, v6, v14, v13, v20, v21), !!eax22) {
            eax23 = g805b3e4;
            v13 = v9;
            v14 = v8;
            v15 = v7;
            v16 = eax22;
            v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffbf4);
            v18 = eax23;
            eax24 = fun_804a3ac(v18, v17, v16, v15, v14, v13);
            v25 = eax24;
            if (reinterpret_cast<int1_t>(v25 == 0xffffffff)) 
                goto addr_804f006_4;
            if (reinterpret_cast<signed char>(v25) > reinterpret_cast<signed char>(0)) 
                goto addr_804f031_6;
        }
    } else {
        eax26 = eax19;
        goto addr_804f03a_9;
    }
    eax27 = g805b3e4;
    v13 = v9;
    v14 = v8;
    v15 = v7;
    v16 = eax22;
    v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffbf4);
    v18 = eax27;
    eax28 = fun_804a3ac(v18, v17, v16, v15, v14, v13);
    v25 = eax28;
    if (reinterpret_cast<signed char>(v25) <= reinterpret_cast<signed char>(0)) {
        eax29 = g805b3e4;
        v18 = eax29;
        fun_804a8cc(v18, v17, v16, v15, v14, v13);
        g805b3e4 = reinterpret_cast<void**>(0);
        eax26 = reinterpret_cast<void**>(0xffffffff);
        goto addr_804f03a_9;
    }
    addr_804f034_13:
    eax26 = v25;
    addr_804f03a_9:
    edx30 = v11 ^ g14;
    if (edx30) {
        eax26 = fun_804a70c(v18, v17, v16, v15, v14, v13, v31, v32, v9);
    }
    return eax26;
    addr_804f006_4:
    eax33 = g805b3e4;
    v18 = eax33;
    fun_804a8cc(v18, v17, v16, v15, v14, v13);
    g805b3e4 = reinterpret_cast<void**>(0);
    eax26 = reinterpret_cast<void**>(0xffffffff);
    goto addr_804f03a_9;
    addr_804f031_6:
    goto addr_804f034_13;
}

int32_t hip_decode1_headers = 0x804a3b2;

void** fun_804a3ac(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto hip_decode1_headers;
}

int32_t fprintf = 0x804a662;

void fun_804a65c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto fprintf;
}

int32_t getchar = 0x804a142;

void fun_804a13c(void** a1) {
    goto getchar;
}

int32_t fputc = 0x804a742;

void fun_804a73c(int32_t a1, void** a2, void** a3, void** a4, void** a5) {
    goto fputc;
}

void** fun_804a1cc();

void** fun_804a08c();

void** fun_804a29c();

int32_t lame_version_print(void** a1, void** a2) {
    void** eax3;
    void** eax4;
    void** eax5;
    void** v6;
    void** v7;
    void** v8;
    struct s1* eax9;
    void** v10;
    void** v11;
    void** v12;
    struct s1* eax13;
    void** v14;
    void** v15;
    void** v16;
    struct s1* eax17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;

    eax3 = fun_804a1cc();
    eax4 = fun_804a08c();
    eax5 = fun_804a29c();
    eax9 = fun_804a4ac(eax3, v6, v7, v8);
    eax13 = fun_804a4ac(eax4, v10, v11, v12);
    eax17 = fun_804a4ac(eax5, v14, v15, v16);
    if (reinterpret_cast<uint32_t>(eax9) + reinterpret_cast<uint32_t>(eax13) + reinterpret_cast<uint32_t>(eax17) + 16 <= 80 || reinterpret_cast<uint32_t>(eax17 + 1) > 80) {
        if (!eax9) {
            fun_804a65c(a1, "LAME version %s (%s)\n\n", eax4, eax5, v18, v19, v20);
        } else {
            fun_804a65c(a1, "LAME %s version %s (%s)\n\n", eax3, eax4, eax5, v21, v22);
        }
    } else {
        if (!eax9) {
            fun_804a65c(a1, "LAME version %s\n%*s(%s)\n\n", eax4, 80 - reinterpret_cast<uint32_t>(eax17) + 0xfffffffe, 0x8055592, eax5, v23);
        } else {
            fun_804a65c(a1, "LAME %s version %s\n%*s(%s)\n\n", eax3, eax4, 80 - reinterpret_cast<uint32_t>(eax17) + 0xfffffffe, 0x8055592, eax5);
        }
    }
    return 0;
}

void** presets_longinfo_dm(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;

    fun_804a64c("\nThe --preset switches are aliases over LAME settings.\n\n\n", 1, 57, a1, v3, v4);
    fun_804a64c("To activate these presets:\n\n   For VBR modes (generally highest quality):\n\n", 1, 75, a1, v5, v6);
    fun_804a64c("     \"--preset medium\" This preset should provide near transparency\n                             to most people on most music.\n\n     \"--preset standard\" This preset should generally be transparent\n                             to most people on most music and is already\n                             quite high in quality.\n\n", 1, 0x143, a1, v7, v8);
    fun_804a64c("     \"--preset extreme\" If you have extremely good hearing and similar\n                             equipment, this preset will generally provide\n                             slightly higher quality than the \"standard\"\n                             mode.\n\n", 1, 0xff, a1, v9, v10);
    fun_804a64c("   For CBR 320kbps (highest quality possible from the --preset switches):\n\n     \"--preset insane\"  This preset will usually be overkill for most\n                             people and most situations, but if you must\n                             have the absolute highest quality with no\n                             regard to filesize, this is the way to go.\n\n", 1, 0x16a, a1, v11, v12);
    fun_804a64c("   For ABR modes (high quality per given bitrate but not as high as VBR):\n\n     \"--preset <kbps>\"  Using this preset will usually give you good\n                             quality at a specified bitrate. Depending on the\n                             bitrate entered, this preset will determine the\n", 1, 0x12b, a1, v13, v14);
    fun_804a64c("                             optimal settings for that particular situation.\n                             While this approach works, it is not nearly as\n                             flexible as VBR, and usually will not attain the\n                             same level of quality as VBR at higher bitrates.\n\n", 1, 0x136, a1, v15, v16);
    fun_804a64c("The following options are also available for the corresponding profiles:\n\n   <fast>        standard\n   <fast>        extreme\n                 insane\n   <cbr> (ABR Mode) - The ABR Mode is implied. To use it,\n                      simply specify a bitrate. For example:\n                      \"--preset 185\" activates this\n                      preset and uses 185 as an average kbps.\n\n", 1, 0x17f, a1, v17, v18);
    fun_804a64c("   \"fast\" - Enables the fast VBR mode for a particular profile.\n\n", 1, 65, a1, v19, v20);
    fun_804a64c("   \"cbr\"  - If you use the ABR mode (read above) with a significant\n            bitrate such as 80, 96, 112, 128, 160, 192, 224, 256, 320,\n            you can use the \"cbr\" option to force CBR mode encoding\n            instead of the standard abr mode. ABR does provide higher\n            quality but CBR may be useful in situations such as when\n            streaming an mp3 over the internet may be important.\n\n", 1, 0x19c, a1, v21, v22);
    fun_804a64c("    For example:\n\n    \"--preset fast standard <input file> <output file>\"\n or \"--preset cbr 192 <input file> <output file>\"\n or \"--preset 172 <input file> <output file>\"\n or \"--preset extreme <input file> <output file>\"\n\n\n", 1, 0xde, a1, v23, v24);
    eax27 = fun_804a64c("A few aliases are also available for ABR mode:\nphone => 16kbps/mono        phon+/lw/mw-eu/sw => 24kbps/mono\nmw-us => 40kbps/mono        voice => 56kbps/mono\nfm/radio/tape => 112kbps    hifi => 160kbps\ncd => 192kbps               studio => 256kbps\n", 1, 0xf7, a1, v25, v26);
    return eax27;
}

int32_t lame_set_VBR_q = 0x804a972;

void fun_804a96c(void** a1, int32_t a2) {
    goto lame_set_VBR_q;
}

int32_t lame_set_VBR = 0x804a4c2;

void fun_804a4bc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_VBR;
}

int32_t lame_set_preset = 0x804a892;

void fun_804a88c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_preset;
}

int32_t atoi = 0x804a5d2;

void** fun_804a5cc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto atoi;
}

int32_t lame_set_mode = 0x804a8c2;

void fun_804a8bc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_mode;
}

unsigned char fun_804aa3c(int32_t a1);

uint32_t local_strcasecmp(void** a1, void** a2, void** a3, void** a4, void** a5) {
    uint32_t eax6;
    unsigned char al7;
    uint32_t eax8;
    unsigned char al9;
    uint32_t eax10;

    do {
        eax6 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1));
        al7 = fun_804aa3c(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax6)));
        eax8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2));
        al9 = fun_804aa3c(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax8)));
        if (!al7) 
            break;
        ++a1;
        ++a2;
        eax10 = al7;
    } while (*reinterpret_cast<unsigned char*>(&eax10) == al9);
    goto addr_8050145_4;
    addr_8050148_6:
    return al7 - al9;
    addr_8050145_4:
    goto addr_8050148_6;
}

int32_t atof = 0x804a612;

void fun_804a60c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto atof;
}

void** resample_rate(void** a1, void** a2, void** a3, void** a4, void** a5) {
    int32_t v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    void** eax15;

    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [0x8059828]");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    if (reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) >= 40) {
        __asm__("fld qword [ebp-0x10]");
        __asm__("fld qword [0x8059830]");
        __asm__("fmulp st1, st0");
        __asm__("fstp qword [ebp-0x10]");
    }
    __asm__("fld qword [ebp-0x10]");
    __asm__("fnstcw word [ebp-0x12]");
    __asm__("fldcw word [ebp-0x14]");
    __asm__("fistp dword [ebp-0x18]");
    __asm__("fldcw word [ebp-0x12]");
    switch (v6 - 8) {
    default:
        __asm__("fld qword [ebp-0x10]");
        __asm__("fstp qword [esp+0x4]");
        error_printf("Illegal resample frequency: %.3f kHz\n", v7, v8, v9, v10, "Illegal resample frequency: %.3f kHz\n", v11, v12, v13, v14);
        eax15 = reinterpret_cast<void**>(0);
        break;
    case 0:
        eax15 = reinterpret_cast<void**>(0x1f40);
        break;
    case 3:
        eax15 = reinterpret_cast<void**>(0x2b11);
        break;
    case 4:
        eax15 = reinterpret_cast<void**>(0x2ee0);
        break;
    case 8:
        eax15 = reinterpret_cast<void**>(0x3e80);
        break;
    case 14:
        eax15 = reinterpret_cast<void**>(0x5622);
        break;
    case 16:
        eax15 = reinterpret_cast<void**>(0x5dc0);
        break;
    case 24:
        eax15 = reinterpret_cast<void**>(0x7d00);
        break;
    case 36:
        eax15 = reinterpret_cast<void**>(0xac44);
        break;
    case 40:
        eax15 = reinterpret_cast<void**>(0xbb80);
    }
    return eax15;
}

int32_t lame_set_out_samplerate = 0x804a572;

void fun_804a56c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_out_samplerate;
}

int32_t lame_set_VBR_mean_bitrate_kbps = 0x804a672;

void fun_804a66c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_VBR_mean_bitrate_kbps;
}

int32_t lame_get_VBR_mean_bitrate_kbps = 0x804aac2;

void** fun_804aabc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_get_VBR_mean_bitrate_kbps;
}

int32_t presets_set(void** a1, void** a2, void** a3, void** a4, void** a5) {
    int32_t v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    int32_t eax12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    int32_t eax18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    int32_t eax24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    int32_t eax30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    int32_t eax36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    int32_t eax42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    int32_t eax48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    int32_t eax54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    int32_t eax60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    int32_t eax66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    int32_t eax72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    int32_t eax78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    int32_t eax84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    int32_t eax90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    int32_t eax96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    int32_t eax102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    int32_t eax108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    int32_t eax114;
    void** v115;
    void** v116;
    void** v117;
    void** eax118;
    void** eax119;
    void** v120;
    void** v121;
    void** v122;
    int32_t eax123;
    void** v124;
    void** v125;
    void** v126;
    void** eax127;
    void** v128;
    void** v129;
    void** v130;
    void** eax131;
    void** eax132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** eax139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** eax170;
    void** eax171;

    v6 = 0;
    eax12 = fun_804aa6c(a4, "help", v7, v8, v9, v10, v11);
    if (eax12 || (reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(a3) > reinterpret_cast<signed char>(0))) {
        eax18 = fun_804aa6c(a4, "phone", v13, v14, v15, v16, v17);
        if (!eax18) {
            a4 = reinterpret_cast<void**>("16");
            v6 = 1;
        }
        eax24 = fun_804aa6c(a4, "phon+", v19, v20, v21, v22, v23);
        if (!eax24 || ((eax30 = fun_804aa6c(a4, "lw", v25, v26, v27, v28, v29), eax30 == 0) || ((eax36 = fun_804aa6c(a4, "mw-eu", v31, v32, v33, v34, v35), eax36 == 0) || (eax42 = fun_804aa6c(a4, "sw", v37, v38, v39, v40, v41), !eax42)))) {
            a4 = reinterpret_cast<void**>("24");
            v6 = 1;
        }
        eax48 = fun_804aa6c(a4, "mw-us", v43, v44, v45, v46, v47);
        if (!eax48) {
            a4 = reinterpret_cast<void**>("40");
            v6 = 1;
        }
        eax54 = fun_804aa6c(a4, "voice", v49, v50, v51, v52, v53);
        if (!eax54) {
            a4 = reinterpret_cast<void**>("56");
            v6 = 1;
        }
        eax60 = fun_804aa6c(a4, "fm", v55, v56, v57, v58, v59);
        if (!eax60) {
            a4 = reinterpret_cast<void**>("112");
        }
        eax66 = fun_804aa6c(a4, "radio", v61, v62, v63, v64, v65);
        if (!eax66 || (eax72 = fun_804aa6c(a4, "tape", v67, v68, v69, v70, v71), !eax72)) {
            a4 = reinterpret_cast<void**>("112");
        }
        eax78 = fun_804aa6c(a4, "hifi", v73, v74, v75, v76, v77);
        if (!eax78) {
            a4 = reinterpret_cast<void**>("160");
        }
        eax84 = fun_804aa6c(a4, "cd", v79, v80, v81, v82, v83);
        if (!eax84) {
            a4 = reinterpret_cast<void**>("192");
        }
        eax90 = fun_804aa6c(a4, "studio", v85, v86, v87, v88, v89);
        if (!eax90) {
            a4 = reinterpret_cast<void**>("256");
        }
        eax96 = fun_804aa6c(a4, "medium", v91, v92, v93, v94, v95);
        if (eax96) {
            eax102 = fun_804aa6c(a4, "standard", v97, v98, v99, v100, v101);
            if (eax102) {
                eax108 = fun_804aa6c(a4, "extreme", v103, v104, v105, v106, v107);
                if (eax108) {
                    eax114 = fun_804aa6c(a4, "insane", v109, v110, v111, v112, v113);
                    if (eax114 || reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(0)) {
                        eax118 = fun_804a5cc(a4, "insane", v115, v116, v117);
                        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax118) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax118 == 0) || reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(0)) {
                            eax119 = g805bcec;
                            lame_version_print(eax119, "insane");
                            error_printf("Error: You did not enter a valid profile and/or options with --preset\n\nAvailable profiles are:\n\n   <fast>        medium\n   <fast>        standard\n   <fast>        extreme\n                 insane\n          <cbr> (ABR Mode) - The ABR Mode is implied. To use it,\n                             simply specify a bitrate. For example:\n                             \"--preset 185\" activates this\n                             preset and uses 185 as an average kbps.\n\n", "insane", v120, v121, v122);
                            error_printf("    Some examples:\n\n or \"%s --preset fast standard <input file> <output file>\"\n or \"%s --preset cbr 192 <input file> <output file>\"\n or \"%s --preset 172 <input file> <output file>\"\n or \"%s --preset extreme <input file> <output file>\"\n\nFor further information try: \"%s --preset help\"\n", a5, a5, a5, a5, "    Some examples:\n\n or \"%s --preset fast standard <input file> <output file>\"\n or \"%s --preset cbr 192 <input file> <output file>\"\n or \"%s --preset 172 <input file> <output file>\"\n or \"%s --preset extreme <input file> <output file>\"\n\nFor further information try: \"%s --preset help\"\n", a5, a5, a5, a5);
                            eax123 = -1;
                        } else {
                            eax127 = fun_804a5cc(a4, "insane", v124, v125, v126);
                            if (reinterpret_cast<signed char>(eax127) <= reinterpret_cast<signed char>(7) || (eax131 = fun_804a5cc(a4, "insane", v128, v129, v130), reinterpret_cast<signed char>(eax131) > reinterpret_cast<signed char>(0x140))) {
                                eax132 = g805bcec;
                                lame_version_print(eax132, "insane");
                                error_printf("Error: The bitrate specified is out of the valid range for this preset\n\nWhen using this mode you must enter a value between \"32\" and \"320\"\n\nFor further information try: \"%s --preset help\"\n", a5, v133, v134, v135);
                                eax123 = -1;
                            } else {
                                eax139 = fun_804a5cc(a4, "insane", v136, v137, v138);
                                fun_804a88c(a1, eax139, v140, v141, v142);
                                if (reinterpret_cast<int1_t>(a3 == 1)) {
                                    fun_804a4bc(a1, 0, v143, v144, v145);
                                }
                                if (v6 == 1) {
                                    fun_804a8bc(a1, 3, v146, v147, v148);
                                }
                                eax123 = 0;
                            }
                        }
                    } else {
                        fun_804a88c(a1, 0x3eb, v149, v150, v151);
                        eax123 = 0;
                    }
                } else {
                    fun_804a96c(a1, 0);
                    if (reinterpret_cast<signed char>(a2) <= reinterpret_cast<signed char>(0)) {
                        fun_804a4bc(a1, 2, v152, v153, v154);
                    } else {
                        fun_804a4bc(a1, 4, v155, v156, v157);
                    }
                    eax123 = 0;
                }
            } else {
                fun_804a96c(a1, 2);
                if (reinterpret_cast<signed char>(a2) <= reinterpret_cast<signed char>(0)) {
                    fun_804a4bc(a1, 2, v158, v159, v160);
                } else {
                    fun_804a4bc(a1, 4, v161, v162, v163);
                }
                eax123 = 0;
            }
        } else {
            fun_804a96c(a1, 4);
            if (reinterpret_cast<signed char>(a2) <= reinterpret_cast<signed char>(0)) {
                fun_804a4bc(a1, 2, v164, v165, v166);
            } else {
                fun_804a4bc(a1, 4, v167, v168, v169);
            }
            eax123 = 0;
        }
    } else {
        eax170 = stdout;
        lame_version_print(eax170, "help");
        eax171 = stdout;
        presets_longinfo_dm(eax171, "help");
        eax123 = -1;
    }
    return eax123;
}

int32_t lame_set_decode_only = 0x804a152;

void fun_804a14c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_decode_only;
}

int32_t lame_set_disable_reservoir = 0x804a3a2;

void fun_804a39c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_disable_reservoir;
}

int32_t lame_set_strict_ISO = 0x804a332;

void fun_804a32c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_strict_ISO;
}

int32_t lame_set_scale = 0x804aa12;

void fun_804aa0c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_scale;
}

int32_t lame_set_scale_left = 0x804a9b2;

void fun_804a9ac(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_scale_left;
}

int32_t lame_set_scale_right = 0x804a132;

void fun_804a12c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_scale_right;
}

int32_t lame_set_asm_optimizations = 0x804a582;

void fun_804a57c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_asm_optimizations;
}

int32_t lame_set_free_format = 0x804a432;

void fun_804a42c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_free_format;
}

int32_t lame_set_findReplayGain = 0x804a5f2;

void fun_804a5ec(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_findReplayGain;
}

int32_t lame_set_decode_on_the_fly = 0x804a2e2;

void fun_804a2dc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_decode_on_the_fly;
}

void** fun_804a9ec(void** a1);

void** set_id3tag(void** a1, void** a2, void** a3);

void** id3_tag(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    void** eax7;
    void** v8;
    void** v9;
    void** v10;

    eax6 = fun_804a9ec(a4);
    eax7 = set_id3tag(a1, a2, eax6);
    fun_804a37c(eax6, a2, eax6, v8, v9, v10, eax7);
    return eax7;
}

void** fun_804a6ec(void** a1, void** a2, void** a3);

int32_t fun_804a0ec(void** a1, void** a2, void** a3, void** a4);

int32_t set_id3_albumart(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** eax7;
    void** v8;
    void** v9;
    int32_t v10;
    int32_t v11;
    void** eax12;
    void** v13;
    void** v14;
    void** v15;
    int32_t v16;
    void** eax17;
    void** v18;
    void** eax19;
    int32_t eax20;
    int32_t eax21;
    int32_t v22;
    int32_t eax23;

    if (a2) {
        v6 = reinterpret_cast<void**>("rb");
        eax7 = fun_804a26c(a2, "rb");
        if (eax7) {
            fun_804a40c(eax7, 0, 2, v8, v9, 0, eax7, eax7, 0, 2, v10, v11, 0, eax7);
            eax12 = fun_804a55c(eax7, 0, 2);
            v13 = eax12;
            v14 = reinterpret_cast<void**>(0);
            v6 = reinterpret_cast<void**>(0);
            fun_804a40c(eax7, 0, 0, v15, v13, 0, eax7, eax7, 0, 0, v16, v13, 0, eax7);
            eax17 = fun_804a6ec(v13, 0, 0);
            if (eax17) {
                v18 = eax7;
                v14 = v13;
                v6 = reinterpret_cast<void**>(1);
                eax19 = fun_804a94c(eax17, 1, v14, v18, v13, eax17, eax7, 0xffffffff);
                if (eax19 == v13) {
                    v14 = v13;
                    v6 = eax17;
                    eax20 = fun_804a0ec(a1, v6, v14, v18);
                    if (!eax20) {
                        eax21 = 0;
                    } else {
                        eax21 = 4;
                    }
                    v22 = eax21;
                } else {
                    v22 = 3;
                }
                fun_804a37c(eax17, v6, v14, v18, v13, eax17, eax7);
            } else {
                v22 = 2;
            }
            fun_804a43c(eax7, v6, v14, v18, v13, eax17, eax7);
        } else {
            v22 = 1;
        }
        if (v22 == 2) {
            error_printf("Insufficient memory for reading the albumart.\n", v6, v14, v18, v13, "Insufficient memory for reading the albumart.\n", v6, v14, v18, v13);
        } else {
            if (v22 > 2) {
                if (v22 == 3) {
                    error_printf("Read error: '%s'.\n", a2, v14, v18, v13, "Read error: '%s'.\n", a2, v14, v18, v13);
                } else {
                    if (v22 == 4) {
                        error_printf("Unsupported image: '%s'.\nSpecify JPEG/PNG/GIF image (128KB maximum)\n", a2, v14, v18, v13, "Unsupported image: '%s'.\nSpecify JPEG/PNG/GIF image (128KB maximum)\n", a2, v14, v18, v13);
                    }
                }
            } else {
                if (v22 == 1) {
                    error_printf("Could not find: '%s'.\n", a2, v14, v18, v13, "Could not find: '%s'.\n", a2, v14, v18, v13);
                }
            }
        }
        eax23 = v22;
    } else {
        eax23 = 0;
    }
    return eax23;
}

int32_t id3tag_add_v2 = 0x804a7c2;

void fun_804a7bc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto id3tag_add_v2;
}

int32_t id3tag_v1_only = 0x804a0d2;

void fun_804a0cc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto id3tag_v1_only;
}

int32_t id3tag_v2_only = 0x804a0e2;

void fun_804a0dc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto id3tag_v2_only;
}

int32_t id3tag_space_v1 = 0x804aa92;

void fun_804aa8c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto id3tag_space_v1;
}

int32_t id3tag_pad_v2 = 0x804a792;

void fun_804a78c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto id3tag_pad_v2;
}

int32_t id3tag_set_pad = 0x804a722;

void fun_804a71c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto id3tag_set_pad;
}

int32_t id3tag_genre_list = 0x804a812;

void fun_804a80c(int32_t a1, int32_t a2, void** a3, void** a4, void** a5) {
    goto id3tag_genre_list;
}

int32_t lame_set_lowpassfreq = 0x804a9a2;

void fun_804a99c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_lowpassfreq;
}

int32_t lame_set_highpassfreq = 0x804a642;

void fun_804a63c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_highpassfreq;
}

int32_t lame_set_useTemporal = 0x804a342;

void fun_804a33c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_useTemporal;
}

int32_t lame_set_interChRatio = 0x804a862;

void fun_804a85c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_interChRatio;
}

int32_t lame_get_exp_nspsytune = 0x804a822;

uint32_t fun_804a81c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_get_exp_nspsytune;
}

int32_t lame_set_exp_nspsytune = 0x804a472;

void fun_804a46c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_exp_nspsytune;
}

int32_t lame_set_msfix = 0x804a512;

void fun_804a50c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_msfix;
}

int32_t print_license(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;

    lame_version_print(a1, v6);
    fun_804a64c("Can I use LAME in my commercial program?\n\nYes, you can, under the restrictions of the LGPL.  In particular, you\ncan include a compiled version of the LAME library (for example,\nlame.dll) with a commercial program.  Some notable requirements of\nthe LGPL:\n\n", 1, 0xff, a1, v7, v8);
    fun_804a64c("1. In your program, you cannot include any source code from LAME, with\n   the exception of files whose only purpose is to describe the library\n   interface (such as lame.h).\n\n", 1, 0xaf, a1, v9, v10);
    fun_804a64c("2. Any modifications of LAME must be released under the LGPL.\n   The LAME project (www.mp3dev.org) would appreciate being\n   notified of any modifications.\n\n", 1, 0x9d, a1, v11, v12);
    fun_804a64c("3. You must give prominent notice that your program is:\n      A. using LAME (including version number)\n      B. LAME is under the LGPL\n      C. Provide a copy of the LGPL.  (the file COPYING contains the LGPL)\n      D. Provide a copy of LAME source, or a pointer where the LAME\n         source can be obtained (such as www.mp3dev.org)\n   An example of prominent notice would be an \"About the LAME encoding engine\"\n   button in some pull down menu within the executable of your program.\n\n", 1, 0x1e7, a1, v13, v14);
    fun_804a64c("4. If you determine that distribution of LAME requires a patent license,\n   you must obtain such license.\n\n\n", 1, 0x6c, a1, v15, v16);
    fun_804a64c("*** IMPORTANT NOTE ***\n\nThe decoding functions provided in LAME use the mpglib decoding engine which\nis under the GPL.  They may not be used by any program not released under the\nGPL unless you obtain such permission from the MPG123 project (www.mpg123.de).\n\n", 1, 0x103, a1, v17, v18);
    return 0;
}

void** fun_804aa9c(void** a1, void** a2, void** a3, void** a4);

int32_t short_help(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** ebp10;
    void** v11;
    void** eax12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;

    lame_version_print(a2, v6);
    fun_804a65c(a2, "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be \"-\", which means stdin/stdout.\n\nRECOMMENDED:\n    lame -V2 input.wav output.mp3\n\n", a3, v7, v8, v9, ebp10);
    eax12 = fun_804aa9c(a1, "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be \"-\", which means stdin/stdout.\n\nRECOMMENDED:\n    lame -V2 input.wav output.mp3\n\n", a3, v11);
    fun_804a65c(a2, "OPTIONS:\n    -b bitrate      set the bitrate, default 128 kbps\n    -h              higher quality, but a little slower.  Recommended.\n    -f              fast mode (lower quality)\n    -V n            quality setting for VBR.  default n=%i\n                    0=high quality,bigger files. 9=smaller files\n", eax12, v13, v14, v15, ebp10);
    fun_804a64c("    --preset type   type must be \"medium\", \"standard\", \"extreme\", \"insane\",\n                    or a value for an average desired bitrate and depending\n                    on the value specified, appropriate quality settings will\n                    be used.\n                    \"--preset help\" gives more info on these\n\n", 1, 0x141, a2, v16, v17);
    fun_804a64c("    --longhelp      full list of options\n\n    --license       print License information\n\n", 1, 89, a2, v18, v19);
    return 0;
}

void wait_for(void** a1, void** a2, void** a3, void** a4);

int32_t long_help(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** ebp10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;

    lame_version_print(a2, v6);
    fun_804a65c(a2, "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be \"-\", which means stdin/stdout.\n\nRECOMMENDED:\n    lame -V2 input.wav output.mp3\n\n", a3, v7, v8, v9, ebp10);
    fun_804a64c("OPTIONS:\n  Input options:\n    --scale <arg>   scale input (multiply PCM data) by <arg>\n    --scale-l <arg> scale channel 0 (left) input (multiply PCM data) by <arg>\n    --scale-r <arg> scale channel 1 (right) input (multiply PCM data) by <arg>\n    --mp1input      input file is a MPEG Layer I   file\n    --mp2input      input file is a MPEG Layer II  file\n    --mp3input      input file is a MPEG Layer III file\n    --nogap <file1> <file2> <...>\n                    gapless encoding for a set of contiguous files\n    --nogapout <dir>\n                    output dir for gapless encoding (must precede --nogap)\n    --nogaptags     allow the use of VBR tags in gapless encoding\n", 1, 0x2a3, a2, v11, v12);
    fun_804a64c("\n  Input options for RAW PCM:\n    -r              input is raw pcm\n    -x              force byte-swapping of input\n    -s sfreq        sampling frequency of input file (kHz) - default 44.1 kHz\n    --bitwidth w    input bit width is w (default 16)\n    --signed        input is signed (default)\n    --unsigned      input is unsigned\n    --little-endian input is little-endian (default)\n    --big-endian    input is big-endian\n", 1, 0x1a9, a2, v13, v14);
    wait_for(a2, a4, 0x1a9, a2);
    fun_804a64c("  Operational options:\n    -a              downmix from stereo to mono file for mono encoding\n    -m <mode>       (j)oint, (s)imple, (f)orce, (d)dual-mono, (m)ono\n                    default is (j) or (s) depending on bitrate\n                    joint  = joins the best possible of MS and LR stereo\n                    simple = force LR stereo on all frames\n                    force  = force MS stereo on all frames.\n    --preset type   type must be \"medium\", \"standard\", \"extreme\", \"insane\",\n                    or a value for an average desired bitrate and depending\n                    on the value specified, appropriate quality settings will\n                    be used.\n                    \"--preset help\" gives more info on these\n    --comp  <arg>   choose bitrate to achive a compression ratio of <arg>\n", 1, 0x32c, a2, v15, v16);
    fun_804a64c("    --replaygain-fast   compute RG fast but slightly inaccurately (default)\n    --replaygain-accurate   compute RG more accurately and find the peak sample\n    --noreplaygain  disable ReplayGain analysis\n    --clipdetect    enable --replaygain-accurate and print a message whether\n                    clipping occurs and how far the waveform is from full scale\n", 1, 0x169, a2, v17, v18);
    fun_804a64c("    --flush         flush output stream as soon as possible\n    --freeformat    produce a free format bitstream\n    --decode        input=mp3 file, output=wav\n    -t              disable writing wav header when using --decode\n", 1, 0xe2, a2, v19, v20);
    wait_for(a2, a4, 0xe2, a2);
    fun_804a64c("  Verbosity:\n    --disptime <arg>print progress report every arg seconds\n    -S              don't print progress report, VBR histograms\n    --nohist        disable VBR histogram display\n    --silent        don't print anything on screen\n    --quiet         don't print anything on screen\n    --brief         print more useful information\n    --verbose       print a lot of useful information\n\n", 1, 0x18a, a2, v21, v22);
    fun_804a64c("  Noise shaping & psycho acoustic algorithms:\n    -q <arg>        <arg> = 0...9.  Default  -q 5 \n                    -q 0:  Highest quality, very slow \n                    -q 9:  Poor quality, but fast \n    -h              Same as -q 2.   Recommended.\n    -f              Same as -q 7.   Fast, ok quality\n", 1, 0x131, a2, v23, v24);
    wait_for(a2, a4, 0x131, a2);
    fun_804a64c("  CBR (constant bitrate, the default) options:\n    -b <bitrate>    set the bitrate in kbps, default 128 kbps\n    --cbr           enforce use of constant bitrate\n\n  ABR options:\n    --abr <bitrate> specify average bitrate desired (instead of quality)\n\n", 1, 0xfb, a2, v25, v26);
    eax27 = fun_804aa9c(a1, 1, 0xfb, a2);
    fun_804a65c(a2, "  VBR options:\n    -V n            quality setting for VBR.  default n=%i\n                    0=high quality,bigger files. 9=smaller files\n    -v              the same as -V 4\n    --vbr-old       use old variable bitrate (VBR) routine\n    --vbr-new       use new variable bitrate (VBR) routine (default)\n", eax27, a2, v28, v29, ebp10);
    fun_804a64c("    -b <bitrate>    specify minimum allowed bitrate, default  32 kbps\n    -B <bitrate>    specify maximum allowed bitrate, default 320 kbps\n    -F              strictly enforce the -b option, for use with players that\n                    do not support low bitrate mp3\n    -t              disable writing LAME Tag\n    -T              enable and force writing LAME Tag\n", 1, 0x170, a2, v30, v31);
    wait_for(a2, a4, 0x170, a2);
    fun_804a64c("  PSY related:\n", 1, 15, a2, v32, v33);
    fun_804a64c("    --temporal-masking x   x=0 disables, x=1 enables temporal masking effect\n    --nssafejoint   M/S switching criterion\n    --nsmsfix <arg> M/S switching tuning [effective 0-3.5]\n    --interch x     adjust inter-channel masking ratio\n    --ns-bass x     adjust masking for sfbs  0 -  6 (long)  0 -  5 (short)\n    --ns-alto x     adjust masking for sfbs  7 - 13 (long)  6 - 10 (short)\n    --ns-treble x   adjust masking for sfbs 14 - 21 (long) 11 - 12 (short)\n", 1, 0x1cc, a2, v34, v35);
    fun_804a64c("    --ns-sfb21 x    change ns-treble by x dB for sfb21\n", 1, 55, a2, v36, v37);
    wait_for(a2, a4, 55, a2);
    fun_804a64c("  experimental switches:\n    -Y              lets LAME ignore noise in sfb21, like in CBR\n", 1, 90, a2, v38, v39);
    wait_for(a2, a4, 90, a2);
    fun_804a64c("  MP3 header/stream options:\n    -e <emp>        de-emphasis n/5/c  (obsolete)\n    -c              mark as copyright\n    -o              mark as non-original\n    -p              error protection.  adds 16 bit checksum to every frame\n                    (the checksum is computed correctly)\n    --nores         disable the bit reservoir\n    --strictly-enforce-ISO   comply as much as possible to ISO MPEG spec\n\n", 1, 0x19a, a2, v40, v41);
    fun_804a65c(a2, "  Filter options:\n  --lowpass <freq>        frequency(kHz), lowpass filter cutoff above freq\n  --lowpass-width <freq>  frequency(kHz) - default 15%% of lowpass freq\n  --highpass <freq>       frequency(kHz), highpass filter cutoff below freq\n  --highpass-width <freq> frequency(kHz) - default 15%% of highpass freq\n", 0x19a, a2, v42, v43, ebp10);
    fun_804a64c("  --resample <sfreq>  sampling frequency of output file(kHz)- default=automatic\n", 1, 80, a2, v44, v45);
    wait_for(a2, a4, 80, a2);
    fun_804a64c("  ID3 tag options:\n    --tt <title>    audio/song title (max 30 chars for version 1 tag)\n    --ta <artist>   audio/song artist (max 30 chars for version 1 tag)\n    --tl <album>    audio/song album (max 30 chars for version 1 tag)\n    --ty <year>     audio/song year of issue (1 to 9999)\n    --tc <comment>  user-defined text (max 30 chars for v1 tag, 28 for v1.1)\n    --tn <track[/total]>   audio/song track number and (optionally) the total\n                           number of tracks on the original recording. (track\n                           and total each 1 to 255. just the track number\n                           creates v1.1 tag, providing a total forces v2.0).\n    --tg <genre>    audio/song genre (name or number in list)\n    --ti <file>     audio/song albumArt (jpeg/png/gif file, 128KB max, v2.3)\n    --tv <id=value> user-defined frame specified by id and value (v2.3 tag)\n", 1, 0x376, a2, v46, v47);
    fun_804a64c("    --add-id3v2     force addition of version 2 tag\n    --id3v1-only    add only a version 1 tag\n    --id3v2-only    add only a version 2 tag\n    --space-id3v1   pad version 1 tag with spaces instead of nulls\n    --pad-id3v2     same as '--pad-id3v2-size 128'\n    --pad-id3v2-size <value> adds version 2 tag, pad with extra <value> bytes\n    --genre-list    print alphabetically sorted ID3 genre list and exit\n    --ignore-tag-errors  ignore errors in values passed for tags\n\n", 1, 0x1dc, a2, v48, v49);
    fun_804a64c("    Note: A version 2 tag will NOT be added unless one of the input fields\n    won't fit in a version 1 tag (e.g. the title string is longer than 30\n    characters), or the '--add-id3v2' or '--id3v2-only' options are used,\n    or output is redirected to stdout.\n\nMisc:\n    --license       print License information\n\n", 1, 0x13c, a2, v50, v51);
    wait_for(a2, a4, 0x13c, a2);
    fun_804a64c("  Platform specific:\n    --noasm <instructions> disable assembly optimizations for mmx/3dnow/sse\n", 1, 97, a2, v52, v53);
    wait_for(a2, a4, 97, a2);
    display_bitrates(a2, a4, 97, a2, v54, v55, ebp10);
    return 0;
}

int32_t popen = 0x804a0b2;

void** fun_804a0ac(int32_t a1, int32_t a2, void** a3, void** a4, void** a5) {
    goto popen;
}

int32_t pclose = 0x804aab2;

void fun_804aaac(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto pclose;
}

int32_t lame_set_athaa_sensitivity = 0x804a532;

void fun_804a52c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_athaa_sensitivity;
}

int32_t lame_set_VBR_quality = 0x804a392;

void fun_804a38c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_VBR_quality;
}

int32_t memcpy = 0x804a492;

void fun_804a48c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto memcpy;
}

int32_t lame_get_bWriteVbrTag = 0x804a4e2;

void** fun_804a4dc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_get_bWriteVbrTag;
}

int32_t lame_set_bWriteVbrTag = 0x804a7e2;

void fun_804a7dc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_bWriteVbrTag;
}

void** filename_to_type(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    struct s1* eax9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    uint32_t eax14;
    void** v15;
    void** v16;
    void** v17;
    uint32_t eax18;
    void** v19;
    void** v20;
    void** v21;
    uint32_t eax22;
    void** v23;
    void** v24;
    void** v25;
    uint32_t eax26;
    void** v27;
    void** v28;
    void** v29;
    uint32_t eax30;
    void** v31;
    void** v32;
    void** v33;
    uint32_t eax34;
    void** v35;
    void** v36;
    void** v37;
    uint32_t eax38;
    void** v39;
    void** v40;
    void** v41;
    uint32_t eax42;
    void** eax43;

    eax9 = fun_804a4ac(a1, v6, v7, v8);
    if (reinterpret_cast<uint32_t>(eax9) > 3) {
        v10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<uint32_t>(eax9 - 2));
        eax14 = local_strcasecmp(v10, ".mpg", v11, v12, v13);
        if (eax14) {
            eax18 = local_strcasecmp(v10, ".mp1", v15, v16, v17);
            if (eax18) {
                eax22 = local_strcasecmp(v10, ".mp2", v19, v20, v21);
                if (eax22) {
                    eax26 = local_strcasecmp(v10, ".mp3", v23, v24, v25);
                    if (eax26) {
                        eax30 = local_strcasecmp(v10, ".wav", v27, v28, v29);
                        if (eax30) {
                            eax34 = local_strcasecmp(v10, ".aif", v31, v32, v33);
                            if (eax34) {
                                eax38 = local_strcasecmp(v10, ".raw", v35, v36, v37);
                                if (eax38) {
                                    eax42 = local_strcasecmp(v10, ".ogg", v39, v40, v41);
                                    if (eax42) {
                                        eax43 = reinterpret_cast<void**>(0);
                                    } else {
                                        eax43 = reinterpret_cast<void**>(8);
                                    }
                                } else {
                                    eax43 = reinterpret_cast<void**>(1);
                                }
                            } else {
                                eax43 = reinterpret_cast<void**>(3);
                            }
                        } else {
                            eax43 = reinterpret_cast<void**>(2);
                        }
                    } else {
                        eax43 = reinterpret_cast<void**>(7);
                    }
                } else {
                    eax43 = reinterpret_cast<void**>(7);
                }
            } else {
                eax43 = reinterpret_cast<void**>(7);
            }
        } else {
            eax43 = reinterpret_cast<void**>(7);
        }
    } else {
        eax43 = reinterpret_cast<void**>(0);
    }
    return eax43;
}

int32_t lame_set_num_channels = 0x804a0c2;

int32_t fun_804a0bc(void** a1, void** a2, void** a3, void** a4, void** a5, ...) {
    goto lame_set_num_channels;
}

int32_t lame_get_brate = 0x804a9c2;

void** fun_804a9bc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_get_brate;
}

void fun_804a05c();

void ConvertFromIeeeExtended(void** a1, void** a2, void** a3) {
    uint32_t eax4;
    uint32_t eax5;
    uint32_t v6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t eax10;
    uint32_t eax11;
    uint32_t eax12;
    uint32_t eax13;
    uint32_t eax14;
    uint32_t eax15;

    eax4 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1));
    eax5 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 1));
    v6 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax5))) & 0xff | (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax4))) & 0x7f) << 8;
    eax7 = *reinterpret_cast<unsigned char*>(a1 + 2);
    eax8 = *reinterpret_cast<unsigned char*>(a1 + 3);
    eax9 = *reinterpret_cast<unsigned char*>(a1 + 4);
    eax10 = *reinterpret_cast<unsigned char*>(a1 + 5);
    eax11 = *reinterpret_cast<unsigned char*>(a1 + 6);
    eax12 = *reinterpret_cast<unsigned char*>(a1 + 7);
    eax13 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 8));
    eax14 = *reinterpret_cast<unsigned char*>(a1 + 9);
    if (v6 || (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax10))) & 0xff | (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax7))) << 24 | (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax8))) & 0xff) << 16 | reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax9))) << 8 & 0xffff) || reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax14))) & 0xff | (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax11))) << 24 | (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax12))) & 0xff) << 16 | reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax13))) << 8 & 0xffff))) {
        if (v6 != 0x7fff) {
            __asm__("fild dword [ebp-0x2c]");
            __asm__("fld qword [0x8059870]");
            __asm__("faddp st1, st0");
            __asm__("fstp qword [esp]");
            fun_804a05c();
            __asm__("fstp qword [ebp-0x20]");
            __asm__("fild dword [ebp-0x2c]");
            __asm__("fld qword [0x8059870]");
            __asm__("faddp st1, st0");
            __asm__("fstp qword [esp]");
            fun_804a05c();
            __asm__("fld qword [ebp-0x20]");
            __asm__("faddp st1, st0");
            __asm__("fstp qword [ebp-0x20]");
        } else {
            __asm__("fld qword [0x8059868]");
            __asm__("fstp qword [ebp-0x20]");
        }
    } else {
        __asm__("fldz ");
        __asm__("fstp qword [ebp-0x20]");
    }
    eax15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1));
    if (*reinterpret_cast<signed char*>(&eax15) >= 0) {
        __asm__("fld qword [ebp-0x20]");
    } else {
        __asm__("fld qword [ebp-0x20]");
        __asm__("fchs ");
    }
    return;
}

int32_t ts_calc_times(int32_t a1, int32_t a2, void** a3, void** a4, void** a5) {
    int32_t eax6;

    if (reinterpret_cast<signed char>(a3) <= reinterpret_cast<signed char>(0) || reinterpret_cast<unsigned char>(a3) <= reinterpret_cast<unsigned char>(0)) {
        __asm__("fldz ");
        __asm__("fstp qword [eax+0x10]");
        eax6 = a1;
        __asm__("fldz ");
        __asm__("fstp qword [eax+0x18]");
    } else {
        __asm__("fld qword [eax+0x8]");
        __asm__("fild dword [ebp+0x14]");
        __asm__("fmulp st1, st0");
        __asm__("fild dword [ebp+0x10]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [eax+0x10]");
        __asm__("fild dword [ebp-0x4]");
        __asm__("fild dword [ebp+0xc]");
        __asm__("fld qword [eax+0x8]");
        __asm__("fmulp st1, st0");
        __asm__("fdivp st1, st0");
        eax6 = a1;
        __asm__("fstp qword [eax+0x18]");
    }
    return eax6;
}

void fun_804a36c(void* a1, int32_t a2);

int32_t GetRealTime(void** a1) {
    int32_t v2;

    fun_804a36c(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16, 0);
    __asm__("fild dword [ebp-0x1c]");
    __asm__("fild dword [ebp-0x1c]");
    __asm__("fld qword [0x80554d8]");
    __asm__("fmulp st1, st0");
    __asm__("faddp st1, st0");
    return v2;
}

int32_t fun_804a47c();

int32_t GetCPUTime(void** a1) {
    int32_t eax2;

    eax2 = fun_804a47c();
    __asm__("fild dword [ebp-0xc]");
    __asm__("fld qword [0x80554d0]");
    __asm__("fdivp st1, st0");
    return eax2;
}

int32_t lame_print_config = 0x804a4d2;

void fun_804a4cc(void** a1) {
    goto lame_print_config;
}

int32_t lame_print_internals = 0x804a8e2;

void fun_804a8dc(void** a1, void** a2, void** a3, void** a4) {
    goto lame_print_internals;
}

int32_t lame_get_frameNum = 0x804a852;

void** fun_804a84c(void** a1) {
    goto lame_get_frameNum;
}

void console_up(int32_t a1);

void brhist_jump_back(void** a1) {
    int32_t eax2;

    eax2 = g805b4c0;
    console_up(eax2);
    g805b4c0 = 0;
    return;
}

void** fun_804a6fc(void** a1, void** a2, uint32_t a3, uint32_t a4, void** a5);

void** fun_804a5fc(void** a1);

/* init.3108 */
int32_t init_3108 = 0;

void** ts_time_decompose(void* a1, void** a2, void** a3, void** a4, void** a5);

void** timestatus(void** a1) {
    void** v2;
    void** v3;
    void** v4;
    int32_t eax5;
    void** eax6;
    void** v7;
    uint32_t v8;
    uint32_t v9;
    void** v10;
    void** eax11;
    void** v12;
    void** eax13;
    uint1_t zf14;
    int32_t eax15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    void** eax24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    int32_t v29;
    int32_t v30;
    int32_t v31;
    int32_t v32;
    void* v33;
    void* v34;
    void* v35;
    void* v36;
    void** eax37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    int32_t v42;
    int32_t v43;
    int32_t v44;
    int32_t v45;
    void* v46;
    void** eax47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;

    eax5 = fun_804a95c(a1, v2, v3, v4);
    eax6 = fun_804a84c(a1);
    eax11 = fun_804a6fc(a1, v7, v8, v9, v10);
    v12 = eax11;
    eax13 = fun_804a5fc(a1);
    if (reinterpret_cast<signed char>(v12) < reinterpret_cast<signed char>(eax6)) {
        v12 = eax6;
    }
    if (!eax6) {
        GetRealTime(a1);
        __asm__("fstp qword [0x805b420]");
        GetCPUTime(a1);
        __asm__("fstp qword [0x805b440]");
        __asm__("fldz ");
        __asm__("fstp qword [0x805b428]");
        __asm__("fldz ");
        __asm__("fstp qword [0x805b448]");
    }
    GetRealTime(a1);
    __asm__("fstp qword [ebp-0x28]");
    __asm__("fld qword [0x805b420]");
    __asm__("fld qword [ebp-0x28]");
    __asm__("fsubrp st1, st0");
    __asm__("fstp qword [ebp-0x30]");
    __asm__("fld qword [ebp-0x30]");
    __asm__("fldz ");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    zf14 = reinterpret_cast<uint1_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax6) > reinterpret_cast<unsigned char>(0))) == 0);
    if (!zf14) {
        __asm__("fldz ");
        __asm__("fstp qword [ebp-0x30]");
    }
    __asm__("fld qword [0x805b428]");
    __asm__("fadd qword [ebp-0x30]");
    __asm__("fstp qword [0x805b428]");
    __asm__("fld qword [ebp-0x28]");
    __asm__("fstp qword [0x805b420]");
    GetCPUTime(a1);
    __asm__("fstp qword [ebp-0x28]");
    __asm__("fld qword [0x805b440]");
    __asm__("fld qword [ebp-0x28]");
    __asm__("fsubrp st1, st0");
    __asm__("fstp qword [ebp-0x30]");
    __asm__("fld qword [ebp-0x30]");
    __asm__("fldz ");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf14)))) {
        __asm__("fldz ");
        __asm__("fstp qword [ebp-0x30]");
    }
    __asm__("fld qword [0x805b448]");
    __asm__("fadd qword [ebp-0x30]");
    __asm__("fstp qword [0x805b448]");
    __asm__("fld qword [ebp-0x28]");
    __asm__("fstp qword [0x805b440]");
    if (eax6 || (eax15 = init_3108, !!eax15)) {
        if (reinterpret_cast<signed char>(eax6) > reinterpret_cast<signed char>(0)) {
            init_3108 = 0;
        }
        ts_calc_times(0x805b420, eax5, eax6, v12, eax13);
        ts_calc_times(0x805b440, eax5, eax6, v12, eax13);
        if (reinterpret_cast<signed char>(eax6) < reinterpret_cast<signed char>(v12)) {
            __asm__("fild dword [ebp-0x14]");
            __asm__("fld qword [0x8059ae8]");
            __asm__("fmulp st1, st0");
            __asm__("fild dword [ebp-0x18]");
            __asm__("fdivp st1, st0");
            __asm__("fld qword [0x8059af0]");
            __asm__("faddp st1, st0");
            __asm__("fnstcw word [ebp-0x3a]");
            __asm__("fldcw word [ebp-0x3c]");
            __asm__("fistp dword [ebp-0xc]");
            __asm__("fldcw word [ebp-0x3a]");
        }
        console_printf("\r%6i/%-6i", eax6, v12, v12, eax13, v16, v17, v18, v19, "\r%6i/%-6i", eax6, v12, v12, eax13, v20, v21, v22, v23);
        if (1) {
            eax24 = reinterpret_cast<void**>("(%3.3d%%)|");
        } else {
            eax24 = reinterpret_cast<void**>(" (%2d%%)|");
        }
        console_printf(eax24, 100, v12, v12, eax13, v25, v26, v27, v28, eax24, 100, v12, v12, eax13, v29, v30, v31, v32);
        __asm__("fld qword [0x805b448]");
        __asm__("fnstcw word [ebp-0x3a]");
        __asm__("fldcw word [ebp-0x3c]");
        __asm__("fistp qword [ebp-0x48]");
        __asm__("fldcw word [ebp-0x3a]");
        ts_time_decompose(v33, 47, v12, v12, eax13);
        __asm__("fld qword [0x805b450]");
        __asm__("fnstcw word [ebp-0x3a]");
        __asm__("fldcw word [ebp-0x3c]");
        __asm__("fistp qword [ebp-0x48]");
        __asm__("fldcw word [ebp-0x3a]");
        ts_time_decompose(v34, 0x7c, v12, v12, eax13);
        __asm__("fld qword [0x805b428]");
        __asm__("fnstcw word [ebp-0x3a]");
        __asm__("fldcw word [ebp-0x3c]");
        __asm__("fistp qword [ebp-0x48]");
        __asm__("fldcw word [ebp-0x3a]");
        ts_time_decompose(v35, 47, v12, v12, eax13);
        __asm__("fld qword [0x805b430]");
        __asm__("fnstcw word [ebp-0x3a]");
        __asm__("fldcw word [ebp-0x3c]");
        __asm__("fistp qword [ebp-0x48]");
        __asm__("fldcw word [ebp-0x3a]");
        ts_time_decompose(v36, 0x7c, v12, v12, eax13);
        __asm__("fld qword [0x805b458]");
        __asm__("fld qword [0x805b458]");
        __asm__("fld1 ");
        __asm__("fucomip st0, st1");
        __asm__("fstp st0");
        if (0) {
            eax37 = reinterpret_cast<void**>("%#9.5gx|");
        } else {
            eax37 = reinterpret_cast<void**>("%9.4fx|");
        }
        __asm__("fstp qword [esp+0x4]");
        console_printf(eax37, 0x7c, v12, v12, eax13, v38, v39, v40, v41, eax37, 0x7c, v12, v12, eax13, v42, v43, v44, v45);
        __asm__("fld qword [0x805b430]");
        __asm__("fld qword [0x805b428]");
        __asm__("fsubp st1, st0");
        __asm__("fnstcw word [ebp-0x3a]");
        __asm__("fldcw word [ebp-0x3c]");
        __asm__("fistp qword [ebp-0x48]");
        __asm__("fldcw word [ebp-0x3a]");
        eax47 = ts_time_decompose(v46, 32, v12, v12, eax13);
    } else {
        eax47 = console_printf("\r    Frame          |  CPU time/estim | REAL time/estim | play/CPU |    ETA \n     0/       ( 0%%)|    0:00/     :  |    0:00/     :  |         x|     :  \r", v48, v49, v50, v51, v52, v53, v54, v55);
        init_3108 = 1;
    }
    return eax47;
}

void fun_804a4ec(void** a1, void* a2);

void fun_804a15c(void** a1, void* a2);

void fun_804a10c(void** a1, void* a2);

void fun_804a5ac(void** a1, void** a2);

void** brhist_disp_line(void** a1, void** a2, uint32_t a3, uint32_t a4, void** a5);

void** progress_line(void** a1, void** a2, void** a3, uint32_t a4, void** a5);

void stats_line(void* a1, void** a2, void** a3, uint32_t a4, void** a5);

void brhist_disp(void** a1) {
    void* ebp2;
    int32_t v3;
    int32_t ecx4;
    int32_t v5;
    void** v6;
    uint32_t v7;
    void** v8;
    int32_t v9;
    void** v10;
    int32_t v11;
    int32_t eax12;
    void** eax13;
    void** eax14;
    uint32_t edx15;
    void** eax16;
    void** v17;
    uint32_t v18;
    uint32_t v19;
    int32_t v20;
    int32_t v21;
    void** eax22;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v3 = 0;
    __asm__("fldz ");
    __asm__("fstp qword [ebp-0x28]");
    ecx4 = 18;
    while (ecx4) {
        --ecx4;
    }
    v5 = 0;
    g805b4c0 = 0;
    fun_804a4ec(a1, reinterpret_cast<int32_t>(ebp2) - 0x1b0);
    fun_804a15c(a1, reinterpret_cast<int32_t>(ebp2) - 0x88);
    fun_804a10c(a1, reinterpret_cast<int32_t>(ebp2) - 56);
    v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xffffffb0);
    fun_804a5ac(a1, v6);
    v7 = 0;
    v8 = reinterpret_cast<void**>(0);
    v9 = 0;
    while (v9 <= 13) {
        v8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + v9 * 4 - 0x88)));
        __asm__("fild dword [ebp+0xfffffe44]");
        __asm__("fld qword [ebp-0x28]");
        __asm__("faddp st1, st0");
        __asm__("fstp qword [ebp-0x28]");
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp2) + v9 * 4 - 0x88) > reinterpret_cast<int32_t>(v7)) {
            v7 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebp2) + v9 * 4 - 0x88);
        }
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp2) + v9 * 4 - 0x88)) {
            ++v3;
        }
        ++v9;
    }
    v10 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(v10) <= reinterpret_cast<signed char>(13)) {
        v11 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp2) + reinterpret_cast<unsigned char>(v10) * 4 - 0x88);
        if (!v11 || v3 <= 1) {
            eax12 = 0;
        } else {
            eax12 = 1;
        }
        if (eax12 || (eax13 = brhist, reinterpret_cast<signed char>(eax13) <= reinterpret_cast<signed char>(v10)) && (eax14 = g805b484, reinterpret_cast<signed char>(eax14) >= reinterpret_cast<signed char>(v10))) {
            edx15 = *reinterpret_cast<uint32_t*>((reinterpret_cast<unsigned char>(v10) << 4) + (reinterpret_cast<int32_t>(ebp2) + 0xfffffff8) - 0x1a8);
            eax16 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp2) + reinterpret_cast<unsigned char>(v10) * 4 - 0x88);
            v17 = v8;
            v18 = v7;
            v19 = edx15;
            v6 = eax16;
            brhist_disp_line(v10, v6, v19, v18, v17);
        }
        ++v10;
    }
    v20 = 0;
    while (v20 <= 3) {
        v5 = v5 + *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp2) + v20 * 4 - 56);
        ++v20;
    }
    if (reinterpret_cast<signed char>(v8) > reinterpret_cast<signed char>(0)) {
        __asm__("fild dword [ebp-0x14]");
        __asm__("fld qword [ebp-0x28]");
        __asm__("fdivrp st1, st0");
        __asm__("fstp qword [ebp+0xffffff30]");
        __asm__("fild dword [ebp+0xfffffe44]");
        __asm__("fld qword [0x8059c50]");
        __asm__("fmulp st1, st0");
        __asm__("fild dword [ebp-0x14]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [ebp+0xffffff38]");
    }
    if (v5 > 0) {
        __asm__("fldz ");
        __asm__("fstp qword [ebp+0xffffff40]");
        __asm__("fild dword [ebp+0xfffffe44]");
        __asm__("fld qword [0x8059c50]");
        __asm__("fmulp st1, st0");
        __asm__("fild dword [ebp-0x1c]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [ebp+0xffffff48]");
        __asm__("fild dword [ebp+0xfffffe44]");
        __asm__("fld qword [0x8059c50]");
        __asm__("fmulp st1, st0");
        __asm__("fild dword [ebp-0x1c]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [ebp+0xffffff50]");
    }
    if (!(reinterpret_cast<uint1_t>(v21 < 0) | reinterpret_cast<uint1_t>(v21 == 0))) {
        __asm__("fild dword [ebp+0xfffffe44]");
        __asm__("fld qword [0x8059c50]");
        __asm__("fmulp st1, st0");
        __asm__("fild dword [ebp+0xfffffe44]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [ebp+0xffffff58]");
        __asm__("fild dword [ebp+0xfffffe44]");
        __asm__("fld qword [0x8059c50]");
        __asm__("fmulp st1, st0");
        __asm__("fild dword [ebp+0xfffffe44]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [ebp+0xffffff60]");
        __asm__("fild dword [ebp+0xfffffe44]");
        __asm__("fld qword [0x8059c50]");
        __asm__("fmulp st1, st0");
        __asm__("fild dword [ebp+0xfffffe44]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [ebp+0xffffff68]");
        __asm__("fild dword [ebp+0xfffffe44]");
        __asm__("fld qword [0x8059c50]");
        __asm__("fmulp st1, st0");
        __asm__("fild dword [ebp+0xfffffe44]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [ebp+0xffffff70]");
    }
    eax22 = fun_804a6fc(a1, v6, v19, v18, v17);
    progress_line(a1, eax22, v8, v18, v17);
    stats_line(reinterpret_cast<int32_t>(ebp2) - 0xd0, eax22, v8, v18, v17);
    return;
}

void** timestatus_finish(void** a1) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** ebp7;
    void** eax8;

    eax8 = console_printf("\n", v2, v3, v4, v5, v6, ebp7, __return_address(), a1);
    return eax8;
}

uint32_t digits(void** a1, int32_t a2, uint32_t a3, void** a4, uint32_t a5, void** a6) {
    uint32_t v7;

    v7 = 1;
    if (reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0x5f5e0ff)) {
        v7 = 9;
        a1 = reinterpret_cast<void**>(__intrinsic() >> 25);
    }
    if (reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0x270f)) {
        v7 = v7 + 4;
        a1 = reinterpret_cast<void**>(__intrinsic() >> 13);
    }
    if (reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(99)) {
        v7 = v7 + 2;
        a1 = reinterpret_cast<void**>(__intrinsic() >> 5);
    }
    if (reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(9)) {
        ++v7;
    }
    return v7;
}

int32_t sprintf = 0x804a0a2;

void fun_804a09c(void** a1, int32_t a2, uint32_t a3, void** a4, uint32_t a5, void** a6) {
    goto sprintf;
}

void* g805bcf4 = reinterpret_cast<void*>(0);

unsigned char g805bd06 = 0;

void** progress_line(void** a1, void** a2, void** a3, uint32_t a4, void** a5) {
    void* ebp6;
    uint32_t eax7;
    uint32_t v8;
    void** v9;
    void** v10;
    void** v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    int32_t eax15;
    uint32_t eax16;
    void** v17;
    void** v18;
    void** v19;
    void* v20;
    uint32_t v21;
    void** v22;
    int32_t v23;
    uint32_t v24;
    void** v25;
    uint32_t v26;
    void** v27;
    uint32_t eax28;
    void** v29;
    uint32_t v30;
    uint32_t eax31;
    void* eax32;
    void* eax33;
    uint32_t eax34;
    void* eax35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    int32_t v42;
    void** v43;
    void** v44;
    int32_t v45;
    int32_t v46;
    int32_t eax47;
    void** eax48;
    void** v49;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g14;
    v8 = 1;
    fun_804a5fc(a1);
    eax15 = fun_804a95c(a1, v9, v10, v11, a1, v12, v13, v14);
    if (reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(a3)) {
        a2 = a3;
    }
    if (eax15 > 0) {
        __asm__("fild dword [ebp-0x5c]");
        __asm__("fstp dword [ebp-0x34]");
        __asm__("fild dword [ebp-0x44]");
        __asm__("fld dword [ebp-0x34]");
        __asm__("fmulp st1, st0");
        __asm__("fstp dword [ebp-0x34]");
        __asm__("fild dword [ebp-0x48]");
        __asm__("fld dword [ebp-0x34]");
        __asm__("fdivrp st1, st0");
        __asm__("fstp dword [ebp-0x34]");
    }
    __asm__("fld dword [ebp-0x34]");
    __asm__("fld dword [0x8059c48]");
    __asm__("fdivp st1, st0");
    __asm__("fnstcw word [ebp-0x4e]");
    __asm__("fldcw word [ebp-0x50]");
    __asm__("fistp qword [ebp-0x58]");
    __asm__("fldcw word [ebp-0x4e]");
    __asm__("fild qword [ebp-0x58]");
    __asm__("fld dword [ebp-0x34]");
    __asm__("fsubrp st1, st0");
    __asm__("fstp dword [ebp-0x34]");
    __asm__("fld dword [ebp-0x34]");
    __asm__("fld dword [0x8059c4c]");
    __asm__("fdivp st1, st0");
    __asm__("fldcw word [ebp-0x50]");
    __asm__("fistp qword [ebp-0x58]");
    __asm__("fldcw word [ebp-0x4e]");
    eax16 = reinterpret_cast<unsigned char>(v17) * 0xe10 << 2;
    __asm__("fild qword [ebp-0x58]");
    __asm__("fld dword [ebp-0x34]");
    __asm__("fsubrp st1, st0");
    __asm__("fstp dword [ebp-0x34]");
    __asm__("fld dword [ebp-0x34]");
    __asm__("fldcw word [ebp-0x50]");
    __asm__("fistp qword [ebp-0x58]");
    __asm__("fldcw word [ebp-0x4e]");
    if (!a2) {
        v18 = reinterpret_cast<void**>(0);
        v19 = reinterpret_cast<void**>(0);
        v20 = reinterpret_cast<void*>(0);
    } else {
        if (!v17) {
            fun_804a09c(reinterpret_cast<int32_t>(ebp6) + 0xffffffe0, "%02u:%02u", reinterpret_cast<unsigned char>(v17) * 0xe10, (eax16 << 4) - eax16, v21, v22);
            v8 = 6;
        } else {
            eax28 = digits(v17, v23, v24, v25, v26, v27);
            v29 = reinterpret_cast<void**>((eax16 << 4) - eax16);
            v30 = reinterpret_cast<unsigned char>(v17) * 0xe10;
            fun_804a09c(reinterpret_cast<int32_t>(ebp6) + 0xffffffe0, "%*d:%02u:%02u", eax28, v17, v30, v29);
            eax31 = digits(v17, "%*d:%02u:%02u", eax28, v17, v30, v29);
            v8 = 1 + (eax31 + 6);
        }
        eax32 = g805bcf4;
        v20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>((reinterpret_cast<int32_t>(eax32) - v8 + 1) * reinterpret_cast<unsigned char>(a2) - 1) / reinterpret_cast<signed char>(a2));
        eax33 = g805bcf4;
        v19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>((reinterpret_cast<int32_t>(eax33) - v8) * reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(a2) - 1) / reinterpret_cast<signed char>(a2));
        v18 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v20) - reinterpret_cast<unsigned char>(v19));
        if (!v18) {
            fun_804a09c(reinterpret_cast<int32_t>(ebp6) + 0xffffffe0, "%.*s", v8 + 0xffffffff, 0x805b8c6, v30, v29);
        }
    }
    eax34 = g805bd06;
    if (!*reinterpret_cast<signed char*>(&eax34)) {
        eax35 = g805bcf4;
        v36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax35) - v8 - reinterpret_cast<uint32_t>(v20));
        v37 = v18;
        v38 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xffffffe0);
        v39 = v19;
        v40 = reinterpret_cast<void**>("\n%.*s%s%.*s%*s");
        console_printf("\n%.*s%s%.*s%*s", v39, 0x805b8c6, v38, v37, 0x805bac7, v36, 0x8059b6f, v41, "\n%.*s%s%.*s%*s", v39, 0x805b8c6, v38, v37, 0x805bac7, v36, 0x8059b6f, v42);
    } else {
        v36 = reinterpret_cast<void**>(0x805bd06);
        v37 = v18;
        v38 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xffffffe0);
        v39 = v19;
        v40 = reinterpret_cast<void**>("\n%.*s%s%.*s%s");
        console_printf("\n%.*s%s%.*s%s", v39, 0x805b8c6, v38, v37, 0x805bac7, 0x805bd06, v43, v44, "\n%.*s%s%.*s%s", v39, 0x805b8c6, v38, v37, 0x805bac7, 0x805bd06, v45, v46);
    }
    eax47 = g805b4c0;
    g805b4c0 = eax47 + 1;
    eax48 = reinterpret_cast<void**>(eax7 ^ g14);
    if (eax48) {
        eax48 = fun_804a70c(v40, v39, 0x805b8c6, v38, v37, 0x805bac7, v36, 0x8059b6f, v49);
    }
    return eax48;
}

void* stats_value(void** a1, void** a2, void** a3) {
    void* eax4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;

    __asm__("fld qword [ebp-0x10]");
    __asm__("fldz ");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    if (reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) <= 40) {
        eax4 = reinterpret_cast<void*>(0);
    } else {
        __asm__("fld qword [ebp-0x10]");
        __asm__("fstp qword [esp+0x4]");
        console_printf(" %5.1f", v5, v6, v7, v8, v9, a1, a2, v10);
        eax4 = reinterpret_cast<void*>(6);
    }
    return eax4;
}

int32_t lame_bitrate_stereo_mode_hist = 0x804a4f2;

void fun_804a4ec(void** a1, void* a2) {
    goto lame_bitrate_stereo_mode_hist;
}

int32_t lame_bitrate_hist = 0x804a162;

void fun_804a15c(void** a1, void* a2) {
    goto lame_bitrate_hist;
}

int32_t lame_stereo_mode_hist = 0x804a112;

void fun_804a10c(void** a1, void* a2) {
    goto lame_stereo_mode_hist;
}

int32_t lame_block_type_hist = 0x804a5b2;

void fun_804a5ac(void** a1, void** a2) {
    goto lame_block_type_hist;
}

void** brhist_disp_line(void** a1, void** a2, uint32_t a3, uint32_t a4, void** a5) {
    void* ebp6;
    uint32_t eax7;
    int32_t v8;
    uint32_t v9;
    void** v10;
    uint32_t v11;
    void** v12;
    uint32_t eax13;
    void** v14;
    void* v15;
    void* eax16;
    void* eax17;
    int32_t v18;
    uint32_t v19;
    void** v20;
    uint32_t v21;
    void** v22;
    uint32_t eax23;
    uint32_t v24;
    void** v25;
    uint32_t eax26;
    void* eax27;
    void** eax28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** eax35;
    void** v36;
    int32_t eax37;
    void** eax38;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g14;
    eax13 = digits(a5, v8, v9, v10, v11, v12);
    if (!a4) {
        v14 = reinterpret_cast<void**>(0);
        v15 = reinterpret_cast<void*>(0);
    } else {
        eax16 = g805bcf4;
        v15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>((reinterpret_cast<int32_t>(eax16) - (eax13 + 8)) * reinterpret_cast<unsigned char>(a2) + a4 - 1) / reinterpret_cast<int32_t>(a4));
        eax17 = g805bcf4;
        v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>((reinterpret_cast<int32_t>(eax17) - (eax13 + 8)) * a3 + a4 - 1) / reinterpret_cast<int32_t>(a4));
    }
    if (reinterpret_cast<signed char>(a5) > reinterpret_cast<signed char>(0)) {
    }
    eax23 = digits(a5, v18, v19, v20, v21, v22);
    fun_804a09c(reinterpret_cast<int32_t>(ebp6) + 0xffffffe6, " [%*i]", eax23, a2, v24, v25);
    eax26 = g805bd06;
    if (!*reinterpret_cast<signed char*>(&eax26)) {
        eax27 = g805bcf4;
        eax28 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a1) * 4 + 0x805b488);
        v29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax27) - (eax13 + 8) - reinterpret_cast<uint32_t>(v15));
        v30 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v15) - reinterpret_cast<unsigned char>(v14));
        v31 = v14;
        v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xffffffe6);
        v33 = eax28;
        v34 = reinterpret_cast<void**>("\n%3d%s %.*s%.*s%*s");
        console_printf("\n%3d%s %.*s%.*s%*s", v33, v32, v31, 0x805b6c5, v30, 0x805b4c4, v29, 0x8059b6f);
    } else {
        eax35 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a1) * 4 + 0x805b488);
        v29 = reinterpret_cast<void**>(0x805bd06);
        v30 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v15) - reinterpret_cast<unsigned char>(v14));
        v31 = v14;
        v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xffffffe6);
        v33 = eax35;
        v34 = reinterpret_cast<void**>("\n%3d%s %.*s%.*s%s");
        console_printf("\n%3d%s %.*s%.*s%s", v33, v32, v31, 0x805b6c5, v30, 0x805b4c4, 0x805bd06, v36);
    }
    eax37 = g805b4c0;
    g805b4c0 = eax37 + 1;
    eax38 = reinterpret_cast<void**>(eax7 ^ g14);
    if (eax38) {
        eax38 = fun_804a70c(v34, v33, v32, v31, 0x805b6c5, v30, 0x805b4c4, v29, 0x8059b6f);
    }
    return eax38;
}

/* __i686.get_pc_thunk.bx */
int32_t __i686_get_pc_thunk_bx() {
    int32_t eax1;

    return eax1;
}

int32_t malloc = 0x804a6f2;

void** fun_804a6ec(void** a1, void** a2, void** a3) {
    goto malloc;
}

int32_t id3tag_init = 0x804a182;

void fun_804a17c(void** a1) {
    goto id3tag_init;
}

int32_t global = 0;

void** g805b3dc = reinterpret_cast<void**>(0);

void** OpenSndFile(void** a1, void** a2, void** a3, void** a4);

void init_infile(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;
    uint32_t eax6;
    int32_t eax7;
    void** eax8;

    global = 0;
    g805b3dc = reinterpret_cast<void**>(0);
    eax5 = in_bitwidth;
    g805b3d0 = eax5;
    eax6 = swapbytes;
    g805b3d4 = eax6;
    eax7 = in_signed;
    g805b3d8 = reinterpret_cast<void**>(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax7 != 1))));
    eax8 = OpenSndFile(a1, a2, a3, a4);
    g805b3e0 = eax8;
    return;
}

void** my_console_printing(void** a1, void** a2, void* a3) {
    void** eax4;

    if (!a1) {
        eax4 = reinterpret_cast<void**>(0);
    } else {
        eax4 = fun_804a8ec(a1, a2, a3);
    }
    return eax4;
}

int32_t lame_get_encoder_delay = 0x804a402;

struct s3* fun_804a3fc(void** a1, void** a2, void** a3) {
    goto lame_get_encoder_delay;
}

int32_t lame_get_version = 0x804a7b2;

uint32_t fun_804a7ac(void** a1, void** a2, void** a3, void** a4) {
    goto lame_get_version;
}

void** get_audio16(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;

    eax8 = get_audio_common(a1, 0, a2);
    return eax8;
}

int32_t _IO_putc = 0x804a912;

void fun_804a90c(uint32_t a1, void** a2) {
    goto _IO_putc;
}

void Write16BitsHighLow(void** a1, uint32_t a2) {
    int32_t eax3;
    uint32_t eax4;

    eax3 = reinterpret_cast<int32_t>(a2) >> 8;
    fun_804a90c(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax3)), a1);
    eax4 = a2;
    fun_804a90c(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax4)), a1);
    return;
}

void** calculate_index(void*** a1, void** a2, void** a3) {
    void** v4;
    void** eax5;

    v4 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(v4) < reinterpret_cast<signed char>(a2)) {
        if (*reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v4) << 2) + reinterpret_cast<uint32_t>(a1)) == a3) 
            goto addr_8053a2b_4;
        ++v4;
    }
    eax5 = reinterpret_cast<void**>(0xffffffff);
    addr_8053a41_7:
    return eax5;
    addr_8053a2b_4:
    eax5 = v4;
    goto addr_8053a41_7;
}

void** fun_804a31c(void** a1, void** a2, void** a3);

void** write_xing_frame(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    uint32_t eax8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    void** v14;
    void** v15;
    void** eax16;
    int32_t eax17;
    void** v18;
    void** v19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    uint32_t edx24;
    void** v25;
    void** v26;
    void** v27;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax8 = g14;
    v9 = reinterpret_cast<void**>(0x24000);
    v10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffdbff4);
    v11 = a1;
    eax12 = fun_804a31c(v11, v10, 0x24000);
    if (reinterpret_cast<unsigned char>(eax12) <= reinterpret_cast<unsigned char>(0x24000)) {
        if (eax12) {
            v13 = a2;
            v9 = eax12;
            v10 = reinterpret_cast<void**>(1);
            v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffdbff4);
            eax16 = fun_804a64c(v11, 1, v9, v13, v14, v15);
            if (eax16 == eax12) {
                eax17 = flush_write;
                if (eax17 == 1) {
                    v11 = a2;
                    fun_804a3ec(v11, 1, v9, v13, v18, v19, a2);
                }
                eax20 = eax12;
            } else {
                v11 = reinterpret_cast<void**>("Error writing LAME-tag \n");
                error_printf("Error writing LAME-tag \n", 1, v9, v13, v21);
                eax20 = reinterpret_cast<void**>(0xffffffff);
            }
        } else {
            eax20 = reinterpret_cast<void**>(0);
        }
    } else {
        v9 = eax12;
        v10 = reinterpret_cast<void**>(0x24000);
        v11 = reinterpret_cast<void**>("Error writing LAME-tag frame: buffer too small: buffer size=%d  frame size=%d\n");
        error_printf("Error writing LAME-tag frame: buffer too small: buffer size=%d  frame size=%d\n", 0x24000, v9, v22, v23);
        eax20 = reinterpret_cast<void**>(0xffffffff);
    }
    edx24 = eax8 ^ g14;
    if (edx24) {
        eax20 = fun_804a70c(v11, v10, v9, v13, v25, v26, a2, a1, v27);
    }
    return eax20;
}

void** fun_804a58c(void** a1, void** a2, void** a3, void** a4);

void fun_804a91c(void** a1, void** a2, void** a3, void** a4);

int32_t fun_804a98c(void** a1, void** a2, void** a3, void** a4);

void fun_804a23c(void** a1, void** a2, void** a3, void** a4);

void encoder_progress_begin(void** a1, void** a2, void** a3) {
    void** eax4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    int32_t eax10;
    void** esi11;
    void** v12;
    void** v13;
    struct s1* eax14;
    void** v15;
    void** v16;
    struct s1* eax17;
    void** ebx18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    int32_t eax24;
    void** eax25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    uint32_t eax37;
    void** eax38;
    int32_t eax39;
    void** esi40;
    uint32_t eax41;
    int32_t eax42;
    void** v43;
    int32_t eax44;
    void** eax45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** eax53;
    void** eax54;
    void** v55;
    void** eax56;
    int32_t eax57;
    void** edi58;
    uint32_t eax59;
    int32_t eax60;
    void** v61;
    int32_t eax62;
    void** eax63;
    void** v64;
    void** v65;
    void** v66;
    int32_t v67;
    int32_t v68;
    int32_t v69;
    int32_t eax70;
    void** edi71;
    uint32_t eax72;
    int32_t eax73;
    void** v74;
    int32_t eax75;
    void** eax76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** eax82;
    void** v83;
    void** eax84;
    int32_t eax85;
    void** edi86;
    uint32_t eax87;
    int32_t eax88;
    void** v89;
    int32_t eax90;
    void** eax91;
    void** v92;
    void** v93;
    void** v94;
    int32_t v95;
    int32_t v96;
    int32_t v97;

    eax4 = silent;
    if (reinterpret_cast<signed char>(eax4) > reinterpret_cast<signed char>(9)) {
        addr_80537b6_2:
        return;
    } else {
        fun_804a4cc(a1);
        eax10 = fun_804aa6c(a3, "-", v5, v6, v7, v8, v9);
        if (!eax10) {
            esi11 = reinterpret_cast<void**>("<stdout>");
        } else {
            esi11 = a3;
        }
        eax14 = fun_804a4ac(a2, "-", v12, v13);
        eax17 = fun_804a4ac(a3, "-", v15, v16);
        if (reinterpret_cast<uint32_t>(eax14) + reinterpret_cast<uint32_t>(eax17) > 65) {
            ebx18 = reinterpret_cast<void**>("\n     ");
        } else {
            ebx18 = reinterpret_cast<void**>(0x8059978);
        }
        eax24 = fun_804aa6c(a2, "-", v19, v20, v21, v22, v23);
        if (!eax24) {
            eax25 = reinterpret_cast<void**>("<stdin>");
        } else {
            eax25 = a2;
        }
        console_printf("Encoding %s%s to %s\n", eax25, ebx18, esi11, v26, v27, v28, v29, v30);
        fun_804a95c(a1, eax25, ebx18, esi11);
        __asm__("fild dword [ebp-0x20]");
        __asm__("fld qword [0x8059af8]");
        __asm__("fmulp st1, st0");
        __asm__("fstp qword [esp+0x4]");
        console_printf("Encoding as %g kHz ", eax25, ebx18, esi11, v31, v32, v33, v34, v35);
        eax37 = fun_804a51c(a1, eax25, ebx18, esi11, v36);
        if (eax37 != 2) 
            goto addr_805346b_13;
    }
    eax38 = fun_804a58c(a1, eax25, ebx18, esi11);
    fun_804a91c(a1, eax25, ebx18, esi11);
    __asm__("fstp qword [ebp-0x60]");
    eax39 = fun_804a95c(a1, eax25, ebx18, esi11);
    if (eax39 > 0x3e7f) {
        esi40 = reinterpret_cast<void**>(0x8059978);
    } else {
        esi40 = reinterpret_cast<void**>(".5");
    }
    eax41 = fun_804a7ac(a1, eax25, ebx18, esi11);
    eax42 = fun_804a98c(a1, eax25, ebx18, esi11);
    eax44 = fun_804a6ac(a1, eax25, ebx18, esi11, v43);
    eax45 = *reinterpret_cast<void***>((eax42 * 4 + eax44) * 4 + 0x805b2c0);
    __asm__("fld qword [ebp-0x60]");
    __asm__("fstp qword [esp+0x10]");
    v46 = esi40;
    v47 = reinterpret_cast<void**>(2 - eax41);
    v48 = eax45;
    console_printf("%s MPEG-%u%s Layer III VBR(q=%g) qval=%i\n", v48, v47, v46, v49, v50, eax38, v51, v52);
    addr_80537a1_18:
    eax53 = silent;
    if (reinterpret_cast<signed char>(eax53) < reinterpret_cast<signed char>(0xfffffff7)) {
        fun_804a8dc(a1, v48, v47, v46);
        goto addr_80537b6_2;
    }
    addr_805346b_13:
    if (eax37 > 2) {
        if (eax37 == 3) {
            eax54 = fun_804a58c(a1, eax25, ebx18, esi11);
            eax56 = fun_804aabc(a1, eax25, ebx18, esi11, v55);
            fun_804a23c(a1, eax25, ebx18, esi11);
            __asm__("fld qword [0x8059b00]");
            __asm__("fmulp st1, st0");
            __asm__("fld qword [0x8059af0]");
            __asm__("faddp st1, st0");
            __asm__("fnstcw word [ebp-0x1a]");
            __asm__("fldcw word [ebp-0x1c]");
            __asm__("fistp dword [ebp-0x20]");
            __asm__("fldcw word [ebp-0x1a]");
            __asm__("fild dword [ebp-0x20]");
            __asm__("fld qword [0x8059b08]");
            __asm__("fmulp st1, st0");
            __asm__("fstp qword [ebp-0x40]");
            eax57 = fun_804a95c(a1, eax25, ebx18, esi11, a1, eax25, ebx18, esi11);
            if (eax57 > 0x3e7f) {
                edi58 = reinterpret_cast<void**>(0x8059978);
            } else {
                edi58 = reinterpret_cast<void**>(".5");
            }
            eax59 = fun_804a7ac(a1, eax25, ebx18, esi11);
            eax60 = fun_804a98c(a1, eax25, ebx18, esi11);
            eax62 = fun_804a6ac(a1, eax25, ebx18, esi11, v61);
            eax63 = *reinterpret_cast<void***>((eax60 * 4 + eax62) * 4 + 0x805b2c0);
            __asm__("fld qword [ebp-0x40]");
            __asm__("fstp qword [esp+0x10]");
            v46 = edi58;
            v47 = reinterpret_cast<void**>(2 - eax59);
            v48 = eax63;
            console_printf("%s MPEG-%u%s Layer III (%gx) average %d kbps qval=%i\n", v48, v47, v46, v64, v65, eax56, eax54, v66, "%s MPEG-%u%s Layer III (%gx) average %d kbps qval=%i\n", v48, v47, v46, v67, v68, eax56, eax54, v69);
            goto addr_80537a1_18;
        } else {
            if (eax37 == 4) {
                addr_8053539_26:
                fun_804a91c(a1, eax25, ebx18, esi11);
                __asm__("fstp qword [ebp-0x50]");
                eax70 = fun_804a95c(a1, eax25, ebx18, esi11);
                if (eax70 > 0x3e7f) {
                    edi71 = reinterpret_cast<void**>(0x8059978);
                } else {
                    edi71 = reinterpret_cast<void**>(".5");
                }
            } else {
                goto addr_80536b6_30;
            }
        }
    } else {
        if (eax37 == 1) 
            goto addr_8053539_26;
        goto addr_80536b6_30;
    }
    eax72 = fun_804a7ac(a1, eax25, ebx18, esi11);
    eax73 = fun_804a98c(a1, eax25, ebx18, esi11);
    eax75 = fun_804a6ac(a1, eax25, ebx18, esi11, v74);
    eax76 = *reinterpret_cast<void***>((eax73 * 4 + eax75) * 4 + 0x805b2c0);
    __asm__("fld qword [ebp-0x50]");
    __asm__("fstp qword [esp+0x10]");
    v46 = edi71;
    v47 = reinterpret_cast<void**>(2 - eax72);
    v48 = eax76;
    console_printf("%s MPEG-%u%s Layer III VBR(q=%g)\n", v48, v47, v46, v77, v78, v79, v80, v81);
    goto addr_80537a1_18;
    addr_80536b6_30:
    eax82 = fun_804a58c(a1, eax25, ebx18, esi11);
    eax84 = fun_804a9bc(a1, eax25, ebx18, esi11, v83);
    fun_804a23c(a1, eax25, ebx18, esi11);
    __asm__("fld qword [0x8059b00]");
    __asm__("fmulp st1, st0");
    __asm__("fld qword [0x8059af0]");
    __asm__("faddp st1, st0");
    __asm__("fnstcw word [ebp-0x1a]");
    __asm__("fldcw word [ebp-0x1c]");
    __asm__("fistp dword [ebp-0x20]");
    __asm__("fldcw word [ebp-0x1a]");
    __asm__("fild dword [ebp-0x20]");
    __asm__("fld qword [0x8059b08]");
    __asm__("fmulp st1, st0");
    __asm__("fstp qword [ebp-0x30]");
    eax85 = fun_804a95c(a1, eax25, ebx18, esi11, a1, eax25, ebx18, esi11);
    if (eax85 > 0x3e7f) {
        edi86 = reinterpret_cast<void**>(0x8059978);
    } else {
        edi86 = reinterpret_cast<void**>(".5");
    }
    eax87 = fun_804a7ac(a1, eax25, ebx18, esi11);
    eax88 = fun_804a98c(a1, eax25, ebx18, esi11);
    eax90 = fun_804a6ac(a1, eax25, ebx18, esi11, v89);
    eax91 = *reinterpret_cast<void***>((eax88 * 4 + eax90) * 4 + 0x805b2c0);
    __asm__("fld qword [ebp-0x30]");
    __asm__("fstp qword [esp+0x10]");
    v46 = edi86;
    v47 = reinterpret_cast<void**>(2 - eax87);
    v48 = eax91;
    console_printf("%s MPEG-%u%s Layer III (%gx) %3d kbps qval=%i\n", v48, v47, v46, v92, v93, eax84, eax82, v94, "%s MPEG-%u%s Layer III (%gx) %3d kbps qval=%i\n", v48, v47, v46, v95, v96, eax84, eax82, v97);
    goto addr_80537a1_18;
}

int32_t lame_get_id3v2_tag = 0x804a1c2;

void** fun_804a1bc(void** a1, void** a2, void** a3) {
    goto lame_get_id3v2_tag;
}

void** get_audio_common(void** a1, void** a2, void** a3) {
    void* ebp4;
    void** v5;
    void** v6;
    void** v7;
    void** eax8;
    void** v9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** v16;
    int32_t eax17;
    void** edx18;
    void** eax19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    int32_t eax24;
    void** eax25;
    void** v26;
    void** v27;
    void** eax28;
    void*** v29;
    void** v30;
    void** v31;
    void** v32;
    int32_t ecx33;
    void** v34;
    int32_t* v35;
    int32_t edx36;
    int32_t ecx37;
    void** v38;
    void** v39;
    void** v40;
    int32_t* v41;
    void** eax42;
    void** eax43;
    void** eax44;
    void** eax45;
    void** eax46;
    void** eax47;
    void** v48;
    int32_t eax49;
    void** edx50;
    void** v51;
    uint32_t eax52;
    void** v53;
    void** v54;
    uint32_t ecx55;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax8 = fun_804a75c(a1, v5, v6, v7);
    v9 = eax8;
    eax10 = fun_804a5fc(a1);
    v11 = eax10;
    eax15 = fun_804a20c(a1, v12, v13, v14);
    v16 = eax15;
    eax17 = global;
    if (eax17) {
        edx18 = g805b3dc;
        eax19 = v16;
        if (reinterpret_cast<unsigned char>(edx18) <= reinterpret_cast<unsigned char>(eax19)) {
            eax19 = edx18;
        }
        if (reinterpret_cast<unsigned char>(eax10) > reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v16) - reinterpret_cast<unsigned char>(eax19)) && v16) {
            v11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) - reinterpret_cast<unsigned char>(eax19));
        }
    }
    eax20 = input_format;
    eax24 = is_mpeg_file_format(eax20, v21, v22, v23);
    if (!eax24) {
        eax25 = g805b3e0;
        v26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v9) * reinterpret_cast<unsigned char>(v11));
        v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xffffc9d8);
        eax28 = read_samples_pcm(eax25, v27, v26);
        if (reinterpret_cast<signed char>(eax28) >= reinterpret_cast<signed char>(0)) {
            v29 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp4) - 0x3628 + reinterpret_cast<unsigned char>(eax28) * 4);
            v30 = reinterpret_cast<void**>(reinterpret_cast<signed char>(eax28) / reinterpret_cast<signed char>(v9));
            if (!a2) {
                if (!reinterpret_cast<int1_t>(v9 == 2)) {
                    if (reinterpret_cast<int1_t>(v9 == 1)) {
                        v26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(v30));
                        v27 = reinterpret_cast<void**>(0);
                        fun_804a25c(a3 + 0x900, 0, v26, v31);
                        v32 = v30;
                        while (--v32, reinterpret_cast<signed char>(v32) >= reinterpret_cast<signed char>(0)) {
                            v29 = v29 - 4;
                            ecx33 = reinterpret_cast<signed char>(*v29) >> 16;
                            *reinterpret_cast<void***>(a3 + reinterpret_cast<unsigned char>(v32) * 2) = *reinterpret_cast<void***>(&ecx33);
                        }
                    }
                } else {
                    v34 = v30;
                    while (--v34, reinterpret_cast<signed char>(v34) >= reinterpret_cast<signed char>(0)) {
                        v35 = reinterpret_cast<int32_t*>(v29 - 4);
                        edx36 = *v35 >> 16;
                        *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(a3 + 0x900) + reinterpret_cast<unsigned char>(v34) * 2) = *reinterpret_cast<int16_t*>(&edx36);
                        v29 = reinterpret_cast<void***>(v35 - 1);
                        ecx37 = reinterpret_cast<signed char>(*v29) >> 16;
                        *reinterpret_cast<void***>(a3 + reinterpret_cast<unsigned char>(v34) * 2) = *reinterpret_cast<void***>(&ecx37);
                    }
                }
            } else {
                if (!reinterpret_cast<int1_t>(v9 == 2)) {
                    if (reinterpret_cast<int1_t>(v9 == 1)) {
                        v26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v30) * 4);
                        v27 = reinterpret_cast<void**>(0);
                        fun_804a25c(a2 + 0x1200, 0, v26, v38);
                        v39 = v30;
                        while (--v39, reinterpret_cast<signed char>(v39) >= reinterpret_cast<signed char>(0)) {
                            v29 = v29 - 4;
                            *reinterpret_cast<void***>(a2 + reinterpret_cast<unsigned char>(v39) * 4) = *v29;
                        }
                    }
                } else {
                    v40 = v30;
                    while (--v40, reinterpret_cast<signed char>(v40) >= reinterpret_cast<signed char>(0)) {
                        v41 = reinterpret_cast<int32_t*>(v29 - 4);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(a2 + 0x1200) + reinterpret_cast<unsigned char>(v40) * 4) = *v41;
                        v29 = reinterpret_cast<void***>(v41 - 1);
                        *reinterpret_cast<void***>(a2 + reinterpret_cast<unsigned char>(v40) * 4) = *v29;
                    }
                }
            }
        } else {
            eax42 = eax28;
            goto addr_804d382_29;
        }
    } else {
        if (!a2) {
            eax43 = g805b3e0;
            v26 = a3;
            v27 = eax43;
            eax44 = read_samples_mp3(a1, v27, v26);
            v30 = eax44;
        } else {
            eax45 = g805b3e0;
            v26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xffffedd8);
            v27 = eax45;
            eax46 = read_samples_mp3(a1, v27, v26);
            v30 = eax46;
        }
        if (reinterpret_cast<signed char>(v30) < reinterpret_cast<signed char>(0)) 
            goto addr_804d107_34;
    }
    eax47 = input_format;
    eax49 = is_mpeg_file_format(eax47, v27, v26, v48);
    if (!eax49 || !a2) {
        addr_804d368_36:
        if (v16 != 0xffffffff) {
            edx50 = g805b3dc;
            g805b3dc = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx50) + reinterpret_cast<unsigned char>(v30));
        }
    } else {
        v51 = v30;
        while (--v51, reinterpret_cast<signed char>(v51) >= reinterpret_cast<signed char>(0)) {
            eax52 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<unsigned char>(v51) * 2 - 0x1228);
            *reinterpret_cast<void***>(a2 + reinterpret_cast<unsigned char>(v51) * 4) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax52))) << 16);
        }
        if (!reinterpret_cast<int1_t>(v9 == 2)) 
            goto addr_804d33c_42; else 
            goto addr_804d302_43;
    }
    eax42 = v30;
    addr_804d382_29:
    return eax42;
    addr_804d33c_42:
    if (reinterpret_cast<int1_t>(v9 == 1)) {
        fun_804a25c(a2 + 0x1200, 0, reinterpret_cast<unsigned char>(v30) * 4, v53);
        goto addr_804d368_36;
    }
    addr_804d302_43:
    v54 = v30;
    while (--v54, reinterpret_cast<signed char>(v54) >= reinterpret_cast<signed char>(0)) {
        ecx55 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<uint32_t>(v54 + 0x480) * 2 - 0x1228);
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(a2 + 0x1200) + reinterpret_cast<unsigned char>(v54) * 4) = static_cast<int32_t>(*reinterpret_cast<int16_t*>(&ecx55)) << 16;
    }
    goto addr_804d368_36;
    addr_804d107_34:
    eax42 = v30;
    goto addr_804d382_29;
}

int32_t lame_encode_flush = 0x804a632;

void** fun_804a62c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto lame_encode_flush;
}

int32_t lame_bitrate_kbps = 0x804a5e2;

void fun_804a5dc(void** a1, int32_t a2) {
    goto lame_bitrate_kbps;
}

int32_t strncat = 0x804a6a2;

void fun_804a69c(void** a1, void** a2, void** a3) {
    goto strncat;
}

int32_t lame_set_errorf = 0x804a452;

void fun_804a44c(void** a1, int32_t a2, void** a3) {
    goto lame_set_errorf;
}

int32_t lame_set_debugf = 0x804a222;

void fun_804a21c(void** a1, int32_t a2, void** a3) {
    goto lame_set_debugf;
}

int32_t lame_set_msgf = 0x804a6c2;

void fun_804a6bc(void** a1, int32_t a2, void** a3) {
    goto lame_set_msgf;
}

void deinit_console(struct s2* a1) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** ebp8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;

    if (a1->f10) {
        v2 = a1->f10;
        fun_804a43c(v2, v3, v4, v5, v6, v7, ebp8);
        a1->f10 = reinterpret_cast<void**>(0);
    }
    v9 = a1->f8;
    fun_804a3ec(v9, v10, v11, v12, v13, v14, ebp8);
    eax15 = a1->f8;
    fun_804a68c(eax15, 0, 2, 0);
    fun_804a25c(&a1->f44, 85, 0x400, 0);
    return;
}

int32_t getenv = 0x804a1e2;

void** fun_804a1dc(void** a1, int32_t a2, void** a3) {
    goto getenv;
}

void** parse_args_from_string(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
    uint32_t eax6;
    void** eax7;
    void** v8;
    void** v9;
    void** v10;
    struct s1* eax11;
    void** v12;
    void** v13;
    void** eax14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    uint32_t eax21;
    uint32_t eax22;
    uint32_t eax23;
    void** v24;
    void** eax25;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (!a2 || (eax6 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)), !*reinterpret_cast<signed char*>(&eax6))) {
        eax7 = reinterpret_cast<void**>(0);
    } else {
        eax11 = fun_804a4ac(a2, v8, v9, v10);
        eax14 = fun_804a6ec(&eax11->f1, v12, v13);
        v15 = eax14;
        v16 = v15;
        fun_804a54c(v15, a2, v17, v18, v19);
        v20 = reinterpret_cast<void**>(1);
        while (1) {
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<unsigned char>(v20) * 4 - 0x218) = v15;
            ++v20;
            while ((eax21 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v15)), *reinterpret_cast<signed char*>(&eax21) != 32) && (eax22 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v15)), !!*reinterpret_cast<signed char*>(&eax22))) {
                ++v15;
            }
            eax23 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v15));
            if (!*reinterpret_cast<signed char*>(&eax23)) 
                break;
            *reinterpret_cast<void***>(v15) = reinterpret_cast<void**>(0);
            ++v15;
        }
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<unsigned char>(v20) * 4 - 0x218) = 0;
        v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffde8);
        eax25 = parse_args(a1, v20, v24, a3, a4, 0, 0);
        fun_804a37c(v16, v20, v24, a3, a4, 0, 0);
        eax7 = eax25;
    }
    return eax7;
}

int32_t lame_set_write_id3tag_automatic = 0x804a2b2;

void fun_804a2ac(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto lame_set_write_id3tag_automatic;
}

int32_t lame_init_params = 0x804a7d2;

void** fun_804a7cc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto lame_init_params;
}

void display_bitrate(void** a1, void** a2, void** a3, void** a4) {
    uint32_t v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    uint32_t v11;
    void** v12;
    void** v13;

    v5 = 14;
    if (reinterpret_cast<int1_t>(a3 == 4)) {
        v5 = 8;
    }
    __asm__("fild dword [ebp+0x10]");
    __asm__("fld qword [0x8059820]");
    __asm__("fdivrp st1, st0");
    __asm__("fstp qword [esp+0x14]");
    v6 = reinterpret_cast<void**>(48 / reinterpret_cast<signed char>(a3));
    v7 = reinterpret_cast<void**>(32 / reinterpret_cast<signed char>(a3));
    v8 = a2;
    fun_804a65c(a1, "\nMPEG-%-3s layer III sample frequencies (kHz):  %2d  %2d  %g\nbitrates (kbps):", v8, v7, v6, v9, v10);
    v11 = 1;
    while (reinterpret_cast<int32_t>(v11) <= reinterpret_cast<int32_t>(v5)) {
        v8 = *reinterpret_cast<void***>(((reinterpret_cast<unsigned char>(a4) << 4) + v11) * 4 + 0x805b2e0);
        fun_804a65c(a1, " %2i", v8, v7, v6, v12, v13);
        ++v11;
    }
    fun_804a73c(10, a1, v8, v7, v6);
    return;
}

int32_t lame_get_num_channels = 0x804a762;

void** fun_804a75c(void** a1, void** a2, void** a3, void** a4) {
    goto lame_get_num_channels;
}

void CloseSndFile(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** ebp8;
    int32_t eax9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;

    eax9 = fun_804a43c(a2, v3, v4, v5, v6, v7, ebp8);
    if (eax9) {
        eax10 = silent;
        if (reinterpret_cast<signed char>(eax10) <= reinterpret_cast<signed char>(9)) {
            error_printf("Could not close audio input file\n", v11, v12, v13, v14);
        }
        fun_804aa7c(2, v15, v16, v17, v18, v19, ebp8);
    }
    return;
}

void** my_error_printing(void** a1, void** a2, void* a3) {
    void** eax4;

    if (!a1) {
        eax4 = reinterpret_cast<void**>(0);
    } else {
        eax4 = fun_804a8ec(a1, a2, a3);
    }
    return eax4;
}

void** my_report_printing(void** a1, void** a2, void* a3) {
    void** eax4;

    if (!a1) {
        eax4 = reinterpret_cast<void**>(0);
    } else {
        eax4 = fun_804a8ec(a1, a2, a3);
    }
    return eax4;
}

void** apply_termcap_settings(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
    uint32_t eax6;
    void** v7;
    int32_t v8;
    void** v9;
    void** eax10;
    void** v11;
    int32_t eax12;
    void** eax13;
    void** eax14;
    void** eax15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    void** v28;
    void** v29;
    void** v30;
    void** eax31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax6 = g14;
    v7 = reinterpret_cast<void**>("TERM");
    eax10 = fun_804a1dc("TERM", v8, v9);
    if (eax10) {
        v11 = eax10;
        v7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffff7ea);
        eax12 = fun_804a3dc(v7, v11);
        if (eax12 == 1) {
            eax13 = fun_804a79c("co", v11);
            if (reinterpret_cast<signed char>(eax13) > reinterpret_cast<signed char>(39) && reinterpret_cast<signed char>(eax13) <= reinterpret_cast<signed char>(0x200)) {
                *reinterpret_cast<void***>(a1 + 20) = eax13;
            }
            eax14 = fun_804a79c("li", v11);
            if (reinterpret_cast<signed char>(eax14) > reinterpret_cast<signed char>(15) && reinterpret_cast<signed char>(eax14) <= reinterpret_cast<signed char>(0x100)) {
                *reinterpret_cast<void***>(a1 + 24) = eax14;
            }
            eax15 = fun_804a97c("up", reinterpret_cast<int32_t>(ebp5) + 0xfffff7e0);
            if (eax15) {
                fun_804a54c(a1 + 28, eax15, v16, v17, v18);
            }
            eax19 = fun_804a97c("ce", reinterpret_cast<int32_t>(ebp5) + 0xfffff7e0);
            if (eax19) {
                fun_804a54c(a1 + 38, eax19, v20, v21, v22);
            }
            eax23 = fun_804a97c("md", reinterpret_cast<int32_t>(ebp5) + 0xfffff7e0);
            if (eax23) {
                fun_804a54c(a1 + 48, eax23, v24, v25, v26);
            }
            v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffff7e0);
            v7 = reinterpret_cast<void**>("me");
            eax27 = fun_804a97c("me", v11);
            if (eax27) {
                v11 = eax27;
                v7 = a1 + 58;
                fun_804a54c(v7, v11, v28, v29, v30);
            }
        }
    }
    eax31 = reinterpret_cast<void**>(eax6 ^ g14);
    if (eax31) {
        eax31 = fun_804a70c(v7, v11, v32, v33, v34, v35, v36, a1, v37);
    }
    return eax31;
}

void** min_size_t(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;

    if (reinterpret_cast<unsigned char>(a1) >= reinterpret_cast<unsigned char>(a2)) {
        eax5 = a2;
    } else {
        eax5 = a1;
    }
    return eax5;
}

int32_t _IO_getc = 0x804a2f2;

uint32_t fun_804a2ec(void** a1) {
    goto _IO_getc;
}

int32_t fileno = 0x804a052;

void** fun_804a04c(void** a1) {
    goto fileno;
}

int32_t fun_804a83c(int32_t a1, void** a2, int32_t a3);

int32_t fstat64(void** a1, void** a2) {
    int32_t eax3;
    int32_t eax4;

    eax3 = __i686_get_pc_thunk_bx();
    eax4 = fun_804a83c(3, a1, eax3);
    return eax4;
}

void** WAV_ID_RIFF = reinterpret_cast<void**>(70);

void** IFF_ID_FORM = reinterpret_cast<void**>(77);

void** parse_file_header(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** eax5;
    int32_t eax6;
    void** eax7;
    void** eax8;
    void** eax9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    int32_t eax14;
    void** eax15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    int32_t eax20;
    void** eax21;
    void** v22;
    void** v23;
    void** v24;

    eax5 = Read32BitsHighLow(a2, v3, v4);
    global = 0;
    eax6 = in_signed;
    g805b3d8 = reinterpret_cast<void**>(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax6 != 1))));
    eax7 = WAV_ID_RIFF;
    if (eax5 != eax7) {
        eax8 = IFF_ID_FORM;
        if (eax5 != eax8) {
            eax9 = silent;
            if (reinterpret_cast<signed char>(eax9) <= reinterpret_cast<signed char>(9)) {
                error_printf("Warning: unsupported audio format\n", v10, v11, v12, v13);
            }
        } else {
            eax14 = parse_aiff_header(a1, a2);
            if (eax14 <= 0) {
                if (eax14 < 0 && (eax15 = silent, reinterpret_cast<signed char>(eax15) <= reinterpret_cast<signed char>(9))) {
                    error_printf("Warning: corrupt or unsupported AIFF format\n", a2, v16, v17, v18);
                }
            } else {
                global = 1;
                eax19 = reinterpret_cast<void**>(3);
                goto addr_804e3df_9;
            }
        }
    } else {
        eax20 = parse_wave_header(a1, a2);
        if (eax20 <= 0) {
            if (eax20 < 0 && (eax21 = silent, reinterpret_cast<signed char>(eax21) <= reinterpret_cast<signed char>(9))) {
                error_printf("Warning: corrupt or unsupported WAVE format\n", a2, v22, v23, v24);
            }
        } else {
            global = 1;
            eax19 = reinterpret_cast<void**>(2);
            goto addr_804e3df_9;
        }
    }
    eax19 = reinterpret_cast<void**>(0);
    addr_804e3df_9:
    return eax19;
}

uint32_t fun_804a53c(void** a1);

void ReadBytes(void** a1, void** a2, void** a3) {
    uint32_t eax4;
    uint32_t edx5;
    uint32_t eax6;
    uint32_t eax7;

    while (eax4 = fun_804a53c(a1), *reinterpret_cast<void***>(&edx5) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax4 == 0))), *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(a3) > reinterpret_cast<signed char>(0)), eax6 = eax4 & edx5, --a3, !!*reinterpret_cast<signed char*>(&eax6)) {
        eax7 = fun_804a2ec(a1);
        edx5 = eax7;
        *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(&edx5);
        ++a2;
    }
    return;
}

int32_t ftell = 0x804a562;

void** fun_804a55c(void** a1, void** a2, void** a3) {
    goto ftell;
}

void** stdin = reinterpret_cast<void**>(0);

void** g805c56c = reinterpret_cast<void**>(0);

void** OpenSndFile(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    int32_t eax13;
    void** eax14;
    void** v15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void** eax26;
    void** v27;
    void** v28;
    int32_t eax29;
    void** eax30;
    void** eax31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** eax40;
    void** eax41;
    void** eax42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    uint32_t eax50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    uint32_t eax65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** eax73;
    void** eax74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** eax79;
    void** v80;
    void** v81;
    int32_t eax82;
    void** eax83;
    void** eax84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** eax89;
    void** v90;
    void** eax91;
    void** eax92;
    void** v93;
    void** v94;
    void** v95;
    void** eax96;
    void** eax97;
    void** eax98;
    void** eax99;
    int32_t eax100;
    void** eax101;
    void** eax102;
    void** v103;

    fun_804a87c(a1, 0xffffffff, v5, v6);
    v7 = reinterpret_cast<void**>("-");
    eax13 = fun_804aa6c(a2, "-", v8, v9, v10, v11, v12);
    if (eax13) {
        v7 = reinterpret_cast<void**>("rb");
        eax14 = fun_804a26c(a2, "rb");
        v15 = eax14;
        if (!v15) {
            eax16 = silent;
            if (reinterpret_cast<signed char>(eax16) <= reinterpret_cast<signed char>(9)) {
                v7 = a2;
                error_printf("Could not find \"%s\".\n", v7, v17, v18, v19);
            }
            fun_804aa7c(1, v7, v20, v21, v22, v23, v24);
        }
    } else {
        eax25 = stdin;
        v15 = eax25;
        lame_set_stream_binary_mode(v15, "-");
    }
    eax26 = input_format;
    eax29 = is_mpeg_file_format(eax26, v7, v27, v28);
    if (!eax29) {
        eax30 = input_format;
        if (reinterpret_cast<int1_t>(eax30 == 8)) {
            eax31 = silent;
            if (reinterpret_cast<signed char>(eax31) <= reinterpret_cast<signed char>(9)) {
                error_printf("sorry, vorbis support in LAME is deprecated.\n", v7, v32, v33, v34);
            }
            fun_804aa7c(1, v7, v35, v36, v37, v38, v39);
        }
        eax40 = input_format;
        if (!reinterpret_cast<int1_t>(eax40 == 1)) {
            v7 = v15;
            eax41 = parse_file_header(a1, v7);
            input_format = eax41;
        } else {
            eax42 = silent;
            if (reinterpret_cast<signed char>(eax42) <= reinterpret_cast<signed char>(9)) {
                console_printf("Assuming raw pcm input file", v7, v43, v44, v45, v46, v47, v48, v49);
                eax50 = swapbytes;
                if (!eax50) {
                    console_printf("\n", v7, v51, v52, v53, v54, v55, v56, v57);
                } else {
                    console_printf(" : Forcing byte-swapping\n", v7, v58, v59, v60, v61, v62, v63, v64);
                }
            }
            eax65 = swapbytes;
            g805b3d4 = eax65;
        }
    } else {
        v66 = a4;
        v67 = a3;
        v68 = reinterpret_cast<void**>(0x805c560);
        eax73 = lame_decode_initfile(v15, 0x805c560, v67, v66, v69, v70, v71, v72);
        if (reinterpret_cast<int1_t>(eax73 == 0xffffffff)) {
            eax74 = silent;
            if (reinterpret_cast<signed char>(eax74) <= reinterpret_cast<signed char>(9)) {
                v68 = a2;
                error_printf("Error reading headers in mp3 input file %s.\n", v68, v67, v66, v75);
            }
            fun_804aa7c(1, v68, v67, v66, v76, v77, v78);
        }
        eax79 = g805c564;
        v80 = eax79;
        eax82 = fun_804a0bc(a1, v80, v67, v66, v81);
        if (eax82 == -1) {
            eax83 = silent;
            if (reinterpret_cast<signed char>(eax83) <= reinterpret_cast<signed char>(9)) {
                eax84 = g805c564;
                v80 = eax84;
                error_printf("Unsupported number of channels: %ud\n", v80, v67, v66, v85);
            }
            fun_804aa7c(1, v80, v67, v66, v86, v87, v88);
        }
        eax89 = g805c568;
        fun_804a93c(a1, eax89, v67, v66, v90);
        eax91 = g805c57c;
        v7 = eax91;
        fun_804a87c(a1, v7, v67, v66);
    }
    eax92 = input_format;
    if (!eax92) {
        fun_804aa7c(1, v7, v67, v66, v93, v94, v95);
    }
    eax96 = fun_804a20c(a1, v7, v67, v66);
    if (reinterpret_cast<int1_t>(eax96 == 0xffffffff) && ((eax97 = stdin, v15 != eax97) && (eax98 = lame_get_file_size(a2, v7, v67, v66), reinterpret_cast<unsigned char>(v15) >= reinterpret_cast<unsigned char>(eax97)))) {
        eax99 = input_format;
        eax100 = is_mpeg_file_format(eax99, v7, v67, v66);
        if (!eax100) {
            fun_804a75c(a1, v7, v67, v66);
            __asm__("fild dword [ebp-0x2c]");
            __asm__("fld qword [ebp-0x18]");
            __asm__("fdivrp st1, st0");
            __asm__("fnstcw word [ebp-0x2e]");
            __asm__("fldcw word [ebp-0x30]");
            __asm__("fistp qword [ebp-0x38]");
            __asm__("fldcw word [ebp-0x2e]");
            fun_804a87c(a1, eax98, v67, v66, a1, eax98, v67, v66);
        } else {
            eax101 = g805c56c;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax101) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax101 == 0))) {
                __asm__("fld qword [ebp-0x18]");
                __asm__("fld qword [0x80554c0]");
                __asm__("fmulp st1, st0");
                eax102 = g805c56c;
                __asm__("fild dword [ebp-0x2c]");
                __asm__("fld qword [0x80554c8]");
                __asm__("fmulp st1, st0");
                __asm__("fdivp st1, st0");
                __asm__("fstp qword [ebp-0x20]");
                fun_804a06c(a1, v7, v67, v66, eax98, "rb", v103, eax102);
                __asm__("fild dword [ebp-0x2c]");
                __asm__("fmul qword [ebp-0x20]");
                __asm__("fnstcw word [ebp-0x2e]");
                __asm__("fldcw word [ebp-0x30]");
                __asm__("fistp qword [ebp-0x38]");
                __asm__("fldcw word [ebp-0x2e]");
                fun_804a87c(a1, eax98, v67, v66, a1, eax98, v67, v66);
                g805c57c = eax98;
            }
        }
    }
    return v15;
}

int32_t fun_804a0fc(void** a1, int32_t a2, int32_t a3);

uint32_t check_aid(void** a1, void** a2, void** a3, void** a4) {
    int32_t eax5;

    eax5 = fun_804a0fc(a1, 0x805540a, 4);
    return static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax5 == 0)));
}

int32_t fun_804a1ac(int32_t a1, void** a2, int32_t a3);

int32_t stat64(void** a1, void* a2) {
    int32_t eax3;
    int32_t eax4;

    eax3 = __i686_get_pc_thunk_bx();
    eax4 = fun_804a1ac(3, a1, eax3);
    return eax4;
}

int32_t is_syncword_mp123(void** a1, void** a2, void** a3, void** a4) {
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    void** eax10;
    void** eax11;
    int32_t eax12;
    void** eax13;
    void** eax14;
    void** eax15;
    void** eax16;
    uint32_t eax17;
    uint32_t eax18;
    uint32_t eax19;
    uint32_t eax20;
    uint32_t eax21;
    uint32_t eax22;
    uint32_t eax23;
    uint32_t eax24;
    uint32_t ecx25;
    uint32_t eax26;
    uint32_t eax27;

    eax5 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1));
    if (*reinterpret_cast<signed char*>(&eax5) == -1) {
        eax6 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 1));
        if ((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax6)) & 0xe0) == 0xe0) {
            eax7 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 1));
            if ((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax7)) & 24) != 8) {
                eax8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 1));
                eax9 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax8)) & 6;
                if (eax9 == 4) {
                    eax10 = input_format;
                    if (eax10 == 5 || (eax11 = input_format, eax11 == 7)) {
                        input_format = reinterpret_cast<void**>(5);
                    } else {
                        eax12 = 0;
                        goto addr_804e95b_8;
                    }
                } else {
                    if (eax9 == 6) {
                        eax13 = input_format;
                        if (eax13 == 4 || (eax14 = input_format, eax14 == 7)) {
                            input_format = reinterpret_cast<void**>(4);
                        } else {
                            eax12 = 0;
                            goto addr_804e95b_8;
                        }
                    } else {
                        if (eax9 == 2) {
                            eax15 = input_format;
                            if (eax15 == 6 || (eax16 = input_format, eax16 == 7)) {
                                input_format = reinterpret_cast<void**>(6);
                            } else {
                                eax12 = 0;
                                goto addr_804e95b_8;
                            }
                        } else {
                            eax12 = 0;
                            goto addr_804e95b_8;
                        }
                    }
                }
            } else {
                eax12 = 0;
                goto addr_804e95b_8;
            }
        } else {
            eax12 = 0;
            goto addr_804e95b_8;
        }
    } else {
        eax12 = 0;
        goto addr_804e95b_8;
    }
    eax17 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 1));
    if (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax17)) & 6) {
        eax18 = *reinterpret_cast<unsigned char*>(a1 + 2);
        if ((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax18)) & 0xf0) != 0xf0) {
            eax19 = *reinterpret_cast<unsigned char*>(a1 + 2);
            if ((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax19)) & 12) != 12) {
                eax20 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 1));
                if ((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax20)) & 24) != 24 || ((eax21 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 1)), (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax21)) & 6) != 4) || (eax22 = *reinterpret_cast<unsigned char*>(a1 + 2), eax23 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax22) >> 4) + 0x80554a5), eax24 = *reinterpret_cast<unsigned char*>(a1 + 3), ecx25 = *reinterpret_cast<unsigned char*>(&eax24) >> 6, eax26 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax23)) >> *reinterpret_cast<signed char*>(&ecx25)) & 1, *reinterpret_cast<signed char*>(&eax26) == 0))) {
                    eax27 = *reinterpret_cast<unsigned char*>(a1 + 3);
                    if ((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax27)) & 3) != 2) {
                        eax12 = 1;
                    } else {
                        eax12 = 0;
                    }
                } else {
                    eax12 = 0;
                }
            } else {
                eax12 = 0;
            }
        } else {
            eax12 = 0;
        }
    } else {
        eax12 = 0;
    }
    addr_804e95b_8:
    return eax12;
}

int32_t hip_decode1_headersB = 0x804aa32;

int32_t fun_804aa2c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto hip_decode1_headersB;
}

void fun_804a61c(void** a1, void** a2);

void fun_804a2cc(void** a1, void** a2);

void** fun_804a86c(void** a1, void** a2);

void fun_804a6dc(void** a1, void** a2);

void** fun_804a82c(void** a1, void** a2);

void fun_804a59c(void** a1, void** a2);

void** fun_804a9fc(void** a1, void** a2);

void fun_804a6cc(void** a1, void** a2);

void** set_id3tag(void** a1, void** a2, void** a3) {
    void** eax4;

    switch (a2 - 97) {
    default:
        eax4 = reinterpret_cast<void**>(0);
        break;
    case 0:
        fun_804a61c(a1, a3);
        eax4 = reinterpret_cast<void**>(0);
        break;
    case 2:
        fun_804a2cc(a1, a3);
        eax4 = reinterpret_cast<void**>(0);
        break;
    case 6:
        eax4 = fun_804a86c(a1, a3);
        break;
    case 11:
        fun_804a6dc(a1, a3);
        eax4 = reinterpret_cast<void**>(0);
        break;
    case 13:
        eax4 = fun_804a82c(a1, a3);
        break;
    case 19:
        fun_804a59c(a1, a3);
        eax4 = reinterpret_cast<void**>(0);
        break;
    case 21:
        eax4 = fun_804a9fc(a1, a3);
        break;
    case 24:
        fun_804a6cc(a1, a3);
        eax4 = reinterpret_cast<void**>(0);
    }
    return eax4;
}

int32_t id3tag_set_artist = 0x804a622;

void fun_804a61c(void** a1, void** a2) {
    goto id3tag_set_artist;
}

int32_t id3tag_set_comment = 0x804a2d2;

void fun_804a2cc(void** a1, void** a2) {
    goto id3tag_set_comment;
}

int32_t id3tag_set_genre = 0x804a872;

void** fun_804a86c(void** a1, void** a2) {
    goto id3tag_set_genre;
}

int32_t id3tag_set_album = 0x804a6e2;

void fun_804a6dc(void** a1, void** a2) {
    goto id3tag_set_album;
}

int32_t id3tag_set_track = 0x804a832;

void** fun_804a82c(void** a1, void** a2) {
    goto id3tag_set_track;
}

int32_t id3tag_set_title = 0x804a5a2;

void fun_804a59c(void** a1, void** a2) {
    goto id3tag_set_title;
}

int32_t id3tag_set_fieldvalue = 0x804aa02;

void** fun_804a9fc(void** a1, void** a2) {
    goto id3tag_set_fieldvalue;
}

int32_t id3tag_set_year = 0x804a6d2;

void fun_804a6cc(void** a1, void** a2) {
    goto id3tag_set_year;
}

int32_t get_lame_os_bitness = 0x804a1d2;

void** fun_804a1cc() {
    goto get_lame_os_bitness;
}

int32_t get_lame_version = 0x804a092;

void** fun_804a08c() {
    goto get_lame_version;
}

int32_t get_lame_url = 0x804a2a2;

void** fun_804a29c() {
    goto get_lame_url;
}

int32_t tolower = 0x804aa42;

unsigned char fun_804aa3c(int32_t a1) {
    goto tolower;
}

int32_t id3tag_set_albumart = 0x804a0f2;

int32_t fun_804a0ec(void** a1, void** a2, void** a3, void** a4) {
    goto id3tag_set_albumart;
}

int32_t strdup = 0x804a9f2;

void** fun_804a9ec(void** a1) {
    goto strdup;
}

int32_t lame_set_lowpasswidth = 0x804aa62;

void fun_804aa5c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_lowpasswidth;
}

int32_t lame_set_highpasswidth = 0x804a9e2;

void fun_804a9dc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_highpasswidth;
}

int32_t lame_set_compression_ratio = 0x804a362;

void fun_804a35c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_compression_ratio;
}

int32_t lame_get_VBR_q = 0x804aaa2;

void** fun_804aa9c(void** a1, void** a2, void** a3, void** a4) {
    goto lame_get_VBR_q;
}

void wait_for(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** ebp13;
    void** v14;
    void** v15;
    void** v16;

    if (!a2) {
        fun_804a73c(10, a1, v5, v6, v7);
    } else {
        fun_804a3ec(a1, v8, v9, v10, v11, v12, ebp13);
        fun_804a13c(a1);
    }
    fun_804a73c(10, a1, v14, v15, v16);
    return;
}

int32_t lame_set_VBR_max_bitrate_kbps = 0x804a752;

void fun_804a74c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_VBR_max_bitrate_kbps;
}

int32_t lame_set_VBR_hard_min = 0x804a302;

void fun_804a2fc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_VBR_hard_min;
}

int32_t lame_get_VBR = 0x804a522;

uint32_t fun_804a51c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_get_VBR;
}

int32_t __isoc99_sscanf = 0x804a1a2;

void* fun_804a19c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto __isoc99_sscanf;
}

int32_t lame_set_experimentalY = 0x804a902;

void fun_804a8fc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_experimentalY;
}

int32_t lame_set_brate = 0x804a5c2;

void fun_804a5bc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_brate;
}

int32_t lame_set_VBR_min_bitrate_kbps = 0x804a422;

void fun_804a41c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_VBR_min_bitrate_kbps;
}

int32_t lame_set_copyright = 0x804aa52;

void fun_804aa4c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_copyright;
}

int32_t lame_set_quality = 0x804a682;

void fun_804a67c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_quality;
}

int32_t lame_set_original = 0x804a782;

void fun_804a77c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_original;
}

int32_t lame_set_error_protection = 0x804a202;

void fun_804a1fc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_error_protection;
}

int32_t lame_set_force_ms = 0x804a352;

void fun_804a34c(void** a1, int32_t a2, void** a3, void** a4, void** a5) {
    goto lame_set_force_ms;
}

int32_t lame_set_in_samplerate = 0x804a942;

void fun_804a93c(void** a1, void** a2, void** a3, void** a4, void** a5, ...) {
    goto lame_set_in_samplerate;
}

int32_t lame_set_emphasis = 0x804a8b2;

void fun_804a8ac(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_set_emphasis;
}

int32_t lame_get_free_format = 0x804a8a2;

int32_t fun_804a89c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_get_free_format;
}

int32_t lame_get_mode = 0x804a6b2;

int32_t fun_804a6ac(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto lame_get_mode;
}

int32_t ldexp = 0x804a062;

void fun_804a05c() {
    goto ldexp;
}

void** ts_time_decompose(void* a1, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    void** v7;
    uint32_t eax8;
    void** v9;
    uint32_t eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;

    eax6 = a2;
    v7 = reinterpret_cast<void**>(__intrinsic() >> 11);
    eax8 = __intrinsic() >> 5 << 2;
    v9 = reinterpret_cast<void**>((__intrinsic() >> 5) - ((eax8 << 4) - eax8));
    eax10 = __intrinsic() >> 5 << 2;
    v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(a1) - ((eax10 << 4) - eax10));
    if (v7) {
        if (reinterpret_cast<unsigned char>(v7) > reinterpret_cast<unsigned char>(99)) {
            eax18 = console_printf("%6lu h%c", v7, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax6)), v12, v13, v14, v15, v16, v17);
        } else {
            eax18 = console_printf("%2lu:%02u:%02u%c", v7, v9, v11, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax6)), v19, v20, v21, v22);
        }
    } else {
        eax18 = console_printf("   %2u:%02u%c", v9, v11, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax6)), v23, v24, v25, v26, v27);
    }
    return eax18;
}

int32_t gettimeofday = 0x804a372;

void fun_804a36c(void* a1, int32_t a2) {
    goto gettimeofday;
}

int32_t clock = 0x804a482;

int32_t fun_804a47c() {
    goto clock;
}

int32_t lame_get_VBR_quality = 0x804a922;

void fun_804a91c(void** a1, void** a2, void** a3, void** a4) {
    goto lame_get_VBR_quality;
}

int32_t lame_get_quality = 0x804a592;

void** fun_804a58c(void** a1, void** a2, void** a3, void** a4) {
    goto lame_get_quality;
}

int32_t lame_get_compression_ratio = 0x804a242;

void fun_804a23c(void** a1, void** a2, void** a3, void** a4) {
    goto lame_get_compression_ratio;
}

int32_t lame_get_force_ms = 0x804a992;

int32_t fun_804a98c(void** a1, void** a2, void** a3, void** a4) {
    goto lame_get_force_ms;
}

void fun_804a07c(void** a1, void** a2);

void console_up(int32_t a1) {
    void** v2;
    void** ebp3;
    unsigned char al4;
    void** edx5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;

    v2 = ebp3;
    while (al4 = reinterpret_cast<uint1_t>(a1 > 0), --a1, !!al4) {
        edx5 = g805bce8;
        v6 = edx5;
        fun_804a07c(0x805bcfc, v6);
    }
    console_flush(0x805bcfc, v6, v7, v8, v9, v10, v2);
    return;
}

int32_t lame_get_totalframes = 0x804a702;

void** fun_804a6fc(void** a1, void** a2, uint32_t a3, uint32_t a4, void** a5) {
    goto lame_get_totalframes;
}

int32_t lame_get_framesize = 0x804a602;

void** fun_804a5fc(void** a1) {
    goto lame_get_framesize;
}

void* stats_head(void** a1, void** a2, void** a3) {
    void* eax4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;

    __asm__("fld qword [ebp-0x10]");
    __asm__("fldz ");
    __asm__("fxch st0, st1");
    __asm__("fucomip st0, st1");
    __asm__("fstp st0");
    if (reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) <= 40) {
        eax4 = reinterpret_cast<void*>(0);
    } else {
        console_printf(a3, v5, v6, v7, v8, v9, a1, a2, v10);
        eax4 = reinterpret_cast<void*>(6);
    }
    return eax4;
}

void stats_line(void* a1, void** a2, void** a3, uint32_t a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void* eax14;
    void** v15;
    void* eax16;
    void** v17;
    void* eax18;
    void** v19;
    void* eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void* eax29;
    void** v30;
    void* eax31;
    void** v32;
    void* eax33;
    void** v34;
    void** v35;
    void* eax36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** eax44;
    void** v45;
    uint32_t eax46;
    void* eax47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    int32_t eax59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void* eax65;
    void* eax66;
    void* eax67;
    void* eax68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void* eax75;
    void* eax76;
    void* eax77;
    void* eax78;
    void** v79;
    uint32_t eax80;
    void* eax81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    int32_t eax92;

    console_printf("\n   kbps     ", v6, v7, v8, v9, v10, v11, 1, v12);
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax14 = stats_head("\n   kbps     ", v13, "  mono");
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax16 = stats_head("\n   kbps     ", v15, "   IS ");
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax18 = stats_head("\n   kbps     ", v17, "   LR ");
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax20 = stats_head("\n   kbps     ", v19, "   MS ");
    v21 = reinterpret_cast<void**>(13 + reinterpret_cast<uint32_t>(eax14) + reinterpret_cast<uint32_t>(eax16) + reinterpret_cast<uint32_t>(eax18) + reinterpret_cast<uint32_t>(eax20));
    console_printf(" %%    ", v22, "   MS ", v23, v24, v25, v26, v21, v27);
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax29 = stats_head(" %%    ", v28, " long ");
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax31 = stats_head(" %%    ", v30, "switch");
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax33 = stats_head(" %%    ", v32, " short");
    __asm__("fld qword [eax]");
    v34 = reinterpret_cast<void**>(" mixed");
    __asm__("fstp qword [esp]");
    eax36 = stats_head(" %%    ", v35, " mixed");
    v37 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v21 + 6) + reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax31) + reinterpret_cast<uint32_t>(eax33) + reinterpret_cast<uint32_t>(eax36));
    eax44 = console_printf(" %%", v38, " mixed", v39, v40, v41, v42, v37, v43);
    v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v37) + reinterpret_cast<unsigned char>(eax44));
    eax46 = g805bd06;
    if (!*reinterpret_cast<signed char*>(&eax46)) {
        eax47 = g805bcf4;
        v34 = reinterpret_cast<void**>(0x8059b6f);
        v48 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax47) - reinterpret_cast<unsigned char>(v45));
        console_printf("%*s", v48, 0x8059b6f, v49, v50, v51, v52, v45, v53);
    } else {
        v48 = reinterpret_cast<void**>(0x805bd06);
        console_printf("%s", 0x805bd06, " mixed", v54, v55, v56, v57, v45, v58);
    }
    eax59 = g805b4c0;
    g805b4c0 = eax59 + 1;
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp+0x4]");
    console_printf("\n  %5.1f     ", v48, v34, v60, v61, v62, v63, 1, v64);
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax65 = stats_value("\n  %5.1f     ", v48, v34);
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax66 = stats_value("\n  %5.1f     ", v48, v34);
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax67 = stats_value("\n  %5.1f     ", v48, v34);
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax68 = stats_value("\n  %5.1f     ", v48, v34);
    v69 = reinterpret_cast<void**>(13 + reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(eax66) + reinterpret_cast<uint32_t>(eax67) + reinterpret_cast<uint32_t>(eax68));
    console_printf("      ", v48, v34, v70, v71, v72, v73, v69, v74);
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax75 = stats_value("      ", v48, v34);
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax76 = stats_value("      ", v48, v34);
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax77 = stats_value("      ", v48, v34);
    __asm__("fld qword [eax]");
    __asm__("fstp qword [esp]");
    eax78 = stats_value("      ", v48, v34);
    v79 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v69 + 6) + reinterpret_cast<uint32_t>(eax75) + reinterpret_cast<uint32_t>(eax76) + reinterpret_cast<uint32_t>(eax77) + reinterpret_cast<uint32_t>(eax78));
    eax80 = g805bd06;
    if (!*reinterpret_cast<signed char*>(&eax80)) {
        eax81 = g805bcf4;
        console_printf("%*s", reinterpret_cast<int32_t>(eax81) - reinterpret_cast<unsigned char>(v79), 0x8059b6f, v82, v83, v84, v85, v79, v86);
    } else {
        console_printf("%s", 0x805bd06, v34, v87, v88, v89, v90, v79, v91);
    }
    eax92 = g805b4c0;
    g805b4c0 = eax92 + 1;
    return;
}

void __do_global_dtors_aux();

struct s4 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8054848(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s4* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t fputs = 0x804a082;

void fun_804a07c(void** a1, void** a2) {
    goto fputs;
}

int32_t lame_get_lametag_frame = 0x804a322;

void** fun_804a31c(void** a1, void** a2, void** a3) {
    goto lame_get_lametag_frame;
}

int32_t __fxstat64 = 0x804a842;

int32_t fun_804a83c(int32_t a1, void** a2, int32_t a3) {
    goto __fxstat64;
}

int32_t memcmp = 0x804a102;

int32_t fun_804a0fc(void** a1, int32_t a2, int32_t a3) {
    goto memcmp;
}

int32_t __xstat64 = 0x804a1b2;

int32_t fun_804a1ac(int32_t a1, void** a2, int32_t a3) {
    goto __xstat64;
}

int32_t feof = 0x804a542;

uint32_t fun_804a53c(void** a1) {
    goto feof;
}

/* completed.7065 */
signed char completed_7065 = 0;

/* dtor_idx.7067 */
uint32_t dtor_idx_7067 = 0;

void __do_global_dtors_aux() {
    int1_t zf1;
    uint32_t eax2;
    uint32_t eax3;

    zf1 = completed_7065 == 0;
    if (zf1) {
        eax2 = dtor_idx_7067;
        if (eax2 < 0) {
            do {
                eax3 = eax2 + 1;
                dtor_idx_7067 = eax3;
                *reinterpret_cast<int32_t*>(eax3 * 4 + 0x805af04)();
                eax2 = dtor_idx_7067;
            } while (eax2 < 0);
        }
        completed_7065 = 1;
    }
    return;
}

void** main(void** a1, void** a2);

void __libc_csu_fini();

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_804a2bc(main, __return_address(), esp1, 0x8054730, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_804ab55() {
}

void** g805bcf0 = reinterpret_cast<void**>(0);

void** set_debug_file(void** a1) {
    void** eax2;
    void** eax3;
    void** eax4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;

    eax2 = g805bcf0;
    if (!eax2) {
        eax3 = fun_804a26c(a1, "a");
        g805bcf0 = eax3;
        eax4 = g805bcf0;
        if (!eax4) {
            eax2 = error_printf("Error: can't open for debug info: %s\n", a1, v5, v6, v7);
        } else {
            eax2 = error_printf("writing debug info into: %s\n", a1, v8, v9, v10);
        }
    }
    return eax2;
}

void Write8Bits(void** a1, int32_t a2) {
    int32_t eax3;

    eax3 = a2;
    fun_804a90c(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax3)), a1);
    return;
}

void ReadBytesSwapped(void** a1, unsigned char* a2) {
    unsigned char* ebx3;
    uint32_t eax4;
    uint32_t edx5;
    int32_t v6;
    uint32_t eax7;
    uint32_t eax8;
    unsigned char* ebx9;
    uint32_t eax10;
    uint32_t edx11;
    int32_t eax12;

    ebx3 = a2;
    while (eax4 = fun_804a53c(a1), *reinterpret_cast<unsigned char*>(&edx5) = reinterpret_cast<uint1_t>(eax4 == 0), *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<uint1_t>(v6 > 0), eax7 = eax4 & edx5, --v6, !!*reinterpret_cast<signed char*>(&eax7)) {
        eax8 = fun_804a2ec(a1);
        *ebx3 = *reinterpret_cast<unsigned char*>(&eax8);
        ++ebx3;
    }
    ebx9 = ebx3 - 1;
    while (reinterpret_cast<uint32_t>(a2) < reinterpret_cast<uint32_t>(ebx9)) {
        eax10 = *a2;
        edx11 = *ebx9;
        *a2 = *reinterpret_cast<unsigned char*>(&edx11);
        eax12 = *reinterpret_cast<signed char*>(&eax10);
        *ebx9 = *reinterpret_cast<unsigned char*>(&eax12);
        ++a2;
        --ebx9;
    }
    return;
}

void WriteBytes(void** a1) {
    unsigned char al2;
    int32_t v3;
    uint32_t eax4;
    unsigned char* v5;

    while (al2 = reinterpret_cast<uint1_t>(v3 > 0), --v3, !!al2) {
        eax4 = *v5;
        ++v5;
        fun_804a90c(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax4)), a1);
    }
    return;
}

void WriteBytesSwapped(void** a1, int32_t a2, int32_t a3) {
    unsigned char* v4;
    unsigned char al5;
    uint32_t eax6;

    v4 = reinterpret_cast<unsigned char*>(a2 + (a3 - 1));
    while (al5 = reinterpret_cast<uint1_t>(a3 > 0), --a3, !!al5) {
        eax6 = *v4;
        --v4;
        fun_804a90c(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax6)), a1);
    }
    return;
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_8054848(v1, ebx2, ebp3, __return_address());
}

int32_t g805affc = 0;

void fun_804a192() {
    goto g805affc;
}

void fun_804a048() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_804a2c2() {
    goto 0x804a03c;
}

void fun_804a382() {
    goto 0x804a03c;
}

void fun_804aa72() {
    goto 0x804a03c;
}

void** report_printf(void** a1) {
    void** eax2;
    void** eax3;

    eax2 = g805bcf0;
    eax3 = my_console_printing(eax2, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 12);
    return eax3;
}

void fun_804a962() {
    goto 0x804a03c;
}

void fun_804a212() {
    goto 0x804a03c;
}

void fun_804a4b2() {
    goto 0x804a03c;
}

void fun_804a072() {
    goto 0x804a03c;
}

void error_flush() {
    void** eax1;
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** ebp7;

    eax1 = g805bcec;
    fun_804a3ec(eax1, v2, v3, v4, v5, v6, ebp7);
    return;
}

void fun_804a3f2() {
    goto 0x804a03c;
}

void fun_804a412() {
    goto 0x804a03c;
}

void fun_804a932() {
    goto 0x804a03c;
}

void fun_804a122() {
    goto 0x804a03c;
}

void fun_804a4a2() {
    goto 0x804a03c;
}

void fun_804a172() {
    goto 0x804a03c;
}

void fun_804a232() {
    goto 0x804a03c;
}

void fun_804a712() {
    goto 0x804a03c;
}

void fun_804a282() {
    goto 0x804a03c;
}

void fun_804a732() {
    goto 0x804a03c;
}

void fun_804a802() {
    goto 0x804a03c;
}

void fun_804a652() {
    goto 0x804a03c;
}

void fun_804a252() {
    goto 0x804a03c;
}

void fun_804a292() {
    goto 0x804a03c;
}

void fun_804a1f2() {
    goto 0x804a03c;
}

void** frontend_errorf(void** a1, void* a2);

void** frontend_debugf(void** a1, void* a2);

void** frontend_msgf(void** a1, void* a2);

int32_t update_interval = 0;

void** main(void** a1, void** a2) {
    void*** esp3;
    void** v4;
    uint32_t eax5;
    uint32_t v6;
    void** v7;
    void** v8;
    void*** esp9;
    void* v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** v16;
    void** eax17;
    void*** esp18;
    void*** esp19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void*** esp25;
    void** v26;
    uint32_t eax27;
    unsigned char v28;
    void** eax29;
    void*** esp30;
    void** v31;
    void** v32;
    void*** esp33;
    void** v34;
    void** eax35;
    void** eax36;
    void** eax37;
    int32_t eax38;
    void*** esp39;
    void*** esp40;
    void** eax41;
    int32_t v42;
    void** eax43;
    void*** esp44;
    void** eax45;
    void** eax46;
    void*** esp47;
    void** eax48;
    void** eax49;
    int32_t eax50;
    void** eax51;
    void** v52;
    void** eax53;
    void** eax54;
    void** eax55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    uint32_t edx72;
    void** v73;
    void** v74;

    esp3 = reinterpret_cast<void***>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 4 - 0xcb45c);
    v4 = a2;
    eax5 = g14;
    v6 = eax5;
    v7 = reinterpret_cast<void**>(0);
    fun_804a25c(esp3 + 60, 0, 0xc80c8, v8);
    esp9 = esp3 - 4 + 4;
    v10 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v10) <= reinterpret_cast<int32_t>(0xc7)) {
        *reinterpret_cast<void**>(esp9 + reinterpret_cast<uint32_t>(v10) * 4 + 0xc8104) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp9 + 60) + ((reinterpret_cast<uint32_t>(v10) << 12) + reinterpret_cast<uint32_t>(v10)));
        v10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v10) + 1);
    }
    v11 = reinterpret_cast<void**>(0x1001);
    v12 = reinterpret_cast<void**>(0);
    v13 = reinterpret_cast<void**>(esp9 + 0xc8449);
    fun_804a25c(v13, 0, 0x1001, v14);
    frontend_open_console(v13, 0, 0x1001);
    input_format = reinterpret_cast<void**>(0);
    eax15 = fun_804a9cc(v13, 0, 0x1001);
    v16 = eax15;
    if (v16) {
        fun_804a44c(v16, frontend_errorf, 0x1001);
        fun_804a21c(v16, frontend_debugf, 0x1001);
        fun_804a6bc(v16, frontend_msgf, 0x1001);
        if (reinterpret_cast<signed char>(a1) > reinterpret_cast<signed char>(1)) {
            eax17 = fun_804a1dc("LAMEOPT", frontend_msgf, 0x1001);
            esp18 = esp9 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4;
            parse_args_from_string(v16, eax17, esp18 + 0xc8449, esp18 + 0xca44b);
            esp19 = esp18 - 4 + 4;
            v20 = reinterpret_cast<void**>(esp19 + 0xc8430);
            v21 = reinterpret_cast<void**>(esp19 + 0xc8104);
            v22 = reinterpret_cast<void**>(esp19 + 0xca44b);
            v23 = reinterpret_cast<void**>(esp19 + 0xc8449);
            v11 = v4;
            v12 = a1;
            eax24 = parse_args(v16, v12, v11, v23, v22, v21, v20);
            esp25 = esp19 - 4 + 4;
            v26 = eax24;
            if (reinterpret_cast<signed char>(v26) >= reinterpret_cast<signed char>(0)) {
                __asm__("fld dword [0x805c550]");
                __asm__("fldz ");
                __asm__("fucomip st0, st1");
                __asm__("fstp st0");
                if (reinterpret_cast<unsigned char>(v26) > reinterpret_cast<unsigned char>(0)) {
                    update_interval = 0x40000000;
                }
                eax27 = v28;
                if (*reinterpret_cast<signed char*>(&eax27) && !0) {
                    fun_804a1ec(esp25 + 0xc944a, esp25 + 0xca44b, 0x1001, v23, v22, v21, v20);
                    esp25 = esp25 - 4 + 4;
                    v7 = reinterpret_cast<void**>(1);
                }
                if (0) {
                    v22 = reinterpret_cast<void**>(esp25 + 0xc8438);
                    v23 = reinterpret_cast<void**>(esp25 + 0xc843c);
                    v11 = reinterpret_cast<void**>(esp25 + 0xca44b);
                    v12 = reinterpret_cast<void**>(esp25 + 0xc8449);
                    eax29 = init_files(v16, v12, v11, v23, v22, v21, v20);
                    esp30 = esp25 - 4 + 4;
                    v31 = eax29;
                } else {
                    parse_nogap_filenames(v7, v32, esp25 + 0xca44b, esp25 + 0xc944a, v22, v21, v20);
                    esp33 = esp25 - 4 + 4;
                    v22 = reinterpret_cast<void**>(esp33 + 0xc8438);
                    v23 = reinterpret_cast<void**>(esp33 + 0xc843c);
                    v11 = reinterpret_cast<void**>(esp33 + 0xca44b);
                    v12 = v34;
                    eax35 = init_files(v16, v12, v11, v23, v22, v21, v20);
                    esp30 = esp33 - 4 + 4;
                    v31 = eax35;
                }
                if (v31) {
                    v12 = reinterpret_cast<void**>(0);
                    fun_804a2ac(v16, 0, v11, v23, v22, v21, v20);
                    eax36 = fun_804a7cc(v16, 0, v11, v23, v22, v21, v20);
                    if (reinterpret_cast<signed char>(eax36) >= reinterpret_cast<signed char>(0)) {
                        eax37 = silent;
                        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax37) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax37 == 0))) {
                            brhist = 0;
                        }
                        eax38 = fun_804a30c(v16, 0, v11, v23, v22, v21, v20);
                        esp39 = esp30 - 4 + 4 - 4 + 4 - 4 + 4;
                        if (!eax38) {
                            if (0) {
                                brhist_init_package(v16, 0, v11, v23, v22, v21, v20);
                                esp40 = esp39 - 4 + 4;
                                v22 = reinterpret_cast<void**>(esp40 + 0xca44b);
                                v23 = reinterpret_cast<void**>(esp40 + 0xc8449);
                                v11 = reinterpret_cast<void**>(0);
                                v12 = v31;
                                eax41 = lame_encoder(v16, v12, 0, v23, v22, v21, v20);
                                v26 = eax41;
                                fun_804a43c(v31, v12, 0, v23, v22, v21, v20);
                                close_infile(v31, v12, 0, v23, v22, v21, v20);
                            } else {
                                v42 = 0;
                                while (v42 < 0xc8) {
                                    if (v42 > 0) {
                                        eax43 = (esp39 + v42 * 4)[0xc8104];
                                        parse_nogap_filenames(v7, eax43, esp39 + 0xca44b, esp39 + 0xc944a, v22, v21, v20);
                                        esp44 = esp39 - 4 + 4;
                                        eax45 = (esp44 + v42 * 4)[0xc8104];
                                        v22 = reinterpret_cast<void**>(esp44 + 0xc8438);
                                        v23 = reinterpret_cast<void**>(esp44 + 0xc843c);
                                        v11 = reinterpret_cast<void**>(esp44 + 0xca44b);
                                        v12 = eax45;
                                        eax46 = init_files(v16, v12, v11, v23, v22, v21, v20);
                                        v31 = eax46;
                                        fun_804a45c(v16, v12, v11, v23, v22, v21, v20);
                                        esp39 = esp44 - 4 + 4 - 4 + 4;
                                    }
                                    brhist_init_package(v16, v12, v11, v23, v22, v21, v20);
                                    fun_804a3cc(v16, 0xc8, v11, v23, v22, v21, v20);
                                    fun_804a4fc(v16, v42, v11, v23, v22, v21, v20);
                                    esp47 = esp39 - 4 + 4 - 4 + 4 - 4 + 4;
                                    eax48 = (esp47 + v42 * 4)[0xc8104];
                                    v22 = reinterpret_cast<void**>(esp47 + 0xca44b);
                                    v23 = eax48;
                                    v11 = reinterpret_cast<void**>(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(0xc7 != v42))));
                                    v12 = v31;
                                    eax49 = lame_encoder(v16, v12, v11, v23, v22, v21, v20);
                                    v26 = eax49;
                                    fun_804a43c(v31, v12, v11, v23, v22, v21, v20);
                                    close_infile(v31, v12, v11, v23, v22, v21, v20);
                                    esp39 = esp47 - 4 + 4 - 4 + 4 - 4 + 4;
                                    ++v42;
                                }
                            }
                        } else {
                            eax50 = mp3_delay_set;
                            if (!eax50) {
                                v20 = reinterpret_cast<void**>(esp39 + 0xc8438);
                                v21 = reinterpret_cast<void**>(esp39 + 0xc843c);
                                v22 = reinterpret_cast<void**>(esp39 + 0xca44b);
                                v23 = reinterpret_cast<void**>(esp39 + 0xc8449);
                                v11 = reinterpret_cast<void**>(0);
                                v12 = v31;
                                lame_decoder(v16, v12, 0, v23, v22, v21, v20);
                            } else {
                                eax51 = mp3_delay;
                                v20 = reinterpret_cast<void**>(esp39 + 0xc8438);
                                v21 = reinterpret_cast<void**>(esp39 + 0xc843c);
                                v22 = reinterpret_cast<void**>(esp39 + 0xca44b);
                                v23 = reinterpret_cast<void**>(esp39 + 0xc8449);
                                v11 = eax51;
                                v12 = v31;
                                lame_decoder(v16, v12, v11, v23, v22, v21, v20);
                            }
                        }
                        v52 = v16;
                        fun_804a3bc(v52, v12, v11, v23, v22, v21, v20);
                        frontend_close_console(v52, v12, v11, v23, v22, v21, v20);
                        eax53 = v26;
                    } else {
                        if (reinterpret_cast<int1_t>(eax36 == 0xffffffff)) {
                            eax54 = stderr;
                            display_bitrates(eax54, 0, v11, v23, v22, v21, v20);
                        }
                        error_printf("fatal error during initialization\n", 0, v11, v23, v22, "fatal error during initialization\n", 0, v11, v23, v22);
                        v52 = v16;
                        fun_804a3bc(v52, 0, v11, v23, v22, v21, v20);
                        frontend_close_console(v52, 0, v11, v23, v22, v21, v20);
                        eax53 = eax36;
                    }
                } else {
                    v52 = v16;
                    fun_804a3bc(v52, v12, v11, v23, v22, v21, v20);
                    frontend_close_console(v52, v12, v11, v23, v22, v21, v20);
                    eax53 = reinterpret_cast<void**>(0xffffffff);
                }
            } else {
                v52 = v16;
                fun_804a3bc(v52, v12, v11, v23, v22, v21, v20);
                frontend_close_console(v52, v12, v11, v23, v22, v21, v20);
                eax53 = reinterpret_cast<void**>(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v26 == 0xfffffffe)))));
            }
        } else {
            eax55 = stderr;
            v12 = *reinterpret_cast<void***>(v4);
            usage(eax55, v12, 0x1001, v56, v57);
            v52 = v16;
            fun_804a3bc(v52, v12, 0x1001, v58, v59, v60, v61);
            frontend_close_console(v52, v12, 0x1001, v62, v63, v64, v65);
            eax53 = reinterpret_cast<void**>(1);
        }
    } else {
        v52 = reinterpret_cast<void**>("fatal error during initialization\n");
        error_printf("fatal error during initialization\n", 0, 0x1001, v66, v67);
        frontend_close_console("fatal error during initialization\n", 0, 0x1001, v68, v69, v70, v71);
        eax53 = reinterpret_cast<void**>(1);
    }
    edx72 = v6 ^ g14;
    if (edx72) {
        eax53 = fun_804a70c(v52, v12, v11, v23, v22, v21, v20, v73, v74);
    }
    return eax53;
}

void fun_804a7f2() {
    goto 0x804a03c;
}

void fun_804a262() {
    goto 0x804a03c;
}

void fun_804a9d2() {
    goto 0x804a03c;
}

void** frontend_debugf(void** a1, void* a2) {
    void** eax3;
    void** eax4;

    eax3 = g805bcf0;
    eax4 = my_report_printing(eax3, a1, a2);
    return eax4;
}

void fun_804a3c2() {
    goto 0x804a03c;
}

void fun_804a312() {
    goto 0x804a03c;
}

void fun_804a462() {
    goto 0x804a03c;
}

void fun_804a3d2() {
    goto 0x804a03c;
}

void fun_804a502() {
    goto 0x804a03c;
}

void fun_804a442() {
    goto 0x804a03c;
}

void SwapBytesInWords(uint16_t* a1) {
    uint16_t* v2;
    int32_t v3;
    uint16_t v4;
    uint16_t* v5;
    uint32_t eax6;
    uint32_t v7;
    uint32_t eax8;
    uint32_t edx9;

    v2 = a1;
    while (v3 > 1) {
        v4 = *v2;
        *v2 = reinterpret_cast<uint16_t>(v4 << 8 & 0xff00ff00 | v4 >> 8 & 0xff00ff);
        v3 = v3 - 2;
        v2 = v2 + 2;
    }
    v5 = v2;
    while (v3 > 0) {
        eax6 = *v5;
        v7 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax6)));
        eax8 = v7 >> 8;
        *reinterpret_cast<uint16_t*>(&eax8) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax8) & 0xff);
        edx9 = eax8 | v7 << 8;
        *v5 = *reinterpret_cast<uint16_t*>(&edx9);
        --v3;
        ++v5;
    }
    return;
}

void fun_804a8f2() {
    goto 0x804a03c;
}

void fun_804a3e2() {
    goto 0x804a03c;
}

void fun_804a7a2() {
    goto 0x804a03c;
}

void fun_804a552() {
    goto 0x804a03c;
}

void fun_804a982() {
    goto 0x804a03c;
}

void fun_804a692() {
    goto 0x804a03c;
}

void fun_804a272() {
    goto 0x804a03c;
}

int32_t machine_byte_order() {
    return 0;
}

void Write32BitsHighLow(void** a1, uint32_t a2) {
    Write16BitsHighLow(a1, a2 >> 16);
    Write16BitsHighLow(a1, a2 & 0xffff);
    return;
}

void fun_804aa22() {
    goto 0x804a03c;
}

void fun_804aa82() {
    goto 0x804a03c;
}

void fun_804a882() {
    goto 0x804a03c;
}

void Write32Bits(void** a1, uint32_t a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** ebp7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;

    Write16BitsLowHigh(a1, a2 & 0xffff, v3, v4, v5, v6, ebp7);
    Write16BitsLowHigh(a1, a2 >> 16, v8, v9, v10, v11, ebp7);
    return;
}

void fun_804a8d2() {
    goto 0x804a03c;
}

void fun_804a772() {
    goto 0x804a03c;
}

void fun_804a952() {
    goto 0x804a03c;
}

void fun_804a3b2() {
    goto 0x804a03c;
}

void fun_804a662() {
    goto 0x804a03c;
}

void fun_804a142() {
    goto 0x804a03c;
}

void fun_804a742() {
    goto 0x804a03c;
}

void** genre_list_handler(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** ebp6;
    void** eax7;

    eax7 = console_printf("%3d %s\n", a1, a2, v3, v4, v5, ebp6, __return_address(), a1);
    return eax7;
}

void fun_804a972() {
    goto 0x804a03c;
}

void fun_804a4c2() {
    goto 0x804a03c;
}

void fun_804a892() {
    goto 0x804a03c;
}

void fun_804a5d2() {
    goto 0x804a03c;
}

void fun_804a8c2() {
    goto 0x804a03c;
}

void fun_804a612() {
    goto 0x804a03c;
}

void fun_804a572() {
    goto 0x804a03c;
}

void fun_804a672() {
    goto 0x804a03c;
}

void fun_804aac2() {
    goto 0x804a03c;
}

uint32_t ReadByte(void** a1) {
    uint32_t eax2;
    uint32_t v3;

    eax2 = fun_804a2ec(a1);
    v3 = eax2 & 0xff;
    if (v3 & 0x80) {
        v3 = v3 - 0x100;
    }
    return v3;
}

void fun_804a152() {
    goto 0x804a03c;
}

void fun_804a3a2() {
    goto 0x804a03c;
}

void fun_804a332() {
    goto 0x804a03c;
}

void fun_804aa12() {
    goto 0x804a03c;
}

void fun_804a9b2() {
    goto 0x804a03c;
}

void fun_804a132() {
    goto 0x804a03c;
}

void fun_804a582() {
    goto 0x804a03c;
}

void fun_804a432() {
    goto 0x804a03c;
}

void fun_804a5f2() {
    goto 0x804a03c;
}

void fun_804a2e2() {
    goto 0x804a03c;
}

void fun_804a7c2() {
    goto 0x804a03c;
}

void fun_804a0d2() {
    goto 0x804a03c;
}

void fun_804a0e2() {
    goto 0x804a03c;
}

void fun_804aa92() {
    goto 0x804a03c;
}

void fun_804a792() {
    goto 0x804a03c;
}

void fun_804a722() {
    goto 0x804a03c;
}

void fun_804a812() {
    goto 0x804a03c;
}

void fun_804a9a2() {
    goto 0x804a03c;
}

void fun_804a642() {
    goto 0x804a03c;
}

void fun_804a342() {
    goto 0x804a03c;
}

void fun_804a862() {
    goto 0x804a03c;
}

void fun_804a822() {
    goto 0x804a03c;
}

void fun_804a472() {
    goto 0x804a03c;
}

void fun_804a512() {
    goto 0x804a03c;
}

void fun_804a0b2() {
    goto 0x804a03c;
}

void fun_804aab2() {
    goto 0x804a03c;
}

void fun_804a532() {
    goto 0x804a03c;
}

void fun_804a392() {
    goto 0x804a03c;
}

void fun_804a492() {
    goto 0x804a03c;
}

void fun_804a4e2() {
    goto 0x804a03c;
}

void fun_804a7e2() {
    goto 0x804a03c;
}

void fun_804a0c2() {
    goto 0x804a03c;
}

void fun_804a9c2() {
    goto 0x804a03c;
}

void fun_804a4d2() {
    goto 0x804a03c;
}

void fun_804a8e2() {
    goto 0x804a03c;
}

void fun_804a852() {
    goto 0x804a03c;
}

void __libc_csu_fini() {
    return;
}

void fun_804a0a2() {
    goto 0x804a03c;
}

void fun_804a4f2() {
    goto 0x804a03c;
}

void fun_804a162() {
    goto 0x804a03c;
}

void fun_804a112() {
    goto 0x804a03c;
}

void fun_804a5b2() {
    goto 0x804a03c;
}

void fun_804a6f2() {
    goto 0x804a03c;
}

void fun_804a182() {
    goto 0x804a03c;
}

void fun_804a402() {
    goto 0x804a03c;
}

void fun_804a7b2() {
    goto 0x804a03c;
}

void report_flush() {
    void** eax1;
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** ebp7;

    eax1 = g805bcf0;
    fun_804a3ec(eax1, v2, v3, v4, v5, v6, ebp7);
    return;
}

void fun_804a912() {
    goto 0x804a03c;
}

uint32_t Read24BitsHighLow(void** a1) {
    uint32_t eax2;
    uint32_t eax3;
    uint32_t eax4;
    uint32_t v5;

    eax2 = fun_804a2ec(a1);
    eax3 = fun_804a2ec(a1);
    eax4 = fun_804a2ec(a1);
    v5 = ((eax2 & 0xff) << 16) + ((eax3 & 0xff) << 8) + (eax4 & 0xff);
    if (v5 & 0x800000) {
        v5 = v5 - 0x1000000;
    }
    return v5;
}

void fun_804a1c2() {
    goto 0x804a03c;
}

void fun_804a632() {
    goto 0x804a03c;
}

void fun_804a5e2() {
    goto 0x804a03c;
}

void fun_804a6a2() {
    goto 0x804a03c;
}

void fun_804a452() {
    goto 0x804a03c;
}

void fun_804a222() {
    goto 0x804a03c;
}

void fun_804a6c2() {
    goto 0x804a03c;
}

void** frontend_msgf(void** a1, void* a2) {
    void** eax3;
    void** eax4;

    eax3 = g805bce8;
    eax4 = my_console_printing(eax3, a1, a2);
    return eax4;
}

void fun_804a1e2() {
    goto 0x804a03c;
}

void fun_804a2b2() {
    goto 0x804a03c;
}

void fun_804a7d2() {
    goto 0x804a03c;
}

void fun_804a762() {
    goto 0x804a03c;
}

void fun_804a2f2() {
    goto 0x804a03c;
}

void fun_804a052() {
    goto 0x804a03c;
}

void fun_804a562() {
    goto 0x804a03c;
}

void fun_804aa32() {
    goto 0x804a03c;
}

void fun_804a622() {
    goto 0x804a03c;
}

void fun_804a2d2() {
    goto 0x804a03c;
}

void fun_804a872() {
    goto 0x804a03c;
}

void fun_804a6e2() {
    goto 0x804a03c;
}

void fun_804a832() {
    goto 0x804a03c;
}

void fun_804a5a2() {
    goto 0x804a03c;
}

void fun_804aa02() {
    goto 0x804a03c;
}

void fun_804a6d2() {
    goto 0x804a03c;
}

void fun_804a1d2() {
    goto 0x804a03c;
}

void fun_804a092() {
    goto 0x804a03c;
}

void fun_804a2a2() {
    goto 0x804a03c;
}

void fun_804aa42() {
    goto 0x804a03c;
}

void fun_804a0f2() {
    goto 0x804a03c;
}

void fun_804a9f2() {
    goto 0x804a03c;
}

void fun_804aa62() {
    goto 0x804a03c;
}

void fun_804a9e2() {
    goto 0x804a03c;
}

void fun_804a362() {
    goto 0x804a03c;
}

void fun_804aaa2() {
    goto 0x804a03c;
}

void fun_804a752() {
    goto 0x804a03c;
}

void fun_804a302() {
    goto 0x804a03c;
}

void fun_804a522() {
    goto 0x804a03c;
}

void fun_804a1a2() {
    goto 0x804a03c;
}

void fun_804a902() {
    goto 0x804a03c;
}

void fun_804a5c2() {
    goto 0x804a03c;
}

void fun_804a422() {
    goto 0x804a03c;
}

void fun_804aa52() {
    goto 0x804a03c;
}

void fun_804a682() {
    goto 0x804a03c;
}

void fun_804a782() {
    goto 0x804a03c;
}

void fun_804a202() {
    goto 0x804a03c;
}

void fun_804a352() {
    goto 0x804a03c;
}

void fun_804a942() {
    goto 0x804a03c;
}

void fun_804a8b2() {
    goto 0x804a03c;
}

void fun_804a8a2() {
    goto 0x804a03c;
}

void fun_804a6b2() {
    goto 0x804a03c;
}

void fun_804a062() {
    goto 0x804a03c;
}

void fun_804a372() {
    goto 0x804a03c;
}

void fun_804a482() {
    goto 0x804a03c;
}

void fun_804a922() {
    goto 0x804a03c;
}

void fun_804a592() {
    goto 0x804a03c;
}

void fun_804a242() {
    goto 0x804a03c;
}

void fun_804a992() {
    goto 0x804a03c;
}

void fun_8054725(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    uint32_t edi6;
    uint32_t esi7;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x68b9;
    _init();
    edi6 = reinterpret_cast<uint32_t>(ebx4 - 0xf8 - (ebx4 - 0xf8) >> 2);
    if (edi6) {
        esi7 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi7 * 4 - 0xf8)(a1, a2, a3);
            ++esi7;
        } while (esi7 < edi6);
    }
    return;
}

void fun_804a702() {
    goto 0x804a03c;
}

void fun_804a602() {
    goto 0x804a03c;
}

void fun_804a082() {
    goto 0x804a03c;
}

void fun_804a322() {
    goto 0x804a03c;
}

void** frontend_errorf(void** a1, void* a2) {
    void** eax3;
    void** eax4;

    eax3 = g805bcec;
    eax4 = my_error_printing(eax3, a1, a2);
    return eax4;
}

void fun_804a842() {
    goto 0x804a03c;
}

void fun_804a102() {
    goto 0x804a03c;
}

void fun_804a1b2() {
    goto 0x804a03c;
}

void fun_804a542() {
    goto 0x804a03c;
}
