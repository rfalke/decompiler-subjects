
unsigned int initConditions() {
    unsigned int v0;
    unsigned int result;
    int v1 = result + 1000;
    unsigned int v2 = result;
    do {
        v0 = result + 1;
        *(unsigned int*)((v0 - v2) * 4 + (int)&gvar_806103C) = result;
        result = v0;
    }
    while(v0 != v1);
    return result;
}

void main() {
    // Decompilation error
}

void sub_80482D0() {
    jump gvar_8061008;
}

void sub_8048300() {
    jump __gmon_start__;
}

int test_1_blocks_variant_0_edges_2() {
    →puts("block 2");
    →puts("exit block");
    return 0;
}

int test_1_blocks_variant_1_edges_3() {
    do {
        →puts("block 2");
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_0_edges_3() {
    →puts("block 2");
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_10_edges_5() {
loc_804870C:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            while(1) {
                →puts("block 3");
                if(!gvar_80610A8) {
                    continue loc_804870C;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_11_edges_5() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_12_edges_5() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_13_edges_5() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_14_edges_5() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_15_edges_5() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 3");
    }
}

int test_2_blocks_variant_16_edges_6() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_80488C2:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_80488C2;
}

int test_2_blocks_variant_17_edges_6() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8048910:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_8048910;
}

int test_2_blocks_variant_18_edges_6() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 3");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_19_edges_6() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_1_edges_4() {
    do {
        →puts("block 2");
        →puts("block 3");
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_20_edges_6() {
loc_80489E2:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_80489E2;
        }
    }
}

int test_2_blocks_variant_21_edges_7() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_8048A51:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8048A51;
}

int test_2_blocks_variant_2_edges_4() {
    →puts("block 2");
    do {
        →puts("block 3");
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_3_edges_4() {
    →puts("block 2");
    if(gvar_80610A4) {
        →puts("block 3");
    }
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_4_edges_4() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_5_edges_4() {
    →puts("block 2");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_6_edges_4() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_7_edges_5() {
    do {
        →puts("block 2");
    loc_804864C:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610A8);
    goto loc_804864C;
}

int test_2_blocks_variant_8_edges_5() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_2_blocks_variant_9_edges_5() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            →puts("block 3");
        }
        while(gvar_80610A8);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_0_edges_4() {
    →puts("block 2");
    →puts("block 3");
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_100_edges_6() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(!gvar_80610A8) {
                →puts("block 3");
                →puts("exit block");
                return 0;
            }
            →puts("block 4");
        }
    }
}

int test_3_blocks_variant_101_edges_6() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        →puts("block 4");
    }
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_102_edges_6() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
        →puts("block 3");
        →puts("exit block");
        return 0;
    }
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_103_edges_7() {
    do {
        →puts("block 2");
    loc_804ABAE:
        do {
            →puts("block 3");
        loc_804ABBD:
            while(1) {
                →puts("block 4");
                if(!gvar_80610A4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_804ABAE;
    }
    else {
        goto loc_804ABBD;
    }
}

int test_3_blocks_variant_104_edges_7() {
    do {
        →puts("block 2");
    loc_804AC0B:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804AC0B;
}

int test_3_blocks_variant_105_edges_7() {
    do {
        →puts("block 2");
        →puts("block 3");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804AC80:
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804AC80;
}

int test_3_blocks_variant_106_edges_7() {
    →puts("block 2");
loc_804ACC5:
    while(1) {
        →puts("block 3");
        if(!gvar_80610A4) {
            break;
        }
        else {
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    break loc_804ACC5;
                }
                else if(!gvar_80610AC) {
                    continue loc_804ACC5;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_107_edges_7() {
loc_804AD13:
    →puts("block 2");
    do {
        →puts("block 3");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804AD3A:
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                goto loc_804AD13;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804AD3A;
}

int test_3_blocks_variant_108_edges_7() {
loc_804AD70:
    do {
        →puts("block 2");
    loc_804AD7F:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                goto loc_804AD70;
            }
            else {
                →puts("block 4");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804AD7F;
}

int test_3_blocks_variant_109_edges_7() {
    do {
        do {
            →puts("block 2");
            →puts("block 3");
        }
        while(!gvar_80610A4);
    loc_804ADF4:
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804ADF4;
}

int test_3_blocks_variant_10_edges_5() {
    →puts("block 2");
    if(gvar_80610A4) {
        →puts("block 3");
        →puts("block 4");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_110_edges_7() {
loc_804AE2A:
    →puts("block 2");
    do {
        →puts("block 3");
        if(!gvar_80610A4) {
            goto loc_804AE2A;
        }
        else {
        loc_804AE51:
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804AE51;
}

int test_3_blocks_variant_111_edges_7() {
    do {
        →puts("block 2");
    loc_804AE96:
        while(1) {
            →puts("block 3");
            if(gvar_80610A4) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804AE96;
}

int test_3_blocks_variant_112_edges_7() {
    do {
        →puts("block 2");
        do {
            →puts("block 3");
        }
        while(!gvar_80610A4);
    loc_804AF0B:
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804AF0B;
}

int test_3_blocks_variant_113_edges_7() {
    →puts("block 2");
    do {
        do {
            →puts("block 3");
        }
        while(!gvar_80610A4);
    loc_804AF68:
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804AF68;
}

int test_3_blocks_variant_114_edges_7() {
    while(1) {
        →puts("block 2");
        →puts("block 3");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_115_edges_7() {
    do {
        →puts("block 2");
    loc_804B00A:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610A8);
    →puts("block 4");
    if(gvar_80610AC) {
        goto loc_804B00A;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_116_edges_7() {
    do {
        →puts("block 2");
        →puts("block 3");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_117_edges_7() {
loc_804B0B5:
    do {
        →puts("block 2");
    loc_804B0C4:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                goto loc_804B0B5;
            }
            else {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804B0C4;
}

int test_3_blocks_variant_118_edges_7() {
loc_804B112:
    do {
        →puts("block 2");
        →puts("block 3");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_804B112;
        }
    }
}

int test_3_blocks_variant_119_edges_7() {
    do {
        →puts("block 2");
    loc_804B17E:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_804B17E;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_11_edges_5() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_120_edges_7() {
alab1:
    do {
        →puts("block 2");
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                break alab1;
            }
        }
        while(!gvar_80610A8);
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_121_edges_7() {
    →puts("block 2");
    while(1) {
        →puts("block 3");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_122_edges_7() {
    →puts("block 2");
    do {
        →puts("block 3");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_123_edges_7() {
    do {
        →puts("block 2");
    loc_804B2F2:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610A8) {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804B2F2;
}

int test_3_blocks_variant_124_edges_7() {
loc_804B340:
    →puts("block 2");
    do {
        →puts("block 3");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_804B340;
        }
    }
}

int test_3_blocks_variant_125_edges_7() {
    →puts("block 2");
loc_804B3AC:
    do {
        →puts("block 3");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_804B3AC;
        }
    }
}

int test_3_blocks_variant_126_edges_7() {
loc_804B3FA:
    do {
        →puts("block 2");
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                goto loc_804B3FA;
            }
        }
        while(!gvar_80610A8);
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_127_edges_7() {
loc_804B457:
    →puts("block 2");
loc_804B466:
    do {
        →puts("block 3");
        if(!gvar_80610A4) {
            goto loc_804B457;
        }
        else if(!gvar_80610A8) {
            goto loc_804B466;
        }
        else {
            →puts("block 4");
        }
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_128_edges_7() {
loc_804B4B4:
    →puts("block 2");
    do {
        →puts("block 3");
        if(!gvar_80610A4) {
            goto loc_804B4B4;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_129_edges_7() {
    do {
        →puts("block 2");
    loc_804B520:
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_804B520;
    }
    else {
        →puts("block 4");
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_12_edges_5() {
    →puts("block 2");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 3");
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_130_edges_7() {
loc_804B56E:
    while(1) {
        →puts("block 2");
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                break loc_804B56E;
            }
            else if(!gvar_80610A8) {
                continue loc_804B56E;
            }
        }
        while(!gvar_80610AC);
        →puts("block 4");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_131_edges_7() {
    do {
        →puts("block 2");
    loc_804B5DA:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        →puts("block 4");
    }
    goto loc_804B5DA;
}

int test_3_blocks_variant_132_edges_7() {
    do {
        →puts("block 2");
    loc_804B637:
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_804B637;
    }
    else {
        while(1) {
            →puts("block 4");
        }
    }
}

int test_3_blocks_variant_133_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804B69D:
        while(1) {
            →puts("block 3");
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804B69D;
}

int test_3_blocks_variant_134_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        →puts("block 3");
    loc_804B709:
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804B709;
}

int test_3_blocks_variant_135_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            →puts("block 3");
        loc_804B766:
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(!gvar_80610AC);
        goto loc_804B766;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_136_edges_7() {
loc_804B79C:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                →puts("block 3");
            loc_804B7C3:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610A8) {
                        goto loc_804B79C;
                    }
                }
            }
            while(!gvar_80610AC);
            goto loc_804B7C3;
        }
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_137_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else {
                →puts("block 4");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_138_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else {
                →puts("block 4");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_139_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        →puts("block 3");
        if(gvar_80610A8) {
            do {
                →puts("block 4");
            }
            while(gvar_80610AC);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_13_edges_5() {
    →puts("block 2");
    if(gvar_80610A4) {
        →puts("block 3");
        while(1) {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_140_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804B928:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            →puts("block 4");
        }
    }
    while(!gvar_80610AC);
    goto loc_804B928;
}

int test_3_blocks_variant_141_edges_7() {
loc_804B96D:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else {
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610AC) {
                        continue loc_804B96D;
                    }
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_142_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
    loc_804B9E2:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else {
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610AC) {
                        continue loc_804B9E2;
                    }
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_143_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
            if(gvar_80610A8) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_144_edges_7() {
loc_804BA84:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    continue loc_804BA84;
                }
                else {
                    →puts("block 4");
                }
            }
            while(gvar_80610AC);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_145_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        →puts("block 3");
    }
    while(!gvar_80610A8);
    do {
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_146_edges_7() {
loc_804BB3E:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804BB56:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                goto loc_804BB3E;
            }
            else {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804BB56;
}

int test_3_blocks_variant_147_edges_7() {
loc_804BB9B:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 3");
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_804BB9B;
        }
    }
}

int test_3_blocks_variant_148_edges_7() {
loc_804BBF8:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
        loc_804BC10:
            while(1) {
                →puts("block 3");
                if(!gvar_80610A8) {
                    goto loc_804BBF8;
                }
                else {
                loc_804BC28:
                    while(1) {
                        →puts("block 4");
                        if(!gvar_80610AC) {
                            continue loc_804BC10;
                        }
                    }
                }
            }
            goto loc_804BC28;
        }
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_149_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
            }
            while(!gvar_80610A8);
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_14_edges_5() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    →puts("block 3");
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_150_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 3");
            if(gvar_80610A8) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_151_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            →puts("block 3");
        }
        while(!gvar_80610A8);
        do {
            →puts("block 4");
        }
        while(gvar_80610AC);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_152_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804BD84:
        while(1) {
            →puts("block 3");
            if(gvar_80610A8) {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804BD84;
}

int test_3_blocks_variant_153_edges_7() {
loc_804BDC9:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
            }
            while(!gvar_80610A8);
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    continue loc_804BDC9;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_154_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
    loc_804BE3E:
        do {
            →puts("block 3");
        }
        while(!gvar_80610A8);
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                goto loc_804BE3E;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_155_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610AC);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_156_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_157_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804BF55:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    →puts("block 4");
    goto loc_804BF55;
}

int test_3_blocks_variant_158_edges_7() {
loc_804BF9A:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 3");
            if(gvar_80610A8) {
                if(!gvar_80610AC) {
                    goto loc_804BF9A;
                }
                else {
                    break;
                }
            }
        }
        →puts("exit block");
        return 0;
    }
    while(1);
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_159_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610AC);
        →puts("block 4");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_15_edges_5() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("block 3");
    }
    else {
        →puts("block 4");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_160_edges_7() {
alab1:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    break alab1;
                }
            }
            while(!gvar_80610AC);
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_161_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_162_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610AC);
        while(1) {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_163_edges_7() {
loc_804C16B:
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    continue loc_804C16B;
                }
            }
            while(!gvar_80610AC);
            →puts("block 4");
        }
        break;
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_164_edges_7() {
loc_804C1C8:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    continue loc_804C1C8;
                }
            }
            while(!gvar_80610AC);
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_165_edges_7() {
loc_804C225:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            while(1) {
                →puts("block 3");
                if(!gvar_80610A8) {
                    continue loc_804C225;
                }
                else if(gvar_80610AC) {
                    →puts("block 4");
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_166_edges_7() {
loc_804C282:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    continue loc_804C282;
                }
            }
            while(!gvar_80610AC);
            while(1) {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_167_edges_7() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_804C2F7:
        while(1) {
            →puts("block 3");
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804C2F7;
}

int test_3_blocks_variant_168_edges_7() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        →puts("block 3");
    loc_804C363:
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804C363;
}

int test_3_blocks_variant_169_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
    loc_804C3C0:
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804C3C0;
}

int test_3_blocks_variant_16_edges_5() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 4");
        }
    }
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_170_edges_7() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else {
                →puts("block 4");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_171_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    while(1) {
        →puts("block 3");
        if(!gvar_80610A8) {
            break;
        }
        else {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_172_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    →puts("block 3");
    if(gvar_80610A8) {
        do {
            →puts("block 4");
        }
        while(gvar_80610AC);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_173_edges_7() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_804C525:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            →puts("block 4");
        }
    }
    while(!gvar_80610AC);
    goto loc_804C525;
}

int test_3_blocks_variant_174_edges_7() {
loc_804C56A:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    →puts("block 3");
    if(!gvar_80610A8) {
        →puts("exit block");
        return 0;
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_804C56A;
        }
    }
}

int test_3_blocks_variant_175_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
loc_804C5DF:
    while(1) {
        →puts("block 3");
        if(!gvar_80610A8) {
            break;
        }
        else {
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    continue loc_804C5DF;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_176_edges_7() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 3");
            if(gvar_80610A8) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_177_edges_7() {
loc_804C681:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            goto loc_804C681;
        }
        else {
            →puts("block 4");
        }
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_178_edges_7() {
loc_804C6DE:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_804C6DE;
        }
        else {
            →puts("block 3");
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_179_edges_7() {
loc_804C73B:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
    }
    while(!gvar_80610A8);
    →puts("block 4");
    if(gvar_80610AC) {
        goto loc_804C73B;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_17_edges_5() {
    →puts("block 2");
    if(gvar_80610A4) {
        →puts("block 4");
    }
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_180_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    while(1) {
        →puts("block 3");
        if(gvar_80610A8) {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_181_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
    }
    while(!gvar_80610A8);
    do {
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_182_edges_7() {
loc_804C852:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_804C852;
        }
        else {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_183_edges_7() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_184_edges_7() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_804C924:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    →puts("block 4");
    goto loc_804C924;
}

int test_3_blocks_variant_185_edges_7() {
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610AC) {
                break;
            }
        }
    }
    while(1);
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_186_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610AC);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_187_edges_7() {
loc_804CA23:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610AC);
    →puts("block 4");
    goto loc_804CA23;
}

int test_3_blocks_variant_188_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    while(1) {
        →puts("block 3");
        if(!gvar_80610A8) {
            break;
        }
        else if(gvar_80610AC) {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_189_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610AC);
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_18_edges_5() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("block 3");
        →puts("exit block");
        return 0;
    }
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_190_edges_7() {
loc_804CB3A:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            goto loc_804CB3A;
        }
    }
    while(!gvar_80610AC);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_191_edges_7() {
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(gvar_80610A4 && !gvar_80610AC);
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_192_edges_7() {
    do {
        →puts("block 2");
        if(gvar_80610A4) {
        loc_804CC1B:
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        else {
            →puts("block 3");
        }
        →puts("exit block");
        return 0;
    }
    while(!gvar_80610AC);
    goto loc_804CC1B;
}

int test_3_blocks_variant_193_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                break;
            }
            else if(!gvar_80610AC) {
                →puts("block 3");
                →puts("exit block");
                return 0;
            }
        }
    }
    else {
        →puts("block 3");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_194_edges_7() {
loc_804CCAE:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 4");
                if(!gvar_80610A8) {
                    continue loc_804CCAE;
                }
            }
            while(gvar_80610AC);
        }
    }
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_195_edges_7() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                continue;
            }
        }
        →puts("block 3");
    }
}

int test_3_blocks_variant_196_edges_7() {
    do {
        while(1) {
            →puts("block 2");
            if(gvar_80610A4) {
                break;
            }
            else {
                →puts("block 3");
            }
        }
    loc_804CD8F:
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804CD8F;
}

int test_3_blocks_variant_197_edges_7() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    break;
                }
                else if(!gvar_80610AC) {
                    goto loc_804CDDD;
                }
            }
            →puts("exit block");
            return 0;
        }
    loc_804CDDD:
        →puts("block 3");
    }
}

int test_3_blocks_variant_198_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
        loc_804CE3A:
            while(1) {
                →puts("block 3");
            }
            return;
        }
        →puts("block 4");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610AC);
    goto loc_804CE3A;
}

int test_3_blocks_variant_199_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            while(1) {
                →puts("block 3");
            }
            return;
        }
    loc_804CEA6:
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804CEA6;
}

int test_3_blocks_variant_19_edges_6() {
    do {
        →puts("block 2");
    loc_804901E:
        while(1) {
            →puts("block 3");
            →puts("block 4");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610A8);
    goto loc_804901E;
}

int test_3_blocks_variant_1_edges_5() {
    do {
        →puts("block 2");
        →puts("block 3");
        →puts("block 4");
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_200_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                break;
            }
            else if(!gvar_80610AC) {
                goto loc_804CEF4;
            }
        }
        →puts("exit block");
        return 0;
    }
loc_804CEF4:
    while(1) {
        →puts("block 3");
    }
}

int test_3_blocks_variant_201_edges_7() {
loc_804CF39:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_804CF51:
        →puts("block 3");
    }
    →puts("block 4");
    if(!gvar_80610A8) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610AC) {
        goto loc_804CF39;
    }
    else {
        goto loc_804CF51;
    }
}

int test_3_blocks_variant_202_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("block 3");
        }
    loc_804CFBD:
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_804CFBD;
}

int test_3_blocks_variant_203_edges_7() {
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_804D00B:
        →puts("block 3");
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610A8) {
            break;
        }
        else if(!gvar_80610AC) {
            goto loc_804D00B;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_204_edges_7() {
loc_804D050:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else {
                goto loc_804D050;
            }
        }
        else {
            →puts("block 4");
        }
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_205_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_804D0C5;
        }
        else {
            →puts("block 4");
        }
        if(!gvar_80610AC) {
            break;
        }
        else {
        loc_804D0C5:
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_206_edges_7() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    do {
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_207_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_804D17F;
        }
        else {
            →puts("block 4");
        }
        if(gvar_80610AC) {
        loc_804D17F:
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_208_edges_7() {
loc_804D1C4:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("block 3");
            if(gvar_80610A8) {
                goto loc_804D1C4;
            }
            else {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610A4);
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_804D1C4;
        }
    }
}

int test_3_blocks_variant_209_edges_7() {
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                →puts("block 4");
            }
            while(gvar_80610AC);
        }
        →puts("block 3");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_20_edges_6() {
    do {
        →puts("block 2");
        →puts("block 3");
    loc_8049081:
        while(1) {
            →puts("block 4");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610A8);
    goto loc_8049081;
}

int test_3_blocks_variant_210_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        →puts("block 4");
        if(gvar_80610AC) {
            goto loc_804D296;
        }
    }
    else {
    loc_804D296:
        do {
            →puts("block 3");
        }
        while(gvar_80610A8);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_211_edges_7() {
    →puts("block 2");
    if(!gvar_80610A4) {
        do {
            →puts("block 3");
        }
        while(gvar_80610A8);
    }
    else {
        do {
            →puts("block 4");
        }
        while(gvar_80610AC);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_212_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 4");
        }
    }
    while(!gvar_80610AC);
    do {
        →puts("block 3");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_213_edges_7() {
loc_804D395:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    continue loc_804D395;
                }
            }
        }
    }
    do {
        →puts("block 3");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_214_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            →puts("block 4");
        }
        while(gvar_80610AC);
    }
    do {
        →puts("block 3");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_215_edges_7() {
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_804D467:
        →puts("block 3");
        if(gvar_80610A8) {
            goto loc_804D47F;
        }
    }
    else {
    loc_804D47F:
        →puts("block 4");
        if(gvar_80610AC) {
            goto loc_804D467;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_216_edges_7() {
loc_804D4AC:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_804D4C4:
        →puts("block 3");
        if(gvar_80610A8) {
            goto loc_804D4DC;
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
    else {
    loc_804D4DC:
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_804D4AC;
        }
        else {
            goto loc_804D4C4;
        }
    }
}

int test_3_blocks_variant_217_edges_7() {
loc_804D509:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("block 3");
        if(gvar_80610A8) {
            goto loc_804D539;
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
    else {
    loc_804D539:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                goto loc_804D509;
            }
        }
    }
}

int test_3_blocks_variant_218_edges_7() {
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_804D57E:
        →puts("block 3");
        if(gvar_80610A8) {
            goto loc_804D596;
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
    else {
    loc_804D596:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                goto loc_804D57E;
            }
        }
    }
}

int test_3_blocks_variant_219_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 3");
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_21_edges_6() {
    →puts("block 2");
    do {
        →puts("block 3");
    loc_80490D5:
        while(1) {
            →puts("block 4");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610A8);
    goto loc_80490D5;
}

int test_3_blocks_variant_220_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_221_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    →puts("block 3");
    do {
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_222_edges_7() {
loc_804D6DA:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 3");
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_804D6DA;
        }
    }
}

int test_3_blocks_variant_223_edges_7() {
loc_804D737:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    →puts("block 3");
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_804D737;
        }
    }
}

int test_3_blocks_variant_224_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
loc_804D7B5:
    →puts("block 3");
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_804D7B5;
        }
    }
}

int test_3_blocks_variant_225_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    →puts("block 3");
    if(gvar_80610AC) {
        →puts("block 4");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_226_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 3");
            if(!gvar_80610AC) {
                break;
            }
            else {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_227_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            break;
        }
        else {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_228_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    →puts("block 3");
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_229_edges_7() {
loc_804D965:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_804D965;
        }
        else {
            →puts("block 3");
        }
    }
    while(!gvar_80610AC);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_22_edges_6() {
    while(1) {
        →puts("block 2");
        →puts("block 3");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 4");
            if(!gvar_80610A8) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_230_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 3");
            if(gvar_80610AC) {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_231_edges_7() {
loc_804DA1F:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_804DA1F;
        }
        else {
            →puts("block 4");
        }
    }
}

int test_3_blocks_variant_232_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(gvar_80610A8) {
            →puts("block 3");
            if(gvar_80610AC) {
                break;
            }
        }
    }
    while(1);
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_233_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
    }
    while(!gvar_80610AC);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_234_edges_7() {
loc_804DB36:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
    }
    while(!gvar_80610AC);
    →puts("block 4");
    goto loc_804DB36;
}

int test_3_blocks_variant_235_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 3");
        if(gvar_80610AC) {
            →puts("block 4");
        }
    }
}

int test_3_blocks_variant_236_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
    }
    while(!gvar_80610AC);
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_237_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(!gvar_80610A8) {
            →puts("block 3");
            break;
        }
        else {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_238_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(gvar_80610A8) {
            →puts("block 4");
            if(gvar_80610AC) {
                →puts("block 3");
                →puts("exit block");
                return 0;
            }
        }
        else {
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_239_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(!gvar_80610A8) {
            →puts("block 3");
        }
        else {
            do {
                →puts("block 4");
            }
            while(gvar_80610AC);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_23_edges_6() {
    →puts("block 2");
    while(1) {
        →puts("block 3");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 4");
            if(!gvar_80610A8) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_240_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            break;
        }
        else {
            →puts("block 4");
        }
    }
    while(!gvar_80610AC);
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_241_edges_7() {
loc_804DDC1:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(!gvar_80610A8) {
            →puts("block 3");
            break;
        }
        else {
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    continue loc_804DDC1;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_242_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(gvar_80610A8) {
            do {
                →puts("block 4");
            }
            while(gvar_80610AC);
        }
        →puts("block 3");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_243_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(!gvar_80610A8) {
            →puts("block 3");
        }
        else {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_244_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                goto loc_804DEF9;
            }
            else {
                →puts("block 4");
            }
            if(!gvar_80610AC) {
                break;
            }
            else {
            loc_804DEF9:
                →puts("block 3");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_245_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(!gvar_80610A8) {
            →puts("block 3");
        }
        else {
            do {
                →puts("block 4");
            }
            while(gvar_80610AC);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_246_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                goto loc_804DFB3;
            }
            else {
                →puts("block 4");
            }
            if(gvar_80610AC) {
            loc_804DFB3:
                →puts("block 3");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_247_edges_7() {
loc_804DFEF:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    continue loc_804DFEF;
                }
            }
            return;
        }
        else {
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_248_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(gvar_80610A8) {
                do {
                    →puts("block 4");
                }
                while(gvar_80610AC);
            }
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_249_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(!gvar_80610A8) {
            while(1) {
                →puts("block 3");
            }
            return;
        }
        else {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_24_edges_6() {
    →puts("block 2");
    →puts("block 3");
    if(gvar_80610A4) {
        do {
            →puts("block 4");
        }
        while(gvar_80610A8);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_250_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(!gvar_80610A8) {
            goto loc_804E127;
        }
        else {
            →puts("block 4");
        }
        if(gvar_80610AC) {
        loc_804E127:
            while(1) {
                →puts("block 3");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_251_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(!gvar_80610A8) {
            while(1) {
                →puts("block 3");
            }
        }
        do {
            →puts("block 4");
        }
        while(gvar_80610AC);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_252_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
        loc_804E1E1:
            while(1) {
                →puts("block 3");
            }
            return;
        }
        →puts("block 4");
    }
    while(!gvar_80610AC);
    goto loc_804E1E1;
}

int test_3_blocks_variant_253_edges_7() {
loc_804E21D:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                while(1) {
                    →puts("block 3");
                }
            }
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    continue loc_804E21D;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_254_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(gvar_80610A8) {
            do {
                →puts("block 4");
            }
            while(gvar_80610AC);
        }
        while(1) {
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_255_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                →puts("block 3");
            }
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_256_edges_7() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_804E355:
        →puts("block 3");
    }
    →puts("block 4");
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
    goto loc_804E355;
}

int test_3_blocks_variant_257_edges_7() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(!gvar_80610A8) {
            →puts("block 3");
        }
        do {
            →puts("block 4");
        }
        while(gvar_80610AC);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_258_edges_7() {
loc_804E3EE:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    if(!gvar_80610A8) {
    loc_804E40F:
        →puts("block 3");
    }
    →puts("block 4");
    if(!gvar_80610AC) {
        goto loc_804E3EE;
    }
    else {
        goto loc_804E40F;
    }
}

int test_3_blocks_variant_259_edges_7() {
loc_804E44B:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                →puts("block 3");
            }
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    continue loc_804E44B;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_25_edges_6() {
    do {
        →puts("block 2");
    loc_8049216:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            →puts("block 4");
        }
    }
    while(!gvar_80610A8);
    goto loc_8049216;
}

int test_3_blocks_variant_260_edges_7() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_804E4C9:
        →puts("block 3");
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_804E4C9;
        }
    }
}

int test_3_blocks_variant_261_edges_7() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(!gvar_80610A8) {
                →puts("block 3");
                break;
            }
            else {
                →puts("block 4");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_262_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        →puts("block 4");
        if(gvar_80610AC) {
            →puts("block 3");
            →puts("exit block");
            return 0;
        }
    }
    else {
        →puts("block 3");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_263_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
        →puts("block 3");
    }
    else {
        do {
            →puts("block 4");
        }
        while(gvar_80610AC);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_264_edges_7() {
loc_804E61C:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_804E61C;
        }
        else if(!gvar_80610A8) {
            break;
        }
        else {
            →puts("block 4");
        }
    }
    while(!gvar_80610AC);
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_265_edges_7() {
loc_804E679:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
        →puts("block 3");
        →puts("exit block");
        return 0;
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_804E679;
        }
    }
}

int test_3_blocks_variant_266_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        do {
            →puts("block 4");
        }
        while(gvar_80610AC);
    }
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_267_edges_7() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(!gvar_80610A8) {
                →puts("block 3");
            }
            else {
                →puts("block 4");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_268_edges_7() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(!gvar_80610A8) {
                goto loc_804E7B1;
            }
            else {
                →puts("block 4");
            }
            if(!gvar_80610AC) {
                break;
            }
            else {
            loc_804E7B1:
                →puts("block 3");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_269_edges_7() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(gvar_80610A8) {
                break;
            }
            else {
                →puts("block 3");
            }
        }
    }
    do {
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_26_edges_6() {
loc_804925B:
    while(1) {
        →puts("block 2");
        →puts("block 3");
        if(!gvar_80610A4) {
            break;
        }
        else {
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    continue loc_804925B;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_270_edges_7() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(!gvar_80610A8) {
                while(1) {
                    →puts("block 3");
                }
                return;
            }
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_271_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        →puts("block 4");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
    }
    while(1) {
        →puts("block 3");
    }
}

int test_3_blocks_variant_272_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
        while(1) {
            →puts("block 3");
        }
    }
    do {
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_273_edges_7() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(!gvar_80610A8) {
                →puts("block 3");
            }
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_274_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_804E9DF:
        →puts("block 3");
    }
    →puts("block 4");
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
    goto loc_804E9DF;
}

int test_3_blocks_variant_275_edges_7() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
        →puts("block 3");
    }
    do {
        →puts("block 4");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_276_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        →puts("block 3");
    }
    else {
        →puts("block 4");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_277_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                →puts("block 3");
                break;
            }
            else {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_278_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        →puts("block 4");
    }
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_279_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        →puts("block 3");
        →puts("exit block");
        return 0;
    }
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_27_edges_6() {
    →puts("block 2");
loc_80492BE:
    while(1) {
        →puts("block 3");
        if(!gvar_80610A4) {
            break;
        }
        else {
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    continue loc_80492BE;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_280_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                →puts("block 3");
            }
            else {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_281_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(gvar_80610AC) {
                →puts("block 4");
            }
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_282_edges_7() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(gvar_80610AC) {
                while(1) {
                    →puts("block 4");
                }
                return;
            }
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_283_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        →puts("block 4");
        goto loc_804ED2D;
    }
    else {
    loc_804ED2D:
        while(1) {
            →puts("block 3");
        }
    }
}

int test_3_blocks_variant_284_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        while(1) {
            →puts("block 3");
        }
    }
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_285_edges_7() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_804EDE7:
        →puts("block 3");
    }
    →puts("block 4");
    goto loc_804EDE7;
}

int test_3_blocks_variant_286_edges_8() {
    do {
        →puts("block 2");
    loc_804EE29:
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        loc_804EE41:
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_804EE29;
    }
    else {
        goto loc_804EE41;
    }
}

int test_3_blocks_variant_287_edges_8() {
loc_804EE80:
    do {
        →puts("block 2");
    loc_804EE8F:
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                goto loc_804EE80;
            }
            else {
            loc_804EEA7:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610A8) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_804EE8F;
    }
    else {
        goto loc_804EEA7;
    }
}

int test_3_blocks_variant_288_edges_8() {
    do {
        →puts("block 2");
    loc_804EEF5:
        do {
            do {
                →puts("block 3");
            }
            while(!gvar_80610A4);
        loc_804EF0D:
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_804EEF5;
    }
    else {
        goto loc_804EF0D;
    }
}

int test_3_blocks_variant_289_edges_8() {
loc_804EF4C:
    do {
        →puts("block 2");
    loc_804EF5B:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                goto loc_804EF4C;
            }
            else {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804EF5B;
}

int test_3_blocks_variant_28_edges_6() {
    while(1) {
        →puts("block 2");
        →puts("block 3");
        if(gvar_80610A4) {
            →puts("block 4");
            if(!gvar_80610A8) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_290_edges_8() {
    do {
        do {
            →puts("block 2");
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_804EFE2:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804EFE2;
}

int test_3_blocks_variant_291_edges_8() {
    do {
        →puts("block 2");
    loc_804F027:
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            break;
        }
        else if(!gvar_80610B0) {
            goto loc_804F027;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_292_edges_8() {
loc_804F07E:
    →puts("block 2");
    do {
        →puts("block 3");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_804F07E;
        }
        else {
        loc_804F0AE:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    goto loc_804F07E;
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F0AE;
}

int test_3_blocks_variant_293_edges_8() {
    do {
        →puts("block 2");
    loc_804F0F3:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610A8) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F0F3;
}

int test_3_blocks_variant_294_edges_8() {
    do {
        →puts("block 2");
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_804F17A:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F17A;
}

int test_3_blocks_variant_295_edges_8() {
    →puts("block 2");
    do {
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_804F1E0:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F1E0;
}

int test_3_blocks_variant_296_edges_8() {
loc_804F216:
    →puts("block 2");
    do {
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_804F246:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                goto loc_804F216;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F246;
}

int test_3_blocks_variant_297_edges_8() {
loc_804F27C:
    do {
        →puts("block 2");
    loc_804F28B:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                goto loc_804F27C;
            }
            else if(gvar_80610A8) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F28B;
}

int test_3_blocks_variant_298_edges_8() {
loc_804F2E2:
    do {
        →puts("block 2");
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                goto loc_804F2E2;
            }
        }
        while(!gvar_80610A8);
    loc_804F312:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F312;
}

int test_3_blocks_variant_299_edges_8() {
loc_804F348:
    →puts("block 2");
    do {
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                goto loc_804F348;
            }
        }
        while(!gvar_80610A8);
    loc_804F378:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F378;
}

int test_3_blocks_variant_29_edges_6() {
loc_8049357:
    →puts("block 2");
    do {
        →puts("block 3");
        if(!gvar_80610A4) {
            goto loc_8049357;
        }
        else {
            →puts("block 4");
        }
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_2_edges_5() {
    →puts("block 2");
    do {
        →puts("block 3");
        →puts("block 4");
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_300_edges_8() {
loc_804F3AE:
    do {
        →puts("block 2");
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                break loc_804F3AE;
            }
            else if(!gvar_80610A8) {
                goto loc_804F3AE;
            }
        }
        while(!gvar_80610AC);
        →puts("block 4");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_301_edges_8() {
    do {
        →puts("block 2");
    loc_804F423:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_804F423;
    }
    else {
        →puts("block 4");
        if(gvar_80610B0) {
            goto loc_804F423;
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
}

int test_3_blocks_variant_302_edges_8() {
    do {
        →puts("block 2");
    loc_804F489:
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_804F489;
    }
    else {
        do {
            →puts("block 4");
        }
        while(gvar_80610B0);
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_303_edges_8() {
loc_804F4E0:
    do {
        →puts("block 2");
    loc_804F4EF:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                goto loc_804F4E0;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F4EF;
}

int test_3_blocks_variant_304_edges_8() {
loc_804F546:
    →puts("block 2");
    do {
        →puts("block 3");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_804F546;
        }
    }
    while(!gvar_80610AC);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_804F546;
        }
    }
}

int test_3_blocks_variant_305_edges_8() {
    do {
        →puts("block 2");
    loc_804F5BB:
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_804F5BB;
    }
    else {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_804F5BB;
            }
        }
    }
}

int test_3_blocks_variant_306_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804F62A:
        do {
            →puts("block 3");
        loc_804F639:
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_804F62A;
    }
    else {
        goto loc_804F639;
    }
}

int test_3_blocks_variant_307_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804F690:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F690;
}

int test_3_blocks_variant_308_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    loc_804F70E:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F70E;
}

int test_3_blocks_variant_309_edges_8() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        loc_804F774:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(!gvar_80610B0);
        goto loc_804F774;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_30_edges_6() {
    do {
        →puts("block 2");
        →puts("block 3");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 4");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_310_edges_8() {
loc_804F7AA:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    break loc_804F7AA;
                }
                else {
                loc_804F7DA:
                    while(1) {
                        →puts("block 4");
                        if(!gvar_80610AC) {
                            goto loc_804F7AA;
                        }
                    }
                }
            }
            while(!gvar_80610B0);
            goto loc_804F7DA;
        }
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_311_edges_8() {
loc_804F810:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804F828:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                goto loc_804F810;
            }
            else {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F828;
}

int test_3_blocks_variant_312_edges_8() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            →puts("block 3");
        }
        while(!gvar_80610A8);
    loc_804F8A6:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F8A6;
}

int test_3_blocks_variant_313_edges_8() {
loc_804F8DC:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    goto loc_804F8DC;
                }
                else {
                loc_804F90C:
                    while(1) {
                        →puts("block 4");
                        if(!gvar_80610AC) {
                            break loc_804F8DC;
                        }
                    }
                }
            }
            while(!gvar_80610B0);
            goto loc_804F90C;
        }
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_314_edges_8() {
loc_804F942:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    goto loc_804F942;
                }
                else {
                loc_804F972:
                    while(1) {
                        →puts("block 4");
                        if(!gvar_80610AC) {
                            goto loc_804F942;
                        }
                    }
                }
            }
            while(!gvar_80610B0);
            goto loc_804F972;
        }
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_315_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804F9C0:
        while(1) {
            →puts("block 3");
            if(gvar_80610A8) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804F9C0;
}

int test_3_blocks_variant_316_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        do {
            →puts("block 3");
        }
        while(!gvar_80610A8);
    loc_804FA3E:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804FA3E;
}

int test_3_blocks_variant_317_edges_8() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            do {
                →puts("block 3");
            }
            while(!gvar_80610A8);
        loc_804FAA4:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(!gvar_80610B0);
        goto loc_804FAA4;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_318_edges_8() {
loc_804FADA:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                do {
                    →puts("block 3");
                }
                while(!gvar_80610A8);
            loc_804FB0A:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610AC) {
                        goto loc_804FADA;
                    }
                }
            }
            while(!gvar_80610B0);
            goto loc_804FB0A;
        }
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_319_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_31_edges_6() {
    do {
        →puts("block 2");
        do {
            →puts("block 3");
        }
        while(!gvar_80610A4);
        →puts("block 4");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_320_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804FBBE:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    →puts("block 4");
    if(gvar_80610B0) {
        goto loc_804FBBE;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_321_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610AC);
    do {
        →puts("block 4");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_322_edges_8() {
loc_804FC72:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804FC8A:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                goto loc_804FC72;
            }
            else {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804FC8A;
}

int test_3_blocks_variant_323_edges_8() {
loc_804FCD8:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 3");
            if(gvar_80610A8) {
                if(!gvar_80610AC) {
                    goto loc_804FCD8;
                }
                else {
                    break;
                }
            }
        }
        →puts("exit block");
        return 0;
    }
    while(1);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_804FCD8;
        }
    }
}

int test_3_blocks_variant_324_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804FD56:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_804FD56;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_325_edges_8() {
alab1:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    break alab1;
                }
            }
            while(!gvar_80610AC);
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_326_edges_8() {
    →puts("block 2");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_327_edges_8() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610AC);
        do {
            →puts("block 4");
        }
        while(gvar_80610B0);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_328_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_804FEEE:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_804FEEE;
}

int test_3_blocks_variant_329_edges_8() {
loc_804FF3C:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    break loc_804FF3C;
                }
            }
            while(!gvar_80610AC);
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    continue loc_804FF3C;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_32_edges_6() {
    →puts("block 2");
    while(1) {
        →puts("block 3");
        if(gvar_80610A4) {
            →puts("block 4");
            if(!gvar_80610A8) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_330_edges_8() {
    →puts("block 2");
    if(gvar_80610A4) {
    loc_804FFBA:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610AC);
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_804FFBA;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_331_edges_8() {
loc_8050008:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    continue loc_8050008;
                }
            }
            while(!gvar_80610AC);
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_332_edges_8() {
loc_805006E:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
        loc_8050086:
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    continue loc_805006E;
                }
                else if(!gvar_80610AC) {
                    goto loc_8050086;
                }
                else {
                    →puts("block 4");
                }
            }
            while(gvar_80610B0);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_333_edges_8() {
loc_80500D4:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    continue loc_80500D4;
                }
            }
            while(!gvar_80610AC);
            do {
                →puts("block 4");
            }
            while(gvar_80610B0);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_334_edges_8() {
loc_805013A:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8050152:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                goto loc_805013A;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8050152;
}

int test_3_blocks_variant_335_edges_8() {
loc_80501A0:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    continue loc_80501A0;
                }
            }
            while(!gvar_80610AC);
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    continue loc_80501A0;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_336_edges_8() {
loc_8050206:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
        loc_805021E:
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    continue loc_8050206;
                }
            }
            while(!gvar_80610AC);
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    goto loc_805021E;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_337_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8050284:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_8050284;
    }
    else {
        →puts("block 4");
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_338_edges_8() {
loc_80502D2:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    break loc_80502D2;
                }
                else if(!gvar_80610AC) {
                    continue loc_80502D2;
                }
            }
            while(!gvar_80610B0);
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_339_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8050350:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    if(gvar_80610B0) {
        →puts("block 4");
    }
    goto loc_8050350;
}

int test_3_blocks_variant_33_edges_6() {
    →puts("block 2");
    do {
        →puts("block 3");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 4");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_340_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_80503B6:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_80503B6;
    }
    else {
        while(1) {
            →puts("block 4");
        }
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_341_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_805041C:
        do {
            →puts("block 3");
        loc_805042B:
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_805041C;
    }
    else {
        goto loc_805042B;
    }
}

int test_3_blocks_variant_342_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8050482:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8050482;
}

int test_3_blocks_variant_343_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    loc_8050500:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8050500;
}

int test_3_blocks_variant_344_edges_8() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    loc_8050566:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8050566;
}

int test_3_blocks_variant_345_edges_8() {
loc_805059C:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    loc_80505CC:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                goto loc_805059C;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_80505CC;
}

int test_3_blocks_variant_346_edges_8() {
loc_8050602:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_805061A:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                goto loc_8050602;
            }
            else {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_805061A;
}

int test_3_blocks_variant_347_edges_8() {
loc_8050668:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                goto loc_8050668;
            }
            else {
                →puts("block 3");
            }
        }
        while(!gvar_80610A8);
    loc_8050698:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8050698;
}

int test_3_blocks_variant_348_edges_8() {
loc_80506CE:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            goto loc_80506CE;
        }
        else {
        loc_80506FE:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_80506FE;
}

int test_3_blocks_variant_349_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_805074C:
        while(1) {
            →puts("block 3");
            if(gvar_80610A8) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_805074C;
}

int test_3_blocks_variant_34_edges_6() {
    do {
        →puts("block 2");
        →puts("block 3");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_350_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        do {
            →puts("block 3");
        }
        while(!gvar_80610A8);
    loc_80507CA:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_80507CA;
}

int test_3_blocks_variant_351_edges_8() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        do {
            →puts("block 3");
        }
        while(!gvar_80610A8);
    loc_8050830:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8050830;
}

int test_3_blocks_variant_352_edges_8() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_353_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_80508E4:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    →puts("block 4");
    if(gvar_80610B0) {
        goto loc_80508E4;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_354_edges_8() {
loc_8050932:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_8050932;
        }
        else {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    do {
        →puts("block 4");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_355_edges_8() {
loc_8050998:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_80509B0:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                goto loc_8050998;
            }
            else {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_80509B0;
}

int test_3_blocks_variant_356_edges_8() {
loc_80509FE:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610AC) {
                break;
            }
        }
    }
    while(1);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_80509FE;
        }
    }
}

int test_3_blocks_variant_357_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8050A7C:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_8050A7C;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_358_edges_8() {
loc_8050ACA:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610AC);
    →puts("block 4");
    if(gvar_80610B0) {
        goto loc_8050ACA;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_359_edges_8() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    while(1) {
        →puts("block 3");
        if(!gvar_80610A8) {
            break;
        }
        else if(gvar_80610AC) {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_35_edges_6() {
    while(1) {
        →puts("block 2");
        →puts("block 3");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_360_edges_8() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610AC);
    do {
        →puts("block 4");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_361_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8050C14:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8050C14;
}

int test_3_blocks_variant_362_edges_8() {
loc_8050C62:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610AC);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_8050C62;
        }
    }
}

int test_3_blocks_variant_363_edges_8() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
loc_8050CE0:
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610AC);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_8050CE0;
        }
    }
}

int test_3_blocks_variant_364_edges_8() {
loc_8050D2E:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            goto loc_8050D2E;
        }
    }
    while(!gvar_80610AC);
    →puts("block 4");
    if(gvar_80610B0) {
        goto loc_8050D2E;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_365_edges_8() {
loc_8050D94:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
loc_8050DAC:
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            goto loc_8050D94;
        }
        else if(!gvar_80610AC) {
            goto loc_8050DAC;
        }
        else {
            →puts("block 4");
        }
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_366_edges_8() {
loc_8050DFA:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            goto loc_8050DFA;
        }
    }
    while(!gvar_80610AC);
    do {
        →puts("block 4");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_367_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8050E78:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_8050E78;
    }
    else {
        →puts("block 4");
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_368_edges_8() {
loc_8050EC6:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610AC) {
            goto loc_8050EC6;
        }
    }
    while(!gvar_80610B0);
    →puts("block 4");
    goto loc_8050EC6;
}

int test_3_blocks_variant_369_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8050F44:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    if(gvar_80610B0) {
        →puts("block 4");
    }
    goto loc_8050F44;
}

int test_3_blocks_variant_36_edges_6() {
    do {
        →puts("block 2");
    loc_80495B2:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610A8);
    →puts("block 4");
    goto loc_80495B2;
}

int test_3_blocks_variant_370_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8050FAA:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_8050FAA;
    }
    else {
        while(1) {
            →puts("block 4");
        }
    }
}

int test_3_blocks_variant_371_edges_8() {
    do {
        →puts("block 2");
        if(gvar_80610A4) {
        loc_805101F:
            do {
                →puts("block 4");
            }
            while(gvar_80610A8);
        }
        else {
            →puts("block 3");
            →puts("exit block");
            return 0;
        }
        →puts("exit block");
        return 0;
    }
    while(!gvar_80610AC);
    if(gvar_80610B0) {
        goto loc_805101F;
    }
    else {
        →puts("block 3");
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_372_edges_8() {
loc_805105E:
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    break;
                }
                else if(!gvar_80610AC) {
                    continue loc_805105E;
                }
                else if(!gvar_80610B0) {
                    goto loc_8051076;
                }
            }
            →puts("exit block");
            return 0;
        }
    loc_8051076:
        →puts("block 3");
    }
}

int test_3_blocks_variant_373_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_80510DC;
        }
        else {
        loc_80510EB:
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610AC);
    if(gvar_80610B0) {
        goto loc_80510EB;
    }
    else {
    loc_80510DC:
        while(1) {
            →puts("block 3");
        }
    }
}

int test_3_blocks_variant_374_edges_8() {
loc_805112A:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_8051142:
        →puts("block 3");
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610A8) {
            break;
        }
        else if(!gvar_80610AC) {
            goto loc_805112A;
        }
        else if(!gvar_80610B0) {
            goto loc_8051142;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_375_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_80511A8;
        }
        else {
            →puts("block 4");
        }
        if(!gvar_80610AC) {
            break;
        }
        else if(gvar_80610B0) {
        loc_80511A8:
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_376_edges_8() {
    do {
        while(1) {
            →puts("block 2");
            if(gvar_80610A4) {
                break;
            }
            else {
                →puts("block 3");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    loc_8051226:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8051226;
}

int test_3_blocks_variant_377_edges_8() {
loc_805125C:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_8051274;
        }
    loc_805128C:
        do {
            →puts("block 4");
            if(gvar_80610AC) {
                if(gvar_80610B0) {
                    goto loc_805128C;
                }
                else {
                loc_8051274:
                    →puts("block 3");
                    if(!gvar_80610A8) {
                        break loc_805125C;
                    }
                    else {
                        continue loc_805125C;
                    }
                }
            }
        }
        while(gvar_80610AC);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_378_edges_8() {
loc_80512C2:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                →puts("block 4");
                if(!gvar_80610AC) {
                    goto loc_80512C2;
                }
            }
            while(gvar_80610B0);
        }
        →puts("block 3");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_379_edges_8() {
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(gvar_80610A4 && !gvar_80610B0);
    do {
        →puts("block 3");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_37_edges_6() {
    do {
        →puts("block 2");
        →puts("block 3");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_380_edges_8() {
    do {
        →puts("block 2");
        if(gvar_80610A4) {
        loc_80513BE:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        else {
            do {
                →puts("block 3");
            }
            while(gvar_80610A8);
        }
        →puts("exit block");
        return 0;
    }
    while(!gvar_80610B0);
    goto loc_80513BE;
}

int test_3_blocks_variant_381_edges_8() {
    →puts("block 2");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
            else if(!gvar_80610B0) {
                goto loc_805140C;
            }
        }
    }
    else {
    loc_805140C:
        do {
            →puts("block 3");
        }
        while(gvar_80610A8);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_382_edges_8() {
loc_805145A:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 4");
                if(!gvar_80610AC) {
                    continue loc_805145A;
                }
            }
            while(gvar_80610B0);
        }
    }
    do {
        →puts("block 3");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_383_edges_8() {
loc_80514C0:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_80514D8:
        →puts("block 3");
        if(gvar_80610A8) {
            goto loc_80514F0;
        }
    }
    else {
    loc_80514F0:
        →puts("block 4");
        if(gvar_80610AC) {
            if(!gvar_80610B0) {
                goto loc_80514C0;
            }
            else {
                goto loc_80514D8;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_384_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("block 3");
            if(gvar_80610A8) {
                break;
            }
        }
        else {
        loc_8051556:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        →puts("exit block");
        return 0;
    }
    while(!gvar_80610B0);
    goto loc_8051556;
}

int test_3_blocks_variant_385_edges_8() {
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_80515A4:
        →puts("block 3");
        if(gvar_80610A8) {
            goto loc_80515BC;
        }
    }
    else {
    loc_80515BC:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
            else if(!gvar_80610B0) {
                goto loc_80515A4;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_386_edges_8() {
loc_80515F2:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_805160A:
        →puts("block 3");
        if(gvar_80610A8) {
            goto loc_8051622;
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
    else {
    loc_8051622:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                goto loc_80515F2;
            }
            else if(!gvar_80610B0) {
                goto loc_805160A;
            }
        }
    }
}

int test_3_blocks_variant_387_edges_8() {
loc_8051658:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
        loc_8051670:
            while(1) {
                →puts("block 3");
                if(!gvar_80610A8) {
                    goto loc_8051658;
                }
            }
            return;
        }
        →puts("block 4");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610B0);
    goto loc_8051670;
}

int test_3_blocks_variant_388_edges_8() {
loc_80516BE:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            while(1) {
                →puts("block 3");
                if(!gvar_80610A8) {
                    goto loc_80516BE;
                }
            }
        }
    loc_80516EE:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_80516EE;
}

int test_3_blocks_variant_389_edges_8() {
loc_8051724:
    →puts("block 2");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
            else if(!gvar_80610B0) {
                goto loc_805173C;
            }
        }
        →puts("exit block");
        return 0;
    }
loc_805173C:
    while(1) {
        →puts("block 3");
        if(!gvar_80610A8) {
            goto loc_8051724;
        }
    }
}

int test_3_blocks_variant_38_edges_6() {
    →puts("block 2");
    do {
        →puts("block 3");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_390_edges_8() {
loc_805178A:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_80517A2:
        →puts("block 3");
        if(!gvar_80610A8) {
            goto loc_805178A;
        }
    }
    →puts("block 4");
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B0) {
        goto loc_805178A;
    }
    else {
        goto loc_80517A2;
    }
}

int test_3_blocks_variant_391_edges_8() {
    do {
        do {
            →puts("block 2");
            if(gvar_80610A4) {
                break;
            }
            else {
                →puts("block 3");
            }
        }
        while(!gvar_80610A8);
    loc_8051820:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8051820;
}

int test_3_blocks_variant_392_edges_8() {
loc_8051856:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_805186E:
        →puts("block 3");
        if(!gvar_80610A8) {
            goto loc_8051856;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            break;
        }
        else if(!gvar_80610B0) {
            goto loc_805186E;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_393_edges_8() {
loc_80518BC:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_80518D4:
        do {
            →puts("block 3");
        }
        while(!gvar_80610A8);
    }
    →puts("block 4");
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B0) {
        goto loc_80518BC;
    }
    else {
        goto loc_80518D4;
    }
}

int test_3_blocks_variant_394_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            do {
                →puts("block 3");
            }
            while(!gvar_80610A8);
        }
    loc_8051952:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8051952;
}

int test_3_blocks_variant_395_edges_8() {
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_80519A0:
        do {
            →puts("block 3");
        }
        while(!gvar_80610A8);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            break;
        }
        else if(!gvar_80610B0) {
            goto loc_80519A0;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_396_edges_8() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_8051A0F:
        while(1) {
            →puts("block 3");
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8051A0F;
}

int test_3_blocks_variant_397_edges_8() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        →puts("block 3");
    loc_8051A84:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8051A84;
}

int test_3_blocks_variant_398_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
    loc_8051AEA:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8051AEA;
}

int test_3_blocks_variant_399_edges_8() {
loc_8051B20:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
    loc_8051B50:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                goto loc_8051B20;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8051B50;
}

int test_3_blocks_variant_39_edges_6() {
alab1:
    while(1) {
        →puts("block 2");
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                break alab1;
            }
        }
        while(!gvar_80610A8);
        →puts("block 4");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_3_edges_5() {
    →puts("block 2");
    →puts("block 3");
    do {
        →puts("block 4");
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_400_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 3");
            if(!gvar_80610AC) {
                break;
            }
            else {
                →puts("block 4");
                if(!gvar_80610B0) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_401_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            break;
        }
        else {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_402_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    →puts("block 3");
    if(gvar_80610AC) {
        do {
            →puts("block 4");
        }
        while(gvar_80610B0);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_403_edges_8() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_8051CD9:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            →puts("block 4");
        }
    }
    while(!gvar_80610B0);
    goto loc_8051CD9;
}

int test_3_blocks_variant_404_edges_8() {
loc_8051D1E:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    →puts("block 3");
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_8051D1E;
        }
    }
}

int test_3_blocks_variant_405_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
loc_8051DA5:
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            break;
        }
        else {
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    continue loc_8051DA5;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_406_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 3");
            if(gvar_80610AC) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_407_edges_8() {
loc_8051E50:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_8051E50;
        }
        else {
            →puts("block 4");
        }
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_408_edges_8() {
loc_8051EB6:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_8051EB6;
        }
        else {
            →puts("block 3");
        }
    }
    while(!gvar_80610AC);
    do {
        →puts("block 4");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_409_edges_8() {
loc_8051F1C:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_8051F3D:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                goto loc_8051F1C;
            }
            else {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8051F3D;
}

int test_3_blocks_variant_40_edges_6() {
    →puts("block 2");
    while(1) {
        →puts("block 3");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_410_edges_8() {
loc_8051F82:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(gvar_80610A8) {
            →puts("block 3");
            if(gvar_80610AC) {
                break;
            }
        }
    }
    while(1);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_8051F82;
        }
    }
}

int test_3_blocks_variant_411_edges_8() {
loc_8051FE8:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
loc_8052009:
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_8051FE8;
        }
        else {
        loc_8052021:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    continue loc_8052009;
                }
            }
        }
    }
    goto loc_8052021;
}

int test_3_blocks_variant_412_edges_8() {
loc_805204E:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
    }
    while(!gvar_80610AC);
    →puts("block 4");
    if(gvar_80610B0) {
        goto loc_805204E;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_413_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 3");
        if(gvar_80610AC) {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_414_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
    }
    while(!gvar_80610AC);
    do {
        →puts("block 4");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_415_edges_8() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_80521A1:
        while(1) {
            →puts("block 3");
            if(gvar_80610AC) {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_80521A1;
}

int test_3_blocks_variant_416_edges_8() {
loc_80521E6:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
    }
    while(!gvar_80610AC);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_80521E6;
        }
    }
}

int test_3_blocks_variant_417_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
loc_805226D:
    do {
        →puts("block 3");
    }
    while(!gvar_80610AC);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_805226D;
        }
    }
}

int test_3_blocks_variant_418_edges_8() {
loc_80522B2:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_80522B2;
        }
        else {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_419_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 3");
            if(!gvar_80610AC) {
                break;
            }
            else if(gvar_80610B0) {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_41_edges_6() {
    →puts("block 2");
    do {
        →puts("block 3");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_420_edges_8() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805239F:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    →puts("block 4");
    goto loc_805239F;
}

int test_3_blocks_variant_421_edges_8() {
loc_80523E4:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            if(!gvar_80610A8) {
                goto loc_80523E4;
            }
            else {
                →puts("block 3");
                if(gvar_80610AC) {
                    if(!gvar_80610B0) {
                        goto loc_80523E4;
                    }
                    else {
                        break;
                    }
                }
            }
        }
        →puts("exit block");
        return 0;
    }
    while(1);
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_422_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610B0);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_423_edges_8() {
loc_80524B0:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610B0);
    →puts("block 4");
    goto loc_80524B0;
}

int test_3_blocks_variant_424_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            break;
        }
        else if(gvar_80610B0) {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_425_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610B0);
    while(1) {
        →puts("block 4");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_426_edges_8() {
loc_80525E2:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_80525E2;
        }
    }
    while(!gvar_80610B0);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_427_edges_8() {
loc_8052648:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_8052648;
        }
    }
    while(!gvar_80610B0);
    →puts("block 4");
    goto loc_8052648;
}

int test_3_blocks_variant_428_edges_8() {
loc_80526AE:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_80526AE;
        }
        else if(gvar_80610B0) {
            →puts("block 4");
        }
    }
}

int test_3_blocks_variant_429_edges_8() {
loc_8052714:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_8052714;
        }
    }
    while(!gvar_80610B0);
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_42_edges_6() {
loc_804979B:
    →puts("block 2");
    do {
        →puts("block 3");
        if(!gvar_80610A4) {
            goto loc_804979B;
        }
    }
    while(!gvar_80610A8);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_430_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            break;
        }
        else {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_431_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            →puts("block 3");
            →puts("exit block");
            return 0;
        }
    loc_8052810:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8052810;
}

int test_3_blocks_variant_432_edges_8() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(gvar_80610A8) {
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    break;
                }
                else if(!gvar_80610B0) {
                    →puts("block 3");
                    →puts("exit block");
                    return 0;
                }
            }
        }
        else {
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_433_edges_8() {
loc_80528AC:
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(gvar_80610A8) {
                do {
                    →puts("block 4");
                    if(!gvar_80610AC) {
                        continue loc_80528AC;
                    }
                }
                while(gvar_80610B0);
            }
            →puts("block 3");
        }
        break;
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_434_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                goto loc_8052933;
            }
            else {
                →puts("block 4");
            }
            if(!gvar_80610AC) {
                break;
            }
            else if(gvar_80610B0) {
            loc_8052933:
                →puts("block 3");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_435_edges_8() {
    do {
        while(1) {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                →puts("block 3");
            }
            else {
            loc_80529A8:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610AC) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_80529A8;
}

int test_3_blocks_variant_436_edges_8() {
loc_80529DE:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                goto loc_80529FF;
            }
        loc_8052A0E:
            do {
                →puts("block 4");
                if(gvar_80610AC) {
                    if(gvar_80610B0) {
                        goto loc_8052A0E;
                    }
                    else {
                    loc_80529FF:
                        →puts("block 3");
                        continue loc_80529DE;
                    }
                }
            }
            while(gvar_80610AC);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_437_edges_8() {
loc_8052A44:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(gvar_80610A8) {
                do {
                    →puts("block 4");
                    if(!gvar_80610AC) {
                        continue loc_8052A44;
                    }
                }
                while(gvar_80610B0);
            }
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_438_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
        loc_8052ACB:
            while(1) {
                →puts("block 3");
            }
            return;
        }
        →puts("block 4");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610B0);
    goto loc_8052ACB;
}

int test_3_blocks_variant_439_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        if(!gvar_80610A8) {
            while(1) {
                →puts("block 3");
            }
        }
    loc_8052B40:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8052B40;
}

int test_3_blocks_variant_43_edges_6() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
            →puts("block 4");
            if(!gvar_80610A8) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_440_edges_8() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(!gvar_80610A8) {
            goto loc_8052B97;
        }
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
            else if(!gvar_80610B0) {
            loc_8052B97:
                while(1) {
                    →puts("block 3");
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_441_edges_8() {
loc_8052BDC:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(gvar_80610A8) {
                do {
                    →puts("block 4");
                    if(!gvar_80610AC) {
                        continue loc_8052BDC;
                    }
                }
                while(gvar_80610B0);
            }
            while(1) {
                →puts("block 3");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_442_edges_8() {
loc_8052C42:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_8052C63:
        →puts("block 3");
    }
    →puts("block 4");
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B0) {
        goto loc_8052C42;
    }
    else {
        goto loc_8052C63;
    }
}

int test_3_blocks_variant_443_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        if(!gvar_80610A8) {
            →puts("block 3");
        }
    loc_8052CD8:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8052CD8;
}

int test_3_blocks_variant_444_edges_8() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_8052D2F:
        →puts("block 3");
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B0) {
            goto loc_8052D2F;
        }
    }
}

int test_3_blocks_variant_445_edges_8() {
loc_8052D74:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    if(!gvar_80610A8) {
    loc_8052D95:
        →puts("block 3");
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            goto loc_8052D74;
        }
        else if(!gvar_80610B0) {
            goto loc_8052D95;
        }
    }
}

int test_3_blocks_variant_446_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(!gvar_80610A8) {
            →puts("block 3");
            if(!gvar_80610AC) {
                break;
            }
        }
        else {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_447_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                goto loc_8052E61;
            }
            else {
                →puts("block 4");
            }
            if(!gvar_80610B0) {
                break;
            }
            else {
            loc_8052E61:
                →puts("block 3");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_448_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(!gvar_80610A8) {
            →puts("block 3");
            if(!gvar_80610AC) {
                break;
            }
        }
        else {
            do {
                →puts("block 4");
            }
            while(gvar_80610B0);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_449_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                goto loc_8052F2D;
            }
            else {
                →puts("block 4");
            }
            if(gvar_80610B0) {
            loc_8052F2D:
                →puts("block 3");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_44_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            →puts("block 3");
            →puts("block 4");
        }
        while(gvar_80610A8);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_450_edges_8() {
loc_8052F72:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    continue loc_8052F72;
                }
            }
            return;
        }
        else {
            →puts("block 3");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_451_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(gvar_80610A8) {
                do {
                    →puts("block 4");
                }
                while(gvar_80610B0);
            }
            →puts("block 3");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_452_edges_8() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(gvar_80610A8) {
            →puts("block 4");
            if(gvar_80610B0) {
                goto loc_805305F;
            }
        }
        else {
        loc_805305F:
            do {
                →puts("block 3");
            }
            while(gvar_80610AC);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_453_edges_8() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(!gvar_80610A8) {
            do {
                →puts("block 3");
            }
            while(gvar_80610AC);
        }
        else {
            do {
                →puts("block 4");
            }
            while(gvar_80610B0);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_454_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            break;
        }
        else {
            →puts("block 4");
        }
    }
    while(!gvar_80610B0);
    do {
        →puts("block 3");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_455_edges_8() {
loc_8053170:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(gvar_80610A8) {
                goto loc_80531A9;
            }
            while(1) {
                →puts("block 3");
                if(!gvar_80610AC) {
                    break loc_8053170;
                }
                else {
                    continue;
                loc_80531A9:
                    while(1) {
                        →puts("block 4");
                        if(!gvar_80610B0) {
                            continue loc_8053170;
                        }
                    }
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_456_edges_8() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(gvar_80610A8) {
            do {
                →puts("block 4");
            }
            while(gvar_80610B0);
        }
        do {
            →puts("block 3");
        }
        while(gvar_80610AC);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_457_edges_8() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_8053275;
    }
    else {
    loc_805325D:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
loc_8053275:
    →puts("block 4");
    if(!gvar_80610B0) {
        →puts("exit block");
        return 0;
    }
    goto loc_805325D;
}

int test_3_blocks_variant_458_edges_8() {
loc_80532A2:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_80532DB;
    }
    else {
    loc_80532C3:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
loc_80532DB:
    →puts("block 4");
    if(!gvar_80610B0) {
        goto loc_80532A2;
    }
    else {
        goto loc_80532C3;
    }
}

int test_3_blocks_variant_459_edges_8() {
loc_8053308:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                →puts("block 3");
                if(!gvar_80610AC) {
                    break;
                }
            }
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    continue loc_8053308;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_45_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        →puts("block 3");
        do {
            →puts("block 4");
        }
        while(gvar_80610A8);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_460_edges_8() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_80533A7;
    }
    else {
    loc_805338F:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
loc_80533A7:
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_805338F;
        }
    }
}

int test_3_blocks_variant_461_edges_8() {
loc_80533D4:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
        loc_80533F5:
            while(1) {
                →puts("block 3");
                if(!gvar_80610AC) {
                    goto loc_80533D4;
                }
            }
            return;
        }
        →puts("block 4");
    }
    while(!gvar_80610B0);
    goto loc_80533F5;
}

int test_3_blocks_variant_462_edges_8() {
loc_805343A:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                while(1) {
                    →puts("block 3");
                    if(!gvar_80610AC) {
                        continue loc_805343A;
                    }
                }
            }
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    continue loc_805343A;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_463_edges_8() {
loc_80534A0:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(gvar_80610A8) {
                do {
                    →puts("block 4");
                }
                while(gvar_80610B0);
            }
            while(1) {
                →puts("block 3");
                if(!gvar_80610AC) {
                    continue loc_80534A0;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_464_edges_8() {
loc_8053506:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    if(!gvar_80610A8) {
    loc_8053527:
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_8053506;
        }
    }
    →puts("block 4");
    if(!gvar_80610B0) {
        goto loc_8053506;
    }
    else {
        goto loc_8053527;
    }
}

int test_3_blocks_variant_465_edges_8() {
loc_805356C:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    if(!gvar_80610A8) {
    loc_805358D:
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_805356C;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_805358D;
        }
    }
}

int test_3_blocks_variant_466_edges_8() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_80535F3:
        do {
            →puts("block 3");
        }
        while(!gvar_80610AC);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_80535F3;
        }
    }
}

int test_3_blocks_variant_467_edges_8() {
loc_8053638:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_8053638;
        }
        else if(!gvar_80610A8) {
            break;
        }
        else {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_468_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(!gvar_80610A8) {
            →puts("block 3");
            →puts("exit block");
            return 0;
        }
    loc_80536CE:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_80536CE;
}

int test_3_blocks_variant_469_edges_8() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
            else if(!gvar_80610B0) {
                →puts("block 3");
                →puts("exit block");
                return 0;
            }
        }
    }
    else {
        →puts("block 3");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_46_edges_6() {
loc_80498EB:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            while(1) {
                →puts("block 3");
                →puts("block 4");
                if(!gvar_80610A8) {
                    continue loc_80498EB;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_470_edges_8() {
loc_805376A:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        do {
            →puts("block 4");
            if(!gvar_80610AC) {
                goto loc_805376A;
            }
        }
        while(gvar_80610B0);
    }
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_471_edges_8() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(!gvar_80610A8) {
                goto loc_80537F1;
            }
            else {
                →puts("block 4");
            }
            if(!gvar_80610AC) {
                break;
            }
            else if(gvar_80610B0) {
            loc_80537F1:
                →puts("block 3");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_472_edges_8() {
    do {
        while(1) {
            →puts("block 2");
            if(gvar_80610A4) {
                if(gvar_80610A8) {
                    break;
                }
                else {
                    →puts("block 3");
                }
            }
        }
    loc_8053866:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8053866;
}

int test_3_blocks_variant_473_edges_8() {
loc_805389C:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
            else if(!gvar_80610B0) {
                →puts("block 3");
                goto loc_805389C;
            }
        }
        →puts("exit block");
        return 0;
    }
    →puts("block 3");
    goto loc_805389C;
}

int test_3_blocks_variant_474_edges_8() {
loc_8053902:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_8053902;
        }
        else if(!gvar_80610A8) {
        loc_8053923:
            while(1) {
                →puts("block 3");
            }
            return;
        }
        else {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8053923;
}

int test_3_blocks_variant_475_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(!gvar_80610A8) {
            while(1) {
                →puts("block 3");
            }
            return;
        }
    loc_8053998:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8053998;
}

int test_3_blocks_variant_476_edges_8() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
            else if(!gvar_80610B0) {
                goto loc_80539EF;
            }
        }
        →puts("exit block");
        return 0;
    }
loc_80539EF:
    while(1) {
        →puts("block 3");
    }
}

int test_3_blocks_variant_477_edges_8() {
loc_8053A34:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_8053A55:
        →puts("block 3");
    }
    →puts("block 4");
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B0) {
        goto loc_8053A34;
    }
    else {
        goto loc_8053A55;
    }
}

int test_3_blocks_variant_478_edges_8() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(!gvar_80610A8) {
            →puts("block 3");
        }
    loc_8053ACA:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_8053ACA;
}

int test_3_blocks_variant_479_edges_8() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_8053B21:
        →puts("block 3");
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            break;
        }
        else if(!gvar_80610B0) {
            goto loc_8053B21;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_47_edges_6() {
loc_804993F:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    continue loc_804993F;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_480_edges_8() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(!gvar_80610A8) {
                →puts("block 3");
                if(!gvar_80610AC) {
                    break;
                }
            }
            else {
                →puts("block 4");
                if(!gvar_80610B0) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_481_edges_8() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(!gvar_80610A8) {
                goto loc_8053BED;
            }
            else {
                →puts("block 4");
            }
            if(!gvar_80610B0) {
                break;
            }
            else {
            loc_8053BED:
                →puts("block 3");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_482_edges_8() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(gvar_80610A8) {
                break;
            }
            else {
                →puts("block 3");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    do {
        →puts("block 4");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_483_edges_8() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(!gvar_80610A8) {
                goto loc_8053CB9;
            }
            else {
                →puts("block 4");
            }
            if(gvar_80610B0) {
            loc_8053CB9:
                →puts("block 3");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_484_edges_8() {
loc_8053CFE:
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(gvar_80610A8) {
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B0) {
                        continue loc_8053CFE;
                    }
                }
                return;
            }
            →puts("block 3");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_485_edges_8() {
loc_8053D64:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        do {
            →puts("block 4");
        }
        while(gvar_80610B0);
    }
    →puts("block 3");
    if(gvar_80610AC) {
        goto loc_8053D64;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_486_edges_8() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        →puts("block 4");
        if(gvar_80610B0) {
            goto loc_8053DEB;
        }
    }
    else {
    loc_8053DEB:
        do {
            →puts("block 3");
        }
        while(gvar_80610AC);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_487_edges_8() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
        do {
            →puts("block 3");
        }
        while(gvar_80610AC);
    }
    else {
        do {
            →puts("block 4");
        }
        while(gvar_80610B0);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_488_edges_8() {
loc_8053E96:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_8053E96;
        }
        else if(!gvar_80610A8) {
            break;
        }
        else {
            →puts("block 4");
        }
    }
    while(!gvar_80610B0);
    do {
        →puts("block 3");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_489_edges_8() {
loc_8053EFC:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_8053EFC;
            }
        }
    }
    do {
        →puts("block 3");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_48_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
    loc_80499AB:
        →puts("block 3");
        while(1) {
            →puts("block 4");
            if(!gvar_80610A8) {
                goto loc_80499AB;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_490_edges_8() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        do {
            →puts("block 4");
        }
        while(gvar_80610B0);
    }
    do {
        →puts("block 3");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_491_edges_8() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_8053FE9:
        →puts("block 3");
        if(gvar_80610AC) {
            goto loc_8054001;
        }
    }
    else {
    loc_8054001:
        →puts("block 4");
        if(gvar_80610B0) {
            goto loc_8053FE9;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_492_edges_8() {
loc_805402E:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805404F:
        →puts("block 3");
        if(gvar_80610AC) {
            goto loc_8054067;
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
    else {
    loc_8054067:
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_805402E;
        }
        else {
            goto loc_805404F;
        }
    }
}

int test_3_blocks_variant_493_edges_8() {
loc_8054094:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
        →puts("block 3");
        if(gvar_80610AC) {
            goto loc_80540CD;
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
    else {
    loc_80540CD:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_8054094;
            }
        }
    }
}

int test_3_blocks_variant_494_edges_8() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805411B:
        →puts("block 3");
        if(gvar_80610AC) {
            goto loc_8054133;
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
    else {
    loc_8054133:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_805411B;
            }
        }
    }
}

int test_3_blocks_variant_495_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                →puts("block 3");
                break;
            }
            else {
                →puts("block 4");
                if(!gvar_80610B0) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_496_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        →puts("block 4");
        if(gvar_80610B0) {
            →puts("block 3");
            →puts("exit block");
            return 0;
        }
    }
    else {
        →puts("block 3");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_497_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        →puts("block 3");
    }
    else {
        do {
            →puts("block 4");
        }
        while(gvar_80610B0);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_498_edges_8() {
loc_8054292:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_8054292;
        }
        else if(!gvar_80610AC) {
            break;
        }
        else {
            →puts("block 4");
        }
    }
    while(!gvar_80610B0);
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_499_edges_8() {
loc_80542F8:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        →puts("block 3");
        →puts("exit block");
        return 0;
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_80542F8;
        }
    }
}

int test_3_blocks_variant_49_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        →puts("block 3");
        if(gvar_80610A8) {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_4_edges_5() {
    →puts("block 2");
    →puts("block 3");
    if(gvar_80610A4) {
        →puts("block 4");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_500_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        do {
            →puts("block 4");
        }
        while(gvar_80610B0);
    }
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_501_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                →puts("block 3");
            }
            else {
                →puts("block 4");
                if(!gvar_80610B0) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_502_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                goto loc_8054454;
            }
            else {
                →puts("block 4");
            }
            if(!gvar_80610B0) {
                break;
            }
            else {
            loc_8054454:
                →puts("block 3");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_503_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                →puts("block 3");
            }
            else {
                do {
                    →puts("block 4");
                }
                while(gvar_80610B0);
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_504_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                goto loc_8054520;
            }
            else {
                →puts("block 4");
            }
            if(gvar_80610B0) {
            loc_8054520:
                →puts("block 3");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_505_edges_8() {
loc_805455C:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(gvar_80610AC) {
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B0) {
                        continue loc_805455C;
                    }
                }
                return;
            }
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_506_edges_8() {
loc_80545C2:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        do {
            →puts("block 4");
        }
        while(gvar_80610B0);
    }
    →puts("block 3");
    goto loc_80545C2;
}

int test_3_blocks_variant_507_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                while(1) {
                    →puts("block 3");
                }
                return;
            }
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_508_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        →puts("block 4");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
    }
    while(1) {
        →puts("block 3");
    }
}

int test_3_blocks_variant_509_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        while(1) {
            →puts("block 3");
        }
    }
    do {
        →puts("block 4");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_50_edges_6() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_510_edges_8() {
loc_805475A:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_805475A;
        }
        else if(!gvar_80610AC) {
        loc_8054784:
            while(1) {
                →puts("block 3");
            }
            return;
        }
        else {
            →puts("block 4");
        }
    }
    while(!gvar_80610B0);
    goto loc_8054784;
}

int test_3_blocks_variant_511_edges_8() {
loc_80547C0:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_80547EA;
    }
    else {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_80547C0;
            }
        }
    loc_80547EA:
        while(1) {
            →puts("block 3");
        }
    }
}

int test_3_blocks_variant_512_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_8054850;
    }
    else {
        do {
            →puts("block 4");
        }
        while(gvar_80610B0);
    loc_8054850:
        while(1) {
            →puts("block 3");
        }
    }
}

int test_3_blocks_variant_513_edges_8() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                →puts("block 3");
            }
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_514_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805491C:
        →puts("block 3");
    }
    →puts("block 4");
    if(!gvar_80610B0) {
        →puts("exit block");
        return 0;
    }
    goto loc_805491C;
}

int test_3_blocks_variant_515_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        →puts("block 3");
    }
    do {
        →puts("block 4");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_516_edges_8() {
loc_80549BE:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_80549E8:
        →puts("block 3");
    }
    →puts("block 4");
    if(!gvar_80610B0) {
        goto loc_80549BE;
    }
    else {
        goto loc_80549E8;
    }
}

int test_3_blocks_variant_517_edges_8() {
loc_8054A24:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        →puts("block 3");
        goto loc_8054A5D;
    }
    else {
    loc_8054A5D:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_8054A24;
            }
        }
    }
}

int test_3_blocks_variant_518_edges_8() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_8054AB4:
        →puts("block 3");
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_8054AB4;
        }
    }
}

int test_3_blocks_variant_519_edges_9() {
loc_8054AF0:
    do {
        →puts("block 2");
    loc_8054AFF:
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                goto loc_8054AF0;
            }
            else {
            loc_8054B20:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610AC) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_8054AFF;
    }
    else {
        goto loc_8054B20;
    }
}

int test_3_blocks_variant_51_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_520_edges_9() {
    do {
        →puts("block 2");
    loc_8054B6E:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610A4) {
                    →puts("exit block");
                    return 0;
                }
            }
            while(!gvar_80610A8);
        loc_8054B8F:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_8054B6E;
    }
    else {
        goto loc_8054B8F;
    }
}

int test_3_blocks_variant_521_edges_9() {
loc_8054BCE:
    do {
        →puts("block 2");
    loc_8054BDD:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610A4) {
                    goto loc_8054BCE;
                }
            }
            while(!gvar_80610A8);
        loc_8054BFE:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_8054BDD;
    }
    else {
        goto loc_8054BFE;
    }
}

int test_3_blocks_variant_522_edges_9() {
loc_8054C3D:
    do {
        →puts("block 2");
    loc_8054C4C:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                goto loc_8054C3D;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8054C4C;
}

int test_3_blocks_variant_523_edges_9() {
loc_8054CAC:
    do {
        →puts("block 2");
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                goto loc_8054CAC;
            }
        }
        while(!gvar_80610AC);
    loc_8054CE5:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8054CE5;
}

int test_3_blocks_variant_524_edges_9() {
    do {
        →puts("block 2");
    loc_8054D2A:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610A4) {
                    →puts("exit block");
                    return 0;
                }
            }
            while(1);
        }
        while(1);
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_8054D2A;
    }
    else {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
            else if(!gvar_80610B4) {
                goto loc_8054D2A;
            }
        }
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_525_edges_9() {
loc_8054D8A:
    →puts("block 2");
    do {
        do {
            →puts("block 3");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                goto loc_8054D8A;
            }
        }
        while(!gvar_80610AC);
    loc_8054DC3:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_8054D8A;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8054DC3;
}

int test_3_blocks_variant_526_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8054E11:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        loc_8054E29:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_8054E11;
    }
    else {
        goto loc_8054E29;
    }
}

int test_3_blocks_variant_527_edges_9() {
loc_8054E68:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8054E80:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                goto loc_8054E68;
            }
            else {
            loc_8054E98:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610AC) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_8054E80;
    }
    else {
        goto loc_8054E98;
    }
}

int test_3_blocks_variant_528_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8054EEF:
        do {
            do {
                →puts("block 3");
            }
            while(!gvar_80610A8);
        loc_8054F07:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_8054EEF;
    }
    else {
        goto loc_8054F07;
    }
}

int test_3_blocks_variant_529_edges_9() {
loc_8054F46:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8054F5E:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                goto loc_8054F46;
            }
            else {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8054F5E;
}

int test_3_blocks_variant_52_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        →puts("block 3");
        if(gvar_80610A8) {
            while(1) {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_530_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610AC);
    loc_8054FEE:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8054FEE;
}

int test_3_blocks_variant_531_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_805503C:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            break;
        }
        else if(!gvar_80610B4) {
            goto loc_805503C;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_532_edges_9() {
loc_8055093:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    break loc_8055093;
                }
                else if(!gvar_80610AC) {
                    goto loc_8055093;
                }
                else {
                loc_80550CC:
                    while(1) {
                        →puts("block 4");
                        if(!gvar_80610B0) {
                            goto loc_8055093;
                        }
                    }
                }
            }
            while(!gvar_80610B4);
            goto loc_80550CC;
        }
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_533_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_805511A:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_805511A;
}

int test_3_blocks_variant_534_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610AC);
    loc_80551AA:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_80551AA;
}

int test_3_blocks_variant_535_edges_9() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
            while(!gvar_80610AC);
        loc_8055219:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(!gvar_80610B4);
        goto loc_8055219;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_536_edges_9() {
loc_805524F:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                do {
                    →puts("block 3");
                    if(!gvar_80610A8) {
                        break loc_805524F;
                    }
                }
                while(!gvar_80610AC);
            loc_8055288:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B0) {
                        goto loc_805524F;
                    }
                }
            }
            while(!gvar_80610B4);
            goto loc_8055288;
        }
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_537_edges_9() {
loc_80552BE:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_80552D6:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                goto loc_80552BE;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_80552D6;
}

int test_3_blocks_variant_538_edges_9() {
loc_805532D:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                goto loc_805532D;
            }
        }
        while(!gvar_80610AC);
    loc_8055366:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8055366;
}

int test_3_blocks_variant_539_edges_9() {
loc_805539C:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                do {
                    →puts("block 3");
                    if(!gvar_80610A8) {
                        goto loc_805539C;
                    }
                }
                while(!gvar_80610AC);
            loc_80553D5:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B0) {
                        break loc_805539C;
                    }
                }
            }
            while(!gvar_80610B4);
            goto loc_80553D5;
        }
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_53_edges_6() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        →puts("block 3");
    }
    while(!gvar_80610A8);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_540_edges_9() {
loc_805540B:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                do {
                    →puts("block 3");
                    if(!gvar_80610A8) {
                        goto loc_805540B;
                    }
                }
                while(!gvar_80610AC);
            loc_8055444:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B0) {
                        goto loc_805540B;
                    }
                }
            }
            while(!gvar_80610B4);
            goto loc_8055444;
        }
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_541_edges_9() {
loc_805547A:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    break loc_805547A;
                }
                else if(!gvar_80610AC) {
                    continue loc_805547A;
                }
            }
            while(!gvar_80610B0);
            →puts("block 4");
            if(!gvar_80610B4) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_542_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8055501:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_8055501;
    }
    else {
        →puts("block 4");
        if(gvar_80610B4) {
            goto loc_8055501;
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
}

int test_3_blocks_variant_543_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8055570:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_8055570;
    }
    else {
        do {
            →puts("block 4");
        }
        while(gvar_80610B4);
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_544_edges_9() {
loc_80555C7:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_80555DF:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                goto loc_80555C7;
            }
            else if(gvar_80610B0) {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_80555DF;
}

int test_3_blocks_variant_545_edges_9() {
loc_8055636:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    break loc_8055636;
                }
                else if(!gvar_80610AC) {
                    continue loc_8055636;
                }
            }
            while(!gvar_80610B0);
            while(1) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    continue loc_8055636;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_546_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_80556BD:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_80556BD;
    }
    else {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                goto loc_80556BD;
            }
        }
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_547_edges_9() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_805572C:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        loc_8055744:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_805572C;
    }
    else {
        goto loc_8055744;
    }
}

int test_3_blocks_variant_548_edges_9() {
loc_8055783:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_805579B:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                goto loc_8055783;
            }
            else {
            loc_80557B3:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610AC) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_805579B;
    }
    else {
        goto loc_80557B3;
    }
}

int test_3_blocks_variant_549_edges_9() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_805580A:
        do {
            do {
                →puts("block 3");
            }
            while(!gvar_80610A8);
        loc_8055822:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_805580A;
    }
    else {
        goto loc_8055822;
    }
}

int test_3_blocks_variant_54_edges_6() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
            if(gvar_80610A8) {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_550_edges_9() {
loc_8055861:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8055879:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                goto loc_8055861;
            }
            else {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8055879;
}

int test_3_blocks_variant_551_edges_9() {
loc_80558D0:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                goto loc_80558D0;
            }
            else {
                →puts("block 3");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(!gvar_80610AC);
    loc_8055909:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8055909;
}

int test_3_blocks_variant_552_edges_9() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8055957:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            break;
        }
        else if(!gvar_80610B4) {
            goto loc_8055957;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_553_edges_9() {
loc_80559AE:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610AC) {
            goto loc_80559AE;
        }
        else {
        loc_80559E7:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    goto loc_80559AE;
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_80559E7;
}

int test_3_blocks_variant_554_edges_9() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8055A35:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8055A35;
}

int test_3_blocks_variant_555_edges_9() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610AC);
    loc_8055AC5:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8055AC5;
}

int test_3_blocks_variant_556_edges_9() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610AC);
    loc_8055B34:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8055B34;
}

int test_3_blocks_variant_557_edges_9() {
loc_8055B6A:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610AC);
    loc_8055BA3:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_8055B6A;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8055BA3;
}

int test_3_blocks_variant_558_edges_9() {
loc_8055BD9:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8055BF1:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                goto loc_8055BD9;
            }
            else if(gvar_80610AC) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8055BF1;
}

int test_3_blocks_variant_559_edges_9() {
loc_8055C48:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                goto loc_8055C48;
            }
        }
        while(!gvar_80610AC);
    loc_8055C81:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8055C81;
}

int test_3_blocks_variant_55_edges_6() {
loc_8049BDF:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            while(1) {
                →puts("block 3");
                if(!gvar_80610A8) {
                    continue loc_8049BDF;
                }
                else {
                    →puts("block 4");
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_560_edges_9() {
loc_8055CB7:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                goto loc_8055CB7;
            }
        }
        while(!gvar_80610AC);
    loc_8055CF0:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8055CF0;
}

int test_3_blocks_variant_561_edges_9() {
loc_8055D26:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610AC) {
            goto loc_8055D26;
        }
    }
    while(!gvar_80610B0);
    →puts("block 4");
    if(gvar_80610B4) {
        goto loc_8055D26;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_562_edges_9() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8055DAD:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_8055DAD;
    }
    else {
        →puts("block 4");
        if(gvar_80610B4) {
            goto loc_8055DAD;
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
}

int test_3_blocks_variant_563_edges_9() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8055E1C:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_8055E1C;
    }
    else {
        do {
            →puts("block 4");
        }
        while(gvar_80610B4);
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_564_edges_9() {
loc_8055E73:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8055E8B:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                goto loc_8055E73;
            }
            else if(gvar_80610B0) {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8055E8B;
}

int test_3_blocks_variant_565_edges_9() {
loc_8055EE2:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610AC) {
            goto loc_8055EE2;
        }
    }
    while(!gvar_80610B0);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_8055EE2;
        }
    }
}

int test_3_blocks_variant_566_edges_9() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_8055F69:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_8055F69;
    }
    else {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                goto loc_8055F69;
            }
        }
    }
}

int test_3_blocks_variant_567_edges_9() {
loc_8055FC0:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_8055FD8;
        }
    loc_8055FF0:
        do {
            →puts("block 4");
            if(gvar_80610AC) {
                if(gvar_80610B0) {
                    if(gvar_80610B4) {
                        goto loc_8055FF0;
                    }
                    else {
                    loc_8055FD8:
                        →puts("block 3");
                        if(!gvar_80610A8) {
                            break loc_8055FC0;
                        }
                    }
                }
                continue loc_8055FC0;
            }
        }
        while(gvar_80610AC);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_568_edges_9() {
    do {
        →puts("block 2");
        if(gvar_80610A4) {
        loc_805605F:
            do {
                →puts("block 4");
            }
            while(gvar_80610AC);
        }
        else {
            goto loc_8056047;
        }
        →puts("exit block");
        return 0;
    }
    while(!gvar_80610B0);
    if(gvar_80610B4) {
        goto loc_805605F;
    }
    else {
    loc_8056047:
        do {
            →puts("block 3");
        }
        while(gvar_80610A8);
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_569_edges_9() {
loc_805609E:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_80560B6:
        →puts("block 3");
        if(gvar_80610A8) {
            goto loc_80560CE;
        }
    }
    else {
    loc_80560CE:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
            else if(!gvar_80610B0) {
                goto loc_805609E;
            }
            else if(!gvar_80610B4) {
                goto loc_80560B6;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_56_edges_6() {
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 3");
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_570_edges_9() {
loc_805610D:
    →puts("block 2");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
            else if(!gvar_80610B0) {
                goto loc_805610D;
            }
            else if(!gvar_80610B4) {
                goto loc_8056125;
            }
        }
        →puts("exit block");
        return 0;
    }
loc_8056125:
    while(1) {
        →puts("block 3");
        if(!gvar_80610A8) {
            goto loc_805610D;
        }
    }
}

int test_3_blocks_variant_571_edges_9() {
loc_805617C:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_8056194:
        →puts("block 3");
        if(!gvar_80610A8) {
            goto loc_805617C;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            break;
        }
        else if(!gvar_80610B0) {
            goto loc_805617C;
        }
        else if(!gvar_80610B4) {
            goto loc_8056194;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_572_edges_9() {
loc_80561EB:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_8056203:
        do {
            →puts("block 3");
        }
        while(!gvar_80610A8);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            break;
        }
        else if(!gvar_80610B0) {
            goto loc_80561EB;
        }
        else if(!gvar_80610B4) {
            goto loc_8056203;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_573_edges_9() {
    do {
        do {
            →puts("block 2");
            if(gvar_80610A4) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(gvar_80610A4 && !gvar_80610B4);
    loc_8056272:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_8056272;
}

int test_3_blocks_variant_574_edges_9() {
loc_80562C9:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            while(1) {
                →puts("block 3");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
                else if(!gvar_80610AC) {
                    goto loc_80562C9;
                }
            }
        }
        else {
        loc_8056302:
            do {
                →puts("block 4");
            }
            while(gvar_80610B0);
        }
        →puts("exit block");
        return 0;
    }
    while(!gvar_80610B4);
    goto loc_8056302;
}

int test_3_blocks_variant_575_edges_9() {
alab1:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
                else if(!gvar_80610B4) {
                    break alab1;
                }
            }
        }
        else {
        loc_8056350:
            do {
                →puts("block 3");
            }
            while(gvar_80610A8);
        }
        →puts("exit block");
        return 0;
    }
    while(!gvar_80610AC);
    goto loc_8056350;
}

int test_3_blocks_variant_576_edges_9() {
loc_80563A7:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                →puts("block 4");
                if(!gvar_80610B0) {
                    goto loc_80563A7;
                }
            }
            while(gvar_80610B4);
        }
    loc_80563BF:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610AC);
    goto loc_80563BF;
}

int test_3_blocks_variant_577_edges_9() {
loc_8056416:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_805642E:
        →puts("block 3");
        if(gvar_80610A8) {
            if(!gvar_80610AC) {
                goto loc_8056416;
            }
            else {
                goto loc_805644F;
            }
        }
    }
    else {
    loc_805644F:
        →puts("block 4");
        if(gvar_80610B0) {
            if(!gvar_80610B4) {
                goto loc_8056416;
            }
            else {
                goto loc_805642E;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_578_edges_9() {
loc_8056485:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_805649D:
        →puts("block 3");
        if(gvar_80610A8) {
            if(!gvar_80610AC) {
                goto loc_8056485;
            }
            else {
                goto loc_80564BE;
            }
        }
    }
    else {
    loc_80564BE:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
            else if(!gvar_80610B4) {
                goto loc_805649D;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_579_edges_9() {
loc_80564F4:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_805650C:
        →puts("block 3");
        if(!gvar_80610A8) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610AC) {
            goto loc_80564F4;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_80564F4;
        }
        else if(!gvar_80610B4) {
            goto loc_805650C;
        }
    }
}

int test_3_blocks_variant_57_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            →puts("block 3");
        }
        while(!gvar_80610A8);
        →puts("block 4");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_580_edges_9() {
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_805657B:
        do {
            →puts("block 3");
        }
        while(gvar_80610A8 && !gvar_80610AC);
    }
    else {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
            else if(!gvar_80610B4) {
                goto loc_805657B;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_581_edges_9() {
loc_80565D2:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_80565EA:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610AC);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_80565D2;
        }
        else if(!gvar_80610B4) {
            goto loc_80565EA;
        }
    }
}

int test_3_blocks_variant_582_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_8056662:
        do {
            →puts("block 3");
        loc_8056671:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_8056662;
    }
    else {
        goto loc_8056671;
    }
}

int test_3_blocks_variant_583_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_80566D1:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_80566D1;
}

int test_3_blocks_variant_584_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
    loc_8056758:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8056758;
}

int test_3_blocks_variant_585_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
loc_80567AF:
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            break;
        }
        else {
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    break loc_80567AF;
                }
                else if(!gvar_80610B4) {
                    continue loc_80567AF;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_586_edges_9() {
loc_80567FD:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
loc_805681E:
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            break;
        }
        else {
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    goto loc_80567FD;
                }
                else if(!gvar_80610B4) {
                    continue loc_805681E;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_587_edges_9() {
loc_805686C:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805688D:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                goto loc_805686C;
            }
            else {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_805688D;
}

int test_3_blocks_variant_588_edges_9() {
loc_80568DB:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                goto loc_80568DB;
            }
            else {
                →puts("block 3");
            }
        }
        while(!gvar_80610AC);
    loc_8056914:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8056914;
}

int test_3_blocks_variant_589_edges_9() {
loc_805694A:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
loc_805696B:
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_805694A;
        }
        else {
        loc_8056983:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
                else if(!gvar_80610B4) {
                    continue loc_805696B;
                }
            }
        }
    }
    goto loc_8056983;
}

int test_3_blocks_variant_58_edges_6() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            do {
                →puts("block 3");
            }
            while(!gvar_80610A8);
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_590_edges_9() {
loc_80569B9:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
loc_80569DA:
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_80569B9;
        }
        else {
        loc_80569F2:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    goto loc_80569B9;
                }
                else if(!gvar_80610B4) {
                    continue loc_80569DA;
                }
            }
        }
    }
    goto loc_80569F2;
}

int test_3_blocks_variant_591_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_8056A49:
        while(1) {
            →puts("block 3");
            if(gvar_80610AC) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8056A49;
}

int test_3_blocks_variant_592_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        do {
            →puts("block 3");
        }
        while(!gvar_80610AC);
    loc_8056AD0:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8056AD0;
}

int test_3_blocks_variant_593_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        do {
            →puts("block 3");
        }
        while(!gvar_80610AC);
    loc_8056B3F:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8056B3F;
}

int test_3_blocks_variant_594_edges_9() {
loc_8056B75:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        do {
            →puts("block 3");
        }
        while(!gvar_80610AC);
    loc_8056BAE:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_8056B75;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8056BAE;
}

int test_3_blocks_variant_595_edges_9() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 3");
            if(!gvar_80610AC) {
                break;
            }
            else if(gvar_80610B0) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_596_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_8056C74:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    →puts("block 4");
    if(gvar_80610B4) {
        goto loc_8056C74;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_597_edges_9() {
loc_8056CC2:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_8056CC2;
        }
        else {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    do {
        →puts("block 4");
    }
    while(gvar_80610B4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_598_edges_9() {
loc_8056D31:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_8056D52:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B0) {
                goto loc_8056D31;
            }
            else {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8056D52;
}

int test_3_blocks_variant_599_edges_9() {
loc_8056DA0:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(gvar_80610A8) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610B0) {
                break;
            }
        }
    }
    while(1);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_8056DA0;
        }
    }
}

int test_3_blocks_variant_59_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 3");
            if(gvar_80610A8) {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_5_edges_5() {
    while(1) {
        →puts("block 2");
        →puts("block 3");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_600_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_8056E30:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_8056E30;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_601_edges_9() {
loc_8056E7E:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610B0);
    →puts("block 4");
    if(gvar_80610B4) {
        goto loc_8056E7E;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_602_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            break;
        }
        else if(gvar_80610B0) {
            →puts("block 4");
            if(!gvar_80610B4) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_603_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610B0);
    do {
        →puts("block 4");
    }
    while(gvar_80610B4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_604_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_8056FEC:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610B0) {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8056FEC;
}

int test_3_blocks_variant_605_edges_9() {
loc_805703A:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610B0);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_805703A;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_606_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
loc_80570CA:
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610B0);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_80570CA;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_607_edges_9() {
loc_8057118:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_8057118;
        }
    }
    while(!gvar_80610B0);
    →puts("block 4");
    if(gvar_80610B4) {
        goto loc_8057118;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_608_edges_9() {
loc_8057187:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
loc_80571A8:
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_8057187;
        }
        else if(!gvar_80610B0) {
            goto loc_80571A8;
        }
        else {
            →puts("block 4");
        }
    }
    while(gvar_80610B4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_609_edges_9() {
loc_80571F6:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_80571F6;
        }
    }
    while(!gvar_80610B0);
    do {
        →puts("block 4");
    }
    while(gvar_80610B4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_60_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            →puts("block 3");
        }
        while(!gvar_80610A8);
        while(1) {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_610_edges_9() {
loc_8057265:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_8057286:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                goto loc_8057265;
            }
            else if(gvar_80610B0) {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8057286;
}

int test_3_blocks_variant_611_edges_9() {
loc_80572D4:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_80572D4;
        }
    }
    while(!gvar_80610B0);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_80572D4;
        }
    }
}

int test_3_blocks_variant_612_edges_9() {
loc_8057343:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
loc_8057364:
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_8057343;
        }
    }
    while(!gvar_80610B0);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_8057364;
        }
    }
}

int test_3_blocks_variant_613_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_80573D3:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_80573D3;
    }
    else {
        →puts("block 4");
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_614_edges_9() {
loc_8057421:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B0) {
            goto loc_8057421;
        }
    }
    while(!gvar_80610B4);
    →puts("block 4");
    goto loc_8057421;
}

int test_3_blocks_variant_615_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_80574B1:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    if(gvar_80610B4) {
        →puts("block 4");
    }
    goto loc_80574B1;
}

int test_3_blocks_variant_616_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_8057520:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_8057520;
    }
    else {
        while(1) {
            →puts("block 4");
        }
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_617_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            →puts("block 3");
            →puts("exit block");
            return 0;
        }
    loc_805759E:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    if(gvar_80610B4) {
        goto loc_805759E;
    }
    else {
        →puts("block 3");
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_618_edges_9() {
loc_80575DD:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                goto loc_80575FE;
            }
        loc_805760D:
            do {
                →puts("block 4");
                if(gvar_80610AC) {
                    if(gvar_80610B0) {
                        if(gvar_80610B4) {
                            goto loc_805760D;
                        }
                        else {
                        loc_80575FE:
                            →puts("block 3");
                        }
                    }
                    continue loc_80575DD;
                }
            }
            while(gvar_80610AC);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_619_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_805766D;
        }
        else {
        loc_805767C:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B0);
    if(gvar_80610B4) {
        goto loc_805767C;
    }
    else {
    loc_805766D:
        while(1) {
            →puts("block 3");
        }
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_61_edges_6() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 3");
            →puts("block 4");
            if(!gvar_80610A8) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_620_edges_9() {
loc_80576BB:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_80576DC:
        →puts("block 3");
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B0) {
            goto loc_80576BB;
        }
        else if(!gvar_80610B4) {
            goto loc_80576DC;
        }
    }
}

int test_3_blocks_variant_621_edges_9() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                goto loc_805774B;
            }
            else {
                →puts("block 4");
            }
            if(!gvar_80610B0) {
                break;
            }
            else if(gvar_80610B4) {
            loc_805774B:
                →puts("block 3");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_622_edges_9() {
    do {
        while(1) {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                →puts("block 3");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
            else {
            loc_80577D2:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B0) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_80577D2;
}

int test_3_blocks_variant_623_edges_9() {
loc_8057808:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                goto loc_8057829;
            }
        loc_8057841:
            do {
                →puts("block 4");
                if(gvar_80610B0) {
                    if(gvar_80610B4) {
                        goto loc_8057841;
                    }
                    else {
                    loc_8057829:
                        →puts("block 3");
                        if(!gvar_80610AC) {
                            break loc_8057808;
                        }
                        else {
                            continue loc_8057808;
                        }
                    }
                }
            }
            while(gvar_80610B0);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_624_edges_9() {
loc_8057877:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(gvar_80610A8) {
                do {
                    →puts("block 4");
                    if(!gvar_80610B0) {
                        continue loc_8057877;
                    }
                }
                while(gvar_80610B4);
            }
            →puts("block 3");
            if(!gvar_80610AC) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_625_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            break;
        }
        else {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    do {
        →puts("block 3");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_626_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        if(gvar_80610A8) {
            break;
        }
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            continue;
        loc_805798E:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_805798E;
}

int test_3_blocks_variant_627_edges_9() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(gvar_80610A8) {
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    break;
                }
                else if(!gvar_80610B4) {
                    goto loc_80579E5;
                }
            }
        }
        else {
        loc_80579E5:
            do {
                →puts("block 3");
            }
            while(gvar_80610AC);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_628_edges_9() {
loc_8057A33:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(gvar_80610A8) {
                do {
                    →puts("block 4");
                    if(!gvar_80610B0) {
                        continue loc_8057A33;
                    }
                }
                while(gvar_80610B4);
            }
            do {
                →puts("block 3");
            }
            while(gvar_80610AC);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_629_edges_9() {
loc_8057AA2:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_8057ADB;
    }
    else {
    loc_8057AC3:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
loc_8057ADB:
    →puts("block 4");
    if(!gvar_80610B0) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B4) {
        goto loc_8057AA2;
    }
    else {
        goto loc_8057AC3;
    }
}

int test_3_blocks_variant_62_edges_6() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
        →puts("block 4");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_630_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        if(!gvar_80610A8) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    loc_8057B4A:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8057B4A;
}

int test_3_blocks_variant_631_edges_9() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_8057BB9;
    }
    else {
    loc_8057BA1:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
loc_8057BB9:
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B4) {
            goto loc_8057BA1;
        }
    }
}

int test_3_blocks_variant_632_edges_9() {
loc_8057BEF:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_8057C28;
    }
    else {
    loc_8057C10:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
loc_8057C28:
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_8057BEF;
        }
        else if(!gvar_80610B4) {
            goto loc_8057C10;
        }
    }
}

int test_3_blocks_variant_633_edges_9() {
loc_8057C5E:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
        loc_8057C7F:
            while(1) {
                →puts("block 3");
                if(!gvar_80610AC) {
                    goto loc_8057C5E;
                }
            }
            return;
        }
        →puts("block 4");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610B4);
    goto loc_8057C7F;
}

int test_3_blocks_variant_634_edges_9() {
loc_8057CCD:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        if(!gvar_80610A8) {
            while(1) {
                →puts("block 3");
                if(!gvar_80610AC) {
                    goto loc_8057CCD;
                }
            }
        }
    loc_8057D06:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8057D06;
}

int test_3_blocks_variant_635_edges_9() {
loc_8057D3C:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                goto loc_8057D5D;
            }
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    break loc_8057D3C;
                }
                else if(!gvar_80610B4) {
                loc_8057D5D:
                    while(1) {
                        →puts("block 3");
                        if(!gvar_80610AC) {
                            continue loc_8057D3C;
                        }
                    }
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_636_edges_9() {
loc_8057DAB:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(gvar_80610A8) {
                do {
                    →puts("block 4");
                    if(!gvar_80610B0) {
                        continue loc_8057DAB;
                    }
                }
                while(gvar_80610B4);
            }
            while(1) {
                →puts("block 3");
                if(!gvar_80610AC) {
                    continue loc_8057DAB;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_637_edges_9() {
loc_8057E1A:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_8057E53;
    }
    else {
    loc_8057E3B:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        goto loc_8057E1A;
    }
    else {
    loc_8057E53:
        →puts("block 4");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B4) {
            goto loc_8057E1A;
        }
        else {
            goto loc_8057E3B;
        }
    }
}

int test_3_blocks_variant_638_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610A8) {
                break;
            }
            else {
                →puts("block 3");
            }
        }
        while(!gvar_80610AC);
    loc_8057EC2:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8057EC2;
}

int test_3_blocks_variant_639_edges_9() {
loc_8057EF8:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_8057F31;
    }
    else {
    loc_8057F19:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        goto loc_8057EF8;
    }
    else {
    loc_8057F31:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B4) {
                goto loc_8057F19;
            }
        }
    }
}

int test_3_blocks_variant_63_edges_6() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    →puts("block 3");
    do {
        →puts("block 4");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_640_edges_9() {
loc_8057F67:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    if(!gvar_80610A8) {
    loc_8057F88:
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_8057F67;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_8057F67;
        }
        else if(!gvar_80610B4) {
            goto loc_8057F88;
        }
    }
}

int test_3_blocks_variant_641_edges_9() {
loc_8057FD6:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_8057FF7:
        do {
            →puts("block 3");
        }
        while(!gvar_80610AC);
    }
    →puts("block 4");
    if(!gvar_80610B0) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B4) {
        goto loc_8057FD6;
    }
    else {
        goto loc_8057FF7;
    }
}

int test_3_blocks_variant_642_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        if(!gvar_80610A8) {
            do {
                →puts("block 3");
            }
            while(!gvar_80610AC);
        }
    loc_805807E:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_805807E;
}

int test_3_blocks_variant_643_edges_9() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_80580D5:
        do {
            →puts("block 3");
        }
        while(!gvar_80610AC);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B4) {
            goto loc_80580D5;
        }
    }
}

int test_3_blocks_variant_644_edges_9() {
loc_8058123:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    if(!gvar_80610A8) {
    loc_8058144:
        do {
            →puts("block 3");
        }
        while(!gvar_80610AC);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_8058123;
        }
        else if(!gvar_80610B4) {
            goto loc_8058144;
        }
    }
}

int test_3_blocks_variant_645_edges_9() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(!gvar_80610A8) {
            →puts("block 3");
            →puts("exit block");
            return 0;
        }
    loc_80581C2:
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    if(gvar_80610B4) {
        goto loc_80581C2;
    }
    else {
        →puts("block 3");
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_646_edges_9() {
loc_8058201:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610AC) {
                break;
            }
            else if(!gvar_80610B0) {
                goto loc_8058201;
            }
            else if(!gvar_80610B4) {
                →puts("block 3");
                goto loc_8058201;
            }
        }
        →puts("exit block");
        return 0;
    }
    →puts("block 3");
    goto loc_8058201;
}

int test_3_blocks_variant_647_edges_9() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(!gvar_80610A8) {
            goto loc_8058291;
        }
        else {
        loc_80582A0:
            while(1) {
                →puts("block 4");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B0);
    if(gvar_80610B4) {
        goto loc_80582A0;
    }
    else {
    loc_8058291:
        while(1) {
            →puts("block 3");
        }
    }
}

int test_3_blocks_variant_648_edges_9() {
loc_80582DF:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_8058300:
        →puts("block 3");
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610AC) {
            break;
        }
        else if(!gvar_80610B0) {
            goto loc_80582DF;
        }
        else if(!gvar_80610B4) {
            goto loc_8058300;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_649_edges_9() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            if(!gvar_80610A8) {
                goto loc_805836F;
            }
            else {
                →puts("block 4");
            }
            if(!gvar_80610B0) {
                break;
            }
            else if(gvar_80610B4) {
            loc_805836F:
                →puts("block 3");
                if(!gvar_80610AC) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_64_edges_6() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    →puts("block 3");
    if(gvar_80610A8) {
        →puts("block 4");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_650_edges_9() {
    do {
        while(1) {
            →puts("block 2");
            if(gvar_80610A4) {
                if(gvar_80610A8) {
                    break;
                }
                else {
                    →puts("block 3");
                    if(!gvar_80610AC) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    loc_80583F6:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_80583F6;
}

int test_3_blocks_variant_651_edges_9() {
loc_805842C:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
        goto loc_805844D;
    }
loc_8058465:
    do {
        →puts("block 4");
        if(gvar_80610B0) {
            if(gvar_80610B4) {
                goto loc_8058465;
            }
            else {
            loc_805844D:
                →puts("block 3");
                if(!gvar_80610AC) {
                    break;
                }
                else {
                    goto loc_805842C;
                }
            }
        }
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_652_edges_9() {
loc_805849B:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        do {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_805849B;
            }
        }
        while(gvar_80610B4);
    }
    →puts("block 3");
    if(gvar_80610AC) {
        goto loc_805849B;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_653_edges_9() {
loc_805850A:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_805850A;
        }
        else if(!gvar_80610A8) {
            break;
        }
        else {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    do {
        →puts("block 3");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_654_edges_9() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(!gvar_80610A8) {
            do {
                →puts("block 3");
            }
            while(gvar_80610AC);
            →puts("exit block");
            return 0;
        }
    loc_80585B2:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_80585B2;
}

int test_3_blocks_variant_655_edges_9() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
            else if(!gvar_80610B4) {
                goto loc_8058609;
            }
        }
    }
    else {
    loc_8058609:
        do {
            →puts("block 3");
        }
        while(gvar_80610AC);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_656_edges_9() {
loc_8058657:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        do {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_8058657;
            }
        }
        while(gvar_80610B4);
    }
    do {
        →puts("block 3");
    }
    while(gvar_80610AC);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_657_edges_9() {
loc_80586C6:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_80586E7:
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
    }
    →puts("block 4");
    if(!gvar_80610B0) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B4) {
        goto loc_80586C6;
    }
    else {
        goto loc_80586E7;
    }
}

int test_3_blocks_variant_658_edges_9() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(!gvar_80610A8) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    loc_805876E:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_805876E;
}

int test_3_blocks_variant_659_edges_9() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_80587C5:
        →puts("block 3");
        if(gvar_80610AC) {
            goto loc_80587DD;
        }
    }
    else {
    loc_80587DD:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
            else if(!gvar_80610B4) {
                goto loc_80587C5;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_65_edges_6() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_660_edges_9() {
loc_8058813:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_8058834:
        →puts("block 3");
        if(gvar_80610AC) {
            goto loc_805884C;
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
    else {
    loc_805884C:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_8058813;
            }
            else if(!gvar_80610B4) {
                goto loc_8058834;
            }
        }
    }
}

int test_3_blocks_variant_661_edges_9() {
loc_8058882:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_8058882;
        }
        else if(!gvar_80610A8) {
        loc_80588A3:
            while(1) {
                →puts("block 3");
                if(!gvar_80610AC) {
                    goto loc_8058882;
                }
            }
            return;
        }
        else {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_80588A3;
}

int test_3_blocks_variant_662_edges_9() {
loc_80588F1:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(!gvar_80610A8) {
            while(1) {
                →puts("block 3");
                if(!gvar_80610AC) {
                    goto loc_80588F1;
                }
            }
        }
    loc_805892A:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_805892A;
}

int test_3_blocks_variant_663_edges_9() {
loc_8058960:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
            else if(!gvar_80610B4) {
                goto loc_8058981;
            }
        }
        →puts("exit block");
        return 0;
    }
loc_8058981:
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_8058960;
        }
    }
}

int test_3_blocks_variant_664_edges_9() {
loc_80589CF:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_80589F0:
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_80589CF;
        }
    }
    →puts("block 4");
    if(!gvar_80610B0) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B4) {
        goto loc_80589CF;
    }
    else {
        goto loc_80589F0;
    }
}

int test_3_blocks_variant_665_edges_9() {
loc_8058A3E:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                goto loc_8058A3E;
            }
            else if(gvar_80610A8) {
                break;
            }
            else {
                →puts("block 3");
            }
        }
        while(!gvar_80610AC);
    loc_8058A77:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8058A77;
}

int test_3_blocks_variant_666_edges_9() {
loc_8058AAD:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_8058ACE:
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_8058AAD;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            break;
        }
        else if(!gvar_80610B4) {
            goto loc_8058ACE;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_667_edges_9() {
loc_8058B1C:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_8058B3D:
        do {
            →puts("block 3");
        }
        while(!gvar_80610AC);
    }
    →puts("block 4");
    if(!gvar_80610B0) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B4) {
        goto loc_8058B1C;
    }
    else {
        goto loc_8058B3D;
    }
}

int test_3_blocks_variant_668_edges_9() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(!gvar_80610A8) {
            do {
                →puts("block 3");
            }
            while(!gvar_80610AC);
        }
    loc_8058BC4:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8058BC4;
}

int test_3_blocks_variant_669_edges_9() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_8058C1B:
        do {
            →puts("block 3");
        }
        while(!gvar_80610AC);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            break;
        }
        else if(!gvar_80610B4) {
            goto loc_8058C1B;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_66_edges_6() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    while(1) {
        →puts("block 3");
        if(!gvar_80610A8) {
            break;
        }
        else {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_670_edges_9() {
loc_8058C69:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_8058C69;
        }
        else if(!gvar_80610AC) {
            break;
        }
        else {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_671_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(!gvar_80610AC) {
            →puts("block 3");
            →puts("exit block");
            return 0;
        }
    loc_8058D11:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8058D11;
}

int test_3_blocks_variant_672_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
            else if(!gvar_80610B4) {
                →puts("block 3");
                →puts("exit block");
                return 0;
            }
        }
    }
    else {
        →puts("block 3");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_673_edges_9() {
loc_8058DB6:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        do {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_8058DB6;
            }
        }
        while(gvar_80610B4);
    }
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_674_edges_9() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                goto loc_8058E4F;
            }
            else {
                →puts("block 4");
            }
            if(!gvar_80610B0) {
                break;
            }
            else if(gvar_80610B4) {
            loc_8058E4F:
                →puts("block 3");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_675_edges_9() {
    do {
        while(1) {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610A8) {
                if(!gvar_80610AC) {
                    →puts("block 3");
                }
                else {
                loc_8058ECD:
                    while(1) {
                        →puts("block 4");
                        if(!gvar_80610B0) {
                            →puts("exit block");
                            return 0;
                        }
                    }
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8058ECD;
}

int test_3_blocks_variant_676_edges_9() {
loc_8058F03:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        →puts("block 3");
        goto loc_8058F03;
    }
    else {
    loc_8058F3C:
        do {
            →puts("block 4");
            if(gvar_80610B0) {
                if(gvar_80610B4) {
                    goto loc_8058F3C;
                }
                else {
                    →puts("block 3");
                    goto loc_8058F03;
                }
            }
        }
        while(gvar_80610B0);
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_677_edges_9() {
loc_8058F72:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        do {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_8058F72;
            }
        }
        while(gvar_80610B4);
    }
    →puts("block 3");
    goto loc_8058F72;
}

int test_3_blocks_variant_678_edges_9() {
loc_8058FE1:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_8058FE1;
        }
        else if(!gvar_80610AC) {
        loc_805900B:
            while(1) {
                →puts("block 3");
            }
            return;
        }
        else {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_805900B;
}

int test_3_blocks_variant_679_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(!gvar_80610AC) {
            while(1) {
                →puts("block 3");
            }
        }
    loc_8059089:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8059089;
}

int test_3_blocks_variant_67_edges_6() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    →puts("block 3");
    if(!gvar_80610A8) {
        →puts("exit block");
        return 0;
    }
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_680_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_80590E9;
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            break;
        }
        else if(!gvar_80610B4) {
        loc_80590E9:
            while(1) {
                →puts("block 3");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_681_edges_9() {
loc_805912E:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_8059158;
    }
    else {
        do {
            →puts("block 4");
            if(!gvar_80610B0) {
                goto loc_805912E;
            }
        }
        while(gvar_80610B4);
    loc_8059158:
        while(1) {
            →puts("block 3");
        }
    }
}

int test_3_blocks_variant_682_edges_9() {
loc_805919D:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_80591C7:
        →puts("block 3");
    }
    →puts("block 4");
    if(!gvar_80610B0) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B4) {
        goto loc_805919D;
    }
    else {
        goto loc_80591C7;
    }
}

int test_3_blocks_variant_683_edges_9() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(!gvar_80610AC) {
            →puts("block 3");
        }
    loc_8059245:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_8059245;
}

int test_3_blocks_variant_684_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_80592A5:
        →puts("block 3");
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B4) {
            goto loc_80592A5;
        }
    }
}

int test_3_blocks_variant_685_edges_9() {
loc_80592EA:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_8059314:
        →puts("block 3");
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            goto loc_80592EA;
        }
        else if(!gvar_80610B4) {
            goto loc_8059314;
        }
    }
}

int test_3_blocks_variant_686_edges_9() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                →puts("block 3");
                if(!gvar_80610B0) {
                    break;
                }
            }
            else {
                →puts("block 4");
                if(!gvar_80610B4) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_687_edges_9() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                goto loc_80593F2;
            }
            else {
                →puts("block 4");
            }
            if(!gvar_80610B4) {
                break;
            }
            else {
            loc_80593F2:
                →puts("block 3");
                if(!gvar_80610B0) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_688_edges_9() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                →puts("block 3");
                if(!gvar_80610B0) {
                    break;
                }
            }
            else {
                do {
                    →puts("block 4");
                }
                while(gvar_80610B4);
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_689_edges_9() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                goto loc_80594D0;
            }
            else {
                →puts("block 4");
            }
            if(gvar_80610B4) {
            loc_80594D0:
                →puts("block 3");
                if(!gvar_80610B0) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_68_edges_6() {
loc_804A023:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_804A023;
        }
        else {
            →puts("block 3");
        }
    }
    while(!gvar_80610A8);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_690_edges_9() {
loc_8059515:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(gvar_80610AC) {
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B4) {
                        continue loc_8059515;
                    }
                }
                return;
            }
            →puts("block 3");
            if(!gvar_80610B0) {
                break;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_691_edges_9() {
loc_8059584:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        do {
            →puts("block 4");
        }
        while(gvar_80610B4);
    }
    →puts("block 3");
    if(gvar_80610B0) {
        goto loc_8059584;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_692_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        →puts("block 4");
        if(gvar_80610B4) {
            goto loc_805961D;
        }
    }
    else {
    loc_805961D:
        do {
            →puts("block 3");
        }
        while(gvar_80610B0);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_693_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        do {
            →puts("block 3");
        }
        while(gvar_80610B0);
    }
    else {
        do {
            →puts("block 4");
        }
        while(gvar_80610B4);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_694_edges_9() {
loc_80596D1:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_80596D1;
        }
        else if(!gvar_80610AC) {
            break;
        }
        else {
            →puts("block 4");
        }
    }
    while(!gvar_80610B4);
    do {
        →puts("block 3");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_695_edges_9() {
loc_8059740:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        goto loc_8059782;
    }
    while(1) {
        →puts("block 3");
        if(!gvar_80610B0) {
            break;
        }
        else {
            continue;
        loc_8059782:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    goto loc_8059740;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_696_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        do {
            →puts("block 4");
        }
        while(gvar_80610B4);
    }
    do {
        →puts("block 3");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_697_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_8059848:
        →puts("block 3");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
    }
    →puts("block 4");
    if(!gvar_80610B4) {
        →puts("exit block");
        return 0;
    }
    goto loc_8059848;
}

int test_3_blocks_variant_698_edges_9() {
loc_805988D:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_80598B7:
        →puts("block 3");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
    }
    →puts("block 4");
    if(!gvar_80610B4) {
        goto loc_805988D;
    }
    else {
        goto loc_80598B7;
    }
}

int test_3_blocks_variant_699_edges_9() {
loc_80598FC:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        →puts("block 3");
        if(gvar_80610B0) {
            goto loc_805993E;
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
    else {
    loc_805993E:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                goto loc_80598FC;
            }
        }
    }
}

int test_3_blocks_variant_69_edges_6() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        →puts("block 3");
    }
    while(!gvar_80610A8);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_6_edges_5() {
    →puts("block 2");
    while(1) {
        →puts("block 3");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_700_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_8059995:
        →puts("block 3");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_8059995;
        }
    }
}

int test_3_blocks_variant_701_edges_9() {
loc_80599DA:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_80599DA;
        }
        else if(!gvar_80610AC) {
        loc_8059A04:
            while(1) {
                →puts("block 3");
                if(!gvar_80610B0) {
                    goto loc_80599DA;
                }
            }
            return;
        }
        else {
            →puts("block 4");
        }
    }
    while(!gvar_80610B4);
    goto loc_8059A04;
}

int test_3_blocks_variant_702_edges_9() {
loc_8059A49:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        while(1) {
            →puts("block 3");
            if(!gvar_80610B0) {
                goto loc_8059A49;
            }
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_8059A49;
        }
    }
}

int test_3_blocks_variant_703_edges_9() {
loc_8059AB8:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_8059AE2;
    }
    else {
        do {
            →puts("block 4");
        }
        while(gvar_80610B4);
    loc_8059AE2:
        while(1) {
            →puts("block 3");
            if(!gvar_80610B0) {
                goto loc_8059AB8;
            }
        }
    }
}

int test_3_blocks_variant_704_edges_9() {
loc_8059B27:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_8059B51:
        →puts("block 3");
        if(!gvar_80610B0) {
            goto loc_8059B27;
        }
    }
    →puts("block 4");
    if(!gvar_80610B4) {
        goto loc_8059B27;
    }
    else {
        goto loc_8059B51;
    }
}

int test_3_blocks_variant_705_edges_9() {
loc_8059B96:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_8059BC0:
        →puts("block 3");
        if(!gvar_80610B0) {
            goto loc_8059B96;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_8059BC0;
        }
    }
}

int test_3_blocks_variant_706_edges_9() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_8059C2F:
        do {
            →puts("block 3");
        }
        while(!gvar_80610B0);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_8059C2F;
        }
    }
}

int test_3_blocks_variant_707_edges_10() {
loc_8059C74:
    do {
        →puts("block 2");
    loc_8059C83:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610A4) {
                    →puts("exit block");
                    return 0;
                }
                else if(!gvar_80610A8) {
                    goto loc_8059C74;
                }
            }
            while(!gvar_80610AC);
        loc_8059CAD:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B4);
    if(!gvar_80610B8) {
        goto loc_8059C83;
    }
    else {
        goto loc_8059CAD;
    }
}

int test_3_blocks_variant_708_edges_10() {
loc_8059CEC:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8059D04:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                goto loc_8059CEC;
            }
            else {
            loc_8059D25:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B0) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B4);
    if(!gvar_80610B8) {
        goto loc_8059D04;
    }
    else {
        goto loc_8059D25;
    }
}

int test_3_blocks_variant_709_edges_10() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8059D7C:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
            while(!gvar_80610AC);
        loc_8059D9D:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B4);
    if(!gvar_80610B8) {
        goto loc_8059D7C;
    }
    else {
        goto loc_8059D9D;
    }
}

int test_3_blocks_variant_70_edges_6() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 4");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_710_edges_10() {
loc_8059DDC:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8059DF4:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    goto loc_8059DDC;
                }
            }
            while(!gvar_80610AC);
        loc_8059E15:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B4);
    if(!gvar_80610B8) {
        goto loc_8059DF4;
    }
    else {
        goto loc_8059E15;
    }
}

int test_3_blocks_variant_711_edges_10() {
loc_8059E54:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8059E6C:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                goto loc_8059E54;
            }
            else if(gvar_80610B0) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_8059E6C;
}

int test_3_blocks_variant_712_edges_10() {
loc_8059ECC:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                goto loc_8059ECC;
            }
        }
        while(!gvar_80610B0);
    loc_8059F0E:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_8059F0E;
}

int test_3_blocks_variant_713_edges_10() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_8059F5C:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
            while(1);
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_8059F5C;
    }
    else {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                break;
            }
            else if(!gvar_80610B8) {
                goto loc_8059F5C;
            }
        }
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_714_edges_10() {
loc_8059FBC:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            do {
                do {
                    →puts("block 3");
                    if(!gvar_80610A8) {
                        break loc_8059FBC;
                    }
                    else if(!gvar_80610AC) {
                        goto loc_8059FBC;
                    }
                }
                while(!gvar_80610B0);
            loc_8059FFE:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B4) {
                        goto loc_8059FBC;
                    }
                }
            }
            while(!gvar_80610B8);
            goto loc_8059FFE;
        }
    }
    while(gvar_80610A4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_715_edges_10() {
loc_805A034:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_805A04C:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                goto loc_805A034;
            }
            else {
            loc_805A06D:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B0) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B4);
    if(!gvar_80610B8) {
        goto loc_805A04C;
    }
    else {
        goto loc_805A06D;
    }
}

int test_3_blocks_variant_716_edges_10() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_805A0C4:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
            while(!gvar_80610AC);
        loc_805A0E5:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B4);
    if(!gvar_80610B8) {
        goto loc_805A0C4;
    }
    else {
        goto loc_805A0E5;
    }
}

int test_3_blocks_variant_717_edges_10() {
loc_805A124:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_805A13C:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    goto loc_805A124;
                }
            }
            while(!gvar_80610AC);
        loc_805A15D:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B4);
    if(!gvar_80610B8) {
        goto loc_805A13C;
    }
    else {
        goto loc_805A15D;
    }
}

int test_3_blocks_variant_718_edges_10() {
loc_805A19C:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_805A1B4:
        while(1) {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                goto loc_805A19C;
            }
            else if(gvar_80610B0) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805A1B4;
}

int test_3_blocks_variant_719_edges_10() {
loc_805A214:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                goto loc_805A214;
            }
        }
        while(!gvar_80610B0);
    loc_805A256:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805A256;
}

int test_3_blocks_variant_71_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        →puts("block 4");
        if(gvar_80610A8) {
            →puts("block 3");
            →puts("exit block");
            return 0;
        }
    }
    else {
        →puts("block 3");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_720_edges_10() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_805A2A4:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
            }
            while(1);
        }
        while(1);
    }
    while(!gvar_80610AC);
    if(!gvar_80610B0) {
        goto loc_805A2A4;
    }
    else {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                break;
            }
            else if(!gvar_80610B8) {
                goto loc_805A2A4;
            }
        }
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_721_edges_10() {
loc_805A304:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    do {
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610AC) {
                goto loc_805A304;
            }
        }
        while(!gvar_80610B0);
    loc_805A346:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                goto loc_805A304;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805A346;
}

int test_3_blocks_variant_722_edges_10() {
loc_805A37C:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
                else if(!gvar_80610B4) {
                    goto loc_805A37C;
                }
                else if(!gvar_80610B8) {
                    break loc_805A37C;
                }
            }
        }
        else {
        loc_805A394:
            do {
                →puts("block 3");
            }
            while(gvar_80610A8);
        }
        →puts("exit block");
        return 0;
    }
    while(!gvar_80610AC);
    goto loc_805A394;
}

int test_3_blocks_variant_723_edges_10() {
loc_805A3F4:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_805A40C:
        →puts("block 3");
        if(gvar_80610A8) {
            if(!gvar_80610AC) {
                goto loc_805A3F4;
            }
            else {
                goto loc_805A42D;
            }
        }
    }
    else {
    loc_805A42D:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
            else if(!gvar_80610B4) {
                goto loc_805A3F4;
            }
            else if(!gvar_80610B8) {
                goto loc_805A40C;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_724_edges_10() {
loc_805A46C:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_805A484:
        do {
            →puts("block 3");
        }
        while(gvar_80610A8 && !gvar_80610AC);
    }
    else {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
            else if(!gvar_80610B4) {
                goto loc_805A46C;
            }
            else if(!gvar_80610B8) {
                goto loc_805A484;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_725_edges_10() {
loc_805A4E4:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_805A4FC:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                goto loc_805A4E4;
            }
        }
        while(!gvar_80610AC);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            break;
        }
        else if(!gvar_80610B4) {
            goto loc_805A4E4;
        }
        else if(!gvar_80610B8) {
            goto loc_805A4FC;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_726_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805A57D:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        loc_805A595:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    if(!gvar_80610B8) {
        goto loc_805A57D;
    }
    else {
        goto loc_805A595;
    }
}

int test_3_blocks_variant_727_edges_10() {
loc_805A5D4:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805A5F5:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                goto loc_805A5D4;
            }
            else {
            loc_805A60D:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B0) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    }
    while(!gvar_80610B4);
    if(!gvar_80610B8) {
        goto loc_805A5F5;
    }
    else {
        goto loc_805A60D;
    }
}

int test_3_blocks_variant_728_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805A66D:
        do {
            do {
                →puts("block 3");
            }
            while(!gvar_80610AC);
        loc_805A685:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B4);
    if(!gvar_80610B8) {
        goto loc_805A66D;
    }
    else {
        goto loc_805A685;
    }
}

int test_3_blocks_variant_729_edges_10() {
loc_805A6C4:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805A6E5:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B0) {
                goto loc_805A6C4;
            }
            else {
                →puts("block 4");
                if(!gvar_80610B4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805A6E5;
}

int test_3_blocks_variant_72_edges_6() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("block 3");
    }
    else {
        do {
            →puts("block 4");
        }
        while(gvar_80610A8);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_730_edges_10() {
loc_805A73C:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                goto loc_805A73C;
            }
            else {
                →puts("block 3");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(!gvar_80610B0);
    loc_805A77E:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805A77E;
}

int test_3_blocks_variant_731_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805A7D5:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            break;
        }
        else if(!gvar_80610B8) {
            goto loc_805A7D5;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_732_edges_10() {
loc_805A82C:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
loc_805A84D:
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            break;
        }
        else if(!gvar_80610B0) {
            goto loc_805A82C;
        }
        else {
            while(1) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    goto loc_805A82C;
                }
                else if(!gvar_80610B8) {
                    continue loc_805A84D;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_733_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805A8C5:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610B0) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805A8C5;
}

int test_3_blocks_variant_734_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610B0);
    loc_805A95E:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805A95E;
}

int test_3_blocks_variant_735_edges_10() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610B0);
    loc_805A9D6:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805A9D6;
}

int test_3_blocks_variant_736_edges_10() {
loc_805AA0C:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610B0);
    loc_805AA4E:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                goto loc_805AA0C;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805AA4E;
}

int test_3_blocks_variant_737_edges_10() {
loc_805AA84:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805AAA5:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                goto loc_805AA84;
            }
            else if(gvar_80610B0) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805AAA5;
}

int test_3_blocks_variant_738_edges_10() {
loc_805AAFC:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                goto loc_805AAFC;
            }
        }
        while(!gvar_80610B0);
    loc_805AB3E:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805AB3E;
}

int test_3_blocks_variant_739_edges_10() {
loc_805AB74:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                goto loc_805AB74;
            }
        }
        while(!gvar_80610B0);
    loc_805ABB6:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805ABB6;
}

int test_3_blocks_variant_73_edges_6() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            →puts("block 4");
        }
    }
    while(!gvar_80610A8);
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_740_edges_10() {
loc_805ABEC:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                goto loc_805ABEC;
            }
        }
        while(!gvar_80610B0);
    loc_805AC2E:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                goto loc_805ABEC;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805AC2E;
}

int test_3_blocks_variant_741_edges_10() {
loc_805AC64:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B0) {
            goto loc_805AC64;
        }
    }
    while(!gvar_80610B4);
    →puts("block 4");
    if(gvar_80610B8) {
        goto loc_805AC64;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_742_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805ACFD:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_805ACFD;
    }
    else {
        →puts("block 4");
        if(gvar_80610B8) {
            goto loc_805ACFD;
        }
        else {
            →puts("exit block");
            return 0;
        }
    }
}

int test_3_blocks_variant_743_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805AD75:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_805AD75;
    }
    else {
        do {
            →puts("block 4");
        }
        while(gvar_80610B8);
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_744_edges_10() {
loc_805ADCC:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805ADED:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B0) {
                goto loc_805ADCC;
            }
            else if(gvar_80610B4) {
                →puts("block 4");
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805ADED;
}

int test_3_blocks_variant_745_edges_10() {
loc_805AE44:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B0) {
            goto loc_805AE44;
        }
    }
    while(!gvar_80610B4);
    while(1) {
        →puts("block 4");
        if(!gvar_80610B8) {
            goto loc_805AE44;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_746_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805AEDD:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_805AEDD;
    }
    else {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B8) {
                goto loc_805AEDD;
            }
        }
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_747_edges_10() {
loc_805AF34:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                goto loc_805AF55;
            }
        loc_805AF6D:
            do {
                →puts("block 4");
                if(gvar_80610B0) {
                    if(gvar_80610B4) {
                        if(gvar_80610B8) {
                            goto loc_805AF6D;
                        }
                        else {
                        loc_805AF55:
                            →puts("block 3");
                            if(!gvar_80610AC) {
                                break loc_805AF34;
                            }
                        }
                    }
                    continue loc_805AF34;
                }
            }
            while(gvar_80610B0);
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_748_edges_10() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_805AFCD;
        }
        else {
        loc_805AFE5:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    if(gvar_80610B8) {
        goto loc_805AFE5;
    }
    else {
    loc_805AFCD:
        do {
            →puts("block 3");
        }
        while(gvar_80610AC);
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_749_edges_10() {
loc_805B024:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_805B05D;
    }
    else {
    loc_805B045:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
loc_805B05D:
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B4) {
            goto loc_805B024;
        }
        else if(!gvar_80610B8) {
            goto loc_805B045;
        }
    }
}

int test_3_blocks_variant_74_edges_6() {
loc_804A21B:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            while(1) {
                →puts("block 4");
                if(!gvar_80610A8) {
                    continue loc_804A21B;
                }
            }
        }
    }
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_750_edges_10() {
loc_805B09C:
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(!gvar_80610A8) {
                goto loc_805B0BD;
            }
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    break loc_805B09C;
                }
                else if(!gvar_80610B4) {
                    continue loc_805B09C;
                }
                else if(!gvar_80610B8) {
                loc_805B0BD:
                    while(1) {
                        →puts("block 3");
                        if(!gvar_80610AC) {
                            continue loc_805B09C;
                        }
                    }
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_751_edges_10() {
loc_805B114:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_805B14D;
    }
    else {
    loc_805B135:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        goto loc_805B114;
    }
    else {
    loc_805B14D:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B4) {
                goto loc_805B114;
            }
            else if(!gvar_80610B8) {
                goto loc_805B135;
            }
        }
    }
}

int test_3_blocks_variant_752_edges_10() {
loc_805B18C:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_805B1AD:
        do {
            →puts("block 3");
        }
        while(!gvar_80610AC);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B4) {
            goto loc_805B18C;
        }
        else if(!gvar_80610B8) {
            goto loc_805B1AD;
        }
    }
}

int test_3_blocks_variant_753_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                break;
            }
            else {
                →puts("block 4");
                if(!gvar_80610B4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(!gvar_80610B8);
    loc_805B225:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_805B225;
}

int test_3_blocks_variant_754_edges_10() {
loc_805B27C:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        if(gvar_80610A8) {
            break;
        }
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B0) {
                goto loc_805B27C;
            }
            else {
                continue;
            loc_805B2BE:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B4) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805B2BE;
}

int test_3_blocks_variant_755_edges_10() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        if(!gvar_80610A8) {
            break;
        }
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B8) {
            loc_805B315:
                while(1) {
                    →puts("block 3");
                    if(!gvar_80610AC) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_805B315;
}

int test_3_blocks_variant_756_edges_10() {
loc_805B36C:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        if(gvar_80610A8) {
            do {
                →puts("block 4");
                if(!gvar_80610B4) {
                    goto loc_805B36C;
                }
            }
            while(gvar_80610B8);
        }
    loc_805B38D:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_805B38D;
}

int test_3_blocks_variant_757_edges_10() {
loc_805B3E4:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_805B426;
    }
    else {
    loc_805B405:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B0) {
        goto loc_805B3E4;
    }
    else {
    loc_805B426:
        →puts("block 4");
        if(!gvar_80610B4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B8) {
            goto loc_805B3E4;
        }
        else {
            goto loc_805B405;
        }
    }
}

int test_3_blocks_variant_758_edges_10() {
loc_805B45C:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_805B49E;
    }
    else {
    loc_805B47D:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B0) {
        goto loc_805B45C;
    }
    else {
    loc_805B49E:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B8) {
                goto loc_805B47D;
            }
        }
    }
}

int test_3_blocks_variant_759_edges_10() {
loc_805B4D4:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_805B516;
    }
    else {
    loc_805B4F5:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B0) {
        goto loc_805B4D4;
    }
    else {
    loc_805B516:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                goto loc_805B4D4;
            }
            else if(!gvar_80610B8) {
                goto loc_805B4F5;
            }
        }
    }
}

int test_3_blocks_variant_75_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        do {
            →puts("block 4");
        }
        while(gvar_80610A8);
    }
    →puts("block 3");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_760_edges_10() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_805B56D:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610B0);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B8) {
            goto loc_805B56D;
        }
    }
}

int test_3_blocks_variant_761_edges_10() {
loc_805B5C4:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_805B5E5:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610B0);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_805B5C4;
        }
        else if(!gvar_80610B8) {
            goto loc_805B5E5;
        }
    }
}

int test_3_blocks_variant_762_edges_10() {
loc_805B63C:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    if(!gvar_80610A8) {
    loc_805B65D:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                goto loc_805B63C;
            }
        }
        while(!gvar_80610B0);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_805B63C;
        }
        else if(!gvar_80610B8) {
            goto loc_805B65D;
        }
    }
}

int test_3_blocks_variant_763_edges_10() {
loc_805B6B4:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
        goto loc_805B6D5;
    }
loc_805B6ED:
    do {
        →puts("block 4");
        if(gvar_80610B0) {
            if(gvar_80610B4) {
                if(gvar_80610B8) {
                    goto loc_805B6ED;
                }
                else {
                loc_805B6D5:
                    →puts("block 3");
                    if(!gvar_80610AC) {
                        break;
                    }
                }
            }
            goto loc_805B6B4;
        }
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_764_edges_10() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(!gvar_80610A8) {
            goto loc_805B74D;
        }
        else {
        loc_805B765:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    if(gvar_80610B8) {
        goto loc_805B765;
    }
    else {
    loc_805B74D:
        do {
            →puts("block 3");
        }
        while(gvar_80610AC);
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_765_edges_10() {
loc_805B7A4:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805B7C5:
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            break;
        }
        else if(!gvar_80610B4) {
            goto loc_805B7A4;
        }
        else if(!gvar_80610B8) {
            goto loc_805B7C5;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_766_edges_10() {
loc_805B81C:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(gvar_80610A8) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                break;
            }
            else if(!gvar_80610B4) {
                goto loc_805B81C;
            }
            else if(!gvar_80610B8) {
                goto loc_805B83D;
            }
        }
        →puts("exit block");
        return 0;
    }
loc_805B83D:
    while(1) {
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_805B81C;
        }
    }
}

int test_3_blocks_variant_767_edges_10() {
loc_805B894:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805B8B5:
        →puts("block 3");
        if(!gvar_80610AC) {
            goto loc_805B894;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            break;
        }
        else if(!gvar_80610B4) {
            goto loc_805B894;
        }
        else if(!gvar_80610B8) {
            goto loc_805B8B5;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_768_edges_10() {
loc_805B90C:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805B92D:
        do {
            →puts("block 3");
        }
        while(!gvar_80610AC);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            break;
        }
        else if(!gvar_80610B4) {
            goto loc_805B90C;
        }
        else if(!gvar_80610B8) {
            goto loc_805B92D;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_769_edges_10() {
loc_805B984:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                goto loc_805B984;
            }
            else if(!gvar_80610A8) {
                break;
            }
            else {
                →puts("block 4");
                if(!gvar_80610B4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(!gvar_80610B8);
    loc_805B9A5:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_805B9A5;
}

int test_3_blocks_variant_76_edges_6() {
loc_804A2C3:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("block 3");
            goto loc_804A2C3;
        }
        else {
            →puts("block 4");
        }
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_770_edges_10() {
loc_805B9FC:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(gvar_80610A8) {
            break;
        }
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B0) {
                goto loc_805B9FC;
            }
            else {
                continue;
            loc_805BA3E:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B4) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805BA3E;
}

int test_3_blocks_variant_771_edges_10() {
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(!gvar_80610A8) {
            break;
        }
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B8) {
            loc_805BA95:
                while(1) {
                    →puts("block 3");
                    if(!gvar_80610AC) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_805BA95;
}

int test_3_blocks_variant_772_edges_10() {
loc_805BAEC:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(gvar_80610A8) {
            do {
                →puts("block 4");
                if(!gvar_80610B4) {
                    goto loc_805BAEC;
                }
            }
            while(gvar_80610B8);
        }
    loc_805BB0D:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_805BB0D;
}

int test_3_blocks_variant_773_edges_10() {
loc_805BB64:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805BB85:
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B0) {
            goto loc_805BB64;
        }
    }
    →puts("block 4");
    if(!gvar_80610B4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B8) {
        goto loc_805BB64;
    }
    else {
        goto loc_805BB85;
    }
}

int test_3_blocks_variant_774_edges_10() {
loc_805BBDC:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805BBFD:
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B0) {
            goto loc_805BBDC;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            break;
        }
        else if(!gvar_80610B8) {
            goto loc_805BBFD;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_775_edges_10() {
loc_805BC54:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805BC75:
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B0) {
            goto loc_805BC54;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_805BC54;
        }
        else if(!gvar_80610B8) {
            goto loc_805BC75;
        }
    }
}

int test_3_blocks_variant_776_edges_10() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805BCED:
        do {
            →puts("block 3");
        }
        while(gvar_80610AC && !gvar_80610B0);
    }
    else {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                break;
            }
            else if(!gvar_80610B8) {
                goto loc_805BCED;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_777_edges_10() {
loc_805BD44:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805BD65:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610B0);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_805BD44;
        }
        else if(!gvar_80610B8) {
            goto loc_805BD65;
        }
    }
}

int test_3_blocks_variant_778_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(!gvar_80610AC) {
            →puts("block 3");
            →puts("exit block");
            return 0;
        }
    loc_805BDF5:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    if(gvar_80610B8) {
        goto loc_805BDF5;
    }
    else {
        →puts("block 3");
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_779_edges_10() {
loc_805BE34:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        →puts("block 3");
        goto loc_805BE34;
    }
    else {
    loc_805BE6D:
        do {
            →puts("block 4");
            if(gvar_80610B0) {
                if(gvar_80610B4) {
                    if(gvar_80610B8) {
                        goto loc_805BE6D;
                    }
                    else {
                        →puts("block 3");
                    }
                }
                goto loc_805BE34;
            }
        }
        while(gvar_80610B0);
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_77_edges_6() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            goto loc_804A32F;
        }
        else {
            →puts("block 4");
        }
        if(!gvar_80610A8) {
            break;
        }
        else {
        loc_804A32F:
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_780_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(!gvar_80610AC) {
            goto loc_805BED6;
        }
        else {
        loc_805BEE5:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B0) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B4);
    if(gvar_80610B8) {
        goto loc_805BEE5;
    }
    else {
    loc_805BED6:
        while(1) {
            →puts("block 3");
        }
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_781_edges_10() {
loc_805BF24:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805BF4E:
        →puts("block 3");
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B4) {
            goto loc_805BF24;
        }
        else if(!gvar_80610B8) {
            goto loc_805BF4E;
        }
    }
}

int test_3_blocks_variant_782_edges_10() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            if(!gvar_80610AC) {
                goto loc_805BFC6;
            }
            else {
                →puts("block 4");
            }
            if(!gvar_80610B4) {
                break;
            }
            else if(gvar_80610B8) {
            loc_805BFC6:
                →puts("block 3");
                if(!gvar_80610B0) {
                    break;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_783_edges_10() {
    do {
        while(1) {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(gvar_80610A8) {
                if(!gvar_80610AC) {
                    →puts("block 3");
                    if(!gvar_80610B0) {
                        →puts("exit block");
                        return 0;
                    }
                }
                else {
                loc_805C056:
                    while(1) {
                        →puts("block 4");
                        if(!gvar_80610B4) {
                            →puts("exit block");
                            return 0;
                        }
                    }
                }
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805C056;
}

int test_3_blocks_variant_784_edges_10() {
loc_805C08C:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_805C0B6;
    }
loc_805C0CE:
    do {
        →puts("block 4");
        if(gvar_80610B4) {
            if(gvar_80610B8) {
                goto loc_805C0CE;
            }
            else {
            loc_805C0B6:
                →puts("block 3");
                if(!gvar_80610B0) {
                    break;
                }
                else {
                    goto loc_805C08C;
                }
            }
        }
    }
    while(gvar_80610B4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_785_edges_10() {
loc_805C104:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        do {
            →puts("block 4");
            if(!gvar_80610B4) {
                goto loc_805C104;
            }
        }
        while(gvar_80610B8);
    }
    →puts("block 3");
    if(gvar_80610B0) {
        goto loc_805C104;
    }
    else {
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_786_edges_10() {
loc_805C17C:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_805C17C;
        }
        else if(!gvar_80610AC) {
            break;
        }
        else {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B8);
    do {
        →puts("block 3");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_787_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(gvar_80610AC) {
            break;
        }
        while(1) {
            →puts("block 3");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
            continue;
        loc_805C236:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805C236;
}

int test_3_blocks_variant_788_edges_10() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                break;
            }
            else if(!gvar_80610B8) {
                goto loc_805C296;
            }
        }
    }
    else {
    loc_805C296:
        do {
            →puts("block 3");
        }
        while(gvar_80610B0);
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_789_edges_10() {
loc_805C2E4:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(gvar_80610AC) {
        do {
            →puts("block 4");
            if(!gvar_80610B4) {
                goto loc_805C2E4;
            }
        }
        while(gvar_80610B8);
    }
    do {
        →puts("block 3");
    }
    while(gvar_80610B0);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_78_edges_6() {
    while(1) {
        →puts("block 2");
        if(gvar_80610A4) {
            break;
        }
        else {
            →puts("block 3");
        }
    }
    do {
        →puts("block 4");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_790_edges_10() {
loc_805C35C:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805C386:
        →puts("block 3");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
    }
    →puts("block 4");
    if(!gvar_80610B4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B8) {
        goto loc_805C35C;
    }
    else {
        goto loc_805C386;
    }
}

int test_3_blocks_variant_791_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(!gvar_80610AC) {
            →puts("block 3");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    loc_805C416:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805C416;
}

int test_3_blocks_variant_792_edges_10() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805C476:
        →puts("block 3");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B8) {
            goto loc_805C476;
        }
    }
}

int test_3_blocks_variant_793_edges_10() {
loc_805C4C4:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805C4EE:
        →puts("block 3");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_805C4C4;
        }
        else if(!gvar_80610B8) {
            goto loc_805C4EE;
        }
    }
}

int test_3_blocks_variant_794_edges_10() {
loc_805C53C:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610A8) {
            goto loc_805C53C;
        }
        else if(!gvar_80610AC) {
        loc_805C566:
            while(1) {
                →puts("block 3");
                if(!gvar_80610B0) {
                    goto loc_805C53C;
                }
            }
            return;
        }
        else {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805C566;
}

int test_3_blocks_variant_795_edges_10() {
loc_805C5B4:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(!gvar_80610AC) {
            while(1) {
                →puts("block 3");
                if(!gvar_80610B0) {
                    goto loc_805C5B4;
                }
            }
        }
    loc_805C5F6:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805C5F6;
}

int test_3_blocks_variant_796_edges_10() {
loc_805C62C:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_805C656;
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            break;
        }
        else if(!gvar_80610B8) {
        loc_805C656:
            while(1) {
                →puts("block 3");
                if(!gvar_80610B0) {
                    goto loc_805C62C;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_797_edges_10() {
loc_805C6A4:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_805C6CE;
    }
    else {
        do {
            →puts("block 4");
            if(!gvar_80610B4) {
                goto loc_805C6A4;
            }
        }
        while(gvar_80610B8);
    loc_805C6CE:
        while(1) {
            →puts("block 3");
            if(!gvar_80610B0) {
                goto loc_805C6A4;
            }
        }
    }
}

int test_3_blocks_variant_798_edges_10() {
loc_805C71C:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805C746:
        →puts("block 3");
        if(!gvar_80610B0) {
            goto loc_805C71C;
        }
    }
    →puts("block 4");
    if(!gvar_80610B4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B8) {
        goto loc_805C71C;
    }
    else {
        goto loc_805C746;
    }
}

int test_3_blocks_variant_799_edges_10() {
loc_805C794:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                goto loc_805C794;
            }
            else if(gvar_80610AC) {
                break;
            }
            else {
                →puts("block 3");
            }
        }
        while(!gvar_80610B0);
    loc_805C7D6:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805C7D6;
}

int test_3_blocks_variant_79_edges_6() {
loc_804A3BF:
    do {
        →puts("block 2");
        if(gvar_80610A4) {
            →puts("block 4");
            if(gvar_80610A8) {
                goto loc_804A3BF;
            }
            else {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(gvar_80610A4);
    while(1) {
        →puts("block 3");
    }
}

int test_3_blocks_variant_7_edges_5() {
    →puts("block 2");
    →puts("block 3");
    if(gvar_80610A4) {
        while(1) {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_800_edges_10() {
loc_805C80C:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805C836:
        →puts("block 3");
        if(!gvar_80610B0) {
            goto loc_805C80C;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B8) {
            goto loc_805C836;
        }
    }
}

int test_3_blocks_variant_801_edges_10() {
loc_805C884:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805C8AE:
        →puts("block 3");
        if(!gvar_80610B0) {
            goto loc_805C884;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_805C884;
        }
        else if(!gvar_80610B8) {
            goto loc_805C8AE;
        }
    }
}

int test_3_blocks_variant_802_edges_10() {
loc_805C8FC:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805C926:
        do {
            →puts("block 3");
        }
        while(!gvar_80610B0);
    }
    →puts("block 4");
    if(!gvar_80610B4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B8) {
        goto loc_805C8FC;
    }
    else {
        goto loc_805C926;
    }
}

int test_3_blocks_variant_803_edges_10() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(!gvar_80610AC) {
            do {
                →puts("block 3");
            }
            while(!gvar_80610B0);
        }
    loc_805C9B6:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B8);
    goto loc_805C9B6;
}

int test_3_blocks_variant_804_edges_10() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805CA16:
        do {
            →puts("block 3");
        }
        while(!gvar_80610B0);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B8) {
            goto loc_805CA16;
        }
    }
}

int test_3_blocks_variant_805_edges_10() {
loc_805CA64:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805CA8E:
        do {
            →puts("block 3");
        }
        while(!gvar_80610B0);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            goto loc_805CA64;
        }
        else if(!gvar_80610B8) {
            goto loc_805CA8E;
        }
    }
}

int test_3_blocks_variant_806_edges_11() {
loc_805CADC:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    loc_805CAF4:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
                else if(!gvar_80610AC) {
                    goto loc_805CADC;
                }
            }
            while(!gvar_80610B0);
        loc_805CB1E:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B8);
    if(!gvar_80610BC) {
        goto loc_805CAF4;
    }
    else {
        goto loc_805CB1E;
    }
}

int test_3_blocks_variant_807_edges_11() {
loc_805CB5D:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
    loc_805CB75:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610A8) {
                    →puts("exit block");
                    return 0;
                }
                else if(!gvar_80610AC) {
                    goto loc_805CB5D;
                }
            }
            while(!gvar_80610B0);
        loc_805CB9F:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B8);
    if(!gvar_80610BC) {
        goto loc_805CB75;
    }
    else {
        goto loc_805CB9F;
    }
}

int test_3_blocks_variant_808_edges_11() {
loc_805CBDE:
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_805CBF6:
        do {
            →puts("block 3");
            if(!gvar_80610A8) {
                break;
            }
            else if(!gvar_80610AC) {
                goto loc_805CBDE;
            }
        }
        while(!gvar_80610B0);
    }
    else {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                break;
            }
            else if(!gvar_80610B8) {
                goto loc_805CBDE;
            }
            else if(!gvar_80610BC) {
                goto loc_805CBF6;
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_809_edges_11() {
loc_805CC5F:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805CC80:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B0) {
                goto loc_805CC5F;
            }
            else {
            loc_805CCA1:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B4) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    }
    while(!gvar_80610B8);
    if(!gvar_80610BC) {
        goto loc_805CC80;
    }
    else {
        goto loc_805CCA1;
    }
}

int test_3_blocks_variant_80_edges_6() {
    →puts("block 2");
    if(!gvar_80610A4) {
        goto loc_804A42B;
    }
    else {
        →puts("block 4");
    }
    if(gvar_80610A8) {
    loc_804A42B:
        while(1) {
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_810_edges_11() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805CD01:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
            while(!gvar_80610B0);
        loc_805CD22:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B8);
    if(!gvar_80610BC) {
        goto loc_805CD01;
    }
    else {
        goto loc_805CD22;
    }
}

int test_3_blocks_variant_811_edges_11() {
loc_805CD61:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805CD82:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610AC) {
                    goto loc_805CD61;
                }
            }
            while(!gvar_80610B0);
        loc_805CDA3:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610B8);
    if(!gvar_80610BC) {
        goto loc_805CD82;
    }
    else {
        goto loc_805CDA3;
    }
}

int test_3_blocks_variant_812_edges_11() {
loc_805CDE2:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805CE03:
        while(1) {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B0) {
                goto loc_805CDE2;
            }
            else if(gvar_80610B4) {
                →puts("block 4");
                if(!gvar_80610B8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610BC);
    goto loc_805CE03;
}

int test_3_blocks_variant_813_edges_11() {
loc_805CE63:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B0) {
                goto loc_805CE63;
            }
        }
        while(!gvar_80610B4);
    loc_805CEAE:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B8) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610BC);
    goto loc_805CEAE;
}

int test_3_blocks_variant_814_edges_11() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805CF05:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
            }
            while(1);
        }
        while(1);
    }
    while(!gvar_80610B0);
    if(!gvar_80610B4) {
        goto loc_805CF05;
    }
    else {
        while(1) {
            →puts("block 4");
            if(!gvar_80610B8) {
                break;
            }
            else if(!gvar_80610BC) {
                goto loc_805CF05;
            }
        }
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_815_edges_11() {
loc_805CF65:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    do {
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B0) {
                goto loc_805CF65;
            }
        }
        while(!gvar_80610B4);
    loc_805CFB0:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B8) {
                goto loc_805CF65;
            }
        }
    }
    while(!gvar_80610BC);
    goto loc_805CFB0;
}

int test_3_blocks_variant_816_edges_11() {
loc_805CFE6:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
        if(!gvar_80610A8) {
            break;
        }
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B8) {
                goto loc_805CFE6;
            }
            else if(!gvar_80610BC) {
            loc_805D007:
                while(1) {
                    →puts("block 3");
                    if(!gvar_80610AC) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_805D007;
}

int test_3_blocks_variant_817_edges_11() {
loc_805D067:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(gvar_80610A8) {
        goto loc_805D0A9;
    }
    else {
    loc_805D088:
        →puts("block 3");
    }
    if(!gvar_80610AC) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610B0) {
        goto loc_805D067;
    }
    else {
    loc_805D0A9:
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B8) {
                goto loc_805D067;
            }
            else if(!gvar_80610BC) {
                goto loc_805D088;
            }
        }
    }
}

int test_3_blocks_variant_818_edges_11() {
loc_805D0E8:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_805D109:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610B0);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B8) {
            goto loc_805D0E8;
        }
        else if(!gvar_80610BC) {
            goto loc_805D109;
        }
    }
}

int test_3_blocks_variant_819_edges_11() {
loc_805D169:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_805D18A:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                goto loc_805D169;
            }
        }
        while(!gvar_80610B0);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B8) {
            goto loc_805D169;
        }
        else if(!gvar_80610BC) {
            goto loc_805D18A;
        }
    }
}

int test_3_blocks_variant_81_edges_6() {
    →puts("block 2");
    if(!gvar_80610A4) {
        while(1) {
            →puts("block 3");
        }
    }
    do {
        →puts("block 4");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_820_edges_11() {
loc_805D1EA:
    do {
        do {
            →puts("block 2");
        }
        while(!gvar_80610A4);
        if(!gvar_80610A8) {
            break;
        }
        while(1) {
            →puts("block 4");
            if(!gvar_80610B4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B8) {
                goto loc_805D1EA;
            }
            else if(!gvar_80610BC) {
            loc_805D20B:
                while(1) {
                    →puts("block 3");
                    if(!gvar_80610AC) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    }
    while(!gvar_80610B0);
    goto loc_805D20B;
}

int test_3_blocks_variant_821_edges_11() {
loc_805D26B:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805D28C:
        →puts("block 3");
        if(!gvar_80610AC) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B0) {
            goto loc_805D26B;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            break;
        }
        else if(!gvar_80610B8) {
            goto loc_805D26B;
        }
        else if(!gvar_80610BC) {
            goto loc_805D28C;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_822_edges_11() {
loc_805D2EC:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805D30D:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610B0);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            break;
        }
        else if(!gvar_80610B8) {
            goto loc_805D2EC;
        }
        else if(!gvar_80610BC) {
            goto loc_805D30D;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_823_edges_11() {
loc_805D36D:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805D38E:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                goto loc_805D36D;
            }
        }
        while(!gvar_80610B0);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            break;
        }
        else if(!gvar_80610B8) {
            goto loc_805D36D;
        }
        else if(!gvar_80610BC) {
            goto loc_805D38E;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_824_edges_11() {
loc_805D3EE:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_805D418;
    }
loc_805D430:
    do {
        →puts("block 4");
        if(gvar_80610B4) {
            if(gvar_80610B8) {
                if(gvar_80610BC) {
                    goto loc_805D430;
                }
                else {
                loc_805D418:
                    →puts("block 3");
                    if(!gvar_80610B0) {
                        break;
                    }
                }
            }
            goto loc_805D3EE;
        }
    }
    while(gvar_80610B4);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_825_edges_11() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(!gvar_80610AC) {
            goto loc_805D499;
        }
        else {
        loc_805D4B1:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B4) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
    }
    while(!gvar_80610B8);
    if(gvar_80610BC) {
        goto loc_805D4B1;
    }
    else {
    loc_805D499:
        do {
            →puts("block 3");
        }
        while(gvar_80610B0);
        →puts("exit block");
        return 0;
    }
}

int test_3_blocks_variant_826_edges_11() {
loc_805D4F0:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805D51A:
        →puts("block 3");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B8) {
            goto loc_805D4F0;
        }
        else if(!gvar_80610BC) {
            goto loc_805D51A;
        }
    }
}

int test_3_blocks_variant_827_edges_11() {
loc_805D571:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
        goto loc_805D59B;
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            break;
        }
        else if(!gvar_80610B8) {
            goto loc_805D571;
        }
        else if(!gvar_80610BC) {
        loc_805D59B:
            while(1) {
                →puts("block 3");
                if(!gvar_80610B0) {
                    goto loc_805D571;
                }
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_828_edges_11() {
loc_805D5F2:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805D61C:
        →puts("block 3");
        if(!gvar_80610B0) {
            goto loc_805D5F2;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B8) {
            goto loc_805D5F2;
        }
        else if(!gvar_80610BC) {
            goto loc_805D61C;
        }
    }
}

int test_3_blocks_variant_829_edges_11() {
loc_805D673:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805D69D:
        do {
            →puts("block 3");
        }
        while(!gvar_80610B0);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B4) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B8) {
            goto loc_805D673;
        }
        else if(!gvar_80610BC) {
            goto loc_805D69D;
        }
    }
}

int test_3_blocks_variant_82_edges_6() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("block 3");
        }
        →puts("block 4");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_830_edges_11() {
loc_805D6F4:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610A8) {
                goto loc_805D6F4;
            }
            else if(!gvar_80610AC) {
                break;
            }
            else {
                →puts("block 4");
                if(!gvar_80610B8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(!gvar_80610BC);
    loc_805D71E:
        while(1) {
            →puts("block 3");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_805D71E;
}

int test_3_blocks_variant_831_edges_11() {
loc_805D775:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(gvar_80610AC) {
            break;
        }
        while(1) {
            →puts("block 3");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B4) {
                goto loc_805D775;
            }
            else {
                continue;
            loc_805D7C0:
                while(1) {
                    →puts("block 4");
                    if(!gvar_80610B8) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    }
    while(!gvar_80610BC);
    goto loc_805D7C0;
}

int test_3_blocks_variant_832_edges_11() {
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(!gvar_80610AC) {
            break;
        }
        while(1) {
            →puts("block 4");
            if(!gvar_80610B8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610BC) {
            loc_805D820:
                while(1) {
                    →puts("block 3");
                    if(!gvar_80610B0) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_805D820;
}

int test_3_blocks_variant_833_edges_11() {
loc_805D877:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(gvar_80610AC) {
            do {
                →puts("block 4");
                if(!gvar_80610B8) {
                    goto loc_805D877;
                }
            }
            while(gvar_80610BC);
        }
    loc_805D8A1:
        while(1) {
            →puts("block 3");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_805D8A1;
}

int test_3_blocks_variant_834_edges_11() {
loc_805D8F8:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805D922:
        →puts("block 3");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B4) {
            goto loc_805D8F8;
        }
    }
    →puts("block 4");
    if(!gvar_80610B8) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610BC) {
        goto loc_805D8F8;
    }
    else {
        goto loc_805D922;
    }
}

int test_3_blocks_variant_835_edges_11() {
loc_805D979:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805D9A3:
        →puts("block 3");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B4) {
            goto loc_805D979;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B8) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610BC) {
            goto loc_805D9A3;
        }
    }
}

int test_3_blocks_variant_836_edges_11() {
loc_805D9FA:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805DA24:
        →puts("block 3");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B4) {
            goto loc_805D9FA;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B8) {
            goto loc_805D9FA;
        }
        else if(!gvar_80610BC) {
            goto loc_805DA24;
        }
    }
}

int test_3_blocks_variant_837_edges_11() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805DAA5:
        do {
            →puts("block 3");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610B4);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B8) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610BC) {
            goto loc_805DAA5;
        }
    }
}

int test_3_blocks_variant_838_edges_11() {
loc_805DAFC:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805DB26:
        do {
            →puts("block 3");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610B4);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B8) {
            goto loc_805DAFC;
        }
        else if(!gvar_80610BC) {
            goto loc_805DB26;
        }
    }
}

int test_3_blocks_variant_839_edges_11() {
loc_805DB7D:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805DBA7:
        do {
            →puts("block 3");
            if(!gvar_80610B0) {
                goto loc_805DB7D;
            }
        }
        while(!gvar_80610B4);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B8) {
            goto loc_805DB7D;
        }
        else if(!gvar_80610BC) {
            goto loc_805DBA7;
        }
    }
}

int test_3_blocks_variant_83_edges_6() {
    →puts("block 2");
    if(!gvar_80610A4) {
    loc_804A527:
        →puts("block 3");
    }
    →puts("block 4");
    if(!gvar_80610A8) {
        →puts("exit block");
        return 0;
    }
    goto loc_804A527;
}

int test_3_blocks_variant_840_edges_12() {
loc_805DBFE:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
    loc_805DC1F:
        do {
            do {
                →puts("block 3");
                if(!gvar_80610AC) {
                    →puts("exit block");
                    return 0;
                }
                else if(!gvar_80610B0) {
                    goto loc_805DBFE;
                }
            }
            while(!gvar_80610B4);
        loc_805DC49:
            while(1) {
                →puts("block 4");
                if(!gvar_80610B8) {
                    →puts("exit block");
                    return 0;
                }
            }
        }
        while(1);
    }
    while(!gvar_80610BC);
    if(!gvar_80610C0) {
        goto loc_805DC1F;
    }
    else {
        goto loc_805DC49;
    }
}

int test_3_blocks_variant_841_edges_12() {
loc_805DC88:
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_805DCA9:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B0) {
                goto loc_805DC88;
            }
        }
        while(!gvar_80610B4);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B8) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610BC) {
            goto loc_805DC88;
        }
        else if(!gvar_80610C0) {
            goto loc_805DCA9;
        }
    }
}

int test_3_blocks_variant_842_edges_12() {
loc_805DD12:
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
    loc_805DD33:
        do {
            →puts("block 3");
            if(!gvar_80610AC) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B0) {
                goto loc_805DD12;
            }
        }
        while(!gvar_80610B4);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B8) {
            break;
        }
        else if(!gvar_80610BC) {
            goto loc_805DD12;
        }
        else if(!gvar_80610C0) {
            goto loc_805DD33;
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_843_edges_12() {
loc_805DD9C:
    do {
        do {
            →puts("block 2");
            if(!gvar_80610A4) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610A8);
        if(!gvar_80610AC) {
            break;
        }
        while(1) {
            →puts("block 4");
            if(!gvar_80610B8) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610BC) {
                goto loc_805DD9C;
            }
            else if(!gvar_80610C0) {
            loc_805DDC6:
                while(1) {
                    →puts("block 3");
                    if(!gvar_80610B0) {
                        →puts("exit block");
                        return 0;
                    }
                }
            }
        }
    }
    while(!gvar_80610B4);
    goto loc_805DDC6;
}

int test_3_blocks_variant_844_edges_12() {
loc_805DE26:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805DE50:
        →puts("block 3");
        if(!gvar_80610B0) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610B4) {
            goto loc_805DE26;
        }
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B8) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610BC) {
            goto loc_805DE26;
        }
        else if(!gvar_80610C0) {
            goto loc_805DE50;
        }
    }
}

int test_3_blocks_variant_845_edges_12() {
loc_805DEB0:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805DEDA:
        do {
            →puts("block 3");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
        }
        while(!gvar_80610B4);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B8) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610BC) {
            goto loc_805DEB0;
        }
        else if(!gvar_80610C0) {
            goto loc_805DEDA;
        }
    }
}

int test_3_blocks_variant_846_edges_12() {
loc_805DF3A:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805DF64:
        do {
            →puts("block 3");
            if(!gvar_80610B0) {
                goto loc_805DF3A;
            }
        }
        while(!gvar_80610B4);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610B8) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610BC) {
            goto loc_805DF3A;
        }
        else if(!gvar_80610C0) {
            goto loc_805DF64;
        }
    }
}

int test_3_blocks_variant_847_edges_13() {
loc_805DFC4:
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    if(!gvar_80610AC) {
    loc_805DFEE:
        do {
            →puts("block 3");
            if(!gvar_80610B0) {
                →puts("exit block");
                return 0;
            }
            else if(!gvar_80610B4) {
                goto loc_805DFC4;
            }
        }
        while(!gvar_80610B8);
    }
    while(1) {
        →puts("block 4");
        if(!gvar_80610BC) {
            →puts("exit block");
            return 0;
        }
        else if(!gvar_80610C0) {
            goto loc_805DFC4;
        }
        else if(!gvar_80610C4) {
            goto loc_805DFEE;
        }
    }
}

int test_3_blocks_variant_84_edges_6() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("block 3");
    }
    do {
        →puts("block 4");
    }
    while(gvar_80610A8);
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_85_edges_6() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    →puts("block 3");
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_86_edges_6() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            →puts("block 3");
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_87_edges_6() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    while(1) {
        →puts("block 3");
        →puts("block 4");
    }
}

int test_3_blocks_variant_88_edges_6() {
    do {
        →puts("block 2");
        if(!gvar_80610A4) {
            →puts("exit block");
            return 0;
        }
    }
    while(!gvar_80610A8);
    →puts("block 3");
    while(1) {
        →puts("block 4");
    }
}

int test_3_blocks_variant_89_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(!gvar_80610A8) {
            →puts("block 3");
        }
        else {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_8_edges_5() {
    do {
        →puts("block 2");
        →puts("block 3");
    }
    while(!gvar_80610A4);
    →puts("block 4");
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_90_edges_6() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(!gvar_80610A8) {
            →puts("block 3");
            break;
        }
        else {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_91_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(gvar_80610A8) {
            →puts("block 4");
        }
        →puts("block 3");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_92_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(!gvar_80610A8) {
            →puts("block 3");
        }
        else {
            while(1) {
                →puts("block 4");
            }
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_93_edges_6() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(!gvar_80610A8) {
            →puts("block 3");
        }
        else {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_94_edges_6() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else {
            if(gvar_80610A8) {
                →puts("block 4");
            }
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_95_edges_6() {
    while(1) {
        →puts("block 2");
        if(!gvar_80610A4) {
            break;
        }
        else if(gvar_80610A8) {
            while(1) {
                →puts("block 4");
            }
            return;
        }
        else {
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_96_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(gvar_80610A8) {
            →puts("block 4");
        }
        while(1) {
            →puts("block 3");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_97_edges_6() {
    →puts("block 2");
    if(gvar_80610A4) {
        if(!gvar_80610A8) {
            while(1) {
                →puts("block 3");
            }
        }
        while(1) {
            →puts("block 4");
        }
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_98_edges_6() {
    →puts("block 2");
    if(!gvar_80610A4) {
        →puts("exit block");
        return 0;
    }
    else if(!gvar_80610A8) {
    loc_804AA1C:
        →puts("block 3");
    }
    →puts("block 4");
    goto loc_804AA1C;
}

int test_3_blocks_variant_99_edges_6() {
    do {
        →puts("block 2");
    }
    while(!gvar_80610A4);
    if(!gvar_80610A8) {
        →puts("block 3");
    }
    else {
        →puts("block 4");
    }
    →puts("exit block");
    return 0;
}

int test_3_blocks_variant_9_edges_5() {
    →puts("block 2");
    do {
        →puts("block 3");
    }
    while(!gvar_80610A4);
    →puts("block 4");
    →puts("exit block");
    return 0;
}
