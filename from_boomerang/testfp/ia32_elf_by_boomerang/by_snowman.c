
int32_t call_gmon_start(int32_t ecx);

void frame_dummy();

int32_t __do_global_ctors_aux();

int32_t _init(int32_t ecx) {
    int32_t eax2;

    call_gmon_start(ecx);
    frame_dummy();
    eax2 = __do_global_ctors_aux();
    return eax2;
}

void fun_8048306(int32_t a1, int32_t a2);

void fun_80482c8();

int32_t call_gmon_start(int32_t ecx) {
    int32_t ebx2;

    fun_8048306(ecx, ebx2);
    if (*reinterpret_cast<int32_t*>(ecx + 0x14a6 - 4)) {
        fun_80482c8();
    }
    return ebx2;
}

int32_t __JCR_END__ = 0;

void __gmon_start__(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        __gmon_start__(0x80496dc);
    }
    return;
}

int32_t __preinit_array_start = -1;

int32_t __do_global_ctors_aux() {
    int32_t v1;
    int32_t edx2;
    int32_t eax3;
    int32_t ebx4;

    v1 = edx2;
    eax3 = __preinit_array_start;
    if (eax3 != -1) {
        ebx4 = 0x80496cc;
        do {
            eax3();
            eax3 = *reinterpret_cast<int32_t*>(ebx4 - 4);
            ebx4 = ebx4 - 4;
        } while (eax3 != -1);
    }
    return v1;
}

int32_t __gmon_start__ = 0x80482ce;

void fun_80482c8() {
    goto __gmon_start__;
}

signed char _edata = 0;

/* p.4582 */
int32_t* p_4582 = reinterpret_cast<int32_t*>(0x80496d8);

void __do_global_dtors_aux() {
    int1_t zf1;
    int32_t* eax2;
    int32_t edx3;

    zf1 = _edata == 0;
    if (zf1) {
        while (eax2 = p_4582, edx3 = *eax2, !!edx3) {
            p_4582 = eax2 + 1;
            edx3();
        }
        _edata = 1;
    }
    return;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048306(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x14a6 - 4)) {
        fun_80482c8();
    }
    goto ebp3->f4;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048682(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t printf = 0x80482be;

void fun_80482b8(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40, int32_t a41, int32_t a42, int32_t a43) {
    goto printf;
}

int32_t __libc_start_main = 0x80482ae;

void fun_80482a8(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048606(int32_t ecx) {
    int32_t ebx2;
    int32_t* edx3;
    int32_t eax4;
    int32_t ebp5;
    uint32_t edi6;
    int32_t* esi7;
    int32_t ebp8;
    struct s2* ebp9;
    struct s3* ebp10;

    ebx2 = reinterpret_cast<int32_t>(__return_address()) + 0x11a6;
    _init(ecx);
    edx3 = reinterpret_cast<int32_t*>(ebx2 - 0xe0);
    eax4 = ebx2 - 0xe0 - reinterpret_cast<int32_t>(edx3) >> 2;
    *reinterpret_cast<int32_t*>(ebp5 - 16) = eax4;
    if (eax4) {
        edi6 = 0;
        esi7 = edx3;
        do {
            *esi7();
            ++edi6;
            ++esi7;
        } while (edi6 < *reinterpret_cast<uint32_t*>(ebp8 - 16));
        goto ebp9->f4;
    } else {
        goto ebp10->f4;
    }
}

void fun_80482a4() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048331() {
}

void __libc_csu_fini() {
    return;
}

void _fini() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ebp3;

    fun_8048682(eax1, ebx2, ebp3, __return_address());
}

int32_t g80497b4 = 0;

void fun_80482ae() {
    goto g80497b4;
}

void fun_80482ce() {
    goto 0x8048298;
}

void fun_8048352() {
}

int32_t res2 = 0;

int32_t res1 = 0;

void main() {
    int32_t v1;
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    int32_t v24;
    int32_t v25;
    int32_t v26;
    int32_t v27;
    int32_t v28;
    int32_t v29;
    int32_t v30;
    int32_t v31;
    int32_t v32;
    int32_t v33;
    int32_t v34;
    int32_t v35;
    int32_t v36;
    int32_t v37;
    int32_t v38;
    int32_t v39;
    int32_t v40;
    int32_t v41;
    int32_t v42;
    int32_t v43;
    int32_t v44;
    int32_t v45;
    int32_t v46;
    int32_t v47;
    int32_t v48;
    int32_t v49;
    int32_t v50;
    int32_t v51;
    int32_t v52;
    int32_t v53;
    int32_t v54;
    int32_t v55;
    int32_t v56;
    int32_t v57;
    int32_t v58;
    int32_t v59;
    int32_t v60;
    int32_t v61;
    int32_t v62;
    int32_t v63;
    int32_t v64;
    int32_t v65;
    int32_t v66;
    int32_t v67;
    int32_t v68;
    int32_t v69;
    int32_t v70;
    int32_t v71;
    int32_t v72;
    int32_t v73;
    int32_t v74;
    int32_t v75;
    int32_t v76;
    int32_t v77;
    int32_t v78;
    int32_t v79;
    int32_t v80;
    int32_t v81;
    int32_t v82;
    int32_t v83;
    int32_t v84;
    int32_t v85;
    int32_t v86;
    int32_t v87;
    int32_t v88;
    int32_t v89;
    int32_t v90;
    int32_t v91;
    int32_t v92;
    int32_t v93;
    int32_t v94;
    int32_t v95;
    int32_t v96;
    int32_t v97;
    int32_t v98;
    int32_t v99;
    int32_t v100;
    int32_t v101;
    int32_t v102;
    int32_t v103;
    int32_t v104;
    int32_t v105;
    int32_t v106;
    int32_t v107;
    int32_t v108;
    int32_t v109;
    int32_t v110;
    int32_t v111;
    int32_t v112;
    int32_t v113;
    int32_t v114;
    int32_t v115;
    int32_t v116;
    int32_t v117;
    int32_t v118;
    int32_t v119;
    int32_t v120;
    int32_t v121;
    int32_t v122;
    int32_t v123;
    int32_t v124;
    int32_t v125;
    int32_t v126;
    int32_t v127;
    int32_t v128;
    int32_t v129;
    int32_t v130;
    int32_t v131;
    int32_t v132;
    int32_t v133;
    int32_t v134;
    int32_t v135;
    int32_t v136;
    int32_t v137;
    int32_t v138;
    int32_t v139;
    int32_t v140;
    int32_t v141;
    int32_t v142;
    int32_t v143;
    int32_t v144;
    int32_t v145;
    int32_t v146;
    int32_t v147;
    int32_t v148;
    int32_t v149;
    int32_t v150;
    int32_t v151;
    int32_t v152;
    int32_t v153;
    int32_t v154;
    int32_t v155;
    int32_t v156;
    int32_t v157;
    int32_t v158;
    int32_t v159;
    int32_t v160;
    int32_t v161;
    int32_t v162;
    int32_t v163;
    int32_t v164;
    int32_t v165;
    int32_t v166;
    int32_t v167;
    int32_t v168;
    int32_t v169;
    int32_t v170;
    int32_t v171;
    int32_t v172;
    int32_t v173;
    int32_t v174;
    int32_t v175;
    int32_t v176;
    int32_t v177;
    int32_t v178;
    int32_t v179;
    int32_t v180;
    int32_t v181;
    int32_t v182;
    int32_t v183;
    int32_t v184;
    int32_t v185;
    int32_t v186;
    int32_t v187;
    int32_t v188;
    int32_t v189;
    int32_t v190;
    int32_t v191;
    int32_t v192;
    int32_t v193;
    int32_t v194;
    int32_t v195;
    int32_t v196;
    int32_t v197;
    int32_t v198;
    int32_t v199;
    int32_t v200;
    int32_t v201;
    int32_t v202;
    int32_t v203;
    int32_t v204;
    int32_t v205;
    int32_t v206;
    int32_t v207;
    int32_t v208;
    int32_t v209;
    int32_t v210;
    int32_t v211;
    int32_t v212;
    int32_t v213;
    int32_t v214;
    int32_t v215;
    int32_t v216;
    int32_t v217;
    int32_t v218;
    int32_t v219;
    int32_t v220;
    int32_t v221;
    int32_t v222;
    int32_t v223;
    int32_t v224;
    int32_t v225;
    int32_t v226;
    int32_t v227;
    int32_t v228;
    int32_t v229;
    int32_t v230;
    int32_t v231;
    int32_t v232;
    int32_t v233;
    int32_t v234;
    int32_t v235;
    int32_t v236;
    int32_t v237;
    int32_t v238;
    int32_t v239;
    int32_t v240;
    int32_t v241;
    int32_t v242;
    int32_t v243;
    int32_t v244;
    int32_t v245;
    int32_t v246;
    int32_t v247;
    int32_t v248;
    int32_t v249;
    int32_t v250;
    int32_t v251;
    int32_t v252;
    int32_t v253;
    int32_t v254;
    int32_t v255;
    int32_t v256;
    int32_t v257;
    int32_t v258;
    int32_t v259;
    int32_t v260;
    int32_t v261;
    int32_t v262;
    int32_t v263;
    int32_t v264;
    int32_t v265;
    int32_t v266;
    int32_t v267;
    int32_t v268;
    int32_t v269;
    int32_t v270;
    int32_t v271;
    int32_t v272;
    int32_t v273;
    int32_t v274;
    int32_t v275;
    int32_t v276;
    int32_t v277;
    int32_t v278;
    int32_t v279;
    int32_t v280;
    int32_t v281;
    int32_t v282;
    int32_t v283;
    int32_t v284;
    int32_t v285;
    int32_t v286;
    int32_t v287;
    int32_t v288;
    int32_t v289;
    int32_t v290;
    int32_t v291;
    int32_t v292;
    int32_t v293;
    int32_t v294;
    int32_t v295;
    int32_t v296;
    int32_t v297;
    int32_t v298;
    int32_t v299;
    int32_t v300;
    int32_t v301;
    int32_t v302;
    int32_t v303;
    int32_t v304;
    int32_t v305;
    int32_t v306;
    int32_t v307;
    int32_t v308;
    int32_t v309;
    int32_t v310;
    int32_t v311;
    int32_t v312;
    int32_t v313;
    int32_t v314;
    int32_t v315;
    int32_t v316;
    int32_t v317;
    int32_t v318;
    int32_t v319;
    int32_t v320;
    int32_t v321;
    int32_t v322;
    int32_t v323;
    int32_t v324;
    int32_t v325;
    int32_t v326;
    int32_t v327;
    int32_t v328;
    int32_t v329;
    int32_t v330;
    int32_t v331;
    int32_t v332;
    int32_t v333;
    int32_t v334;
    int32_t v335;
    int32_t v336;
    int32_t v337;
    int32_t v338;
    int32_t v339;
    int32_t v340;
    int32_t v341;
    int32_t v342;
    int32_t v343;

    fun_80482b8("Hello, world\n", v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42);
    __asm__("fild word [0x80486c0]");
    __asm__("fild word [0x80486c4]");
    __asm__("fsub st0, st1");
    __asm__("fstp qword [0x80497d0]");
    v43 = res2;
    v44 = res1;
    fun_80482b8("Result is %f\n", v44, v43, "Hello, world\n", v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83);
    __asm__("fstp st0");
    __asm__("fild word [0x80486c0]");
    __asm__("fild word [0x80486c4]");
    __asm__("fsubr st1, st0");
    __asm__("fstp st0");
    __asm__("fstp qword [0x80497d0]");
    v84 = res2;
    v85 = res1;
    fun_80482b8("Result is %f\n", v85, v84, "Result is %f\n", v44, v43, "Hello, world\n", v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119, v120, v121);
    __asm__("fild word [0x80486c0]");
    __asm__("fild word [0x80486c4]");
    __asm__("fsubr st0, st1");
    __asm__("fstp qword [0x80497d0]");
    v122 = res2;
    v123 = res1;
    fun_80482b8("Result is %f\n", v123, v122, "Result is %f\n", v85, v84, "Result is %f\n", v44, v43, "Hello, world\n", v124, v125, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135, v136, v137, v138, v139, v140, v141, v142, v143, v144, v145, v146, v147, v148, v149, v150, v151, v152, v153, v154, v155, v156);
    __asm__("fstp st0");
    __asm__("fild word [0x80486c0]");
    __asm__("fild word [0x80486c4]");
    __asm__("fsub st1, st0");
    __asm__("fstp st0");
    __asm__("fstp qword [0x80497d0]");
    v157 = res2;
    v158 = res1;
    fun_80482b8("Result is %f\n", v158, v157, "Result is %f\n", v123, v122, "Result is %f\n", v85, v84, "Result is %f\n", v44, v43, "Hello, world\n", v159, v160, v161, v162, v163, v164, v165, v166, v167, v168, v169, v170, v171, v172, v173, v174, v175, v176, v177, v178, v179, v180, v181, v182, v183, v184, v185, v186, v187, v188);
    __asm__("fild word [0x80486c0]");
    __asm__("fild word [0x80486c4]");
    __asm__("fsubrp st1, st0");
    __asm__("fstp qword [0x80497d0]");
    v189 = res2;
    v190 = res1;
    fun_80482b8("Result is %f\n", v190, v189, "Result is %f\n", v158, v157, "Result is %f\n", v123, v122, "Result is %f\n", v85, v84, "Result is %f\n", v44, v43, "Hello, world\n", v191, v192, v193, v194, v195, v196, v197, v198, v199, v200, v201, v202, v203, v204, v205, v206, v207, v208, v209, v210, v211, v212, v213, v214, v215, v216, v217);
    __asm__("fild word [0x80486c0]");
    __asm__("fild word [0x80486c4]");
    __asm__("fsubp st1, st0");
    __asm__("fstp qword [0x80497d0]");
    v218 = res2;
    v219 = res1;
    fun_80482b8("Result is %f\n", v219, v218, "Result is %f\n", v190, v189, "Result is %f\n", v158, v157, "Result is %f\n", v123, v122, "Result is %f\n", v85, v84, "Result is %f\n", v44, v43, "Hello, world\n", v220, v221, v222, v223, v224, v225, v226, v227, v228, v229, v230, v231, v232, v233, v234, v235, v236, v237, v238, v239, v240, v241, v242, v243);
    __asm__("fild word [0x80486c0]");
    __asm__("fild word [0x80486c4]");
    __asm__("fdiv st0, st1");
    __asm__("fstp qword [0x80497d0]");
    v244 = res2;
    v245 = res1;
    fun_80482b8("Result is %f\n", v245, v244, "Result is %f\n", v219, v218, "Result is %f\n", v190, v189, "Result is %f\n", v158, v157, "Result is %f\n", v123, v122, "Result is %f\n", v85, v84, "Result is %f\n", v44, v43, "Hello, world\n", v246, v247, v248, v249, v250, v251, v252, v253, v254, v255, v256, v257, v258, v259, v260, v261, v262, v263, v264, v265, v266);
    __asm__("fstp st0");
    __asm__("fild word [0x80486c0]");
    __asm__("fild word [0x80486c4]");
    __asm__("fdivr st1, st0");
    __asm__("fstp st0");
    __asm__("fstp qword [0x80497d0]");
    v267 = res2;
    v268 = res1;
    fun_80482b8("Result is %f\n", v268, v267, "Result is %f\n", v245, v244, "Result is %f\n", v219, v218, "Result is %f\n", v190, v189, "Result is %f\n", v158, v157, "Result is %f\n", v123, v122, "Result is %f\n", v85, v84, "Result is %f\n", v44, v43, "Hello, world\n", v269, v270, v271, v272, v273, v274, v275, v276, v277, v278, v279, v280, v281, v282, v283, v284, v285, v286);
    __asm__("fild word [0x80486c0]");
    __asm__("fild word [0x80486c4]");
    __asm__("fdivr st0, st1");
    __asm__("fstp qword [0x80497d0]");
    v287 = res2;
    v288 = res1;
    fun_80482b8("Result is %f\n", v288, v287, "Result is %f\n", v268, v267, "Result is %f\n", v245, v244, "Result is %f\n", v219, v218, "Result is %f\n", v190, v189, "Result is %f\n", v158, v157, "Result is %f\n", v123, v122, "Result is %f\n", v85, v84, "Result is %f\n", v44, v43, "Hello, world\n", v289, v290, v291, v292, v293, v294, v295, v296, v297, v298, v299, v300, v301, v302, v303);
    __asm__("fstp st0");
    __asm__("fild word [0x80486c0]");
    __asm__("fild word [0x80486c4]");
    __asm__("fdiv st1, st0");
    __asm__("fstp st0");
    __asm__("fstp qword [0x80497d0]");
    v304 = res2;
    v305 = res1;
    fun_80482b8("Result is %f\n", v305, v304, "Result is %f\n", v288, v287, "Result is %f\n", v268, v267, "Result is %f\n", v245, v244, "Result is %f\n", v219, v218, "Result is %f\n", v190, v189, "Result is %f\n", v158, v157, "Result is %f\n", v123, v122, "Result is %f\n", v85, v84, "Result is %f\n", v44, v43, "Hello, world\n", v306, v307, v308, v309, v310, v311, v312, v313, v314, v315, v316, v317);
    __asm__("fild word [0x80486c0]");
    __asm__("fild word [0x80486c4]");
    __asm__("fdivrp st1, st0");
    __asm__("fstp qword [0x80497d0]");
    v318 = res2;
    v319 = res1;
    fun_80482b8("Result is %f\n", v319, v318, "Result is %f\n", v305, v304, "Result is %f\n", v288, v287, "Result is %f\n", v268, v267, "Result is %f\n", v245, v244, "Result is %f\n", v219, v218, "Result is %f\n", v190, v189, "Result is %f\n", v158, v157, "Result is %f\n", v123, v122, "Result is %f\n", v85, v84, "Result is %f\n", v44, v43, "Hello, world\n", v320, v321, v322, v323, v324, v325, v326, v327, v328);
    __asm__("fild word [0x80486c0]");
    __asm__("fild word [0x80486c4]");
    __asm__("fdivp st1, st0");
    __asm__("fstp qword [0x80497d0]");
    v329 = res2;
    v330 = res1;
    fun_80482b8("Result is %f\n", v330, v329, "Result is %f\n", v319, v318, "Result is %f\n", v305, v304, "Result is %f\n", v288, v287, "Result is %f\n", v268, v267, "Result is %f\n", v245, v244, "Result is %f\n", v219, v218, "Result is %f\n", v190, v189, "Result is %f\n", v158, v157, "Result is %f\n", v123, v122, "Result is %f\n", v85, v84, "Result is %f\n", v44, v43, "Hello, world\n", v331, v332, v333, v334, v335, v336);
    __asm__("fild word [0x80486c0]");
    __asm__("fisub word [0x80486c4]");
    __asm__("fstp qword [0x80497d0]");
    v337 = res2;
    v338 = res1;
    fun_80482b8("Result is %f\n", v338, v337, "Result is %f\n", v330, v329, "Result is %f\n", v319, v318, "Result is %f\n", v305, v304, "Result is %f\n", v288, v287, "Result is %f\n", v268, v267, "Result is %f\n", v245, v244, "Result is %f\n", v219, v218, "Result is %f\n", v190, v189, "Result is %f\n", v158, v157, "Result is %f\n", v123, v122, "Result is %f\n", v85, v84, "Result is %f\n", v44, v43, "Hello, world\n", v339, v340, v341);
    __asm__("fild word [0x80486c0]");
    __asm__("fisubr word [0x80486c4]");
    __asm__("fstp qword [0x80497d0]");
    v342 = res2;
    v343 = res1;
    fun_80482b8("Result is %f\n", v343, v342, "Result is %f\n", v338, v337, "Result is %f\n", v330, v329, "Result is %f\n", v319, v318, "Result is %f\n", v305, v304, "Result is %f\n", v288, v287, "Result is %f\n", v268, v267, "Result is %f\n", v245, v244, "Result is %f\n", v219, v218, "Result is %f\n", v190, v189, "Result is %f\n", v158, v157, "Result is %f\n", v123, v122, "Result is %f\n", v85, v84, "Result is %f\n", v44, v43, "Hello, world\n");
    __asm__("rdtsc ");
    return;
}

void __libc_csu_init(int32_t ecx);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482a8(main, __return_address(), esp1, __libc_csu_init, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void __libc_csu_init(int32_t ecx) {
    fun_8048606(ecx);
}

void fun_80482be() {
    goto 0x8048298;
}
