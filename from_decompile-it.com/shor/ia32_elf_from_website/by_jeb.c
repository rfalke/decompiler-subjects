
long long* __divdc3(long long* param0) {
    char v0;
    double v1;
    char v2;
    char v3;
    char v4;
    char v5;
    __SyntheticTypeUnknown v6;
    int v7;
    short v8;
    short v9;
    short v10;
    short v11;
    short v12;
    short v13;
    short v14;
    int v15;
    __int128 v16;
    short v17;
    short v18;
    short v19;
    short v20;
    short v21;
    short v22;
    short v23;
    __int128 v24;
    int v25;
    double v26;
    double v27;
    int v28;
    long long* result = param0;
    fabs();
    fabs();
    fucompp();
    v23 = fnstsw(v23);
    if(!((v8 >>> 8) & 0x1) && !((v8 >>> 14) & 0x1)) {
        __SyntheticTypeUnknownF v29 = v26 / v27;
        __SyntheticTypeUnknownF v30 = v26 * v29 + v27;
        v5 = 7;
        v6[v40 + 1] = fdivrp(v30, (v26 * v29 + v27) / v30 - v26);
    }
    else {
        __SyntheticTypeUnknownF v31 = v27 / v26;
        v5 = 6;
        v6[v40 + 1] = fsubrp((v27 * v31 + v26) / (v27 * v31 + v26) * v26, v27);
        v6[v40 + 1] = fdivrp(v24, v16);
    }
    v6[v40] = fucom(v6[v5], v6[v5]);
    short v41 = fnstsw(v8);
    if(!((v9 >>> 10) & 0x1) && ((v9 >>> 14) & 0x1)) {
        v6[v5 + 4] = v6[v5];
        v6[v5 - 3] = v6[v5 + 1];
        v4 = v5 - 4;
    }
    else {
        v6[v40] = fucom(v6[v5], v6[v5]);
        (unsigned short)v42 = fnstsw(v9);
        if(((v17 >>> 10) & 0x1) || !((v17 >>> 14) & 0x1)) {
            fldz();
            v6[v40 + 4] = fucom(v6[v5 + 4], v6[v5]);
            (unsigned short)v42 = fnstsw(v17);
            if(!((v10 >>> 14) & 0x1)) {
                v6[v5 + 4] = v6[v5];
                v3 = v5 + 1;
            loc_8053E47:
                char v32 = v3 - 1;
                v6[v32] = v6[v3 + 5];
                v6[v32] -= v6[v32 + 6];
                v1 = v6[v32];
                v6[v40] = fucom(v6[v32], v6[v32]);
                (unsigned short)v42 = fnstsw(v10);
                v6[v40] = fucomp(v6[v32], v6[v32]);
                (unsigned short)v42 = fnstsw(v18);
                v28 = (unsigned int)((v28 >>> 10) & 0x1 ? 1: 0) | ((unsigned int)((v28 >>> 8) & 0xffffff) << 8);
                char v33 = (unsigned char)v28 & ((v18 >>> 10) & 0x1 ? 0: 1);
                if(!v33) {
                    __int128 v34 = v6[v32 + 4];
                    --v32;
                    v6[v32] = v34;
                    v6[v32] -= v6[v32 + 5];
                    v6[v40] = fucom(v6[v32], v6[v32]);
                    (unsigned short)v42 = fnstsw((unsigned short)v28);
                    if(((v28 >>> 14) & 0x1) && !((v28 >>> 10) & 0x1)) {
                        v6[v40] = fucomp(v6[v32], v6[v32]);
                        (unsigned short)v42 = fnstsw((unsigned short)v28);
                        if(((v28 >>> 10) & 0x1) || !((v28 >>> 14) & 0x1)) {
                            goto loc_8053E8E;
                        }
                    }
                    else {
                        v6[v32 + 5] = v6[v32];
                        ++v32;
                    }
                    v0 = v32 - 1;
                    v6[v0] = v6[v32 + 3];
                    v6[v0] -= v6[v0 + 4];
                }
                else {
                loc_8053E8E:
                    v0 = v32 - 1;
                    v6[v0] = v6[v32 + 2];
                    v6[v0] -= v6[v0 + 3];
                    v6[v40] = fucom(v6[v0], v6[v0]);
                    (unsigned short)v42 = fnstsw((unsigned short)v28);
                    if(((v28 >>> 14) & 0x1) && !((v28 >>> 10) & 0x1)) {
                        __int128 v35 = v6[v0 + 4];
                        --v0;
                        v6[v0] = v35;
                        v6[v0] -= v6[v0 + 5];
                        v6[v40] = fucomp(v6[v0], v6[v0]);
                        (unsigned short)v42 = fnstsw((unsigned short)v28);
                        if(((v28 >>> 14) & 0x1) && !((v28 >>> 10) & 0x1)) {
                            if(!v33) {
                                fldz();
                            }
                            else {
                                fld1();
                            }
                            fxam();
                            (unsigned short)v42 = fnstsw((unsigned short)v28);
                            fabs();
                            if(((unsigned char)(v19 >>> 8) & 0x2)) {
                                fchs();
                            }
                            char v36 = v0 + 3;
                            v6[v36] = v6[v0 - 2];
                            v6[v36] -= v6[v36 + 3];
                            v6[v40] = fucom(v6[v36], v6[v36]);
                            (unsigned short)v42 = fnstsw(v19);
                            if(!((v11 >>> 14) & 0x1)) {
                                v6[v36 + 3] = v6[v36];
                                ++v36;
                            loc_8054154:
                                fldz();
                            }
                            else if(!((v11 >>> 10) & 0x1)) {
                                v6[v40] = fucomp(v6[v36], v6[v36]);
                                (unsigned short)v42 = fnstsw(v11);
                                if(!((v11 >>> 10) & 0x1) && ((v11 >>> 14) & 0x1)) {
                                    goto loc_8054154;
                                }
                                else {
                                    fld1();
                                }
                            }
                            else {
                                v6[v36 + 3] = v6[v36];
                                ++v36;
                                goto loc_8054154;
                            }
                            fxam();
                            (unsigned short)v42 = fnstsw(v11);
                            fabs();
                            if(((unsigned char)(v25 >>> 8) & 0x2)) {
                                fchs();
                            }
                            v6[v36] = v6[v36 + 3];
                            v6[v36] *= v6[v36 - 4];
                            v6[v36 - 1] = v6[v36 + 1];
                            v6[v36 - 1] *= v6[v36 + 2];
                            v6[v36] += v6[v36 - 1];
                            v6[v36 - 1] = Infinity;
                            v6[v36] *= v6[v36 - 1];
                            v6[v36 - 4] *= v6[v36 - 1];
                            v6[v36 + 2] *= v6[v36];
                            v6[v40 + 1] = fsubrp(v6[v36 + 2], v6[v36 + 1]);
                            v6[v36 + 3] *= v6[v36 + 1];
                            v4 = v36 + 2;
                            *result = v6[v4];
                            *(result + 1) = v6[v4 + 1];
                            return result;
                        }
                    }
                }
            loc_8053FA3:
                v6[v40] = fucom(v6[v0], v6[v0]);
                (unsigned short)v42 = fnstsw((unsigned short)v28);
                v6[v40] = fucomp(v6[v0], v6[v0]);
                (unsigned short)v42 = fnstsw(v20);
                int v37 = (unsigned int)((v37 >>> 10) & 0x1 ? 1: 0) | ((unsigned int)((v37 >>> 8) & 0xffffff) << 8);
                v33 = (unsigned char)v37 & ((v20 >>> 10) & 0x1 ? 0: 1);
                if(!v33) {
                    __int128 v38 = v6[v0 + 4];
                    --v0;
                    v6[v0] = v38;
                    v6[v0] -= v6[v0 + 5];
                    v6[v40] = fucom(v6[v0], v6[v0]);
                    (unsigned short)v42 = fnstsw((unsigned short)v37);
                    if(((v12 >>> 14) & 0x1) && !((v12 >>> 10) & 0x1)) {
                        v6[v40] = fucomp(v6[v0], v6[v0]);
                        (unsigned short)v42 = fnstsw(v12);
                        if(((v37 >>> 10) & 0x1) || !((v37 >>> 14) & 0x1)) {
                            goto loc_8053FE6;
                        }
                        else {
                            v6[v0 - 3] = v6[v0 + 1];
                            v6[v0 - 4] = v6[v0 + 2];
                            v4 = v0 - 4;
                        }
                    }
                    else {
                        v6[v0 - 2] = v6[v0 + 2];
                        v6[v0 - 3] = v6[v0 + 3];
                        v4 = v0 - 3;
                    }
                }
                else {
                loc_8053FE6:
                    v6[v0 - 1] = v1;
                    v6[v40] = fucomp(v6[v0 - 1], v6[v0 - 1]);
                    (unsigned short)v42 = fnstsw((unsigned short)v37);
                    if(!((v21 >>> 14) & 0x1)) {
                        v6[v0 - 4] = v6[v0];
                        v6[v0 + 3] = v6[v0 + 1];
                        v4 = v0 + 3;
                    }
                    else if(!((v21 >>> 10) & 0x1)) {
                        v6[v0 - 2] = v6[v0 - 1];
                        v6[v0 - 2] -= v6[v0 - 1];
                        v6[v40] = fucomp(v6[v0 - 2], v6[v0 - 2]);
                        (unsigned short)v42 = fnstsw(v21);
                        if(!((v13 >>> 14) & 0x1)) {
                            v6[v0 + 3] = v6[v0 - 1];
                            v6[v0 + 2] = v6[v0];
                            v4 = v0 + 2;
                        }
                        else if(!((v13 >>> 10) & 0x1)) {
                            v6[v0] = v6[v0 - 2];
                            if(!v33) {
                                fldz();
                            }
                            else {
                                fld1();
                            }
                            fxam();
                            (unsigned short)v42 = fnstsw(v13);
                            fabs();
                            if(((unsigned char)(v22 >>> 8) & 0x2)) {
                                fchs();
                            }
                            char v39 = v0;
                            v6[v39] = v6[v0 + 3];
                            v6[v39] -= v6[v39 + 3];
                            v6[v40] = fucom(v6[v39], v6[v39]);
                            (unsigned short)v42 = fnstsw(v22);
                            if(!((v14 >>> 14) & 0x1)) {
                                v6[v39 + 3] = v6[v39];
                                ++v39;
                            loc_805412A:
                                fldz();
                            }
                            else if(!((v14 >>> 10) & 0x1)) {
                                v6[v40] = fucomp(v6[v39], v6[v39]);
                                (unsigned short)v42 = fnstsw(v14);
                                if(!((v14 >>> 10) & 0x1) && ((v14 >>> 14) & 0x1)) {
                                    goto loc_805412A;
                                }
                                else {
                                    fld1();
                                }
                            }
                            else {
                                v6[v39 + 3] = v6[v39];
                                ++v39;
                                goto loc_805412A;
                            }
                            fxam();
                            (unsigned short)v42 = fnstsw(v14);
                            fabs();
                            if(((unsigned char)(v15 >>> 8) & 0x2)) {
                                fchs();
                            }
                            v6[v39] = v6[v39 - 4];
                            v6[v39] *= v6[v39 + 3];
                            v6[v39 - 1] = v6[v39 + 2];
                            v6[v39 - 1] *= v6[v39 + 1];
                            v6[v39] += v6[v39 - 1];
                            fldz();
                            v6[v39 + 1] *= v6[v39];
                            v6[v39 + 3] *= v6[v39];
                            v6[v39 + 2] *= v6[v39 + 1];
                            v6[v39 + 3] -= v6[v39 + 2];
                            v6[v39 - 4] *= v6[v39 + 3];
                            v4 = v39 - 4;
                        }
                        else {
                            v6[v0 + 3] = v6[v0 - 1];
                            v6[v0 + 2] = v6[v0];
                            v4 = v0 + 2;
                        }
                    }
                    else {
                        v6[v0 - 4] = v6[v0];
                        v6[v0 + 3] = v6[v0 + 1];
                        v4 = v0 + 3;
                    }
                }
            }
            else if(!((v10 >>> 10) & 0x1)) {
                v6[v40 + 4] = fucom(v6[v5 + 4], v6[v5]);
                (unsigned short)v42 = fnstsw(v10);
                v6[v5 + 4] = v6[v5];
                v3 = v5 + 1;
                if(!((v10 >>> 14) & 0x1)) {
                    goto loc_8053E47;
                }
                else if((v10 >>> 10) & 0x1) {
                    goto loc_8053E47;
                }
                else {
                    v6[v40] = fucom(v6[v3], v6[v3]);
                    (unsigned short)v42 = fnstsw(v10);
                    if(!((v28 >>> 10) & 0x1) && ((v28 >>> 14) & 0x1)) {
                        v6[v3 + 5] = v6[v3];
                        v6[v3 + 3] = v6[v3 + 2];
                        v2 = v3 + 3;
                    }
                    else {
                        v6[v40] = fucom(v6[v3], v6[v3]);
                        (unsigned short)v42 = fnstsw((unsigned short)v28);
                        if(!((v28 >>> 14) & 0x1) || ((v28 >>> 10) & 0x1)) {
                            v6[v3 - 1] = v6[v3 + 4];
                            v6[v3 - 1] -= v6[v3 - 4];
                            v1 = v6[v3 - 1];
                            v0 = v3 - 1;
                            v6[v0] = v6[v3 + 2];
                            v6[v0] -= v6[v0 + 3];
                            goto loc_8053FA3;
                        }
                        else {
                            v6[v3 + 3] = v6[v3];
                            v6[v3 - 3] = v6[v3 + 2];
                            v2 = v3 + 3;
                        }
                    }
                    fxam();
                    (unsigned short)v42 = fnstsw((unsigned short)v28);
                    v6[v2] = !((unsigned char)(v7 >>> 8) & 0x2) ? Infinity: -Infinity;
                    v6[v2 - 1] = !((unsigned char)(v7 >>> 8) & 0x2) ? Infinity: -Infinity;
                    v6[v2 + 2] *= v6[v2 - 1];
                    v6[v2 + 1] *= v6[v2];
                    v4 = v2 + 1;
                }
            }
            else {
                v6[v5 + 4] = v6[v5];
                v3 = v5 + 1;
                goto loc_8053E47;
            }
        }
        else {
            v6[v5 + 5] = v6[v5];
            v6[v5 - 4] = v6[v5 + 1];
            v4 = v5 - 4;
        }
    }
    *result = v6[v4];
    *(result + 1) = v6[v4 + 1];
    return result;
}

int __divsc3(int param0, int param1, float param2, float param3) {
    char v0;
    float v1;
    char v2;
    char v3;
    char v4;
    char v5;
    __SyntheticTypeUnknown v6;
    int v7;
    short v8;
    short v9;
    short v10;
    short v11;
    short v12;
    short v13;
    short v14;
    __int128 v15;
    short v16;
    short v17;
    short v18;
    short v19;
    short v20;
    short v21;
    short v22;
    __int128 v23;
    int v24;
    int v25;
    int v26;
    fabs();
    fabs();
    fucompp();
    v22 = fnstsw(v22);
    if(!((v8 >>> 8) & 0x1) && !((v8 >>> 14) & 0x1)) {
        __SyntheticTypeUnknownF v27 = param2 / param3;
        __SyntheticTypeUnknownF v28 = param2 * v27 + param3;
        v5 = 7;
        v6[v38 + 1] = fdivrp(v28, (param2 * v27 + param3) / v28 - param2);
    }
    else {
        __SyntheticTypeUnknownF v29 = param3 / param2;
        v5 = 6;
        v6[v38 + 1] = fsubrp((param3 * v29 + param2) / (param3 * v29 + param2) * param2, param3);
        v6[v38 + 1] = fdivrp(v23, v15);
    }
    v6[v38] = fucom(v6[v5], v6[v5]);
    short v39 = fnstsw(v8);
    if(!((v9 >>> 10) & 0x1) && ((v9 >>> 14) & 0x1)) {
        v6[v5 + 4] = v6[v5];
        v6[v5 - 3] = v6[v5 + 1];
        v4 = v5 - 4;
    }
    else {
        v6[v38] = fucom(v6[v5], v6[v5]);
        (unsigned short)v40 = fnstsw(v9);
        if(((v16 >>> 10) & 0x1) || !((v16 >>> 14) & 0x1)) {
            fldz();
            v6[v38 + 4] = fucom(v6[v5 + 4], v6[v5]);
            (unsigned short)v40 = fnstsw(v16);
            if(!((v10 >>> 14) & 0x1)) {
                v6[v5 + 4] = v6[v5];
                v3 = v5 + 1;
            loc_80539D7:
                char v30 = v3 - 1;
                v6[v30] = v6[v3 + 5];
                v6[v30] -= v6[v30 + 6];
                v1 = v6[v30];
                v6[v38] = fucom(v6[v30], v6[v30]);
                (unsigned short)v40 = fnstsw(v10);
                v6[v38] = fucomp(v6[v30], v6[v30]);
                (unsigned short)v40 = fnstsw(v17);
                v26 = (unsigned int)((v26 >>> 10) & 0x1 ? 1: 0) | ((unsigned int)((v26 >>> 8) & 0xffffff) << 8);
                char v31 = (unsigned char)v26 & ((v17 >>> 10) & 0x1 ? 0: 1);
                if(!v31) {
                    __int128 v32 = v6[v30 + 4];
                    --v30;
                    v6[v30] = v32;
                    v6[v30] -= v6[v30 + 5];
                    v6[v38] = fucom(v6[v30], v6[v30]);
                    (unsigned short)v40 = fnstsw((unsigned short)v26);
                    if(((v26 >>> 14) & 0x1) && !((v26 >>> 10) & 0x1)) {
                        v6[v38] = fucomp(v6[v30], v6[v30]);
                        (unsigned short)v40 = fnstsw((unsigned short)v26);
                        if(((v26 >>> 10) & 0x1) || !((v26 >>> 14) & 0x1)) {
                            goto loc_8053A1E;
                        }
                    }
                    else {
                        v6[v30 + 5] = v6[v30];
                        ++v30;
                    }
                    v0 = v30 - 1;
                    v6[v0] = v6[v30 + 3];
                    v6[v0] -= v6[v0 + 4];
                }
                else {
                loc_8053A1E:
                    v0 = v30 - 1;
                    v6[v0] = v6[v30 + 2];
                    v6[v0] -= v6[v0 + 3];
                    v6[v38] = fucom(v6[v0], v6[v0]);
                    (unsigned short)v40 = fnstsw((unsigned short)v26);
                    if(((v26 >>> 14) & 0x1) && !((v26 >>> 10) & 0x1)) {
                        __int128 v33 = v6[v0 + 4];
                        --v0;
                        v6[v0] = v33;
                        v6[v0] -= v6[v0 + 5];
                        v6[v38] = fucomp(v6[v0], v6[v0]);
                        (unsigned short)v40 = fnstsw((unsigned short)v26);
                        if(((v26 >>> 14) & 0x1) && !((v26 >>> 10) & 0x1)) {
                            if(!v31) {
                                fldz();
                            }
                            else {
                                fld1();
                            }
                            fxam();
                            (unsigned short)v40 = fnstsw((unsigned short)v26);
                            fabs();
                            if(((unsigned char)(v18 >>> 8) & 0x2)) {
                                fchs();
                            }
                            char v34 = v0 + 3;
                            v6[v34] = v6[v0 - 2];
                            v6[v34] -= v6[v34 + 3];
                            v6[v38] = fucom(v6[v34], v6[v34]);
                            (unsigned short)v40 = fnstsw(v18);
                            if(!((v11 >>> 14) & 0x1)) {
                                v6[v34 + 3] = v6[v34];
                                ++v34;
                            loc_8053CE4:
                                fldz();
                            }
                            else if(!((v11 >>> 10) & 0x1)) {
                                v6[v38] = fucomp(v6[v34], v6[v34]);
                                (unsigned short)v40 = fnstsw(v11);
                                if(!((v11 >>> 10) & 0x1) && ((v11 >>> 14) & 0x1)) {
                                    goto loc_8053CE4;
                                }
                                else {
                                    fld1();
                                }
                            }
                            else {
                                v6[v34 + 3] = v6[v34];
                                ++v34;
                                goto loc_8053CE4;
                            }
                            fxam();
                            (unsigned short)v40 = fnstsw(v11);
                            fabs();
                            if(((unsigned char)(v25 >>> 8) & 0x2)) {
                                fchs();
                            }
                            v6[v34] = v6[v34 + 3];
                            v6[v34] *= v6[v34 - 4];
                            v6[v34 - 1] = v6[v34 + 1];
                            v6[v34 - 1] *= v6[v34 + 2];
                            v6[v34] += v6[v34 - 1];
                            v6[v34 - 1] = Infinity;
                            v6[v34] *= v6[v34 - 1];
                            v6[v34 - 4] *= v6[v34 - 1];
                            v6[v34 + 2] *= v6[v34];
                            v6[v38 + 1] = fsubrp(v6[v34 + 2], v6[v34 + 1]);
                            v6[v34 + 3] *= v6[v34 + 1];
                            v4 = v34 + 2;
                            return v6[v4];
                        }
                    }
                }
            loc_8053B33:
                v6[v38] = fucom(v6[v0], v6[v0]);
                (unsigned short)v40 = fnstsw((unsigned short)v26);
                v6[v38] = fucomp(v6[v0], v6[v0]);
                (unsigned short)v40 = fnstsw(v19);
                int v35 = (unsigned int)((v35 >>> 10) & 0x1 ? 1: 0) | ((unsigned int)((v35 >>> 8) & 0xffffff) << 8);
                v31 = (unsigned char)v35 & ((v19 >>> 10) & 0x1 ? 0: 1);
                if(!v31) {
                    __int128 v36 = v6[v0 + 4];
                    --v0;
                    v6[v0] = v36;
                    v6[v0] -= v6[v0 + 5];
                    v6[v38] = fucom(v6[v0], v6[v0]);
                    (unsigned short)v40 = fnstsw((unsigned short)v35);
                    if(((v12 >>> 14) & 0x1) && !((v12 >>> 10) & 0x1)) {
                        v6[v38] = fucomp(v6[v0], v6[v0]);
                        (unsigned short)v40 = fnstsw(v12);
                        if(((v35 >>> 10) & 0x1) || !((v35 >>> 14) & 0x1)) {
                            goto loc_8053B76;
                        }
                        else {
                            v6[v0 - 3] = v6[v0 + 1];
                            v6[v0 - 4] = v6[v0 + 2];
                            v4 = v0 - 4;
                        }
                    }
                    else {
                        v6[v0 - 2] = v6[v0 + 2];
                        v6[v0 - 3] = v6[v0 + 3];
                        v4 = v0 - 3;
                    }
                }
                else {
                loc_8053B76:
                    v6[v0 - 1] = v1;
                    v6[v38] = fucomp(v6[v0 - 1], v6[v0 - 1]);
                    (unsigned short)v40 = fnstsw((unsigned short)v35);
                    if(!((v20 >>> 14) & 0x1)) {
                        v6[v0 - 4] = v6[v0];
                        v6[v0 + 3] = v6[v0 + 1];
                        v4 = v0 + 3;
                    }
                    else if(!((v20 >>> 10) & 0x1)) {
                        v6[v0 - 2] = v6[v0 - 1];
                        v6[v0 - 2] -= v6[v0 - 1];
                        v6[v38] = fucomp(v6[v0 - 2], v6[v0 - 2]);
                        (unsigned short)v40 = fnstsw(v20);
                        if(!((v13 >>> 14) & 0x1)) {
                            v6[v0 + 3] = v6[v0 - 1];
                            v6[v0 + 2] = v6[v0];
                            v4 = v0 + 2;
                        }
                        else if(!((v13 >>> 10) & 0x1)) {
                            v6[v0] = v6[v0 - 2];
                            if(!v31) {
                                fldz();
                            }
                            else {
                                fld1();
                            }
                            fxam();
                            (unsigned short)v40 = fnstsw(v13);
                            fabs();
                            if(((unsigned char)(v21 >>> 8) & 0x2)) {
                                fchs();
                            }
                            char v37 = v0;
                            v6[v37] = v6[v0 + 3];
                            v6[v37] -= v6[v37 + 3];
                            v6[v38] = fucom(v6[v37], v6[v37]);
                            (unsigned short)v40 = fnstsw(v21);
                            if(!((v14 >>> 14) & 0x1)) {
                                v6[v37 + 3] = v6[v37];
                                ++v37;
                            loc_8053CBA:
                                fldz();
                            }
                            else if(!((v14 >>> 10) & 0x1)) {
                                v6[v38] = fucomp(v6[v37], v6[v37]);
                                (unsigned short)v40 = fnstsw(v14);
                                if(!((v14 >>> 10) & 0x1) && ((v14 >>> 14) & 0x1)) {
                                    goto loc_8053CBA;
                                }
                                else {
                                    fld1();
                                }
                            }
                            else {
                                v6[v37 + 3] = v6[v37];
                                ++v37;
                                goto loc_8053CBA;
                            }
                            fxam();
                            (unsigned short)v40 = fnstsw(v14);
                            fabs();
                            if(((unsigned char)(v7 >>> 8) & 0x2)) {
                                fchs();
                            }
                            v6[v37] = v6[v37 - 4];
                            v6[v37] *= v6[v37 + 3];
                            v6[v37 - 1] = v6[v37 + 2];
                            v6[v37 - 1] *= v6[v37 + 1];
                            v6[v37] += v6[v37 - 1];
                            fldz();
                            v6[v37 + 1] *= v6[v37];
                            v6[v37 + 3] *= v6[v37];
                            v6[v37 + 2] *= v6[v37 + 1];
                            v6[v37 + 3] -= v6[v37 + 2];
                            v6[v37 - 4] *= v6[v37 + 3];
                            v4 = v37 - 4;
                        }
                        else {
                            v6[v0 + 3] = v6[v0 - 1];
                            v6[v0 + 2] = v6[v0];
                            v4 = v0 + 2;
                        }
                    }
                    else {
                        v6[v0 - 4] = v6[v0];
                        v6[v0 + 3] = v6[v0 + 1];
                        v4 = v0 + 3;
                    }
                }
            }
            else if(!((v10 >>> 10) & 0x1)) {
                v6[v38 + 4] = fucom(v6[v5 + 4], v6[v5]);
                (unsigned short)v40 = fnstsw(v10);
                v6[v5 + 4] = v6[v5];
                v3 = v5 + 1;
                if(!((v10 >>> 14) & 0x1)) {
                    goto loc_80539D7;
                }
                else if((v10 >>> 10) & 0x1) {
                    goto loc_80539D7;
                }
                else {
                    v6[v38] = fucom(v6[v3], v6[v3]);
                    (unsigned short)v40 = fnstsw(v10);
                    if(!((v26 >>> 10) & 0x1) && ((v26 >>> 14) & 0x1)) {
                        v6[v3 + 5] = v6[v3];
                        v6[v3 + 3] = v6[v3 + 2];
                        v2 = v3 + 3;
                    }
                    else {
                        v6[v38] = fucom(v6[v3], v6[v3]);
                        (unsigned short)v40 = fnstsw((unsigned short)v26);
                        if(!((v26 >>> 14) & 0x1) || ((v26 >>> 10) & 0x1)) {
                            v6[v3 - 1] = v6[v3 + 4];
                            v6[v3 - 1] -= v6[v3 - 4];
                            v1 = v6[v3 - 1];
                            v0 = v3 - 1;
                            v6[v0] = v6[v3 + 2];
                            v6[v0] -= v6[v0 + 3];
                            goto loc_8053B33;
                        }
                        else {
                            v6[v3 + 3] = v6[v3];
                            v6[v3 - 3] = v6[v3 + 2];
                            v2 = v3 + 3;
                        }
                    }
                    fxam();
                    (unsigned short)v40 = fnstsw((unsigned short)v26);
                    v6[v2] = !((unsigned char)(v24 >>> 8) & 0x2) ? Infinity: -Infinity;
                    v6[v2 - 1] = !((unsigned char)(v24 >>> 8) & 0x2) ? Infinity: -Infinity;
                    v6[v2 + 2] *= v6[v2 - 1];
                    v6[v2 + 1] *= v6[v2];
                    v4 = v2 + 1;
                }
            }
            else {
                v6[v5 + 4] = v6[v5];
                v3 = v5 + 1;
                goto loc_80539D7;
            }
        }
        else {
            v6[v5 + 5] = v6[v5];
            v6[v5 - 4] = v6[v5 + 1];
            v4 = v5 - 4;
        }
    }
    return v6[v4];
}

void __i686.get_pc_thunk.bx() {
}

void __i686.get_pc_thunk.cx() {
}

long long* __muldc3(long long* param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    double v5;
    char v6;
    int v7;
    char v8;
    char v9;
    __SyntheticTypeUnknown v10;
    short v11;
    short v12;
    short v13;
    short v14;
    short v15;
    short v16;
    short v17;
    short v18;
    short v19;
    short v20;
    __SyntheticTypeUnknownF v21;
    __int128 v22;
    double v23;
    double v24;
    short v25;
    short v26;
    short v27;
    short v28;
    short v29;
    short v30;
    short v31;
    short v32;
    short v33;
    short v34;
    int v35;
    __int128 v36;
    double v37;
    double v38;
    int v39;
    long long* result = param0;
    double v40 = v23 * v24;
    double v41 = v37 * v38;
    double v42 = v23 * v38;
    double v43 = v37 * v24;
    v10[v53] = fsubr(v41, v40);
    __SyntheticTypeUnknownF v44 = v42 + v43;
    v10[v53] = fucom(v44, v44);
    v34 = fnstsw(v34);
    if(!((v11 >>> 10) & 0x1) && ((v11 >>> 14) & 0x1)) {
        v9 = 6;
    }
    else {
        v10[v53] = fucom(v22, v22);
        (unsigned short)v52 = fnstsw(v11);
        if(((v16 >>> 10) & 0x1) || !((v16 >>> 14) & 0x1)) {
            char v45 = 0;
            v10[v53] = fucom(v21 - v21, v21 - v21);
            (unsigned short)v52 = fnstsw(v16);
            if(!((v25 >>> 14) & 0x1)) {
                v45 = 1;
            loc_805370A:
                v8 = v45 - 1;
                v10[v8] = v10[v45 + 6];
                v10[v8] -= v10[v8 + 7];
                v10[v53] = fucom(v10[v8], v10[v8]);
                (unsigned short)v52 = fnstsw(v25);
                if(!((v31 >>> 14) & 0x1)) {
                    v10[v8 + 7] = v10[v8];
                    ++v8;
                    v7 = 0;
                    goto loc_805339A;
                }
                else if((v31 >>> 10) & 0x1) {
                    v10[v8 + 7] = v10[v8];
                    ++v8;
                    v7 = 0;
                    goto loc_805339A;
                }
                else {
                    v10[v53] = fucomp(v10[v8], v10[v8]);
                    (unsigned short)v52 = fnstsw(v31);
                    if(((v31 >>> 14) & 0x1) && !((v31 >>> 10) & 0x1)) {
                        v7 = 0;
                        goto loc_805339A;
                    }
                    else {
                        fxam();
                        (unsigned short)v52 = fnstsw(v31);
                        v6 = v8 + 1;
                        fldz();
                        if(((unsigned char)(v12 >>> 8) & 0x2)) {
                            ++v6;
                            fldz();
                            fchs();
                        }
                    loc_8053756:
                        fld1();
                        v5 = v10[v6];
                        v4 = v6 + 1;
                    loc_8053341:
                        fxam();
                        (unsigned short)v52 = fnstsw(v12);
                        v8 = v4;
                        v10[v8] = v5;
                        fabs();
                        if(((unsigned char)(v17 >>> 8) & 0x2)) {
                            fchs();
                        }
                        v10[v53] = fucom(v10[v8], v10[v8]);
                        (unsigned short)v52 = fnstsw(v17);
                        if(((v26 >>> 10) & 0x1) || !((v26 >>> 14) & 0x1)) {
                            fxam();
                            (unsigned short)v52 = fnstsw(v26);
                            ++v8;
                            fldz();
                            if(((unsigned char)(v26 >>> 8) & 0x2)) {
                                ++v8;
                                fldz();
                                fchs();
                            }
                        }
                        v10[v53] = fucom(v10[v8], v10[v8]);
                        (unsigned short)v52 = fnstsw(v26);
                        v7 = 1;
                    }
                }
                if(((v31 >>> 10) & 0x1) || !((v31 >>> 14) & 0x1)) {
                    fxam();
                    (unsigned short)v52 = fnstsw(v31);
                    ++v8;
                    fldz();
                    if(((unsigned char)(v31 >>> 8) & 0x2)) {
                        ++v8;
                        fldz();
                        fchs();
                    }
                    v7 = 1;
                }
            }
            else if(!((v25 >>> 10) & 0x1)) {
                v10[v53] = fucomp(v36, v36);
                (unsigned short)v52 = fnstsw(v25);
                if(((v25 >>> 14) & 0x1) && !((v25 >>> 10) & 0x1)) {
                    goto loc_805370A;
                }
                else {
                    fxam();
                    (unsigned short)v52 = fnstsw(v25);
                    char v46 = 1;
                    fld1();
                    if(((unsigned char)(v30 >>> 8) & 0x2)) {
                        v46 = 2;
                        fld1();
                        fchs();
                    }
                    v6 = v46 - 1;
                    v10[v6] = v10[v46 + 5];
                    v10[v6] -= v10[v6 + 6];
                    v10[v53] = fucom(v10[v6], v10[v6]);
                    (unsigned short)v52 = fnstsw(v30);
                    if(((v12 >>> 14) & 0x1) && !((v12 >>> 10) & 0x1)) {
                        v10[v53] = fucomp(v10[v6], v10[v6]);
                        (unsigned short)v52 = fnstsw(v12);
                        if(!((v12 >>> 14) & 0x1) || ((v12 >>> 10) & 0x1)) {
                            goto loc_8053756;
                        }
                    }
                    else {
                        v10[v6 + 6] = v10[v6];
                        ++v6;
                    }
                    fldz();
                    v5 = v10[v6];
                    v4 = v6 + 1;
                    goto loc_8053341;
                }
            }
            else {
                v45 = 1;
                goto loc_805370A;
            }
        loc_805339A:
            char v47 = v8 - 1;
            v10[v47] = v10[v8 + 6];
            v10[v47] -= v10[v47 + 7];
            v10[v53] = fucom(v10[v47], v10[v47]);
            (unsigned short)v52 = fnstsw(v31);
            if(((v13 >>> 14) & 0x1)) {
                if((v13 >>> 10) & 0x1) {
                    v10[v47 + 7] = v10[v47];
                    ++v47;
                    goto loc_80534CC;
                }
                else {
                    v10[v53] = fucomp(v10[v47], v10[v47]);
                    (unsigned short)v52 = fnstsw(v13);
                    if(((v13 >>> 10) & 0x1)) {
                        v10[v47 + 3] = v10[v47];
                        v10[v47 - 4] = v10[v47 + 1];
                        v3 = v47 + 3;
                    }
                    else if((v13 >>> 14) & 0x1) {
                        goto loc_80534CC;
                    }
                    else {
                        v10[v47 + 3] = v10[v47];
                        v10[v47 - 4] = v10[v47 + 1];
                        v3 = v47 + 3;
                    }
                    v2 = v3 - 1;
                    v10[v2] = v10[v3 + 2];
                    v10[v2] -= v10[v2 + 3];
                    v10[v53] = fucomp(v10[v2], v10[v2]);
                    (unsigned short)v52 = fnstsw(v13);
                }
                if(((v18 >>> 10) & 0x1) || !((v18 >>> 14) & 0x1)) {
                    v10[v53] = fucom(v10[v2], v10[v2]);
                    (unsigned short)v52 = fnstsw(v18);
                    if(!((v18 >>> 14) & 0x1) || ((v18 >>> 10) & 0x1)) {
                        fldz();
                        fld1();
                    }
                    else {
                        fld1();
                        __int128 v48 = v10[v2];
                        --v2;
                    }
                }
                else {
                    fldz();
                    fld1();
                }
                goto loc_8053404;
            }
            else {
                v10[v47 + 7] = v10[v47];
                ++v47;
            loc_80534CC:
                char v49 = v47 - 1;
                v10[v49] = v10[v47 + 6];
                v10[v49] -= v10[v49 + 7];
                v10[v53] = fucom(v10[v49], v10[v49]);
                (unsigned short)v52 = fnstsw(v13);
                if(((v18 >>> 14) & 0x1) && !((v18 >>> 10) & 0x1)) {
                    v10[v53] = fucomp(v10[v49], v10[v49]);
                    (unsigned short)v52 = fnstsw(v18);
                    if(((v18 >>> 10) & 0x1)) {
                        v10[v49 + 3] = v10[v49];
                        v10[v49 - 4] = v10[v49 + 1];
                        v10[v49 - 3] = v10[v49 + 2];
                        v2 = v49 + 3;
                    }
                    else if((v18 >>> 14) & 0x1) {
                        goto loc_805353E;
                    }
                    else {
                        v10[v49 + 3] = v10[v49];
                        v10[v49 - 4] = v10[v49 + 1];
                        v10[v49 - 3] = v10[v49 + 2];
                        v2 = v49 + 3;
                    }
                    fld1();
                    fldz();
                loc_8053404:
                    v10[v53] = fucom(v10[v2], v10[v2]);
                    (unsigned short)v52 = fnstsw(v18);
                    if(((v27 >>> 10) & 0x1) || !((v27 >>> 14) & 0x1)) {
                        fxam();
                        (unsigned short)v52 = fnstsw(v27);
                        ++v2;
                        fldz();
                        if(((unsigned char)(v27 >>> 8) & 0x2)) {
                            ++v2;
                            fldz();
                            fchs();
                        }
                    }
                    v10[v53] = fucom(v10[v2], v10[v2]);
                    (unsigned short)v52 = fnstsw(v27);
                    if(((v32 >>> 10) & 0x1) || !((v32 >>> 14) & 0x1)) {
                        fxam();
                        (unsigned short)v52 = fnstsw(v32);
                        ++v2;
                        fldz();
                        if(((unsigned char)(v32 >>> 8) & 0x2)) {
                            ++v2;
                            fldz();
                            fchs();
                        }
                    }
                    fxam();
                    (unsigned short)v52 = fnstsw(v32);
                    fabs();
                    if(((unsigned char)(v14 >>> 8) & 0x2)) {
                        fchs();
                    }
                    fxam();
                    (unsigned short)v52 = fnstsw(v14);
                    v1 = v2 + 2;
                    fabs();
                    if((unsigned char)(v39 >>> 8) & 0x2) {
                        fchs();
                    }
                    goto loc_8053478;
                }
                else {
                    v10[v49 + 7] = v10[v49];
                    ++v49;
                }
            loc_805353E:
                if(!(unsigned char)v7) {
                    char v50 = v49 - 1;
                    v10[v50] = v10[v49 + 6];
                    v10[v50] -= v10[v50 + 7];
                    v10[v53] = fucomp(v10[v50], v10[v50]);
                    (unsigned short)v52 = fnstsw(v18);
                    if(((v19 >>> 14) & 0x1) && !((v19 >>> 10) & 0x1)) {
                        v10[v53] = fucomp(v10[v50], v10[v50]);
                        (unsigned short)v52 = fnstsw(v19);
                        if(((v19 >>> 14) & 0x1) && !((v19 >>> 10) & 0x1)) {
                            goto loc_8053594;
                        }
                        else {
                            v10[v50 + 4] = v10[v50];
                            v10[v50 + 3] = v10[v50 + 1];
                            v1 = v50 + 2;
                            goto loc_805365C;
                        }
                    }
                    else {
                        v10[v50 + 6] = v10[v50];
                        ++v50;
                    loc_8053594:
                        v10[v50 - 1] = v41;
                        v10[v50 - 1] -= v10[v50 - 1];
                        char v51 = v50 - 2;
                        v10[v51] = v41;
                        v10[v53] = fucomp(v10[v51], v10[v51]);
                        (unsigned short)v52 = fnstsw(v19);
                        if(((v19 >>> 14) & 0x1) && !((v19 >>> 10) & 0x1)) {
                            v10[v53] = fucomp(v10[v51], v10[v51]);
                            (unsigned short)v52 = fnstsw(v19);
                            if(!((v19 >>> 14) & 0x1)) {
                                v10[v51 + 5] = v10[v51];
                                v10[v51 - 4] = v10[v51 + 1];
                                v1 = v51 + 2;
                                goto loc_805365C;
                            }
                            else if(((v19 >>> 10) & 0x1)) {
                                v10[v51 + 5] = v10[v51];
                                v10[v51 - 4] = v10[v51 + 1];
                                v1 = v51 + 2;
                                goto loc_805365C;
                            }
                        }
                        else {
                            ++v51;
                        }
                        v10[v51 - 1] = v42;
                        v10[v51 - 1] -= v10[v51 - 1];
                        v0 = v51 - 2;
                        v10[v0] = v42;
                        v10[v53] = fucomp(v10[v0], v10[v0]);
                        (unsigned short)v52 = fnstsw(v19);
                        if(((v19 >>> 14) & 0x1) && !((v19 >>> 10) & 0x1)) {
                            v10[v53] = fucomp(v10[v0], v10[v0]);
                            (unsigned short)v52 = fnstsw(v19);
                            if(!((v19 >>> 14) & 0x1)) {
                                v10[v0 + 5] = v10[v0];
                                v10[v0 - 4] = v10[v0 + 1];
                                v1 = v0 + 2;
                                goto loc_805365C;
                            }
                            else if(((v19 >>> 10) & 0x1)) {
                                v10[v0 + 5] = v10[v0];
                                v10[v0 - 4] = v10[v0 + 1];
                                v1 = v0 + 2;
                                goto loc_805365C;
                            }
                        }
                        else {
                            ++v0;
                        }
                        v10[v0 - 1] = v43;
                        v10[v0 - 1] -= v10[v0 - 1];
                        v10[v0 - 2] = v43;
                        v10[v53] = fucomp(v10[v0 - 2], v10[v0 - 2]);
                        (unsigned short)v52 = fnstsw(v19);
                    }
                    if(((v28 >>> 14) & 0x1) && !((v28 >>> 10) & 0x1)) {
                        v10[v53] = fucomp(v10[v0 - 2], v10[v0 - 2]);
                        (unsigned short)v52 = fnstsw(v28);
                        if(((v19 >>> 10) & 0x1)) {
                            v10[v0 + 3] = v10[v0 - 2];
                            v10[v0 + 2] = v10[v0 - 1];
                            v1 = v0;
                        loc_805365C:
                            v10[v53] = fucom(v10[v1], v10[v1]);
                            (unsigned short)v52 = fnstsw(v19);
                            if(((v33 >>> 10) & 0x1) || !((v33 >>> 14) & 0x1)) {
                                fxam();
                                (unsigned short)v52 = fnstsw(v33);
                                ++v1;
                                fldz();
                                if(((unsigned char)(v33 >>> 8) & 0x2)) {
                                    ++v1;
                                    fldz();
                                    fchs();
                                }
                            }
                            v10[v53] = fucom(v10[v1], v10[v1]);
                            (unsigned short)v52 = fnstsw(v33);
                            if(((v15 >>> 10) & 0x1) || !((v15 >>> 14) & 0x1)) {
                                fxam();
                                (unsigned short)v52 = fnstsw(v15);
                                ++v1;
                                fldz();
                                if(((unsigned char)(v15 >>> 8) & 0x2)) {
                                    ++v1;
                                    fldz();
                                    fchs();
                                }
                            }
                            v10[v53] = fucom(v10[v1], v10[v1]);
                            (unsigned short)v52 = fnstsw(v15);
                            if(((v20 >>> 10) & 0x1) || !((v20 >>> 14) & 0x1)) {
                                fxam();
                                (unsigned short)v52 = fnstsw(v20);
                                ++v1;
                                fldz();
                                if(((unsigned char)(v20 >>> 8) & 0x2)) {
                                    ++v1;
                                    fldz();
                                    fchs();
                                }
                            }
                            v10[v53] = fucom(v10[v1], v10[v1]);
                            (unsigned short)v52 = fnstsw(v20);
                            if(((v29 >>> 10) & 0x1) || !((v29 >>> 14) & 0x1)) {
                                fxam();
                                (unsigned short)v52 = fnstsw(v29);
                                ++v1;
                                fldz();
                                if(((unsigned char)(v35 >>> 8) & 0x2)) {
                                    ++v1;
                                    fldz();
                                    fchs();
                                }
                            }
                            goto loc_8053478;
                        }
                        else if(!((v19 >>> 14) & 0x1)) {
                            v10[v0 + 3] = v10[v0 - 2];
                            v10[v0 + 2] = v10[v0 - 1];
                            v1 = v0;
                            goto loc_805365C;
                        }
                        else {
                            v9 = v0 + 2;
                        }
                    }
                    else {
                        v9 = v0 + 3;
                    }
                }
                else {
                    v10[v49 + 6] = v10[v49];
                    v10[v49 - 4] = v10[v49 + 1];
                    v10[v49 - 3] = v10[v49 + 2];
                    v1 = v49 + 3;
                loc_8053478:
                    v10[v1 - 1] = v10[v1 + 3];
                    v10[v1 - 1] *= v10[v1 + 1];
                    v10[v1 - 2] = v10[v1 + 2];
                    v10[v1 - 2] *= v10[v1];
                    v10[v1 - 1] -= v10[v1 - 2];
                    v10[v1 - 2] = Infinity;
                    v10[v1 - 1] *= v10[v1 - 2];
                    v10[v1] *= v10[v1 - 2];
                    v10[v1 + 1] *= v10[v1 - 1];
                    v10[v1 + 1] += v10[v1];
                    v10[v1 + 3] *= v10[v1 + 1];
                    v9 = v1 + 2;
                }
            }
        }
        else {
            v9 = 6;
        }
    }
    *result = v10[v9];
    *(result + 1) = v10[v9 + 1];
    return result;
}

int __mulsc3(float param0, float param1, float param2, float param3) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    float v5;
    char v6;
    int v7;
    char v8;
    char v9;
    __SyntheticTypeUnknown v10;
    short v11;
    short v12;
    short v13;
    short v14;
    short v15;
    short v16;
    short v17;
    short v18;
    short v19;
    short v20;
    __int128 v21;
    short v22;
    short v23;
    short v24;
    short v25;
    short v26;
    int v27;
    __SyntheticTypeUnknownF v28;
    short v29;
    short v30;
    short v31;
    short v32;
    short v33;
    int v34;
    float v35 = param0 * param2;
    float v36 = param1 * param3;
    float v37 = param0 * param3;
    float v38 = param1 * param2;
    __int128 v39 = v35 - v36;
    float v40 = v38 + v37;
    v10[v48] = fucom(v39, v39);
    v33 = fnstsw(v33);
    if(!((v11 >>> 10) & 0x1) && ((v11 >>> 14) & 0x1)) {
        v9 = 7;
    }
    else {
        v10[v48] = fucomp(v40, v40);
        (unsigned short)v49 = fnstsw(v11);
        if(((v16 >>> 10) & 0x1) || !((v16 >>> 14) & 0x1)) {
            char v41 = 7;
            v10[v48] = fucom(v28 - v28, v28 - v28);
            (unsigned short)v49 = fnstsw(v16);
            if(!((v22 >>> 14) & 0x1)) {
                v41 = 0;
            loc_805305A:
                v8 = v41 - 1;
                v10[v8] = v10[v41 + 6];
                v10[v8] -= v10[v8 + 7];
                v10[v48] = fucom(v10[v8], v10[v8]);
                (unsigned short)v49 = fnstsw(v22);
                if(!((v30 >>> 14) & 0x1)) {
                    v10[v8 + 7] = v10[v8];
                    ++v8;
                    v7 = 0;
                    goto loc_8052CE2;
                }
                else if((v30 >>> 10) & 0x1) {
                    v10[v8 + 7] = v10[v8];
                    ++v8;
                    v7 = 0;
                    goto loc_8052CE2;
                }
                else {
                    v10[v48] = fucomp(v10[v8], v10[v8]);
                    (unsigned short)v49 = fnstsw(v30);
                    if(((v30 >>> 14) & 0x1) && !((v30 >>> 10) & 0x1)) {
                        v7 = 0;
                        goto loc_8052CE2;
                    }
                    else {
                        fxam();
                        (unsigned short)v49 = fnstsw(v30);
                        v6 = v8 + 1;
                        fldz();
                        if(((unsigned char)(v12 >>> 8) & 0x2)) {
                            ++v6;
                            fldz();
                            fchs();
                        }
                    loc_80530A6:
                        fld1();
                        v5 = v10[v6];
                        v4 = v6 + 1;
                    loc_8052C89:
                        fxam();
                        (unsigned short)v49 = fnstsw(v12);
                        v8 = v4;
                        v10[v8] = v5;
                        fabs();
                        if(((unsigned char)(v17 >>> 8) & 0x2)) {
                            fchs();
                        }
                        v10[v48] = fucom(v10[v8], v10[v8]);
                        (unsigned short)v49 = fnstsw(v17);
                        if(((v23 >>> 10) & 0x1) || !((v23 >>> 14) & 0x1)) {
                            fxam();
                            (unsigned short)v49 = fnstsw(v23);
                            ++v8;
                            fldz();
                            if(((unsigned char)(v23 >>> 8) & 0x2)) {
                                ++v8;
                                fldz();
                                fchs();
                            }
                        }
                        v10[v48] = fucom(v10[v8], v10[v8]);
                        (unsigned short)v49 = fnstsw(v23);
                        v7 = 1;
                    }
                }
                if(((v30 >>> 10) & 0x1) || !((v30 >>> 14) & 0x1)) {
                    fxam();
                    (unsigned short)v49 = fnstsw(v30);
                    ++v8;
                    fldz();
                    if(((unsigned char)(v30 >>> 8) & 0x2)) {
                        ++v8;
                        fldz();
                        fchs();
                    }
                    v7 = 1;
                }
            }
            else if(!((v22 >>> 10) & 0x1)) {
                v10[v48] = fucomp(v21, v21);
                (unsigned short)v49 = fnstsw(v22);
                if(((v22 >>> 14) & 0x1) && !((v22 >>> 10) & 0x1)) {
                    goto loc_805305A;
                }
                else {
                    fxam();
                    (unsigned short)v49 = fnstsw(v22);
                    char v42 = 0;
                    fld1();
                    if(((unsigned char)(v29 >>> 8) & 0x2)) {
                        v42 = 1;
                        fld1();
                        fchs();
                    }
                    v6 = v42 - 1;
                    v10[v6] = v10[v42 + 5];
                    v10[v6] -= v10[v6 + 6];
                    v10[v48] = fucom(v10[v6], v10[v6]);
                    (unsigned short)v49 = fnstsw(v29);
                    if(((v12 >>> 14) & 0x1) && !((v12 >>> 10) & 0x1)) {
                        v10[v48] = fucomp(v10[v6], v10[v6]);
                        (unsigned short)v49 = fnstsw(v12);
                        if(!((v12 >>> 14) & 0x1) || ((v12 >>> 10) & 0x1)) {
                            goto loc_80530A6;
                        }
                    }
                    else {
                        v10[v6 + 6] = v10[v6];
                        ++v6;
                    }
                    fldz();
                    v5 = v10[v6];
                    v4 = v6 + 1;
                    goto loc_8052C89;
                }
            }
            else {
                v41 = 0;
                goto loc_805305A;
            }
        loc_8052CE2:
            char v43 = v8 - 1;
            v10[v43] = v10[v8 + 6];
            v10[v43] -= v10[v43 + 7];
            v10[v48] = fucom(v10[v43], v10[v43]);
            (unsigned short)v49 = fnstsw(v30);
            if(((v13 >>> 14) & 0x1)) {
                if((v13 >>> 10) & 0x1) {
                    v10[v43 + 7] = v10[v43];
                    ++v43;
                    goto loc_8052E14;
                }
                else {
                    v10[v48] = fucomp(v10[v43], v10[v43]);
                    (unsigned short)v49 = fnstsw(v13);
                    if(((v13 >>> 10) & 0x1)) {
                        v10[v43 + 3] = v10[v43];
                        v10[v43 - 4] = v10[v43 + 1];
                        v3 = v43 + 3;
                    }
                    else if((v13 >>> 14) & 0x1) {
                        goto loc_8052E14;
                    }
                    else {
                        v10[v43 + 3] = v10[v43];
                        v10[v43 - 4] = v10[v43 + 1];
                        v3 = v43 + 3;
                    }
                    v2 = v3 - 1;
                    v10[v2] = v10[v3 + 2];
                    v10[v2] -= v10[v2 + 3];
                    v10[v48] = fucomp(v10[v2], v10[v2]);
                    (unsigned short)v49 = fnstsw(v13);
                }
                if(((v18 >>> 10) & 0x1) || !((v18 >>> 14) & 0x1)) {
                    v10[v48] = fucom(v10[v2], v10[v2]);
                    (unsigned short)v49 = fnstsw(v18);
                    if(!((v18 >>> 14) & 0x1) || ((v18 >>> 10) & 0x1)) {
                        fldz();
                        fld1();
                    }
                    else {
                        fld1();
                        __int128 v44 = v10[v2];
                        --v2;
                    }
                }
                else {
                    fldz();
                    fld1();
                }
                goto loc_8052D4C;
            }
            else {
                v10[v43 + 7] = v10[v43];
                ++v43;
            loc_8052E14:
                char v45 = v43 - 1;
                v10[v45] = v10[v43 + 6];
                v10[v45] -= v10[v45 + 7];
                v10[v48] = fucom(v10[v45], v10[v45]);
                (unsigned short)v49 = fnstsw(v13);
                if(((v18 >>> 14) & 0x1) && !((v18 >>> 10) & 0x1)) {
                    v10[v48] = fucomp(v10[v45], v10[v45]);
                    (unsigned short)v49 = fnstsw(v18);
                    if(((v18 >>> 10) & 0x1)) {
                        v10[v45 + 3] = v10[v45];
                        v10[v45 - 4] = v10[v45 + 1];
                        v10[v45 - 3] = v10[v45 + 2];
                        v2 = v45 + 3;
                    }
                    else if((v18 >>> 14) & 0x1) {
                        goto loc_8052E86;
                    }
                    else {
                        v10[v45 + 3] = v10[v45];
                        v10[v45 - 4] = v10[v45 + 1];
                        v10[v45 - 3] = v10[v45 + 2];
                        v2 = v45 + 3;
                    }
                    fld1();
                    fldz();
                loc_8052D4C:
                    v10[v48] = fucom(v10[v2], v10[v2]);
                    (unsigned short)v49 = fnstsw(v18);
                    if(((v24 >>> 10) & 0x1) || !((v24 >>> 14) & 0x1)) {
                        fxam();
                        (unsigned short)v49 = fnstsw(v24);
                        ++v2;
                        fldz();
                        if(((unsigned char)(v24 >>> 8) & 0x2)) {
                            ++v2;
                            fldz();
                            fchs();
                        }
                    }
                    v10[v48] = fucom(v10[v2], v10[v2]);
                    (unsigned short)v49 = fnstsw(v24);
                    if(((v31 >>> 10) & 0x1) || !((v31 >>> 14) & 0x1)) {
                        fxam();
                        (unsigned short)v49 = fnstsw(v31);
                        ++v2;
                        fldz();
                        if(((unsigned char)(v31 >>> 8) & 0x2)) {
                            ++v2;
                            fldz();
                            fchs();
                        }
                    }
                    fxam();
                    (unsigned short)v49 = fnstsw(v31);
                    fabs();
                    if(((unsigned char)(v14 >>> 8) & 0x2)) {
                        fchs();
                    }
                    fxam();
                    (unsigned short)v49 = fnstsw(v14);
                    v1 = v2 + 2;
                    fabs();
                    if((unsigned char)(v34 >>> 8) & 0x2) {
                        fchs();
                    }
                    goto loc_8052DC0;
                }
                else {
                    v10[v45 + 7] = v10[v45];
                    ++v45;
                }
            loc_8052E86:
                if(!(unsigned char)v7) {
                    char v46 = v45 - 1;
                    v10[v46] = v10[v45 + 6];
                    v10[v46] -= v10[v46 + 7];
                    v10[v48] = fucomp(v10[v46], v10[v46]);
                    (unsigned short)v49 = fnstsw(v18);
                    if(((v19 >>> 14) & 0x1) && !((v19 >>> 10) & 0x1)) {
                        v10[v48] = fucomp(v10[v46], v10[v46]);
                        (unsigned short)v49 = fnstsw(v19);
                        if(((v19 >>> 14) & 0x1) && !((v19 >>> 10) & 0x1)) {
                            goto loc_8052EDC;
                        }
                        else {
                            v10[v46 + 4] = v10[v46];
                            v10[v46 + 3] = v10[v46 + 1];
                            v1 = v46 + 2;
                            goto loc_8052FAC;
                        }
                    }
                    else {
                        v10[v46 + 6] = v10[v46];
                        ++v46;
                    loc_8052EDC:
                        char v47 = v46 - 1;
                        v10[v47] = v10[v46 + 5];
                        v10[v47] -= v10[v47 + 6];
                        v10[v48] = fucomp(v10[v47], v10[v47]);
                        (unsigned short)v49 = fnstsw(v19);
                        if(((v19 >>> 14) & 0x1) && !((v19 >>> 10) & 0x1)) {
                            v10[v48] = fucomp(v10[v47], v10[v47]);
                            (unsigned short)v49 = fnstsw(v19);
                            if(((v19 >>> 14) & 0x1) && !((v19 >>> 10) & 0x1)) {
                                goto loc_8052F1E;
                            }
                            else {
                                v10[v47 + 3] = v10[v47];
                                v1 = v47 + 1;
                                goto loc_8052FAC;
                            }
                        }
                        else {
                            v10[v47 + 5] = v10[v47];
                            ++v47;
                        loc_8052F1E:
                            v10[v47 - 1] = v37;
                            v10[v47 - 1] -= v10[v47 - 1];
                            v0 = v47 - 2;
                            v10[v0] = v37;
                            v10[v48] = fucomp(v10[v0], v10[v0]);
                            (unsigned short)v49 = fnstsw(v19);
                            if(((v19 >>> 14) & 0x1) && !((v19 >>> 10) & 0x1)) {
                                v10[v48] = fucomp(v10[v0], v10[v0]);
                                (unsigned short)v49 = fnstsw(v19);
                                if(!((v19 >>> 14) & 0x1)) {
                                    v10[v0 + 4] = v10[v0];
                                    v1 = v0 + 1;
                                    goto loc_8052FAC;
                                }
                                else if(((v19 >>> 10) & 0x1)) {
                                    v10[v0 + 4] = v10[v0];
                                    v1 = v0 + 1;
                                    goto loc_8052FAC;
                                }
                            }
                            else {
                                ++v0;
                            }
                            v10[v0 - 1] = v38;
                            v10[v0 - 1] -= v10[v0 - 1];
                            v10[v0 - 2] = v38;
                            v10[v48] = fucomp(v10[v0 - 2], v10[v0 - 2]);
                            (unsigned short)v49 = fnstsw(v19);
                        }
                    }
                    if(((v25 >>> 14) & 0x1) && !((v25 >>> 10) & 0x1)) {
                        v10[v48] = fucomp(v10[v0 - 2], v10[v0 - 2]);
                        (unsigned short)v49 = fnstsw(v25);
                        if(((v19 >>> 10) & 0x1)) {
                            v10[v0 + 2] = v10[v0 - 2];
                            v1 = v0 - 1;
                        loc_8052FAC:
                            v10[v48] = fucom(v10[v1], v10[v1]);
                            (unsigned short)v49 = fnstsw(v19);
                            if(((v32 >>> 10) & 0x1) || !((v32 >>> 14) & 0x1)) {
                                fxam();
                                (unsigned short)v49 = fnstsw(v32);
                                ++v1;
                                fldz();
                                if(((unsigned char)(v32 >>> 8) & 0x2)) {
                                    ++v1;
                                    fldz();
                                    fchs();
                                }
                            }
                            v10[v48] = fucom(v10[v1], v10[v1]);
                            (unsigned short)v49 = fnstsw(v32);
                            if(((v15 >>> 10) & 0x1) || !((v15 >>> 14) & 0x1)) {
                                fxam();
                                (unsigned short)v49 = fnstsw(v15);
                                ++v1;
                                fldz();
                                if(((unsigned char)(v15 >>> 8) & 0x2)) {
                                    ++v1;
                                    fldz();
                                    fchs();
                                }
                            }
                            v10[v48] = fucom(v10[v1], v10[v1]);
                            (unsigned short)v49 = fnstsw(v15);
                            if(((v20 >>> 10) & 0x1) || !((v20 >>> 14) & 0x1)) {
                                fxam();
                                (unsigned short)v49 = fnstsw(v20);
                                ++v1;
                                fldz();
                                if(((unsigned char)(v20 >>> 8) & 0x2)) {
                                    ++v1;
                                    fldz();
                                    fchs();
                                }
                            }
                            v10[v48] = fucom(v10[v1], v10[v1]);
                            (unsigned short)v49 = fnstsw(v20);
                            if(((v26 >>> 10) & 0x1) || !((v26 >>> 14) & 0x1)) {
                                fxam();
                                (unsigned short)v49 = fnstsw(v26);
                                ++v1;
                                fldz();
                                if(((unsigned char)(v27 >>> 8) & 0x2)) {
                                    ++v1;
                                    fldz();
                                    fchs();
                                }
                            }
                            goto loc_8052DC0;
                        }
                        else if(!((v19 >>> 14) & 0x1)) {
                            v10[v0 + 2] = v10[v0 - 2];
                            v1 = v0 - 1;
                            goto loc_8052FAC;
                        }
                        else {
                            v9 = v0 + 2;
                        }
                    }
                    else {
                        v9 = v0 + 3;
                    }
                }
                else {
                    v10[v45 + 6] = v10[v45];
                    v10[v45 - 4] = v10[v45 + 1];
                    v10[v45 - 3] = v10[v45 + 2];
                    v1 = v45 + 3;
                loc_8052DC0:
                    v10[v1 - 1] = v10[v1 + 3];
                    v10[v1 - 1] *= v10[v1 + 1];
                    v10[v1 - 2] = v10[v1 + 2];
                    v10[v1 - 2] *= v10[v1];
                    v10[v1 - 1] -= v10[v1 - 2];
                    v10[v1 - 2] = Infinity;
                    v10[v1 - 1] *= v10[v1 - 2];
                    v10[v1] *= v10[v1 - 2];
                    v10[v1 + 1] *= v10[v1 - 1];
                    v10[v1 + 1] += v10[v1];
                    v10[v1 + 3] *= v10[v1 + 1];
                    v9 = v1 + 3;
                }
            }
        }
        else {
            v9 = 6;
        }
    }
    return v10[v9];
}

int add_mod_n(int param0, int param1, int param2, size_t* param3) {
    addn(param0, param1, param2, param3);
    return addn_inv(param0, param1, param2, param3);
}

int addn(int param0, int param1, int param2, size_t* param3) {
    test_sum(param0 - param1, param2, param3);
    return madd((1 << (param2 & 0x1f)) + param1 - param0, param1, param2, param3);
}

int addn_inv(int param0, int param1, int param2, size_t* param3) {
    quantum_cnot(param2 * 2 + 1, param2 * 2, param3);
    madd_inv((1 << (param2 & 0x1f)) - param1, param0 - param1, param2, param3);
    quantum_swaptheleads(param2, param3);
    return test_sum(param1, param2, param3);
}

int atexit(FUNCPTR __func) {
    return →__cxa_atexit();
}

int emul(int param0, int param1, int param2, size_t* param3) {
    int result = param2 - 1;
    for(int i = param2 - 1; i >= 0; --i) {
        result = (param0 >> (i & 0x1f)) & 0x1;
        if((unsigned char)result) {
            result = quantum_toffoli((param2 + 1) * 2, param1, i + param2, param3);
        }
    }
    return result;
}

int madd(int param0, int param1, int param2, size_t* param3) {
    int v0;
    int v1 = (param2 * 2 + 1) * 2;
    for(int i = 0; i < param2 - 1; ++i) {
        v0 = (unsigned char)((param0 >> (i & 0x1f)) & 0x1) != 0 ? 2: 0;
        if((unsigned char)((param1 >> (i & 0x1f)) & 0x1)) {
            ++v0;
        }
        muxfa(v0, i + param2, i, i + 1, param2 * 2, param2 * 2 + 1, v1, param3);
    }
    v0 = !(unsigned char)((param0 >> ((param2 - 1) & 0x1f)) & 0x1) ? 0: 2;
    if((unsigned char)((param1 >> ((param2 - 1) & 0x1f)) & 0x1)) {
        ++v0;
    }
    return muxha(v0, param2 * 2 - 1, param2 - 1, param2 * 2, param2 * 2 + 1, v1, param3);
}

int madd_inv(int param0, int param1, int param2, size_t* param3) {
    int v0 = (param2 * 2 + 1) * 2;
    int v1 = !(unsigned char)((param0 >> ((param2 - 1) & 0x1f)) & 0x1) ? 0: 2;
    if((unsigned char)((param1 >> ((param2 - 1) & 0x1f)) & 0x1)) {
        ++v1;
    }
    muxha_inv(v1, param2 - 1, param2 * 2 - 1, param2 * 2, param2 * 2 + 1, v0, param3);
    int result = param2 - 2;
    for(int i = param2 - 2; i >= 0; --i) {
        v1 = (unsigned char)((param0 >> (i & 0x1f)) & 0x1) != 0 ? 2: 0;
        if((unsigned char)((param1 >> (i & 0x1f)) & 0x1)) {
            ++v1;
        }
        result = muxfa_inv(v1, i, i + param2, i + param2 + 1, param2 * 2, param2 * 2 + 1, v0, param3);
    }
    return result;
}

int main(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7 = v2;
    int* ptr0 = &param0;
    int* ptr1 = &param0;
    int v8 = 0;
    time_t v9 = →time(NULL);
    →srand((unsigned int)v9);
    if(*ptr1 == 1) {
        →puts("Usage: shor [number]\n");
    }
    else {
        int v10 = →atoi(*(char**)(*(ptr1 + 1) + 4));
        if(v10 <= 14) {
            →puts("Invalid number\n");
        }
        else {
            int max = quantum_getwidth(v10 * v10);
            int v11 = quantum_getwidth(v10);
            →printf("N = %i, %i qubits required\n", v10, v11 * 3 + max + 2);
            if(*ptr1 > 2) {
                v8 = →atoi(*(char**)(*(ptr1 + 1) + 8));
            }
            for(int i = quantum_gcd(v10, v8); (i > 1 || v8 <= 1); i = quantum_gcd(v10, v8)) {
                int v12 = →rand();
                v8 = (unsigned int)((unsigned long long)v12 | ((unsigned long long)(v12 >> 31) << 32)) % v10;
            }
            →printf("Random seed: %i\n", v8);
            int v13 = max;
            int v14 = 0;
            int v15 = 0;
            quantum_new_qureg(&v3);
            int v16 = v3;
            int v17 = v5;
            int v18 = v1;
            int v19 = v6;
            int v20 = v4;
            int j;
            for(j = 0; j < max; ++j) {
                quantum_hadamard(j, &v16);
            }
            quantum_addscratch(v11 * 3 + 2, (int*)&v16);
            quantum_exp_mod_n(v10, v8, max, v11, (size_t*)&v16);
            for(j = 0; j < v11 * 3 + 2; ++j) {
                quantum_bmeasure(0, &v16);
            }
            quantum_qft(max, (size_t*)&v16);
            for(j = 0; j < max / 2; ++j) {
                quantum_cnot(j, max - j - 1, (size_t*)&v16);
                quantum_cnot(max - j - 1, j, (size_t*)&v16);
                quantum_cnot(j, max - j - 1, (size_t*)&v16);
            }
            v0 = v16;
            v14 = v17;
            v15 = v18;
            v13 = v19;
            int v21 = v20;
            int v22 = quantum_measure(v0, v14, v15, v13);
            if(v22 == -1) {
                →puts("Impossible Measurement!");
            }
            else if(!v22) {
                →puts("Measured zero, try again.");
            }
            else {
                int v23 = 1 << (max & 0x1f);
                int v24 = v22;
                *(long long*)&v15 = (double)v22 / (double)v23;
                →printf("Measured %i (%f), ", v24, *(double*)&v15);
                quantum_frac_approx(&v22, &v23, max);
                →printf("fractional approximation is %i/%i.\n", v22, v23);
                if(((v23 - ((v23 >> 31) >> 31)) & 0x1) - ((v23 >> 31) >>> 31) == 1 && v23 * 2 < 1 << (max & 0x1f)) {
                    →puts("Odd denominator, trying to expand by 2.");
                    v23 *= 2;
                }
                if(((v23 - ((v23 >> 31) >> 31)) & 0x1) - ((v23 >> 31) >>> 31) == 1) {
                    →puts("Odd period, try again.");
                }
                else {
                    →printf("Possible period is %i.\n", v23);
                    int v25 = quantum_ipow(v8, v23 / 2);
                    int v26 = 1 % v10 + v25;
                    int v27 = quantum_ipow(v8, v23 / 2);
                    int v28 = v27 - 1 % v10;
                    v26 = quantum_gcd(v10, v26);
                    v28 = quantum_gcd(v10, v28);
                    int v29 = v28 < v26 ? v26: v28;
                    if(v29 < v10 && v29 > 1) {
                        →printf("%i = %i * %i\n", v10, v29, (unsigned int)((unsigned long long)v10 | ((unsigned long long)(v10 >> 31) << 32)) / v29);
                        quantum_delete_qureg(&v16);
                    }
                    else {
                        →puts("Unable to determine factors, try again.");
                    }
                }
            }
        }
    }
    jump v0;
}

int mul_mod_n(int param0, int param1, int param2, int param3, size_t* param4) {
    muln(param0, param1, param2, param3, param4);
    quantum_swaptheleads_omuln_controlled(param2, param3, param4);
    return muln_inv(param0, param1, param2, param3, param4);
}

int muln(int param0, int param1, int param2, int param3, size_t* param4) {
    int v0 = param3 * 2 + 1;
    quantum_toffoli(param2, (param3 + 1) * 2, v0, param4);
    emul((unsigned int)((unsigned long long)param1 | ((unsigned long long)(param1 >> 31) << 32)) % param0, v0, param3, param4);
    quantum_toffoli(param2, (param3 + 1) * 2, v0, param4);
    int v1 = 1;
    int i;
    for(i = v1; i < param3; i = v1) {
        quantum_toffoli(param2, (param3 + 1) * 2 + v1, v0, param4);
        int v2 = param1 << (v1 & 0x1f);
        add_mod_n(param0, (unsigned int)((unsigned long long)v2 | ((unsigned long long)(v2 >> 31) << 32)) % param0, param3, param4);
        quantum_toffoli(param2, (param3 + 1) * 2 + v1, v0, param4);
        ++v1;
    }
    return i;
}

int muln_inv(int param0, int param1, int param2, int param3, size_t* param4) {
    int v0 = param3 * 2 + 1;
    param1 = quantum_inverse_mod(param0, param1);
    for(int i = param3 - 1; i > 0; --i) {
        quantum_toffoli(param2, (param3 + 1) * 2 + i, v0, param4);
        int v1 = param1 << (i & 0x1f);
        add_mod_n(param0, param0 - (unsigned int)((unsigned long long)v1 | ((unsigned long long)(v1 >> 31) << 32)) % param0, param3, param4);
        quantum_toffoli(param2, (param3 + 1) * 2 + i, v0, param4);
    }
    quantum_toffoli(param2, (param3 + 1) * 2, v0, param4);
    emul((unsigned int)((unsigned long long)param1 | ((unsigned long long)(param1 >> 31) << 32)) % param0, v0, param3, param4);
    return quantum_toffoli(param2, (param3 + 1) * 2, v0, param4);
}

int muxfa(int param0, int param1, int param2, int param3, int param4, int param5, int param6, size_t* param7) {
    int result;
    if(!param0) {
        quantum_toffoli(param1, param2, param3, param7);
        result = quantum_cnot(param1, param2, param7);
    }
    if(param0 == 3) {
        quantum_toffoli(param5, param2, param3, param7);
        quantum_cnot(param5, param2, param7);
        quantum_toffoli(param1, param2, param3, param7);
        result = quantum_cnot(param1, param2, param7);
    }
    if(param0 == 1) {
        quantum_toffoli(param5, param4, param1, param7);
        quantum_toffoli(param1, param2, param3, param7);
        quantum_toffoli(param5, param4, param1, param7);
        quantum_toffoli(param1, param2, param3, param7);
        quantum_toffoli(param5, param4, param2, param7);
        quantum_toffoli(param1, param2, param3, param7);
        result = quantum_cnot(param1, param2, param7);
    }
    if(param0 == 2) {
        quantum_sigma_x(param4, param7);
        quantum_toffoli(param5, param4, param1, param7);
        quantum_toffoli(param1, param2, param3, param7);
        quantum_toffoli(param5, param4, param1, param7);
        quantum_toffoli(param1, param2, param3, param7);
        quantum_toffoli(param5, param4, param2, param7);
        quantum_toffoli(param1, param2, param3, param7);
        quantum_cnot(param1, param2, param7);
        result = quantum_sigma_x(param4, param7);
    }
    return result;
}

int muxfa_inv(int param0, int param1, int param2, int param3, int param4, int param5, int param6, size_t* param7) {
    int result;
    if(!param0) {
        quantum_cnot(param1, param2, param7);
        result = quantum_toffoli(param1, param2, param3, param7);
    }
    if(param0 == 3) {
        quantum_cnot(param1, param2, param7);
        quantum_toffoli(param1, param2, param3, param7);
        quantum_cnot(param5, param2, param7);
        result = quantum_toffoli(param5, param2, param3, param7);
    }
    if(param0 == 1) {
        quantum_cnot(param1, param2, param7);
        quantum_toffoli(param1, param2, param3, param7);
        quantum_toffoli(param5, param4, param2, param7);
        quantum_toffoli(param1, param2, param3, param7);
        quantum_toffoli(param5, param4, param1, param7);
        quantum_toffoli(param1, param2, param3, param7);
        result = quantum_toffoli(param5, param4, param1, param7);
    }
    if(param0 == 2) {
        quantum_sigma_x(param4, param7);
        quantum_cnot(param1, param2, param7);
        quantum_toffoli(param1, param2, param3, param7);
        quantum_toffoli(param5, param4, param2, param7);
        quantum_toffoli(param1, param2, param3, param7);
        quantum_toffoli(param5, param4, param1, param7);
        quantum_toffoli(param1, param2, param3, param7);
        quantum_toffoli(param5, param4, param1, param7);
        result = quantum_sigma_x(param4, param7);
    }
    return result;
}

int muxha(int param0, int param1, int param2, int param3, int param4, int param5, size_t* param6) {
    int result;
    if(!param0) {
        result = quantum_cnot(param1, param2, param6);
    }
    if(param0 == 3) {
        quantum_cnot(param4, param2, param6);
        result = quantum_cnot(param1, param2, param6);
    }
    if(param0 == 1) {
        quantum_toffoli(param4, param3, param2, param6);
        result = quantum_cnot(param1, param2, param6);
    }
    if(param0 == 2) {
        quantum_sigma_x(param3, param6);
        quantum_toffoli(param4, param3, param2, param6);
        quantum_cnot(param1, param2, param6);
        result = quantum_sigma_x(param3, param6);
    }
    return result;
}

int muxha_inv(int param0, int param1, int param2, int param3, int param4, int param5, size_t* param6) {
    int result;
    if(!param0) {
        result = quantum_cnot(param1, param2, param6);
    }
    if(param0 == 3) {
        quantum_cnot(param1, param2, param6);
        result = quantum_cnot(param4, param2, param6);
    }
    if(param0 == 1) {
        quantum_cnot(param1, param2, param6);
        result = quantum_toffoli(param4, param3, param2, param6);
    }
    if(param0 == 2) {
        quantum_sigma_x(param3, param6);
        quantum_cnot(param1, param2, param6);
        quantum_toffoli(param4, param3, param2, param6);
        result = quantum_sigma_x(param3, param6);
    }
    return result;
}

int quantum_add_hash(int param0, int param1, int param2, int param3) {
    int v0 = param0;
    int v1 = param1;
    int v2 = 0;
    int v3 = quantum_hash64(v0, v1, *(int*)(param3 + 8));
    while(*(int*)(v3 * 4 + *(int*)(param3 + 16))) {
        ++v3;
        if(1 << (*(int*)(param3 + 8) & 0x1f) == v3) {
            if(!v2) {
                v3 = 0;
                v2 = 1;
            }
            else {
                quantum_error(5);
            }
        }
    }
    int result = param2 + 1;
    *(int*)(v3 * 4 + *(int*)(param3 + 16)) = param2 + 1;
    return result;
}

int quantum_add_hash2(int param0, int param1, int param2, int param3) {
    int v0 = param0;
    int v1 = param1;
    int v2 = 0;
    int v3 = quantum_hash642(v0, v1, *(int*)(param3 + 8));
    while(*(int*)(v3 * 4 + *(int*)(param3 + 16))) {
        ++v3;
        if(1 << (*(int*)(param3 + 8) & 0x1f) == v3) {
            if(!v2) {
                v3 = 0;
                v2 = 1;
            }
            else {
                quantum_error(5);
            }
        }
    }
    int result = param2 + 1;
    *(int*)(v3 * 4 + *(int*)(param3 + 16)) = param2 + 1;
    return result;
}

int quantum_add_hash3(int param0, int param1, int param2, int param3) {
    int v0 = param0;
    int v1 = param1;
    int v2 = 0;
    int v3 = quantum_hash643(v0, v1, *(int*)(param3 + 8));
    while(*(int*)(v3 * 4 + *(int*)(param3 + 16))) {
        ++v3;
        if(1 << (*(int*)(param3 + 8) & 0x1f) == v3) {
            if(!v2) {
                v3 = 0;
                v2 = 1;
            }
            else {
                quantum_error(5);
            }
        }
    }
    int result = param2 + 1;
    *(int*)(v3 * 4 + *(int*)(param3 + 16)) = param2 + 1;
    return result;
}

int quantum_addscratch(int param0, int* param1) {
    int v0 = *param1;
    *param1 = *param1 + param0;
    int min = 0;
    int i;
    for(i = *(param1 + 1); i > min; i = *(param1 + 1)) {
        int v1 = min * 16 + *(param1 + 3);
        int v2 = *(int*)(v1 + 8);
        int v3 = (unsigned int)((((unsigned long long)v2 | ((unsigned long long)*(int*)(v1 + 12) << 32)) << (param0 & 0x1f)) >>> 32L);
        int v4 = v2 << (param0 & 0x1f);
        if(((unsigned char)param0 & 0x20)) {
            v3 = v4;
            v4 = 0;
        }
        int v5 = v4;
        int v6 = v3;
        int v7 = min * 16 + *(param1 + 3);
        int v8 = v6;
        *(int*)(v7 + 8) = v5;
        *(int*)(v7 + 12) = v8;
        ++min;
    }
    return i;
}

int quantum_bitmask(int param0, int param1, int param2, int param3) {
    int v0 = param0;
    int v1 = param1;
    int result = 0;
    for(int i = 0; i < param2; ++i) {
        int v2 = *(int*)(i * 4 + param3);
        int v3 = (unsigned int)(((unsigned long long)v0 | ((unsigned long long)v1 << 32)) >>> (v2 & 0x1f));
        int v4 = v1 >>> (v2 & 0x1f);
        if(((unsigned char)v2 & 0x20)) {
            v3 = v4;
        }
        if((unsigned char)(v3 & 0x1)) {
            result += 1 << (i & 0x1f);
        }
    }
    return result;
}

int quantum_bmeasure(int param0, int param1) {
    __SyntheticTypeUnknownF v0;
    int result;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    __SyntheticTypeUnknownF v7;
    int v8 = 0;
    fldz();
    double v9 = v7;
    int v10 = param0;
    int v11 = quantum_objcode_put(129);
    if(v11) {
        result = 0;
    }
    else {
        int v12 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
        int v13 = 1 << (param0 & 0x1f);
        if(((unsigned char)param0 & 0x20)) {
            v12 = v13;
            v13 = 0;
        }
        int v14 = v13;
        int v15 = v12;
        for(int i = 0; i < *(int*)(param1 + 4); ++i) {
            int v16 = i * 16 + *(int*)(param1 + 12);
            if(!((*(int*)(v16 + 8) & v14) | (*(int*)(v16 + 12) & v15))) {
                int* ptr0 = (int*)(i * 16 + *(int*)(param1 + 12));
                quantum_prob_inline4(ptr0[0], ptr0[1]);
                v0 = v0 + v9;
                v9 = v0;
            }
        }
        int v17 = quantum_frand();
        double v18 = v0;
        fucompp();
        (unsigned short)v26 = fnstsw((unsigned short)v17);
        if(!((v4 >>> 8) & 0x1) && !((v4 >>> 14) & 0x1)) {
            v8 = 1;
        }
        int v19 = *(int*)param1;
        int v20 = *(int*)(param1 + 4);
        int v21 = *(int*)(param1 + 8);
        int v22 = *(int*)(param1 + 12);
        int v23 = *(int*)(param1 + 16);
        int v24 = v8;
        v10 = param0;
        quantum_state_collapse(&v1);
        quantum_delete_qureg_hashpreserve(param1);
        int v25 = param1;
        *(int*)v25 = v1;
        *(int*)(v25 + 4) = v5;
        *(int*)(v25 + 8) = v2;
        *(int*)(v25 + 12) = v6;
        *(int*)(v25 + 16) = v3;
        result = v8;
    }
    return result;
}

int quantum_bmeasure_bitpreserve(int param0, int param1) {
    __SyntheticTypeUnknownF v0;
    int result;
    __SyntheticTypeUnknown v1;
    int v2;
    __SyntheticTypeUnknownF v3;
    int v4;
    __SyntheticTypeUnknownF v5;
    int v6;
    int v7;
    int v8;
    short v9;
    char v10;
    __SyntheticTypeUnknownF v11;
    size_t __nmemb = 0;
    int v12 = 0;
    fldz();
    double v13 = v11;
    fldz();
    double v14 = v5;
    int v15 = param0;
    int v16 = quantum_objcode_put(130);
    if(v16) {
        result = 0;
    }
    else {
        int v17 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
        int v18 = 1 << (param0 & 0x1f);
        if(((unsigned char)param0 & 0x20)) {
            v17 = v18;
            v18 = 0;
        }
        int v19 = v18;
        int v20 = v17;
        int i;
        for(i = 0; i < *(int*)(param1 + 4); ++i) {
            int v21 = i * 16 + *(int*)(param1 + 12);
            if(!((*(int*)(v21 + 8) & v19) | (*(int*)(v21 + 12) & v20))) {
                int* ptr0 = (int*)(i * 16 + *(int*)(param1 + 12));
                quantum_prob_inline4(ptr0[0], ptr0[1]);
                v0 = v0 + v14;
                v14 = v0;
            }
        }
        int v22 = quantum_frand();
        double v23 = v0;
        char v24 = 6;
        fucompp();
        (unsigned short)v43 = fnstsw((unsigned short)v22);
        if(!((v6 >>> 8) & 0x1) && !((v6 >>> 14) & 0x1)) {
            v12 = 1;
        }
        for(i = 0; i < *(int*)(param1 + 4); ++i) {
            int v25 = i * 16 + *(int*)(param1 + 12);
            if(((*(int*)(v25 + 8) & v19) | (*(int*)(v25 + 12) & v20))) {
                if(!v12) {
                    int* ptr1 = (int*)(i * 16 + *(int*)(param1 + 12));
                    *ptr1 = 0;
                    *(ptr1 + 1) = 0;
                }
                else {
                    int* ptr2 = (int*)(i * 16 + *(int*)(param1 + 12));
                    quantum_prob_inline4(ptr2[0], ptr2[1]);
                    v0 += v13;
                    v13 = v0;
                    v24 = 0;
                    ++__nmemb;
                }
            }
            else if(v12) {
                int* ptr3 = (int*)(i * 16 + *(int*)(param1 + 12));
                *ptr3 = 0;
                *(ptr3 + 1) = 0;
            }
            else {
                int* ptr4 = (int*)(i * 16 + *(int*)(param1 + 12));
                quantum_prob_inline4(ptr4[0], ptr4[1]);
                v0 += v13;
                v13 = v0;
                v24 = 0;
                ++__nmemb;
            }
        }
        size_t v26 = __nmemb;
        void* ptr5 = →calloc(__nmemb, 16);
        if(!ptr5) {
            quantum_error(2);
        }
        quantum_memman((int)(__nmemb * 16));
        int v27 = *(int*)(param1 + 8);
        int v28 = *(int*)(param1 + 16);
        int v29 = *(int*)param1;
        i = 0;
        int v30 = 0;
        while(*(int*)(param1 + 4) > i) {
            float* ptr6 = (float*)(i * 16 + *(int*)(param1 + 12));
            float v31 = *ptr6;
            float v32 = *(ptr6 + 1);
            float v33 = *(ptr6 + 1);
            float v34 = v31;
            --v24;
            v1[v24] = v34;
            fldz();
            fucompp();
            (unsigned short)v43 = fnstsw((unsigned short)v32);
            if(((v9 >>> 14) & 0x1) && !((v9 >>> 10) & 0x1)) {
                --v24;
                v1[v24] = v33;
                fldz();
                fucompp();
                (unsigned short)v43 = fnstsw(v9);
                if(((v4 >>> 10) & 0x1) || !((v4 >>> 14) & 0x1)) {
                    goto loc_804D42E;
                }
            }
            else {
            loc_804D42E:
                int* ptr7 = (int*)(v30 * 16 + (int)ptr5);
                int v35 = i * 16 + *(int*)(param1 + 12);
                int v36 = *(int*)(v35 + 12);
                *(ptr7 + 2) = *(int*)(v35 + 8);
                *(ptr7 + 3) = v36;
                int* ptr8 = (int*)(v30 * 16 + (int)ptr5);
                float* ptr9 = (float*)(i * 16 + *(int*)(param1 + 12));
                v1[v24 - 1] = *ptr9;
                int v37 = v1[v24 - 1];
                v1[v24 - 1] = *(ptr9 + 1);
                int v38 = v1[v24 - 1];
                v1[v24 - 1] = v13;
                fsqrt();
                double v39 = v1[v24 - 1];
                char v40 = v24 - 1;
                v1[v40] = v39;
                v1[v10] = fucomp(v1[v40], v1[v40]);
                (unsigned short)v43 = fnstsw((unsigned short)ptr9);
                if(((v7 >>> 10) & 0x1) || !((v7 >>> 14) & 0x1)) {
                    v1[v40 - 1] = v13;
                    *(long long*)&v8 = v1[v40 - 1];
                    v1[v10] = →sqrt(*(double*)&v8);
                    v39 = v3;
                    v40 = 0;
                }
                v1[v40 - 1] = v39;
                float v41 = v1[v40 - 1];
                v34 = v1[v40 - 1];
                v24 = v40;
                int v42 = __divsc3(v37, v38, v34, 0.0);
                *ptr8 = v42;
                *(ptr8 + 1) = v2;
                ++v30;
            }
            ++i;
        }
        quantum_delete_qureg_hashpreserve(param1);
        *(int*)param1 = v29;
        *(size_t*)(param1 + 4) = v26;
        *(int*)(param1 + 8) = v27;
        *(void**)(param1 + 12) = ptr5;
        *(int*)(param1 + 16) = v28;
        result = v12;
    }
    return result;
}

int quantum_cexp(float param0) {
    __SyntheticTypeUnknown v0;
    __SyntheticTypeUnknownF v1;
    __SyntheticTypeUnknownF v2;
    __SyntheticTypeUnknownF v3;
    char v4;
    __SyntheticTypeUnknownF v5;
    int v6;
    double v7;
    double result;
    __SyntheticTypeUnknownF v8;
    __SyntheticTypeUnknownF v9;
    *(long long*)&v6 = param0;
    v0[v4] = →cos(*(double*)&v6);
    double v10 = v8;
    fldz();
    double v11 = v9;
    *(long long*)&v6 = param0;
    v0[v4] = →sin(*(double*)&v6);
    fldz();
    fld1();
    long long v12 = v1;
    fldz();
    long long v13 = v3;
    long long v14 = v2;
    long long v15 = v5;
    __muldc3(&v7);
    return result;
}

double* quantum_char2double(double* param0) {
    return param0;
}

int quantum_char2int(int param0) {
    int result = 0;
    int v0 = 4;
    for(int i = 3; i >= 0; --i) {
        result += (unsigned int)*(char*)(i + param0) << ((~(i - 4) * 8) & 0x1f);
    }
    return result;
}

int quantum_char2mu(int param0) {
    int result = 0;
    int v0 = 0;
    int v1 = 8;
    for(int i = 7; i >= 0; --i) {
        int v2 = (unsigned int)*(char*)(i + param0);
        int v3 = (unsigned int)(((unsigned long long)v2 << ((~(i - 8) * 8) & 0x1f)) >>> 32L);
        int v4 = v2 << ((~(i - 8) * 8) & 0x1f);
        if(((unsigned char)((unsigned int)0 | ((unsigned int)(~(i - 8) & 0x1fffffff) << 3)) & 0x20)) {
            v3 = v4;
            v4 = 0;
        }
        int v5 = result;
        result += v4;
        v0 += (unsigned int)__carry__(v4, v5) + v3;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int quantum_cnot(int param0, int param1, size_t* param2) {
    int result;
    int v0;
    quantum_qec_get_status(&v0, NULL);
    if(v0) {
        result = quantum_cnot_ft(param0, param1, (int)param2);
    }
    else {
        int v1 = param1;
        int v2 = param0;
        result = quantum_objcode_put(1);
        if(!result) {
            for(int i = 0; i < (int)param2[1]; ++i) {
                int v3 = i * 16 + param2[3];
                int v4 = *(int*)(v3 + 12);
                int v5 = (unsigned int)(((unsigned long long)*(int*)(v3 + 8) | ((unsigned long long)v4 << 32)) >>> (param0 & 0x1f));
                int v6 = v4 >>> (param0 & 0x1f);
                if(((unsigned char)param0 & 0x20)) {
                    v5 = v6;
                }
                if((unsigned char)(v5 & 0x1)) {
                    int v7 = i * 16 + param2[3];
                    int v8 = i * 16 + param2[3];
                    int v9 = *(int*)(v8 + 8);
                    int v10 = *(int*)(v8 + 12);
                    int v11 = 1;
                    int v12 = 0;
                    int v13 = (unsigned int)((1L << (param1 & 0x1f)) >>> 32L);
                    int v14 = 1 << (param1 & 0x1f);
                    if(((unsigned char)param1 & 0x20)) {
                        v13 = v14;
                        v14 = 0;
                    }
                    int v15 = v7;
                    *(int*)(v15 + 8) = v14 ^ v9;
                    *(int*)(v15 + 12) = v13 ^ v10;
                }
            }
            result = (int)quantum_decohere(param2);
        }
    }
    return result;
}

unsigned int quantum_cnot_ft(int param0, int param1, size_t* param2) {
    __SyntheticTypeUnknown v0;
    char v1;
    __SyntheticTypeUnknownF v2;
    unsigned int result = type;
    type = 0;
    v0[v1] = quantum_get_decoherence();
    float v3 = v2;
    quantum_set_decoherence(0.0);
    quantum_cnot(param0, param1, param2);
    quantum_cnot((int)(width + param0), (int)(width + param1), param2);
    quantum_set_decoherence(v3);
    quantum_cnot(width * 2 + param0, width * 2 + param1, param2);
    quantum_qec_counter(1, 0, param2);
    type = result;
    return result;
}

int quantum_cond_phase(int param0, int param1, size_t* param2) {
    __SyntheticTypeUnknownF v0;
    float v1;
    int v2 = param1;
    int v3 = param0;
    int result = quantum_objcode_put(12);
    if(!result) {
        int v4 = param0 - param1;
        int v5 = (unsigned int)((1L << (v4 & 0x1f)) >>> 32L);
        int v6 = 1 << (v4 & 0x1f);
        if(((unsigned char)v4 & 0x20)) {
            v5 = v6;
            v6 = 0;
        }
        int v7 = v5;
        int v8 = v6;
        __SyntheticTypeUnknownF v9 = v5 >= 0 ? (double)*(long long*)&v8: *(__int128*)&gvar_8054330 + v9;
        double v10 = v9;
        v23[v24 + 1] = fdivrp(v10, 3.141592653589793);
        float v11 = v0;
        float v12 = (float)quantum_cexp(v11);
        float v13 = v1;
        for(int i = 0; i < (int)param2[1]; ++i) {
            int v14 = i * 16 + param2[3];
            int v15 = *(int*)(v14 + 12);
            int v16 = (unsigned int)(((unsigned long long)*(int*)(v14 + 8) | ((unsigned long long)v15 << 32)) >>> (param0 & 0x1f));
            int v17 = v15 >>> (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v16 = v17;
            }
            if((unsigned char)(v16 & 0x1)) {
                int v18 = i * 16 + param2[3];
                int v19 = *(int*)(v18 + 12);
                int v20 = (unsigned int)(((unsigned long long)*(int*)(v18 + 8) | ((unsigned long long)v19 << 32)) >>> (param1 & 0x1f));
                int v21 = v19 >>> (param1 & 0x1f);
                if(((unsigned char)param1 & 0x20)) {
                    v20 = v21;
                }
                if((unsigned char)(v20 & 0x1)) {
                    int* ptr0 = (int*)(i * 16 + param2[3]);
                    float* ptr1 = (float*)(i * 16 + param2[3]);
                    int v22 = __mulsc3(ptr1[0], ptr1[1], v12, v13);
                    *ptr0 = v22;
                    *(float*)(ptr0 + 1) = v1;
                }
            }
        }
        result = (int)quantum_decohere(param2);
    }
    return result;
}

unsigned int quantum_cond_phase_inv(int param0, int param1, size_t* param2) {
    float v0;
    __SyntheticTypeUnknownF v1;
    int v2 = param0 - param1;
    int v3 = (unsigned int)((1L << (v2 & 0x1f)) >>> 32L);
    int v4 = 1 << (v2 & 0x1f);
    if(((unsigned char)v2 & 0x20)) {
        v3 = v4;
        v4 = 0;
    }
    int v5 = v3;
    int v6 = v4;
    __SyntheticTypeUnknownF v7 = v3 >= 0 ? (double)*(long long*)&v6: *(__int128*)&gvar_8054330 + v7;
    double v8 = v7;
    v21[v23 + 1] = fdivrp(v8, -3.141592653589793);
    float v9 = v1;
    float v10 = (float)quantum_cexp(v9);
    float v11 = v0;
    for(int i = 0; i < (int)param2[1]; ++i) {
        int v12 = i * 16 + param2[3];
        int v13 = *(int*)(v12 + 12);
        int v14 = (unsigned int)(((unsigned long long)*(int*)(v12 + 8) | ((unsigned long long)v13 << 32)) >>> (param0 & 0x1f));
        int v15 = v13 >>> (param0 & 0x1f);
        if(((unsigned char)param0 & 0x20)) {
            v14 = v15;
        }
        if((unsigned char)(v14 & 0x1)) {
            int v16 = i * 16 + param2[3];
            int v17 = *(int*)(v16 + 12);
            int v18 = (unsigned int)(((unsigned long long)*(int*)(v16 + 8) | ((unsigned long long)v17 << 32)) >>> (param1 & 0x1f));
            int v19 = v17 >>> (param1 & 0x1f);
            if(((unsigned char)param1 & 0x20)) {
                v18 = v19;
            }
            if((unsigned char)(v18 & 0x1)) {
                int* ptr0 = (int*)(i * 16 + param2[3]);
                float* ptr1 = (float*)(i * 16 + param2[3]);
                int v20 = __mulsc3(ptr1[0], ptr1[1], v10, v11);
                *ptr0 = v20;
                *(float*)(ptr0 + 1) = v0;
            }
        }
    }
    return quantum_decohere(param2);
}

size_t* quantum_cond_phase_kick(int param0, int param1, float param2, size_t* param3) {
    size_t* result;
    int v0;
    float v1;
    *(long long*)&v0 = param2;
    int v2 = param1;
    int v3 = param0;
    int v4 = quantum_objcode_put(12);
    if(!v4) {
        float v5 = (float)quantum_cexp(param2);
        float v6 = v1;
        for(int i = 0; i < param3[1]; ++i) {
            int v7 = i * 16 + param3[3];
            int v8 = *(int*)(v7 + 12);
            int v9 = (unsigned int)(((unsigned long long)*(int*)(v7 + 8) | ((unsigned long long)v8 << 32)) >>> (param0 & 0x1f));
            int v10 = v8 >>> (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v9 = v10;
            }
            if((unsigned char)(v9 & 0x1)) {
                int v11 = i * 16 + param3[3];
                int v12 = *(int*)(v11 + 12);
                int v13 = (unsigned int)(((unsigned long long)*(int*)(v11 + 8) | ((unsigned long long)v12 << 32)) >>> (param1 & 0x1f));
                int v14 = v12 >>> (param1 & 0x1f);
                if(((unsigned char)param1 & 0x20)) {
                    v13 = v14;
                }
                if((unsigned char)(v13 & 0x1)) {
                    int* ptr0 = (int*)(i * 16 + param3[3]);
                    float* ptr1 = (float*)(i * 16 + param3[3]);
                    int v15 = __mulsc3(ptr1[0], ptr1[1], v5, v6);
                    *ptr0 = v15;
                    *(float*)(ptr0 + 1) = v1;
                }
            }
        }
        result = param3;
        quantum_decohere(result);
    }
    return result;
}

int quantum_conj(int param0, int param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    __SyntheticTypeUnknownF v2;
    v0[v1] = quantum_real(param0);
    v0[v1] = quantum_imag(param0, param1);
    int v3 = __mulsc3(v2, 0.0, -0.0, -1.0);
    return 0.0 + (double)v3;
}

void* quantum_copy_qureg(int* param0, int* param1) {
    int* ptr0 = param1;
    int* ptr1 = param0;
    *ptr0 = *ptr1;
    *(ptr0 + 1) = *(ptr1 + 1);
    *(ptr0 + 2) = *(ptr1 + 2);
    *(ptr0 + 3) = *(ptr1 + 3);
    *(ptr0 + 4) = *(ptr1 + 4);
    void* ptr2 = →calloc(*(size_t*)(param1 + 1), 16);
    *(void**)(param1 + 3) = ptr2;
    if(!*(param1 + 3)) {
        quantum_error(2);
    }
    quantum_memman(*(param1 + 1) * 16);
    if(*(param1 + 2)) {
        void* ptr3 = →calloc((size_t)(1 << (*(param1 + 2) & 0x1f)), 4);
        *(void**)(param1 + 4) = ptr3;
        if(!*(param1 + 4)) {
            quantum_error(2);
        }
        quantum_memman(4 << (*(param1 + 2) & 0x1f));
    }
    return →memcpy(*(void**)(param1 + 3), *(void**)(param0 + 3), (size_t)(*(param0 + 1) * 16));
}

unsigned int quantum_decohere(size_t* param0) {
    unsigned int result;
    char v0;
    float v1;
    float v2;
    __SyntheticTypeUnknown v3;
    __SyntheticTypeUnknownF v4;
    int v5;
    __SyntheticTypeUnknownF v6;
    __SyntheticTypeUnknownF v7;
    int v8;
    int v9;
    short v10;
    __SyntheticTypeUnknownF v11;
    char v12;
    __SyntheticTypeUnknownF v13;
    float v14;
    quantum_gate_counter(1);
    if(quantum_status) {
        void* __ptr = →calloc(param0[0], 4);
        if(!__ptr) {
            quantum_error(2);
        }
        quantum_memman((int)(param0[0] * 4));
        int i;
        for(i = 0; i < (int)param0[0]; ++i) {
            do {
                quantum_frand();
                fld1();
                __SyntheticTypeUnknownF v15 = v7 - (v4 + v4);
                v2 = v15;
                int v16 = quantum_frand();
                fld1();
                float v17 = v15 - (v4 + v4 + (v4 + v4));
                v4 = v17 * v17;
                v1 = v2 * v2 + v4;
                fld1();
                v7 = v1;
                fucompp();
                (unsigned short)v33 = fnstsw((unsigned short)v16);
            }
            while(!((v9 >>> 8) & 0x1));
            double v18 = v2;
            *(long long*)&v8 = v1;
            v3[v12] = →log(*(double*)&v8);
            double v19 = v11 * -2.0 / v1;
            fsqrt();
            double v20 = v19;
            char v21 = 7;
            v3[v12] = fucomp(v20, v20);
            v10 = fnstsw(v10);
            if(((v5 >>> 10) & 0x1) || !((v5 >>> 14) & 0x1)) {
                *(long long*)&v8 = v19;
                v3[v12] = →sqrt(*(double*)&v8);
                v20 = v13;
                v21 = 0;
            }
            v3[v21 - 1] = v20;
            v3[v21 - 1] *= v18;
            float v22 = v3[v21 - 1];
            double v23 = v3[v21 - 1];
            v3[v21 - 1] = quantum_lambda;
            v3[v21 - 1] += v3[v21 - 1];
            *(long long*)&v8 = v3[v21 - 1];
            v3[v12] = →sqrt(*(double*)&v8);
            v22 = v6 * v23;
            v4 = v22 / 2.0;
            *(int*)(i * 4 + (int)__ptr) = v4;
            v0 = 0;
        }
        for(i = 0; i < (int)param0[1]; ++i) {
            float v24 = (float)0.0;
            for(int j = 0; j < (int)param0[0]; ++j) {
                int v25 = i * 16 + param0[3];
                int v26 = *(int*)(v25 + 12);
                int v27 = (unsigned int)(((unsigned long long)*(int*)(v25 + 8) | ((unsigned long long)v26 << 32)) >>> (j & 0x1f));
                int v28 = v26 >>> (j & 0x1f);
                if(((unsigned char)j & 0x20)) {
                    v27 = v28;
                }
                v3[v0 - 1] = *(float*)(j * 4 + (int)__ptr);
                v3[v0 - 2] = v24;
                if((unsigned char)(v27 & 0x1)) {
                    v3[v0 - 1] += v3[v0 - 2];
                    v24 = v3[v0 - 1];
                }
                else {
                    v3[v12 + 1] = fsubrp(v3[v0 - 1], v3[v0 - 2]);
                    v24 = v3[v0 - 2];
                    --v0;
                }
            }
            int* ptr0 = (int*)(i * 16 + param0[3]);
            float* ptr1 = (float*)(i * 16 + param0[3]);
            float v29 = *ptr1;
            v3[v0 - 1] = *(ptr1 + 1);
            float v30 = v3[v0 - 1];
            int v31 = quantum_cexp(v24);
            int v32 = __mulsc3(v29, v30, (float)v31, v14);
            *ptr0 = v32;
            *(float*)(ptr0 + 1) = v14;
        }
        →free(__ptr);
        result = quantum_memman(0 - param0[0] * 4);
    }
    return result;
}

int* quantum_delete_density_op(int* param0) {
    quantum_destroy_hash(*(param0 + 2));
    for(int i = 0; i < *param0; ++i) {
        quantum_delete_qureg_hashpreserve(i * 20 + *(param0 + 2));
    }
    →free(*(void**)(param0 + 1));
    →free(*(void**)(param0 + 2));
    quantum_memman(*param0 * -24);
    *(param0 + 1) = 0;
    *(param0 + 2) = 0;
    return param0;
}

int* quantum_delete_matrix(int* param0) {
    →free(*(void**)(param0 + 2));
    quantum_memman(0 - *(param0 + 1) * *param0 * 8);
    int* result = param0;
    *(result + 2) = 0;
    return result;
}

int quantum_delete_qureg(int param0) {
    if(*(int*)(param0 + 8) && *(int*)(param0 + 16)) {
        quantum_destroy_hash(param0);
    }
    →free(*(void**)(param0 + 12));
    quantum_memman(0 - *(int*)(param0 + 4) * 16);
    int result = param0;
    *(int*)(result + 12) = 0;
    return result;
}

int quantum_delete_qureg_hashpreserve(int param0) {
    →free(*(void**)(param0 + 12));
    quantum_memman(0 - *(int*)(param0 + 4) * 16);
    int result = param0;
    *(int*)(result + 12) = 0;
    return result;
}

int* quantum_density_matrix(int* param0) {
    int v0;
    float v1;
    int v2;
    int v3;
    int* ptr0;
    int max = 1 << (**(unsigned int*)(ptr0 + 2) & 0x1f);
    if(max < 0) {
        quantum_error(3);
    }
    int v4 = max;
    int v5 = max;
    quantum_new_matrix(&v2);
    for(int i = 0; i < *ptr0; ++i) {
        quantum_reconstruct_hash(i * 20 + *(ptr0 + 2));
        for(int j = 0; j < max; ++j) {
            for(int k = 0; k < max; ++k) {
                int* ptr1 = (int*)(i * 20 + *(ptr0 + 2));
                int v6 = quantum_get_state(j, j >> 31, ptr1[0], ptr1[1], ptr1[2], ptr1[3], ptr1[4]);
                int* ptr2 = (int*)(i * 20 + *(ptr0 + 2));
                int v7 = quantum_get_state(k, k >> 31, ptr2[0], ptr2[1], ptr2[2], ptr2[3], ptr2[4]);
                if(v6 >= 0 && v7 >= 0) {
                    int* ptr3 = (int*)((v0 * k + j) * 8 + v3);
                    float* ptr4 = (float*)((v0 * k + j) * 8 + v3);
                    float v8 = *ptr4;
                    float v9 = *(ptr4 + 1);
                    float* ptr5 = (float*)(v7 * 16 + *(int*)(i * 20 + *(ptr0 + 2) + 12));
                    float v10 = (float)__mulsc3(*(float*)(i * 4 + *(ptr0 + 1)), 0.0, ptr5[0], ptr5[1]);
                    float v11 = v1;
                    int* ptr6 = (int*)(v6 * 16 + *(int*)(i * 20 + *(ptr0 + 2) + 12));
                    int v12 = quantum_conj(ptr6[0], ptr6[1]);
                    int v13 = __mulsc3(v10, v11, (float)v12, v1);
                    __SyntheticTypeUnknownF v14 = v9 + v13;
                    int v15 = v8 + v1;
                    int v16 = v8 + v1;
                    *ptr3 = v14;
                    *(ptr3 + 1) = v16;
                }
            }
        }
    }
    *param0 = v2;
    *(param0 + 1) = v0;
    *(param0 + 2) = v3;
    return param0;
}

int quantum_destroy_hash(int param0) {
    →free(*(void**)(param0 + 16));
    quantum_memman(-4 << (*(int*)(param0 + 8) & 0x1f));
    int result = param0;
    *(int*)(result + 16) = 0;
    return result;
}

float quantum_dot_product(int param0, int param1) {
    float v0;
    float result = (float)0.0;
    float v1 = (float)0.0;
    if(*(int*)(param1 + 8)) {
        quantum_reconstruct_hash3(param1);
    }
    for(int i = 0; i < *(int*)(param0 + 4); ++i) {
        int v2 = i * 16 + *(int*)(param0 + 12);
        int v3 = quantum_get_state3(*(int*)(v2 + 8), *(int*)(v2 + 12), *(int*)param1, *(int*)(param1 + 4), *(int*)(param1 + 8), *(int*)(param1 + 12), *(int*)(param1 + 16));
        if(v3 >= 0) {
            int* ptr0 = (int*)(i * 16 + *(int*)(param0 + 12));
            int v4 = quantum_conj(ptr0[0], ptr0[1]);
            float* ptr1 = (float*)(v3 * 16 + *(int*)(param1 + 12));
            int v5 = __mulsc3((float)v4, v0, ptr1[0], ptr1[1]);
            __SyntheticTypeUnknownF v6 = v0 + result;
            float v7 = (float)(v5 + v1);
            result = v6;
            v1 = v7;
        }
    }
    return result;
}

float quantum_dot_product_noconj(int param0, int param1) {
    float v0;
    float result = (float)0.0;
    float v1 = (float)0.0;
    if(*(int*)(param1 + 8)) {
        quantum_reconstruct_hash3(param1);
    }
    for(int i = 0; i < *(int*)(param0 + 4); ++i) {
        int v2 = i * 16 + *(int*)(param0 + 12);
        int v3 = quantum_get_state3(*(int*)(v2 + 8), *(int*)(v2 + 12), *(int*)param1, *(int*)(param1 + 4), *(int*)(param1 + 8), *(int*)(param1 + 12), *(int*)(param1 + 16));
        if(v3 >= 0) {
            float* ptr0 = (float*)(i * 16 + *(int*)(param0 + 12));
            float* ptr1 = (float*)(v3 * 16 + *(int*)(param1 + 12));
            int v4 = __mulsc3(ptr0[0], ptr0[1], ptr1[0], ptr1[1]);
            __SyntheticTypeUnknownF v5 = v0 + result;
            float v6 = (float)(v4 + v1);
            result = v5;
            v1 = v6;
        }
    }
    return result;
}

unsigned int quantum_double2char(int param0, int param1, int param2) {
    int v0 = param0;
    int v1 = param1;
    int* ptr0 = &v0;
    unsigned int v2 = 0;
    unsigned int i;
    for(i = v2; i <= 7; i = v2) {
        *(char*)(v2 + param2) = *(char*)((int)ptr0 + v2);
        ++v2;
    }
    return i;
}

// Stale decompilation - Refresh this view to re-decompile this code
int quantum_error(int param0) {
    unsigned int v0 = quantum_error_handler(0);
    if(!v0) {
        →fflush(stdout);
        int v1 = quantum_strerr(param0);
        →fprintf(stderr, "ERROR: %s\n", v1);
        →fflush(stderr);
        /*NO_RETURN*/ →abort();
    }
    return v0(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int quantum_error_handler(unsigned int param0) {
    if(param0) {
        errfunc.2059 = param0;
    }
    return errfunc.2059;
}

int quantum_exp_mod_n(int param0, int param1, int param2, int param3, size_t* param4) {
    quantum_sigma_x((param3 + 1) * 2, param4);
    int max = 1;
    int i;
    for(i = max; i <= param2; i = max) {
        int v0 = (unsigned int)((unsigned long long)param1 | ((unsigned long long)(param1 >> 31) << 32)) % param0;
        for(int j = 1; j < max; ++j) {
            v0 = (unsigned int)((unsigned long long)(v0 * v0) | ((unsigned long long)((v0 * v0) >> 31) << 32)) % param0;
        }
        mul_mod_n(param0, v0, param3 * 2 + max + (param3 + 1), param3, param4);
        ++max;
    }
    return i;
}

int quantum_frac_approx(int* param0, int* param1, int param2) {
    __SyntheticTypeUnknown v0;
    int v1;
    short v2;
    int v3;
    int v4 = *param0;
    float v5 = (double)*param0 / (double)*param1;
    char v6 = 0;
    float v7 = v5;
    int v8 = 0;
    int v9 = 1;
    int v10 = 1;
    int v11 = 0;
    int v12 = 0;
    int result = 0;
    v2 = fnstcw(v2);
    short v13 = (unsigned short)(unsigned char)v2 | ((unsigned short)12 << 8);
    do {
        v0[v6 - 1] = v7;
        v0[v6 - 2] = 5.0E-6;
        v0[v6 - 1] += v0[v6 - 2];
        v13 = fldcw(v13);
        fistp();
        v2 = fldcw(v2);
        v0[v6 - 2] = v7;
        v0[v6 - 3] = (double)v1;
        v0[v6 - 4] = 5.0E-6;
        v0[v6 - 3] -= v0[v6 - 4];
        v0[v6 - 2] -= v0[v6 - 3];
        fld1();
        v0[v6 - 1] /= v0[v6 - 2];
        v7 = v0[v6 - 1];
        if(v11 * v1 + v9 > 1 << (param2 & 0x1f)) {
            break;
        }
        else {
            v12 = v10 * v1 + v8;
            result = v11 * v1 + v9;
            v8 = v10;
            v9 = v11;
            v10 = v12;
            v11 = result;
            v0[v6 - 1] = (double)v12;
            v0[v6 - 2] = (double)result;
            v0[v6 - 1] /= v0[v6 - 2];
            v0[v6 - 2] = v5;
            v0[v6 - 1] -= v0[v6 - 2];
            fabs();
            v6 -= 2;
            v0[v6] = (double)(2 << (param2 & 0x1f));
            fld1();
            v0[v14 + 1] = fdivrp(v0[v6 + 1], v0[v6]);
            fucompp();
            (unsigned short)v15 = fnstsw((unsigned short)(2 << (param2 & 0x1f)));
        }
    }
    while(!((v3 >>> 8) & 0x1) && !((v3 >>> 14) & 0x1));
    *param0 = v12;
    *param1 = result;
    return result;
}

int quantum_frand() {
    return →rand();
}

unsigned int quantum_gate1(int param0, int param1, int param2, float* param3, int param4) {
    float v0;
    int v1;
    int v2;
    int v3;
    int v4;
    float v5;
    int v6;
    __int128 v7;
    __int128 v8;
    int v9;
    int v10;
    int v11;
    __SyntheticTypeUnknownF v12;
    int v13;
    int v14 = 0;
    int v15 = 0;
    int v16 = 1;
    float v17 = (float)0.0;
    float v18 = (float)0.0;
    if(param2 != 2 || param1 != 2) {
        quantum_error(4);
    }
    quantum_reconstruct_hash2(param4);
    int i;
    for(i = 0; i < *(int*)(param4 + 4); ++i) {
        if(v16) {
            int v19 = i * 16 + *(int*)(param4 + 12);
            if((((i >> 31) ^ *(int*)(v19 + 12)) | (*(int*)(v19 + 8) ^ i))) {
                v16 = 0;
            }
        }
        int v20 = i * 16 + *(int*)(param4 + 12);
        int v21 = *(int*)(v20 + 8);
        int v22 = *(int*)(v20 + 12);
        v4 = 1;
        v3 = 0;
        int v23 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
        int v24 = 1 << (param0 & 0x1f);
        if(((unsigned char)param0 & 0x20)) {
            v23 = v24;
            v24 = 0;
        }
        int v25 = quantum_get_state2(v24 ^ v21, v23 ^ v22, *(int*)param4, *(int*)(param4 + 4), *(int*)(param4 + 8), *(int*)(param4 + 12), *(int*)(param4 + 16));
        if(v25 == -1) {
            ++v14;
        }
    }
    void* ptr0 = →realloc(*(void**)(param4 + 12), (size_t)((*(int*)(param4 + 4) + v14) * 16));
    *(void**)(param4 + 12) = ptr0;
    if(!*(int*)(param4 + 12)) {
        quantum_error(2);
    }
    quantum_memman(v14 * 16);
    for(i = 0; i < v14; ++i) {
        int v26 = (*(int*)(param4 + 4) + i) * 16 + *(int*)(param4 + 12);
        *(int*)(v26 + 8) = 0;
        *(int*)(v26 + 12) = 0;
        int* ptr1 = (int*)((*(int*)(param4 + 4) + i) * 16 + *(int*)(param4 + 12));
        *ptr1 = 0;
        *(ptr1 + 1) = 0;
    }
    void* __ptr = →calloc((size_t)(*(int*)(param4 + 4) + v14), 1);
    if(!__ptr) {
        quantum_error(2);
    }
    quantum_memman(*(int*)(param4 + 4) + v14);
    int v27 = *(int*)(param4 + 4);
    int v28 = *(int*)param4;
    int v29 = (unsigned int)((1L << (v28 & 0x1f)) >>> 32L);
    int v30 = 1 << (v28 & 0x1f);
    if(((unsigned char)v28 & 0x20)) {
        v29 = v30;
        v30 = 0;
    }
    int v31 = v29;
    int v32 = v30;
    __SyntheticTypeUnknownF v33 = v29 >= 0 ? (double)*(long long*)&v32: *(__int128*)&gvar_8054330 + v33;
    double v34 = v33;
    fld1();
    v80[v81 + 1] = fdivrp(v8, v34);
    __SyntheticTypeUnknownF v35 = 1.0E-6;
    int v36 = v12 * 1.0E-6;
    for(i = 0; i < *(int*)(param4 + 4); ++i) {
        if(!*(char*)((int)__ptr + i)) {
            int v37 = *(int*)(i * 16 + *(int*)(param4 + 12) + 8);
            int v38 = 1 << (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v38 = 0;
            }
            int v39 = v38 & v37;
            v17 = (float)0.0;
            v18 = (float)0.0;
            int v40 = i * 16 + *(int*)(param4 + 12);
            int v41 = *(int*)(v40 + 8);
            int v42 = *(int*)(v40 + 12);
            v4 = 1;
            v3 = 0;
            int v43 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
            int v44 = 1 << (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v43 = v44;
                v44 = 0;
            }
            v2 = quantum_get_state2(v44 ^ v41, v43 ^ v42, *(int*)param4, *(int*)(param4 + 4), *(int*)(param4 + 8), *(int*)(param4 + 12), *(int*)(param4 + 16));
            float* ptr2 = (float*)(i * 16 + *(int*)(param4 + 12));
            float v45 = *(ptr2 + 1);
            float v46 = *ptr2;
            float v47 = v45;
            if(v2 >= 0) {
                float* ptr3 = (float*)(v2 * 16 + *(int*)(param4 + 12));
                float v48 = *(ptr3 + 1);
                v17 = *ptr3;
                v18 = v48;
            }
            if(v39) {
                int* ptr4 = (int*)(i * 16 + *(int*)(param4 + 12));
                int v49 = __mulsc3(param3[4], param3[5], v17, v18);
                float v50 = v5;
                v1 = __mulsc3(param3[6], param3[7], v46, v47);
                v0 = (float)(v49 + v5);
                *ptr4 = v50 + v1;
                *(float*)(ptr4 + 1) = (float)(v49 + v5);
            }
            else {
                int* ptr5 = (int*)(i * 16 + *(int*)(param4 + 12));
                int v51 = __mulsc3(param3[0], param3[1], v46, v47);
                float v52 = v5;
                v1 = __mulsc3(param3[2], param3[3], v17, v18);
                v0 = (float)(v51 + v5);
                *ptr5 = v52 + v1;
                *(float*)(ptr5 + 1) = (float)(v51 + v5);
            }
            if(v2 < 0) {
                float v53 = param3[2];
                float v54 = param3[3];
                v0 = param3[3];
                fldz();
                v80[v81 + 2] = fucomp(v7, v0);
                (unsigned short)v83 = fnstsw((unsigned short)v54);
                v1 = (unsigned int)((v9 >>> 14) & 0x1 ? 1: 0) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                v9 = (unsigned int)((v9 >>> 10) & 0x1 ? 0: 1) | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
                int v55 = v9 & v1;
                fldz();
                fucompp();
                (unsigned short)v83 = fnstsw((unsigned short)v9);
                char v56 = (v11 >>> 10) & 0x1;
                v11 = (unsigned int)((v11 >>> 14) & 0x1 ? 1: 0) | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
                if((unsigned char)(((unsigned int)(v56 ? 0: 1) | ((unsigned int)((v53 >>> 8) & 0xffffff) << 8)) & v11 & v55) && v39) {
                    break;
                }
                else {
                    float v57 = param3[4];
                    float v58 = param3[5];
                    v0 = param3[5];
                    fldz();
                    v80[v81 + 2] = fucomp(v35, v0);
                    (unsigned short)v83 = fnstsw((unsigned short)v58);
                    v55 = (unsigned int)((v13 >>> 14) & 0x1 ? 1: 0) | ((unsigned int)((v55 >>> 8) & 0xffffff) << 8);
                    v13 = (unsigned int)((v13 >>> 10) & 0x1 ? 0: 1) | ((unsigned int)((v13 >>> 8) & 0xffffff) << 8);
                    fldz();
                    fucompp();
                    (unsigned short)v83 = fnstsw((unsigned short)v13);
                    char v59 = (v6 >>> 10) & 0x1;
                    v6 = (unsigned int)((v6 >>> 14) & 0x1 ? 1: 0) | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
                    if((unsigned char)(((unsigned int)(v59 ? 0: 1) | ((unsigned int)((v57 >>> 8) & 0xffffff) << 8)) & v13 & v6 & v55) && !v39) {
                        break;
                    }
                    else {
                        int v60 = v27 * 16 + *(int*)(param4 + 12);
                        int v61 = i * 16 + *(int*)(param4 + 12);
                        int v62 = *(int*)(v61 + 8);
                        int v63 = *(int*)(v61 + 12);
                        v4 = 1;
                        v3 = 0;
                        int v64 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
                        int v65 = 1 << (param0 & 0x1f);
                        if(((unsigned char)param0 & 0x20)) {
                            v64 = v65;
                            v65 = 0;
                        }
                        int v66 = v60;
                        *(int*)(v66 + 8) = v65 ^ v62;
                        *(int*)(v66 + 12) = v64 ^ v63;
                        if(v39) {
                            int* ptr6 = (int*)(v27 * 16 + *(int*)(param4 + 12));
                            int v67 = __mulsc3(param3[2], param3[3], v46, v47);
                            *ptr6 = v67;
                            *(float*)(ptr6 + 1) = v5;
                        }
                        else {
                            int* ptr7 = (int*)(v27 * 16 + *(int*)(param4 + 12));
                            int v68 = __mulsc3(param3[4], param3[5], v46, v47);
                            *ptr7 = v68;
                            *(float*)(ptr7 + 1) = v5;
                        }
                        ++v27;
                    }
                }
            }
            else if(v39) {
                int* ptr8 = (int*)(v2 * 16 + *(int*)(param4 + 12));
                int v69 = __mulsc3(param3[0], param3[1], v17, v18);
                float v70 = v5;
                int v71 = __mulsc3(param3[2], param3[3], v46, v47);
                v35 = v70 + v71;
                v0 = (float)(v69 + v5);
                *ptr8 = v35;
                *(float*)(ptr8 + 1) = (float)(v69 + v5);
            }
            else {
                int* ptr9 = (int*)(v2 * 16 + *(int*)(param4 + 12));
                int v72 = __mulsc3(param3[4], param3[5], v46, v47);
                float v73 = v5;
                int v74 = __mulsc3(param3[6], param3[7], v17, v18);
                v35 = v73 + v74;
                v0 = (float)(v72 + v5);
                *ptr9 = v35;
                *(float*)(ptr9 + 1) = (float)(v72 + v5);
            }
            if(v2 >= 0) {
                *(char*)((int)__ptr + v2) = 1;
            }
        }
    }
    *(int*)(param4 + 4) = *(int*)(param4 + 4) + v14;
    →free(__ptr);
    quantum_memman(0 - *(int*)(param4 + 4));
    if(!v16) {
        i = 0;
        v2 = 0;
        while(*(int*)(param4 + 4) > i) {
            int* ptr10 = (int*)(i * 16 + *(int*)(param4 + 12));
            int v75 = quantum_prob_inline3(ptr10[0], ptr10[1]);
            fucompp();
            (unsigned short)v83 = fnstsw((unsigned short)v75);
            if(!((v10 >>> 8) & 0x1) && !((v10 >>> 14) & 0x1)) {
                ++v2;
                ++v15;
            }
            else if(v2) {
                int v76 = (i - v2) * 16 + *(int*)(param4 + 12);
                int v77 = i * 16 + *(int*)(param4 + 12);
                int v78 = *(int*)(v77 + 12);
                *(int*)(v76 + 8) = *(int*)(v77 + 8);
                *(int*)(v76 + 12) = v78;
                int* ptr11 = (int*)((i - v2) * 16 + *(int*)(param4 + 12));
                int* ptr12 = (int*)(i * 16 + *(int*)(param4 + 12));
                int v79 = *(ptr12 + 1);
                *ptr11 = *ptr12;
                *(ptr11 + 1) = v79;
            }
            ++i;
        }
        if(v15) {
            *(int*)(param4 + 4) = *(int*)(param4 + 4) - v15;
            void* ptr13 = →realloc(*(void**)(param4 + 12), (size_t)(*(int*)(param4 + 4) * 16));
            *(void**)(param4 + 12) = ptr13;
            if(!*(int*)(param4 + 12)) {
                quantum_error(2);
            }
            quantum_memman(0 - v15 * 16);
        }
    }
    return quantum_decohere((size_t*)param4);
}

unsigned int quantum_gate2(int param0, int param1, int param2, int param3, int param4, int param5) {
    int j;
    int v0;
    int v1;
    __int128 v2;
    float v3;
    int v4;
    int v5;
    int v6;
    int v7;
    __SyntheticTypeUnknownF v8;
    int v9 = 0;
    int v10 = 0;
    if(param3 != 4 || param2 != 4) {
        quantum_error(4);
    }
    int i;
    for(i = 0; i < 1 << (*(int*)(param5 + 8) & 0x1f); ++i) {
        *(int*)(i * 4 + *(int*)(param5 + 16)) = 0;
    }
    for(i = 0; i < *(int*)(param5 + 4); ++i) {
        int v11 = i * 16 + *(int*)(param5 + 12);
        quantum_add_hash2(*(int*)(v11 + 8), *(int*)(v11 + 12), i, param5);
    }
    for(i = 0; i < *(int*)(param5 + 4); ++i) {
        int v12 = i * 16 + *(int*)(param5 + 12);
        int v13 = *(int*)(v12 + 8);
        int v14 = *(int*)(v12 + 12);
        int v15 = param0;
        v1 = 1;
        v0 = 0;
        int v16 = (unsigned int)((1L << (v15 & 0x1f)) >>> 32L);
        int v17 = 1 << (v15 & 0x1f);
        if(((unsigned char)v15 & 0x20)) {
            v16 = v17;
            v17 = 0;
        }
        int v18 = quantum_get_state2(v17 ^ v13, v16 ^ v14, *(int*)param5, *(int*)(param5 + 4), *(int*)(param5 + 8), *(int*)(param5 + 12), *(int*)(param5 + 16));
        if(v18 == -1) {
            ++v9;
        }
        int v19 = i * 16 + *(int*)(param5 + 12);
        int v20 = *(int*)(v19 + 8);
        int v21 = *(int*)(v19 + 12);
        int v22 = param1;
        v1 = 1;
        v0 = 0;
        int v23 = (unsigned int)((1L << (v22 & 0x1f)) >>> 32L);
        int v24 = 1 << (v22 & 0x1f);
        if(((unsigned char)v22 & 0x20)) {
            v23 = v24;
            v24 = 0;
        }
        int v25 = quantum_get_state2(v24 ^ v20, v23 ^ v21, *(int*)param5, *(int*)(param5 + 4), *(int*)(param5 + 8), *(int*)(param5 + 12), *(int*)(param5 + 16));
        if(v25 == -1) {
            ++v9;
        }
    }
    void* ptr0 = →realloc(*(void**)(param5 + 12), (size_t)((*(int*)(param5 + 4) + v9) * 16));
    *(void**)(param5 + 12) = ptr0;
    if(!*(int*)(param5 + 12)) {
        quantum_error(4);
    }
    quantum_memman(v9 * 16);
    for(i = 0; i < v9; ++i) {
        int v26 = (*(int*)(param5 + 4) + i) * 16 + *(int*)(param5 + 12);
        *(int*)(v26 + 8) = 0;
        *(int*)(v26 + 12) = 0;
        int* ptr1 = (int*)((*(int*)(param5 + 4) + i) * 16 + *(int*)(param5 + 12));
        *ptr1 = 0;
        *(ptr1 + 1) = 0;
    }
    void* __ptr = →calloc((size_t)(*(int*)(param5 + 4) + v9), 1);
    if(!__ptr) {
        quantum_error(4);
    }
    quantum_memman(*(int*)(param5 + 4) + v9);
    int v27 = *(int*)(param5 + 4);
    int v28 = *(int*)param5;
    int v29 = (unsigned int)((1L << (v28 & 0x1f)) >>> 32L);
    int v30 = 1 << (v28 & 0x1f);
    if(((unsigned char)v28 & 0x20)) {
        v29 = v30;
        v30 = 0;
    }
    int v31 = v29;
    int v32 = v30;
    __SyntheticTypeUnknownF v33 = v29 >= 0 ? (double)*(long long*)&v32: *(__int128*)&gvar_8054330 + v33;
    double v34 = v33;
    fld1();
    v85[v86 + 1] = fdivrp(v2, v34);
    int v35 = v8 / 1000000.0;
    int v36 = param0;
    int v37 = param1;
    for(i = 0; i < *(int*)(param5 + 4); ++i) {
        if(!*(char*)((int)__ptr + i)) {
            int v38 = i * 16 + *(int*)(param5 + 12);
            j = quantum_bitmask(*(int*)(v38 + 8), *(int*)(v38 + 12), 2, &v36);
            *(int*)(j * 4 + (int)&v5) = i;
            int v39 = j ^ 0x1;
            int v40 = i * 16 + *(int*)(param5 + 12);
            int v41 = *(int*)(v40 + 8);
            int v42 = *(int*)(v40 + 12);
            int v43 = param1;
            v1 = 1;
            v0 = 0;
            int v44 = (unsigned int)((1L << (v43 & 0x1f)) >>> 32L);
            int v45 = 1 << (v43 & 0x1f);
            if(((unsigned char)v43 & 0x20)) {
                v44 = v45;
                v45 = 0;
            }
            int v46 = quantum_get_state2(v45 ^ v41, v44 ^ v42, *(int*)param5, *(int*)(param5 + 4), *(int*)(param5 + 8), *(int*)(param5 + 12), *(int*)(param5 + 16));
            *(int*)(v39 * 4 + (int)&v5) = v46;
            int v47 = j ^ 0x2;
            int v48 = i * 16 + *(int*)(param5 + 12);
            int v49 = *(int*)(v48 + 8);
            int v50 = *(int*)(v48 + 12);
            int v51 = param0;
            v1 = 1;
            v0 = 0;
            int v52 = (unsigned int)((1L << (v51 & 0x1f)) >>> 32L);
            int v53 = 1 << (v51 & 0x1f);
            if(((unsigned char)v51 & 0x20)) {
                v52 = v53;
                v53 = 0;
            }
            int v54 = quantum_get_state2(v53 ^ v49, v52 ^ v50, *(int*)param5, *(int*)(param5 + 4), *(int*)(param5 + 8), *(int*)(param5 + 12), *(int*)(param5 + 16));
            *(int*)(v47 * 4 + (int)&v5) = v54;
            int v55 = j ^ 0x3;
            int v56 = i * 16 + *(int*)(param5 + 12);
            int v57 = *(int*)(v56 + 8);
            int v58 = *(int*)(v56 + 12);
            int v59 = param0;
            v1 = 1;
            v0 = 0;
            int v60 = (unsigned int)((1L << (v59 & 0x1f)) >>> 32L);
            int v61 = 1 << (v59 & 0x1f);
            if(((unsigned char)v59 & 0x20)) {
                v60 = v61;
                v61 = 0;
            }
            int v62 = v61 ^ v57;
            int v63 = v60 ^ v58;
            int v64 = param1;
            int v65 = 1;
            int v66 = 0;
            int v67 = (unsigned int)(v64 & 0xFF);
            int v68 = (unsigned int)((1L << (v67 & 0x1f)) >>> 32L);
            int v69 = 1 << (v67 & 0x1f);
            if(((unsigned char)v67 & 0x20)) {
                v68 = v69;
                v69 = 0;
            }
            v64 = v69;
            int v70 = v68;
            int v71 = quantum_get_state2(v62 ^ v64, v63 ^ v70, *(int*)param5, *(int*)(param5 + 4), *(int*)(param5 + 8), *(int*)(param5 + 12), *(int*)(param5 + 16));
            *(int*)(v55 * 4 + (int)&v5) = v71;
            for(j = 0; j <= 3; ++j) {
                if(*(int*)(j * 4 + (int)&v5) == -1) {
                    *(int*)(j * 4 + (int)&v5) = v27;
                    ++v27;
                }
                int v72 = j;
                int* ptr2 = (int*)(*(int*)(j * 4 + (int)&v5) * 16 + *(int*)(param5 + 12));
                int v73 = *(ptr2 + 1);
                *(int*)(v72 * 8 + (int)&v6) = *ptr2;
                *(int*)(v72 * 8 + (int)&v4) = v73;
            }
            for(j = 0; j <= 3; ++j) {
                int* ptr3 = (int*)(*(int*)(j * 4 + (int)&v5) * 16 + *(int*)(param5 + 12));
                *ptr3 = 0;
                *(ptr3 + 1) = 0;
                for(int k = 0; k <= 3; ++k) {
                    int* ptr4 = (int*)(*(int*)(j * 4 + (int)&v5) * 16 + *(int*)(param5 + 12));
                    float* ptr5 = (float*)(*(int*)(j * 4 + (int)&v5) * 16 + *(int*)(param5 + 12));
                    float v74 = *ptr5;
                    float v75 = *(ptr5 + 1);
                    float* ptr6 = (float*)((j * param3 + k) * 8 + param4);
                    int v76 = __mulsc3(ptr6[0], ptr6[1], *(float*)(k * 8 + (int)&v6), *(float*)(k * 8 + (int)&v4));
                    __SyntheticTypeUnknownF v77 = v75;
                    int v78 = v74 + v3;
                    int v79 = v78;
                    *ptr4 = v77 + (double)v76;
                    *(ptr4 + 1) = v79;
                }
                *(char*)(*(int*)(j * 4 + (int)&v5) + (int)__ptr) = 1;
            }
        }
    }
    *(int*)(param5 + 4) = *(int*)(param5 + 4) + v9;
    →free(__ptr);
    quantum_memman(0 - *(int*)(param5 + 4));
    i = 0;
    j = 0;
    while(*(int*)(param5 + 4) > i) {
        int* ptr7 = (int*)(i * 16 + *(int*)(param5 + 12));
        int v80 = quantum_prob_inline3(ptr7[0], ptr7[1]);
        fucompp();
        (unsigned short)v87 = fnstsw((unsigned short)v80);
        if(!((v7 >>> 8) & 0x1) && !((v7 >>> 14) & 0x1)) {
            ++j;
            ++v10;
        }
        else if(j) {
            int v81 = (i - j) * 16 + *(int*)(param5 + 12);
            int v82 = i * 16 + *(int*)(param5 + 12);
            int v83 = *(int*)(v82 + 12);
            *(int*)(v81 + 8) = *(int*)(v82 + 8);
            *(int*)(v81 + 12) = v83;
            int* ptr8 = (int*)((i - j) * 16 + *(int*)(param5 + 12));
            int* ptr9 = (int*)(i * 16 + *(int*)(param5 + 12));
            int v84 = *(ptr9 + 1);
            *ptr8 = *ptr9;
            *(ptr8 + 1) = v84;
        }
        ++i;
    }
    if(v10) {
        *(int*)(param5 + 4) = *(int*)(param5 + 4) - v10;
        void* ptr10 = →realloc(*(void**)(param5 + 12), (size_t)(*(int*)(param5 + 4) * 16));
        *(void**)(param5 + 12) = ptr10;
        if(!*(int*)(param5 + 12)) {
            quantum_error(2);
        }
        quantum_memman(0 - v10 * 16);
    }
    return quantum_decohere((size_t*)param5);
}

unsigned int quantum_gate_counter(int param0) {
    if(param0 > 0) {
        counter.4541 += param0;
    }
    else if(param0 < 0) {
        counter.4541 = 0;
    }
    return counter.4541;
}

int quantum_gcd(int param0, int param1) {
    while(param1) {
        int v0 = (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param0 >> 31) << 32)) % param1;
        param0 = param1;
        param1 = v0;
    }
    return param0;
}

float quantum_get_decoherence() {
    return quantum_lambda;
}

int quantum_get_state(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    int result;
    int v0 = param0;
    int v1 = param1;
    if(!param4) {
        result = param0;
    }
    else {
        int v2 = quantum_hash64(param0, param1, param4);
        while(*(int*)(v2 * 4 + param6)) {
            int v3 = param5 - (1 - *(int*)(v2 * 4 + param6)) * 16;
            if(!((*(int*)(v3 + 8) ^ v0) | (*(int*)(v3 + 12) ^ v1))) {
                return *(int*)(v2 * 4 + param6) - 1;
            }
            ++v2;
            if(1 << (param4 & 0x1f) == v2) {
                v2 = 0;
            }
        }
        result = -1;
    }
    return result;
}

int quantum_get_state2(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    int result;
    int v0 = param0;
    int v1 = param1;
    if(!param4) {
        result = param0;
    }
    else {
        int v2 = quantum_hash642(param0, param1, param4);
        while(*(int*)(v2 * 4 + param6)) {
            int v3 = param5 - (1 - *(int*)(v2 * 4 + param6)) * 16;
            if(!((*(int*)(v3 + 8) ^ v0) | (*(int*)(v3 + 12) ^ v1))) {
                return *(int*)(v2 * 4 + param6) - 1;
            }
            ++v2;
            if(1 << (param4 & 0x1f) == v2) {
                v2 = 0;
            }
        }
        result = -1;
    }
    return result;
}

int quantum_get_state3(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    int result;
    int v0 = param0;
    int v1 = param1;
    if(!param4) {
        result = param0;
    }
    else {
        int v2 = quantum_hash643(param0, param1, param4);
        while(*(int*)(v2 * 4 + param6)) {
            int v3 = param5 - (1 - *(int*)(v2 * 4 + param6)) * 16;
            if(!((*(int*)(v3 + 8) ^ v0) | (*(int*)(v3 + 12) ^ v1))) {
                return *(int*)(v2 * 4 + param6) - 1;
            }
            ++v2;
            if(1 << (param4 & 0x1f) == v2) {
                v2 = 0;
            }
        }
        result = -1;
    }
    return result;
}

int quantum_get_version() {
    return "0.9.1";
}

int quantum_getwidth(int param0) {
    int i;
    for(i = 1; 1 << (i & 0x1f) < param0; ++i) {
    }
    return i;
}

int quantum_hadamard(int param0, int param1) {
    int v0;
    int v1;
    float* ptr0;
    int result = quantum_objcode_put(6);
    if(!result) {
        int v2 = 2;
        int v3 = 2;
        quantum_new_matrix(&v0);
        int v4 = v0;
        int v5 = v1;
        float* ptr1 = ptr0;
        ptr0[0] = (float)0.70710677;
        ptr0[1] = (float)0.0;
        ptr1[2] = (float)0.70710677;
        ptr1[3] = (float)0.0;
        ptr1[4] = (float)0.70710677;
        ptr1[5] = (float)0.0;
        ptr1[6] = (float)-0.70710677;
        ptr1[7] = (float)0.0;
        quantum_gate1(param0, v4, v5, ptr1, param1);
        result = (int)quantum_delete_matrix(&v4);
    }
    return result;
}

int quantum_hash64(int param0, int param1, int param2) {
    return ((param0 ^ param1) * 0x9e370001) >>> ((32 - param2) & 0x1f);
}

int quantum_hash642(int param0, int param1, int param2) {
    return ((param0 ^ param1) * 0x9e370001) >>> ((32 - param2) & 0x1f);
}

int quantum_hash643(int param0, int param1, int param2) {
    return ((param0 ^ param1) * 0x9e370001) >>> ((32 - param2) & 0x1f);
}

float quantum_imag(int param0, int param1) {
    return *(float*)(&param0 + 1);
}

float quantum_imag2(int param0, int param1) {
    return *(float*)(&param0 + 1);
}

float quantum_imag3(int param0, int param1) {
    return *(float*)(&param0 + 1);
}

float quantum_imag4(int param0, int param1) {
    return *(float*)(&param0 + 1);
}

float quantum_imag5(int param0, int param1) {
    return *(float*)(&param0 + 1);
}

float quantum_imag6(int param0, int param1) {
    return *(float*)(&param0 + 1);
}

float quantum_imag7(int param0, int param1) {
    return *(float*)(&param0 + 1);
}

int quantum_int2char(int param0, int param1) {
    int max = 4;
    int v0 = 0;
    int i;
    for(i = v0; i < max; i = v0) {
        *(char*)(v0 + param1) = (unsigned char)((unsigned long long)param0 | ((unsigned long long)(param0 >> 31) << 32)) / (unsigned char)(1 << ((~(v0 - max) * 8) & 0x1f));
        param0 = (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param0 >> 31) << 32)) % (1 << ((~(v0 - max) * 8) & 0x1f));
        ++v0;
    }
    return i;
}

int quantum_inverse_mod(int param0, int param1) {
    int result = 1;
    for(int i = result * param1; (unsigned int)((unsigned long long)i | ((unsigned long long)(i >> 31) << 32)) % param0 != 1; i = result * param1) {
        ++result;
    }
    return result;
}

int quantum_ipow(int param0, int param1) {
    int result = 1;
    for(int i = 0; i < param1; ++i) {
        result *= param0;
    }
    return result;
}

int* quantum_kronecker(int* param0) {
    int v0;
    int* ptr0;
    int* ptr1;
    int v1 = *ptr0 + *ptr1;
    size_t __nmemb = (size_t)(*(ptr0 + 1) * *(ptr1 + 1));
    int v2 = *(ptr0 + 1) * *(ptr1 + 1) + 2;
    void* ptr2 = →calloc(__nmemb, 16);
    if(!ptr2) {
        quantum_error(2);
    }
    quantum_memman((int)(__nmemb * 16));
    void* ptr3 = →calloc((size_t)(1 << (v2 & 0x1f)), 4);
    if(!ptr3) {
        quantum_error(2);
    }
    quantum_memman(4 << (v2 & 0x1f));
    for(int i = 0; i < *(ptr0 + 1); ++i) {
        for(int j = 0; j < *(ptr1 + 1); ++j) {
            int* ptr4 = (int*)((*(ptr1 + 1) * i + j) * 16 + (int)ptr2);
            int v3 = i * 16 + *(ptr0 + 3);
            int v4 = *ptr1;
            int v5 = *(int*)(v3 + 8);
            int v6 = (unsigned int)((((unsigned long long)v5 | ((unsigned long long)*(int*)(v3 + 12) << 32)) << (v4 & 0x1f)) >>> 32L);
            int v7 = v5 << (v4 & 0x1f);
            if(((unsigned char)v4 & 0x20)) {
                v6 = v7;
                v7 = 0;
            }
            int v8 = j * 16 + *(ptr1 + 3);
            int v9 = *(int*)(v8 + 12) | v6;
            int* ptr5 = ptr4;
            *(ptr5 + 2) = *(int*)(v8 + 8) | v7;
            *(ptr5 + 3) = v9;
            int* ptr6 = (int*)((*(ptr1 + 1) * i + j) * 16 + (int)ptr2);
            float* ptr7 = (float*)(i * 16 + *(ptr0 + 3));
            float* ptr8 = (float*)(j * 16 + *(ptr1 + 3));
            int v10 = __mulsc3(ptr7[0], ptr7[1], ptr8[0], ptr8[1]);
            *ptr6 = v10;
            *(ptr6 + 1) = v0;
        }
    }
    *param0 = v1;
    *(size_t*)(param0 + 1) = __nmemb;
    *(param0 + 2) = v2;
    *(void**)(param0 + 3) = ptr2;
    *(void**)(param0 + 4) = ptr3;
    return param0;
}

int* quantum_matrix2qureg(int* param0) {
    char v0;
    float v1;
    __SyntheticTypeUnknown v2;
    int v3;
    short v4;
    int v5;
    short v6;
    int v7;
    int* ptr0;
    size_t __nmemb = 0;
    if(*(ptr0 + 1) != 1) {
        quantum_error(0x10000);
    }
    int v8 = v5;
    int i;
    for(i = 0; i < *ptr0; ++i) {
        float* ptr1 = (float*)(i * 8 + *(ptr0 + 2));
        float v9 = *ptr1;
        float v10 = *(ptr1 + 1);
        float v11 = *(ptr1 + 1);
        v1 = v9;
        v0 = v0 - 1;
        v2[v0] = v1;
        fldz();
        fucompp();
        (unsigned short)v19 = fnstsw((unsigned short)v10);
        if(((v6 >>> 14) & 0x1) && !((v6 >>> 10) & 0x1)) {
            --v0;
            v2[v0] = v11;
            fldz();
            fucompp();
            (unsigned short)v19 = fnstsw(v6);
            if(((v3 >>> 10) & 0x1) || !((v3 >>> 14) & 0x1)) {
                goto loc_8050BB1;
            }
        }
        else {
        loc_8050BB1:
            ++__nmemb;
        }
    }
    size_t v12 = __nmemb;
    int v13 = v5 + 2;
    void* ptr2 = →calloc(__nmemb, 16);
    if(!ptr2) {
        quantum_error(2);
    }
    quantum_memman((int)(__nmemb * 16));
    void* ptr3 = →calloc((size_t)(1 << (v13 & 0x1f)), 4);
    if(!ptr3) {
        quantum_error(2);
    }
    quantum_memman(4 << (v13 & 0x1f));
    i = 0;
    int v14 = 0;
    while(*ptr0 > i) {
        float* ptr4 = (float*)(i * 8 + *(ptr0 + 2));
        float v15 = *ptr4;
        float v16 = *(ptr4 + 1);
        float v17 = *(ptr4 + 1);
        v1 = v15;
        --v0;
        v2[v0] = v1;
        fldz();
        fucompp();
        (unsigned short)v19 = fnstsw((unsigned short)v16);
        if(((v4 >>> 14) & 0x1) && !((v4 >>> 10) & 0x1)) {
            --v0;
            v2[v0] = v17;
            fldz();
            fucompp();
            (unsigned short)v19 = fnstsw(v4);
            if(((v7 >>> 10) & 0x1) || !((v7 >>> 14) & 0x1)) {
                goto loc_8050CA1;
            }
        }
        else {
        loc_8050CA1:
            int* ptr5 = (int*)(v14 * 16 + (int)ptr2);
            *(ptr5 + 2) = i;
            *(ptr5 + 3) = i >> 31;
            int* ptr6 = (int*)(v14 * 16 + (int)ptr2);
            int* ptr7 = (int*)(i * 8 + *(ptr0 + 2));
            int v18 = *(ptr7 + 1);
            *ptr6 = *ptr7;
            *(ptr6 + 1) = v18;
            ++v14;
        }
        ++i;
    }
    *param0 = v8;
    *(size_t*)(param0 + 1) = v12;
    *(param0 + 2) = v13;
    *(void**)(param0 + 3) = ptr2;
    *(void**)(param0 + 4) = ptr3;
    return param0;
}

int* quantum_matrix_qureg(int* param0) {
    int v0;
    __SyntheticTypeUnknown v1;
    int v2;
    int v3;
    char v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15 = v6;
    int v16 = v13;
    int v17 = *(int*)v7;
    size_t __nmemb = (size_t)(1 << (v17 & 0x1f));
    int v18 = 0;
    int v19 = 0;
    void* ptr0 = →calloc(__nmemb, 16);
    if(!ptr0) {
        quantum_error(2);
    }
    quantum_memman((int)(__nmemb * 16));
    unsigned int v20 = 0;
    unsigned int v21 = 0;
    while(1) {
        unsigned int v22 = (unsigned int)(1 << (*(int*)v7 & 0x1f));
        unsigned int v23 = (unsigned int)(1 << (*(int*)v7 & 0x1f));
        unsigned int v24 = v22 >> 31;
        if(v24 <= v21 && (v24 < v21 || v23 <= v20)) {
            break;
        }
        else {
            int* ptr1 = (int*)(v20 * 16 + (int)ptr0);
            *(unsigned int*)(ptr1 + 2) = v20;
            *(unsigned int*)(ptr1 + 3) = v21;
            *(long long*)&v0 = *(double*)&v15;
            v14((int)&v10, (int)v20, (int)v21, v0, v11);
            int v25 = v10;
            int v26 = v2;
            int v27 = v8;
            int v28 = v3;
            int v29 = v9;
            int* ptr2 = (int*)(v20 * 16 + (int)ptr0);
            v1[v4] = quantum_dot_product_noconj(&v25, v7);
            *ptr2 = v5;
            *(ptr2 + 1) = v12;
            quantum_delete_qureg(&v25);
            unsigned int v30 = v20;
            ++v20;
            v21 = (unsigned int)((unsigned int)(v30 >= 0xffffffff) + v21);
        }
    }
    *param0 = v17;
    *(size_t*)(param0 + 1) = __nmemb;
    *(param0 + 2) = v18;
    *(void**)(param0 + 3) = ptr0;
    *(param0 + 4) = v19;
    return param0;
}

int quantum_measure(int param0, int param1, int param2, int param3) {
    int result;
    int v0;
    __SyntheticTypeUnknownF v1;
    __SyntheticTypeUnknownF v2;
    int v3 = quantum_objcode_put(128);
    if(v3) {
        result = 0;
    }
    else {
        quantum_frand();
        double v4 = v1;
        int v5 = 0;
        while(v5 < param1) {
            int* ptr0 = (int*)(v5 * 16 + param3);
            int v6 = quantum_prob_inline4(ptr0[0], ptr0[1]);
            v7[v9 + 1] = fsubrp(v1, v4);
            v4 = v2;
            fldz();
            fucompp();
            (unsigned short)v8 = fnstsw((unsigned short)v6);
            if(!((v0 >>> 8) & 0x1)) {
                return *(int*)(v5 * 16 + param3 + 8);
            }
            ++v5;
        }
        result = -1;
    }
    return result;
}

unsigned int quantum_memman(int param0) {
    mem.2105 += param0;
    if(mem.2105 > max.2106) {
        max.2106 = mem.2105;
    }
    return mem.2105;
}

int* quantum_mmult(int* param0) {
    int v0;
    int v1;
    float v2;
    int v3;
    int max2;
    int v4;
    int v5;
    int max1;
    int max;
    int v6;
    if(v3 != max2) {
        quantum_error(4);
    }
    int v7 = max1;
    int v8 = max;
    quantum_new_matrix(&v0);
    for(int i = 0; i < max; ++i) {
        for(int j = 0; j < max1; ++j) {
            for(int k = 0; k < max2; ++k) {
                int* ptr0 = (int*)((v5 * j + i) * 8 + v1);
                float* ptr1 = (float*)((v5 * j + i) * 8 + v1);
                float v9 = *ptr1;
                float v10 = *(ptr1 + 1);
                float* ptr2 = (float*)((j * v3 + k) * 8 + v6);
                float* ptr3 = (float*)((k * max + i) * 8 + v4);
                float v11 = *ptr3;
                float v12 = *(ptr3 + 1);
                float v13 = *ptr2;
                int v14 = *(ptr2 + 1);
                int v15 = __mulsc3(v13, *(ptr2 + 1), v11, v12);
                __SyntheticTypeUnknownF v16 = v10 + v15;
                v14 = v9 + v2;
                *ptr0 = v16;
                *(ptr0 + 1) = v9 + v2;
            }
        }
    }
    *param0 = v0;
    *(param0 + 1) = v5;
    *(param0 + 2) = v1;
    return param0;
}

int quantum_mu2char(int param0, int param1, int param2) {
    int v0 = param0;
    int v1 = param1;
    int max = 8;
    int v2 = 0;
    int i;
    for(i = v2; i < max; i = v2) {
        char* ptr0 = (char*)(v2 + param2);
        int v3 = ~(v2 - max) * 8;
        int v4 = (unsigned int)(((unsigned long long)v0 | ((unsigned long long)v1 << 32)) >>> (v3 & 0x1f));
        int v5 = v1 >>> (v3 & 0x1f);
        if(((unsigned char)v3 & 0x20)) {
            v4 = v5;
        }
        *ptr0 = (unsigned char)v4;
        int v6 = ~(v2 - max) * 8;
        unsigned int v7 = (unsigned int)((1L << (v6 & 0x1f)) >>> 32L);
        unsigned int v8 = (unsigned int)(1 << (v6 & 0x1f));
        if(((unsigned char)v6 & 0x20)) {
            v7 = v8;
            v8 = 0;
        }
        v0 &= v8 - 1;
        v1 &= (unsigned int)(v8 >= 1) + v7 - 1;
        ++v2;
    }
    return i;
}

unsigned int* quantum_new_density_op(unsigned int* param0) {
    size_t __nmemb;
    int* ptr0;
    int* ptr1;
    size_t v0 = __nmemb;
    void* ptr2 = →calloc(__nmemb, 4);
    if(!ptr2) {
        quantum_error(2);
    }
    void* ptr3 = →calloc(__nmemb, 20);
    if(!ptr3) {
        quantum_error(2);
    }
    quantum_memman(__nmemb * 3 * 8);
    *(int*)ptr2 = *ptr0;
    int v1 = *(ptr1 + 4);
    int v2 = *(ptr1 + 2);
    *(int*)ptr3 = *ptr1;
    *(int*)((int)ptr3 + 4) = *(ptr1 + 1);
    *(int*)((int)ptr3 + 8) = *(ptr1 + 2);
    *(int*)((int)ptr3 + 12) = *(ptr1 + 3);
    *(int*)((int)ptr3 + 16) = *(ptr1 + 4);
    *(ptr1 + 1) = 0;
    *ptr1 = 0;
    *(ptr1 + 3) = 0;
    *(ptr1 + 4) = 0;
    for(int i = 1; i < (int)__nmemb; ++i) {
        *(int*)(i * 4 + (int)ptr2) = *(int*)(i * 4 + (int)ptr0);
        int* ptr4 = (int*)(i * 20 + (int)ptr3);
        int* ptr5 = (int*)(i * 20 + (int)ptr1);
        *ptr4 = *ptr5;
        *(ptr4 + 1) = *(ptr5 + 1);
        *(ptr4 + 2) = *(ptr5 + 2);
        *(ptr4 + 3) = *(ptr5 + 3);
        *(ptr4 + 4) = *(ptr5 + 4);
        *((int*)(i * 20 + (int)ptr3) + 4) = v1;
        *((int*)(i * 20 + (int)ptr3) + 2) = v2;
        *((int*)(i * 20 + (int)ptr1) + 1) = 0;
        *(int*)(i * 20 + (int)ptr1) = 0;
        *((int*)(i * 20 + (int)ptr1) + 3) = 0;
        *((int*)(i * 20 + (int)ptr1) + 4) = 0;
    }
    *param0 = v0;
    *(void**)(param0 + 1) = ptr2;
    *(void**)(param0 + 2) = ptr3;
    return param0;
}

int* quantum_new_matrix(int* param0) {
    int v0;
    int v1;
    int v2 = v0;
    void* ptr0 = →calloc((size_t)(v0 * v1), 8);
    if(!ptr0) {
        quantum_error(2);
    }
    quantum_memman(v0 * v1 * 8);
    *param0 = v1;
    *(param0 + 1) = v2;
    *(void**)(param0 + 2) = ptr0;
    return param0;
}

int* quantum_new_qureg(int* param0) {
    int v0;
    int v1;
    int v2;
    int v3 = v0;
    int v4 = 1;
    int v5 = v0 + 2;
    void* ptr0 = →calloc(1, 16);
    if(!ptr0) {
        quantum_error(2);
    }
    quantum_memman(16);
    void* ptr1 = →calloc((size_t)(1 << (v5 & 0x1f)), 4);
    if(!ptr1) {
        quantum_error(2);
    }
    quantum_memman(4 << (v5 & 0x1f));
    void* ptr2 = ptr0;
    int v6 = v1;
    *(int*)((int)ptr2 + 8) = v2;
    *(int*)((int)ptr2 + 12) = v6;
    *(int*)ptr0 = 0x3f800000;
    *(int*)((int)ptr0 + 4) = 0;
    unsigned int v7 = (unsigned int)→getenv("QUOBFILE");
    if(v7) {
        quantum_objcode_start();
        quantum_objcode_file(v7);
        atexit((void __cdecl (*_)())&quantum_objcode_exit);
    }
    quantum_objcode_put(0);
    *param0 = v3;
    *(param0 + 1) = v4;
    *(param0 + 2) = v5;
    *(void**)(param0 + 3) = ptr0;
    *(void**)(param0 + 4) = ptr1;
    return param0;
}

int* quantum_new_qureg_size(int* param0) {
    size_t __nmemb;
    int v0;
    size_t v1 = __nmemb;
    int v2 = 0;
    int v3 = 0;
    void* ptr0 = →calloc(__nmemb, 16);
    if(!ptr0) {
        quantum_error(2);
    }
    quantum_memman((int)(__nmemb * 16));
    *param0 = v0;
    *(size_t*)(param0 + 1) = v1;
    *(param0 + 2) = v2;
    *(void**)(param0 + 3) = ptr0;
    *(param0 + 4) = v3;
    return param0;
}

unsigned int quantum_objcode_exit() {
    quantum_objcode_write(NULL);
    return quantum_objcode_stop();
}

unsigned int quantum_objcode_file(unsigned int param0) {
    globalfile = param0;
    return param0;
}

int quantum_objcode_put(int param0) {
    int v0;
    double v1;
    int i;
    int v2;
    int v3;
    char v4;
    int v5;
    char v6;
    char v7;
    char v8;
    char v9 = (unsigned char)param0;
    int v10 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int max = 0;
    if(!opstatus) {
        v2 = 0;
    }
    else {
        int* ptr0 = &v8;
        char v11 = v9;
        int v12 = (unsigned int)v9;
        if(v12 <= 11) {
            if(v12 == 2) {
                int* ptr1 = ptr0;
                ptr0 = ptr1 + 1;
                i = *ptr1;
                quantum_int2char(i, &v6);
                int* ptr2 = ptr0;
                ptr0 = ptr2 + 1;
                i = *ptr2;
                quantum_int2char(i, &v4);
                int* ptr3 = ptr0;
                ptr0 = ptr3 + 1;
                i = *ptr3;
                quantum_int2char(i, &v7);
            }
            else if(v12 >= 7) {
                int* ptr4 = ptr0;
                ptr0 = ptr4 + 1;
                i = *ptr4;
                double* ptr5 = (double*)ptr0;
                ptr0 = (int*)(ptr5 + 1);
                v1 = *ptr5;
                quantum_int2char(i, &v6);
                v0 = &v4;
                *(long long*)&v5 = v1;
                quantum_double2char(v5, v3, v0);
            }
            else if(v12 > 2) {
                goto loc_804E8A9;
            }
            else if(!v12) {
                int* ptr6 = ptr0;
                ptr0 = ptr6 + 2;
                int v13 = *(ptr6 + 1);
                int v14 = *ptr6;
                int v15 = v13;
                quantum_mu2char(v14, v15, &v6);
                max = 9;
                goto loc_804E9D8;
            }
            else if(v12 == 1) {
                goto loc_804E7D8;
            }
            else {
                goto loc_804E9B8;
            }
            max = 13;
        }
        else if(v12 == 128 || v12 == 0xFF) {
            max = 1;
        }
        else if(v12 == 13) {
            int* ptr7 = ptr0;
            ptr0 = ptr7 + 1;
            i = *ptr7;
            quantum_int2char(i, &v6);
            int* ptr8 = ptr0;
            ptr0 = ptr8 + 1;
            i = *ptr8;
            quantum_int2char(i, &v4);
            double* ptr9 = (double*)ptr0;
            ptr0 = (int*)(ptr9 + 1);
            v1 = *ptr9;
            v0 = &v7;
            *(long long*)&v5 = v1;
            quantum_double2char(v5, v3, v0);
            max = 17;
        }
        else if(v12 == 14) {
            goto loc_804E8A9;
        }
        else if(v12 < 13) {
        loc_804E7D8:
            int* ptr10 = ptr0;
            ptr0 = ptr10 + 1;
            i = *ptr10;
            quantum_int2char(i, &v6);
            int* ptr11 = ptr0;
            ptr0 = ptr11 + 1;
            i = *ptr11;
            quantum_int2char(i, &v4);
            max = 9;
        }
        else if(v12 <= 128) {
            goto loc_804E9B8;
        }
        else if(v12 <= 130) {
        loc_804E8A9:
            int* ptr12 = ptr0;
            ptr0 = ptr12 + 1;
            i = *ptr12;
            quantum_int2char(i, &v6);
            max = 5;
        }
        else {
        loc_804E9B8:
            quantum_error(0x10001);
        }
    loc_804E9D8:
        if((unsigned int)((position + max) >>> 16) > position >>> 16) {
            ++allocated;
            void* ptr13 = →realloc(objcode, (size_t)(allocated * 0x10000));
            objcode = ptr13;
            if(!objcode) {
                quantum_error(2);
            }
            quantum_memman(0x10000);
        }
        for(i = 0; i < max; ++i) {
            *(char*)(position + objcode) = *(char*)((int)&v11 + i);
            ++position;
        }
        v2 = 1;
    }
    int result = v2;
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v10)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int quantum_objcode_run(char* param0, size_t* param1) {
    float v0;
    int v1;
    int v2;
    int v3;
    double v4;
    int v5;
    char v6;
    unsigned int v7;
    unsigned int v8;
    size_t v9;
    unsigned int v10;
    unsigned int v11;
    __SyntheticTypeUnknownF v12;
    int v13;
    char* __filename = param0;
    size_t* ptr0 = param1;
    int v14 = *(int*)(__GS_BASE + (int)(int*)0x14);
    FILE* __stream = →fopen(__filename, (char*)&gvar_80543CC);
    if(!__stream) {
        →fprintf(stderr, "quantum_objcode_run: Could not open %s: ", __filename);
        →perror(NULL);
    }
    else {
        int v15 = 0;
        for(int i = →feof(__stream); !i; i = →feof(__stream)) {
            int j;
            for(j = 0; j <= 79; ++j) {
                *(char*)((int)&v6 + j) = 0;
            }
            int v16 = →fgetc(__stream);
            char v17 = (unsigned char)v16;
            int v18 = (unsigned int)v17;
            if(v18 == 2) {
                →fread(&v6, 4, 1, __stream);
                j = quantum_char2int((int)&v6);
                →fread(&v6, 4, 1, __stream);
                v5 = quantum_char2int((int)&v6);
                →fread(&v6, 4, 1, __stream);
                int v19 = quantum_char2int((int)&v6);
                quantum_toffoli(j, v5, v19, ptr0);
                goto loc_804F2BB;
            }
            else if(v18 > 11) {
                switch(v18) {
                    case 13: {
                        →fread(&v6, 4, 1, __stream);
                        j = quantum_char2int((int)&v6);
                        →fread(&v6, 4, 1, __stream);
                        v5 = quantum_char2int((int)&v6);
                        →fread(&v6, 8, 1, __stream);
                        quantum_char2double((double*)&v6);
                        v4 = v12;
                        v0 = v4;
                        v12 = v0;
                        quantum_cond_phase_kick(j, v5, v12, ptr0);
                        goto loc_804F2BB;
                    }
                    case 14: 
                    case 128: {
                        int v20 = (int)ptr0[0];
                        v2 = (int)ptr0[1];
                        v1 = (int)ptr0[2];
                        v3 = (int)ptr0[3];
                        unsigned int v21 = ptr0[4];
                        quantum_measure(v20, v2, v1, v3);
                        goto loc_804F2BB;
                    }
                }
                if(v25 == 1) {
                    quantum_cnot(j, v5, ptr0);
                }
                else if(v25 == 12) {
                    quantum_cond_phase(j, v5, ptr0);
                }
                goto loc_804F2BB;
            }
            else if(v18 >= 7) {
                →fread(&v6, 4, 1, __stream);
                j = quantum_char2int((int)&v6);
                →fread(&v6, 8, 1, __stream);
                quantum_char2double((double*)&v6);
                v4 = v12;
                unsigned int v22 = (unsigned int)((unsigned int)v17 - 7);
            }
            else if(v18 <= 2 && !v18) {
                →fread(&v6, 8, 1, __stream);
                int v23 = quantum_char2mu((int)&v6);
                int v24 = v13;
                v3 = 12;
                v2 = v23;
                v1 = v24;
                quantum_new_qureg(&v9);
                ptr0[0] = v9;
                ptr0[1] = v7;
                ptr0[2] = v10;
                ptr0[3] = v8;
                ptr0[4] = v11;
                goto loc_804F2BB;
            }
            switch(v22) {
                case 0: {
                    v0 = v4;
                    v12 = v0;
                    quantum_r_x(j, v12, (int)ptr0);
                    break;
                }
                case 1: {
                    v0 = v4;
                    v12 = v0;
                    quantum_r_y(j, v12, (int)ptr0);
                    break;
                }
                case 2: {
                    v0 = v4;
                    v12 = v0;
                    quantum_r_z(j, v12, ptr0);
                    break;
                }
                case 3: {
                    v0 = v4;
                    v12 = v0;
                    quantum_phase_kick(j, v12, ptr0);
                    break;
                }
                case 4: {
                    v0 = v4;
                    v12 = v0;
                    quantum_phase_scale(j, v12, ptr0);
                }
            }
        loc_804F2BB:
            ++v15;
        }
        →fclose(__stream);
    }
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v14;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

unsigned int quantum_objcode_start() {
    opstatus = 1;
    allocated = 1;
    void* ptr0 = →malloc(0x10000);
    objcode = ptr0;
    if(!objcode) {
        quantum_error(2);
    }
    return quantum_memman(0x10000);
}

unsigned int quantum_objcode_stop() {
    opstatus = 0;
    →free(objcode);
    objcode = 0;
    unsigned int result = quantum_memman(0 - allocated * 0x10000);
    allocated = 0;
    return result;
}

int quantum_objcode_write(char* __filename) {
    int result;
    if(!opstatus) {
        →fwrite("Object code generation not active! Forgot to call quantum_objcode_start?\n", 1, 73, stderr);
        result = 1;
    }
    else {
        if(!__filename) {
            __filename = globalfile;
        }
        FILE* __s = →fopen(__filename, (char*)&gvar_80543CA);
        if(!__s) {
            result = -1;
        }
        else {
            →fwrite(objcode, position, 1, __s);
            →fclose(__s);
            result = 0;
        }
    }
    return result;
}

size_t* quantum_phase_kick(int param0, float param1, size_t* param2) {
    size_t* result;
    int v0;
    float v1;
    *(long long*)&v0 = param1;
    int v2 = param0;
    int v3 = quantum_objcode_put(10);
    if(!v3) {
        float v4 = (float)quantum_cexp(param1);
        float v5 = v1;
        for(int i = 0; i < param2[1]; ++i) {
            int v6 = i * 16 + param2[3];
            int v7 = *(int*)(v6 + 12);
            int v8 = (unsigned int)(((unsigned long long)*(int*)(v6 + 8) | ((unsigned long long)v7 << 32)) >>> (param0 & 0x1f));
            int v9 = v7 >>> (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v8 = v9;
            }
            if((unsigned char)(v8 & 0x1)) {
                int* ptr0 = (int*)(i * 16 + param2[3]);
                float* ptr1 = (float*)(i * 16 + param2[3]);
                int v10 = __mulsc3(ptr1[0], ptr1[1], v4, v5);
                *ptr0 = v10;
                *(float*)(ptr0 + 1) = v1;
            }
        }
        result = param2;
        quantum_decohere(result);
    }
    return result;
}

int quantum_phase_scale(int param0, float param1, size_t* param2) {
    int v0;
    float v1;
    *(long long*)&v0 = param1;
    int v2 = param0;
    int result = quantum_objcode_put(11);
    if(!result) {
        float v3 = (float)quantum_cexp(param1);
        float v4 = v1;
        for(int i = 0; i < (int)param2[1]; ++i) {
            int* ptr0 = (int*)(i * 16 + param2[3]);
            float* ptr1 = (float*)(i * 16 + param2[3]);
            int v5 = __mulsc3(ptr1[0], ptr1[1], v3, v4);
            *ptr0 = v5;
            *(float*)(ptr0 + 1) = v1;
        }
        result = (int)quantum_decohere(param2);
    }
    return result;
}

int* quantum_print_density_matrix(int param0) {
    int v0;
    int v1;
    int v2;
    int v3 = param0;
    quantum_density_matrix(&v0);
    int v4 = v0;
    int v5 = v1;
    int v6 = v2;
    quantum_print_matrix(v0, v1, v2);
    return quantum_delete_matrix(&v4);
}

int quantum_print_expn(int param0, int param1, int param2, int param3) {
    for(int i = 0; i < param1; ++i) {
        int v0 = i * 16 + param3;
        int v1 = *(int*)(v0 + 12);
        unsigned int v2 = *(unsigned int*)(v0 + 8);
        int v3 = v1;
        unsigned int v4 = (unsigned int)(i << ((param0 / 2) & 0x1f));
        int v5 = v3 - ((v4 >> 31) + (unsigned int)(v4 > v2));
        unsigned int v6 = v2 - v4;
        int v7 = v5;
        →printf("%i: %lli\n", i, v6);
    }
    return param1;
}

int quantum_print_hash(int param0, int param1, int param2, int param3, int param4) {
    for(int i = 0; i < 1 << (param2 & 0x1f); ++i) {
        if(i) {
            int v0 = param3 - (1 - *(int*)(i * 4 + param4)) * 16;
            int v1 = *(int*)(v0 + 12);
            int v2 = *(int*)(i * 4 + param4) - 1;
            int v3 = *(int*)(v0 + 8);
            int v4 = v1;
            →printf("%i: %i %llu\n", i, v2, v3);
        }
    }
    return 1 << (param2 & 0x1f);
}

int quantum_print_matrix(int param0, int param1, int param2) {
    __SyntheticTypeUnknown v0;
    char v1;
    __SyntheticTypeUnknownF v2;
    __SyntheticTypeUnknownF v3;
    char v4;
    int v5 = 0;
    do {
        v1 = 1 << (v5 & 0x1f) < param0 ? 1: 0;
        ++v5;
    }
    while(v1);
    --v5;
    for(int i = 0; i < param0; ++i) {
        for(int j = 0; j < param1; ++j) {
            int* ptr0 = (int*)((i * param1 + j) * 8 + param2);
            v0[v4] = quantum_imag4(ptr0[0], ptr0[1]);
            double v6 = v2;
            int* ptr1 = (int*)((i * param1 + j) * 8 + param2);
            int v7 = *ptr1;
            int v8 = *(ptr1 + 1);
            v0[v4] = quantum_real4(v7);
            long long v9 = v6;
            *(long long*)&v8 = v3;
            →printf("%g %+gi ", *(double*)&v8, v9);
        }
        →putchar(10);
    }
    return →putchar(10);
}

int quantum_print_qureg(int param0, int param1, int param2, int param3) {
    __SyntheticTypeUnknown v0;
    __SyntheticTypeUnknownF v1;
    char v2;
    int v3;
    __SyntheticTypeUnknownF v4;
    for(int i = 0; i < param1; ++i) {
        int* ptr0 = (int*)(i * 16 + param3);
        quantum_prob_inline5(ptr0[0], ptr0[1]);
        double v5 = v1;
        int v6 = *(int*)(i * 16 + param3 + 8);
        int* ptr1 = (int*)(i * 16 + param3);
        v0[v2] = quantum_imag7(ptr1[0], ptr1[1]);
        double v7 = v4;
        int* ptr2 = (int*)(i * 16 + param3);
        int v8 = *ptr2;
        int v9 = *(ptr2 + 1);
        v0[v2] = quantum_real7(v8);
        long long v10 = v5;
        int v11 = v6;
        long long v12 = v7;
        *(long long*)&v9 = v1;
        →printf("% f %+fi|%lli> (%e) (|", *(double*)&v9, v12, v11, *(double*)&v3);
        for(int j = param0 - 1; j >= 0; --j) {
            if(((((j >> 31) >>> 30) + j) & 0x3) - ((j >> 31) >>> 30) == 3) {
                →putchar(32);
            }
            int v13 = i * 16 + param3;
            int v14 = *(int*)(v13 + 12);
            int v15 = (unsigned int)(((unsigned long long)*(int*)(v13 + 8) | ((unsigned long long)v14 << 32)) >>> (j & 0x1f));
            int v16 = v14 >>> (j & 0x1f);
            if(((unsigned char)j & 0x20)) {
                v15 = v16;
            }
            →printf((char*)&gvar_8054468, v15 & 0x1);
        }
        →puts((char*)&gvar_805446B);
    }
    return →putchar(10);
}

int* quantum_print_timeop(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8 = 1 << (param0 & 0x1f);
    int v9 = 1 << (param0 & 0x1f);
    quantum_new_matrix(&v3);
    int v10 = v3;
    int v11 = v0;
    int v12 = v4;
    for(int i = 0; i < 1 << (param0 & 0x1f); ++i) {
        int v13 = param0;
        v9 = i;
        v8 = i >> 31;
        quantum_new_qureg(&v5);
        int v14 = v5;
        int max = v1;
        int v15 = v6;
        int v16 = v2;
        int v17 = v7;
        param1(&v14);
        for(int j = 0; j < max; ++j) {
            int* ptr0 = (int*)((v11 * i + *(int*)(j * 16 + v16 + 8)) * 8 + v12);
            int* ptr1 = (int*)(j * 16 + v16);
            int v18 = *(ptr1 + 1);
            *ptr0 = *ptr1;
            *(ptr0 + 1) = v18;
        }
        quantum_delete_qureg(&v14);
    }
    quantum_print_matrix(v10, v11, v12);
    return quantum_delete_matrix(&v10);
}

float quantum_prob(int param0, int param1) {
    __SyntheticTypeUnknownF result;
    quantum_prob_inline(param0, param1);
    return result;
}

int quantum_prob_inline(int param0, int param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = quantum_real(param0);
    v0[v1] = quantum_imag(param0, param1);
    return param1;
}

int quantum_prob_inline2(int param0, int param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = quantum_real2(param0);
    v0[v1] = quantum_imag2(param0, param1);
    return param1;
}

int quantum_prob_inline3(int param0, int param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = quantum_real3(param0);
    v0[v1] = quantum_imag3(param0, param1);
    return param1;
}

int quantum_prob_inline4(int param0, int param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = quantum_real5(param0);
    v0[v1] = quantum_imag5(param0, param1);
    return param1;
}

int quantum_prob_inline5(int param0, int param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = quantum_real7(param0);
    v0[v1] = quantum_imag7(param0, param1);
    return param1;
}

float quantum_purity(int* param0) {
    float v0;
    int v1;
    char v2;
    __SyntheticTypeUnknown v3;
    float v4;
    float v5;
    char v6;
    __SyntheticTypeUnknownF v7;
    float result = (float)0.0;
    int i;
    for(i = 0; i < *param0; ++i) {
        result += *(float*)(i * 4 + *(param0 + 1)) * *(float*)(i * 4 + *(param0 + 1));
        v2 = 0;
    }
    for(i = 0; i < *param0; ++i) {
        for(int j = 0; j < i; ++j) {
            v3[v6] = quantum_dot_product(i * 20 + *(param0 + 2), j * 20 + *(param0 + 2));
            float v8 = v4;
            float v9 = v5;
            for(int k = 0; k < *(int*)(i * 20 + *(param0 + 2) + 4); ++k) {
                int* ptr0 = (int*)(j * 20 + *(param0 + 2));
                int v10 = k * 16 + *(int*)(i * 20 + *(param0 + 2) + 12);
                int v11 = quantum_get_state(*(int*)(v10 + 8), *(int*)(v10 + 12), ptr0[0], ptr0[1], ptr0[2], ptr0[3], ptr0[4]);
                if(v11 >= 0) {
                    float v12 = *(float*)(i * 4 + *(param0 + 1)) * *(float*)(j * 4 + *(param0 + 1));
                    int v13 = __mulsc3(v12, 0.0, v8, v9);
                    float* ptr1 = (float*)(k * 16 + *(int*)(i * 20 + *(param0 + 2) + 12));
                    float v14 = (float)__mulsc3((float)v13, v5, ptr1[0], ptr1[1]);
                    int* ptr2 = (int*)(v11 * 16 + *(int*)(j * 20 + *(param0 + 2) + 12));
                    int v15 = quantum_conj(ptr2[0], ptr2[1]);
                    v1 = __mulsc3(v14, v5, (float)v15, v5);
                    v0 = v5;
                }
                else {
                    v1 = 0;
                    v0 = (float)0.0;
                }
                int v16 = v1;
                float v17 = v0;
                v3[v6] = quantum_real2(v16);
                result += v7 + v7;
                v2 = 0;
            }
        }
    }
    v3[v2 - 1] = result;
    return result;
}

unsigned int quantum_qec_counter(int param0, unsigned int param1, size_t* param2) {
    if(param0 > 0) {
        counter.2126 += param0;
    }
    else if(param0 < 0) {
        counter.2126 = 0;
    }
    if((int)param1 > 0) {
        freq.2127 = param1;
    }
    if(counter.2126 >= freq.2127) {
        counter.2126 = 0;
        quantum_qec_decode(type, width, param2);
        quantum_qec_encode(type, width, (int)param2);
    }
    return counter.2126;
}

size_t* quantum_qec_decode(int param0, int param1, size_t* param2) {
    size_t* result;
    __SyntheticTypeUnknown v0;
    __SyntheticTypeUnknownF v1;
    char v2;
    v0[v2] = quantum_get_decoherence();
    float v3 = v1;
    quantum_set_decoherence(0.0);
    size_t v4 = param2[0];
    int v5 = 0x55555556;
    int v6 = (int)((int)v4 / 3);
    quantum_qec_set_status(0, 0);
    v4 = param2[0];
    int i;
    for(i = (int)v4 / 3 - 1; i >= 0; --i) {
        if(!i) {
            quantum_set_decoherence(v3);
        }
        if(i < param1) {
            quantum_cnot(v6 * 2 + i, i, param2);
            quantum_cnot(v6 + i, i, param2);
            quantum_hadamard(v6 * 2 + i, (int)param2);
            quantum_hadamard(v6 + i, (int)param2);
        }
        else {
            quantum_cnot(i, v6 * 2 + i, param2);
            quantum_cnot(i, v6 + i, param2);
        }
    }
    for(i = 1; i <= v6; ++i) {
        int v7 = quantum_bmeasure(v6, (int)param2);
        int v8 = quantum_bmeasure(v6 * 2 - i, (int)param2);
        if(v7 == 1 && v8 == 1 && i - 1 < param1) {
            result = quantum_sigma_z(i - 1, param2);
        }
    }
    return result;
}

int quantum_qec_encode(int param0, int param1, int param2) {
    __SyntheticTypeUnknown v0;
    char v1;
    __SyntheticTypeUnknownF v2;
    v0[v1] = quantum_get_decoherence();
    float v3 = v2;
    quantum_set_decoherence(0.0);
    for(int i = 0; i < *(int*)param2; ++i) {
        if(*(int*)param2 - 1 == i) {
            quantum_set_decoherence(v3);
        }
        if(i < param1) {
            quantum_hadamard(*(int*)param2 + i, param2);
            quantum_hadamard(*(int*)param2 * 2 + i, param2);
            quantum_cnot(*(int*)param2 + i, i, (size_t*)param2);
            quantum_cnot(*(int*)param2 * 2 + i, i, (size_t*)param2);
        }
        else {
            quantum_cnot(i, *(int*)param2 + i, (size_t*)param2);
            quantum_cnot(i, *(int*)param2 * 2 + i, (size_t*)param2);
        }
    }
    quantum_qec_set_status(1, *(unsigned int*)param2);
    int result = param2;
    *(int*)result = *(int*)param2 * 3;
    return result;
}

unsigned int* quantum_qec_get_status(unsigned int* param0, unsigned int* param1) {
    unsigned int* result;
    if(param0) {
        result = param0;
        *result = type;
    }
    if(param1) {
        result = param1;
        *result = width;
    }
    return result;
}

unsigned int quantum_qec_set_status(unsigned int param0, unsigned int param1) {
    type = param0;
    width = param1;
    return param1;
}

int quantum_qft(int param0, size_t* param1) {
    int result;
    for(int i = param0 - 1; i >= 0; --i) {
        for(int j = param0 - 1; j > i; --j) {
            quantum_cond_phase(j, i, param1);
        }
        result = quantum_hadamard(i, (int)param1);
    }
    return result;
}

int quantum_qft_inv(int param0, int param1) {
    int v0 = 0;
    int i;
    for(i = v0; i < param0; i = v0) {
        quantum_hadamard(v0, param1);
        for(int j = v0 + 1; j < param0; ++j) {
            quantum_cond_phase_inv(j, v0, (size_t*)param1);
        }
        ++v0;
    }
    return i;
}

unsigned int* quantum_qureg2density_op(unsigned int* param0) {
    int v0;
    int v1 = 0x3f800000;
    int v2 = v0;
    int* ptr0 = &v1;
    int v3 = 1;
    quantum_new_density_op(param0);
    return param0;
}

int* quantum_qureg2matrix(int* param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int max;
    int v4;
    int v5 = 1 << (v3 & 0x1f);
    int v6 = 1;
    quantum_new_matrix(&v0);
    for(int i = 0; i < max; ++i) {
        int* ptr0 = (int*)(*(int*)(i * 16 + v4 + 8) * 8 + v1);
        int* ptr1 = (int*)(i * 16 + v4);
        int v7 = *(ptr1 + 1);
        *ptr0 = *ptr1;
        *(ptr0 + 1) = v7;
    }
    *param0 = v0;
    *(param0 + 1) = v2;
    *(param0 + 2) = v1;
    return param0;
}

int quantum_r_x(int param0, float param1, int param2) {
    int v0;
    __SyntheticTypeUnknown v1;
    int v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF v4;
    char v5;
    __SyntheticTypeUnknownF v6;
    int v7;
    int v8;
    float* ptr0;
    int v9;
    double v10;
    double v11;
    __SyntheticTypeUnknownF v12;
    __SyntheticTypeUnknownF v13;
    __SyntheticTypeUnknownF v14;
    __SyntheticTypeUnknownF v15;
    __SyntheticTypeUnknownF v16;
    __SyntheticTypeUnknownF v17;
    __SyntheticTypeUnknownF v18;
    *(long long*)&v7 = param1;
    int result = quantum_objcode_put(7);
    if(!result) {
        v7 = 2;
        int v19 = 2;
        quantum_new_matrix(&v8);
        int v20 = v8;
        int v21 = v0;
        float* ptr1 = ptr0;
        *(long long*)&v9 = param1 / 2.0;
        v1[v5] = →cos(*(double*)&v9);
        float v22 = v14;
        float v23 = v22;
        ptr0[0] = v22;
        ptr0[1] = (float)0.0;
        *(long long*)&v9 = param1 / 2.0;
        v1[v5] = →sin(*(double*)&v9);
        fldz();
        fld1();
        fchs();
        long long v24 = v12;
        fldz();
        long long v25 = v18;
        *(long long*)&v2 = v4;
        *(long long*)&v19 = v6;
        __muldc3(&v10);
        v22 = v11;
        v23 = v10;
        ptr1[2] = v22;
        ptr1[3] = v10;
        *(long long*)&v9 = param1 / 2.0;
        v1[v5] = →sin(*(double*)&v9);
        fldz();
        fld1();
        fchs();
        v24 = v16;
        fldz();
        v25 = v13;
        *(long long*)&v2 = v17;
        *(long long*)&v19 = v3;
        __muldc3(&v10);
        v22 = v11;
        v23 = v10;
        ptr1[4] = v22;
        ptr1[5] = v10;
        *(long long*)&v9 = param1 / 2.0;
        v1[v5] = →cos(*(double*)&v9);
        v22 = v15;
        v23 = v22;
        ptr1[6] = v22;
        ptr1[7] = (float)0.0;
        quantum_gate1(param0, v20, v21, ptr1, param2);
        result = (int)quantum_delete_matrix(&v20);
    }
    return result;
}

int quantum_r_y(int param0, float param1, int param2) {
    int v0;
    __SyntheticTypeUnknown v1;
    char v2;
    int v3;
    int v4;
    float* ptr0;
    int v5;
    __SyntheticTypeUnknownF v6;
    __SyntheticTypeUnknownF v7;
    __SyntheticTypeUnknownF v8;
    __SyntheticTypeUnknownF v9;
    *(long long*)&v3 = param1;
    int result = quantum_objcode_put(8);
    if(!result) {
        v3 = 2;
        int v10 = 2;
        quantum_new_matrix(&v4);
        int v11 = v4;
        int v12 = v0;
        float* ptr1 = ptr0;
        *(long long*)&v5 = param1 / 2.0;
        v1[v2] = →cos(*(double*)&v5);
        float v13 = v8;
        float v14 = v13;
        ptr0[0] = v13;
        ptr0[1] = (float)0.0;
        *(long long*)&v5 = param1 / -2.0;
        v1[v2] = →sin(*(double*)&v5);
        v13 = v6;
        v14 = v13;
        ptr1[2] = v13;
        ptr1[3] = (float)0.0;
        *(long long*)&v5 = param1 / 2.0;
        v1[v2] = →sin(*(double*)&v5);
        v13 = v9;
        v14 = v13;
        ptr1[4] = v13;
        ptr1[5] = (float)0.0;
        *(long long*)&v5 = param1 / 2.0;
        v1[v2] = →cos(*(double*)&v5);
        v13 = v7;
        v14 = v13;
        ptr1[6] = v13;
        ptr1[7] = (float)0.0;
        quantum_gate1(param0, v11, v12, ptr1, param2);
        result = (int)quantum_delete_matrix(&v11);
    }
    return result;
}

size_t* quantum_r_z(int param0, float param1, size_t* param2) {
    size_t* result;
    int v0;
    float v1;
    *(long long*)&v0 = param1;
    int v2 = param0;
    int v3 = quantum_objcode_put(9);
    if(!v3) {
        float v4 = (float)quantum_cexp(param1 / 2.0);
        float v5 = v1;
        for(int i = 0; i < param2[1]; ++i) {
            int v6 = i * 16 + param2[3];
            int v7 = *(int*)(v6 + 12);
            int v8 = (unsigned int)(((unsigned long long)*(int*)(v6 + 8) | ((unsigned long long)v7 << 32)) >>> (param0 & 0x1f));
            int v9 = v7 >>> (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v8 = v9;
            }
            if((unsigned char)(v8 & 0x1)) {
                int* ptr0 = (int*)(i * 16 + param2[3]);
                float* ptr1 = (float*)(i * 16 + param2[3]);
                int v10 = __mulsc3(ptr1[0], ptr1[1], v4, v5);
                *ptr0 = v10;
                *(float*)(ptr0 + 1) = v1;
            }
            else {
                int* ptr2 = (int*)(i * 16 + param2[3]);
                int* ptr3 = (int*)(i * 16 + param2[3]);
                int v11 = __divsc3(ptr3[0], ptr3[1], v4, v5);
                *ptr2 = v11;
                *(float*)(ptr2 + 1) = v1;
            }
        }
        result = param2;
        quantum_decohere(result);
    }
    return result;
}

float quantum_real(int param0) {
    return *&param0;
}

float quantum_real2(int param0) {
    return *&param0;
}

float quantum_real3(int param0) {
    return *&param0;
}

float quantum_real4(int param0) {
    return *&param0;
}

float quantum_real5(int param0) {
    return *&param0;
}

float quantum_real6(int param0) {
    return *&param0;
}

float quantum_real7(int param0) {
    return *&param0;
}

int quantum_reconstruct_hash(int param0) {
    int result;
    int i;
    for(i = 0; i < 1 << (*(int*)(param0 + 8) & 0x1f); ++i) {
        *(int*)(i * 4 + *(int*)(param0 + 16)) = 0;
    }
    for(i = 0; i < *(int*)(param0 + 4); ++i) {
        int v0 = i * 16 + *(int*)(param0 + 12);
        result = quantum_add_hash(*(int*)(v0 + 8), *(int*)(v0 + 12), i, param0);
    }
    return result;
}

int quantum_reconstruct_hash2(int param0) {
    int result;
    int i;
    for(i = 0; i < 1 << (*(int*)(param0 + 8) & 0x1f); ++i) {
        *(int*)(i * 4 + *(int*)(param0 + 16)) = 0;
    }
    for(i = 0; i < *(int*)(param0 + 4); ++i) {
        int v0 = i * 16 + *(int*)(param0 + 12);
        result = quantum_add_hash2(*(int*)(v0 + 8), *(int*)(v0 + 12), i, param0);
    }
    return result;
}

int quantum_reconstruct_hash3(int param0) {
    int result;
    int i;
    for(i = 0; i < 1 << (*(int*)(param0 + 8) & 0x1f); ++i) {
        *(int*)(i * 4 + *(int*)(param0 + 16)) = 0;
    }
    for(i = 0; i < *(int*)(param0 + 4); ++i) {
        int v0 = i * 16 + *(int*)(param0 + 12);
        result = quantum_add_hash3(*(int*)(v0 + 8), *(int*)(v0 + 12), i, param0);
    }
    return result;
}

int* quantum_reduced_density_op(int param0, int* param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    __SyntheticTypeUnknownF v5;
    __SyntheticTypeUnknownF v6;
    fldz();
    double v7 = v6;
    void* ptr0 = →realloc(*(void**)(param1 + 1), (size_t)(*param1 * 8));
    *(void**)(param1 + 1) = ptr0;
    if(!*(param1 + 1)) {
        quantum_error(2);
    }
    void* ptr1 = →realloc(*(void**)(param1 + 2), (size_t)(*param1 * 40));
    *(void**)(param1 + 2) = ptr1;
    if(!*(param1 + 2)) {
        quantum_error(2);
    }
    quantum_memman(*param1 * 3 * 8);
    int v8 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
    int v9 = 1 << (param0 & 0x1f);
    if(((unsigned char)param0 & 0x20)) {
        v8 = v9;
        v9 = 0;
    }
    int v10 = v9;
    int v11 = v8;
    for(int i = 0; i < *param1; ++i) {
        double v12 = *(float*)(i * 4 + *(param1 + 1));
        int* ptr2 = (int*)(i * 20 + *(param1 + 2));
        int v13 = *ptr2;
        int v14 = *(ptr2 + 1);
        int v15 = *(ptr2 + 2);
        int v16 = *(ptr2 + 3);
        int v17 = *(ptr2 + 4);
        fldz();
        v7 = v5;
        for(int j = 0; j < *(int*)(i * 20 + *(param1 + 2) + 4); ++j) {
            int v18 = j * 16 + *(int*)(i * 20 + *(param1 + 2) + 12);
            if(!((*(int*)(v18 + 8) & v10) | (*(int*)(v18 + 12) & v11))) {
                int* ptr3 = (int*)(j * 16 + *(int*)(i * 20 + *(param1 + 2) + 12));
                quantum_prob_inline2(ptr3[0], ptr3[1]);
                v5 += v7;
                v7 = v5;
            }
        }
        int* ptr4 = (int*)(i * 4 + *(param1 + 1));
        float v19 = v12 * v7;
        v5 = v19;
        *ptr4 = v5;
        int* ptr5 = (int*)((*param1 + i) * 4 + *(param1 + 1));
        fld1();
        v19 = (v6 - v7) * v12;
        v6 = v19;
        *ptr5 = v6;
        int* ptr6 = (int*)(i * 20 + *(param1 + 2));
        int v20 = v13;
        int v21 = v14;
        int v22 = v15;
        int v23 = v16;
        int v24 = v17;
        int v25 = 0;
        int v26 = param0;
        quantum_state_collapse(&v3);
        *ptr6 = v3;
        *(ptr6 + 1) = v0;
        *(ptr6 + 2) = v4;
        *(ptr6 + 3) = v1;
        *(ptr6 + 4) = v2;
        int* ptr7 = (int*)((*param1 + i) * 20 + *(param1 + 2));
        v20 = v13;
        v21 = v14;
        v22 = v15;
        v23 = v16;
        v24 = v17;
        v25 = 1;
        v26 = param0;
        quantum_state_collapse(&v3);
        *ptr7 = v3;
        *(ptr7 + 1) = v0;
        *(ptr7 + 2) = v4;
        *(ptr7 + 3) = v1;
        *(ptr7 + 4) = v2;
        quantum_delete_qureg_hashpreserve(&v13);
    }
    *param1 = *param1 * 2;
    return param1;
}

int quantum_rk4(int param0, int param1, int param2, int param3, int param4, int param5) {
    int v0;
    __SyntheticTypeUnknown v1;
    int v2;
    char v3;
    int v4;
    double v5;
    int v6;
    __SyntheticTypeUnknownF v7;
    int v8;
    __SyntheticTypeUnknownF v9;
    __SyntheticTypeUnknownF v10;
    __SyntheticTypeUnknownF v11;
    int v12;
    int v13;
    double v14;
    int v15 = param1;
    int v16 = param2;
    int v17 = param3;
    int v18 = param4;
    fldz();
    double v19 = v11;
    int v20 = *(int*)(param0 + 16);
    *(int*)(param0 + 16) = 0;
    int v21 = *(int*)(param0 + 8);
    *(int*)(param0 + 8) = 0;
    int v22 = param0;
    __SyntheticTypeUnknownF v23 = *(double*)&v15;
    *(long long*)&v4 = v23;
    int v24 = param5;
    quantum_matrix_qureg(&v13);
    int v25 = v13;
    int v26 = v8;
    int v27 = v6;
    int v28 = v2;
    int v29 = v12;
    fldz();
    fld1();
    fchs();
    long long v30 = *(double*)&v17;
    fldz();
    long long v31 = v10;
    *(long long*)&v0 = v23;
    *(long long*)&v24 = v9;
    __muldc3(&v14);
    fldz();
    v30 = v5;
    v31 = 0x4000000000000000L;
    *(long long*)&v0 = v14;
    *(long long*)&v24 = v10;
    __divdc3(&v14);
    float v32 = v5;
    float v33 = v14;
    quantum_scalar_qureg(v32, v33, &v25);
    v4 = &v25;
    v24 = param0;
    quantum_vectoradd(&v13);
    int v34 = v13;
    int v35 = v8;
    int v36 = v6;
    int v37 = v2;
    int v38 = v12;
    quantum_scalar_qureg(0.33333334, 0.0, &v25);
    v4 = &v25;
    v24 = param0;
    quantum_vectoradd(&v13);
    int v39 = v13;
    int max = v8;
    int v40 = v6;
    int v41 = v2;
    int result = v12;
    quantum_delete_qureg(&v25);
    __SyntheticTypeUnknownF v42 = *(double*)&v17 / 2.0 + *(double*)&v15;
    v22 = &v34;
    *(long long*)&v4 = v42;
    v24 = param5;
    quantum_matrix_qureg(&v13);
    v25 = v13;
    v26 = v8;
    v27 = v6;
    v28 = v2;
    v29 = v12;
    quantum_delete_qureg(&v34);
    fldz();
    fld1();
    fchs();
    v30 = *(double*)&v17;
    fldz();
    v31 = v10;
    *(long long*)&v0 = v23;
    *(long long*)&v24 = v9;
    __muldc3(&v14);
    fldz();
    v30 = v5;
    v31 = 0x4000000000000000L;
    *(long long*)&v0 = v14;
    *(long long*)&v24 = v10;
    __divdc3(&v14);
    v32 = v5;
    v33 = v14;
    quantum_scalar_qureg(v32, v33, &v25);
    v4 = &v25;
    v24 = param0;
    quantum_vectoradd(&v13);
    v34 = v13;
    v35 = v8;
    v36 = v6;
    v37 = v2;
    v38 = v12;
    quantum_scalar_qureg(0.6666667, 0.0, &v25);
    quantum_vectoradd_inplace(&v39, &v25);
    quantum_delete_qureg(&v25);
    __SyntheticTypeUnknownF v43 = *(double*)&v17 / 2.0 + *(double*)&v15;
    v22 = &v34;
    *(long long*)&v4 = v43;
    v24 = param5;
    quantum_matrix_qureg(&v13);
    v25 = v13;
    v26 = v8;
    v27 = v6;
    v28 = v2;
    v29 = v12;
    quantum_delete_qureg(&v34);
    fldz();
    fld1();
    fchs();
    v30 = *(double*)&v17;
    fldz();
    v31 = v10;
    *(long long*)&v0 = v23;
    *(long long*)&v24 = v9;
    __muldc3(&v14);
    v32 = v5;
    v33 = v14;
    quantum_scalar_qureg(v32, v33, &v25);
    v4 = &v25;
    v24 = param0;
    quantum_vectoradd(&v13);
    v34 = v13;
    v35 = v8;
    v36 = v6;
    v37 = v2;
    v38 = v12;
    quantum_scalar_qureg(0.33333334, 0.0, &v25);
    quantum_vectoradd_inplace(&v39, &v25);
    quantum_delete_qureg(&v25);
    __SyntheticTypeUnknownF v44 = *(double*)&v15 + *(double*)&v17;
    v22 = &v34;
    *(long long*)&v4 = v44;
    v24 = param5;
    quantum_matrix_qureg(&v13);
    v25 = v13;
    v26 = v8;
    v27 = v6;
    v28 = v2;
    v29 = v12;
    quantum_delete_qureg(&v34);
    fldz();
    fld1();
    fchs();
    v30 = *(double*)&v17;
    fldz();
    v31 = v10;
    *(long long*)&v0 = v23;
    *(long long*)&v24 = v9;
    __muldc3(&v14);
    fldz();
    v30 = v5;
    v31 = 0x4018000000000000L;
    *(long long*)&v0 = v14;
    *(long long*)&v24 = v10;
    __divdc3(&v14);
    v32 = v5;
    v33 = v14;
    quantum_scalar_qureg(v32, v33, &v25);
    quantum_vectoradd_inplace(&v39, &v25);
    quantum_delete_qureg(&v25);
    quantum_delete_qureg(param0);
    for(int i = 0; i < max; ++i) {
        int* ptr0 = (int*)(i * 16 + v41);
        v1[v3] = quantum_prob(ptr0[0], ptr0[1]);
        v19 += v7;
    }
    result = v20;
    v40 = v21;
    *(int*)param0 = v39;
    *(int*)(param0 + 4) = max;
    *(int*)(param0 + 8) = v40;
    *(int*)(param0 + 12) = v41;
    *(int*)(param0 + 16) = result;
    return result;
}

int quantum_rk4a(int* param0, int param1, int param2, double* param3, int param4, int param5, int param6) {
    double v0;
    int v1;
    __SyntheticTypeUnknown v2;
    int v3;
    void* __dest1;
    short v4;
    char v5;
    int v6;
    int v7;
    char v8;
    __SyntheticTypeUnknownF v9;
    int v10;
    __SyntheticTypeUnknownF v11;
    __SyntheticTypeUnknownF v12;
    char v13;
    int v14;
    int v15;
    short v16;
    int v17;
    int v18;
    int v19;
    void* __dest;
    __SyntheticTypeUnknownF v20;
    short v21;
    __SyntheticTypeUnknownF v22;
    int v23;
    __SyntheticTypeUnknownF v24;
    __SyntheticTypeUnknownF v25;
    int v26;
    int v27 = param1;
    int v28 = param2;
    int v29 = param4;
    int v30 = param5;
    int v31 = param0[4];
    param0[4] = 0;
    int result = param0[2];
    param0[2] = 0;
    quantum_copy_qureg(param0, &v17);
    quantum_copy_qureg(param0, &v13);
    do {
        v2[v5 - 1] = *param3;
        int v32 = param6;
        *(long long*)&v3 = v2[v5 - 1];
        v2[v5 - 1] = *(double*)&v27;
        *(long long*)&v14 = v2[v5 - 1];
        quantum_rk4((int)param0, v14, v6, v3, v19, v32);
        __SyntheticTypeUnknownF v33 = *param3 / 2.0;
        v32 = param6;
        *(long long*)&v3 = v33;
        *(long long*)&v14 = *(double*)&v27;
        quantum_rk4((int)&v13, v14, v6, v3, v19, v32);
        __SyntheticTypeUnknownF v34 = *param3 / 2.0;
        v32 = param6;
        *(long long*)&v3 = v34;
        *(long long*)&v14 = *(double*)&v27;
        quantum_rk4((int)&v13, v14, v6, v3, v19, v32);
        fldz();
        double v35 = v9;
        char v36 = 0;
        for(int i = 0; i < param0[1]; ++i) {
            float* ptr0 = (float*)(i * 16 + param0[3]);
            float* ptr1 = (float*)(i * 16 + (int)__dest);
            v2[v36 - 1] = *ptr0;
            v2[v36 - 2] = *(ptr0 + 1);
            v2[v36 - 3] = *ptr1;
            v2[v36 - 4] = *(ptr1 + 1);
            v2[v36 - 1] -= v2[v36 - 4];
            v2[v36 - 2] -= v2[v36 - 3];
            int v37 = v2[v36 - 1];
            v1 = v2[v36 - 2];
            v14 = v37;
            v2[v8] = quantum_real6(v1);
            int v38 = v11;
            float* ptr2 = (float*)(i * 16 + param0[3]);
            float v39 = *(ptr2 + 1);
            float* ptr3 = (float*)(i * 16 + (int)__dest);
            float v40 = *ptr3;
            v37 = *ptr2 - *(ptr3 + 1);
            v2[v8] = quantum_imag6(v39 - v40, v37);
            fucompp();
            v21 = fnstsw(v21);
            if(!((v26 >>> 8) & 0x1) && !((v26 >>> 14) & 0x1)) {
                float* ptr4 = (float*)(i * 16 + param0[3]);
                float v41 = *(ptr4 + 1);
                float* ptr5 = (float*)(i * 16 + (int)__dest);
                float v42 = *ptr5;
                v37 = *ptr4 - *(ptr5 + 1);
                v1 = v41 - v42;
                v14 = v37;
                v2[v8] = quantum_real6(v1);
                int v43 = v12 + v12;
                float* ptr6 = (float*)(i * 16 + param0[3]);
                float v44 = *(ptr6 + 1);
                float* ptr7 = (float*)(i * 16 + (int)__dest);
                float v45 = *ptr7;
                v37 = *ptr6 + *(ptr7 + 1);
                v1 = v44 + v45;
                v14 = v37;
                v2[v8] = quantum_real6(v1);
                v43 = fdivr(v43);
                v0 = v22;
            }
            else {
                float* ptr8 = (float*)(i * 16 + param0[3]);
                float v46 = *(ptr8 + 1);
                float* ptr9 = (float*)(i * 16 + (int)__dest);
                float v47 = *ptr9;
                v37 = *ptr8 - *(ptr9 + 1);
                v2[v8] = quantum_imag6(v46 - v47, v37);
                int v48 = v25 + v25;
                float* ptr10 = (float*)(i * 16 + param0[3]);
                float v49 = *(ptr10 + 1);
                float* ptr11 = (float*)(i * 16 + (int)__dest);
                float v50 = *ptr11;
                v37 = *ptr10 + *(ptr11 + 1);
                v2[v8] = quantum_imag6(v49 + v50, v37);
                v48 = fdivr(v48);
                v0 = v24;
            }
            v36 = 6;
            fucompp();
            v4 = fnstsw(v4);
            if(!((v10 >>> 8) & 0x1) && !((v10 >>> 14) & 0x1)) {
                v35 = v0;
                v36 = 6;
            }
        }
        v2[v36 - 1] = *param3;
        double v51 = v2[v36 - 1];
        v2[v36 - 1] = *param3;
        double v52 = v2[v36 - 1];
        v2[v36 - 1] = *(double*)&v29;
        v2[v36 - 1] /= v35;
        v2[v36 - 2] = 0.2;
        *(long long*)&v6 = v2[v36 - 2];
        *(long long*)&v1 = v2[v36 - 1];
        v2[v8] = →pow(*(double*)&v1, *(double*)&v6);
        *param3 = v20 * v52;
        fucompp();
        short v58 = fnstsw((unsigned short)param3);
        if(!((v16 >>> 8) & 0x1) && !((v16 >>> 14) & 0x1)) {
            int v53 = param0[0];
            int v54 = param0[1];
            int v55 = param0[2];
            int v56 = param0[3];
            int v57 = param0[4];
            param0[0] = v17;
            param0[1] = v15;
            param0[2] = v7;
            param0[3] = (int)__dest1;
            param0[4] = v18;
            v17 = v53;
            v15 = v54;
            v7 = v55;
            __dest1 = (void*)v56;
            v18 = v57;
            →memcpy(__dest, param0[3], (size_t)(param0[1] * 16));
            void* ptr12 = /*BAD_CALL!*/ →memcpy(__dest1, param0[3], (size_t)(param0[1] * 16));
            v16 = (unsigned short)ptr12;
        }
        v5 = 4;
        fucompp();
        short v59 = fnstsw(v16);
    }
    while(!((v23 >>> 8) & 0x1) && !((v23 >>> 14) & 0x1));
    param0[4] = v31;
    param0[2] = result;
    return result;
}

int quantum_scalar_qureg(float param0, float param1, int param2) {
    int v0;
    int min = 0;
    int i;
    for(i = *(int*)(param2 + 4); i > min; i = *(int*)(param2 + 4)) {
        int* ptr0 = (int*)(min * 16 + *(int*)(param2 + 12));
        float* ptr1 = (float*)(min * 16 + *(int*)(param2 + 12));
        int v1 = __mulsc3(ptr1[0], ptr1[1], param0, param1);
        *ptr0 = v1;
        *(ptr0 + 1) = v0;
        ++min;
    }
    return i;
}

short quantum_set_decoherence(float param0) {
    short result;
    int v0;
    fldz();
    fucompp();
    result = fnstsw(result);
    if(((v0 >>> 10) & 0x1) || !((v0 >>> 14) & 0x1)) {
        quantum_status = 1;
        quantum_lambda = param0;
    }
    else {
        quantum_status = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int quantum_sigma_x(int param0, size_t* param1) {
    int result;
    int v0;
    quantum_qec_get_status(&v0, NULL);
    if(v0) {
        result = quantum_sigma_x_ft(param0, (int)param1);
    }
    else {
        int v1 = param0;
        result = quantum_objcode_put(3);
        if(!result) {
            for(int i = 0; i < (int)param1[1]; ++i) {
                int v2 = i * 16 + param1[3];
                int v3 = i * 16 + param1[3];
                int v4 = *(int*)(v3 + 8);
                int v5 = *(int*)(v3 + 12);
                int v6 = 1;
                int v7 = 0;
                int v8 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
                int v9 = 1 << (param0 & 0x1f);
                if(((unsigned char)param0 & 0x20)) {
                    v8 = v9;
                    v9 = 0;
                }
                int v10 = v2;
                *(int*)(v10 + 8) = v9 ^ v4;
                *(int*)(v10 + 12) = v8 ^ v5;
            }
            result = (int)quantum_decohere(param1);
        }
    }
    return result;
}

unsigned int quantum_sigma_x_ft(int param0, size_t* param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    __SyntheticTypeUnknownF v2;
    unsigned int result = type;
    type = 0;
    v0[v1] = quantum_get_decoherence();
    float v3 = v2;
    quantum_set_decoherence(0.0);
    quantum_sigma_x(param0, param1);
    quantum_sigma_x((int)(width + param0), param1);
    quantum_set_decoherence(v3);
    quantum_sigma_x(width * 2 + param0, param1);
    quantum_qec_counter(1, 0, param1);
    type = result;
    return result;
}

size_t* quantum_sigma_y(int param0, size_t* param1) {
    size_t* result;
    int v0;
    int v1 = param0;
    int v2 = quantum_objcode_put(4);
    if(!v2) {
        for(int i = 0; i < param1[1]; ++i) {
            int v3 = i * 16 + param1[3];
            int v4 = i * 16 + param1[3];
            int v5 = *(int*)(v4 + 8);
            int v6 = *(int*)(v4 + 12);
            int v7 = 1;
            int v8 = 0;
            int v9 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
            int v10 = 1 << (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v9 = v10;
                v10 = 0;
            }
            int v11 = v3;
            *(int*)(v11 + 8) = v10 ^ v5;
            *(int*)(v11 + 12) = v9 ^ v6;
            int v12 = i * 16 + param1[3];
            int v13 = *(int*)(v12 + 12);
            int v14 = (unsigned int)(((unsigned long long)*(int*)(v12 + 8) | ((unsigned long long)v13 << 32)) >>> (param0 & 0x1f));
            int v15 = v13 >>> (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v14 = v15;
            }
            if((unsigned char)(v14 & 0x1)) {
                int* ptr0 = (int*)(i * 16 + param1[3]);
                float* ptr1 = (float*)(i * 16 + param1[3]);
                int v16 = __mulsc3(ptr1[0], ptr1[1], 0.0, 1.0);
                *ptr0 = v16;
                *(ptr0 + 1) = v0;
            }
            else {
                int* ptr2 = (int*)(i * 16 + param1[3]);
                float* ptr3 = (float*)(i * 16 + param1[3]);
                int v17 = __mulsc3(ptr3[0], ptr3[1], 0.0, -1.0);
                *ptr2 = v17;
                *(ptr2 + 1) = v0;
            }
        }
        result = param1;
        quantum_decohere(result);
    }
    return result;
}

size_t* quantum_sigma_z(int param0, size_t* param1) {
    size_t* result;
    int v0 = param0;
    int v1 = quantum_objcode_put(5);
    if(!v1) {
        for(int i = 0; i < param1[1]; ++i) {
            int v2 = i * 16 + param1[3];
            int v3 = *(int*)(v2 + 12);
            int v4 = (unsigned int)(((unsigned long long)*(int*)(v2 + 8) | ((unsigned long long)v3 << 32)) >>> (param0 & 0x1f));
            int v5 = v3 >>> (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v4 = v5;
            }
            if((unsigned char)(v4 & 0x1)) {
                int* ptr0 = (int*)(i * 16 + param1[3]);
                float* ptr1 = (float*)(i * 16 + param1[3]);
                fchs();
                fchs();
                __SyntheticTypeUnknownF v6 = *(ptr1 + 1);
                int v7 = *ptr1;
                int v8 = *ptr1;
                *ptr0 = v6;
                *(ptr0 + 1) = v8;
            }
        }
        result = param1;
        quantum_decohere(result);
    }
    return result;
}

int* quantum_state_collapse(int* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    int max;
    __SyntheticTypeUnknownF v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    __SyntheticTypeUnknownF v10;
    int v11;
    int v12;
    size_t __nmemb = 0;
    fldz();
    double v13 = v10;
    int v14 = 0;
    int v15 = 0;
    int v16 = 0;
    int v17 = 0;
    int v18 = (unsigned int)((1L << (v4 & 0x1f)) >>> 32L);
    int v19 = 1 << (v4 & 0x1f);
    if(((unsigned char)v4 & 0x20)) {
        v18 = v19;
        v19 = 0;
    }
    int v20 = v19;
    int v21 = v18;
    int i;
    for(i = 0; i < max; ++i) {
        int v22 = i * 16 + v7;
        if(!((*(int*)(v22 + 8) & v20) | (*(int*)(v22 + 12) & v21)) || !v8) {
            int v23 = i * 16 + v7;
            if(!((*(int*)(v23 + 8) & v20) | (*(int*)(v23 + 12) & v21)) && !v8) {
                goto loc_8051711;
            }
        }
        else {
        loc_8051711:
            int* ptr0 = (int*)(i * 16 + v7);
            quantum_prob_inline5(ptr0[0], ptr0[1]);
            __SyntheticTypeUnknownF v24 = v24 + v13;
            v13 = v24;
            ++__nmemb;
        }
    }
    int v25 = v11 - 1;
    size_t v26 = __nmemb;
    void* ptr1 = →calloc(__nmemb, 16);
    if(!ptr1) {
        quantum_error(2);
    }
    quantum_memman((int)(__nmemb * 16));
    int v27 = v5;
    int v28 = v12;
    i = 0;
    int v29 = 0;
    while(i < max) {
        int v30 = i * 16 + v7;
        if(!((*(int*)(v30 + 8) & v20) | (*(int*)(v30 + 12) & v21)) || !v8) {
            int v31 = i * 16 + v7;
            if(!((*(int*)(v31 + 8) & v20) | (*(int*)(v31 + 12) & v21)) && !v8) {
                goto loc_80517FD;
            }
        }
        else {
        loc_80517FD:
            int v32 = 0;
            v16 = 0;
            v17 = 0;
            while(v32 < v4) {
                int v33 = (unsigned int)((1L << (v32 & 0x1f)) >>> 32L);
                int v34 = 1 << (v32 & 0x1f);
                if(((unsigned char)v32 & 0x20)) {
                    v33 = v34;
                    v34 = 0;
                }
                int v35 = v16;
                v16 += v34;
                v17 += (unsigned int)__carry__(v34, v35) + v33;
                ++v32;
            }
            int v36 = i * 16 + v7;
            int v37 = *(int*)(v36 + 12);
            v16 &= *(int*)(v36 + 8);
            v17 &= v37;
            v32 = 63;
            v14 = 0;
            v15 = 0;
            while(v32 > v4) {
                int v38 = (unsigned int)((1L << (v32 & 0x1f)) >>> 32L);
                int v39 = 1 << (v32 & 0x1f);
                if(((unsigned char)v32 & 0x20)) {
                    v38 = v39;
                    v39 = 0;
                }
                int v40 = v14;
                v14 += v39;
                v15 += (unsigned int)__carry__(v39, v40) + v38;
                --v32;
            }
            int v41 = i * 16 + v7;
            int v42 = *(int*)(v41 + 12);
            v14 &= *(int*)(v41 + 8);
            v15 &= v42;
            int* ptr2 = (int*)(v29 * 16 + (int)ptr1);
            int v43 = (v15 >>> 1) | v17;
            *(ptr2 + 2) = (unsigned int)((unsigned long long)((v14 >>> 1) & 0x7FFFFFFF) | ((unsigned long long)v15 << 31) | ((unsigned long long)0 << 63)) | v16;
            *(ptr2 + 3) = v43;
            int* ptr3 = (int*)(v29 * 16 + (int)ptr1);
            float* ptr4 = (float*)(i * 16 + v7);
            int v44 = *ptr4;
            int v45 = *(ptr4 + 1);
            fsqrt();
            double v46 = v13;
            char v47 = 6;
            v0[v2] = fucomp(v46, v46);
            (unsigned short)v51 = fnstsw((unsigned short)ptr4);
            if(((v6 >>> 10) & 0x1) || !((v6 >>> 14) & 0x1)) {
                *(long long*)&v9 = v13;
                v0[v2] = →sqrt(*(double*)&v9);
                v46 = v3;
                v47 = 0;
            }
            v0[v47 - 1] = v46;
            float v48 = v0[v47 - 1];
            float v49 = v0[v47 - 1];
            int v50 = __divsc3(v44, v45, v49, 0.0);
            *ptr3 = v50;
            *(ptr3 + 1) = v1;
            ++v29;
        }
        ++i;
    }
    *param0 = v25;
    *(size_t*)(param0 + 1) = v26;
    *(param0 + 2) = v27;
    *(void**)(param0 + 3) = ptr1;
    *(param0 + 4) = v28;
    return param0;
}

int quantum_strerr(int param0) {
    int result;
    switch(param0) {
        case 3: {
            return "matrix too large";
        }
        case 5: {
            return "hash table full";
        }
        case 65536: {
            return "single-column matrix expected";
        }
        default: {
            if(param0 <= 3) {
                if(param0 == 1) {
                    result = "failure";
                }
                else if(param0 > 1) {
                    result = "malloc failed";
                }
                else if(param0) {
                    goto loc_804A010;
                }
                else {
                    result = "success";
                }
            }
            else if(param0 < 5) {
                result = "wrong matrix size";
            }
            else if(param0 != 0x10001) {
            loc_804A010:
                result = "unknown error code";
            }
            else {
                result = "unknown opcode";
            }
            return result;
        }
    }
}

int quantum_swaptheleads(int param0, size_t* param1) {
    int i;
    int v0;
    int v1;
    quantum_qec_get_status(&v1, NULL);
    if(v1) {
        v0 = 0;
        for(i = v0; i < param0; i = v0) {
            quantum_cnot(v0, v0 + param0, param1);
            quantum_cnot(v0 + param0, v0, param1);
            quantum_cnot(v0, v0 + param0, param1);
            ++v0;
        }
    }
    else {
        v0 = 0;
        for(i = (int)param1[1]; i > v0; i = (int)param1[1]) {
            int v2 = param0;
            i = quantum_objcode_put(14);
            if(i) {
                return i;
            }
            int v3 = *(int*)(v0 * 16 + param1[3] + 8);
            int v4 = 1 << (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v4 = 0;
            }
            int v5 = (v4 - 1) & v3;
            int v6 = 0;
            for(int j = 0; j < param0; ++j) {
                int v7 = *(int*)(v0 * 16 + param1[3] + 8);
                int v8 = j + param0;
                int v9 = 1 << (v8 & 0x1f);
                if(((unsigned char)v8 & 0x20)) {
                    v9 = 0;
                }
                v6 += v9 & v7;
            }
            int v10 = v0 * 16 + param1[3];
            unsigned int v11 = (unsigned int)(v6 + v5);
            unsigned int v12 = *(unsigned int*)(v10 + 8);
            int v13 = *(int*)(v10 + 12) - ((v11 >> 31) + (unsigned int)(v11 > v12));
            unsigned int v14 = v12 - v11;
            int v15 = v5 << (param0 & 0x1f);
            unsigned int v16 = v14;
            v14 = (unsigned int)(v15 + v14);
            int v17 = (v15 >> 31) + (unsigned int)__carry__(v15, v16) + v13;
            int v18 = v6 >> (param0 & 0x1f);
            unsigned int v19 = v14;
            v14 = (unsigned int)(v18 + v14);
            v17 += (v18 >> 31) + (unsigned int)__carry__(v18, v19);
            int v20 = v0 * 16 + param1[3];
            int v21 = v17;
            *(unsigned int*)(v20 + 8) = v14;
            *(int*)(v20 + 12) = v21;
            ++v0;
        }
    }
    return i;
}

int quantum_swaptheleads_omuln_controlled(int param0, int param1, size_t* param2) {
    int v0 = 0;
    int i;
    for(i = v0; i < param1; i = v0) {
        quantum_toffoli(param0, v0 + param1, v0 + param1 + (param1 + 2), param2);
        quantum_toffoli(param0, v0 + param1 + (param1 + 2), v0 + param1, param2);
        quantum_toffoli(param0, v0 + param1, v0 + param1 + (param1 + 2), param2);
        ++v0;
    }
    return i;
}

// Stale decompilation - Refresh this view to re-decompile this code
int quantum_toffoli(int param0, int param1, int param2, size_t* param3) {
    int result;
    int v0;
    quantum_qec_get_status(&v0, NULL);
    if(v0) {
        result = quantum_toffoli_ft(param0, param1, param2, (int)param3);
    }
    else {
        int v1 = param2;
        int v2 = param1;
        int v3 = param0;
        result = quantum_objcode_put(2);
        if(!result) {
            for(int i = 0; i < (int)param3[1]; ++i) {
                int v4 = i * 16 + param3[3];
                int v5 = *(int*)(v4 + 12);
                int v6 = (unsigned int)(((unsigned long long)*(int*)(v4 + 8) | ((unsigned long long)v5 << 32)) >>> (param0 & 0x1f));
                int v7 = v5 >>> (param0 & 0x1f);
                if(((unsigned char)param0 & 0x20)) {
                    v6 = v7;
                }
                if((unsigned char)(v6 & 0x1)) {
                    int v8 = i * 16 + param3[3];
                    int v9 = *(int*)(v8 + 12);
                    int v10 = (unsigned int)(((unsigned long long)*(int*)(v8 + 8) | ((unsigned long long)v9 << 32)) >>> (param1 & 0x1f));
                    int v11 = v9 >>> (param1 & 0x1f);
                    if(((unsigned char)param1 & 0x20)) {
                        v10 = v11;
                    }
                    if((unsigned char)(v10 & 0x1)) {
                        int v12 = i * 16 + param3[3];
                        int v13 = i * 16 + param3[3];
                        int v14 = *(int*)(v13 + 8);
                        int v15 = *(int*)(v13 + 12);
                        int v16 = 1;
                        int v17 = 0;
                        int v18 = (unsigned int)((1L << (param2 & 0x1f)) >>> 32L);
                        int v19 = 1 << (param2 & 0x1f);
                        if(((unsigned char)param2 & 0x20)) {
                            v18 = v19;
                            v19 = 0;
                        }
                        int v20 = v12;
                        *(int*)(v20 + 8) = v19 ^ v14;
                        *(int*)(v20 + 12) = v18 ^ v15;
                    }
                }
            }
            result = (int)quantum_decohere(param3);
        }
    }
    return result;
}

unsigned int quantum_toffoli_ft(int param0, int param1, int param2, size_t* param3) {
    int v0 = (unsigned int)((1L << (param2 & 0x1f)) >>> 32L);
    int v1 = 1 << (param2 & 0x1f);
    if(((unsigned char)param2 & 0x20)) {
        v0 = v1;
        v1 = 0;
    }
    int v2 = width + param2;
    int v3 = (unsigned int)((1L << (v2 & 0x1f)) >>> 32L);
    int v4 = 1 << (v2 & 0x1f);
    if(((unsigned char)v2 & 0x20)) {
        v3 = v4;
        v4 = 0;
    }
    int v5 = v4 + v1;
    int v6 = (unsigned int)__carry__(v4, v1) + v3 + v0;
    int v7 = width * 2 + param2;
    int v8 = (unsigned int)((1L << (v7 & 0x1f)) >>> 32L);
    int v9 = 1 << (v7 & 0x1f);
    if(((unsigned char)v7 & 0x20)) {
        v8 = v9;
        v9 = 0;
    }
    int v10 = v9 + v5;
    int v11 = (unsigned int)__carry__(v9, v5) + v8 + v6;
    for(int i = 0; i < (int)param3[1]; ++i) {
        int v12 = 0;
        int v13 = 0;
        int v14 = i * 16 + param3[3];
        int v15 = *(int*)(v14 + 12);
        int v16 = (unsigned int)(((unsigned long long)*(int*)(v14 + 8) | ((unsigned long long)v15 << 32)) >>> (param0 & 0x1f));
        int v17 = v15 >>> (param0 & 0x1f);
        if(((unsigned char)param0 & 0x20)) {
            v16 = v17;
        }
        if((unsigned char)(v16 & 0x1)) {
            v12 = 1;
        }
        int v18 = i * 16 + param3[3];
        int v19 = width + param0;
        int v20 = *(int*)(v18 + 12);
        int v21 = (unsigned int)(((unsigned long long)*(int*)(v18 + 8) | ((unsigned long long)v20 << 32)) >>> (v19 & 0x1f));
        int v22 = v20 >>> (v19 & 0x1f);
        if(((unsigned char)v19 & 0x20)) {
            v21 = v22;
        }
        if((unsigned char)(v21 & 0x1)) {
            v12 ^= 1;
        }
        int v23 = i * 16 + param3[3];
        int v24 = width * 2 + param0;
        int v25 = *(int*)(v23 + 12);
        int v26 = (unsigned int)(((unsigned long long)*(int*)(v23 + 8) | ((unsigned long long)v25 << 32)) >>> (v24 & 0x1f));
        int v27 = v25 >>> (v24 & 0x1f);
        if(((unsigned char)v24 & 0x20)) {
            v26 = v27;
        }
        if((unsigned char)(v26 & 0x1)) {
            v12 ^= 1;
        }
        int v28 = i * 16 + param3[3];
        int v29 = *(int*)(v28 + 12);
        int v30 = (unsigned int)(((unsigned long long)*(int*)(v28 + 8) | ((unsigned long long)v29 << 32)) >>> (param1 & 0x1f));
        int v31 = v29 >>> (param1 & 0x1f);
        if(((unsigned char)param1 & 0x20)) {
            v30 = v31;
        }
        if((unsigned char)(v30 & 0x1)) {
            v13 = 1;
        }
        int v32 = i * 16 + param3[3];
        int v33 = width + param1;
        int v34 = *(int*)(v32 + 12);
        int v35 = (unsigned int)(((unsigned long long)*(int*)(v32 + 8) | ((unsigned long long)v34 << 32)) >>> (v33 & 0x1f));
        int v36 = v34 >>> (v33 & 0x1f);
        if(((unsigned char)v33 & 0x20)) {
            v35 = v36;
        }
        if((unsigned char)(v35 & 0x1)) {
            v13 ^= 1;
        }
        int v37 = i * 16 + param3[3];
        int v38 = width * 2 + param1;
        int v39 = *(int*)(v37 + 12);
        int v40 = (unsigned int)(((unsigned long long)*(int*)(v37 + 8) | ((unsigned long long)v39 << 32)) >>> (v38 & 0x1f));
        int v41 = v39 >>> (v38 & 0x1f);
        if(((unsigned char)v38 & 0x20)) {
            v40 = v41;
        }
        if((unsigned char)(v40 & 0x1)) {
            v13 ^= 1;
        }
        if(v12 == 1 && v13 == 1) {
            int v42 = i * 16 + param3[3];
            int v43 = i * 16 + param3[3];
            int v44 = *(int*)(v43 + 12) ^ v11;
            *(int*)(v42 + 8) = *(int*)(v43 + 8) ^ v10;
            *(int*)(v42 + 12) = v44;
        }
    }
    quantum_decohere(param3);
    return quantum_qec_counter(1, 0, param3);
}

unsigned int quantum_unbounded_toffoli(int param0, size_t* param1) {
    char v0;
    void* __ptr = →malloc((size_t)(param0 * 4));
    if(!__ptr) {
        quantum_error(2);
    }
    quantum_memman(param0 * 4);
    int* ptr0 = &v0;
    int i;
    for(i = 0; i < param0; ++i) {
        int* ptr1 = (int*)(i * 4 + (int)__ptr);
        int* ptr2 = ptr0;
        ptr0 = ptr2 + 1;
        *ptr1 = *ptr2;
    }
    int* ptr3 = ptr0;
    ptr0 = ptr3 + 1;
    int v1 = *ptr3;
    for(i = 0; i < (int)param1[1]; ++i) {
        int v2 = 0;
        while(v2 < param0) {
            int v3 = i * 16 + param1[3];
            int v4 = *(int*)(v2 * 4 + (int)__ptr);
            int v5 = *(int*)(v3 + 12);
            int v6 = (unsigned int)(((unsigned long long)*(int*)(v3 + 8) | ((unsigned long long)v5 << 32)) >>> (v4 & 0x1f));
            int v7 = v5 >>> (v4 & 0x1f);
            if(((unsigned char)v4 & 0x20)) {
                v6 = v7;
            }
            if(!(unsigned char)(v6 & 0x1)) {
                break;
            }
            else {
                ++v2;
            }
        }
        if(v2 == param0) {
            int v8 = i * 16 + param1[3];
            int v9 = i * 16 + param1[3];
            int v10 = *(int*)(v9 + 8);
            int v11 = *(int*)(v9 + 12);
            int v12 = 1;
            int v13 = 0;
            int v14 = (unsigned int)((1L << (v1 & 0x1f)) >>> 32L);
            int v15 = 1 << (v1 & 0x1f);
            if(((unsigned char)v1 & 0x20)) {
                v14 = v15;
                v15 = 0;
            }
            int v16 = v8;
            *(int*)(v16 + 8) = v15 ^ v10;
            *(int*)(v16 + 12) = v14 ^ v11;
        }
    }
    →free(__ptr);
    quantum_memman(0 - param0 * 4);
    return quantum_decohere(param1);
}

int* quantum_vectoradd(int* param0) {
    int i;
    int v0;
    int v1;
    int v2;
    int v3;
    void* __ptr;
    int* ptr0;
    int v4 = 0;
    quantum_copy_qureg(ptr0, &v0);
    if(ptr0[2] || *(int*)(v3 + 8)) {
        quantum_reconstruct_hash3((int)ptr0);
        quantum_copy_qureg(ptr0, &v0);
        for(i = 0; i < *(int*)(v3 + 4); ++i) {
            int v5 = i * 16 + *(int*)(v3 + 12);
            int v6 = quantum_get_state3(*(int*)(v5 + 8), *(int*)(v5 + 12), ptr0[0], ptr0[1], ptr0[2], ptr0[3], ptr0[4]);
            if(v6 == -1) {
                ++v4;
            }
        }
    }
    int v7 = v7 + v4;
    __ptr = →realloc(__ptr, (size_t)(v7 * 16));
    if(!__ptr) {
        quantum_error(2);
    }
    quantum_memman(v4 * 16);
    int v8 = ptr0[1];
    for(i = 0; i < *(int*)(v3 + 4); ++i) {
        int v9 = i * 16 + *(int*)(v3 + 12);
        int v10 = quantum_get_state3(*(int*)(v9 + 8), *(int*)(v9 + 12), ptr0[0], ptr0[1], ptr0[2], ptr0[3], ptr0[4]);
        if(v10 >= 0) {
            int* ptr1 = (int*)(v10 * 16 + (int)__ptr);
            float* ptr2 = (float*)(v10 * 16 + (int)__ptr);
            float* ptr3 = (float*)(i * 16 + *(int*)(v3 + 12));
            __SyntheticTypeUnknownF v11 = *(ptr2 + 1) + *ptr3;
            int v12 = *ptr2 + *(ptr3 + 1);
            int v13 = *ptr2 + *(ptr3 + 1);
            *ptr1 = v11;
            *(ptr1 + 1) = v13;
        }
        else {
            int* ptr4 = (int*)(v8 * 16 + (int)__ptr);
            int v14 = i * 16 + *(int*)(v3 + 12);
            int v15 = *(int*)(v14 + 12);
            *(ptr4 + 2) = *(int*)(v14 + 8);
            *(ptr4 + 3) = v15;
            int* ptr5 = (int*)(v8 * 16 + (int)__ptr);
            int* ptr6 = (int*)(i * 16 + *(int*)(v3 + 12));
            int v16 = *(ptr6 + 1);
            *ptr5 = *ptr6;
            *(ptr5 + 1) = v16;
            ++v8;
        }
    }
    *param0 = v0;
    *(param0 + 1) = v7;
    *(param0 + 2) = v1;
    *(void**)(param0 + 3) = __ptr;
    *(param0 + 4) = v2;
    return param0;
}

int quantum_vectoradd_inplace(int param0, int param1) {
    int i;
    int v0 = 0;
    if(*(int*)(param0 + 8) || *(int*)(param1 + 8)) {
        quantum_reconstruct_hash3(param0);
        for(i = 0; i < *(int*)(param1 + 4); ++i) {
            int v1 = i * 16 + *(int*)(param1 + 12);
            int v2 = quantum_get_state3(*(int*)(v1 + 8), *(int*)(v1 + 12), *(int*)param0, *(int*)(param0 + 4), *(int*)(param0 + 8), *(int*)(param0 + 12), *(int*)(param0 + 16));
            if(v2 == -1) {
                ++v0;
            }
        }
    }
    void* ptr0 = →realloc(*(void**)(param0 + 12), (size_t)((*(int*)(param0 + 4) + v0) * 16));
    *(void**)(param0 + 12) = ptr0;
    if(!*(int*)(param0 + 12)) {
        quantum_error(2);
    }
    quantum_memman(v0 * 16);
    int v3 = *(int*)(param0 + 4);
    for(i = 0; i < *(int*)(param1 + 4); ++i) {
        int v4 = i * 16 + *(int*)(param1 + 12);
        int v5 = quantum_get_state3(*(int*)(v4 + 8), *(int*)(v4 + 12), *(int*)param0, *(int*)(param0 + 4), *(int*)(param0 + 8), *(int*)(param0 + 12), *(int*)(param0 + 16));
        if(v5 >= 0) {
            int* ptr1 = (int*)(v5 * 16 + *(int*)(param0 + 12));
            float* ptr2 = (float*)(v5 * 16 + *(int*)(param0 + 12));
            float* ptr3 = (float*)(i * 16 + *(int*)(param1 + 12));
            __SyntheticTypeUnknownF v6 = *(ptr2 + 1) + *ptr3;
            int v7 = *ptr2 + *(ptr3 + 1);
            int v8 = *ptr2 + *(ptr3 + 1);
            *ptr1 = v6;
            *(ptr1 + 1) = v8;
        }
        else {
            int v9 = v3 * 16 + *(int*)(param0 + 12);
            int v10 = i * 16 + *(int*)(param1 + 12);
            int v11 = *(int*)(v10 + 12);
            *(int*)(v9 + 8) = *(int*)(v10 + 8);
            *(int*)(v9 + 12) = v11;
            int* ptr4 = (int*)(v3 * 16 + *(int*)(param0 + 12));
            int* ptr5 = (int*)(i * 16 + *(int*)(param1 + 12));
            int v12 = *(ptr5 + 1);
            *ptr4 = *ptr5;
            *(ptr4 + 1) = v12;
            ++v3;
        }
    }
    *(int*)(param0 + 4) = *(int*)(param0 + 4) + v0;
    return param0;
}

int quantum_walsh(int param0, int param1) {
    int v0 = 0;
    int i;
    for(i = v0; i < param0; i = v0) {
        quantum_hadamard(v0, param1);
        ++v0;
    }
    return i;
}

void sub_8048814() {
    jump gvar_8055FFC;
}

int test_sum(int param0, int param1, size_t* param2) {
    int result;
    int v0 = (unsigned int)(((unsigned long long)param0 | ((unsigned long long)(param0 >> 31) << 32)) >>> ((param1 - 1) & 0x1f));
    int v1 = (param0 >> 31) >>> ((param1 - 1) & 0x1f);
    if((((unsigned char)param1 + 0xFF) & 0x20)) {
        v0 = v1;
    }
    if((unsigned char)(v0 & 0x1)) {
        quantum_cnot(param1 * 2 - 1, param1 - 1, param2);
        quantum_sigma_x(param1 * 2 - 1, param2);
        quantum_cnot(param1 * 2 - 1, 0, param2);
    }
    else {
        quantum_sigma_x(param1 * 2 - 1, param2);
        quantum_cnot(param1 * 2 - 1, param1 - 1, param2);
    }
    int i;
    for(i = param1 - 2; i > 0; --i) {
        if((unsigned char)((param0 >> (i & 0x1f)) & 0x1)) {
            quantum_toffoli(i + 1, i + param1, i, param2);
            quantum_sigma_x(i + param1, param2);
            quantum_toffoli(i + 1, i + param1, 0, param2);
        }
        else {
            quantum_sigma_x(i + param1, param2);
            quantum_toffoli(i + 1, i + param1, i, param2);
        }
    }
    if((unsigned char)(param0 & 0x1)) {
        quantum_sigma_x(param1, param2);
        quantum_toffoli(param1, 1, 0, param2);
    }
    quantum_toffoli(param1 * 2 + 1, 0, param1 * 2, param2);
    if((unsigned char)(param0 & 0x1)) {
        quantum_toffoli(param1, 1, 0, param2);
        quantum_sigma_x(param1, param2);
    }
    for(i = 1; i <= param1 - 2; ++i) {
        if((unsigned char)((param0 >> (i & 0x1f)) & 0x1)) {
            quantum_toffoli(i + 1, i + param1, 0, param2);
            quantum_sigma_x(i + param1, param2);
            quantum_toffoli(i + 1, i + param1, i, param2);
        }
        else {
            quantum_toffoli(i + 1, i + param1, i, param2);
            quantum_sigma_x(i + param1, param2);
        }
    }
    if((unsigned char)((param0 >> ((param1 - 1) & 0x1f)) & 0x1)) {
        quantum_cnot(param1 * 2 - 1, 0, param2);
        quantum_sigma_x(param1 * 2 - 1, param2);
        result = quantum_cnot(param1 * 2 - 1, param1 - 1, param2);
    }
    else {
        quantum_cnot(param1 * 2 - 1, param1 - 1, param2);
        result = quantum_sigma_x(param1 * 2 - 1, param2);
    }
    return result;
}
