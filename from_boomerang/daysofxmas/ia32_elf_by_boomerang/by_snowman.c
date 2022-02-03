
void fun_80482ce();

void call_gmon_start() {
    int32_t eax1;
    int32_t eax2;

    fun_80482ce();
    eax1 = *reinterpret_cast<int32_t*>(eax2 + 0x153a + 20);
    if (eax1) {
        eax1();
    }
    return;
}

int32_t __JCR_END__ = 0;

int32_t __gmon_start__(int32_t a1);

int32_t frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && (eax1 = 0, !1)) {
        eax1 = __gmon_start__(0x8049804);
    }
    return eax1;
}

int32_t __CTOR_LIST__ = -1;

int32_t __do_global_ctors_aux() {
    int32_t v1;
    int32_t edx2;
    int32_t eax3;
    int32_t* ebx4;

    v1 = edx2;
    eax3 = __CTOR_LIST__;
    ebx4 = reinterpret_cast<int32_t*>(0x80497f4);
    if (eax3 != -1) {
        do {
            --ebx4;
            eax3();
            eax3 = *ebx4;
        } while (eax3 != -1);
    }
    return v1;
}

struct s0 {
    signed char f0;
    signed char[30] pad31;
    signed char f1f;
};

int32_t stdout = 0;

struct s0* _IO_putc(int32_t a1, int32_t a2);

struct s0* main(struct s0* ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    struct s0* v6;
    struct s0* v7;
    struct s0* v8;
    struct s0* v9;
    struct s0* eax10;
    int32_t eax11;
    int32_t v12;
    struct s0* eax13;
    signed char dl14;
    struct s0* ebx15;
    struct s0* v16;
    struct s0* eax17;
    struct s0* eax18;
    struct s0* eax19;
    struct s0* edx20;
    struct s0* eax21;
    struct s0* eax22;
    struct s0* eax23;
    struct s0* eax24;
    struct s0* eax25;

    if (reinterpret_cast<int32_t>(a2) <= 1) {
        if (reinterpret_cast<int32_t>(a2) < 0) {
            if (reinterpret_cast<int32_t>(a2) < -72) {
                v6 = a4;
                v7 = reinterpret_cast<struct s0*>("@n'+,#'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l,+,/n{n+,/+#n+,/#;#q#n+,/+k#;*+,/'r :'d*'3,}{w+K w'K:'+}e#';dq#'l q#'+d'K#!/+k#;q#'r}eKK#}w'r}eKK{nl]'/#;#q#n'){)#}w'){){nl]'/+#n';d}rw' i;# ){nl]!/n{n#'; r{#w'r nc{nl]'/#{l,+'K {rw' iK{;[{nl]'/w#q#n'wk nw' iwk{KK{nl]!/w{%'l##w#' i; :{nl]'/*{q#'ld;r'}{nlwb!/*de}'c ;;{nl'-{}rw]'/+,}##'*}#nc,',#nw]'/+kd'+e}+;#'rdq#w! nr'/ ') }+}{rl#'{n' ')# }'+}##(!!/");
                v8 = a2;
                v9 = a3;
            } else {
                if (reinterpret_cast<int32_t>(a2) >= -50) {
                    v6 = ecx;
                    v7 = reinterpret_cast<struct s0*>(&a4->pad31);
                    v8 = a3;
                    eax10 = a2;
                    if (a4->f0 == 47) {
                        eax10 = reinterpret_cast<struct s0*>(&a2->pad31);
                    }
                    v9 = eax10;
                } else {
                    if (a3 == static_cast<int32_t>(a4->f0)) {
                        eax11 = a4->f1f;
                        v12 = stdout;
                        eax13 = _IO_putc(eax11, v12);
                        goto addr_80483bf_11;
                    } else {
                        v6 = a2;
                        v7 = reinterpret_cast<struct s0*>(&a4->pad31);
                        v8 = a3;
                        v9 = reinterpret_cast<struct s0*>(0xbf);
                    }
                }
            }
        } else {
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(a2) < 0) | reinterpret_cast<uint1_t>(a2 == 0)) {
                dl14 = a4->f0;
                ebx15 = reinterpret_cast<struct s0*>(0);
                if (dl14 == 47 || (eax17 = main(ecx, 0xc3, static_cast<int32_t>(dl14), "!ek;dc i@bK'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry", v16), eax19 = main(ecx, 0, eax17, &a4->pad31, eax18), !!eax19)) {
                    ebx15 = reinterpret_cast<struct s0*>(1);
                    goto addr_8048395_16;
                }
            } else {
                v6 = edx20;
                v7 = reinterpret_cast<struct s0*>("%s");
                v8 = reinterpret_cast<struct s0*>(2);
                goto addr_80483b8_18;
            }
        }
    } else {
        if (reinterpret_cast<int32_t>(a2) <= 2) {
            eax22 = main(ecx, 0xaa, 0, &a4->pad31, eax21);
            eax23 = main(ecx, 0xa9, 1 - reinterpret_cast<int32_t>(a3), reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(a4), eax21);
            eax24 = main(ecx, 0xb1, 0xf3, reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(a4), eax21);
        }
        if (reinterpret_cast<int32_t>(a2) < reinterpret_cast<int32_t>(a3)) {
            eax24 = main(ecx, &a2->pad31, a3, a4, eax24);
        }
        eax25 = main(ecx, 0xa2, reinterpret_cast<int32_t>(a2) - 27, a4, eax24);
        if (!eax25) 
            goto addr_8048390_24;
        if (a2 == 2) 
            goto addr_804839f_26; else 
            goto addr_8048390_24;
    }
    addr_80483ba_27:
    eax13 = main(ecx, v9, v8, v7, v6);
    addr_80483bf_11:
    ebx15 = eax13;
    addr_8048395_16:
    return ebx15;
    addr_80483b8_18:
    v9 = reinterpret_cast<struct s0*>(2);
    goto addr_80483ba_27;
    addr_8048390_24:
    ebx15 = reinterpret_cast<struct s0*>(16);
    goto addr_8048395_16;
    addr_804839f_26:
    if (reinterpret_cast<int32_t>(a3) <= 12) {
        v6 = eax25;
        v7 = reinterpret_cast<struct s0*>("%s %d %d\n");
        v8 = reinterpret_cast<struct s0*>(&a3->pad31);
        goto addr_80483b8_18;
    } else {
        ebx15 = reinterpret_cast<struct s0*>(9);
        goto addr_8048395_16;
    }
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80482ce() {
    int32_t eax1;
    struct s1* ebp2;

    eax1 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x153a + 20);
    if (eax1) {
        eax1();
    }
    goto ebp2->f4;
}

int32_t _IO_putc = 0x8048296;

struct s0* _IO_putc(int32_t a1, int32_t a2) {
    goto _IO_putc;
}

void __do_global_dtors_aux();

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80484fa(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s2* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

/* completed.1 */
signed char completed_1 = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x8049800);

void __do_global_dtors_aux() {
    int1_t zf1;
    int32_t* eax2;
    int32_t edx3;

    zf1 = completed_1 == 0;
    if (zf1) {
        eax2 = p_0;
        edx3 = *eax2;
        if (edx3) {
            do {
                p_0 = eax2 + 1;
                edx3();
                eax2 = p_0;
                edx3 = *eax2;
            } while (edx3);
        }
        completed_1 = 1;
    }
    return;
}

int32_t __libc_start_main = 0x8048286;

void __libc_start_main(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t _init() {
    int32_t eax1;

    call_gmon_start();
    frame_dummy();
    eax1 = __do_global_ctors_aux();
    return eax1;
}

void fun_8048322() {
}

void fun_804842a() {
}

void fun_804846d() {
}

void _fini() {
    int32_t edx1;
    int32_t ebx2;
    int32_t ebp3;

    fun_80484fa(edx1, ebx2, ebp3, __return_address());
}

void fun_804827c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_80483d9() {
}

int32_t g8049810 = 0;

void fun_8048286() {
    goto g8049810;
}

void fun_8048296() {
    goto 0x8048270;
}

void fun_80483c6() {
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    __libc_start_main(main, __return_address(), esp1, _init, _fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}
