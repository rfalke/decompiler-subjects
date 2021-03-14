
unsigned int initConditions() {
    unsigned int v0;
    unsigned int result;
    int v1 = result + 1000;
    unsigned int v2 = result;
    do {
        v0 = result + 1;
        *(unsigned int*)((v0 - v2) * 4 + (int)&gvar_808A03C) = result;
        result = v0;
    }
    while(v0 != v1);
    return result;
}

void main() {
    // Decompilation error
}

void sub_80482D0() {
    jump gvar_808A008;
}

void sub_8048300() {
    jump __gmon_start__;
}

int test_1_blocks_1_targets_direct_variant_0() {
    if(gvar_808A0A4) {
        →puts("then/else block 3");
    }
    →puts("return block");
    return 0;
}

int test_1_blocks_2_targets_direct_variant_0() {
    if(!gvar_808A0A4) {
        →puts("then/else block 3");
    }
    else {
        →puts("then/else block 4");
    }
    →puts("return block");
    return 0;
}

int test_1_blocks_2_targets_variant_0() {
    if(!gvar_808A0A4) {
        →puts("then/else block 3");
    }
    else {
        →puts("then/else block 4");
    }
    →puts("return block");
    return 0;
}

int test_2_blocks_1_targets_direct_variant_0() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 4");
    }
    →puts("return block");
    return 0;
}

int test_2_blocks_1_targets_direct_variant_1() {
    if(gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 4");
    }
    →puts("return block");
    return 0;
}

int test_2_blocks_2_targets_direct_variant_0() {
    if(gvar_808A0A4 || !gvar_808A0A8) {
        →puts("then/else block 4");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_2_blocks_2_targets_direct_variant_1() {
    if(gvar_808A0A4) {
        →puts("then/else block 4");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_2_blocks_2_targets_direct_variant_2() {
    if(!gvar_808A0A4 && !gvar_808A0A8) {
        →puts("then/else block 4");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_2_blocks_2_targets_direct_variant_3() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 4");
    }
    →puts("return block");
    return 0;
}

int test_2_blocks_2_targets_direct_variant_4() {
    if(gvar_808A0A4) {
        if(!gvar_808A0A8) {
            →puts("then/else block 4");
        }
        else {
            →puts("then/else block 5");
        }
    }
    →puts("return block");
    return 0;
}

int test_2_blocks_2_targets_variant_0() {
    if(gvar_808A0A4 || !gvar_808A0A8) {
        →puts("then/else block 4");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_2_blocks_2_targets_variant_1() {
    if(!gvar_808A0A4 && !gvar_808A0A8) {
        →puts("then/else block 4");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_2_blocks_3_targets_variant_0() {
    if(gvar_808A0A4) {
        →puts("then/else block 4");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_2_blocks_3_targets_variant_1() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
    }
    else if(!gvar_808A0A8) {
        →puts("then/else block 4");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_2_blocks_3_targets_variant_2() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8) {
        →puts("then/else block 4");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_1_targets_direct_variant_0() {
    if((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0AC) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_1_targets_direct_variant_1() {
    if((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0AC) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_1_targets_direct_variant_10() {
    if(gvar_808A0A4 && gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_1_targets_direct_variant_11() {
    if(gvar_808A0A4 && (gvar_808A0AC || gvar_808A0A8)) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_1_targets_direct_variant_12() {
    if(gvar_808A0A4 && gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_1_targets_direct_variant_2() {
    if((gvar_808A0A4 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_1_targets_direct_variant_3() {
    if((!gvar_808A0A4 || gvar_808A0AC) && gvar_808A0A8) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_1_targets_direct_variant_4() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 5");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_1_targets_direct_variant_5() {
    if(gvar_808A0A4 || gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_1_targets_direct_variant_6() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_1_targets_direct_variant_7() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 5");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_1_targets_direct_variant_8() {
    if(gvar_808A0A4 || (gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_1_targets_direct_variant_9() {
    if(gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_0() {
    if((!gvar_808A0A4 && gvar_808A0A8) || !gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_1() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_10() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        if(!gvar_808A0AC) {
            →puts("then/else block 5");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_11() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_12() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_804944D:
            →puts("then/else block 5");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804944D;
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_13() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 5");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_14() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_15() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
            →puts("then/else block 5");
        }
        else {
        loc_8049558:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8049558;
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_16() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_17() {
    if(gvar_808A0A4 || gvar_808A0A8 || !gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_18() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_19() {
    if(gvar_808A0A4 || (!gvar_808A0A8 && !gvar_808A0AC)) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_2() {
    if((gvar_808A0A4 || !gvar_808A0A8) && !gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_20() {
    if(gvar_808A0A4) {
    loc_80496ED:
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        goto loc_80496ED;
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_21() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_22() {
    if(gvar_808A0A4) {
    loc_8049795:
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0AC) {
            goto loc_8049795;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_23() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_24() {
    if(!gvar_808A0A4 && (gvar_808A0A8 || !gvar_808A0AC)) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_25() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_26() {
    if(gvar_808A0A4) {
    loc_80498F4:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0AC) {
        goto loc_80498F4;
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_27() {
    if(!gvar_808A0A4 && !gvar_808A0A8 && !gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_28() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_29() {
    if(gvar_808A0A4) {
    loc_80499F0:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_80499F0;
        }
        else {
            →puts("then/else block 5");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_3() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_30() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_31() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_32() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_8049AEC;
    }
    if(gvar_808A0A8) {
    loc_8049AEC:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_33() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 5");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_34() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_35() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_36() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_37() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_38() {
    if(gvar_808A0A4 || (!gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_39() {
    if(gvar_808A0A4) {
        goto loc_8049D38;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8049D38;
        }
        if(gvar_808A0A8) {
        loc_8049D38:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 5");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_4() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 5");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_40() {
    if(gvar_808A0A4) {
        goto loc_8049D8C;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_8049D8C:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 5");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_41() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_42() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_43() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_44() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_45() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8 || !gvar_808A0AC) {
            →puts("then/else block 5");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_46() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 5");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_47() {
    if(gvar_808A0A4) {
        if(!gvar_808A0A8 && !gvar_808A0AC) {
            →puts("then/else block 5");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_48() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 5");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_49() {
    if(gvar_808A0A4 && gvar_808A0A8) {
        if(!gvar_808A0AC) {
            →puts("then/else block 5");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_5() {
    if((gvar_808A0A4 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_50() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || !gvar_808A0A8) {
            →puts("then/else block 5");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_51() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 5");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_52() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 5");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_53() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 5");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_54() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 5");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_6() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_8049255:
            →puts("then/else block 5");
        }
        else {
        loc_8049264:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8049255;
    }
    else {
        goto loc_8049264;
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_7() {
    if(!gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 5");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_8() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            →puts("then/else block 5");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_direct_variant_9() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 5");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_variant_0() {
    if((!gvar_808A0A4 && gvar_808A0A8) || !gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_variant_1() {
    if((gvar_808A0A4 || !gvar_808A0A8) && !gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_variant_10() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_8048F70;
    }
    if(gvar_808A0A8) {
    loc_8048F70:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_variant_11() {
    if(gvar_808A0A4 || (!gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_variant_12() {
    if(gvar_808A0A4) {
        goto loc_8049018;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8049018;
        }
        if(gvar_808A0A8) {
        loc_8049018:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 5");
        }
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_variant_2() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 5");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_variant_3() {
    if((gvar_808A0A4 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_variant_4() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_8048D69:
            →puts("then/else block 5");
        }
        else {
        loc_8048D78:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8048D69;
    }
    else {
        goto loc_8048D78;
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_variant_5() {
    if(gvar_808A0A4 || gvar_808A0A8 || !gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_variant_6() {
    if(gvar_808A0A4 || (!gvar_808A0A8 && !gvar_808A0AC)) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_variant_7() {
    if(!gvar_808A0A4 && (gvar_808A0A8 || !gvar_808A0AC)) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_variant_8() {
    if(!gvar_808A0A4 && !gvar_808A0A8 && !gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_2_targets_variant_9() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_0() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_1() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_10() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
            →puts("then/else block 5");
        }
        else {
        loc_804A656:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_804A656;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_11() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_12() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_13() {
    if(gvar_808A0A4) {
    loc_804A770:
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC) {
        goto loc_804A770;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_14() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_15() {
    if(gvar_808A0A4) {
    loc_804A836:
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC) {
        goto loc_804A836;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_16() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_17() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || !gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_18() {
    if(gvar_808A0A4) {
    loc_804A96E:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 5");
    }
    else if(!gvar_808A0AC) {
        goto loc_804A96E;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_19() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_2() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_20() {
    if(gvar_808A0A4) {
    loc_804AA34:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        goto loc_804AA34;
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_21() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8 && !gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_22() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || !gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_23() {
    if(gvar_808A0A4) {
    loc_804AB6C:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0AC) {
        goto loc_804AB6C;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_24() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8 && !gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_25() {
    if(gvar_808A0A4) {
    loc_804AC32:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        goto loc_804AC32;
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_26() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_27() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_28() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_29() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_3() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_30() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_31() {
    if(gvar_808A0A4) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_32() {
    if(gvar_808A0A4) {
        goto loc_804AED8;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
    loc_804AED8:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_33() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || !gvar_808A0A8) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_34() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_35() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_36() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_37() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || !gvar_808A0A8) {
        →puts("then/else block 5");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_38() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_39() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_4() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_804A3F5:
            →puts("then/else block 5");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_804A3F5;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_40() {
    if(gvar_808A0A4) {
        goto loc_804B1FF;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
    loc_804B1FF:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_41() {
    if(gvar_808A0A4) {
        goto loc_804B262;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8) {
    loc_804B262:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_5() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 5");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_6() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 5");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_7() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_804A51E:
            →puts("then/else block 5");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_804A51E;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_8() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_804A59F;
        }
        else {
            →puts("then/else block 5");
        }
    }
    else if(gvar_808A0AC) {
    loc_804A59F:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_3_blocks_3_targets_variant_9() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 5");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_0() {
    if(((gvar_808A0A4 || !gvar_808A0A8) && gvar_808A0AC) || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_1() {
    if(((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0AC) && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_10() {
    if((!gvar_808A0A4 || gvar_808A0AC) && (gvar_808A0A8 || gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_100() {
    if((!gvar_808A0A4 || gvar_808A0B0) && (gvar_808A0AC || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_101() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_804D242;
        }
        if(gvar_808A0A8) {
        loc_804D242:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_804D242;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_102() {
    if(gvar_808A0A4) {
        goto loc_804D289;
    }
    else {
        if(!gvar_808A0AC) {
        loc_804D289:
            if(!gvar_808A0B0 && !gvar_808A0A8) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_103() {
    if(gvar_808A0A4) {
        goto loc_804D2D9;
    }
    else {
        if(!gvar_808A0AC) {
        loc_804D2D9:
            if(!gvar_808A0B0) {
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0A8) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_104() {
    if(((gvar_808A0A4 && !gvar_808A0B0) || gvar_808A0AC) && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_105() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            goto loc_804D363;
        }
        else {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
    loc_804D363:
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_106() {
    if((gvar_808A0A4 && gvar_808A0B0) || (gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_107() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_804D403;
        }
    }
    else if(gvar_808A0AC) {
    loc_804D403:
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_108() {
    if((!gvar_808A0A4 || gvar_808A0B0) && gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_109() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_11() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            goto loc_804B619;
        }
        else {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
    loc_804B619:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_110() {
    if((gvar_808A0A4 || gvar_808A0AC) && (gvar_808A0B0 || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_111() {
    if((gvar_808A0A4 || gvar_808A0AC) && gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_112() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_804D5B2:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804D5B2;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_113() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_114() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 && gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_115() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_116() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_117() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_118() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_804D789;
    }
    if(gvar_808A0A8) {
    loc_804D789:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_119() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_12() {
    if(gvar_808A0A4) {
    loc_804B65E:
        if(gvar_808A0AC) {
        loc_804B672:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804B672;
    }
    else if(!gvar_808A0B0) {
        goto loc_804B65E;
    }
    else {
        goto loc_804B672;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_120() {
    if(gvar_808A0A4 || (gvar_808A0AC && gvar_808A0A8 && gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_121() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_122() {
    if(gvar_808A0A4 || ((!gvar_808A0AC || gvar_808A0B0) && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_123() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_124() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_125() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0A8) {
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_126() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_127() {
    if(gvar_808A0A4 || (gvar_808A0AC && gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_128() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_804DA9E;
    }
    if(!gvar_808A0A8) {
    loc_804DA9E:
        if(!gvar_808A0AC) {
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_129() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_13() {
    if(gvar_808A0A4) {
    loc_804B6AE:
        if(gvar_808A0AC) {
        loc_804B6C2:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804B6C2;
    }
    else if(gvar_808A0B0) {
        goto loc_804B6AE;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_130() {
    if(gvar_808A0A4 || (gvar_808A0B0 && (gvar_808A0A8 || gvar_808A0AC))) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_131() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_804DB8E;
    }
    if(gvar_808A0A8) {
    loc_804DB8E:
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_132() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_133() {
    if(gvar_808A0A4 || (gvar_808A0B0 && gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_134() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_135() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_136() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_137() {
    if(gvar_808A0A4 || ((!gvar_808A0B0 || gvar_808A0AC) && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_138() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_139() {
    if(gvar_808A0A4 || (gvar_808A0B0 && gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_14() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_140() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_141() {
    if(gvar_808A0A4 && ((!gvar_808A0A8 && gvar_808A0AC) || gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_142() {
    if(gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC) && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_143() {
    if(gvar_808A0A4 && ((gvar_808A0A8 && gvar_808A0B0) || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_144() {
    if(gvar_808A0A4 && (!gvar_808A0A8 || gvar_808A0B0) && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_145() {
    if(gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_146() {
    if(gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC || gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_147() {
    if(gvar_808A0A4 && (gvar_808A0A8 || (gvar_808A0AC && gvar_808A0B0))) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_148() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_149() {
    if(gvar_808A0A4 && (gvar_808A0A8 || (gvar_808A0B0 && gvar_808A0AC))) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_15() {
    if((gvar_808A0A4 || gvar_808A0A8) && (gvar_808A0AC || gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_150() {
    if(gvar_808A0A4 && gvar_808A0A8 && (gvar_808A0AC || gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_151() {
    if(gvar_808A0A4 && gvar_808A0A8 && gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_152() {
    if(gvar_808A0A4 && gvar_808A0A8 && (gvar_808A0B0 || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_153() {
    if(gvar_808A0A4 && gvar_808A0A8 && gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_154() {
    if(gvar_808A0A4 && ((!gvar_808A0AC && gvar_808A0A8) || gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_155() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_156() {
    if(gvar_808A0A4 && gvar_808A0AC && (gvar_808A0A8 || gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_157() {
    if(gvar_808A0A4 && (gvar_808A0AC || gvar_808A0A8) && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_158() {
    if(gvar_808A0A4 && (gvar_808A0AC || (gvar_808A0A8 && gvar_808A0B0))) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_159() {
    if(gvar_808A0A4 && gvar_808A0AC && gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_16() {
    if((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_160() {
    if(gvar_808A0A4 && ((gvar_808A0AC && gvar_808A0B0) || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_161() {
    if(gvar_808A0A4 && (!gvar_808A0AC || gvar_808A0B0) && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_162() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_163() {
    if(gvar_808A0A4 && (gvar_808A0AC || gvar_808A0B0 || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_164() {
    if(gvar_808A0A4 && (gvar_808A0AC || (gvar_808A0B0 && gvar_808A0A8))) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_165() {
    if(gvar_808A0A4 && gvar_808A0AC && (gvar_808A0B0 || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_166() {
    if(gvar_808A0A4 && gvar_808A0AC && gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_167() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_804E6CE;
        }
        else {
            if(!gvar_808A0A8) {
            loc_804E6CE:
                if(!gvar_808A0AC) {
                    →puts("return block");
                    return 0;
                }
            }
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_168() {
    if(gvar_808A0A4 && (gvar_808A0B0 || gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_169() {
    if(gvar_808A0A4 && gvar_808A0B0 && (gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_17() {
    if(((gvar_808A0A4 && gvar_808A0AC) || gvar_808A0A8) && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_170() {
    if(gvar_808A0A4 && (gvar_808A0B0 || gvar_808A0A8) && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_171() {
    if(gvar_808A0A4 && (gvar_808A0B0 || (gvar_808A0A8 && gvar_808A0AC))) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_172() {
    if(gvar_808A0A4 && gvar_808A0B0 && gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_173() {
    if(gvar_808A0A4 && ((gvar_808A0B0 && gvar_808A0AC) || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_174() {
    if(gvar_808A0A4 && (gvar_808A0B0 || gvar_808A0AC || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_175() {
    if(gvar_808A0A4 && gvar_808A0B0 && (gvar_808A0AC || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_176() {
    if(gvar_808A0A4 && (!gvar_808A0B0 || gvar_808A0AC) && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_177() {
    if(gvar_808A0A4 && (gvar_808A0B0 || (gvar_808A0AC && gvar_808A0A8))) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_178() {
    if(gvar_808A0A4 && gvar_808A0B0 && gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_179() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_18() {
    if((gvar_808A0A4 && gvar_808A0AC) || (gvar_808A0A8 && gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_19() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_804B899:
            if(!gvar_808A0B0) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        goto loc_804B899;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_2() {
    if((!gvar_808A0A4 && gvar_808A0A8 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_20() {
    if((!gvar_808A0A4 || gvar_808A0AC) && gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_21() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_804B939;
        }
    }
    else if(gvar_808A0AC) {
    loc_804B939:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_22() {
    if(gvar_808A0A4) {
    loc_804B97E:
        if(gvar_808A0AC) {
        loc_804B992:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
            goto loc_804B97E;
        }
        else {
            goto loc_804B992;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_23() {
    if((gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0B0)) && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_24() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 && gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_25() {
    if((gvar_808A0A4 && gvar_808A0AC && gvar_808A0B0) || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_26() {
    if((!gvar_808A0A4 || !gvar_808A0AC || gvar_808A0B0) && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_27() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_804BB22:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_804BB22;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_28() {
    if((gvar_808A0A4 && (gvar_808A0AC || gvar_808A0B0)) || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_29() {
    if(!gvar_808A0A4) {
    loc_804BBA3:
        if(gvar_808A0A8) {
        loc_804BBC2:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_804BBC2;
    }
    else if(gvar_808A0B0) {
        goto loc_804BBA3;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_3() {
    if((gvar_808A0A4 || !gvar_808A0A8 || gvar_808A0B0) && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_30() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_31() {
    if(!gvar_808A0A4) {
    loc_804BC43:
        if(gvar_808A0A8) {
        loc_804BC62:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            goto loc_804BC43;
        }
        else {
            goto loc_804BC62;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_32() {
    if((!gvar_808A0A4 || (gvar_808A0AC && gvar_808A0B0)) && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_33() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_34() {
    if((!gvar_808A0A4 && !gvar_808A0A8 && gvar_808A0AC) || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_35() {
    if((gvar_808A0A4 || gvar_808A0A8 || gvar_808A0AC) && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_36() {
    if(((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_37() {
    if(((!gvar_808A0A4 && !gvar_808A0A8) || gvar_808A0B0) && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_38() {
    if(!gvar_808A0A4 && !gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_39() {
    if((!gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC)) || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_4() {
    if(gvar_808A0A4 || !gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_40() {
    if(gvar_808A0A4) {
    loc_804BF29:
        if(gvar_808A0B0) {
        loc_804BF32:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804BF32;
    }
    else if(gvar_808A0AC) {
        goto loc_804BF29;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_41() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(!gvar_808A0A8) {
        loc_804BF6E:
            if(!gvar_808A0AC) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else {
        goto loc_804BF6E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_42() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_43() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_804C022;
        }
    loc_804C00E:
        if(gvar_808A0AC) {
        loc_804C022:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804C022;
    }
    else {
        goto loc_804C00E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_44() {
    if((!gvar_808A0A4 || gvar_808A0B0) && (gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_45() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        goto loc_804C0AE;
    }
    else if(gvar_808A0B0) {
    loc_804C0AE:
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_46() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 || gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_47() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_48() {
    if((!gvar_808A0A4 && gvar_808A0A8) || (gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_49() {
    if(gvar_808A0A4) {
    loc_804C1F9:
        if(gvar_808A0B0) {
        loc_804C202:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_804C202;
        }
        else {
            goto loc_804C1F9;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_5() {
    if((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_50() {
    if((gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0AC)) && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_51() {
    if(((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0A8) && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_52() {
    if((gvar_808A0A4 && gvar_808A0B0) || (gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_53() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_804C342;
        }
    loc_804C32E:
        if(gvar_808A0AC) {
        loc_804C342:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804C32E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_54() {
    if((!gvar_808A0A4 || gvar_808A0B0) && gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_55() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_804C3CE;
        }
    }
    else if(gvar_808A0B0) {
    loc_804C3CE:
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_56() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 && gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_57() {
    if((gvar_808A0A4 || gvar_808A0A8) && (gvar_808A0B0 || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_58() {
    if((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_59() {
    if((gvar_808A0A4 && gvar_808A0B0 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_6() {
    if((!gvar_808A0A4 && gvar_808A0A8) || (gvar_808A0AC && gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_60() {
    if(!gvar_808A0A4) {
    loc_804C553:
        if(gvar_808A0A8) {
        loc_804C572:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_804C572;
    }
    else if(!gvar_808A0AC) {
        goto loc_804C553;
    }
    else {
        goto loc_804C572;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_61() {
    if(!gvar_808A0A4) {
    loc_804C5A3:
        if(gvar_808A0A8) {
        loc_804C5C2:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0AC) {
            goto loc_804C5A3;
        }
        else {
            goto loc_804C5C2;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_62() {
    if((!gvar_808A0A4 || !gvar_808A0B0 || gvar_808A0AC) && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_63() {
    if(!gvar_808A0A4) {
    loc_804C643:
        if(gvar_808A0A8) {
        loc_804C662:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_804C662;
    }
    else if(gvar_808A0AC) {
        goto loc_804C643;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_64() {
    if((!gvar_808A0A4 || (gvar_808A0B0 && gvar_808A0AC)) && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_65() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0A8) {
        loc_804C702:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_804C702;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_66() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_804C752;
        }
        if(gvar_808A0AC) {
        loc_804C752:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804C752;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_67() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_68() {
    if(gvar_808A0A4 || (!gvar_808A0A8 && gvar_808A0AC) || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_69() {
    if(gvar_808A0A4 || ((gvar_808A0A8 || gvar_808A0AC) && gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_7() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
            goto loc_804B4E2;
        }
    loc_804B4D9:
        if(gvar_808A0B0) {
        loc_804B4E2:
            →puts("then/else block 6");
        }
    }
    else {
        goto loc_804B4D9;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_70() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_71() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            goto loc_804C8CE;
        }
        if(gvar_808A0B0) {
        loc_804C8CE:
            if(gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_72() {
    if(gvar_808A0A4) {
    loc_804C932:
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_804C932;
        }
    }
    else if(gvar_808A0B0) {
        goto loc_804C932;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_73() {
    if(gvar_808A0A4 || gvar_808A0A8 || gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_74() {
    if(gvar_808A0A4 || gvar_808A0A8 || (gvar_808A0AC && gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_75() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_76() {
    if(gvar_808A0A4 || gvar_808A0A8 || (gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_77() {
    if(gvar_808A0A4 || (gvar_808A0A8 && (gvar_808A0AC || gvar_808A0B0))) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_78() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0AC && gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_79() {
    if(gvar_808A0A4) {
    loc_804CB62:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0B0) {
            goto loc_804CB62;
        }
        else if(gvar_808A0AC) {
            goto loc_804CB62;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_8() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
            goto loc_804B532;
        }
        if(gvar_808A0B0) {
        loc_804B532:
            →puts("then/else block 6");
        }
    }
    else {
        goto loc_804B532;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_80() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_81() {
    if((gvar_808A0A4 && !gvar_808A0B0 && gvar_808A0A8) || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_82() {
    if(!gvar_808A0A4) {
    loc_804CC3E:
        if(gvar_808A0AC) {
        loc_804CC52:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_804CC52;
    }
    else if(gvar_808A0A8) {
        goto loc_804CC52;
    }
    else {
        goto loc_804CC3E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_83() {
    if(!gvar_808A0A4) {
    loc_804CC8E:
        if(gvar_808A0AC) {
        loc_804CCA2:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0A8) {
            goto loc_804CCA2;
        }
        else {
            goto loc_804CC8E;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_84() {
    if(gvar_808A0A4) {
        goto loc_804CCE9;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else {
    loc_804CCE9:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_85() {
    if(gvar_808A0A4) {
        goto loc_804CD39;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else {
    loc_804CD39:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_86() {
    if(gvar_808A0A4) {
        goto loc_804CD89;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_804CD89:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_87() {
    if((!gvar_808A0A4 || gvar_808A0B0 || gvar_808A0A8) && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_88() {
    if(!gvar_808A0A4) {
    loc_804CE1E:
        if(gvar_808A0AC) {
        loc_804CE32:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_804CE32;
    }
    else if(gvar_808A0A8) {
        goto loc_804CE1E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_89() {
    if((!gvar_808A0A4 || (gvar_808A0B0 && gvar_808A0A8)) && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_9() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_804B579:
            if(!gvar_808A0B0) {
                →puts("return block");
                return 0;
            }
        }
    loc_804B582:
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8) {
        goto loc_804B579;
    }
    else {
        goto loc_804B582;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_90() {
    if(gvar_808A0A4) {
        goto loc_804CEC9;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_804CEC9;
        }
        if(gvar_808A0A8) {
        loc_804CEC9:
            if(gvar_808A0B0) {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_91() {
    if(gvar_808A0A4) {
        goto loc_804CF19;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
    loc_804CF19:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_92() {
    if((gvar_808A0A4 || (gvar_808A0AC && gvar_808A0A8)) && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_93() {
    if(gvar_808A0A4) {
        goto loc_804CFB9;
    }
    else {
        if(gvar_808A0AC) {
        loc_804CFB9:
            if(gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_94() {
    if(gvar_808A0A4) {
        goto loc_804D009;
    }
    else {
        if(gvar_808A0AC) {
        loc_804D009:
            if(!gvar_808A0B0) {
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_95() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_96() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_804D0B2;
        }
    loc_804D093:
        if(gvar_808A0A8) {
        loc_804D0B2:
            →puts("then/else block 6");
        }
    }
    else {
        goto loc_804D093;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_97() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_804D102;
        }
    loc_804D0E3:
        if(gvar_808A0A8) {
        loc_804D102:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_804D0E3;
    }
    else {
        goto loc_804D102;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_98() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_804D152;
        }
        if(gvar_808A0A8) {
        loc_804D152:
            →puts("then/else block 6");
        }
    }
    else {
        goto loc_804D152;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_1_targets_direct_variant_99() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_804D1A2;
        }
    loc_804D183:
        if(gvar_808A0A8) {
        loc_804D1A2:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_804D183;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_0() {
    if(((gvar_808A0A4 || !gvar_808A0A8) && gvar_808A0AC) || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1() {
    if(((gvar_808A0A4 || !gvar_808A0A8) && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_10() {
    if((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_100() {
    if(!gvar_808A0A4) {
    loc_80552BB:
        if(gvar_808A0A8) {
        loc_80552E9:
            →puts("then/else block 7");
        }
        else {
        loc_80552DA:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_80552DA;
    }
    else if(!gvar_808A0B0) {
        goto loc_80552BB;
    }
    else {
        goto loc_80552E9;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1000() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1001() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8 || gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1002() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0A8 && !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1003() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1004() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1005() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1006() {
    if(gvar_808A0A4) {
        if((gvar_808A0AC && gvar_808A0B0) || !gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1007() {
    if(gvar_808A0A4) {
        if((gvar_808A0AC && gvar_808A0B0) || gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1008() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
            loc_806A3DD:
                →puts("then/else block 7");
            }
            else {
            loc_806A3CE:
                →puts("then/else block 6");
            }
        }
        else if(gvar_808A0B0) {
            goto loc_806A3DD;
        }
        else {
            goto loc_806A3CE;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1009() {
    if(gvar_808A0A4 && (!gvar_808A0AC || gvar_808A0B0)) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_101() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || !gvar_808A0B0) {
        loc_8055339:
            →puts("then/else block 6");
        }
        else {
        loc_8055348:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8055339;
    }
    else {
        goto loc_8055348;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1010() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 7");
            }
            else {
            loc_806A48C:
                →puts("then/else block 6");
            }
        }
        else if(gvar_808A0B0) {
            goto loc_806A48C;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1011() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
            loc_806A4FA:
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
        else if(gvar_808A0B0) {
            goto loc_806A4FA;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1012() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || gvar_808A0B0 || !gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1013() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
            if(gvar_808A0B0) {
                goto loc_806A5B8;
            }
            if(!gvar_808A0A8) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        loc_806A5B8:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1014() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_806A608:
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            if(!gvar_808A0A8) {
                goto loc_806A608;
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1015() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || (!gvar_808A0B0 && gvar_808A0A8)) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1016() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1017() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_806A734:
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            if(gvar_808A0A8) {
                goto loc_806A734;
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1018() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        if(gvar_808A0B0 || !gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1019() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        if(gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_102() {
    if(!gvar_808A0A4) {
    loc_8055379:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_8055398:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_8055398;
    }
    else if(gvar_808A0B0) {
        goto loc_8055379;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1020() {
    if(gvar_808A0A4 && gvar_808A0AC && gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1021() {
    if(gvar_808A0A4 && (gvar_808A0AC || gvar_808A0A8)) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1022() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_806A900;
        }
        else if(gvar_808A0A8) {
            if(!gvar_808A0B0) {
            loc_806A900:
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1023() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8 && gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1024() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1025() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8 && gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1026() {
    if(gvar_808A0A4 && gvar_808A0AC && gvar_808A0A8) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1027() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC && gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1028() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1029() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 7");
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_103() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1030() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_806ABF8:
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            goto loc_806ABF8;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1031() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1032() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1033() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0 && gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1034() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1035() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC && gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1036() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1037() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 6");
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1038() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1039() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_104() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8055456:
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
        loc_8055465:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8055456;
    }
    else {
        goto loc_8055465;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1040() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0 && gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1041() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_806B01C:
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            goto loc_806B01C;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1042() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1043() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_806B0B7;
        }
        else {
            if(!gvar_808A0A8) {
            loc_806B0B7:
                if(gvar_808A0AC) {
                    →puts("then/else block 7");
                    →puts("return block");
                    return 0;
                }
            }
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1044() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 || gvar_808A0A8 || !gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1045() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 || (!gvar_808A0A8 && gvar_808A0AC)) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1046() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        if(!gvar_808A0A8 && gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1047() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8 || gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1048() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_806B292;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
        loc_806B292:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1049() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_105() {
    if(!gvar_808A0A4) {
    loc_8055496:
        if(!gvar_808A0A8) {
        loc_80554B5:
            →puts("then/else block 6");
        }
        else {
        loc_80554C4:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_80554C4;
    }
    else if(!gvar_808A0B0) {
        goto loc_8055496;
    }
    else {
        goto loc_80554B5;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1050() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1051() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1052() {
    if(gvar_808A0A4) {
        if((!gvar_808A0B0 && gvar_808A0A8) || gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1053() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 || (!gvar_808A0A8 && !gvar_808A0AC)) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1054() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 || gvar_808A0A8 || gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1055() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        if(gvar_808A0A8 || gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1056() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_806B58A;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_806B58A:
            if(gvar_808A0AC) {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1057() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_806B5FD:
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            goto loc_806B5FD;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1058() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1059() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_106() {
    if((gvar_808A0A4 && (gvar_808A0AC || gvar_808A0B0)) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1060() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8 || gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1061() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 && gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1062() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 || gvar_808A0AC || !gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1063() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 || (!gvar_808A0AC && gvar_808A0A8)) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1064() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1065() {
    if(gvar_808A0A4) {
        if((gvar_808A0B0 && gvar_808A0AC) || gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1066() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            if(gvar_808A0AC) {
                goto loc_806B963;
            }
            if(!gvar_808A0A8) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        loc_806B963:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1067() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_806B9C2;
        }
        else {
            if(gvar_808A0AC) {
                goto loc_806B9C2;
            }
            if(gvar_808A0A8) {
            loc_806B9C2:
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1068() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        if(gvar_808A0AC || gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1069() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            if(gvar_808A0A8) {
            loc_806BA80:
                →puts("then/else block 7");
            }
            else {
            loc_806BA71:
                →puts("then/else block 6");
            }
        }
        else if(!gvar_808A0AC) {
            goto loc_806BA71;
        }
        else {
            goto loc_806BA80;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_107() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC && !gvar_808A0B0) {
        loc_8055573:
            →puts("then/else block 6");
        }
        else {
        loc_8055582:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8055573;
    }
    else {
        goto loc_8055582;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1070() {
    if(gvar_808A0A4 && (!gvar_808A0B0 || gvar_808A0AC)) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1071() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_806BB2F:
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            if(!gvar_808A0A8) {
                goto loc_806BB2F;
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1072() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_806BB9D;
        }
        else if(gvar_808A0AC) {
            if(gvar_808A0A8) {
            loc_806BB9D:
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1073() {
    if(gvar_808A0A4 && gvar_808A0B0 && gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1074() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            if(gvar_808A0A8) {
                →puts("then/else block 7");
            }
            else {
            loc_806BC4C:
                →puts("then/else block 6");
            }
        }
        else if(gvar_808A0AC) {
            goto loc_806BC4C;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1075() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            if(gvar_808A0A8) {
            loc_806BCBA:
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
        else if(gvar_808A0AC) {
            goto loc_806BCBA;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1076() {
    if(gvar_808A0A4 && (gvar_808A0B0 || gvar_808A0A8)) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1077() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_806BD69:
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            if(!gvar_808A0AC) {
                goto loc_806BD69;
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1078() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_806BDD7;
        }
        else if(gvar_808A0A8) {
            if(gvar_808A0AC) {
            loc_806BDD7:
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1079() {
    if(gvar_808A0A4 && gvar_808A0B0 && gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_108() {
    if(!gvar_808A0A4) {
    loc_80555B3:
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
        loc_80555E1:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_80555E1;
    }
    else if(gvar_808A0B0) {
        goto loc_80555B3;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1080() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8 && gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1081() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8 && gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1082() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC || gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1083() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 && gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1084() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_806C002:
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            goto loc_806C002;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1085() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 || gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1086() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1087() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            if(!gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1088() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC && gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1089() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_109() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8055640:
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
        loc_8055631:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8055631;
    }
    else {
        goto loc_8055640;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1090() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 && gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1091() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 || gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1092() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1093() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1094() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC || gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1095() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1096() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC && gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_1097() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 6");
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_11() {
    if(!gvar_808A0A4 && gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_110() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_111() {
    if(!gvar_808A0A4) {
    loc_80556D0:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_80556EF:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            goto loc_80556D0;
        }
        else {
            goto loc_80556EF;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_112() {
    if(!gvar_808A0A4) {
    loc_805572F:
        if(gvar_808A0A8) {
        loc_805575D:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            goto loc_805572F;
        }
        else {
            goto loc_805575D;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_113() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            goto loc_80557AD;
        }
        else {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
        loc_80557AD:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_114() {
    if(!gvar_808A0A4 || (gvar_808A0AC && gvar_808A0B0)) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_115() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_116() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_117() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        if(gvar_808A0AC || !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_118() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_119() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        if(!gvar_808A0AC && !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_12() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        if(!gvar_808A0B0) {
        loc_8053232:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_8053232;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_120() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_121() {
    if((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_122() {
    if((gvar_808A0A4 && gvar_808A0AC) || gvar_808A0A8) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_123() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        goto loc_8055B63;
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
        loc_8055B63:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_124() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_125() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_126() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_127() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_8055CD6:
            if(!gvar_808A0B0) {
                goto loc_8055CDF;
            }
            else {
                →puts("then/else block 7");
            }
        }
        else {
        loc_8055CDF:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8055CD6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_128() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else {
        loc_8055D35:
            if(gvar_808A0B0) {
                →puts("then/else block 7");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8055D35;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_129() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_8055D94:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        goto loc_8055D94;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_13() {
    if(gvar_808A0A4 || !gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_130() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_8055DF3:
            if(gvar_808A0B0) {
                →puts("then/else block 6");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8055DF3;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_131() {
    if(gvar_808A0A4) {
    loc_8055E47:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_8055E5B:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
            goto loc_8055E47;
        }
        else {
            goto loc_8055E5B;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_132() {
    if(gvar_808A0A4) {
    loc_8055EA6:
        if(gvar_808A0AC) {
        loc_8055EC9:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
            goto loc_8055EA6;
        }
        else {
            goto loc_8055EC9;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_133() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8055F28:
            →puts("then/else block 7");
        }
        else {
        loc_8055F19:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0B0) {
            goto loc_8055F28;
        }
        else {
            goto loc_8055F19;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_134() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0B0)) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_135() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_8055FD7:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        goto loc_8055FD7;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_136() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8056045:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        goto loc_8056045;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_137() {
    if((!gvar_808A0A4 || gvar_808A0AC) && gvar_808A0A8) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_138() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_80560EB;
        }
    }
    else if(gvar_808A0AC) {
    loc_80560EB:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_139() {
    if(gvar_808A0A4) {
    loc_805613F:
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
            goto loc_805613F;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_14() {
    if(!gvar_808A0A4 && gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_140() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_141() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 && gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_142() {
    if(gvar_808A0A4) {
    loc_805625C:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
            goto loc_805625C;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_143() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_144() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 && gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_145() {
    if(gvar_808A0A4 && gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_146() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_147() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_148() {
    if(!gvar_808A0A4) {
    loc_805648B:
        if(gvar_808A0A8) {
        loc_80564AA:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_80564AA;
    }
    else if(!gvar_808A0B0) {
        goto loc_805648B;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_149() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || !gvar_808A0B0) {
        loc_8056509:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8056509;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_15() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_805335E:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_805335E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_150() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8056568:
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8056568;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_151() {
    if(!gvar_808A0A4) {
    loc_80565A8:
        if(gvar_808A0A8) {
        loc_80565C7:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        goto loc_80565A8;
    }
    else {
        goto loc_80565C7;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_152() {
    if(gvar_808A0A4 && (gvar_808A0AC || gvar_808A0B0)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_153() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC && !gvar_808A0B0) {
        loc_8056685:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8056685;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_154() {
    if(!gvar_808A0A4) {
    loc_80566C5:
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_80566C5;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_155() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
        loc_8056743:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8056743;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_156() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_157() {
    if(!gvar_808A0A4) {
    loc_80567E2:
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            goto loc_80567E2;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_158() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8056860;
        }
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
        loc_8056860:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_159() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_16() {
    if(gvar_808A0A4 || !gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_160() {
    if(gvar_808A0A4 && gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_161() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_805698C:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805698C;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_162() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_163() {
    if(gvar_808A0A4 && (gvar_808A0AC || gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_164() {
    if(!gvar_808A0A4) {
    loc_8056A7B:
        if(gvar_808A0A8) {
        loc_8056AA9:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_8056A7B;
    }
    else {
        goto loc_8056AA9;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_165() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_8056B08:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8056B08;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_166() {
    if(!gvar_808A0A4) {
    loc_8056B39:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_8056B39;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_167() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_168() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
        loc_8056C25:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8056C25;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_169() {
    if(!gvar_808A0A4) {
    loc_8056C56:
        if(gvar_808A0A8) {
        loc_8056C84:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_8056C84;
    }
    else if(!gvar_808A0B0) {
        goto loc_8056C56;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_17() {
    if((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0AC || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_170() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC && !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_8056CE3:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8056CE3;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_171() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8056D42:
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8056D42;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_172() {
    if(!gvar_808A0A4) {
    loc_8056D73:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            goto loc_8056D73;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_173() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_174() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_175() {
    if((!gvar_808A0A4 && !gvar_808A0A8 && gvar_808A0AC) || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_176() {
    if((!gvar_808A0A4 && !gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_177() {
    if((gvar_808A0A4 || gvar_808A0A8 || !gvar_808A0AC) && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_178() {
    if((!gvar_808A0A4 && !gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_179() {
    if((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_18() {
    if(((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_180() {
    if(((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_181() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        if(!gvar_808A0B0) {
        loc_80570E9:
            →puts("then/else block 6");
        }
        else {
        loc_80570F8:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_80570E9;
    }
    else {
        goto loc_80570F8;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_182() {
    if((!gvar_808A0A4 && !gvar_808A0A8) || gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_183() {
    if(!gvar_808A0A4 && !gvar_808A0A8) {
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_184() {
    if(!gvar_808A0A4 && !gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_185() {
    if(gvar_808A0A4 || gvar_808A0A8 || gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_186() {
    if((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_187() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        if(!gvar_808A0B0) {
        loc_8057323:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_8057323;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_188() {
    if(!gvar_808A0A4 && !gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_189() {
    if((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_19() {
    if((!gvar_808A0A4 && gvar_808A0A8) || (!gvar_808A0AC && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_190() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_805744F:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_805744F;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_191() {
    if(!gvar_808A0A4 && !gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_192() {
    if((!gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC)) || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_193() {
    if((!gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC))) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_194() {
    if(gvar_808A0A4) {
    loc_80575B3:
        if(!gvar_808A0B0) {
        loc_80575BC:
            →puts("then/else block 6");
        }
        else {
        loc_80575CB:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_80575BC;
    }
    else if(gvar_808A0AC) {
        goto loc_80575CB;
    }
    else {
        goto loc_80575B3;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_195() {
    if(gvar_808A0A4) {
    loc_8057612:
        if(gvar_808A0B0) {
        loc_805761B:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805761B;
    }
    else if(!gvar_808A0AC) {
        goto loc_8057612;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_196() {
    if(gvar_808A0A4) {
    loc_8057671:
        if(gvar_808A0B0) {
        loc_8057689:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        goto loc_8057689;
    }
    else {
        goto loc_8057671;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_197() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(!gvar_808A0A8) {
        loc_80576C5:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else {
        goto loc_80576C5;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_198() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_199() {
    if((gvar_808A0A4 && gvar_808A0B0) || (!gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_2() {
    if(((!gvar_808A0A4 && gvar_808A0A8) || !gvar_808A0AC) && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_20() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
    loc_805352A:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_805352A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_200() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_80577E2:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
    loc_80577F6:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        goto loc_80577F6;
    }
    else {
        goto loc_80577E2;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_201() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8057864;
        }
    loc_8057841:
        if(gvar_808A0AC) {
        loc_8057864:
            →puts("then/else block 7");
        }
        else {
        loc_8057855:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8057855;
    }
    else {
        goto loc_8057841;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_202() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_80578B4:
            →puts("then/else block 6");
        }
        else {
        loc_80578C3:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8 || !gvar_808A0AC) {
        goto loc_80578B4;
    }
    else {
        goto loc_80578C3;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_203() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(!gvar_808A0A8 && gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_204() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        goto loc_805795E;
    }
    else if(gvar_808A0B0) {
    loc_805795E:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_205() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 || !gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_206() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8 && gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_207() {
    if(gvar_808A0A4) {
    loc_8057A86:
        if(!gvar_808A0B0) {
        loc_8057A8F:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8057A8F;
    }
    else if(gvar_808A0AC) {
        goto loc_8057A86;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_208() {
    if(gvar_808A0A4) {
    loc_8057AE5:
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        goto loc_8057AE5;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_209() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_21() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_210() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else {
        loc_8057B98:
            if(gvar_808A0AC) {
            loc_8057BAC:
                →puts("then/else block 6");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8057BAC;
    }
    else {
        goto loc_8057B98;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_211() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_8057C0B:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        goto loc_8057C0B;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_212() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 || gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_213() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        goto loc_8057CB5;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
    loc_8057CB5:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_214() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_215() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_216() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_8057DE6:
            →puts("then/else block 6");
        }
        else {
        loc_8057DD2:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8057DE6;
    }
    else {
        goto loc_8057DD2;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_217() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8057E54;
        }
    loc_8057E31:
        if(gvar_808A0AC) {
        loc_8057E54:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8057E31;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_218() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_8057EA4:
            →puts("then/else block 6");
        }
        else {
        loc_8057EB3:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8057EA4;
    }
    else if(gvar_808A0AC) {
        goto loc_8057EB3;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_219() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_22() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
    loc_80535E8:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            goto loc_80535E8;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_220() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            goto loc_8057F4E;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
    loc_8057F4E:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_221() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_222() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_223() {
    if(gvar_808A0A4) {
    loc_8058076:
        if(!gvar_808A0B0) {
        loc_805807F:
            →puts("then/else block 6");
        }
        else {
        loc_805808E:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805808E;
    }
    else if(gvar_808A0AC) {
        goto loc_805807F;
    }
    else {
        goto loc_8058076;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_224() {
    if(gvar_808A0A4) {
    loc_80580D5:
        if(gvar_808A0B0) {
        loc_80580DE:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        goto loc_80580DE;
    }
    else {
        goto loc_80580D5;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_225() {
    if(gvar_808A0A4) {
    loc_8058134:
        if(gvar_808A0B0) {
        loc_805814C:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805814C;
    }
    else if(!gvar_808A0AC) {
        goto loc_8058134;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_226() {
    if((gvar_808A0A4 || (!gvar_808A0A8 && !gvar_808A0AC)) && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_227() {
    if((!gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC))) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_228() {
    if(((!gvar_808A0A4 || !gvar_808A0B0) && gvar_808A0A8) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_229() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_23() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_230() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_231() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_8058363:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        goto loc_8058363;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_232() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_80583E5;
        }
    loc_80583C2:
        if(gvar_808A0AC) {
        loc_80583E5:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_80583E5;
    }
    else {
        goto loc_80583C2;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_233() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_8058435:
            →puts("then/else block 6");
        }
        else {
        loc_8058444:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8 && !gvar_808A0AC) {
        goto loc_8058435;
    }
    else {
        goto loc_8058444;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_234() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0A8 || gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_235() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8058502;
        }
        else {
            goto loc_80584DF;
        }
    }
    else if(gvar_808A0B0) {
    loc_80584DF:
        if(gvar_808A0AC) {
        loc_8058502:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_236() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8 && !gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_237() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 || gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_238() {
    if(gvar_808A0A4) {
    loc_8058607:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_805861F:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805861F;
    }
    else if(gvar_808A0AC) {
        goto loc_8058607;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_239() {
    if(gvar_808A0A4) {
    loc_8058666:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        goto loc_8058666;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_24() {
    if((gvar_808A0A4 || !gvar_808A0A8) && (gvar_808A0AC || !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_240() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        goto loc_80586BA;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
    loc_80586BA:
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_241() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_242() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_243() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_80587EB;
        }
    loc_80587D7:
        if(gvar_808A0AC) {
        loc_80587EB:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_80587D7;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_244() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_8058859:
            →puts("then/else block 7");
        }
        else {
        loc_8058836:
            if(gvar_808A0AC) {
                →puts("then/else block 6");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8058859;
    }
    else {
        goto loc_8058836;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_245() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_80588A9:
            →puts("then/else block 6");
        }
        else {
        loc_80588B8:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_80588B8;
    }
    else if(gvar_808A0AC) {
        goto loc_80588A9;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_246() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_247() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            goto loc_8058953;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
    loc_8058953:
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_248() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_249() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_25() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_250() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_251() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_8058ACF:
            if(gvar_808A0AC) {
            loc_8058AF2:
                →puts("then/else block 7");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8058AF2;
    }
    else {
        goto loc_8058ACF;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_252() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_8058B51:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        goto loc_8058B51;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_253() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 || gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_254() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_255() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_8058C6E;
    }
    if(gvar_808A0AC) {
    loc_8058C6E:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_256() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_257() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_258() {
    if((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_259() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_26() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
    loc_8053773:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_8053773;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_260() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_261() {
    if((!gvar_808A0A4 && gvar_808A0A8) || (!gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_262() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        goto loc_8058F07;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8058F07;
        }
        if(gvar_808A0AC) {
        loc_8058F07:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_263() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        goto loc_8058F66;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_8058F66:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_264() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_265() {
    if((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_266() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_267() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_268() {
    if(gvar_808A0A4 && gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_269() {
    if(!gvar_808A0A4) {
    loc_8059172:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_8059191:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8059191;
    }
    else if(!gvar_808A0AC) {
        goto loc_8059172;
    }
    else {
        goto loc_8059191;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_27() {
    if((gvar_808A0A4 || !gvar_808A0A8) && !gvar_808A0AC && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_270() {
    if(!gvar_808A0A4) {
    loc_80591D1:
        if(gvar_808A0A8) {
        loc_80591FF:
            →puts("then/else block 7");
        }
        else {
        loc_80591F0:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_80591FF;
    }
    else if(!gvar_808A0AC) {
        goto loc_80591D1;
    }
    else {
        goto loc_80591F0;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_271() {
    if(!gvar_808A0A4) {
    loc_8059230:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_805924F:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0AC) {
            goto loc_8059230;
        }
        else {
            goto loc_805924F;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_272() {
    if((gvar_808A0A4 && gvar_808A0B0 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_273() {
    if(!gvar_808A0A4) {
    loc_80592EE:
        if(gvar_808A0A8) {
        loc_805931C:
            →puts("then/else block 7");
        }
        else {
        loc_805930D:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805930D;
    }
    else if(!gvar_808A0AC) {
        goto loc_80592EE;
    }
    else {
        goto loc_805931C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_274() {
    if(!gvar_808A0A4) {
    loc_805934D:
        if(gvar_808A0A8) {
        loc_805937B:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805937B;
    }
    else if(!gvar_808A0AC) {
        goto loc_805934D;
    }
    else {
        goto loc_805937B;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_275() {
    if(!gvar_808A0A4) {
    loc_80593AC:
        if(gvar_808A0A8) {
        loc_80593DA:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0AC) {
            goto loc_80593AC;
        }
        else {
            goto loc_80593DA;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_276() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0A8) {
        loc_8059439:
            →puts("then/else block 7");
        }
        else {
        loc_805942A:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_805942A;
    }
    else {
        goto loc_8059439;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_277() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0AC) {
        loc_8059498:
            →puts("then/else block 7");
        }
        else {
        loc_8059489:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8059489;
    }
    else {
        goto loc_8059498;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_278() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_80594F7;
        }
        if(gvar_808A0AC) {
        loc_80594F7:
            →puts("then/else block 7");
        }
        else {
        loc_80594E8:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_80594E8;
    }
    else {
        goto loc_80594F7;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_279() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        goto loc_8059556;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_8059556:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_28() {
    if(((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_280() {
    if(!gvar_808A0A4 || !gvar_808A0B0 || gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_281() {
    if(!gvar_808A0A4) {
    loc_80595E6:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_8059605:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8059605;
    }
    else if(gvar_808A0AC) {
        goto loc_80595E6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_282() {
    if(!gvar_808A0A4) {
    loc_8059645:
        if(gvar_808A0A8) {
        loc_8059673:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8059673;
    }
    else if(gvar_808A0AC) {
        goto loc_8059645;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_283() {
    if(!gvar_808A0A4 || (gvar_808A0B0 && gvar_808A0AC)) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_284() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_8059722:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_8059722;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_285() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8059781;
        }
        if(gvar_808A0AC) {
        loc_8059781:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8059781;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_286() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_80597EF:
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
        loc_80597E0:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_80597E0;
    }
    else {
        goto loc_80597EF;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_287() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_288() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0A8) {
        loc_80598AD:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_80598AD;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_289() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_80598FD:
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
        loc_805990C:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_80598FD;
    }
    else {
        goto loc_805990C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_29() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
    loc_8053890:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_8053890;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_290() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_805996B;
        }
        if(gvar_808A0AC) {
        loc_805996B:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805996B;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_291() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_292() {
    if(gvar_808A0A4) {
    loc_8059A11:
        if(!gvar_808A0B0) {
        loc_8059A1A:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_8059A1A;
        }
        else {
            goto loc_8059A11;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_293() {
    if(gvar_808A0A4) {
    loc_8059A70:
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0AC) {
            goto loc_8059A70;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_294() {
    if(gvar_808A0A4) {
    loc_8059ACF:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_8059AE7:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_8059AE7;
        }
        else {
            goto loc_8059ACF;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_295() {
    if(gvar_808A0A4) {
    loc_8059B2E:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0AC) {
            goto loc_8059B2E;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_296() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_297() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_298() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        goto loc_8059C63;
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC) {
        loc_8059C63:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_299() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_8059C9F:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        goto loc_8059C9F;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_3() {
    if(((gvar_808A0A4 || !gvar_808A0A8) && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_30() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_300() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8059D21;
        }
    loc_8059CFE:
        if(gvar_808A0AC) {
        loc_8059D21:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8059CFE;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_301() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_8059D71:
            →puts("then/else block 6");
        }
        else {
        loc_8059D80:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0AC) {
            goto loc_8059D71;
        }
        else {
            goto loc_8059D80;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_302() {
    if((!gvar_808A0A4 || gvar_808A0B0) && gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_303() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8059E1B;
        }
    }
    else if(gvar_808A0B0) {
    loc_8059E1B:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_304() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            if(!gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_305() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_306() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0AC)) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_307() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_308() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else {
        loc_8059FF6:
            if(gvar_808A0AC) {
                →puts("then/else block 6");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8059FF6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_309() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_805A069:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8 && gvar_808A0AC) {
        goto loc_805A069;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_31() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
            goto loc_805393F;
        }
    loc_8053936:
        if(!gvar_808A0B0) {
        loc_805393F:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else {
        goto loc_8053936;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_310() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 && gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_311() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_312() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_805A172:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805A172;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_313() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_805A1F4:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8 && gvar_808A0AC) {
        goto loc_805A1F4;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_314() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 && gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_315() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        if(gvar_808A0B0 || !gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_316() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        if(gvar_808A0B0 || gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_317() {
    if((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_318() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_319() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_32() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        goto loc_8053995;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
    loc_8053995:
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_320() {
    if(!gvar_808A0A4) {
    loc_805A45F:
        if(gvar_808A0A8) {
        loc_805A47E:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC) {
        goto loc_805A45F;
    }
    else {
        goto loc_805A47E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_321() {
    if(gvar_808A0A4 && gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_322() {
    if(!gvar_808A0A4) {
    loc_805A51D:
        if(gvar_808A0A8) {
        loc_805A53C:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805A53C;
    }
    else if(!gvar_808A0AC) {
        goto loc_805A51D;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_323() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_805A5AA;
        }
        if(!gvar_808A0AC) {
            goto loc_805A57C;
        }
        else {
        loc_805A5AA:
            →puts("then/else block 7");
        }
    }
    else {
    loc_805A57C:
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_324() {
    if(!gvar_808A0A4) {
    loc_805A5DB:
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0AC) {
            goto loc_805A5DB;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_325() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0A8) {
        loc_805A659:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_805A659;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_326() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_805A6B8:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805A6B8;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_327() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_805A726;
        }
        if(gvar_808A0AC) {
        loc_805A726:
            →puts("then/else block 7");
        }
        else {
        loc_805A717:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805A717;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_328() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_329() {
    if(!gvar_808A0A4) {
    loc_805A7B6:
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        goto loc_805A7B6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_33() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
            goto loc_80539FD;
        }
        if(!gvar_808A0B0) {
        loc_80539FD:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else {
        goto loc_80539FD;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_330() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
        loc_805A834:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805A834;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_331() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_332() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_805A8F2:
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805A8F2;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_333() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_334() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_335() {
    if(gvar_808A0A4 && gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_336() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_805AA6E;
        }
        if(!gvar_808A0AC) {
            goto loc_805AA4F;
        }
        else {
        loc_805AA6E:
            →puts("then/else block 6");
        }
    }
    else {
    loc_805AA4F:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_337() {
    if(!gvar_808A0A4) {
    loc_805AAAE:
        if(gvar_808A0A8) {
        loc_805AADC:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805AADC;
    }
    else if(!gvar_808A0AC) {
        goto loc_805AAAE;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_338() {
    if(!gvar_808A0A4) {
    loc_805AB0D:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0AC) {
            goto loc_805AB0D;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_339() {
    if(!gvar_808A0A4) {
    loc_805AB6C:
        if(gvar_808A0A8) {
        loc_805AB9A:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC) {
        goto loc_805AB6C;
    }
    else {
        goto loc_805AB9A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_34() {
    if((gvar_808A0A4 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_340() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_341() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0AC) {
        loc_805AC58:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805AC58;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_342() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_805ACB7;
        }
        if(gvar_808A0AC) {
        loc_805ACB7:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805ACB7;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_343() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_805AD16;
        }
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_805AD16:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_344() {
    if(!gvar_808A0A4) {
    loc_805AD47:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        goto loc_805AD47;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_345() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_346() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_347() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_805AE92:
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805AE92;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_348() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_349() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
        loc_805AF50:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_805AF50;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_35() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
            goto loc_8053ABB;
        }
        if(!gvar_808A0B0) {
        loc_8053ABB:
            →puts("then/else block 6");
        }
        else {
        loc_8053ACA:
            →puts("then/else block 7");
        }
    }
    else {
        goto loc_8053ACA;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_350() {
    if(gvar_808A0A4 || (!gvar_808A0A8 && gvar_808A0AC) || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_351() {
    if((gvar_808A0A4 || (!gvar_808A0A8 && gvar_808A0AC))) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_352() {
    if(gvar_808A0A4 || ((gvar_808A0A8 || !gvar_808A0AC) && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_353() {
    if(gvar_808A0A4) {
    loc_805B0BD:
        →puts("then/else block 6");
    }
    else if((!gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_805B0BD;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_354() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((!gvar_808A0A8 && gvar_808A0AC) || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_355() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0B0) || !gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_356() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 && gvar_808A0B0) {
            goto loc_805B1E9;
        }
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_805B1E9:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_357() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_358() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            goto loc_805B284;
        }
        if(gvar_808A0B0) {
        loc_805B284:
            if(!gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 7");
        }
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_359() {
    if(gvar_808A0A4) {
    loc_805B2F7:
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8) {
        if(!gvar_808A0AC) {
            goto loc_805B2F7;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805B2F7;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_36() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_360() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            goto loc_805B365;
        }
        if(gvar_808A0B0) {
        loc_805B365:
            →puts("then/else block 7");
        }
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_361() {
    if(gvar_808A0A4) {
    loc_805B3B5:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        if(!gvar_808A0B0) {
            goto loc_805B3B5;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_362() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((gvar_808A0A8 || gvar_808A0AC) && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_363() {
    if(gvar_808A0A4) {
    loc_805B473:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        goto loc_805B473;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_364() {
    if(gvar_808A0A4) {
    loc_805B4D2:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
            goto loc_805B4D2;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_805B4D2;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_365() {
    if(gvar_808A0A4) {
    loc_805B531:
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_805B531;
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_366() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_367() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((gvar_808A0A8 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_368() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                →puts("return block");
                return 0;
            }
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_369() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((!gvar_808A0A8 || gvar_808A0B0) && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_37() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_370() {
    if(gvar_808A0A4) {
    loc_805B70C:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0B0) {
            goto loc_805B70C;
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_371() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_372() {
    if(gvar_808A0A4 || gvar_808A0A8 || gvar_808A0AC || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_373() {
    if((gvar_808A0A4 || gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_374() {
    if(gvar_808A0A4 || gvar_808A0A8 || (!gvar_808A0AC && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_375() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
    loc_805B8E7:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_805B8E7;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_376() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_377() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
    loc_805B9A5:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            goto loc_805B9A5;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_378() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_379() {
    if(gvar_808A0A4 || (!gvar_808A0A8 && (gvar_808A0AC || !gvar_808A0B0))) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_38() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_8053BCF:
            if(!gvar_808A0B0) {
                goto loc_8053BD8;
            }
            else {
                →puts("then/else block 7");
            }
        }
        else {
        loc_8053BD8:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8053BCF;
    }
    else {
        goto loc_8053BD8;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_380() {
    if(gvar_808A0A4) {
    loc_805BAC2:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        goto loc_805BAC2;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_381() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0B0) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_382() {
    if(gvar_808A0A4 || (!gvar_808A0A8 && !gvar_808A0AC && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_383() {
    if(gvar_808A0A4) {
    loc_805BBDF:
        →puts("then/else block 6");
    }
    else if((gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_805BBDF;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_384() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_385() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_386() {
    if(gvar_808A0A4) {
    loc_805BCFC:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        goto loc_805BCFC;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_387() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || (gvar_808A0AC && gvar_808A0B0)) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_388() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_389() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_805BE28;
    }
    if(gvar_808A0AC) {
    loc_805BE28:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_39() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8053C37:
            →puts("then/else block 6");
        }
        else {
        loc_8053C2E:
            if(gvar_808A0B0) {
                →puts("then/else block 7");
            }
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8053C2E;
    }
    else {
        goto loc_8053C37;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_390() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_391() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_392() {
    if(gvar_808A0A4 || gvar_808A0A8 || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_393() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_394() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_395() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_805C062;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_805C062:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_396() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_805C0C1;
        }
        else if(gvar_808A0B0) {
            goto loc_805C0C1;
        }
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_805C0C1:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_397() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_805C120;
        }
        if(gvar_808A0B0) {
            if(!gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        loc_805C120:
            →puts("then/else block 7");
        }
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_398() {
    if(gvar_808A0A4) {
    loc_805C170:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_805C170;
    }
    else if(gvar_808A0AC) {
        goto loc_805C170;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_399() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_805C1DE;
        }
        if(gvar_808A0B0) {
        loc_805C1DE:
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_4() {
    if(!gvar_808A0A4 && gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_40() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_8053C8D:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        goto loc_8053C8D;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_400() {
    if(gvar_808A0A4) {
    loc_805C22E:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        goto loc_805C22E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_401() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_805C29C;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0AC) {
        loc_805C29C:
            →puts("then/else block 7");
        }
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_402() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_403() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || (gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_404() {
    if(gvar_808A0A4) {
    loc_805C3AA:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC || !gvar_808A0B0) {
            goto loc_805C3AA;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_405() {
    if(gvar_808A0A4) {
    loc_805C409:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_805C409;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_406() {
    if(gvar_808A0A4) {
    loc_805C468:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0AC && !gvar_808A0B0) {
            goto loc_805C468;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_407() {
    if(gvar_808A0A4) {
    loc_805C4C7:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            goto loc_805C4C7;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_408() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && (gvar_808A0AC || gvar_808A0B0)) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_409() {
    if(gvar_808A0A4) {
    loc_805C585:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0AC) {
        if(!gvar_808A0B0) {
            goto loc_805C585;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_41() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_8053CEC:
            if(gvar_808A0B0) {
            loc_8053CF5:
                →puts("then/else block 6");
            }
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8053CEC;
    }
    else {
        goto loc_8053CF5;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_410() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_411() {
    if(gvar_808A0A4) {
    loc_805C643:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0B0) {
            goto loc_805C643;
        }
        else if(!gvar_808A0AC) {
            goto loc_805C643;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_412() {
    if(gvar_808A0A4) {
    loc_805C6A2:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0AC) {
            goto loc_805C6A2;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_413() {
    if(gvar_808A0A4) {
    loc_805C701:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        if(!gvar_808A0AC) {
            goto loc_805C701;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_414() {
    if(gvar_808A0A4) {
    loc_805C760:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            goto loc_805C760;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_415() {
    if(gvar_808A0A4) {
    loc_805C7BF:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0B0) {
            goto loc_805C7BF;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_416() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && (gvar_808A0B0 || gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_417() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_418() {
    if(!gvar_808A0A4 && ((!gvar_808A0A8 && gvar_808A0AC) || !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_419() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((!gvar_808A0A8 && gvar_808A0AC) || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_42() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_8053D4B:
            if(!gvar_808A0B0) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        goto loc_8053D4B;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_420() {
    if(gvar_808A0A4) {
    loc_805C9A9:
        →puts("then/else block 7");
    }
    else if((!gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_805C9A9;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_421() {
    if(!gvar_808A0A4 && (gvar_808A0A8 || !gvar_808A0AC) && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_422() {
    if((gvar_808A0A4 || (!gvar_808A0A8 && gvar_808A0AC))) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_423() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 && gvar_808A0B0) {
            goto loc_805CAB7;
        }
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_805CAB7:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_424() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_425() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                goto loc_805CB75;
            }
            else {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_805CB75:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_426() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            goto loc_805CBC0;
        }
        if(gvar_808A0B0) {
        loc_805CBC0:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 6");
        }
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_427() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                goto loc_805CC33;
            }
            else {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0B0) {
        loc_805CC33:
            →puts("then/else block 6");
        }
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_428() {
    if(gvar_808A0A4) {
    loc_805CCA1:
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_805CCA1;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805CCA1;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_429() {
    if(gvar_808A0A4) {
    loc_805CD00:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_805CD00;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_43() {
    if(gvar_808A0A4) {
    loc_8053D9F:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_8053DB3:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8053DB3;
    }
    else if(!gvar_808A0B0) {
        goto loc_8053D9F;
    }
    else {
        goto loc_8053DB3;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_430() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((gvar_808A0A8 || gvar_808A0AC) && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_431() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((gvar_808A0A8 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_432() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0B0)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_433() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                →puts("return block");
                return 0;
            }
            goto loc_805CE6D;
        }
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_805CE6D:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_434() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((!gvar_808A0A8 || gvar_808A0B0) && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_435() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_436() {
    if(gvar_808A0A4) {
    loc_805CF99:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0B0) {
            goto loc_805CF99;
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_437() {
    if(gvar_808A0A4) {
    loc_805CFF8:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        goto loc_805CFF8;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_438() {
    if(gvar_808A0A4) {
    loc_805D057:
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_805D057;
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805D057;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_439() {
    if(gvar_808A0A4) {
    loc_805D0B6:
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_805D0B6;
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_44() {
    if(gvar_808A0A4) {
    loc_8053DFE:
        if(gvar_808A0AC) {
        loc_8053E21:
            →puts("then/else block 7");
        }
        else {
        loc_8053E12:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8053E12;
    }
    else if(!gvar_808A0B0) {
        goto loc_8053DFE;
    }
    else {
        goto loc_8053E21;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_440() {
    if(!gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC || !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_441() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_442() {
    if(gvar_808A0A4) {
    loc_805D1D3:
        →puts("then/else block 7");
    }
    else if((gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_805D1D3;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_443() {
    if(!gvar_808A0A4 && (gvar_808A0A8 || (!gvar_808A0AC && !gvar_808A0B0))) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_444() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0B0) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_445() {
    if(gvar_808A0A4) {
    loc_805D2F0:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        goto loc_805D2F0;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_446() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_447() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || (gvar_808A0AC && gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_448() {
    if(gvar_808A0A4) {
    loc_805D40D:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        goto loc_805D40D;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_449() {
    if(!gvar_808A0A4 && !gvar_808A0A8 && (gvar_808A0AC || !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_45() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            goto loc_8053E80;
        }
        else {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
    loc_8053E80:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_450() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_451() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
    loc_805D52A:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_805D52A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_452() {
    if(!gvar_808A0A4 && !gvar_808A0A8 && !gvar_808A0AC && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_453() {
    if((gvar_808A0A4 || gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_454() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
    loc_805D647:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_805D647;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_455() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_456() {
    if(gvar_808A0A4 || (!gvar_808A0A8 && !gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_457() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_458() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_805D7B4;
        }
        if(gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        loc_805D7B4:
            →puts("then/else block 6");
        }
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_459() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_46() {
    if(gvar_808A0A4) {
    loc_8053EBC:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_8053ED0:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8053ED0;
    }
    else if(gvar_808A0B0) {
        goto loc_8053EBC;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_460() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_805D872;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0AC) {
        loc_805D872:
            →puts("then/else block 6");
        }
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_461() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || (gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_462() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_805D930;
        }
        if(gvar_808A0B0) {
        loc_805D930:
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_463() {
    if(gvar_808A0A4) {
    loc_805D99E:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_805D99E;
    }
    else if(gvar_808A0AC) {
        goto loc_805D99E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_464() {
    if(gvar_808A0A4) {
    loc_805D9FD:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        goto loc_805D9FD;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_465() {
    if(gvar_808A0A4 || gvar_808A0A8 || (!gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_466() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        goto loc_805DABB;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_805DABB;
        }
        if(gvar_808A0AC) {
        loc_805DABB:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_467() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        goto loc_805DB1A;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_805DB1A:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_468() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_469() {
    if(gvar_808A0A4 || gvar_808A0A8 || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_47() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_470() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_471() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_472() {
    if(gvar_808A0A4) {
    loc_805DCF5:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0AC && gvar_808A0B0) {
            goto loc_805DCF5;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_473() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && (gvar_808A0AC || gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_474() {
    if(gvar_808A0A4) {
    loc_805DDB3:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            goto loc_805DDB3;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_475() {
    if(gvar_808A0A4) {
    loc_805DE12:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC || gvar_808A0B0) {
            goto loc_805DE12;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_476() {
    if(gvar_808A0A4) {
    loc_805DE71:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_805DE71;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_477() {
    if(gvar_808A0A4) {
    loc_805DED0:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_805DED0;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_478() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_479() {
    if(gvar_808A0A4) {
    loc_805DF8E:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0 && gvar_808A0AC) {
            goto loc_805DF8E;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_48() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            goto loc_8053F9D;
        }
    }
    else if(gvar_808A0AC) {
    loc_8053F9D:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_480() {
    if(gvar_808A0A4) {
    loc_805DFED:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0B0) {
            goto loc_805DFED;
        }
        else if(gvar_808A0AC) {
            goto loc_805DFED;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_481() {
    if(gvar_808A0A4) {
    loc_805E04C:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_805E04C;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_482() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && (gvar_808A0B0 || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_483() {
    if(gvar_808A0A4) {
    loc_805E10A:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0B0) {
            goto loc_805E10A;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_484() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_485() {
    if(gvar_808A0A4) {
    loc_805E1C8:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            goto loc_805E1C8;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_486() {
    if(gvar_808A0A4 && !gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_487() {
    if(!gvar_808A0A4) {
    loc_805E263:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_805E277:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805E277;
    }
    else if(gvar_808A0A8) {
        goto loc_805E277;
    }
    else {
        goto loc_805E263;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_488() {
    if(!gvar_808A0A4) {
    loc_805E2C2:
        if(gvar_808A0AC) {
        loc_805E2E5:
            →puts("then/else block 7");
        }
        else {
        loc_805E2D6:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805E2E5;
    }
    else if(gvar_808A0A8) {
        goto loc_805E2D6;
    }
    else {
        goto loc_805E2C2;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_489() {
    if(!gvar_808A0A4) {
    loc_805E321:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_805E335:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0A8) {
            goto loc_805E335;
        }
        else {
            goto loc_805E321;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_49() {
    if(!gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0A8 || !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_490() {
    if(!gvar_808A0A4) {
    loc_805E380:
        if(gvar_808A0AC) {
        loc_805E394:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        goto loc_805E394;
    }
    else {
        goto loc_805E380;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_491() {
    if(gvar_808A0A4 && !gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_492() {
    if(gvar_808A0A4 && (gvar_808A0B0 || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_493() {
    if(!gvar_808A0A4) {
    loc_805E49D:
        if(gvar_808A0AC) {
        loc_805E4C0:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805E4C0;
    }
    else if(!gvar_808A0A8) {
        goto loc_805E49D;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_494() {
    if(!gvar_808A0A4) {
    loc_805E4FC:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0A8) {
            goto loc_805E4FC;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_495() {
    if((gvar_808A0A4 && !gvar_808A0B0 && gvar_808A0A8) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_496() {
    if(!gvar_808A0A4) {
    loc_805E5BA:
        if(gvar_808A0AC) {
        loc_805E5DD:
            →puts("then/else block 7");
        }
        else {
        loc_805E5CE:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805E5CE;
    }
    else if(gvar_808A0A8) {
        goto loc_805E5DD;
    }
    else {
        goto loc_805E5BA;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_497() {
    if(!gvar_808A0A4) {
    loc_805E619:
        if(gvar_808A0AC) {
        loc_805E63C:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805E63C;
    }
    else if(gvar_808A0A8) {
        goto loc_805E63C;
    }
    else {
        goto loc_805E619;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_498() {
    if(!gvar_808A0A4) {
    loc_805E678:
        if(gvar_808A0AC) {
        loc_805E69B:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0A8) {
            goto loc_805E69B;
        }
        else {
            goto loc_805E678;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_499() {
    if(gvar_808A0A4 && !gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_5() {
    if((!gvar_808A0A4 && gvar_808A0A8 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_50() {
    if(!gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_500() {
    if(!gvar_808A0A4) {
    loc_805E736:
        if(gvar_808A0AC) {
        loc_805E74A:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805E74A;
    }
    else if(!gvar_808A0A8) {
        goto loc_805E736;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_501() {
    if(gvar_808A0A4 && (gvar_808A0B0 || gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_502() {
    if(!gvar_808A0A4) {
    loc_805E7F4:
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0A8) {
            goto loc_805E7F4;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_503() {
    if(!gvar_808A0A4) {
    loc_805E853:
        if(gvar_808A0AC) {
        loc_805E876:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        goto loc_805E876;
    }
    else {
        goto loc_805E853;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_504() {
    if(gvar_808A0A4) {
        goto loc_805E8BD;
    }
    else {
        if(!gvar_808A0AC && gvar_808A0A8) {
            goto loc_805E8C6;
        }
    loc_805E8BD:
        if(!gvar_808A0B0) {
        loc_805E8C6:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_505() {
    if(gvar_808A0A4) {
        goto loc_805E91C;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
    loc_805E91C:
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_506() {
    if(gvar_808A0A4) {
        goto loc_805E97B;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_805E984;
        }
        else if(gvar_808A0A8) {
            goto loc_805E984;
        }
    loc_805E97B:
        if(!gvar_808A0B0) {
        loc_805E984:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_507() {
    if(gvar_808A0A4) {
        goto loc_805E9DA;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_805E9E3;
        }
        if(gvar_808A0A8) {
        loc_805E9E3:
            →puts("then/else block 6");
        }
        else {
        loc_805E9DA:
            if(gvar_808A0B0) {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_508() {
    if(gvar_808A0A4) {
        goto loc_805EA39;
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        loc_805EA39:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_509() {
    if(gvar_808A0A4) {
        goto loc_805EA98;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else {
    loc_805EA98:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_51() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            goto loc_80540A2;
        }
        else {
            goto loc_80540AB;
        }
    }
    else if(gvar_808A0AC) {
    loc_80540A2:
        if(!gvar_808A0B0) {
        loc_80540AB:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_510() {
    if(gvar_808A0A4) {
        goto loc_805EAF7;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else {
    loc_805EAF7:
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_511() {
    if(gvar_808A0A4) {
        goto loc_805EB56;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
            goto loc_805EB5F;
        }
    loc_805EB56:
        if(!gvar_808A0B0) {
        loc_805EB5F:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_512() {
    if(gvar_808A0A4) {
        goto loc_805EBB5;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
        loc_805EBB5:
            if(gvar_808A0B0) {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_513() {
    if(gvar_808A0A4) {
        goto loc_805EC14;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else {
    loc_805EC14:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_514() {
    if(gvar_808A0A4) {
        goto loc_805EC73;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
    loc_805EC73:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_515() {
    if(gvar_808A0A4) {
        goto loc_805ECD2;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_805ECDB;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_805ECD2:
        if(!gvar_808A0B0) {
        loc_805ECDB:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_516() {
    if(gvar_808A0A4) {
        goto loc_805ED31;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else {
    loc_805ED31:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_517() {
    if(gvar_808A0A4) {
        goto loc_805ED90;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else {
    loc_805ED90:
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_518() {
    if(gvar_808A0A4) {
        goto loc_805EDEF;
    }
    else {
        if(!gvar_808A0AC && !gvar_808A0A8) {
        loc_805EDEF:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_519() {
    if(gvar_808A0A4) {
        goto loc_805EE4E;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_805EE66;
        }
        if(gvar_808A0A8) {
        loc_805EE66:
            →puts("then/else block 7");
        }
        else {
        loc_805EE4E:
            if(gvar_808A0B0) {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_52() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            goto loc_8054101;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
    loc_8054101:
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_520() {
    if(gvar_808A0A4) {
        goto loc_805EEAD;
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0A8) {
        loc_805EEAD:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_521() {
    if(gvar_808A0A4) {
        goto loc_805EF0C;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_805EF0C:
            if(gvar_808A0B0) {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_522() {
    if(gvar_808A0A4) {
        goto loc_805EF6B;
    }
    else {
        if(gvar_808A0AC) {
        loc_805EF6B:
            if(gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_523() {
    if(gvar_808A0A4) {
        goto loc_805EFCA;
    }
    else {
        if(gvar_808A0AC) {
        loc_805EFCA:
            if(gvar_808A0B0) {
                goto loc_805EFE2;
            }
        }
        if(gvar_808A0A8) {
        loc_805EFE2:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_524() {
    if(gvar_808A0A4) {
        goto loc_805F029;
    }
    else {
        if(gvar_808A0AC) {
        loc_805F029:
            if(gvar_808A0B0) {
                goto loc_805F041;
            }
            else {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
        loc_805F041:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_525() {
    if(gvar_808A0A4) {
        goto loc_805F088;
    }
    else {
        if(gvar_808A0AC) {
        loc_805F088:
            if(!gvar_808A0B0) {
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_526() {
    if(gvar_808A0A4) {
        goto loc_805F0E7;
    }
    else {
        if(gvar_808A0AC) {
        loc_805F0E7:
            if(!gvar_808A0B0) {
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_527() {
    if(gvar_808A0A4) {
        goto loc_805F146;
    }
    else {
        if(gvar_808A0AC) {
        loc_805F146:
            if(!gvar_808A0B0) {
                →puts("return block");
                return 0;
            }
            goto loc_805F15E;
        }
        if(gvar_808A0A8) {
        loc_805F15E:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_528() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(!gvar_808A0AC) {
        loc_805F18F:
            if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else {
        goto loc_805F18F;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_529() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_805F1EE:
            if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
    loc_805F20D:
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_805F1EE;
    }
    else {
        goto loc_805F20D;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_53() {
    if(gvar_808A0A4) {
    loc_8054155:
        if(gvar_808A0AC) {
        loc_8054169:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8054169;
    }
    else if(!gvar_808A0B0) {
        goto loc_8054155;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_530() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_805F24D:
            if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_805F24D;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_531() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_532() {
    if((gvar_808A0A4 && gvar_808A0B0) || (!gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_533() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC && gvar_808A0A8) {
        loc_805F398:
            →puts("then/else block 7");
        }
        else {
        loc_805F389:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805F398;
    }
    else {
        goto loc_805F389;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_534() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_805F3C9:
            if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_805F3C9;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_535() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_536() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC && gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_805F4A6:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805F4A6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_537() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC && gvar_808A0A8) {
        loc_805F514:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805F514;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_538() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_805F573;
        }
    loc_805F545:
        if(gvar_808A0A8) {
        loc_805F573:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else {
        goto loc_805F545;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_539() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_805F5D2;
        }
    loc_805F5A4:
        if(gvar_808A0A8) {
        loc_805F5D2:
            →puts("then/else block 7");
        }
        else {
        loc_805F5C3:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_805F5A4;
    }
    else {
        goto loc_805F5C3;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_54() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_540() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_805F631;
        }
    loc_805F603:
        if(gvar_808A0A8) {
        loc_805F631:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_805F603;
    }
    else {
        goto loc_805F631;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_541() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_805F690;
        }
        if(gvar_808A0A8) {
        loc_805F690:
            →puts("then/else block 7");
        }
        else {
        loc_805F681:
            →puts("then/else block 6");
        }
    }
    else {
        goto loc_805F681;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_542() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_805F6EF;
        }
        if(gvar_808A0A8) {
        loc_805F6EF:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else {
        goto loc_805F6EF;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_543() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_805F74E;
        }
        if(gvar_808A0A8) {
        loc_805F74E:
            →puts("then/else block 7");
        }
        else {
        loc_805F73F:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805F74E;
    }
    else {
        goto loc_805F73F;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_544() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_805F7AD;
        }
    loc_805F77F:
        if(gvar_808A0A8) {
        loc_805F7AD:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805F77F;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_545() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC || gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_546() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_805F86B;
        }
        if(gvar_808A0A8) {
        loc_805F86B:
            →puts("then/else block 7");
        }
        else {
        loc_805F85C:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805F85C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_547() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_805F8CA;
        }
        if(gvar_808A0A8) {
        loc_805F8CA:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805F8CA;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_548() {
    if(gvar_808A0A4) {
        goto loc_805F911;
    }
    else {
        if(!gvar_808A0AC) {
        loc_805F911:
            if(!gvar_808A0B0 && gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_549() {
    if(gvar_808A0A4) {
        goto loc_805F970;
    }
    else {
        if(!gvar_808A0AC) {
        loc_805F970:
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_55() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_550() {
    if(!gvar_808A0A4 && gvar_808A0AC) {
    loc_805F9D8:
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0A8) {
            goto loc_805F9D8;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_551() {
    if((!gvar_808A0A4 && gvar_808A0AC) || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_552() {
    if((!gvar_808A0A4 && gvar_808A0AC) || gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_553() {
    if(!gvar_808A0A4 && gvar_808A0AC) {
    loc_805FB04:
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0A8) {
            goto loc_805FB04;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_554() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_805FB63:
            →puts("then/else block 7");
        }
        else {
        loc_805FB54:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_805FB54;
    }
    else {
        goto loc_805FB63;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_555() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        goto loc_805FBC2;
    }
    else if(gvar_808A0AC) {
    loc_805FBC2:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_556() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_805FC21;
        }
        else if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else {
            goto loc_805FC21;
        }
    }
    else if(gvar_808A0AC) {
    loc_805FC21:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_557() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_805FC80:
            →puts("then/else block 7");
        }
        else {
        loc_805FC71:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0A8) {
            goto loc_805FC71;
        }
        else {
            goto loc_805FC80;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_558() {
    if((gvar_808A0A4 && !gvar_808A0B0) || gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_559() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            goto loc_805FD10;
        }
        else {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
    loc_805FD10:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_56() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8054286;
        }
        if(!gvar_808A0B0) {
            goto loc_8054272;
        }
        else {
        loc_8054286:
            →puts("then/else block 6");
        }
    }
    else {
    loc_8054272:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_560() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            goto loc_805FD6F;
        }
        else {
            goto loc_805FD9D;
        }
    }
    else if(gvar_808A0AC) {
    loc_805FD6F:
        if(gvar_808A0A8) {
        loc_805FD9D:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_561() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_562() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        goto loc_805FE5B;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_805FE5B:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_563() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_805FEBA;
        }
        else {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_805FEBA:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_564() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_805FEEB;
        }
    }
    else if(gvar_808A0AC) {
    loc_805FEEB:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_565() {
    if((!gvar_808A0A4 || gvar_808A0B0) && gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_566() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_567() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8060036;
        }
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_8060036:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_568() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0B0 || !gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_569() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_57() {
    if(gvar_808A0A4) {
    loc_80542D1:
        if(gvar_808A0AC) {
        loc_80542F4:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_80542D1;
    }
    else {
        goto loc_80542F4;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_570() {
    if((gvar_808A0A4 || gvar_808A0AC) && gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_571() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_80601A3:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_80601A3;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_572() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_573() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8060270;
        }
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_8060270:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_574() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            if(!gvar_808A0A8) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_575() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_806032E:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_806032E;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_576() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_577() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_578() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_579() {
    if(!gvar_808A0A4 || gvar_808A0B0 || gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_58() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8054344;
        }
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_8054344:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_580() {
    if(!gvar_808A0A4) {
    loc_80604E6:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_80604FA:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_80604FA;
    }
    else if(gvar_808A0A8) {
        goto loc_80604E6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_581() {
    if(!gvar_808A0A4) {
    loc_8060545:
        if(gvar_808A0AC) {
        loc_8060568:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8060568;
    }
    else if(gvar_808A0A8) {
        goto loc_8060545;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_582() {
    if(!gvar_808A0A4 || (gvar_808A0B0 && gvar_808A0A8)) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_583() {
    if(!gvar_808A0A4) {
    loc_8060603:
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        goto loc_8060603;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_584() {
    if(!gvar_808A0A4) {
    loc_8060662:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        goto loc_8060662;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_585() {
    if(gvar_808A0A4) {
        goto loc_80606CC;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_80606CC;
        }
        if(gvar_808A0A8) {
        loc_80606CC:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_586() {
    if(gvar_808A0A4) {
        goto loc_806072B;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8060734;
        }
        if(gvar_808A0A8) {
        loc_806072B:
            if(!gvar_808A0B0) {
            loc_8060734:
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_587() {
    if(gvar_808A0A4) {
        goto loc_806078A;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
    loc_806078A:
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_588() {
    if(gvar_808A0A4) {
        goto loc_80607E9;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
    loc_80607E9:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_589() {
    if(gvar_808A0A4) {
        goto loc_8060848;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
    loc_8060848:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_59() {
    if(gvar_808A0A4) {
    loc_805438F:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_805438F;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_590() {
    if(gvar_808A0A4 || (gvar_808A0AC && gvar_808A0A8)) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_591() {
    if(gvar_808A0A4) {
        goto loc_8060906;
    }
    else {
        if(gvar_808A0AC) {
        loc_8060906:
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_592() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_593() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_594() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_8060A2C;
        }
    loc_8060A0D:
        if(gvar_808A0A8) {
        loc_8060A2C:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_8060A0D;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_595() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_596() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_8060AEA;
        }
        if(gvar_808A0A8) {
        loc_8060AEA:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_8060AEA;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_597() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_598() {
    if(gvar_808A0A4 && !gvar_808A0B0) {
        goto loc_8060B89;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
    loc_8060B89:
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_599() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_8060BE8:
            if(gvar_808A0A8) {
            loc_8060C07:
                →puts("then/else block 6");
            }
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_8060BE8;
    }
    else {
        goto loc_8060C07;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_6() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        if(!gvar_808A0B0) {
        loc_8052FF8:
            →puts("then/else block 6");
        }
        else {
        loc_8053007:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_8052FF8;
    }
    else {
        goto loc_8053007;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_60() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 || gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_600() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8060C75:
            →puts("then/else block 7");
        }
        else {
        loc_8060C47:
            if(gvar_808A0A8) {
                →puts("then/else block 6");
            }
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_8060C47;
    }
    else {
        goto loc_8060C75;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_601() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_602() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_603() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8060D92:
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
        loc_8060D83:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8060D92;
    }
    else {
        goto loc_8060D83;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_604() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_8060DC3:
            if(gvar_808A0A8) {
                →puts("then/else block 6");
            }
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8060DC3;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_605() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_606() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
        loc_8060EA0:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8060EA0;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_607() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8060F0E:
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8060F0E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_608() {
    if(gvar_808A0A4) {
        goto loc_8060F55;
    }
    else {
        if(!gvar_808A0AC) {
        loc_8060F55:
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0A8) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_609() {
    if(gvar_808A0A4) {
        goto loc_8060FB4;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
    loc_8060FB4:
        if(gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_61() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_610() {
    if(gvar_808A0A4) {
        goto loc_8061013;
    }
    else {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_8061013:
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_611() {
    if(gvar_808A0A4) {
        goto loc_8061072;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
    loc_8061072:
        if(gvar_808A0B0 && gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_612() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_80610DA:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_80610DA;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_613() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_614() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_80611A7;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
    loc_80611A7:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_615() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_80611F7:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0 && gvar_808A0A8) {
        goto loc_80611F7;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_616() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            goto loc_8061237;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
    loc_8061237:
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_617() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_618() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_619() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_62() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(!gvar_808A0A8) {
        loc_80544B7:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else {
        goto loc_80544B7;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_620() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_621() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_622() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_623() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_624() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_625() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 && gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_626() {
    if(gvar_808A0A4) {
        goto loc_8061603;
    }
    else {
        if(gvar_808A0AC) {
        loc_8061603:
            if(gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_627() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_628() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_629() {
    if(gvar_808A0A4 && !gvar_808A0B0) {
        goto loc_806170A;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
    loc_806170A:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_63() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        goto loc_8054516;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
    loc_8054516:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_630() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8061788:
            →puts("then/else block 6");
        }
        else {
        loc_8061769:
            if(gvar_808A0A8) {
                →puts("then/else block 7");
            }
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_8061769;
    }
    else {
        goto loc_8061788;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_631() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else {
        loc_80617C8:
            if(gvar_808A0A8) {
            loc_80617F6:
                →puts("then/else block 7");
            }
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_80617C8;
    }
    else {
        goto loc_80617F6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_632() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_633() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_634() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8061904:
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
        loc_8061913:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8061913;
    }
    else {
        goto loc_8061904;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_635() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else {
        loc_8061944:
            if(gvar_808A0A8) {
                →puts("then/else block 7");
            }
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8061944;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_636() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_637() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8061A21:
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8061A21;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_638() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
        loc_8061A8F:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8061A8F;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_639() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_8061AEE;
        }
    loc_8061AC0:
        if(gvar_808A0A8) {
        loc_8061AEE:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_8061AC0;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_64() {
    if((gvar_808A0A4 && gvar_808A0AC) || (!gvar_808A0A8 && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_640() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_641() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_8061BAC;
        }
        if(gvar_808A0A8) {
        loc_8061BAC:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8061BAC;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_642() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_643() {
    if(gvar_808A0A4) {
        goto loc_8061C52;
    }
    else {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_8061C52:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_644() {
    if(gvar_808A0A4) {
        goto loc_8061CB1;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
    loc_8061CB1:
        if(gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_645() {
    if(gvar_808A0A4) {
        goto loc_8061D10;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
    loc_8061D10:
        if(gvar_808A0B0 && gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_646() {
    if(gvar_808A0A4) {
        goto loc_8061D6F;
    }
    else {
        if(!gvar_808A0AC) {
        loc_8061D6F:
            if(gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0A8) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_647() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_8061DE6:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8061DE6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_648() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            goto loc_8061E45;
        }
    }
    else if(gvar_808A0AC) {
    loc_8061E45:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_649() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8061EA4;
        }
        else if(gvar_808A0A8) {
            goto loc_8061EA4;
        }
    }
    else if(gvar_808A0AC) {
    loc_8061EA4:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_65() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_650() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8061F03:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0 && gvar_808A0A8) {
        goto loc_8061F03;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_651() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            goto loc_8061F34;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
    loc_8061F34:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_652() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_653() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_654() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_655() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_656() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_657() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_658() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_659() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0 && gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_66() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_660() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_661() {
    if(gvar_808A0A4) {
        goto loc_8062309;
    }
    else {
        if(!gvar_808A0AC && gvar_808A0A8) {
            goto loc_8062309;
        }
        if(!gvar_808A0B0) {
        loc_8062309:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_662() {
    if(gvar_808A0A4 || (!gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_663() {
    if(gvar_808A0A4) {
        goto loc_80623C7;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_80623C7;
        }
        else if(gvar_808A0A8) {
            goto loc_80623C7;
        }
        if(!gvar_808A0B0) {
        loc_80623C7:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_664() {
    if(gvar_808A0A4) {
        goto loc_8062426;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8062426;
        }
        if(gvar_808A0A8) {
        loc_8062426:
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_665() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_666() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_667() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_668() {
    if(gvar_808A0A4) {
        goto loc_80625A2;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
            goto loc_80625A2;
        }
        if(!gvar_808A0B0) {
        loc_80625A2:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_669() {
    if(gvar_808A0A4) {
        goto loc_8062601;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_8062601:
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_67() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0A8 && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_670() {
    if(gvar_808A0A4) {
        goto loc_8062660;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0) {
    loc_8062660:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_671() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_672() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((!gvar_808A0AC && gvar_808A0A8) || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_673() {
    if(gvar_808A0A4) {
        goto loc_806277D;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_806277D;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        if(!gvar_808A0B0) {
        loc_806277D:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_674() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_675() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_676() {
    if(gvar_808A0A4 || (!gvar_808A0AC && !gvar_808A0A8 && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_677() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_8062908;
    }
    if(gvar_808A0A8) {
    loc_8062908:
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_678() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_679() {
    if(gvar_808A0A4) {
        goto loc_80629B7;
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0A8 && !gvar_808A0B0) {
        loc_80629B7:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_68() {
    if((gvar_808A0A4 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_680() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_681() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && (gvar_808A0A8 || gvar_808A0B0)) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_682() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if((!gvar_808A0AC || !gvar_808A0B0) && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_683() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC && gvar_808A0B0) {
        goto loc_8062B42;
    }
    if(gvar_808A0A8) {
    loc_8062B42:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_684() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_8062BA1;
        }
        else {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    if(gvar_808A0A8) {
    loc_8062BA1:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_685() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC || gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_686() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_687() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("return block");
            return 0;
        }
        goto loc_8062CBE;
    }
    if(gvar_808A0A8) {
    loc_8062CBE:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_688() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if((!gvar_808A0AC && !gvar_808A0B0) && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_689() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_69() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_8054750:
            if(!gvar_808A0B0) {
                goto loc_8054759;
            }
            else {
            loc_8054768:
                →puts("then/else block 7");
            }
        }
        else {
        loc_8054759:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8054750;
    }
    else {
        goto loc_8054768;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_690() {
    if(gvar_808A0A4 || gvar_808A0AC) {
    loc_8062DCC:
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0A8) {
            goto loc_8062DCC;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_691() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_692() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC || gvar_808A0B0) {
        goto loc_8062E99;
    }
    if(gvar_808A0A8) {
    loc_8062E99:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_693() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
    loc_8062EF8:
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0A8) {
            goto loc_8062EF8;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_694() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0 && gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_695() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_8062FB6;
        }
        if(gvar_808A0A8) {
        loc_8062FB6:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_696() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_697() {
    if(gvar_808A0A4) {
        goto loc_8063065;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_806305C;
        }
        if(gvar_808A0A8) {
        loc_806305C:
            if(!gvar_808A0B0) {
            loc_8063065:
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_698() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((gvar_808A0AC || gvar_808A0A8) && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_699() {
    if(gvar_808A0A4) {
        goto loc_8063123;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8063123;
        }
        if(gvar_808A0A8) {
            if(!gvar_808A0B0) {
            loc_8063123:
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_7() {
    if(gvar_808A0A4 || !gvar_808A0A8 || gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_70() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_80547AF:
            if(!gvar_808A0B0) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8) {
        goto loc_80547AF;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_700() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_701() {
    if(gvar_808A0A4) {
        goto loc_80631E1;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
        loc_80631E1:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_702() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_703() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || (gvar_808A0A8 && gvar_808A0B0)) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_704() {
    if(gvar_808A0A4) {
        goto loc_80632FE;
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        if(!gvar_808A0B0) {
        loc_80632FE:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_705() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_706() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_707() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_708() {
    if(gvar_808A0A4) {
        goto loc_806347A;
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_806347A:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_709() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0A8) {
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_71() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_805480E:
            if(gvar_808A0B0) {
            loc_8054826:
                →puts("then/else block 7");
            }
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_805480E;
    }
    else {
        goto loc_8054826;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_710() {
    if(gvar_808A0A4) {
        goto loc_8063538;
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_8063538;
        }
        if(gvar_808A0A8) {
        loc_8063538:
            →puts("then/else block 6");
        }
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_711() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_712() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_713() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_714() {
    if(gvar_808A0A4 || (gvar_808A0AC && gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_715() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((gvar_808A0AC && gvar_808A0B0) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_716() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_717() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((!gvar_808A0AC || gvar_808A0B0) && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_718() {
    if(gvar_808A0A4) {
        goto loc_8063830;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
        loc_8063830:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_719() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_72() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_805486D:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
    loc_8054885:
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        goto loc_805486D;
    }
    else {
        goto loc_8054885;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_720() {
    if(gvar_808A0A4 || gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_721() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_722() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_723() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0A8) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_724() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_725() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || (gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_726() {
    if(gvar_808A0A4) {
        goto loc_8063B28;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
        loc_8063B28:
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_727() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && (gvar_808A0B0 || gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_728() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_729() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC && gvar_808A0A8) {
        goto loc_8063C45;
    }
    if(!gvar_808A0B0) {
    loc_8063C45:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_73() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_80548E4:
            →puts("then/else block 7");
        }
        else {
        loc_80548CC:
            if(gvar_808A0B0) {
                →puts("then/else block 6");
            }
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_80548CC;
    }
    else {
        goto loc_80548E4;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_730() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((!gvar_808A0AC && gvar_808A0A8) || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_731() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_732() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_8063D62;
    }
    else if(gvar_808A0A8) {
        goto loc_8063D62;
    }
    if(!gvar_808A0B0) {
    loc_8063D62:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_733() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_734() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_8063E20;
    }
    if(gvar_808A0A8) {
    loc_8063E20:
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_735() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 7");
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_736() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_737() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_738() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
            goto loc_8063F9C;
        }
        if(!gvar_808A0B0) {
        loc_8063F9C:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_739() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC && (gvar_808A0A8 || gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_74() {
    if(gvar_808A0A4) {
    loc_8054920:
        if(gvar_808A0AC) {
        loc_8054943:
            →puts("then/else block 7");
        }
        else {
        loc_8054934:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8054943;
    }
    else if(!gvar_808A0B0) {
        goto loc_8054920;
    }
    else {
        goto loc_8054934;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_740() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_741() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_742() {
    if(gvar_808A0A4 || (!gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_743() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_8064177;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0B0) {
    loc_8064177:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_744() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_745() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_746() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && !gvar_808A0A8 && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_747() {
    if(gvar_808A0A4) {
        goto loc_8064302;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8064302;
        }
        if(gvar_808A0A8) {
        loc_8064302:
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_748() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0A8 && !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_749() {
    if(gvar_808A0A4) {
        goto loc_80643C0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_80643C0:
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_75() {
    if(gvar_808A0A4) {
    loc_805497F:
        if(gvar_808A0AC) {
        loc_80549A2:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_80549A2;
    }
    else if(!gvar_808A0B0) {
        goto loc_805497F;
    }
    else {
        goto loc_80549A2;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_750() {
    if(gvar_808A0A4 || ((!gvar_808A0AC || !gvar_808A0B0) && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_751() {
    if(gvar_808A0A4) {
        goto loc_806447E;
    }
    else {
        if(gvar_808A0AC && gvar_808A0B0) {
            goto loc_806447E;
        }
        if(gvar_808A0A8) {
        loc_806447E:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_752() {
    if(gvar_808A0A4) {
        goto loc_80644DD;
    }
    else {
        if(gvar_808A0AC) {
            if(gvar_808A0B0) {
                goto loc_80644DD;
            }
            else {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
        loc_80644DD:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_753() {
    if(gvar_808A0A4) {
        goto loc_806453C;
    }
    else if(!gvar_808A0AC || gvar_808A0B0) {
        if(gvar_808A0A8) {
        loc_806453C:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_754() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(gvar_808A0AC) {
            if(!gvar_808A0B0) {
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_755() {
    if(gvar_808A0A4) {
        goto loc_80645FA;
    }
    else {
        if(gvar_808A0AC) {
            if(!gvar_808A0B0) {
                →puts("return block");
                return 0;
            }
            goto loc_80645FA;
        }
        if(gvar_808A0A8) {
        loc_80645FA:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_756() {
    if(gvar_808A0A4 || ((!gvar_808A0AC && !gvar_808A0B0) && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_757() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_758() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
    loc_8064708:
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0A8) {
            goto loc_8064708;
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_759() {
    if(gvar_808A0A4 || gvar_808A0AC || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_76() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8054A01;
        }
        else if(gvar_808A0B0) {
            goto loc_8054A01;
        }
        else {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
    loc_8054A01:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_760() {
    if(gvar_808A0A4) {
        goto loc_80647D5;
    }
    else {
        if(gvar_808A0AC || gvar_808A0B0) {
            goto loc_80647D5;
        }
        if(gvar_808A0A8) {
        loc_80647D5:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_761() {
    if(gvar_808A0A4 || gvar_808A0AC) {
    loc_8064834:
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0A8) {
            goto loc_8064834;
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_762() {
    if(gvar_808A0A4) {
        goto loc_8064893;
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0 && gvar_808A0A8) {
        loc_8064893:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_763() {
    if(gvar_808A0A4) {
        goto loc_80648F2;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_80648F2;
        }
        if(gvar_808A0A8) {
        loc_80648F2:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_764() {
    if(gvar_808A0A4) {
        goto loc_8064951;
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        if(gvar_808A0A8) {
        loc_8064951:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_765() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_8064998;
    }
    if(gvar_808A0A8) {
    loc_8064998:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_766() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((gvar_808A0AC || gvar_808A0A8) && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_767() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_8064A5F;
    }
    if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
        loc_8064A5F:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_768() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || (gvar_808A0A8 && gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_769() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_77() {
    if(gvar_808A0A4) {
    loc_8054A3D:
        if(gvar_808A0AC) {
        loc_8054A60:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8054A60;
    }
    else if(gvar_808A0B0) {
        goto loc_8054A3D;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_770() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_771() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_772() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_773() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC && gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_774() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((gvar_808A0AC && gvar_808A0B0) || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_775() {
    if(gvar_808A0A4 || (gvar_808A0AC && gvar_808A0B0)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_776() {
    if(gvar_808A0A4) {
        goto loc_8064DC5;
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_8064DC5:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_777() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((!gvar_808A0AC || gvar_808A0B0) && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_778() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_779() {
    if(gvar_808A0A4) {
        goto loc_8064EE2;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
        loc_8064EE2:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_78() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8054ABF;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
    loc_8054ABF:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_780() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_781() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0A8) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_782() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || (gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_783() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_784() {
    if(gvar_808A0A4 || gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_785() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_786() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC && (gvar_808A0B0 || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_787() {
    if(gvar_808A0A4) {
        goto loc_80651DA;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
        loc_80651DA:
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_788() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC && gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_789() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_79() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8054B1E;
        }
        else if(gvar_808A0B0) {
            goto loc_8054B1E;
        }
    }
    else if(gvar_808A0AC) {
    loc_8054B1E:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_790() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_791() {
    if(gvar_808A0A4) {
        goto loc_8065356;
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_8065356:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_792() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_793() {
    if(gvar_808A0A4) {
        goto loc_8065414;
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_8065414;
        }
        if(gvar_808A0A8) {
        loc_8065414:
            →puts("then/else block 7");
        }
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_794() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_795() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0A8) {
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 7");
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_796() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_797() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_806556D;
    }
    if(!gvar_808A0A8) {
    loc_806556D:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_798() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 && !gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_799() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_806564E;
    }
    if(!gvar_808A0A8 && gvar_808A0AC) {
    loc_806564E:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_8() {
    if(gvar_808A0A4 || !gvar_808A0A8) {
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_80() {
    if(!gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_800() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0A8 && gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_801() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_802() {
    if(gvar_808A0A4 || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_803() {
    if(gvar_808A0A4 || gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_804() {
    if(gvar_808A0A4) {
        goto loc_806581A;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
    loc_806581A:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_805() {
    if(gvar_808A0A4) {
    loc_8065879:
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0A8) {
            goto loc_8065879;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_806() {
    if(gvar_808A0A4) {
        goto loc_80658D8;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80658C4;
        }
        if(!gvar_808A0A8) {
        loc_80658C4:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        loc_80658D8:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_807() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 && (gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_808() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_80659A5;
    }
    if(gvar_808A0A8 || gvar_808A0AC) {
    loc_80659A5:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_809() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0A8 || gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_81() {
    if(!gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_810() {
    if(gvar_808A0A4) {
        goto loc_8065A54;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8065A40;
        }
        if(!gvar_808A0A8) {
        loc_8065A40:
            if(gvar_808A0AC) {
            loc_8065A54:
                →puts("then/else block 6");
            }
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_811() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_812() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_813() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_814() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_8065BBC;
    }
    else {
        if(!gvar_808A0A8) {
        loc_8065BBC:
            if(!gvar_808A0AC) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_815() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_816() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 || gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_817() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 && (gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_818() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_819() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 && !gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_82() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            goto loc_8054C23;
        }
        else {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
    loc_8054C23:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_820() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_8065E19;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0A8) {
    loc_8065E19:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_821() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0AC && gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_822() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0 && gvar_808A0AC) {
        goto loc_8065ED7;
    }
    if(gvar_808A0A8) {
    loc_8065ED7:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_823() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_824() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_8065F95;
    }
    else if(gvar_808A0AC) {
        goto loc_8065F95;
    }
    if(gvar_808A0A8) {
    loc_8065F95:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_825() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_8065FF4;
        }
        if(gvar_808A0A8) {
        loc_8065FF4:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_826() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        goto loc_8066053;
    }
    if(gvar_808A0A8) {
    loc_8066053:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_827() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 || gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_828() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_829() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_8066170;
    }
    if(gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_8066170:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_83() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            goto loc_8054C82;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
    loc_8054C82:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_830() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_831() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        if(!gvar_808A0AC) {
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_832() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        if(!gvar_808A0AC) {
            →puts("return block");
            return 0;
        }
        goto loc_806628D;
    }
    if(gvar_808A0A8) {
    loc_806628D:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_833() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_80662C9;
    }
    if(gvar_808A0A8) {
    loc_80662C9:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_834() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_835() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_80663AA;
    }
    if(gvar_808A0A8) {
        if(gvar_808A0AC) {
        loc_80663AA:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_836() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 && gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_837() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_838() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((gvar_808A0B0 || gvar_808A0A8) && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_839() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_84() {
    if(gvar_808A0A4) {
    loc_8054CD6:
        if(gvar_808A0AC) {
        loc_8054CEA:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        goto loc_8054CD6;
    }
    else {
        goto loc_8054CEA;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_840() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 || (gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_841() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 && gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_842() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_843() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_844() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_845() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_8066760;
    }
    if(gvar_808A0AC) {
    loc_8066760:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_846() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_847() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_848() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_849() {
    if(gvar_808A0A4) {
        goto loc_80668CD;
    }
    else if(!gvar_808A0B0) {
        if(gvar_808A0A8) {
        loc_80668CD:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_85() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8054D58;
        }
        if(!gvar_808A0B0) {
            goto loc_8054D35;
        }
        else {
        loc_8054D58:
            →puts("then/else block 7");
        }
    }
    else {
    loc_8054D35:
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_850() {
    if(gvar_808A0A4 || (gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_851() {
    if(gvar_808A0A4) {
        goto loc_806698B;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_806698B;
        }
        if(gvar_808A0AC) {
        loc_806698B:
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_852() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_853() {
    if(gvar_808A0A4) {
        goto loc_8066A49;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_8066A49:
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_854() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((gvar_808A0B0 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_855() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_856() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_857() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 && (gvar_808A0AC || gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_858() {
    if(gvar_808A0A4) {
        goto loc_8066C24;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_8066C24:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_859() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((!gvar_808A0B0 || gvar_808A0AC) && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_86() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8 && !gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_860() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_861() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 || (gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_862() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 && gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_863() {
    if(gvar_808A0A4) {
        goto loc_8066DFF;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_8066DFF:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_864() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_865() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8066EA9;
        }
        if(!gvar_808A0A8) {
        loc_8066EA9:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_866() {
    if(gvar_808A0A4 || (!gvar_808A0B0 && !gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_867() {
    if(gvar_808A0A4) {
        goto loc_8066F8A;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8066F8A;
        }
        if(!gvar_808A0A8 && gvar_808A0AC) {
        loc_8066F8A:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_868() {
    if(gvar_808A0A4) {
        goto loc_8066FE9;
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0A8 && gvar_808A0AC) {
        loc_8066FE9:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_869() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_8067025;
    }
    else {
        if(!gvar_808A0A8) {
        loc_8067025:
            if(!gvar_808A0AC) {
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_87() {
    if(gvar_808A0A4) {
    loc_8054DF3:
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_8054DF3;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_870() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_871() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_872() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 && (gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_873() {
    if(gvar_808A0A4) {
        goto loc_80671C4;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80671A1;
        }
        if(!gvar_808A0A8) {
        loc_80671A1:
            if(gvar_808A0AC) {
            loc_80671C4:
                →puts("then/else block 7");
            }
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_874() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_875() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_876() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_877() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_806731D;
    }
    if(!gvar_808A0A8) {
    loc_806731D:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_878() {
    if(gvar_808A0A4 || (!gvar_808A0B0 && (gvar_808A0A8 || gvar_808A0AC))) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_879() {
    if(gvar_808A0A4) {
        goto loc_80673FE;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80673FE;
        }
        if(gvar_808A0A8 || gvar_808A0AC) {
        loc_80673FE:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_88() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_880() {
    if(gvar_808A0A4) {
        goto loc_806745D;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0A8 || gvar_808A0AC) {
        loc_806745D:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_881() {
    if(gvar_808A0A4 || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_882() {
    if(gvar_808A0A4) {
        goto loc_806751B;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
    loc_806751B:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_883() {
    if(gvar_808A0A4 || gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_884() {
    if(gvar_808A0A4) {
    loc_80675D9:
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0A8) {
            goto loc_80675D9;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_885() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_886() {
    if(gvar_808A0A4) {
        goto loc_8067697;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
    loc_8067697:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_887() {
    if(gvar_808A0A4 || (!gvar_808A0B0 && !gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_888() {
    if(gvar_808A0A4) {
        goto loc_8067755;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8067755;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
        loc_8067755:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_889() {
    if(gvar_808A0A4) {
        goto loc_80677B4;
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0AC && gvar_808A0A8) {
        loc_80677B4:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_89() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 || gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_890() {
    if(gvar_808A0A4) {
        goto loc_8067813;
    }
    else {
        if(gvar_808A0B0 && gvar_808A0AC) {
            goto loc_8067813;
        }
        if(gvar_808A0A8) {
        loc_8067813:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_891() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(!gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_892() {
    if(gvar_808A0A4) {
        goto loc_80678D1;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80678D1;
        }
        else if(gvar_808A0AC) {
            goto loc_80678D1;
        }
        if(gvar_808A0A8) {
        loc_80678D1:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_893() {
    if(gvar_808A0A4) {
        goto loc_8067930;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_8067930;
        }
        if(gvar_808A0A8) {
        loc_8067930:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_894() {
    if(gvar_808A0A4) {
        goto loc_806798F;
    }
    else {
        if(gvar_808A0B0) {
            if(!gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            goto loc_806798F;
        }
        if(gvar_808A0A8) {
        loc_806798F:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_895() {
    if(gvar_808A0A4) {
        goto loc_80679EE;
    }
    else if(!gvar_808A0B0 || gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_80679EE:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_896() {
    if(gvar_808A0A4) {
        goto loc_8067A4D;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_8067A4D:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_897() {
    if(gvar_808A0A4) {
        goto loc_8067AAC;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8067AAC;
        }
        if(gvar_808A0AC) {
            if(gvar_808A0A8) {
            loc_8067AAC:
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_898() {
    if(gvar_808A0A4) {
        goto loc_8067B0B;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_8067B0B:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_899() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(gvar_808A0B0) {
            if(!gvar_808A0AC) {
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_9() {
    if(gvar_808A0A4 || !gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_90() {
    if(gvar_808A0A4) {
    loc_8054F10:
        if(gvar_808A0AC) {
        loc_8054F33:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8054F33;
    }
    else if(!gvar_808A0B0) {
        goto loc_8054F10;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_900() {
    if(gvar_808A0A4) {
        goto loc_8067BC9;
    }
    else {
        if(gvar_808A0B0) {
            if(!gvar_808A0AC) {
                →puts("return block");
                return 0;
            }
            goto loc_8067BC9;
        }
        if(gvar_808A0A8) {
        loc_8067BC9:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_901() {
    if(gvar_808A0A4) {
        goto loc_8067C28;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8067C05;
        }
        if(gvar_808A0A8) {
        loc_8067C05:
            if(gvar_808A0AC) {
            loc_8067C28:
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_902() {
    if(gvar_808A0A4) {
        goto loc_8067C87;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0AC) {
        loc_8067C87:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_903() {
    if(gvar_808A0A4) {
        goto loc_8067CE6;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8067CE6;
        }
        if(gvar_808A0A8) {
            if(gvar_808A0AC) {
            loc_8067CE6:
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_904() {
    if(gvar_808A0A4) {
        goto loc_8067D45;
    }
    else if(gvar_808A0B0 && gvar_808A0A8) {
        if(gvar_808A0AC) {
        loc_8067D45:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_905() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((gvar_808A0B0 || gvar_808A0A8) && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_906() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || (gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_907() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_908() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 && gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_909() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_91() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_910() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((gvar_808A0B0 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_911() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_912() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_913() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 && (gvar_808A0AC || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_914() {
    if(gvar_808A0A4 || (gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_915() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_916() {
    if(gvar_808A0A4) {
        goto loc_80681B9;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80681B9;
        }
        if(gvar_808A0AC) {
        loc_80681B9:
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_917() {
    if(gvar_808A0A4) {
        goto loc_8068218;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_8068218:
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_918() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_919() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((!gvar_808A0B0 || gvar_808A0AC) && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_92() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_920() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || (gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_921() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_922() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 && gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_923() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_924() {
    if(gvar_808A0A4) {
        goto loc_80684B1;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_80684B1:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_925() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_926() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_8068560;
    }
    if(gvar_808A0AC) {
    loc_8068560:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_927() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_928() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_929() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_93() {
    if(gvar_808A0A4 && gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_930() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_931() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_932() {
    if(gvar_808A0A4) {
        goto loc_80687A9;
    }
    else if(!gvar_808A0B0) {
        if(gvar_808A0A8) {
        loc_80687A9:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_933() {
    if(gvar_808A0A4) {
        if((!gvar_808A0A8 && gvar_808A0AC) || !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_934() {
    if(gvar_808A0A4) {
        if((!gvar_808A0A8 && gvar_808A0AC)) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_935() {
    if(gvar_808A0A4) {
        if((gvar_808A0A8 || !gvar_808A0AC) && !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_936() {
    if(gvar_808A0A4) {
        if((!gvar_808A0A8 && gvar_808A0AC)) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_937() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8 && gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_938() {
    if(gvar_808A0A4) {
        if((gvar_808A0A8 && gvar_808A0B0) || gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_939() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            if(!gvar_808A0B0) {
            loc_8068A33:
                →puts("then/else block 6");
            }
            else {
            loc_8068A42:
                →puts("then/else block 7");
            }
        }
        else if(!gvar_808A0AC) {
            goto loc_8068A33;
        }
        else {
            goto loc_8068A42;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_94() {
    if((gvar_808A0A4 && gvar_808A0AC && gvar_808A0B0) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_940() {
    if(gvar_808A0A4 && (!gvar_808A0A8 || gvar_808A0B0)) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_941() {
    if(gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_942() {
    if(gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_943() {
    if(gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC)) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_944() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8 && gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_945() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            if(!gvar_808A0B0) {
            loc_8068C6D:
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 7");
            }
        }
        else if(gvar_808A0AC) {
            goto loc_8068C6D;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_946() {
    if(gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0AC) {
                →puts("then/else block 6");
            }
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_947() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8 && gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_948() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
            }
            else {
            loc_8068D99:
                →puts("then/else block 7");
            }
        }
        else if(gvar_808A0AC) {
            goto loc_8068D99;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_949() {
    if(gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
            }
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_95() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_805510E:
            →puts("then/else block 7");
        }
        else {
        loc_80550FF:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805510E;
    }
    else {
        goto loc_80550FF;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_950() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8 || gvar_808A0AC || !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_951() {
    if(gvar_808A0A4) {
        if((gvar_808A0A8 || gvar_808A0AC)) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_952() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8 || (!gvar_808A0AC && !gvar_808A0B0)) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_953() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
        loc_8068F65:
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            goto loc_8068F65;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_954() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC || gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_955() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
        loc_8069023:
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            if(!gvar_808A0B0) {
                goto loc_8069023;
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_956() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC && gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_957() {
    if(gvar_808A0A4) {
        if(!gvar_808A0A8 && (gvar_808A0AC || !gvar_808A0B0)) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_958() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC || gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_959() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
        loc_80691AE:
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            goto loc_80691AE;
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_96() {
    if(!gvar_808A0A4 || !gvar_808A0AC || gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_960() {
    if(gvar_808A0A4) {
        if(!gvar_808A0A8 && !gvar_808A0AC && !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_961() {
    if(gvar_808A0A4) {
        if((gvar_808A0A8 || gvar_808A0AC)) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_962() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
        loc_80692CB:
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            if(gvar_808A0B0) {
                goto loc_80692CB;
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_963() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC && gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_964() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0B0 && gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_965() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0B0) {
            goto loc_80693E8;
        }
        if(gvar_808A0AC) {
        loc_80693E8:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_966() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_967() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_968() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8 || gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_969() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0 || gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_97() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_80551BD:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_80551BD;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_970() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0 && gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_971() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8 || (!gvar_808A0B0 && gvar_808A0AC)) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_972() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8069681;
        }
        else {
            if(gvar_808A0B0) {
                goto loc_8069681;
            }
            if(gvar_808A0AC) {
            loc_8069681:
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_973() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_80696E0;
        }
        else if(gvar_808A0B0) {
            if(gvar_808A0AC) {
            loc_80696E0:
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_974() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0 || gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_975() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8 || gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_976() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0 && gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_977() {
    if(gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_978() {
    if(gvar_808A0A4 && gvar_808A0A8) {
        if(gvar_808A0AC || !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_979() {
    if(gvar_808A0A4 && gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_98() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_805522B:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805522B;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_980() {
    if(gvar_808A0A4 && gvar_808A0A8) {
        if(!gvar_808A0AC && !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_981() {
    if(gvar_808A0A4 && gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_982() {
    if(gvar_808A0A4 && gvar_808A0A8 && gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_983() {
    if(gvar_808A0A4 && gvar_808A0A8) {
        if(gvar_808A0B0 || !gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_984() {
    if(gvar_808A0A4 && gvar_808A0A8) {
        if(gvar_808A0B0 || gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_985() {
    if(gvar_808A0A4 && gvar_808A0A8 && gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_986() {
    if(gvar_808A0A4 && gvar_808A0A8) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_987() {
    if(gvar_808A0A4 && gvar_808A0A8) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_988() {
    if(gvar_808A0A4) {
        if((!gvar_808A0AC && gvar_808A0A8) || !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_989() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC && gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_99() {
    if(gvar_808A0A4 && (gvar_808A0AC || gvar_808A0B0)) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_990() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_8069D20;
        }
        else {
            if(gvar_808A0A8) {
                goto loc_8069D20;
            }
            if(!gvar_808A0B0) {
            loc_8069D20:
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_991() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_992() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
            goto loc_8069DDE;
        }
        if(!gvar_808A0B0) {
        loc_8069DDE:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_993() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8 || gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_994() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_995() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        if(gvar_808A0A8 || !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_996() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_997() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC && gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_998() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC && gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_direct_variant_999() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || (!gvar_808A0A8 && !gvar_808A0B0)) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_0() {
    if(((gvar_808A0A4 || !gvar_808A0A8) && gvar_808A0AC) || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_1() {
    if(((!gvar_808A0A4 && gvar_808A0A8) || !gvar_808A0AC) && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_10() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
            goto loc_804EEA8;
        }
        if(!gvar_808A0B0) {
        loc_804EEA8:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else {
        goto loc_804EEA8;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_100() {
    if(gvar_808A0A4) {
        goto loc_8051005;
    }
    else {
        if(!gvar_808A0AC && gvar_808A0A8) {
            goto loc_805100E;
        }
    loc_8051005:
        if(!gvar_808A0B0) {
        loc_805100E:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_101() {
    if(gvar_808A0A4) {
        goto loc_8051064;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_805106D;
        }
        else if(gvar_808A0A8) {
            goto loc_805106D;
        }
    loc_8051064:
        if(!gvar_808A0B0) {
        loc_805106D:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_102() {
    if(gvar_808A0A4) {
        goto loc_80510C3;
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        loc_80510C3:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_103() {
    if(gvar_808A0A4) {
        goto loc_8051122;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else {
    loc_8051122:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_104() {
    if(gvar_808A0A4) {
        goto loc_8051181;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_805118A;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_8051181:
        if(!gvar_808A0B0) {
        loc_805118A:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_105() {
    if(gvar_808A0A4) {
        goto loc_80511E0;
    }
    else {
        if(!gvar_808A0AC && !gvar_808A0A8) {
        loc_80511E0:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_106() {
    if(gvar_808A0A4) {
        goto loc_805123F;
    }
    else {
        if(gvar_808A0AC) {
        loc_805123F:
            if(gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_107() {
    if(gvar_808A0A4) {
        goto loc_805129E;
    }
    else {
        if(gvar_808A0AC) {
        loc_805129E:
            if(gvar_808A0B0) {
                goto loc_80512B6;
            }
        }
        if(gvar_808A0A8) {
        loc_80512B6:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_108() {
    if(gvar_808A0A4) {
        goto loc_80512FD;
    }
    else {
        if(gvar_808A0AC) {
        loc_80512FD:
            if(gvar_808A0B0) {
                goto loc_8051315;
            }
            else {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
        loc_8051315:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_109() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(!gvar_808A0AC) {
        loc_8051346:
            if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else {
        goto loc_8051346;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_11() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
            goto loc_804EF07;
        }
        if(!gvar_808A0B0) {
        loc_804EF07:
            →puts("then/else block 6");
        }
        else {
        loc_804EF16:
            →puts("then/else block 7");
        }
    }
    else {
        goto loc_804EF16;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_110() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_80513A5:
            if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
    loc_80513C4:
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_80513A5;
    }
    else {
        goto loc_80513C4;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_111() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_8051404:
            if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_8051404;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_112() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_113() {
    if((gvar_808A0A4 && gvar_808A0B0) || (!gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_114() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC && gvar_808A0A8) {
        loc_805154F:
            →puts("then/else block 7");
        }
        else {
        loc_8051540:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_805154F;
    }
    else {
        goto loc_8051540;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_115() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_80515AE;
        }
    loc_8051580:
        if(gvar_808A0A8) {
        loc_80515AE:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else {
        goto loc_8051580;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_116() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_805160D;
        }
    loc_80515DF:
        if(gvar_808A0A8) {
        loc_805160D:
            →puts("then/else block 7");
        }
        else {
        loc_80515FE:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_80515DF;
    }
    else {
        goto loc_80515FE;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_117() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_805166C;
        }
    loc_805163E:
        if(gvar_808A0A8) {
        loc_805166C:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_805163E;
    }
    else {
        goto loc_805166C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_118() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_80516CB;
        }
        if(gvar_808A0A8) {
        loc_80516CB:
            →puts("then/else block 7");
        }
        else {
        loc_80516BC:
            →puts("then/else block 6");
        }
    }
    else {
        goto loc_80516BC;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_119() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_805172A;
        }
        if(gvar_808A0A8) {
        loc_805172A:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else {
        goto loc_805172A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_12() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_804EF5D:
            if(!gvar_808A0B0) {
                goto loc_804EF66;
            }
            else {
                →puts("then/else block 7");
            }
        }
        else {
        loc_804EF66:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_804EF5D;
    }
    else {
        goto loc_804EF66;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_120() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_8051789;
        }
        if(gvar_808A0A8) {
        loc_8051789:
            →puts("then/else block 7");
        }
        else {
        loc_805177A:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8051789;
    }
    else {
        goto loc_805177A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_121() {
    if(gvar_808A0A4) {
        goto loc_80517D0;
    }
    else {
        if(!gvar_808A0AC) {
        loc_80517D0:
            if(!gvar_808A0B0 && gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_122() {
    if(gvar_808A0A4) {
        goto loc_805182F;
    }
    else {
        if(!gvar_808A0AC) {
        loc_805182F:
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_123() {
    if((!gvar_808A0A4 && gvar_808A0AC) || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_124() {
    if((!gvar_808A0A4 && gvar_808A0AC) || gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_125() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_8051964:
            →puts("then/else block 7");
        }
        else {
        loc_8051955:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8051955;
    }
    else {
        goto loc_8051964;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_126() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        goto loc_80519C3;
    }
    else if(gvar_808A0AC) {
    loc_80519C3:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_127() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8051A22;
        }
        else if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else {
            goto loc_8051A22;
        }
    }
    else if(gvar_808A0AC) {
    loc_8051A22:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_128() {
    if(gvar_808A0A4) {
        goto loc_8051A72;
    }
    else {
        if(!gvar_808A0AC && gvar_808A0A8) {
            goto loc_8051A72;
        }
        if(!gvar_808A0B0) {
        loc_8051A72:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_129() {
    if(gvar_808A0A4) {
        goto loc_8051AD1;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8051AD1;
        }
        else if(gvar_808A0A8) {
            goto loc_8051AD1;
        }
        if(!gvar_808A0B0) {
        loc_8051AD1:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_13() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_804EFBC:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        goto loc_804EFBC;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_130() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_131() {
    if(gvar_808A0A4) {
        goto loc_8051B8F;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0) {
    loc_8051B8F:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_132() {
    if(gvar_808A0A4) {
        goto loc_8051BEE;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8051BEE;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        if(!gvar_808A0B0) {
        loc_8051BEE:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_133() {
    if(gvar_808A0A4 || (!gvar_808A0AC && !gvar_808A0A8 && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_134() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if((!gvar_808A0AC || !gvar_808A0B0) && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_135() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC && gvar_808A0B0) {
        goto loc_8051D1A;
    }
    if(gvar_808A0A8) {
    loc_8051D1A:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_136() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_8051D79;
        }
        else {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    if(gvar_808A0A8) {
    loc_8051D79:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_137() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if((!gvar_808A0AC && !gvar_808A0B0) && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_138() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_139() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_14() {
    if(gvar_808A0A4) {
    loc_804F010:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_804F024:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804F024;
    }
    else if(!gvar_808A0B0) {
        goto loc_804F010;
    }
    else {
        goto loc_804F024;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_140() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC || gvar_808A0B0) {
        goto loc_8051EF5;
    }
    if(gvar_808A0A8) {
    loc_8051EF5:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_141() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC && gvar_808A0A8) {
        goto loc_8051F45;
    }
    if(!gvar_808A0B0) {
    loc_8051F45:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_142() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_8051FA4;
    }
    else if(gvar_808A0A8) {
        goto loc_8051FA4;
    }
    if(!gvar_808A0B0) {
    loc_8051FA4:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_143() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 7");
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_144() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_145() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_80520C1;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0B0) {
    loc_80520C1:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_146() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && !gvar_808A0A8 && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_147() {
    if(gvar_808A0A4 || ((!gvar_808A0AC || !gvar_808A0B0) && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_148() {
    if(gvar_808A0A4) {
        goto loc_80521ED;
    }
    else {
        if(gvar_808A0AC && gvar_808A0B0) {
            goto loc_80521ED;
        }
        if(gvar_808A0A8) {
        loc_80521ED:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_149() {
    if(gvar_808A0A4) {
        goto loc_805224C;
    }
    else {
        if(gvar_808A0AC) {
            if(gvar_808A0B0) {
                goto loc_805224C;
            }
            else {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
        loc_805224C:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_15() {
    if(gvar_808A0A4) {
    loc_804F06F:
        if(gvar_808A0AC) {
        loc_804F092:
            →puts("then/else block 7");
        }
        else {
        loc_804F083:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804F083;
    }
    else if(!gvar_808A0B0) {
        goto loc_804F06F;
    }
    else {
        goto loc_804F092;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_150() {
    if(gvar_808A0A4 || ((!gvar_808A0AC && !gvar_808A0B0) && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_151() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_152() {
    if(gvar_808A0A4 || gvar_808A0AC || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_153() {
    if(gvar_808A0A4) {
        goto loc_80523C8;
    }
    else {
        if(gvar_808A0AC || gvar_808A0B0) {
            goto loc_80523C8;
        }
        if(gvar_808A0A8) {
        loc_80523C8:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_154() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_8052404;
    }
    if(!gvar_808A0A8) {
    loc_8052404:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_155() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 && !gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_156() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_80524E5;
    }
    if(!gvar_808A0A8 && gvar_808A0AC) {
    loc_80524E5:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_157() {
    if(gvar_808A0A4) {
        goto loc_8052535;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8052521;
        }
        if(!gvar_808A0A8) {
        loc_8052521:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        loc_8052535:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_158() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 && (gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_159() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_8052602;
    }
    if(gvar_808A0A8 || gvar_808A0AC) {
    loc_8052602:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_16() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            goto loc_804F0F1;
        }
        else {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
    loc_804F0F1:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_160() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_161() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 && !gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_162() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_805271F;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0A8) {
    loc_805271F:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_163() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0 && gvar_808A0AC) {
        goto loc_805277E;
    }
    if(gvar_808A0A8) {
    loc_805277E:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_164() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_165() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_805283C;
    }
    else if(gvar_808A0AC) {
        goto loc_805283C;
    }
    if(gvar_808A0A8) {
    loc_805283C:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_166() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        goto loc_805289B;
    }
    if(gvar_808A0A8) {
    loc_805289B:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_167() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80528D7;
        }
        if(!gvar_808A0A8) {
        loc_80528D7:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_168() {
    if(gvar_808A0A4 || (!gvar_808A0B0 && !gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_169() {
    if(gvar_808A0A4) {
        goto loc_80529B8;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80529B8;
        }
        if(!gvar_808A0A8 && gvar_808A0AC) {
        loc_80529B8:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_17() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(!gvar_808A0A8) {
        loc_804F138:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else {
        goto loc_804F138;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_170() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_80529F4;
    }
    if(!gvar_808A0A8) {
    loc_80529F4:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_171() {
    if(gvar_808A0A4 || (!gvar_808A0B0 && (gvar_808A0A8 || gvar_808A0AC))) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_172() {
    if(gvar_808A0A4) {
        goto loc_8052AD5;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8052AD5;
        }
        if(gvar_808A0A8 || gvar_808A0AC) {
        loc_8052AD5:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_173() {
    if(gvar_808A0A4) {
        goto loc_8052B34;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
    loc_8052B34:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_174() {
    if(gvar_808A0A4 || (!gvar_808A0B0 && !gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_175() {
    if(gvar_808A0A4) {
        goto loc_8052BF2;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8052BF2;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
        loc_8052BF2:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_176() {
    if(gvar_808A0A4) {
        goto loc_8052C51;
    }
    else {
        if(gvar_808A0B0 && gvar_808A0AC) {
            goto loc_8052C51;
        }
        if(gvar_808A0A8) {
        loc_8052C51:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_177() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(!gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_178() {
    if(gvar_808A0A4) {
        goto loc_8052D0F;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8052D0F;
        }
        else if(gvar_808A0AC) {
            goto loc_8052D0F;
        }
        if(gvar_808A0A8) {
        loc_8052D0F:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_179() {
    if(gvar_808A0A4) {
        goto loc_8052D6E;
    }
    else {
        if(gvar_808A0B0) {
            if(!gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            goto loc_8052D6E;
        }
        if(gvar_808A0A8) {
        loc_8052D6E:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_18() {
    if((gvar_808A0A4 && gvar_808A0AC) || (!gvar_808A0A8 && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_19() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0A8 && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_2() {
    if(!gvar_808A0A4 && gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_20() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_804F255:
            if(!gvar_808A0B0) {
                goto loc_804F25E;
            }
            else {
            loc_804F26D:
                →puts("then/else block 7");
            }
        }
        else {
        loc_804F25E:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_804F255;
    }
    else {
        goto loc_804F26D;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_21() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_804F2B4:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
    loc_804F2CC:
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        goto loc_804F2B4;
    }
    else {
        goto loc_804F2CC;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_22() {
    if(gvar_808A0A4) {
    loc_804F308:
        if(gvar_808A0AC) {
        loc_804F32B:
            →puts("then/else block 7");
        }
        else {
        loc_804F31C:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804F32B;
    }
    else if(!gvar_808A0B0) {
        goto loc_804F308;
    }
    else {
        goto loc_804F31C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_23() {
    if(gvar_808A0A4) {
    loc_804F367:
        if(gvar_808A0AC) {
        loc_804F38A:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804F38A;
    }
    else if(!gvar_808A0B0) {
        goto loc_804F367;
    }
    else {
        goto loc_804F38A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_24() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_804F3E9;
        }
        else if(gvar_808A0B0) {
            goto loc_804F3E9;
        }
        else {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
    loc_804F3E9:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_25() {
    if(gvar_808A0A4 && gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_26() {
    if((gvar_808A0A4 && gvar_808A0AC && gvar_808A0B0) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_27() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_804F506:
            →puts("then/else block 7");
        }
        else {
        loc_804F4F7:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_804F506;
    }
    else {
        goto loc_804F4F7;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_28() {
    if(gvar_808A0A4 && (gvar_808A0AC || gvar_808A0B0)) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_29() {
    if(!gvar_808A0A4) {
    loc_804F596:
        if(gvar_808A0A8) {
        loc_804F5C4:
            →puts("then/else block 7");
        }
        else {
        loc_804F5B5:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_804F5B5;
    }
    else if(!gvar_808A0B0) {
        goto loc_804F596;
    }
    else {
        goto loc_804F5C4;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_3() {
    if((!gvar_808A0A4 && gvar_808A0A8 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_30() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || !gvar_808A0B0) {
        loc_804F614:
            →puts("then/else block 6");
        }
        else {
        loc_804F623:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_804F614;
    }
    else {
        goto loc_804F623;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_31() {
    if(!gvar_808A0A4) {
    loc_804F654:
        if(!gvar_808A0A8) {
        loc_804F673:
            →puts("then/else block 6");
        }
        else {
        loc_804F682:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_804F682;
    }
    else if(!gvar_808A0B0) {
        goto loc_804F654;
    }
    else {
        goto loc_804F673;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_32() {
    if((gvar_808A0A4 && (gvar_808A0AC || gvar_808A0B0)) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_33() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC && !gvar_808A0B0) {
        loc_804F731:
            →puts("then/else block 6");
        }
        else {
        loc_804F740:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_804F731;
    }
    else {
        goto loc_804F740;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_34() {
    if((!gvar_808A0A4 && !gvar_808A0A8 && gvar_808A0AC) || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_35() {
    if((gvar_808A0A4 || gvar_808A0A8 || !gvar_808A0AC) && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_36() {
    if((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_37() {
    if(((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_38() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        if(!gvar_808A0B0) {
        loc_804F90C:
            →puts("then/else block 6");
        }
        else {
        loc_804F91B:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_804F90C;
    }
    else {
        goto loc_804F91B;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_39() {
    if((!gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC)) || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_4() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        if(!gvar_808A0B0) {
        loc_804EC6E:
            →puts("then/else block 6");
        }
        else {
        loc_804EC7D:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_804EC6E;
    }
    else {
        goto loc_804EC7D;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_40() {
    if(gvar_808A0A4) {
    loc_804F9C1:
        if(!gvar_808A0B0) {
        loc_804F9CA:
            →puts("then/else block 6");
        }
        else {
        loc_804F9D9:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804F9CA;
    }
    else if(gvar_808A0AC) {
        goto loc_804F9D9;
    }
    else {
        goto loc_804F9C1;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_41() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(!gvar_808A0A8) {
        loc_804FA15:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else {
        goto loc_804FA15;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_42() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_43() {
    if((gvar_808A0A4 && gvar_808A0B0) || (!gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_44() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_804FB32:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
    loc_804FB46:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        goto loc_804FB46;
    }
    else {
        goto loc_804FB32;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_45() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_804FBB4;
        }
    loc_804FB91:
        if(gvar_808A0AC) {
        loc_804FBB4:
            →puts("then/else block 7");
        }
        else {
        loc_804FBA5:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804FBA5;
    }
    else {
        goto loc_804FB91;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_46() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_804FC04:
            →puts("then/else block 6");
        }
        else {
        loc_804FC13:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8 || !gvar_808A0AC) {
        goto loc_804FC04;
    }
    else {
        goto loc_804FC13;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_47() {
    if(gvar_808A0A4) {
    loc_804FC5A:
        if(!gvar_808A0B0) {
        loc_804FC63:
            →puts("then/else block 6");
        }
        else {
        loc_804FC72:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804FC72;
    }
    else if(gvar_808A0AC) {
        goto loc_804FC63;
    }
    else {
        goto loc_804FC5A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_48() {
    if((gvar_808A0A4 || (!gvar_808A0A8 && !gvar_808A0AC)) && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_49() {
    if(((!gvar_808A0A4 || !gvar_808A0B0) && gvar_808A0A8) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_5() {
    if((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0AC || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_50() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_51() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_52() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_804FE2A:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        goto loc_804FE2A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_53() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_804FEAC;
        }
    loc_804FE89:
        if(gvar_808A0AC) {
        loc_804FEAC:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_804FEAC;
    }
    else {
        goto loc_804FE89;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_54() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_804FEFC:
            →puts("then/else block 6");
        }
        else {
        loc_804FF0B:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8 && !gvar_808A0AC) {
        goto loc_804FEFC;
    }
    else {
        goto loc_804FF0B;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_55() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_56() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_804FFC9;
    }
    if(gvar_808A0AC) {
    loc_804FFC9:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_57() {
    if((!gvar_808A0A4 && gvar_808A0A8) || (!gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_58() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        goto loc_8050087;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8050087;
        }
        if(gvar_808A0AC) {
        loc_8050087:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_59() {
    if(gvar_808A0A4 && gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_6() {
    if((!gvar_808A0A4 && gvar_808A0A8) || (!gvar_808A0AC && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_60() {
    if(!gvar_808A0A4) {
    loc_8050117:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_8050136:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8050136;
    }
    else if(!gvar_808A0AC) {
        goto loc_8050117;
    }
    else {
        goto loc_8050136;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_61() {
    if(!gvar_808A0A4) {
    loc_8050176:
        if(gvar_808A0A8) {
        loc_80501A4:
            →puts("then/else block 7");
        }
        else {
        loc_8050195:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_80501A4;
    }
    else if(!gvar_808A0AC) {
        goto loc_8050176;
    }
    else {
        goto loc_8050195;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_62() {
    if((gvar_808A0A4 && gvar_808A0B0 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_63() {
    if(!gvar_808A0A4) {
    loc_8050234:
        if(gvar_808A0A8) {
        loc_8050262:
            →puts("then/else block 7");
        }
        else {
        loc_8050253:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8050253;
    }
    else if(!gvar_808A0AC) {
        goto loc_8050234;
    }
    else {
        goto loc_8050262;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_64() {
    if(!gvar_808A0A4) {
    loc_8050293:
        if(gvar_808A0A8) {
        loc_80502C1:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_80502C1;
    }
    else if(!gvar_808A0AC) {
        goto loc_8050293;
    }
    else {
        goto loc_80502C1;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_65() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0A8) {
        loc_8050320:
            →puts("then/else block 7");
        }
        else {
        loc_8050311:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_8050311;
    }
    else {
        goto loc_8050320;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_66() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0AC) {
        loc_805037F:
            →puts("then/else block 7");
        }
        else {
        loc_8050370:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8050370;
    }
    else {
        goto loc_805037F;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_67() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_80503DE;
        }
        if(gvar_808A0AC) {
        loc_80503DE:
            →puts("then/else block 7");
        }
        else {
        loc_80503CF:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_80503CF;
    }
    else {
        goto loc_80503DE;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_68() {
    if(gvar_808A0A4 || (!gvar_808A0A8 && gvar_808A0AC) || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_69() {
    if(gvar_808A0A4 || ((gvar_808A0A8 || !gvar_808A0AC) && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_7() {
    if((gvar_808A0A4 || !gvar_808A0A8) && (gvar_808A0AC || !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_70() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0B0) || !gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_71() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 && gvar_808A0B0) {
            goto loc_805055A;
        }
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_805055A:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_72() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_73() {
    if(gvar_808A0A4 || gvar_808A0A8 || gvar_808A0AC || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_74() {
    if(gvar_808A0A4 || gvar_808A0A8 || (!gvar_808A0AC && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_75() {
    if(gvar_808A0A4 || (!gvar_808A0A8 && (gvar_808A0AC || !gvar_808A0B0))) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_76() {
    if(gvar_808A0A4 || (!gvar_808A0A8 && !gvar_808A0AC && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_77() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_78() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_80507F3;
    }
    if(gvar_808A0AC) {
    loc_80507F3:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_79() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8050852;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_8050852:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_8() {
    if((gvar_808A0A4 || !gvar_808A0A8) && !gvar_808A0AC && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_80() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_80508B1;
        }
        else if(gvar_808A0B0) {
            goto loc_80508B1;
        }
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_80508B1:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_81() {
    if(!gvar_808A0A4 && ((!gvar_808A0A8 && gvar_808A0AC) || !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_82() {
    if(!gvar_808A0A4 && (gvar_808A0A8 || !gvar_808A0AC) && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_83() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 && gvar_808A0B0) {
            goto loc_80509BF;
        }
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_80509BF:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_84() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_85() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                goto loc_8050A7D;
            }
            else {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_8050A7D:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_86() {
    if(!gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC || !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_87() {
    if(!gvar_808A0A4 && (gvar_808A0A8 || (!gvar_808A0AC && !gvar_808A0B0))) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_88() {
    if(!gvar_808A0A4 && !gvar_808A0A8 && (gvar_808A0AC || !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_89() {
    if(!gvar_808A0A4 && !gvar_808A0A8 && !gvar_808A0AC && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_9() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
            goto loc_804EE49;
        }
    loc_804EE40:
        if(!gvar_808A0B0) {
        loc_804EE49:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else {
        goto loc_804EE40;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_90() {
    if(gvar_808A0A4 || (!gvar_808A0A8 && !gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_91() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_92() {
    if(gvar_808A0A4 || gvar_808A0A8 || (!gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_93() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        goto loc_8050D84;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8050D84;
        }
        if(gvar_808A0AC) {
        loc_8050D84:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_94() {
    if(gvar_808A0A4 && !gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_95() {
    if(!gvar_808A0A4) {
    loc_8050E1F:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_8050E33:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8050E33;
    }
    else if(gvar_808A0A8) {
        goto loc_8050E33;
    }
    else {
        goto loc_8050E1F;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_96() {
    if(!gvar_808A0A4) {
    loc_8050E7E:
        if(gvar_808A0AC) {
        loc_8050EA1:
            →puts("then/else block 7");
        }
        else {
        loc_8050E92:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8050EA1;
    }
    else if(gvar_808A0A8) {
        goto loc_8050E92;
    }
    else {
        goto loc_8050E7E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_97() {
    if((gvar_808A0A4 && !gvar_808A0B0 && gvar_808A0A8) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_98() {
    if(!gvar_808A0A4) {
    loc_8050F3C:
        if(gvar_808A0AC) {
        loc_8050F5F:
            →puts("then/else block 7");
        }
        else {
        loc_8050F50:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8050F50;
    }
    else if(gvar_808A0A8) {
        goto loc_8050F5F;
    }
    else {
        goto loc_8050F3C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_2_targets_variant_99() {
    if(!gvar_808A0A4) {
    loc_8050F9B:
        if(gvar_808A0AC) {
        loc_8050FBE:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8050FBE;
    }
    else if(gvar_808A0A8) {
        goto loc_8050FBE;
    }
    else {
        goto loc_8050F9B;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_0() {
    if(((gvar_808A0A4 || !gvar_808A0A8) && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_1() {
    if(((gvar_808A0A4 || !gvar_808A0A8) && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_10() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_806C98F:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_806C98F;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_100() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || !gvar_808A0B0) {
        loc_806F02C:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806F02C;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_101() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_806F09A:
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 8");
        }
        else {
        loc_806F0A9:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806F09A;
    }
    else {
        goto loc_806F0A9;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_102() {
    if(!gvar_808A0A4) {
    loc_806F0E9:
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
        loc_806F117:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_806F117;
    }
    else if(!gvar_808A0B0) {
        goto loc_806F0E9;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_103() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_806F185:
            →puts("then/else block 7");
        }
        else if(!gvar_808A0B0) {
        loc_806F176:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806F176;
    }
    else {
        goto loc_806F185;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_104() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_105() {
    if(!gvar_808A0A4) {
    loc_806F233:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_806F252:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        goto loc_806F233;
    }
    else {
        goto loc_806F252;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_106() {
    if(!gvar_808A0A4) {
    loc_806F2A1:
        if(gvar_808A0A8) {
        loc_806F2CF:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        goto loc_806F2A1;
    }
    else {
        goto loc_806F2CF;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_107() {
    if(gvar_808A0A4 && (gvar_808A0AC || gvar_808A0B0)) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_108() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else if(!gvar_808A0B0) {
        loc_806F39C:
            →puts("then/else block 6");
        }
        else {
        loc_806F3AB:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806F39C;
    }
    else {
        goto loc_806F3AB;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_109() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC && !gvar_808A0B0) {
        loc_806F40A:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806F40A;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_11() {
    if(gvar_808A0A4 || !gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_110() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_111() {
    if(gvar_808A0A4 && gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_112() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_113() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_806F5E0;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
    loc_806F5E0:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_114() {
    if(!gvar_808A0A4) {
    loc_806F611:
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_806F630:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_806F630;
    }
    else if(!gvar_808A0B0) {
        goto loc_806F611;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_115() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || !gvar_808A0B0) {
        loc_806F69E:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806F69E;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_116() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_806F70C:
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
        loc_806F72A:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806F70C;
    }
    else {
        goto loc_806F72A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_117() {
    if(!gvar_808A0A4) {
    loc_806F75B:
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_806F77A:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        goto loc_806F75B;
    }
    else {
        goto loc_806F77A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_118() {
    if(gvar_808A0A4 && (gvar_808A0AC || gvar_808A0B0)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_119() {
    if(!gvar_808A0A4) {
    loc_806F837:
        if(gvar_808A0A8) {
        loc_806F874:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        goto loc_806F837;
    }
    else {
        goto loc_806F874;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_12() {
    if(((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_120() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC && !gvar_808A0B0) {
        loc_806F8C4:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806F8C4;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_121() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(!gvar_808A0B0) {
        loc_806F932:
            →puts("then/else block 6");
        }
        else {
        loc_806F950:
            →puts("then/else block 8");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806F932;
    }
    else {
        goto loc_806F950;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_122() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806F9BE;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0AC && gvar_808A0B0) {
    loc_806F9BE:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_123() {
    if(!gvar_808A0A4) {
    loc_806F9EF:
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
        loc_806FA2C:
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_806FA2C;
    }
    else if(!gvar_808A0B0) {
        goto loc_806F9EF;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_124() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_806FA9A:
            →puts("then/else block 8");
        }
        else if(!gvar_808A0B0) {
        loc_806FA7C:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806FA7C;
    }
    else {
        goto loc_806FA9A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_125() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806FB08;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
    loc_806FB08:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_126() {
    if(gvar_808A0A4 && gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_127() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_806FBD5:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_806FBD5;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_128() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_806FC52:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_806FC52;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_129() {
    if(gvar_808A0A4 && (gvar_808A0AC || gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_13() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
    loc_806CACA:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        goto loc_806CACA;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_130() {
    if(!gvar_808A0A4) {
    loc_806FCF1:
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_806FD1F:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_806FCF1;
    }
    else {
        goto loc_806FD1F;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_131() {
    if(!gvar_808A0A4) {
    loc_806FD5F:
        if(gvar_808A0A8) {
        loc_806FD9C:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_806FD5F;
    }
    else {
        goto loc_806FD9C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_132() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC || !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_806FDFB:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806FDFB;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_133() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_134() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
        loc_806FEE6:
            →puts("then/else block 8");
        }
        else {
        loc_806FED7:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806FED7;
    }
    else {
        goto loc_806FEE6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_135() {
    if(!gvar_808A0A4) {
    loc_806FF17:
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_806FF45:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_806FF45;
    }
    else if(!gvar_808A0B0) {
        goto loc_806FF17;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_136() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC && !gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_806FFB3:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806FFB3;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_137() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8070021:
            →puts("then/else block 7");
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_8070030:
            →puts("then/else block 8");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8070021;
    }
    else {
        goto loc_8070030;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_138() {
    if(!gvar_808A0A4) {
    loc_8070061:
        if(!gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_807009E:
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_807009E;
    }
    else if(!gvar_808A0B0) {
        goto loc_8070061;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_139() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_807010C:
            →puts("then/else block 8");
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_80700FD:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_80700FD;
    }
    else {
        goto loc_807010C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_14() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_140() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_141() {
    if((!gvar_808A0A4 && !gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_142() {
    if((!gvar_808A0A4 && !gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_143() {
    if((!gvar_808A0A4 && !gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_144() {
    if((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_145() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        if(!gvar_808A0B0) {
        loc_8070382:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_8070382;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_146() {
    if(!gvar_808A0A4 && !gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_147() {
    if((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_148() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        if(!gvar_808A0B0) {
        loc_80704CC:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_80704CC;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_149() {
    if(!gvar_808A0A4 && !gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_8070558;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
    loc_8070558:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_15() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
    loc_806CBA6:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        goto loc_806CBA6;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_150() {
    if((gvar_808A0A4 || gvar_808A0A8) && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_151() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_8070625:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_8070625;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_152() {
    if(!gvar_808A0A4 && !gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_153() {
    if((!gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC))) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_154() {
    if(gvar_808A0A4) {
    loc_8070757:
        if(!gvar_808A0B0) {
        loc_8070760:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8070760;
    }
    else if(!gvar_808A0AC) {
        goto loc_8070757;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_155() {
    if(gvar_808A0A4) {
    loc_80707C5:
        if(gvar_808A0B0) {
            →puts("then/else block 8");
        }
        else {
        loc_80707DD:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        goto loc_80707DD;
    }
    else {
        goto loc_80707C5;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_156() {
    if(gvar_808A0A4) {
    loc_8070833:
        if(!gvar_808A0B0) {
        loc_807083C:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_807083C;
    }
    else if(!gvar_808A0AC) {
        goto loc_8070833;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_157() {
    if(gvar_808A0A4) {
    loc_80708A1:
        if(gvar_808A0B0) {
        loc_80708C8:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        goto loc_80708C8;
    }
    else {
        goto loc_80708A1;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_158() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_159() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 8");
        }
        else {
        loc_8070972:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
            }
            else {
            loc_8070986:
                →puts("then/else block 6");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8070986;
    }
    else {
        goto loc_8070972;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_16() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_160() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_80709F4:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0A8 || !gvar_808A0AC) {
        goto loc_80709F4;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_161() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8 && gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_162() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_163() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else {
        loc_8070B2A:
            if(gvar_808A0AC) {
                →puts("then/else block 8");
            }
            else {
            loc_8070B3E:
                →puts("then/else block 6");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8070B3E;
    }
    else {
        goto loc_8070B2A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_164() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_8070BAC:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8 || !gvar_808A0AC) {
        goto loc_8070BAC;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_165() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8 && gvar_808A0AC) {
            goto loc_8070C38;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
    loc_8070C38:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_166() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        goto loc_8070C74;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
    loc_8070C74:
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_167() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_168() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_169() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        goto loc_8070DF0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
    loc_8070DF0:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_17() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_170() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_8070E40:
            →puts("then/else block 6");
        }
        else {
        loc_8070E2C:
            if(gvar_808A0AC) {
                →puts("then/else block 8");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8070E40;
    }
    else {
        goto loc_8070E2C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_171() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_8070E9A:
            if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        goto loc_8070E9A;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_172() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8070F3A;
        }
    loc_8070F08:
        if(gvar_808A0AC) {
        loc_8070F3A:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8070F08;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_173() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_8070F8A:
            →puts("then/else block 6");
        }
        else {
        loc_8070F99:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8070F8A;
    }
    else if(!gvar_808A0AC) {
        goto loc_8070F99;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_174() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_8070FF8:
            →puts("then/else block 6");
        }
        else {
        loc_8071016:
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8070FF8;
    }
    else if(gvar_808A0AC) {
        goto loc_8071016;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_175() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(!gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else {
            goto loc_8071084;
        }
    }
    else if(gvar_808A0B0) {
    loc_8071084:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_176() {
    if(gvar_808A0A4) {
    loc_80710CB:
        if(!gvar_808A0B0) {
        loc_80710D4:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        goto loc_80710D4;
    }
    else {
        goto loc_80710CB;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_177() {
    if(gvar_808A0A4) {
    loc_8071139:
        if(gvar_808A0B0) {
            →puts("then/else block 8");
        }
        else {
        loc_8071151:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8071151;
    }
    else if(!gvar_808A0AC) {
        goto loc_8071139;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_178() {
    if((!gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC))) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_179() {
    if(gvar_808A0A4) {
    loc_8071215:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_807122D:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_807122D;
    }
    else if(!gvar_808A0AC) {
        goto loc_8071215;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_18() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
    loc_806CCFF:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_806CCFF;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_180() {
    if(gvar_808A0A4) {
    loc_8071283:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_80712AA:
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        goto loc_80712AA;
    }
    else {
        goto loc_8071283;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_181() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_182() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 8");
        }
        else {
        loc_8071354:
            if(gvar_808A0AC) {
            loc_8071377:
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8071377;
    }
    else {
        goto loc_8071354;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_183() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_80713D6:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(!gvar_808A0A8 && !gvar_808A0AC) {
        goto loc_80713D6;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_184() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 || gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_185() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        goto loc_807149E;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
    loc_807149E:
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_186() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_187() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_188() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        goto loc_807161A;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
    loc_807161A:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_189() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_8071656:
            if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8) {
        goto loc_8071656;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_19() {
    if(((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_190() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_80716E7:
            →puts("then/else block 7");
        }
        else {
        loc_80716C4:
            if(gvar_808A0AC) {
                →puts("then/else block 8");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_80716E7;
    }
    else {
        goto loc_80716C4;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_191() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8071764;
        }
    loc_8071732:
        if(gvar_808A0AC) {
        loc_8071764:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8071732;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_192() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_80717B4:
            →puts("then/else block 6");
        }
        else {
        loc_80717C3:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_80717C3;
    }
    else if(!gvar_808A0AC) {
        goto loc_80717B4;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_193() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(!gvar_808A0AC) {
            goto loc_8071822;
        }
        else {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
    }
    else if(!gvar_808A0B0) {
    loc_8071822:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_194() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_80718AE:
            →puts("then/else block 8");
        }
        else {
        loc_807189F:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_807189F;
    }
    else if(gvar_808A0AC) {
        goto loc_80718AE;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_195() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_196() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_8071958:
            if(gvar_808A0AC) {
                →puts("then/else block 8");
            }
            else {
            loc_807197B:
                →puts("then/else block 7");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_807197B;
    }
    else {
        goto loc_8071958;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_197() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_80719E9:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8 || !gvar_808A0AC) {
        goto loc_80719E9;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_198() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8 && gvar_808A0AC) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_199() {
    if(gvar_808A0A4) {
    loc_8071AAD:
        if(!gvar_808A0B0) {
        loc_8071AB6:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        goto loc_8071AB6;
    }
    else {
        goto loc_8071AAD;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_2() {
    if(((gvar_808A0A4 || !gvar_808A0A8) && gvar_808A0AC)) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_20() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
    loc_806CDDB:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        goto loc_806CDDB;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_200() {
    if(gvar_808A0A4) {
    loc_8071B1B:
        if(gvar_808A0B0) {
        loc_8071B42:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8071B42;
    }
    else if(!gvar_808A0AC) {
        goto loc_8071B1B;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_201() {
    if(gvar_808A0A4) {
    loc_8071B89:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_8071BA1:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        goto loc_8071BA1;
    }
    else {
        goto loc_8071B89;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_202() {
    if(gvar_808A0A4) {
    loc_8071BF7:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_8071C1E:
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8071C1E;
    }
    else if(!gvar_808A0AC) {
        goto loc_8071BF7;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_203() {
    if((!gvar_808A0A4 && (gvar_808A0A8 || gvar_808A0AC))) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_204() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        goto loc_8071CC8;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
    loc_8071CC8:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_205() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_206() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        goto loc_8071DC7;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
    loc_8071DC7:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_207() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_208() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_8071E80:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8) {
        goto loc_8071E80;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_209() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8071F11;
        }
    loc_8071EEE:
        if(gvar_808A0AC) {
        loc_8071F11:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8071EEE;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_21() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_210() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_8071F8E:
            →puts("then/else block 8");
        }
        else {
        loc_8071F5C:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8071F8E;
    }
    else {
        goto loc_8071F5C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_211() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else if(!gvar_808A0AC) {
            goto loc_8071FDE;
        }
        else {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    else if(!gvar_808A0B0) {
    loc_8071FDE:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_212() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_807204C:
            →puts("then/else block 6");
        }
        else {
        loc_807206A:
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_807206A;
    }
    else if(!gvar_808A0AC) {
        goto loc_807204C;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_213() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_80720D8:
            →puts("then/else block 8");
        }
        else {
        loc_80720C9:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_80720D8;
    }
    else if(gvar_808A0AC) {
        goto loc_80720C9;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_214() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_215() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else {
        loc_8072182:
            if(gvar_808A0AC) {
            loc_80721B4:
                →puts("then/else block 8");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_80721B4;
    }
    else {
        goto loc_8072182;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_216() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
        loc_8072204:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8 && !gvar_808A0AC) {
        goto loc_8072204;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_217() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 || gvar_808A0AC) {
            goto loc_8072290;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
    loc_8072290:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_218() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_219() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_807233A:
            if(gvar_808A0AC) {
            loc_807236C:
                →puts("then/else block 8");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    else if(gvar_808A0A8) {
        goto loc_807236C;
    }
    else {
        goto loc_807233A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_22() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_220() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
        loc_80723CB:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8 && !gvar_808A0AC) {
        goto loc_80723CB;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_221() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8 || gvar_808A0AC) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_222() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_223() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_224() {
    if((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_225() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_226() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_227() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        goto loc_80726CD;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
    loc_80726CD:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_228() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || !gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_229() {
    if((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_23() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
    loc_806CF34:
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_806CF34;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_230() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_231() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_232() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0 || !gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_233() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_234() {
    if((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_235() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        goto loc_8072A4C;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
    loc_8072A4C:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_236() {
    if(!gvar_808A0A4 && gvar_808A0A8) {
        goto loc_8072ABA;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
    loc_8072ABA:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_237() {
    if(!gvar_808A0A4) {
    loc_8072AEB:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_8072B0A:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0AC) {
        goto loc_8072AEB;
    }
    else {
        goto loc_8072B0A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_238() {
    if(!gvar_808A0A4) {
    loc_8072B59:
        if(gvar_808A0A8) {
        loc_8072B87:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0AC) {
        goto loc_8072B59;
    }
    else {
        goto loc_8072B87;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_239() {
    if(gvar_808A0A4 && gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_24() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0AC && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_240() {
    if(!gvar_808A0A4) {
    loc_8072C35:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_8072C54:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8072C54;
    }
    else if(!gvar_808A0AC) {
        goto loc_8072C35;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_241() {
    if(!gvar_808A0A4) {
    loc_8072CA3:
        if(gvar_808A0A8) {
        loc_8072CD1:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8072CD1;
    }
    else if(!gvar_808A0AC) {
        goto loc_8072CA3;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_242() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8072D4E;
        }
        if(!gvar_808A0AC) {
            goto loc_8072D11;
        }
        else {
        loc_8072D4E:
            →puts("then/else block 8");
        }
    }
    else {
    loc_8072D11:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_243() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 8");
        }
        else if(gvar_808A0AC) {
        loc_8072DAD:
            →puts("then/else block 7");
        }
        else {
        loc_8072D9E:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8072D9E;
    }
    else {
        goto loc_8072DAD;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_244() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_8072E0C:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_8072E0C;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_245() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_8072E7A:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8072E7A;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_246() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_8072EF7:
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_8072EE8:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8072EE8;
    }
    else {
        goto loc_8072EF7;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_247() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8072F74;
        }
        if(gvar_808A0AC) {
        loc_8072F74:
            →puts("then/else block 8");
        }
        else {
        loc_8072F56:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8072F56;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_248() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0A8) {
        loc_8072FD3:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_8072FD3;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_249() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_8073032:
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_8073041:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8073032;
    }
    else {
        goto loc_8073041;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_25() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
    loc_806D010:
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_806D010;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_250() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_80730AF:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_80730AF;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_251() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_807312C;
        }
        if(gvar_808A0AC) {
        loc_807312C:
            →puts("then/else block 8");
        }
        else {
        loc_807311D:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_807311D;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_252() {
    if(!gvar_808A0A4) {
    loc_807315D:
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_807317C:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC) {
        goto loc_807315D;
    }
    else {
        goto loc_807317C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_253() {
    if(gvar_808A0A4 && gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_254() {
    if(!gvar_808A0A4) {
    loc_8073239:
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_8073258:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8073258;
    }
    else if(!gvar_808A0AC) {
        goto loc_8073239;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_255() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_80732D5;
        }
        if(!gvar_808A0AC) {
            goto loc_80732A7;
        }
        else {
        loc_80732D5:
            →puts("then/else block 7");
        }
    }
    else {
    loc_80732A7:
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_256() {
    if(!gvar_808A0A4) {
    loc_8073315:
        if(gvar_808A0A8) {
        loc_8073352:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8073352;
    }
    else if(!gvar_808A0AC) {
        goto loc_8073315;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_257() {
    if(!gvar_808A0A4) {
    loc_8073383:
        if(gvar_808A0A8) {
        loc_80733C0:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC) {
        goto loc_8073383;
    }
    else {
        goto loc_80733C0;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_258() {
    if(!gvar_808A0A4 || !gvar_808A0B0) {
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_8073410:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_8073410;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_259() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_807347E:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_807347E;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_26() {
    if(((!gvar_808A0A4 && gvar_808A0A8) || gvar_808A0AC)) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_260() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_80734FB;
        }
        if(gvar_808A0AC) {
        loc_80734FB:
            →puts("then/else block 7");
        }
        else {
        loc_80734EC:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_80734EC;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_261() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_8073578:
            →puts("then/else block 8");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_807355A:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_807355A;
    }
    else {
        goto loc_8073578;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_262() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
        loc_80735E6:
            →puts("then/else block 8");
        }
        else {
        loc_80735C8:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_80735C8;
    }
    else {
        goto loc_80735E6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_263() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_8073654;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
    loc_8073654:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_264() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_80736A4:
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
        loc_80736C2:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_80736A4;
    }
    else {
        goto loc_80736C2;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_265() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0AC) {
        loc_8073730:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8073730;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_266() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_807379E;
        }
        if(gvar_808A0AC) {
        loc_807379E:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_807379E;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_267() {
    if(gvar_808A0A4 && gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_268() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_807385C;
        }
        if(!gvar_808A0AC) {
            goto loc_807383D;
        }
        else {
        loc_807385C:
            →puts("then/else block 6");
        }
    }
    else {
    loc_807383D:
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_269() {
    if(!gvar_808A0A4) {
    loc_80738AB:
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_80738D9:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_80738D9;
    }
    else if(!gvar_808A0AC) {
        goto loc_80738AB;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_27() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        goto loc_806D0C5;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
    loc_806D0C5:
        if(gvar_808A0B0) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_270() {
    if(!gvar_808A0A4) {
    loc_8073919:
        if(gvar_808A0A8) {
        loc_8073956:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8073956;
    }
    else if(!gvar_808A0AC) {
        goto loc_8073919;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_271() {
    if(!gvar_808A0A4) {
    loc_8073987:
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_80739B5:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC) {
        goto loc_8073987;
    }
    else {
        goto loc_80739B5;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_272() {
    if(!gvar_808A0A4) {
    loc_80739F5:
        if(gvar_808A0A8) {
        loc_8073A32:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC) {
        goto loc_80739F5;
    }
    else {
        goto loc_8073A32;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_273() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_274() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0AC) {
        loc_8073AFF:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8073AFF;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_275() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8073B6D;
        }
        if(gvar_808A0AC) {
        loc_8073B6D:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8073B6D;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_276() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_8073BEA:
            →puts("then/else block 8");
        }
        else if(gvar_808A0AC) {
        loc_8073BDB:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8073BDB;
    }
    else {
        goto loc_8073BEA;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_277() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_8073C58;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
    loc_8073C58:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_278() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0AC) {
        loc_8073CC6:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8073CC6;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_279() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
        loc_8073D25:
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
        loc_8073D34:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8073D25;
    }
    else {
        goto loc_8073D34;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_28() {
    if((gvar_808A0A4 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_280() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_8073DA2;
        }
        if(gvar_808A0AC) {
        loc_8073DA2:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_8073DA2;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_281() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
        loc_8073E10:
            →puts("then/else block 8");
        }
        else {
        loc_8073E01:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_8073E01;
    }
    else {
        goto loc_8073E10;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_282() {
    if((gvar_808A0A4 || (!gvar_808A0A8 && gvar_808A0AC))) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_283() {
    if(gvar_808A0A4) {
    loc_8073ECE:
        →puts("then/else block 6");
    }
    else if((!gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        goto loc_8073ECE;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_284() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((gvar_808A0A8 || !gvar_808A0AC) && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_285() {
    if(gvar_808A0A4) {
    loc_8073FAA:
        →puts("then/else block 6");
    }
    else if((!gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        goto loc_8073FAA;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_286() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((!gvar_808A0A8 && gvar_808A0AC) || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_287() {
    if(gvar_808A0A4) {
    loc_8074086:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0AC) {
        goto loc_8074086;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_288() {
    if(gvar_808A0A4) {
    loc_80740F4:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
            goto loc_80740F4;
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_80740F4;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_289() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_29() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_290() {
    if(gvar_808A0A4) {
    loc_80741D0:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC) {
        goto loc_80741D0;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_291() {
    if(gvar_808A0A4) {
    loc_807423E:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
            goto loc_807423E;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_807423E;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_292() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            goto loc_80742CA;
        }
        if(gvar_808A0B0) {
        loc_80742CA:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_293() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_294() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_295() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((gvar_808A0A8 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_296() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_297() {
    if(gvar_808A0A4) {
    loc_80744D2:
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        goto loc_80744D2;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_298() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        if(gvar_808A0B0) {
        loc_807455E:
            →puts("then/else block 8");
        }
        else {
        loc_807454F:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_807454F;
    }
    else {
        goto loc_807455E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_299() {
    if((gvar_808A0A4 || gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_3() {
    if(!gvar_808A0A4 && gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_30() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_300() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
    loc_807461C:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        goto loc_807461C;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_301() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_302() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
    loc_80746F8:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        goto loc_80746F8;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_303() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_304() {
    if(gvar_808A0A4) {
    loc_80747D4:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || !gvar_808A0B0) {
        goto loc_80747D4;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_305() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0B0) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_306() {
    if(gvar_808A0A4) {
    loc_80748B0:
        →puts("then/else block 6");
    }
    else if((gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        goto loc_80748B0;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_307() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8 && !gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_308() {
    if(gvar_808A0A4) {
    loc_807498C:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
    loc_807499B:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        goto loc_807499B;
    }
    else {
        goto loc_807498C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_309() {
    if(gvar_808A0A4) {
    loc_80749FA:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC && !gvar_808A0B0) {
        goto loc_80749FA;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_31() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8 || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_310() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8 && (gvar_808A0AC || gvar_808A0B0)) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_311() {
    if(gvar_808A0A4) {
    loc_8074AD6:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC || !gvar_808A0B0) {
        goto loc_8074AD6;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_312() {
    if(gvar_808A0A4) {
    loc_8074B44:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
    loc_8074B62:
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        goto loc_8074B44;
    }
    else if(gvar_808A0B0) {
        goto loc_8074B62;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_313() {
    if(gvar_808A0A4) {
    loc_8074BB2:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0AC && !gvar_808A0B0) {
        goto loc_8074BB2;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_314() {
    if(gvar_808A0A4) {
    loc_8074C20:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
    loc_8074C3E:
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_8074C3E;
    }
    else {
        goto loc_8074C20;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_315() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || (!gvar_808A0AC && gvar_808A0B0)) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_316() {
    if(gvar_808A0A4) {
    loc_8074CFC:
        →puts("then/else block 6");
    }
    else if((gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        goto loc_8074CFC;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_317() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_318() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_319() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_32() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        goto loc_806D312;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
    loc_806D312:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_320() {
    if(gvar_808A0A4 || gvar_808A0A8 || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_321() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_322() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_323() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_807500D;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_807500D:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_324() {
    if(gvar_808A0A4) {
    loc_807506C:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_807506C;
    }
    else if(!gvar_808A0AC) {
        goto loc_807506C;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_325() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_80750E9;
        }
        if(gvar_808A0B0) {
        loc_80750E9:
            →puts("then/else block 7");
        }
        else if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else {
            →puts("then/else block 8");
        }
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_326() {
    if(gvar_808A0A4) {
    loc_8075148:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC) {
        goto loc_8075148;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_327() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_328() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_329() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80752B0;
        }
        if(gvar_808A0AC) {
        loc_80752B0:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_33() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_806D362:
            →puts("then/else block 6");
        }
        else {
        loc_806D359:
            if(gvar_808A0B0) {
                →puts("then/else block 8");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806D359;
    }
    else {
        goto loc_806D362;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_330() {
    if(gvar_808A0A4) {
    loc_8075300:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        goto loc_8075300;
    }
    else if(!gvar_808A0AC) {
        goto loc_8075300;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_331() {
    if(gvar_808A0A4) {
    loc_807536E:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC) {
        goto loc_807536E;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_332() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_80753FA;
        }
        if(gvar_808A0B0) {
        loc_80753FA:
            →puts("then/else block 8");
        }
        else if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_333() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8075468;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        if(!gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_8075468:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_334() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_80754D6;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0AC) {
        loc_80754D6:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_335() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || (!gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_336() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        goto loc_80755B2;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80755B2;
        }
        if(gvar_808A0AC) {
        loc_80755B2:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_337() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((!gvar_808A0A8 && gvar_808A0AC) || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_338() {
    if(gvar_808A0A4) {
    loc_807567F:
        →puts("then/else block 7");
    }
    else if((!gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_807567F;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_339() {
    if((gvar_808A0A4 || (!gvar_808A0A8 && gvar_808A0AC))) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_34() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_806D3C7:
            if(!gvar_808A0B0) {
            loc_806D3D0:
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 8");
            }
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806D3C7;
    }
    else {
        goto loc_806D3D0;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_340() {
    if(gvar_808A0A4) {
    loc_807575B:
        →puts("then/else block 7");
    }
    else if((!gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        goto loc_807575B;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_341() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((gvar_808A0A8 || !gvar_808A0AC) && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_342() {
    if(gvar_808A0A4) {
    loc_8075837:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        goto loc_8075837;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_343() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                goto loc_8075896;
            }
            else {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        if(!gvar_808A0B0) {
        loc_8075896:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_344() {
    if(gvar_808A0A4) {
    loc_8075913:
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_8075913;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_8075913;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_345() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_346() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0B0)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_347() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((gvar_808A0A8 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_348() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                goto loc_8075ABC;
            }
            else {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_8075ABC:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_349() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
        loc_8075B2A:
            →puts("then/else block 6");
        }
        else {
        loc_8075B48:
            →puts("then/else block 8");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_8075B2A;
    }
    else {
        goto loc_8075B48;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_35() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_806D435:
            if(gvar_808A0B0) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        goto loc_806D435;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_350() {
    if(gvar_808A0A4) {
    loc_8075BA7:
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_8075BA7;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_351() {
    if(gvar_808A0A4) {
    loc_8075C15:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC) {
        goto loc_8075C15;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_352() {
    if(gvar_808A0A4) {
    loc_8075C83:
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        if(!gvar_808A0AC) {
            goto loc_8075C83;
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8075C83;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_353() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_354() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || gvar_808A0AC || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_355() {
    if(gvar_808A0A4) {
    loc_8075DCD:
        →puts("then/else block 7");
    }
    else if((gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_8075DCD;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_356() {
    if(gvar_808A0A4) {
    loc_8075E3B:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
    loc_8075E2C:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        goto loc_8075E3B;
    }
    else if(!gvar_808A0B0) {
        goto loc_8075E2C;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_357() {
    if(gvar_808A0A4) {
    loc_8075EA9:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || !gvar_808A0B0) {
        goto loc_8075EA9;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_358() {
    if(gvar_808A0A4) {
    loc_8075F17:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
    loc_8075F08:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        goto loc_8075F17;
    }
    else {
        goto loc_8075F08;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_359() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || (!gvar_808A0AC && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_36() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_806D4A3:
            if(!gvar_808A0B0) {
            loc_806D4AC:
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 7");
            }
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806D4A3;
    }
    else {
        goto loc_806D4AC;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_360() {
    if(gvar_808A0A4) {
    loc_8075FF3:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC && !gvar_808A0B0) {
        goto loc_8075FF3;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_361() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_362() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
    loc_80760CF:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_80760CF;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_363() {
    if((gvar_808A0A4 || gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_364() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
    loc_80761AB:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        goto loc_80761AB;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_365() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_366() {
    if(gvar_808A0A4) {
    loc_8076287:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0AC && gvar_808A0B0) {
        goto loc_8076287;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_367() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8 && (gvar_808A0AC || !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_368() {
    if(gvar_808A0A4) {
    loc_8076363:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
    loc_8076372:
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_8076363;
    }
    else {
        goto loc_8076372;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_369() {
    if(gvar_808A0A4) {
    loc_80763D1:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        goto loc_80763D1;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_37() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_806D511:
            if(gvar_808A0B0) {
                goto loc_806D538;
            }
            else {
                →puts("then/else block 7");
            }
        }
        else {
        loc_806D538:
            →puts("then/else block 8");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806D511;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_370() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_371() {
    if(gvar_808A0A4) {
    loc_80764AD:
        →puts("then/else block 7");
    }
    else if((gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        goto loc_80764AD;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_372() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8 && !gvar_808A0AC && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_373() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0B0) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_374() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_375() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_376() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80766E2;
        }
        if(gvar_808A0AC) {
        loc_80766E2:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_377() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8076732;
        }
        if(gvar_808A0B0) {
        loc_8076732:
            →puts("then/else block 6");
        }
        else if(!gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else {
            →puts("then/else block 8");
        }
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_378() {
    if(gvar_808A0A4) {
    loc_80767AF:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_80767AF;
    }
    else if(!gvar_808A0AC) {
        goto loc_80767AF;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_379() {
    if(gvar_808A0A4) {
    loc_807681D:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC) {
        goto loc_807681D;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_38() {
    if(gvar_808A0A4) {
    loc_806D574:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_806D588:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_806D588;
    }
    else if(!gvar_808A0B0) {
        goto loc_806D574;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_380() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        goto loc_807688B;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
    loc_807688B:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_381() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || !gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_382() {
    if(gvar_808A0A4 || gvar_808A0A8 || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_383() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_384() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_385() {
    if(gvar_808A0A4) {
    loc_8076AB1:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0 && gvar_808A0AC) {
        goto loc_8076AB1;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_386() {
    if(gvar_808A0A4) {
    loc_8076B1F:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        goto loc_8076B1F;
    }
    else if(gvar_808A0AC) {
        goto loc_8076B1F;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_387() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8076B9C;
        }
        if(gvar_808A0B0) {
        loc_8076B9C:
            →puts("then/else block 8");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_388() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || (!gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_389() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8076C78;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0AC) {
        loc_8076C78:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_39() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_390() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        goto loc_8076CE6;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8076CE6;
        }
        if(gvar_808A0AC) {
        loc_8076CE6:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_391() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8076D54;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(!gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_8076D54:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_392() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if((!gvar_808A0A8 && gvar_808A0AC) || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_393() {
    if(gvar_808A0A4) {
    loc_8076E30:
        →puts("then/else block 8");
    }
    else if((!gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_8076E30;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_394() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if((gvar_808A0A8 || !gvar_808A0AC) && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_395() {
    if(gvar_808A0A4) {
    loc_8076F0C:
        →puts("then/else block 8");
    }
    else if((!gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_8076F0C;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_396() {
    if((gvar_808A0A4 || (!gvar_808A0A8 && gvar_808A0AC))) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_397() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_398() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if((gvar_808A0A8 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_399() {
    if(gvar_808A0A4 || (gvar_808A0A8 && gvar_808A0B0)) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_4() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        if(!gvar_808A0B0) {
        loc_806C6EC:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_806C6EC;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_40() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0B0) {
            goto loc_806D673;
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0AC) {
    loc_806D673:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_400() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        if(!gvar_808A0B0) {
        loc_8077114:
            →puts("then/else block 6");
        }
        else {
        loc_8077123:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_8077114;
    }
    else {
        goto loc_8077123;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_401() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                goto loc_8077182;
            }
            else {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0B0) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
    loc_8077182:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_402() {
    if(gvar_808A0A4) {
    loc_807720E:
        →puts("then/else block 8");
    }
    else if(!gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_807720E;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_403() {
    if(gvar_808A0A4) {
    loc_807727C:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        goto loc_807727C;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_404() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(!gvar_808A0AC) {
                goto loc_80772CC;
            }
            else {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        if(!gvar_808A0B0) {
        loc_80772CC:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_405() {
    if(gvar_808A0A4) {
    loc_8077358:
        →puts("then/else block 8");
    }
    else if(!gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_8077358;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8077358;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_406() {
    if(gvar_808A0A4) {
    loc_80773C6:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        goto loc_80773C6;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_407() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_408() {
    if(gvar_808A0A4) {
    loc_80774A2:
        →puts("then/else block 8");
    }
    else if(!gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_80774A2;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_80774A2;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_409() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8 || gvar_808A0AC || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_41() {
    if(gvar_808A0A4) {
    loc_806D6BE:
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_806D6D2:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_806D6D2;
    }
    else if(!gvar_808A0B0) {
        goto loc_806D6BE;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_410() {
    if(gvar_808A0A4) {
    loc_807757E:
        →puts("then/else block 8");
    }
    else if((gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_807757E;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_411() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8 || (!gvar_808A0AC && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_412() {
    if(gvar_808A0A4) {
    loc_807765A:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
    loc_807763C:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_807765A;
    }
    else {
        goto loc_807763C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_413() {
    if(gvar_808A0A4) {
    loc_80776C8:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC && gvar_808A0B0) {
        goto loc_80776C8;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_414() {
    if(gvar_808A0A4) {
    loc_8077736:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
    loc_8077718:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        goto loc_8077736;
    }
    else if(!gvar_808A0B0) {
        goto loc_8077718;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_415() {
    if(gvar_808A0A4) {
    loc_80777A4:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        goto loc_80777A4;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_416() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0A8 && (gvar_808A0AC || !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_417() {
    if(gvar_808A0A4) {
    loc_8077880:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC && gvar_808A0B0) {
        goto loc_8077880;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_418() {
    if(gvar_808A0A4) {
    loc_80778EE:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
    loc_80778DF:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_80778DF;
    }
    else {
        goto loc_80778EE;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_419() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0A8 && !gvar_808A0AC && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_42() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_420() {
    if(gvar_808A0A4) {
    loc_80779CA:
        →puts("then/else block 8");
    }
    else if((gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_80779CA;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_421() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_422() {
    if(gvar_808A0A4) {
    loc_8077AA6:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        goto loc_8077AA6;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_423() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_424() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
    loc_8077B82:
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_8077B82;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_425() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0AC && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_426() {
    if((gvar_808A0A4 || gvar_808A0A8)) {
    loc_8077C5E:
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_8077C5E;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_427() {
    if((gvar_808A0A4 || gvar_808A0A8 || gvar_808A0AC)) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_428() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_429() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8077D99;
        }
        if(gvar_808A0AC) {
        loc_8077D99:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_43() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            goto loc_806D7CC;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
    loc_806D7CC:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_430() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0B0) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_431() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_432() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8077ED4;
        }
        if(gvar_808A0B0) {
        loc_8077ED4:
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_433() {
    if(gvar_808A0A4) {
    loc_8077F60:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0 && gvar_808A0AC) {
        goto loc_8077F60;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_434() {
    if(gvar_808A0A4) {
    loc_8077FCE:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_8077FCE;
    }
    else if(gvar_808A0AC) {
        goto loc_8077FCE;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_435() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8 || (!gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_436() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        goto loc_807809B;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_807809B;
        }
        if(gvar_808A0AC) {
        loc_807809B:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_437() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_8078109;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0AC) {
        loc_8078109:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_438() {
    if(gvar_808A0A4) {
    loc_8078186:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0 && gvar_808A0AC) {
        goto loc_8078186;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_439() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_80781E5;
        }
        if(gvar_808A0B0) {
        loc_80781E5:
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_44() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806D81C;
        }
        if(!gvar_808A0B0) {
            goto loc_806D808;
        }
        else {
        loc_806D81C:
            →puts("then/else block 6");
        }
    }
    else {
    loc_806D808:
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_440() {
    if(gvar_808A0A4) {
    loc_8078262:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_8078262;
    }
    else if(gvar_808A0AC) {
        goto loc_8078262;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_441() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8) {
            if(gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_442() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0 || !gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_443() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_444() {
    if(gvar_808A0A4 || gvar_808A0A8 || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_445() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        goto loc_8078488;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
    loc_8078488:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_446() {
    if(gvar_808A0A4 || gvar_808A0A8) {
        goto loc_80784F6;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
    loc_80784F6:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_447() {
    if(!gvar_808A0A4) {
    loc_8078532:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_8078546:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        goto loc_8078546;
    }
    else {
        goto loc_8078532;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_448() {
    if(!gvar_808A0A4) {
    loc_80785A0:
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_80785B4:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        goto loc_80785B4;
    }
    else {
        goto loc_80785A0;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_449() {
    if(gvar_808A0A4 && !gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_45() {
    if(gvar_808A0A4) {
    loc_806D876:
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_806D899:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_806D876;
    }
    else {
        goto loc_806D899;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_450() {
    if(gvar_808A0A4 && (gvar_808A0B0 || gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_451() {
    if(!gvar_808A0A4) {
    loc_80786EA:
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_807870D:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807870D;
    }
    else if(!gvar_808A0A8) {
        goto loc_80786EA;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_452() {
    if(!gvar_808A0A4) {
    loc_8078758:
        if(gvar_808A0AC) {
        loc_807878A:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807878A;
    }
    else if(!gvar_808A0A8) {
        goto loc_8078758;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_453() {
    if(!gvar_808A0A4) {
    loc_80787C6:
        if(gvar_808A0AC) {
        loc_80787E9:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        goto loc_80787E9;
    }
    else {
        goto loc_80787C6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_454() {
    if(gvar_808A0A4 && !gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_455() {
    if(!gvar_808A0A4) {
    loc_80788A2:
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_80788B6:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_80788B6;
    }
    else if(!gvar_808A0A8) {
        goto loc_80788A2;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_456() {
    if(gvar_808A0A4 && (gvar_808A0B0 || gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_457() {
    if(!gvar_808A0A4) {
    loc_807897E:
        if(gvar_808A0AC) {
        loc_80789B0:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_80789B0;
    }
    else if(!gvar_808A0A8) {
        goto loc_807897E;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_458() {
    if(!gvar_808A0A4) {
    loc_80789EC:
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_8078A0F:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        goto loc_8078A0F;
    }
    else {
        goto loc_80789EC;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_459() {
    if(gvar_808A0A4 && !gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_46() {
    if(gvar_808A0A4) {
    loc_806D8E4:
        if(gvar_808A0AC) {
        loc_806D916:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_806D8E4;
    }
    else {
        goto loc_806D916;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_460() {
    if(!gvar_808A0A4) {
    loc_8078AC8:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_8078ADC:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8078ADC;
    }
    else if(!gvar_808A0A8) {
        goto loc_8078AC8;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_461() {
    if(!gvar_808A0A4) {
    loc_8078B36:
        if(gvar_808A0AC) {
        loc_8078B59:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8078B59;
    }
    else if(!gvar_808A0A8) {
        goto loc_8078B36;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_462() {
    if(gvar_808A0A4 && (gvar_808A0B0 || gvar_808A0A8)) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_463() {
    if(!gvar_808A0A4) {
    loc_8078C12:
        if(gvar_808A0AC) {
        loc_8078C44:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        goto loc_8078C44;
    }
    else {
        goto loc_8078C12;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_464() {
    if(!gvar_808A0A4) {
    loc_8078C80:
        if(gvar_808A0AC) {
        loc_8078CB2:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        goto loc_8078CB2;
    }
    else {
        goto loc_8078C80;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_465() {
    if(gvar_808A0A4) {
        goto loc_8078CF9;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
    loc_8078CF9:
        if(gvar_808A0B0) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_466() {
    if(gvar_808A0A4) {
        goto loc_8078D67;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8078D70;
        }
        if(gvar_808A0A8) {
        loc_8078D70:
            →puts("then/else block 6");
        }
        else {
        loc_8078D67:
            if(gvar_808A0B0) {
                →puts("then/else block 8");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_467() {
    if(gvar_808A0A4) {
        goto loc_8078DD5;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        if(gvar_808A0A8) {
            goto loc_8078DDE;
        }
    loc_8078DD5:
        if(!gvar_808A0B0) {
        loc_8078DDE:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_468() {
    if(gvar_808A0A4) {
        goto loc_8078E43;
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        loc_8078E43:
            if(gvar_808A0B0) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_469() {
    if(gvar_808A0A4) {
        goto loc_8078EB1;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        if(gvar_808A0A8) {
            goto loc_8078EBA;
        }
    loc_8078EB1:
        if(!gvar_808A0B0) {
        loc_8078EBA:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_47() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806D966;
        }
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_806D966:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_470() {
    if(gvar_808A0A4) {
        goto loc_8078F1F;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8078F46;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_8078F1F:
        if(gvar_808A0B0) {
        loc_8078F46:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_471() {
    if(gvar_808A0A4) {
        goto loc_8078F8D;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
    loc_8078F8D:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_472() {
    if(gvar_808A0A4) {
        goto loc_8078FFB;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8079004;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_8078FFB:
        if(!gvar_808A0B0) {
        loc_8079004:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_473() {
    if(gvar_808A0A4) {
        goto loc_8079069;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
        if(!gvar_808A0A8) {
        loc_8079069:
            if(gvar_808A0B0) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_474() {
    if(gvar_808A0A4) {
        goto loc_80790D7;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_80790EF;
        }
        if(gvar_808A0A8) {
        loc_80790EF:
            →puts("then/else block 7");
        }
        else {
        loc_80790D7:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 8");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_475() {
    if(gvar_808A0A4) {
        goto loc_8079145;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        if(!gvar_808A0A8) {
        loc_8079145:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_476() {
    if(gvar_808A0A4) {
        goto loc_80791B3;
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        loc_80791B3:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_477() {
    if(gvar_808A0A4) {
        goto loc_8079221;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
    loc_8079221:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_478() {
    if(gvar_808A0A4) {
        goto loc_807928F;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8079298;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
    loc_807928F:
        if(!gvar_808A0B0) {
        loc_8079298:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_479() {
    if(gvar_808A0A4) {
        goto loc_80792FD;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
        if(gvar_808A0A8) {
            goto loc_8079324;
        }
    loc_80792FD:
        if(gvar_808A0B0) {
        loc_8079324:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_48() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806D9D4;
        }
        if(gvar_808A0B0) {
            goto loc_806D9F2;
        }
        else {
        loc_806D9D4:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
    loc_806D9F2:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_480() {
    if(gvar_808A0A4) {
        goto loc_807936B;
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        loc_807936B:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_481() {
    if(gvar_808A0A4) {
        goto loc_80793D9;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        if(!gvar_808A0A8) {
        loc_80793D9:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_482() {
    if(gvar_808A0A4) {
        goto loc_8079447;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_807946E;
        }
        if(gvar_808A0A8) {
        loc_807946E:
            →puts("then/else block 8");
        }
        else {
        loc_8079447:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_483() {
    if(gvar_808A0A4) {
        goto loc_80794B5;
    }
    else {
        if(gvar_808A0AC) {
        loc_80794B5:
            if(gvar_808A0B0) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_484() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_485() {
    if(gvar_808A0A4) {
        goto loc_8079591;
    }
    else {
        if(gvar_808A0AC) {
        loc_8079591:
            if(!gvar_808A0B0) {
                goto loc_80795A9;
            }
            else {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
        loc_80795A9:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_486() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_80795E9:
            if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_80795E9;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_487() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_488() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC && gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_80796E4:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_80796E4;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_489() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC && gvar_808A0A8) {
        loc_8079761:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_8079761;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_49() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else {
            goto loc_806DA60;
        }
    }
    else if(gvar_808A0AC) {
    loc_806DA60:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_490() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_80797CF;
        }
    loc_80797A1:
        if(gvar_808A0A8) {
        loc_80797CF:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_80797A1;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_491() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_492() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_80798AB;
        }
        if(gvar_808A0A8) {
        loc_80798AB:
            →puts("then/else block 7");
        }
        else {
        loc_807989C:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807989C;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_493() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_8079919;
        }
        if(gvar_808A0A8) {
        loc_8079919:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_8079919;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_494() {
    if(gvar_808A0A4 && !gvar_808A0B0) {
        goto loc_8079959;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
    loc_8079959:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_495() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_80799C7:
            if(gvar_808A0A8) {
                →puts("then/else block 7");
            }
            else {
            loc_80799E6:
                →puts("then/else block 6");
            }
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_80799C7;
    }
    else {
        goto loc_80799E6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_496() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_8079A35:
            if(gvar_808A0A8) {
            loc_8079A63:
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_8079A35;
    }
    else {
        goto loc_8079A63;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_497() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8079AE0:
            →puts("then/else block 8");
        }
        else {
        loc_8079AA3:
            if(gvar_808A0A8) {
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_8079AA3;
    }
    else {
        goto loc_8079AE0;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_498() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_499() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        goto loc_8079BAD;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
    loc_8079BAD:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_5() {
    if(gvar_808A0A4 || !gvar_808A0A8) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_50() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        goto loc_806DAA7;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
    loc_806DAA7:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_500() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_501() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else if(gvar_808A0A8) {
        loc_8079C89:
            →puts("then/else block 7");
        }
        else {
        loc_8079C7A:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8079C89;
    }
    else {
        goto loc_8079C7A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_502() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8079D06:
            →puts("then/else block 8");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_8079CE8:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_8079D06;
    }
    else {
        goto loc_8079CE8;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_503() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_8079D74:
            →puts("then/else block 8");
        }
        else if(gvar_808A0A8) {
        loc_8079D65:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_8079D65;
    }
    else {
        goto loc_8079D74;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_504() {
    if(gvar_808A0A4) {
        goto loc_8079DBB;
    }
    else {
        if(!gvar_808A0AC) {
        loc_8079DBB:
            if(gvar_808A0B0) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_505() {
    if(!gvar_808A0A4 && gvar_808A0AC) {
    loc_8079E41:
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        goto loc_8079E41;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_506() {
    if(gvar_808A0A4) {
        goto loc_8079E97;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
    loc_8079E97:
        if(gvar_808A0B0 || !gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_507() {
    if(gvar_808A0A4) {
        goto loc_8079F05;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
    loc_8079F05:
        if(gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_508() {
    if(gvar_808A0A4) {
        goto loc_8079F73;
    }
    else {
        if(gvar_808A0AC) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
    loc_8079F73:
        if(gvar_808A0B0) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_509() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 8");
        }
        else if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else {
            goto loc_8079FF9;
        }
    }
    else if(gvar_808A0AC) {
    loc_8079FF9:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_51() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        goto loc_806DB1E;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
    loc_806DB1E:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_510() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_807A058:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_807A058;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_511() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_512() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_807A143;
        }
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_807A143:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_513() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_807A1C0;
        }
        else if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
    loc_807A1C0:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_514() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_807A21F:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_807A21F;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_515() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_516() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_517() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_807A378;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
    loc_807A378:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_518() {
    if(gvar_808A0A4) {
        goto loc_807A3BF;
    }
    else {
        if(gvar_808A0AC) {
        loc_807A3BF:
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_519() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_52() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_520() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_807A4C2;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
    loc_807A4C2:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_521() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_807A4F3:
            if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        goto loc_807A4F3;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_522() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_523() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC && gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_807A5EE:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807A5EE;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_524() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC && gvar_808A0A8) {
        loc_807A67A:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807A67A;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_525() {
    if(gvar_808A0A4 && !gvar_808A0B0) {
        goto loc_807A6AB;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
    loc_807A6AB:
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_526() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_807A719:
            if(gvar_808A0A8) {
                →puts("then/else block 8");
            }
            else {
            loc_807A738:
                →puts("then/else block 6");
            }
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807A719;
    }
    else {
        goto loc_807A738;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_527() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_807A7B5:
            →puts("then/else block 7");
        }
        else {
        loc_807A787:
            if(gvar_808A0A8) {
                →puts("then/else block 8");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807A787;
    }
    else {
        goto loc_807A7B5;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_528() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_807A7F5:
            if(gvar_808A0A8) {
            loc_807A832:
                →puts("then/else block 8");
            }
            else {
                →puts("then/else block 6");
            }
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807A7F5;
    }
    else {
        goto loc_807A832;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_529() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_53() {
    if((gvar_808A0A4 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_530() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_531() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        goto loc_807A97C;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
    loc_807A97C:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_532() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_807A9DB:
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_807A9CC:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807A9DB;
    }
    else {
        goto loc_807A9CC;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_533() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
        loc_807AA58:
            →puts("then/else block 8");
        }
        else {
        loc_807AA3A:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807AA58;
    }
    else {
        goto loc_807AA3A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_534() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_807AAB7:
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
        loc_807AAC6:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807AAB7;
    }
    else {
        goto loc_807AAC6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_535() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_807AB34;
        }
    loc_807AAF7:
        if(gvar_808A0A8) {
        loc_807AB34:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807AAF7;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_536() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_537() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_807AC10;
        }
        if(gvar_808A0A8) {
        loc_807AC10:
            →puts("then/else block 8");
        }
        else {
        loc_807ABF2:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807ABF2;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_538() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_807AC7E;
        }
        if(gvar_808A0A8) {
        loc_807AC7E:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807AC7E;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_539() {
    if(gvar_808A0A4) {
        goto loc_807ACC5;
    }
    else {
        if(!gvar_808A0AC) {
        loc_807ACC5:
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_54() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_540() {
    if(gvar_808A0A4) {
        goto loc_807AD33;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
    loc_807AD33:
        if(gvar_808A0B0 || !gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_541() {
    if(gvar_808A0A4) {
        goto loc_807ADA1;
    }
    else {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_807ADA1:
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_542() {
    if(gvar_808A0A4) {
        goto loc_807AE0F;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
    loc_807AE0F:
        if(gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_543() {
    if(!gvar_808A0A4 && gvar_808A0AC) {
    loc_807AEA4:
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        goto loc_807AEA4;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_544() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_807AEF4:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_807AEF4;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_545() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_546() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_807AFDF;
        }
        else if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0AC) {
    loc_807AFDF:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_547() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_807B05C;
        }
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_807B05C:
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_548() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
        }
        else if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else {
            goto loc_807B0CA;
        }
    }
    else if(gvar_808A0AC) {
    loc_807B0CA:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_549() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_807B138:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_807B138;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_55() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_550() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0A8) {
            goto loc_807B1A6;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
    loc_807B1A6:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_551() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            goto loc_807B214;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
    loc_807B214:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_552() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_807B282;
        }
        else if(gvar_808A0A8) {
            goto loc_807B282;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
    loc_807B282:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_553() {
    if(gvar_808A0A4) {
        goto loc_807B2C9;
    }
    else {
        if(gvar_808A0AC) {
        loc_807B2C9:
            if(gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_554() {
    if(gvar_808A0A4) {
        goto loc_807B337;
    }
    else {
        if(gvar_808A0AC) {
        loc_807B337:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_555() {
    if(gvar_808A0A4) {
        goto loc_807B3A5;
    }
    else {
        if(gvar_808A0AC) {
        loc_807B3A5:
            if(gvar_808A0B0) {
                goto loc_807B3CC;
            }
            else {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
        loc_807B3CC:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_556() {
    if(gvar_808A0A4 && !gvar_808A0B0) {
        goto loc_807B3FD;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
    loc_807B3FD:
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_557() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_807B48A:
            →puts("then/else block 6");
        }
        else {
        loc_807B46B:
            if(gvar_808A0A8) {
                →puts("then/else block 8");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807B46B;
    }
    else {
        goto loc_807B48A;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_558() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else {
        loc_807B4D9:
            if(gvar_808A0A8) {
                →puts("then/else block 8");
            }
            else {
            loc_807B507:
                →puts("then/else block 7");
            }
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807B4D9;
    }
    else {
        goto loc_807B507;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_559() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else {
        loc_807B547:
            if(gvar_808A0A8) {
            loc_807B584:
                →puts("then/else block 8");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807B547;
    }
    else {
        goto loc_807B584;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_56() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_806DD3B:
            if(!gvar_808A0B0) {
                goto loc_806DD44;
            }
            else {
                →puts("then/else block 8");
            }
        }
        else {
        loc_806DD44:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806DD3B;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_560() {
    if((gvar_808A0A4 && gvar_808A0B0) || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_561() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_562() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        goto loc_807B6CE;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
    loc_807B6CE:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_563() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_807B71E:
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_807B72D:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807B72D;
    }
    else {
        goto loc_807B71E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_564() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_807B78C:
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
        loc_807B7AA:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807B7AA;
    }
    else {
        goto loc_807B78C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_565() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
        loc_807B818:
            →puts("then/else block 8");
        }
        else {
        loc_807B809:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807B809;
    }
    else {
        goto loc_807B818;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_566() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_807B849:
            if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        goto loc_807B849;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_567() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_568() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC && gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
        loc_807B953:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807B953;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_569() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0AC && gvar_808A0A8) {
        loc_807B9D0:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807B9D0;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_57() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_806DDA9:
            if(gvar_808A0B0) {
                →puts("then/else block 8");
            }
            else {
            loc_806DDC1:
                →puts("then/else block 7");
            }
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806DDA9;
    }
    else {
        goto loc_806DDC1;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_570() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_807BA3E;
        }
    loc_807BA01:
        if(gvar_808A0A8) {
        loc_807BA3E:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807BA01;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_571() {
    if(gvar_808A0A4 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_572() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_807BB1A;
        }
        if(gvar_808A0A8) {
        loc_807BB1A:
            →puts("then/else block 8");
        }
        else {
        loc_807BB0B:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807BB0B;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_573() {
    if(!gvar_808A0A4) {
        if(gvar_808A0AC) {
            goto loc_807BB88;
        }
        if(gvar_808A0A8) {
        loc_807BB88:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807BB88;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_574() {
    if(gvar_808A0A4) {
        goto loc_807BBCF;
    }
    else {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_807BBCF:
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_575() {
    if(gvar_808A0A4) {
        goto loc_807BC3D;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
    loc_807BC3D:
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_576() {
    if(gvar_808A0A4) {
        goto loc_807BCAB;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
    loc_807BCAB:
        if(gvar_808A0B0 || gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_577() {
    if(gvar_808A0A4) {
        goto loc_807BD19;
    }
    else {
        if(!gvar_808A0AC) {
        loc_807BD19:
            if(gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_578() {
    if(!gvar_808A0A4 && gvar_808A0AC) {
    loc_807BDAE:
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        goto loc_807BDAE;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_579() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_807BE0D:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_807BE0D;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_58() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_806DE2F:
            →puts("then/else block 7");
        }
        else {
        loc_806DE17:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 8");
            }
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806DE17;
    }
    else {
        goto loc_806DE2F;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_580() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0A8) {
            goto loc_807BE7B;
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0AC) {
    loc_807BE7B:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_581() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_807BEE9;
        }
        else if(!gvar_808A0A8) {
            goto loc_807BEE9;
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0AC) {
    loc_807BEE9:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_582() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_807BF66;
        }
        if(!gvar_808A0A8) {
            goto loc_807BF57;
        }
        else {
        loc_807BF66:
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0AC) {
    loc_807BF57:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_583() {
    if(!gvar_808A0A4 || gvar_808A0B0) {
        if(gvar_808A0AC) {
        loc_807BFD4:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_807BFD4;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_584() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            goto loc_807C042;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
    loc_807C042:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_585() {
    if(gvar_808A0A4) {
        if(!gvar_808A0B0 && gvar_808A0A8) {
            goto loc_807C0B0;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
    loc_807C0B0:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_586() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            goto loc_807C11E;
        }
        else if(gvar_808A0A8) {
            goto loc_807C11E;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
    loc_807C11E:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_587() {
    if(gvar_808A0A4) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else if(!gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else {
            goto loc_807C18C;
        }
    }
    else if(gvar_808A0AC) {
    loc_807C18C:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_588() {
    if(gvar_808A0A4 || (!gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_589() {
    if(gvar_808A0A4) {
        goto loc_807C24A;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_807C24A;
        }
        if(gvar_808A0A8) {
        loc_807C24A:
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_59() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_806DE85:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
            }
            else {
            loc_806DE9D:
                →puts("then/else block 7");
            }
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806DE85;
    }
    else {
        goto loc_806DE9D;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_590() {
    if(gvar_808A0A4) {
        goto loc_807C2B8;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        if(gvar_808A0A8) {
            goto loc_807C2B8;
        }
        if(!gvar_808A0B0) {
        loc_807C2B8:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_591() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0B0) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_592() {
    if(gvar_808A0A4) {
        goto loc_807C394;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        if(gvar_808A0A8) {
            goto loc_807C394;
        }
        if(!gvar_808A0B0) {
        loc_807C394:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_593() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else {
        if(gvar_808A0AC) {
            goto loc_807C420;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0B0) {
        loc_807C420:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_594() {
    if(gvar_808A0A4) {
        goto loc_807C470;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
    loc_807C470:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_595() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_596() {
    if(gvar_808A0A4) {
        goto loc_807C54C;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_807C54C;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        if(!gvar_808A0B0) {
        loc_807C54C:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_597() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_598() {
    if(gvar_808A0A4) {
        goto loc_807C628;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_807C637;
        }
        if(gvar_808A0A8) {
        loc_807C637:
            →puts("then/else block 7");
        }
        else if(!gvar_808A0B0) {
        loc_807C628:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_599() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_6() {
    if(!gvar_808A0A4 && gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_60() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_806DEF3:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 8");
    }
    else if(!gvar_808A0A8) {
        goto loc_806DEF3;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_600() {
    if(gvar_808A0A4) {
        goto loc_807C704;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0A8 && !gvar_808A0B0) {
    loc_807C704:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_601() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_602() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || (!gvar_808A0A8 && gvar_808A0B0)) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_603() {
    if(gvar_808A0A4) {
        goto loc_807C84E;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
    loc_807C84E:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_604() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((!gvar_808A0AC && gvar_808A0A8) || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_605() {
    if(gvar_808A0A4) {
        goto loc_807C92A;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_807C92A;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        if(!gvar_808A0B0) {
        loc_807C92A:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_606() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_607() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_608() {
    if(gvar_808A0A4) {
        goto loc_807CA74;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8 && !gvar_808A0B0) {
    loc_807CA74:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_609() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else {
        if(gvar_808A0A8) {
            goto loc_807CB00;
        }
        if(gvar_808A0B0) {
        loc_807CB00:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_61() {
    if(gvar_808A0A4) {
    loc_806DF56:
        if(gvar_808A0AC) {
        loc_806DF79:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_806DF79;
    }
    else if(!gvar_808A0B0) {
        goto loc_806DF56;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_610() {
    if(gvar_808A0A4) {
        goto loc_807CB50;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_807CB6E;
        }
        if(gvar_808A0A8) {
        loc_807CB6E:
            →puts("then/else block 8");
        }
        else if(!gvar_808A0B0) {
        loc_807CB50:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_611() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        goto loc_807CBDC;
    }
    else {
        if(gvar_808A0A8) {
            goto loc_807CBDC;
        }
        if(gvar_808A0B0) {
        loc_807CBDC:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_612() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_613() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_614() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            goto loc_807CD17;
        }
        else {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
    }
    if(gvar_808A0A8) {
    loc_807CD17:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_615() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_616() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
    loc_807CDF3:
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        goto loc_807CDF3;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_617() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_618() {
    if(gvar_808A0A4) {
        goto loc_807CEC0;
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_807CECF;
        }
        if(gvar_808A0A8) {
        loc_807CECF:
            →puts("then/else block 7");
        }
        else {
        loc_807CEC0:
            →puts("then/else block 6");
        }
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_619() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_62() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806DFE7;
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0AC) {
    loc_806DFE7:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_620() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_621() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_622() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_807D096;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
    loc_807D096:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_623() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_624() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_625() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_626() {
    if(gvar_808A0A4) {
        goto loc_807D230;
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_807D24E;
        }
        if(gvar_808A0A8) {
        loc_807D24E:
            →puts("then/else block 8");
        }
        else {
        loc_807D230:
            →puts("then/else block 6");
        }
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_627() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
    loc_807D2BC:
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        goto loc_807D2BC;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_628() {
    if(gvar_808A0A4 || (gvar_808A0AC && gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_629() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_63() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806E055;
        }
        else if(!gvar_808A0B0) {
            goto loc_806E055;
        }
        else {
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0AC) {
    loc_806E055:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_630() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((gvar_808A0AC && gvar_808A0B0) || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_631() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else {
        if(gvar_808A0AC) {
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_632() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else {
        if(gvar_808A0AC) {
            if(gvar_808A0B0) {
                goto loc_807D4E2;
            }
            else {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
        loc_807D4E2:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_633() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_807D550:
            →puts("then/else block 8");
        }
        else {
        loc_807D541:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_807D541;
    }
    else {
        goto loc_807D550;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_634() {
    if(gvar_808A0A4 || gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_635() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_636() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_637() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_638() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_639() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_807D7E4;
        }
        if(!gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_807D7E4:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_64() {
    if(gvar_808A0A4) {
    loc_806E0A0:
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_806E0B4:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        goto loc_806E0A0;
    }
    else {
        goto loc_806E0B4;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_640() {
    if(gvar_808A0A4) {
        goto loc_807D834;
    }
    else if(gvar_808A0AC) {
    loc_807D852:
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
    loc_807D834:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        goto loc_807D852;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_641() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_642() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_643() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((!gvar_808A0AC && gvar_808A0A8) || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_644() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_645() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        goto loc_807DA5A;
    }
    else {
        if(gvar_808A0A8) {
            goto loc_807DA5A;
        }
        if(!gvar_808A0B0) {
        loc_807DA5A:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_646() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_807DAC8;
    }
    if(gvar_808A0A8) {
    loc_807DAC8:
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_647() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_648() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 7");
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_649() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        if(gvar_808A0A8) {
            goto loc_807DC12;
        }
        if(!gvar_808A0B0) {
        loc_807DC12:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_65() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806E131;
        }
        if(!gvar_808A0B0) {
            goto loc_806E10E;
        }
        else {
        loc_806E131:
            →puts("then/else block 7");
        }
    }
    else {
    loc_806E10E:
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_650() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    else {
        if(gvar_808A0A8) {
            goto loc_807DC80;
        }
        if(!gvar_808A0B0) {
        loc_807DC80:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_651() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_807DD0C;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
    loc_807DD0C:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_652() {
    if(gvar_808A0A4 || (!gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_653() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(gvar_808A0AC) {
            goto loc_807DDCA;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        if(!gvar_808A0B0) {
        loc_807DDCA:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_654() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_655() {
    if(gvar_808A0A4) {
        goto loc_807DEB5;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_807DEB5;
        }
        if(gvar_808A0A8) {
        loc_807DEB5:
            →puts("then/else block 7");
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_656() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0A8 && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_657() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_658() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_659() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_66() {
    if(gvar_808A0A4) {
    loc_806E17C:
        if(gvar_808A0AC) {
        loc_806E1AE:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        goto loc_806E17C;
    }
    else {
        goto loc_806E1AE;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_660() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_807E0CC;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0B0) {
    loc_807E0CC:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_661() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || (!gvar_808A0A8 && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_662() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
        if(gvar_808A0A8) {
            goto loc_807E1C6;
        }
        if(gvar_808A0B0) {
        loc_807E1C6:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_663() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 7");
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_664() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_665() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_807E310;
    }
    if(gvar_808A0A8) {
    loc_807E310:
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_666() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0A8 && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_667() {
    if(gvar_808A0A4) {
        goto loc_807E3DD;
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
    loc_807E3DD:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_668() {
    if(gvar_808A0A4) {
        goto loc_807E44B;
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
    loc_807E44B:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_669() {
    if(gvar_808A0A4) {
        goto loc_807E4B9;
    }
    else {
        if(gvar_808A0AC) {
            if(!gvar_808A0B0) {
                goto loc_807E4B9;
            }
            else {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
        loc_807E4B9:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_67() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8 && !gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_670() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_671() {
    if(gvar_808A0A4 || gvar_808A0AC) {
    loc_807E595:
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        goto loc_807E595;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_672() {
    if(gvar_808A0A4) {
        goto loc_807E603;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0 && gvar_808A0A8) {
    loc_807E603:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_673() {
    if(gvar_808A0A4) {
        goto loc_807E671;
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_807E671;
        }
        if(gvar_808A0A8) {
        loc_807E671:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_674() {
    if(gvar_808A0A4) {
        goto loc_807E6DF;
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
    loc_807E6DF:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_675() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((gvar_808A0AC && gvar_808A0B0) || !gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_676() {
    if(gvar_808A0A4 || (gvar_808A0AC && gvar_808A0B0)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_677() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((gvar_808A0AC && gvar_808A0B0) || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_678() {
    if(gvar_808A0A4) {
        goto loc_807E897;
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_807E897:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_679() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_807E914:
            →puts("then/else block 8");
        }
        else {
        loc_807E8F6:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807E914;
    }
    else {
        goto loc_807E8F6;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_68() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0B0) {
            goto loc_806E28A;
        }
        else {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
    loc_806E28A:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_680() {
    if(gvar_808A0A4) {
        goto loc_807E973;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_807E982;
        }
        else {
        loc_807E973:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
    loc_807E982:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_681() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || gvar_808A0B0 || !gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_682() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_683() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_807EACC;
        }
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_807EACC:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_684() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || !gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_685() {
    if(gvar_808A0A4 || gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_686() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_687() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_688() {
    if(gvar_808A0A4) {
        goto loc_807ECE3;
    }
    else if(gvar_808A0AC) {
    loc_807ECF2:
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
    loc_807ECE3:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        goto loc_807ECF2;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_689() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_69() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8 && gvar_808A0B0) {
            goto loc_806E2F8;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
    loc_806E2F8:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_690() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_691() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    →puts("then/else block 7");
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_692() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_807EEAA;
        }
        else {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    if(gvar_808A0A8) {
    loc_807EEAA:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_693() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_694() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0 && gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_695() {
    if(gvar_808A0A4) {
        goto loc_807EFE5;
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_807EFF4;
        }
        if(gvar_808A0A8) {
        loc_807EFF4:
            →puts("then/else block 8");
        }
        else {
        loc_807EFE5:
            →puts("then/else block 7");
        }
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_696() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 7");
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_697() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
    loc_807F0D0:
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        goto loc_807F0D0;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_698() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if((!gvar_808A0AC && gvar_808A0A8) || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_699() {
    if(gvar_808A0A4) {
        goto loc_807F1AC;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
    loc_807F1AC:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_7() {
    if((!gvar_808A0A4 && gvar_808A0A8)) {
        if(!gvar_808A0B0) {
        loc_806C836:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_806C836;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_70() {
    if(gvar_808A0A4) {
    loc_806E334:
        if(gvar_808A0AC) {
            →puts("then/else block 8");
        }
        else {
        loc_806E357:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_806E357;
    }
    else if(!gvar_808A0B0) {
        goto loc_806E334;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_700() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        goto loc_807F1FC;
    }
    else {
        if(gvar_808A0A8) {
            goto loc_807F1FC;
        }
        if(!gvar_808A0B0) {
        loc_807F1FC:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_701() {
    if(gvar_808A0A4) {
        goto loc_807F288;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_807F26A;
        }
        if(gvar_808A0A8) {
        loc_807F26A:
            →puts("then/else block 6");
        }
        else if(gvar_808A0B0) {
        loc_807F288:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_702() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else {
        if(gvar_808A0A8) {
            goto loc_807F2D8;
        }
        if(!gvar_808A0B0) {
        loc_807F2D8:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_703() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        if(gvar_808A0A8) {
            goto loc_807F346;
        }
        if(!gvar_808A0B0) {
        loc_807F346:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_704() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0B0) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_705() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8 || !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_706() {
    if(gvar_808A0A4) {
        goto loc_807F4AE;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_807F4AE;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0B0) {
        loc_807F4AE:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_707() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_708() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_709() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC || (!gvar_808A0A8 && !gvar_808A0B0)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_71() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_710() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_807F648;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0B0) {
    loc_807F648:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_711() {
    if(gvar_808A0A4) {
        goto loc_807F6D4;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8 && gvar_808A0B0) {
    loc_807F6D4:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_712() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0A8 && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_713() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0AC) {
        goto loc_807F7A1;
    }
    if(gvar_808A0A8) {
    loc_807F7A1:
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_714() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_715() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0AC) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 8");
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_716() {
    if(gvar_808A0A4 || (!gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_717() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(gvar_808A0AC) {
            goto loc_807F94A;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        if(!gvar_808A0B0) {
        loc_807F94A:
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_718() {
    if(gvar_808A0A4) {
        goto loc_807F9D6;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
        if(gvar_808A0A8) {
            goto loc_807F9D6;
        }
        if(gvar_808A0B0) {
        loc_807F9D6:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_719() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
            else if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_72() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0B0) {
            goto loc_806E442;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
    loc_806E442:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_720() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8 && !gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_721() {
    if(gvar_808A0A4) {
        goto loc_807FB20;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_807FB20;
        }
        if(gvar_808A0A8) {
        loc_807FB20:
            →puts("then/else block 8");
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_722() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if((gvar_808A0AC && gvar_808A0B0) || !gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_723() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if((gvar_808A0AC && gvar_808A0B0) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_724() {
    if(gvar_808A0A4 || (gvar_808A0AC && gvar_808A0B0)) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_725() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_807FCC9:
            →puts("then/else block 7");
        }
        else {
        loc_807FCBA:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
        goto loc_807FCC9;
    }
    else {
        goto loc_807FCBA;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_726() {
    if(gvar_808A0A4) {
        goto loc_807FD46;
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_807FD46:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_727() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(gvar_808A0AC) {
            if(!gvar_808A0B0) {
                goto loc_807FDA5;
            }
            else {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
        loc_807FDA5:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_728() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC || gvar_808A0B0 || !gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_729() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_807FE81;
        }
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_807FE81:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_73() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        goto loc_806E489;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
    loc_806E489:
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_730() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_731() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_732() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC || gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_733() {
    if(gvar_808A0A4) {
        goto loc_8080048;
    }
    else if(gvar_808A0AC) {
    loc_8080039:
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
    loc_8080048:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        goto loc_8080039;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_734() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0 || !gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_735() {
    if(gvar_808A0A4 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_736() {
    if(gvar_808A0A4 || gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_737() {
    if(gvar_808A0A4) {
        goto loc_8080200;
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
    loc_8080200:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_738() {
    if(gvar_808A0A4) {
        goto loc_808026E;
    }
    else if(gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
    loc_808026E:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_739() {
    if(gvar_808A0A4) {
        goto loc_80802DC;
    }
    else if(gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_80802DC;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
    loc_80802DC:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_74() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        goto loc_806E500;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
    loc_806E500:
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_740() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_741() {
    if(gvar_808A0A4) {
        goto loc_80803B8;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0 && gvar_808A0A8) {
    loc_80803B8:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_742() {
    if(gvar_808A0A4) {
        goto loc_8080426;
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
    loc_8080426:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_743() {
    if(gvar_808A0A4) {
        goto loc_8080494;
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_8080494;
        }
        if(gvar_808A0A8) {
        loc_8080494:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_744() {
    if(gvar_808A0A4 || gvar_808A0AC) {
    loc_8080502:
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        goto loc_8080502;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_745() {
    if(gvar_808A0A4) {
        goto loc_8080570;
    }
    else if(gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
    loc_8080570:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_746() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(gvar_808A0AC) {
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_747() {
    if(gvar_808A0A4) {
        goto loc_808064C;
    }
    else {
        if(gvar_808A0AC) {
            if(gvar_808A0B0) {
                goto loc_808064C;
            }
            else {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
        loc_808064C:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_748() {
    if(gvar_808A0A4) {
        goto loc_80806BA;
    }
    else if(gvar_808A0AC || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
    loc_80806BA:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_749() {
    if(gvar_808A0A4) {
        goto loc_8080728;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0 && gvar_808A0A8) {
    loc_8080728:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_75() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_750() {
    if(gvar_808A0A4) {
        goto loc_8080796;
    }
    else if(!gvar_808A0AC) {
        if(gvar_808A0B0) {
            goto loc_8080796;
        }
        if(gvar_808A0A8) {
        loc_8080796:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_751() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(!gvar_808A0AC) {
            if(gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_752() {
    if(gvar_808A0A4 || gvar_808A0AC) {
    loc_8080872:
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        goto loc_8080872;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_753() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_754() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_755() {
    if(gvar_808A0A4 || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_756() {
    if(gvar_808A0A4 || gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_757() {
    if(gvar_808A0A4) {
        goto loc_8080A7A;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
    loc_8080A7A:
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_758() {
    if(gvar_808A0A4) {
        goto loc_8080AE8;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8080B06;
        }
        if(gvar_808A0A8) {
        loc_8080AE8:
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
        loc_8080B06:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_759() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_76() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_760() {
    if(gvar_808A0A4) {
        goto loc_8080BC4;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8080BB0;
        }
        if(!gvar_808A0A8) {
        loc_8080BB0:
            if(gvar_808A0AC) {
                →puts("then/else block 8");
            }
            else {
            loc_8080BC4:
                →puts("then/else block 6");
            }
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_761() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_762() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_763() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_8080D2C;
    }
    if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
    loc_8080D2C:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_764() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_8080D68;
    }
    else {
        if(!gvar_808A0A8) {
        loc_8080D68:
            if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_765() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_766() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_767() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 || (!gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_768() {
    if(gvar_808A0A4) {
        goto loc_8080F34;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8080F20;
        }
        if(!gvar_808A0A8) {
        loc_8080F20:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
            }
            else {
            loc_8080F34:
                →puts("then/else block 6");
            }
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_769() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_77() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_770() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_808101F;
    }
    if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
    loc_808101F:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_771() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_772() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_773() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((!gvar_808A0B0 && gvar_808A0A8) || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_774() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_775() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_776() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 || gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_777() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_778() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        if(gvar_808A0AC) {
            goto loc_808138F;
        }
        if(gvar_808A0A8) {
        loc_808138F:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_779() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_78() {
    if((gvar_808A0A4 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_780() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_781() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_80814D9;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0A8) {
    loc_80814D9:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_782() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_8081556;
    }
    if(gvar_808A0AC) {
    loc_8081556:
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_783() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_784() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        if(!gvar_808A0AC) {
            goto loc_8081623;
        }
        else {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
    }
    if(gvar_808A0A8) {
    loc_8081623:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_785() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_786() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_787() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_788() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_80817DB;
    }
    if(gvar_808A0AC) {
    loc_80817DB:
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_789() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_8081858;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0A8) {
    loc_8081858:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_79() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_806E71D:
            if(!gvar_808A0B0) {
                goto loc_806E726;
            }
            else {
                →puts("then/else block 7");
            }
        }
        else {
        loc_806E726:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806E71D;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_790() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else {
        if(gvar_808A0AC) {
            goto loc_80818C6;
        }
        if(gvar_808A0A8) {
        loc_80818C6:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_791() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
        →puts("return block");
        return 0;
    }
    →puts("then/else block 6");
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_792() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_80819A2;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
    loc_80819A2:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_793() {
    if(gvar_808A0A4 || (gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_794() {
    if(gvar_808A0A4) {
        goto loc_8081A60;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8081A60;
        }
        if(gvar_808A0AC) {
        loc_8081A60:
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_795() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else {
        if(!gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_796() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8081B5A;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
        loc_8081B5A:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_797() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_798() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_799() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_8() {
    if(gvar_808A0A4 || !gvar_808A0A8) {
        if(gvar_808A0AC) {
            goto loc_806C8C2;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0B0) {
    loc_806C8C2:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_80() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_806E78B:
            if(gvar_808A0B0) {
            loc_806E7B2:
                →puts("then/else block 8");
            }
            else {
                →puts("then/else block 7");
            }
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806E78B;
    }
    else {
        goto loc_806E7B2;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_800() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0 || (!gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_801() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if((gvar_808A0B0 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_802() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_803() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8081E5C;
        }
        if(gvar_808A0A8) {
        loc_8081E5C:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_804() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0B0) {
        goto loc_8081ECA;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8081ECA;
        }
        if(gvar_808A0A8) {
        loc_8081ECA:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_805() {
    if(gvar_808A0A4) {
        goto loc_8081F1A;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
    loc_8081F1A:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_806() {
    if(gvar_808A0A4) {
        goto loc_8081F88;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_8081FA6;
        }
        else {
        loc_8081F88:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
    loc_8081FA6:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_807() {
    if(gvar_808A0A4) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0B0) {
        if(gvar_808A0A8) {
        loc_8082014:
            →puts("then/else block 8");
        }
        else {
        loc_8082005:
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_8082005;
    }
    else {
        goto loc_8082014;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_808() {
    if(gvar_808A0A4) {
        goto loc_8082073;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
    loc_8082073:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_809() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_80820BE;
    }
    else {
        if(!gvar_808A0A8) {
        loc_80820BE:
            if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_81() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_806E7F9:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8) {
        goto loc_806E7F9;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_810() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || gvar_808A0A8 || !gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_811() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_812() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || (!gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_813() {
    if(gvar_808A0A4) {
        goto loc_8082299;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8082276;
        }
        if(!gvar_808A0A8) {
        loc_8082276:
            if(gvar_808A0AC) {
                →puts("then/else block 8");
            }
            else {
            loc_8082299:
                →puts("then/else block 7");
            }
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_814() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_815() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_816() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_80823F2;
    }
    if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
    loc_80823F2:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_817() {
    if(gvar_808A0A4) {
        goto loc_8082451;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
    loc_8082451:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_818() {
    if(gvar_808A0A4 || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_819() {
    if(gvar_808A0A4) {
        goto loc_808252D;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
    loc_808252D:
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_82() {
    if(gvar_808A0A4) {
        if(!gvar_808A0AC) {
        loc_806E867:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
            }
            else {
            loc_806E88E:
                →puts("then/else block 8");
            }
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806E867;
    }
    else {
        goto loc_806E88E;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_820() {
    if(gvar_808A0A4 || gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_821() {
    if(gvar_808A0A4) {
        goto loc_8082609;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8082618;
        }
        if(gvar_808A0A8) {
        loc_8082609:
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
        loc_8082618:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_822() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_823() {
    if(gvar_808A0A4) {
        goto loc_80826E5;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80826C2;
        }
        if(!gvar_808A0A8) {
        loc_80826C2:
            if(gvar_808A0AC) {
            loc_80826E5:
                →puts("then/else block 7");
            }
            else {
                →puts("then/else block 6");
            }
        }
        else {
            →puts("then/else block 8");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_824() {
    if(gvar_808A0A4) {
        goto loc_8082753;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
    loc_8082753:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_825() {
    if(gvar_808A0A4) {
        goto loc_80827C1;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80827C1;
        }
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else if(gvar_808A0AC) {
        loc_80827C1:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_826() {
    if(gvar_808A0A4) {
        goto loc_808282F;
    }
    else if(gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
    loc_808282F:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_827() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((!gvar_808A0B0 && gvar_808A0A8) || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_828() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || (!gvar_808A0A8 && !gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_829() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_83() {
    if(gvar_808A0A4) {
        if(gvar_808A0AC) {
        loc_806E8FC:
            →puts("then/else block 8");
        }
        else {
        loc_806E8D5:
            if(!gvar_808A0B0) {
                →puts("then/else block 6");
            }
            else {
                →puts("then/else block 7");
            }
        }
    }
    else if(!gvar_808A0A8) {
        goto loc_806E8D5;
    }
    else {
        goto loc_806E8FC;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_830() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_831() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_832() {
    if(gvar_808A0A4) {
        goto loc_8082AC3;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
    loc_8082AC3:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_833() {
    if(gvar_808A0A4) {
        goto loc_8082B31;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8082B31;
        }
        if(gvar_808A0A8) {
        loc_8082B31:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_834() {
    if(gvar_808A0A4) {
        goto loc_8082B9F;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
    loc_8082B9F:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_835() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(!gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_836() {
    if(gvar_808A0A4) {
        goto loc_8082C7B;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8082C7B;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
        loc_8082C7B:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_837() {
    if(gvar_808A0A4) {
        goto loc_8082CE9;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8082CF8;
        }
        if(gvar_808A0AC) {
        loc_8082CF8:
            →puts("then/else block 8");
        }
        else if(gvar_808A0A8) {
        loc_8082CE9:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_838() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_839() {
    if(gvar_808A0A4) {
        goto loc_8082DC5;
    }
    else {
        if(gvar_808A0B0) {
            if(!gvar_808A0AC) {
                goto loc_8082DC5;
            }
            else {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
        loc_8082DC5:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_84() {
    if(gvar_808A0A4) {
    loc_806E938:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
        loc_806E94C:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        goto loc_806E938;
    }
    else {
        goto loc_806E94C;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_840() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_841() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || gvar_808A0AC || !gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_842() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_843() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0 || (!gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_844() {
    if(gvar_808A0A4 || (gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_845() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(!gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_846() {
    if(gvar_808A0A4) {
        goto loc_80830C7;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80830C7;
        }
        if(gvar_808A0AC) {
        loc_80830C7:
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_847() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8083144;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
        loc_8083144:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_848() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if((gvar_808A0B0 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_849() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_8083220;
        }
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_8083220:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_85() {
    if(gvar_808A0A4) {
    loc_806E9A6:
        if(gvar_808A0AC) {
        loc_806E9C9:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        goto loc_806E9A6;
    }
    else {
        goto loc_806E9C9;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_850() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_851() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0B0) {
        goto loc_80832FC;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_80832FC;
        }
        if(gvar_808A0A8) {
        loc_80832FC:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_852() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else {
        if(gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_853() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0B0) {
        if(gvar_808A0A8) {
        loc_80833D8:
            →puts("then/else block 8");
        }
        else {
        loc_80833BA:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_80833BA;
    }
    else {
        goto loc_80833D8;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_854() {
    if(gvar_808A0A4) {
        goto loc_8083437;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_8083446;
        }
        else {
        loc_8083437:
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
    loc_8083446:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_855() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_856() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_8083504;
    }
    if(gvar_808A0AC) {
    loc_8083504:
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_857() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(!gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
    }
    →puts("then/else block 7");
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_858() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0B0) {
        goto loc_80835FE;
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    if(gvar_808A0A8) {
    loc_80835FE:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_859() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_86() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806EA46;
        }
        if(!gvar_808A0B0) {
            goto loc_806EA14;
        }
        else {
        loc_806EA46:
            →puts("then/else block 8");
        }
    }
    else {
    loc_806EA14:
        if(gvar_808A0AC) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_860() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        if(gvar_808A0AC) {
            goto loc_80836DA;
        }
        if(gvar_808A0A8) {
        loc_80836DA:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_861() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_862() {
    if(gvar_808A0A4) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_80837B6;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
    loc_80837B6:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_863() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        goto loc_80837F2;
    }
    else {
        if(!gvar_808A0A8) {
        loc_80837F2:
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_864() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0 || gvar_808A0A8 || !gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_865() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0 || (!gvar_808A0A8 && gvar_808A0AC)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_866() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_867() {
    if(gvar_808A0A4) {
        goto loc_80839DC;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
    loc_80839DC:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_868() {
    if(gvar_808A0A4) {
        goto loc_8083A4A;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8083A18;
        }
        if(!gvar_808A0A8) {
        loc_8083A18:
            if(gvar_808A0AC) {
            loc_8083A4A:
                →puts("then/else block 8");
            }
            else {
                →puts("then/else block 7");
            }
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_869() {
    if(gvar_808A0A4) {
        goto loc_8083AB8;
    }
    else if(gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
    loc_8083AB8:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_87() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            →puts("then/else block 8");
        }
        else if(gvar_808A0B0) {
            goto loc_806EAA5;
        }
        else {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    }
    else if(gvar_808A0AC) {
    loc_806EAA5:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_870() {
    if(gvar_808A0A4) {
        goto loc_8083B26;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
    loc_8083B26:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_871() {
    if(gvar_808A0A4) {
        goto loc_8083B94;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8083B94;
        }
        if(gvar_808A0A8) {
            →puts("then/else block 6");
        }
        else if(gvar_808A0AC) {
        loc_8083B94:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_872() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if((!gvar_808A0B0 && gvar_808A0A8) || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_873() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0 || (!gvar_808A0A8 && !gvar_808A0AC)) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_874() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0 || gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_875() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_876() {
    if(gvar_808A0A4) {
        goto loc_8083DBA;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8083D88;
        }
        if(!gvar_808A0A8) {
        loc_8083D88:
            if(gvar_808A0AC) {
            loc_8083DBA:
                →puts("then/else block 8");
            }
            else {
                →puts("then/else block 6");
            }
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_877() {
    if(gvar_808A0A4) {
        goto loc_8083E28;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
    loc_8083E28:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_878() {
    if(gvar_808A0A4) {
        goto loc_8083E96;
    }
    else if(gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0AC) {
    loc_8083E96:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_879() {
    if(gvar_808A0A4) {
        goto loc_8083F04;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8083F04;
        }
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else if(gvar_808A0AC) {
        loc_8083F04:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_88() {
    if(!gvar_808A0A4) {
        if(!gvar_808A0A8 && !gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_880() {
    if(gvar_808A0A4) {
        goto loc_8083F72;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0A8 && gvar_808A0AC) {
    loc_8083F72:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_881() {
    if(gvar_808A0A4 || (!gvar_808A0B0 && gvar_808A0A8)) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_882() {
    if(gvar_808A0A4) {
        goto loc_808404E;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
    loc_808404E:
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_883() {
    if(gvar_808A0A4) {
        goto loc_80840BC;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80840AD;
        }
        if(gvar_808A0A8) {
        loc_80840BC:
            →puts("then/else block 8");
        }
        else if(gvar_808A0AC) {
        loc_80840AD:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_884() {
    if(gvar_808A0A4 || gvar_808A0B0 || gvar_808A0A8) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_885() {
    if(gvar_808A0A4) {
        goto loc_8084198;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
    loc_8084198:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_886() {
    if(gvar_808A0A4) {
        goto loc_8084206;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8 || gvar_808A0AC) {
    loc_8084206:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_887() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_888() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0 || gvar_808A0AC || !gvar_808A0A8) {
        →puts("then/else block 6");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_889() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0 || (!gvar_808A0AC && gvar_808A0A8)) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_89() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806EB90;
        }
        if(!gvar_808A0B0) {
            goto loc_806EB81;
        }
        else {
        loc_806EB90:
            →puts("then/else block 8");
        }
    }
    else if(gvar_808A0AC) {
    loc_806EB81:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_890() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 6");
        →puts("return block");
        return 0;
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_891() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if((gvar_808A0B0 && gvar_808A0AC) || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_892() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_808448B;
        }
        if(!gvar_808A0A8) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
    loc_808448B:
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_893() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0B0) {
        goto loc_80844F9;
    }
    else {
        if(gvar_808A0AC) {
            goto loc_80844F9;
        }
        if(gvar_808A0A8) {
        loc_80844F9:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_894() {
    if(gvar_808A0A4 || gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0AC || gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_895() {
    if(gvar_808A0A4 || (gvar_808A0B0 && gvar_808A0AC)) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_896() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(!gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_897() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(gvar_808A0B0) {
            goto loc_80846B1;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
        loc_80846B1:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_898() {
    if(gvar_808A0A4) {
        goto loc_808472E;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_808472E;
        }
        if(gvar_808A0AC) {
        loc_808472E:
            →puts("then/else block 8");
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_899() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else if(!gvar_808A0B0) {
        if(gvar_808A0A8) {
        loc_808478D:
            →puts("then/else block 7");
        }
        else {
        loc_808477E:
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0AC) {
        goto loc_808477E;
    }
    else {
        goto loc_808478D;
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_9() {
    if(!gvar_808A0A4 && gvar_808A0A8 && gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0AC) {
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_90() {
    if(gvar_808A0A4) {
    loc_806EBCC:
        if(gvar_808A0AC) {
        loc_806EBFE:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_806EBFE;
    }
    else if(!gvar_808A0B0) {
        goto loc_806EBCC;
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_900() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_901() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(gvar_808A0B0) {
            if(!gvar_808A0AC) {
                goto loc_8084869;
            }
            else {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        if(gvar_808A0A8) {
        loc_8084869:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_902() {
    if(gvar_808A0A4) {
        goto loc_80848E6;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
    loc_80848E6:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_903() {
    if(gvar_808A0A4) {
        goto loc_8084954;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 7");
    }
    else if(gvar_808A0A8) {
    loc_8084954:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_904() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(!gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_905() {
    if(gvar_808A0A4) {
        goto loc_8084A30;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8084A21;
        }
        if(gvar_808A0AC) {
        loc_8084A21:
            →puts("then/else block 7");
        }
        else if(gvar_808A0A8) {
        loc_8084A30:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_906() {
    if(gvar_808A0A4) {
        goto loc_8084A9E;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8084A9E;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
        loc_8084A9E:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_907() {
    if(gvar_808A0A4) {
        goto loc_8084B0C;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 7");
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8084B0C;
        }
        if(gvar_808A0A8) {
        loc_8084B0C:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 6");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_908() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 7");
                →puts("return block");
                return 0;
            }
        }
        else if(gvar_808A0A8) {
            →puts("then/else block 8");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_909() {
    if(gvar_808A0A4) {
        goto loc_8084BE8;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_8084BE8;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
    loc_8084BE8:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_91() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806EC6C;
        }
        else if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
    loc_806EC6C:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_910() {
    if(gvar_808A0A4) {
        goto loc_8084C56;
    }
    else if(gvar_808A0B0 && gvar_808A0AC) {
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
    loc_8084C56:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_911() {
    if(gvar_808A0A4) {
        goto loc_8084CC4;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8084CA6;
        }
        if(gvar_808A0AC) {
        loc_8084CA6:
            →puts("then/else block 6");
        }
        else if(gvar_808A0A8) {
        loc_8084CC4:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_912() {
    if(gvar_808A0A4) {
        →puts("then/else block 8");
    }
    else {
        if(!gvar_808A0B0) {
            if(gvar_808A0AC) {
                →puts("then/else block 6");
                →puts("return block");
                return 0;
            }
            else if(gvar_808A0A8) {
                →puts("then/else block 8");
                →puts("return block");
                return 0;
            }
        }
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_913() {
    if(gvar_808A0A4) {
        goto loc_8084DA0;
    }
    else {
        if(gvar_808A0B0) {
            goto loc_8084DA0;
        }
        else if(gvar_808A0AC) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        if(gvar_808A0A8) {
        loc_8084DA0:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_914() {
    if(gvar_808A0A4) {
        goto loc_8084E0E;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else if(!gvar_808A0AC && gvar_808A0A8) {
    loc_8084E0E:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_915() {
    if(gvar_808A0A4) {
        goto loc_8084E7C;
    }
    else if(gvar_808A0B0) {
        →puts("then/else block 6");
    }
    else {
        if(gvar_808A0AC) {
            goto loc_8084E7C;
        }
        if(gvar_808A0A8) {
        loc_8084E7C:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_916() {
    if(gvar_808A0A4) {
        goto loc_8084EEA;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 6");
    }
    else if(gvar_808A0A8) {
    loc_8084EEA:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_917() {
    if(gvar_808A0A4) {
        goto loc_8084F58;
    }
    else if(gvar_808A0B0) {
        if(gvar_808A0AC) {
            goto loc_8084F58;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0A8) {
    loc_8084F58:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_92() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806ECDA;
        }
        else if(gvar_808A0B0) {
            goto loc_806ECDA;
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0AC) {
    loc_806ECDA:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_93() {
    if(gvar_808A0A4) {
    loc_806ED16:
        if(gvar_808A0AC) {
        loc_806ED48:
            →puts("then/else block 8");
        }
        else {
            →puts("then/else block 7");
        }
    }
    else if(gvar_808A0A8) {
        goto loc_806ED48;
    }
    else if(!gvar_808A0B0) {
        goto loc_806ED16;
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_94() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806EDB6;
        }
        else if(gvar_808A0B0) {
            →puts("then/else block 7");
            →puts("return block");
            return 0;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
    loc_806EDB6:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_95() {
    if(!gvar_808A0A4) {
        if(gvar_808A0A8) {
            goto loc_806EE24;
        }
        else if(gvar_808A0B0) {
            goto loc_806EE24;
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
    loc_806EE24:
        →puts("then/else block 8");
    }
    else {
        →puts("then/else block 7");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_96() {
    if(gvar_808A0A4 && gvar_808A0AC && gvar_808A0B0) {
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_97() {
    if(gvar_808A0A4 && gvar_808A0AC) {
        if(!gvar_808A0B0) {
            →puts("then/else block 6");
            →puts("return block");
            return 0;
        }
        →puts("then/else block 8");
    }
    else if(gvar_808A0A8) {
        →puts("then/else block 7");
    }
    else {
        →puts("then/else block 6");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_98() {
    if(!gvar_808A0A4 || !gvar_808A0AC) {
        if(gvar_808A0A8) {
        loc_806EF5F:
            →puts("then/else block 7");
        }
        else {
            →puts("then/else block 6");
        }
    }
    else if(!gvar_808A0B0) {
        goto loc_806EF5F;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}

int test_4_blocks_3_targets_variant_99() {
    if(!gvar_808A0A4) {
    loc_806EF9F:
        if(gvar_808A0A8) {
            →puts("then/else block 7");
        }
        else {
        loc_806EFBE:
            →puts("then/else block 6");
        }
    }
    else if(gvar_808A0AC) {
        goto loc_806EFBE;
    }
    else if(!gvar_808A0B0) {
        goto loc_806EF9F;
    }
    else {
        →puts("then/else block 8");
    }
    →puts("return block");
    return 0;
}
