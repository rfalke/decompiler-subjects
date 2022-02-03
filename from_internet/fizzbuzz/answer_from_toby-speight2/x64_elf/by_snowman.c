
/* operator delete(void*, unsigned long) */
int64_t _ZdlPvm = 0x402146;

void** fun_402140(void** rdi, ...) {
    goto _ZdlPvm;
}

/* std::basic_ostream<char, std::char_traits<char> >& std::__ostream_insert<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*, long) */
int64_t _ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l = 0x402156;

void fun_402150(int64_t rdi, void* rsi, int64_t rdx) {
    goto _ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l;
}

/* operator new(unsigned long) */
int64_t _Znwm = 0x402136;

void** fun_402130(void** rdi, ...) {
    goto _Znwm;
}

struct s0 {
    void** f0;
    signed char[7] pad8;
    void** f8;
};

void fun_402090(void*** rdi, void** rsi);

void** g405018 = reinterpret_cast<void**>(95);

void** g405010 = reinterpret_cast<void**>(0x76);

struct s1 {
    signed char[1] pad1;
    void** f1;
};

void fun_402060();

void* g405032 = reinterpret_cast<void*>(0x4d5f3a3a676e6972);

void** g40502a = reinterpret_cast<void**>(98);

void* g40503a = reinterpret_cast<void*>(0x6574616572635f);

struct s2 {
    void** f0;
    signed char[7] pad8;
    void** f8;
    signed char[7] pad16;
    void** f10;
    signed char[15] pad32;
    void*** f20;
    void*** f28;
    signed char[8] pad56;
    int32_t f38;
    unsigned char f3c;
    signed char[3] pad64;
    void** f40;
    signed char[39] pad104;
    void** f68;
    signed char[47] pad152;
    void** f98;
    signed char[7] pad160;
    int64_t fa0;
    signed char[8] pad176;
    void* fb0;
    void** fb8;
};

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */
void** _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm(struct s2* rdi, void** rsi, void** rdx, void** rcx, void** r8);

void fun_4020b0(void** rdi, ...);

void fun_4021b0();

void** fun_402100(void** rdi, void** rsi, void** rdx);

unsigned char gfffffffffffffff;

struct s1* g405020 = reinterpret_cast<struct s1*>(0x7265736e695f636f);

/* void std::vector<std::unique_ptr<worker, std::default_delete<worker> >, std::allocator<std::unique_ptr<worker, std::default_delete<worker> > > >::_M_realloc_insert<std::unique_ptr<worker, std::default_delete<worker> > >(__gnu_cxx::__normal_iterator<std::unique_ptr<worker, std::default_delete<worker> >*, std::vector<std::unique_ptr<worker, std::default_delete<worker> >, std::allocator<std::unique_ptr<worker, std::default_delete<worker> > > > >, std::unique_ptr<worker, std::default_delete<worker> >&&) */
void _ZNSt6vectorISt10unique_ptrI6workerSt14default_deleteIS1_EESaIS4_EE17_M_realloc_insertIJS4_EEEvN9__gnu_cxx17__normal_iteratorIPS4_S6_EEDpOT_(struct s0* rdi, void** rsi, void** rdx, int64_t rcx, void** r8) {
    void** r15_6;
    void** rbp7;
    uint64_t rcx8;
    void** r15_9;
    void** rbp10;
    uint64_t rax11;
    uint64_t rax12;
    void** r13_13;
    void** rsi14;
    int64_t rdx15;
    uint64_t tmp64_16;
    uint64_t rax17;
    void* r8_18;
    void** r15_19;
    void** r12_20;
    uint64_t rax21;
    void** rcx22;
    void** r12_23;
    void** r14_24;
    void** rax25;
    void** v26;
    struct s1* rbp27;
    void** rsi28;
    void** v29;
    int1_t zf30;
    struct s1* rax31;
    struct s1* rax32;
    void** rdi33;
    void* rcx34;
    void** rdi35;
    int32_t ebp36;
    void* rbx37;
    void* rax38;
    void** rdi39;
    void* rcx40;
    void* rdi41;
    uint32_t eax42;
    void** rax43;
    void** r10_44;
    uint32_t eax45;
    void** rdi46;
    uint32_t eax47;
    void** rax48;
    int64_t v49;
    void** rdi50;
    void** rsi51;
    uint32_t eax52;
    uint64_t rcx53;
    void** rbp54;
    uint64_t tmp64_55;
    uint64_t rax56;
    void* rsi57;
    int64_t rcx58;
    void** rbx59;
    void** rcx60;
    void** r14_61;
    void** rax62;
    void** rax63;
    void** rdx64;
    void** rcx65;
    uint64_t rcx66;
    void** r13_67;
    uint64_t tmp64_68;
    uint64_t rax69;
    void* rsi70;
    int64_t rcx71;
    void** rbx72;
    void** rcx73;
    void** r12_74;
    void** rax75;
    void** rax76;
    void* rcx77;
    void** rdi78;
    void** rdx79;
    void** rax80;
    void** r12_81;
    void** rax82;
    void** rbx83;
    void** rcx84;
    void** rax85;
    void* rcx86;
    void** rdi87;
    void** rdx88;
    void** rax89;

    r15_6 = rdi->f8;
    rbp7 = rdi->f0;
    rcx8 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(r15_6) - reinterpret_cast<unsigned char>(rbp7)) >> 3);
    if (rcx8 == 0xfffffffffffffff) {
        fun_402090("vector::_M_realloc_insert", rsi);
        r15_9 = g405018;
        rbp10 = g405010;
        rax11 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(r15_9) - reinterpret_cast<unsigned char>(rbp10)) >> 3);
        if (rax11 != 0xfffffffffffffff) 
            goto addr_403fb2_4;
    } else {
        *reinterpret_cast<int32_t*>(&rax12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        r13_13 = rsi;
        rsi14 = rdx;
        if (rcx8) {
            rax12 = rcx8;
        }
        *reinterpret_cast<int32_t*>(&rdx15) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0;
        tmp64_16 = rax12 + rcx8;
        rax17 = tmp64_16;
        *reinterpret_cast<unsigned char*>(&rdx15) = reinterpret_cast<uint1_t>(tmp64_16 < rax12);
        r8_18 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r13_13) - reinterpret_cast<unsigned char>(rbp7));
        if (rdx15) 
            goto addr_403ef0_8; else 
            goto addr_403dee_9;
    }
    fun_402090("vector::_M_realloc_insert", rsi);
    r15_19 = g405018;
    r12_20 = g405010;
    rax21 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(r15_19) - reinterpret_cast<unsigned char>(r12_20)) >> 3);
    if (rax21 != 0xfffffffffffffff) 
        goto addr_4041a2_12;
    fun_402090("vector::_M_realloc_insert", rsi);
    rcx22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<unsigned char>(rdx));
    r12_23 = rsi;
    r14_24 = r8;
    rax25 = g405018;
    v26 = rcx22;
    rbp27 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r8) - reinterpret_cast<unsigned char>(rdx)) + reinterpret_cast<unsigned char>(rax25));
    rsi28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax25) - reinterpret_cast<unsigned char>(rcx22));
    v29 = rsi28;
    zf30 = reinterpret_cast<int1_t>("oc_insert" == g405010);
    if (!zf30) 
        goto addr_404327_15;
    while (1) {
        *reinterpret_cast<int32_t*>(&rax31) = 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax31) + 4) = 0;
        addr_40432b_17:
        if (reinterpret_cast<int64_t>(rbp27) < reinterpret_cast<int64_t>(0)) 
            break;
        if (reinterpret_cast<uint64_t>(rbp27) > reinterpret_cast<uint64_t>(rax31) && (rax32 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rax31) + reinterpret_cast<uint64_t>(rax31)), reinterpret_cast<uint64_t>(rbp27) < reinterpret_cast<uint64_t>(rax32))) {
            if (reinterpret_cast<int64_t>(rax32) < reinterpret_cast<int64_t>(0)) {
                addr_404430_20:
                fun_402060();
                continue;
            } else {
                rbp27 = rax32;
            }
        }
        rdi33 = reinterpret_cast<void**>(&rbp27->f1);
        if (reinterpret_cast<signed char>(rdi33) < reinterpret_cast<signed char>(0)) 
            goto addr_404430_20; else 
            goto addr_40435c_23;
    }
    fun_402090("basic_string::_M_create", rsi28);
    rcx34 = g405032;
    if (reinterpret_cast<unsigned char>(rcx22) > reinterpret_cast<unsigned char>(reinterpret_cast<uint64_t>(rdx + 0x7fffffffffffffff) - reinterpret_cast<uint64_t>(rcx34))) {
        fun_402090("basic_string::_M_replace_aux", rsi28);
    }
    rdi35 = g40502a;
    ebp36 = *reinterpret_cast<int32_t*>(&r8);
    rbx37 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx22) - reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint64_t>(rcx34));
    if (rdi35 == "_create") {
        *reinterpret_cast<int32_t*>(&rax38) = 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = 0;
    } else {
        rax38 = g40503a;
    }
    if (reinterpret_cast<uint64_t>(rax38) >= reinterpret_cast<uint64_t>(rbx37)) 
        goto addr_4044f5_31;
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm("basic_string::_M_create", rsi28, rdx, 0, rcx22);
    rdi35 = g40502a;
    if (!rcx22) {
        addr_404541_33:
        g405032 = rbx37;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdi35) + reinterpret_cast<uint64_t>(rbx37)) = 0;
        goto v29;
    }
    addr_404528_35:
    rdi39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi35) + reinterpret_cast<unsigned char>(rsi28));
    if (rcx22 == 1) {
        *reinterpret_cast<void***>(rdi39) = *reinterpret_cast<void***>(&ebp36);
        rdi35 = g40502a;
        goto addr_404541_33;
    } else {
        fun_4020b0(rdi39, rdi39);
        rdi35 = g40502a;
        goto addr_404541_33;
    }
    addr_4044f5_31:
    rcx40 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx34) - (reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<unsigned char>(rsi28)));
    if (!rcx40 || rdx == rcx22) {
        addr_404523_38:
        if (!rcx22) 
            goto addr_404541_33; else 
            goto addr_404528_35;
    } else {
        rdi41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi35) + reinterpret_cast<unsigned char>(rsi28));
        if (rcx40 == 1) {
            eax42 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rdi41) + reinterpret_cast<unsigned char>(rdx));
            *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi41) + reinterpret_cast<unsigned char>(rcx22)) = *reinterpret_cast<signed char*>(&eax42);
            rdi35 = g40502a;
            if (!rcx22) 
                goto addr_404541_33;
            goto addr_404528_35;
        } else {
            fun_4021b0();
            rdi35 = g40502a;
            goto addr_404523_38;
        }
    }
    addr_40435c_23:
    rax43 = fun_402130(rdi33);
    r10_44 = g405010;
    if (r12_23) {
        if (r12_23 == 1) {
            eax45 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r10_44));
            *reinterpret_cast<void***>(rax43) = *reinterpret_cast<void***>(&eax45);
        } else {
            fun_402100(rax43, r10_44, r12_23);
            r10_44 = r10_44;
        }
    }
    if (!0 && r14_24) {
        rdi46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax43) + reinterpret_cast<unsigned char>(r12_23));
        if (r14_24 == 1) {
            eax47 = gfffffffffffffff;
            *reinterpret_cast<void***>(rdi46) = *reinterpret_cast<void***>(&eax47);
            rax48 = v29;
            if (!rax48) 
                goto addr_404404_49;
            goto addr_4043d8_51;
        } else {
            fun_402100(rdi46, 0xfffffffffffffff, r14_24);
            r10_44 = r10_44;
        }
    }
    rax48 = v29;
    if (!rax48) {
        addr_404404_49:
        if (r10_44 == "oc_insert") {
            addr_404419_54:
            g405010 = rax43;
            g405020 = rbp27;
            goto v49;
        } else {
            addr_404409_55:
            fun_402140(r10_44, r10_44);
            goto addr_404419_54;
        }
    } else {
        addr_4043d8_51:
        rdi50 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax43) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r12_23) + reinterpret_cast<unsigned char>(r14_24)));
        rsi51 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v26) + reinterpret_cast<unsigned char>(r10_44));
        if (rax48 == 1) {
            eax52 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi51));
            *reinterpret_cast<void***>(rdi50) = *reinterpret_cast<void***>(&eax52);
            if (!reinterpret_cast<int1_t>(r10_44 == "oc_insert")) 
                goto addr_404409_55;
            goto addr_404419_54;
        } else {
            fun_402100(rdi50, rsi51, rax48);
            r10_44 = r10_44;
            goto addr_404404_49;
        }
    }
    addr_404327_15:
    rax31 = g405020;
    goto addr_40432b_17;
    addr_4041a2_12:
    *reinterpret_cast<int32_t*>(&rcx53) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx53) + 4) = 0;
    rbp54 = rsi;
    if (rax21) {
        rcx53 = rax21;
    }
    tmp64_55 = rax21 + rcx53;
    rax56 = tmp64_55;
    rsi57 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rsi) - reinterpret_cast<unsigned char>(r12_20));
    *reinterpret_cast<uint32_t*>(&rcx58) = reinterpret_cast<uint1_t>(tmp64_55 < rax21);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx58) + 4) = 0;
    if (rcx58) {
        rbx59 = reinterpret_cast<void**>(0x7ffffffffffffff8);
    } else {
        if (rax56) {
            if (rax56 > 0xfffffffffffffff) {
                rax56 = 0xfffffffffffffff;
            }
            rbx59 = reinterpret_cast<void**>(rax56 * 8);
        } else {
            *reinterpret_cast<int32_t*>(&rcx60) = 8;
            *reinterpret_cast<int32_t*>(&rcx60 + 4) = 0;
            *reinterpret_cast<int32_t*>(&r14_61) = 0;
            *reinterpret_cast<int32_t*>(&r14_61 + 4) = 0;
            goto addr_4041dc_67;
        }
    }
    rax62 = fun_402130(rbx59);
    rsi57 = rsi57;
    rdx = rdx;
    r14_61 = rax62;
    rcx60 = rax62 + 8;
    addr_4041dc_67:
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r14_61) + reinterpret_cast<uint64_t>(rsi57)) = *reinterpret_cast<void***>(rdx);
    if (rbp54 != r12_20) {
        rax63 = r14_61;
        rdx64 = r12_20;
        rcx65 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp54) - reinterpret_cast<unsigned char>(r12_20)) + reinterpret_cast<unsigned char>(r14_61));
        do {
            rax63 = rax63 + 8;
            rdx64 = rdx64 + 8;
            *reinterpret_cast<void***>(rax63 + 0xfffffffffffffff8) = *reinterpret_cast<void***>(rdx64);
        } while (rcx65 != rax63);
        rcx60 = rcx65 + 8;
    }
    if (rbp54 != r15_19) {
        fun_402100(rcx60, rbp54, reinterpret_cast<unsigned char>(r15_19) - reinterpret_cast<unsigned char>(rbp54));
    }
    addr_403fb2_4:
    *reinterpret_cast<int32_t*>(&rcx66) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx66) + 4) = 0;
    r13_67 = rsi;
    if (rax11) {
        rcx66 = rax11;
    }
    tmp64_68 = rax11 + rcx66;
    rax69 = tmp64_68;
    rsi70 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rsi) - reinterpret_cast<unsigned char>(rbp10));
    *reinterpret_cast<uint32_t*>(&rcx71) = reinterpret_cast<uint1_t>(tmp64_68 < rax11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx71) + 4) = 0;
    if (rcx71) {
        rbx72 = reinterpret_cast<void**>(0x7ffffffffffffff8);
    } else {
        if (rax69) {
            if (rax69 > 0xfffffffffffffff) {
                rax69 = 0xfffffffffffffff;
            }
            rbx72 = reinterpret_cast<void**>(rax69 * 8);
        } else {
            *reinterpret_cast<int32_t*>(&rcx73) = 8;
            *reinterpret_cast<int32_t*>(&rcx73 + 4) = 0;
            *reinterpret_cast<int32_t*>(&r12_74) = 0;
            *reinterpret_cast<int32_t*>(&r12_74 + 4) = 0;
            goto addr_403fec_84;
        }
    }
    rax75 = fun_402130(rbx72);
    rsi70 = rsi70;
    rdx = rdx;
    r12_74 = rax75;
    rcx73 = rax75 + 8;
    addr_403fec_84:
    rax76 = *reinterpret_cast<void***>(rdx);
    *reinterpret_cast<void***>(rdx) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r12_74) + reinterpret_cast<uint64_t>(rsi70)) = rax76;
    if (r13_67 != rbp10) {
        rcx77 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r13_67) - reinterpret_cast<unsigned char>(rbp10));
        if (r12_74 == rbp10 + 8 || reinterpret_cast<uint64_t>(rcx77) + 0xfffffffffffffff8 <= 16) {
            rdi78 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_74) + reinterpret_cast<uint64_t>(rcx77));
            rdx79 = rbp10;
            rax80 = r12_74;
            do {
                rax80 = rax80 + 8;
                rdx79 = rdx79 + 8;
                *reinterpret_cast<void***>(rax80 + 0xfffffffffffffff8) = *reinterpret_cast<void***>(rdx79);
            } while (rax80 != rdi78);
            rcx73 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_74) + reinterpret_cast<uint64_t>(rcx77) + 8);
        }
    }
    if (r13_67 != r15_9) {
        fun_402100(rcx73, r13_67, reinterpret_cast<unsigned char>(r15_9) - reinterpret_cast<unsigned char>(r13_67));
    }
    addr_403ef0_8:
    r12_81 = reinterpret_cast<void**>(0x7ffffffffffffff8);
    addr_403efa_97:
    rax82 = fun_402130(r12_81);
    r8_18 = r8_18;
    rsi14 = rsi14;
    rbx83 = rax82;
    rcx84 = rax82 + 8;
    addr_403e01_98:
    rax85 = *reinterpret_cast<void***>(rsi14);
    *reinterpret_cast<void***>(rsi14) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx83) + reinterpret_cast<uint64_t>(r8_18)) = rax85;
    if (r13_13 != rbp7) {
        rcx86 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r13_13) - reinterpret_cast<unsigned char>(rbp7));
        if (rbx83 == rbp7 + 8 || reinterpret_cast<uint64_t>(rcx86) + 0xfffffffffffffff8 <= 16) {
            rdi87 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx83) + reinterpret_cast<uint64_t>(rcx86));
            rdx88 = rbp7;
            rax89 = rbx83;
            do {
                rax89 = rax89 + 8;
                rdx88 = rdx88 + 8;
                *reinterpret_cast<void***>(rax89 + 0xfffffffffffffff8) = *reinterpret_cast<void***>(rdx88);
            } while (rax89 != rdi87);
            rcx84 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx83) + reinterpret_cast<uint64_t>(rcx86) + 8);
        }
    }
    if (r13_13 != r15_6) {
        fun_402100(rcx84, r13_13, reinterpret_cast<unsigned char>(r15_6) - reinterpret_cast<unsigned char>(r13_13));
    }
    addr_403dee_9:
    if (rax17) {
        if (rax17 > 0xfffffffffffffff) {
            rax17 = 0xfffffffffffffff;
        }
        r12_81 = reinterpret_cast<void**>(rax17 * 8);
        goto addr_403efa_97;
    } else {
        *reinterpret_cast<int32_t*>(&rcx84) = 8;
        *reinterpret_cast<int32_t*>(&rcx84 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rbx83) = 0;
        *reinterpret_cast<int32_t*>(&rbx83 + 4) = 0;
        goto addr_403e01_98;
    }
}

/* std::condition_variable::~condition_variable() */
int64_t _ZNSt18condition_variableD1Ev = 0x4021f6;

void fun_4021f0(void** rdi, void** rsi, void** rdx, int64_t rcx) {
    goto _ZNSt18condition_variableD1Ev;
}

struct s3 {
    void** f0;
    signed char[7] pad8;
    void** f8;
};

unsigned char gfffffffffffffff;

/* void std::vector<std::unique_ptr<std::thread, std::default_delete<std::thread> >, std::allocator<std::unique_ptr<std::thread, std::default_delete<std::thread> > > >::_M_realloc_insert<std::unique_ptr<std::thread, std::default_delete<std::thread> > >(__gnu_cxx::__normal_iterator<std::unique_ptr<std::thread, std::default_delete<std::thread> >*, std::vector<std::unique_ptr<std::thread, std::default_delete<std::thread> >, std::allocator<std::unique_ptr<std::thread, std::default_delete<std::thread> > > > >, std::unique_ptr<std::thread, std::default_delete<std::thread> >&&) */
void _ZNSt6vectorISt10unique_ptrISt6threadSt14default_deleteIS1_EESaIS4_EE17_M_realloc_insertIJS4_EEEvN9__gnu_cxx17__normal_iteratorIPS4_S6_EEDpOT_(struct s3* rdi, void** rsi, void** rdx) {
    void** r15_4;
    void** rbp5;
    uint64_t rax6;
    void** r15_7;
    void** r12_8;
    uint64_t rax9;
    uint64_t rcx10;
    void** r13_11;
    uint64_t tmp64_12;
    uint64_t rax13;
    void* rsi14;
    int64_t rcx15;
    void** rcx16;
    void** r12_17;
    void** r14_18;
    void** r8_19;
    void** rax20;
    void** v21;
    struct s1* rbp22;
    void* r8_23;
    void** rsi24;
    void** v25;
    int1_t zf26;
    struct s1* rax27;
    struct s1* rax28;
    void** rdi29;
    void* rcx30;
    void** rdi31;
    int32_t ebp32;
    int32_t r8d33;
    void* rbx34;
    void* rax35;
    void** rdi36;
    void* rcx37;
    void* rdi38;
    uint32_t eax39;
    void** rax40;
    void** r10_41;
    uint32_t eax42;
    void** rdi43;
    uint32_t eax44;
    void** rax45;
    int64_t v46;
    void** rdi47;
    void** rsi48;
    uint32_t eax49;
    uint64_t rcx50;
    void** rbp51;
    uint64_t tmp64_52;
    uint64_t rax53;
    void* rsi54;
    int64_t rcx55;
    void** rbx56;
    void** rcx57;
    void** r14_58;
    void** rax59;
    void** rax60;
    void** rdx61;
    void** rcx62;
    void** rbx63;
    void** rax64;
    void** r12_65;
    void** rcx66;
    void** rax67;
    void* rcx68;
    void** rdi69;
    void** rdx70;
    void** rax71;

    r15_4 = rdi->f8;
    rbp5 = rdi->f0;
    rax6 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(r15_4) - reinterpret_cast<unsigned char>(rbp5)) >> 3);
    if (rax6 == 0xfffffffffffffff) {
        fun_402090("vector::_M_realloc_insert", rsi);
        r15_7 = g405018;
        r12_8 = g405010;
        rax9 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(r15_7) - reinterpret_cast<unsigned char>(r12_8)) >> 3);
        if (rax9 != 0xfffffffffffffff) 
            goto addr_4041a2_4;
    } else {
        *reinterpret_cast<int32_t*>(&rcx10) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
        r13_11 = rsi;
        if (rax6) {
            rcx10 = rax6;
        }
        tmp64_12 = rax6 + rcx10;
        rax13 = tmp64_12;
        rsi14 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rsi) - reinterpret_cast<unsigned char>(rbp5));
        *reinterpret_cast<uint32_t*>(&rcx15) = reinterpret_cast<uint1_t>(tmp64_12 < rax6);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = 0;
        if (rcx15) 
            goto addr_4040e0_8; else 
            goto addr_403fd9_9;
    }
    fun_402090("vector::_M_realloc_insert", rsi);
    rcx16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<unsigned char>(rdx));
    r12_17 = rsi;
    r14_18 = r8_19;
    rax20 = g405018;
    v21 = rcx16;
    rbp22 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r8_23) - reinterpret_cast<unsigned char>(rdx)) + reinterpret_cast<unsigned char>(rax20));
    rsi24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax20) - reinterpret_cast<unsigned char>(rcx16));
    v25 = rsi24;
    zf26 = reinterpret_cast<int1_t>("oc_insert" == g405010);
    if (!zf26) 
        goto addr_404327_12;
    while (1) {
        *reinterpret_cast<int32_t*>(&rax27) = 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = 0;
        addr_40432b_14:
        if (reinterpret_cast<int64_t>(rbp22) < reinterpret_cast<int64_t>(0)) 
            break;
        if (reinterpret_cast<uint64_t>(rbp22) > reinterpret_cast<uint64_t>(rax27) && (rax28 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rax27) + reinterpret_cast<uint64_t>(rax27)), reinterpret_cast<uint64_t>(rbp22) < reinterpret_cast<uint64_t>(rax28))) {
            if (reinterpret_cast<int64_t>(rax28) < reinterpret_cast<int64_t>(0)) {
                addr_404430_17:
                fun_402060();
                continue;
            } else {
                rbp22 = rax28;
            }
        }
        rdi29 = reinterpret_cast<void**>(&rbp22->f1);
        if (reinterpret_cast<signed char>(rdi29) < reinterpret_cast<signed char>(0)) 
            goto addr_404430_17; else 
            goto addr_40435c_20;
    }
    fun_402090("basic_string::_M_create", rsi24);
    rcx30 = g405032;
    if (reinterpret_cast<unsigned char>(rcx16) > reinterpret_cast<unsigned char>(reinterpret_cast<uint64_t>(rdx + 0x7fffffffffffffff) - reinterpret_cast<uint64_t>(rcx30))) {
        fun_402090("basic_string::_M_replace_aux", rsi24);
    }
    rdi31 = g40502a;
    ebp32 = r8d33;
    rbx34 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx16) - reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint64_t>(rcx30));
    if (rdi31 == "_create") {
        *reinterpret_cast<int32_t*>(&rax35) = 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax35) + 4) = 0;
    } else {
        rax35 = g40503a;
    }
    if (reinterpret_cast<uint64_t>(rax35) >= reinterpret_cast<uint64_t>(rbx34)) 
        goto addr_4044f5_28;
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm("basic_string::_M_create", rsi24, rdx, 0, rcx16);
    rdi31 = g40502a;
    if (!rcx16) {
        addr_404541_30:
        g405032 = rbx34;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdi31) + reinterpret_cast<uint64_t>(rbx34)) = 0;
        goto v25;
    }
    addr_404528_32:
    rdi36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi31) + reinterpret_cast<unsigned char>(rsi24));
    if (rcx16 == 1) {
        *reinterpret_cast<void***>(rdi36) = *reinterpret_cast<void***>(&ebp32);
        rdi31 = g40502a;
        goto addr_404541_30;
    } else {
        fun_4020b0(rdi36, rdi36);
        rdi31 = g40502a;
        goto addr_404541_30;
    }
    addr_4044f5_28:
    rcx37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx30) - (reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<unsigned char>(rsi24)));
    if (!rcx37 || rdx == rcx16) {
        addr_404523_35:
        if (!rcx16) 
            goto addr_404541_30; else 
            goto addr_404528_32;
    } else {
        rdi38 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi31) + reinterpret_cast<unsigned char>(rsi24));
        if (rcx37 == 1) {
            eax39 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rdi38) + reinterpret_cast<unsigned char>(rdx));
            *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi38) + reinterpret_cast<unsigned char>(rcx16)) = *reinterpret_cast<signed char*>(&eax39);
            rdi31 = g40502a;
            if (!rcx16) 
                goto addr_404541_30;
            goto addr_404528_32;
        } else {
            fun_4021b0();
            rdi31 = g40502a;
            goto addr_404523_35;
        }
    }
    addr_40435c_20:
    rax40 = fun_402130(rdi29);
    r10_41 = g405010;
    if (r12_17) {
        if (r12_17 == 1) {
            eax42 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r10_41));
            *reinterpret_cast<void***>(rax40) = *reinterpret_cast<void***>(&eax42);
        } else {
            fun_402100(rax40, r10_41, r12_17);
            r10_41 = r10_41;
        }
    }
    if (!0 && r14_18) {
        rdi43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax40) + reinterpret_cast<unsigned char>(r12_17));
        if (r14_18 == 1) {
            eax44 = gfffffffffffffff;
            *reinterpret_cast<void***>(rdi43) = *reinterpret_cast<void***>(&eax44);
            rax45 = v25;
            if (!rax45) 
                goto addr_404404_46;
            goto addr_4043d8_48;
        } else {
            fun_402100(rdi43, 0xfffffffffffffff, r14_18);
            r10_41 = r10_41;
        }
    }
    rax45 = v25;
    if (!rax45) {
        addr_404404_46:
        if (r10_41 == "oc_insert") {
            addr_404419_51:
            g405010 = rax40;
            g405020 = rbp22;
            goto v46;
        } else {
            addr_404409_52:
            fun_402140(r10_41, r10_41);
            goto addr_404419_51;
        }
    } else {
        addr_4043d8_48:
        rdi47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax40) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r12_17) + reinterpret_cast<unsigned char>(r14_18)));
        rsi48 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v21) + reinterpret_cast<unsigned char>(r10_41));
        if (rax45 == 1) {
            eax49 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi48));
            *reinterpret_cast<void***>(rdi47) = *reinterpret_cast<void***>(&eax49);
            if (!reinterpret_cast<int1_t>(r10_41 == "oc_insert")) 
                goto addr_404409_52;
            goto addr_404419_51;
        } else {
            fun_402100(rdi47, rsi48, rax45);
            r10_41 = r10_41;
            goto addr_404404_46;
        }
    }
    addr_404327_12:
    rax27 = g405020;
    goto addr_40432b_14;
    addr_4041a2_4:
    *reinterpret_cast<int32_t*>(&rcx50) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx50) + 4) = 0;
    rbp51 = rsi;
    if (rax9) {
        rcx50 = rax9;
    }
    tmp64_52 = rax9 + rcx50;
    rax53 = tmp64_52;
    rsi54 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rsi) - reinterpret_cast<unsigned char>(r12_8));
    *reinterpret_cast<uint32_t*>(&rcx55) = reinterpret_cast<uint1_t>(tmp64_52 < rax9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx55) + 4) = 0;
    if (rcx55) {
        rbx56 = reinterpret_cast<void**>(0x7ffffffffffffff8);
    } else {
        if (rax53) {
            if (rax53 > 0xfffffffffffffff) {
                rax53 = 0xfffffffffffffff;
            }
            rbx56 = reinterpret_cast<void**>(rax53 * 8);
        } else {
            *reinterpret_cast<int32_t*>(&rcx57) = 8;
            *reinterpret_cast<int32_t*>(&rcx57 + 4) = 0;
            *reinterpret_cast<int32_t*>(&r14_58) = 0;
            *reinterpret_cast<int32_t*>(&r14_58 + 4) = 0;
            goto addr_4041dc_64;
        }
    }
    rax59 = fun_402130(rbx56);
    rsi54 = rsi54;
    rdx = rdx;
    r14_58 = rax59;
    rcx57 = rax59 + 8;
    addr_4041dc_64:
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r14_58) + reinterpret_cast<uint64_t>(rsi54)) = *reinterpret_cast<void***>(rdx);
    if (rbp51 != r12_8) {
        rax60 = r14_58;
        rdx61 = r12_8;
        rcx62 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp51) - reinterpret_cast<unsigned char>(r12_8)) + reinterpret_cast<unsigned char>(r14_58));
        do {
            rax60 = rax60 + 8;
            rdx61 = rdx61 + 8;
            *reinterpret_cast<void***>(rax60 + 0xfffffffffffffff8) = *reinterpret_cast<void***>(rdx61);
        } while (rcx62 != rax60);
        rcx57 = rcx62 + 8;
    }
    if (rbp51 != r15_7) {
        fun_402100(rcx57, rbp51, reinterpret_cast<unsigned char>(r15_7) - reinterpret_cast<unsigned char>(rbp51));
    }
    addr_4040e0_8:
    rbx63 = reinterpret_cast<void**>(0x7ffffffffffffff8);
    addr_4040ea_73:
    rax64 = fun_402130(rbx63);
    rsi14 = rsi14;
    rdx = rdx;
    r12_65 = rax64;
    rcx66 = rax64 + 8;
    addr_403fec_74:
    rax67 = *reinterpret_cast<void***>(rdx);
    *reinterpret_cast<void***>(rdx) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r12_65) + reinterpret_cast<uint64_t>(rsi14)) = rax67;
    if (r13_11 != rbp5) {
        rcx68 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r13_11) - reinterpret_cast<unsigned char>(rbp5));
        if (r12_65 == rbp5 + 8 || reinterpret_cast<uint64_t>(rcx68) + 0xfffffffffffffff8 <= 16) {
            rdi69 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_65) + reinterpret_cast<uint64_t>(rcx68));
            rdx70 = rbp5;
            rax71 = r12_65;
            do {
                rax71 = rax71 + 8;
                rdx70 = rdx70 + 8;
                *reinterpret_cast<void***>(rax71 + 0xfffffffffffffff8) = *reinterpret_cast<void***>(rdx70);
            } while (rax71 != rdi69);
            rcx66 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_65) + reinterpret_cast<uint64_t>(rcx68) + 8);
        }
    }
    if (r13_11 != r15_4) {
        fun_402100(rcx66, r13_11, reinterpret_cast<unsigned char>(r15_4) - reinterpret_cast<unsigned char>(r13_11));
    }
    addr_403fd9_9:
    if (rax13) {
        if (rax13 > 0xfffffffffffffff) {
            rax13 = 0xfffffffffffffff;
        }
        rbx63 = reinterpret_cast<void**>(rax13 * 8);
        goto addr_4040ea_73;
    } else {
        *reinterpret_cast<int32_t*>(&rcx66) = 8;
        *reinterpret_cast<int32_t*>(&rcx66 + 4) = 0;
        *reinterpret_cast<int32_t*>(&r12_65) = 0;
        *reinterpret_cast<int32_t*>(&r12_65 + 4) = 0;
        goto addr_403fec_74;
    }
}

int64_t pthread_mutex_lock = 0x402176;

int32_t fun_402170(void** rdi, void** rsi, void** rdx) {
    goto pthread_mutex_lock;
}

int64_t pthread_mutex_unlock = 0x4020f6;

void fun_4020f0(void** rdi, void** rsi, void** rdx) {
    goto pthread_mutex_unlock;
}

/* std::condition_variable::notify_one() */
int64_t _ZNSt18condition_variable10notify_oneEv = 0x402086;

void fun_402080(void** rdi, void** rsi, void** rdx) {
    goto _ZNSt18condition_variable10notify_oneEv;
}

/* std::thread::join() */
int64_t _ZNSt6thread4joinEv = 0x4021d6;

void fun_4021d0(int64_t rdi, void** rsi) {
    goto _ZNSt6thread4joinEv;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x407110;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

/* std::condition_variable::wait(std::unique_lock<std::mutex>&) */
int64_t _ZNSt18condition_variable4waitERSt11unique_lockISt5mutexE = 0x402196;

void fun_402190(void** rdi, void** rsi) {
    goto _ZNSt18condition_variable4waitERSt11unique_lockISt5mutexE;
}

int64_t writev = 0x4020a6;

void fun_4020a0(int64_t rdi, void** rsi, void** rdx) {
    goto writev;
}

int64_t memcpy = 0x402106;

void** fun_402100(void** rdi, void** rsi, void** rdx) {
    goto memcpy;
}

int64_t memmove = 0x4021b6;

void fun_4021b0() {
    goto memmove;
}

int64_t memset = 0x4020b6;

void fun_4020b0(void** rdi, ...) {
    goto memset;
}

struct s4 {
    void** f0;
    signed char[7] pad8;
    void** f8;
    signed char[7] pad16;
    void** f10;
};

/* std::__cxx11::to_string(unsigned long) */
struct s4* _ZNSt7__cxx119to_stringEm(struct s4* rdi, uint64_t rsi, uint64_t rdx) {
    struct s4* r12_4;
    void** rdi5;
    uint64_t rbx6;
    void** rbp7;
    uint64_t rdx8;
    int32_t esi9;
    uint64_t rcx10;
    int64_t rax11;
    void** rax12;
    int64_t rax13;
    void** rsi14;
    int64_t rcx15;
    uint64_t rdx16;
    uint64_t rax17;
    uint64_t rdi18;
    void* rdx19;
    uint64_t rax20;
    uint32_t r9d21;
    uint32_t eax22;
    void* rdx23;
    uint32_t eax24;
    uint64_t rbx25;
    uint32_t eax26;
    void** rax27;

    r12_4 = rdi;
    rdi5 = reinterpret_cast<void**>(&rdi->f10);
    rbx6 = rsi;
    if (rsi <= 9) {
        r12_4->f0 = rdi5;
    } else {
        if (rsi <= 99) {
            r12_4->f0 = rdi5;
            *reinterpret_cast<int32_t*>(&rbp7) = 2;
            *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
            goto addr_403cd5_5;
        } else {
            if (rsi <= 0x3e7) {
                r12_4->f0 = rdi5;
                *reinterpret_cast<int32_t*>(&rbp7) = 3;
                *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
                goto addr_403cd5_5;
            } else {
                rdx8 = rsi;
                esi9 = 1;
                if (rbx6 > 0x270f) {
                    do {
                        rcx10 = rdx8;
                        *reinterpret_cast<int32_t*>(&rax11) = esi9;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
                        esi9 = esi9 + 4;
                        rdx8 = __intrinsic() >> 11;
                        if (rcx10 <= 0x1869f) 
                            goto addr_403c02_10;
                        if (rcx10 <= 0xf423f) 
                            goto addr_403d10_12;
                        if (rcx10 <= 0x98967f) 
                            goto addr_403d20_14;
                    } while (rcx10 > 0x5f5e0ff);
                    goto addr_403d30_16;
                } else {
                    r12_4->f0 = rdi5;
                    *reinterpret_cast<int32_t*>(&rbp7) = 4;
                    *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
                    goto addr_403cd5_5;
                }
            }
        }
    }
    addr_403d46_19:
    rax12 = r12_4->f0;
    *reinterpret_cast<void***>(&r12_4->f10) = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>(&rbp7) = 1;
    *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
    addr_403ce3_20:
    r12_4->f8 = rbp7;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax12) + reinterpret_cast<unsigned char>(rbp7)) = 0;
    *reinterpret_cast<void***>(&rax13) = r12_4->f8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
    rsi14 = r12_4->f0;
    *reinterpret_cast<int32_t*>(&rcx15) = static_cast<int32_t>(rax13 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = 0;
    if (rbx6 > 99) {
        addr_403c32_21:
    } else {
        goto addr_403c8b_23;
    }
    do {
        rdx16 = __intrinsic() >> 2;
        rax17 = rbx6 - rdx16 * 100;
        rdi18 = rbx6;
        rbx6 = rdx16;
        *reinterpret_cast<int32_t*>(&rdx19) = *reinterpret_cast<int32_t*>(&rcx15);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
        rax20 = rax17 + rax17;
        r9d21 = *reinterpret_cast<unsigned char*>(rax20 + reinterpret_cast<int64_t>("0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
        eax22 = *reinterpret_cast<unsigned char*>(rax20 + reinterpret_cast<int64_t>("00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rsi14) + reinterpret_cast<uint64_t>(rdx19)) = *reinterpret_cast<signed char*>(&r9d21);
        *reinterpret_cast<int32_t*>(&rdx23) = static_cast<int32_t>(rcx15 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx15) = *reinterpret_cast<int32_t*>(&rcx15) - 2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = 0;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rsi14) + reinterpret_cast<uint64_t>(rdx23)) = *reinterpret_cast<signed char*>(&eax22);
    } while (rdi18 > 0x270f);
    addr_403c8b_23:
    eax24 = static_cast<uint32_t>(rbx6 + 48);
    if (rbx6 > 9) {
        rbx25 = rbx6 + rbx6;
        eax26 = *reinterpret_cast<unsigned char*>(rbx25 + reinterpret_cast<int64_t>("0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
        *reinterpret_cast<void***>(rsi14 + 1) = *reinterpret_cast<void***>(&eax26);
        eax24 = *reinterpret_cast<unsigned char*>(rbx25 + reinterpret_cast<int64_t>("00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
    }
    *reinterpret_cast<void***>(rsi14) = *reinterpret_cast<void***>(&eax24);
    return r12_4;
    addr_403cd5_5:
    fun_4020b0(rdi5);
    rax12 = r12_4->f0;
    goto addr_403ce3_20;
    addr_403c02_10:
    *reinterpret_cast<int32_t*>(&rbp7) = esi9;
    *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
    addr_403c04_27:
    r12_4->f0 = rdi5;
    if (reinterpret_cast<unsigned char>(rbp7) > reinterpret_cast<unsigned char>(15)) {
        rax27 = fun_402130(rbp7 + 1);
        *reinterpret_cast<void***>(&r12_4->f10) = rbp7;
        rdi5 = rax27;
        r12_4->f0 = rax27;
        goto addr_403cd5_5;
    } else {
        if (!rbp7) {
            r12_4->f8 = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(&r12_4->f10) = reinterpret_cast<void**>(0);
            rsi14 = rdi5;
            *reinterpret_cast<int32_t*>(&rcx15) = -1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = 0;
            goto addr_403c32_21;
        }
        if (!reinterpret_cast<int1_t>(rbp7 == 1)) 
            goto addr_403cd5_5; else 
            goto addr_403d46_19;
    }
    addr_403d10_12:
    *reinterpret_cast<int32_t*>(&rbp7) = static_cast<int32_t>(rax11 + 5);
    *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
    goto addr_403c04_27;
    addr_403d20_14:
    *reinterpret_cast<int32_t*>(&rbp7) = static_cast<int32_t>(rax11 + 6);
    *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
    goto addr_403c04_27;
    addr_403d30_16:
    *reinterpret_cast<int32_t*>(&rbp7) = static_cast<int32_t>(rax11 + 7);
    *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
    goto addr_403c04_27;
}

int64_t snprintf = 0x4021a6;

int32_t fun_4021a0() {
    goto snprintf;
}

/* std::ostream::flush() */
int64_t _ZNSo5flushEv = 0x4020e6;

void fun_4020e0(int64_t rdi, void** rsi) {
    goto _ZNSo5flushEv;
}

/* std::ostream::operator<<(int) */
int64_t _ZNSolsEi = 0x4021e6;

int64_t fun_4021e0(int64_t rdi, int64_t rsi) {
    goto _ZNSolsEi;
}

/* std::__throw_length_error(char const*) */
int64_t _ZSt20__throw_length_errorPKc = 0x402096;

void fun_402090(void*** rdi, void** rsi) {
    goto _ZSt20__throw_length_errorPKc;
}

/* worker::worker(unsigned long, unsigned long, unsigned long) */
void _ZN6workerC1Emmm(void** rdi, uint64_t rsi, uint64_t rdx, int64_t rcx) {
}

/* std::thread::_M_start_thread(std::unique_ptr<std::thread::_State, std::default_delete<std::thread::_State> >, void (*)()) */
int64_t _ZNSt6thread15_M_start_threadESt10unique_ptrINS_6_StateESt14default_deleteIS1_EEPFvvE = 0x402126;

void fun_402120(void** rdi, void* rsi, void** rdx) {
    goto _ZNSt6thread15_M_start_threadESt10unique_ptrINS_6_StateESt14default_deleteIS1_EEPFvvE;
}

/* std::terminate() */
int64_t _ZSt9terminatev = 0x402046;

int32_t fun_402040(void*** rdi) {
    goto _ZSt9terminatev;
}

struct s5 {
    signed char[8] pad8;
    struct s2* f8;
};

/* std::__throw_system_error(int) */
int64_t _ZSt20__throw_system_errori = 0x4020d6;

void fun_4020d0(struct s5* rdi, void** rsi) {
    goto _ZSt20__throw_system_errori;
}

/* std::ios_base::Init::Init() */
int64_t _ZNSt8ios_base4InitC1Ev = 0x402186;

void fun_402180(int64_t rdi) {
    goto _ZNSt8ios_base4InitC1Ev;
}

/* std::thread::_State::~_State() */
int64_t _ZNSt6thread6_StateD2Ev = 0x402076;

void fun_402070() {
    goto _ZNSt6thread6_StateD2Ev;
}

void fun_402050(int64_t rdi, void** rsi, int64_t rdx);

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_replace_aux(unsigned long, unsigned long, unsigned long, char) */
struct s2* _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc(struct s2* rdi, void** rsi, void** rdx, void** rcx, int32_t r8d);

/* worker::loop() */
void _ZN6worker4loopEv(struct s2* rdi, void** rsi) {
    struct s2* r13_3;
    void** r12_4;
    void** rbx5;
    void* rsp6;
    void** v7;
    void** rdx8;
    int32_t eax9;
    int1_t zf10;
    void** r14_11;
    void* rsp12;
    void* r14_13;
    void* rax14;
    void* rdx15;
    void* r15_16;
    void** r15_17;
    void** rdi18;
    void** rax19;
    void** rdi20;
    void** v21;
    int1_t zf22;
    void** r14_23;
    void*** rdi24;
    void*** rcx25;
    uint32_t eax26;
    uint32_t eax27;
    void** r9_28;
    void** rcx29;
    int64_t rdx30;
    void*** r14_31;
    void** tmp64_32;
    void** rcx33;
    void** rax34;
    uint32_t esi35;
    uint32_t esi36;
    struct s5* rdi37;
    struct s2* rdi38;

    r13_3 = rdi;
    r12_4 = reinterpret_cast<void**>(&rdi->f40);
    rbx5 = reinterpret_cast<void**>(&rdi->f68);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 40);
    while ((v7 = r12_4, 0) || (eax9 = fun_402170(r12_4, rsi, rdx8), rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8), !eax9)) {
        zf10 = *reinterpret_cast<void***>(&r13_3->f98) == 0;
        r14_11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp6) + 16);
        if (zf10) {
            do {
                fun_402190(rbx5, r14_11);
                rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
            } while (!*reinterpret_cast<void***>(&r13_3->f98));
        }
        rsi = reinterpret_cast<void**>(&r13_3->f98);
        r13_3->fb0 = reinterpret_cast<void*>(0x10000 - r13_3->fa0);
        fun_4020a0(1, rsi, 2);
        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        *reinterpret_cast<void***>(&r13_3->f98) = reinterpret_cast<void**>(0);
        if (v7 && !0) {
            fun_4020f0(v7, rsi, 2);
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
        }
        fun_402080(rbx5, rsi, 2);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
        r14_13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r13_3->fb0) + reinterpret_cast<unsigned char>(r13_3->f0));
        rax14 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r13_3->f0) + reinterpret_cast<unsigned char>(r13_3->f8));
        rdx15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r14_13) + 0x10000);
        if (reinterpret_cast<uint64_t>(rdx15) < reinterpret_cast<uint64_t>(rax14)) {
            r15_16 = rdx15;
            while (rsi = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r15_16) + 0xffffffffffff0000), r14_13 = r15_16, fun_402050(1, rsi, 0x10000), rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8), r15_16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r15_16) + 0x10000), rax14 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r13_3->f8) + reinterpret_cast<unsigned char>(r13_3->f0)), reinterpret_cast<uint64_t>(rax14) > reinterpret_cast<uint64_t>(r15_16)) {
            }
        }
        rdx8 = r13_3->fb8;
        r15_17 = rdx8 + 64;
        if (!0) {
            eax9 = fun_402170(r15_17, rsi, rdx8);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
            if (eax9) 
                break;
            rax14 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r13_3->f8) + reinterpret_cast<unsigned char>(r13_3->f0));
            rdx8 = r13_3->fb8;
        }
        *reinterpret_cast<void**>(rdx8 + 0x98) = r14_13;
        *reinterpret_cast<void**>(rdx8 + 0xa0) = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax14) - reinterpret_cast<uint64_t>(r14_13));
        if (!0) {
            fun_4020f0(r15_17, rsi, rdx8);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        }
        rdi18 = r13_3->fb8 + 0x68;
        fun_402080(rdi18, rsi, rdx8);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        rax19 = r13_3->fb8;
        rdi20 = rax19 + 64;
        v21 = rdi20;
        if (!0) {
            eax9 = fun_402170(rdi20, rsi, rdx8);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
            if (eax9) 
                break;
            rax19 = r13_3->fb8;
        }
        zf22 = *reinterpret_cast<void**>(rax19 + 0x98) == 0;
        r15_17 = rax19 + 0x68;
        r14_23 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp6) + 16);
        if (zf22) {
            addr_402ff0_21:
            if (v21 && !0) {
                fun_4020f0(v21, rsi, rdx8);
                rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
            }
        } else {
            do {
                rsi = r14_23;
                fun_402190(r15_17, rsi);
                rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
            } while (*reinterpret_cast<void**>(r13_3->fb8 + 0x98));
            if (1) 
                goto addr_402ff0_21;
        }
        rdi24 = r13_3->f28;
        rcx25 = r13_3->f20;
        *reinterpret_cast<uint32_t*>(&rsi) = 0;
        *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
        if (rdi24 == rcx25) 
            continue;
        do {
            rdx8 = *rcx25;
            if (*reinterpret_cast<signed char*>(rdx8 + 0xfffffffffffffffe) != 0x7a) {
                rdx8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx8) - reinterpret_cast<uint64_t>(static_cast<int64_t>(r13_3->f38)));
                eax26 = r13_3->f3c;
                *reinterpret_cast<void***>(&eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&eax26)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx8)));
                *reinterpret_cast<void***>(rdx8) = *reinterpret_cast<void***>(&eax26);
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&eax26)) > reinterpret_cast<signed char>(57)) {
                    do {
                        --rdx8;
                        eax27 = eax26 - 10;
                        *reinterpret_cast<void***>(rdx8 + 1) = *reinterpret_cast<void***>(&eax27);
                        eax26 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(rdx8) + 1);
                        *reinterpret_cast<void***>(rdx8) = *reinterpret_cast<void***>(&eax26);
                    } while (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&eax26)) > reinterpret_cast<signed char>(57));
                }
                *reinterpret_cast<uint32_t*>(&rsi) = *reinterpret_cast<uint32_t*>(&rsi) + static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&eax26) == 11));
                *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
            }
            rcx25 = rcx25 + 8;
        } while (rdi24 != rcx25);
        if (!*reinterpret_cast<uint32_t*>(&rsi)) 
            continue;
        r9_28 = r13_3->f8;
        *reinterpret_cast<uint32_t*>(&rcx29) = *reinterpret_cast<uint32_t*>(&rsi);
        *reinterpret_cast<int32_t*>(&rcx29 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx30) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = 0;
        r14_31 = r13_3->f28;
        r15_17 = r13_3->f0;
        tmp64_32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx29) + reinterpret_cast<unsigned char>(r9_28));
        *reinterpret_cast<unsigned char*>(&rdx30) = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp64_32) < reinterpret_cast<unsigned char>(rcx29));
        if (reinterpret_cast<unsigned char>(tmp64_32) > reinterpret_cast<unsigned char>(r9_28)) {
            rsi = r9_28;
            _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc(r13_3, rsi, 0, rcx29, 0);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
            r9_28 = r9_28;
            rcx33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_3->f8) + reinterpret_cast<unsigned char>(r13_3->f0));
        } else {
            rcx33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_17) + reinterpret_cast<unsigned char>(r9_28));
            if (rdx30) {
                r13_3->f8 = tmp64_32;
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r15_17) + reinterpret_cast<unsigned char>(tmp64_32)) = 0;
                rcx33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_3->f8) + reinterpret_cast<unsigned char>(r13_3->f0));
            }
        }
        rdx8 = rcx33 + 0xffffffffffffffff;
        rax34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_17) + reinterpret_cast<unsigned char>(r9_28) + 0xffffffffffffffff);
        if (reinterpret_cast<unsigned char>(rax34) >= reinterpret_cast<unsigned char>(rdx8)) 
            continue;
        while (1) {
            esi35 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax34));
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&esi35) == 11)) {
                *reinterpret_cast<void***>(rax34) = reinterpret_cast<void**>(10);
                *reinterpret_cast<signed char*>(rcx33 + 0xffffffffffffffff) = 49;
                esi35 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax34));
                rdx8 = rcx33 + 0xfffffffffffffffe;
            }
            if (*reinterpret_cast<void***>(&esi35) == 10) {
                --rax34;
                *r14_31 = rdx8 + 1;
                esi36 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax34 + 1));
                *reinterpret_cast<void***>(rdx8) = *reinterpret_cast<void***>(&esi36);
                rsi = rdx8 + 0xffffffffffffffff;
                if (reinterpret_cast<unsigned char>(rsi) <= reinterpret_cast<unsigned char>(rax34)) 
                    break;
                r14_31 = r14_31 - 8;
                rcx33 = rdx8;
                rdx8 = rsi;
            } else {
                *reinterpret_cast<void***>(rdx8) = *reinterpret_cast<void***>(&esi35);
                --rax34;
                rsi = rdx8 + 0xffffffffffffffff;
                if (reinterpret_cast<unsigned char>(rsi) <= reinterpret_cast<unsigned char>(rax34)) 
                    break;
                rcx33 = rdx8;
                rdx8 = rsi;
            }
        }
    }
    *reinterpret_cast<int32_t*>(&rdi37) = eax9;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = 0;
    fun_4020d0(rdi37, rsi);
    rdi38 = rdi37->f8;
    _ZN6worker4loopEv(rdi38, rsi);
}

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_replace_aux(unsigned long, unsigned long, unsigned long, char) */
struct s2* _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc(struct s2* rdi, void** rsi, void** rdx, void** rcx, int32_t r8d) {
    void** rdi6;
    int32_t ebp7;
    void** rbx8;
    void** rax9;
    void** rdi10;
    void* rcx11;
    void* rdi12;
    uint32_t eax13;

    if (reinterpret_cast<unsigned char>(rcx) > reinterpret_cast<unsigned char>(reinterpret_cast<uint64_t>(rdx + 0x7fffffffffffffff) - reinterpret_cast<unsigned char>(rdi->f8))) {
        fun_402090("basic_string::_M_replace_aux", rsi);
    }
    rdi6 = rdi->f0;
    ebp7 = r8d;
    rbx8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rcx) - reinterpret_cast<unsigned char>(rdx)) + reinterpret_cast<unsigned char>(rdi->f8));
    if (rdi6 == &rdi->f10) {
        *reinterpret_cast<int32_t*>(&rax9) = 15;
        *reinterpret_cast<int32_t*>(&rax9 + 4) = 0;
    } else {
        rax9 = *reinterpret_cast<void***>(&rdi->f10);
    }
    if (reinterpret_cast<unsigned char>(rax9) >= reinterpret_cast<unsigned char>(rbx8)) 
        goto addr_4044f5_7;
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm(rdi, rsi, rdx, 0, rcx);
    rdi6 = rdi->f0;
    if (!rcx) {
        addr_404541_9:
        rdi->f8 = rbx8;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdi6) + reinterpret_cast<unsigned char>(rbx8)) = 0;
        return rdi;
    }
    addr_404528_11:
    rdi10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi6) + reinterpret_cast<unsigned char>(rsi));
    if (rcx == 1) {
        *reinterpret_cast<void***>(rdi10) = *reinterpret_cast<void***>(&ebp7);
        rdi6 = rdi->f0;
        goto addr_404541_9;
    } else {
        fun_4020b0(rdi10, rdi10);
        rdi6 = rdi->f0;
        goto addr_404541_9;
    }
    addr_4044f5_7:
    rcx11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi->f8) - reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<unsigned char>(rsi)));
    if (!rcx11 || rdx == rcx) {
        addr_404523_14:
        if (!rcx) 
            goto addr_404541_9; else 
            goto addr_404528_11;
    } else {
        rdi12 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi6) + reinterpret_cast<unsigned char>(rsi));
        if (rcx11 == 1) {
            eax13 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rdi12) + reinterpret_cast<unsigned char>(rdx));
            *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi12) + reinterpret_cast<unsigned char>(rcx)) = *reinterpret_cast<signed char*>(&eax13);
            rdi6 = rdi->f0;
            if (!rcx) 
                goto addr_404541_9;
            goto addr_404528_11;
        } else {
            fun_4021b0();
            rdi6 = rdi->f0;
            goto addr_404523_14;
        }
    }
}

int64_t write = 0x402056;

void fun_402050(int64_t rdi, void** rsi, int64_t rdx) {
    goto write;
}

/* std::condition_variable::condition_variable() */
int64_t _ZNSt18condition_variableC1Ev = 0x402166;

void fun_402160() {
    goto _ZNSt18condition_variableC1Ev;
}

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */
void** _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm(struct s2* rdi, void** rsi, void** rdx, void** rcx, void** r8) {
    void** r9_6;
    void** rcx7;
    void** r12_8;
    void** r14_9;
    struct s2* rbx10;
    void** rax11;
    void** r13_12;
    void** v13;
    void** rbp14;
    void** rsi15;
    void** v16;
    void** rax17;
    void** rax18;
    void** rdi19;
    void* rcx20;
    void** rdi21;
    int32_t ebp22;
    void* rbx23;
    void* rax24;
    void** rdi25;
    void* rcx26;
    void* rdi27;
    uint32_t eax28;
    void** rax29;
    void** r10_30;
    void** r9_31;
    uint32_t eax32;
    void** rdi33;
    uint32_t eax34;
    void** rax35;
    void** rdi36;
    void** rsi37;

    r9_6 = rcx;
    rcx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<unsigned char>(rdx));
    r12_8 = rsi;
    r14_9 = r8;
    rbx10 = rdi;
    rax11 = rdi->f8;
    r13_12 = reinterpret_cast<void**>(&rdi->f10);
    v13 = rcx7;
    rbp14 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r8) - reinterpret_cast<unsigned char>(rdx)) + reinterpret_cast<unsigned char>(rax11));
    rsi15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax11) - reinterpret_cast<unsigned char>(rcx7));
    v16 = rsi15;
    if (r13_12 != rdi->f0) {
        rax17 = *reinterpret_cast<void***>(&rdi->f10);
        goto addr_40432b_3;
    }
    while (1) {
        *reinterpret_cast<int32_t*>(&rax17) = 15;
        *reinterpret_cast<int32_t*>(&rax17 + 4) = 0;
        addr_40432b_3:
        if (reinterpret_cast<signed char>(rbp14) < reinterpret_cast<signed char>(0)) 
            break;
        if (reinterpret_cast<unsigned char>(rbp14) > reinterpret_cast<unsigned char>(rax17) && (rax18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax17) + reinterpret_cast<unsigned char>(rax17)), reinterpret_cast<unsigned char>(rbp14) < reinterpret_cast<unsigned char>(rax18))) {
            if (reinterpret_cast<signed char>(rax18) < reinterpret_cast<signed char>(0)) {
                addr_404430_7:
                fun_402060();
                continue;
            } else {
                rbp14 = rax18;
            }
        }
        rdi19 = rbp14 + 1;
        if (reinterpret_cast<signed char>(rdi19) < reinterpret_cast<signed char>(0)) 
            goto addr_404430_7; else 
            goto addr_40435c_10;
    }
    fun_402090("basic_string::_M_create", rsi15);
    rcx20 = g405032;
    if (reinterpret_cast<unsigned char>(rcx7) > reinterpret_cast<unsigned char>(reinterpret_cast<uint64_t>(rdx + 0x7fffffffffffffff) - reinterpret_cast<uint64_t>(rcx20))) {
        fun_402090("basic_string::_M_replace_aux", rsi15);
    }
    rdi21 = g40502a;
    ebp22 = *reinterpret_cast<int32_t*>(&r8);
    rbx23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx7) - reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint64_t>(rcx20));
    if (rdi21 == "_create") {
        *reinterpret_cast<int32_t*>(&rax24) = 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0;
    } else {
        rax24 = g40503a;
    }
    if (reinterpret_cast<uint64_t>(rax24) >= reinterpret_cast<uint64_t>(rbx23)) 
        goto addr_4044f5_18;
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm("basic_string::_M_create", rsi15, rdx, 0, rcx7);
    rdi21 = g40502a;
    if (!rcx7) {
        addr_404541_20:
        g405032 = rbx23;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdi21) + reinterpret_cast<uint64_t>(rbx23)) = 0;
        goto v16;
    }
    addr_404528_22:
    rdi25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi21) + reinterpret_cast<unsigned char>(rsi15));
    if (rcx7 == 1) {
        *reinterpret_cast<void***>(rdi25) = *reinterpret_cast<void***>(&ebp22);
        rdi21 = g40502a;
        goto addr_404541_20;
    } else {
        fun_4020b0(rdi25, rdi25);
        rdi21 = g40502a;
        goto addr_404541_20;
    }
    addr_4044f5_18:
    rcx26 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx20) - (reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<unsigned char>(rsi15)));
    if (!rcx26 || rdx == rcx7) {
        addr_404523_25:
        if (!rcx7) 
            goto addr_404541_20; else 
            goto addr_404528_22;
    } else {
        rdi27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi21) + reinterpret_cast<unsigned char>(rsi15));
        if (rcx26 == 1) {
            eax28 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rdi27) + reinterpret_cast<unsigned char>(rdx));
            *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi27) + reinterpret_cast<unsigned char>(rcx7)) = *reinterpret_cast<signed char*>(&eax28);
            rdi21 = g40502a;
            if (!rcx7) 
                goto addr_404541_20;
            goto addr_404528_22;
        } else {
            fun_4021b0();
            rdi21 = g40502a;
            goto addr_404523_25;
        }
    }
    addr_40435c_10:
    rax29 = fun_402130(rdi19);
    r10_30 = rbx10->f0;
    r9_31 = r9_6;
    if (r12_8) {
        if (r12_8 == 1) {
            eax32 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r10_30));
            *reinterpret_cast<void***>(rax29) = *reinterpret_cast<void***>(&eax32);
        } else {
            fun_402100(rax29, r10_30, r12_8);
            r9_31 = r9_31;
            r10_30 = r10_30;
        }
    }
    if (r9_31 && r14_9) {
        rdi33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax29) + reinterpret_cast<unsigned char>(r12_8));
        if (r14_9 == 1) {
            eax34 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r9_31));
            *reinterpret_cast<void***>(rdi33) = *reinterpret_cast<void***>(&eax34);
            rax35 = v16;
            if (!rax35) 
                goto addr_404404_36;
            goto addr_4043d8_38;
        } else {
            fun_402100(rdi33, r9_31, r14_9);
            r10_30 = r10_30;
        }
    }
    rax35 = v16;
    if (!rax35) {
        addr_404404_36:
        if (r10_30 == r13_12) {
            addr_404419_41:
            rbx10->f0 = rax29;
            *reinterpret_cast<void***>(&rbx10->f10) = rbp14;
            return rax35;
        } else {
            addr_404409_42:
            rax35 = fun_402140(r10_30, r10_30);
            goto addr_404419_41;
        }
    } else {
        addr_4043d8_38:
        rdi36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax29) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r12_8) + reinterpret_cast<unsigned char>(r14_9)));
        rsi37 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(r10_30));
        if (rax35 == 1) {
            *reinterpret_cast<uint32_t*>(&rax35) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi37));
            *reinterpret_cast<int32_t*>(&rax35 + 4) = 0;
            *reinterpret_cast<void***>(rdi36) = rax35;
            if (r10_30 != r13_12) 
                goto addr_404409_42;
            goto addr_404419_41;
        } else {
            rax35 = fun_402100(rdi36, rsi37, rax35);
            r10_30 = r10_30;
            goto addr_404404_36;
        }
    }
}

struct s6 {
    void** f0;
    signed char[7] pad8;
    void** f8;
};

unsigned char gfffffffffffffff;

/* void std::vector<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >::_M_realloc_insert<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >(__gnu_cxx::__normal_iterator<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >*, std::vector<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > >, __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&&) */
void _ZNSt6vectorIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaIS9_EE17_M_realloc_insertIJS9_EEEvNS1_IPS9_SB_EEDpOT_(struct s6* rdi, void** rsi, void** rdx, void** rcx, void** r8) {
    void** r15_6;
    void** r12_7;
    uint64_t rax8;
    void** rcx9;
    void** r12_10;
    void** r14_11;
    void** rax12;
    void** v13;
    struct s1* rbp14;
    void** rsi15;
    void** v16;
    int1_t zf17;
    uint64_t rcx18;
    void** rbp19;
    uint64_t tmp64_20;
    uint64_t rax21;
    void* rsi22;
    int64_t rcx23;
    struct s1* rax24;
    struct s1* rax25;
    void** rdi26;
    void* rcx27;
    void** rdi28;
    int32_t ebp29;
    void* rbx30;
    void* rax31;
    void** rdi32;
    void* rcx33;
    void* rdi34;
    uint32_t eax35;
    void** rax36;
    void** r10_37;
    uint32_t eax38;
    void** rdi39;
    uint32_t eax40;
    void** rax41;
    int64_t v42;
    void** rdi43;
    void** rsi44;
    uint32_t eax45;
    void** rbx46;
    void** rax47;
    void** r14_48;
    void** rcx49;
    void** rax50;
    void** rdx51;
    void** rcx52;

    r15_6 = rdi->f8;
    r12_7 = rdi->f0;
    rax8 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(r15_6) - reinterpret_cast<unsigned char>(r12_7)) >> 3);
    if (rax8 == 0xfffffffffffffff) {
        fun_402090("vector::_M_realloc_insert", rsi);
        rcx9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<unsigned char>(rdx));
        r12_10 = rsi;
        r14_11 = r8;
        rax12 = g405018;
        v13 = rcx9;
        rbp14 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r8) - reinterpret_cast<unsigned char>(rdx)) + reinterpret_cast<unsigned char>(rax12));
        rsi15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax12) - reinterpret_cast<unsigned char>(rcx9));
        v16 = rsi15;
        zf17 = reinterpret_cast<int1_t>("oc_insert" == g405010);
        if (!zf17) 
            goto addr_404327_4;
    } else {
        *reinterpret_cast<int32_t*>(&rcx18) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = 0;
        rbp19 = rsi;
        if (rax8) {
            rcx18 = rax8;
        }
        tmp64_20 = rax8 + rcx18;
        rax21 = tmp64_20;
        rsi22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rsi) - reinterpret_cast<unsigned char>(r12_7));
        *reinterpret_cast<uint32_t*>(&rcx23) = reinterpret_cast<uint1_t>(tmp64_20 < rax8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = 0;
        if (rcx23) 
            goto addr_404280_8; else 
            goto addr_4041c9_9;
    }
    while (1) {
        *reinterpret_cast<int32_t*>(&rax24) = 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0;
        addr_40432b_11:
        if (reinterpret_cast<int64_t>(rbp14) < reinterpret_cast<int64_t>(0)) 
            break;
        if (reinterpret_cast<uint64_t>(rbp14) > reinterpret_cast<uint64_t>(rax24) && (rax25 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rax24) + reinterpret_cast<uint64_t>(rax24)), reinterpret_cast<uint64_t>(rbp14) < reinterpret_cast<uint64_t>(rax25))) {
            if (reinterpret_cast<int64_t>(rax25) < reinterpret_cast<int64_t>(0)) {
                addr_404430_14:
                fun_402060();
                continue;
            } else {
                rbp14 = rax25;
            }
        }
        rdi26 = reinterpret_cast<void**>(&rbp14->f1);
        if (reinterpret_cast<signed char>(rdi26) < reinterpret_cast<signed char>(0)) 
            goto addr_404430_14; else 
            goto addr_40435c_17;
    }
    fun_402090("basic_string::_M_create", rsi15);
    rcx27 = g405032;
    if (reinterpret_cast<unsigned char>(rcx9) > reinterpret_cast<unsigned char>(reinterpret_cast<uint64_t>(rdx + 0x7fffffffffffffff) - reinterpret_cast<uint64_t>(rcx27))) {
        fun_402090("basic_string::_M_replace_aux", rsi15);
    }
    rdi28 = g40502a;
    ebp29 = *reinterpret_cast<int32_t*>(&r8);
    rbx30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx9) - reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint64_t>(rcx27));
    if (rdi28 == "_create") {
        *reinterpret_cast<int32_t*>(&rax31) = 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax31) + 4) = 0;
    } else {
        rax31 = g40503a;
    }
    if (reinterpret_cast<uint64_t>(rax31) >= reinterpret_cast<uint64_t>(rbx30)) 
        goto addr_4044f5_25;
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm("basic_string::_M_create", rsi15, rdx, 0, rcx9);
    rdi28 = g40502a;
    if (!rcx9) {
        addr_404541_27:
        g405032 = rbx30;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdi28) + reinterpret_cast<uint64_t>(rbx30)) = 0;
        goto v16;
    }
    addr_404528_29:
    rdi32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi28) + reinterpret_cast<unsigned char>(rsi15));
    if (rcx9 == 1) {
        *reinterpret_cast<void***>(rdi32) = *reinterpret_cast<void***>(&ebp29);
        rdi28 = g40502a;
        goto addr_404541_27;
    } else {
        fun_4020b0(rdi32, rdi32);
        rdi28 = g40502a;
        goto addr_404541_27;
    }
    addr_4044f5_25:
    rcx33 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx27) - (reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<unsigned char>(rsi15)));
    if (!rcx33 || rdx == rcx9) {
        addr_404523_32:
        if (!rcx9) 
            goto addr_404541_27; else 
            goto addr_404528_29;
    } else {
        rdi34 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi28) + reinterpret_cast<unsigned char>(rsi15));
        if (rcx33 == 1) {
            eax35 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rdi34) + reinterpret_cast<unsigned char>(rdx));
            *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi34) + reinterpret_cast<unsigned char>(rcx9)) = *reinterpret_cast<signed char*>(&eax35);
            rdi28 = g40502a;
            if (!rcx9) 
                goto addr_404541_27;
            goto addr_404528_29;
        } else {
            fun_4021b0();
            rdi28 = g40502a;
            goto addr_404523_32;
        }
    }
    addr_40435c_17:
    rax36 = fun_402130(rdi26);
    r10_37 = g405010;
    if (r12_10) {
        if (r12_10 == 1) {
            eax38 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r10_37));
            *reinterpret_cast<void***>(rax36) = *reinterpret_cast<void***>(&eax38);
        } else {
            fun_402100(rax36, r10_37, r12_10);
            r10_37 = r10_37;
        }
    }
    if (!0 && r14_11) {
        rdi39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax36) + reinterpret_cast<unsigned char>(r12_10));
        if (r14_11 == 1) {
            eax40 = gfffffffffffffff;
            *reinterpret_cast<void***>(rdi39) = *reinterpret_cast<void***>(&eax40);
            rax41 = v16;
            if (!rax41) 
                goto addr_404404_43;
            goto addr_4043d8_45;
        } else {
            fun_402100(rdi39, 0xfffffffffffffff, r14_11);
            r10_37 = r10_37;
        }
    }
    rax41 = v16;
    if (!rax41) {
        addr_404404_43:
        if (r10_37 == "oc_insert") {
            addr_404419_48:
            g405010 = rax36;
            g405020 = rbp14;
            goto v42;
        } else {
            addr_404409_49:
            fun_402140(r10_37, r10_37);
            goto addr_404419_48;
        }
    } else {
        addr_4043d8_45:
        rdi43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax36) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r12_10) + reinterpret_cast<unsigned char>(r14_11)));
        rsi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(r10_37));
        if (rax41 == 1) {
            eax45 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi44));
            *reinterpret_cast<void***>(rdi43) = *reinterpret_cast<void***>(&eax45);
            if (!reinterpret_cast<int1_t>(r10_37 == "oc_insert")) 
                goto addr_404409_49;
            goto addr_404419_48;
        } else {
            fun_402100(rdi43, rsi44, rax41);
            r10_37 = r10_37;
            goto addr_404404_43;
        }
    }
    addr_404327_4:
    rax24 = g405020;
    goto addr_40432b_11;
    addr_404280_8:
    rbx46 = reinterpret_cast<void**>(0x7ffffffffffffff8);
    addr_40428a_53:
    rax47 = fun_402130(rbx46);
    rsi22 = rsi22;
    rdx = rdx;
    r14_48 = rax47;
    rcx49 = rax47 + 8;
    addr_4041dc_54:
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r14_48) + reinterpret_cast<uint64_t>(rsi22)) = *reinterpret_cast<void***>(rdx);
    if (rbp19 != r12_7) {
        rax50 = r14_48;
        rdx51 = r12_7;
        rcx52 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp19) - reinterpret_cast<unsigned char>(r12_7)) + reinterpret_cast<unsigned char>(r14_48));
        do {
            rax50 = rax50 + 8;
            rdx51 = rdx51 + 8;
            *reinterpret_cast<void***>(rax50 + 0xfffffffffffffff8) = *reinterpret_cast<void***>(rdx51);
        } while (rcx52 != rax50);
        rcx49 = rcx52 + 8;
    }
    if (rbp19 != r15_6) {
        fun_402100(rcx49, rbp19, reinterpret_cast<unsigned char>(r15_6) - reinterpret_cast<unsigned char>(rbp19));
    }
    addr_4041c9_9:
    if (rax21) {
        if (rax21 > 0xfffffffffffffff) {
            rax21 = 0xfffffffffffffff;
        }
        rbx46 = reinterpret_cast<void**>(rax21 * 8);
        goto addr_40428a_53;
    } else {
        *reinterpret_cast<int32_t*>(&rcx49) = 8;
        *reinterpret_cast<int32_t*>(&rcx49 + 4) = 0;
        *reinterpret_cast<int32_t*>(&r14_48) = 0;
        *reinterpret_cast<int32_t*>(&r14_48 + 4) = 0;
        goto addr_4041dc_54;
    }
}

/* std::__throw_bad_alloc() */
int64_t _ZSt17__throw_bad_allocv = 0x402066;

void fun_402060() {
    goto _ZSt17__throw_bad_allocv;
}

int64_t get_nprocs = 0x402036;

int32_t fun_402030() {
    goto get_nprocs;
}

int64_t __gmon_start__ = 0;

void fun_402003() {
    int64_t rax1;

    __asm__("cli ");
    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

void fun_4025fe() {
    unsigned char* rax1;
    unsigned char al2;

    __asm__("out dx, eax");
    __asm__("ror byte [rax-0x39], 0x44");
    *reinterpret_cast<unsigned char*>(&rax1) = reinterpret_cast<unsigned char>(al2 & 64);
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
}

int64_t __cxa_atexit = 0x402116;

struct s7 {
    signed char[184] pad184;
    int64_t fb8;
};

void fun_40260f(int64_t* rdi, void** rsi, int64_t rdx, int64_t* rcx) {
    int1_t less_or_equal5;
    unsigned char al6;
    int32_t eax7;
    struct s5* rdi8;
    int64_t rbp9;
    int64_t v10;
    int64_t* v11;
    int64_t rbp12;
    int64_t rbx13;
    int64_t* rax14;
    int64_t rdx15;
    int64_t rbx16;

    if (less_or_equal5) {
        if (al6 & 48) {
            fun_402090("vector::reserve", rsi);
            eax7 = fun_402040("vector::reserve");
            *reinterpret_cast<int32_t*>(&rdi8) = eax7;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            fun_4020d0(rdi8, rsi);
            fun_402180(0x407251);
            goto __cxa_atexit;
        } else {
            if (!rbp9) {
                (*reinterpret_cast<struct s7**>(v10 - 8))->fb8 = *v11;
            } else {
                fun_402130(rbp12 * 8);
            }
        }
    }
    if (rbx13 != rdi + 1 && reinterpret_cast<uint64_t>(rdx - reinterpret_cast<int64_t>(rdi)) > 16) {
    }
    rax14 = rdi;
    rdx15 = rbx16;
    do {
        ++rax14;
        rdx15 = rdx15 + 8;
        *reinterpret_cast<int64_t*>(rdx15 - 8) = *rax14;
    } while (rcx != rax14);
    if (rdi) 
        goto addr_402b4e_18;
    addr_402b4e_18:
}

void fun_40263e() {
    int64_t rcx1;
    uint1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & zf2) 
        goto 0x402639;
    __asm__("outsb ");
    __asm__("fmul dword [rax-0x77]");
    return;
}

void fun_402646(int64_t rdi, int64_t rsi, int64_t rdx, void* rcx) {
    int64_t* rcx5;
    uint1_t zf6;
    int64_t rax7;

    rcx5 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rcx) - 1);
    if (reinterpret_cast<uint1_t>(!!rcx5) & zf6) {
        if (rsi == rdx) 
            goto 0x4026c4;
        *rcx5 = *reinterpret_cast<int64_t*>(rax7 + rdi);
    } else {
        return;
    }
}

void fun_402691() {
    __asm__("cli ");
    __asm__("outsd ");
}

void fun_402696() {
    int1_t less_or_equal1;
    int32_t eax2;
    int32_t ecx3;
    int64_t rax4;

    __asm__("cli ");
    if (less_or_equal1) {
        __asm__("rcl byte [rax], 0x48");
        if (eax2 != ecx3 + *reinterpret_cast<int32_t*>(rax4 - 0x7d)) 
            goto 0x402690;
    }
}

void fun_4026ca(void** rdi, int32_t esi) {
    int1_t less_or_equal3;

    if (less_or_equal3) {
    }
    fun_402140(rdi);
}

void fun_4026d7() {
    __asm__("outsd ");
}

struct s9 {
    signed char[184] pad184;
    int64_t fb8;
};

struct s8 {
    struct s9* f0;
    int64_t f8;
};

void fun_4026e4() {
    uint64_t* rsp1;
    int1_t less_or_equal2;
    int64_t rbx3;
    int64_t r12_4;
    int32_t r13d5;
    uint64_t r15_6;
    int64_t rax7;
    int64_t rbp8;
    void** rax9;
    uint64_t v10;
    int64_t rbp11;
    int64_t r12_12;
    void** v13;
    void** v14;
    void** rdx15;
    void** r8_16;
    int32_t v17;
    void* rsp18;
    void** rdi19;
    void** rdi20;
    int32_t v21;
    void** rbx22;
    unsigned char al23;
    int32_t r15d24;
    struct s8* rax25;
    struct s8* v26;
    int32_t v27;
    int64_t rcx28;
    int32_t v29;
    int64_t rdx30;
    struct s8* rsi31;

    rsp1 = reinterpret_cast<uint64_t*>(__zero_stack_offset());
    if (!less_or_equal2) {
        while (1) {
            rbx3 = rbx3 + r12_4;
            ++r13d5;
            r15_6 = rax7 / reinterpret_cast<uint64_t>(rbp8);
            rax9 = fun_402130(0xc0, 0xc0);
            _ZN6workerC1Emmm(rax9, r15_6 + v10, rbx3 / reinterpret_cast<uint64_t>(rbp11) - r15_6, r12_12);
            rsp1 = rsp1 - 1 + 1 - 1 + 1;
            if (v13 != v14) {
                *reinterpret_cast<void***>(v13) = rax9;
                v13 = v13 + 8;
                goto addr_40271c_4;
            } else {
                rdx15 = reinterpret_cast<void**>(rsp1 + 10);
                _ZNSt6vectorISt10unique_ptrI6workerSt14default_deleteIS1_EESaIS4_EE17_M_realloc_insertIJS4_EEEvN9__gnu_cxx17__normal_iteratorIPS4_S6_EEDpOT_(rsp1 + 6, v13, rdx15, r12_12, r8_16);
                rsp1 = rsp1 - 1 + 1;
                if (!rax9) {
                    addr_40271c_4:
                    if (r13d5 == v17) 
                        break;
                } else {
                    fun_4021f0(rax9 + 0x68, v13, rdx15, r12_12);
                    rsp18 = reinterpret_cast<void*>(rsp1 - 1 + 1);
                    rdi19 = *reinterpret_cast<void***>(rax9 + 32);
                    if (rdi19) {
                        fun_402140(rdi19);
                        rsp18 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp18) - 8 + 8);
                    }
                    rdi20 = *reinterpret_cast<void***>(rax9);
                    if (rdi20 != rax9 + 16) {
                        fun_402140(rdi20, rdi20);
                        rsp18 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp18) - 8 + 8);
                    }
                    fun_402140(rax9, rax9);
                    rsp1 = reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rsp18) - 8 + 8);
                    if (r13d5 == v21) 
                        break;
                }
                addr_402727_11:
                rax7 = rbx3;
            }
        }
    } else {
        v14 = rbx22;
        if (!(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>((al23 & 48) == 0))) {
            *reinterpret_cast<int32_t*>(&rbx3) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx3) + 4) = 0;
            r13d5 = 0;
            v10 = reinterpret_cast<uint64_t>(static_cast<int64_t>(r15d24));
            goto addr_402727_11;
        }
    }
    rax25 = v26;
    *reinterpret_cast<struct s9**>(*reinterpret_cast<void***>(v13 + 0xfffffffffffffff8) + 0xb8) = rax25->f0;
    if (v27 <= 1) 
        goto 0x402827;
    *reinterpret_cast<int32_t*>(&rcx28) = v29;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx30) = static_cast<int32_t>(rcx28 - 2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = 0;
    rsi31 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(rax25) + rdx30 * 8 + 8);
    while (1) {
        rax25 = reinterpret_cast<struct s8*>(&rax25->f8);
        rax25->f0->fb8 = rax25->f8;
        if (rax25 == rsi31) 
            goto "???";
    }
}

void fun_402828() {
    unsigned char* rax1;
    unsigned char al2;

    __asm__("out dx, eax");
    __asm__("ror byte [rax-0x39], 0x44");
    *reinterpret_cast<unsigned char*>(&rax1) = reinterpret_cast<unsigned char>(al2 & 96);
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
}

void pthread_create();

struct s10 {
    void** f0;
    signed char[63] pad64;
    void** f40;
    signed char[39] pad104;
    void** f68;
    signed char[47] pad152;
    void** f98;
    signed char[7] pad160;
    int64_t fa0;
};

void fun_402835(int64_t* rdi) {
    void* rsp2;
    int1_t less_or_equal3;
    int64_t rbp4;
    void*** r12_5;
    void*** v6;
    void*** rbp7;
    void*** v8;
    void** r13_9;
    void** rax10;
    void** rax11;
    void* rsp12;
    void** rdx13;
    void** rax14;
    void** rsi15;
    void** v16;
    void** v17;
    struct s10* rax18;
    struct s10** v19;
    void** r12_20;
    int32_t eax21;
    void** rdx22;
    void** rdi23;
    int64_t rdi24;
    int64_t* v25;
    void** rbp26;
    void** rbx27;
    void** v28;
    void** rdi29;
    void** v30;
    void* v31;
    void*** r12_32;
    void*** v33;
    void*** rbx34;
    void*** v35;
    void** rbp36;
    int64_t rcx37;
    void** rdi38;
    void** rdi39;
    void** v40;
    int64_t v41;
    uint64_t rbp42;
    int1_t zf43;
    uint64_t rdx44;
    int64_t* rax45;
    int64_t rdx46;
    int64_t rbx47;
    int64_t* rcx48;

    rsp2 = __zero_stack_offset();
    if (less_or_equal3) {
        if (!rbp4) {
            r12_5 = v6;
            rbp7 = v8;
            if (r12_5 != rbp7) {
                do {
                    addr_402929_4:
                    r13_9 = *rbp7;
                    rax10 = fun_402130(8, 8);
                    *reinterpret_cast<void***>(rax10) = reinterpret_cast<void**>(0);
                    rax11 = fun_402130(16, 16);
                    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8 - 8 + 8);
                    *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(pthread_create);
                    *reinterpret_cast<int32_t*>(&rdx13 + 4) = 0;
                    *reinterpret_cast<void***>(rax11) = reinterpret_cast<void**>(0x405120);
                    *reinterpret_cast<void***>(rax11 + 8) = r13_9;
                    fun_402120(rax10, reinterpret_cast<int64_t>(rsp12) + 40, pthread_create);
                    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                    if (rax11) {
                        rax14 = *reinterpret_cast<void***>(rax11);
                        *reinterpret_cast<void***>(rax14 + 8)();
                        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
                    }
                    rsi15 = v16;
                    if (rsi15 != v17) {
                        *reinterpret_cast<void***>(rsi15) = rax10;
                        rsi15 = rsi15 + 8;
                        v16 = rsi15;
                    } else {
                        rdx13 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp2) + 40);
                        _ZNSt6vectorISt10unique_ptrISt6threadSt14default_deleteIS1_EESaIS4_EE17_M_realloc_insertIJS4_EEEvN9__gnu_cxx17__normal_iteratorIPS4_S6_EEDpOT_(reinterpret_cast<int64_t>(rsp2) + 80, rsi15, rdx13);
                        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
                        if (rax10) {
                            if (*reinterpret_cast<void***>(rax10)) 
                                goto 0x402b8f;
                            *reinterpret_cast<int32_t*>(&rsi15) = 8;
                            *reinterpret_cast<int32_t*>(&rsi15 + 4) = 0;
                            rbp7 = rbp7 + 8;
                            fun_402140(rax10, rax10);
                            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
                            if (r12_5 != rbp7) 
                                goto addr_402929_4; else 
                                break;
                        }
                    }
                    rbp7 = rbp7 + 8;
                } while (r12_5 != rbp7);
            }
            rax18 = *v19;
            r12_20 = reinterpret_cast<void**>(&rax18->f40);
            if (!0) {
                eax21 = fun_402170(r12_20, rsi15, rdx13);
                if (eax21) 
                    goto 0x402b94;
                rax18 = *v19;
            }
            rdx22 = rax18->f0;
            rax18->fa0 = 0;
            rax18->f98 = rdx22;
            if (!0) {
                fun_4020f0(r12_20, rsi15, rdx22);
            }
            rdi23 = reinterpret_cast<void**>(&(*v19)->f68);
            fun_402080(rdi23, rsi15, rdx22);
            rdi24 = *v25;
            fun_4021d0(rdi24, rsi15);
            rbp26 = v16;
            rbx27 = v28;
            if (rbp26 != rbx27) {
                do {
                    rdi29 = *reinterpret_cast<void***>(rbx27);
                    if (rdi29) {
                        if (*reinterpret_cast<void***>(rdi29)) 
                            goto 0x402b8f;
                        *reinterpret_cast<int32_t*>(&rsi15) = 8;
                        *reinterpret_cast<int32_t*>(&rsi15 + 4) = 0;
                        fun_402140(rdi29, rdi29);
                    }
                    rbx27 = rbx27 + 8;
                } while (rbp26 != rbx27);
            }
            if (v30) {
                rsi15 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(v31) - reinterpret_cast<unsigned char>(v30));
                fun_402140(v30);
            }
            r12_32 = v33;
            rbx34 = v35;
            if (r12_32 != rbx34) {
                do {
                    rbp36 = *rbx34;
                    if (rbp36) {
                        fun_4021f0(rbp36 + 0x68, rsi15, rdx22, rcx37);
                        rdi38 = *reinterpret_cast<void***>(rbp36 + 32);
                        if (rdi38) {
                            fun_402140(rdi38);
                        }
                        rdi39 = *reinterpret_cast<void***>(rbp36);
                        if (rdi39 != rbp36 + 16) {
                            fun_402140(rdi39, rdi39);
                        }
                        *reinterpret_cast<int32_t*>(&rsi15) = 0xc0;
                        *reinterpret_cast<int32_t*>(&rsi15 + 4) = 0;
                        fun_402140(rbp36, rbp36);
                    }
                    rbx34 = rbx34 + 8;
                } while (r12_32 != rbx34);
            }
            if (v40) {
                fun_402140(v40);
            }
            goto v41;
        } else {
            fun_402130(rbp42 << 3);
        }
    }
    if (!zf43 && rdx44 > 16) {
    }
    rax45 = rdi;
    rdx46 = rbx47;
    do {
        ++rax45;
        rdx46 = rdx46 + 8;
        *reinterpret_cast<int64_t*>(rdx46 - 8) = *rax45;
    } while (rcx48 != rax45);
    if (rdi) 
        goto addr_402b76_47;
    addr_402b76_47:
}

void fun_40285a(int64_t* rdi) {
    int64_t rcx2;
    int64_t rcx3;
    uint1_t zf4;
    int64_t rcx5;
    int1_t zf6;
    int1_t less_or_equal7;
    int64_t rax8;
    int32_t eax9;
    uint64_t rsi10;
    uint64_t rdx11;
    uint64_t rax12;
    uint64_t rdx13;
    int64_t* rbx14;

    rcx2 = rcx3 - 1;
    if (reinterpret_cast<uint1_t>(!!rcx2) & zf4) 
        goto 0x402855;
    __asm__("outsb ");
    rcx5 = rcx2 - 1;
    if (reinterpret_cast<uint1_t>(!!rcx5) & reinterpret_cast<uint1_t>(!zf6)) {
        if (less_or_equal7) {
            __asm__("rcl byte [rax], 0x48");
            if (*reinterpret_cast<int32_t*>(&rcx5) + *reinterpret_cast<int32_t*>(rax8 - 0x7d) != eax9) 
                goto 0x4028a0;
            rsi10 = rdx11 & 0xfffffffffffffffe;
            rax12 = rsi10 * 8;
        }
        if (rsi10 == rdx13) 
            goto 0x4028d4;
        *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbx14) + rax12) = *reinterpret_cast<int64_t*>(rax12 + reinterpret_cast<int64_t>(rdi));
    }
}

void fun_402862(int64_t rdi) {
    int32_t ecx2;

    __asm__("fldcw word [rsp+rax*8+0x48]");
    if (ecx2 == *reinterpret_cast<int32_t*>(&rdi)) 
        goto 0x402b6d;
}

void fun_4028a1() {
    __asm__("cli ");
    __asm__("outsd ");
}

void fun_4028a6() {
    __asm__("cli ");
}

void fun_4028da(void** rdi, int32_t esi) {
    int1_t less_or_equal3;

    if (less_or_equal3) {
    }
    fun_402140(rdi);
}

void fun_4028e7() {
    __asm__("outsd ");
}

void fun_4028ef() {
    int1_t less_or_equal1;

    if (!less_or_equal1) 
        goto 0x402936;
}

int64_t __libc_start_main = 0;

void main();

void fun_402bd3() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x4045c0, 0x404630, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_402c03() {
    __asm__("cli ");
    return;
}

/* completed.0 */
signed char completed_0 = 0;

int64_t fun_402c83() {
    int1_t zf1;
    int64_t rax2;
    int64_t rax3;

    __asm__("cli ");
    zf1 = completed_0 == 0;
    if (!zf1) {
        return rax2;
    } else {
        rax3 = deregister_tm_clones();
        completed_0 = 1;
        return rax3;
    }
}

int64_t fun_402cb3() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void fun_403083(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    __asm__("out dx, eax");
    __asm__("rol byte [rcx+0x56], 0x48");
}

struct s11 {
    signed char[8] pad8;
    int64_t f8;
};

struct s12 {
    signed char[152] pad152;
    int64_t f98;
};

struct s13 {
    signed char[160] pad160;
    int64_t fa0;
};

struct s14 {
    signed char[168] pad168;
    int64_t fa8;
};

struct s15 {
    signed char[176] pad176;
    int64_t fb0;
};

struct s16 {
    signed char[184] pad184;
    int64_t fb8;
};

struct s17 {
    signed char[1] pad1;
    void** f1;
};

struct s18 {
    signed char[56] pad56;
    int32_t f38;
};

struct s19 {
    signed char[60] pad60;
    signed char f3c;
};

struct s20 {
    signed char[16] pad16;
    void** f10;
};

struct s22 {
    signed char[1] pad1;
    void** f1;
};

struct s21 {
    signed char[8] pad8;
    struct s22* f8;
};

struct s24 {
    signed char[1] pad1;
    void** f1;
};

struct s23 {
    signed char[16] pad16;
    struct s24* f10;
};

struct s25 {
    signed char[16] pad16;
    void** f10;
};

struct s26 {
    signed char[32] pad32;
    void** f20;
};

struct s27 {
    signed char[48] pad48;
    void* f30;
};

struct s28 {
    signed char[40] pad40;
    void** f28;
};

struct s29 {
    signed char[32] pad32;
    void** f20;
};

struct s30 {
    signed char[40] pad40;
    void** f28;
};

struct s31 {
    signed char[168] pad168;
    int64_t fa8;
};

struct s32 {
    signed char[8] pad8;
    void** f8;
};

struct s33 {
    signed char[16] pad16;
    void** f10;
};

struct s34 {
    int64_t f0;
    signed char f8;
};

struct s35 {
    signed char[8] pad8;
    void** f8;
};

struct s36 {
    signed char[16] pad16;
    void* f10;
};

struct s37 {
    signed char[8] pad8;
    void* f8;
};

struct s38 {
    signed char[8] pad8;
    void* f8;
};

struct s39 {
    signed char[40] pad40;
    void** f28;
};

struct s40 {
    signed char[48] pad48;
    void** f30;
};

struct s41 {
    signed char[40] pad40;
    void** f28;
};

struct s42 {
    signed char[8] pad8;
    void** f8;
};

struct s43 {
    signed char[8] pad8;
    void** f8;
};

struct s44 {
    signed char[16] pad16;
    void** f10;
};

struct s45 {
    int32_t f0;
    signed char f4;
};

struct s46 {
    signed char[8] pad8;
    void** f8;
};

struct s47 {
    signed char[16] pad16;
    void** f10;
};

struct s48 {
    int32_t f0;
    signed char f4;
};

void fun_4030a6(struct s11* rdi) {
    void** v2;
    int1_t less_or_equal3;
    void* rdi4;
    void*** rsp5;
    struct s12* rbx6;
    struct s13* rbx7;
    struct s14* rbx8;
    struct s15* rbx9;
    struct s16* rbx10;
    uint64_t r13_11;
    void** rax12;
    void** v13;
    void** v14;
    void** rax15;
    struct s17* r14_16;
    struct s17* v17;
    int64_t rax18;
    void** rsi19;
    int64_t rcx20;
    uint64_t r13_21;
    uint64_t rdx22;
    uint64_t rax23;
    uint64_t r13_24;
    uint64_t r8_25;
    void* rdx26;
    uint64_t rax27;
    uint32_t r9d28;
    uint32_t eax29;
    void* rdx30;
    uint32_t eax31;
    uint64_t r13_32;
    uint32_t eax33;
    void** rcx34;
    struct s18* rbx35;
    uint32_t eax36;
    struct s19* rbx37;
    void** rdx38;
    void*** rbx39;
    void** r13_40;
    struct s20* rbx41;
    void** r13_42;
    void** rax43;
    void** r15_44;
    void*** rbx45;
    struct s21* rbx46;
    uint32_t eax47;
    struct s23* rbx48;
    void*** rbx49;
    struct s25* rbx50;
    uint64_t rbp51;
    void** rdi52;
    struct s26* rbx53;
    void** r8_54;
    struct s27* rbx55;
    uint64_t rbp56;
    void** rsi57;
    struct s28* rbx58;
    void** r15_59;
    int64_t rbp60;
    int64_t rbp61;
    void** rax62;
    struct s29* rbx63;
    struct s30* rbx64;
    void** rax65;
    void** rdx66;
    void** rsi67;
    uint64_t r12_68;
    uint64_t rbp69;
    struct s31* rbx70;
    int64_t* rbx71;
    int64_t v72;
    uint64_t r12_73;
    void** rsi74;
    struct s32* rbx75;
    void*** rbx76;
    struct s33* rbx77;
    struct s2* rbx78;
    struct s34* rax79;
    void** rdi80;
    void** rax81;
    void** v82;
    void** rdx83;
    void** v84;
    int64_t rax85;
    void** rdi86;
    uint64_t rcx87;
    int64_t rsi88;
    uint64_t rdx89;
    uint64_t rax90;
    uint64_t r9_91;
    void* rdx92;
    uint64_t rax93;
    uint32_t r10d94;
    uint32_t eax95;
    void* rdx96;
    uint32_t eax97;
    uint64_t rcx98;
    uint32_t eax99;
    struct s2* rax100;
    void** r9_101;
    void** v102;
    void** rcx103;
    void** rsi104;
    struct s35* rbx105;
    void** rdi106;
    void*** rbx107;
    void* r10_108;
    void* rax109;
    struct s36* rbx110;
    struct s2* rbx111;
    void*** rbx112;
    void** rdi113;
    uint32_t eax114;
    void*** rbx115;
    void*** rbx116;
    struct s37* rbx117;
    void** rax118;
    struct s38* rbx119;
    void** rbx120;
    void** rsi121;
    struct s39* rbx122;
    struct s40* rbx123;
    struct s6* v124;
    uint64_t rbp125;
    struct s41* rbx126;
    uint64_t rbp127;
    struct s42* rbx128;
    void** rbx129;
    struct s43* rbx130;
    void*** rbx131;
    struct s44* rbx132;
    struct s2* rbx133;
    struct s45* rax134;
    uint64_t rdx135;
    int32_t esi136;
    uint64_t rcx137;
    int64_t rax138;
    struct s46* rbx139;
    void*** rbx140;
    struct s47* rbx141;
    struct s2* rbx142;
    struct s48* rax143;
    void** rax144;
    uint64_t r13_145;
    void** rax146;
    void** rdi147;
    uint64_t r13_148;
    void** rax149;
    uint64_t rdx150;
    uint64_t r13_151;
    int32_t esi152;
    uint64_t r13_153;
    uint64_t rcx154;
    int64_t rax155;
    void** rax156;
    void** rax157;
    void** rax158;

    v2 = reinterpret_cast<void**>(__return_address());
    __asm__("cli ");
    if (less_or_equal3) {
        __asm__("out dx, eax");
        __asm__("ror byte [rax-0x77], 0x7");
        rdi->f8 = 0;
        rdi4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rdi) + 0x68);
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi4) - 88) = 0;
        *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi4) - 56) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi4) - 48) = 0;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi4) - 44) = 0;
    }
    fun_402160();
    rsp5 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    rbx6->f98 = 0;
    rbx7->fa0 = 0;
    rbx8->fa8 = 0;
    rbx9->fb0 = 0;
    rbx10->fb8 = 0;
    if (r13_11 > 9) 
        goto addr_403139_6;
    rax12 = reinterpret_cast<void**>(rsp5 + 48);
    v13 = rax12;
    v14 = rax12;
    addr_403a76_8:
    rax15 = v13;
    *reinterpret_cast<int32_t*>(&r14_16) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = 0;
    addr_403985_9:
    v17 = r14_16;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax15) + reinterpret_cast<uint64_t>(r14_16)) = 0;
    *reinterpret_cast<int32_t*>(&rax18) = *reinterpret_cast<int32_t*>(&v17);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
    rsi19 = v14;
    *reinterpret_cast<int32_t*>(&rcx20) = static_cast<int32_t>(rax18 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = 0;
    if (r13_21 > 99) {
        addr_4031ed_10:
    } else {
        goto addr_40324b_12;
    }
    do {
        rdx22 = __intrinsic() >> 2;
        rax23 = r13_24 - rdx22 * 100;
        r8_25 = r13_24;
        r13_24 = rdx22;
        *reinterpret_cast<int32_t*>(&rdx26) = *reinterpret_cast<int32_t*>(&rcx20);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = 0;
        rax27 = rax23 + rax23;
        r9d28 = *reinterpret_cast<unsigned char*>(rax27 + reinterpret_cast<int64_t>("0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
        eax29 = *reinterpret_cast<unsigned char*>(rax27 + reinterpret_cast<int64_t>("00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rsi19) + reinterpret_cast<uint64_t>(rdx26)) = *reinterpret_cast<signed char*>(&r9d28);
        *reinterpret_cast<int32_t*>(&rdx30) = static_cast<int32_t>(rcx20 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx20) = *reinterpret_cast<int32_t*>(&rcx20) - 2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = 0;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rsi19) + reinterpret_cast<uint64_t>(rdx30)) = *reinterpret_cast<signed char*>(&eax29);
    } while (r8_25 > 0x270f);
    addr_40324b_12:
    eax31 = static_cast<uint32_t>(r13_24 + 48);
    if (r13_24 > 9) {
        r13_32 = r13_24 + r13_24;
        eax33 = *reinterpret_cast<unsigned char*>(r13_32 + reinterpret_cast<int64_t>("0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
        *reinterpret_cast<void***>(rsi19 + 1) = *reinterpret_cast<void***>(&eax33);
        eax31 = *reinterpret_cast<unsigned char*>(r13_32 + reinterpret_cast<int64_t>("00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
    }
    *reinterpret_cast<void***>(rsi19) = *reinterpret_cast<void***>(&eax31);
    rcx34 = reinterpret_cast<void**>(0x8888888888888889);
    rbx35->f38 = *reinterpret_cast<int32_t*>(&v17) + 1;
    eax36 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(v14) - 48);
    rbx37->f3c = *reinterpret_cast<signed char*>(&eax36);
    rdx38 = reinterpret_cast<void**>((__intrinsic() >> 3) + 1);
    if (*rbx39 == v2) {
        *reinterpret_cast<int32_t*>(&r13_40) = 15;
        *reinterpret_cast<int32_t*>(&r13_40 + 4) = 0;
    } else {
        r13_40 = rbx41->f10;
    }
    if (reinterpret_cast<unsigned char>(rdx38) > reinterpret_cast<unsigned char>(r13_40)) {
        r13_42 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_40) + reinterpret_cast<unsigned char>(r13_40));
        if (reinterpret_cast<unsigned char>(r13_42) < reinterpret_cast<unsigned char>(rdx38)) {
            r13_42 = rdx38;
        }
        rax43 = fun_402130(r13_42 + 1);
        rsp5 = rsp5 - 8 + 8;
        r15_44 = *rbx45;
        rdx38 = reinterpret_cast<void**>(&rbx46->f8->f1);
        if (!rbx46->f8) {
            eax47 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_44));
            *reinterpret_cast<void***>(rax43) = *reinterpret_cast<void***>(&eax47);
        } else {
            if (rdx38) {
                rsi19 = r15_44;
                fun_402100(rax43, rsi19, rdx38);
                rsp5 = rsp5 - 8 + 8;
            }
        }
        if (r15_44 != v2) {
            rsi19 = reinterpret_cast<void**>(&rbx48->f10->f1);
            fun_402140(r15_44, r15_44);
            rsp5 = rsp5 - 8 + 8;
        }
        *rbx49 = rax43;
        rbx50->f10 = r13_42;
    }
    if (rbp51 >> 60) {
        fun_402090("vector::reserve", rsi19);
    }
    rdi52 = rbx53->f20;
    r8_54 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbx55->f30) - reinterpret_cast<unsigned char>(rdi52));
    if (rbp56 > reinterpret_cast<uint64_t>(reinterpret_cast<signed char>(r8_54) >> 3)) {
        rsi57 = rbx58->f28;
        *reinterpret_cast<int32_t*>(&r15_59) = 0;
        *reinterpret_cast<int32_t*>(&r15_59 + 4) = 0;
        if (rbp60) {
            rax62 = fun_402130(rbp61 * 8);
            rdi52 = rbx63->f20;
            rsi57 = rbx64->f28;
            r15_59 = rax62;
        }
        if (rdi52 != rsi57) {
            rax65 = r15_59;
            rdx66 = rdi52;
            rsi67 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rsi57) - reinterpret_cast<unsigned char>(rdi52)) + reinterpret_cast<unsigned char>(r15_59));
            do {
                rax65 = rax65 + 8;
                rdx66 = rdx66 + 8;
                *reinterpret_cast<void***>(rax65 + 0xfffffffffffffff8) = *reinterpret_cast<void***>(rdx66);
            } while (rax65 != rsi67);
        }
        if (rdi52) {
            fun_402140(rdi52, rdi52);
        }
    }
    if (r12_68 < rbp69) 
        goto addr_4033db_40;
    addr_4034bd_41:
    rbx70->fa8 = *rbx71;
    if (v14 != v13) {
        fun_402140(v14, v14);
    }
    goto v72;
    addr_4033db_40:
    while (1) {
        if (r12_73 * 0xeeeeeeeeeeeeeeef <= 0x1111111111111111) {
            rsi74 = rbx75->f8;
            if (reinterpret_cast<uint64_t>(0x7fffffffffffffff - reinterpret_cast<unsigned char>(rsi74)) <= 8) {
                addr_403b4e_46:
                fun_402090("basic_string::append", rsi74);
                rsp5 = rsp5 - 8 + 8;
            } else {
                r15_44 = rsi74 + 9;
                if (v2 == *rbx76) {
                    *reinterpret_cast<int32_t*>(&rdx38) = 15;
                    *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
                } else {
                    rdx38 = rbx77->f10;
                }
                if (reinterpret_cast<unsigned char>(r15_44) > reinterpret_cast<unsigned char>(rdx38)) {
                    *reinterpret_cast<int32_t*>(&r8_54) = 9;
                    *reinterpret_cast<int32_t*>(&r8_54 + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rcx34) = reinterpret_cast<int32_t>("FizzBuzz\n");
                    *reinterpret_cast<int32_t*>(&rcx34 + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rdx38) = 0;
                    *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
                    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm(rbx78, rsi74, 0, "FizzBuzz\n", 9);
                    rsp5 = rsp5 - 8 + 8;
                    goto addr_403480_52;
                } else {
                    rax79 = reinterpret_cast<struct s34*>(reinterpret_cast<unsigned char>(*rbx76) + reinterpret_cast<unsigned char>(rsi74));
                    rax79->f0 = 0x7a7a75427a7a6946;
                    rax79->f8 = 10;
                    goto addr_403480_52;
                }
            }
        } else {
            if (0xcccccccccccccccd * r12_73 <= 0x3333333333333333) 
                goto addr_4037b0_56; else 
                goto addr_403411_57;
        }
        addr_403b58_58:
        rdi80 = r15_44;
        addr_4038d0_59:
        fun_4020b0(rdi80, rdi80);
        rsp5 = rsp5 - 8 + 8;
        rax81 = v82;
        rdx83 = rdx38;
        addr_4038e6_60:
        v84 = rdx83;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax81) + reinterpret_cast<unsigned char>(rdx83)) = 0;
        *reinterpret_cast<int32_t*>(&rax85) = *reinterpret_cast<int32_t*>(&v84);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax85) + 4) = 0;
        rdi86 = v82;
        rcx87 = r12_73;
        *reinterpret_cast<int32_t*>(&rsi88) = static_cast<int32_t>(rax85 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi88) + 4) = 0;
        if (r12_73 > 99) {
            addr_403627_61:
            rcx87 = r12_73;
        } else {
            goto addr_40368b_63;
        }
        do {
            rdx89 = __intrinsic() >> 2;
            rax90 = rcx87 - rdx89 * 100;
            r9_91 = rcx87;
            rcx87 = rdx89;
            *reinterpret_cast<int32_t*>(&rdx92) = *reinterpret_cast<int32_t*>(&rsi88);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx92) + 4) = 0;
            rax93 = rax90 + rax90;
            r10d94 = *reinterpret_cast<unsigned char*>(rax93 + reinterpret_cast<int64_t>("0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
            eax95 = *reinterpret_cast<unsigned char*>(rax93 + reinterpret_cast<int64_t>("00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdi86) + reinterpret_cast<uint64_t>(rdx92)) = *reinterpret_cast<signed char*>(&r10d94);
            *reinterpret_cast<int32_t*>(&rdx96) = static_cast<int32_t>(rsi88 - 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx96) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi88) = *reinterpret_cast<int32_t*>(&rsi88) - 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi88) + 4) = 0;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdi86) + reinterpret_cast<uint64_t>(rdx96)) = *reinterpret_cast<signed char*>(&eax95);
        } while (r9_91 > 0x270f);
        addr_40368b_63:
        eax97 = static_cast<uint32_t>(rcx87 + 48);
        if (rcx87 > 9) {
            rcx98 = rcx87 + rcx87;
            eax99 = *reinterpret_cast<unsigned char*>(rcx98 + reinterpret_cast<uint64_t>("0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
            *reinterpret_cast<void***>(rdi86 + 1) = *reinterpret_cast<void***>(&eax99);
            eax97 = *reinterpret_cast<unsigned char*>(rcx98 + reinterpret_cast<uint64_t>("00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
        }
        *reinterpret_cast<void***>(rdi86) = *reinterpret_cast<void***>(&eax97);
        rax100 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc(rsp5 + 96, v84, 0, 1, 10);
        rsp5 = rsp5 - 8 + 8;
        r9_101 = reinterpret_cast<void**>(rsp5 + 80);
        rdx38 = reinterpret_cast<void**>(&rax100->f10);
        if (rax100->f0 == rdx38) 
            break;
        v102 = rax100->f0;
        rcx103 = rax100->f8;
        *reinterpret_cast<void***>(&rax100->f10) = reinterpret_cast<void**>(0);
        rax100->f8 = reinterpret_cast<void**>(0);
        r8_54 = rcx103;
        rsi104 = rbx105->f8;
        rax100->f0 = rdx38;
        rcx34 = v102;
        rdi106 = *rbx107;
        r10_108 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_54) + reinterpret_cast<unsigned char>(rsi104));
        if (v2 == rdi106) {
            *reinterpret_cast<int32_t*>(&rax109) = 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax109) + 4) = 0;
        } else {
            rax109 = rbx110->f10;
        }
        if (reinterpret_cast<uint64_t>(r10_108) > reinterpret_cast<uint64_t>(rax109)) {
            *reinterpret_cast<int32_t*>(&rdx38) = 0;
            *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
            _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm(rbx111, rsi104, 0, rcx34, r8_54);
            rsp5 = rsp5 - 8 + 8;
            r9_101 = reinterpret_cast<void**>(rsp5 + 80);
            rdi106 = *rbx112;
            r10_108 = r10_108;
        } else {
            if (r8_54) {
                rdi113 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi106) + reinterpret_cast<unsigned char>(rsi104));
                if (r8_54 == 1) {
                    eax114 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx34));
                    *reinterpret_cast<void***>(rdi113) = *reinterpret_cast<void***>(&eax114);
                    rdi106 = *rbx115;
                } else {
                    rdx38 = r8_54;
                    fun_402100(rdi113, rcx34, rdx38);
                    rsp5 = rsp5 - 8 + 8;
                    r9_101 = reinterpret_cast<void**>(rsp5 + 80);
                    rdi106 = *rbx116;
                    r10_108 = r10_108;
                }
            }
        }
        rbx117->f8 = r10_108;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdi106) + reinterpret_cast<uint64_t>(r10_108)) = 0;
        if (v102 != r9_101) {
            fun_402140(v102, v102);
            rsp5 = rsp5 - 8 + 8;
        }
        if (v82 != r15_44) {
            fun_402140(v82, v82);
            rsp5 = rsp5 - 8 + 8;
        }
        addr_40348c_81:
        rax118 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbx119->f8) + reinterpret_cast<uint64_t>(*rbx120));
        rsi121 = rbx122->f28;
        v82 = rax118;
        if (rsi121 == rbx123->f30) {
            rdx38 = reinterpret_cast<void**>(rsp5 + 96);
            ++r12_73;
            _ZNSt6vectorIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaIS9_EE17_M_realloc_insertIJS9_EEEvNS1_IPS9_SB_EEDpOT_(v124, rsi121, rdx38, rcx34, r8_54);
            rsp5 = rsp5 - 8 + 8;
            if (r12_73 < rbp125) 
                continue; else 
                goto addr_40381b_83;
        } else {
            *reinterpret_cast<void***>(rsi121) = rax118;
            ++r12_73;
            rbx126->f28 = rsi121 + 8;
            if (rbp127 > r12_73) 
                continue; else 
                goto addr_4034bd_41;
        }
        addr_403480_52:
        rbx128->f8 = r15_44;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(*rbx129) + reinterpret_cast<unsigned char>(r15_44)) = 0;
        goto addr_40348c_81;
        addr_4037b0_56:
        rsi74 = rbx130->f8;
        if (reinterpret_cast<uint64_t>(0x7fffffffffffffff - reinterpret_cast<unsigned char>(rsi74)) <= 4) 
            goto addr_403b4e_46;
        r15_44 = rsi74 + 5;
        if (v2 == *rbx131) {
            *reinterpret_cast<int32_t*>(&rdx38) = 15;
            *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
        } else {
            rdx38 = rbx132->f10;
        }
        if (reinterpret_cast<unsigned char>(r15_44) > reinterpret_cast<unsigned char>(rdx38)) {
            *reinterpret_cast<int32_t*>(&r8_54) = 5;
            *reinterpret_cast<int32_t*>(&r8_54 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rcx34) = reinterpret_cast<int32_t>("Buzz\n");
            *reinterpret_cast<int32_t*>(&rcx34 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx38) = 0;
            *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
            _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm(rbx133, rsi74, 0, "Buzz\n", 5);
            rsp5 = rsp5 - 8 + 8;
            goto addr_403480_52;
        } else {
            rax134 = reinterpret_cast<struct s45*>(reinterpret_cast<unsigned char>(*rbx131) + reinterpret_cast<unsigned char>(rsi74));
            rax134->f0 = 0x7a7a7542;
            rax134->f4 = 10;
            goto addr_403480_52;
        }
        addr_403411_57:
        rdx38 = reinterpret_cast<void**>(0x5555555555555555);
        if (reinterpret_cast<unsigned char>(0xaaaaaaaaaaaaaaab * r12_73) > reinterpret_cast<unsigned char>(0x5555555555555555)) {
            if (r12_73 <= 9) {
                r15_44 = reinterpret_cast<void**>(rsp5 + 0x70);
                v82 = r15_44;
            } else {
                if (r12_73 <= 99) {
                    r15_44 = reinterpret_cast<void**>(rsp5 + 0x70);
                    *reinterpret_cast<int32_t*>(&rdx38) = 2;
                    *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
                    v82 = r15_44;
                    rdi80 = r15_44;
                    goto addr_4038d0_59;
                } else {
                    if (r12_73 <= 0x3e7) {
                        r15_44 = reinterpret_cast<void**>(rsp5 + 0x70);
                        *reinterpret_cast<int32_t*>(&rdx38) = 3;
                        *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
                        v82 = r15_44;
                        rdi80 = r15_44;
                        goto addr_4038d0_59;
                    } else {
                        rdx135 = r12_73;
                        esi136 = 1;
                        if (r12_73 > 0x270f) {
                            do {
                                rcx137 = rdx135;
                                *reinterpret_cast<int32_t*>(&rax138) = esi136;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax138) + 4) = 0;
                                esi136 = esi136 + 4;
                                rdx135 = __intrinsic() >> 11;
                                if (rcx137 <= 0x1869f) 
                                    goto addr_4035f2_99;
                                if (rcx137 <= 0xf423f) 
                                    goto addr_403930_101;
                                if (rcx137 <= 0x98967f) 
                                    goto addr_403940_103;
                            } while (rcx137 > 0x5f5e0ff);
                            goto addr_403950_105;
                        } else {
                            r15_44 = reinterpret_cast<void**>(rsp5 + 0x70);
                            *reinterpret_cast<int32_t*>(&rdx38) = 4;
                            *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
                            v82 = r15_44;
                            rdi80 = r15_44;
                            goto addr_4038d0_59;
                        }
                    }
                }
            }
        } else {
            rsi74 = rbx139->f8;
            if (reinterpret_cast<uint64_t>(0x7fffffffffffffff - reinterpret_cast<unsigned char>(rsi74)) <= 4) 
                goto addr_403b4e_46;
            r15_44 = rsi74 + 5;
            if (v2 == *rbx140) {
                *reinterpret_cast<int32_t*>(&rdx38) = 15;
                *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
            } else {
                rdx38 = rbx141->f10;
            }
            if (reinterpret_cast<unsigned char>(r15_44) > reinterpret_cast<unsigned char>(rdx38)) {
                *reinterpret_cast<int32_t*>(&r8_54) = 5;
                *reinterpret_cast<int32_t*>(&r8_54 + 4) = 0;
                *reinterpret_cast<int32_t*>(&rcx34) = reinterpret_cast<int32_t>("Fizz\n");
                *reinterpret_cast<int32_t*>(&rcx34 + 4) = 0;
                *reinterpret_cast<int32_t*>(&rdx38) = 0;
                *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
                _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm(rbx142, rsi74, 0, "Fizz\n", 5);
                rsp5 = rsp5 - 8 + 8;
                goto addr_403480_52;
            } else {
                rax143 = reinterpret_cast<struct s48*>(reinterpret_cast<unsigned char>(*rbx140) + reinterpret_cast<unsigned char>(rsi74));
                rax143->f0 = 0x7a7a6946;
                rax143->f4 = 10;
                goto addr_403480_52;
            }
        }
        addr_403a4a_115:
        rax81 = r15_44;
        *reinterpret_cast<int32_t*>(&rdx83) = 1;
        *reinterpret_cast<int32_t*>(&rdx83 + 4) = 0;
        goto addr_4038e6_60;
        addr_4035f2_99:
        *reinterpret_cast<int32_t*>(&rdx38) = esi136;
        *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
        addr_4035f4_116:
        r15_44 = reinterpret_cast<void**>(rsp5 + 0x70);
        v82 = r15_44;
        if (reinterpret_cast<unsigned char>(rdx38) > reinterpret_cast<unsigned char>(15)) {
            rax144 = fun_402130(rdx38 + 1);
            rsp5 = rsp5 - 8 + 8;
            rdx38 = rdx38;
            rdi80 = rax144;
            v82 = rax144;
            goto addr_4038d0_59;
        } else {
            if (!rdx38) {
                v84 = reinterpret_cast<void**>(0);
                rdi86 = r15_44;
                *reinterpret_cast<int32_t*>(&rsi88) = -1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi88) + 4) = 0;
                goto addr_403627_61;
            }
            if (!reinterpret_cast<int1_t>(rdx38 == 1)) 
                goto addr_403b58_58; else 
                goto addr_403a4a_115;
        }
        addr_403930_101:
        *reinterpret_cast<int32_t*>(&rdx38) = static_cast<int32_t>(rax138 + 5);
        *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
        goto addr_4035f4_116;
        addr_403940_103:
        *reinterpret_cast<int32_t*>(&rdx38) = static_cast<int32_t>(rax138 + 6);
        *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
        goto addr_4035f4_116;
        addr_403950_105:
        *reinterpret_cast<int32_t*>(&rdx38) = static_cast<int32_t>(rax138 + 7);
        *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
        goto addr_4035f4_116;
    }
    addr_40381b_83:
    goto addr_4034bd_41;
    addr_403139_6:
    if (r13_145 <= 99) {
        rax146 = reinterpret_cast<void**>(rsp5 + 48);
        *reinterpret_cast<int32_t*>(&r14_16) = 2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = 0;
        v14 = rax146;
        v13 = rax146;
        rdi147 = rax146;
    } else {
        if (r13_148 <= 0x3e7) {
            rax149 = reinterpret_cast<void**>(rsp5 + 48);
            *reinterpret_cast<int32_t*>(&r14_16) = 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = 0;
            v14 = rax149;
            v13 = rax149;
            rdi147 = rax149;
        } else {
            rdx150 = r13_151;
            esi152 = 1;
            if (r13_153 > 0x270f) {
                do {
                    rcx154 = rdx150;
                    *reinterpret_cast<int32_t*>(&rax155) = esi152;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax155) + 4) = 0;
                    esi152 = esi152 + 4;
                    rdx150 = __intrinsic() >> 11;
                    if (rcx154 <= 0x1869f) 
                        goto addr_4031b2_127;
                    if (rcx154 <= 0xf423f) 
                        goto addr_4039e0_129;
                    if (rcx154 <= 0x98967f) 
                        goto addr_4039f0_131;
                } while (rcx154 > 0x5f5e0ff);
                goto addr_403a00_133;
            } else {
                rax156 = reinterpret_cast<void**>(rsp5 + 48);
                *reinterpret_cast<int32_t*>(&r14_16) = 4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = 0;
                v14 = rax156;
                v13 = rax156;
                rdi147 = rax156;
            }
        }
    }
    addr_403976_136:
    fun_4020b0(rdi147);
    rsp5 = rsp5 - 8 + 8;
    rax15 = v14;
    goto addr_403985_9;
    addr_4031b2_127:
    *reinterpret_cast<int32_t*>(&r14_16) = esi152;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = 0;
    addr_4031b5_137:
    rax157 = reinterpret_cast<void**>(rsp5 + 48);
    v13 = rax157;
    v14 = rax157;
    if (reinterpret_cast<uint64_t>(r14_16) > 15) {
        rax158 = fun_402130(&r14_16->f1);
        rsp5 = rsp5 - 8 + 8;
        rdi147 = rax158;
        v14 = rax158;
        goto addr_403976_136;
    } else {
        if (!r14_16) {
            rsi19 = rax157;
            v17 = reinterpret_cast<struct s17*>(0);
            *reinterpret_cast<int32_t*>(&rcx20) = -1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = 0;
            goto addr_4031ed_10;
        }
        if (reinterpret_cast<int1_t>(r14_16 == 1)) 
            goto addr_403a76_8;
    }
    rdi147 = v13;
    goto addr_403976_136;
    addr_4039e0_129:
    *reinterpret_cast<int32_t*>(&r14_16) = static_cast<int32_t>(rax155 + 5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = 0;
    goto addr_4031b5_137;
    addr_4039f0_131:
    *reinterpret_cast<int32_t*>(&r14_16) = static_cast<int32_t>(rax155 + 6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = 0;
    goto addr_4031b5_137;
    addr_403a00_133:
    *reinterpret_cast<int32_t*>(&r14_16) = static_cast<int32_t>(rax155 + 7);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = 0;
    goto addr_4031b5_137;
}

signed char* fun_fffffffff887f832();

void fun_4030dd() {
    int1_t less_or_equal1;
    int1_t less_or_equal2;
    signed char* rax3;

    __asm__("cli ");
    if (!less_or_equal1) 
        goto 0x403127;
    __asm__("fadd st0, st5");
    __asm__("cli ");
    if (!less_or_equal2) 
        goto 0x40312c;
    rax3 = fun_fffffffff887f832();
    *rax3 = reinterpret_cast<signed char>(*rax3 + *reinterpret_cast<signed char*>(&rax3));
    *rax3 = reinterpret_cast<signed char>(*rax3 + *reinterpret_cast<signed char*>(&rax3));
}

void fun_4033a5() {
    __asm__("iretd ");
}

void fun_4033ad() {
    return;
}

void fun_403911() {
    unsigned char ch1;
    signed char ch2;
    signed char al3;
    uint1_t cf4;

    __asm__("cli ");
    __asm__("outsd ");
    ch1 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(ch2 + al3) + cf4);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ch1) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(ch1 == 0))) 
        goto 0x40396d;
    goto 0x4036ee;
}

void fun_403e51() {
    int64_t rax1;
    int64_t rax2;
    int64_t rsi3;
    uint64_t rdi4;
    uint64_t rdx5;
    uint64_t rax6;
    uint64_t rdx7;
    int64_t* rbx8;
    int64_t* rbp9;

    __asm__("cli ");
    __asm__("outsd ");
    rax1 = rax2 + 0x7ffac500;
    *reinterpret_cast<unsigned char*>(&rax1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax1) | 3);
    if (rsi3 != rax1 + 16) 
        goto 0x403e50;
    rdi4 = rdx5 & 0xfffffffffffffffe;
    rax6 = rdi4 * 8;
    if (rdx7 == rdi4) 
        goto 0x403e85;
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbx8) + rax6) = *reinterpret_cast<int64_t*>(rax6 + reinterpret_cast<int64_t>(rbp9));
}

void fun_403ea7() {
    int64_t rcx1;
    int64_t rcx2;
    uint1_t zf3;
    int64_t rax4;
    unsigned char al5;

    rcx1 = rcx2 - 1;
    if (reinterpret_cast<uint1_t>(!!rcx1) & zf3) 
        goto 0x403ea2;
    __asm__("outsb ");
    __asm__("rol esp, cl");
    if (rcx1) 
        goto 0x403e97;
    *reinterpret_cast<unsigned char*>(&rax4) = reinterpret_cast<unsigned char>(al5 & *reinterpret_cast<unsigned char*>(&rcx1));
    *reinterpret_cast<int32_t*>(rax4 - 0x7b) = *reinterpret_cast<int32_t*>(rax4 - 0x7b) + *reinterpret_cast<int32_t*>(&rcx1);
    __asm__("in eax, dx");
    if (!*reinterpret_cast<int32_t*>(rax4 - 0x7b)) {
    }
}

void fun_403ebe(void** rdi, int32_t esi) {
    int1_t less_or_equal3;

    if (less_or_equal3) {
    }
    fun_402140(rdi);
}

void fun_403ecb() {
    __asm__("outsd ");
}

struct s49 {
    signed char[127] pad127;
    int32_t f7f;
};

struct s50 {
    signed char[127] pad127;
    int32_t f7f;
};

struct s51 {
    signed char[16] pad16;
    int64_t f10;
};

void fun_403ed0() {
    struct s49* rdx1;
    struct s50* rdx2;
    struct s51* r14_3;
    int64_t r12_4;
    int64_t v5;

    rdx1->f7f = rdx2->f7f >> 6;
    r14_3->f10 = r12_4;
    goto v5;
}

void fun_404041() {
    int64_t rax1;
    int64_t rax2;
    int64_t rax3;
    int64_t rsi4;
    uint64_t rdi5;
    uint64_t rdx6;
    uint64_t rdi7;
    uint64_t rax8;
    uint64_t rdx9;
    int64_t* r12_10;
    int64_t* rbp11;

    __asm__("cli ");
    __asm__("outsd ");
    rax1 = rax2 + 0x7ac1c400;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(rax1 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(rax1 == 0))) {
        *reinterpret_cast<signed char*>(&rax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax1) + 72);
        *reinterpret_cast<int32_t*>(&rax3) = *reinterpret_cast<int32_t*>(&rax1) + 16;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        if (rsi4 != rax3) 
            goto 0x404040;
        rdi5 = rdx6;
    }
    rdi7 = rdi5 & 0xfffffffffffffffe;
    rax8 = rdi7 * 8;
    if (rdx9 == rdi7) 
        goto 0x404076;
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r12_10) + rax8) = *reinterpret_cast<int64_t*>(rax8 + reinterpret_cast<int64_t>(rbp11));
}

void fun_404098() {
}

void fun_40409d() {
    int64_t rcx1;
    int64_t rax2;
    unsigned char al3;
    unsigned char cl4;
    int32_t ecx5;

    if (rcx1) 
        goto 0x404088;
    *reinterpret_cast<unsigned char*>(&rax2) = reinterpret_cast<unsigned char>(al3 & cl4);
    *reinterpret_cast<int32_t*>(rax2 - 0x7b) = *reinterpret_cast<int32_t*>(rax2 - 0x7b) + ecx5;
    __asm__("in eax, dx");
    if (!*reinterpret_cast<int32_t*>(rax2 - 0x7b)) {
    }
}

void fun_4040af(void** rdi, int32_t esi) {
    int1_t less_or_equal3;

    if (less_or_equal3) {
    }
    fun_402140(rdi);
}

void fun_4040bc() {
    __asm__("outsd ");
}

struct s52 {
    signed char[127] pad127;
    int32_t f7f;
};

struct s53 {
    signed char[127] pad127;
    int32_t f7f;
};

struct s54 {
    signed char[16] pad16;
    int64_t f10;
};

void fun_4040c1() {
    struct s52* rdx1;
    struct s53* rdx2;
    struct s54* r14_3;
    int64_t rbx4;
    int64_t v5;

    rdx1->f7f = rdx2->f7f >> 6;
    r14_3->f10 = rbx4;
    goto v5;
}

void fun_404235() {
}

void fun_40423a() {
    int64_t rcx1;
    uint32_t tmp32_2;
    int64_t rbp3;
    int32_t ecx4;
    uint1_t cf5;
    int64_t rbp6;
    int64_t rbp7;
    uint1_t cf8;
    int64_t rcx9;
    int32_t ecx10;
    int64_t rcx11;
    int64_t rcx12;
    int32_t ecx13;
    int64_t rcx14;

    if (rcx1) 
        goto 0x40422d;
    tmp32_2 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(rbp3 - 0x7b) + ecx4);
    cf5 = reinterpret_cast<uint1_t>(tmp32_2 < *reinterpret_cast<uint32_t*>(rbp6 - 0x7b));
    *reinterpret_cast<uint32_t*>(rbp7 - 0x7b) = tmp32_2;
    __asm__("in al, 0x74");
    cf8 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(rcx9 - 0x75) < ecx10 + cf5);
    *reinterpret_cast<uint32_t*>(rcx11 - 0x75) = *reinterpret_cast<int32_t*>(rcx12 - 0x75) - (ecx13 + cf8);
    if (*reinterpret_cast<uint32_t*>(rcx14 - 0x75) != static_cast<uint32_t>(cf8)) {
    }
}

void fun_40424c(void** rdi, int32_t esi) {
    int1_t less_or_equal3;

    if (less_or_equal3) {
    }
    fun_402140(rdi);
}

void fun_404259() {
    __asm__("outsd ");
}

struct s55 {
    signed char[127] pad127;
    int32_t f7f;
};

struct s56 {
    signed char[127] pad127;
    int32_t f7f;
};

void fun_40425e() {
    struct s55* rdx1;
    struct s56* rdx2;
    unsigned char tmp8_3;
    int64_t rcx4;
    signed char cl5;
    uint1_t cf6;
    int64_t rcx7;
    int64_t rcx8;
    int64_t rax9;
    int64_t rax10;
    signed char cl11;

    rdx1->f7f = rdx2->f7f >> 69;
    tmp8_3 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(rcx4 - 0x77) + cl5);
    cf6 = reinterpret_cast<uint1_t>(tmp8_3 < *reinterpret_cast<unsigned char*>(rcx7 - 0x77));
    *reinterpret_cast<unsigned char*>(rcx8 - 0x77) = tmp8_3;
    *reinterpret_cast<unsigned char*>(rax9 - 0x7d) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax10 - 0x7d) + cl11) + cf6);
}

struct s57 {
    signed char[93] pad93;
    signed char f5d;
};

struct s58 {
    signed char[93] pad93;
    signed char f5d;
};

void fun_40426a() {
    struct s57* rbx1;
    struct s58* rbx2;
    signed char bl3;
    int64_t v4;

    rbx1->f5d = reinterpret_cast<signed char>(rbx2->f5d - bl3);
    goto v4;
}

void _init();

void fun_4045c3(int32_t edi, int64_t rsi, int64_t rdx) {
    int64_t r14_4;
    int64_t r13_5;
    int32_t r12d6;
    int64_t rbx7;
    int64_t rdi8;

    __asm__("cli ");
    r14_4 = rdx;
    r13_5 = rsi;
    r12d6 = edi;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r12d6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x406d48 + rbx7 * 8)(rdi8, r13_5, r14_4);
            ++rbx7;
        } while (2 != rbx7);
    }
    return;
}

void fun_404633() {
    __asm__("cli ");
    return;
}

void fun_40463b() {
    __asm__("cli ");
    return;
}

struct s59 {
    signed char[1] pad1;
    void** f1;
};

void fun_40235e() {
    struct s59** rsp1;
    struct s59* v2;
    void** rsi3;
    struct s59* rdx4;
    void** rax5;
    int64_t rcx6;
    void** rdi7;
    void** v8;
    struct s59* v9;
    void** rax10;
    struct s59* v11;
    uint64_t r13_12;
    int64_t rdx13;
    uint64_t rdx14;
    uint32_t eax15;
    uint32_t edi16;
    void* rdx17;
    int64_t rbx18;
    int64_t rax19;
    int64_t r11_20;
    uint32_t eax21;
    uint32_t r11d22;
    void* rdx23;
    uint32_t eax24;
    int64_t rcx25;
    int64_t rax26;
    uint32_t eax27;
    uint32_t r15d28;
    int64_t rsi29;
    int64_t rax30;
    void* rsp31;
    uint64_t rdx32;
    uint64_t rsi33;
    int64_t rax34;
    uint32_t esi35;

    rsp1 = reinterpret_cast<struct s59**>(__zero_stack_offset());
    v2 = reinterpret_cast<struct s59*>(__return_address());
    goto addr_402360_2;
    addr_4025f0_3:
    fun_4020e0(0x407140, rsi3);
    while (1) {
        addr_4024e0_4:
        rax5 = fun_402130(&rdx4->f1);
        rsp1 = rsp1 - 1 + 1;
        rdx4 = rdx4;
        *reinterpret_cast<uint32_t*>(&rcx6) = *reinterpret_cast<uint32_t*>(&rcx6);
        rdi7 = rax5;
        v8 = rax5;
        v9 = rdx4;
        while (1) {
            fun_4020b0(rdi7, rdi7);
            rsp1 = rsp1 - 1 + 1;
            rax10 = v8;
            *reinterpret_cast<uint32_t*>(&rcx6) = *reinterpret_cast<uint32_t*>(&rcx6);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
            rdx4 = rdx4;
            while (1) {
                v11 = rdx4;
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax10) + reinterpret_cast<uint64_t>(rdx4)) = 0;
                rsi3 = v8;
                if (r13_12 > 99) {
                    do {
                        *reinterpret_cast<uint32_t*>(&rdx13) = *reinterpret_cast<uint32_t*>(&rcx6);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
                        rdx14 = reinterpret_cast<uint64_t>(rdx13 * 0x51eb851f) >> 37;
                        eax15 = *reinterpret_cast<uint32_t*>(&rcx6) - *reinterpret_cast<uint32_t*>(&rdx14) * 100;
                        edi16 = *reinterpret_cast<uint32_t*>(&rcx6);
                        *reinterpret_cast<uint32_t*>(&rcx6) = *reinterpret_cast<uint32_t*>(&rdx14);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&rdx17) = *reinterpret_cast<uint32_t*>(&rbx18);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&rax19) = eax15 + eax15;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0;
                        *reinterpret_cast<int32_t*>(&r11_20) = static_cast<int32_t>(rax19 + 1);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_20) + 4) = 0;
                        eax21 = *reinterpret_cast<unsigned char*>(rax19 + reinterpret_cast<int64_t>("00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
                        r11d22 = *reinterpret_cast<unsigned char*>(r11_20 + reinterpret_cast<int64_t>("00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rsi3) + reinterpret_cast<uint64_t>(rdx17)) = *reinterpret_cast<signed char*>(&r11d22);
                        *reinterpret_cast<int32_t*>(&rdx23) = static_cast<int32_t>(rbx18 - 1);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&rbx18) = *reinterpret_cast<uint32_t*>(&rbx18) - 2;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx18) + 4) = 0;
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rsi3) + reinterpret_cast<uint64_t>(rdx23)) = *reinterpret_cast<signed char*>(&eax21);
                    } while (edi16 > 0x270f);
                }
                eax24 = static_cast<uint32_t>(rcx6 + 48);
                if (*reinterpret_cast<uint32_t*>(&rcx6) > 9) {
                    *reinterpret_cast<uint32_t*>(&rcx25) = *reinterpret_cast<uint32_t*>(&rcx6) + *reinterpret_cast<uint32_t*>(&rcx6);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rax26) = static_cast<int32_t>(rcx25 + 1);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
                    eax27 = *reinterpret_cast<unsigned char*>(rax26 + reinterpret_cast<int64_t>("00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
                    *reinterpret_cast<void***>(rsi3 + 1) = *reinterpret_cast<void***>(&eax27);
                    eax24 = *reinterpret_cast<unsigned char*>(rcx25 + reinterpret_cast<int64_t>("00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"));
                }
                *reinterpret_cast<void***>(rsi3) = *reinterpret_cast<void***>(&eax24);
                if (v8 != rsp1 + 12) {
                    rsi3 = reinterpret_cast<void**>(&v9->f1);
                    fun_402140(v8, v8);
                    rsp1 = rsp1 - 1 + 1;
                }
                if (reinterpret_cast<uint64_t>(v2) < reinterpret_cast<uint64_t>(v11)) 
                    goto addr_4025f0_3;
                if (r15d28 * 0xeeeeeeef <= 0x11111111) {
                    fun_402150(0x407140, "FizzBuzz\n", 9);
                    rsp1 = rsp1 - 1 + 1;
                } else {
                    if (r15d28 * 0xcccccccd <= 0x33333333) {
                        fun_402150(0x407140, "Buzz\n", 5);
                        rsp1 = rsp1 - 1 + 1;
                    } else {
                        if (r15d28 * 0xaaaaaaab > 0x55555555) {
                            *reinterpret_cast<uint32_t*>(&rsi29) = r15d28;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = 0;
                            rax30 = fun_4021e0(0x407140, rsi29);
                            rsp31 = reinterpret_cast<void*>(rsp1 - 1 + 1);
                            fun_402150(rax30, reinterpret_cast<int64_t>(rsp31) + 80, 1);
                            rsp1 = reinterpret_cast<struct s59**>(reinterpret_cast<int64_t>(rsp31) - 8 + 8);
                        } else {
                            fun_402150(0x407140, "Fizz\n", 5);
                            rsp1 = rsp1 - 1 + 1;
                        }
                    }
                }
                ++r13_12;
                *reinterpret_cast<uint32_t*>(&rcx6) = *reinterpret_cast<uint32_t*>(&r13_12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
                r15d28 = *reinterpret_cast<uint32_t*>(&r13_12);
                if (r13_12 > 9) {
                    if (*reinterpret_cast<uint32_t*>(&r13_12) <= 99) {
                        *reinterpret_cast<uint32_t*>(&rbx18) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx18) + 4) = 0;
                    } else {
                        if (*reinterpret_cast<uint32_t*>(&r13_12) <= 0x3e7) {
                            *reinterpret_cast<uint32_t*>(&rbx18) = 1;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx18) + 4) = 0;
                            goto addr_402560_26;
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&r13_12) <= 0x270f) {
                                *reinterpret_cast<uint32_t*>(&rbx18) = 1;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx18) + 4) = 0;
                                goto addr_402570_29;
                            } else {
                                rdx32 = r13_12;
                                *reinterpret_cast<uint32_t*>(&rbx18) = 1;
                                do {
                                    rsi33 = rdx32;
                                    *reinterpret_cast<uint32_t*>(&rax34) = *reinterpret_cast<uint32_t*>(&rbx18);
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax34) + 4) = 0;
                                    *reinterpret_cast<uint32_t*>(&rbx18) = *reinterpret_cast<uint32_t*>(&rbx18) + 4;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx18) + 4) = 0;
                                    rdx32 = __intrinsic() >> 11;
                                    if (rsi33 <= 0x1869f) 
                                        goto addr_40239c_32;
                                    addr_402360_2:
                                    if (*reinterpret_cast<uint32_t*>(&rdx32) <= 99) 
                                        break;
                                    if (*reinterpret_cast<uint32_t*>(&rdx32) <= 0x3e7) 
                                        goto addr_402560_26;
                                } while (*reinterpret_cast<uint32_t*>(&rdx32) > 0x270f);
                                goto addr_402570_29;
                            }
                        }
                    }
                } else {
                    *reinterpret_cast<uint32_t*>(&rbx18) = 0;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx18) + 4) = 0;
                    v8 = reinterpret_cast<void**>(rsp1 + 12);
                    goto addr_4025da_36;
                }
                esi35 = static_cast<uint32_t>(rbx18 + 1);
                addr_4023a1_38:
                *reinterpret_cast<uint32_t*>(&rdx4) = esi35;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
                v8 = reinterpret_cast<void**>(rsp1 + 12);
                if (esi35 > 15) 
                    goto addr_4024e0_4;
                rax10 = reinterpret_cast<void**>(rsp1 + 12);
                if (!rdx4) 
                    continue;
                if (!reinterpret_cast<int1_t>(rdx4 == 1)) 
                    break;
                addr_4025da_36:
                rax10 = v8;
                *reinterpret_cast<signed char*>(&v9) = 45;
                *reinterpret_cast<uint32_t*>(&rdx4) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
                continue;
                addr_402560_26:
                esi35 = static_cast<uint32_t>(rbx18 + 2);
                *reinterpret_cast<uint32_t*>(&rbx18) = *reinterpret_cast<uint32_t*>(&rbx18) + 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx18) + 4) = 0;
                goto addr_4023a1_38;
                addr_402570_29:
                esi35 = static_cast<uint32_t>(rbx18 + 3);
                *reinterpret_cast<uint32_t*>(&rbx18) = *reinterpret_cast<uint32_t*>(&rbx18) + 2;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx18) + 4) = 0;
                goto addr_4023a1_38;
                addr_40239c_32:
                esi35 = *reinterpret_cast<uint32_t*>(&rbx18);
                *reinterpret_cast<uint32_t*>(&rbx18) = static_cast<uint32_t>(rax34 + 3);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx18) + 4) = 0;
                goto addr_4023a1_38;
            }
            rdi7 = reinterpret_cast<void**>(rsp1 + 12);
        }
    }
}

void fun_402649(int64_t rdi) {
    int64_t rcx2;

    if (rcx2 == rdi) 
        goto 0x402b45;
}

/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1}, worker*> > >::~_State_impl() */
void _ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJZ4mainEUlP6workerE_S4_EEEEED1Ev(int64_t* rdi) {
    *rdi = 0x405120;
    goto fun_402070;
}

void fun_4033ae() {
    int64_t rax1;
    unsigned char al2;
    unsigned char ch3;
    void* rcx4;
    int64_t rcx5;
    void* rcx6;
    int64_t rcx7;
    int32_t ecx8;
    int64_t rcx9;
    unsigned char ch10;
    unsigned char cl11;

    __asm__("int1 ");
    *reinterpret_cast<unsigned char*>(&rax1) = reinterpret_cast<unsigned char>(al2 & ch3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx4) + rcx5 * 4 + 0x7b) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx6) + rcx7 * 4 + 0x7b) + ecx8;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx9) + 1) = reinterpret_cast<unsigned char>(ch10 ^ *reinterpret_cast<unsigned char*>(&rax1));
    __asm__("cli ");
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx9) + 1) == 0))) 
        goto 0x4033fd;
    *reinterpret_cast<unsigned char*>(rcx9 + rax1 - 27) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rcx9 + rax1 - 27) & cl11);
}

int64_t g407010 = 0;

void fun_402036() {
    goto g407010;
}

void fun_402146() {
    goto 0x402020;
}

void fun_402156() {
    goto 0x402020;
}

void fun_402136() {
    goto 0x402020;
}

void fun_4021f6() {
    goto 0x402020;
}

void fun_402176() {
    goto 0x402020;
}

void fun_4020f6() {
    goto 0x402020;
}

void fun_402086() {
    goto 0x402020;
}

void fun_4021d6() {
    goto 0x402020;
}

/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1}, worker*> > >::~_State_impl() */
void _ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJZ4mainEUlP6workerE_S4_EEEEED0Ev(int64_t* rdi) {
    *rdi = 0x405120;
    fun_402070();
    goto fun_402140;
}

void fun_402196() {
    goto 0x402020;
}

void fun_4020a6() {
    goto 0x402020;
}

void fun_402106() {
    goto 0x402020;
}

void fun_4021b6() {
    goto 0x402020;
}

void fun_4020b6() {
    goto 0x402020;
}

void fun_4021a6() {
    goto 0x402020;
}

void fun_4020e6() {
    goto 0x402020;
}

void fun_4021e6() {
    goto 0x402020;
}

void fun_402096() {
    goto 0x402020;
}

/* std::ios_base::Init::~Init() */
int64_t _ZNSt8ios_base4InitD1Ev = 0x402206;

/* std::ios_base::Init::~Init() */
void _ZNSt8ios_base4InitD1Ev() {
    goto _ZNSt8ios_base4InitD1Ev;
}

void fun_402126() {
    goto 0x402020;
}

void fun_402046() {
    goto 0x402020;
}

void fun_4020d6() {
    goto 0x402020;
}

void fun_402186() {
    goto 0x402020;
}

void fun_402116() {
    goto 0x402020;
}

void fun_402076() {
    goto 0x402020;
}

void fun_402056() {
    goto 0x402020;
}

void fun_402166() {
    goto 0x402020;
}

void fun_402066() {
    goto 0x402020;
}

int64_t __pthread_key_create = 0x4021c6;

void __pthread_key_create() {
    goto __pthread_key_create;
}

int64_t pthread_create = 0x4020c6;

void pthread_create() {
    goto pthread_create;
}

void fun_402206() {
    goto 0x402020;
}

void fun_4021c6() {
    goto 0x402020;
}

void fun_4020c6() {
    goto 0x402020;
}

void main() {
    int64_t r15_1;
    int32_t ebx2;
    int32_t eax3;
    void* rsp4;
    int64_t rbp5;
    uint64_t r12_6;
    uint64_t rax7;
    uint64_t rdx8;
    uint64_t rax9;
    uint64_t rax10;
    int64_t r15_11;
    void** v12;

    *reinterpret_cast<int32_t*>(&r15_1) = 0x3e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_1) + 4) = 0;
    ebx2 = 4;
    eax3 = fun_402030();
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x78 - 8 + 8);
    rbp5 = eax3;
    do {
        r12_6 = reinterpret_cast<uint64_t>(r15_1 + r15_1 * 2);
        fun_4021a0();
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        rax7 = __intrinsic() >> 3;
        rdx8 = rax7 % rbp5;
        if (rax7 / rbp5 > 0x10000) 
            break;
        r12_6 = r12_6 + r12_6;
        rax9 = __intrinsic() >> 3;
        rdx8 = rax9 % rbp5;
        if (rax9 / rbp5 > 0x10000) 
            break;
        r12_6 = reinterpret_cast<uint64_t>(r15_1 + r15_1 * 8);
        rax10 = __intrinsic() >> 3;
        rdx8 = rax10 % rbp5;
        if (rax10 / rbp5 > 0x10000) 
            break;
        r15_11 = r15_1 + r15_1 * 4;
        r15_1 = r15_11 + r15_11;
        --ebx2;
    } while (ebx2);
    goto addr_4022d0_6;
    addr_4022d6_7:
    _ZNSt7__cxx119to_stringEm(reinterpret_cast<int64_t>(rsp4) + 80, r12_6, rdx8);
    if (v12 != reinterpret_cast<int64_t>(rsp4) - 8 + 8 + 96) {
        fun_402140(v12, v12);
    }
    if (1) 
        goto 0x4024cd;
    addr_4022d0_6:
    *reinterpret_cast<int32_t*>(&r12_6) = 0x895440;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = 0;
    goto addr_4022d6_7;
}
