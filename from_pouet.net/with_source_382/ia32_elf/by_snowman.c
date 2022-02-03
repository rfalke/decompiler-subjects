
int32_t g804a0dc = 0x804841e;

int32_t fun_8048418() {
    goto g804a0dc;
}

struct s0 {
    struct s0* f0;
    signed char[19] pad20;
    struct s0* f14;
};

struct s0* fun_8048775(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10);

void fun_80483e8(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, ...);

struct s0* fun_80486ba(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, int32_t a5, int32_t a6, int32_t a7, struct s0* a8, struct s0* a9, struct s0* a10);

void fun_804881d(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10) {
    void* esp11;
    struct s0* edi12;
    struct s0* v13;
    struct s0* eax14;
    struct s0* v15;
    struct s0* v16;
    struct s0* v17;
    struct s0* v18;
    struct s0* v19;
    struct s0* v20;
    struct s0* v21;
    struct s0* v22;
    struct s0* v23;
    void* esp24;
    int32_t edx25;
    struct s0* ecx26;
    struct s0* esi27;
    struct s0* v28;
    int32_t eax29;
    struct s0* v30;
    struct s0* v31;
    struct s0* v32;
    struct s0* v33;
    struct s0* v34;
    struct s0* v35;
    struct s0* v36;
    void* esp37;
    struct s0* v38;
    struct s0* v39;
    struct s0* v40;
    struct s0* v41;
    struct s0* v42;
    void* esp43;
    struct s0* eax44;
    struct s0* v45;
    struct s0* v46;
    struct s0* v47;
    struct s0* v48;
    struct s0* v49;
    struct s0* v50;
    struct s0* v51;
    struct s0* v52;
    struct s0* v53;
    struct s0* v54;
    struct s0* v55;
    struct s0* v56;
    void* esp57;
    struct s0* eax58;
    struct s0* v59;
    struct s0* v60;
    struct s0* v61;
    struct s0* v62;
    struct s0* v63;
    struct s0* v64;
    struct s0* v65;
    struct s0* v66;
    struct s0* v67;
    struct s0* v68;
    struct s0* v69;
    struct s0* v70;
    struct s0* v71;
    struct s0* v72;
    struct s0* v73;
    struct s0* v74;
    struct s0* v75;
    struct s0* v76;
    struct s0* v77;
    struct s0* v78;
    struct s0* v79;
    struct s0* v80;
    struct s0* v81;
    struct s0* v82;
    struct s0* v83;
    struct s0* v84;
    struct s0* v85;
    struct s0* v86;
    struct s0* v87;
    struct s0* v88;
    struct s0* v89;
    struct s0* v90;
    struct s0* v91;
    struct s0* v92;

    esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 0x400dc);
    edi12 = a5;
    v13 = ecx;
    __asm__("fild dword [esp]");
    __asm__("fstp dword [esp]");
    fun_8048775(ecx, __return_address(), a2, a3, eax14, v15, v16, v17, v18, v19);
    fun_80483e8(ecx, reinterpret_cast<unsigned char>(edi12) * 0x40080 + 0x940c8a0, reinterpret_cast<int32_t>(esp11) + 80, 0x40080, eax14, v20, v21, v22, v23);
    esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 + 4 + 16);
    if (edx25 <= 0) 
        goto addr_8048a84_2;
    ecx26 = reinterpret_cast<struct s0*>(&edi12->pad20);
    if (v13 == 1) {
        __asm__("cdq ");
        __asm__("cdq ");
        esi27 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edi12) + 2);
        v28 = reinterpret_cast<struct s0*>((eax29 + eax29 * 2) / 2);
        __asm__("fild dword [esp]");
        __asm__("fld dword [esp+0x40100]");
        __asm__("fsub st0, st1");
        __asm__("fstp dword [esp]");
        __asm__("fstp dword [esp+0x20]");
        fun_804881d(1, v28, a2, a3, ecx26, v30, v31, v32, v33, v34);
        __asm__("fld dword [esp+0x28]");
        __asm__("fadd dword [esp+0x4010c]");
        __asm__("fstp dword [esp]");
        fun_804881d(4, __return_address(), v35, a3, esi27, v28, a2, a3, ecx26, v36);
        esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 + 32);
    } else {
        __asm__("cdq ");
        __asm__("cdq ");
        __asm__("fild dword [esp]");
        __asm__("fstp dword [esp+0x4c]");
        __asm__("fld dword [esp+0x400fc]");
        __asm__("fadd dword [esp+0x58]");
        __asm__("fstp dword [esp]");
        fun_804881d(2, reinterpret_cast<unsigned char>(edi12) * 0x40080 + 0x940c8a0, a2, a3, ecx26, v38, v39, v40, v41, v42);
        esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 + 16);
        eax44 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edi12) + 2);
        if (v13 == 2) {
            edi12 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edi12) + 3);
            __asm__("fld dword [esp+0x400fc]");
            __asm__("fadd dword [esp+0x54]");
            __asm__("fstp dword [esp]");
            fun_804881d(4, __return_address(), a2, a3, eax44, v45, v46, v47, v48, v49);
            __asm__("fld dword [esp+0x4010c]");
            __asm__("fsub dword [esp+0x64]");
            __asm__("fstp dword [esp]");
            fun_804881d(3, __return_address(), v50, a3, edi12, __return_address(), a2, a3, eax44, v51);
            esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 + 32);
            goto addr_80489dc_7;
        } else {
            __asm__("fld dword [esp+0x400fc]");
            __asm__("fsub dword [esp+0x58]");
            __asm__("fstp dword [esp]");
            fun_804881d(1, reinterpret_cast<unsigned char>(edi12) * 0x40080 + 0x940c8a0, a2, a3, eax44, v52, v53, v54, v55, v56);
            esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
            eax58 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edi12) + 3);
            if (v13 == 3) {
                edi12 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edi12) + 4);
                __asm__("fld dword [esp+0x400fc]");
                __asm__("fsub dword [esp+0x54]");
                __asm__("fstp dword [esp]");
                fun_804881d(3, __return_address(), a2, a3, eax58, v59, v60, v61, v62, v63);
                __asm__("fld dword [esp+0x4010c]");
                __asm__("fadd dword [esp+0x60]");
                __asm__("fst dword [esp+0x60]");
                __asm__("fstp dword [esp]");
                fun_804881d(6, __return_address(), a2, v64, edi12, __return_address(), a2, a3, eax58, v65);
                esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp57) - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 + 32);
                goto addr_8048a30_10;
            } else {
                esi27 = eax58;
                __asm__("fld dword [esp+0x400fc]");
                __asm__("fadd dword [esp+0x54]");
                __asm__("fstp dword [esp]");
                fun_804881d(4, __return_address(), a2, a3, eax58, v66, v67, v68, v69, v70);
                esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp57) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                if (v13 == 4) {
                    edi12 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edi12) + 4);
                    __asm__("fld dword [esp+0x400fc]");
                    __asm__("fadd dword [esp+0x50]");
                    __asm__("fst dword [esp+0x50]");
                    __asm__("fstp dword [esp]");
                    fun_804881d(6, __return_address(), a2, a3, edi12, v71, v72, v73, v74, v75);
                    esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                    goto addr_8048a30_10;
                }
            }
        }
    }
    __asm__("cdq ");
    edi12 = reinterpret_cast<struct s0*>(&esi27->pad20);
    __asm__("cdq ");
    __asm__("fild dword [esp]");
    __asm__("fsubr dword [esp+0x40100]");
    __asm__("fstp dword [esp]");
    fun_804881d(3, __return_address(), (eax29 + eax29 * 2) / 2, a3, edi12, v76, v77, v78, eax29 / 2, v79);
    esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
    if (v13 == 5) 
        goto addr_8048a30_10;
    addr_80489dc_7:
    __asm__("cdq ");
    edi12 = reinterpret_cast<struct s0*>(&edi12->pad20);
    v80 = reinterpret_cast<struct s0*>(eax29 / 2);
    ecx = reinterpret_cast<struct s0*>(6);
    __asm__("cdq ");
    __asm__("fild dword [esp]");
    __asm__("fadd dword [esp+0x40100]");
    __asm__("fstp dword [esp]");
    fun_804881d(6, __return_address(), a2, (eax29 + eax29 * 2) / 2, edi12, v81, v82, v83, v80, v84);
    esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
    if (v13 == 6) {
        addr_8048a84_2:
        fun_80486ba(ecx, 0, 0x42200000, 0, 0, 0xbf800000, 0, edi12, edi12, v85);
        fun_80483e8(ecx, reinterpret_cast<unsigned char>(edi12) * 0x40080 + 0x944c920, reinterpret_cast<int32_t>(esp24) + 80, 0x40080, edi12, v86, v87, v88, v80);
        return;
    } else {
        addr_8048a30_10:
        __asm__("cdq ");
        edi12 = reinterpret_cast<struct s0*>(&edi12->pad20);
        v80 = reinterpret_cast<struct s0*>(eax29 / 2);
        ecx = reinterpret_cast<struct s0*>(5);
        __asm__("cdq ");
        __asm__("fild dword [esp]");
        __asm__("fsubr dword [esp+0x40100]");
        __asm__("fst dword [esp+0x40100]");
        __asm__("fstp dword [esp]");
        fun_804881d(5, __return_address(), a2, (eax29 + eax29 * 2) / 2, edi12, v89, v90, v91, v80, v92);
        esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
        goto addr_8048a84_2;
    }
}

void fun_8048438(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4) {
    __asm__("fld dword [eax]");
    __asm__("fmul dword [edx]");
    __asm__("fld dword [eax+0x4]");
    __asm__("fmul dword [edx+0x4]");
    __asm__("faddp st1, st0");
    __asm__("fld dword [eax+0x8]");
    __asm__("fmul dword [edx+0x8]");
    __asm__("faddp st1, st0");
    return;
}

void fun_804847f(struct s0* ecx) {
    __asm__("fld dword [eax]");
    __asm__("fsub dword [edx]");
    __asm__("fstp dword [ecx]");
    __asm__("fld dword [eax+0x4]");
    __asm__("fsub dword [edx+0x4]");
    __asm__("fstp dword [ecx+0x4]");
    __asm__("fld dword [eax+0x8]");
    __asm__("fsub dword [edx+0x8]");
    __asm__("fstp dword [ecx+0x8]");
    return;
}

void fun_804844d(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, ...) {
    __asm__("fld dword [eax+0x4]");
    __asm__("fmul dword [edx+0x8]");
    __asm__("fld dword [eax+0x8]");
    __asm__("fld dword [edx+0x4]");
    __asm__("fmul st0, st1");
    __asm__("fsubp st2, st0");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ecx]");
    __asm__("fmul dword [edx]");
    __asm__("fld dword [eax]");
    __asm__("fld dword [edx+0x8]");
    __asm__("fmul st0, st1");
    __asm__("fsubp st2, st0");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ecx+0x4]");
    __asm__("fmul dword [edx+0x4]");
    __asm__("fld dword [eax+0x4]");
    __asm__("fmul dword [edx]");
    __asm__("fsubp st1, st0");
    __asm__("fstp dword [ecx+0x8]");
    return;
}

void fun_80484a2(struct s0* ecx, struct s0* a2) {
    struct s0* ebx3;

    fun_8048438(ecx, ebx3, __return_address(), a2);
    __asm__("fsqrt ");
    __asm__("fdivr dword [0x8049a00]");
    __asm__("fld dword [ebx]");
    __asm__("fmul st0, st1");
    __asm__("fstp dword [ebx]");
    __asm__("fld dword [ebx+0x4]");
    __asm__("fmul st0, st1");
    __asm__("fstp dword [ebx+0x4]");
    __asm__("fmul dword [ebx+0x8]");
    __asm__("fstp dword [ebx+0x8]");
    return;
}

void fun_8048498(struct s0* ecx, struct s0* a2, struct s0* a3) {
    fun_8048438(ecx, __return_address(), a2, a3);
    __asm__("fsqrt ");
    return;
}

struct s1 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

void fun_8048c66(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5);

struct s2 {
    struct s0* f0;
    signed char[11] pad12;
    struct s0* fc;
    signed char[11] pad24;
    struct s0* f18;
    signed char[99] pad124;
    signed char f7c;
    signed char f7d;
};

void fun_8048428(struct s0* ecx, int32_t a2, struct s0* a3, struct s0* a4, struct s0* a5);

struct s1* fun_8048ebe(uint32_t ecx, struct s0* a2, void* a3, int32_t a4, struct s0* a5) {
    uint32_t esi6;
    uint32_t ebx7;
    void* esp8;
    struct s0* ebp9;
    struct s0* edi10;
    struct s1* v11;
    struct s1* eax12;
    struct s0* v13;
    struct s0* edx14;
    uint32_t v15;
    struct s0* v16;
    struct s0* eax17;
    struct s0* v18;
    struct s0* v19;
    int16_t fpu_status_word20;
    int16_t fpu_status_word21;
    struct s2* edi22;
    struct s0* ecx23;
    struct s0* v24;
    struct s0* ecx25;
    struct s0* v26;
    struct s0* v27;
    struct s0* v28;
    struct s0* v29;
    struct s0* eax30;
    uint32_t ebx31;
    struct s0* v32;
    struct s0* v33;
    struct s0* v34;
    void* esp35;
    int16_t fpu_status_word36;
    struct s0* v37;
    struct s0** esp38;
    int16_t fpu_status_word39;
    int16_t fpu_status_word40;
    struct s0* v41;
    struct s0* v42;
    struct s0* v43;
    struct s0* v44;
    struct s0* v45;
    void* esp46;
    int16_t ax47;
    int16_t fpu_status_word48;
    struct s0* v49;
    struct s0* v50;
    struct s0* v51;
    void* esp52;
    int16_t ax53;
    int16_t fpu_status_word54;
    struct s0* v55;
    struct s0* v56;
    struct s0* v57;
    struct s0* v58;
    struct s0* v59;
    struct s0* v60;
    struct s0* v61;
    struct s0* v62;
    struct s0* v63;
    int16_t ax64;
    int16_t fpu_status_word65;
    struct s0* v66;
    struct s0* v67;
    struct s0* v68;
    struct s0* v69;
    struct s0* v70;
    int16_t ax71;
    int16_t fpu_status_word72;
    int16_t ax73;
    int16_t fpu_status_word74;
    int16_t ax75;
    int16_t fpu_status_word76;

    esi6 = 0xffffffff;
    ebx7 = 0;
    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 0x8c);
    ebp9 = a2;
    edi10 = a5;
    __asm__("fld dword [0x8049a0c]");
    v11 = eax12;
    v13 = edx14;
    v15 = ecx;
    while (reinterpret_cast<int32_t>(ebx7) < reinterpret_cast<int32_t>(v15)) {
        v16 = eax17;
        v18 = eax17;
        v19 = edi10;
        eax17 = v13;
        __asm__("fstp dword [esp+0x20]");
        fun_8048c66(ebp9, a2, v19, v18, v16);
        esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
        __asm__("fld dword [esp+0x10]");
        __asm__("fxch st0, st1");
        __asm__("ftst ");
        *reinterpret_cast<int16_t*>(&eax17) = fpu_status_word20;
        if (*reinterpret_cast<uint1_t*>(&eax17 + 1) | *reinterpret_cast<uint1_t*>(&eax17 + 1) || (*reinterpret_cast<int16_t*>(&eax17) = fpu_status_word21, !*reinterpret_cast<uint1_t*>(&eax17 + 1))) {
            __asm__("fstp st0");
        } else {
            __asm__("fstp st1");
            esi6 = ebx7;
        }
        ++ebx7;
    }
    if (esi6 != 0xffffffff) {
        __asm__("fld st0");
        edi22 = reinterpret_cast<struct s2*>(reinterpret_cast<unsigned char>(v13) + esi6 * 0x40080);
        __asm__("fmul dword [eax]");
        __asm__("fadd dword [ebp+0x0]");
        __asm__("fst dword [edi+0xc]");
        __asm__("fld dword [eax+0x4]");
        __asm__("fmul st0, st2");
        __asm__("fadd dword [ebp+0x4]");
        __asm__("fst dword [edi+0x10]");
        __asm__("fxch st0, st2");
        __asm__("fmul dword [eax+0x8]");
        __asm__("fadd dword [ebp+0x8]");
        __asm__("fst dword [edi+0x14]");
        if (edi22->f7c) {
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fstp st0");
        } else {
            __asm__("fxch st0, st1");
            __asm__("fsub dword [edi]");
            __asm__("fdiv dword [edi+0x60]");
            __asm__("fstp dword [edi+0x18]");
            __asm__("fxch st0, st1");
            __asm__("fsub dword [edi+0x4]");
            __asm__("fdiv dword [edi+0x60]");
            __asm__("fstp dword [edi+0x1c]");
            __asm__("fsub dword [edi+0x8]");
            __asm__("fdiv dword [edi+0x60]");
            __asm__("fstp dword [edi+0x20]");
        }
        if (edi22->f7c == 2) {
            ecx23 = reinterpret_cast<struct s0*>(&edi22->f18);
            fun_804847f(ecx23);
            fun_80484a2(ecx23, v24);
            esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 + 4 - 4 + 4);
        }
        ecx25 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp8) + 92);
        v26 = reinterpret_cast<struct s0*>(&edi22->fc);
        fun_804847f(ecx25);
        fun_8048498(ecx25, v27, v28);
        __asm__("fstp dword [esp+0x2c]");
        fun_80484a2(ecx25, v29);
        eax30 = reinterpret_cast<struct s0*>(&edi22->f18);
        ebx31 = 0;
        fun_8048438(ecx25, v32, v33, v34);
        esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
        __asm__("fst dword [esp+0x30]");
        __asm__("ftst ");
        *reinterpret_cast<int16_t*>(&eax30) = fpu_status_word36;
        __asm__("fstp st0");
        if (*reinterpret_cast<uint1_t*>(&eax30 + 1)) 
            goto addr_8049009_14;
    } else {
        __asm__("fstp st0");
        v11->f0 = 0;
        v11->f4 = 0;
        v11->f8 = 0;
        goto addr_8049380_16;
    }
    while (reinterpret_cast<int32_t>(ebx31) < reinterpret_cast<int32_t>(v15)) {
        v37 = eax30;
        v18 = eax30;
        esp38 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(esp35) - 4 - 4 - 4);
        v19 = reinterpret_cast<struct s0*>(1);
        eax30 = v13;
        ecx25 = v26;
        fun_8048c66(ecx25, esp38 + 0x68, 1, v18, v37);
        esp35 = reinterpret_cast<void*>(esp38 - 4 - 4 + 4 + 16);
        __asm__("fcom dword [0x8049a10]");
        *reinterpret_cast<int16_t*>(&eax30) = fpu_status_word39;
        if (*reinterpret_cast<uint1_t*>(&eax30 + 1) | *reinterpret_cast<uint1_t*>(&eax30 + 1)) {
            __asm__("fstp st0");
        } else {
            __asm__("fcomp dword [esp+0x2c]");
            *reinterpret_cast<int16_t*>(&eax30) = fpu_status_word40;
            if (*reinterpret_cast<uint1_t*>(&eax30 + 1)) 
                goto addr_804904a_21;
        }
        ++ebx31;
    }
    ecx25 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp35) + 80);
    fun_804847f(ecx25);
    fun_8048498(ecx25, v41, v42);
    __asm__("fld dword [esp+0x5c]");
    __asm__("fdiv st0, st1");
    __asm__("fstp dword [esp+0x5c]");
    __asm__("fld dword [esp+0x60]");
    __asm__("fdiv st0, st1");
    __asm__("fstp dword [esp+0x60]");
    __asm__("fdivr dword [esp+0x64]");
    __asm__("fstp dword [esp+0x64]");
    __asm__("fld dword [esp+0x30]");
    __asm__("fmul dword [edi+0x70]");
    __asm__("fstp dword [esp+0x34]");
    __asm__("fild dword [edi+0x78]");
    __asm__("fstp dword [esp]");
    fun_8048438(ecx25, v19, v18, 0x804932d);
    __asm__("fstp dword [esp]");
    fun_8048428(ecx25, 0x8049366, v19, v18, 0x804932d);
    esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 + 4 - 4 + 4 - 12 - 4 + 4 - 4 - 4 + 4 + 16);
    __asm__("fmul dword [edi+0x74]");
    __asm__("fadd dword [esp+0x34]");
    addr_804904c_26:
    __asm__("fstp dword [esp+0x34]");
    if (edi22->f7c) {
        fun_8048438(ecx25, v43, v44, v45);
        esp46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 + 4);
        __asm__("fld dword [0x8049a1c]");
        __asm__("fxch st0, st1");
        do {
            __asm__("fprem ");
            ax47 = fpu_status_word48;
        } while (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax47) + 1));
        __asm__("fstp st1");
        __asm__("fnstcw word [esp+0x4e]");
        __asm__("fldcw word [esp+0x4c]");
        __asm__("fistp dword [esp+0x48]");
        __asm__("fldcw word [esp+0x4e]");
        __asm__("cdq ");
        fun_8048438(ecx25, v49, v50, v51);
        esp52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp46) - 4 + 4);
        __asm__("fld dword [0x8049a1c]");
        __asm__("fxch st0, st1");
        do {
            __asm__("fprem ");
            ax53 = fpu_status_word54;
        } while (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax53) + 1));
        __asm__("fstp st1");
        __asm__("fnstcw word [esp+0x4e]");
        __asm__("fldcw word [esp+0x4c]");
        __asm__("fistp dword [esp+0x48]");
        __asm__("fldcw word [esp+0x4e]");
        __asm__("cdq ");
    } else {
        fun_8048438(ecx25, v55, v56, v57);
        __asm__("fchs ");
        __asm__("fld1 ");
        __asm__("fld st1");
        __asm__("fmul st0, st2");
        __asm__("fnstcw word [esp+0x4e]");
        __asm__("fsubr st0, st1");
        __asm__("fsqrt ");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fpatan ");
        __asm__("fld dword [0x8049a14]");
        __asm__("fmul st0, st1");
        __asm__("fldcw word [esp+0x4c]");
        __asm__("fistp dword [esp+0x48]");
        __asm__("fldcw word [esp+0x4e]");
        __asm__("fxch st0, st1");
        __asm__("fstp tword [esp+0x10]");
        __asm__("fstp dword [esp]");
        fun_8048438(ecx25, v58, v59, v60);
        __asm__("fld dword [esp]");
        __asm__("fsin ");
        __asm__("fnstcw word [esp+0x4e]");
        __asm__("fdivp st1, st0");
        __asm__("fld st0");
        __asm__("fmul st0, st1");
        __asm__("fld tword [esp+0x10]");
        __asm__("fsubrp st1, st0");
        __asm__("fsqrt ");
        __asm__("fxch st0, st1");
        __asm__("fpatan ");
        __asm__("fmul dword [0x8049a18]");
        __asm__("fldcw word [esp+0x4c]");
        __asm__("fistp dword [esp+0x48]");
        __asm__("fldcw word [esp+0x4e]");
        fun_8048438(ecx25, v61, v62, v63);
        esp52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 + 4 - 4 + 4 - 4 + 4);
        __asm__("ftst ");
        ax64 = fpu_status_word65;
        __asm__("fstp st0");
        if (!(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax64) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax64) + 1))) {
        }
    }
    __asm__("fild dword [esp]");
    __asm__("fild dword [esp]");
    __asm__("fild dword [esp]");
    __asm__("fstp dword [edi+0x2c]");
    __asm__("fld dword [esp+0x34]");
    __asm__("fadd dword [0x8049a20]");
    __asm__("fmul st2, st0");
    __asm__("fxch st0, st2");
    __asm__("fst dword [edi+0x24]");
    __asm__("fxch st0, st1");
    __asm__("fmul st0, st2");
    __asm__("fst dword [edi+0x28]");
    __asm__("fxch st0, st2");
    __asm__("fmul dword [edi+0x2c]");
    __asm__("fst dword [esp+0x40]");
    __asm__("fstp dword [edi+0x2c]");
    __asm__("fstp dword [esp+0x3c]");
    __asm__("fstp dword [esp+0x44]");
    if (a4 > 0 && edi22->f7d == 1) {
        fun_8048438(ecx25, v66, v67, v68);
        __asm__("fadd st0, st0");
        __asm__("fld dword [edi+0x1c]");
        __asm__("fmul st0, st1");
        __asm__("fld dword [edi+0x20]");
        __asm__("fmul st0, st2");
        __asm__("fxch st0, st2");
        __asm__("fmul dword [edi+0x18]");
        __asm__("fsubr dword [edx]");
        __asm__("fstp dword [esp+0x68]");
        __asm__("fsubr dword [edx+0x4]");
        __asm__("fstp dword [esp+0x6c]");
        __asm__("fsubr dword [edx+0x8]");
        __asm__("fstp dword [esp+0x70]");
        fun_80484a2(ecx25, v69);
        fun_8048ebe(v15, v70, reinterpret_cast<int32_t>(esp52) - 4 + 4 + 0x68, a4 - 1, 1);
        __asm__("fld dword [0x8049a24]");
        __asm__("fld dword [esp+0x84]");
        __asm__("fmul st0, st1");
        __asm__("fadd dword [esp+0x4c]");
        __asm__("fstp dword [esp+0x4c]");
        __asm__("fld dword [esp+0x88]");
        __asm__("fmul st0, st1");
        __asm__("fadd dword [esp+0x54]");
        __asm__("fstp dword [esp+0x54]");
        __asm__("fmul dword [esp+0x8c]");
        __asm__("fadd dword [esp+0x50]");
        __asm__("fstp dword [esp+0x50]");
    }
    __asm__("fld dword [esp+0x3c]");
    __asm__("fcom dword [0x8049a28]");
    ax71 = fpu_status_word72;
    if (!(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax71) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax71) + 1))) {
        __asm__("fstp st0");
        __asm__("fld dword [0x8049a28]");
    }
    __asm__("fstp dword [edx]");
    __asm__("fld dword [esp+0x44]");
    __asm__("fcom dword [0x8049a28]");
    ax73 = fpu_status_word74;
    if (!(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax73) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax73) + 1))) {
        __asm__("fstp st0");
        __asm__("fld dword [0x8049a28]");
    }
    __asm__("fstp dword [edx+0x4]");
    __asm__("fld dword [esp+0x40]");
    __asm__("fcom dword [0x8049a28]");
    ax75 = fpu_status_word76;
    if (!(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax75) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax75) + 1))) {
        __asm__("fstp st0");
        __asm__("fld dword [0x8049a28]");
    }
    __asm__("fstp dword [edx+0x8]");
    addr_8049380_16:
    return v11;
    addr_804904a_21:
    __asm__("fldz ");
    goto addr_804904c_26;
    addr_8049009_14:
    goto addr_804904a_21;
}

struct s0* fun_80484ca(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, ...);

struct s0* fun_8048775(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10) {
    struct s0* v11;
    int32_t v12;
    struct s0* v13;
    struct s0* eax14;
    struct s0* v15;
    int32_t v16;

    fun_80484ca(0x3f800000, v11, a2, a3, a4, 0x3f800000, v12, a2, a3, a4);
    v13 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 0x40084 + 4);
    fun_80483e8(0x3f800000, eax14, v13, 0x40080, 0x3f800000, v15, a2, a3, a4, 0x3f800000, eax14, v13, 0x40080, 0x3f800000, v16, a2, a3, a4);
    return eax14;
}

int32_t g804a0d0 = 0x80483ee;

void fun_80483e8(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, ...) {
    goto g804a0d0;
}

struct s0* fun_80486ba(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, int32_t a5, int32_t a6, int32_t a7, struct s0* a8, struct s0* a9, struct s0* a10) {
    int32_t ebx11;
    int32_t edx12;
    struct s0* esp13;
    struct s0* ecx14;
    struct s0* v15;
    int32_t v16;
    struct s0* eax17;
    struct s0* v18;
    int32_t v19;

    ebx11 = edx12;
    esp13 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 0x40080);
    __asm__("fld dword [esp+0x4009c]");
    __asm__("fst dword [esp+0x18]");
    __asm__("fchs ");
    ecx14 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp13) + 60);
    __asm__("fstp dword [esp+0x50]");
    fun_804844d(ecx14, a2, a3, a4, ecx14, a2, a3, a4);
    fun_80484ca(ecx14, a2, a3, a4, v15, ecx14, a2, a3, a4, v16);
    fun_80483e8(ecx14, eax17, esp13, 0x40080, static_cast<int32_t>(*reinterpret_cast<signed char*>(&ebx11)), a2, a3, a4, v18, ecx14, eax17, esp13, 0x40080, static_cast<int32_t>(*reinterpret_cast<signed char*>(&ebx11)), a2, a3, a4, v19);
    return eax17;
}

struct s0* fun_8048613(struct s0* ecx, int32_t a2, struct s0* a3, struct s0* a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, struct s0* a9, struct s0* a10) {
    struct s0* esp11;
    struct s0* ecx12;
    struct s0* v13;
    int32_t v14;
    struct s0* v15;
    struct s0* v16;
    int32_t v17;
    int32_t v18;
    struct s0* eax19;
    struct s0* eax20;
    struct s0* v21;
    struct s0* v22;
    int32_t v23;
    int32_t v24;

    esp11 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 0x40080);
    __asm__("fld dword [esp+0x40090]");
    __asm__("fst dword [esp]");
    __asm__("fchs ");
    ecx12 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp11) + 60);
    __asm__("fstp dword [esp+0x50]");
    fun_804844d(ecx12, v13, a3, a4, ecx12, v14, a3, a4);
    eax19 = fun_80484ca(ecx12, v15, a3, a4, v16, ecx12, v17, a3, a4, v18);
    fun_80483e8(ecx12, eax20, esp11, 0x40080, eax19, v21, a3, a4, v22, ecx12, eax20, esp11, 0x40080, eax19, v23, a3, a4, v24);
    return eax20;
}

int32_t g804a0c4 = 0x80483be;

int32_t fun_80483b8(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6) {
    goto g804a0c4;
}

struct s3 {
    signed char[48] pad48;
    struct s0* f30;
    signed char[75] pad124;
    signed char f7c;
};

void fun_804938f(struct s0* ecx, struct s0* a2) {
    uint32_t ebp3;
    struct s3* esi4;
    struct s3* eax5;
    uint32_t v6;
    uint32_t edx7;
    struct s0* v8;
    struct s0* ecx9;
    struct s0* v10;
    struct s0* v11;
    struct s0* v12;
    struct s0* v13;
    struct s0* v14;
    struct s0* v15;
    struct s0* v16;
    struct s0* v17;
    struct s0* v18;
    int32_t ebx19;
    void* esi20;
    void* v21;
    struct s0* ecx22;
    int32_t v23;
    int32_t v24;
    struct s0** v25;

    ebp3 = 0;
    esi4 = eax5;
    v6 = edx7;
    v8 = ecx;
    while (reinterpret_cast<int32_t>(ebp3) < reinterpret_cast<int32_t>(v6)) {
        ecx9 = reinterpret_cast<struct s0*>(&esi4->f30);
        fun_804847f(ecx9);
        if (!esi4->f7c) {
            __asm__("fld dword [esi+0x60]");
            __asm__("fmul st0, st0");
            __asm__("fstp dword [esp]");
            fun_8048438(ecx9, v10, v11, v12);
            __asm__("fld dword [esp]");
            __asm__("fsubrp st1, st0");
            __asm__("fstp dword [esi+0x64]");
        }
        if (esi4->f7c == 1) {
            fun_8048438(ecx9, v13, v14, v15);
            __asm__("fstp dword [esi+0x6c]");
            fun_8048438(ecx9, v16, v17, v18);
            __asm__("fstp dword [esi+0x68]");
        }
        ++ebp3;
        esi4 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(esi4) + 0x40080);
    }
    ebx19 = 0;
    esi20 = reinterpret_cast<void*>(0x964cd20);
    do {
        v21 = esi20;
        esi20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi20) + 24);
        fun_8048ebe(v6, 0x824a50c, v21, 2, 0);
        __asm__("fnstcw word [esp+0x2e]");
        __asm__("fld dword [esp+0x38]");
        __asm__("fldcw word [esp+0x2c]");
        __asm__("fistp dword [esp+0x28]");
        __asm__("fldcw word [esp+0x2e]");
        __asm__("fld dword [esp+0x34]");
        __asm__("fldcw word [esp+0x2c]");
        __asm__("fistp dword [esp+0x28]");
        __asm__("fldcw word [esp+0x2e]");
        __asm__("fld dword [esp+0x3c]");
        __asm__("fldcw word [esp+0x2c]");
        __asm__("fistp dword [esp+0x28]");
        __asm__("fldcw word [esp+0x2e]");
        ecx22 = reinterpret_cast<struct s0*>((v23 << 8) + ((v24 << 16) + reinterpret_cast<uint32_t>(v25)));
        *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(v8) + ebx19 * 4 + 4) = ecx22;
        *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(v8) + ebx19 * 4) = ecx22;
        ebx19 = ebx19 + 2;
    } while (ebx19 != 0x30000);
    return;
}

int32_t g804a0d4 = 0x80483fe;

void fun_80483f8(struct s0* ecx) {
    goto g804a0d4;
}

int32_t g804a0c8 = 0x80483ce;

void fun_80483c8(struct s0* ecx, void* a2, struct s0* a3, struct s0* a4) {
    goto g804a0c8;
}

int32_t g804a0d8 = 0x804840e;

void fun_8048408(struct s0* ecx, struct s0* a2) {
    goto g804a0d8;
}

void fun_8048c66(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    void* esp6;
    void* eax7;
    int32_t edx8;
    struct s0* ecx9;
    struct s0* v10;
    struct s0* v11;
    struct s0* v12;
    int16_t ax13;
    int16_t fpu_status_word14;
    struct s0* v15;
    struct s0* v16;
    struct s0* v17;
    struct s0* v18;
    struct s0* v19;
    struct s0* v20;
    int16_t ax21;
    int16_t fpu_status_word22;
    int16_t ax23;
    int16_t fpu_status_word24;
    void* esp25;
    struct s0* ecx26;
    struct s0* v27;
    struct s0* v28;
    struct s0* v29;
    int16_t ax30;
    int16_t fpu_status_word31;
    struct s0* v32;
    struct s0* v33;
    struct s0* v34;
    struct s0* v35;
    struct s0* v36;
    struct s0* v37;
    struct s0* v38;
    struct s0* v39;
    struct s0* v40;
    int16_t ax41;
    int16_t fpu_status_word42;
    struct s0* v43;
    struct s0* v44;
    struct s0* v45;
    struct s0* v46;
    int16_t ax47;
    int16_t fpu_status_word48;
    struct s0* ebx49;
    struct s0* v50;
    struct s0* v51;
    struct s0* v52;
    struct s0* v53;
    struct s0* v54;
    struct s0* v55;
    struct s0* v56;
    struct s0* v57;
    struct s0* v58;
    struct s0* v59;
    struct s0* v60;
    struct s0* v61;
    struct s0* v62;
    struct s0* v63;
    struct s0* v64;
    struct s0* v65;
    int16_t ax66;
    int16_t fpu_status_word67;
    int16_t ax68;
    int16_t fpu_status_word69;

    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 92);
    if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax7) + edx8 * 0x40080 + 0x7c)) {
        if (a3) {
            ecx9 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp6) + 68);
            fun_804847f(ecx9);
            fun_8048438(ecx9, v10, v11, v12);
            __asm__("fld st0");
            __asm__("ftst ");
            ax13 = fpu_status_word14;
            __asm__("fstp st0");
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax13) + 1)) {
                addr_8048eae_4:
                __asm__("fstp st0");
                goto addr_8048eb0_5;
            } else {
                __asm__("fld dword [edi+0x60]");
                __asm__("fmul st0, st0");
                __asm__("fstp dword [esp+0x10]");
                __asm__("fstp dword [esp]");
                fun_8048438(ecx9, v15, v16, v17);
                __asm__("fsubr dword [esp+0x10]");
                __asm__("fstp dword [esp+0x10]");
                __asm__("fld dword [esp]");
            }
        } else {
            __asm__("fld dword [edi+0x64]");
            __asm__("fstp dword [esp+0x10]");
            fun_8048438(a3, v18, v19, v20);
            __asm__("fld st0");
            __asm__("ftst ");
            ax21 = fpu_status_word22;
            __asm__("fstp st0");
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax21) + 1)) {
                goto addr_8048eae_4;
            }
        }
        __asm__("fld st0");
        __asm__("fmul st0, st1");
        __asm__("fadd dword [esp+0x10]");
        __asm__("ftst ");
        ax23 = fpu_status_word24;
        if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax23) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax23) + 1)) {
            __asm__("fstp st0");
            goto addr_8048eae_4;
        } else {
            __asm__("fsqrt ");
            __asm__("fsubp st1, st0");
            goto addr_8048eb6_12;
        }
    }
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax7) + edx8 * 0x40080 + 0x7c) != 1) {
        if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax7) + edx8 * 0x40080 + 0x7c) != 2) 
            goto addr_8048eb0_5;
        fun_804847f(reinterpret_cast<int32_t>(esp6) + 56);
        esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
        ecx26 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp25) + 44);
        fun_804844d(ecx26, v27, v28, v29);
        __asm__("fld dword [esp+0x2c]");
        __asm__("fstp dword [esp+0x1c]");
        __asm__("fld dword [esp+0x30]");
        __asm__("fld dword [esp+0x34]");
        __asm__("fld dword [esp+0x1c]");
        __asm__("fmul st0, st0");
        __asm__("fxch st0, st2");
        __asm__("fmul st0, st0");
        __asm__("faddp st2, st0");
        __asm__("fmul st0, st0");
        __asm__("faddp st1, st0");
        __asm__("fsqrt ");
        __asm__("fst dword [esp+0x1c]");
        __asm__("ftst ");
        ax30 = fpu_status_word31;
        if (!(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax30) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax30) + 1))) 
            goto addr_8048dad_16;
    } else {
        if (a3) {
            fun_8048438(a3, v32, v33, v34);
            __asm__("fsubr dword [edi+0x68]");
            __asm__("fstp dword [esp+0xc]");
            fun_8048438(a3, v35, v36, v37);
            __asm__("fdivr dword [esp+0xc]");
            goto addr_8048e9f_19;
        } else {
            fun_8048438(a3, v38, v39, v40);
            __asm__("fdivr dword [edi+0x6c]");
            goto addr_8048e9f_19;
        }
    }
    __asm__("fstp st0");
    goto addr_8048e01_22;
    addr_8048dad_16:
    __asm__("fcomp dword [0x8049a08]");
    ax41 = fpu_status_word42;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax41) + 1)) {
        addr_8048e01_22:
        fun_80484a2(ecx26, v43);
        fun_8048438(ecx26, v44, v45, v46);
        __asm__("fstp dword [esp+0x14]");
        __asm__("fld dword [esp+0x14]");
        __asm__("fcomp dword [edi+0x60]");
        ax47 = fpu_status_word48;
        if (!reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax47) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax47) + 1))) {
            addr_8048eb0_5:
            __asm__("fld dword [0x8049a04]");
            goto addr_8048eb6_12;
        } else {
            ebx49 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp25) - 4 + 4 - 4 + 4 - 4 + 4 + 32);
            fun_804844d(ebx49, v50, v51, v52);
            fun_8048438(ebx49, v53, v54, v55);
            __asm__("fstp dword [esp+0x18]");
            __asm__("fld dword [esp+0x18]");
            __asm__("fdiv dword [esp+0x1c]");
            __asm__("fstp dword [esp+0x18]");
            fun_804844d(ebx49, v56, v57, v58);
            fun_80484a2(ebx49, v59);
            __asm__("fld dword [edi+0x60]");
            __asm__("fmul st0, st0");
            __asm__("fld dword [esp+0x14]");
            __asm__("fmul st0, st0");
            __asm__("fsubp st1, st0");
            __asm__("fsqrt ");
            __asm__("fstp dword [esp]");
            fun_8048438(ebx49, v60, v61, v62);
            __asm__("fld dword [esp]");
            __asm__("fdivrp st1, st0");
            __asm__("fabs ");
            __asm__("fld dword [esp+0x18]");
            __asm__("fsubrp st1, st0");
        }
    } else {
        fun_8048438(ecx26, v63, v64, v65);
        __asm__("fld dword [edi+0x54]");
        __asm__("fmul st0, st1");
        __asm__("fsubr dword [esp+0x38]");
        __asm__("fld dword [edi+0x58]");
        __asm__("fmul st0, st2");
        __asm__("fsubr dword [esp+0x3c]");
        __asm__("fxch st0, st2");
        __asm__("fmul dword [edi+0x5c]");
        __asm__("fsubr dword [esp+0x40]");
        __asm__("fxch st0, st1");
        __asm__("fmul st0, st0");
        __asm__("fxch st0, st2");
        __asm__("fmul st0, st0");
        __asm__("faddp st2, st0");
        __asm__("fmul st0, st0");
        __asm__("faddp st1, st0");
        __asm__("fsqrt ");
        __asm__("fld st0");
        __asm__("fcomp dword [edi+0x60]");
        ax66 = fpu_status_word67;
        if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax66) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax66) + 1)) 
            goto addr_8048eb6_12;
        goto addr_8048eae_4;
    }
    addr_8048e9f_19:
    __asm__("fcom dword [0x8049a08]");
    ax68 = fpu_status_word69;
    if (!reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax68) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax68) + 1))) {
        addr_8048eb6_12:
        return;
    } else {
        goto addr_8048eae_4;
    }
}

void fun_8048398(int32_t a1);

struct s0* fun_80484ca(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, ...) {
    void* ebp6;
    void* edx7;
    uint32_t edi8;
    struct s0** v9;
    struct s0** eax10;
    uint32_t ebx11;
    int32_t v12;
    void* ecx13;
    struct s0** esi14;
    uint32_t eax15;
    void* eax16;
    struct s0* eax17;
    int32_t eax18;
    void* edx19;
    void* ecx20;
    int32_t ebp21;
    void* edi22;
    int32_t ebx23;
    int32_t esi24;
    void* edx25;
    int32_t v26;

    ebp6 = edx7;
    edi8 = 0;
    v9 = eax10;
    fun_8048398(0x539);
    do {
        __asm__("cdq ");
        ebx11 = 0;
        v12 = reinterpret_cast<int32_t>(edi8) % 20;
        while (1) {
            ecx13 = ebp6;
            esi14 = v9 + ((edi8 << 8) + ebx11) * 4;
            *esi14 = reinterpret_cast<struct s0*>(0xffffff);
            if (!*reinterpret_cast<signed char*>(&ecx13)) {
                eax15 = ebx11 + 100 ^ edi8;
                goto addr_804855e_5;
            }
            eax16 = ebp6;
            if (*reinterpret_cast<signed char*>(&eax16) - 1) {
                eax17 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffffe);
                if (*reinterpret_cast<unsigned char*>(&eax17) > 1) {
                    addr_8048566_8:
                    ++ebx11;
                    if (ebx11 != 0x100) 
                        continue; else 
                        break;
                } else {
                    eax18 = fun_8048418();
                    __asm__("cdq ");
                    eax15 = eax18 % 64 + 0xc0;
                    edx19 = ebp6;
                    if (*reinterpret_cast<signed char*>(&edx19) != 2) {
                        addr_804855e_5:
                        eax17 = reinterpret_cast<struct s0*>(eax15 * 0x10101);
                    } else {
                        eax17 = reinterpret_cast<struct s0*>(eax15 << 8);
                    }
                }
            } else {
                __asm__("cdq ");
                if (reinterpret_cast<int32_t>(ebx11) % 20 > 9 || (eax17 = reinterpret_cast<struct s0*>(0xff0000), v12 > 9)) {
                    eax17 = reinterpret_cast<struct s0*>(0xff00ff);
                }
            }
            *esi14 = eax17;
            goto addr_8048566_8;
        }
        ++edi8;
    } while (edi8 != 0x100);
    ecx20 = ebp6;
    if (*reinterpret_cast<signed char*>(&ecx20) == 4) {
        ebp21 = 0;
        while (1) {
            edi22 = reinterpret_cast<void*>(0);
            do {
                ebx23 = ebp21;
                esi24 = 0;
                do {
                    edx25 = edi22;
                    v26 = 0;
                    do {
                        ++v26;
                        v9[((ebx23 << 8) + reinterpret_cast<int32_t>(edx25)) * 4] = reinterpret_cast<struct s0*>(0xff0000);
                        eax17 = reinterpret_cast<struct s0*>((ebx23 << 8) + reinterpret_cast<int32_t>(edx25) + 0x1000);
                        edx25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx25) + 1);
                        *reinterpret_cast<int32_t*>(v9 + reinterpret_cast<unsigned char>(eax17) * 4 + 64) = 0xff0000;
                    } while (v26 != 16);
                    ++esi24;
                    ++ebx23;
                } while (esi24 != 16);
                edi22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi22) + 32);
            } while (!reinterpret_cast<int1_t>(edi22 == 0x100));
            ebp21 = ebp21 + 32;
            if (ebp21 == 0x100) 
                break;
        }
    }
    return eax17;
}

int32_t g804a0e0 = 0x804842e;

void fun_8048428(struct s0* ecx, int32_t a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    goto g804a0e0;
}

int32_t g804a0cc = 0x80483de;

struct s0* fun_80483d8(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto g804a0cc;
}

int32_t g804a0c0 = 0x80483ae;

void fun_80483a8(int32_t a1, int32_t a2, int32_t a3, int32_t a4, struct s0* a5) {
    goto g804a0c0;
}

int32_t g804a0bc = 0x804839e;

void fun_8048398(int32_t a1) {
    goto g804a0bc;
}

struct s4 {
    unsigned char f0;
    signed char[536870911] pad536870912;
    int32_t f20000000;
};

struct s5 {
    signed char[4] pad4;
    unsigned char f4;
};

struct s6 {
    unsigned char f0;
    signed char[116] pad117;
    int32_t f75;
};

unsigned char g4000000;

struct s7 {
    unsigned char f0;
    signed char[46] pad47;
    int32_t f2f;
};

unsigned char g0;

void* ga0000804;

unsigned char g60184;

struct s8 {
    unsigned char f0;
    signed char[301989887] pad301989888;
    signed char f12000000;
    signed char[536870925] pad301989902;
    signed char f1200000e;
};

signed char gb000000;

unsigned char g3000000;

void* g804;

void fun_8048000(unsigned char* ecx) {
    int1_t less_or_equal2;
    int32_t eax3;
    int32_t* eax4;
    int32_t* eax5;
    int32_t eax6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    int32_t* eax19;
    signed char al20;
    signed char* eax21;
    signed char* eax22;
    struct s4* edi23;
    struct s5* edi24;
    struct s6* esi25;
    void* esi26;
    void** eax27;
    int16_t es28;
    signed char dh29;
    void* al30;
    unsigned char tmp8_31;
    unsigned char* ebx32;
    signed char* ebx33;
    void* dh34;
    void* dh35;
    signed char* ebx36;
    signed char* ebx37;
    signed char dl38;
    void* tmp8_39;
    void* dl40;
    struct s7* edx41;
    void* dl42;
    unsigned char tmp8_43;
    uint1_t cf44;
    void* al45;
    void* esp46;
    struct s8* ebp47;
    unsigned char* ebx48;
    signed char* ebx49;
    signed char tmp8_50;
    unsigned char tmp8_51;
    int16_t* esp52;
    int16_t es53;
    void* tmp8_54;
    uint1_t cf55;
    unsigned char tmp8_56;
    signed char dh57;
    signed char dh58;
    signed char bl59;
    void* tmp8_60;
    uint1_t cf61;
    void* tmp8_62;
    uint1_t cf63;
    signed char bh64;
    int32_t ebx65;
    int32_t ebx66;
    void* tmp8_67;
    uint1_t cf68;
    int32_t* esp69;
    void** eax70;
    void* dh71;
    unsigned char* eax72;
    unsigned char tmp8_73;
    uint1_t cf74;
    unsigned char tmp8_75;
    uint1_t cf76;

    if (less_or_equal2) {
        *ecx = reinterpret_cast<unsigned char>(*ecx + eax3);
        *eax4 = *eax5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax19) + *eax19);
        *eax22 = reinterpret_cast<signed char>(*eax22 + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<signed char>(*eax22 + *reinterpret_cast<signed char*>(&eax22));
        edi23 = reinterpret_cast<struct s4*>(&edi24->f4);
        esi25 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(esi26) + 1 + 4);
        eax27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 1);
        *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)) + 8)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27))));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<int16_t*>(eax22 - 2) = es28;
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        esi25->f0 = reinterpret_cast<unsigned char>(esi25->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) + dh29);
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        al30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)) ^ 0x80) + 8) ^ 0x80) + 8);
        __asm__("rol byte [eax], 0x0");
    }
    *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(al30) + reinterpret_cast<unsigned char>(al30));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    tmp8_31 = reinterpret_cast<unsigned char>(g4000000 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    g4000000 = tmp8_31;
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *ebx32 = reinterpret_cast<unsigned char>(*ebx33 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax27) + 1) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax27) + 1)) + reinterpret_cast<signed char>(dh34));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax27) + 1) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax27) + 1)) + reinterpret_cast<signed char>(dh35));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(ecx)) - 12);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(ecx)) + 19);
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *ebx36 = reinterpret_cast<signed char>(*ebx37 + dl38);
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<int32_t>(eax27));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<int32_t>(eax27));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<unsigned char*>(eax27 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax27 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)) + 8);
    __asm__("retf 0x1a");
    tmp8_39 = reinterpret_cast<void*>(reinterpret_cast<signed char>(dl40) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx)));
    *reinterpret_cast<void**>(&edx41) = tmp8_39;
    *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_39) < reinterpret_cast<unsigned char>(dl42))))));
    tmp8_43 = reinterpret_cast<unsigned char>(g0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    cf44 = reinterpret_cast<uint1_t>(tmp8_43 < g0);
    g0 = tmp8_43;
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27))) + cf44);
    *ecx = reinterpret_cast<unsigned char>(*ecx + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    al45 = ga0000804;
    *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(reinterpret_cast<signed char>(al45) + 8);
    __asm__("in al, 0x0");
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    g60184 = 0;
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx41)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)) + reinterpret_cast<unsigned char>(*eax27));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax27) + 1)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<signed char*>(eax27 - 0x5ffff7fc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax27 - 0x5ffff7fc) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax27) + 1)));
    *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(0);
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(0);
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27))));
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    __asm__("in eax, 0x74");
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27))));
    *eax27 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    __asm__("das ");
    __asm__("insb ");
    esp46 = reinterpret_cast<void*>(edx41->f2f * 0x6c2d646c);
    ebp47 = reinterpret_cast<struct s8*>(esi25->f75 * 0x6f732e78);
    *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax27)));
    *ebx48 = reinterpret_cast<unsigned char>(*ebx49 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    esi25->f0 = reinterpret_cast<unsigned char>(esi25->f0 + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    tmp8_50 = reinterpret_cast<signed char>(gb000000 + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx)));
    gb000000 = tmp8_50;
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    edi23->f0 = reinterpret_cast<unsigned char>(edi23->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *ecx = reinterpret_cast<unsigned char>(*ecx + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    edx41->f0 = reinterpret_cast<unsigned char>(edx41->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    tmp8_51 = reinterpret_cast<unsigned char>(g3000000 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    g3000000 = tmp8_51;
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    esp52 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp46) - 2);
    *esp52 = es53;
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    edx41->f0 = reinterpret_cast<unsigned char>(edx41->f0 + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *ecx = reinterpret_cast<unsigned char>(*ecx + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    tmp8_54 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    cf55 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_54) < reinterpret_cast<unsigned char>(*eax27));
    *eax27 = tmp8_54;
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    __asm__("pushad ");
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    edx41->f0 = reinterpret_cast<unsigned char>(edx41->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx41)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    tmp8_56 = reinterpret_cast<unsigned char>(g0 + dh57);
    g0 = tmp8_56;
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp47) + 0x12000000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp47) + 0x12000000) + dh58);
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    edx41->f0 = reinterpret_cast<unsigned char>(edx41->f0 + bl59);
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax27) + 1)));
    tmp8_60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    cf61 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_60) < reinterpret_cast<unsigned char>(*eax27));
    *eax27 = tmp8_60;
    *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)) + reinterpret_cast<unsigned char>(*eax27)) + cf61);
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    __asm__("daa ");
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx)));
    tmp8_62 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    cf63 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_62) < reinterpret_cast<unsigned char>(*eax27));
    *eax27 = tmp8_62;
    *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)) + reinterpret_cast<unsigned char>(*eax27)) + cf63);
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp47) + 0x1200000e) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp47) + 0x1200000e) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<unsigned char*>(ebp47) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp47) + bh64);
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    edx41->f0 = reinterpret_cast<unsigned char>(edx41->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx41)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<signed char*>(ebx65 - 0x1c000000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx66 - 0x1c000000) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx)));
    *reinterpret_cast<void**>(&eax27) = g804;
    tmp8_67 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    cf68 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_67) < reinterpret_cast<unsigned char>(*eax27));
    *eax27 = tmp8_67;
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27))) + cf68);
    __asm__("int1 ");
    esp69 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp52) + 1 - 4);
    *esp69 = 0x80481d9;
    eax70 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(&(edi23 + 0x8000000)->f0)());
    __asm__("int 0x88");
    *eax70 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax70) | reinterpret_cast<uint32_t>(eax70));
    *eax70 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax70) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax70)));
    *eax70 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax70) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx41)));
    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx)) + reinterpret_cast<signed char>(dh71));
    *(esp69 + 1 - 1) = 0x80481e5;
    eax72 = reinterpret_cast<unsigned char*>(*ecx());
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + reinterpret_cast<uint32_t>(eax72));
    edx41->f0 = reinterpret_cast<unsigned char>(edx41->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx41)));
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    *reinterpret_cast<unsigned char*>(ebp47) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp47) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx41)));
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    *eax72 = reinterpret_cast<unsigned char>(*eax72 - reinterpret_cast<uint32_t>(eax72));
    tmp8_73 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    cf74 = reinterpret_cast<uint1_t>(tmp8_73 < *eax72);
    *eax72 = tmp8_73;
    *reinterpret_cast<unsigned char*>(&eax72) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax72) + *eax72) + cf74);
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    edx41->f0 = reinterpret_cast<unsigned char>(edx41->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx41)));
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax72) + reinterpret_cast<uint32_t>(eax72) + 0xa0e40000) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax72) + reinterpret_cast<uint32_t>(eax72) + 0xa0e40000) + *reinterpret_cast<unsigned char*>(&eax72));
    *reinterpret_cast<unsigned char*>(&eax72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax72) + 8);
    *eax72 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    tmp8_75 = reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72));
    cf76 = reinterpret_cast<uint1_t>(tmp8_75 < *eax72);
    *eax72 = tmp8_75;
    *eax72 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax72 + *reinterpret_cast<unsigned char*>(&eax72)) + cf76);
    __asm__("int1 ");
    goto *eax72;
}

struct s9 {
    signed char[65] pad65;
    signed char f41;
};

struct s10 {
    signed char[65] pad65;
    signed char f41;
};

void fun_8049a37(signed char* ecx) {
    struct s9* eax2;
    struct s10* eax3;
    signed char ah4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    int32_t* eax14;
    int32_t* eax15;
    int32_t eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    signed char al21;
    signed char al22;
    signed char* eax23;
    signed char* eax24;
    signed char al25;
    signed char al26;
    signed char* eax27;
    signed char* eax28;
    signed char al29;
    int32_t* eax30;
    int32_t* eax31;
    int32_t eax32;
    signed char* eax33;
    signed char* eax34;
    signed char al35;
    signed char* eax36;
    signed char* eax37;
    signed char al38;
    int32_t* eax39;
    int32_t* eax40;
    int32_t eax41;
    int32_t* eax42;
    int32_t* eax43;
    int32_t eax44;
    int32_t eax45;
    signed char al46;
    int32_t* eax47;
    int32_t* eax48;
    int32_t eax49;
    int32_t eax50;
    signed char al51;
    int32_t* eax52;
    int32_t* eax53;
    int32_t eax54;
    int32_t* eax55;
    int32_t* eax56;
    int32_t eax57;
    int32_t eax58;
    signed char al59;
    signed char al60;
    int32_t eax61;
    signed char al62;
    int32_t eax63;
    int32_t eax64;
    signed char al65;
    int32_t eax66;
    int32_t eax67;
    signed char al68;
    int32_t eax69;
    int32_t* eax70;
    int32_t* eax71;
    int32_t eax72;
    int32_t* eax73;
    int32_t* eax74;
    int32_t eax75;
    int32_t* eax76;
    int32_t* eax77;
    int32_t eax78;
    int32_t* eax79;
    int32_t* eax80;
    int32_t eax81;
    int32_t* eax82;
    int32_t* eax83;
    int32_t eax84;
    int32_t* eax85;
    int32_t* eax86;
    int32_t eax87;
    int32_t* eax88;
    int32_t* eax89;
    int32_t eax90;
    int32_t* eax91;
    int32_t* eax92;
    int32_t eax93;
    int32_t* eax94;
    int32_t* eax95;
    int32_t eax96;
    int32_t* eax97;
    int32_t* eax98;
    int32_t eax99;
    int32_t* eax100;
    int32_t* eax101;
    int32_t eax102;
    int32_t eax103;
    int32_t eax104;
    signed char al105;
    signed char al106;
    signed char al107;
    signed char* eax108;
    signed char* eax109;
    signed char al110;
    signed char al111;
    signed char al112;
    signed char* eax113;
    signed char* eax114;
    signed char al115;
    signed char al116;
    signed char al117;
    signed char al118;
    int32_t* eax119;
    int32_t* eax120;
    int32_t eax121;
    int32_t* eax122;
    int32_t* eax123;
    int32_t eax124;
    int32_t* eax125;
    int32_t* eax126;
    int32_t eax127;
    int32_t* eax128;
    int32_t* eax129;
    int32_t eax130;
    int32_t* eax131;
    int32_t* eax132;
    int32_t eax133;
    signed char* eax134;
    signed char* eax135;
    signed char al136;
    int32_t* eax137;
    int32_t* eax138;
    int32_t eax139;
    int32_t* eax140;
    int32_t* eax141;
    int32_t eax142;
    signed char* eax143;
    signed char* eax144;
    signed char al145;
    int32_t* eax146;
    int32_t* eax147;
    int32_t eax148;
    int32_t* eax149;
    int32_t* eax150;
    int32_t eax151;

    eax2->f41 = reinterpret_cast<signed char>(eax3->f41 + ah4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
    *eax14 = *eax15 + eax16;
    *ecx = reinterpret_cast<signed char>(*ecx + al17);
    *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
    *ecx = reinterpret_cast<signed char>(*ecx + al21);
    *ecx = reinterpret_cast<signed char>(*ecx + al22);
    *eax23 = reinterpret_cast<signed char>(*eax24 + al25);
    *ecx = reinterpret_cast<signed char>(*ecx + al26);
    *eax27 = reinterpret_cast<signed char>(*eax28 + al29);
    *eax30 = *eax31 + eax32;
    *eax33 = reinterpret_cast<signed char>(*eax34 + al35);
    *eax36 = reinterpret_cast<signed char>(*eax37 + al38);
    *eax39 = *eax40 + eax41;
    *eax42 = *eax43 + eax44;
    *ecx = reinterpret_cast<signed char>(*ecx + eax45);
    *ecx = reinterpret_cast<signed char>(*ecx + al46);
    *eax47 = *eax48 + eax49;
    *ecx = reinterpret_cast<signed char>(*ecx + eax50);
    *ecx = reinterpret_cast<signed char>(*ecx + al51);
    *eax52 = *eax53 + eax54;
    *eax55 = *eax56 + eax57;
    *ecx = reinterpret_cast<signed char>(*ecx + eax58);
    *ecx = reinterpret_cast<signed char>(*ecx + al59);
    *ecx = reinterpret_cast<signed char>(*ecx + al60);
    *ecx = reinterpret_cast<signed char>(*ecx + eax61);
    *ecx = reinterpret_cast<signed char>(*ecx + al62);
    *ecx = reinterpret_cast<signed char>(*ecx + eax63);
    *ecx = reinterpret_cast<signed char>(*ecx + eax64);
    *ecx = reinterpret_cast<signed char>(*ecx + al65);
    *ecx = reinterpret_cast<signed char>(*ecx + eax66);
    *ecx = reinterpret_cast<signed char>(*ecx + eax67);
    *ecx = reinterpret_cast<signed char>(*ecx + al68);
    *ecx = reinterpret_cast<signed char>(*ecx + eax69);
    *eax70 = *eax71 + eax72;
    *eax73 = *eax74 + eax75;
    *eax76 = *eax77 + eax78;
    *eax79 = *eax80 + eax81;
    *eax82 = *eax83 + eax84;
    *eax85 = *eax86 + eax87;
    *eax88 = *eax89 + eax90;
    *eax91 = *eax92 + eax93;
    *eax94 = *eax95 + eax96;
    *eax97 = *eax98 + eax99;
    *eax100 = *eax101 + eax102;
    *ecx = reinterpret_cast<signed char>(*ecx + eax103);
    *ecx = reinterpret_cast<signed char>(*ecx + eax104);
    *ecx = reinterpret_cast<signed char>(*ecx + al105);
    *ecx = reinterpret_cast<signed char>(*ecx + al106);
    *ecx = reinterpret_cast<signed char>(*ecx + al107);
    *eax108 = reinterpret_cast<signed char>(*eax109 + al110);
    *ecx = reinterpret_cast<signed char>(*ecx + al111);
    *ecx = reinterpret_cast<signed char>(*ecx + al112);
    *eax113 = reinterpret_cast<signed char>(*eax114 + al115);
    *ecx = reinterpret_cast<signed char>(*ecx + al116);
    *ecx = reinterpret_cast<signed char>(*ecx + al117);
    *ecx = reinterpret_cast<signed char>(*ecx + al118);
    *eax119 = *eax120 + eax121;
    *eax122 = *eax123 + eax124;
    *eax125 = *eax126 + eax127;
    *eax128 = *eax129 + eax130;
    *eax131 = *eax132 + eax133;
    *eax134 = reinterpret_cast<signed char>(*eax135 + al136);
    *eax137 = *eax138 + eax139;
    *eax140 = *eax141 + eax142;
    *eax143 = reinterpret_cast<signed char>(*eax144 + al145);
    *eax146 = *eax147 + eax148;
    *eax149 = *eax150 + eax151;
}

struct s12 {
    signed char[76] pad76;
    signed char f4c;
    signed char[24] pad101;
    signed char f65;
};

struct s11 {
    struct s12* f0;
    uint32_t f4;
};

struct s13 {
    signed char[83] pad83;
    int32_t f53;
};

struct s14 {
    signed char f0;
    signed char[12] pad13;
    int32_t fd;
    signed char[88] pad105;
    unsigned char f69;
};

struct s15 {
    uint32_t f0;
    struct s14* f4;
};

struct s16 {
    void* f0;
    struct s12* f4;
};

struct s17 {
    signed char[95] pad95;
    unsigned char f5f;
    signed char[5] pad101;
    unsigned char f65;
};

struct s18 {
    signed char[107] pad107;
    int32_t f6b;
};

struct s19 {
    unsigned char f0;
    signed char[100] pad101;
    unsigned char f65;
    signed char[9] pad111;
    int32_t f6f;
};

struct s20 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s21 {
    struct s14* f0;
    struct s12* f4;
};

struct s22 {
    signed char[68] pad68;
    signed char f44;
};

struct s23 {
    signed char[68] pad68;
    signed char f44;
};

struct s24 {
    signed char[109] pad109;
    int32_t f6d;
};

struct s25 {
    signed char[111] pad111;
    signed char f6f;
};

struct s26 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s27 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s28 {
    signed char[111] pad111;
    signed char f6f;
};

struct s29 {
    signed char[114] pad114;
    signed char f72;
};

struct s30 {
    signed char[114] pad114;
    signed char f72;
};

struct s31 {
    unsigned char f0;
    signed char[17238019] pad17238020;
    signed char f1070804;
    signed char[16777215] pad34015236;
    signed char f2070804;
    signed char[67108863] pad101124100;
    signed char f6070804;
};

signed char g3070804;

signed char g5070804;

signed char ga070804;

int32_t g804a0b8 = 0;

void fun_8048226() {
    uint32_t eflags1;
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* edx11;
    signed char* edx12;
    signed char dl13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    struct s11* esp20;
    struct s13* edx21;
    struct s14* ecx22;
    unsigned char ch23;
    unsigned char* esi24;
    unsigned char* eax25;
    unsigned char* eax26;
    unsigned char al27;
    struct s15* esp28;
    uint32_t ebx29;
    struct s16* esp30;
    unsigned char* esi31;
    int32_t* eax32;
    struct s17* edi33;
    struct s12** esp34;
    struct s18* ebx35;
    struct s12* edi36;
    struct s15* esp37;
    uint32_t eax38;
    struct s19* ebp39;
    struct s20* ebp40;
    uint1_t zf41;
    signed char al42;
    int32_t edx43;
    int32_t edx44;
    int32_t ebx45;
    int32_t ebx46;
    struct s21* esp47;
    int32_t* esp48;
    int32_t ebx49;
    int32_t* esp50;
    int32_t ebx51;
    signed char* eax52;
    signed char* eax53;
    signed char al54;
    signed char* eax55;
    signed char* eax56;
    signed char al57;
    signed char* eax58;
    signed char* eax59;
    signed char al60;
    signed char* eax61;
    signed char* eax62;
    signed char al63;
    signed char* eax64;
    signed char* eax65;
    signed char al66;
    signed char* eax67;
    signed char* eax68;
    signed char al69;
    signed char* eax70;
    signed char* eax71;
    signed char al72;
    signed char* eax73;
    signed char* eax74;
    signed char al75;
    int32_t* eax76;
    int32_t* eax77;
    int32_t eax78;
    int32_t* esp79;
    int32_t ebx80;
    void* esp81;
    struct s14* ebx82;
    unsigned char* eax83;
    unsigned char* eax84;
    unsigned char al85;
    signed char* eax86;
    signed char* eax87;
    signed char al88;
    signed char* eax89;
    signed char* eax90;
    signed char al91;
    signed char* eax92;
    signed char* eax93;
    signed char al94;
    signed char* eax95;
    signed char* eax96;
    signed char al97;
    signed char* eax98;
    signed char* eax99;
    signed char al100;
    signed char* eax101;
    signed char* eax102;
    signed char al103;
    signed char* eax104;
    signed char* eax105;
    signed char al106;
    void* esp107;
    struct s22* ebx108;
    struct s23* ebx109;
    signed char dl110;
    struct s17** esp111;
    int1_t zf112;
    int32_t* eax113;
    int32_t* eax114;
    int32_t eax115;
    signed char* eax116;
    signed char* eax117;
    signed char al118;
    signed char* eax119;
    signed char* eax120;
    signed char* eax121;
    signed char* eax122;
    signed char al123;
    signed char* eax124;
    signed char* eax125;
    signed char ah126;
    signed char* eax127;
    signed char* eax128;
    signed char al129;
    struct s24* edx130;
    unsigned char tmp8_131;
    struct s25* eax132;
    signed char dh133;
    uint1_t cf134;
    struct s26* eax135;
    struct s27* eax136;
    struct s28* eax137;
    signed char* eax138;
    signed char* eax139;
    signed char* eax140;
    signed char* eax141;
    signed char al142;
    signed char* eax143;
    signed char* eax144;
    signed char al145;
    signed char* eax146;
    signed char* eax147;
    signed char al148;
    unsigned char tmp8_149;
    int1_t cf150;
    signed char al151;
    signed char al152;
    unsigned char tmp8_153;
    signed char* eax154;
    signed char al155;
    uint1_t cf156;
    unsigned char* eax157;
    unsigned char* eax158;
    struct s29* ebx159;
    struct s30* ebx160;
    signed char dh161;
    unsigned char tmp8_162;
    signed char bl163;
    unsigned char* eax164;
    signed char* eax165;
    signed char al166;
    unsigned char tmp8_167;
    signed char bl168;
    int1_t cf169;
    signed char bl170;
    struct s31* eax171;
    unsigned char tmp8_172;
    uint1_t cf173;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags1) + 1) = 0;
    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    __asm__("retf 0x1");
    *edx11 = reinterpret_cast<signed char>(*edx12 + dl13);
    *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
    *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
    __asm__("insb ");
    esp20 = reinterpret_cast<struct s11*>(edx21->f53 * 0x312d4c44);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx22) + 1) = reinterpret_cast<unsigned char>(ch23 ^ *esi24);
    if (!1) {
        *eax25 = reinterpret_cast<unsigned char>(*eax26 ^ al27);
        esp28 = reinterpret_cast<struct s15*>(reinterpret_cast<int32_t>(esp20) - 4);
        esp28->f0 = ebx29;
        esp30 = reinterpret_cast<struct s16*>(reinterpret_cast<int32_t>(esp28) + 1 - 1);
        esp20 = reinterpret_cast<struct s11*>(&esp30->f4);
        __asm__("insb ");
        esi31 = reinterpret_cast<unsigned char*>(*eax32 * 0x5f4c4453);
        edi33 = reinterpret_cast<struct s17*>(reinterpret_cast<int32_t>(esp30->f0) + 1);
        if (edi33) {
            esp34 = reinterpret_cast<struct s12**>(ebx35->f6b * 0x44530073 - 1);
            edi36 = *esp34;
            esp37 = reinterpret_cast<struct s15*>(esp34 + 1 - 1);
            esp37->f0 = eax38;
            __asm__("outsd ");
            __asm__("insb ");
            __asm__("insb ");
            ebp39 = reinterpret_cast<struct s19*>(&ebp40->f1);
            zf41 = reinterpret_cast<uint1_t>(ebp39 == 0);
            if (__intrinsic() | zf41) {
                addr_80482cb_4:
                __asm__("outsb ");
                edi36->f4c = reinterpret_cast<signed char>(edi36->f4c + al42);
                ecx22 = reinterpret_cast<struct s14*>(reinterpret_cast<int32_t>(ecx22) - 1);
                edx43 = edx44 + 1;
                ebx45 = ebx46 + 1;
                esp47 = reinterpret_cast<struct s21*>(&esp37->f4);
                goto addr_80482d6_5;
            } else {
                __asm__("outsb ");
                esp48 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp37) - 4);
                *esp48 = ebx49;
                esp50 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp48) + 1 - 1 + 4 - 4);
                *esp50 = ebx51;
                esp47 = reinterpret_cast<struct s21*>(esp50 - 1);
                esp47->f0 = reinterpret_cast<struct s14*>(0x7543776f);
                if (__intrinsic()) {
                    addr_80482e8_8:
                    *eax52 = reinterpret_cast<signed char>(*eax53 + al54);
                    *eax55 = reinterpret_cast<signed char>(*eax56 + al57);
                    *eax58 = reinterpret_cast<signed char>(*eax59 + al60);
                    *eax61 = reinterpret_cast<signed char>(*eax62 + al63);
                    *eax64 = reinterpret_cast<signed char>(*eax65 + al66);
                    *eax67 = reinterpret_cast<signed char>(*eax68 + al69);
                    *eax70 = reinterpret_cast<signed char>(*eax71 + al72);
                    *eax73 = reinterpret_cast<signed char>(*eax74 + al75);
                    *eax76 = *eax77 + eax78;
                    goto addr_80482f9_9;
                } else {
                    __asm__("outsd ");
                    esp79 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp47) - 4);
                    *esp79 = ebx80;
                    esp81 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp79) + 1 - 1);
                    esp47 = reinterpret_cast<struct s21*>(reinterpret_cast<int32_t>(esp81) + 4 - 4);
                    esp47->f0 = ebx82;
                    if (!esp81) {
                        addr_80482d6_5:
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx22) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx22) + 1) ^ *esi31);
                        *eax83 = reinterpret_cast<unsigned char>(*eax84 ^ al85);
                        *eax86 = reinterpret_cast<signed char>(*eax87 + al88);
                        *eax89 = reinterpret_cast<signed char>(*eax90 + al91);
                        *eax92 = reinterpret_cast<signed char>(*eax93 + al94);
                        *eax95 = reinterpret_cast<signed char>(*eax96 + al97);
                        *eax98 = reinterpret_cast<signed char>(*eax99 + al100);
                        *eax101 = reinterpret_cast<signed char>(*eax102 + al103);
                        *eax104 = reinterpret_cast<signed char>(*eax105 + al106);
                        goto addr_80482e8_8;
                    } else {
                        esp107 = reinterpret_cast<void*>(ebp39->f6f * 0x65646f4d);
                        ebx108->f44 = reinterpret_cast<signed char>(ebx109->f44 + dl110);
                        esp111 = reinterpret_cast<struct s17**>(reinterpret_cast<int32_t>(esp107) - 1);
                        zf112 = esp111 == 0;
                        edi33 = *esp111;
                        esp47 = reinterpret_cast<struct s21*>(esp111 + 1 - 1);
                        esp47->f0 = ecx22;
                        if (!zf112) {
                            addr_80482f9_9:
                            *eax113 = *eax114 + eax115;
                            esp20 = reinterpret_cast<struct s11*>(&esp47->f4);
                            *eax116 = reinterpret_cast<signed char>(*eax117 + al118);
                            *eax119 = reinterpret_cast<signed char>(*eax120 + *reinterpret_cast<signed char*>(&edx43));
                            *eax121 = reinterpret_cast<signed char>(*eax122 + al123);
                            *eax124 = reinterpret_cast<signed char>(*eax125 + ah126);
                            *eax127 = reinterpret_cast<signed char>(*eax128 + al129);
                            goto addr_8048306_13;
                        } else {
                            __asm__("insb ");
                            esp20 = reinterpret_cast<struct s11*>(edx130->f6d * 0x2e6f732e);
                            tmp8_131 = reinterpret_cast<unsigned char>(eax132->f6f + dh133);
                            cf134 = reinterpret_cast<uint1_t>(tmp8_131 < eax135->f6f);
                            eax136->f6f = tmp8_131;
                            if (!reinterpret_cast<uint1_t>(cf134 | reinterpret_cast<uint1_t>(eax137->f6f == 0))) {
                                addr_8048306_13:
                                *eax138 = reinterpret_cast<signed char>(*eax139 + *reinterpret_cast<signed char*>(&edx43));
                                ebp39 = reinterpret_cast<struct s19*>(ecx22->fd * 0x30000);
                                *reinterpret_cast<int1_t*>(&eflags1) = __intrinsic();
                                *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags1) + 1) = __intrinsic();
                                *reinterpret_cast<int1_t*>(&eflags1) = __undefined();
                                *reinterpret_cast<int1_t*>(&eflags1) = __undefined();
                                *reinterpret_cast<int1_t*>(&eflags1) = __undefined();
                                *reinterpret_cast<int1_t*>(&eflags1) = __undefined();
                                esp20 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(esp20) - 4);
                                esp20->f0 = reinterpret_cast<struct s12*>(eflags1 & 0xfcffff);
                                *eax140 = reinterpret_cast<signed char>(*eax141 + al142);
                                *eax143 = reinterpret_cast<signed char>(*eax144 + al145);
                                *eax146 = reinterpret_cast<signed char>(*eax147 + al148);
                                goto addr_8048317_16;
                            } else {
                                tmp8_149 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx22) + reinterpret_cast<int32_t>(ebp39) * 2 + 98) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx22) + 1));
                                cf150 = tmp8_149 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx22) + reinterpret_cast<int32_t>(ebp39) * 2 + 98);
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx22) + reinterpret_cast<int32_t>(ebp39) * 2 + 98) = tmp8_149;
                                __asm__("arpl [esi], bp");
                                if (!cf150) {
                                    addr_8048317_16:
                                    ecx22->f0 = reinterpret_cast<signed char>(ecx22->f0 + al151);
                                    ecx22->f0 = reinterpret_cast<signed char>(ecx22->f0 + al152);
                                    ebp39->f0 = reinterpret_cast<unsigned char>(ebp39->f0 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx22) + 1));
                                    tmp8_153 = reinterpret_cast<unsigned char>(*eax154 + al155);
                                    cf156 = reinterpret_cast<uint1_t>(tmp8_153 < *eax157);
                                    *eax158 = tmp8_153;
                                    goto addr_804831f_18;
                                } else {
                                    ebx159->f72 = reinterpret_cast<signed char>(ebx160->f72 + dh161);
                                }
                            }
                        }
                    }
                }
            }
        }
        __asm__("popad ");
        __asm__("outsb ");
        ebp39->f65 = reinterpret_cast<unsigned char>(ebp39->f65 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx22) + 1));
    }
    __asm__("insd ");
    __asm__("arpl [eax+0x79], si");
    tmp8_162 = reinterpret_cast<unsigned char>(edi33->f65 + bl163);
    cf156 = reinterpret_cast<uint1_t>(tmp8_162 < edi33->f65);
    edi33->f65 = tmp8_162;
    __asm__("popad ");
    if (!edi33->f65) {
        addr_804831f_18:
        *eax164 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax165 + al166) + cf156);
    } else {
        tmp8_167 = reinterpret_cast<unsigned char>(edi33->f5f + bl168);
        cf169 = tmp8_167 < edi33->f5f;
        edi33->f5f = tmp8_167;
        edi36 = esp20->f0;
        esp37 = reinterpret_cast<struct s15*>(&esp20->f4);
        if (!cf169) 
            goto addr_804833b_23;
        __asm__("popad ");
        if (cf169) 
            goto addr_804833e_25;
        edi36->f65 = reinterpret_cast<signed char>(edi36->f65 + bl170);
        goto addr_80482cb_4;
    }
    do {
        eax171->f0 = reinterpret_cast<unsigned char>(eax171->f0 + *reinterpret_cast<signed char*>(&eax171));
        eax171->f0 = reinterpret_cast<unsigned char>(eax171->f0 + *reinterpret_cast<signed char*>(&eax171));
        tmp8_172 = reinterpret_cast<unsigned char>(eax171->f0 + *reinterpret_cast<signed char*>(&eax171));
        cf173 = reinterpret_cast<uint1_t>(tmp8_172 < eax171->f0);
        eax171->f0 = tmp8_172;
        ecx22->f69 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx22->f69 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx22) + 1)) + cf173);
        eax171 = reinterpret_cast<struct s31*>(reinterpret_cast<uint32_t>(eax171) | 0x20000);
        *reinterpret_cast<int1_t*>(&eflags1) = 0;
        *reinterpret_cast<int1_t*>(&eflags1) = __intrinsic();
        *reinterpret_cast<int1_t*>(&eflags1) = 0;
        *reinterpret_cast<int1_t*>(&eflags1) = __intrinsic();
        *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags1) + 1) = 0;
        *reinterpret_cast<int1_t*>(&eflags1) = __undefined();
        esp37 = reinterpret_cast<struct s15*>(reinterpret_cast<int32_t>(esp20) - 4);
        esp37->f0 = eflags1 & 0xfcffff;
        eax171->f0 = reinterpret_cast<unsigned char>(eax171->f0 + *reinterpret_cast<signed char*>(&eax171));
        eax171->f0 = reinterpret_cast<unsigned char>(eax171->f0 + *reinterpret_cast<signed char*>(&eax171));
        eax171->f0 = reinterpret_cast<unsigned char>(eax171->f0 + *reinterpret_cast<signed char*>(&eax171));
        eax171->f1070804 = reinterpret_cast<signed char>(eax171->f1070804 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx45) + 1));
        addr_804833b_23:
        addr_804833e_25:
        eax171->f0 = reinterpret_cast<unsigned char>(eax171->f0 + *reinterpret_cast<signed char*>(&eax171));
        eax171->f2070804 = reinterpret_cast<signed char>(static_cast<int32_t>(eax171->f2070804));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax171) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax171) + 1) + *reinterpret_cast<signed char*>(&eax171));
        *reinterpret_cast<signed char*>(&eax171) = g3070804;
        eax171->f0 = reinterpret_cast<unsigned char>(eax171->f0 + *reinterpret_cast<signed char*>(&eax171));
        __asm__("enter 0x4a0, 0x8");
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax171) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax171) + 1) + *reinterpret_cast<signed char*>(&ecx22));
        *reinterpret_cast<signed char*>(&eax171) = g5070804;
        eax171->f0 = reinterpret_cast<unsigned char>(eax171->f0 + *reinterpret_cast<signed char*>(&eax171));
        eax171->f6070804 = reinterpret_cast<signed char>(eax171->f6070804 << 1);
        eax171->f0 = reinterpret_cast<unsigned char>(eax171->f0 + *reinterpret_cast<signed char*>(&eax171));
        __asm__("aam 0xa0");
        *reinterpret_cast<signed char*>(&eax171) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax171) + 8);
        esp20 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(esp37) + 2 + 2);
        eax171->f0 = reinterpret_cast<unsigned char>(eax171->f0 | reinterpret_cast<uint32_t>(eax171));
        *reinterpret_cast<signed char*>(&eax171) = ga070804;
        eax171->f0 = reinterpret_cast<unsigned char>(eax171->f0 + *reinterpret_cast<signed char*>(&eax171));
        __asm__("fsub qword [eax+0xb070804]");
        eax171->f0 = reinterpret_cast<unsigned char>(eax171->f0 + *reinterpret_cast<signed char*>(&eax171));
        ecx22 = reinterpret_cast<struct s14*>(reinterpret_cast<int32_t>(ecx22) - 1);
    } while (reinterpret_cast<uint1_t>(!!ecx22) & reinterpret_cast<uint1_t>(!!eax171->f0));
    goto g804a0b8;
}

void fun_8048394() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t g824a514;

struct s32 {
    signed char[8] pad8;
    int32_t f8;
};

struct s33 {
    signed char[134519360] pad134519360;
    struct s0* f8049a40;
};

struct s34 {
    signed char[136619296] pad136619296;
    struct s0* f824a520;
    signed char[124] pad136619421;
    signed char f824a59d;
};

int32_t g824a508;

int32_t g824a504;

int32_t fun_80494a7(struct s0* ecx) {
    int32_t ebp2;
    struct s0* eax3;
    struct s0* v4;
    struct s0* eax5;
    struct s0* v6;
    void* esp7;
    int32_t esi8;
    struct s32* ebx9;
    struct s0* v10;
    struct s0* ebp11;
    struct s33* v12;
    struct s0* edi13;
    struct s0* v14;
    struct s34* esi15;
    struct s0* v16;
    struct s0* v17;
    struct s0* esi18;
    struct s0* v19;
    struct s0* v20;
    struct s0* v21;
    struct s0* v22;
    struct s0* v23;
    struct s0* ecx24;
    struct s0* v25;
    struct s0* v26;
    struct s0* v27;
    struct s0* v28;
    struct s0* v29;
    int32_t esi30;
    struct s0* v31;
    int32_t eax32;
    void* esp33;
    int32_t edi34;
    struct s0* v35;
    int32_t eax36;
    void* esp37;
    signed char v38;
    void* esp39;
    int32_t eax40;
    void* esp41;
    struct s0* v42;
    int32_t eax43;
    void* esp44;
    int32_t edi45;
    struct s0* v46;
    int32_t eax47;
    void* esp48;
    signed char v49;
    void* esp50;
    struct s0* v51;
    int32_t eax52;
    void* esp53;
    int32_t edi54;
    struct s0* v55;
    int32_t eax56;
    signed char v57;
    void* esp58;

    ebp2 = 0;
    eax3 = fun_80483d8(0x200, 0x180, 32, 0xc0000001);
    v4 = eax3;
    eax5 = eax3->f14;
    v6 = eax5;
    fun_80483a8(0, 0x180, 32, 0xc0000001, v4);
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 0x400cc - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 16);
    g824a514 = 0xc2f00000;
    while (1) {
        esi8 = 0xffffff00;
        ebx9 = reinterpret_cast<struct s32*>(ebp2 * 12 + 0x964cd20);
        do {
            __asm__("fild dword [esp]");
            ++esi8;
            __asm__("fstp dword [ebx]");
            __asm__("fild dword [esp+0x1c]");
            __asm__("fstp dword [ebx+0x4]");
            ebx9->f8 = 0x44000000;
            ++ebx9;
            fun_80484a2(ecx, v4);
            esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 + 4 - 4 + 4);
        } while (esi8 != 0x100);
        ebp2 = ebp2 + 0x200;
        if (ebp2 == 0x30000) 
            break;
    }
    v10 = reinterpret_cast<struct s0*>(0);
    ebp11 = reinterpret_cast<struct s0*>(0xfffffff6);
    v12 = reinterpret_cast<struct s33*>(0);
    do {
        edi13 = reinterpret_cast<struct s0*>(0xffffffd3);
        __asm__("fild dword [esp]");
        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 + 4);
        __asm__("fstp dword [esp+0xc]");
        v14 = reinterpret_cast<struct s0*>(&v12->f8049a40);
        do {
            if (reinterpret_cast<int1_t>(*reinterpret_cast<struct s0**>(&v14->f0) == 1)) {
                esi15 = reinterpret_cast<struct s34*>(reinterpret_cast<unsigned char>(v10) * 0x40080);
                __asm__("fild dword [esp]");
                __asm__("fstp dword [esp]");
                fun_8048775(ecx, edi13, v10, 0xc1c80000, 0x40000000, v4, v6, v10, v16, v14);
                fun_80483e8(ecx, &esi15->f824a520, reinterpret_cast<int32_t>(esp7) + 32, 0x40080, 0x40000000, v4, v6, v10, v17);
                v10 = reinterpret_cast<struct s0*>(&v10->pad20);
                esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 + 4 + 16);
                esi15->f824a59d = 0;
            }
            edi13 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edi13) + 4);
            v14 = reinterpret_cast<struct s0*>(&v14->pad20);
        } while (!reinterpret_cast<int1_t>(edi13 == 47));
        ebp11 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebp11) + 4);
        v12 = reinterpret_cast<struct s33*>(reinterpret_cast<int32_t>(v12) + 23);
    } while (!reinterpret_cast<int1_t>(ebp11 == 14));
    esi18 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp7) + 32);
    fun_80486ba(ecx, 0, 0, 0xc1200000, 0, 0, 0xbf800000, ebp11, ebp11, v4);
    fun_80483e8(ecx, 0x938c7a0, esi18, 0x40080, ebp11, v4, v6, v10, v19);
    fun_8048775(ecx, 0, 0x41f00000, 0xc20c0000, 0x41700000, 0x938c7a0, esi18, 0x40080, ebp11, v4);
    fun_80483e8(ecx, 0x93cc820, esi18, 0x40080, ebp11, v4, v6, v10, v20);
    fun_804881d(0, 0, 0xc2c80000, 0xc1f00000, 0, 0x93cc820, esi18, 0x40080, ebp11, v4);
    fun_80486ba(0, 0, 0x41f00000, 0, 0, 0xbf800000, 0, 0x40080, ebp11, v4);
    fun_80483e8(0, 0x804a100, esi18, 0x40080, ebp11, v4, v6, v10, v21);
    fun_80486ba(0x804a100, 0, 0xc1a00000, 0, 0, 0x3f800000, 0, 0x40080, ebp11, v4);
    fun_80483e8(0x804a100, 0x808a180, esi18, 0x40080, ebp11, v4, v6, v10, v22);
    fun_80486ba(0x804a100, 0xc2480000, 0, 0, 0x3f800000, 0, 0, 0x40080, ebp11, v4);
    fun_80483e8(0x804a100, 0x80ca200, esi18, 0x40080, ebp11, v4, v6, v10, v23);
    ecx24 = reinterpret_cast<struct s0*>(0x80ca200);
    fun_80486ba(0x80ca200, 0x42480000, 0, 0, 0xbf800000, 0, 0, 0x40080, ebp11, v4);
    fun_80483e8(0x80ca200, 0x810a280, esi18, 0x40080, ebp11, v4, v6, v10, v25);
    fun_80486ba(0x80ca200, 0, 0, 0x42200000, 0, 0, 0xbf800000, 0x40080, ebp11, v4);
    fun_80483e8(0x80ca200, 0x814a300, esi18, 0x40080, ebp11, v4, v6, v10, v26);
    fun_8048775(0x80ca200, 0, 0x41800000, 0xc1a00000, 0x41700000, 0x814a300, esi18, 0x40080, ebp11, v4);
    fun_80483e8(0x80ca200, 0x818a380, esi18, 0x40080, ebp11, v4, v6, v10, v27);
    fun_8048613(0x80ca200, 0xc1f00000, 0x41f00000, 0xc1a00000, 0x41200000, 0, 0xbf800000, 0, ebp11, v4);
    fun_80483e8(0x80ca200, 0x81ca400, esi18, 0x40080, ebp11, v4, v6, v10, v28);
    fun_8048613(0x80ca200, 0x41f00000, 0x41f00000, 0xc1a00000, 0x41200000, 0, 0xbf800000, 0, ebp11, v4);
    v29 = esi18;
    esi30 = 0;
    fun_80483e8(0x80ca200, 0x820a480, v29, 0x40080, ebp11, v4, v6, v10, v31);
    g824a508 = 0xc2f00000;
    eax32 = fun_80483b8(0x80ca200, 0x820a480, v29, 0x40080, ebp11, v4);
    esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 28 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 + 28 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 + 24 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 28 - 4 - 4 - 4 - 4 + 4 + 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 28 - 4 - 4 - 4 - 4 + 4 + 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 28 - 4 - 4 - 4 - 4 + 4 + 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 28 - 4 - 4 - 4 - 4 + 4 + 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 28 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 + 28 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 28 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 28 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 16);
    edi34 = eax32;
    while ((eax36 = fun_80483b8(ecx24, v4, v6, v10, v35, v14), esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 + 4), reinterpret_cast<uint32_t>(eax36 - edi34) <= 0x36af) && v38 != 2) {
        __asm__("fild dword [esp]");
        esp39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) - 4 + 4);
        __asm__("fmul dword [0x8049a34]");
        __asm__("fsincos ");
        __asm__("fld dword [0x8049a30]");
        __asm__("fmul st1, st0");
        __asm__("fxch st0, st1");
        __asm__("fstp dword [0x824a500]");
        __asm__("fmulp st1, st0");
        __asm__("fstp dword [0x824a504]");
        if (esi30 <= 49) {
            eax40 = 0;
            __asm__("fld dword [0x8049a2c]");
            do {
                __asm__("fld dword [eax+0x940c8a4]");
                __asm__("fadd st0, st1");
                __asm__("fstp dword [eax+0x940c8a4]");
                eax40 = eax40 + 0x40080;
            } while (eax40 != 0x1c0380);
            __asm__("fstp st0");
        }
        ecx24 = v6;
        ++esi30;
        fun_804938f(ecx24, v4);
        fun_80483f8(ecx24);
        esp41 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp39) - 4 + 4 - 12 - 4 - 4 + 4 + 4);
        fun_80483c8(ecx24, reinterpret_cast<int32_t>(esp41) + 0x400b8, v29, 0x40080);
        esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp41) - 4 - 4 + 4 + 16);
    }
    eax43 = fun_80483b8(ecx24, v4, v6, v10, v42, v14);
    esp44 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) - 4 + 4);
    edi45 = eax43;
    while ((eax47 = fun_80483b8(ecx24, v4, v6, v10, v46, v14), esp48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp44) - 4 + 4), reinterpret_cast<uint32_t>(eax47 - edi45) <= 0x36af) && v49 != 2) {
        __asm__("fild dword [esp]");
        __asm__("fmul dword [0x8049a34]");
        ecx24 = v6;
        g824a504 = 0xc1200000;
        __asm__("fsincos ");
        __asm__("fld dword [0x8049a38]");
        __asm__("fmul st1, st0");
        __asm__("fxch st0, st1");
        __asm__("fstp dword [0x824a500]");
        __asm__("fmulp st1, st0");
        __asm__("fstp dword [0x824a508]");
        fun_804938f(ecx24, v4);
        fun_80483f8(ecx24);
        esp50 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp48) - 4 + 4 - 4 + 4 - 12 - 4 - 4 + 4 + 4);
        fun_80483c8(ecx24, reinterpret_cast<int32_t>(esp50) + 0x400b8, v29, 0x40080);
        esp44 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp50) - 4 - 4 + 4 + 16);
    }
    eax52 = fun_80483b8(ecx24, v4, v6, v10, v51, v14);
    esp53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp48) - 4 + 4);
    g824a508 = 0xc2f00000;
    edi54 = eax52;
    while ((eax56 = fun_80483b8(ecx24, v4, v6, v10, v55, v14), reinterpret_cast<uint32_t>(eax56 - edi54) <= 0x36af) && v57 != 2) {
        __asm__("fild dword [esp]");
        __asm__("fmul dword [0x8049a34]");
        ecx24 = v6;
        __asm__("fsincos ");
        __asm__("fld dword [0x8049a30]");
        __asm__("fmul st1, st0");
        __asm__("fxch st0, st1");
        __asm__("fstp dword [0x824a500]");
        __asm__("fmulp st1, st0");
        __asm__("fstp dword [0x824a504]");
        fun_804938f(ecx24, v4);
        fun_80483f8(ecx24);
        esp58 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp53) - 4 + 4 - 4 + 4 - 4 + 4 - 12 - 4 - 4 + 4 + 4);
        fun_80483c8(ecx24, reinterpret_cast<int32_t>(esp58) + 0x400b8, v29, 0x40080);
        esp53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp58) - 4 - 4 + 4 + 16);
    }
    fun_8048408(ecx24, v4);
    __asm__("int 0x80");
    return 1;
}

void fun_804839e() {
    goto 0x8048388;
}

void fun_804841e() {
    goto 0x8048388;
}

void fun_80483ee() {
    goto 0x8048388;
}

signed char* fun_470999(int32_t a1);

void fun_80499f2(int32_t ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    signed char* eax20;
    signed char* eax21;
    signed char al22;
    signed char* eax23;
    signed char* eax24;
    signed char al25;
    int32_t eax26;
    int32_t eax27;
    signed char al28;
    void* ebp29;
    unsigned char* eax30;
    signed char al31;
    int32_t ebx32;
    void* ebp33;
    int32_t ebx34;
    int32_t ebx35;
    signed char* eax36;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
    *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
    *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
    *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
    *eax23 = reinterpret_cast<signed char>(*eax24 + al25);
    *reinterpret_cast<signed char*>(eax26 + 0x449ba6bf) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax27 + 0x449ba6bf) + al28);
    if (reinterpret_cast<int32_t>(ebp29) < reinterpret_cast<int32_t>(__zero_stack_offset())) 
        goto 0x80499bc;
    __asm__("pushad ");
    __asm__("outsd ");
    *reinterpret_cast<unsigned char*>(&eax30) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(al31 + *reinterpret_cast<signed char*>(ebx32 - 0x5d0673c6)) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(ebp33) < reinterpret_cast<uint32_t>(__zero_stack_offset())));
    *eax30 = reinterpret_cast<unsigned char>(*eax30 + *reinterpret_cast<unsigned char*>(&eax30));
    *reinterpret_cast<signed char*>(ebx34 - 0x66) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx35 - 0x66) - 0x67);
    __asm__("cdq ");
    eax36 = fun_470999(__return_address());
    *eax36 = reinterpret_cast<signed char>(*eax36 + *reinterpret_cast<signed char*>(&eax36));
    *eax36 = reinterpret_cast<signed char>(*eax36 + *reinterpret_cast<signed char*>(&eax36));
    __asm__("cli ");
}

void fun_80483be() {
    goto 0x8048388;
}

void fun_80483fe() {
    goto 0x8048388;
}

void fun_80483ce() {
    goto 0x8048388;
}

void fun_804840e() {
    goto 0x8048388;
}

void fun_804842e() {
    goto 0x8048388;
}

void fun_80483de() {
    goto 0x8048388;
}

void fun_80483ae() {
    goto 0x8048388;
}
