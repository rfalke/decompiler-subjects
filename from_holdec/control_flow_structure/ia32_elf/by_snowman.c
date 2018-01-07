
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_8048300();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x18d4f - 4)) {
        fun_8048300();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0;

void fun_8048300() {
    goto __gmon_start__;
}

int32_t __libc_start_main = 0x80482f6;

void fun_80482f0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t __libc_start_main(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;

    eax1 = 3;
    if (!1 && (eax1 = 0, !1)) {
        eax1 = __libc_start_main(0x8061018, v2);
    }
    return eax1;
}

void fun_80482e0(int32_t a1);

int32_t test_1_blocks_variant_0_edges_2() {
    fun_80482e0("block 2");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_0_edges_3() {
    fun_80482e0("block 2");
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
}

int32_t g80610a4 = 0;

int32_t test_2_blocks_variant_2_edges_4() {
    int1_t zf1;

    fun_80482e0("block 2");
    while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_3_edges_4() {
    int1_t zf1;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t g80610a8 = 0;

int32_t test_2_blocks_variant_8_edges_5() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_9_edges_5() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_10_edges_5() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_11_edges_5() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_12_edges_5() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_13_edges_5() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_80487f5_4;
    addr_80487c3_5:
    fun_80482e0("exit block");
    return 0;
    addr_80487f5_4:
    fun_80482e0("block 3");
    goto addr_80487c3_5;
}

int32_t g80610ac = 0;

int32_t test_2_blocks_variant_17_edges_6() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_80488f3_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_80488f3_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_18_edges_6() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_19_edges_6() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_80489ae_4;
    addr_804897c_5:
    fun_80482e0("exit block");
    return 0;
    addr_80489ae_4:
    while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
    }
    goto addr_804897c_5;
}

int32_t test_2_blocks_variant_20_edges_6() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t g80610b0 = 0;

int32_t test_2_blocks_variant_21_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_8048a2b_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8048a2b_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_0_edges_4() {
    fun_80482e0("block 2");
    fun_80482e0("block 3");
    fun_80482e0("block 4");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_2_edges_5() {
    int1_t zf1;

    fun_80482e0("block 2");
    while (1) {
        fun_80482e0("block 3");
        fun_80482e0("block 4");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_3_edges_5() {
    int1_t zf1;

    fun_80482e0("block 2");
    fun_80482e0("block 3");
    while (fun_80482e0("block 4"), zf1 = g80610a4 == 0, !zf1) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_4_edges_5() {
    int1_t zf1;

    fun_80482e0("block 2");
    fun_80482e0("block 3");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_20_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        addr_804905e_2:
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        while (fun_80482e0("block 4"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804905e_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_21_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    while (1) {
        addr_80490c1_3:
        fun_80482e0("block 3");
        while (fun_80482e0("block 4"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_80490c1_3;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_22_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_23_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_24_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    fun_80482e0("block 3");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_25_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        addr_8049202_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            fun_80482e0("block 4");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8049202_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_26_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_27_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_28_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_29_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            fun_80482e0("block 4");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804933f_6;
        }
    }
    addr_804933f_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_30_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
    } while (zf1);
    while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_31_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
        } while (zf1);
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_32_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    while (1) {
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_33_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    do {
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
    } while (zf1);
    while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_34_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8049524_5;
    addr_80494e3_6:
    fun_80482e0("exit block");
    return 0;
    addr_8049524_5:
    fun_80482e0("block 4");
    goto addr_80494e3_6;
}

int32_t test_3_blocks_variant_44_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (1) {
            fun_80482e0("block 3");
            fun_80482e0("block 4");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_45_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        fun_80482e0("block 3");
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_46_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (1) {
            fun_80482e0("block 3");
            fun_80482e0("block 4");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_47_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_48_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        while (1) {
            fun_80482e0("block 3");
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            }
        }
    }
}

int32_t test_3_blocks_variant_49_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_80499cf_3:
        fun_80482e0("exit block");
        return 0;
    } else {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_80499cf_3;
    }
    fun_80482e0("block 4");
    goto addr_80499cf_3;
}

int32_t test_3_blocks_variant_62_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    while (1) {
        fun_80482e0("block 3");
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_63_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    fun_80482e0("block 3");
    while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_64_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    fun_80482e0("block 3");
    zf2 = g80610a8 == 0;
    if (!zf2) {
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_71_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_804a132_3:
        fun_80482e0("block 3");
    } else {
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (!zf2) 
            goto addr_804a157_6;
    }
    fun_80482e0("exit block");
    return 0;
    addr_804a157_6:
    goto addr_804a132_3;
}

int32_t test_3_blocks_variant_72_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("block 3");
    } else {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_73_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804a1ff_5;
    addr_804a1da_6:
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
    addr_804a1ff_5:
    goto addr_804a1da_6;
}

int32_t test_3_blocks_variant_74_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
        }
    }
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_75_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
        }
    }
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_76_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) {
            fun_80482e0("block 3");
        } else {
            fun_80482e0("block 4");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_77_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            fun_80482e0("block 4");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_78_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, zf1) {
        fun_80482e0("block 3");
    }
    while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_79_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804a3a7_5;
    }
    while (1) {
        fun_80482e0("block 3");
    }
    addr_804a3a7_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_80_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        while (1) {
            addr_804a426_3:
            fun_80482e0("block 3");
        }
    } else {
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (!zf2) 
            goto addr_804a44b_6;
    }
    fun_80482e0("exit block");
    return 0;
    addr_804a44b_6:
    goto addr_804a426_3;
}

int32_t test_3_blocks_variant_81_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        while (1) {
            fun_80482e0("block 3");
        }
    } else {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
        }
        fun_80482e0("exit block");
        return 0;
    }
}

int32_t test_3_blocks_variant_82_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) {
            fun_80482e0("block 3");
        }
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_83_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        while (1) {
            fun_80482e0("block 3");
            addr_804a531_4:
            fun_80482e0("block 4");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_804a531_4;
    }
}

int32_t test_3_blocks_variant_84_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("block 3");
    }
    while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_85_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804a5d1_4;
    addr_804a59f_5:
    fun_80482e0("exit block");
    return 0;
    addr_804a5d1_4:
    fun_80482e0("block 3");
    fun_80482e0("block 4");
    goto addr_804a59f_5;
}

int32_t test_3_blocks_variant_104_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804abf7_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            fun_80482e0("block 4");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804abf7_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_105_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804ac54_2:
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804ac54_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_106_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    addr_804acc0_3:
    while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804acc0_3;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_107_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804ad0e_2:
        fun_80482e0("block 2");
        addr_804ad1d_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_804ad1d_3;
            }
            goto addr_804ad0e_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_108_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            fun_80482e0("block 4");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804ad58_6;
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
    }
    addr_804ad58_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_109_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804adc8_2:
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804adc8_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_110_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        addr_804ae34_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_804ae34_3;
            }
            goto addr_804ae12_8;
        }
    }
    addr_804ae12_8:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_111_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        while (1) {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                continue;
            fun_80482e0("block 4");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804ae6f_6;
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
    }
    addr_804ae6f_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_112_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804aedf_2:
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
        } while (zf1);
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804aedf_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_113_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    while (1) {
        addr_804af4b_3:
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804af4b_3;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_114_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_115_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804aff6_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804aff6_2;
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_116_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804b081_5;
    addr_804b040_6:
    fun_80482e0("exit block");
    return 0;
    addr_804b081_5:
    while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
    }
    goto addr_804b040_6;
}

int32_t test_3_blocks_variant_117_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804b0b0_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804b0b0_2;
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804b0b0_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_118_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_119_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804b16a_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804b16a_2;
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            }
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_120_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_804b1b4_4;
            zf2 = g80610a8 == 0;
        } while (zf2);
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    addr_804b1b4_4:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_121_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_122_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    do {
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804b2af_5;
    addr_804b26e_6:
    fun_80482e0("exit block");
    return 0;
    addr_804b2af_5:
    while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
    }
    goto addr_804b26e_6;
}

int32_t test_3_blocks_variant_123_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804b2de_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804b2de_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_124_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_804b328_4;
            zf2 = g80610a8 == 0;
        } while (zf2);
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    addr_804b328_4:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_125_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_126_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804b3f5_2:
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_804b3f5_2;
            zf2 = g80610a8 == 0;
        } while (zf2);
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_127_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804b43f_7;
        }
    }
    addr_804b43f_7:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_128_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                break;
            zf2 = g80610a8 == 0;
        } while (zf2);
        break;
    }
    while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_129_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_804b4f9_4;
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
            zf3 = g80610ac == 0;
        } while (zf3);
        goto addr_804b543_7;
    }
    addr_804b4f9_4:
    fun_80482e0("exit block");
    return 0;
    addr_804b543_7:
    fun_80482e0("block 4");
    goto addr_804b4f9_4;
}

int32_t test_3_blocks_variant_134_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    addr_804b6dd_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804b6dd_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_135_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (1) {
            addr_804b752_4:
            fun_80482e0("block 3");
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_804b752_4;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_136_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (1) {
            addr_804b7af_4:
            fun_80482e0("block 3");
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_804b7af_4;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_137_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_138_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_139_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_804b89b_3:
        fun_80482e0("exit block");
        return 0;
    } else {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804b89b_3;
    }
    while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
    }
    goto addr_804b89b_3;
}

int32_t test_3_blocks_variant_140_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    addr_804b90b_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804b90b_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_141_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_142_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_143_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_144_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804ba6c_7;
        }
    }
    addr_804ba6c_7:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_145_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804bb0a_5;
    addr_804bac9_6:
    fun_80482e0("exit block");
    return 0;
    addr_804bb0a_5:
    while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
    }
    goto addr_804bac9_6;
}

int32_t test_3_blocks_variant_146_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_147_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_148_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_149_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
        } while (zf2);
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_150_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (1) {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_151_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
        } while (zf2);
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_152_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (1) {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_153_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
        } while (zf2);
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_154_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        while (1) {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            }
        }
    }
}

int32_t test_3_blocks_variant_155_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804beb5_6;
    addr_804be6b_7:
    fun_80482e0("exit block");
    return 0;
    addr_804beb5_6:
    fun_80482e0("block 4");
    goto addr_804be6b_7;
}

int32_t test_3_blocks_variant_168_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804c337_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 3");
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804c337_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_169_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    while (1) {
        addr_804c3ac_4:
        fun_80482e0("block 3");
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804c3ac_4;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_170_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_171_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_172_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    fun_80482e0("block 3");
    zf2 = g80610a8 == 0;
    if (!zf2) {
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_173_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804c508_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804c508_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_174_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_175_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_176_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_177_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804c669_7;
        }
    }
    addr_804c669_7:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_178_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        addr_804c6d9_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            goto addr_804c6d9_2;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
    } while (zf2);
    while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_179_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
        } while (zf2);
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_180_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    while (1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_181_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    do {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
    } while (zf2);
    while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_182_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        addr_804c84d_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            goto addr_804c84d_2;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804c884_6;
    addr_804c83a_7:
    fun_80482e0("exit block");
    return 0;
    addr_804c884_6:
    fun_80482e0("block 4");
    goto addr_804c83a_7;
}

int32_t test_3_blocks_variant_192_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    addr_804cbef_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804cbef_2;
        }
        goto addr_804cbdc_7;
    }
    fun_80482e0("block 3");
    addr_804cbdc_7:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_193_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_804cc64_3:
        fun_80482e0("block 3");
    } else {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804cc64_3;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_194_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804ccc1_6;
        }
    }
    addr_804ccc1_6:
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_195_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            fun_80482e0("block 4");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_196_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804cd63_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) {
            fun_80482e0("block 3");
        } else {
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_804cd63_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_197_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_804cdd8_6;
            }
            break;
        }
        addr_804cdd8_6:
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_198_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804ce0a_5;
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804ce63_7;
    while (1) {
        addr_804ce35_8:
        fun_80482e0("block 3");
    }
    addr_804ce0a_5:
    fun_80482e0("exit block");
    return 0;
    addr_804ce63_7:
    goto addr_804ce35_8;
}

int32_t test_3_blocks_variant_199_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    addr_804ce7a_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804ce7a_2;
        }
        goto addr_804ce67_7;
    }
    while (1) {
        fun_80482e0("block 3");
    }
    addr_804ce67_7:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_200_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        while (1) {
            addr_804ceef_3:
            fun_80482e0("block 3");
        }
    } else {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804ceef_3;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_201_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    goto addr_804cf34_2;
    addr_804cf21_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_804cf4c_4:
        fun_80482e0("block 3");
        while (1) {
            fun_80482e0("block 4");
            zf1 = g80610a8 == 0;
            if (zf1) 
                goto addr_804cf21_3;
            zf2 = g80610ac == 0;
            if (!zf2) 
                break;
            addr_804cf34_2:
            fun_80482e0("block 2");
            zf3 = g80610a4 == 0;
            if (zf3) 
                goto addr_804cf4c_4;
        }
    }
}

int32_t test_3_blocks_variant_202_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804cf91_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) {
            fun_80482e0("block 3");
        }
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804cf91_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_203_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        while (1) {
            addr_804d006_3:
            fun_80482e0("block 3");
            addr_804d015_4:
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_804d006_3;
            }
            break;
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_804d015_4;
    }
}

int32_t test_3_blocks_variant_204_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
        } else {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_205_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            fun_80482e0("block 4");
            zf2 = g80610ac == 0;
            if (zf2) 
                break;
        }
        fun_80482e0("block 3");
        zf3 = g80610a8 == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_206_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804d0f2_4;
    }
    while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
    }
    addr_804d0f2_4:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_207_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            fun_80482e0("block 4");
            zf2 = g80610ac == 0;
            if (zf2) 
                continue;
        }
        fun_80482e0("block 3");
        zf3 = g80610a8 == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_208_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
        } else {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_209_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
            }
        }
        fun_80482e0("block 3");
        zf3 = g80610a8 == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_210_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_804d291_3:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
        }
    } else {
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (!zf3) 
            goto addr_804d2bf_7;
    }
    fun_80482e0("exit block");
    return 0;
    addr_804d2bf_7:
    goto addr_804d291_3;
}

int32_t test_3_blocks_variant_211_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
        }
    } else {
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_212_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        fun_80482e0("block 4");
        zf2 = g80610ac == 0;
    } while (zf2);
    goto addr_804d379_5;
    addr_804d34b_6:
    while (fun_80482e0("block 3"), zf3 = g80610a8 == 0, !zf3) {
    }
    fun_80482e0("exit block");
    return 0;
    addr_804d379_5:
    goto addr_804d34b_6;
}

int32_t test_3_blocks_variant_213_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
        }
    }
    while (fun_80482e0("block 3"), zf3 = g80610a8 == 0, !zf3) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_214_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
        }
    }
    while (fun_80482e0("block 3"), zf3 = g80610a8 == 0, !zf3) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_215_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            addr_804d47a_5:
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_804d47a_5;
    }
}

int32_t test_3_blocks_variant_216_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    goto addr_804d4a7_2;
    addr_804d494_3:
    fun_80482e0("exit block");
    return 0;
    addr_804d4bf_4:
    while (fun_80482e0("block 3"), zf1 = g80610a8 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610ac == 0, zf2) {
            addr_804d4a7_2:
            fun_80482e0("block 2");
            zf3 = g80610a4 == 0;
            if (zf3) 
                goto addr_804d4bf_4;
        }
    }
    goto addr_804d494_3;
}

int32_t test_3_blocks_variant_217_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
        }
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_218_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            addr_804d591_5:
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            }
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_804d591_5;
    }
}

int32_t test_3_blocks_variant_219_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_220_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804d63a_4;
    addr_804d608_5:
    fun_80482e0("exit block");
    return 0;
    addr_804d63a_4:
    while (1) {
        fun_80482e0("block 3");
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_804d608_5;
    }
}

int32_t test_3_blocks_variant_221_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804d697_4;
    addr_804d665_5:
    fun_80482e0("exit block");
    return 0;
    addr_804d697_4:
    fun_80482e0("block 3");
    while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
    }
    goto addr_804d665_5;
}

int32_t test_3_blocks_variant_222_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (1) {
            fun_80482e0("block 3");
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_223_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_224_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804d7ae_4;
    fun_80482e0("exit block");
    return 0;
    addr_804d7ae_4:
    while (1) {
        fun_80482e0("block 3");
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
}

int32_t test_3_blocks_variant_225_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804d80b_4;
    addr_804d7d9_5:
    fun_80482e0("exit block");
    return 0;
    addr_804d80b_4:
    fun_80482e0("block 3");
    zf3 = g80610ac == 0;
    if (!zf3) {
        fun_80482e0("block 4");
        goto addr_804d7d9_5;
    }
}

int32_t test_3_blocks_variant_238_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_804dc92_3:
        fun_80482e0("exit block");
        return 0;
    } else {
        zf2 = g80610a8 == 0;
        if (zf2) {
            addr_804dcc6_5:
            fun_80482e0("block 3");
            goto addr_804dc92_3;
        } else {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804dc92_3;
        }
    }
    goto addr_804dcc6_5;
}

int32_t test_3_blocks_variant_239_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        } else {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_240_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804dd80_4;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804dda5_7;
    addr_804dd4c_8:
    fun_80482e0("exit block");
    return 0;
    addr_804dd80_4:
    fun_80482e0("block 3");
    goto addr_804dd4c_8;
    addr_804dda5_7:
    goto addr_804dd80_4;
}

int32_t test_3_blocks_variant_241_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804dddd_4;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    addr_804dda9_8:
    fun_80482e0("exit block");
    return 0;
    addr_804dddd_4:
    fun_80482e0("block 3");
    goto addr_804dda9_8;
}

int32_t test_3_blocks_variant_242_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            }
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_243_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        } else {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_244_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_245_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) 
            goto addr_804df4f_4;
        fun_80482e0("block 3");
    }
    addr_804df1d_6:
    fun_80482e0("exit block");
    return 0;
    addr_804df4f_4:
    while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
    }
    goto addr_804df1d_6;
}

int32_t test_3_blocks_variant_246_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_247_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        } else {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_248_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            }
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_249_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804e0c5_4;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_804e0c5_4:
        fun_80482e0("block 3");
    }
}

int32_t test_3_blocks_variant_250_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_804e0ee_3:
        fun_80482e0("exit block");
        return 0;
    } else {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (1) {
                addr_804e122_5:
                fun_80482e0("block 3");
            }
        } else {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804e0ee_3;
        }
    }
    goto addr_804e122_5;
}

int32_t test_3_blocks_variant_251_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (1) {
                fun_80482e0("block 3");
            }
        } else {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_252_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804e1dc_4;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804e201_7;
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_804e1dc_4:
        fun_80482e0("block 3");
    }
    addr_804e201_7:
    goto addr_804e1dc_4;
}

int32_t test_3_blocks_variant_253_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804e239_4;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_804e239_4:
        fun_80482e0("block 3");
    }
}

int32_t test_3_blocks_variant_254_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            }
        }
        while (1) {
            fun_80482e0("block 3");
        }
    }
}

int32_t test_3_blocks_variant_255_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        }
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_256_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (1) {
                fun_80482e0("block 3");
                addr_804e35f_5:
                fun_80482e0("block 4");
                zf3 = g80610ac == 0;
                if (zf3) 
                    break;
            }
        } else {
            goto addr_804e35f_5;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_257_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        }
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_258_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    goto addr_804e3e9_2;
    addr_804e3d6_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_804e40a_4:
        fun_80482e0("block 3");
        while (fun_80482e0("block 4"), zf1 = g80610ac == 0, zf1) {
            addr_804e3e9_2:
            fun_80482e0("block 2");
            zf2 = g80610a4 == 0;
            if (zf2) 
                goto addr_804e3d6_3;
            zf3 = g80610a8 == 0;
            if (zf3) 
                goto addr_804e40a_4;
        }
    }
}

int32_t test_3_blocks_variant_259_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        }
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_260_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (1) {
                fun_80482e0("block 3");
                addr_804e4d3_6:
                while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                }
            }
        } else {
            goto addr_804e4d3_6;
        }
    }
}

int32_t test_3_blocks_variant_261_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_804e4ed_6;
    }
    fun_80482e0("block 3");
    addr_804e4ed_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_262_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        addr_804e57e_4:
        fun_80482e0("block 3");
    } else {
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (!zf3) 
            goto addr_804e5a3_7;
    }
    fun_80482e0("exit block");
    return 0;
    addr_804e5a3_7:
    goto addr_804e57e_4;
}

int32_t test_3_blocks_variant_263_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        fun_80482e0("block 3");
    } else {
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_264_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        addr_804e617_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            goto addr_804e617_2;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804e65d_6;
    addr_804e638_7:
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
    addr_804e65d_6:
    goto addr_804e638_7;
}

int32_t test_3_blocks_variant_265_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_266_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (!zf2) {
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
    }
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_267_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        } else {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_268_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_269_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) 
            break;
        fun_80482e0("block 3");
    }
    while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_270_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_804e832_6;
    }
    while (1) {
        fun_80482e0("block 3");
    }
    addr_804e832_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_271_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        while (1) {
            addr_804e8c3_4:
            fun_80482e0("block 3");
        }
    } else {
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (!zf3) 
            goto addr_804e8e8_7;
    }
    fun_80482e0("exit block");
    return 0;
    addr_804e8e8_7:
    goto addr_804e8c3_4;
}

int32_t test_3_blocks_variant_272_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        while (1) {
            fun_80482e0("block 3");
        }
    } else {
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
        }
        fun_80482e0("exit block");
        return 0;
    }
}

int32_t test_3_blocks_variant_273_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        }
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_274_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        while (1) {
            fun_80482e0("block 3");
            addr_804e9e9_5:
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_804e9e9_5;
    }
}

int32_t test_3_blocks_variant_275_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        fun_80482e0("block 3");
    }
    while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_276_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804ea92_4;
    addr_804ea60_5:
    fun_80482e0("exit block");
    return 0;
    addr_804ea92_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        fun_80482e0("block 3");
        goto addr_804ea60_5;
    } else {
        fun_80482e0("block 4");
        goto addr_804ea60_5;
    }
}

int32_t test_3_blocks_variant_287_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804ee7b_2:
        fun_80482e0("block 2");
        addr_804ee8a_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_804ee7b_2;
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804ee8a_3;
            }
            goto addr_804ee68_9;
        }
    }
    addr_804ee68_9:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_288_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804eee1_2:
        fun_80482e0("block 2");
        while (1) {
            addr_804eef0_3:
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                continue;
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_804eee1_2;
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804eef0_3;
            }
            goto addr_804eece_9;
        }
    }
    addr_804eece_9:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_289_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804ef47_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804ef47_2;
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_804ef47_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_290_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804efad_2:
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_804efad_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_291_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804f013_2:
        fun_80482e0("block 2");
        addr_804f022_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804f013_2;
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804f022_3;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_292_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804f079_2:
        fun_80482e0("block 2");
        addr_804f088_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804f079_2;
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804f088_3;
            }
            goto addr_804f079_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_293_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804f0df_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_804f0df_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_294_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804f145_2:
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_804f132_4;
            zf2 = g80610a8 == 0;
        } while (zf2);
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_804f145_2;
        }
        break;
    }
    addr_804f132_4:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_295_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    addr_804f1ba_3:
    while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_804f1ba_3;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_296_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804f211_2:
        fun_80482e0("block 2");
        addr_804f220_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804f220_3;
            }
            goto addr_804f211_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_297_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804f264_7;
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
    }
    addr_804f264_7:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_298_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804f2dd_2:
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_804f2dd_2;
            zf2 = g80610a8 == 0;
        } while (zf2);
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_804f2dd_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_299_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        addr_804f352_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804f352_3;
            }
            goto addr_804f330_9;
        }
    }
    addr_804f330_9:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_300_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804f3a9_2:
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_804f396_4;
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804f3a9_2;
            zf3 = g80610ac == 0;
        } while (zf3);
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    addr_804f396_4:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_301_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804f40f_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804f40f_2;
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_302_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_804f462_4;
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
            zf3 = g80610ac == 0;
        } while (zf3);
        goto addr_804f4ac_7;
    }
    addr_804f462_4:
    fun_80482e0("exit block");
    return 0;
    addr_804f4ac_7:
    while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
    }
    goto addr_804f462_4;
}

int32_t test_3_blocks_variant_303_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804f4db_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804f4db_2;
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_804f4db_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_304_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804f541_2:
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_804f52e_4;
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804f541_2;
            zf3 = g80610ac == 0;
        } while (zf3);
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    addr_804f52e_4:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_305_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804f5a7_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804f5a7_2;
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_306_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_804f60d_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (1) {
            addr_804f625_4:
            fun_80482e0("block 3");
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_804f60d_2;
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804f625_4;
            }
            goto addr_804f5fa_9;
        }
    }
    addr_804f5fa_9:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_307_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_804f673_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_804f673_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_308_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_804f6d9_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_804f6d9_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_309_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        addr_804f757_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804f757_4;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_310_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_804f7a5_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_804f7bd_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804f7bd_4;
            }
            goto addr_804f7a5_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_311_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804f7f8_7;
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
    }
    addr_804f7f8_7:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_312_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_804f871_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_804f871_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_313_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_804f8ef_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804f8ef_4;
            }
            goto addr_804f8c4_9;
        }
    }
    addr_804f8c4_9:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_314_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_804f955_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804f955_4;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_315_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (1) {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804f990_7;
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
    }
    addr_804f990_7:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_316_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_804fa09_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
        } while (zf2);
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_804fa09_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_317_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (1) {
            addr_804fa87_4:
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804fa87_4;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_318_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (1) {
            addr_804faed_4:
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804faed_4;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_319_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_320_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_804fba1_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804fba1_2;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_321_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804fc3e_6;
    addr_804fbf4_7:
    fun_80482e0("exit block");
    return 0;
    addr_804fc3e_6:
    while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
    }
    goto addr_804fbf4_7;
}

int32_t test_3_blocks_variant_322_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_804fc6d_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804fc6d_2;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_804fc6d_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_323_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_324_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_804fd39_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804fd39_2;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_325_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804fd8c_5;
            zf3 = g80610ac == 0;
        } while (zf3);
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    addr_804fd8c_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_326_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_327_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_804fe58_3:
        fun_80482e0("exit block");
        return 0;
    } else {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804fe58_3;
            zf3 = g80610ac == 0;
        } while (zf3);
    }
    while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
    }
    goto addr_804fe58_3;
}

int32_t test_3_blocks_variant_328_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_804fed1_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_804fed1_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_329_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804ff24_5;
            zf3 = g80610ac == 0;
        } while (zf3);
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    addr_804ff24_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_330_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_331_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_8050003_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8050003_2;
            zf3 = g80610ac == 0;
        } while (zf3);
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_332_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8050056_8;
        }
    }
    addr_8050056_8:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_333_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
            zf3 = g80610ac == 0;
        } while (zf3);
        goto addr_8050106_6;
    }
    addr_80500bc_7:
    fun_80482e0("exit block");
    return 0;
    addr_8050106_6:
    while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
    }
    goto addr_80500bc_7;
}

int32_t test_3_blocks_variant_334_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_335_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_805019b_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_805019b_2;
            zf3 = g80610ac == 0;
        } while (zf3);
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_336_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_337_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8050254_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
        } while (zf4);
        goto addr_80502a7_8;
    }
    addr_8050254_5:
    fun_80482e0("exit block");
    return 0;
    addr_80502a7_8:
    fun_80482e0("block 4");
    goto addr_8050254_5;
}

int32_t test_3_blocks_variant_342_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8050465_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8050465_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_343_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_80504cb_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_80504cb_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_344_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    addr_8050549_4:
    while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8050549_4;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_345_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8050597_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_80505af_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_80505af_4;
            }
            goto addr_8050597_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_346_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_80505ea_7;
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
    }
    addr_80505ea_7:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_347_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8050663_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8050663_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_348_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_80506e1_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_80506e1_4;
            }
            goto addr_80506b6_9;
        }
    }
    addr_80506b6_9:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_349_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (1) {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805071c_7;
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
    }
    addr_805071c_7:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_350_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8050795_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
        } while (zf2);
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8050795_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_351_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    while (1) {
        addr_8050813_4:
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8050813_4;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_352_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_353_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_80508c7_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_80508c7_2;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_354_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        addr_805092d_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            goto addr_805092d_2;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_8050964_6;
    addr_805091a_7:
    fun_80482e0("exit block");
    return 0;
    addr_8050964_6:
    while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
    }
    goto addr_805091a_7;
}

int32_t test_3_blocks_variant_355_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8050993_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8050993_2;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8050993_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_356_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_357_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8050a5f_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8050a5f_2;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_358_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8050ab2_5;
            zf3 = g80610ac == 0;
        } while (zf3);
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    addr_8050ab2_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_359_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_360_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    do {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_8050bc8_6;
    addr_8050b7e_7:
    fun_80482e0("exit block");
    return 0;
    addr_8050bc8_6:
    while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
    }
    goto addr_8050b7e_7;
}

int32_t test_3_blocks_variant_361_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8050bf7_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8050bf7_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_362_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8050c4a_5;
            zf3 = g80610ac == 0;
        } while (zf3);
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    addr_8050c4a_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_363_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_364_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8050d29_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8050d29_2;
            zf3 = g80610ac == 0;
        } while (zf3);
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_365_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8050d7c_8;
        }
    }
    addr_8050d7c_8:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_366_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
            zf3 = g80610ac == 0;
        } while (zf3);
        break;
    }
    while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_367_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8050e48_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
        } while (zf4);
        goto addr_8050e9b_8;
    }
    addr_8050e48_5:
    fun_80482e0("exit block");
    return 0;
    addr_8050e9b_8:
    fun_80482e0("block 4");
    goto addr_8050e48_5;
}

int32_t test_3_blocks_variant_372_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8051059_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_8051059_2;
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8051071_7;
            }
            break;
        }
        addr_8051071_7:
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_373_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_80510bf_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_80510bf_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_80510d7_7;
        }
        goto addr_80510ac_9;
    }
    while (1) {
        addr_80510d7_7:
        fun_80482e0("block 3");
    }
    addr_80510ac_9:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_374_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_8051125_2;
    addr_8051112_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805113d_4:
        fun_80482e0("block 3");
        while (1) {
            while (fun_80482e0("block 4"), zf1 = g80610a8 == 0, !zf1) {
                zf2 = g80610ac == 0;
                if (zf2) 
                    goto addr_8051125_2;
                zf3 = g80610b0 == 0;
                if (zf3) 
                    goto addr_805113d_4;
            }
            goto addr_8051112_3;
            addr_8051125_2:
            fun_80482e0("block 2");
            zf4 = g80610a4 == 0;
            if (zf4) 
                break;
        }
    }
}

int32_t test_3_blocks_variant_375_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            fun_80482e0("block 4");
            zf2 = g80610ac == 0;
            if (zf2) 
                break;
            zf3 = g80610b0 == 0;
            if (zf3) 
                continue;
        }
        fun_80482e0("block 3");
        zf4 = g80610a8 == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_376_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_80511f1_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
        } else {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_80511f1_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_377_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
                zf3 = g80610b0 == 0;
                if (zf3) 
                    goto addr_805126f_6;
            }
            break;
        }
        addr_805126f_6:
        fun_80482e0("block 3");
        zf4 = g80610a8 == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_378_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
                zf3 = g80610b0 == 0;
                if (zf3) 
                    goto addr_80512d5_6;
            }
            continue;
        }
        addr_80512d5_6:
        fun_80482e0("block 3");
        zf4 = g80610a8 == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_379_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        fun_80482e0("block 4");
        zf2 = g80610ac == 0;
        if (zf2) 
            goto addr_8051310_5;
        zf3 = g80610b0 == 0;
    } while (zf3);
    goto addr_8051372_7;
    addr_805133b_8:
    while (fun_80482e0("block 3"), zf4 = g80610a8 == 0, !zf4) {
    }
    addr_8051310_5:
    fun_80482e0("exit block");
    return 0;
    addr_8051372_7:
    goto addr_805133b_8;
}

int32_t test_3_blocks_variant_380_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_8051389_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
            zf3 = g80610b0 == 0;
            if (zf3) 
                goto addr_8051389_2;
        }
        goto addr_8051376_7;
    }
    while (fun_80482e0("block 3"), zf4 = g80610a8 == 0, !zf4) {
    }
    addr_8051376_7:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_381_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_8051407_3:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
        }
    } else {
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8051407_3;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_382_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
            zf3 = g80610b0 == 0;
            if (zf3) 
                goto addr_805146d_6;
        }
    }
    addr_805146d_6:
    while (fun_80482e0("block 3"), zf4 = g80610a8 == 0, !zf4) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_383_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_80514bb_2;
    addr_80514a8_3:
    fun_80482e0("exit block");
    return 0;
    addr_80514d3_4:
    while (fun_80482e0("block 3"), zf1 = g80610a8 == 0, !zf1) {
        while (1) {
            fun_80482e0("block 4");
            zf2 = g80610ac == 0;
            if (zf2) 
                goto addr_80514a8_3;
            zf3 = g80610b0 == 0;
            if (!zf3) 
                break;
            addr_80514bb_2:
            fun_80482e0("block 2");
            zf4 = g80610a4 == 0;
            if (zf4) 
                goto addr_80514d3_4;
        }
    }
    goto addr_80514a8_3;
}

int32_t test_3_blocks_variant_384_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8051521_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
        }
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8051521_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_385_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_805159f_3:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            addr_80515b7_5:
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_805159f_3;
            }
            break;
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_80515b7_5;
    }
}

int32_t test_3_blocks_variant_386_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_80515ed_2;
    addr_80515da_3:
    fun_80482e0("exit block");
    return 0;
    addr_8051605_4:
    while (fun_80482e0("block 3"), zf1 = g80610a8 == 0, !zf1) {
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
                zf3 = g80610b0 == 0;
                if (zf3) 
                    goto addr_8051605_4;
            }
            addr_80515ed_2:
            fun_80482e0("block 2");
            zf4 = g80610a4 == 0;
            if (zf4) 
                break;
        }
    }
    goto addr_80515da_3;
}

int32_t test_3_blocks_variant_387_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            fun_80482e0("block 4");
            zf2 = g80610ac == 0;
            if (zf2) 
                break;
            zf3 = g80610b0 == 0;
            if (zf3) 
                continue;
        }
        while (fun_80482e0("block 3"), zf4 = g80610a8 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_388_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_80516b9_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) {
            while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            }
        } else {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_80516b9_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_389_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
                zf3 = g80610b0 == 0;
                if (zf3) 
                    goto addr_8051737_6;
            }
            break;
        }
        addr_8051737_6:
        while (fun_80482e0("block 3"), zf4 = g80610a8 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_390_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_8051785_2;
    addr_8051772_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805179d_4:
        fun_80482e0("block 3");
        zf1 = g80610a8 == 0;
        if (zf1) {
            do {
                addr_8051785_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_805179d_4;
                addr_80517b5_6:
                fun_80482e0("block 4");
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_8051772_3;
                zf4 = g80610b0 == 0;
            } while (zf4);
        } else {
            goto addr_80517b5_6;
        }
    }
}

int32_t test_3_blocks_variant_391_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_80517eb_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
        }
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_80517eb_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_392_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_8051851_2;
    addr_805183e_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8051869_4:
        fun_80482e0("block 3");
        zf1 = g80610a8 == 0;
        if (zf1) {
            addr_8051851_2:
            fun_80482e0("block 2");
            zf2 = g80610a4 == 0;
            if (zf2) 
                continue;
        }
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8051869_4;
        }
        goto addr_805183e_3;
    }
}

int32_t test_3_blocks_variant_393_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_80518b7_2;
    addr_80518a4_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_80518cf_4:
        fun_80482e0("block 3");
        zf1 = g80610a8 == 0;
        if (zf1) 
            continue;
        while (1) {
            fun_80482e0("block 4");
            zf2 = g80610ac == 0;
            if (zf2) 
                goto addr_80518a4_3;
            zf3 = g80610b0 == 0;
            if (!zf3) 
                break;
            addr_80518b7_2:
            fun_80482e0("block 2");
            zf4 = g80610a4 == 0;
            if (zf4) 
                goto addr_80518cf_4;
        }
    }
}

int32_t test_3_blocks_variant_394_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_805191d_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) {
            do {
                fun_80482e0("block 3");
                zf2 = g80610a8 == 0;
            } while (zf2);
        }
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805191d_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_395_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        while (1) {
            addr_805199b_3:
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            addr_80519b3_5:
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_805199b_3;
            }
            break;
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_80519b3_5;
    }
}

int32_t test_3_blocks_variant_396_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (1) {
            fun_80482e0("block 3");
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_80519d6_7;
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
    }
    addr_80519d6_7:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_397_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_8051a4f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8051a4f_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_398_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8051ad4_4;
    addr_8051aa2_5:
    fun_80482e0("exit block");
    return 0;
    addr_8051ad4_4:
    while (1) {
        addr_8051ad6_6:
        fun_80482e0("block 3");
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8051ad6_6;
        }
        goto addr_8051aa2_5;
    }
}

int32_t test_3_blocks_variant_399_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (1) {
            addr_8051b3c_5:
            fun_80482e0("block 3");
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8051b3c_5;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_400_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_401_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8051c06_4;
    addr_8051bd4_5:
    fun_80482e0("exit block");
    return 0;
    addr_8051c06_4:
    while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    goto addr_8051bd4_5;
}

int32_t test_3_blocks_variant_402_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8051c6c_4;
    addr_8051c3a_5:
    fun_80482e0("exit block");
    return 0;
    addr_8051c6c_4:
    fun_80482e0("block 3");
    zf3 = g80610ac == 0;
    if (!zf3) {
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
        goto addr_8051c3a_5;
    }
}

int32_t test_3_blocks_variant_403_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_8051cb3_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8051cb3_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_404_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_405_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8051d9e_4;
    addr_8051d6c_5:
    fun_80482e0("exit block");
    return 0;
    addr_8051d9e_4:
    while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    goto addr_8051d6c_5;
}

int32_t test_3_blocks_variant_406_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_407_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8051e38_8;
        }
    }
    addr_8051e38_8:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_408_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        addr_8051eb1_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8051eb1_2;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_8051ee8_6;
    addr_8051e9e_7:
    fun_80482e0("exit block");
    return 0;
    addr_8051ee8_6:
    while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
    }
    goto addr_8051e9e_7;
}

int32_t test_3_blocks_variant_409_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_410_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_411_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_412_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
        } while (zf3);
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_413_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_80520ce_4;
    addr_805209c_5:
    fun_80482e0("exit block");
    return 0;
    addr_80520ce_4:
    while (1) {
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            goto addr_805209c_5;
    }
}

int32_t test_3_blocks_variant_414_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8052134_4;
    addr_8052102_5:
    fun_80482e0("exit block");
    return 0;
    addr_8052134_4:
    do {
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
    } while (zf3);
    while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
    }
    goto addr_8052102_5;
}

int32_t test_3_blocks_variant_415_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (1) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_416_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
        } while (zf3);
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_417_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8052266_4;
    fun_80482e0("exit block");
    return 0;
    addr_8052266_4:
    while (1) {
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
}

int32_t test_3_blocks_variant_418_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        addr_80522ad_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_80522ad_2;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
        zf4 = g80610b0 == 0;
    } while (zf4);
    goto addr_80522ed_7;
    addr_805229a_8:
    fun_80482e0("exit block");
    return 0;
    addr_80522ed_7:
    fun_80482e0("block 4");
    goto addr_805229a_8;
}

int32_t test_3_blocks_variant_431_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_80527db_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_80527fc_4;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_80527db_2;
        }
        break;
    }
    addr_80527c8_9:
    fun_80482e0("exit block");
    return 0;
    addr_80527fc_4:
    fun_80482e0("block 3");
    goto addr_80527c8_9;
}

int32_t test_3_blocks_variant_432_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            addr_8052862_4:
            fun_80482e0("block 3");
        } else {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8052862_4;
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_433_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_80528c8_4;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_80528c8_4;
        }
    }
    addr_8052894_9:
    fun_80482e0("exit block");
    return 0;
    addr_80528c8_4:
    fun_80482e0("block 3");
    goto addr_8052894_9;
}

int32_t test_3_blocks_variant_434_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_435_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_8052973_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        } else {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8052973_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_436_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_80529fa_7;
            }
            break;
        }
        addr_80529fa_7:
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_437_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8052a60_7;
            }
            continue;
        }
        addr_8052a60_7:
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_438_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8052ac6_4;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
        zf4 = g80610b0 == 0;
    } while (zf4);
    goto addr_8052af4_8;
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8052ac6_4:
        fun_80482e0("block 3");
    }
    addr_8052af4_8:
    goto addr_8052ac6_4;
}

int32_t test_3_blocks_variant_439_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_8052b0b_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8052b2c_4;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8052b0b_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8052b2c_4:
        fun_80482e0("block 3");
    }
}

int32_t test_3_blocks_variant_440_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (1) {
                addr_8052b92_4:
                fun_80482e0("block 3");
            }
        } else {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8052b92_4;
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_441_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8052bf8_4;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8052bf8_4;
        }
    }
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8052bf8_4:
        fun_80482e0("block 3");
    }
}

int32_t test_3_blocks_variant_442_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_8052c3d_2;
    addr_8052c2a_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8052c5e_4:
        fun_80482e0("block 3");
        while (1) {
            fun_80482e0("block 4");
            zf1 = g80610ac == 0;
            if (zf1) 
                goto addr_8052c2a_3;
            zf2 = g80610b0 == 0;
            if (!zf2) 
                break;
            addr_8052c3d_2:
            fun_80482e0("block 2");
            zf3 = g80610a4 == 0;
            if (zf3) 
                goto addr_8052c2a_3;
            zf4 = g80610a8 == 0;
            if (zf4) 
                goto addr_8052c5e_4;
        }
    }
}

int32_t test_3_blocks_variant_443_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_8052ca3_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        }
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8052ca3_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_444_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (1) {
                addr_8052d2a_4:
                fun_80482e0("block 3");
                addr_8052d39_5:
                while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                    zf4 = g80610b0 == 0;
                    if (zf4) 
                        goto addr_8052d2a_4;
                }
                break;
            }
        } else {
            goto addr_8052d39_5;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_445_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_8052d6f_2;
    addr_8052d5c_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8052d90_4:
        fun_80482e0("block 3");
        while (1) {
            while (fun_80482e0("block 4"), zf1 = g80610ac == 0, !zf1) {
                zf2 = g80610b0 == 0;
                if (zf2) 
                    goto addr_8052d90_4;
            }
            addr_8052d6f_2:
            fun_80482e0("block 2");
            zf3 = g80610a4 == 0;
            if (zf3) 
                goto addr_8052d5c_3;
            zf4 = g80610a8 == 0;
            if (zf4) 
                break;
        }
    }
}

int32_t test_3_blocks_variant_446_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        } else {
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_447_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610b0 == 0;
            if (zf3) 
                break;
        }
        fun_80482e0("block 3");
        zf4 = g80610ac == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_448_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) 
            goto addr_8052ec0_4;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    addr_8052e8e_7:
    fun_80482e0("exit block");
    return 0;
    addr_8052ec0_4:
    while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
    }
    goto addr_8052e8e_7;
}

int32_t test_3_blocks_variant_449_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610b0 == 0;
            if (zf3) 
                continue;
        }
        fun_80482e0("block 3");
        zf4 = g80610ac == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_450_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        } else {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_451_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
            }
        }
        fun_80482e0("block 3");
        zf4 = g80610ac == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_452_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_8053026_3:
        fun_80482e0("exit block");
        return 0;
    } else {
        zf2 = g80610a8 == 0;
        if (zf2) {
            addr_805305a_5:
            while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            }
            goto addr_8053026_3;
        } else {
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8053026_3;
        }
    }
    goto addr_805305a_5;
}

int32_t test_3_blocks_variant_453_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            }
        } else {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_454_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8053126_4;
        fun_80482e0("block 4");
        zf3 = g80610b0 == 0;
    } while (zf3);
    goto addr_8053154_7;
    addr_80530f2_8:
    fun_80482e0("exit block");
    return 0;
    addr_8053126_4:
    while (fun_80482e0("block 3"), zf4 = g80610ac == 0, !zf4) {
    }
    goto addr_80530f2_8;
    addr_8053154_7:
    goto addr_8053126_4;
}

int32_t test_3_blocks_variant_455_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_805318c_4;
        while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
        }
    }
    addr_8053158_8:
    fun_80482e0("exit block");
    return 0;
    addr_805318c_4:
    while (fun_80482e0("block 3"), zf4 = g80610ac == 0, !zf4) {
    }
    goto addr_8053158_8;
}

int32_t test_3_blocks_variant_456_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
            }
        }
        while (fun_80482e0("block 3"), zf4 = g80610ac == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_457_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
                addr_8053270_6:
                fun_80482e0("block 4");
                zf4 = g80610b0 == 0;
                if (zf4) 
                    break;
            }
        } else {
            goto addr_8053270_6;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_458_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_805329d_2;
    addr_805328a_3:
    fun_80482e0("exit block");
    return 0;
    addr_80532be_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610b0 == 0, zf2) {
            addr_805329d_2:
            fun_80482e0("block 2");
            zf3 = g80610a4 == 0;
            if (zf3) 
                goto addr_805328a_3;
            zf4 = g80610a8 == 0;
            if (zf4) 
                goto addr_80532be_4;
        }
    }
    goto addr_805328a_3;
}

int32_t test_3_blocks_variant_459_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_460_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
                addr_80533a2_6:
                while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                }
            }
        } else {
            goto addr_80533a2_6;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_461_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610b0 == 0;
            if (zf3) 
                continue;
        }
        while (fun_80482e0("block 3"), zf4 = g80610ac == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_462_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            }
        } else {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_463_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
            }
        }
        while (fun_80482e0("block 3"), zf4 = g80610ac == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_464_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_8053501_2;
    addr_80534ee_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8053522_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) {
            do {
                addr_8053501_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_80534ee_3;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    goto addr_8053522_4;
                addr_805353a_7:
                fun_80482e0("block 4");
                zf4 = g80610b0 == 0;
            } while (zf4);
        } else {
            goto addr_805353a_7;
        }
    }
}

int32_t test_3_blocks_variant_465_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_8053567_2;
    addr_8053554_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) {
            addr_8053567_2:
            fun_80482e0("block 2");
            zf2 = g80610a4 == 0;
            if (zf2) 
                goto addr_8053554_3;
            zf3 = g80610a8 == 0;
            if (zf3) 
                continue;
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
}

int32_t test_3_blocks_variant_466_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (1) {
                fun_80482e0("block 3");
                zf3 = g80610ac == 0;
                if (zf3) 
                    continue;
                addr_8053606_7:
                while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                }
            }
        } else {
            goto addr_8053606_7;
        }
    }
}

int32_t test_3_blocks_variant_467_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        addr_8053633_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            goto addr_8053633_2;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_8053620_6;
        zf4 = g80610b0 == 0;
    } while (zf4);
    goto addr_8053682_8;
    addr_8053654_9:
    fun_80482e0("block 3");
    addr_8053620_6:
    fun_80482e0("exit block");
    return 0;
    addr_8053682_8:
    goto addr_8053654_9;
}

int32_t test_3_blocks_variant_468_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8053699_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8053699_2;
        }
        goto addr_8053686_8;
    }
    fun_80482e0("block 3");
    addr_8053686_8:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_469_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        addr_8053720_4:
        fun_80482e0("block 3");
    } else {
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8053720_4;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_470_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8053786_7;
        }
    }
    addr_8053786_7:
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_471_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_472_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8053831_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        } else {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8053831_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_473_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_80538b8_7;
            }
            break;
        }
        addr_80538b8_7:
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_474_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        addr_80538fd_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            goto addr_80538fd_2;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_80538ea_6;
        zf4 = g80610b0 == 0;
    } while (zf4);
    goto addr_805394c_8;
    while (1) {
        addr_805391e_9:
        fun_80482e0("block 3");
    }
    addr_80538ea_6:
    fun_80482e0("exit block");
    return 0;
    addr_805394c_8:
    goto addr_805391e_9;
}

int32_t test_3_blocks_variant_475_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8053963_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8053963_2;
        }
        goto addr_8053950_8;
    }
    while (1) {
        fun_80482e0("block 3");
    }
    addr_8053950_8:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_476_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        while (1) {
            addr_80539ea_4:
            fun_80482e0("block 3");
        }
    } else {
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_80539ea_4;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_477_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_8053a2f_2;
    addr_8053a1c_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8053a50_4:
        fun_80482e0("block 3");
        while (1) {
            fun_80482e0("block 4");
            zf1 = g80610ac == 0;
            if (zf1) 
                goto addr_8053a1c_3;
            zf2 = g80610b0 == 0;
            if (!zf2) 
                break;
            do {
                addr_8053a2f_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
            } while (zf3);
            zf4 = g80610a8 == 0;
            if (zf4) 
                goto addr_8053a50_4;
        }
    }
}

int32_t test_3_blocks_variant_478_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8053a95_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        }
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8053a95_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_479_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        while (1) {
            addr_8053b1c_4:
            fun_80482e0("block 3");
            addr_8053b2b_5:
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8053b1c_4;
            }
            break;
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_8053b2b_5;
    }
}

int32_t test_3_blocks_variant_480_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        } else {
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_481_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610b0 == 0;
            if (zf3) 
                break;
        }
        fun_80482e0("block 3");
        zf4 = g80610ac == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_482_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) 
            break;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_8053c1a_5;
    }
    while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
    }
    addr_8053c1a_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_483_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610b0 == 0;
            if (zf3) 
                continue;
        }
        fun_80482e0("block 3");
        zf4 = g80610ac == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_484_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        } else {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_485_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
            }
        }
        fun_80482e0("block 3");
        zf4 = g80610ac == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_486_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        addr_8053de6_4:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
        }
    } else {
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (!zf4) 
            goto addr_8053e14_8;
    }
    fun_80482e0("exit block");
    return 0;
    addr_8053e14_8:
    goto addr_8053de6_4;
}

int32_t test_3_blocks_variant_487_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
        }
    } else {
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_488_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        addr_8053e91_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            goto addr_8053e91_2;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        fun_80482e0("block 4");
        zf3 = g80610b0 == 0;
    } while (zf3);
    goto addr_8053ee0_6;
    addr_8053eb2_7:
    while (fun_80482e0("block 3"), zf4 = g80610ac == 0, !zf4) {
    }
    fun_80482e0("exit block");
    return 0;
    addr_8053ee0_6:
    goto addr_8053eb2_7;
}

int32_t test_3_blocks_variant_489_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
        }
    }
    while (fun_80482e0("block 3"), zf4 = g80610ac == 0, !zf4) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_490_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (!zf2) {
        while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
        }
    }
    while (fun_80482e0("block 3"), zf4 = g80610ac == 0, !zf4) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_491_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            addr_8053ffc_6:
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_8053ffc_6;
    }
}

int32_t test_3_blocks_variant_492_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_8054029_2;
    addr_8054016_3:
    fun_80482e0("exit block");
    return 0;
    addr_805404a_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610b0 == 0, zf2) {
            do {
                addr_8054029_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
            } while (zf3);
            zf4 = g80610a8 == 0;
            if (zf4) 
                goto addr_805404a_4;
        }
    }
    goto addr_8054016_3;
}

int32_t test_3_blocks_variant_493_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_494_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            addr_805412e_6:
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_805412e_6;
    }
}

int32_t test_3_blocks_variant_495_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_8054185_5;
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    addr_8054148_9:
    fun_80482e0("exit block");
    return 0;
    addr_8054185_5:
    fun_80482e0("block 3");
    goto addr_8054148_9;
}

int32_t test_3_blocks_variant_496_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_80541e0_4;
    addr_80541ae_5:
    fun_80482e0("exit block");
    return 0;
    addr_80541e0_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        addr_80541eb_6:
        fun_80482e0("block 3");
        goto addr_80541ae_5;
    } else {
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            goto addr_80541ae_5;
    }
    goto addr_80541eb_6;
}

int32_t test_3_blocks_variant_497_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8054246_4;
    addr_8054214_5:
    fun_80482e0("exit block");
    return 0;
    addr_8054246_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        fun_80482e0("block 3");
        goto addr_8054214_5;
    } else {
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
        goto addr_8054214_5;
    }
}

int32_t test_3_blocks_variant_498_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        addr_805428d_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_805428d_2;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_80542b7_5;
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
    } while (zf4);
    goto addr_80542dc_8;
    addr_805427a_9:
    fun_80482e0("exit block");
    return 0;
    addr_80542b7_5:
    fun_80482e0("block 3");
    goto addr_805427a_9;
    addr_80542dc_8:
    goto addr_80542b7_5;
}

int32_t test_3_blocks_variant_499_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_805431d_5;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    addr_80542e0_9:
    fun_80482e0("exit block");
    return 0;
    addr_805431d_5:
    fun_80482e0("block 3");
    goto addr_80542e0_9;
}

int32_t test_3_blocks_variant_500_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8054378_4;
    addr_8054346_5:
    fun_80482e0("exit block");
    return 0;
    addr_8054378_4:
    zf3 = g80610ac == 0;
    if (!zf3) {
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    fun_80482e0("block 3");
    goto addr_8054346_5;
}

int32_t test_3_blocks_variant_501_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            fun_80482e0("block 3");
        } else {
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_502_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_503_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) 
            goto addr_80544b3_5;
        fun_80482e0("block 3");
    }
    addr_8054478_7:
    fun_80482e0("exit block");
    return 0;
    addr_80544b3_5:
    while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
    }
    goto addr_8054478_7;
}

int32_t test_3_blocks_variant_504_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_505_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            fun_80482e0("block 3");
        } else {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_506_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_507_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_805464d_5;
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805464d_5:
        fun_80482e0("block 3");
    }
}

int32_t test_3_blocks_variant_508_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_80546a8_4;
    addr_8054676_5:
    fun_80482e0("exit block");
    return 0;
    addr_80546a8_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        while (1) {
            addr_80546b3_6:
            fun_80482e0("block 3");
        }
    } else {
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            goto addr_8054676_5;
    }
    goto addr_80546b3_6;
}

int32_t test_3_blocks_variant_509_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_805470e_4;
    addr_80546dc_5:
    fun_80482e0("exit block");
    return 0;
    addr_805470e_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        while (1) {
            fun_80482e0("block 3");
        }
    } else {
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
        goto addr_80546dc_5;
    }
}

int32_t test_3_blocks_variant_510_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        addr_8054755_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8054755_2;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_805477f_5;
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
    } while (zf4);
    goto addr_80547a4_8;
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805477f_5:
        fun_80482e0("block 3");
    }
    addr_80547a4_8:
    goto addr_805477f_5;
}

int32_t test_3_blocks_variant_511_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_80547e5_5;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_80547e5_5:
        fun_80482e0("block 3");
    }
}

int32_t test_3_blocks_variant_512_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8054840_4;
    fun_80482e0("exit block");
    return 0;
    addr_8054840_4:
    zf3 = g80610ac == 0;
    if (!zf3) {
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    while (1) {
        fun_80482e0("block 3");
    }
}

int32_t test_3_blocks_variant_513_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            fun_80482e0("block 3");
        }
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_514_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_805490c_4;
    addr_80548da_5:
    fun_80482e0("exit block");
    return 0;
    addr_805490c_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        while (1) {
            fun_80482e0("block 3");
            addr_8054926_7:
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_80548da_5;
        }
    } else {
        goto addr_8054926_7;
    }
}

int32_t test_3_blocks_variant_515_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8054972_4;
    addr_8054940_5:
    fun_80482e0("exit block");
    return 0;
    addr_8054972_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        fun_80482e0("block 3");
    }
    while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
    }
    goto addr_8054940_5;
}

int32_t test_3_blocks_variant_516_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    goto addr_80549b9_2;
    addr_80549a6_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_80549e3_4:
        fun_80482e0("block 3");
        while (fun_80482e0("block 4"), zf1 = g80610b0 == 0, zf1) {
            do {
                addr_80549b9_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_80549a6_3;
                zf3 = g80610a8 == 0;
            } while (zf3);
            zf4 = g80610ac == 0;
            if (zf4) 
                goto addr_80549e3_4;
        }
    }
}

int32_t test_3_blocks_variant_517_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            fun_80482e0("block 3");
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_518_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8054aa4_4;
    fun_80482e0("exit block");
    return 0;
    addr_8054aa4_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        while (1) {
            fun_80482e0("block 3");
            addr_8054abe_7:
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            }
        }
    } else {
        goto addr_8054abe_7;
    }
}

int32_t g80610b4 = 0;

int32_t test_3_blocks_variant_519_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8054aeb_2:
        fun_80482e0("block 2");
        addr_8054afa_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8054aeb_2;
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8054aeb_2;
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8054afa_3;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_520_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8054b5a_2:
        fun_80482e0("block 2");
        addr_8054b69_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8054b5a_2;
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8054b69_3;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_521_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8054bc9_2:
        fun_80482e0("block 2");
        addr_8054bd8_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8054bc9_2;
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8054bd8_3;
            }
            goto addr_8054bb6_10;
        }
    }
    addr_8054bb6_10:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_522_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8054c38_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8054c38_2;
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8054c38_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_523_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8054ca7_2:
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_8054c94_4;
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8054ca7_2;
            zf3 = g80610ac == 0;
        } while (zf3);
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8054ca7_2;
        }
        break;
    }
    addr_8054c94_4:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_524_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8054d16_2:
        fun_80482e0("block 2");
        addr_8054d25_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8054d16_2;
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8054d25_3;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_525_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8054d85_2:
        fun_80482e0("block 2");
        addr_8054d94_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8054d85_2;
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8054d94_3;
            }
            goto addr_8054d85_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_526_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8054df4_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_8054e0c_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8054df4_2;
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8054e0c_4;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_527_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8054e63_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_8054e7b_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8054e63_2;
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8054e7b_4;
            }
            goto addr_8054e50_10;
        }
    }
    addr_8054e50_10:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_528_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8054ed2_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (1) {
            addr_8054eea_4:
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8054ed2_2;
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8054eea_4;
            }
            goto addr_8054ebf_10;
        }
    }
    addr_8054ebf_10:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_529_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8054f41_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8054f41_2;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8054f41_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_530_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8054fb0_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8054fb0_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_531_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_805501f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_8055037_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805501f_2;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8055037_4;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_532_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_805508e_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_80550a6_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805508e_2;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_80550a6_4;
            }
            goto addr_805508e_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_533_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_80550fd_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_80550fd_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_534_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_805516c_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8055159_5;
            zf3 = g80610ac == 0;
        } while (zf3);
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_805516c_2;
        }
        break;
    }
    addr_8055159_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_535_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        addr_80551f3_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_80551f3_4;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_536_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_805524a_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_8055262_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8055262_4;
            }
            goto addr_805524a_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_537_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_80552a6_8;
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
        }
    }
    addr_80552a6_8:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_538_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8055328_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8055328_2;
            zf3 = g80610ac == 0;
        } while (zf3);
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8055328_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_539_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_80553af_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_80553af_4;
            }
            goto addr_8055384_10;
        }
    }
    addr_8055384_10:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_540_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_805541e_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805541e_4;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_541_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8055475_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8055462_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8055475_2;
            zf4 = g80610b0 == 0;
        } while (zf4);
        fun_80482e0("block 4");
        zf5 = g80610b4 == 0;
        if (zf5) 
            break;
    }
    addr_8055462_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_542_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_80554e4_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_80554e4_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_543_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8055540_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
        } while (zf4);
        goto addr_8055593_8;
    }
    addr_8055540_5:
    fun_80482e0("exit block");
    return 0;
    addr_8055593_8:
    while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
    }
    goto addr_8055540_5;
}

int32_t test_3_blocks_variant_544_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_80555c2_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_80555c2_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_80555c2_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_545_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8055631_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_805561e_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8055631_2;
            zf4 = g80610b0 == 0;
        } while (zf4);
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
        }
    }
    addr_805561e_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_546_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_80556a0_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_80556a0_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            }
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_547_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_805570f_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_8055727_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_805570f_2;
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8055727_4;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_548_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_805577e_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_8055796_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_805577e_2;
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8055796_4;
            }
            goto addr_805576b_10;
        }
    }
    addr_805576b_10:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_549_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_80557ed_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (1) {
            addr_8055805_4:
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_80557ed_2;
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8055805_4;
            }
            goto addr_80557da_10;
        }
    }
    addr_80557da_10:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_550_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_805585c_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805585c_2;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_805585c_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_551_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_80558cb_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_80558cb_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_552_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_805593a_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_8055952_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805593a_2;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8055952_4;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_553_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_80559a9_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_80559c1_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_80559a9_2;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_80559c1_4;
            }
            goto addr_80559a9_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_554_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8055a18_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8055a18_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_555_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8055a87_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8055a74_5;
            zf3 = g80610ac == 0;
        } while (zf3);
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8055a87_2;
        }
        break;
    }
    addr_8055a74_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_556_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    addr_8055b0e_4:
    while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8055b0e_4;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_557_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8055b65_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_8055b7d_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8055b7d_4;
            }
            goto addr_8055b65_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_558_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8055bc1_8;
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
        }
    }
    addr_8055bc1_8:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_559_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8055c43_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8055c43_2;
            zf3 = g80610ac == 0;
        } while (zf3);
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8055c43_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_560_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_8055cca_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8055cca_4;
            }
            goto addr_8055c9f_10;
        }
    }
    addr_8055c9f_10:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_561_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8055d21_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8055d0e_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8055d21_2;
            zf4 = g80610b0 == 0;
        } while (zf4);
        fun_80482e0("block 4");
        zf5 = g80610b4 == 0;
        if (zf5) 
            break;
    }
    addr_8055d0e_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_562_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8055d90_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8055d90_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_563_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8055dec_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
        } while (zf4);
        goto addr_8055e3f_8;
    }
    addr_8055dec_5:
    fun_80482e0("exit block");
    return 0;
    addr_8055e3f_8:
    while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
    }
    goto addr_8055dec_5;
}

int32_t test_3_blocks_variant_564_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8055e6e_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8055e6e_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8055e6e_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_565_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8055edd_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8055eca_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8055edd_2;
            zf4 = g80610b0 == 0;
        } while (zf4);
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
        }
    }
    addr_8055eca_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_566_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8055f4c_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8055f4c_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            }
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_567_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8055fbb_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
                zf3 = g80610b0 == 0;
                if (zf3) 
                    goto addr_8055fbb_2;
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_8055fd3_7;
            }
            break;
        }
        addr_8055fd3_7:
        fun_80482e0("block 3");
        zf5 = g80610a8 == 0;
        if (zf5) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_568_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_805602a_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
            zf3 = g80610b0 == 0;
            if (zf3) 
                goto addr_805602a_2;
            zf4 = g80610b4 == 0;
            if (zf4) 
                goto addr_8056042_7;
        }
        goto addr_8056017_9;
    }
    addr_8056042_7:
    while (fun_80482e0("block 3"), zf5 = g80610a8 == 0, !zf5) {
    }
    addr_8056017_9:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_569_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8056099_2;
    addr_8056086_3:
    fun_80482e0("exit block");
    return 0;
    addr_80560b1_4:
    while (fun_80482e0("block 3"), zf1 = g80610a8 == 0, !zf1) {
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
                zf3 = g80610b0 == 0;
                if (zf3) 
                    goto addr_8056099_2;
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_80560b1_4;
            }
            goto addr_8056086_3;
            addr_8056099_2:
            fun_80482e0("block 2");
            zf5 = g80610a4 == 0;
            if (zf5) 
                break;
        }
    }
    goto addr_8056086_3;
}

int32_t test_3_blocks_variant_570_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8056108_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
                zf3 = g80610b0 == 0;
                if (zf3) 
                    goto addr_8056108_2;
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_8056120_7;
            }
            break;
        }
        addr_8056120_7:
        while (fun_80482e0("block 3"), zf5 = g80610a8 == 0, !zf5) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_571_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8056177_2;
    addr_8056164_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805618f_4:
        fun_80482e0("block 3");
        zf1 = g80610a8 == 0;
        if (zf1) {
            while (1) {
                addr_8056177_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    break;
                addr_80561a7_6:
                while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                    zf4 = g80610b0 == 0;
                    if (zf4) 
                        goto addr_8056177_2;
                    zf5 = g80610b4 == 0;
                    if (zf5) 
                        goto addr_805618f_4;
                }
                goto addr_8056164_3;
            }
        } else {
            goto addr_80561a7_6;
        }
    }
}

int32_t test_3_blocks_variant_572_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_80561e6_2;
    addr_80561d3_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_80561fe_4:
        fun_80482e0("block 3");
        zf1 = g80610a8 == 0;
        if (zf1) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610ac == 0, !zf2) {
                zf3 = g80610b0 == 0;
                if (zf3) 
                    goto addr_80561e6_2;
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_80561fe_4;
            }
            goto addr_80561d3_3;
            addr_80561e6_2:
            fun_80482e0("block 2");
            zf5 = g80610a4 == 0;
            if (zf5) 
                break;
        }
    }
}

int32_t test_3_blocks_variant_573_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8056255_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            fun_80482e0("block 4");
            zf2 = g80610b0 == 0;
            if (zf2) 
                break;
            zf3 = g80610b4 == 0;
            if (zf3) 
                continue;
        }
        while (fun_80482e0("block 3"), zf4 = g80610a8 == 0, !zf4) {
            zf5 = g80610ac == 0;
            if (zf5) 
                goto addr_8056255_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_574_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_80562c4_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) {
            while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_80562c4_2;
            }
            break;
        } else {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_80562c4_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_575_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8056333_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610b0 == 0, !zf2) {
                zf3 = g80610b4 == 0;
                if (zf3) 
                    goto addr_805634b_6;
            }
            break;
        }
        addr_805634b_6:
        while (fun_80482e0("block 3"), zf4 = g80610a8 == 0, !zf4) {
            zf5 = g80610ac == 0;
            if (zf5) 
                goto addr_8056333_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_576_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_80563a2_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610b0 == 0, !zf2) {
                zf3 = g80610b4 == 0;
                if (zf3) 
                    goto addr_80563ba_6;
            }
            continue;
        }
        addr_80563ba_6:
        while (fun_80482e0("block 3"), zf4 = g80610a8 == 0, !zf4) {
            zf5 = g80610ac == 0;
            if (zf5) 
                goto addr_80563a2_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_577_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8056411_2;
    addr_80563fe_3:
    fun_80482e0("exit block");
    return 0;
    addr_8056429_4:
    while (fun_80482e0("block 3"), zf1 = g80610a8 == 0, !zf1) {
        zf2 = g80610ac == 0;
        if (zf2) {
            do {
                addr_8056411_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_8056429_4;
                addr_805644a_7:
                fun_80482e0("block 4");
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_80563fe_3;
                zf5 = g80610b4 == 0;
            } while (zf5);
        } else {
            goto addr_805644a_7;
        }
    }
    goto addr_80563fe_3;
}

int32_t test_3_blocks_variant_578_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8056480_2;
    addr_805646d_3:
    fun_80482e0("exit block");
    return 0;
    addr_8056498_4:
    while (fun_80482e0("block 3"), zf1 = g80610a8 == 0, !zf1) {
        zf2 = g80610ac == 0;
        if (zf2) {
            addr_8056480_2:
            fun_80482e0("block 2");
            zf3 = g80610a4 == 0;
            if (zf3) 
                continue;
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8056498_4;
        }
        break;
    }
    goto addr_805646d_3;
}

int32_t test_3_blocks_variant_579_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_80564ef_2;
    addr_80564dc_3:
    fun_80482e0("exit block");
    return 0;
    addr_8056507_4:
    while (fun_80482e0("block 3"), zf1 = g80610a8 == 0, !zf1) {
        zf2 = g80610ac == 0;
        if (zf2) {
            while (1) {
                addr_80564ef_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    break;
                addr_8056528_7:
                while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                    zf5 = g80610b4 == 0;
                    if (zf5) 
                        goto addr_8056507_4;
                }
            }
        } else {
            goto addr_8056528_7;
        }
    }
    goto addr_80564dc_3;
}

int32_t test_3_blocks_variant_580_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_8056576_3:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            addr_8056597_6:
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8056576_3;
            }
            break;
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_8056597_6;
    }
}

int32_t test_3_blocks_variant_581_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_80565cd_2;
    addr_80565ba_3:
    fun_80482e0("exit block");
    return 0;
    addr_80565e5_4:
    while (fun_80482e0("block 3"), zf1 = g80610a8 == 0, !zf1) {
        zf2 = g80610ac == 0;
        if (zf2) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_80565e5_4;
            }
            addr_80565cd_2:
            fun_80482e0("block 2");
            zf5 = g80610a4 == 0;
            if (zf5) 
                break;
        }
    }
    goto addr_80565ba_3;
}

int32_t test_3_blocks_variant_582_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_805663c_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (1) {
            addr_805665d_5:
            fun_80482e0("block 3");
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_805663c_2;
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805665d_5;
            }
            goto addr_8056629_10;
        }
    }
    addr_8056629_10:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_583_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_80566ab_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_80566ab_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_584_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_805671a_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_805671a_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_585_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_80567a8_4;
    addr_8056776_5:
    fun_80482e0("exit block");
    return 0;
    addr_80567a8_4:
    addr_80567aa_6:
    while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_80567aa_6;
        }
        break;
    }
    goto addr_8056776_5;
}

int32_t test_3_blocks_variant_586_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_80567f8_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_8056819_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8056819_5;
            }
            goto addr_80567f8_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_587_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8056854_8;
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
        }
    }
    addr_8056854_8:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_588_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_80568d6_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_80568d6_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_589_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_8056966_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8056966_5;
            }
            goto addr_8056932_10;
        }
    }
    addr_8056932_10:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_590_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_80569d5_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_80569d5_5;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_591_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (1) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8056a10_8;
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
        }
    }
    addr_8056a10_8:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_592_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8056a92_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
        } while (zf3);
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8056a92_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_593_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8056b20_4;
    addr_8056aee_5:
    fun_80482e0("exit block");
    return 0;
    addr_8056b20_4:
    while (1) {
        addr_8056b22_6:
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8056b22_6;
        }
        goto addr_8056aee_5;
    }
}

int32_t test_3_blocks_variant_594_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (1) {
            addr_8056b91_5:
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8056b91_5;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_595_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
        zf4 = g80610b0 == 0;
        if (zf4) 
            continue;
        fun_80482e0("block 4");
        zf5 = g80610b4 == 0;
        if (zf5) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_596_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8056c4e_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8056c4e_2;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_597_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        addr_8056cbd_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8056cbd_2;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
        zf4 = g80610b0 == 0;
    } while (zf4);
    goto addr_8056cfd_7;
    addr_8056caa_8:
    fun_80482e0("exit block");
    return 0;
    addr_8056cfd_7:
    while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
    }
    goto addr_8056caa_8;
}

int32_t test_3_blocks_variant_598_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8056d2c_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8056d2c_2;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8056d2c_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_599_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
        zf4 = g80610b0 == 0;
        if (zf4) 
            continue;
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_600_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8056e0a_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8056e0a_2;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            }
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_601_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8056e66_6;
            zf4 = g80610b0 == 0;
        } while (zf4);
        fun_80482e0("block 4");
        zf5 = g80610b4 == 0;
        if (zf5) 
            break;
    }
    addr_8056e66_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_602_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8056f07_4;
    addr_8056ed5_5:
    fun_80482e0("exit block");
    return 0;
    addr_8056f07_4:
    while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
        zf4 = g80610b0 == 0;
        if (zf4) 
            continue;
        fun_80482e0("block 4");
        zf5 = g80610b4 == 0;
        if (zf5) 
            break;
    }
    goto addr_8056ed5_5;
}

int32_t test_3_blocks_variant_603_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8056f76_4;
    addr_8056f44_5:
    fun_80482e0("exit block");
    return 0;
    addr_8056f76_4:
    do {
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_8056f44_5;
        zf4 = g80610b0 == 0;
    } while (zf4);
    while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
    }
    goto addr_8056f44_5;
}

int32_t test_3_blocks_variant_604_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8056fc6_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8056fc6_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_605_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8057022_6;
            zf4 = g80610b0 == 0;
        } while (zf4);
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
        }
    }
    addr_8057022_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_606_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_80570c3_4;
    addr_8057091_5:
    fun_80482e0("exit block");
    return 0;
    addr_80570c3_4:
    while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
        zf4 = g80610b0 == 0;
        if (zf4) 
            continue;
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
        }
    }
    goto addr_8057091_5;
}

int32_t test_3_blocks_variant_607_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8057113_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8057113_2;
            zf4 = g80610b0 == 0;
        } while (zf4);
        fun_80482e0("block 4");
        zf5 = g80610b4 == 0;
        if (zf5) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_608_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_805716f_9;
        }
    }
    addr_805716f_9:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_609_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
        } while (zf4);
        goto addr_8057231_7;
    }
    addr_80571de_8:
    fun_80482e0("exit block");
    return 0;
    addr_8057231_7:
    while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
    }
    goto addr_80571de_8;
}

int32_t test_3_blocks_variant_610_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_611_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_80572cf_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_80572cf_2;
            zf4 = g80610b0 == 0;
        } while (zf4);
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_612_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_613_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805739a_6;
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
            zf5 = g80610b4 == 0;
        } while (zf5);
        goto addr_80573f6_9;
    }
    addr_805739a_6:
    fun_80482e0("exit block");
    return 0;
    addr_80573f6_9:
    fun_80482e0("block 4");
    goto addr_805739a_6;
}

int32_t test_3_blocks_variant_618_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_80575d8_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_80575d8_2;
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_80575f9_8;
            }
            break;
        }
        addr_80575f9_8:
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_619_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8057647_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8057668_4;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8057647_2;
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8057668_4;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8057668_4:
        fun_80482e0("block 3");
    }
}

int32_t test_3_blocks_variant_620_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_80576b6_2;
    addr_80576a3_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_80576d7_4:
        fun_80482e0("block 3");
        while (1) {
            while (fun_80482e0("block 4"), zf1 = g80610ac == 0, !zf1) {
                zf2 = g80610b0 == 0;
                if (zf2) 
                    goto addr_80576b6_2;
                zf3 = g80610b4 == 0;
                if (zf3) 
                    goto addr_80576d7_4;
            }
            goto addr_80576a3_3;
            addr_80576b6_2:
            fun_80482e0("block 2");
            zf4 = g80610a4 == 0;
            if (zf4) 
                goto addr_80576a3_3;
            zf5 = g80610a8 == 0;
            if (zf5) 
                break;
        }
    }
}

int32_t test_3_blocks_variant_621_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610b0 == 0;
            if (zf3) 
                break;
            zf4 = g80610b4 == 0;
            if (zf4) 
                continue;
        }
        fun_80482e0("block 3");
        zf5 = g80610ac == 0;
        if (zf5) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_622_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8057794_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        } else {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8057794_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_623_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_8057824_7;
            }
            break;
        }
        addr_8057824_7:
        fun_80482e0("block 3");
        zf5 = g80610ac == 0;
        if (zf5) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_624_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_8057893_7;
            }
            continue;
        }
        addr_8057893_7:
        fun_80482e0("block 3");
        zf5 = g80610ac == 0;
        if (zf5) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_625_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8057902_4;
        fun_80482e0("block 4");
        zf3 = g80610b0 == 0;
        if (zf3) 
            break;
        zf4 = g80610b4 == 0;
    } while (zf4);
    goto addr_8057939_8;
    addr_80578ce_9:
    fun_80482e0("exit block");
    return 0;
    addr_8057902_4:
    while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
    }
    goto addr_80578ce_9;
    addr_8057939_8:
    goto addr_8057902_4;
}

int32_t test_3_blocks_variant_626_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8057950_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8057971_4;
        while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
            zf4 = g80610b4 == 0;
            if (zf4) 
                goto addr_8057950_2;
        }
        break;
    }
    addr_805793d_9:
    fun_80482e0("exit block");
    return 0;
    addr_8057971_4:
    while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
    }
    goto addr_805793d_9;
}

int32_t test_3_blocks_variant_627_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            addr_80579e0_4:
            while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            }
        } else {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_80579e0_4;
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_628_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8057a4f_4;
        while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
            zf4 = g80610b4 == 0;
            if (zf4) 
                goto addr_8057a4f_4;
        }
    }
    addr_8057a1b_9:
    fun_80482e0("exit block");
    return 0;
    addr_8057a4f_4:
    while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
    }
    goto addr_8057a1b_9;
}

int32_t test_3_blocks_variant_629_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8057a9d_2;
    addr_8057a8a_3:
    fun_80482e0("exit block");
    return 0;
    addr_8057abe_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        while (1) {
            fun_80482e0("block 4");
            zf2 = g80610b0 == 0;
            if (zf2) 
                goto addr_8057a8a_3;
            zf3 = g80610b4 == 0;
            if (!zf3) 
                break;
            addr_8057a9d_2:
            fun_80482e0("block 2");
            zf4 = g80610a4 == 0;
            if (zf4) 
                goto addr_8057a8a_3;
            zf5 = g80610a8 == 0;
            if (zf5) 
                goto addr_8057abe_4;
        }
    }
    goto addr_8057a8a_3;
}

int32_t test_3_blocks_variant_630_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8057b0c_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8057b0c_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_631_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            addr_8057b9c_4:
            while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
                addr_8057bb4_6:
                while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                    zf5 = g80610b4 == 0;
                    if (zf5) 
                        goto addr_8057b9c_4;
                }
                break;
            }
        } else {
            goto addr_8057bb4_6;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_632_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8057bea_2;
    addr_8057bd7_3:
    fun_80482e0("exit block");
    return 0;
    addr_8057c0b_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610b0 == 0, !zf2) {
                zf3 = g80610b4 == 0;
                if (zf3) 
                    goto addr_8057c0b_4;
            }
            addr_8057bea_2:
            fun_80482e0("block 2");
            zf4 = g80610a4 == 0;
            if (zf4) 
                goto addr_8057bd7_3;
            zf5 = g80610a8 == 0;
            if (zf5) 
                break;
        }
    }
    goto addr_8057bd7_3;
}

int32_t test_3_blocks_variant_633_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610b0 == 0;
            if (zf3) 
                break;
            zf4 = g80610b4 == 0;
            if (zf4) 
                continue;
        }
        while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_634_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8057cc8_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            }
        } else {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8057cc8_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_635_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_8057d58_7;
            }
            break;
        }
        addr_8057d58_7:
        while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_636_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_8057dc7_7;
            }
            continue;
        }
        addr_8057dc7_7:
        while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_637_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8057e15_2;
    addr_8057e02_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8057e36_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) {
            do {
                addr_8057e15_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_8057e02_3;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    goto addr_8057e36_4;
                addr_8057e4e_7:
                fun_80482e0("block 4");
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8057e02_3;
                zf5 = g80610b4 == 0;
            } while (zf5);
        } else {
            goto addr_8057e4e_7;
        }
    }
}

int32_t test_3_blocks_variant_638_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8057e84_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8057e84_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_639_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8057ef3_2;
    addr_8057ee0_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8057f14_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) {
            addr_8057ef3_2:
            fun_80482e0("block 2");
            zf2 = g80610a4 == 0;
            if (zf2) 
                goto addr_8057ee0_3;
            zf3 = g80610a8 == 0;
            if (zf3) 
                continue;
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8057f14_4;
        }
        goto addr_8057ee0_3;
    }
}

int32_t test_3_blocks_variant_640_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8057f62_2;
    addr_8057f4f_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8057f83_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) {
            while (1) {
                addr_8057f62_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_8057f4f_3;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    break;
                addr_8057f9b_7:
                while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                    zf5 = g80610b4 == 0;
                    if (zf5) 
                        goto addr_8057f83_4;
                }
            }
        } else {
            goto addr_8057f9b_7;
        }
    }
}

int32_t test_3_blocks_variant_641_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8057fd1_2;
    addr_8057fbe_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8057ff2_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) 
            continue;
        while (1) {
            fun_80482e0("block 4");
            zf2 = g80610b0 == 0;
            if (zf2) 
                goto addr_8057fbe_3;
            zf3 = g80610b4 == 0;
            if (!zf3) 
                break;
            addr_8057fd1_2:
            fun_80482e0("block 2");
            zf4 = g80610a4 == 0;
            if (zf4) 
                goto addr_8057fbe_3;
            zf5 = g80610a8 == 0;
            if (zf5) 
                goto addr_8057ff2_4;
        }
    }
}

int32_t test_3_blocks_variant_642_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8058040_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            do {
                fun_80482e0("block 3");
                zf3 = g80610ac == 0;
            } while (zf3);
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8058040_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_643_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (1) {
                addr_80580d0_4:
                fun_80482e0("block 3");
                zf3 = g80610ac == 0;
                if (zf3) 
                    continue;
                addr_80580e8_6:
                while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                    zf5 = g80610b4 == 0;
                    if (zf5) 
                        goto addr_80580d0_4;
                }
                break;
            }
        } else {
            goto addr_80580e8_6;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_644_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_805811e_2;
    addr_805810b_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805813f_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610b0 == 0, !zf2) {
                zf3 = g80610b4 == 0;
                if (zf3) 
                    goto addr_805813f_4;
            }
            addr_805811e_2:
            fun_80482e0("block 2");
            zf4 = g80610a4 == 0;
            if (zf4) 
                goto addr_805810b_3;
            zf5 = g80610a8 == 0;
            if (zf5) 
                break;
        }
    }
}

int32_t test_3_blocks_variant_645_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_805818d_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805818d_2;
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_80581ae_8;
        }
        goto addr_805817a_10;
    }
    addr_80581ae_8:
    fun_80482e0("block 3");
    addr_805817a_10:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_646_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_80581fc_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_80581fc_2;
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805821d_8;
            }
            break;
        }
        addr_805821d_8:
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_647_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_805826b_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805826b_2;
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_805828c_8;
        }
        goto addr_8058258_10;
    }
    while (1) {
        addr_805828c_8:
        fun_80482e0("block 3");
    }
    addr_8058258_10:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_648_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_80582da_2;
    addr_80582c7_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_80582fb_4:
        fun_80482e0("block 3");
        while (1) {
            while (fun_80482e0("block 4"), zf1 = g80610ac == 0, !zf1) {
                zf2 = g80610b0 == 0;
                if (zf2) 
                    goto addr_80582da_2;
                zf3 = g80610b4 == 0;
                if (zf3) 
                    goto addr_80582fb_4;
            }
            goto addr_80582c7_3;
            do {
                addr_80582da_2:
                fun_80482e0("block 2");
                zf4 = g80610a4 == 0;
            } while (zf4);
            zf5 = g80610a8 == 0;
            if (zf5) 
                break;
        }
    }
}

int32_t test_3_blocks_variant_649_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610b0 == 0;
            if (zf3) 
                break;
            zf4 = g80610b4 == 0;
            if (zf4) 
                continue;
        }
        fun_80482e0("block 3");
        zf5 = g80610ac == 0;
        if (zf5) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_650_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_80583b8_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        } else {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_80583b8_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_651_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_8058448_7;
            }
            break;
        }
        addr_8058448_7:
        fun_80482e0("block 3");
        zf5 = g80610ac == 0;
        if (zf5) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_652_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_80584b7_7;
            }
            continue;
        }
        addr_80584b7_7:
        fun_80482e0("block 3");
        zf5 = g80610ac == 0;
        if (zf5) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_653_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        addr_8058505_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            goto addr_8058505_2;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        fun_80482e0("block 4");
        zf3 = g80610b0 == 0;
        if (zf3) 
            goto addr_80584f2_6;
        zf4 = g80610b4 == 0;
    } while (zf4);
    goto addr_805855d_8;
    addr_8058526_9:
    while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
    }
    addr_80584f2_6:
    fun_80482e0("exit block");
    return 0;
    addr_805855d_8:
    goto addr_8058526_9;
}

int32_t test_3_blocks_variant_654_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8058574_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
            zf4 = g80610b4 == 0;
            if (zf4) 
                goto addr_8058574_2;
        }
        goto addr_8058561_8;
    }
    while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
    }
    addr_8058561_8:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_655_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        addr_8058604_4:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
        }
    } else {
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8058604_4;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_656_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
            zf4 = g80610b4 == 0;
            if (zf4) 
                goto addr_8058673_7;
        }
    }
    addr_8058673_7:
    while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_657_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_80586c1_2;
    addr_80586ae_3:
    fun_80482e0("exit block");
    return 0;
    addr_80586e2_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        while (1) {
            fun_80482e0("block 4");
            zf2 = g80610b0 == 0;
            if (zf2) 
                goto addr_80586ae_3;
            zf3 = g80610b4 == 0;
            if (!zf3) 
                break;
            do {
                addr_80586c1_2:
                fun_80482e0("block 2");
                zf4 = g80610a4 == 0;
            } while (zf4);
            zf5 = g80610a8 == 0;
            if (zf5) 
                goto addr_80586e2_4;
        }
    }
    goto addr_80586ae_3;
}

int32_t test_3_blocks_variant_658_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8058730_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8058730_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_659_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        addr_80587c0_4:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            addr_80587d8_6:
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_80587c0_4;
            }
            break;
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_80587d8_6;
    }
}

int32_t test_3_blocks_variant_660_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_805880e_2;
    addr_80587fb_3:
    fun_80482e0("exit block");
    return 0;
    addr_805882f_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610b0 == 0, !zf2) {
                zf3 = g80610b4 == 0;
                if (zf3) 
                    goto addr_805882f_4;
            }
            do {
                addr_805880e_2:
                fun_80482e0("block 2");
                zf4 = g80610a4 == 0;
            } while (zf4);
            zf5 = g80610a8 == 0;
            if (zf5) 
                break;
        }
    }
    goto addr_80587fb_3;
}

int32_t test_3_blocks_variant_661_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610b0 == 0;
            if (zf3) 
                break;
            zf4 = g80610b4 == 0;
            if (zf4) 
                continue;
        }
        while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_662_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_80588ec_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            }
        } else {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_80588ec_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_663_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_805897c_7;
            }
            break;
        }
        addr_805897c_7:
        while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_664_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_80589ca_2;
    addr_80589b7_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_80589eb_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) {
            do {
                addr_80589ca_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_80589ca_2;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    goto addr_80589eb_4;
                addr_8058a03_7:
                fun_80482e0("block 4");
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_80589b7_3;
                zf5 = g80610b4 == 0;
            } while (zf5);
        } else {
            goto addr_8058a03_7;
        }
    }
}

int32_t test_3_blocks_variant_665_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8058a39_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8058a39_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_666_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8058aa8_2;
    addr_8058a95_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8058ac9_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) {
            do {
                addr_8058aa8_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
            } while (zf2);
            zf3 = g80610a8 == 0;
            if (zf3) 
                continue;
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8058ac9_4;
        }
        goto addr_8058a95_3;
    }
}

int32_t test_3_blocks_variant_667_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8058b17_2;
    addr_8058b04_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8058b38_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) 
            continue;
        while (1) {
            fun_80482e0("block 4");
            zf2 = g80610b0 == 0;
            if (zf2) 
                goto addr_8058b04_3;
            zf3 = g80610b4 == 0;
            if (!zf3) 
                break;
            do {
                addr_8058b17_2:
                fun_80482e0("block 2");
                zf4 = g80610a4 == 0;
            } while (zf4);
            zf5 = g80610a8 == 0;
            if (zf5) 
                goto addr_8058b38_4;
        }
    }
}

int32_t test_3_blocks_variant_668_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (1) {
        addr_8058b86_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) {
            do {
                fun_80482e0("block 3");
                zf3 = g80610ac == 0;
            } while (zf3);
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8058b86_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_669_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        while (1) {
            addr_8058c16_4:
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            addr_8058c2e_6:
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8058c16_4;
            }
            break;
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_8058c2e_6;
    }
}

int32_t test_3_blocks_variant_670_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        addr_8058c64_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8058c64_2;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_8058c8e_5;
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
        zf5 = g80610b4 == 0;
    } while (zf5);
    goto addr_8058cbc_9;
    addr_8058c51_10:
    fun_80482e0("exit block");
    return 0;
    addr_8058c8e_5:
    fun_80482e0("block 3");
    goto addr_8058c51_10;
    addr_8058cbc_9:
    goto addr_8058c8e_5;
}

int32_t test_3_blocks_variant_671_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8058cd3_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_8058cfd_5;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8058cd3_2;
        }
        break;
    }
    addr_8058cc0_10:
    fun_80482e0("exit block");
    return 0;
    addr_8058cfd_5:
    fun_80482e0("block 3");
    goto addr_8058cc0_10;
}

int32_t test_3_blocks_variant_672_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8058d61_4;
    addr_8058d2f_5:
    fun_80482e0("exit block");
    return 0;
    addr_8058d61_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        addr_8058d6c_6:
        fun_80482e0("block 3");
        goto addr_8058d2f_5;
    } else {
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8058d6c_6;
        }
        goto addr_8058d2f_5;
    }
}

int32_t test_3_blocks_variant_673_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_8058ddb_5;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8058ddb_5;
        }
    }
    addr_8058d9e_10:
    fun_80482e0("exit block");
    return 0;
    addr_8058ddb_5:
    fun_80482e0("block 3");
    goto addr_8058d9e_10;
}

int32_t test_3_blocks_variant_674_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
            zf5 = g80610b4 == 0;
            if (zf5) 
                continue;
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_675_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8058e8f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            fun_80482e0("block 3");
        } else {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8058e8f_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_676_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8058f28_8;
            }
            break;
        }
        addr_8058f28_8:
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_677_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8058f97_8;
            }
            continue;
        }
        addr_8058f97_8:
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_678_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        addr_8058fdc_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8058fdc_2;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_8059006_5;
        fun_80482e0("block 4");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
        zf5 = g80610b4 == 0;
    } while (zf5);
    goto addr_8059034_9;
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8059006_5:
        fun_80482e0("block 3");
    }
    addr_8059034_9:
    goto addr_8059006_5;
}

int32_t test_3_blocks_variant_679_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_805904b_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_8059075_5;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_805904b_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8059075_5:
        fun_80482e0("block 3");
    }
}

int32_t test_3_blocks_variant_680_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_80590d9_4;
    addr_80590a7_5:
    fun_80482e0("exit block");
    return 0;
    addr_80590d9_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        while (1) {
            addr_80590e4_6:
            fun_80482e0("block 3");
        }
    } else {
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_80590e4_6;
        }
        goto addr_80590a7_5;
    }
}

int32_t test_3_blocks_variant_681_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_8059153_5;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8059153_5;
        }
    }
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8059153_5:
        fun_80482e0("block 3");
    }
}

int32_t test_3_blocks_variant_682_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8059198_2;
    addr_8059185_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_80591c2_4:
        fun_80482e0("block 3");
        while (1) {
            fun_80482e0("block 4");
            zf1 = g80610b0 == 0;
            if (zf1) 
                goto addr_8059185_3;
            zf2 = g80610b4 == 0;
            if (!zf2) 
                break;
            do {
                addr_8059198_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_8059185_3;
                zf4 = g80610a8 == 0;
            } while (zf4);
            zf5 = g80610ac == 0;
            if (zf5) 
                goto addr_80591c2_4;
        }
    }
}

int32_t test_3_blocks_variant_683_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8059207_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            fun_80482e0("block 3");
        }
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_8059207_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_684_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8059295_4;
    addr_8059263_5:
    fun_80482e0("exit block");
    return 0;
    addr_8059295_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        while (1) {
            addr_80592a0_6:
            fun_80482e0("block 3");
            addr_80592af_7:
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_80592a0_6;
            }
            goto addr_8059263_5;
        }
    } else {
        goto addr_80592af_7;
    }
}

int32_t test_3_blocks_variant_685_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_80592e5_2;
    addr_80592d2_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805930f_4:
        fun_80482e0("block 3");
        while (1) {
            while (fun_80482e0("block 4"), zf1 = g80610b0 == 0, !zf1) {
                zf2 = g80610b4 == 0;
                if (zf2) 
                    goto addr_805930f_4;
            }
            do {
                addr_80592e5_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_80592d2_3;
                zf4 = g80610a8 == 0;
            } while (zf4);
            zf5 = g80610ac == 0;
            if (zf5) 
                break;
        }
    }
}

int32_t test_3_blocks_variant_686_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            fun_80482e0("block 3");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        } else {
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_687_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b4 == 0;
            if (zf4) 
                break;
        }
        fun_80482e0("block 3");
        zf5 = g80610b0 == 0;
        if (zf5) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_688_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) 
            goto addr_805945a_5;
        fun_80482e0("block 3");
        zf4 = g80610b0 == 0;
        if (zf4) 
            break;
    }
    addr_805941f_8:
    fun_80482e0("exit block");
    return 0;
    addr_805945a_5:
    while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
    }
    goto addr_805941f_8;
}

int32_t test_3_blocks_variant_689_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b4 == 0;
            if (zf4) 
                continue;
        }
        fun_80482e0("block 3");
        zf5 = g80610b0 == 0;
        if (zf5) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_690_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            fun_80482e0("block 3");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        } else {
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_691_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
            }
        }
        fun_80482e0("block 3");
        zf5 = g80610b0 == 0;
        if (zf5) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_692_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_805960d_4;
    addr_80595db_5:
    fun_80482e0("exit block");
    return 0;
    addr_805960d_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        addr_8059618_6:
        while (fun_80482e0("block 3"), zf4 = g80610b0 == 0, !zf4) {
        }
        goto addr_80595db_5;
    } else {
        fun_80482e0("block 4");
        zf5 = g80610b4 == 0;
        if (zf5) 
            goto addr_80595db_5;
    }
    goto addr_8059618_6;
}

int32_t test_3_blocks_variant_693_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_805967c_4;
    addr_805964a_5:
    fun_80482e0("exit block");
    return 0;
    addr_805967c_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        while (fun_80482e0("block 3"), zf4 = g80610b0 == 0, !zf4) {
        }
        goto addr_805964a_5;
    } else {
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
        }
        goto addr_805964a_5;
    }
}

int32_t test_3_blocks_variant_694_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        addr_80596cc_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_80596cc_2;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_80596f6_5;
        fun_80482e0("block 4");
        zf4 = g80610b4 == 0;
    } while (zf4);
    goto addr_8059724_8;
    addr_80596b9_9:
    fun_80482e0("exit block");
    return 0;
    addr_80596f6_5:
    while (fun_80482e0("block 3"), zf5 = g80610b0 == 0, !zf5) {
    }
    goto addr_80596b9_9;
    addr_8059724_8:
    goto addr_80596f6_5;
}

int32_t test_3_blocks_variant_695_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_8059765_5;
        while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
        }
    }
    addr_8059728_9:
    fun_80482e0("exit block");
    return 0;
    addr_8059765_5:
    while (fun_80482e0("block 3"), zf5 = g80610b0 == 0, !zf5) {
    }
    goto addr_8059728_9;
}

int32_t test_3_blocks_variant_696_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_80597c9_4;
    addr_8059797_5:
    fun_80482e0("exit block");
    return 0;
    addr_80597c9_4:
    zf3 = g80610ac == 0;
    if (!zf3) {
        while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
        }
    }
    while (fun_80482e0("block 3"), zf5 = g80610b0 == 0, !zf5) {
    }
    goto addr_8059797_5;
}

int32_t test_3_blocks_variant_697_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8059838_4;
    addr_8059806_5:
    fun_80482e0("exit block");
    return 0;
    addr_8059838_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        while (fun_80482e0("block 3"), zf4 = g80610b0 == 0, !zf4) {
            addr_805985b_8:
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
        }
        goto addr_8059806_5;
    } else {
        goto addr_805985b_8;
    }
}

int32_t test_3_blocks_variant_698_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8059888_2;
    addr_8059875_3:
    fun_80482e0("exit block");
    return 0;
    addr_80598b2_4:
    while (fun_80482e0("block 3"), zf1 = g80610b0 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610b4 == 0, zf2) {
            do {
                addr_8059888_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_8059875_3;
                zf4 = g80610a8 == 0;
            } while (zf4);
            zf5 = g80610ac == 0;
            if (zf5) 
                goto addr_80598b2_4;
        }
    }
    goto addr_8059875_3;
}

int32_t test_3_blocks_variant_699_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            fun_80482e0("block 3");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_700_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8059985_4;
    addr_8059953_5:
    fun_80482e0("exit block");
    return 0;
    addr_8059985_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        while (fun_80482e0("block 3"), zf4 = g80610b0 == 0, !zf4) {
            addr_80599a8_8:
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            }
        }
        goto addr_8059953_5;
    } else {
        goto addr_80599a8_8;
    }
}

int32_t test_3_blocks_variant_701_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b4 == 0;
            if (zf4) 
                continue;
        }
        while (fun_80482e0("block 3"), zf5 = g80610b0 == 0, !zf5) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_702_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            while (fun_80482e0("block 3"), zf4 = g80610b0 == 0, !zf4) {
            }
        } else {
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_703_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
            }
        }
        while (fun_80482e0("block 3"), zf5 = g80610b0 == 0, !zf5) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_704_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8059b22_2;
    addr_8059b0f_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_8059b4c_4:
        fun_80482e0("block 3");
        zf1 = g80610b0 == 0;
        if (zf1) {
            do {
                addr_8059b22_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_8059b0f_3;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    goto addr_8059b22_2;
                zf4 = g80610ac == 0;
                if (zf4) 
                    goto addr_8059b4c_4;
                addr_8059b64_8:
                fun_80482e0("block 4");
                zf5 = g80610b4 == 0;
            } while (zf5);
        } else {
            goto addr_8059b64_8;
        }
    }
}

int32_t test_3_blocks_variant_705_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    goto addr_8059b91_2;
    addr_8059b7e_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        fun_80482e0("block 3");
        zf1 = g80610b0 == 0;
        if (zf1) {
            do {
                addr_8059b91_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_8059b7e_3;
                zf3 = g80610a8 == 0;
            } while (zf3);
            zf4 = g80610ac == 0;
            if (zf4) 
                continue;
        }
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
        }
    }
}

int32_t test_3_blocks_variant_706_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8059c1f_4;
    fun_80482e0("exit block");
    return 0;
    addr_8059c1f_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        while (1) {
            fun_80482e0("block 3");
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            addr_8059c42_8:
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            }
        }
    } else {
        goto addr_8059c42_8;
    }
}

int32_t g80610b8 = 0;

int32_t test_3_blocks_variant_707_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_8059c6f_2:
        fun_80482e0("block 2");
        addr_8059c7e_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8059c6f_2;
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8059c6f_2;
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_8059c7e_3;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_708_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_8059ce7_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_8059cff_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8059ce7_2;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8059ce7_2;
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_8059cff_4;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_709_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_8059d5f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_8059d77_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8059d5f_2;
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_8059d77_4;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_710_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_8059dd7_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_8059def_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_8059dd7_2;
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_8059def_4;
            }
            goto addr_8059dc4_11;
        }
    }
    addr_8059dc4_11:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_711_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_8059e4f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8059e4f_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_8059e4f_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_712_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_8059ec7_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8059eb4_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8059ec7_2;
            zf4 = g80610b0 == 0;
        } while (zf4);
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_8059ec7_2;
        }
        break;
    }
    addr_8059eb4_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_713_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_8059f3f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_8059f57_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8059f3f_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_8059f57_4;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_714_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_8059fb7_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_8059fcf_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8059fb7_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_8059fcf_4;
            }
            goto addr_8059fb7_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_715_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805a02f_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_805a047_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805a02f_2;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805a02f_2;
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805a047_4;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_716_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805a0a7_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_805a0bf_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805a0a7_2;
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805a0bf_4;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_717_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805a11f_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_805a137_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805a11f_2;
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805a137_4;
            }
            goto addr_805a10c_11;
        }
    }
    addr_805a10c_11:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_718_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805a197_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805a197_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805a197_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_719_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805a20f_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_805a1fc_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805a20f_2;
            zf4 = g80610b0 == 0;
        } while (zf4);
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805a20f_2;
        }
        break;
    }
    addr_805a1fc_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_720_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805a287_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_805a29f_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805a287_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805a29f_4;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_721_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805a2ff_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_805a317_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805a2ff_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805a317_4;
            }
            goto addr_805a2ff_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_722_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805a377_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (!zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610b0 == 0, !zf2) {
                zf3 = g80610b4 == 0;
                if (zf3) 
                    goto addr_805a377_2;
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805a38f_7;
            }
            break;
        }
        addr_805a38f_7:
        while (fun_80482e0("block 3"), zf5 = g80610a8 == 0, !zf5) {
            zf6 = g80610ac == 0;
            if (zf6) 
                goto addr_805a377_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_723_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805a3ef_2;
    addr_805a3dc_3:
    fun_80482e0("exit block");
    return 0;
    addr_805a407_4:
    while (fun_80482e0("block 3"), zf1 = g80610a8 == 0, !zf1) {
        zf2 = g80610ac == 0;
        if (zf2) {
            while (1) {
                addr_805a3ef_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    break;
                addr_805a428_7:
                while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                    zf5 = g80610b4 == 0;
                    if (zf5) 
                        goto addr_805a3ef_2;
                    zf6 = g80610b8 == 0;
                    if (zf6) 
                        goto addr_805a407_4;
                }
                goto addr_805a3dc_3;
            }
        } else {
            goto addr_805a428_7;
        }
    }
    goto addr_805a3dc_3;
}

int32_t test_3_blocks_variant_724_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805a467_2;
    addr_805a454_3:
    fun_80482e0("exit block");
    return 0;
    addr_805a47f_4:
    while (fun_80482e0("block 3"), zf1 = g80610a8 == 0, !zf1) {
        zf2 = g80610ac == 0;
        if (zf2) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_805a467_2;
                zf5 = g80610b8 == 0;
                if (zf5) 
                    goto addr_805a47f_4;
            }
            goto addr_805a454_3;
            addr_805a467_2:
            fun_80482e0("block 2");
            zf6 = g80610a4 == 0;
            if (zf6) 
                break;
        }
    }
    goto addr_805a454_3;
}

int32_t test_3_blocks_variant_725_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805a4df_2;
    addr_805a4cc_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805a4f7_4:
        fun_80482e0("block 3");
        zf1 = g80610a8 == 0;
        if (zf1) {
            while (1) {
                addr_805a4df_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    break;
                addr_805a518_6:
                while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                    zf4 = g80610b4 == 0;
                    if (zf4) 
                        goto addr_805a4df_2;
                    zf5 = g80610b8 == 0;
                    if (zf5) 
                        goto addr_805a4f7_4;
                }
                goto addr_805a4cc_3;
            }
        } else {
            zf6 = g80610ac == 0;
            if (zf6) 
                continue;
            goto addr_805a518_6;
        }
    }
}

int32_t test_3_blocks_variant_726_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805a557_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_805a578_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805a557_2;
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805a578_5;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_727_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805a5cf_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_805a5f0_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805a5cf_2;
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805a5f0_5;
            }
            goto addr_805a5bc_11;
        }
    }
    addr_805a5bc_11:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_728_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805a647_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (1) {
            addr_805a668_5:
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805a647_2;
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805a668_5;
            }
            goto addr_805a634_11;
        }
    }
    addr_805a634_11:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_729_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805a6bf_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805a6bf_2;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805a6bf_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_730_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805a737_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
        zf4 = g80610b0 == 0;
        if (zf4) 
            continue;
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805a737_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_731_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805a7af_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_805a7d0_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805a7af_2;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805a7d0_5;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_732_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805a827_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_805a848_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805a827_2;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805a848_5;
            }
            goto addr_805a827_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_733_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805a89f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                break;
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805a89f_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_734_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805a917_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805a904_6;
            zf4 = g80610b0 == 0;
        } while (zf4);
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805a917_2;
        }
        break;
    }
    addr_805a904_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_735_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_805a9ae_4;
    addr_805a97c_5:
    fun_80482e0("exit block");
    return 0;
    addr_805a9ae_4:
    addr_805a9b0_6:
    while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
        zf4 = g80610b0 == 0;
        if (zf4) 
            continue;
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805a9b0_6;
        }
        break;
    }
    goto addr_805a97c_5;
}

int32_t test_3_blocks_variant_736_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805aa07_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_805aa28_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805aa28_5;
            }
            goto addr_805aa07_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_737_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_805aa6c_9;
            zf6 = g80610b8 == 0;
            if (zf6) 
                break;
        }
    }
    addr_805aa6c_9:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_738_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805aaf7_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805aaf7_2;
            zf4 = g80610b0 == 0;
        } while (zf4);
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805aaf7_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_739_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_805ab90_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805ab90_5;
            }
            goto addr_805ab5c_11;
        }
    }
    addr_805ab5c_11:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_740_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_805ac08_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805ac08_5;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_741_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805ac5f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805ac4c_6;
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805ac5f_2;
            zf5 = g80610b4 == 0;
        } while (zf5);
        fun_80482e0("block 4");
        zf6 = g80610b8 == 0;
        if (zf6) 
            break;
    }
    addr_805ac4c_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_742_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805acd7_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805acd7_2;
            zf5 = g80610b4 == 0;
            if (zf5) 
                continue;
            fun_80482e0("block 4");
            zf6 = g80610b8 == 0;
            if (zf6) 
                break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_743_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805ad3c_6;
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
            zf5 = g80610b4 == 0;
        } while (zf5);
        goto addr_805ad98_9;
    }
    addr_805ad3c_6:
    fun_80482e0("exit block");
    return 0;
    addr_805ad98_9:
    while (fun_80482e0("block 4"), zf6 = g80610b8 == 0, !zf6) {
    }
    goto addr_805ad3c_6;
}

int32_t test_3_blocks_variant_744_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805adc7_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805adc7_2;
            zf5 = g80610b4 == 0;
            if (zf5) 
                continue;
            fun_80482e0("block 4");
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805adc7_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_745_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805ae3f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805ae2c_6;
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805ae3f_2;
            zf5 = g80610b4 == 0;
        } while (zf5);
        while (fun_80482e0("block 4"), zf6 = g80610b8 == 0, !zf6) {
        }
    }
    addr_805ae2c_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_746_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805aeb7_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805aeb7_2;
            zf5 = g80610b4 == 0;
            if (zf5) 
                continue;
            while (fun_80482e0("block 4"), zf6 = g80610b8 == 0, !zf6) {
            }
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_747_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805af2f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_805af2f_2;
                zf5 = g80610b8 == 0;
                if (zf5) 
                    goto addr_805af50_8;
            }
            break;
        }
        addr_805af50_8:
        fun_80482e0("block 3");
        zf6 = g80610ac == 0;
        if (zf6) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_748_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805afa7_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_805afc8_4;
        while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
            zf4 = g80610b4 == 0;
            if (zf4) 
                goto addr_805afa7_2;
            zf5 = g80610b8 == 0;
            if (zf5) 
                goto addr_805afc8_4;
        }
        break;
    }
    addr_805af94_10:
    fun_80482e0("exit block");
    return 0;
    addr_805afc8_4:
    while (fun_80482e0("block 3"), zf6 = g80610ac == 0, !zf6) {
    }
    goto addr_805af94_10;
}

int32_t test_3_blocks_variant_749_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805b01f_2;
    addr_805b00c_3:
    fun_80482e0("exit block");
    return 0;
    addr_805b040_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610b0 == 0, !zf2) {
                zf3 = g80610b4 == 0;
                if (zf3) 
                    goto addr_805b01f_2;
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805b040_4;
            }
            goto addr_805b00c_3;
            addr_805b01f_2:
            fun_80482e0("block 2");
            zf5 = g80610a4 == 0;
            if (zf5) 
                goto addr_805b00c_3;
            zf6 = g80610a8 == 0;
            if (zf6) 
                break;
        }
    }
    goto addr_805b00c_3;
}

int32_t test_3_blocks_variant_750_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805b097_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_805b097_2;
                zf5 = g80610b8 == 0;
                if (zf5) 
                    goto addr_805b0b8_8;
            }
            break;
        }
        addr_805b0b8_8:
        while (fun_80482e0("block 3"), zf6 = g80610ac == 0, !zf6) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_751_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805b10f_2;
    addr_805b0fc_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805b130_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) {
            while (1) {
                addr_805b10f_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_805b0fc_3;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    break;
                addr_805b148_7:
                while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                    zf5 = g80610b4 == 0;
                    if (zf5) 
                        goto addr_805b10f_2;
                    zf6 = g80610b8 == 0;
                    if (zf6) 
                        goto addr_805b130_4;
                }
                goto addr_805b0fc_3;
            }
        } else {
            goto addr_805b148_7;
        }
    }
}

int32_t test_3_blocks_variant_752_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805b187_2;
    addr_805b174_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805b1a8_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610b0 == 0, !zf2) {
                zf3 = g80610b4 == 0;
                if (zf3) 
                    goto addr_805b187_2;
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805b1a8_4;
            }
            goto addr_805b174_3;
            addr_805b187_2:
            fun_80482e0("block 2");
            zf5 = g80610a4 == 0;
            if (zf5) 
                goto addr_805b174_3;
            zf6 = g80610a8 == 0;
            if (zf6) 
                break;
        }
    }
}

int32_t test_3_blocks_variant_753_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805b1ff_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610b4 == 0;
            if (zf3) 
                break;
            zf4 = g80610b8 == 0;
            if (zf4) 
                continue;
        }
        while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
            zf6 = g80610b0 == 0;
            if (zf6) 
                goto addr_805b1ff_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_754_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805b277_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_805b277_2;
            }
            break;
        } else {
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805b277_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_755_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805b2ef_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b4 == 0, !zf3) {
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805b310_7;
            }
            break;
        }
        addr_805b310_7:
        while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
            zf6 = g80610b0 == 0;
            if (zf6) 
                goto addr_805b2ef_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_756_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805b367_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b4 == 0, !zf3) {
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805b388_7;
            }
            continue;
        }
        addr_805b388_7:
        while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
            zf6 = g80610b0 == 0;
            if (zf6) 
                goto addr_805b367_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_757_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805b3df_2;
    addr_805b3cc_3:
    fun_80482e0("exit block");
    return 0;
    addr_805b400_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) {
            do {
                addr_805b3df_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_805b3cc_3;
                zf4 = g80610a8 == 0;
                if (zf4) 
                    goto addr_805b400_4;
                addr_805b421_8:
                fun_80482e0("block 4");
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805b3cc_3;
                zf6 = g80610b8 == 0;
            } while (zf6);
        } else {
            goto addr_805b421_8;
        }
    }
    goto addr_805b3cc_3;
}

int32_t test_3_blocks_variant_758_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805b457_2;
    addr_805b444_3:
    fun_80482e0("exit block");
    return 0;
    addr_805b478_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) {
            addr_805b457_2:
            fun_80482e0("block 2");
            zf3 = g80610a4 == 0;
            if (zf3) 
                break;
            zf4 = g80610a8 == 0;
            if (zf4) 
                continue;
        }
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805b478_4;
        }
        break;
    }
    goto addr_805b444_3;
}

int32_t test_3_blocks_variant_759_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805b4cf_2;
    addr_805b4bc_3:
    fun_80482e0("exit block");
    return 0;
    addr_805b4f0_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) {
            while (1) {
                addr_805b4cf_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_805b4bc_3;
                zf4 = g80610a8 == 0;
                if (zf4) 
                    break;
                addr_805b511_8:
                while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                    zf6 = g80610b8 == 0;
                    if (zf6) 
                        goto addr_805b4f0_4;
                }
            }
        } else {
            goto addr_805b511_8;
        }
    }
    goto addr_805b4bc_3;
}

int32_t test_3_blocks_variant_760_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            addr_805b568_4:
            while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    continue;
                addr_805b589_7:
                while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                    zf6 = g80610b8 == 0;
                    if (zf6) 
                        goto addr_805b568_4;
                }
                break;
            }
        } else {
            goto addr_805b589_7;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_761_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805b5bf_2;
    addr_805b5ac_3:
    fun_80482e0("exit block");
    return 0;
    addr_805b5e0_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf3 = g80610b4 == 0, !zf3) {
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805b5e0_4;
            }
            addr_805b5bf_2:
            fun_80482e0("block 2");
            zf5 = g80610a4 == 0;
            if (zf5) 
                goto addr_805b5ac_3;
            zf6 = g80610a8 == 0;
            if (zf6) 
                break;
        }
    }
    goto addr_805b5ac_3;
}

int32_t test_3_blocks_variant_762_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805b637_2;
    addr_805b624_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805b658_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) {
            while (1) {
                addr_805b637_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_805b624_3;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    break;
                addr_805b679_7:
                while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
                    zf5 = g80610b8 == 0;
                    if (zf5) 
                        goto addr_805b658_4;
                }
            }
        } else {
            zf6 = g80610b0 == 0;
            if (zf6) 
                continue;
            goto addr_805b679_7;
        }
    }
}

int32_t test_3_blocks_variant_763_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805b6af_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_805b6af_2;
                zf5 = g80610b8 == 0;
                if (zf5) 
                    goto addr_805b6d0_8;
            }
            break;
        }
        addr_805b6d0_8:
        fun_80482e0("block 3");
        zf6 = g80610ac == 0;
        if (zf6) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_764_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805b727_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
            zf4 = g80610b4 == 0;
            if (zf4) 
                goto addr_805b727_2;
            zf5 = g80610b8 == 0;
            if (zf5) 
                goto addr_805b748_8;
        }
        goto addr_805b714_10;
    }
    addr_805b748_8:
    while (fun_80482e0("block 3"), zf6 = g80610ac == 0, !zf6) {
    }
    addr_805b714_10:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_765_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805b79f_2;
    addr_805b78c_3:
    fun_80482e0("exit block");
    return 0;
    addr_805b7c0_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610b0 == 0, !zf2) {
                zf3 = g80610b4 == 0;
                if (zf3) 
                    goto addr_805b79f_2;
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805b7c0_4;
            }
            goto addr_805b78c_3;
            do {
                addr_805b79f_2:
                fun_80482e0("block 2");
                zf5 = g80610a4 == 0;
            } while (zf5);
            zf6 = g80610a8 == 0;
            if (zf6) 
                break;
        }
    }
    goto addr_805b78c_3;
}

int32_t test_3_blocks_variant_766_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805b817_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b0 == 0, !zf3) {
                zf4 = g80610b4 == 0;
                if (zf4) 
                    goto addr_805b817_2;
                zf5 = g80610b8 == 0;
                if (zf5) 
                    goto addr_805b838_8;
            }
            break;
        }
        addr_805b838_8:
        while (fun_80482e0("block 3"), zf6 = g80610ac == 0, !zf6) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_767_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805b88f_2;
    addr_805b87c_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805b8b0_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) {
            while (1) {
                addr_805b88f_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    continue;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    break;
                addr_805b8c8_7:
                while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                    zf5 = g80610b4 == 0;
                    if (zf5) 
                        goto addr_805b88f_2;
                    zf6 = g80610b8 == 0;
                    if (zf6) 
                        goto addr_805b8b0_4;
                }
                goto addr_805b87c_3;
            }
        } else {
            goto addr_805b8c8_7;
        }
    }
}

int32_t test_3_blocks_variant_768_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805b907_2;
    addr_805b8f4_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805b928_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610b0 == 0, !zf2) {
                zf3 = g80610b4 == 0;
                if (zf3) 
                    goto addr_805b907_2;
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805b928_4;
            }
            goto addr_805b8f4_3;
            do {
                addr_805b907_2:
                fun_80482e0("block 2");
                zf5 = g80610a4 == 0;
            } while (zf5);
            zf6 = g80610a8 == 0;
            if (zf6) 
                break;
        }
    }
}

int32_t test_3_blocks_variant_769_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805b97f_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
            zf3 = g80610b4 == 0;
            if (zf3) 
                break;
            zf4 = g80610b8 == 0;
            if (zf4) 
                continue;
        }
        while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
            zf6 = g80610b0 == 0;
            if (zf6) 
                goto addr_805b97f_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_770_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805b9f7_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_805b9f7_2;
            }
            break;
        } else {
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805b9f7_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_771_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805ba6f_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b4 == 0, !zf3) {
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805ba90_7;
            }
            break;
        }
        addr_805ba90_7:
        while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
            zf6 = g80610b0 == 0;
            if (zf6) 
                goto addr_805ba6f_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_772_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (1) {
        addr_805bae7_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b4 == 0, !zf3) {
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805bb08_7;
            }
            continue;
        }
        addr_805bb08_7:
        while (fun_80482e0("block 3"), zf5 = g80610ac == 0, !zf5) {
            zf6 = g80610b0 == 0;
            if (zf6) 
                goto addr_805bae7_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_773_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805bb5f_2;
    addr_805bb4c_3:
    fun_80482e0("exit block");
    return 0;
    addr_805bb80_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) {
            do {
                addr_805bb5f_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_805bb5f_2;
                zf4 = g80610a8 == 0;
                if (zf4) 
                    goto addr_805bb80_4;
                addr_805bba1_8:
                fun_80482e0("block 4");
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805bb4c_3;
                zf6 = g80610b8 == 0;
            } while (zf6);
        } else {
            goto addr_805bba1_8;
        }
    }
    goto addr_805bb4c_3;
}

int32_t test_3_blocks_variant_774_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805bbd7_2;
    addr_805bbc4_3:
    fun_80482e0("exit block");
    return 0;
    addr_805bbf8_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) {
            do {
                addr_805bbd7_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
            } while (zf3);
            zf4 = g80610a8 == 0;
            if (zf4) 
                continue;
        }
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805bbf8_4;
        }
        break;
    }
    goto addr_805bbc4_3;
}

int32_t test_3_blocks_variant_775_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805bc4f_2;
    addr_805bc3c_3:
    fun_80482e0("exit block");
    return 0;
    addr_805bc70_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) {
            while (1) {
                addr_805bc4f_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    continue;
                zf4 = g80610a8 == 0;
                if (zf4) 
                    break;
                addr_805bc91_8:
                while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                    zf6 = g80610b8 == 0;
                    if (zf6) 
                        goto addr_805bc70_4;
                }
            }
        } else {
            goto addr_805bc91_8;
        }
    }
    goto addr_805bc3c_3;
}

int32_t test_3_blocks_variant_776_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        addr_805bce8_4:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            addr_805bd09_7:
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805bce8_4;
            }
            break;
        }
        fun_80482e0("exit block");
        return 0;
    } else {
        goto addr_805bd09_7;
    }
}

int32_t test_3_blocks_variant_777_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805bd3f_2;
    addr_805bd2c_3:
    fun_80482e0("exit block");
    return 0;
    addr_805bd60_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf3 = g80610b4 == 0, !zf3) {
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805bd60_4;
            }
            do {
                addr_805bd3f_2:
                fun_80482e0("block 2");
                zf5 = g80610a4 == 0;
            } while (zf5);
            zf6 = g80610a8 == 0;
            if (zf6) 
                break;
        }
    }
    goto addr_805bd2c_3;
}

int32_t test_3_blocks_variant_778_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805bdb7_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_805bde1_5;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_805bdb7_2;
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805bde1_5;
        }
        break;
    }
    addr_805bda4_11:
    fun_80482e0("exit block");
    return 0;
    addr_805bde1_5:
    fun_80482e0("block 3");
    goto addr_805bda4_11;
}

int32_t test_3_blocks_variant_779_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805be2f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805be2f_2;
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805be59_9;
            }
            break;
        }
        addr_805be59_9:
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_780_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805bea7_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_805bed1_5;
        while (fun_80482e0("block 4"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_805bea7_2;
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805bed1_5;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805bed1_5:
        fun_80482e0("block 3");
    }
}

int32_t test_3_blocks_variant_781_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805bf1f_2;
    addr_805bf0c_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805bf49_4:
        fun_80482e0("block 3");
        while (1) {
            while (fun_80482e0("block 4"), zf1 = g80610b0 == 0, !zf1) {
                zf2 = g80610b4 == 0;
                if (zf2) 
                    goto addr_805bf1f_2;
                zf3 = g80610b8 == 0;
                if (zf3) 
                    goto addr_805bf49_4;
            }
            goto addr_805bf0c_3;
            do {
                addr_805bf1f_2:
                fun_80482e0("block 2");
                zf4 = g80610a4 == 0;
                if (zf4) 
                    goto addr_805bf0c_3;
                zf5 = g80610a8 == 0;
            } while (zf5);
            zf6 = g80610ac == 0;
            if (zf6) 
                break;
        }
    }
}

int32_t test_3_blocks_variant_782_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b4 == 0;
            if (zf4) 
                break;
            zf5 = g80610b8 == 0;
            if (zf5) 
                continue;
        }
        fun_80482e0("block 3");
        zf6 = g80610b0 == 0;
        if (zf6) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_783_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805c00f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            fun_80482e0("block 3");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        } else {
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805c00f_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_784_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
                zf5 = g80610b8 == 0;
                if (zf5) 
                    goto addr_805c0b1_8;
            }
            break;
        }
        addr_805c0b1_8:
        fun_80482e0("block 3");
        zf6 = g80610b0 == 0;
        if (zf6) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_785_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
                zf5 = g80610b8 == 0;
                if (zf5) 
                    goto addr_805c129_8;
            }
            continue;
        }
        addr_805c129_8:
        fun_80482e0("block 3");
        zf6 = g80610b0 == 0;
        if (zf6) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_786_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    do {
        addr_805c177_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_805c177_2;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_805c1a1_5;
        fun_80482e0("block 4");
        zf4 = g80610b4 == 0;
        if (zf4) 
            break;
        zf5 = g80610b8 == 0;
    } while (zf5);
    goto addr_805c1d8_9;
    addr_805c164_10:
    fun_80482e0("exit block");
    return 0;
    addr_805c1a1_5:
    while (fun_80482e0("block 3"), zf6 = g80610b0 == 0, !zf6) {
    }
    goto addr_805c164_10;
    addr_805c1d8_9:
    goto addr_805c1a1_5;
}

int32_t test_3_blocks_variant_787_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805c1ef_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_805c219_5;
        while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
            zf5 = g80610b8 == 0;
            if (zf5) 
                goto addr_805c1ef_2;
        }
        break;
    }
    addr_805c1dc_10:
    fun_80482e0("exit block");
    return 0;
    addr_805c219_5:
    while (fun_80482e0("block 3"), zf6 = g80610b0 == 0, !zf6) {
    }
    goto addr_805c1dc_10;
}

int32_t test_3_blocks_variant_788_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_805c286_4;
    addr_805c254_5:
    fun_80482e0("exit block");
    return 0;
    addr_805c286_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        addr_805c291_6:
        while (fun_80482e0("block 3"), zf4 = g80610b0 == 0, !zf4) {
        }
        goto addr_805c254_5;
    } else {
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805c291_6;
        }
        goto addr_805c254_5;
    }
}

int32_t test_3_blocks_variant_789_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_805c309_5;
        while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
            zf5 = g80610b8 == 0;
            if (zf5) 
                goto addr_805c309_5;
        }
    }
    addr_805c2cc_10:
    fun_80482e0("exit block");
    return 0;
    addr_805c309_5:
    while (fun_80482e0("block 3"), zf6 = g80610b0 == 0, !zf6) {
    }
    goto addr_805c2cc_10;
}

int32_t test_3_blocks_variant_790_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805c357_2;
    addr_805c344_3:
    fun_80482e0("exit block");
    return 0;
    addr_805c381_4:
    while (fun_80482e0("block 3"), zf1 = g80610b0 == 0, !zf1) {
        while (1) {
            fun_80482e0("block 4");
            zf2 = g80610b4 == 0;
            if (zf2) 
                goto addr_805c344_3;
            zf3 = g80610b8 == 0;
            if (!zf3) 
                break;
            do {
                addr_805c357_2:
                fun_80482e0("block 2");
                zf4 = g80610a4 == 0;
                if (zf4) 
                    goto addr_805c344_3;
                zf5 = g80610a8 == 0;
            } while (zf5);
            zf6 = g80610ac == 0;
            if (zf6) 
                goto addr_805c381_4;
        }
    }
    goto addr_805c344_3;
}

int32_t test_3_blocks_variant_791_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805c3cf_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            fun_80482e0("block 3");
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
        }
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805c3cf_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_792_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_805c466_4;
    addr_805c434_5:
    fun_80482e0("exit block");
    return 0;
    addr_805c466_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        addr_805c471_6:
        while (fun_80482e0("block 3"), zf4 = g80610b0 == 0, !zf4) {
            addr_805c489_8:
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805c471_6;
            }
            break;
        }
        goto addr_805c434_5;
    } else {
        goto addr_805c489_8;
    }
}

int32_t test_3_blocks_variant_793_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805c4bf_2;
    addr_805c4ac_3:
    fun_80482e0("exit block");
    return 0;
    addr_805c4e9_4:
    while (fun_80482e0("block 3"), zf1 = g80610b0 == 0, !zf1) {
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610b4 == 0, !zf2) {
                zf3 = g80610b8 == 0;
                if (zf3) 
                    goto addr_805c4e9_4;
            }
            do {
                addr_805c4bf_2:
                fun_80482e0("block 2");
                zf4 = g80610a4 == 0;
                if (zf4) 
                    goto addr_805c4ac_3;
                zf5 = g80610a8 == 0;
            } while (zf5);
            zf6 = g80610ac == 0;
            if (zf6) 
                break;
        }
    }
    goto addr_805c4ac_3;
}

int32_t test_3_blocks_variant_794_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b4 == 0;
            if (zf4) 
                break;
            zf5 = g80610b8 == 0;
            if (zf5) 
                continue;
        }
        while (fun_80482e0("block 3"), zf6 = g80610b0 == 0, !zf6) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_795_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805c5af_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            while (fun_80482e0("block 3"), zf4 = g80610b0 == 0, !zf4) {
            }
        } else {
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805c5af_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_796_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
                zf5 = g80610b8 == 0;
                if (zf5) 
                    goto addr_805c651_8;
            }
            break;
        }
        addr_805c651_8:
        while (fun_80482e0("block 3"), zf6 = g80610b0 == 0, !zf6) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_797_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
                zf5 = g80610b8 == 0;
                if (zf5) 
                    goto addr_805c6c9_8;
            }
            continue;
        }
        addr_805c6c9_8:
        while (fun_80482e0("block 3"), zf6 = g80610b0 == 0, !zf6) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_798_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805c717_2;
    addr_805c704_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805c741_4:
        fun_80482e0("block 3");
        zf1 = g80610b0 == 0;
        if (zf1) {
            do {
                addr_805c717_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_805c704_3;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    goto addr_805c717_2;
                zf4 = g80610ac == 0;
                if (zf4) 
                    goto addr_805c741_4;
                addr_805c759_8:
                fun_80482e0("block 4");
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805c704_3;
                zf6 = g80610b8 == 0;
            } while (zf6);
        } else {
            goto addr_805c759_8;
        }
    }
}

int32_t test_3_blocks_variant_799_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805c78f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            fun_80482e0("block 3");
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
        }
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805c78f_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_800_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805c807_2;
    addr_805c7f4_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805c831_4:
        fun_80482e0("block 3");
        zf1 = g80610b0 == 0;
        if (zf1) {
            do {
                addr_805c807_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_805c7f4_3;
                zf3 = g80610a8 == 0;
            } while (zf3);
            zf4 = g80610ac == 0;
            if (zf4) 
                continue;
        }
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805c831_4;
        }
        goto addr_805c7f4_3;
    }
}

int32_t test_3_blocks_variant_801_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805c87f_2;
    addr_805c86c_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805c8a9_4:
        fun_80482e0("block 3");
        zf1 = g80610b0 == 0;
        if (zf1) {
            while (1) {
                addr_805c87f_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_805c86c_3;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    continue;
                zf4 = g80610ac == 0;
                if (zf4) 
                    break;
                addr_805c8c1_8:
                while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                    zf6 = g80610b8 == 0;
                    if (zf6) 
                        goto addr_805c8a9_4;
                }
            }
        } else {
            goto addr_805c8c1_8;
        }
    }
}

int32_t test_3_blocks_variant_802_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805c8f7_2;
    addr_805c8e4_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805c921_4:
        fun_80482e0("block 3");
        zf1 = g80610b0 == 0;
        if (zf1) 
            continue;
        while (1) {
            fun_80482e0("block 4");
            zf2 = g80610b4 == 0;
            if (zf2) 
                goto addr_805c8e4_3;
            zf3 = g80610b8 == 0;
            if (!zf3) 
                break;
            do {
                addr_805c8f7_2:
                fun_80482e0("block 2");
                zf4 = g80610a4 == 0;
                if (zf4) 
                    goto addr_805c8e4_3;
                zf5 = g80610a8 == 0;
            } while (zf5);
            zf6 = g80610ac == 0;
            if (zf6) 
                goto addr_805c921_4;
        }
    }
}

int32_t test_3_blocks_variant_803_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    addr_805c96f_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            do {
                fun_80482e0("block 3");
                zf4 = g80610b0 == 0;
            } while (zf4);
        }
        while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
            zf6 = g80610b8 == 0;
            if (zf6) 
                goto addr_805c96f_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_804_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_805ca06_4;
    addr_805c9d4_5:
    fun_80482e0("exit block");
    return 0;
    addr_805ca06_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        while (1) {
            addr_805ca11_6:
            fun_80482e0("block 3");
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            addr_805ca29_8:
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805ca11_6;
            }
            goto addr_805c9d4_5;
        }
    } else {
        goto addr_805ca29_8;
    }
}

int32_t test_3_blocks_variant_805_edges_10() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;

    goto addr_805ca5f_2;
    addr_805ca4c_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805ca89_4:
        fun_80482e0("block 3");
        zf1 = g80610b0 == 0;
        if (zf1) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610b4 == 0, !zf2) {
                zf3 = g80610b8 == 0;
                if (zf3) 
                    goto addr_805ca89_4;
            }
            do {
                addr_805ca5f_2:
                fun_80482e0("block 2");
                zf4 = g80610a4 == 0;
                if (zf4) 
                    goto addr_805ca4c_3;
                zf5 = g80610a8 == 0;
            } while (zf5);
            zf6 = g80610ac == 0;
            if (zf6) 
                break;
        }
    }
}

int32_t g80610bc = 0;

int32_t test_3_blocks_variant_806_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805cad7_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        addr_805caef_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805cad7_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805cad7_2;
                zf7 = g80610bc == 0;
                if (zf7) 
                    goto addr_805caef_4;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_807_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    while (1) {
        addr_805cb58_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        addr_805cb70_4:
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805cb58_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805cb58_2;
                zf7 = g80610bc == 0;
                if (zf7) 
                    goto addr_805cb70_4;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_808_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805cbd9_2;
    addr_805cbc6_3:
    fun_80482e0("exit block");
    return 0;
    addr_805cbf1_4:
    while (fun_80482e0("block 3"), zf1 = g80610a8 == 0, !zf1) {
        zf2 = g80610ac == 0;
        if (zf2) {
            while (1) {
                addr_805cbd9_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    break;
                addr_805cc1b_7:
                while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
                    zf5 = g80610b8 == 0;
                    if (zf5) 
                        goto addr_805cbd9_2;
                    zf6 = g80610bc == 0;
                    if (zf6) 
                        goto addr_805cbf1_4;
                }
                goto addr_805cbc6_3;
            }
        } else {
            zf7 = g80610b0 == 0;
            if (zf7) 
                continue;
            goto addr_805cc1b_7;
        }
    }
    goto addr_805cbc6_3;
}

int32_t test_3_blocks_variant_809_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805cc5a_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_805cc7b_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805cc5a_2;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805cc5a_2;
                zf7 = g80610bc == 0;
                if (zf7) 
                    goto addr_805cc7b_5;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_810_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805ccdb_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_805ccfc_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805ccdb_2;
                zf7 = g80610bc == 0;
                if (zf7) 
                    goto addr_805ccfc_5;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_811_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805cd5c_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_805cd7d_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805cd5c_2;
                zf7 = g80610bc == 0;
                if (zf7) 
                    goto addr_805cd7d_5;
            }
            goto addr_805cd49_12;
        }
    }
    addr_805cd49_12:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_812_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805cddd_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805cddd_2;
            zf5 = g80610b4 == 0;
            if (zf5) 
                continue;
            fun_80482e0("block 4");
            zf6 = g80610b8 == 0;
            if (zf6) 
                break;
            zf7 = g80610bc == 0;
            if (zf7) 
                goto addr_805cddd_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_813_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805ce5e_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_805ce4b_6;
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805ce5e_2;
            zf5 = g80610b4 == 0;
        } while (zf5);
        while (fun_80482e0("block 4"), zf6 = g80610b8 == 0, !zf6) {
            zf7 = g80610bc == 0;
            if (zf7) 
                goto addr_805ce5e_2;
        }
        break;
    }
    addr_805ce4b_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_814_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805cedf_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_805cf00_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805cedf_2;
            zf5 = g80610b4 == 0;
            if (zf5) 
                continue;
            while (fun_80482e0("block 4"), zf6 = g80610b8 == 0, !zf6) {
                zf7 = g80610bc == 0;
                if (zf7) 
                    goto addr_805cf00_5;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_815_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805cf60_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_805cf81_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805cf60_2;
            zf5 = g80610b4 == 0;
            if (zf5) 
                continue;
            while (fun_80482e0("block 4"), zf6 = g80610b8 == 0, !zf6) {
                zf7 = g80610bc == 0;
                if (zf7) 
                    goto addr_805cf81_5;
            }
            goto addr_805cf60_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_816_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805cfe1_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b4 == 0, !zf3) {
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805cfe1_2;
                zf5 = g80610bc == 0;
                if (zf5) 
                    goto addr_805d002_8;
            }
            break;
        }
        addr_805d002_8:
        while (fun_80482e0("block 3"), zf6 = g80610ac == 0, !zf6) {
            zf7 = g80610b0 == 0;
            if (zf7) 
                goto addr_805cfe1_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_817_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805d062_2;
    addr_805d04f_3:
    fun_80482e0("exit block");
    return 0;
    addr_805d083_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) {
            while (1) {
                addr_805d062_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_805d04f_3;
                zf4 = g80610a8 == 0;
                if (zf4) 
                    break;
                addr_805d0a4_8:
                while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                    zf6 = g80610b8 == 0;
                    if (zf6) 
                        goto addr_805d062_2;
                    zf7 = g80610bc == 0;
                    if (zf7) 
                        goto addr_805d083_4;
                }
                goto addr_805d04f_3;
            }
        } else {
            goto addr_805d0a4_8;
        }
    }
    goto addr_805d04f_3;
}

int32_t test_3_blocks_variant_818_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805d0e3_2;
    addr_805d0d0_3:
    fun_80482e0("exit block");
    return 0;
    addr_805d104_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf3 = g80610b4 == 0, !zf3) {
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805d0e3_2;
                zf5 = g80610bc == 0;
                if (zf5) 
                    goto addr_805d104_4;
            }
            goto addr_805d0d0_3;
            addr_805d0e3_2:
            fun_80482e0("block 2");
            zf6 = g80610a4 == 0;
            if (zf6) 
                goto addr_805d0d0_3;
            zf7 = g80610a8 == 0;
            if (zf7) 
                break;
        }
    }
    goto addr_805d0d0_3;
}

int32_t test_3_blocks_variant_819_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805d164_2;
    addr_805d151_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805d185_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) {
            while (1) {
                addr_805d164_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_805d151_3;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    break;
                addr_805d1a6_7:
                while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
                    zf5 = g80610b8 == 0;
                    if (zf5) 
                        goto addr_805d164_2;
                    zf6 = g80610bc == 0;
                    if (zf6) 
                        goto addr_805d185_4;
                }
                goto addr_805d151_3;
            }
        } else {
            zf7 = g80610b0 == 0;
            if (zf7) 
                continue;
            goto addr_805d1a6_7;
        }
    }
}

int32_t test_3_blocks_variant_820_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    while (1) {
        addr_805d1e5_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (!zf2) {
            while (fun_80482e0("block 4"), zf3 = g80610b4 == 0, !zf3) {
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805d1e5_2;
                zf5 = g80610bc == 0;
                if (zf5) 
                    goto addr_805d206_8;
            }
            break;
        }
        addr_805d206_8:
        while (fun_80482e0("block 3"), zf6 = g80610ac == 0, !zf6) {
            zf7 = g80610b0 == 0;
            if (zf7) 
                goto addr_805d1e5_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_821_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805d266_2;
    addr_805d253_3:
    fun_80482e0("exit block");
    return 0;
    addr_805d287_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) {
            while (1) {
                addr_805d266_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    continue;
                zf4 = g80610a8 == 0;
                if (zf4) 
                    break;
                addr_805d2a8_8:
                while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                    zf6 = g80610b8 == 0;
                    if (zf6) 
                        goto addr_805d266_2;
                    zf7 = g80610bc == 0;
                    if (zf7) 
                        goto addr_805d287_4;
                }
                goto addr_805d253_3;
            }
        } else {
            goto addr_805d2a8_8;
        }
    }
    goto addr_805d253_3;
}

int32_t test_3_blocks_variant_822_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805d2e7_2;
    addr_805d2d4_3:
    fun_80482e0("exit block");
    return 0;
    addr_805d308_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf3 = g80610b4 == 0, !zf3) {
                zf4 = g80610b8 == 0;
                if (zf4) 
                    goto addr_805d2e7_2;
                zf5 = g80610bc == 0;
                if (zf5) 
                    goto addr_805d308_4;
            }
            goto addr_805d2d4_3;
            do {
                addr_805d2e7_2:
                fun_80482e0("block 2");
                zf6 = g80610a4 == 0;
            } while (zf6);
            zf7 = g80610a8 == 0;
            if (zf7) 
                break;
        }
    }
    goto addr_805d2d4_3;
}

int32_t test_3_blocks_variant_823_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805d368_2;
    addr_805d355_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805d389_4:
        fun_80482e0("block 3");
        zf1 = g80610ac == 0;
        if (zf1) {
            while (1) {
                addr_805d368_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    continue;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    break;
                addr_805d3aa_7:
                while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
                    zf5 = g80610b8 == 0;
                    if (zf5) 
                        goto addr_805d368_2;
                    zf6 = g80610bc == 0;
                    if (zf6) 
                        goto addr_805d389_4;
                }
                goto addr_805d355_3;
            }
        } else {
            zf7 = g80610b0 == 0;
            if (zf7) 
                continue;
            goto addr_805d3aa_7;
        }
    }
}

int32_t test_3_blocks_variant_824_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805d3e9_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
                zf5 = g80610b8 == 0;
                if (zf5) 
                    goto addr_805d3e9_2;
                zf6 = g80610bc == 0;
                if (zf6) 
                    goto addr_805d413_9;
            }
            break;
        }
        addr_805d413_9:
        fun_80482e0("block 3");
        zf7 = g80610b0 == 0;
        if (zf7) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_825_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805d46a_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_805d494_5;
        while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
            zf5 = g80610b8 == 0;
            if (zf5) 
                goto addr_805d46a_2;
            zf6 = g80610bc == 0;
            if (zf6) 
                goto addr_805d494_5;
        }
        break;
    }
    addr_805d457_11:
    fun_80482e0("exit block");
    return 0;
    addr_805d494_5:
    while (fun_80482e0("block 3"), zf7 = g80610b0 == 0, !zf7) {
    }
    goto addr_805d457_11;
}

int32_t test_3_blocks_variant_826_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805d4eb_2;
    addr_805d4d8_3:
    fun_80482e0("exit block");
    return 0;
    addr_805d515_4:
    while (fun_80482e0("block 3"), zf1 = g80610b0 == 0, !zf1) {
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610b4 == 0, !zf2) {
                zf3 = g80610b8 == 0;
                if (zf3) 
                    goto addr_805d4eb_2;
                zf4 = g80610bc == 0;
                if (zf4) 
                    goto addr_805d515_4;
            }
            goto addr_805d4d8_3;
            do {
                addr_805d4eb_2:
                fun_80482e0("block 2");
                zf5 = g80610a4 == 0;
                if (zf5) 
                    goto addr_805d4d8_3;
                zf6 = g80610a8 == 0;
            } while (zf6);
            zf7 = g80610ac == 0;
            if (zf7) 
                break;
        }
    }
    goto addr_805d4d8_3;
}

int32_t test_3_blocks_variant_827_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805d56c_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b4 == 0, !zf4) {
                zf5 = g80610b8 == 0;
                if (zf5) 
                    goto addr_805d56c_2;
                zf6 = g80610bc == 0;
                if (zf6) 
                    goto addr_805d596_9;
            }
            break;
        }
        addr_805d596_9:
        while (fun_80482e0("block 3"), zf7 = g80610b0 == 0, !zf7) {
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_828_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805d5ed_2;
    addr_805d5da_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805d617_4:
        fun_80482e0("block 3");
        zf1 = g80610b0 == 0;
        if (zf1) {
            while (1) {
                addr_805d5ed_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_805d5da_3;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    continue;
                zf4 = g80610ac == 0;
                if (zf4) 
                    break;
                addr_805d62f_8:
                while (fun_80482e0("block 4"), zf5 = g80610b4 == 0, !zf5) {
                    zf6 = g80610b8 == 0;
                    if (zf6) 
                        goto addr_805d5ed_2;
                    zf7 = g80610bc == 0;
                    if (zf7) 
                        goto addr_805d617_4;
                }
                goto addr_805d5da_3;
            }
        } else {
            goto addr_805d62f_8;
        }
    }
}

int32_t test_3_blocks_variant_829_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805d66e_2;
    addr_805d65b_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805d698_4:
        fun_80482e0("block 3");
        zf1 = g80610b0 == 0;
        if (zf1) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf2 = g80610b4 == 0, !zf2) {
                zf3 = g80610b8 == 0;
                if (zf3) 
                    goto addr_805d66e_2;
                zf4 = g80610bc == 0;
                if (zf4) 
                    goto addr_805d698_4;
            }
            goto addr_805d65b_3;
            do {
                addr_805d66e_2:
                fun_80482e0("block 2");
                zf5 = g80610a4 == 0;
                if (zf5) 
                    goto addr_805d65b_3;
                zf6 = g80610a8 == 0;
            } while (zf6);
            zf7 = g80610ac == 0;
            if (zf7) 
                break;
        }
    }
}

int32_t test_3_blocks_variant_830_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805d6ef_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            fun_80482e0("block 4");
            zf4 = g80610b8 == 0;
            if (zf4) 
                break;
            zf5 = g80610bc == 0;
            if (zf5) 
                continue;
        }
        while (fun_80482e0("block 3"), zf6 = g80610b0 == 0, !zf6) {
            zf7 = g80610b4 == 0;
            if (zf7) 
                goto addr_805d6ef_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_831_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805d770_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            while (fun_80482e0("block 3"), zf4 = g80610b0 == 0, !zf4) {
                zf5 = g80610b4 == 0;
                if (zf5) 
                    goto addr_805d770_2;
            }
            break;
        } else {
            while (fun_80482e0("block 4"), zf6 = g80610b8 == 0, !zf6) {
                zf7 = g80610bc == 0;
                if (zf7) 
                    goto addr_805d770_2;
            }
            break;
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_832_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805d7f1_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b8 == 0, !zf4) {
                zf5 = g80610bc == 0;
                if (zf5) 
                    goto addr_805d81b_8;
            }
            break;
        }
        addr_805d81b_8:
        while (fun_80482e0("block 3"), zf6 = g80610b0 == 0, !zf6) {
            zf7 = g80610b4 == 0;
            if (zf7) 
                goto addr_805d7f1_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_833_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    addr_805d872_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b8 == 0, !zf4) {
                zf5 = g80610bc == 0;
                if (zf5) 
                    goto addr_805d89c_8;
            }
            continue;
        }
        addr_805d89c_8:
        while (fun_80482e0("block 3"), zf6 = g80610b0 == 0, !zf6) {
            zf7 = g80610b4 == 0;
            if (zf7) 
                goto addr_805d872_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_834_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805d8f3_2;
    addr_805d8e0_3:
    fun_80482e0("exit block");
    return 0;
    addr_805d91d_4:
    while (fun_80482e0("block 3"), zf1 = g80610b0 == 0, !zf1) {
        zf2 = g80610b4 == 0;
        if (zf2) {
            do {
                addr_805d8f3_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_805d8e0_3;
                zf4 = g80610a8 == 0;
                if (zf4) 
                    goto addr_805d8f3_2;
                zf5 = g80610ac == 0;
                if (zf5) 
                    goto addr_805d91d_4;
                addr_805d93e_9:
                fun_80482e0("block 4");
                zf6 = g80610b8 == 0;
                if (zf6) 
                    goto addr_805d8e0_3;
                zf7 = g80610bc == 0;
            } while (zf7);
        } else {
            goto addr_805d93e_9;
        }
    }
    goto addr_805d8e0_3;
}

int32_t test_3_blocks_variant_835_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805d974_2;
    addr_805d961_3:
    fun_80482e0("exit block");
    return 0;
    addr_805d99e_4:
    while (fun_80482e0("block 3"), zf1 = g80610b0 == 0, !zf1) {
        zf2 = g80610b4 == 0;
        if (zf2) {
            do {
                addr_805d974_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_805d961_3;
                zf4 = g80610a8 == 0;
            } while (zf4);
            zf5 = g80610ac == 0;
            if (zf5) 
                continue;
        }
        while (fun_80482e0("block 4"), zf6 = g80610b8 == 0, !zf6) {
            zf7 = g80610bc == 0;
            if (zf7) 
                goto addr_805d99e_4;
        }
        break;
    }
    goto addr_805d961_3;
}

int32_t test_3_blocks_variant_836_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805d9f5_2;
    addr_805d9e2_3:
    fun_80482e0("exit block");
    return 0;
    addr_805da1f_4:
    while (fun_80482e0("block 3"), zf1 = g80610b0 == 0, !zf1) {
        zf2 = g80610b4 == 0;
        if (zf2) {
            while (1) {
                addr_805d9f5_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_805d9e2_3;
                zf4 = g80610a8 == 0;
                if (zf4) 
                    continue;
                zf5 = g80610ac == 0;
                if (zf5) 
                    break;
                addr_805da40_9:
                while (fun_80482e0("block 4"), zf6 = g80610b8 == 0, !zf6) {
                    zf7 = g80610bc == 0;
                    if (zf7) 
                        goto addr_805da1f_4;
                }
            }
        } else {
            goto addr_805da40_9;
        }
    }
    goto addr_805d9e2_3;
}

int32_t test_3_blocks_variant_837_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_805da95_4;
    addr_805da63_5:
    fun_80482e0("exit block");
    return 0;
    addr_805da95_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        addr_805daa0_6:
        while (fun_80482e0("block 3"), zf4 = g80610b0 == 0, !zf4) {
            zf5 = g80610b4 == 0;
            if (zf5) 
                continue;
            addr_805dac1_9:
            while (fun_80482e0("block 4"), zf6 = g80610b8 == 0, !zf6) {
                zf7 = g80610bc == 0;
                if (zf7) 
                    goto addr_805daa0_6;
            }
            break;
        }
        goto addr_805da63_5;
    } else {
        goto addr_805dac1_9;
    }
}

int32_t test_3_blocks_variant_838_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805daf7_2;
    addr_805dae4_3:
    fun_80482e0("exit block");
    return 0;
    addr_805db21_4:
    while (fun_80482e0("block 3"), zf1 = g80610b0 == 0, !zf1) {
        zf2 = g80610b4 == 0;
        if (zf2) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf3 = g80610b8 == 0, !zf3) {
                zf4 = g80610bc == 0;
                if (zf4) 
                    goto addr_805db21_4;
            }
            do {
                addr_805daf7_2:
                fun_80482e0("block 2");
                zf5 = g80610a4 == 0;
                if (zf5) 
                    goto addr_805dae4_3;
                zf6 = g80610a8 == 0;
            } while (zf6);
            zf7 = g80610ac == 0;
            if (zf7) 
                break;
        }
    }
    goto addr_805dae4_3;
}

int32_t test_3_blocks_variant_839_edges_11() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;

    goto addr_805db78_2;
    addr_805db65_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805dba2_4:
        fun_80482e0("block 3");
        zf1 = g80610b0 == 0;
        if (zf1) {
            while (1) {
                addr_805db78_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_805db65_3;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    continue;
                zf4 = g80610ac == 0;
                if (zf4) 
                    break;
                addr_805dbc3_8:
                while (fun_80482e0("block 4"), zf5 = g80610b8 == 0, !zf5) {
                    zf6 = g80610bc == 0;
                    if (zf6) 
                        goto addr_805dba2_4;
                }
            }
        } else {
            zf7 = g80610b4 == 0;
            if (zf7) 
                continue;
            goto addr_805dbc3_8;
        }
    }
}

int32_t g80610c0 = 0;

int32_t test_3_blocks_variant_840_edges_12() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;
    int1_t zf8;

    addr_805dbf9_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        addr_805dc1a_5:
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805dbf9_2;
            zf5 = g80610b4 == 0;
            if (zf5) 
                continue;
            while (fun_80482e0("block 4"), zf6 = g80610b8 == 0, !zf6) {
                zf7 = g80610bc == 0;
                if (zf7) 
                    goto addr_805dbf9_2;
                zf8 = g80610c0 == 0;
                if (zf8) 
                    goto addr_805dc1a_5;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_841_edges_12() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;
    int1_t zf8;

    goto addr_805dc83_2;
    addr_805dc70_3:
    fun_80482e0("exit block");
    return 0;
    addr_805dca4_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) {
            while (1) {
                addr_805dc83_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_805dc70_3;
                zf4 = g80610a8 == 0;
                if (zf4) 
                    break;
                addr_805dcce_8:
                while (fun_80482e0("block 4"), zf5 = g80610b8 == 0, !zf5) {
                    zf6 = g80610bc == 0;
                    if (zf6) 
                        goto addr_805dc83_2;
                    zf7 = g80610c0 == 0;
                    if (zf7) 
                        goto addr_805dca4_4;
                }
                goto addr_805dc70_3;
            }
        } else {
            zf8 = g80610b4 == 0;
            if (zf8) 
                continue;
            goto addr_805dcce_8;
        }
    }
    goto addr_805dc70_3;
}

int32_t test_3_blocks_variant_842_edges_12() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;
    int1_t zf8;

    goto addr_805dd0d_2;
    addr_805dcfa_3:
    fun_80482e0("exit block");
    return 0;
    addr_805dd2e_4:
    while (fun_80482e0("block 3"), zf1 = g80610ac == 0, !zf1) {
        zf2 = g80610b0 == 0;
        if (zf2) {
            while (1) {
                addr_805dd0d_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    continue;
                zf4 = g80610a8 == 0;
                if (zf4) 
                    break;
                addr_805dd58_8:
                while (fun_80482e0("block 4"), zf5 = g80610b8 == 0, !zf5) {
                    zf6 = g80610bc == 0;
                    if (zf6) 
                        goto addr_805dd0d_2;
                    zf7 = g80610c0 == 0;
                    if (zf7) 
                        goto addr_805dd2e_4;
                }
                goto addr_805dcfa_3;
            }
        } else {
            zf8 = g80610b4 == 0;
            if (zf8) 
                continue;
            goto addr_805dd58_8;
        }
    }
    goto addr_805dcfa_3;
}

int32_t test_3_blocks_variant_843_edges_12() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;
    int1_t zf8;

    addr_805dd97_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            while (fun_80482e0("block 4"), zf4 = g80610b8 == 0, !zf4) {
                zf5 = g80610bc == 0;
                if (zf5) 
                    goto addr_805dd97_2;
                zf6 = g80610c0 == 0;
                if (zf6) 
                    goto addr_805ddc1_9;
            }
            break;
        }
        addr_805ddc1_9:
        while (fun_80482e0("block 3"), zf7 = g80610b0 == 0, !zf7) {
            zf8 = g80610b4 == 0;
            if (zf8) 
                goto addr_805dd97_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_844_edges_12() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;
    int1_t zf8;

    goto addr_805de21_2;
    addr_805de0e_3:
    fun_80482e0("exit block");
    return 0;
    addr_805de4b_4:
    while (fun_80482e0("block 3"), zf1 = g80610b0 == 0, !zf1) {
        zf2 = g80610b4 == 0;
        if (zf2) {
            while (1) {
                addr_805de21_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_805de0e_3;
                zf4 = g80610a8 == 0;
                if (zf4) 
                    continue;
                zf5 = g80610ac == 0;
                if (zf5) 
                    break;
                addr_805de6c_9:
                while (fun_80482e0("block 4"), zf6 = g80610b8 == 0, !zf6) {
                    zf7 = g80610bc == 0;
                    if (zf7) 
                        goto addr_805de21_2;
                    zf8 = g80610c0 == 0;
                    if (zf8) 
                        goto addr_805de4b_4;
                }
                goto addr_805de0e_3;
            }
        } else {
            goto addr_805de6c_9;
        }
    }
    goto addr_805de0e_3;
}

int32_t test_3_blocks_variant_845_edges_12() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;
    int1_t zf8;

    goto addr_805deab_2;
    addr_805de98_3:
    fun_80482e0("exit block");
    return 0;
    addr_805ded5_4:
    while (fun_80482e0("block 3"), zf1 = g80610b0 == 0, !zf1) {
        zf2 = g80610b4 == 0;
        if (zf2) 
            continue;
        while (1) {
            while (fun_80482e0("block 4"), zf3 = g80610b8 == 0, !zf3) {
                zf4 = g80610bc == 0;
                if (zf4) 
                    goto addr_805deab_2;
                zf5 = g80610c0 == 0;
                if (zf5) 
                    goto addr_805ded5_4;
            }
            goto addr_805de98_3;
            do {
                addr_805deab_2:
                fun_80482e0("block 2");
                zf6 = g80610a4 == 0;
                if (zf6) 
                    goto addr_805de98_3;
                zf7 = g80610a8 == 0;
            } while (zf7);
            zf8 = g80610ac == 0;
            if (zf8) 
                break;
        }
    }
    goto addr_805de98_3;
}

int32_t test_3_blocks_variant_846_edges_12() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;
    int1_t zf8;

    goto addr_805df35_2;
    addr_805df22_3:
    fun_80482e0("exit block");
    return 0;
    while (1) {
        addr_805df5f_4:
        fun_80482e0("block 3");
        zf1 = g80610b0 == 0;
        if (zf1) {
            while (1) {
                addr_805df35_2:
                fun_80482e0("block 2");
                zf2 = g80610a4 == 0;
                if (zf2) 
                    goto addr_805df22_3;
                zf3 = g80610a8 == 0;
                if (zf3) 
                    continue;
                zf4 = g80610ac == 0;
                if (zf4) 
                    break;
                addr_805df80_8:
                while (fun_80482e0("block 4"), zf5 = g80610b8 == 0, !zf5) {
                    zf6 = g80610bc == 0;
                    if (zf6) 
                        goto addr_805df35_2;
                    zf7 = g80610c0 == 0;
                    if (zf7) 
                        goto addr_805df5f_4;
                }
                goto addr_805df22_3;
            }
        } else {
            zf8 = g80610b4 == 0;
            if (zf8) 
                continue;
            goto addr_805df80_8;
        }
    }
}

int32_t g80610c4 = 0;

int32_t test_3_blocks_variant_847_edges_13() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;
    int1_t zf8;
    int1_t zf9;

    goto addr_805dfbf_2;
    addr_805dfac_3:
    fun_80482e0("exit block");
    return 0;
    addr_805dfe9_4:
    while (fun_80482e0("block 3"), zf1 = g80610b0 == 0, !zf1) {
        zf2 = g80610b4 == 0;
        if (zf2) {
            while (1) {
                addr_805dfbf_2:
                fun_80482e0("block 2");
                zf3 = g80610a4 == 0;
                if (zf3) 
                    goto addr_805dfac_3;
                zf4 = g80610a8 == 0;
                if (zf4) 
                    continue;
                zf5 = g80610ac == 0;
                if (zf5) 
                    break;
                addr_805e013_9:
                while (fun_80482e0("block 4"), zf6 = g80610bc == 0, !zf6) {
                    zf7 = g80610c0 == 0;
                    if (zf7) 
                        goto addr_805dfbf_2;
                    zf8 = g80610c4 == 0;
                    if (zf8) 
                        goto addr_805dfe9_4;
                }
                goto addr_805dfac_3;
            }
        } else {
            zf9 = g80610b8 == 0;
            if (zf9) 
                continue;
            goto addr_805e013_9;
        }
    }
    goto addr_805dfac_3;
}

int32_t puts = 0x80482e6;

void fun_80482e0(int32_t a1) {
    goto puts;
}

int32_t test_2_blocks_variant_4_edges_4() {
    int1_t zf1;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_5_edges_4() {
    int1_t zf1;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        while (1) {
            fun_80482e0("block 3");
        }
    }
}

int32_t test_2_blocks_variant_6_edges_4() {
    int1_t zf1;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_7_edges_5() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        addr_8048638_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8048638_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_14_edges_5() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_15_edges_5() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804887f_4;
    fun_80482e0("exit block");
    return 0;
    addr_804887f_4:
    while (1) {
        fun_80482e0("block 3");
    }
}

int32_t test_2_blocks_variant_16_edges_6() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    addr_80488a5_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_80488a5_2;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_5_edges_5() {
    int1_t zf1;

    while (1) {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_6_edges_5() {
    int1_t zf1;

    fun_80482e0("block 2");
    while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_7_edges_5() {
    int1_t zf1;

    fun_80482e0("block 2");
    fun_80482e0("block 3");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        while (1) {
            fun_80482e0("block 4");
        }
    }
}

int32_t test_3_blocks_variant_8_edges_5() {
    int1_t zf1;

    do {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
    } while (zf1);
    fun_80482e0("block 4");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_9_edges_5() {
    int1_t zf1;

    fun_80482e0("block 2");
    do {
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
    } while (zf1);
    fun_80482e0("block 4");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_10_edges_5() {
    int1_t zf1;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        fun_80482e0("block 3");
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_16_edges_5() {
    int1_t zf1;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 4");
    }
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_17_edges_5() {
    int1_t zf1;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        fun_80482e0("block 4");
    }
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_18_edges_5() {
    int1_t zf1;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("block 3");
        fun_80482e0("exit block");
        return 0;
    } else {
        while (1) {
            fun_80482e0("block 4");
        }
    }
}

int32_t test_3_blocks_variant_19_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        while (1) {
            fun_80482e0("block 3");
            fun_80482e0("block 4");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_8048ff7_5;
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
        }
    }
    addr_8048ff7_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_35_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_36_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        addr_804959e_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804959e_2;
            fun_80482e0("block 4");
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_37_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8049620_5;
    fun_80482e0("exit block");
    return 0;
    addr_8049620_5:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_38_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    do {
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8049674_5;
    addr_8049633_6:
    fun_80482e0("exit block");
    return 0;
    addr_8049674_5:
    fun_80482e0("block 4");
    goto addr_8049633_6;
}

int32_t test_3_blocks_variant_39_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_8049687_4;
            zf2 = g80610a8 == 0;
        } while (zf2);
        fun_80482e0("block 4");
    }
    addr_8049687_4:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_40_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_41_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    do {
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8049770_5;
    fun_80482e0("exit block");
    return 0;
    addr_8049770_5:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_42_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                break;
            zf2 = g80610a8 == 0;
        } while (zf2);
        break;
    }
    fun_80482e0("block 4");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_43_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_50_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_51_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            fun_80482e0("block 4");
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_52_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_8049acb_3:
        fun_80482e0("exit block");
        return 0;
    } else {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8049acb_3;
    }
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_53_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8049b60_5;
    addr_8049b1f_6:
    fun_80482e0("exit block");
    return 0;
    addr_8049b60_5:
    fun_80482e0("block 4");
    goto addr_8049b1f_6;
}

int32_t test_3_blocks_variant_54_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_55_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            fun_80482e0("block 4");
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_56_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8049c5c_5;
    fun_80482e0("exit block");
    return 0;
    addr_8049c5c_5:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_57_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
        } while (zf2);
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_58_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
        } while (zf2);
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_59_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        while (1) {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                continue;
            fun_80482e0("block 4");
        }
    }
}

int32_t test_3_blocks_variant_60_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
        } while (zf2);
        while (1) {
            fun_80482e0("block 4");
        }
    }
}

int32_t test_3_blocks_variant_61_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 3");
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_65_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_66_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_67_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    fun_80482e0("block 3");
    zf2 = g80610a8 == 0;
    if (zf2) {
        fun_80482e0("exit block");
        return 0;
    } else {
        while (1) {
            fun_80482e0("block 4");
        }
    }
}

int32_t test_3_blocks_variant_68_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        addr_804a01e_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            goto addr_804a01e_2;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
    } while (zf2);
    fun_80482e0("block 4");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_69_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    do {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
    } while (zf2);
    fun_80482e0("block 4");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_70_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804a0b3_5;
    }
    fun_80482e0("block 3");
    addr_804a0b3_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_90_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804a777_4;
        fun_80482e0("block 4");
    }
    addr_804a743_7:
    fun_80482e0("exit block");
    return 0;
    addr_804a777_4:
    fun_80482e0("block 3");
    goto addr_804a743_7;
}

int32_t test_3_blocks_variant_91_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_92_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        } else {
            while (1) {
                fun_80482e0("block 4");
            }
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_93_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        } else {
            fun_80482e0("block 4");
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_94_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_95_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (!zf2) 
            goto addr_804a919_4;
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
    addr_804a919_4:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_96_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        zf2 = g80610a8 == 0;
        if (!zf2) {
            fun_80482e0("block 4");
        }
        while (1) {
            fun_80482e0("block 3");
        }
    }
}

int32_t test_3_blocks_variant_97_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (1) {
                fun_80482e0("block 3");
            }
        } else {
            while (1) {
                fun_80482e0("block 4");
            }
        }
    }
}

int32_t test_3_blocks_variant_98_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        zf2 = g80610a8 == 0;
        if (zf2) {
            while (1) {
                fun_80482e0("block 3");
                addr_804aa26_6:
                fun_80482e0("block 4");
            }
        } else {
            goto addr_804aa26_6;
        }
    }
}

int32_t test_3_blocks_variant_99_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        fun_80482e0("block 3");
    } else {
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_100_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        fun_80482e0("block 4");
    }
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_101_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (!zf2) {
        fun_80482e0("block 4");
    }
    fun_80482e0("block 3");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_102_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    zf2 = g80610a8 == 0;
    if (zf2) {
        fun_80482e0("block 3");
        fun_80482e0("exit block");
        return 0;
    } else {
        while (1) {
            fun_80482e0("block 4");
        }
    }
}

int32_t test_3_blocks_variant_103_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804ab9a_2:
        fun_80482e0("block 2");
        while (1) {
            addr_804aba9_3:
            fun_80482e0("block 3");
            while (fun_80482e0("block 4"), zf1 = g80610a4 == 0, !zf1) {
                zf2 = g80610a8 == 0;
                if (zf2) 
                    goto addr_804ab9a_2;
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_804aba9_3;
            }
            goto addr_804ab87_8;
        }
    }
    addr_804ab87_8:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_130_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804b569_2:
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_804b556_4;
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804b569_2;
            zf3 = g80610ac == 0;
        } while (zf3);
        fun_80482e0("block 4");
    }
    addr_804b556_4:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_131_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804b5c6_2:
        fun_80482e0("block 2");
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804b5c6_2;
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_132_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        do {
            fun_80482e0("block 3");
            zf1 = g80610a4 == 0;
            if (zf1) 
                goto addr_804b610_4;
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
            zf3 = g80610ac == 0;
        } while (zf3);
        goto addr_804b65a_7;
    }
    addr_804b610_4:
    fun_80482e0("exit block");
    return 0;
    addr_804b65a_7:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_133_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (1) {
            fun_80482e0("block 3");
            fun_80482e0("block 4");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804b66d_6;
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
    }
    addr_804b66d_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_156_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_157_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    addr_804bf38_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804bf38_2;
            fun_80482e0("block 4");
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_158_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804bfcc_6;
    fun_80482e0("exit block");
    return 0;
    addr_804bfcc_6:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_159_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_804bfdf_3:
        fun_80482e0("exit block");
        return 0;
    } else {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804bfdf_3;
            zf3 = g80610ac == 0;
        } while (zf3);
    }
    fun_80482e0("block 4");
    goto addr_804bfdf_3;
}

int32_t test_3_blocks_variant_160_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804c03c_5;
            zf3 = g80610ac == 0;
        } while (zf3);
        fun_80482e0("block 4");
    }
    addr_804c03c_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_161_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_162_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        addr_804c0f6_3:
        fun_80482e0("exit block");
        return 0;
    } else {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804c0f6_3;
            zf3 = g80610ac == 0;
        } while (zf3);
    }
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_163_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
            zf3 = g80610ac == 0;
        } while (zf3);
        goto addr_804c19d_6;
    }
    addr_804c153_7:
    fun_80482e0("exit block");
    return 0;
    addr_804c19d_6:
    fun_80482e0("block 4");
    goto addr_804c153_7;
}

int32_t test_3_blocks_variant_164_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    addr_804c1c3_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804c1c3_2;
            zf3 = g80610ac == 0;
        } while (zf3);
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_165_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                continue;
            fun_80482e0("block 4");
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_166_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
            zf3 = g80610ac == 0;
        } while (zf3);
        goto addr_804c2b4_6;
    }
    fun_80482e0("exit block");
    return 0;
    addr_804c2b4_6:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_167_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (1) {
            fun_80482e0("block 3");
            fun_80482e0("block 4");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804c2c7_6;
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
        }
    }
    addr_804c2c7_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_183_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_184_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        addr_804c907_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_804c907_2;
            fun_80482e0("block 4");
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_185_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        addr_804c964_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            goto addr_804c964_2;
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804c99b_6;
    fun_80482e0("exit block");
    return 0;
    addr_804c99b_6:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_186_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    do {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804c9f8_6;
    addr_804c9ae_7:
    fun_80482e0("exit block");
    return 0;
    addr_804c9f8_6:
    fun_80482e0("block 4");
    goto addr_804c9ae_7;
}

int32_t test_3_blocks_variant_187_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_804ca0b_5;
            zf3 = g80610ac == 0;
        } while (zf3);
        fun_80482e0("block 4");
    }
    addr_804ca0b_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_188_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_189_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    do {
        fun_80482e0("block 3");
        zf2 = g80610a8 == 0;
        if (zf2) 
            break;
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804cb0f_6;
    fun_80482e0("exit block");
    return 0;
    addr_804cb0f_6:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_190_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                break;
            zf3 = g80610ac == 0;
        } while (zf3);
        break;
    }
    fun_80482e0("block 4");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_191_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        fun_80482e0("block 4");
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804cb7f_5;
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804cbd8_7;
    addr_804cbaa_8:
    fun_80482e0("block 3");
    addr_804cb7f_5:
    fun_80482e0("exit block");
    return 0;
    addr_804cbd8_7:
    goto addr_804cbaa_8;
}

int32_t test_3_blocks_variant_226_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_227_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804d8c5_4;
    addr_804d893_5:
    fun_80482e0("exit block");
    return 0;
    addr_804d8c5_4:
    while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
        fun_80482e0("block 4");
    }
    goto addr_804d893_5;
}

int32_t test_3_blocks_variant_228_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804d922_4;
    fun_80482e0("exit block");
    return 0;
    addr_804d922_4:
    fun_80482e0("block 3");
    zf3 = g80610ac == 0;
    if (!zf3) {
        while (1) {
            fun_80482e0("block 4");
        }
    }
}

int32_t test_3_blocks_variant_229_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        addr_804d960_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804d960_2;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804d997_6;
    addr_804d94d_7:
    fun_80482e0("exit block");
    return 0;
    addr_804d997_6:
    fun_80482e0("block 4");
    goto addr_804d94d_7;
}

int32_t test_3_blocks_variant_230_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_231_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            fun_80482e0("block 4");
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_232_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        addr_804da77_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804da77_2;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
    } while (zf3);
    goto addr_804daae_6;
    fun_80482e0("exit block");
    return 0;
    addr_804daae_6:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_233_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804daf3_4;
    addr_804dac1_5:
    fun_80482e0("exit block");
    return 0;
    addr_804daf3_4:
    do {
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
    } while (zf3);
    fun_80482e0("block 4");
    goto addr_804dac1_5;
}

int32_t test_3_blocks_variant_234_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
        } while (zf3);
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_235_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804dbad_4;
    fun_80482e0("exit block");
    return 0;
    addr_804dbad_4:
    while (1) {
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            continue;
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_236_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804dc0a_4;
    fun_80482e0("exit block");
    return 0;
    addr_804dc0a_4:
    do {
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
    } while (zf3);
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_237_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_804dc69_4;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
    }
    addr_804dc35_8:
    fun_80482e0("exit block");
    return 0;
    addr_804dc69_4:
    fun_80482e0("block 3");
    goto addr_804dc35_8;
}

int32_t test_3_blocks_variant_277_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_804eafa_5;
        fun_80482e0("block 4");
    }
    addr_804eabd_8:
    fun_80482e0("exit block");
    return 0;
    addr_804eafa_5:
    fun_80482e0("block 3");
    goto addr_804eabd_8;
}

int32_t test_3_blocks_variant_278_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804eb4c_4;
    addr_804eb1a_5:
    fun_80482e0("exit block");
    return 0;
    addr_804eb4c_4:
    zf3 = g80610ac == 0;
    if (!zf3) {
        fun_80482e0("block 4");
    }
    fun_80482e0("block 3");
    goto addr_804eb1a_5;
}

int32_t test_3_blocks_variant_279_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804eba9_4;
    addr_804eb77_5:
    fun_80482e0("exit block");
    return 0;
    addr_804eba9_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        fun_80482e0("block 3");
        goto addr_804eb77_5;
    } else {
        while (1) {
            fun_80482e0("block 4");
        }
    }
}

int32_t test_3_blocks_variant_280_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (zf3) {
            fun_80482e0("block 3");
        } else {
            fun_80482e0("block 4");
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_281_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) {
            fun_80482e0("block 4");
        }
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_282_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        zf3 = g80610ac == 0;
        if (!zf3) 
            goto addr_804ecc9_5;
        fun_80482e0("block 3");
    }
    fun_80482e0("exit block");
    return 0;
    addr_804ecc9_5:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_283_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804ed1d_4;
    fun_80482e0("exit block");
    return 0;
    addr_804ed1d_4:
    zf3 = g80610ac == 0;
    if (!zf3) {
        fun_80482e0("block 4");
    }
    while (1) {
        fun_80482e0("block 3");
    }
}

int32_t test_3_blocks_variant_284_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804ed7a_4;
    fun_80482e0("exit block");
    return 0;
    addr_804ed7a_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        while (1) {
            fun_80482e0("block 3");
        }
    } else {
        while (1) {
            fun_80482e0("block 4");
        }
    }
}

int32_t test_3_blocks_variant_285_edges_7() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804edd7_4;
    fun_80482e0("exit block");
    return 0;
    addr_804edd7_4:
    zf3 = g80610ac == 0;
    if (zf3) {
        while (1) {
            fun_80482e0("block 3");
            addr_804edf1_7:
            fun_80482e0("block 4");
        }
    } else {
        goto addr_804edf1_7;
    }
}

int32_t test_3_blocks_variant_286_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_804ee15_2:
        fun_80482e0("block 2");
        addr_804ee24_3:
        while (fun_80482e0("block 3"), zf1 = g80610a4 == 0, !zf1) {
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_804ee15_2;
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_804ee24_3;
            }
            break;
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_338_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_80502cd_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_80502ba_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_80502cd_2;
            zf4 = g80610b0 == 0;
        } while (zf4);
        fun_80482e0("block 4");
    }
    addr_80502ba_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_339_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_8050333_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8050333_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_340_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8050386_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
        } while (zf4);
        goto addr_80503d9_8;
    }
    addr_8050386_5:
    fun_80482e0("exit block");
    return 0;
    addr_80503d9_8:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_341_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_80503ff_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (1) {
            addr_8050417_4:
            fun_80482e0("block 3");
            while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
                zf3 = g80610ac == 0;
                if (zf3) 
                    goto addr_80503ff_2;
                zf4 = g80610b0 == 0;
                if (zf4) 
                    goto addr_8050417_4;
            }
            goto addr_80503ec_9;
        }
    }
    addr_80503ec_9:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_368_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8050ec1_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8050eae_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8050ec1_2;
            zf4 = g80610b0 == 0;
        } while (zf4);
        fun_80482e0("block 4");
    }
    addr_8050eae_5:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_369_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        addr_8050f27_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        while (fun_80482e0("block 3"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8050f27_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_370_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            continue;
        do {
            fun_80482e0("block 3");
            zf2 = g80610a8 == 0;
            if (zf2) 
                goto addr_8050f7a_5;
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
        } while (zf4);
        goto addr_8050fcd_8;
    }
    addr_8050f7a_5:
    fun_80482e0("exit block");
    return 0;
    addr_8050fcd_8:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_371_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_8050ff3_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        while (fun_80482e0("block 4"), zf2 = g80610a8 == 0, !zf2) {
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8050ff3_2;
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805100b_7;
        }
        goto addr_8050fe0_9;
    }
    addr_805100b_7:
    fun_80482e0("block 3");
    addr_8050fe0_9:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_419_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
        zf4 = g80610b0 == 0;
        if (zf4) 
            continue;
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_420_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_8052379_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8052379_2;
            fun_80482e0("block 4");
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_421_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        addr_80523df_2:
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_80523df_2;
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
        zf4 = g80610b0 == 0;
    } while (zf4);
    goto addr_805241f_7;
    fun_80482e0("exit block");
    return 0;
    addr_805241f_7:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_422_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8052464_4;
    addr_8052432_5:
    fun_80482e0("exit block");
    return 0;
    addr_8052464_4:
    do {
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_8052432_5;
        zf4 = g80610b0 == 0;
    } while (zf4);
    fun_80482e0("block 4");
    goto addr_8052432_5;
}

int32_t test_3_blocks_variant_423_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8052498_6;
            zf4 = g80610b0 == 0;
        } while (zf4);
        fun_80482e0("block 4");
    }
    addr_8052498_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_424_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8052530_4;
    addr_80524fe_5:
    fun_80482e0("exit block");
    return 0;
    addr_8052530_4:
    while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
        zf4 = g80610b0 == 0;
        if (zf4) 
            continue;
        fun_80482e0("block 4");
    }
    goto addr_80524fe_5;
}

int32_t test_3_blocks_variant_425_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_8052596_4;
    addr_8052564_5:
    fun_80482e0("exit block");
    return 0;
    addr_8052596_4:
    do {
        fun_80482e0("block 3");
        zf3 = g80610ac == 0;
        if (zf3) 
            goto addr_8052564_5;
        zf4 = g80610b0 == 0;
    } while (zf4);
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_426_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
        } while (zf4);
        goto addr_805261d_7;
    }
    addr_80525ca_8:
    fun_80482e0("exit block");
    return 0;
    addr_805261d_7:
    fun_80482e0("block 4");
    goto addr_80525ca_8;
}

int32_t test_3_blocks_variant_427_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    addr_8052643_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8052643_2;
            zf4 = g80610b0 == 0;
        } while (zf4);
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_428_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                continue;
            fun_80482e0("block 4");
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_429_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                break;
            zf4 = g80610b0 == 0;
        } while (zf4);
        goto addr_805274f_7;
    }
    fun_80482e0("exit block");
    return 0;
    addr_805274f_7:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_430_edges_8() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_8052796_4;
        fun_80482e0("block 4");
        zf3 = g80610ac == 0;
        if (zf3) 
            break;
        zf4 = g80610b0 == 0;
    } while (zf4);
    goto addr_80527c4_8;
    addr_8052762_9:
    fun_80482e0("exit block");
    return 0;
    addr_8052796_4:
    fun_80482e0("block 3");
    goto addr_8052762_9;
    addr_80527c4_8:
    goto addr_8052796_4;
}

int32_t test_3_blocks_variant_614_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_805741c_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_8057409_6;
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805741c_2;
            zf5 = g80610b4 == 0;
        } while (zf5);
        fun_80482e0("block 4");
    }
    addr_8057409_6:
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_615_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_805748b_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        while (fun_80482e0("block 3"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_805748b_2;
            zf5 = g80610b4 == 0;
            if (zf5) 
                continue;
            fun_80482e0("block 4");
        }
        break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_616_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        do {
            fun_80482e0("block 3");
            zf3 = g80610ac == 0;
            if (zf3) 
                goto addr_80574e7_6;
            zf4 = g80610b0 == 0;
            if (zf4) 
                break;
            zf5 = g80610b4 == 0;
        } while (zf5);
        goto addr_8057543_9;
    }
    addr_80574e7_6:
    fun_80482e0("exit block");
    return 0;
    addr_8057543_9:
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_617_edges_9() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;

    addr_8057569_2:
    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            goto addr_805758a_4;
        while (fun_80482e0("block 4"), zf3 = g80610ac == 0, !zf3) {
            zf4 = g80610b0 == 0;
            if (zf4) 
                goto addr_8057569_2;
            zf5 = g80610b4 == 0;
            if (zf5) 
                goto addr_805758a_4;
        }
        break;
    }
    addr_8057556_10:
    fun_80482e0("exit block");
    return 0;
    addr_805758a_4:
    fun_80482e0("block 3");
    goto addr_8057556_10;
}

void initConditions() {
    int32_t ebx1;
    int32_t eax2;
    int32_t esi3;
    int32_t eax4;
    int32_t edx5;
    int32_t eax6;

    ebx1 = eax2 + 0x3e8;
    esi3 = eax4;
    do {
        edx5 = eax6 + 1;
        *reinterpret_cast<int32_t*>((edx5 - esi3) * 4 + 0x806103c) = eax6;
        eax6 = edx5;
    } while (edx5 != ebx1);
    return;
}

int32_t test_1_blocks_variant_1_edges_3() {
    int1_t zf1;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_2_blocks_variant_1_edges_4() {
    int1_t zf1;

    while (1) {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_1_edges_5() {
    int1_t zf1;

    while (1) {
        fun_80482e0("block 2");
        fun_80482e0("block 3");
        fun_80482e0("block 4");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_11_edges_5() {
    int1_t zf1;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        fun_80482e0("block 3");
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_12_edges_5() {
    int1_t zf1;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        while (1) {
            fun_80482e0("block 3");
            fun_80482e0("block 4");
        }
    }
}

int32_t test_3_blocks_variant_13_edges_5() {
    int1_t zf1;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("exit block");
        return 0;
    } else {
        fun_80482e0("block 3");
        while (1) {
            fun_80482e0("block 4");
        }
    }
}

int32_t test_3_blocks_variant_14_edges_5() {
    int1_t zf1;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
    } while (zf1);
    fun_80482e0("block 3");
    fun_80482e0("block 4");
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_15_edges_5() {
    int1_t zf1;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (zf1) {
        fun_80482e0("block 3");
    } else {
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_86_edges_6() {
    int1_t zf1;
    int1_t zf2;

    while (fun_80482e0("block 2"), zf1 = g80610a4 == 0, !zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) 
            continue;
        fun_80482e0("block 3");
        fun_80482e0("block 4");
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t test_3_blocks_variant_87_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804a679_4;
    fun_80482e0("exit block");
    return 0;
    addr_804a679_4:
    while (1) {
        fun_80482e0("block 3");
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_88_edges_6() {
    int1_t zf1;
    int1_t zf2;

    do {
        fun_80482e0("block 2");
        zf1 = g80610a4 == 0;
        if (zf1) 
            break;
        zf2 = g80610a8 == 0;
    } while (zf2);
    goto addr_804a6cd_4;
    fun_80482e0("exit block");
    return 0;
    addr_804a6cd_4:
    fun_80482e0("block 3");
    while (1) {
        fun_80482e0("block 4");
    }
}

int32_t test_3_blocks_variant_89_edges_6() {
    int1_t zf1;
    int1_t zf2;

    fun_80482e0("block 2");
    zf1 = g80610a4 == 0;
    if (!zf1) {
        zf2 = g80610a8 == 0;
        if (zf2) {
            fun_80482e0("block 3");
        } else {
            fun_80482e0("block 4");
        }
    }
    fun_80482e0("exit block");
    return 0;
}

int32_t main(int32_t a1);

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482f0(main, __return_address(), esp1, __libc_csu_init, 0x805f1d0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_80482dc() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t edx1;
    int32_t v2;
    int32_t eax3;

    edx1 = __JCR_END__;
    if (!(!edx1 || 1)) {
        __libc_start_main(0x8060f10, v2);
    }
    eax3 = 0;
    if (!1 && !1) {
        eax3 = __libc_start_main(0x8061018, 0);
    }
    return eax3;
}

void fun_80483ed() {
}

int32_t main(int32_t a1) {
    initConditions();
    test_1_blocks_variant_0_edges_2();
    test_1_blocks_variant_1_edges_3();
    test_2_blocks_variant_0_edges_3();
    test_2_blocks_variant_1_edges_4();
    test_2_blocks_variant_2_edges_4();
    test_2_blocks_variant_3_edges_4();
    test_2_blocks_variant_4_edges_4();
    test_2_blocks_variant_5_edges_4();
    test_2_blocks_variant_6_edges_4();
    test_2_blocks_variant_7_edges_5();
    test_2_blocks_variant_8_edges_5();
    test_2_blocks_variant_9_edges_5();
    test_2_blocks_variant_10_edges_5();
    test_2_blocks_variant_11_edges_5();
    test_2_blocks_variant_12_edges_5();
    test_2_blocks_variant_13_edges_5();
    test_2_blocks_variant_14_edges_5();
    test_2_blocks_variant_15_edges_5();
    test_2_blocks_variant_16_edges_6();
    test_2_blocks_variant_17_edges_6();
    test_2_blocks_variant_18_edges_6();
    test_2_blocks_variant_19_edges_6();
    test_2_blocks_variant_20_edges_6();
    test_2_blocks_variant_21_edges_7();
    test_3_blocks_variant_0_edges_4();
    test_3_blocks_variant_1_edges_5();
    test_3_blocks_variant_2_edges_5();
    test_3_blocks_variant_3_edges_5();
    test_3_blocks_variant_4_edges_5();
    test_3_blocks_variant_5_edges_5();
    test_3_blocks_variant_6_edges_5();
    test_3_blocks_variant_7_edges_5();
    test_3_blocks_variant_8_edges_5();
    test_3_blocks_variant_9_edges_5();
    test_3_blocks_variant_10_edges_5();
    test_3_blocks_variant_11_edges_5();
    test_3_blocks_variant_12_edges_5();
    test_3_blocks_variant_13_edges_5();
    test_3_blocks_variant_14_edges_5();
    test_3_blocks_variant_15_edges_5();
    test_3_blocks_variant_16_edges_5();
    test_3_blocks_variant_17_edges_5();
    test_3_blocks_variant_18_edges_5();
    test_3_blocks_variant_19_edges_6();
    test_3_blocks_variant_20_edges_6();
    test_3_blocks_variant_21_edges_6();
    test_3_blocks_variant_22_edges_6();
    test_3_blocks_variant_23_edges_6();
    test_3_blocks_variant_24_edges_6();
    test_3_blocks_variant_25_edges_6();
    test_3_blocks_variant_26_edges_6();
    test_3_blocks_variant_27_edges_6();
    test_3_blocks_variant_28_edges_6();
    test_3_blocks_variant_29_edges_6();
    test_3_blocks_variant_30_edges_6();
    test_3_blocks_variant_31_edges_6();
    test_3_blocks_variant_32_edges_6();
    test_3_blocks_variant_33_edges_6();
    test_3_blocks_variant_34_edges_6();
    test_3_blocks_variant_35_edges_6();
    test_3_blocks_variant_36_edges_6();
    test_3_blocks_variant_37_edges_6();
    test_3_blocks_variant_38_edges_6();
    test_3_blocks_variant_39_edges_6();
    test_3_blocks_variant_40_edges_6();
    test_3_blocks_variant_41_edges_6();
    test_3_blocks_variant_42_edges_6();
    test_3_blocks_variant_43_edges_6();
    test_3_blocks_variant_44_edges_6();
    test_3_blocks_variant_45_edges_6();
    test_3_blocks_variant_46_edges_6();
    test_3_blocks_variant_47_edges_6();
    test_3_blocks_variant_48_edges_6();
    test_3_blocks_variant_49_edges_6();
    test_3_blocks_variant_50_edges_6();
    test_3_blocks_variant_51_edges_6();
    test_3_blocks_variant_52_edges_6();
    test_3_blocks_variant_53_edges_6();
    test_3_blocks_variant_54_edges_6();
    test_3_blocks_variant_55_edges_6();
    test_3_blocks_variant_56_edges_6();
    test_3_blocks_variant_57_edges_6();
    test_3_blocks_variant_58_edges_6();
    test_3_blocks_variant_59_edges_6();
    test_3_blocks_variant_60_edges_6();
    test_3_blocks_variant_61_edges_6();
    test_3_blocks_variant_62_edges_6();
    test_3_blocks_variant_63_edges_6();
    test_3_blocks_variant_64_edges_6();
    test_3_blocks_variant_65_edges_6();
    test_3_blocks_variant_66_edges_6();
    test_3_blocks_variant_67_edges_6();
    test_3_blocks_variant_68_edges_6();
    test_3_blocks_variant_69_edges_6();
    test_3_blocks_variant_70_edges_6();
    test_3_blocks_variant_71_edges_6();
    test_3_blocks_variant_72_edges_6();
    test_3_blocks_variant_73_edges_6();
    test_3_blocks_variant_74_edges_6();
    test_3_blocks_variant_75_edges_6();
    test_3_blocks_variant_76_edges_6();
    test_3_blocks_variant_77_edges_6();
    test_3_blocks_variant_78_edges_6();
    test_3_blocks_variant_79_edges_6();
    test_3_blocks_variant_80_edges_6();
    test_3_blocks_variant_81_edges_6();
    test_3_blocks_variant_82_edges_6();
    test_3_blocks_variant_83_edges_6();
    test_3_blocks_variant_84_edges_6();
    test_3_blocks_variant_85_edges_6();
    test_3_blocks_variant_86_edges_6();
    test_3_blocks_variant_87_edges_6();
    test_3_blocks_variant_88_edges_6();
    test_3_blocks_variant_89_edges_6();
    test_3_blocks_variant_90_edges_6();
    test_3_blocks_variant_91_edges_6();
    test_3_blocks_variant_92_edges_6();
    test_3_blocks_variant_93_edges_6();
    test_3_blocks_variant_94_edges_6();
    test_3_blocks_variant_95_edges_6();
    test_3_blocks_variant_96_edges_6();
    test_3_blocks_variant_97_edges_6();
    test_3_blocks_variant_98_edges_6();
    test_3_blocks_variant_99_edges_6();
    test_3_blocks_variant_100_edges_6();
    test_3_blocks_variant_101_edges_6();
    test_3_blocks_variant_102_edges_6();
    test_3_blocks_variant_103_edges_7();
    test_3_blocks_variant_104_edges_7();
    test_3_blocks_variant_105_edges_7();
    test_3_blocks_variant_106_edges_7();
    test_3_blocks_variant_107_edges_7();
    test_3_blocks_variant_108_edges_7();
    test_3_blocks_variant_109_edges_7();
    test_3_blocks_variant_110_edges_7();
    test_3_blocks_variant_111_edges_7();
    test_3_blocks_variant_112_edges_7();
    test_3_blocks_variant_113_edges_7();
    test_3_blocks_variant_114_edges_7();
    test_3_blocks_variant_115_edges_7();
    test_3_blocks_variant_116_edges_7();
    test_3_blocks_variant_117_edges_7();
    test_3_blocks_variant_118_edges_7();
    test_3_blocks_variant_119_edges_7();
    test_3_blocks_variant_120_edges_7();
    test_3_blocks_variant_121_edges_7();
    test_3_blocks_variant_122_edges_7();
    test_3_blocks_variant_123_edges_7();
    test_3_blocks_variant_124_edges_7();
    test_3_blocks_variant_125_edges_7();
    test_3_blocks_variant_126_edges_7();
    test_3_blocks_variant_127_edges_7();
    test_3_blocks_variant_128_edges_7();
    test_3_blocks_variant_129_edges_7();
    test_3_blocks_variant_130_edges_7();
    test_3_blocks_variant_131_edges_7();
    test_3_blocks_variant_132_edges_7();
    test_3_blocks_variant_133_edges_7();
    test_3_blocks_variant_134_edges_7();
    test_3_blocks_variant_135_edges_7();
    test_3_blocks_variant_136_edges_7();
    test_3_blocks_variant_137_edges_7();
    test_3_blocks_variant_138_edges_7();
    test_3_blocks_variant_139_edges_7();
    test_3_blocks_variant_140_edges_7();
    test_3_blocks_variant_141_edges_7();
    test_3_blocks_variant_142_edges_7();
    test_3_blocks_variant_143_edges_7();
    test_3_blocks_variant_144_edges_7();
    test_3_blocks_variant_145_edges_7();
    test_3_blocks_variant_146_edges_7();
    test_3_blocks_variant_147_edges_7();
    test_3_blocks_variant_148_edges_7();
    test_3_blocks_variant_149_edges_7();
    test_3_blocks_variant_150_edges_7();
    test_3_blocks_variant_151_edges_7();
    test_3_blocks_variant_152_edges_7();
    test_3_blocks_variant_153_edges_7();
    test_3_blocks_variant_154_edges_7();
    test_3_blocks_variant_155_edges_7();
    test_3_blocks_variant_156_edges_7();
    test_3_blocks_variant_157_edges_7();
    test_3_blocks_variant_158_edges_7();
    test_3_blocks_variant_159_edges_7();
    test_3_blocks_variant_160_edges_7();
    test_3_blocks_variant_161_edges_7();
    test_3_blocks_variant_162_edges_7();
    test_3_blocks_variant_163_edges_7();
    test_3_blocks_variant_164_edges_7();
    test_3_blocks_variant_165_edges_7();
    test_3_blocks_variant_166_edges_7();
    test_3_blocks_variant_167_edges_7();
    test_3_blocks_variant_168_edges_7();
    test_3_blocks_variant_169_edges_7();
    test_3_blocks_variant_170_edges_7();
    test_3_blocks_variant_171_edges_7();
    test_3_blocks_variant_172_edges_7();
    test_3_blocks_variant_173_edges_7();
    test_3_blocks_variant_174_edges_7();
    test_3_blocks_variant_175_edges_7();
    test_3_blocks_variant_176_edges_7();
    test_3_blocks_variant_177_edges_7();
    test_3_blocks_variant_178_edges_7();
    test_3_blocks_variant_179_edges_7();
    test_3_blocks_variant_180_edges_7();
    test_3_blocks_variant_181_edges_7();
    test_3_blocks_variant_182_edges_7();
    test_3_blocks_variant_183_edges_7();
    test_3_blocks_variant_184_edges_7();
    test_3_blocks_variant_185_edges_7();
    test_3_blocks_variant_186_edges_7();
    test_3_blocks_variant_187_edges_7();
    test_3_blocks_variant_188_edges_7();
    test_3_blocks_variant_189_edges_7();
    test_3_blocks_variant_190_edges_7();
    test_3_blocks_variant_191_edges_7();
    test_3_blocks_variant_192_edges_7();
    test_3_blocks_variant_193_edges_7();
    test_3_blocks_variant_194_edges_7();
    test_3_blocks_variant_195_edges_7();
    test_3_blocks_variant_196_edges_7();
    test_3_blocks_variant_197_edges_7();
    test_3_blocks_variant_198_edges_7();
    test_3_blocks_variant_199_edges_7();
    test_3_blocks_variant_200_edges_7();
    test_3_blocks_variant_201_edges_7();
    test_3_blocks_variant_202_edges_7();
    test_3_blocks_variant_203_edges_7();
    test_3_blocks_variant_204_edges_7();
    test_3_blocks_variant_205_edges_7();
    test_3_blocks_variant_206_edges_7();
    test_3_blocks_variant_207_edges_7();
    test_3_blocks_variant_208_edges_7();
    test_3_blocks_variant_209_edges_7();
    test_3_blocks_variant_210_edges_7();
    test_3_blocks_variant_211_edges_7();
    test_3_blocks_variant_212_edges_7();
    test_3_blocks_variant_213_edges_7();
    test_3_blocks_variant_214_edges_7();
    test_3_blocks_variant_215_edges_7();
    test_3_blocks_variant_216_edges_7();
    test_3_blocks_variant_217_edges_7();
    test_3_blocks_variant_218_edges_7();
    test_3_blocks_variant_219_edges_7();
    test_3_blocks_variant_220_edges_7();
    test_3_blocks_variant_221_edges_7();
    test_3_blocks_variant_222_edges_7();
    test_3_blocks_variant_223_edges_7();
    test_3_blocks_variant_224_edges_7();
    test_3_blocks_variant_225_edges_7();
    test_3_blocks_variant_226_edges_7();
    test_3_blocks_variant_227_edges_7();
    test_3_blocks_variant_228_edges_7();
    test_3_blocks_variant_229_edges_7();
    test_3_blocks_variant_230_edges_7();
    test_3_blocks_variant_231_edges_7();
    test_3_blocks_variant_232_edges_7();
    test_3_blocks_variant_233_edges_7();
    test_3_blocks_variant_234_edges_7();
    test_3_blocks_variant_235_edges_7();
    test_3_blocks_variant_236_edges_7();
    test_3_blocks_variant_237_edges_7();
    test_3_blocks_variant_238_edges_7();
    test_3_blocks_variant_239_edges_7();
    test_3_blocks_variant_240_edges_7();
    test_3_blocks_variant_241_edges_7();
    test_3_blocks_variant_242_edges_7();
    test_3_blocks_variant_243_edges_7();
    test_3_blocks_variant_244_edges_7();
    test_3_blocks_variant_245_edges_7();
    test_3_blocks_variant_246_edges_7();
    test_3_blocks_variant_247_edges_7();
    test_3_blocks_variant_248_edges_7();
    test_3_blocks_variant_249_edges_7();
    test_3_blocks_variant_250_edges_7();
    test_3_blocks_variant_251_edges_7();
    test_3_blocks_variant_252_edges_7();
    test_3_blocks_variant_253_edges_7();
    test_3_blocks_variant_254_edges_7();
    test_3_blocks_variant_255_edges_7();
    test_3_blocks_variant_256_edges_7();
    test_3_blocks_variant_257_edges_7();
    test_3_blocks_variant_258_edges_7();
    test_3_blocks_variant_259_edges_7();
    test_3_blocks_variant_260_edges_7();
    test_3_blocks_variant_261_edges_7();
    test_3_blocks_variant_262_edges_7();
    test_3_blocks_variant_263_edges_7();
    test_3_blocks_variant_264_edges_7();
    test_3_blocks_variant_265_edges_7();
    test_3_blocks_variant_266_edges_7();
    test_3_blocks_variant_267_edges_7();
    test_3_blocks_variant_268_edges_7();
    test_3_blocks_variant_269_edges_7();
    test_3_blocks_variant_270_edges_7();
    test_3_blocks_variant_271_edges_7();
    test_3_blocks_variant_272_edges_7();
    test_3_blocks_variant_273_edges_7();
    test_3_blocks_variant_274_edges_7();
    test_3_blocks_variant_275_edges_7();
    test_3_blocks_variant_276_edges_7();
    test_3_blocks_variant_277_edges_7();
    test_3_blocks_variant_278_edges_7();
    test_3_blocks_variant_279_edges_7();
    test_3_blocks_variant_280_edges_7();
    test_3_blocks_variant_281_edges_7();
    test_3_blocks_variant_282_edges_7();
    test_3_blocks_variant_283_edges_7();
    test_3_blocks_variant_284_edges_7();
    test_3_blocks_variant_285_edges_7();
    test_3_blocks_variant_286_edges_8();
    test_3_blocks_variant_287_edges_8();
    test_3_blocks_variant_288_edges_8();
    test_3_blocks_variant_289_edges_8();
    test_3_blocks_variant_290_edges_8();
    test_3_blocks_variant_291_edges_8();
    test_3_blocks_variant_292_edges_8();
    test_3_blocks_variant_293_edges_8();
    test_3_blocks_variant_294_edges_8();
    test_3_blocks_variant_295_edges_8();
    test_3_blocks_variant_296_edges_8();
    test_3_blocks_variant_297_edges_8();
    test_3_blocks_variant_298_edges_8();
    test_3_blocks_variant_299_edges_8();
    test_3_blocks_variant_300_edges_8();
    test_3_blocks_variant_301_edges_8();
    test_3_blocks_variant_302_edges_8();
    test_3_blocks_variant_303_edges_8();
    test_3_blocks_variant_304_edges_8();
    test_3_blocks_variant_305_edges_8();
    test_3_blocks_variant_306_edges_8();
    test_3_blocks_variant_307_edges_8();
    test_3_blocks_variant_308_edges_8();
    test_3_blocks_variant_309_edges_8();
    test_3_blocks_variant_310_edges_8();
    test_3_blocks_variant_311_edges_8();
    test_3_blocks_variant_312_edges_8();
    test_3_blocks_variant_313_edges_8();
    test_3_blocks_variant_314_edges_8();
    test_3_blocks_variant_315_edges_8();
    test_3_blocks_variant_316_edges_8();
    test_3_blocks_variant_317_edges_8();
    test_3_blocks_variant_318_edges_8();
    test_3_blocks_variant_319_edges_8();
    test_3_blocks_variant_320_edges_8();
    test_3_blocks_variant_321_edges_8();
    test_3_blocks_variant_322_edges_8();
    test_3_blocks_variant_323_edges_8();
    test_3_blocks_variant_324_edges_8();
    test_3_blocks_variant_325_edges_8();
    test_3_blocks_variant_326_edges_8();
    test_3_blocks_variant_327_edges_8();
    test_3_blocks_variant_328_edges_8();
    test_3_blocks_variant_329_edges_8();
    test_3_blocks_variant_330_edges_8();
    test_3_blocks_variant_331_edges_8();
    test_3_blocks_variant_332_edges_8();
    test_3_blocks_variant_333_edges_8();
    test_3_blocks_variant_334_edges_8();
    test_3_blocks_variant_335_edges_8();
    test_3_blocks_variant_336_edges_8();
    test_3_blocks_variant_337_edges_8();
    test_3_blocks_variant_338_edges_8();
    test_3_blocks_variant_339_edges_8();
    test_3_blocks_variant_340_edges_8();
    test_3_blocks_variant_341_edges_8();
    test_3_blocks_variant_342_edges_8();
    test_3_blocks_variant_343_edges_8();
    test_3_blocks_variant_344_edges_8();
    test_3_blocks_variant_345_edges_8();
    test_3_blocks_variant_346_edges_8();
    test_3_blocks_variant_347_edges_8();
    test_3_blocks_variant_348_edges_8();
    test_3_blocks_variant_349_edges_8();
    test_3_blocks_variant_350_edges_8();
    test_3_blocks_variant_351_edges_8();
    test_3_blocks_variant_352_edges_8();
    test_3_blocks_variant_353_edges_8();
    test_3_blocks_variant_354_edges_8();
    test_3_blocks_variant_355_edges_8();
    test_3_blocks_variant_356_edges_8();
    test_3_blocks_variant_357_edges_8();
    test_3_blocks_variant_358_edges_8();
    test_3_blocks_variant_359_edges_8();
    test_3_blocks_variant_360_edges_8();
    test_3_blocks_variant_361_edges_8();
    test_3_blocks_variant_362_edges_8();
    test_3_blocks_variant_363_edges_8();
    test_3_blocks_variant_364_edges_8();
    test_3_blocks_variant_365_edges_8();
    test_3_blocks_variant_366_edges_8();
    test_3_blocks_variant_367_edges_8();
    test_3_blocks_variant_368_edges_8();
    test_3_blocks_variant_369_edges_8();
    test_3_blocks_variant_370_edges_8();
    test_3_blocks_variant_371_edges_8();
    test_3_blocks_variant_372_edges_8();
    test_3_blocks_variant_373_edges_8();
    test_3_blocks_variant_374_edges_8();
    test_3_blocks_variant_375_edges_8();
    test_3_blocks_variant_376_edges_8();
    test_3_blocks_variant_377_edges_8();
    test_3_blocks_variant_378_edges_8();
    test_3_blocks_variant_379_edges_8();
    test_3_blocks_variant_380_edges_8();
    test_3_blocks_variant_381_edges_8();
    test_3_blocks_variant_382_edges_8();
    test_3_blocks_variant_383_edges_8();
    test_3_blocks_variant_384_edges_8();
    test_3_blocks_variant_385_edges_8();
    test_3_blocks_variant_386_edges_8();
    test_3_blocks_variant_387_edges_8();
    test_3_blocks_variant_388_edges_8();
    test_3_blocks_variant_389_edges_8();
    test_3_blocks_variant_390_edges_8();
    test_3_blocks_variant_391_edges_8();
    test_3_blocks_variant_392_edges_8();
    test_3_blocks_variant_393_edges_8();
    test_3_blocks_variant_394_edges_8();
    test_3_blocks_variant_395_edges_8();
    test_3_blocks_variant_396_edges_8();
    test_3_blocks_variant_397_edges_8();
    test_3_blocks_variant_398_edges_8();
    test_3_blocks_variant_399_edges_8();
    test_3_blocks_variant_400_edges_8();
    test_3_blocks_variant_401_edges_8();
    test_3_blocks_variant_402_edges_8();
    test_3_blocks_variant_403_edges_8();
    test_3_blocks_variant_404_edges_8();
    test_3_blocks_variant_405_edges_8();
    test_3_blocks_variant_406_edges_8();
    test_3_blocks_variant_407_edges_8();
    test_3_blocks_variant_408_edges_8();
    test_3_blocks_variant_409_edges_8();
    test_3_blocks_variant_410_edges_8();
    test_3_blocks_variant_411_edges_8();
    test_3_blocks_variant_412_edges_8();
    test_3_blocks_variant_413_edges_8();
    test_3_blocks_variant_414_edges_8();
    test_3_blocks_variant_415_edges_8();
    test_3_blocks_variant_416_edges_8();
    test_3_blocks_variant_417_edges_8();
    test_3_blocks_variant_418_edges_8();
    test_3_blocks_variant_419_edges_8();
    test_3_blocks_variant_420_edges_8();
    test_3_blocks_variant_421_edges_8();
    test_3_blocks_variant_422_edges_8();
    test_3_blocks_variant_423_edges_8();
    test_3_blocks_variant_424_edges_8();
    test_3_blocks_variant_425_edges_8();
    test_3_blocks_variant_426_edges_8();
    test_3_blocks_variant_427_edges_8();
    test_3_blocks_variant_428_edges_8();
    test_3_blocks_variant_429_edges_8();
    test_3_blocks_variant_430_edges_8();
    test_3_blocks_variant_431_edges_8();
    test_3_blocks_variant_432_edges_8();
    test_3_blocks_variant_433_edges_8();
    test_3_blocks_variant_434_edges_8();
    test_3_blocks_variant_435_edges_8();
    test_3_blocks_variant_436_edges_8();
    test_3_blocks_variant_437_edges_8();
    test_3_blocks_variant_438_edges_8();
    test_3_blocks_variant_439_edges_8();
    test_3_blocks_variant_440_edges_8();
    test_3_blocks_variant_441_edges_8();
    test_3_blocks_variant_442_edges_8();
    test_3_blocks_variant_443_edges_8();
    test_3_blocks_variant_444_edges_8();
    test_3_blocks_variant_445_edges_8();
    test_3_blocks_variant_446_edges_8();
    test_3_blocks_variant_447_edges_8();
    test_3_blocks_variant_448_edges_8();
    test_3_blocks_variant_449_edges_8();
    test_3_blocks_variant_450_edges_8();
    test_3_blocks_variant_451_edges_8();
    test_3_blocks_variant_452_edges_8();
    test_3_blocks_variant_453_edges_8();
    test_3_blocks_variant_454_edges_8();
    test_3_blocks_variant_455_edges_8();
    test_3_blocks_variant_456_edges_8();
    test_3_blocks_variant_457_edges_8();
    test_3_blocks_variant_458_edges_8();
    test_3_blocks_variant_459_edges_8();
    test_3_blocks_variant_460_edges_8();
    test_3_blocks_variant_461_edges_8();
    test_3_blocks_variant_462_edges_8();
    test_3_blocks_variant_463_edges_8();
    test_3_blocks_variant_464_edges_8();
    test_3_blocks_variant_465_edges_8();
    test_3_blocks_variant_466_edges_8();
    test_3_blocks_variant_467_edges_8();
    test_3_blocks_variant_468_edges_8();
    test_3_blocks_variant_469_edges_8();
    test_3_blocks_variant_470_edges_8();
    test_3_blocks_variant_471_edges_8();
    test_3_blocks_variant_472_edges_8();
    test_3_blocks_variant_473_edges_8();
    test_3_blocks_variant_474_edges_8();
    test_3_blocks_variant_475_edges_8();
    test_3_blocks_variant_476_edges_8();
    test_3_blocks_variant_477_edges_8();
    test_3_blocks_variant_478_edges_8();
    test_3_blocks_variant_479_edges_8();
    test_3_blocks_variant_480_edges_8();
    test_3_blocks_variant_481_edges_8();
    test_3_blocks_variant_482_edges_8();
    test_3_blocks_variant_483_edges_8();
    test_3_blocks_variant_484_edges_8();
    test_3_blocks_variant_485_edges_8();
    test_3_blocks_variant_486_edges_8();
    test_3_blocks_variant_487_edges_8();
    test_3_blocks_variant_488_edges_8();
    test_3_blocks_variant_489_edges_8();
    test_3_blocks_variant_490_edges_8();
    test_3_blocks_variant_491_edges_8();
    test_3_blocks_variant_492_edges_8();
    test_3_blocks_variant_493_edges_8();
    test_3_blocks_variant_494_edges_8();
    test_3_blocks_variant_495_edges_8();
    test_3_blocks_variant_496_edges_8();
    test_3_blocks_variant_497_edges_8();
    test_3_blocks_variant_498_edges_8();
    test_3_blocks_variant_499_edges_8();
    test_3_blocks_variant_500_edges_8();
    test_3_blocks_variant_501_edges_8();
    test_3_blocks_variant_502_edges_8();
    test_3_blocks_variant_503_edges_8();
    test_3_blocks_variant_504_edges_8();
    test_3_blocks_variant_505_edges_8();
    test_3_blocks_variant_506_edges_8();
    test_3_blocks_variant_507_edges_8();
    test_3_blocks_variant_508_edges_8();
    test_3_blocks_variant_509_edges_8();
    test_3_blocks_variant_510_edges_8();
    test_3_blocks_variant_511_edges_8();
    test_3_blocks_variant_512_edges_8();
    test_3_blocks_variant_513_edges_8();
    test_3_blocks_variant_514_edges_8();
    test_3_blocks_variant_515_edges_8();
    test_3_blocks_variant_516_edges_8();
    test_3_blocks_variant_517_edges_8();
    test_3_blocks_variant_518_edges_8();
    test_3_blocks_variant_519_edges_9();
    test_3_blocks_variant_520_edges_9();
    test_3_blocks_variant_521_edges_9();
    test_3_blocks_variant_522_edges_9();
    test_3_blocks_variant_523_edges_9();
    test_3_blocks_variant_524_edges_9();
    test_3_blocks_variant_525_edges_9();
    test_3_blocks_variant_526_edges_9();
    test_3_blocks_variant_527_edges_9();
    test_3_blocks_variant_528_edges_9();
    test_3_blocks_variant_529_edges_9();
    test_3_blocks_variant_530_edges_9();
    test_3_blocks_variant_531_edges_9();
    test_3_blocks_variant_532_edges_9();
    test_3_blocks_variant_533_edges_9();
    test_3_blocks_variant_534_edges_9();
    test_3_blocks_variant_535_edges_9();
    test_3_blocks_variant_536_edges_9();
    test_3_blocks_variant_537_edges_9();
    test_3_blocks_variant_538_edges_9();
    test_3_blocks_variant_539_edges_9();
    test_3_blocks_variant_540_edges_9();
    test_3_blocks_variant_541_edges_9();
    test_3_blocks_variant_542_edges_9();
    test_3_blocks_variant_543_edges_9();
    test_3_blocks_variant_544_edges_9();
    test_3_blocks_variant_545_edges_9();
    test_3_blocks_variant_546_edges_9();
    test_3_blocks_variant_547_edges_9();
    test_3_blocks_variant_548_edges_9();
    test_3_blocks_variant_549_edges_9();
    test_3_blocks_variant_550_edges_9();
    test_3_blocks_variant_551_edges_9();
    test_3_blocks_variant_552_edges_9();
    test_3_blocks_variant_553_edges_9();
    test_3_blocks_variant_554_edges_9();
    test_3_blocks_variant_555_edges_9();
    test_3_blocks_variant_556_edges_9();
    test_3_blocks_variant_557_edges_9();
    test_3_blocks_variant_558_edges_9();
    test_3_blocks_variant_559_edges_9();
    test_3_blocks_variant_560_edges_9();
    test_3_blocks_variant_561_edges_9();
    test_3_blocks_variant_562_edges_9();
    test_3_blocks_variant_563_edges_9();
    test_3_blocks_variant_564_edges_9();
    test_3_blocks_variant_565_edges_9();
    test_3_blocks_variant_566_edges_9();
    test_3_blocks_variant_567_edges_9();
    test_3_blocks_variant_568_edges_9();
    test_3_blocks_variant_569_edges_9();
    test_3_blocks_variant_570_edges_9();
    test_3_blocks_variant_571_edges_9();
    test_3_blocks_variant_572_edges_9();
    test_3_blocks_variant_573_edges_9();
    test_3_blocks_variant_574_edges_9();
    test_3_blocks_variant_575_edges_9();
    test_3_blocks_variant_576_edges_9();
    test_3_blocks_variant_577_edges_9();
    test_3_blocks_variant_578_edges_9();
    test_3_blocks_variant_579_edges_9();
    test_3_blocks_variant_580_edges_9();
    test_3_blocks_variant_581_edges_9();
    test_3_blocks_variant_582_edges_9();
    test_3_blocks_variant_583_edges_9();
    test_3_blocks_variant_584_edges_9();
    test_3_blocks_variant_585_edges_9();
    test_3_blocks_variant_586_edges_9();
    test_3_blocks_variant_587_edges_9();
    test_3_blocks_variant_588_edges_9();
    test_3_blocks_variant_589_edges_9();
    test_3_blocks_variant_590_edges_9();
    test_3_blocks_variant_591_edges_9();
    test_3_blocks_variant_592_edges_9();
    test_3_blocks_variant_593_edges_9();
    test_3_blocks_variant_594_edges_9();
    test_3_blocks_variant_595_edges_9();
    test_3_blocks_variant_596_edges_9();
    test_3_blocks_variant_597_edges_9();
    test_3_blocks_variant_598_edges_9();
    test_3_blocks_variant_599_edges_9();
    test_3_blocks_variant_600_edges_9();
    test_3_blocks_variant_601_edges_9();
    test_3_blocks_variant_602_edges_9();
    test_3_blocks_variant_603_edges_9();
    test_3_blocks_variant_604_edges_9();
    test_3_blocks_variant_605_edges_9();
    test_3_blocks_variant_606_edges_9();
    test_3_blocks_variant_607_edges_9();
    test_3_blocks_variant_608_edges_9();
    test_3_blocks_variant_609_edges_9();
    test_3_blocks_variant_610_edges_9();
    test_3_blocks_variant_611_edges_9();
    test_3_blocks_variant_612_edges_9();
    test_3_blocks_variant_613_edges_9();
    test_3_blocks_variant_614_edges_9();
    test_3_blocks_variant_615_edges_9();
    test_3_blocks_variant_616_edges_9();
    test_3_blocks_variant_617_edges_9();
    test_3_blocks_variant_618_edges_9();
    test_3_blocks_variant_619_edges_9();
    test_3_blocks_variant_620_edges_9();
    test_3_blocks_variant_621_edges_9();
    test_3_blocks_variant_622_edges_9();
    test_3_blocks_variant_623_edges_9();
    test_3_blocks_variant_624_edges_9();
    test_3_blocks_variant_625_edges_9();
    test_3_blocks_variant_626_edges_9();
    test_3_blocks_variant_627_edges_9();
    test_3_blocks_variant_628_edges_9();
    test_3_blocks_variant_629_edges_9();
    test_3_blocks_variant_630_edges_9();
    test_3_blocks_variant_631_edges_9();
    test_3_blocks_variant_632_edges_9();
    test_3_blocks_variant_633_edges_9();
    test_3_blocks_variant_634_edges_9();
    test_3_blocks_variant_635_edges_9();
    test_3_blocks_variant_636_edges_9();
    test_3_blocks_variant_637_edges_9();
    test_3_blocks_variant_638_edges_9();
    test_3_blocks_variant_639_edges_9();
    test_3_blocks_variant_640_edges_9();
    test_3_blocks_variant_641_edges_9();
    test_3_blocks_variant_642_edges_9();
    test_3_blocks_variant_643_edges_9();
    test_3_blocks_variant_644_edges_9();
    test_3_blocks_variant_645_edges_9();
    test_3_blocks_variant_646_edges_9();
    test_3_blocks_variant_647_edges_9();
    test_3_blocks_variant_648_edges_9();
    test_3_blocks_variant_649_edges_9();
    test_3_blocks_variant_650_edges_9();
    test_3_blocks_variant_651_edges_9();
    test_3_blocks_variant_652_edges_9();
    test_3_blocks_variant_653_edges_9();
    test_3_blocks_variant_654_edges_9();
    test_3_blocks_variant_655_edges_9();
    test_3_blocks_variant_656_edges_9();
    test_3_blocks_variant_657_edges_9();
    test_3_blocks_variant_658_edges_9();
    test_3_blocks_variant_659_edges_9();
    test_3_blocks_variant_660_edges_9();
    test_3_blocks_variant_661_edges_9();
    test_3_blocks_variant_662_edges_9();
    test_3_blocks_variant_663_edges_9();
    test_3_blocks_variant_664_edges_9();
    test_3_blocks_variant_665_edges_9();
    test_3_blocks_variant_666_edges_9();
    test_3_blocks_variant_667_edges_9();
    test_3_blocks_variant_668_edges_9();
    test_3_blocks_variant_669_edges_9();
    test_3_blocks_variant_670_edges_9();
    test_3_blocks_variant_671_edges_9();
    test_3_blocks_variant_672_edges_9();
    test_3_blocks_variant_673_edges_9();
    test_3_blocks_variant_674_edges_9();
    test_3_blocks_variant_675_edges_9();
    test_3_blocks_variant_676_edges_9();
    test_3_blocks_variant_677_edges_9();
    test_3_blocks_variant_678_edges_9();
    test_3_blocks_variant_679_edges_9();
    test_3_blocks_variant_680_edges_9();
    test_3_blocks_variant_681_edges_9();
    test_3_blocks_variant_682_edges_9();
    test_3_blocks_variant_683_edges_9();
    test_3_blocks_variant_684_edges_9();
    test_3_blocks_variant_685_edges_9();
    test_3_blocks_variant_686_edges_9();
    test_3_blocks_variant_687_edges_9();
    test_3_blocks_variant_688_edges_9();
    test_3_blocks_variant_689_edges_9();
    test_3_blocks_variant_690_edges_9();
    test_3_blocks_variant_691_edges_9();
    test_3_blocks_variant_692_edges_9();
    test_3_blocks_variant_693_edges_9();
    test_3_blocks_variant_694_edges_9();
    test_3_blocks_variant_695_edges_9();
    test_3_blocks_variant_696_edges_9();
    test_3_blocks_variant_697_edges_9();
    test_3_blocks_variant_698_edges_9();
    test_3_blocks_variant_699_edges_9();
    test_3_blocks_variant_700_edges_9();
    test_3_blocks_variant_701_edges_9();
    test_3_blocks_variant_702_edges_9();
    test_3_blocks_variant_703_edges_9();
    test_3_blocks_variant_704_edges_9();
    test_3_blocks_variant_705_edges_9();
    test_3_blocks_variant_706_edges_9();
    test_3_blocks_variant_707_edges_10();
    test_3_blocks_variant_708_edges_10();
    test_3_blocks_variant_709_edges_10();
    test_3_blocks_variant_710_edges_10();
    test_3_blocks_variant_711_edges_10();
    test_3_blocks_variant_712_edges_10();
    test_3_blocks_variant_713_edges_10();
    test_3_blocks_variant_714_edges_10();
    test_3_blocks_variant_715_edges_10();
    test_3_blocks_variant_716_edges_10();
    test_3_blocks_variant_717_edges_10();
    test_3_blocks_variant_718_edges_10();
    test_3_blocks_variant_719_edges_10();
    test_3_blocks_variant_720_edges_10();
    test_3_blocks_variant_721_edges_10();
    test_3_blocks_variant_722_edges_10();
    test_3_blocks_variant_723_edges_10();
    test_3_blocks_variant_724_edges_10();
    test_3_blocks_variant_725_edges_10();
    test_3_blocks_variant_726_edges_10();
    test_3_blocks_variant_727_edges_10();
    test_3_blocks_variant_728_edges_10();
    test_3_blocks_variant_729_edges_10();
    test_3_blocks_variant_730_edges_10();
    test_3_blocks_variant_731_edges_10();
    test_3_blocks_variant_732_edges_10();
    test_3_blocks_variant_733_edges_10();
    test_3_blocks_variant_734_edges_10();
    test_3_blocks_variant_735_edges_10();
    test_3_blocks_variant_736_edges_10();
    test_3_blocks_variant_737_edges_10();
    test_3_blocks_variant_738_edges_10();
    test_3_blocks_variant_739_edges_10();
    test_3_blocks_variant_740_edges_10();
    test_3_blocks_variant_741_edges_10();
    test_3_blocks_variant_742_edges_10();
    test_3_blocks_variant_743_edges_10();
    test_3_blocks_variant_744_edges_10();
    test_3_blocks_variant_745_edges_10();
    test_3_blocks_variant_746_edges_10();
    test_3_blocks_variant_747_edges_10();
    test_3_blocks_variant_748_edges_10();
    test_3_blocks_variant_749_edges_10();
    test_3_blocks_variant_750_edges_10();
    test_3_blocks_variant_751_edges_10();
    test_3_blocks_variant_752_edges_10();
    test_3_blocks_variant_753_edges_10();
    test_3_blocks_variant_754_edges_10();
    test_3_blocks_variant_755_edges_10();
    test_3_blocks_variant_756_edges_10();
    test_3_blocks_variant_757_edges_10();
    test_3_blocks_variant_758_edges_10();
    test_3_blocks_variant_759_edges_10();
    test_3_blocks_variant_760_edges_10();
    test_3_blocks_variant_761_edges_10();
    test_3_blocks_variant_762_edges_10();
    test_3_blocks_variant_763_edges_10();
    test_3_blocks_variant_764_edges_10();
    test_3_blocks_variant_765_edges_10();
    test_3_blocks_variant_766_edges_10();
    test_3_blocks_variant_767_edges_10();
    test_3_blocks_variant_768_edges_10();
    test_3_blocks_variant_769_edges_10();
    test_3_blocks_variant_770_edges_10();
    test_3_blocks_variant_771_edges_10();
    test_3_blocks_variant_772_edges_10();
    test_3_blocks_variant_773_edges_10();
    test_3_blocks_variant_774_edges_10();
    test_3_blocks_variant_775_edges_10();
    test_3_blocks_variant_776_edges_10();
    test_3_blocks_variant_777_edges_10();
    test_3_blocks_variant_778_edges_10();
    test_3_blocks_variant_779_edges_10();
    test_3_blocks_variant_780_edges_10();
    test_3_blocks_variant_781_edges_10();
    test_3_blocks_variant_782_edges_10();
    test_3_blocks_variant_783_edges_10();
    test_3_blocks_variant_784_edges_10();
    test_3_blocks_variant_785_edges_10();
    test_3_blocks_variant_786_edges_10();
    test_3_blocks_variant_787_edges_10();
    test_3_blocks_variant_788_edges_10();
    test_3_blocks_variant_789_edges_10();
    test_3_blocks_variant_790_edges_10();
    test_3_blocks_variant_791_edges_10();
    test_3_blocks_variant_792_edges_10();
    test_3_blocks_variant_793_edges_10();
    test_3_blocks_variant_794_edges_10();
    test_3_blocks_variant_795_edges_10();
    test_3_blocks_variant_796_edges_10();
    test_3_blocks_variant_797_edges_10();
    test_3_blocks_variant_798_edges_10();
    test_3_blocks_variant_799_edges_10();
    test_3_blocks_variant_800_edges_10();
    test_3_blocks_variant_801_edges_10();
    test_3_blocks_variant_802_edges_10();
    test_3_blocks_variant_803_edges_10();
    test_3_blocks_variant_804_edges_10();
    test_3_blocks_variant_805_edges_10();
    test_3_blocks_variant_806_edges_11();
    test_3_blocks_variant_807_edges_11();
    test_3_blocks_variant_808_edges_11();
    test_3_blocks_variant_809_edges_11();
    test_3_blocks_variant_810_edges_11();
    test_3_blocks_variant_811_edges_11();
    test_3_blocks_variant_812_edges_11();
    test_3_blocks_variant_813_edges_11();
    test_3_blocks_variant_814_edges_11();
    test_3_blocks_variant_815_edges_11();
    test_3_blocks_variant_816_edges_11();
    test_3_blocks_variant_817_edges_11();
    test_3_blocks_variant_818_edges_11();
    test_3_blocks_variant_819_edges_11();
    test_3_blocks_variant_820_edges_11();
    test_3_blocks_variant_821_edges_11();
    test_3_blocks_variant_822_edges_11();
    test_3_blocks_variant_823_edges_11();
    test_3_blocks_variant_824_edges_11();
    test_3_blocks_variant_825_edges_11();
    test_3_blocks_variant_826_edges_11();
    test_3_blocks_variant_827_edges_11();
    test_3_blocks_variant_828_edges_11();
    test_3_blocks_variant_829_edges_11();
    test_3_blocks_variant_830_edges_11();
    test_3_blocks_variant_831_edges_11();
    test_3_blocks_variant_832_edges_11();
    test_3_blocks_variant_833_edges_11();
    test_3_blocks_variant_834_edges_11();
    test_3_blocks_variant_835_edges_11();
    test_3_blocks_variant_836_edges_11();
    test_3_blocks_variant_837_edges_11();
    test_3_blocks_variant_838_edges_11();
    test_3_blocks_variant_839_edges_11();
    test_3_blocks_variant_840_edges_12();
    test_3_blocks_variant_841_edges_12();
    test_3_blocks_variant_842_edges_12();
    test_3_blocks_variant_843_edges_12();
    test_3_blocks_variant_844_edges_12();
    test_3_blocks_variant_845_edges_12();
    test_3_blocks_variant_846_edges_12();
    test_3_blocks_variant_847_edges_13();
    return 0;
}

void fun_805f1cd() {
    return;
}

int32_t g8061008 = 0;

void fun_80482e6() {
    goto g8061008;
}

void fun_80482f6() {
    goto 0x80482d0;
}

void fun_804837c() {
}

/* completed.6532 */
signed char completed_6532 = 0;

int32_t fun_80483b5() {
    int1_t zf1;
    int32_t eax2;

    zf1 = completed_6532 == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        completed_6532 = 1;
    }
    return eax2;
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x1e87;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x805f191);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}
