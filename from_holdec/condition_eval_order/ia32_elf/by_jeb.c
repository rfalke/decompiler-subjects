
void main() {
    // Decompilation error
}

void sub_8048300() {
    jump gvar_808A008;
}

void sub_8048340() {
    jump __gmon_start__;
}

int test_2_blocks() {
    int result;
    for(int i = 0; i <= 1; ++i) {
        int v0 = test_2_blocks_base(i);
        int v1 = test_2_blocks_variant_0(i);
        if(v1 != v0) {
            int v2 = test_2_blocks_variant_0(i);
            →printf("test_2_blocks_variant_0: expected %d but got %d\n", v0, v2);
            /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 23, (char*)&__PRETTY_FUNCTION__.1880);
        }
    }
    return result;
}

int test_2_blocks_base(int param0) {
    return param0 != 0 ? 200: 201;
}

int test_2_blocks_variant_0(int param0) {
    return !param0 ? 201: 200;
}

int test_3_blocks() {
    int result;
    for(int i = 0; i <= 1; ++i) {
        for(int j = 0; j <= 1; ++j) {
            int v0 = test_3_blocks_base(i, j);
            int v1 = test_3_blocks_variant_0(i, j);
            if(v1 != v0) {
                int v2 = test_3_blocks_variant_0(i, j);
                →printf("test_3_blocks_variant_0: expected %d but got %d\n", v0, v2);
                /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 78, (char*)&__PRETTY_FUNCTION__.1913);
            }
            int v3 = test_3_blocks_variant_1(i, j);
            if(v3 != v0) {
                int v4 = test_3_blocks_variant_1(i, j);
                →printf("test_3_blocks_variant_1: expected %d but got %d\n", v0, v4);
                /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 82, (char*)&__PRETTY_FUNCTION__.1913);
            }
            int v5 = test_3_blocks_variant_2(i, j);
            if(v5 != v0) {
                int v6 = test_3_blocks_variant_2(i, j);
                →printf("test_3_blocks_variant_2: expected %d but got %d\n", v0, v6);
                /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 86, (char*)&__PRETTY_FUNCTION__.1913);
            }
            int v7 = test_3_blocks_variant_3(i, j);
            if(v7 != v0) {
                int v8 = test_3_blocks_variant_3(i, j);
                →printf("test_3_blocks_variant_3: expected %d but got %d\n", v0, v8);
                /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 90, (char*)&__PRETTY_FUNCTION__.1913);
            }
            int v9 = test_3_blocks_variant_4(i, j);
            if(v9 != v0) {
                int v10 = test_3_blocks_variant_4(i, j);
                result = →printf("test_3_blocks_variant_4: expected %d but got %d\n", v0, v10);
                /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 94, (char*)&__PRETTY_FUNCTION__.1913);
            }
        }
    }
    return result;
}

int test_3_blocks_base(int param0, int param1) {
    return param0 != 0 ? 200: param1 != 0 ? 201: 202;
}

int test_3_blocks_variant_0(int param0, int param1) {
    return param0 != 0 ? 200: !param1 ? 202: 201;
}

int test_3_blocks_variant_1(int param0, int param1) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: 202;
}

int test_3_blocks_variant_2(int param0, int param1) {
    return param1 && !param0 ? 201: !param0 ? 202: 200;
}

int test_3_blocks_variant_3(int param0, int param1) {
    return !param1 && !param0 ? 202: param0 != 0 ? 200: 201;
}

int test_3_blocks_variant_4(int param0, int param1) {
    return !param0 && !param1 ? 202: param1 && !param0 ? 201: 200;
}

int test_4_blocks() {
    int result;
    for(int i = 0; i <= 1; ++i) {
        for(int j = 0; j <= 1; ++j) {
            for(int k = 0; k <= 1; ++k) {
                int v0 = test_4_blocks_base(i, j, k);
                int v1 = test_4_blocks_variant_0(i, j, k);
                if(v1 != v0) {
                    int v2 = test_4_blocks_variant_0(i, j, k);
                    →printf("test_4_blocks_variant_0: expected %d but got %d\n", v0, v2);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 302, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v3 = test_4_blocks_variant_1(i, j, k);
                if(v3 != v0) {
                    int v4 = test_4_blocks_variant_1(i, j, k);
                    →printf("test_4_blocks_variant_1: expected %d but got %d\n", v0, v4);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 306, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v5 = test_4_blocks_variant_2(i, j, k);
                if(v5 != v0) {
                    int v6 = test_4_blocks_variant_2(i, j, k);
                    →printf("test_4_blocks_variant_2: expected %d but got %d\n", v0, v6);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 310, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v7 = test_4_blocks_variant_3(i, j, k);
                if(v7 != v0) {
                    int v8 = test_4_blocks_variant_3(i, j, k);
                    →printf("test_4_blocks_variant_3: expected %d but got %d\n", v0, v8);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 314, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v9 = test_4_blocks_variant_4(i, j, k);
                if(v9 != v0) {
                    int v10 = test_4_blocks_variant_4(i, j, k);
                    →printf("test_4_blocks_variant_4: expected %d but got %d\n", v0, v10);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 318, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v11 = test_4_blocks_variant_5(i, j, k);
                if(v11 != v0) {
                    int v12 = test_4_blocks_variant_5(i, j, k);
                    →printf("test_4_blocks_variant_5: expected %d but got %d\n", v0, v12);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 322, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v13 = test_4_blocks_variant_6(i, j, k);
                if(v13 != v0) {
                    int v14 = test_4_blocks_variant_6(i, j, k);
                    →printf("test_4_blocks_variant_6: expected %d but got %d\n", v0, v14);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 326, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v15 = test_4_blocks_variant_7(i, j, k);
                if(v15 != v0) {
                    int v16 = test_4_blocks_variant_7(i, j, k);
                    →printf("test_4_blocks_variant_7: expected %d but got %d\n", v0, v16);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 330, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v17 = test_4_blocks_variant_8(i, j, k);
                if(v17 != v0) {
                    int v18 = test_4_blocks_variant_8(i, j, k);
                    →printf("test_4_blocks_variant_8: expected %d but got %d\n", v0, v18);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 334, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v19 = test_4_blocks_variant_9(i, j, k);
                if(v19 != v0) {
                    int v20 = test_4_blocks_variant_9(i, j, k);
                    →printf("test_4_blocks_variant_9: expected %d but got %d\n", v0, v20);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 338, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v21 = test_4_blocks_variant_10(i, j, k);
                if(v21 != v0) {
                    int v22 = test_4_blocks_variant_10(i, j, k);
                    →printf("test_4_blocks_variant_10: expected %d but got %d\n", v0, v22);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 342, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v23 = test_4_blocks_variant_11(i, j, k);
                if(v23 != v0) {
                    int v24 = test_4_blocks_variant_11(i, j, k);
                    →printf("test_4_blocks_variant_11: expected %d but got %d\n", v0, v24);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 346, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v25 = test_4_blocks_variant_12(i, j, k);
                if(v25 != v0) {
                    int v26 = test_4_blocks_variant_12(i, j, k);
                    →printf("test_4_blocks_variant_12: expected %d but got %d\n", v0, v26);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 350, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v27 = test_4_blocks_variant_13(i, j, k);
                if(v27 != v0) {
                    int v28 = test_4_blocks_variant_13(i, j, k);
                    →printf("test_4_blocks_variant_13: expected %d but got %d\n", v0, v28);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 354, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v29 = test_4_blocks_variant_14(i, j, k);
                if(v29 != v0) {
                    int v30 = test_4_blocks_variant_14(i, j, k);
                    →printf("test_4_blocks_variant_14: expected %d but got %d\n", v0, v30);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 0x166, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v31 = test_4_blocks_variant_15(i, j, k);
                if(v31 != v0) {
                    int v32 = test_4_blocks_variant_15(i, j, k);
                    →printf("test_4_blocks_variant_15: expected %d but got %d\n", v0, v32);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 362, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v33 = test_4_blocks_variant_16(i, j, k);
                if(v33 != v0) {
                    int v34 = test_4_blocks_variant_16(i, j, k);
                    →printf("test_4_blocks_variant_16: expected %d but got %d\n", v0, v34);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 366, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v35 = test_4_blocks_variant_17(i, j, k);
                if(v35 != v0) {
                    int v36 = test_4_blocks_variant_17(i, j, k);
                    →printf("test_4_blocks_variant_17: expected %d but got %d\n", v0, v36);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 370, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v37 = test_4_blocks_variant_18(i, j, k);
                if(v37 != v0) {
                    int v38 = test_4_blocks_variant_18(i, j, k);
                    →printf("test_4_blocks_variant_18: expected %d but got %d\n", v0, v38);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 374, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v39 = test_4_blocks_variant_19(i, j, k);
                if(v39 != v0) {
                    int v40 = test_4_blocks_variant_19(i, j, k);
                    →printf("test_4_blocks_variant_19: expected %d but got %d\n", v0, v40);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 378, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v41 = test_4_blocks_variant_20(i, j, k);
                if(v41 != v0) {
                    int v42 = test_4_blocks_variant_20(i, j, k);
                    →printf("test_4_blocks_variant_20: expected %d but got %d\n", v0, v42);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 382, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v43 = test_4_blocks_variant_21(i, j, k);
                if(v43 != v0) {
                    int v44 = test_4_blocks_variant_21(i, j, k);
                    →printf("test_4_blocks_variant_21: expected %d but got %d\n", v0, v44);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 386, (char*)&__PRETTY_FUNCTION__.2046);
                }
                int v45 = test_4_blocks_variant_22(i, j, k);
                if(v45 != v0) {
                    int v46 = test_4_blocks_variant_22(i, j, k);
                    result = →printf("test_4_blocks_variant_22: expected %d but got %d\n", v0, v46);
                    /*NO_RETURN*/ →__assert_fail((char*)&gvar_8074CDE, "source.c", 390, (char*)&__PRETTY_FUNCTION__.2046);
                }
            }
        }
    }
    return result;
}

int test_4_blocks_base(int param0, int param1, int param2) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: 203;
}

int test_4_blocks_variant_0(int param0, int param1, int param2) {
    return param0 != 0 ? 200: param1 != 0 ? 201: !param2 ? 203: 202;
}

int test_4_blocks_variant_1(int param0, int param1, int param2) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: 203;
}

int test_4_blocks_variant_10(int param0, int param1, int param2) {
    return param1 && !param0 ? 201: !param0 && !param2 ? 203: param2 && !param0 ? 202: 200;
}

int test_4_blocks_variant_11(int param0, int param1, int param2) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: 203;
}

int test_4_blocks_variant_12(int param0, int param1, int param2) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param1 ? 203: 201;
}

int test_4_blocks_variant_13(int param0, int param1, int param2) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: 203;
}

int test_4_blocks_variant_14(int param0, int param1, int param2) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: !param0 ? 203: 200;
}

int test_4_blocks_variant_15(int param0, int param1, int param2) {
    return param2 && !param1 && !param0 ? 202: !param1 && !param0 ? 203: param0 != 0 ? 200: 201;
}

int test_4_blocks_variant_16(int param0, int param1, int param2) {
    return param2 && !param1 && !param0 ? 202: !param0 && !param1 ? 203: param1 && !param0 ? 201: 200;
}

int test_4_blocks_variant_17(int param0, int param1, int param2) {
    return !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: 202;
}

int test_4_blocks_variant_18(int param0, int param1, int param2) {
    return !param1 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: 201;
}

int test_4_blocks_variant_19(int param0, int param1, int param2) {
    return !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: 202;
}

int test_4_blocks_variant_2(int param0, int param1, int param2) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: !param1 ? 203: 201;
}

int test_4_blocks_variant_20(int param0, int param1, int param2) {
    return !param0 && !param2 && !param1 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: 200;
}

int test_4_blocks_variant_21(int param0, int param1, int param2) {
    return !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: 201;
}

int test_4_blocks_variant_22(int param0, int param1, int param2) {
    return !param0 && !param1 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: 200;
}

int test_4_blocks_variant_3(int param0, int param1, int param2) {
    return param0 != 0 ? 200: !param2 && !param1 ? 203: param1 != 0 ? 201: 202;
}

int test_4_blocks_variant_4(int param0, int param1, int param2) {
    return param0 != 0 ? 200: !param1 && !param2 ? 203: param2 && !param1 ? 202: 201;
}

int test_4_blocks_variant_5(int param0, int param1, int param2) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: 203;
}

int test_4_blocks_variant_6(int param0, int param1, int param2) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: !param2 ? 203: 202;
}

int test_4_blocks_variant_7(int param0, int param1, int param2) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: 203;
}

int test_4_blocks_variant_8(int param0, int param1, int param2) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: !param0 ? 203: 200;
}

int test_4_blocks_variant_9(int param0, int param1, int param2) {
    return param1 && !param0 ? 201: !param2 && !param0 ? 203: param0 != 0 ? 200: 202;
}

void test_5_blocks() {
    // Decompilation error
}

int test_5_blocks_base(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: param3 != 0 ? 203: 0xcc;
}

int test_5_blocks_variant_0(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: !param3 ? 0xcc: 203;
}

int test_5_blocks_variant_1(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: param2 != 0 ? 202: 0xcc;
}

int test_5_blocks_variant_10(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: !param1 && !param3 ? 0xcc: param3 && !param1 ? 203: 201;
}

int test_5_blocks_variant_100(int param0, int param1, int param2, int param3) {
    return !param1 && !param2 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: 201;
}

int test_5_blocks_variant_101(int param0, int param1, int param2, int param3) {
    return !param3 && !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: 203;
}

int test_5_blocks_variant_102(int param0, int param1, int param2, int param3) {
    return !param2 && !param3 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: 202;
}

int test_5_blocks_variant_103(int param0, int param1, int param2, int param3) {
    return !param3 && !param0 && !param2 && !param1 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: 203;
}

int test_5_blocks_variant_104(int param0, int param1, int param2, int param3) {
    return !param0 && !param3 && !param2 && !param1 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: 200;
}

int test_5_blocks_variant_105(int param0, int param1, int param2, int param3) {
    return !param2 && !param0 && !param3 && !param1 ? 0xcc: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: 202;
}

int test_5_blocks_variant_106(int param0, int param1, int param2, int param3) {
    return !param0 && !param2 && !param3 && !param1 ? 0xcc: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: 200;
}

int test_5_blocks_variant_107(int param0, int param1, int param2, int param3) {
    return !param3 && !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: 203;
}

int test_5_blocks_variant_108(int param0, int param1, int param2, int param3) {
    return !param1 && !param3 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: 201;
}

int test_5_blocks_variant_109(int param0, int param1, int param2, int param3) {
    return !param3 && !param0 && !param1 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: 203;
}

int test_5_blocks_variant_11(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: param2 != 0 ? 202: 0xcc;
}

int test_5_blocks_variant_110(int param0, int param1, int param2, int param3) {
    return !param0 && !param3 && !param1 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: 200;
}

int test_5_blocks_variant_111(int param0, int param1, int param2, int param3) {
    return !param1 && !param0 && !param3 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: 201;
}

int test_5_blocks_variant_112(int param0, int param1, int param2, int param3) {
    return !param0 && !param1 && !param3 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: 200;
}

int test_5_blocks_variant_113(int param0, int param1, int param2, int param3) {
    return !param2 && !param1 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: 202;
}

int test_5_blocks_variant_114(int param0, int param1, int param2, int param3) {
    return !param1 && !param2 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: 201;
}

int test_5_blocks_variant_115(int param0, int param1, int param2, int param3) {
    return !param2 && !param0 && !param1 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: 202;
}

int test_5_blocks_variant_116(int param0, int param1, int param2, int param3) {
    return !param0 && !param2 && !param1 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: 200;
}

int test_5_blocks_variant_117(int param0, int param1, int param2, int param3) {
    return !param1 && !param0 && !param2 && !param3 ? 0xcc: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: 201;
}

int test_5_blocks_variant_118(int param0, int param1, int param2, int param3) {
    return !param0 && !param1 && !param2 && !param3 ? 0xcc: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: 200;
}

int test_5_blocks_variant_12(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: !param2 ? 0xcc: 202;
}

int test_5_blocks_variant_13(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param3 && !param1 && !param2 ? 203: param2 && !param1 ? 202: param1 != 0 ? 201: 0xcc;
}

int test_5_blocks_variant_14(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param3 && !param1 && !param2 ? 203: param2 && !param1 ? 202: !param1 ? 0xcc: 201;
}

int test_5_blocks_variant_15(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: !param2 && !param1 ? 0xcc: param1 != 0 ? 201: 202;
}

int test_5_blocks_variant_16(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: !param1 && !param2 ? 0xcc: param2 && !param1 ? 202: 201;
}

int test_5_blocks_variant_17(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: !param3 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: param2 != 0 ? 202: 203;
}

int test_5_blocks_variant_18(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: !param2 && !param3 && !param1 ? 0xcc: param1 != 0 ? 201: param3 && !param2 ? 203: 202;
}

int test_5_blocks_variant_19(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: !param3 && !param1 && !param2 ? 0xcc: param2 && !param1 ? 202: param1 != 0 ? 201: 203;
}

int test_5_blocks_variant_2(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: !param2 ? 0xcc: 202;
}

int test_5_blocks_variant_20(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: !param1 && !param3 && !param2 ? 0xcc: param2 && !param1 ? 202: param3 && !param1 ? 203: 201;
}

int test_5_blocks_variant_21(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: !param2 && !param1 && !param3 ? 0xcc: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: 202;
}

int test_5_blocks_variant_22(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: !param1 && !param2 && !param3 ? 0xcc: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: 201;
}

int test_5_blocks_variant_23(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: param3 != 0 ? 203: 0xcc;
}

int test_5_blocks_variant_24(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: !param3 ? 0xcc: 203;
}

int test_5_blocks_variant_25(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: param2 != 0 ? 202: 0xcc;
}

int test_5_blocks_variant_26(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: !param2 ? 0xcc: 202;
}

int test_5_blocks_variant_27(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: !param3 && !param2 ? 0xcc: param2 != 0 ? 202: 203;
}

int test_5_blocks_variant_28(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: !param2 && !param3 ? 0xcc: param3 && !param2 ? 203: 202;
}

int test_5_blocks_variant_29(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: param3 != 0 ? 203: 0xcc;
}

int test_5_blocks_variant_3(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param1 != 0 ? 201: !param3 && !param2 ? 0xcc: param2 != 0 ? 202: 203;
}

int test_5_blocks_variant_30(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: !param3 ? 0xcc: 203;
}

int test_5_blocks_variant_31(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: param0 != 0 ? 200: 0xcc;
}

int test_5_blocks_variant_32(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: !param0 ? 0xcc: 200;
}

int test_5_blocks_variant_33(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: !param3 && !param0 ? 0xcc: param0 != 0 ? 200: 203;
}

int test_5_blocks_variant_34(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: !param0 && !param3 ? 0xcc: param3 && !param0 ? 203: 200;
}

int test_5_blocks_variant_35(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 != 0 ? 202: 0xcc;
}

int test_5_blocks_variant_36(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: !param2 ? 0xcc: 202;
}

int test_5_blocks_variant_37(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param3 && !param0 && !param2 ? 203: param2 && !param0 ? 202: param0 != 0 ? 200: 0xcc;
}

int test_5_blocks_variant_38(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param3 && !param0 && !param2 ? 203: param2 && !param0 ? 202: !param0 ? 0xcc: 200;
}

int test_5_blocks_variant_39(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: !param2 && !param0 ? 0xcc: param0 != 0 ? 200: 202;
}

int test_5_blocks_variant_4(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param1 != 0 ? 201: !param2 && !param3 ? 0xcc: param3 && !param2 ? 203: 202;
}

int test_5_blocks_variant_40(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: !param0 && !param2 ? 0xcc: param2 && !param0 ? 202: 200;
}

int test_5_blocks_variant_41(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: !param3 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 != 0 ? 202: 203;
}

int test_5_blocks_variant_42(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: !param2 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 ? 203: 202;
}

int test_5_blocks_variant_43(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: !param3 && !param0 && !param2 ? 0xcc: param2 && !param0 ? 202: param0 != 0 ? 200: 203;
}

int test_5_blocks_variant_44(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: !param0 && !param3 && !param2 ? 0xcc: param2 && !param0 ? 202: param3 && !param0 ? 203: 200;
}

int test_5_blocks_variant_45(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: !param2 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: 202;
}

int test_5_blocks_variant_46(int param0, int param1, int param2, int param3) {
    return param1 && !param0 ? 201: !param0 && !param2 && !param3 ? 0xcc: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: 200;
}

int test_5_blocks_variant_47(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: param3 != 0 ? 203: 0xcc;
}

int test_5_blocks_variant_48(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: !param3 ? 0xcc: 203;
}

int test_5_blocks_variant_49(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: param1 != 0 ? 201: 0xcc;
}

int test_5_blocks_variant_5(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: param3 != 0 ? 203: 0xcc;
}

int test_5_blocks_variant_50(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: !param1 ? 0xcc: 201;
}

int test_5_blocks_variant_51(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param3 && !param1 ? 0xcc: param1 != 0 ? 201: 203;
}

int test_5_blocks_variant_52(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param1 && !param3 ? 0xcc: param3 && !param1 ? 203: 201;
}

int test_5_blocks_variant_53(int param0, int param1, int param2, int param3) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: param3 != 0 ? 203: 0xcc;
}

int test_5_blocks_variant_54(int param0, int param1, int param2, int param3) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: !param3 ? 0xcc: 203;
}

int test_5_blocks_variant_55(int param0, int param1, int param2, int param3) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: param0 != 0 ? 200: 0xcc;
}

int test_5_blocks_variant_56(int param0, int param1, int param2, int param3) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: !param0 ? 0xcc: 200;
}

int test_5_blocks_variant_57(int param0, int param1, int param2, int param3) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: !param3 && !param0 ? 0xcc: param0 != 0 ? 200: 203;
}

int test_5_blocks_variant_58(int param0, int param1, int param2, int param3) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: !param0 && !param3 ? 0xcc: param3 && !param0 ? 203: 200;
}

int test_5_blocks_variant_59(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: 0xcc;
}

int test_5_blocks_variant_6(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: !param3 ? 0xcc: 203;
}

int test_5_blocks_variant_60(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param1 ? 0xcc: 201;
}

int test_5_blocks_variant_61(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: param3 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: 0xcc;
}

int test_5_blocks_variant_62(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: param3 && !param0 && !param1 ? 203: param1 && !param0 ? 201: !param0 ? 0xcc: 200;
}

int test_5_blocks_variant_63(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: !param1 && !param0 ? 0xcc: param0 != 0 ? 200: 201;
}

int test_5_blocks_variant_64(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: 200;
}

int test_5_blocks_variant_65(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: 203;
}

int test_5_blocks_variant_66(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: !param1 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param1 ? 203: 201;
}

int test_5_blocks_variant_67(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: !param3 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: 203;
}

int test_5_blocks_variant_68(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: !param0 && !param3 && !param1 ? 0xcc: param1 && !param0 ? 201: param3 && !param0 ? 203: 200;
}

int test_5_blocks_variant_69(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: !param1 && !param0 && !param3 ? 0xcc: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: 201;
}

int test_5_blocks_variant_7(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: param1 != 0 ? 201: 0xcc;
}

int test_5_blocks_variant_70(int param0, int param1, int param2, int param3) {
    return param2 && !param1 && !param0 ? 202: !param0 && !param1 && !param3 ? 0xcc: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: 200;
}

int test_5_blocks_variant_71(int param0, int param1, int param2, int param3) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: 0xcc;
}

int test_5_blocks_variant_72(int param0, int param1, int param2, int param3) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: !param2 ? 0xcc: 202;
}

int test_5_blocks_variant_73(int param0, int param1, int param2, int param3) {
    return param3 && !param1 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: 0xcc;
}

int test_5_blocks_variant_74(int param0, int param1, int param2, int param3) {
    return param3 && !param1 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: !param1 ? 0xcc: 201;
}

int test_5_blocks_variant_75(int param0, int param1, int param2, int param3) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param2 && !param1 ? 0xcc: param1 != 0 ? 201: 202;
}

int test_5_blocks_variant_76(int param0, int param1, int param2, int param3) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param1 && !param2 ? 0xcc: param2 && !param1 ? 202: 201;
}

int test_5_blocks_variant_77(int param0, int param1, int param2, int param3) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: 0xcc;
}

int test_5_blocks_variant_78(int param0, int param1, int param2, int param3) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: !param2 ? 0xcc: 202;
}

int test_5_blocks_variant_79(int param0, int param1, int param2, int param3) {
    return param3 && !param0 && !param2 && !param1 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: 0xcc;
}

int test_5_blocks_variant_8(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: !param1 ? 0xcc: 201;
}

int test_5_blocks_variant_80(int param0, int param1, int param2, int param3) {
    return param3 && !param0 && !param2 && !param1 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: !param0 ? 0xcc: 200;
}

int test_5_blocks_variant_81(int param0, int param1, int param2, int param3) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: !param2 && !param0 ? 0xcc: param0 != 0 ? 200: 202;
}

int test_5_blocks_variant_82(int param0, int param1, int param2, int param3) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: !param0 && !param2 ? 0xcc: param2 && !param0 ? 202: 200;
}

int test_5_blocks_variant_83(int param0, int param1, int param2, int param3) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: 0xcc;
}

int test_5_blocks_variant_84(int param0, int param1, int param2, int param3) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param1 ? 0xcc: 201;
}

int test_5_blocks_variant_85(int param0, int param1, int param2, int param3) {
    return param3 && !param0 && !param1 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: 0xcc;
}

int test_5_blocks_variant_86(int param0, int param1, int param2, int param3) {
    return param3 && !param0 && !param1 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: !param0 ? 0xcc: 200;
}

int test_5_blocks_variant_87(int param0, int param1, int param2, int param3) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: !param1 && !param0 ? 0xcc: param0 != 0 ? 200: 201;
}

int test_5_blocks_variant_88(int param0, int param1, int param2, int param3) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: 200;
}

int test_5_blocks_variant_89(int param0, int param1, int param2, int param3) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: 202;
}

int test_5_blocks_variant_9(int param0, int param1, int param2, int param3) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: !param3 && !param1 ? 0xcc: param1 != 0 ? 201: 203;
}

int test_5_blocks_variant_90(int param0, int param1, int param2, int param3) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param1 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: 201;
}

int test_5_blocks_variant_91(int param0, int param1, int param2, int param3) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: 202;
}

int test_5_blocks_variant_92(int param0, int param1, int param2, int param3) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param0 && !param2 && !param1 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: 200;
}

int test_5_blocks_variant_93(int param0, int param1, int param2, int param3) {
    return param3 && !param1 && !param2 && !param0 ? 203: !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: 201;
}

int test_5_blocks_variant_94(int param0, int param1, int param2, int param3) {
    return param3 && !param1 && !param2 && !param0 ? 203: !param0 && !param1 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: 200;
}

int test_5_blocks_variant_95(int param0, int param1, int param2, int param3) {
    return !param3 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: 203;
}

int test_5_blocks_variant_96(int param0, int param1, int param2, int param3) {
    return !param2 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: 202;
}

int test_5_blocks_variant_97(int param0, int param1, int param2, int param3) {
    return !param3 && !param1 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: 203;
}

int test_5_blocks_variant_98(int param0, int param1, int param2, int param3) {
    return !param1 && !param3 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: 201;
}

int test_5_blocks_variant_99(int param0, int param1, int param2, int param3) {
    return !param2 && !param1 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: 202;
}

void test_6_blocks() {
    // Decompilation error
}

int test_6_blocks_base(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: param3 != 0 ? 203: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_0(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: param3 != 0 ? 203: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_1(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: param4 && !param3 ? 0xcc: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_10(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: !param2 && !param4 ? 205: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_100(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param2 && !param3 && !param4 && !param1 ? 205: param1 != 0 ? 201: param4 && !param3 && !param2 ? 0xcc: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_101(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param4 && !param3 && !param1 && !param2 ? 205: param2 && !param1 ? 202: param1 != 0 ? 201: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_102(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param3 && !param4 && !param1 && !param2 ? 205: param2 && !param1 ? 202: param1 != 0 ? 201: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_103(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param4 && !param1 && !param3 && !param2 ? 205: param2 && !param1 ? 202: param3 && !param1 ? 203: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_104(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param1 && !param4 && !param3 && !param2 ? 205: param2 && !param1 ? 202: param3 && !param1 ? 203: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_105(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param3 && !param1 && !param4 && !param2 ? 205: param2 && !param1 ? 202: param4 && !param3 && !param1 ? 0xcc: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_106(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param1 && !param3 && !param4 && !param2 ? 205: param2 && !param1 ? 202: param4 && !param3 && !param1 ? 0xcc: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_107(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param4 && !param2 && !param1 && !param3 ? 205: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_108(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param2 && !param4 && !param1 && !param3 ? 205: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_109(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param4 && !param1 && !param2 && !param3 ? 205: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_11(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param3 && !param2 ? 0xcc: param2 != 0 ? 202: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_110(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param1 && !param4 && !param2 && !param3 ? 205: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_111(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param2 && !param1 && !param4 && !param3 ? 205: param3 && !param2 && !param1 ? 203: param4 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_112(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param1 && !param2 && !param4 && !param3 ? 205: param3 && !param2 && !param1 ? 203: param4 && !param2 && !param1 ? 0xcc: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_113(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param3 && !param2 && !param1 && !param4 ? 205: param4 && !param3 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_114(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param2 && !param3 && !param1 && !param4 ? 205: param4 && !param3 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_115(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param3 && !param1 && !param2 && !param4 ? 205: param4 && !param3 && !param2 && !param1 ? 0xcc: param2 && !param1 ? 202: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_116(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param1 && !param3 && !param2 && !param4 ? 205: param4 && !param3 && !param2 && !param1 ? 0xcc: param2 && !param1 ? 202: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_117(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param2 && !param1 && !param3 && !param4 ? 205: param4 && !param2 && !param3 && !param1 ? 0xcc: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_118(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param1 && !param2 && !param3 && !param4 ? 205: param4 && !param2 && !param3 && !param1 ? 0xcc: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_119(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: param3 != 0 ? 203: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_12(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param3 && !param2 ? 0xcc: param2 != 0 ? 202: !param3 ? 205: 203;
}

int test_6_blocks_variant_120(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: param3 != 0 ? 203: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_121(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: param4 && !param3 ? 0xcc: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_122(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: param4 && !param3 ? 0xcc: !param3 ? 205: 203;
}

int test_6_blocks_variant_123(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: !param4 && !param3 ? 205: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_124(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: !param3 && !param4 ? 205: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_125(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: param2 != 0 ? 202: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_126(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: param2 != 0 ? 202: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_127(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: param4 && !param2 ? 0xcc: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_128(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: param4 && !param2 ? 0xcc: !param2 ? 205: 202;
}

int test_6_blocks_variant_129(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: !param4 && !param2 ? 205: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_13(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param2 && !param3 ? 0xcc: param3 && !param2 ? 203: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_130(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: !param2 && !param4 ? 205: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_131(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param3 && !param2 ? 0xcc: param2 != 0 ? 202: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_132(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param3 && !param2 ? 0xcc: param2 != 0 ? 202: !param3 ? 205: 203;
}

int test_6_blocks_variant_133(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param2 && !param3 ? 0xcc: param3 && !param2 ? 203: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_134(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param2 && !param3 ? 0xcc: param3 && !param2 ? 203: !param2 ? 205: 202;
}

int test_6_blocks_variant_135(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param3 && !param2 ? 0xcc: !param3 && !param2 ? 205: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_136(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param3 && !param2 ? 0xcc: !param2 && !param3 ? 205: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_137(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: !param4 && !param3 && !param2 ? 205: param2 != 0 ? 202: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_138(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: !param3 && !param4 && !param2 ? 205: param2 != 0 ? 202: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_139(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: !param4 && !param2 && !param3 ? 205: param3 && !param2 ? 203: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_14(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param2 && !param3 ? 0xcc: param3 && !param2 ? 203: !param2 ? 205: 202;
}

int test_6_blocks_variant_140(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: !param2 && !param4 && !param3 ? 205: param3 && !param2 ? 203: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_141(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: !param3 && !param2 && !param4 ? 205: param4 && !param3 && !param2 ? 0xcc: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_142(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param0 != 0 ? 200: !param2 && !param3 && !param4 ? 205: param4 && !param3 && !param2 ? 0xcc: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_143(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: param3 != 0 ? 203: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_144(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: param3 != 0 ? 203: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_145(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: param4 && !param3 ? 0xcc: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_146(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: param4 && !param3 ? 0xcc: !param3 ? 205: 203;
}

int test_6_blocks_variant_147(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: !param4 && !param3 ? 205: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_148(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: !param3 && !param4 ? 205: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_149(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: param0 != 0 ? 200: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_15(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param3 && !param2 ? 0xcc: !param3 && !param2 ? 205: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_150(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: param0 != 0 ? 200: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_151(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: param4 && !param0 ? 0xcc: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_152(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: param4 && !param0 ? 0xcc: !param0 ? 205: 200;
}

int test_6_blocks_variant_153(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: !param4 && !param0 ? 205: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_154(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: !param0 && !param4 ? 205: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_155(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param4 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_156(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param4 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: !param3 ? 205: 203;
}

int test_6_blocks_variant_157(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param4 && !param0 && !param3 ? 0xcc: param3 && !param0 ? 203: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_158(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param4 && !param0 && !param3 ? 0xcc: param3 && !param0 ? 203: !param0 ? 205: 200;
}

int test_6_blocks_variant_159(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param4 && !param3 && !param0 ? 0xcc: !param3 && !param0 ? 205: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_16(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param3 && !param2 ? 0xcc: !param2 && !param3 ? 205: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_160(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: param4 && !param3 && !param0 ? 0xcc: !param0 && !param3 ? 205: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_161(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: !param4 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_162(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: !param3 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_163(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: !param4 && !param0 && !param3 ? 205: param3 && !param0 ? 203: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_164(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: !param0 && !param4 && !param3 ? 205: param3 && !param0 ? 203: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_165(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: !param3 && !param0 && !param4 ? 205: param4 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_166(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param2 && !param0 ? 202: !param0 && !param3 && !param4 ? 205: param4 && !param3 && !param0 ? 0xcc: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_167(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 != 0 ? 202: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_168(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 != 0 ? 202: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_169(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: param4 && !param2 ? 0xcc: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_17(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: !param4 && !param3 && !param2 ? 205: param2 != 0 ? 202: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_170(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: param4 && !param2 ? 0xcc: !param2 ? 205: 202;
}

int test_6_blocks_variant_171(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: !param4 && !param2 ? 205: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_172(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: !param2 && !param4 ? 205: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_173(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param0 && !param2 ? 203: param2 && !param0 ? 202: param0 != 0 ? 200: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_174(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param0 && !param2 ? 203: param2 && !param0 ? 202: param0 != 0 ? 200: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_175(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param0 && !param2 ? 203: param2 && !param0 ? 202: param4 && !param0 ? 0xcc: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_176(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param0 && !param2 ? 203: param2 && !param0 ? 202: param4 && !param0 ? 0xcc: !param0 ? 205: 200;
}

int test_6_blocks_variant_177(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param0 && !param2 ? 203: param2 && !param0 ? 202: !param4 && !param0 ? 205: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_178(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param0 && !param2 ? 203: param2 && !param0 ? 202: !param0 && !param4 ? 205: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_179(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param4 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_18(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: !param3 && !param4 && !param2 ? 205: param2 != 0 ? 202: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_180(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param4 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: !param2 ? 205: 202;
}

int test_6_blocks_variant_181(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param4 && !param0 && !param2 ? 0xcc: param2 && !param0 ? 202: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_182(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param4 && !param0 && !param2 ? 0xcc: param2 && !param0 ? 202: !param0 ? 205: 200;
}

int test_6_blocks_variant_183(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param4 && !param2 && !param0 ? 0xcc: !param2 && !param0 ? 205: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_184(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param4 && !param2 && !param0 ? 0xcc: !param0 && !param2 ? 205: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_185(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: !param4 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_186(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: !param2 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_187(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: !param4 && !param0 && !param2 ? 205: param2 && !param0 ? 202: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_188(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: !param0 && !param4 && !param2 ? 205: param2 && !param0 ? 202: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_189(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: !param2 && !param0 && !param4 ? 205: param4 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_19(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: !param4 && !param2 && !param3 ? 205: param3 && !param2 ? 203: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_190(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: !param0 && !param2 && !param4 ? 205: param4 && !param2 && !param0 ? 0xcc: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_191(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param3 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 != 0 ? 202: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_192(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param3 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 != 0 ? 202: !param3 ? 205: 203;
}

int test_6_blocks_variant_193(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param2 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 ? 203: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_194(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param2 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 ? 203: !param2 ? 205: 202;
}

int test_6_blocks_variant_195(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param3 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: !param3 && !param2 ? 205: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_196(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param3 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: !param2 && !param3 ? 205: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_197(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param3 && !param0 && !param2 ? 0xcc: param2 && !param0 ? 202: param0 != 0 ? 200: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_198(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param3 && !param0 && !param2 ? 0xcc: param2 && !param0 ? 202: param0 != 0 ? 200: !param3 ? 205: 203;
}

int test_6_blocks_variant_199(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param0 && !param3 && !param2 ? 0xcc: param2 && !param0 ? 202: param3 && !param0 ? 203: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_2(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: param4 && !param3 ? 0xcc: !param3 ? 205: 203;
}

int test_6_blocks_variant_20(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: !param2 && !param4 && !param3 ? 205: param3 && !param2 ? 203: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_200(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param0 && !param3 && !param2 ? 0xcc: param2 && !param0 ? 202: param3 && !param0 ? 203: !param0 ? 205: 200;
}

int test_6_blocks_variant_201(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param3 && !param0 && !param2 ? 0xcc: param2 && !param0 ? 202: !param3 && !param0 ? 205: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_202(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param3 && !param0 && !param2 ? 0xcc: param2 && !param0 ? 202: !param0 && !param3 ? 205: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_203(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param2 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_204(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param2 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: !param2 ? 205: 202;
}

int test_6_blocks_variant_205(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param0 && !param2 && !param3 ? 0xcc: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_206(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param0 && !param2 && !param3 ? 0xcc: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: !param0 ? 205: 200;
}

int test_6_blocks_variant_207(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param2 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param0 ? 203: !param2 && !param0 ? 205: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_208(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param2 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param0 ? 203: !param0 && !param2 ? 205: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_209(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param3 && !param2 && !param0 ? 0xcc: !param3 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_21(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: !param3 && !param2 && !param4 ? 205: param4 && !param3 && !param2 ? 0xcc: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_210(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param3 && !param2 && !param0 ? 0xcc: !param2 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_211(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param3 && !param2 && !param0 ? 0xcc: !param3 && !param0 && !param2 ? 205: param2 && !param0 ? 202: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_212(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param3 && !param2 && !param0 ? 0xcc: !param0 && !param3 && !param2 ? 205: param2 && !param0 ? 202: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_213(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param2 && !param3 && !param0 ? 0xcc: !param2 && !param0 && !param3 ? 205: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_214(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: param4 && !param2 && !param3 && !param0 ? 0xcc: !param0 && !param2 && !param3 ? 205: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_215(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param4 && !param3 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 != 0 ? 202: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_216(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param3 && !param4 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 != 0 ? 202: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_217(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param4 && !param2 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param2 ? 203: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_218(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param2 && !param4 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param2 ? 203: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_219(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param3 && !param2 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param3 && !param2 ? 0xcc: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_22(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: !param2 && !param3 && !param4 ? 205: param4 && !param3 && !param2 ? 0xcc: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_220(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param2 && !param3 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param3 && !param2 ? 0xcc: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_221(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param4 && !param3 && !param0 && !param2 ? 205: param2 && !param0 ? 202: param0 != 0 ? 200: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_222(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param3 && !param4 && !param0 && !param2 ? 205: param2 && !param0 ? 202: param0 != 0 ? 200: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_223(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param4 && !param0 && !param3 && !param2 ? 205: param2 && !param0 ? 202: param3 && !param0 ? 203: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_224(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param0 && !param4 && !param3 && !param2 ? 205: param2 && !param0 ? 202: param3 && !param0 ? 203: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_225(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param3 && !param0 && !param4 && !param2 ? 205: param2 && !param0 ? 202: param4 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_226(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param0 && !param3 && !param4 && !param2 ? 205: param2 && !param0 ? 202: param4 && !param3 && !param0 ? 0xcc: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_227(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param4 && !param2 && !param0 && !param3 ? 205: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_228(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param2 && !param4 && !param0 && !param3 ? 205: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_229(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param4 && !param0 && !param2 && !param3 ? 205: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_23(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: param3 != 0 ? 203: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_230(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param0 && !param4 && !param2 && !param3 ? 205: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_231(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param2 && !param0 && !param4 && !param3 ? 205: param3 && !param2 && !param0 ? 203: param4 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_232(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param0 && !param2 && !param4 && !param3 ? 205: param3 && !param2 && !param0 ? 203: param4 && !param2 && !param0 ? 0xcc: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_233(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param3 && !param2 && !param0 && !param4 ? 205: param4 && !param3 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_234(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param2 && !param3 && !param0 && !param4 ? 205: param4 && !param3 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_235(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param3 && !param0 && !param2 && !param4 ? 205: param4 && !param3 && !param2 && !param0 ? 0xcc: param2 && !param0 ? 202: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_236(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param0 && !param3 && !param2 && !param4 ? 205: param4 && !param3 && !param2 && !param0 ? 0xcc: param2 && !param0 ? 202: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_237(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param2 && !param0 && !param3 && !param4 ? 205: param4 && !param2 && !param3 && !param0 ? 0xcc: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_238(int param0, int param1, int param2, int param3, int param4) {
    return param1 && !param0 ? 201: !param0 && !param2 && !param3 && !param4 ? 205: param4 && !param2 && !param3 && !param0 ? 0xcc: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_239(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: param3 != 0 ? 203: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_24(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: param3 != 0 ? 203: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_240(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: param3 != 0 ? 203: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_241(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param3 ? 0xcc: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_242(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param3 ? 0xcc: !param3 ? 205: 203;
}

int test_6_blocks_variant_243(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: !param4 && !param3 ? 205: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_244(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: !param3 && !param4 ? 205: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_245(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: param1 != 0 ? 201: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_246(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: param1 != 0 ? 201: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_247(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: param4 && !param1 ? 0xcc: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_248(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: param4 && !param1 ? 0xcc: !param1 ? 205: 201;
}

int test_6_blocks_variant_249(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: !param4 && !param1 ? 205: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_25(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: param4 && !param3 ? 0xcc: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_250(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: !param1 && !param4 ? 205: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_251(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param4 && !param3 && !param1 ? 0xcc: param1 != 0 ? 201: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_252(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param4 && !param3 && !param1 ? 0xcc: param1 != 0 ? 201: !param3 ? 205: 203;
}

int test_6_blocks_variant_253(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param4 && !param1 && !param3 ? 0xcc: param3 && !param1 ? 203: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_254(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param4 && !param1 && !param3 ? 0xcc: param3 && !param1 ? 203: !param1 ? 205: 201;
}

int test_6_blocks_variant_255(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param4 && !param3 && !param1 ? 0xcc: !param3 && !param1 ? 205: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_256(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param4 && !param3 && !param1 ? 0xcc: !param1 && !param3 ? 205: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_257(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param4 && !param3 && !param1 ? 205: param1 != 0 ? 201: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_258(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param3 && !param4 && !param1 ? 205: param1 != 0 ? 201: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_259(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param4 && !param1 && !param3 ? 205: param3 && !param1 ? 203: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_26(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: param4 && !param3 ? 0xcc: !param3 ? 205: 203;
}

int test_6_blocks_variant_260(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param1 && !param4 && !param3 ? 205: param3 && !param1 ? 203: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_261(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param3 && !param1 && !param4 ? 205: param4 && !param3 && !param1 ? 0xcc: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_262(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param1 && !param3 && !param4 ? 205: param4 && !param3 && !param1 ? 0xcc: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_263(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: param3 != 0 ? 203: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_264(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: param3 != 0 ? 203: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_265(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param3 ? 0xcc: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_266(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param3 ? 0xcc: !param3 ? 205: 203;
}

int test_6_blocks_variant_267(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: !param4 && !param3 ? 205: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_268(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: !param3 && !param4 ? 205: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_269(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: param0 != 0 ? 200: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_27(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: !param4 && !param3 ? 205: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_270(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: param0 != 0 ? 200: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_271(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: param4 && !param0 ? 0xcc: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_272(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: param4 && !param0 ? 0xcc: !param0 ? 205: 200;
}

int test_6_blocks_variant_273(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: !param4 && !param0 ? 205: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_274(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: !param0 && !param4 ? 205: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_275(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param4 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_276(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param4 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: !param3 ? 205: 203;
}

int test_6_blocks_variant_277(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param4 && !param0 && !param3 ? 0xcc: param3 && !param0 ? 203: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_278(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param4 && !param0 && !param3 ? 0xcc: param3 && !param0 ? 203: !param0 ? 205: 200;
}

int test_6_blocks_variant_279(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param4 && !param3 && !param0 ? 0xcc: !param3 && !param0 ? 205: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_28(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: !param3 && !param4 ? 205: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_280(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: param4 && !param3 && !param0 ? 0xcc: !param0 && !param3 ? 205: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_281(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: !param4 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_282(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: !param3 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_283(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: !param4 && !param0 && !param3 ? 205: param3 && !param0 ? 203: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_284(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: !param0 && !param4 && !param3 ? 205: param3 && !param0 ? 203: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_285(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: !param3 && !param0 && !param4 ? 205: param4 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_286(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param0 && !param1 ? 202: param1 && !param0 ? 201: !param0 && !param3 && !param4 ? 205: param4 && !param3 && !param0 ? 0xcc: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_287(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_288(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_289(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: param4 && !param1 ? 0xcc: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_29(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: param1 != 0 ? 201: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_290(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: param4 && !param1 ? 0xcc: !param1 ? 205: 201;
}

int test_6_blocks_variant_291(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param4 && !param1 ? 205: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_292(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param1 && !param4 ? 205: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_293(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_294(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_295(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param4 && !param0 ? 0xcc: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_296(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param4 && !param0 ? 0xcc: !param0 ? 205: 200;
}

int test_6_blocks_variant_297(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param0 && !param1 ? 203: param1 && !param0 ? 201: !param4 && !param0 ? 205: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_298(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param0 && !param1 ? 203: param1 && !param0 ? 201: !param0 && !param4 ? 205: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_299(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param4 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_3(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: !param4 && !param3 ? 205: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_30(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: param1 != 0 ? 201: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_300(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param4 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: !param1 ? 205: 201;
}

int test_6_blocks_variant_301(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param4 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_302(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param4 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: !param0 ? 205: 200;
}

int test_6_blocks_variant_303(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param4 && !param1 && !param0 ? 0xcc: !param1 && !param0 ? 205: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_304(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param4 && !param1 && !param0 ? 0xcc: !param0 && !param1 ? 205: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_305(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: !param4 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_306(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: !param1 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_307(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: !param4 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_308(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: !param0 && !param4 && !param1 ? 205: param1 && !param0 ? 201: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_309(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: !param1 && !param0 && !param4 ? 205: param4 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_31(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: param4 && !param1 ? 0xcc: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_310(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: !param0 && !param1 && !param4 ? 205: param4 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_311(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_312(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: !param3 ? 205: 203;
}

int test_6_blocks_variant_313(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param1 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param1 ? 203: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_314(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param1 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param1 ? 203: !param1 ? 205: 201;
}

int test_6_blocks_variant_315(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: !param3 && !param1 ? 205: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_316(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: !param1 && !param3 ? 205: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_317(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param3 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_318(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param3 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: !param3 ? 205: 203;
}

int test_6_blocks_variant_319(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param0 && !param3 && !param1 ? 0xcc: param1 && !param0 ? 201: param3 && !param0 ? 203: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_32(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: param4 && !param1 ? 0xcc: !param1 ? 205: 201;
}

int test_6_blocks_variant_320(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param0 && !param3 && !param1 ? 0xcc: param1 && !param0 ? 201: param3 && !param0 ? 203: !param0 ? 205: 200;
}

int test_6_blocks_variant_321(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param3 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: !param3 && !param0 ? 205: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_322(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param3 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: !param0 && !param3 ? 205: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_323(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param1 && !param0 && !param3 ? 0xcc: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_324(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param1 && !param0 && !param3 ? 0xcc: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param1 ? 205: 201;
}

int test_6_blocks_variant_325(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param0 && !param1 && !param3 ? 0xcc: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_326(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param0 && !param1 && !param3 ? 0xcc: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: !param0 ? 205: 200;
}

int test_6_blocks_variant_327(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param1 && !param0 && !param3 ? 0xcc: param3 && !param1 && !param0 ? 203: !param1 && !param0 ? 205: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_328(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param1 && !param0 && !param3 ? 0xcc: param3 && !param1 && !param0 ? 203: !param0 && !param1 ? 205: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_329(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param3 && !param1 && !param0 ? 0xcc: !param3 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_33(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: !param4 && !param1 ? 205: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_330(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param3 && !param1 && !param0 ? 0xcc: !param1 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_331(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param3 && !param1 && !param0 ? 0xcc: !param3 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_332(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param3 && !param1 && !param0 ? 0xcc: !param0 && !param3 && !param1 ? 205: param1 && !param0 ? 201: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_333(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param1 && !param3 && !param0 ? 0xcc: !param1 && !param0 && !param3 ? 205: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_334(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: param4 && !param1 && !param3 && !param0 ? 0xcc: !param0 && !param1 && !param3 ? 205: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_335(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param4 && !param3 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_336(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param3 && !param4 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_337(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param4 && !param1 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param1 ? 203: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_338(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param1 && !param4 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param1 ? 203: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_339(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param3 && !param1 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param3 && !param1 ? 0xcc: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_34(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: !param1 && !param4 ? 205: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_340(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param1 && !param3 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param3 && !param1 ? 0xcc: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_341(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param4 && !param3 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_342(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param3 && !param4 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_343(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param4 && !param0 && !param3 && !param1 ? 205: param1 && !param0 ? 201: param3 && !param0 ? 203: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_344(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param0 && !param4 && !param3 && !param1 ? 205: param1 && !param0 ? 201: param3 && !param0 ? 203: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_345(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param3 && !param0 && !param4 && !param1 ? 205: param1 && !param0 ? 201: param4 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_346(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param0 && !param3 && !param4 && !param1 ? 205: param1 && !param0 ? 201: param4 && !param3 && !param0 ? 0xcc: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_347(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param4 && !param1 && !param0 && !param3 ? 205: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_348(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param1 && !param4 && !param0 && !param3 ? 205: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_349(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param4 && !param0 && !param1 && !param3 ? 205: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_35(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param4 && !param3 && !param1 ? 0xcc: param1 != 0 ? 201: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_350(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param0 && !param4 && !param1 && !param3 ? 205: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_351(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param1 && !param0 && !param4 && !param3 ? 205: param3 && !param1 && !param0 ? 203: param4 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_352(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param0 && !param1 && !param4 && !param3 ? 205: param3 && !param1 && !param0 ? 203: param4 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_353(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param3 && !param1 && !param0 && !param4 ? 205: param4 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_354(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param1 && !param3 && !param0 && !param4 ? 205: param4 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_355(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param3 && !param0 && !param1 && !param4 ? 205: param4 && !param3 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_356(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param0 && !param3 && !param1 && !param4 ? 205: param4 && !param3 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_357(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param1 && !param0 && !param3 && !param4 ? 205: param4 && !param1 && !param3 && !param0 ? 0xcc: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_358(int param0, int param1, int param2, int param3, int param4) {
    return param2 && !param1 && !param0 ? 202: !param0 && !param1 && !param3 && !param4 ? 205: param4 && !param1 && !param3 && !param0 ? 0xcc: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_359(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_36(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param4 && !param3 && !param1 ? 0xcc: param1 != 0 ? 201: !param3 ? 205: 203;
}

int test_6_blocks_variant_360(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_361(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param2 ? 0xcc: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_362(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param2 ? 0xcc: !param2 ? 205: 202;
}

int test_6_blocks_variant_363(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: !param4 && !param2 ? 205: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_364(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: !param2 && !param4 ? 205: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_365(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_366(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_367(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: param4 && !param1 ? 0xcc: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_368(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: param4 && !param1 ? 0xcc: !param1 ? 205: 201;
}

int test_6_blocks_variant_369(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: !param4 && !param1 ? 205: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_37(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param4 && !param1 && !param3 ? 0xcc: param3 && !param1 ? 203: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_370(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: !param1 && !param4 ? 205: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_371(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param4 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_372(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param4 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: !param2 ? 205: 202;
}

int test_6_blocks_variant_373(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param4 && !param1 && !param2 ? 0xcc: param2 && !param1 ? 202: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_374(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param4 && !param1 && !param2 ? 0xcc: param2 && !param1 ? 202: !param1 ? 205: 201;
}

int test_6_blocks_variant_375(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param4 && !param2 && !param1 ? 0xcc: !param2 && !param1 ? 205: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_376(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param4 && !param2 && !param1 ? 0xcc: !param1 && !param2 ? 205: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_377(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param4 && !param2 && !param1 ? 205: param1 != 0 ? 201: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_378(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param2 && !param4 && !param1 ? 205: param1 != 0 ? 201: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_379(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param4 && !param1 && !param2 ? 205: param2 && !param1 ? 202: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_38(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param4 && !param1 && !param3 ? 0xcc: param3 && !param1 ? 203: !param1 ? 205: 201;
}

int test_6_blocks_variant_380(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param1 && !param4 && !param2 ? 205: param2 && !param1 ? 202: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_381(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param2 && !param1 && !param4 ? 205: param4 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_382(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param1 && !param2 && !param4 ? 205: param4 && !param2 && !param1 ? 0xcc: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_383(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_384(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_385(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param2 ? 0xcc: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_386(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param2 ? 0xcc: !param2 ? 205: 202;
}

int test_6_blocks_variant_387(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: !param4 && !param2 ? 205: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_388(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: !param2 && !param4 ? 205: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_389(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param0 && !param2 && !param1 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_39(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param4 && !param3 && !param1 ? 0xcc: !param3 && !param1 ? 205: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_390(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param0 && !param2 && !param1 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_391(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param0 && !param2 && !param1 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: param4 && !param0 ? 0xcc: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_392(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param0 && !param2 && !param1 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: param4 && !param0 ? 0xcc: !param0 ? 205: 200;
}

int test_6_blocks_variant_393(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param0 && !param2 && !param1 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: !param4 && !param0 ? 205: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_394(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param0 && !param2 && !param1 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: !param0 && !param4 ? 205: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_395(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param4 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_396(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param4 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: !param2 ? 205: 202;
}

int test_6_blocks_variant_397(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param4 && !param0 && !param2 ? 0xcc: param2 && !param0 ? 202: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_398(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param4 && !param0 && !param2 ? 0xcc: param2 && !param0 ? 202: !param0 ? 205: 200;
}

int test_6_blocks_variant_399(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param4 && !param2 && !param0 ? 0xcc: !param2 && !param0 ? 205: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_4(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: !param3 && !param4 ? 205: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_40(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: param4 && !param3 && !param1 ? 0xcc: !param1 && !param3 ? 205: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_400(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: param4 && !param2 && !param0 ? 0xcc: !param0 && !param2 ? 205: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_401(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: !param4 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_402(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: !param2 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_403(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: !param4 && !param0 && !param2 ? 205: param2 && !param0 ? 202: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_404(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: !param0 && !param4 && !param2 ? 205: param2 && !param0 ? 202: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_405(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: !param2 && !param0 && !param4 ? 205: param4 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_406(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param0 && !param1 ? 203: param1 && !param0 ? 201: !param0 && !param2 && !param4 ? 205: param4 && !param2 && !param0 ? 0xcc: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_407(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_408(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_409(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param4 && !param1 ? 0xcc: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_41(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: !param4 && !param3 && !param1 ? 205: param1 != 0 ? 201: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_410(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param4 && !param1 ? 0xcc: !param1 ? 205: 201;
}

int test_6_blocks_variant_411(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param4 && !param1 ? 205: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_412(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param1 && !param4 ? 205: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_413(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param0 && !param1 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_414(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param0 && !param1 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_415(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param0 && !param1 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param4 && !param0 ? 0xcc: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_416(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param0 && !param1 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param4 && !param0 ? 0xcc: !param0 ? 205: 200;
}

int test_6_blocks_variant_417(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param0 && !param1 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: !param4 && !param0 ? 205: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_418(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param0 && !param1 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: !param0 && !param4 ? 205: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_419(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param4 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_42(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: !param3 && !param4 && !param1 ? 205: param1 != 0 ? 201: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_420(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param4 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: !param1 ? 205: 201;
}

int test_6_blocks_variant_421(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param4 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_422(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param4 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: !param0 ? 205: 200;
}

int test_6_blocks_variant_423(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param4 && !param1 && !param0 ? 0xcc: !param1 && !param0 ? 205: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_424(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: param4 && !param1 && !param0 ? 0xcc: !param0 && !param1 ? 205: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_425(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: !param4 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_426(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: !param1 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_427(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: !param4 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_428(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: !param0 && !param4 && !param1 ? 205: param1 && !param0 ? 201: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_429(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: !param1 && !param0 && !param4 ? 205: param4 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_43(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: !param4 && !param1 && !param3 ? 205: param3 && !param1 ? 203: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_430(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param0 && !param2 ? 203: param2 && !param1 && !param0 ? 202: !param0 && !param1 && !param4 ? 205: param4 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_431(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_432(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: !param2 ? 205: 202;
}

int test_6_blocks_variant_433(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param1 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_434(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param1 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: !param1 ? 205: 201;
}

int test_6_blocks_variant_435(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: !param2 && !param1 ? 205: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_436(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: !param1 && !param2 ? 205: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_437(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_438(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: !param2 ? 205: 202;
}

int test_6_blocks_variant_439(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param0 && !param2 && !param1 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_44(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: !param1 && !param4 && !param3 ? 205: param3 && !param1 ? 203: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_440(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param0 && !param2 && !param1 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: !param0 ? 205: 200;
}

int test_6_blocks_variant_441(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: !param2 && !param0 ? 205: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_442(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: !param0 && !param2 ? 205: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_443(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: param4 && !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_444(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: param4 && !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param1 ? 205: 201;
}

int test_6_blocks_variant_445(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: param4 && !param0 && !param1 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_446(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: param4 && !param0 && !param1 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: !param0 ? 205: 200;
}

int test_6_blocks_variant_447(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: param4 && !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: !param1 && !param0 ? 205: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_448(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: param4 && !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: !param0 && !param1 ? 205: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_449(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param1 && !param0 ? 0xcc: !param2 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_45(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: !param3 && !param1 && !param4 ? 205: param4 && !param3 && !param1 ? 0xcc: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_450(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param1 && !param0 ? 0xcc: !param1 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_451(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param1 && !param0 ? 0xcc: !param2 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_452(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param1 && !param0 ? 0xcc: !param0 && !param2 && !param1 ? 205: param1 && !param0 ? 201: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_453(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param1 && !param2 && !param0 ? 0xcc: !param1 && !param0 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_454(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: param4 && !param1 && !param2 && !param0 ? 0xcc: !param0 && !param1 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_455(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param4 && !param2 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_456(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param2 && !param4 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_457(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param4 && !param1 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_458(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param1 && !param4 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 && !param1 ? 202: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_459(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param2 && !param1 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_46(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param2 && !param1 ? 202: !param1 && !param3 && !param4 ? 205: param4 && !param3 && !param1 ? 0xcc: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_460(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param1 && !param2 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param2 && !param1 ? 0xcc: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_461(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param4 && !param2 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_462(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param2 && !param4 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_463(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param4 && !param0 && !param2 && !param1 ? 205: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_464(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param0 && !param4 && !param2 && !param1 ? 205: param1 && !param0 ? 201: param2 && !param0 ? 202: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_465(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param2 && !param0 && !param4 && !param1 ? 205: param1 && !param0 ? 201: param4 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_466(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param0 && !param2 && !param4 && !param1 ? 205: param1 && !param0 ? 201: param4 && !param2 && !param0 ? 0xcc: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_467(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: !param4 && !param1 && !param0 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_468(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: !param1 && !param4 && !param0 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_469(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: !param4 && !param0 && !param1 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_47(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: param2 != 0 ? 202: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_470(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: !param0 && !param4 && !param1 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_471(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: !param1 && !param0 && !param4 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param4 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_472(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param1 && !param2 && !param0 ? 203: !param0 && !param1 && !param4 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param4 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_473(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param2 && !param1 && !param0 && !param4 ? 205: param4 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_474(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param1 && !param2 && !param0 && !param4 ? 205: param4 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_475(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param2 && !param0 && !param1 && !param4 ? 205: param4 && !param2 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_476(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param0 && !param2 && !param1 && !param4 ? 205: param4 && !param2 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_477(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param1 && !param0 && !param2 && !param4 ? 205: param4 && !param1 && !param2 && !param0 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_478(int param0, int param1, int param2, int param3, int param4) {
    return param3 && !param2 && !param1 && !param0 ? 203: !param0 && !param1 && !param2 && !param4 ? 205: param4 && !param1 && !param2 && !param0 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_479(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_48(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: param2 != 0 ? 202: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_480(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: !param3 ? 205: 203;
}

int test_6_blocks_variant_481(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_482(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: !param2 ? 205: 202;
}

int test_6_blocks_variant_483(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: !param3 && !param2 ? 205: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_484(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: !param2 && !param3 ? 205: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_485(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_486(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: !param3 ? 205: 203;
}

int test_6_blocks_variant_487(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param3 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_488(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param3 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: !param1 ? 205: 201;
}

int test_6_blocks_variant_489(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: !param3 && !param1 ? 205: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_49(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: param4 && !param2 ? 0xcc: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_490(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: !param1 && !param3 ? 205: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_491(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_492(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: !param2 ? 205: 202;
}

int test_6_blocks_variant_493(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param2 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_494(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param2 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: !param1 ? 205: 201;
}

int test_6_blocks_variant_495(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: !param2 && !param1 ? 205: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_496(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: !param1 && !param2 ? 205: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_497(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: !param3 && !param2 && !param1 ? 205: param1 != 0 ? 201: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_498(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: !param2 && !param3 && !param1 ? 205: param1 != 0 ? 201: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_499(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: !param3 && !param1 && !param2 ? 205: param2 && !param1 ? 202: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_5(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: param2 != 0 ? 202: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_50(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: param4 && !param2 ? 0xcc: !param2 ? 205: 202;
}

int test_6_blocks_variant_500(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: !param1 && !param3 && !param2 ? 205: param2 && !param1 ? 202: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_501(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: !param2 && !param1 && !param3 ? 205: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_502(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: !param1 && !param2 && !param3 ? 205: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_503(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_504(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: !param3 ? 205: 203;
}

int test_6_blocks_variant_505(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param3 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_506(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param3 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: !param2 ? 205: 202;
}

int test_6_blocks_variant_507(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: !param3 && !param2 ? 205: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_508(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: !param2 && !param3 ? 205: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_509(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param0 && !param2 && !param1 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_51(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: !param4 && !param2 ? 205: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_510(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param0 && !param2 && !param1 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: !param3 ? 205: 203;
}

int test_6_blocks_variant_511(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param0 && !param3 && !param2 && !param1 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_512(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param0 && !param3 && !param2 && !param1 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: !param0 ? 205: 200;
}

int test_6_blocks_variant_513(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param0 && !param2 && !param1 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: !param3 && !param0 ? 205: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_514(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param0 && !param2 && !param1 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: !param0 && !param3 ? 205: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_515(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param0 && !param3 && !param1 ? 0xcc: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_516(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param0 && !param3 && !param1 ? 0xcc: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: !param2 ? 205: 202;
}

int test_6_blocks_variant_517(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param0 && !param2 && !param3 && !param1 ? 0xcc: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_518(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param0 && !param2 && !param3 && !param1 ? 0xcc: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: !param0 ? 205: 200;
}

int test_6_blocks_variant_519(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param0 && !param3 && !param1 ? 0xcc: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: !param2 && !param0 ? 205: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_52(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: !param2 && !param4 ? 205: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_520(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param0 && !param3 && !param1 ? 0xcc: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: !param0 && !param2 ? 205: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_521(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: !param3 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_522(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: !param2 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_523(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: !param3 && !param0 && !param2 ? 205: param2 && !param0 ? 202: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_524(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: !param0 && !param3 && !param2 ? 205: param2 && !param0 ? 202: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_525(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param3 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: !param2 && !param0 && !param3 ? 205: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_526(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param3 && !param0 && !param1 ? 0xcc: param1 && !param0 ? 201: !param0 && !param2 && !param3 ? 205: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_527(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_528(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: !param3 ? 205: 203;
}

int test_6_blocks_variant_529(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param3 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_53(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param1 && !param2 ? 203: param2 && !param1 ? 202: param1 != 0 ? 201: param4 != 0 ? 0xcc: 205;
}

int test_6_blocks_variant_530(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param3 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: !param1 ? 205: 201;
}

int test_6_blocks_variant_531(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param3 && !param1 ? 205: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_532(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param1 && !param3 ? 205: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_533(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param0 && !param1 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_534(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param0 && !param1 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: !param3 ? 205: 203;
}

int test_6_blocks_variant_535(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param0 && !param3 && !param1 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_536(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param0 && !param3 && !param1 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: !param0 ? 205: 200;
}

int test_6_blocks_variant_537(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param0 && !param1 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: !param3 && !param0 ? 205: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_538(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param0 && !param1 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: !param0 && !param3 ? 205: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_539(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param0 && !param3 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_54(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param1 && !param2 ? 203: param2 && !param1 ? 202: param1 != 0 ? 201: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_540(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param0 && !param3 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param1 ? 205: 201;
}

int test_6_blocks_variant_541(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param0 && !param1 && !param3 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_542(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param0 && !param1 && !param3 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: !param0 ? 205: 200;
}

int test_6_blocks_variant_543(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param0 && !param3 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: !param1 && !param0 ? 205: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_544(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param0 && !param3 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: !param0 && !param1 ? 205: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_545(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: !param3 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_546(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: !param1 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_547(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: !param3 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_548(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: !param0 && !param3 && !param1 ? 205: param1 && !param0 ? 201: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_549(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param3 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: !param1 && !param0 && !param3 ? 205: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_55(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param1 && !param2 ? 203: param2 && !param1 ? 202: param4 && !param1 ? 0xcc: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_550(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param3 && !param0 && !param2 ? 0xcc: param2 && !param1 && !param0 ? 202: !param0 && !param1 && !param3 ? 205: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_551(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_552(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: !param2 ? 205: 202;
}

int test_6_blocks_variant_553(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param2 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_554(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param2 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: !param1 ? 205: 201;
}

int test_6_blocks_variant_555(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param2 && !param1 ? 205: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_556(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: !param1 && !param2 ? 205: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_557(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param0 && !param1 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_558(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param0 && !param1 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: !param2 ? 205: 202;
}

int test_6_blocks_variant_559(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param0 && !param2 && !param1 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_56(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param1 && !param2 ? 203: param2 && !param1 ? 202: param4 && !param1 ? 0xcc: !param1 ? 205: 201;
}

int test_6_blocks_variant_560(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param0 && !param2 && !param1 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: !param0 ? 205: 200;
}

int test_6_blocks_variant_561(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param0 && !param1 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: !param2 && !param0 ? 205: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_562(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param0 && !param1 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: !param0 && !param2 ? 205: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_563(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param0 && !param2 && !param3 ? 0xcc: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_564(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param0 && !param2 && !param3 ? 0xcc: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: !param1 ? 205: 201;
}

int test_6_blocks_variant_565(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param0 && !param1 && !param2 && !param3 ? 0xcc: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: 205;
}

int test_6_blocks_variant_566(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param0 && !param1 && !param2 && !param3 ? 0xcc: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: !param0 ? 205: 200;
}

int test_6_blocks_variant_567(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param0 && !param2 && !param3 ? 0xcc: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: !param1 && !param0 ? 205: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_568(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param0 && !param2 && !param3 ? 0xcc: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: !param0 && !param1 ? 205: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_569(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: !param2 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_57(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param1 && !param2 ? 203: param2 && !param1 ? 202: !param4 && !param1 ? 205: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_570(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: !param1 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_571(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: !param2 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_572(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: !param0 && !param2 && !param1 ? 205: param1 && !param0 ? 201: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_573(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param2 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: !param1 && !param0 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_574(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param2 && !param0 && !param3 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: !param0 && !param1 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_575(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: !param3 && !param2 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_576(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: !param2 && !param3 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_577(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: !param3 && !param1 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_578(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: !param1 && !param3 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_579(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param3 && !param1 && !param0 ? 0xcc: !param2 && !param1 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_58(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param1 && !param2 ? 203: param2 && !param1 ? 202: !param1 && !param4 ? 205: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_580(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param3 && !param1 && !param0 ? 0xcc: !param1 && !param2 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_581(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: !param3 && !param2 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_582(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: !param2 && !param3 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_583(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: !param3 && !param0 && !param2 && !param1 ? 205: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_584(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: !param0 && !param3 && !param2 && !param1 ? 205: param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_585(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param3 && !param1 && !param0 ? 0xcc: !param2 && !param0 && !param3 && !param1 ? 205: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_586(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param3 && !param1 && !param0 ? 0xcc: !param0 && !param2 && !param3 && !param1 ? 205: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_587(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param2 && !param0 ? 0xcc: !param3 && !param1 && !param0 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_588(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param2 && !param0 ? 0xcc: !param1 && !param3 && !param0 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_589(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param2 && !param0 ? 0xcc: !param3 && !param0 && !param1 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_59(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param4 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_590(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param3 && !param1 && !param2 && !param0 ? 0xcc: !param0 && !param3 && !param1 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_591(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param3 && !param2 && !param0 ? 0xcc: !param1 && !param0 && !param3 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_592(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param3 && !param2 && !param0 ? 0xcc: !param0 && !param1 && !param3 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_593(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param3 && !param0 ? 0xcc: !param2 && !param1 && !param0 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_594(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param3 && !param0 ? 0xcc: !param1 && !param2 && !param0 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_595(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param3 && !param0 ? 0xcc: !param2 && !param0 && !param1 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_596(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param2 && !param1 && !param3 && !param0 ? 0xcc: !param0 && !param2 && !param1 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_597(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param2 && !param3 && !param0 ? 0xcc: !param1 && !param0 && !param2 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_598(int param0, int param1, int param2, int param3, int param4) {
    return param4 && !param1 && !param2 && !param3 && !param0 ? 0xcc: !param0 && !param1 && !param2 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_599(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param3 && !param2 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_6(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: param2 != 0 ? 202: !param4 ? 205: 0xcc;
}

int test_6_blocks_variant_60(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param4 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: !param2 ? 205: 202;
}

int test_6_blocks_variant_600(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param4 && !param2 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_601(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param2 && !param3 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_602(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param4 && !param3 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_603(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param2 && !param4 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param3 && !param2 ? 0xcc: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_604(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param3 && !param4 && !param1 && !param0 ? 205: param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param3 && !param2 ? 0xcc: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_605(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param3 && !param1 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_606(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param4 && !param1 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_607(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param1 && !param3 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_608(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param4 && !param3 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_609(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param1 && !param4 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 && !param1 ? 202: param4 && !param3 && !param1 ? 0xcc: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_61(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param4 && !param1 && !param2 ? 0xcc: param2 && !param1 ? 202: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_610(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param3 && !param4 && !param2 && !param0 ? 205: param0 != 0 ? 200: param2 && !param1 ? 202: param4 && !param3 && !param1 ? 0xcc: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_611(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param2 && !param1 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_612(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param4 && !param1 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_613(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param1 && !param2 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_614(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param4 && !param2 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_615(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param1 && !param4 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param4 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_616(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param2 && !param4 && !param3 && !param0 ? 205: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param4 && !param2 && !param1 ? 0xcc: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_617(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param2 && !param1 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param3 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_618(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param3 && !param1 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param3 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_619(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param1 && !param2 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param3 && !param2 && !param1 ? 0xcc: param2 && !param1 ? 202: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_62(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param4 && !param1 && !param2 ? 0xcc: param2 && !param1 ? 202: !param1 ? 205: 201;
}

int test_6_blocks_variant_620(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param3 && !param2 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param3 && !param2 && !param1 ? 0xcc: param2 && !param1 ? 202: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_621(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param1 && !param3 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param2 && !param3 && !param1 ? 0xcc: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_622(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param2 && !param3 && !param4 && !param0 ? 205: param0 != 0 ? 200: param4 && !param2 && !param3 && !param1 ? 0xcc: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_623(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param3 && !param2 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_624(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param4 && !param2 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_625(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param2 && !param3 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_626(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param4 && !param3 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_627(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param2 && !param4 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param3 && !param2 ? 0xcc: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_628(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param3 && !param4 && !param0 && !param1 ? 205: param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param3 && !param2 ? 0xcc: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_629(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param3 && !param0 && !param2 && !param1 ? 205: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_63(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param4 && !param2 && !param1 ? 0xcc: !param2 && !param1 ? 205: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_630(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param4 && !param0 && !param2 && !param1 ? 205: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_631(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param0 && !param3 && !param2 && !param1 ? 205: param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_632(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param4 && !param3 && !param2 && !param1 ? 205: param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_633(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param0 && !param4 && !param2 && !param1 ? 205: param1 && !param0 ? 201: param2 && !param0 ? 202: param4 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_634(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param3 && !param4 && !param2 && !param1 ? 205: param1 && !param0 ? 201: param2 && !param0 ? 202: param4 && !param3 && !param0 ? 0xcc: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_635(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param2 && !param0 && !param3 && !param1 ? 205: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_636(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param4 && !param0 && !param3 && !param1 ? 205: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_637(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param0 && !param2 && !param3 && !param1 ? 205: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_638(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param4 && !param2 && !param3 && !param1 ? 205: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_639(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param0 && !param4 && !param3 && !param1 ? 205: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param4 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_64(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param4 && !param2 && !param1 ? 0xcc: !param1 && !param2 ? 205: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_640(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param2 && !param4 && !param3 && !param1 ? 205: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param4 && !param2 && !param0 ? 0xcc: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_641(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param2 && !param0 && !param4 && !param1 ? 205: param1 && !param0 ? 201: param4 && !param3 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_642(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param3 && !param0 && !param4 && !param1 ? 205: param1 && !param0 ? 201: param4 && !param3 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_643(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param0 && !param2 && !param4 && !param1 ? 205: param1 && !param0 ? 201: param4 && !param3 && !param2 && !param0 ? 0xcc: param2 && !param0 ? 202: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_644(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param3 && !param2 && !param4 && !param1 ? 205: param1 && !param0 ? 201: param4 && !param3 && !param2 && !param0 ? 0xcc: param2 && !param0 ? 202: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_645(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param0 && !param3 && !param4 && !param1 ? 205: param1 && !param0 ? 201: param4 && !param2 && !param3 && !param0 ? 0xcc: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_646(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param2 && !param3 && !param4 && !param1 ? 205: param1 && !param0 ? 201: param4 && !param2 && !param3 && !param0 ? 0xcc: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_647(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param3 && !param1 && !param0 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_648(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param4 && !param1 && !param0 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_649(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param1 && !param3 && !param0 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_65(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: !param4 && !param2 && !param1 ? 205: param1 != 0 ? 201: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_650(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param4 && !param3 && !param0 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_651(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param1 && !param4 && !param0 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param4 && !param3 && !param1 ? 0xcc: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_652(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param3 && !param4 && !param0 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param4 && !param3 && !param1 ? 0xcc: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_653(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param3 && !param0 && !param1 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_654(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param4 && !param0 && !param1 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_655(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param0 && !param3 && !param1 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_656(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param4 && !param3 && !param1 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_657(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param0 && !param4 && !param1 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param4 && !param3 && !param0 ? 0xcc: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_658(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param3 && !param4 && !param1 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param4 && !param3 && !param0 ? 0xcc: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_659(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param1 && !param0 && !param3 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_66(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: !param2 && !param4 && !param1 ? 205: param1 != 0 ? 201: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_660(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param4 && !param0 && !param3 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_661(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param0 && !param1 && !param3 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_662(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param4 && !param1 && !param3 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_663(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param0 && !param4 && !param3 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param4 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_664(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param1 && !param4 && !param3 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param4 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_665(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param1 && !param0 && !param4 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param4 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_666(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param3 && !param0 && !param4 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param4 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_667(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param0 && !param1 && !param4 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param4 && !param3 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_668(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param3 && !param1 && !param4 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param4 && !param3 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_669(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param0 && !param3 && !param4 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param4 && !param1 && !param3 && !param0 ? 0xcc: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_67(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: !param4 && !param1 && !param2 ? 205: param2 && !param1 ? 202: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_670(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param1 && !param3 && !param4 && !param2 ? 205: param2 && !param1 && !param0 ? 202: param4 && !param1 && !param3 && !param0 ? 0xcc: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_671(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param2 && !param1 && !param0 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_672(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param4 && !param1 && !param0 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_673(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param1 && !param2 && !param0 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_674(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param4 && !param2 && !param0 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_675(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param1 && !param4 && !param0 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param4 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_676(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param2 && !param4 && !param0 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param4 && !param2 && !param1 ? 0xcc: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_677(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param2 && !param0 && !param1 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_678(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param4 && !param0 && !param1 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_679(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param0 && !param2 && !param1 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_68(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: !param1 && !param4 && !param2 ? 205: param2 && !param1 ? 202: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_680(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param4 && !param2 && !param1 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_681(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param0 && !param4 && !param1 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param4 && !param2 && !param0 ? 0xcc: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_682(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param2 && !param4 && !param1 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param4 && !param2 && !param0 ? 0xcc: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_683(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param1 && !param0 && !param2 && !param3 ? 205: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: 0xcc;
}

int test_6_blocks_variant_684(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param4 && !param0 && !param2 && !param3 ? 205: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param4 && !param1 ? 0xcc: 201;
}

int test_6_blocks_variant_685(int param0, int param1, int param2, int param3, int param4) {
    return !param4 && !param0 && !param1 && !param2 && !param3 ? 205: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: 0xcc;
}

int test_6_blocks_variant_686(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param4 && !param1 && !param2 && !param3 ? 205: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param4 && !param0 ? 0xcc: 200;
}

int test_6_blocks_variant_687(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param0 && !param4 && !param2 && !param3 ? 205: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param4 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_688(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param1 && !param4 && !param2 && !param3 ? 205: param3 && !param1 && !param2 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param4 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_689(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param1 && !param0 && !param4 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_69(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: !param2 && !param1 && !param4 ? 205: param4 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_690(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param2 && !param0 && !param4 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_691(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param0 && !param1 && !param4 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_692(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param2 && !param1 && !param4 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param4 && !param2 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_693(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param0 && !param2 && !param4 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param4 && !param1 && !param2 && !param0 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_694(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param1 && !param2 && !param4 && !param3 ? 205: param3 && !param2 && !param1 && !param0 ? 203: param4 && !param1 && !param2 && !param0 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_695(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param2 && !param1 && !param0 && !param4 ? 205: param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_696(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param3 && !param1 && !param0 && !param4 ? 205: param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_697(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param1 && !param2 && !param0 && !param4 ? 205: param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_698(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param3 && !param2 && !param0 && !param4 ? 205: param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param2 && !param1 ? 202: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_699(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param1 && !param3 && !param0 && !param4 ? 205: param4 && !param2 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_7(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: param4 && !param2 ? 0xcc: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_70(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: !param1 && !param2 && !param4 ? 205: param4 && !param2 && !param1 ? 0xcc: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_700(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param2 && !param3 && !param0 && !param4 ? 205: param4 && !param2 && !param3 && !param1 && !param0 ? 0xcc: param0 != 0 ? 200: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_701(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param2 && !param0 && !param1 && !param4 ? 205: param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_702(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param3 && !param0 && !param1 && !param4 ? 205: param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param0 != 0 ? 200: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_703(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param0 && !param2 && !param1 && !param4 ? 205: param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_704(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param3 && !param2 && !param1 && !param4 ? 205: param4 && !param3 && !param2 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param2 && !param0 ? 202: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_705(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param0 && !param3 && !param1 && !param4 ? 205: param4 && !param2 && !param3 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_706(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param2 && !param3 && !param1 && !param4 ? 205: param4 && !param2 && !param3 && !param1 && !param0 ? 0xcc: param1 && !param0 ? 201: param3 && !param2 && !param0 ? 203: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_707(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param1 && !param0 && !param2 && !param4 ? 205: param4 && !param3 && !param1 && !param2 && !param0 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_708(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param3 && !param0 && !param2 && !param4 ? 205: param4 && !param3 && !param1 && !param2 && !param0 ? 0xcc: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_709(int param0, int param1, int param2, int param3, int param4) {
    return !param3 && !param0 && !param1 && !param2 && !param4 ? 205: param4 && !param3 && !param1 && !param2 && !param0 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param0 != 0 ? 200: 203;
}

int test_6_blocks_variant_71(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param3 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: param2 != 0 ? 202: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_710(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param3 && !param1 && !param2 && !param4 ? 205: param4 && !param3 && !param1 && !param2 && !param0 ? 0xcc: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: param3 && !param0 ? 203: 200;
}

int test_6_blocks_variant_711(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param0 && !param3 && !param2 && !param4 ? 205: param4 && !param1 && !param3 && !param2 && !param0 ? 0xcc: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_712(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param1 && !param3 && !param2 && !param4 ? 205: param4 && !param1 && !param3 && !param2 && !param0 ? 0xcc: param2 && !param1 && !param0 ? 202: param3 && !param1 && !param0 ? 203: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_713(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param1 && !param0 && !param3 && !param4 ? 205: param4 && !param2 && !param1 && !param3 && !param0 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_714(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param2 && !param0 && !param3 && !param4 ? 205: param4 && !param2 && !param1 && !param3 && !param0 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param0 != 0 ? 200: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_715(int param0, int param1, int param2, int param3, int param4) {
    return !param2 && !param0 && !param1 && !param3 && !param4 ? 205: param4 && !param2 && !param1 && !param3 && !param0 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param0 != 0 ? 200: 202;
}

int test_6_blocks_variant_716(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param2 && !param1 && !param3 && !param4 ? 205: param4 && !param2 && !param1 && !param3 && !param0 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param1 && !param0 ? 201: param2 && !param0 ? 202: 200;
}

int test_6_blocks_variant_717(int param0, int param1, int param2, int param3, int param4) {
    return !param1 && !param0 && !param2 && !param3 && !param4 ? 205: param4 && !param1 && !param2 && !param3 && !param0 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param0 != 0 ? 200: 201;
}

int test_6_blocks_variant_718(int param0, int param1, int param2, int param3, int param4) {
    return !param0 && !param1 && !param2 && !param3 && !param4 ? 205: param4 && !param1 && !param2 && !param3 && !param0 ? 0xcc: param3 && !param2 && !param1 && !param0 ? 203: param2 && !param1 && !param0 ? 202: param1 && !param0 ? 201: 200;
}

int test_6_blocks_variant_72(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param3 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: param2 != 0 ? 202: !param3 ? 205: 203;
}

int test_6_blocks_variant_73(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param2 && !param3 && !param1 ? 0xcc: param1 != 0 ? 201: param3 && !param2 ? 203: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_74(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param2 && !param3 && !param1 ? 0xcc: param1 != 0 ? 201: param3 && !param2 ? 203: !param2 ? 205: 202;
}

int test_6_blocks_variant_75(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param3 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: !param3 && !param2 ? 205: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_76(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param3 && !param2 && !param1 ? 0xcc: param1 != 0 ? 201: !param2 && !param3 ? 205: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_77(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param3 && !param1 && !param2 ? 0xcc: param2 && !param1 ? 202: param1 != 0 ? 201: param3 != 0 ? 203: 205;
}

int test_6_blocks_variant_78(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param3 && !param1 && !param2 ? 0xcc: param2 && !param1 ? 202: param1 != 0 ? 201: !param3 ? 205: 203;
}

int test_6_blocks_variant_79(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param1 && !param3 && !param2 ? 0xcc: param2 && !param1 ? 202: param3 && !param1 ? 203: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_8(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: param4 && !param2 ? 0xcc: !param2 ? 205: 202;
}

int test_6_blocks_variant_80(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param1 && !param3 && !param2 ? 0xcc: param2 && !param1 ? 202: param3 && !param1 ? 203: !param1 ? 205: 201;
}

int test_6_blocks_variant_81(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param3 && !param1 && !param2 ? 0xcc: param2 && !param1 ? 202: !param3 && !param1 ? 205: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_82(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param3 && !param1 && !param2 ? 0xcc: param2 && !param1 ? 202: !param1 && !param3 ? 205: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_83(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param2 && !param1 && !param3 ? 0xcc: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: param2 != 0 ? 202: 205;
}

int test_6_blocks_variant_84(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param2 && !param1 && !param3 ? 0xcc: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: !param2 ? 205: 202;
}

int test_6_blocks_variant_85(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param1 && !param2 && !param3 ? 0xcc: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: param1 != 0 ? 201: 205;
}

int test_6_blocks_variant_86(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param1 && !param2 && !param3 ? 0xcc: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: !param1 ? 205: 201;
}

int test_6_blocks_variant_87(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param2 && !param1 && !param3 ? 0xcc: param3 && !param2 && !param1 ? 203: !param2 && !param1 ? 205: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_88(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param2 && !param1 && !param3 ? 0xcc: param3 && !param2 && !param1 ? 203: !param1 && !param2 ? 205: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_89(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param3 && !param2 && !param1 ? 0xcc: !param3 && !param2 && !param1 ? 205: param1 != 0 ? 201: param2 != 0 ? 202: 203;
}

int test_6_blocks_variant_9(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param1 != 0 ? 201: param3 && !param2 ? 203: !param4 && !param2 ? 205: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_90(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param3 && !param2 && !param1 ? 0xcc: !param2 && !param3 && !param1 ? 205: param1 != 0 ? 201: param3 && !param2 ? 203: 202;
}

int test_6_blocks_variant_91(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param3 && !param2 && !param1 ? 0xcc: !param3 && !param1 && !param2 ? 205: param2 && !param1 ? 202: param1 != 0 ? 201: 203;
}

int test_6_blocks_variant_92(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param3 && !param2 && !param1 ? 0xcc: !param1 && !param3 && !param2 ? 205: param2 && !param1 ? 202: param3 && !param1 ? 203: 201;
}

int test_6_blocks_variant_93(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param2 && !param3 && !param1 ? 0xcc: !param2 && !param1 && !param3 ? 205: param3 && !param2 && !param1 ? 203: param1 != 0 ? 201: 202;
}

int test_6_blocks_variant_94(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: param4 && !param2 && !param3 && !param1 ? 0xcc: !param1 && !param2 && !param3 ? 205: param3 && !param2 && !param1 ? 203: param2 && !param1 ? 202: 201;
}

int test_6_blocks_variant_95(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param4 && !param3 && !param2 && !param1 ? 205: param1 != 0 ? 201: param2 != 0 ? 202: param3 != 0 ? 203: 0xcc;
}

int test_6_blocks_variant_96(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param3 && !param4 && !param2 && !param1 ? 205: param1 != 0 ? 201: param2 != 0 ? 202: param4 && !param3 ? 0xcc: 203;
}

int test_6_blocks_variant_97(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param4 && !param2 && !param3 && !param1 ? 205: param1 != 0 ? 201: param3 && !param2 ? 203: param2 != 0 ? 202: 0xcc;
}

int test_6_blocks_variant_98(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param2 && !param4 && !param3 && !param1 ? 205: param1 != 0 ? 201: param3 && !param2 ? 203: param4 && !param2 ? 0xcc: 202;
}

int test_6_blocks_variant_99(int param0, int param1, int param2, int param3, int param4) {
    return param0 != 0 ? 200: !param3 && !param2 && !param4 && !param1 ? 205: param1 != 0 ? 201: param4 && !param3 && !param2 ? 0xcc: param2 != 0 ? 202: 203;
}
