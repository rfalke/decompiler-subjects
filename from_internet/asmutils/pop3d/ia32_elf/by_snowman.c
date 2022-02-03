
struct s0 {
    signed char[134520540] pad134520540;
    signed char f8049edc;
};

int32_t g805a105;

signed char* g805a130;

signed char* g805a148;

struct s0* g805a160;

signed char g8048cc7 = 0;

int32_t fun_8048292(signed char* ecx);

signed char* g805a10d;

int32_t fun_8048279(signed char* ecx);

signed char g8048cc6 = 0;

struct s0* fun_80484bf() {
    signed char* edi1;
    signed char* ecx2;
    signed char* ebx3;
    signed char* tmp32_4;
    signed char* edx5;
    int1_t zf6;
    int1_t zf7;
    struct s0* eax8;
    int1_t zf9;

    __asm__("int 0x80");
    g805a105 = 5;
    if (1) {
        g805a130 = reinterpret_cast<signed char*>(0);
        g805a148 = reinterpret_cast<signed char*>(0);
        edi1 = "\n\nFrom+OK\n+OK  octets\n+OK User name accepted, password please\n+OK Sayonara!\n+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n";
        while (g805a160 = reinterpret_cast<struct s0*>(3), !0) {
            __asm__("popad ");
            ecx2 = reinterpret_cast<signed char*>(0x8049edc);
            ebx3 = reinterpret_cast<signed char*>(0x8049edc);
            tmp32_4 = &g805a160->f8049edc;
            edx5 = tmp32_4;
            while (1) {
                if (*ecx2 != *edi1) {
                    addr_804858e_6:
                    edi1 = "\n\nFrom+OK\n+OK  octets\n+OK User name accepted, password please\n+OK Sayonara!\n+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n";
                    ecx2 = ebx3;
                    ++g805a148;
                    ++ebx3;
                    goto addr_804859c_7;
                } else {
                    ++edi1;
                    if (edi1 != "+OK\n+OK  octets\n+OK User name accepted, password please\n+OK Sayonara!\n+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n") {
                        addr_804859c_7:
                        ++ecx2;
                        if (ecx2 == edx5) 
                            break;
                    } else {
                        ++g805a130;
                        zf6 = g8048cc7 == 0;
                        if (!zf6) {
                            __asm__("pushad ");
                            fun_8048292(ecx2);
                            edx5 = reinterpret_cast<signed char*>(1);
                            ebx3 = g805a10d;
                            __asm__("int 0x80");
                            fun_8048279(0x80480ff);
                            __asm__("popad ");
                            g805a148 = reinterpret_cast<signed char*>(0);
                            goto addr_804858e_6;
                        }
                    }
                }
            }
        }
        __asm__("popad ");
        ++g805a130;
        zf7 = g8048cc7 == 0;
        if (!zf7) 
            goto addr_80485b7_13;
    } else {
        eax8 = reinterpret_cast<struct s0*>(4);
        __asm__("int 0x80");
        goto addr_8048b3a_15;
    }
    zf9 = g8048cc6 == 0;
    if (zf9) {
        __asm__("int 0x80");
        fun_8048292("+OK  octets\n+OK User name accepted, password please\n+OK Sayonara!\n+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n");
        __asm__("int 0x80");
        fun_8048279(0x80480ff);
    } else {
        g8048cc6 = 0;
        return 3;
    }
    addr_8048649_19:
    eax8 = reinterpret_cast<struct s0*>(6);
    __asm__("int 0x80");
    addr_8048b3a_15:
    return eax8;
    addr_80485b7_13:
    fun_8048292(0x8049edc);
    __asm__("int 0x80");
    fun_8048279(0x80480ff);
    __asm__("int 0x80");
    g8048cc7 = 0;
    goto addr_8048649_19;
}

int32_t g80480fb = 10;

int32_t fun_8048292(signed char* ecx) {
    signed char* edi2;
    uint32_t edx3;
    uint32_t eax4;

    __asm__("pushad ");
    edi2 = reinterpret_cast<signed char*>(0x805a12f);
    do {
        edx3 = eax4 % g80480fb;
        eax4 = eax4 / g80480fb;
        *edi2 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx3) + 48);
        --edi2;
    } while (eax4);
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

int32_t fun_8048279(signed char* ecx) {
    fun_8048292(ecx);
    __asm__("int 0x80");
    return 4;
}

int32_t fun_80482d6() {
    __asm__("pushad ");
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

int32_t g805a0f9;

int32_t g805a109;

signed char g805a0ed;

signed char g8048cc8 = 0;

signed char* g805a134;

signed char* g805a138;

signed char* g805a13c;

signed char* g805a144;

signed char* g8048cc9;

signed char* g805a158;

void* g805a140;

void* g805a101;

void* g805a0fd;

signed char g805a0ee;

struct s1 {
    signed char f0;
    signed char f1;
};

signed char* g8048ec8;

struct s0* fun_80482ee(int32_t ecx) {
    int32_t esi2;
    signed char* edi3;
    int32_t ecx4;
    int32_t eax5;
    int32_t ebx6;
    signed char* edi7;
    int32_t ecx8;
    int1_t less9;
    int1_t zf10;
    signed char* edi11;
    signed char* esi12;
    int32_t ecx13;
    int32_t ecx14;
    signed char* edi15;
    signed char* esi16;
    struct s0* eax17;
    signed char* edi18;
    signed char* esi19;
    int32_t ecx20;
    signed char* edi21;
    signed char* ecx22;
    signed char* ebx23;
    signed char* tmp32_24;
    signed char* edx25;
    int1_t zf26;
    int1_t zf27;
    signed char* edi28;
    signed char* esi29;
    int32_t ecx30;
    signed char* edi31;
    signed char* esi32;
    int32_t ecx33;
    signed char* edi34;
    signed char* esi35;
    int32_t ecx36;
    int1_t less_or_equal37;
    int1_t less38;
    int32_t edx39;
    signed char* ecx40;
    signed char* tmp32_41;
    signed char* edi42;
    int32_t eax43;
    int32_t eax44;
    signed char* eax45;
    int1_t less46;
    int1_t less47;
    signed char* edi48;
    signed char* ecx49;
    signed char* ebx50;
    signed char* tmp32_51;
    signed char* edx52;
    void* ebp53;
    int1_t zf54;
    signed char* eax55;
    int1_t zf56;
    signed char* tmp32_57;
    int1_t zf58;
    signed char* eax59;
    signed char* tmp32_60;
    signed char* eax61;
    signed char* tmp32_62;
    int1_t zf63;
    int1_t zf64;
    signed char* eax65;
    void* eax66;
    int1_t zf67;
    int1_t less_or_equal68;
    void* tmp32_69;
    void* eax70;
    int1_t zf71;
    struct s0* eax72;
    signed char* tmp32_73;
    signed char* tmp32_74;
    signed char* tmp32_75;
    signed char* eax76;
    signed char* tmp32_77;
    int1_t zf78;
    int1_t zf79;
    signed char* edi80;
    signed char* esi81;
    int32_t ecx82;
    signed char* esi83;
    struct s1* edi84;
    int32_t ecx85;
    signed char* ebx86;
    signed char* ecx87;
    signed char* ecx88;
    signed char* esi89;
    signed char* edi90;
    int32_t ecx91;

    esi2 = 0x8049edc;
    edi3 = reinterpret_cast<signed char*>(0x8059edb);
    ecx4 = 0x100;
    do {
        __asm__("lodsb ");
        if (0) 
            break;
        if (0) 
            goto addr_804830c_4;
        *edi3 = 0;
        ++edi3;
        ++esi2;
        --ecx4;
    } while (ecx4);
    goto addr_804830c_4;
    eax5 = esi2 - 0x8049edc - 1;
    g805a0f9 = eax5;
    ebx6 = esi2;
    edi7 = reinterpret_cast<signed char*>(0x8059ee5);
    ecx8 = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx8) + 1) = 1;
    do {
        __asm__("lodsb ");
        if (*reinterpret_cast<signed char*>(&eax5) == 32) 
            break;
        if (*reinterpret_cast<signed char*>(&eax5) == 10) 
            goto addr_8048343_12;
        *edi7 = *reinterpret_cast<signed char*>(&eax5);
        ++edi7;
        ++esi2;
        --ecx8;
    } while (ecx8);
    goto addr_8048341_17;
    addr_8048344_18:
    g805a109 = esi2 - ebx6 - 1;
    addr_804834d_19:
    less9 = *reinterpret_cast<signed char*>(&g805a0f9) < 4;
    if (!less9) {
        zf10 = g805a0ed == 1;
        if (zf10) {
            addr_80484a5_21:
            edi11 = reinterpret_cast<signed char*>(0x8059edb);
            esi12 = reinterpret_cast<signed char*>(0x804825b);
            ecx13 = g805a0f9;
        } else {
            ecx14 = g805a0f9;
            edi15 = reinterpret_cast<signed char*>(0x8059edb);
            esi16 = reinterpret_cast<signed char*>(0x8048253);
            do {
                if (!ecx14) 
                    break;
                --ecx14;
                ++edi15;
                ++esi16;
            } while (*esi16 == *edi15);
            if (ecx14) 
                goto addr_80483c9_26; else 
                goto addr_8048393_27;
        }
    } else {
        eax17 = reinterpret_cast<struct s0*>(4);
        __asm__("int 0x80");
        goto addr_8048b3a_29;
    }
    do {
        if (!ecx13) 
            break;
        --ecx13;
        ++edi11;
        ++esi12;
    } while (*esi12 == *edi11);
    if (ecx13) {
        edi18 = reinterpret_cast<signed char*>(0x8059edb);
        esi19 = reinterpret_cast<signed char*>(0x8048267);
        ecx20 = g805a0f9;
        do {
            if (!ecx20) 
                break;
            --ecx20;
            ++edi18;
            ++esi19;
        } while (*esi19 == *edi18);
        if (!ecx20) 
            goto addr_804866f_37;
    } else {
        __asm__("int 0x80");
        g805a105 = 5;
        if (1) {
            g805a130 = reinterpret_cast<signed char*>(0);
            g805a148 = reinterpret_cast<signed char*>(0);
            edi21 = "\n\nFrom+OK\n+OK  octets\n+OK User name accepted, password please\n+OK Sayonara!\n+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n";
            while (g805a160 = reinterpret_cast<struct s0*>(3), !0) {
                __asm__("popad ");
                ecx22 = reinterpret_cast<signed char*>(0x8049edc);
                ebx23 = reinterpret_cast<signed char*>(0x8049edc);
                tmp32_24 = &g805a160->f8049edc;
                edx25 = tmp32_24;
                while (1) {
                    if (*ecx22 != *edi21) {
                        addr_804858e_43:
                        edi21 = "\n\nFrom+OK\n+OK  octets\n+OK User name accepted, password please\n+OK Sayonara!\n+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n";
                        ecx22 = ebx23;
                        ++g805a148;
                        ++ebx23;
                        goto addr_804859c_44;
                    } else {
                        ++edi21;
                        if (edi21 != "+OK\n+OK  octets\n+OK User name accepted, password please\n+OK Sayonara!\n+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n") {
                            addr_804859c_44:
                            ++ecx22;
                            if (ecx22 == edx25) 
                                break;
                        } else {
                            ++g805a130;
                            zf26 = g8048cc7 == 0;
                            if (!zf26) {
                                __asm__("pushad ");
                                fun_8048292(ecx22);
                                edx25 = reinterpret_cast<signed char*>(1);
                                ebx23 = g805a10d;
                                __asm__("int 0x80");
                                fun_8048279(0x80480ff);
                                __asm__("popad ");
                                g805a148 = reinterpret_cast<signed char*>(0);
                                goto addr_804858e_43;
                            }
                        }
                    }
                }
            }
            __asm__("popad ");
            ++g805a130;
            zf27 = g8048cc7 == 0;
            if (zf27) 
                goto addr_80485fc_50; else 
                goto addr_80485b7_51;
        } else {
            eax17 = reinterpret_cast<struct s0*>(4);
            __asm__("int 0x80");
            goto addr_8048b3a_29;
        }
    }
    edi28 = reinterpret_cast<signed char*>(0x8059edb);
    esi29 = reinterpret_cast<signed char*>(0x804826b);
    ecx30 = g805a0f9;
    do {
        if (!ecx30) 
            break;
        --ecx30;
        ++edi28;
        ++esi29;
    } while (*esi29 == *edi28);
    if (!ecx30) 
        goto addr_8048696_57;
    addr_80486bd_58:
    edi31 = reinterpret_cast<signed char*>(0x8059edb);
    esi32 = reinterpret_cast<signed char*>(0x804825f);
    ecx33 = g805a0f9;
    do {
        if (!ecx33) 
            break;
        --ecx33;
        ++edi31;
        ++esi32;
    } while (*esi32 == *edi31);
    if (ecx33) {
        edi34 = reinterpret_cast<signed char*>(0x8059edb);
        esi35 = reinterpret_cast<signed char*>(0x8048263);
        ecx36 = g805a0f9;
        do {
            if (!ecx36) 
                break;
            --ecx36;
            ++edi34;
            ++esi35;
        } while (*esi35 == *edi34);
        if (!ecx36) 
            goto addr_8048b19_66;
    } else {
        addr_80486d7_67:
        less_or_equal37 = g805a109 <= 0;
        if (!less_or_equal37) {
            less38 = g805a109 < 10;
            if (!less38) {
                __asm__("int 0x80");
            }
            edx39 = 1;
            ecx40 = reinterpret_cast<signed char*>(0);
            tmp32_41 = reinterpret_cast<signed char*>(0x8059ee5 + g805a109);
            edi42 = tmp32_41;
            do {
                --edi42;
                eax43 = 0;
                *reinterpret_cast<signed char*>(&eax43) = *edi42;
                eax44 = eax43 - 48;
                if (eax44 > 9) 
                    goto addr_8048768_72;
                if (eax44 < 0) 
                    goto addr_8048768_72;
                ecx40 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx40) + eax44 * edx39);
                edx39 = edx39 * 10;
            } while (!reinterpret_cast<int1_t>(edi42 == 0x8059ee5));
            goto addr_804874c_75;
        } else {
            eax17 = reinterpret_cast<struct s0*>(4);
            __asm__("int 0x80");
            goto addr_8048b3a_29;
        }
    }
    eax17 = reinterpret_cast<struct s0*>(4);
    __asm__("int 0x80");
    addr_8048b3a_29:
    return eax17;
    addr_8048b19_66:
    g8048cc8 = 1;
    goto addr_80486d7_67;
    addr_8048768_72:
    eax17 = reinterpret_cast<struct s0*>(4);
    __asm__("int 0x80");
    goto addr_8048b3a_29;
    addr_804874c_75:
    g805a134 = ecx40;
    g805a138 = reinterpret_cast<signed char*>(0);
    g805a13c = reinterpret_cast<signed char*>(0);
    g8048cc6 = 1;
    fun_80484bf();
    eax45 = g805a130;
    less46 = reinterpret_cast<int32_t>(g805a134) < 1;
    if (less46 || (less47 = reinterpret_cast<int32_t>(g805a134) < reinterpret_cast<int32_t>(eax45 + 1), !less47)) {
        eax17 = reinterpret_cast<struct s0*>(4);
        __asm__("int 0x80");
        goto addr_8048b3a_29;
    } else {
        fun_8048279(ecx40);
        __asm__("int 0x80");
        g805a105 = 5;
        if (1) {
            g805a130 = reinterpret_cast<signed char*>(1);
            edi48 = "\n\nFrom+OK\n+OK  octets\n+OK User name accepted, password please\n+OK Sayonara!\n+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n";
            g805a144 = reinterpret_cast<signed char*>(0);
            g8048cc9 = reinterpret_cast<signed char*>(0);
            g805a138 = reinterpret_cast<signed char*>(0);
            g805a13c = reinterpret_cast<signed char*>(0);
            g805a144 = reinterpret_cast<signed char*>(0);
            while (g805a158 = reinterpret_cast<signed char*>(3), !0) {
                __asm__("popad ");
                ecx49 = reinterpret_cast<signed char*>(0x8049edc);
                ebx50 = reinterpret_cast<signed char*>(0x8049edc);
                tmp32_51 = g805a158 + 0x8049edc;
                edx52 = tmp32_51;
                ebp53 = reinterpret_cast<void*>(0);
                zf54 = reinterpret_cast<int1_t>(g805a134 == 1);
                if (zf54) {
                    g805a138 = reinterpret_cast<signed char*>(1);
                    ++g805a134;
                }
                while (1) {
                    if (*ecx49 == *edi48) {
                        ++edi48;
                        if (edi48 != "+OK\n+OK  octets\n+OK User name accepted, password please\n+OK Sayonara!\n+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n") {
                            addr_8048900_87:
                            ++ecx49;
                            if (ecx49 != edx52) 
                                continue; else 
                                break;
                        } else {
                            ++g805a130;
                            eax55 = g805a130;
                            zf56 = eax55 == g805a134;
                            if (zf56) {
                                ebp53 = reinterpret_cast<void*>(ecx49 - 6 - 0x8049edc);
                                tmp32_57 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(g805a144) + reinterpret_cast<int32_t>(ebp53));
                                g805a144 = tmp32_57;
                                zf58 = g805a138 == 0;
                                if (!zf58) 
                                    goto addr_80488d8_90;
                                eax55 = g805a144;
                                g805a138 = eax55;
                                ++g805a134;
                            }
                            g805a144 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(g805a144) - reinterpret_cast<int32_t>(ebp53));
                        }
                    }
                    edi48 = "\n\nFrom+OK\n+OK  octets\n+OK User name accepted, password please\n+OK Sayonara!\n+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n";
                    ecx49 = ebx50;
                    ++ebx50;
                    goto addr_8048900_87;
                }
                eax59 = g805a158;
                tmp32_60 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(g805a144) + reinterpret_cast<int32_t>(eax59));
                g805a144 = tmp32_60;
            }
        } else {
            eax17 = reinterpret_cast<struct s0*>(4);
            __asm__("int 0x80");
            goto addr_8048b3a_29;
        }
    }
    __asm__("popad ");
    eax61 = g805a144;
    g805a13c = eax61;
    tmp32_62 = g805a138 + 3;
    g805a138 = tmp32_62;
    addr_804892d_97:
    zf63 = reinterpret_cast<int1_t>(g805a138 == 4);
    if (zf63) {
        g805a138 = reinterpret_cast<signed char*>(0);
    }
    zf64 = reinterpret_cast<int1_t>(g805a138 == 4);
    if (zf64) {
        g805a138 = reinterpret_cast<signed char*>(0);
    }
    eax65 = g805a13c;
    eax66 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax65) - reinterpret_cast<int32_t>(g805a138));
    g805a140 = eax66;
    zf67 = g8048cc8 == 1;
    if (!zf67) {
        __asm__("int 0x80");
        fun_8048292("+OK  octets\n+OK User name accepted, password please\n+OK Sayonara!\n+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n");
        __asm__("int 0x80");
        __asm__("int 0x80");
        g805a101 = reinterpret_cast<void*>(0);
        do {
            less_or_equal68 = reinterpret_cast<int32_t>(g805a140) <= 0xffff;
            if (!less_or_equal68) {
            }
            __asm__("int 0x80");
            g805a0fd = reinterpret_cast<void*>(3);
            tmp32_69 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(g805a101) + 3);
            g805a101 = tmp32_69;
            __asm__("int 0x80");
            eax70 = g805a101;
            zf71 = eax70 == g805a140;
        } while (!zf71);
        __asm__("int 0x80");
        eax17 = reinterpret_cast<struct s0*>(4);
        __asm__("int 0x80");
        goto addr_8048b3a_29;
    } else {
        __asm__("pushad ");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        g805a105 = 5;
        while (!0) {
            g805a160 = reinterpret_cast<struct s0*>(3);
            __asm__("int 0x80");
            __asm__("int 0x80");
            eax72 = g805a160;
            tmp32_73 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(g805a13c) + reinterpret_cast<int32_t>(eax72));
            g805a13c = tmp32_73;
            tmp32_74 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(g805a138) + reinterpret_cast<int32_t>(eax72));
            g805a138 = tmp32_74;
        }
        __asm__("popad ");
        __asm__("int 0x80");
        eax17 = reinterpret_cast<struct s0*>(6);
        __asm__("int 0x80");
        g8048cc8 = 0;
        goto addr_8048b3a_29;
    }
    addr_80488d8_90:
    tmp32_75 = g805a138 + 3;
    g805a138 = tmp32_75;
    eax76 = g805a144;
    g805a13c = eax76;
    tmp32_77 = g805a13c + 2;
    g805a13c = tmp32_77;
    goto addr_804892d_97;
    addr_8048696_57:
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("int 0x80");
    goto addr_80486bd_58;
    addr_804866f_37:
    g8048cc7 = 1;
    eax17 = fun_80484bf();
    goto addr_8048b3a_29;
    addr_80485fc_50:
    zf78 = g8048cc6 == 0;
    if (zf78) {
        __asm__("int 0x80");
        fun_8048292("+OK  octets\n+OK User name accepted, password please\n+OK Sayonara!\n+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n");
        __asm__("int 0x80");
        fun_8048279(0x80480ff);
    } else {
        g8048cc6 = 0;
        return 3;
    }
    addr_8048649_114:
    eax17 = reinterpret_cast<struct s0*>(6);
    __asm__("int 0x80");
    goto addr_8048b3a_29;
    addr_80485b7_51:
    fun_8048292(0x8049edc);
    __asm__("int 0x80");
    fun_8048279(0x80480ff);
    __asm__("int 0x80");
    g8048cc7 = 0;
    goto addr_8048649_114;
    addr_80483c9_26:
    zf79 = g805a0ee == 0;
    if (!zf79) {
        edi80 = reinterpret_cast<signed char*>(0x8059edb);
        esi81 = reinterpret_cast<signed char*>(0x8048257);
        ecx82 = g805a0f9;
        do {
            if (!ecx82) 
                break;
            --ecx82;
            ++edi80;
            ++esi81;
        } while (*esi81 == *edi80);
        if (ecx82) 
            goto addr_80484a5_21;
    } else {
        eax17 = reinterpret_cast<struct s0*>(4);
        __asm__("int 0x80");
        goto addr_8048b3a_29;
    }
    esi83 = reinterpret_cast<signed char*>(0x8059ee5);
    edi84 = reinterpret_cast<struct s1*>(0x8059fee);
    ecx85 = g805a109;
    while (ecx85) {
        --ecx85;
        edi84->f0 = *esi83;
        edi84 = reinterpret_cast<struct s1*>(&edi84->f1);
        ++esi83;
    }
    edi84->f1 = 0;
    g805a0ed = 1;
    ebx86 = reinterpret_cast<signed char*>(0x8048ecc);
    ecx87 = g8048ec8;
    do {
        *ebx86 = *ecx87;
        ++ebx86;
        ++ecx87;
    } while (*ecx87);
    ecx88 = reinterpret_cast<signed char*>(0x8059eef);
    while (*ebx86 = *ecx88, !!*ebx86) {
        ++ebx86;
        ++ecx88;
    }
    g8048cc6 = 1;
    g8048cc7 = 0;
    fun_80484bf();
    __asm__("int 0x80");
    fun_8048292("+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n");
    g8048cc6 = 0;
    eax17 = reinterpret_cast<struct s0*>(4);
    __asm__("int 0x80");
    goto addr_8048b3a_29;
    addr_8048393_27:
    g805a0ee = 1;
    esi89 = reinterpret_cast<signed char*>(0x8059ee5);
    edi90 = reinterpret_cast<signed char*>(0x8059eef);
    ecx91 = g805a109;
    while (ecx91) {
        --ecx91;
        *edi90 = *esi89;
        ++edi90;
        ++esi89;
    }
    *edi90 = 0;
    eax17 = reinterpret_cast<struct s0*>(4);
    __asm__("int 0x80");
    goto addr_8048b3a_29;
    addr_8048343_12:
    --esi2;
    goto addr_8048344_18;
    addr_8048341_17:
    goto addr_804834d_19;
    addr_804830c_4:
    g805a0f9 = esi2 - 0x8049edc - 1 - 1;
    goto addr_804834d_19;
}

struct s2 {
    signed char[75] pad75;
    uint32_t f4b;
    signed char[23] pad102;
    unsigned char f66;
    signed char[7] pad110;
    unsigned char f6e;
};

struct s3 {
    signed char[111] pad111;
    int32_t f6f;
};

struct s4 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s5 {
    signed char[111] pad111;
    int32_t f6f;
};

struct s6 {
    signed char[32] pad32;
    int32_t f20;
};

unsigned char g72657320;

void fun_8048000(void** ecx) {
    void** esp2;
    int1_t less_or_equal3;
    uint32_t esi4;
    int32_t esi5;
    void* eax6;
    int32_t* ebx7;
    int32_t* ebx8;
    int32_t eax9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    void** eax22;
    signed char al23;
    signed char* eax24;
    signed char* eax25;
    void** eax26;
    void** tmp8_27;
    uint1_t cf28;
    unsigned char* ebx29;
    signed char* ebx30;
    struct s2* edi31;
    void* edi32;
    void** ebx33;
    void* ebx34;
    void** ebp35;
    int1_t zf36;
    unsigned char dh37;
    unsigned char dl38;
    uint1_t cf39;
    int1_t zf40;
    int1_t of41;
    unsigned char dl42;
    void** esp43;
    void** esp44;
    void** edx45;
    uint32_t* edx46;
    uint32_t* edx47;
    struct s3* edx48;
    int1_t below_or_equal49;
    unsigned char dl50;
    unsigned char* edx51;
    unsigned char dh52;
    struct s4* edx53;
    uint32_t* edx54;
    uint32_t* edx55;
    unsigned char* edx56;
    struct s5* edx57;
    unsigned char dh58;
    void** esp59;
    void** edx60;
    void** edx61;
    unsigned char dh62;
    int1_t sf63;
    unsigned char dh64;
    void** esp65;
    void** edx66;
    void** edx67;
    struct s6* edx68;
    unsigned char dh69;
    void** esp70;
    void** edx71;
    void** esp72;
    void** esp73;
    void** esp74;
    void** esp75;
    void** esp76;
    void** esp77;
    void** esp78;
    void** edx79;
    unsigned char dh80;
    unsigned char dh81;
    unsigned char dh82;
    unsigned char dh83;
    uint1_t zf84;
    void** esp85;
    void** edx86;
    void** esp87;
    void** esp88;
    void** esp89;
    void** esp90;
    unsigned char dh91;

    esp2 = reinterpret_cast<void**>(__zero_stack_offset());
    if (less_or_equal3) {
        esi4 = reinterpret_cast<uint32_t>(esi5 + 1);
        *reinterpret_cast<void***>(ecx) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx)) + reinterpret_cast<uint32_t>(eax6));
        *ebx7 = *ebx8 + eax9;
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(al23 + *eax24);
        eax25 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(*eax22));
        *eax25 = reinterpret_cast<signed char>(*eax25 + reinterpret_cast<int32_t>(eax25));
        *eax25 = reinterpret_cast<signed char>(*eax25 + *reinterpret_cast<signed char*>(&eax25));
        __asm__("aas ");
        eax26 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<unsigned char>(ecx));
        *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26))));
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26))));
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(eax26));
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<unsigned char*>(eax26 + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax26 + 0x80000804) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + 8);
        __asm__("retf 0xc");
        *reinterpret_cast<unsigned char*>(eax26 + 33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax26 + 33) + *reinterpret_cast<unsigned char*>(&ecx + 1));
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(eax26));
        esp2 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp2 - 1) + 2);
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
    }
    tmp8_27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
    cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)));
    *reinterpret_cast<void***>(eax26) = tmp8_27;
    *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26))) + cf28);
    *ebx29 = reinterpret_cast<unsigned char>(*ebx30 + *reinterpret_cast<unsigned char*>(&ecx + 1));
    edi31 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(edi32) - 1);
    ebx33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx34) - 1);
    *reinterpret_cast<unsigned char*>(ecx + 0x73) = 0;
    __asm__("insd ");
    if (*reinterpret_cast<unsigned char*>(ecx + 0x73)) {
        addr_80480c9_4:
        *reinterpret_cast<unsigned char*>(ebp35 + 0x65) = 0;
        zf36 = *reinterpret_cast<unsigned char*>(ebp35 + 0x65) == 0;
        goto addr_80480cc_5;
    } else {
        ebp35 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx33 + esi4 * 2) + 32) * 0x33706f70);
        *reinterpret_cast<unsigned char*>(ebx33 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx33 + 0x65) & dh37);
        zf36 = *reinterpret_cast<unsigned char*>(ebx33 + 0x65) == 0;
        if (0) {
            addr_80480d8_7:
            __asm__("outsb ");
            __asm__("outsd ");
            if (zf36) {
                addr_80480fc_8:
                *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
                *reinterpret_cast<unsigned char*>(ebp35 + 0x73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp35 + 0x73) & dl38);
                __asm__("popad ");
                cf39 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax26 + 1) < *reinterpret_cast<unsigned char*>(*reinterpret_cast<int16_t*>(&ebx33) + *reinterpret_cast<int16_t*>(&esi4)));
                zf40 = *reinterpret_cast<unsigned char*>(&eax26 + 1) == *reinterpret_cast<unsigned char*>(*reinterpret_cast<int16_t*>(&ebx33) + *reinterpret_cast<int16_t*>(&esi4));
                of41 = __intrinsic();
                goto addr_8048105_9;
            } else {
                ebp35 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(ebp35 + 0x70) * 0x656d656c);
                zf36 = __undefined();
                goto addr_80480dd_11;
            }
        } else {
            if (0) {
                addr_8048085_13:
                if (0) {
                    addr_80480aa_14:
                    edi31 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(edi31) - 1);
                    --ebx33;
                    *reinterpret_cast<unsigned char*>(ebx33 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx33 + 97) & dl42);
                    if (!__intrinsic()) {
                        addr_8048120_15:
                        esp43 = esp2 - 4;
                        *reinterpret_cast<void***>(esp43) = ebp35;
                        esp44 = esp43 - 4;
                        *reinterpret_cast<void***>(esp44) = ebx33;
                        ++ebp35;
                        esp2 = esp44 - 4;
                        *reinterpret_cast<void***>(esp2) = edx45;
                        *reinterpret_cast<unsigned char*>(esi4 + 0x69) = 0;
                        cf39 = 0;
                        zf40 = *reinterpret_cast<unsigned char*>(esi4 + 0x69) == 0;
                        if (0) 
                            goto addr_804819c_16;
                    } else {
                        __asm__("outsb ");
                        __asm__("popad ");
                        if (0) {
                            addr_8048116_18:
                            *reinterpret_cast<unsigned char*>(&ecx + 1) = 0xff;
                            goto addr_8048120_15;
                        } else {
                            *edx46 = *edx47 & reinterpret_cast<unsigned char>(ecx);
                            ecx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx) - edi31->f4b);
                            *reinterpret_cast<unsigned char*>(ebp35 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp35 + 97) & *reinterpret_cast<unsigned char*>(&ecx));
                            ebp35 = reinterpret_cast<void**>(edx48->f6f * 0x706f2078);
                            __asm__("outsb ");
                            *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) - 32);
                            goto addr_80480c9_4;
                        }
                    }
                } else {
                    __asm__("outsb ");
                    goto addr_804808b_21;
                }
            } else {
                if (0) {
                    addr_80480cc_5:
                    if (1) {
                        addr_8048141_23:
                        ++ebx33;
                        edi31 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(edi31) - 1);
                        ebp35 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp35 - 1) - 1);
                        goto addr_804814b_24;
                    } else {
                        __asm__("popad ");
                        if (1) {
                            addr_80480dd_11:
                            goto addr_80480df_26;
                        } else {
                            eax26 = eax26 - 0x20525245;
                            zf36 = eax26 == 0;
                            goto addr_80480d8_7;
                        }
                    }
                } else {
                    __asm__("popad ");
                    if (!__intrinsic()) {
                        addr_8048075_29:
                        edi31 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(edi31) - 1);
                        --ebx33;
                        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(0);
                        __asm__("outsd ");
                        __asm__("arpl [ebp+0x74], si");
                        if (1) {
                            addr_804808b_21:
                            __asm__("popad ");
                            __asm__("insd ");
                            *reinterpret_cast<unsigned char*>(ecx + 99) = 0;
                            __asm__("arpl [ebp+0x70], sp");
                            if (!*reinterpret_cast<unsigned char*>(ecx + 99)) {
                                addr_80480fb_30:
                                *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)));
                                goto addr_80480fc_8;
                            } else {
                                cf39 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) < 32);
                                below_or_equal49 = reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) <= 32;
                                *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) - 32);
                                zf40 = *reinterpret_cast<void**>(&eax26) == 0;
                                of41 = __intrinsic();
                                if (of41) 
                                    goto addr_80480fc_8;
                                if (!cf39) 
                                    goto addr_8048110_33; else 
                                    goto addr_804809d_34;
                            }
                        } else {
                            ecx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx) - edi31->f4b);
                            *reinterpret_cast<unsigned char*>(ebp35 + 0x73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp35 + 0x73) & dl50);
                            goto addr_8048085_13;
                        }
                    } else {
                        *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | *edx51);
                        ++esi4;
                        zf36 = esi4 == 0;
                        if (0) {
                            addr_80480df_26:
                            __asm__("outsb ");
                            if (zf36) {
                                addr_804814b_24:
                                ++ecx;
                                --esi4;
                                ++esp2;
                                *reinterpret_cast<unsigned char*>(ebp35 + 0x75) = 0;
                                cf39 = 0;
                                if (1) {
                                    addr_80481c7_37:
                                    if (0) {
                                        addr_804822a_38:
                                        *reinterpret_cast<unsigned char*>(ebx33 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx33 + 0x65) & dh52);
                                        __asm__("insb ");
                                        __asm__("arpl [gs:ebp+0x64], si");
                                        goto addr_8048230_39;
                                    } else {
                                        addr_80481c9_40:
                                        __asm__("arpl [ebp+0x72], si");
                                        if (1) {
                                            goto addr_80481da_42;
                                        }
                                    }
                                } else {
                                    edx53->f65 = 0;
                                    *reinterpret_cast<unsigned char*>(ecx + 0x74) = 0;
                                    *reinterpret_cast<unsigned char*>(ebp35 + 97) = 0;
                                    cf39 = 0;
                                    zf40 = *reinterpret_cast<unsigned char*>(ebp35 + 97) == 0;
                                    goto addr_804815c_44;
                                }
                            } else {
                                *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | *reinterpret_cast<unsigned char*>(eax26 + 0x6d));
                                __asm__("insd ");
                                *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) - 32);
                                __asm__("outsb ");
                                esp2 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(ebx33 + 0x65) * 0x79727420);
                                *edx54 = *edx55 & reinterpret_cast<unsigned char>(ecx);
                                *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | *edx56);
                                goto addr_80480fb_30;
                            }
                        } else {
                            __asm__("insd ");
                            ecx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx) - edi31->f4b);
                            *reinterpret_cast<unsigned char*>(&ecx + 1) = 0xff;
                            goto addr_8048075_29;
                        }
                    }
                }
            }
        }
    }
    if (!zf40) {
        eax26 = eax26 - 0x20525245;
        __asm__("insd ");
        __asm__("popad ");
        ebp35 = reinterpret_cast<void**>(edx57->f6f * 0x6f6e2078);
        cf39 = __intrinsic();
        zf40 = __undefined();
    }
    if (!zf40) 
        goto addr_804813c_50;
    addr_804815c_44:
    if (!cf39) 
        goto addr_80481d3_51;
    *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26)) & dh58);
    cf39 = 0;
    __asm__("arpl [eax+0x61], bp");
    if (0) {
        goto addr_80481c9_40;
    }
    __asm__("arpl [ebp+0x72], si");
    if (!1) 
        goto addr_804816d_55;
    addr_804818d_56:
    ++ebp35;
    esp59 = esp2 - 4;
    *reinterpret_cast<void***>(esp59) = edx60;
    esp2 = esp59 - 4;
    *reinterpret_cast<void***>(esp2) = edx61;
    *reinterpret_cast<unsigned char*>(eax26 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax26 + 97) & dh62);
    cf39 = 0;
    sf63 = __intrinsic();
    if (0) {
        addr_80481f7_57:
        *reinterpret_cast<unsigned char*>(ebp35 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp35 + 97) & 0xff);
        ebp35 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(esp2 + 0x69) * 0x72450a72);
        cf39 = __intrinsic();
        sf63 = __undefined();
        goto addr_80481ff_58;
    } else {
        __asm__("insd ");
        if (!*reinterpret_cast<unsigned char*>(eax26 + 97)) {
            addr_80481ff_58:
            if (cf39) {
                addr_8048276_60:
            } else {
                if (cf39) {
                    addr_8048243_62:
                    __asm__("insb ");
                    goto addr_8048244_63;
                } else {
                    *reinterpret_cast<unsigned char*>(ebx33 + 0x6f) = 0;
                    zf40 = *reinterpret_cast<unsigned char*>(ebx33 + 0x6f) == 0;
                    goto addr_804820c_65;
                }
            }
        } else {
            if (0) {
                addr_80481bc_67:
                if (cf39) {
                    addr_8048230_39:
                    *reinterpret_cast<unsigned char*>(eax26 + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax26 + 0x6f) & dh64);
                    cf39 = 0;
                    goto addr_8048234_68;
                } else {
                    __asm__("outsb ");
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp35) + *reinterpret_cast<int16_t*>(&edi31)) + 0x68) = 0;
                    cf39 = 0;
                    __asm__("popad ");
                    goto addr_80481c7_37;
                }
            } else {
                addr_804819c_16:
                __asm__("insd ");
                esi4 = *reinterpret_cast<unsigned char*>(ebx33 + 0x73) * 0xa676e69;
                cf39 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax26) < reinterpret_cast<unsigned char>(0x20525245));
                eax26 = eax26 - 0x20525245;
                zf40 = eax26 == 0;
                if (__intrinsic()) {
                    addr_804820c_65:
                    if (!zf40) 
                        goto 0x804827a; else 
                        goto addr_804820e_70;
                } else {
                    if (cf39) {
                        addr_804820e_70:
                        *reinterpret_cast<unsigned char*>(esi4 + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi4 + 0x6f) & 0xff);
                        cf39 = 0;
                        zf40 = *reinterpret_cast<unsigned char*>(esi4 + 0x6f) == 0;
                        goto addr_804820f_72;
                    } else {
                        __asm__("insd ");
                        goto addr_80481ae_74;
                    }
                }
            }
        }
    }
    addr_804816d_55:
    __asm__("insb ");
    __asm__("outsd ");
    __asm__("outsb ");
    esp65 = esp2 - 4;
    *reinterpret_cast<void***>(esp65) = edx66;
    esp2 = esp65 - 4;
    *reinterpret_cast<void***>(esp2) = edx67;
    *reinterpret_cast<unsigned char*>(esi4 + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi4 + 0x6f) & *reinterpret_cast<unsigned char*>(&ecx));
    goto addr_8048178_75;
    addr_804813c_50:
    __asm__("outsw ");
    goto addr_804813e_76;
    addr_8048110_33:
    __asm__("outsd ");
    __asm__("insb ");
    esi4 = reinterpret_cast<uint32_t>(edx68->f20 * 0x74726f70);
    goto addr_8048116_18;
    addr_804809d_34:
    if (!below_or_equal49) {
        addr_804810e_77:
        __asm__("outsd ");
        goto addr_8048110_33;
    } else {
        if (cf39) {
            addr_8048105_9:
            if (of41) {
                addr_8048178_75:
                *reinterpret_cast<unsigned char*>(ebx33 + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx33 + 0x75) & dh69);
                __asm__("arpl [eax+0x20], bp");
                __asm__("insd ");
                __asm__("popad ");
                ebp35 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(eax26 + 0x6d) * 0x61737365);
                *reinterpret_cast<unsigned char*>(&ecx + 1) = 0xff;
                goto addr_804818d_56;
            } else {
                if (of41) {
                    addr_804813e_76:
                    if (!zf40) {
                        addr_80481ae_74:
                        if (zf40) {
                            addr_8048216_80:
                            *reinterpret_cast<void***>(ecx) = *reinterpret_cast<void***>(ecx) - 0xff;
                            goto addr_8048219_81;
                        } else {
                            if (cf39) {
                                addr_80481d3_51:
                                if (cf39) {
                                    addr_804820f_72:
                                    if (zf40) {
                                        addr_8048234_68:
                                        if (cf39) 
                                            goto 0x80482ac;
                                    } else {
                                        goto addr_8048216_80;
                                    }
                                } else {
                                    *reinterpret_cast<unsigned char*>(ebp35 + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp35 + 0x69) & 0xff);
                                    if (1) {
                                        addr_804824d_85:
                                        __asm__("outsb ");
                                        ebp35 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi4 + 0x67) * 0x53550a3f);
                                        goto addr_8048254_86;
                                    } else {
                                        addr_80481da_42:
                                        ebp35 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx + *reinterpret_cast<int32_t*>(esi4 + 0x67) * 0x61727420 * 2) + 0x6e) * 0x6c732067);
                                        __asm__("popad ");
                                        if (!__intrinsic()) {
                                            addr_8048254_86:
                                            esp70 = esp2 - 4;
                                            *reinterpret_cast<void***>(esp70) = edx71;
                                            esp72 = esp70 - 4;
                                            *reinterpret_cast<void***>(esp72) = eax26;
                                            esp73 = esp72 - 4;
                                            *reinterpret_cast<void***>(esp73) = ebx33;
                                            esp74 = esp73 - 4;
                                            *reinterpret_cast<void***>(esp74) = ebx33;
                                            esp75 = esp74 - 4;
                                            *reinterpret_cast<void***>(esp75) = ebx33;
                                            esp76 = esp75 - 4;
                                            *reinterpret_cast<void***>(esp76) = esp76;
                                            ecx = ecx + 1 + 1;
                                            esp77 = esp76 - 4;
                                            *reinterpret_cast<void***>(esp77) = esp77;
                                            esp78 = esp77 - 4;
                                            *reinterpret_cast<void***>(esp78) = edx79;
                                            ebp35 = ebp35 + 1 + 1;
                                            esp2 = esp78 - 4;
                                            *reinterpret_cast<void***>(esp2) = esp2;
                                            goto addr_8048262_87;
                                        } else {
                                            *reinterpret_cast<unsigned char*>(ecx + 0x74) = 0;
                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax26 + reinterpret_cast<unsigned char>(ebp35) * 2) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax26 + reinterpret_cast<unsigned char>(ebp35) * 2) + 0x65) & dh80);
                                            *reinterpret_cast<unsigned char*>(ebp35 + 0x6e) = 0;
                                            edi31->f66 = reinterpret_cast<unsigned char>(edi31->f66 & 0xff);
                                            goto addr_80481f7_57;
                                        }
                                    }
                                }
                            } else {
                                __asm__("arpl [edi+0x6e], bp");
                                if (zf40) {
                                    addr_8048219_81:
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi31) + reinterpret_cast<unsigned char>(ebp35) * 2 + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi31) + reinterpret_cast<unsigned char>(ebp35) * 2 + 32) & dh81);
                                    if (__intrinsic()) 
                                        goto 0x804829c; else 
                                        goto addr_8048220_90;
                                } else {
                                    ebp35 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(esi4 + 0x69) * 0x7720676e);
                                    cf39 = __intrinsic();
                                    goto addr_80481bc_67;
                                }
                            }
                        }
                    } else {
                        *reinterpret_cast<unsigned char*>(&ecx + 1) = 0xff;
                        goto addr_8048141_23;
                    }
                } else {
                    *reinterpret_cast<unsigned char*>(ebx33 + 0x70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx33 + 0x70) & dh82);
                    goto addr_804810d_94;
                }
            }
        } else {
            *reinterpret_cast<unsigned char*>(eax26 + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax26 + 0x6c) & dh83);
            __asm__("popad ");
            if (1) {
                addr_804810d_94:
                goto addr_804810e_77;
            } else {
                *reinterpret_cast<unsigned char*>(&ecx + 1) = 0xff;
                goto addr_80480aa_14;
            }
        }
    }
    g72657320 = reinterpret_cast<unsigned char>(g72657320 & 0xff);
    cf39 = 0;
    zf84 = reinterpret_cast<uint1_t>(g72657320 == 0);
    sf63 = __intrinsic();
    if (zf84) 
        goto 0x80482a5;
    if (0) {
        addr_8048262_87:
        esp85 = esp2 - 4;
        *reinterpret_cast<void***>(esp85) = edx86;
        ebp35 = ebp35 + 1 + 1;
        --ecx;
        esp2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(esp85 + 1 - 1) - 1) - 4);
        *reinterpret_cast<void***>(esp2) = ebx33;
        goto addr_804826a_99;
    } else {
        __asm__("popad ");
        goto addr_8048243_62;
    }
    addr_8048220_90:
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx + reinterpret_cast<unsigned char>(ebp35) * 2) + 0x73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx + reinterpret_cast<unsigned char>(ebp35) * 2) + 0x73) & 0xff);
    if (!*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx + reinterpret_cast<unsigned char>(ebp35) * 2) + 0x73)) 
        goto 0x804828b;
    __asm__("outsb ");
    edi31->f6e = reinterpret_cast<unsigned char>(edi31->f6e & 0xff);
    goto addr_804822a_38;
    ++ebp35;
    zf40 = ebp35 == 0;
    sf63 = reinterpret_cast<signed char>(ebp35) < reinterpret_cast<signed char>(0);
    if (0) {
        addr_8048244_63:
        if (cf39) 
            goto 0x80482ab;
    } else {
        __asm__("outsd ");
        goto addr_80481d3_51;
    }
    __asm__("popad ");
    if (!sf63) {
        addr_804826a_99:
        esp87 = esp2 - 4;
        *reinterpret_cast<void***>(esp87) = esp87;
        esp88 = esp87 - 4;
        *reinterpret_cast<void***>(esp88) = ecx;
        esp89 = esp88 - 4;
        *reinterpret_cast<void***>(esp89) = ebp35;
        --ecx;
        esp90 = esp89 - 4;
        *reinterpret_cast<void***>(esp90) = esp90;
        *reinterpret_cast<void***>(ecx) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx)) ^ dh91);
        __asm__("aaa ");
        goto addr_8048276_60;
    } else {
        if (cf39) 
            goto 0x80482c1;
        __asm__("outsb ");
        goto addr_804824d_85;
    }
}

void fun_80482c6() {
    __asm__("int 0x80");
    __asm__("int 0x80");
}

int32_t g805a111;

int32_t g8048dc9;

void fun_8048b3b(int32_t a1, signed char* a2, int32_t a3) {
    int32_t* eax4;
    int32_t* eax5;
    int32_t eax6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    int1_t cf10;
    int32_t eax11;
    int32_t ebx12;
    signed char tmp8_13;
    int32_t ebx14;
    signed char* eax15;

    *eax4 = *eax5 + eax6;
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    if (!reinterpret_cast<int1_t>(__return_address() == 3)) {
        while (1) {
            addr_8048bd7_2:
            __asm__("int 0x80");
            while (1) {
                addr_8048c03_3:
                __asm__("int 0x80");
                addr_8048c08_4:
                __asm__("int 0x80");
                if (1) {
                    __asm__("int 0x80");
                } else {
                    __asm__("int 0x80");
                    if (1) 
                        break;
                    __asm__("int 0x80");
                    if (0) 
                        goto addr_8048c45_8;
                }
            }
        }
    } else {
        g8048ec8 = a2;
        g805a0ed = 0;
        g805a0ee = 0;
        while ((cf10 = *reinterpret_cast<unsigned char*>(&eax11) < 48, *reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax11) - 48), !cf10) && *reinterpret_cast<unsigned char*>(&eax11) <= 9) {
            ebx12 = ebx12 * 10 + eax11;
        }
        tmp8_13 = *reinterpret_cast<signed char*>(&ebx12);
        *reinterpret_cast<signed char*>(&ebx12) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx12) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx12) + 1) = tmp8_13;
        ebx14 = ebx12 << 16;
        *reinterpret_cast<signed char*>(&ebx14) = 2;
        g805a111 = ebx14;
        eax15 = g8048ec8;
        do {
            ++eax15;
        } while (*eax15);
        if (*(eax15 - 1) == 47) 
            goto addr_8048ba1_16; else 
            goto addr_8048b8d_17;
    }
    while (1) {
        addr_8048c45_8:
        g8048dc9 = 16;
        __asm__("int 0x80");
        if (0) 
            continue;
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        if (0) 
            break;
        __asm__("int 0x80");
    }
    g805a10d = reinterpret_cast<signed char*>(0x66);
    fun_80482d6();
    while (1) {
        __asm__("int 0x80");
        fun_80482ee(0x8049edc);
    }
    addr_8048ba1_16:
    __asm__("int 0x80");
    if (0) 
        goto addr_8048bd7_2;
    __asm__("int 0x80");
    if (0) 
        goto addr_8048c08_4; else 
        goto addr_8048bd7_2;
    addr_8048b8d_17:
    __asm__("int 0x80");
    goto addr_8048c03_3;
}

void fun_8048cbc() {
    __asm__("int 0x80");
    goto 0x8048c41;
}

void fun_8048cc6() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}
