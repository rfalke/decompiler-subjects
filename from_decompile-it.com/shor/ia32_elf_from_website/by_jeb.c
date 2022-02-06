
long long* __divdc3(long long* param0) {
    __int128 v0;
    __int128 v1;
    __SyntheticTypeUnknownF v2;
    double v3;
    __SyntheticTypeUnknownF v4;
    __SyntheticTypeUnknownF v5;
    __SyntheticTypeUnknownF v6;
    __SyntheticTypeUnknownF v7;
    __SyntheticTypeUnknownF v8;
    __SyntheticTypeUnknownF v9;
    __SyntheticTypeUnknownF v10;
    __SyntheticTypeUnknownF v11;
    __SyntheticTypeUnknownF v12;
    __int128 v13;
    __int128 v14;
    __SyntheticTypeUnknownF v15;
    __int128 v16;
    double v17;
    __SyntheticTypeUnknownF v18;
    __SyntheticTypeUnknownF v19;
    __SyntheticTypeUnknownF v20;
    __SyntheticTypeUnknownF v21;
    __SyntheticTypeUnknownF v22;
    __SyntheticTypeUnknownF v23;
    __SyntheticTypeUnknownF v24;
    __SyntheticTypeUnknownF v25;
    __int128 v26;
    __int128 v27;
    int v28;
    __SyntheticTypeUnknownF v29;
    long long* result = param0;
    v60[v61] = fabs(v17);
    v60[v61] = fabs(v16);
    fucompp(v13, v26);
    fnstsw((unsigned short)v28);
    if(!((v28 >>> 8) & 0x1) && !((v28 >>> 14) & 0x1)) {
        __SyntheticTypeUnknownF v30 = v11 / v22;
        __SyntheticTypeUnknownF v31 = v11 * v30 + v22;
        __SyntheticTypeUnknownF v32 = (v15 * v30 + v23) / v31;
        v10 = v23;
        v9 = v30 * v10;
        v8 = (v32 - v15) / v31;
    }
    else {
        v9 = v22 / v11;
        __SyntheticTypeUnknownF v33 = v22 * v9 + v11;
        __SyntheticTypeUnknownF v34 = (v23 * v9 + v15) / v33 * v15;
        v10 = v23;
        v8 = (v10 - v34) / v33;
    }
    fucom(v8, v8);
    fnstsw((unsigned short)v28);
    if(!((v28 >>> 10) & 0x1) && ((v28 >>> 14) & 0x1)) {
        v7 = v8;
        v6 = v9;
    }
    else {
        fucom(v8, v8);
        fnstsw((unsigned short)v28);
        if(((v28 >>> 10) & 0x1) || !((v28 >>> 14) & 0x1)) {
            fucom(0.0, v11);
            fnstsw((unsigned short)v28);
            if(((v28 >>> 14) & 0x1) && !((v28 >>> 10) & 0x1)) {
                fucom(0.0, v11);
                fnstsw((unsigned short)v28);
                char v35 = (v28 >>> 10) & 0x1;
                if(((v28 >>> 14) & 0x1) == 0) {
                    goto loc_8053E49;
                }
                else if(v35) {
                    goto loc_8053E49;
                }
                else {
                    fucom(v8, v8);
                    fnstsw((unsigned short)v28);
                    if(!((v28 >>> 10) & 0x1) && ((v28 >>> 14) & 0x1)) {
                        v5 = v8;
                        v4 = v22;
                    }
                    else {
                        fucom(v8, v8);
                        fnstsw((unsigned short)v28);
                        if(!((v28 >>> 14) & 0x1) || ((v28 >>> 10) & 0x1)) {
                            v3 = v23 - v23;
                            v2 = v22 - v22;
                            goto loc_8053FA3;
                        }
                        else {
                            v5 = v22;
                            v4 = v8;
                        }
                    }
                    fxam(v4);
                    fnstsw((unsigned short)v28);
                    __SyntheticTypeUnknownF v36 = (unsigned char)(v28 >>> 8) & 0x2 ? -Infinity: Infinity;
                    v6 = v5 * v36;
                    v7 = v23 * v36;
                }
            }
            else {
            loc_8053E49:
                __SyntheticTypeUnknownF v37 = v15 - v15;
                v3 = v37;
                __SyntheticTypeUnknownF v38 = v37;
                fucom(v38, v38);
                fnstsw((unsigned short)v28);
                __SyntheticTypeUnknownF v39 = v38;
                char v40 = (v28 >>> 10) & 0x1;
                fucomp(v39, v39);
                fnstsw((unsigned short)v28);
                char v41 = (v28 >>> 10) & 0x1;
                v28 = (unsigned int)(v41 ? 1: 0) | ((unsigned int)((v28 >>> 8) & 0xffffff) << 8);
                char v42 = (v40 ? 0: 1) & (v41 ? 1: 0);
                if(!((v40 ? 0: 1) & (v41 ? 1: 0))) {
                    __SyntheticTypeUnknownF v43 = v23 - v23;
                    fucom(v43, v43);
                    fnstsw((unsigned short)v28);
                    char v44 = (v28 >>> 10) & 0x1;
                    if(((v28 >>> 14) & 0x1) && !v44) {
                        fucomp(v43, v43);
                        fnstsw((unsigned short)v28);
                        if(((v28 >>> 10) & 0x1) || !((v28 >>> 14) & 0x1)) {
                            goto loc_8053E90;
                        }
                    }
                    else {
                        v23 = v43;
                    }
                    v2 = 0.0;
                }
                else {
                loc_8053E90:
                    __SyntheticTypeUnknownF v45 = v22 - v22;
                    fucom(v45, v45);
                    fnstsw((unsigned short)v28);
                    char v46 = (v28 >>> 10) & 0x1;
                    if(((v28 >>> 14) & 0x1) && !v46) {
                        fucomp(0.0, 0.0);
                        fnstsw((unsigned short)v28);
                        char v47 = (v28 >>> 10) & 0x1;
                        if(((v28 >>> 14) & 0x1)) {
                            if(!v47) {
                                __int128 v48 = !v42 ? 0.0: 1.0;
                                fxam(v48);
                                fnstsw((unsigned short)v28);
                                v60[v61] = fabs(v22);
                                if(((unsigned char)(v28 >>> 8) & 0x2)) {
                                    v60[v61] = fchs(v27);
                                }
                                __SyntheticTypeUnknownF v49 = v12 - v12;
                                fucom(v49, v49);
                                fnstsw((unsigned short)v28);
                                if(((v28 >>> 14) & 0x1) && !((v28 >>> 10) & 0x1)) {
                                    fucomp(v49, v49);
                                    fnstsw((unsigned short)v28);
                                    if(!((v28 >>> 10) & 0x1) && ((v28 >>> 14) & 0x1)) {
                                        goto loc_805415A;
                                    }
                                    else {
                                        v1 = 1.0;
                                    }
                                }
                                else {
                                loc_805415A:
                                    v1 = 0.0;
                                }
                                fxam(v1);
                                fnstsw((unsigned short)v28);
                                v60[v61] = fabs(v27);
                                if(((unsigned char)(v28 >>> 8) & 0x2)) {
                                    v60[v61] = fchs(v18);
                                }
                                v6 = v25 * Infinity * (v18 - v20 * ((v7 * v25 + v18 * v20) * Infinity));
                                *result = v7;
                                *(result + 1) = v6;
                                return result;
                            }
                            v2 = v45;
                            goto loc_8053FA3;
                        }
                    }
                    v2 = v45;
                }
            loc_8053FA3:
                fucom(v2, v2);
                fnstsw((unsigned short)v28);
                char v50 = (v28 >>> 10) & 0x1;
                fucomp(v2, v2);
                fnstsw((unsigned short)v28);
                char v51 = (v28 >>> 10) & 0x1;
                v28 = (unsigned int)(v51 ? 1: 0) | ((unsigned int)((v28 >>> 8) & 0xffffff) << 8);
                v42 = (v50 ? 0: 1) & (v51 ? 1: 0);
                if(!((v50 ? 0: 1) & (v51 ? 1: 0))) {
                    __SyntheticTypeUnknownF v52 = v23 - v23;
                    fucom(v52, v52);
                    fnstsw((unsigned short)v28);
                    char v53 = (v28 >>> 10) & 0x1;
                    if(((v28 >>> 14) & 0x1) && !v53) {
                        fucomp(v52, v52);
                        fnstsw((unsigned short)v28);
                        if(((v28 >>> 10) & 0x1) || !((v28 >>> 14) & 0x1)) {
                            goto loc_8053FE6;
                        }
                    }
                    v6 = v9;
                    v7 = v22;
                }
                else {
                loc_8053FE6:
                    __SyntheticTypeUnknownF v54 = v3;
                    fucomp(v54, v54);
                    fnstsw((unsigned short)v28);
                    char v55 = (v28 >>> 10) & 0x1;
                    if(!((v28 >>> 14) & 0x1)) {
                        v6 = v9;
                        v7 = v22;
                    }
                    else if(!v55) {
                        v54 = v8 - v8;
                        fucomp(v54, v54);
                        fnstsw((unsigned short)v28);
                        char v56 = (v28 >>> 10) & 0x1;
                        if(!((v28 >>> 14) & 0x1)) {
                            v6 = v9;
                            v7 = v22;
                        }
                        else if(!v56) {
                            __SyntheticTypeUnknownF v57 = v8;
                            __int128 v58 = !v42 ? 0.0: 1.0;
                            fxam(v58);
                            fnstsw((unsigned short)v28);
                            v60[v61] = fabs(v57);
                            if(((unsigned char)(v28 >>> 8) & 0x2)) {
                                v60[v61] = fchs(v14);
                            }
                            __SyntheticTypeUnknownF v59 = v21 - v21;
                            fucom(v59, v59);
                            fnstsw((unsigned short)v28);
                            if(((v28 >>> 14) & 0x1) && !((v28 >>> 10) & 0x1)) {
                                fucomp(v59, v59);
                                fnstsw((unsigned short)v28);
                                if(!((v28 >>> 10) & 0x1) && ((v28 >>> 14) & 0x1)) {
                                    goto loc_8054130;
                                }
                                else {
                                    v0 = 1.0;
                                }
                            }
                            else {
                            loc_8054130:
                                v0 = 0.0;
                            }
                            fxam(v0);
                            fnstsw((unsigned short)v28);
                            v60[v61] = fabs(v14);
                            if(((unsigned char)(v28 >>> 8) & 0x2)) {
                                v60[v61] = fchs(v24);
                            }
                            v7 = v19 * (v29 * 0.0 - v24 * ((v6 * v19 + v29 * v24) * 0.0));
                        }
                        else {
                            v6 = v9;
                            v7 = v22;
                        }
                    }
                    else {
                        v6 = v9;
                        v7 = v22;
                    }
                }
            }
        }
        else {
            v6 = v8;
            v7 = v9;
        }
    }
    *result = v7;
    *(result + 1) = v6;
    return result;
}

int __divsc3(float param0, float param1, float param2, float param3) {
    __int128 v0;
    char v1;
    __int128 v2;
    char v3;
    __SyntheticTypeUnknownF v4;
    float v5;
    __SyntheticTypeUnknownF v6;
    __SyntheticTypeUnknownF result;
    __SyntheticTypeUnknownF v7;
    __SyntheticTypeUnknownF v8;
    __SyntheticTypeUnknownF v9;
    __int128 v10;
    __SyntheticTypeUnknownF v11;
    __SyntheticTypeUnknownF v12;
    __SyntheticTypeUnknownF v13;
    __int128 v14;
    __SyntheticTypeUnknownF v15;
    __SyntheticTypeUnknownF v16;
    __SyntheticTypeUnknownF v17;
    __SyntheticTypeUnknownF v18;
    __int128 v19;
    __SyntheticTypeUnknownF v20;
    __SyntheticTypeUnknownF v21;
    __SyntheticTypeUnknownF v22;
    __SyntheticTypeUnknownF v23;
    __int128 v24;
    __int128 v25;
    int v26;
    v52[v53] = fabs(param2);
    v52[v53] = fabs(v19);
    fucompp(v14, v24);
    fnstsw((unsigned short)v26);
    if(!((v26 >>> 8) & 0x1) && !((v26 >>> 14) & 0x1)) {
        __SyntheticTypeUnknownF v27 = v11 / v22;
        __SyntheticTypeUnknownF v28 = v11 * v27 + v22;
        __SyntheticTypeUnknownF v29 = (v17 * v27 + v23) / v28;
        v9 = v23;
        v8 = v27 * v9;
        v7 = (v29 - v17) / v28;
    }
    else {
        v8 = v22 / v11;
        __SyntheticTypeUnknownF v30 = v22 * v8 + v11;
        __SyntheticTypeUnknownF v31 = (v23 * v8 + v17) / v30 * v17;
        v9 = v23;
        v7 = (v9 - v31) / v30;
    }
    fucom(v7, v7);
    fnstsw((unsigned short)v26);
    if(!((v26 >>> 10) & 0x1) && ((v26 >>> 14) & 0x1)) {
        result = v7;
    }
    else {
        fucom(v7, v7);
        fnstsw((unsigned short)v26);
        if(((v26 >>> 10) & 0x1) || !((v26 >>> 14) & 0x1)) {
            fucom(0.0, v11);
            fnstsw((unsigned short)v26);
            if(((v26 >>> 14) & 0x1) && !((v26 >>> 10) & 0x1)) {
                fucom(0.0, v11);
                fnstsw((unsigned short)v26);
                char v32 = (v26 >>> 10) & 0x1;
                if(((v26 >>> 14) & 0x1) == 0) {
                    goto loc_80539D9;
                }
                else if(v32) {
                    goto loc_80539D9;
                }
                else {
                    fucom(v7, v7);
                    fnstsw((unsigned short)v26);
                    if(!((v26 >>> 10) & 0x1) && ((v26 >>> 14) & 0x1)) {
                        v6 = v22;
                    }
                    else {
                        fucom(v7, v7);
                        fnstsw((unsigned short)v26);
                        if(!((v26 >>> 14) & 0x1) || ((v26 >>> 10) & 0x1)) {
                            v5 = v23 - v23;
                            v4 = v22 - v22;
                        loc_8053B33:
                            fucom(v4, v4);
                            fnstsw((unsigned short)v26);
                            char v33 = (v26 >>> 10) & 0x1;
                            fucomp(v4, v4);
                            fnstsw((unsigned short)v26);
                            char v34 = (v26 >>> 10) & 0x1;
                            v26 = (unsigned int)(v34 ? 1: 0) | ((unsigned int)((v26 >>> 8) & 0xffffff) << 8);
                            v1 = (v33 ? 0: 1) & (v34 ? 1: 0);
                            if(!((v33 ? 0: 1) & (v34 ? 1: 0))) {
                                __SyntheticTypeUnknownF v35 = v23 - v23;
                                fucom(v35, v35);
                                fnstsw((unsigned short)v26);
                                v3 = (v26 >>> 10) & 0x1;
                                if(((v26 >>> 14) & 0x1) && !v3) {
                                    fucomp(v35, v35);
                                    fnstsw((unsigned short)v26);
                                    if(((v26 >>> 10) & 0x1) || !((v26 >>> 14) & 0x1)) {
                                        goto loc_8053B76;
                                    }
                                }
                                result = v22;
                            }
                            else {
                            loc_8053B76:
                                __SyntheticTypeUnknownF v36 = v5;
                                fucomp(v36, v36);
                                fnstsw((unsigned short)v26);
                                v3 = (v26 >>> 10) & 0x1;
                                if(!((v26 >>> 14) & 0x1)) {
                                    result = v22;
                                }
                                else if(!v3) {
                                    v36 = v7 - v7;
                                    fucomp(v36, v36);
                                    fnstsw((unsigned short)v26);
                                    v3 = (v26 >>> 10) & 0x1;
                                    if(!((v26 >>> 14) & 0x1)) {
                                        result = v22;
                                    }
                                    else if(!v3) {
                                        __SyntheticTypeUnknownF v37 = v7;
                                        __int128 v38 = !v1 ? 0.0: 1.0;
                                        fxam(v38);
                                        fnstsw((unsigned short)v26);
                                        v52[v53] = fabs(v37);
                                        if(((unsigned char)(v26 >>> 8) & 0x2)) {
                                            v52[v53] = fchs(v10);
                                        }
                                        __SyntheticTypeUnknownF v39 = v21 - v21;
                                        fucom(v39, v39);
                                        fnstsw((unsigned short)v26);
                                        if(((v26 >>> 14) & 0x1) && !((v26 >>> 10) & 0x1)) {
                                            fucomp(v39, v39);
                                            fnstsw((unsigned short)v26);
                                            if(!((v26 >>> 10) & 0x1) && ((v26 >>> 14) & 0x1)) {
                                                goto loc_8053CC0;
                                            }
                                            else {
                                                v2 = 1.0;
                                            }
                                        }
                                        else {
                                        loc_8053CC0:
                                            v2 = 0.0;
                                        }
                                        fxam(v2);
                                        fnstsw((unsigned short)v26);
                                        v52[v53] = fabs(v10);
                                        if(((unsigned char)(v26 >>> 8) & 0x2)) {
                                            v52[v53] = fchs(v18);
                                        }
                                        result = v15 * (v16 * 0.0 - v18 * ((v20 * v15 + v16 * v18) * 0.0));
                                    }
                                    else {
                                        result = v22;
                                    }
                                }
                                else {
                                    result = v22;
                                }
                            }
                            return result;
                        }
                        v6 = v7;
                    }
                    fxam(v6);
                    fnstsw((unsigned short)v26);
                    result = v23 * ((unsigned char)(v26 >>> 8) & 0x2 ? -Infinity: Infinity);
                }
            }
            else {
            loc_80539D9:
                __SyntheticTypeUnknownF v40 = v17 - v17;
                v5 = v40;
                __SyntheticTypeUnknownF v41 = v40;
                fucom(v41, v41);
                fnstsw((unsigned short)v26);
                __SyntheticTypeUnknownF v42 = v41;
                char v43 = (v26 >>> 10) & 0x1;
                fucomp(v42, v42);
                fnstsw((unsigned short)v26);
                char v44 = (v26 >>> 10) & 0x1;
                v26 = (unsigned int)(v44 ? 1: 0) | ((unsigned int)((v26 >>> 8) & 0xffffff) << 8);
                v1 = (v43 ? 0: 1) & (v44 ? 1: 0);
                if(!((v43 ? 0: 1) & (v44 ? 1: 0))) {
                    __SyntheticTypeUnknownF v45 = v23 - v23;
                    fucom(v45, v45);
                    fnstsw((unsigned short)v26);
                    char v46 = (v26 >>> 10) & 0x1;
                    if(((v26 >>> 14) & 0x1) && !v46) {
                        fucomp(v45, v45);
                        fnstsw((unsigned short)v26);
                        if(((v26 >>> 10) & 0x1) || !((v26 >>> 14) & 0x1)) {
                            goto loc_8053A20;
                        }
                    }
                    else {
                        v23 = v45;
                    }
                    v4 = 0.0;
                    goto loc_8053B33;
                }
                else {
                loc_8053A20:
                    __SyntheticTypeUnknownF v47 = v22 - v22;
                    fucom(v47, v47);
                    fnstsw((unsigned short)v26);
                    char v48 = (v26 >>> 10) & 0x1;
                    if(!((v26 >>> 14) & 0x1)) {
                        v4 = v47;
                        goto loc_8053B33;
                    }
                    else if(v48) {
                        v4 = v47;
                        goto loc_8053B33;
                    }
                    else {
                        fucomp(0.0, 0.0);
                        fnstsw((unsigned short)v26);
                        char v49 = (v26 >>> 10) & 0x1;
                        if(!((v26 >>> 14) & 0x1)) {
                            v4 = v47;
                            goto loc_8053B33;
                        }
                        else if(v49) {
                            v4 = v47;
                            goto loc_8053B33;
                        }
                        else {
                            __int128 v50 = !v1 ? 0.0: 1.0;
                            fxam(v50);
                            fnstsw((unsigned short)v26);
                            v52[v53] = fabs(v22);
                            if(((unsigned char)(v26 >>> 8) & 0x2)) {
                                v52[v53] = fchs(v25);
                            }
                            __SyntheticTypeUnknownF v51 = v13 - v13;
                            fucom(v51, v51);
                            fnstsw((unsigned short)v26);
                            if(((v26 >>> 14) & 0x1) && !((v26 >>> 10) & 0x1)) {
                                fucomp(v51, v51);
                                fnstsw((unsigned short)v26);
                                if(!((v26 >>> 10) & 0x1) && ((v26 >>> 14) & 0x1)) {
                                    goto loc_8053CEA;
                                }
                                else {
                                    v0 = 1.0;
                                }
                            }
                            else {
                            loc_8053CEA:
                                v0 = 0.0;
                            }
                            fxam(v0);
                            fnstsw((unsigned short)v26);
                            v52[v53] = fabs(v25);
                        }
                    }
                }
                if(((unsigned char)(v26 >>> 8) & 0x2)) {
                    v52[v53] = fchs(v12);
                    return result;
                }
            }
        }
        else {
            result = v8;
        }
    }
    return result;
}

void __i686.get_pc_thunk.bx() {
}

void __i686.get_pc_thunk.cx() {
}

long long* __muldc3(long long* param0) {
    __SyntheticTypeUnknownF v0;
    __SyntheticTypeUnknownF v1;
    __SyntheticTypeUnknownF v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF v4;
    char v5;
    __SyntheticTypeUnknownF v6;
    __int128 v7;
    __int128 v8;
    __SyntheticTypeUnknownF v9;
    __int128 v10;
    __int128 v11;
    __SyntheticTypeUnknownF v12;
    __SyntheticTypeUnknownF v13;
    char v14;
    double v15;
    __int128 v16;
    __int128 v17;
    __SyntheticTypeUnknownF v18;
    int v19;
    __SyntheticTypeUnknownF v20;
    __SyntheticTypeUnknownF v21;
    __SyntheticTypeUnknownF v22;
    __SyntheticTypeUnknownF v23;
    __int128 v24;
    __SyntheticTypeUnknownF v25;
    double v26;
    double v27;
    __int128 v28;
    __SyntheticTypeUnknownF v29;
    __SyntheticTypeUnknownF v30;
    __int128 v31;
    short v32;
    double v33;
    double v34;
    long long* result = param0;
    __SyntheticTypeUnknownF v35 = v26;
    __SyntheticTypeUnknownF v36 = v33;
    __SyntheticTypeUnknownF v37 = v27;
    __SyntheticTypeUnknownF v38 = v34;
    double v39 = v35 * v37;
    double v40 = v36 * v38;
    double v41 = v35 * v38;
    double v42 = v36 * v37;
    __SyntheticTypeUnknownF v43 = v39;
    __SyntheticTypeUnknownF v44 = v40;
    double v45 = v44;
    __SyntheticTypeUnknownF v46 = v43 - v44;
    __SyntheticTypeUnknownF v47 = v41;
    double v48 = v47;
    __SyntheticTypeUnknownF v49 = v42;
    double v50 = v49;
    __SyntheticTypeUnknownF v51 = v47 + v49;
    fucom(v51, v51);
    fnstsw(v32);
    if(!((v32 >>> 10) & 0x1) && ((v32 >>> 14) & 0x1)) {
        v23 = v51;
        v35 = v46;
    }
    else {
        fucom(v51, v51);
        fnstsw(v32);
        if(((v32 >>> 10) & 0x1) || !((v32 >>> 14) & 0x1)) {
            __SyntheticTypeUnknownF v52 = v35 - v35;
            fucom(v52, v52);
            fnstsw(v32);
            char v53 = (v32 >>> 10) & 0x1;
            if(!((v32 >>> 14) & 0x1)) {
                v35 = v52;
                v18 = v51;
            loc_8053711:
                __SyntheticTypeUnknownF v54 = v35 - v35;
                fucom(v54, v54);
                fnstsw(v32);
                char v55 = (v32 >>> 10) & 0x1;
                if(!((v32 >>> 14) & 0x1)) {
                    v35 = v54;
                    v22 = v18;
                    v19 = 0;
                    goto loc_80533A1;
                }
                else if(v55) {
                    v35 = v54;
                    v22 = v18;
                    v19 = 0;
                    goto loc_80533A1;
                }
                else {
                    __SyntheticTypeUnknownF v56 = v54;
                    fucomp(v56, v56);
                    fnstsw(v32);
                    char v57 = (v32 >>> 10) & 0x1;
                    if(((v32 >>> 14) & 0x1) && !v57) {
                        v22 = v18;
                        v19 = 0;
                        goto loc_80533A1;
                    }
                    else {
                        fxam(v18);
                        fnstsw(v32);
                        if(((unsigned char)(v32 >>> 8) & 0x2)) {
                            v82[v83] = fchs(0.0);
                            v17 = v31;
                        }
                        else {
                            v17 = 0.0;
                        }
                    loc_8053758:
                        v15 = 1.0;
                        v16 = v17;
                    loc_8053341:
                        fxam(v16);
                        fnstsw(v32);
                        __int128 v58 = v15;
                        char v59 = (unsigned char)(v32 >>> 8) & 0x2 ? 0: 1;
                        v82[v83] = fabs(v58);
                        if(!v59) {
                            v82[v83] = fchs(v29);
                            v21 = v30;
                        }
                        else {
                            v21 = v29;
                        }
                        fucom(v21, v21);
                        fnstsw(v32);
                        if(!((v32 >>> 10) & 0x1) && ((v32 >>> 14) & 0x1)) {
                            v20 = v21;
                        }
                        else {
                            fxam(v21);
                            fnstsw(v32);
                            if(((unsigned char)(v32 >>> 8) & 0x2)) {
                                v82[v83] = fchs(0.0);
                                v20 = v25;
                            }
                            else {
                                v20 = 0.0;
                            }
                        }
                        fucom(v20, v20);
                        fnstsw(v32);
                        v19 = 1;
                    }
                }
                if(!((v32 >>> 10) & 0x1) && ((v32 >>> 14) & 0x1)) {
                    v22 = v20;
                }
                else {
                    fxam(v20);
                    fnstsw(v32);
                    if(((unsigned char)(v32 >>> 8) & 0x2)) {
                        v82[v83] = fchs(0.0);
                    }
                    v22 = 0.0;
                    v19 = 1;
                }
            }
            else if(!v53) {
                __SyntheticTypeUnknownF v60 = v52;
                fucomp(v60, v60);
                fnstsw(v32);
                char v61 = (v32 >>> 10) & 0x1;
                if(((v32 >>> 14) & 0x1) && !v61) {
                    v18 = v51;
                    goto loc_8053711;
                }
                else {
                    fxam(v51);
                    fnstsw(v32);
                    char v62 = (unsigned char)(v32 >>> 8) & 0x2 ? 0: 1;
                    v17 = 1.0;
                    if(!v62) {
                        v82[v83] = fchs(1.0);
                    }
                    __SyntheticTypeUnknownF v63 = v36 - v36;
                    fucom(v63, v63);
                    fnstsw(v32);
                    char v64 = (v32 >>> 10) & 0x1;
                    if(((v32 >>> 14) & 0x1) && !v64) {
                        __SyntheticTypeUnknownF v65 = v63;
                        fucomp(v65, v65);
                        fnstsw(v32);
                        if(!((v32 >>> 14) & 0x1) || ((v32 >>> 10) & 0x1)) {
                            goto loc_8053758;
                        }
                        else {
                            v16 = 1.0;
                        }
                    }
                    else {
                        v16 = 1.0;
                    }
                    v15 = 0.0;
                    goto loc_8053341;
                }
            }
            else {
                v35 = v52;
                v18 = v51;
                goto loc_8053711;
            }
        loc_80533A1:
            __SyntheticTypeUnknownF v66 = v35 - v35;
            fucom(v66, v66);
            fnstsw(v32);
            char v67 = (v32 >>> 10) & 0x1;
            if(((v32 >>> 14) & 0x1)) {
                if(v67) {
                    v35 = v66;
                    v12 = v22;
                    goto loc_80534D3;
                }
                else {
                    __SyntheticTypeUnknownF v68 = v66;
                    fucomp(v68, v68);
                    fnstsw(v32);
                    char v69 = (v32 >>> 10) & 0x1;
                    char v70 = (v32 >>> 14) & 0x1;
                    if(v69) {
                        v13 = v22;
                    loc_80533D6:
                        __SyntheticTypeUnknownF v71 = v36 - v36;
                        fucomp(v71, v71);
                        fnstsw(v32);
                        v14 = (v32 >>> 14) & 0x1;
                    }
                    else if(!v70) {
                        v13 = v22;
                        goto loc_80533D6;
                    }
                    else {
                        v12 = v22;
                        goto loc_80534D3;
                    }
                }
                if(((v32 >>> 10) & 0x1)) {
                    v9 = v13;
                loc_80533EB:
                    fucom(v9, v9);
                    fnstsw(v32);
                    if(((v32 >>> 14) & 0x1) && !((v32 >>> 10) & 0x1)) {
                        v11 = 1.0;
                        v10 = 1.0;
                    }
                    else {
                        v11 = 0.0;
                        v10 = 1.0;
                    }
                    goto loc_8053404;
                }
                else if(v14) {
                    v11 = 0.0;
                    v10 = 1.0;
                    goto loc_8053404;
                }
                else {
                    v9 = v13;
                    goto loc_80533EB;
                }
            }
            else {
                v35 = v66;
                v12 = v22;
            loc_80534D3:
                v49 = v35 - v35;
                fucom(v49, v49);
                fnstsw(v32);
                char v72 = (v32 >>> 10) & 0x1;
                if(((v32 >>> 14) & 0x1) && !v72) {
                    fucomp(v49, v49);
                    fnstsw(v32);
                    if(((v32 >>> 10) & 0x1) || !((v32 >>> 14) & 0x1)) {
                        v11 = 1.0;
                        v10 = 0.0;
                    loc_8053404:
                        fucom(v10, v10);
                        fnstsw(v32);
                        if(!((v32 >>> 10) & 0x1) && ((v32 >>> 14) & 0x1)) {
                            v8 = v10;
                        }
                        else {
                            fxam(v10);
                            fnstsw(v32);
                            if(((unsigned char)(v32 >>> 8) & 0x2)) {
                                v82[v83] = fchs(0.0);
                            }
                            v8 = 0.0;
                        }
                        fucom(v8, v8);
                        fnstsw(v32);
                        if(!((v32 >>> 10) & 0x1) && ((v32 >>> 14) & 0x1)) {
                            v7 = v8;
                        }
                        else {
                            fxam(v8);
                            fnstsw(v32);
                            if(((unsigned char)(v32 >>> 8) & 0x2)) {
                                v82[v83] = fchs(0.0);
                            }
                            v7 = 0.0;
                        }
                        fxam(v7);
                        fnstsw(v32);
                        v82[v83] = fabs(v11);
                        if(((unsigned char)(v32 >>> 8) & 0x2)) {
                            v82[v83] = fchs(v28);
                        }
                        fxam(v28);
                        fnstsw(v32);
                        v82[v83] = fabs(v24);
                        if((unsigned char)(v32 >>> 8) & 0x2) {
                            goto loc_80536CB;
                        }
                        else {
                            goto loc_8053462;
                        }
                    }
                }
                else {
                    v35 = v49;
                }
                v51 = v12;
                if(!(unsigned char)v19) {
                    __SyntheticTypeUnknownF v73 = v35 - v35;
                    fucomp(v73, v73);
                    fnstsw(v32);
                    char v74 = (v32 >>> 10) & 0x1;
                    if(((v32 >>> 14) & 0x1) && !v74) {
                        fucomp(v51, v51);
                        fnstsw(v32);
                        char v75 = (v32 >>> 10) & 0x1;
                        if(((v32 >>> 14) & 0x1) && !v75) {
                            v6 = v46;
                            goto loc_8053594;
                        }
                        else {
                            v23 = v46;
                            v37 = v43;
                            goto loc_805365C;
                        }
                    }
                    else {
                        v35 = v51;
                        v6 = v46;
                    loc_8053594:
                        __SyntheticTypeUnknownF v76 = v45;
                        v51 = v76 - v76;
                        v49 = v45;
                        fucomp(v49, v49);
                        fnstsw(v32);
                        if(((v32 >>> 14) & 0x1) && !((v32 >>> 10) & 0x1)) {
                            fucomp(v51, v51);
                            fnstsw(v32);
                            char v77 = (v32 >>> 10) & 0x1;
                            if(((v32 >>> 14) & 0x1) && v77 == 0) {
                                goto loc_80535C4;
                            }
                            else {
                                v35 = v6;
                                v23 = v43;
                                goto loc_805365C;
                            }
                        }
                        else {
                        loc_80535C4:
                            __SyntheticTypeUnknownF v78 = v48;
                            v51 = v78 - v78;
                            v49 = v48;
                            fucomp(v49, v49);
                            fnstsw(v32);
                            if(((v32 >>> 14) & 0x1) && !((v32 >>> 10) & 0x1)) {
                                fucomp(v51, v51);
                                fnstsw(v32);
                                char v79 = (v32 >>> 10) & 0x1;
                                if(((v32 >>> 14) & 0x1) && v79 == 0) {
                                    goto loc_80535F4;
                                }
                                else {
                                    v35 = v6;
                                    v23 = v43;
                                    goto loc_805365C;
                                }
                            }
                            else {
                            loc_80535F4:
                                __SyntheticTypeUnknownF v80 = v50;
                                v51 = v80 - v80;
                                v49 = v50;
                                fucomp(v49, v49);
                                fnstsw(v32);
                                v5 = (v32 >>> 10) & 0x1;
                            }
                        }
                    }
                    if(((v32 >>> 14) & 0x1) && !v5) {
                        fucomp(v51, v51);
                        fnstsw(v32);
                        char v81 = (v32 >>> 14) & 0x1;
                        if(((v32 >>> 10) & 0x1)) {
                            v35 = v6;
                            v23 = v43;
                        loc_805365C:
                            fucom(v38, v38);
                            fnstsw(v32);
                            if(!((v32 >>> 10) & 0x1) && ((v32 >>> 14) & 0x1)) {
                                v4 = v38;
                            }
                            else {
                                fxam(v38);
                                fnstsw(v32);
                                if(((unsigned char)(v32 >>> 8) & 0x2)) {
                                    v82[v83] = fchs(0.0);
                                }
                                v4 = 0.0;
                            }
                            fucom(v4, v4);
                            fnstsw(v32);
                            if(!((v32 >>> 10) & 0x1) && ((v32 >>> 14) & 0x1)) {
                                v3 = v4;
                            }
                            else {
                                fxam(v4);
                                fnstsw(v32);
                                if(((unsigned char)(v32 >>> 8) & 0x2)) {
                                    v82[v83] = fchs(0.0);
                                }
                                v3 = 0.0;
                            }
                            fucom(v3, v3);
                            fnstsw(v32);
                            if(!((v32 >>> 10) & 0x1) && ((v32 >>> 14) & 0x1)) {
                                v2 = v3;
                            }
                            else {
                                fxam(v3);
                                fnstsw(v32);
                                if(((unsigned char)(v32 >>> 8) & 0x2)) {
                                    v82[v83] = fchs(0.0);
                                }
                                v2 = 0.0;
                            }
                            fucom(v2, v2);
                            fnstsw(v32);
                            if(((v32 >>> 10) & 0x1) || !((v32 >>> 14) & 0x1)) {
                                fxam(v2);
                                fnstsw(v32);
                                if(((unsigned char)(v32 >>> 8) & 0x2)) {
                                    v1 = 0.0;
                                loc_80536CB:
                                    v82[v83] = fchs(v1);
                                }
                                else {
                                    v1 = 0.0;
                                }
                            loc_8053462:
                                v0 = v1;
                            }
                            else {
                                v0 = v2;
                            }
                            goto loc_8053494;
                        }
                        else if(!v81) {
                            v35 = v6;
                            v23 = v43;
                            goto loc_805365C;
                        }
                        else {
                            v23 = v36;
                        }
                    }
                    else {
                        v23 = v36;
                    }
                }
                else {
                    v35 = v51;
                    v37 = v46;
                    v23 = v43;
                    v0 = v38;
                loc_8053494:
                    v35 *= v37 * ((v35 * v37 - v23 * v0) * Infinity) + v0 * Infinity;
                }
            }
        }
        else {
            v35 = v51;
            v23 = v46;
        }
    }
    *result = v23;
    *(result + 1) = v35;
    return result;
}

int __mulsc3(float param0, float param1, float param2, float param3) {
    __SyntheticTypeUnknownF v0;
    __SyntheticTypeUnknownF v1;
    __SyntheticTypeUnknownF v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF v4;
    __SyntheticTypeUnknownF v5;
    __SyntheticTypeUnknownF v6;
    __SyntheticTypeUnknownF v7;
    __int128 v8;
    __int128 v9;
    __SyntheticTypeUnknownF v10;
    __int128 v11;
    __int128 v12;
    __SyntheticTypeUnknownF v13;
    __SyntheticTypeUnknownF v14;
    char v15;
    float v16;
    __int128 v17;
    __int128 v18;
    __SyntheticTypeUnknownF v19;
    int v20;
    __SyntheticTypeUnknownF v21;
    __SyntheticTypeUnknownF v22;
    __SyntheticTypeUnknownF v23;
    __int128 v24;
    __SyntheticTypeUnknownF v25;
    __int128 v26;
    short v27;
    __SyntheticTypeUnknownF v28;
    __SyntheticTypeUnknownF v29;
    __int128 v30;
    __SyntheticTypeUnknownF result = param0;
    __SyntheticTypeUnknownF v31 = param1;
    __SyntheticTypeUnknownF v32 = param2;
    __SyntheticTypeUnknownF v33 = param3;
    float v34 = result * v32;
    float v35 = v31 * v33;
    float v36 = result * v33;
    float v37 = v31 * v32;
    __SyntheticTypeUnknownF v38 = v34;
    __SyntheticTypeUnknownF v39 = v35;
    __SyntheticTypeUnknownF v40 = v38 - v39;
    float v41 = v36;
    __SyntheticTypeUnknownF v42 = v37;
    float v43 = v42;
    float v44 = v42 + v41;
    fucom(v40, v40);
    fnstsw(v27);
    if(!((v27 >>> 10) & 0x1) && ((v27 >>> 14) & 0x1)) {
        result = v40;
    }
    else {
        __SyntheticTypeUnknownF v45 = v44;
        fucomp(v45, v45);
        fnstsw(v27);
        char v46 = (v27 >>> 10) & 0x1;
        char v47 = (v27 >>> 14) & 0x1;
        if(v46 || !v47) {
            __SyntheticTypeUnknownF v48 = result - result;
            fucom(v48, v48);
            fnstsw(v27);
            char v49 = (v27 >>> 10) & 0x1;
            if(!((v27 >>> 14) & 0x1)) {
                result = v48;
                v19 = v40;
            loc_8053061:
                __SyntheticTypeUnknownF v50 = result - result;
                fucom(v50, v50);
                fnstsw(v27);
                char v51 = (v27 >>> 10) & 0x1;
                if(!((v27 >>> 14) & 0x1)) {
                    result = v50;
                    v23 = v19;
                    v20 = 0;
                    goto loc_8052CE9;
                }
                else if(v51) {
                    result = v50;
                    v23 = v19;
                    v20 = 0;
                    goto loc_8052CE9;
                }
                else {
                    __SyntheticTypeUnknownF v52 = v50;
                    fucomp(v52, v52);
                    fnstsw(v27);
                    char v53 = (v27 >>> 10) & 0x1;
                    if(((v27 >>> 14) & 0x1) && !v53) {
                        v23 = v19;
                        v20 = 0;
                        goto loc_8052CE9;
                    }
                    else {
                        fxam(v19);
                        fnstsw(v27);
                        if(((unsigned char)(v27 >>> 8) & 0x2)) {
                            v79[v80] = fchs(0.0);
                            v18 = v24;
                        }
                        else {
                            v18 = 0.0;
                        }
                    loc_80530A8:
                        v16 = 1.0;
                        v17 = v18;
                    loc_8052C89:
                        fxam(v17);
                        fnstsw(v27);
                        __int128 v54 = v16;
                        char v55 = (unsigned char)(v27 >>> 8) & 0x2 ? 0: 1;
                        v79[v80] = fabs(v54);
                        if(!v55) {
                            v79[v80] = fchs(v29);
                            v22 = v25;
                        }
                        else {
                            v22 = v29;
                        }
                        fucom(v22, v22);
                        fnstsw(v27);
                        if(!((v27 >>> 10) & 0x1) && ((v27 >>> 14) & 0x1)) {
                            v21 = v22;
                        }
                        else {
                            fxam(v22);
                            fnstsw(v27);
                            if(((unsigned char)(v27 >>> 8) & 0x2)) {
                                v79[v80] = fchs(0.0);
                                v21 = v28;
                            }
                            else {
                                v21 = 0.0;
                            }
                        }
                        fucom(v21, v21);
                        fnstsw(v27);
                        v20 = 1;
                    }
                }
                if(!((v27 >>> 10) & 0x1) && ((v27 >>> 14) & 0x1)) {
                    v23 = v21;
                }
                else {
                    fxam(v21);
                    fnstsw(v27);
                    if(((unsigned char)(v27 >>> 8) & 0x2)) {
                        v79[v80] = fchs(0.0);
                    }
                    v23 = 0.0;
                    v20 = 1;
                }
            }
            else if(!v49) {
                __SyntheticTypeUnknownF v56 = v48;
                fucomp(v56, v56);
                fnstsw(v27);
                char v57 = (v27 >>> 10) & 0x1;
                if(((v27 >>> 14) & 0x1) && !v57) {
                    v19 = v40;
                    goto loc_8053061;
                }
                else {
                    fxam(v40);
                    fnstsw(v27);
                    char v58 = (unsigned char)(v27 >>> 8) & 0x2 ? 0: 1;
                    v18 = 1.0;
                    if(!v58) {
                        v79[v80] = fchs(1.0);
                    }
                    __SyntheticTypeUnknownF v59 = v31 - v31;
                    fucom(v59, v59);
                    fnstsw(v27);
                    char v60 = (v27 >>> 10) & 0x1;
                    if(((v27 >>> 14) & 0x1) && !v60) {
                        __SyntheticTypeUnknownF v61 = v59;
                        fucomp(v61, v61);
                        fnstsw(v27);
                        if(!((v27 >>> 14) & 0x1) || ((v27 >>> 10) & 0x1)) {
                            goto loc_80530A8;
                        }
                        else {
                            v17 = 1.0;
                        }
                    }
                    else {
                        v17 = 1.0;
                    }
                    v16 = 0.0;
                    goto loc_8052C89;
                }
            }
            else {
                result = v48;
                v19 = v40;
                goto loc_8053061;
            }
        loc_8052CE9:
            __SyntheticTypeUnknownF v62 = result - result;
            fucom(v62, v62);
            fnstsw(v27);
            char v63 = (v27 >>> 10) & 0x1;
            if(((v27 >>> 14) & 0x1)) {
                if(v63) {
                    result = v62;
                    v13 = v23;
                    goto loc_8052E1B;
                }
                else {
                    __SyntheticTypeUnknownF v64 = v62;
                    fucomp(v64, v64);
                    fnstsw(v27);
                    char v65 = (v27 >>> 10) & 0x1;
                    char v66 = (v27 >>> 14) & 0x1;
                    if(v65) {
                        v14 = v23;
                    loc_8052D1E:
                        __SyntheticTypeUnknownF v67 = v31 - v31;
                        fucomp(v67, v67);
                        fnstsw(v27);
                        v15 = (v27 >>> 14) & 0x1;
                    }
                    else if(!v66) {
                        v14 = v23;
                        goto loc_8052D1E;
                    }
                    else {
                        v13 = v23;
                        goto loc_8052E1B;
                    }
                }
                if(((v27 >>> 10) & 0x1)) {
                    v10 = v14;
                loc_8052D33:
                    fucom(v10, v10);
                    fnstsw(v27);
                    if(((v27 >>> 14) & 0x1) && !((v27 >>> 10) & 0x1)) {
                        v12 = 1.0;
                        v11 = 1.0;
                    }
                    else {
                        v12 = 0.0;
                        v11 = 1.0;
                    }
                    goto loc_8052D4C;
                }
                else if(v15) {
                    v12 = 0.0;
                    v11 = 1.0;
                    goto loc_8052D4C;
                }
                else {
                    v10 = v14;
                    goto loc_8052D33;
                }
            }
            else {
                result = v62;
                v13 = v23;
            loc_8052E1B:
                v45 = result - result;
                fucom(v45, v45);
                fnstsw(v27);
                char v68 = (v27 >>> 10) & 0x1;
                if(((v27 >>> 14) & 0x1) && !v68) {
                    __SyntheticTypeUnknownF v69 = v45;
                    fucomp(v69, v69);
                    fnstsw(v27);
                    if(((v27 >>> 10) & 0x1) || !((v27 >>> 14) & 0x1)) {
                        v12 = 1.0;
                        v11 = 0.0;
                    loc_8052D4C:
                        fucom(v11, v11);
                        fnstsw(v27);
                        if(!((v27 >>> 10) & 0x1) && ((v27 >>> 14) & 0x1)) {
                            v9 = v11;
                        }
                        else {
                            fxam(v11);
                            fnstsw(v27);
                            if(((unsigned char)(v27 >>> 8) & 0x2)) {
                                v79[v80] = fchs(0.0);
                            }
                            v9 = 0.0;
                        }
                        fucom(v9, v9);
                        fnstsw(v27);
                        if(!((v27 >>> 10) & 0x1) && ((v27 >>> 14) & 0x1)) {
                            v8 = v9;
                        }
                        else {
                            fxam(v9);
                            fnstsw(v27);
                            if(((unsigned char)(v27 >>> 8) & 0x2)) {
                                v79[v80] = fchs(0.0);
                            }
                            v8 = 0.0;
                        }
                        fxam(v8);
                        fnstsw(v27);
                        v79[v80] = fabs(v12);
                        if(((unsigned char)(v27 >>> 8) & 0x2)) {
                            v79[v80] = fchs(v26);
                        }
                        fxam(v26);
                        fnstsw(v27);
                        v79[v80] = fabs(v30);
                        if((unsigned char)(v27 >>> 8) & 0x2) {
                            goto loc_805301B;
                        }
                        else {
                            goto loc_8052DAC;
                        }
                    }
                }
                else {
                    result = v45;
                }
                v40 = v13;
                if(!(unsigned char)v20) {
                    v45 = result - result;
                    fucomp(v45, v45);
                    fnstsw(v27);
                    char v70 = (v27 >>> 10) & 0x1;
                    if(((v27 >>> 14) & 0x1) && !v70) {
                        fucomp(v40, v40);
                        fnstsw(v27);
                        char v71 = (v27 >>> 10) & 0x1;
                        if(((v27 >>> 14) & 0x1) && !v71) {
                            v7 = v39;
                            goto loc_8052EE0;
                        }
                        else {
                            v31 = v39;
                            v32 = v38;
                            goto loc_8052FAC;
                        }
                    }
                    else {
                        result = v40;
                        v7 = v39;
                    loc_8052EE0:
                        __SyntheticTypeUnknownF v72 = result - result;
                        fucomp(v72, v72);
                        fnstsw(v27);
                        char v73 = (v27 >>> 10) & 0x1;
                        if(((v27 >>> 14) & 0x1) && !v73) {
                            fucomp(v7, v7);
                            fnstsw(v27);
                            char v74 = (v27 >>> 10) & 0x1;
                            if(((v27 >>> 14) & 0x1) && !v74) {
                                v6 = v38;
                                goto loc_8052F1E;
                            }
                            else {
                                v31 = v38;
                                goto loc_8052FAC;
                            }
                        }
                        else {
                            result = v7;
                            v6 = v38;
                        loc_8052F1E:
                            __SyntheticTypeUnknownF v75 = v41;
                            __SyntheticTypeUnknownF v76 = v75 - v75;
                            v40 = v41;
                            fucomp(v40, v40);
                            fnstsw(v27);
                            if(((v27 >>> 14) & 0x1) && !((v27 >>> 10) & 0x1)) {
                                fucomp(v76, v76);
                                fnstsw(v27);
                                char v77 = (v27 >>> 10) & 0x1;
                                if(((v27 >>> 14) & 0x1) && v77 == 0) {
                                    goto loc_8052F4C;
                                }
                                else {
                                    result = v6;
                                    goto loc_8052FAC;
                                }
                            }
                            else {
                            loc_8052F4C:
                                __SyntheticTypeUnknownF v78 = v43;
                                v5 = v78 - v78;
                                v40 = v43;
                                fucomp(v40, v40);
                                fnstsw(v27);
                            }
                        }
                    }
                    if(!((v27 >>> 14) & 0x1) || ((v27 >>> 10) & 0x1)) {
                        return result;
                    }
                    fucomp(v5, v5);
                    fnstsw(v27);
                    v47 = (v27 >>> 14) & 0x1;
                    if(((v27 >>> 10) & 0x1)) {
                        result = v6;
                    }
                    else if(v47) {
                        return result;
                    }
                    else {
                        result = v6;
                    }
                loc_8052FAC:
                    fucom(v33, v33);
                    fnstsw(v27);
                    if(!((v27 >>> 10) & 0x1) && ((v27 >>> 14) & 0x1)) {
                        v4 = v33;
                    }
                    else {
                        fxam(v33);
                        fnstsw(v27);
                        if(((unsigned char)(v27 >>> 8) & 0x2)) {
                            v79[v80] = fchs(0.0);
                        }
                        v4 = 0.0;
                    }
                    fucom(v4, v4);
                    fnstsw(v27);
                    if(!((v27 >>> 10) & 0x1) && ((v27 >>> 14) & 0x1)) {
                        v3 = v4;
                    }
                    else {
                        fxam(v4);
                        fnstsw(v27);
                        if(((unsigned char)(v27 >>> 8) & 0x2)) {
                            v79[v80] = fchs(0.0);
                        }
                        v3 = 0.0;
                    }
                    fucom(v3, v3);
                    fnstsw(v27);
                    if(!((v27 >>> 10) & 0x1) && ((v27 >>> 14) & 0x1)) {
                        v2 = v3;
                    }
                    else {
                        fxam(v3);
                        fnstsw(v27);
                        if(((unsigned char)(v27 >>> 8) & 0x2)) {
                            v79[v80] = fchs(0.0);
                        }
                        v2 = 0.0;
                    }
                    fucom(v2, v2);
                    fnstsw(v27);
                    if(((v27 >>> 10) & 0x1) || !((v27 >>> 14) & 0x1)) {
                        fxam(v2);
                        fnstsw(v27);
                        if(((unsigned char)(v27 >>> 8) & 0x2)) {
                            v1 = 0.0;
                        loc_805301B:
                            v79[v80] = fchs(v1);
                        }
                        else {
                            v1 = 0.0;
                        }
                    loc_8052DAC:
                        v0 = v1;
                    }
                    else {
                        v0 = v2;
                    }
                }
                else {
                    result = v40;
                    v32 = v39;
                    v31 = v38;
                    v0 = v33;
                }
                result *= v32 * ((result * v32 - v31 * v0) * Infinity) + v0 * Infinity;
            }
        }
        else {
            result = v40;
        }
    }
    return result;
}

unsigned int add_mod_n(unsigned int param0, int param1, int param2, int* param3) {
    addn(param0, param1, param2, param3);
    return addn_inv(param0, param1, (unsigned int)param2, param3);
}

unsigned int addn(unsigned int param0, int param1, int param2, int* param3) {
    test_sum((int)(param0 - param1), param2, param3);
    return madd((int)((unsigned int)((1 << (param2 & 0x1f)) + param1) - param0), param1, param2, param3);
}

unsigned int addn_inv(unsigned int param0, int param1, unsigned int param2, int* param3) {
    quantum_cnot(param2 * 2 + 1, (int)(param2 * 2), param3);
    madd_inv((int)((unsigned int)(1 << (param2 & 0x1f)) - param1), (int)(param0 - param1), param2, param3);
    quantum_swaptheleads(param2, param3);
    return test_sum(param1, (int)param2, param3);
}

int atexit(FUNCPTR __func) {
    int result;
    →__cxa_atexit();
    return result;
}

unsigned int emul(int param0, int param1, unsigned int param2, int* param3) {
    unsigned int result = param2 - 1;
    for(unsigned int i = param2 - 1; i < 0x80000000; --i) {
        result = (unsigned int)((param0 >> (i & 0x1f)) & 0x1);
        if((unsigned char)result) {
            result = quantum_toffoli((param2 + 1) * 2, param1, (int)(i + param2), param3);
        }
    }
    return result;
}

unsigned int madd(int param0, int param1, int param2, int* param3) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    int v3 = (param2 * 2 + 1) * 2;
    for(int i = 0; i < (int)(unsigned int)(param2 - 1); ++i) {
        v0 = (unsigned char)(param0 >> (i & 0x1f)) & 0x1 ? 2: 0;
        if(((unsigned char)(param1 >> (i & 0x1f)) & 0x1)) {
            ++v0;
        }
        muxfa(v0, i + param2, i, i + 1, param2 * 2, param2 * 2 + 1, v3, param3);
    }
    v0 = (unsigned char)(param0 >> ((param2 - 1) & 0x1f)) & 0x1 ? 2: 0;
    if(((unsigned char)(param1 >> ((param2 - 1) & 0x1f)) & 0x1)) {
        ++v0;
    }
    return muxha(v0, param2 * 2 - 1, param2 - 1, param2 * 2, param2 * 2 + 1, v3, param3);
}

unsigned int madd_inv(int param0, int param1, unsigned int param2, int* param3) {
    int v0;
    int v1 = v0;
    int v2 = (param2 * 2 + 1) * 2;
    unsigned int v3 = (unsigned char)(param0 >> ((param2 - 1) & 0x1f)) & 0x1 ? 2: 0;
    if(((unsigned char)(param1 >> ((param2 - 1) & 0x1f)) & 0x1)) {
        ++v3;
    }
    muxha_inv(v3, (int)(param2 - 1), param2 * 2 - 1, (int)(param2 * 2), param2 * 2 + 1, v2, param3);
    unsigned int result = param2 - 2;
    for(unsigned int i = param2 - 2; i < 0x80000000; --i) {
        v3 = (unsigned char)(param0 >> (i & 0x1f)) & 0x1 ? 2: 0;
        if(((unsigned char)(param1 >> (i & 0x1f)) & 0x1)) {
            ++v3;
        }
        result = muxfa_inv(v3, (int)i, (int)(i + param2), (int)(i + param2 + 1), (int)(param2 * 2), param2 * 2 + 1, v2, param3);
    }
    return result;
}

int main() {
    unsigned int v0;
    char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    unsigned int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    char v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    unsigned int v19;
    int v20;
    unsigned int* ptr0 = &v12;
    char v21 = &v11 ? 0: 1;
    char v22 = (int)&v11 < 0;
    char v23 = __parity__((unsigned char)&v11);
    char v24 = 0;
    char v25 = 0;
    int v26 = v11;
    int v27 = v13;
    int* ptr1 = &v27;
    unsigned int* ptr2 = &v12;
    int* ptr3 = &ptr2;
    char v28 = &v11 == 192;
    char v29 = (int)&v15 < 0;
    char v30 = __parity__((unsigned char)&v11 - 192);
    char v31 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0xb4) ^ (int)&v15) >>> 4) & 0x1);
    char v32 = (unsigned int)&ptr2 < 180;
    char v33 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v15) & (int)(int*)((int)&ptr2 ^ 0xb4)) < 0;
    unsigned int* ptr4 = &v12;
    int v34 = 0;
    →time(0);
    →srand(v14);
    unsigned int* ptr5 = ptr4;
    char v35 = *ptr5 == 1;
    char v36 = *ptr5 < 1;
    char v37 = __parity__((unsigned char)*ptr5 - 1);
    char v38 = *ptr5 < 1;
    char v39 = (((*ptr5 - 1) ^ *ptr5) & (*ptr5 ^ 0x1)) < 0;
    char v40 = (((*ptr5 - 1) ^ (*ptr5 ^ 0x1)) >>> 4) & 0x1;
    if(v35) {
        →puts("Usage: shor [number]\n");
        v10 = 3;
    }
    else {
        unsigned int* ptr6 = ptr4;
        int v41 = *(int*)(ptr6 + 1);
        unsigned int v42 = *(ptr6 + 1);
        int* ptr7 = (int*)(v41 + 4);
        char v43 = ptr7 ? 0: 1;
        char v44 = (int)ptr7 < 0;
        char v45 = __parity__((unsigned char)ptr7);
        char v46 = (int*)((int)(int*)((int)(int*)((v42 ^ 0x4) ^ (int)ptr7) >>> 4) & 0x1);
        char v47 = v42 >= 0xfffffffc;
        char v48 = (int)(int*)((int)(int*)((int)ptr7 ^ v42) & ~(v42 ^ 0x4)) < 0;
        int v49 = *ptr7;
        →atoi(v49);
        int v50 = v14;
        v35 = v50 == 14;
        v36 = v50 < 14;
        v37 = __parity__((unsigned char)v50 - 14);
        v38 = (unsigned int)v50 < 14;
        v39 = (((v50 - 14) ^ v50) & (v50 ^ 0xe)) < 0;
        v40 = (((v50 - 14) ^ (v50 ^ 0xe)) >>> 4) & 0x1;
        if((v35 || v36 != v39)) {
            →puts("Invalid number\n");
            v10 = 3;
        }
        else {
            int v51 = v50;
            int v52 = v50;
            unsigned int v53 = (unsigned int)(v51 * v50);
            char v54 = (long long)v52 * (long long)v50 != (long long)v53;
            char v55 = (long long)v52 * (long long)v50 != (long long)v53;
            int v56 = quantum_getwidth(v53);
            int v57 = v56;
            unsigned int v58 = (unsigned int)v50;
            int v59 = quantum_getwidth(v58);
            int v60 = v59;
            int v61 = v59;
            int v62 = v59;
            int v63 = v62 * 2;
            int v64 = v63 + v61;
            int v65 = v64 + v57;
            unsigned int v66 = (unsigned int)(v64 + v57);
            unsigned int v67 = (unsigned int)(v65 + 2);
            char v68 = v67 ? 0: 1;
            char v69 = v67 >= 0x80000000;
            char v70 = __parity__((unsigned char)v67);
            char v71 = (((v66 ^ 0x2) ^ v67) >>> 4) & 0x1;
            char v72 = v66 >= 0xfffffffe;
            char v73 = (int)((v67 ^ v66) & ~(v66 ^ 0x2)) < 0;
            unsigned int v74 = v67;
            int v75 = v50;
            v9 = v50;
            →printf("N = %i, %i qubits required\n");
            unsigned int* ptr8 = ptr4;
            char v76 = *ptr8 == 2;
            char v77 = *ptr8 < 2;
            char v78 = __parity__((unsigned char)*ptr8 - 2);
            char v79 = *ptr8 < 2;
            char v80 = (((*ptr8 - 2) ^ *ptr8) & (*ptr8 ^ 0x2)) < 0;
            char v81 = (((*ptr8 - 2) ^ (*ptr8 ^ 0x2)) >>> 4) & 0x1;
            if(!v76 && v77 == v80) {
                unsigned int* ptr9 = ptr4;
                int v82 = *(int*)(ptr9 + 1);
                unsigned int v83 = *(ptr9 + 1);
                int* ptr10 = (int*)(v82 + 8);
                char v84 = ptr10 ? 0: 1;
                char v85 = (int)ptr10 < 0;
                char v86 = __parity__((unsigned char)ptr10);
                char v87 = (int*)((int)(int*)((int)(int*)((v83 ^ 0x8) ^ (int)ptr10) >>> 4) & 0x1);
                char v88 = v83 >= 0xfffffff8;
                char v89 = (int)(int*)((int)(int*)((int)ptr10 ^ v83) & ~(v83 ^ 0x8)) < 0;
                int v90 = *ptr10;
                →atoi(v90);
                v34 = v14;
            }
            while(1) {
                unsigned int v91 = (unsigned int)v34;
                unsigned int v92 = (unsigned int)v50;
                unsigned int v93 = quantum_gcd(v92, v91);
                char v94 = v93 == 1;
                char v95 = (int)v93 < 1;
                char v96 = __parity__((unsigned char)v93 - 1);
                char v97 = v93 < 1;
                char v98 = (((v93 - 1) ^ v93) & (v93 ^ 0x1)) < 0;
                char v99 = (((v93 - 1) ^ (v93 ^ 0x1)) >>> 4) & 0x1;
                if((v94 || v95 != v98)) {
                    char v100 = v34 == 1;
                    char v101 = v34 < 1;
                    char v102 = __parity__((unsigned char)v34 - 1);
                    char v103 = (unsigned int)v34 < 1;
                    v98 = (((v34 - 1) ^ v34) & (v34 ^ 0x1)) < 0;
                    char v104 = (((v34 - 1) ^ (v34 ^ 0x1)) >>> 4) & 0x1;
                    if(!v100 && v101 == v98) {
                        int v105 = v34;
                        →printf("Random seed: %i\n");
                        int* ptr11 = &v20;
                        int v106 = v57;
                        v8 = v57;
                        v9 = 0;
                        v74 = 0;
                        int* ptr12 = quantum_new_qureg(&v20);
                        int* ptr13 = &v9;
                        char v107 = &v11 == 192;
                        char v108 = (int)&v15 < 0;
                        char v109 = __parity__((unsigned char)&v11 - 192);
                        char v110 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x4) ^ (int)&v15) >>> 4) & 0x1);
                        char v111 = (unsigned int)&v9 < 4;
                        char v112 = (int)(int*)((int)(int*)((int)&v15 ^ (int)&v9) & (int)(int*)((int)&v9 ^ 0x4)) < 0;
                        int v113 = v20;
                        v7 = v20;
                        unsigned int v114 = v19;
                        v6 = v19;
                        int v115 = v18;
                        v5 = v18;
                        int v116 = v17;
                        v4 = v17;
                        int v117 = v16;
                        v3 = v16;
                        v2 = 0;
                        break;
                    }
                }
                →rand();
                int v118 = v14;
                int v119 = v14;
                int v120 = v118;
                int v121 = v118 >> 31;
                char v122 = (v120 >>> 30) & 0x1;
                char v123 = v98;
                char v124 = v121 ? 0: 1;
                char v125 = v121 < 0;
                char v126 = __parity__((unsigned char)v121);
                int v127 = (unsigned int)((unsigned long long)v119 | ((unsigned long long)v121 << 32)) % v50;
                int v128 = (unsigned int)((unsigned long long)v119 | ((unsigned long long)v121 << 32)) / v50;
                int v129 = v127;
                v34 = v127;
            }
            while(1) {
                int v130 = v2;
                char v131 = v130 == v57;
                char v132 = v130 < v57;
                char v133 = __parity__((unsigned char)v130 - (unsigned char)v57);
                char v134 = (unsigned int)v130 < (unsigned int)v57;
                char v135 = (((v130 - v57) ^ v130) & (v130 ^ v57)) < 0;
                char v136 = (((v130 - v57) ^ (v130 ^ v57)) >>> 4) & 0x1;
                if(v132 == v135) {
                    break;
                }
                else {
                    int v137 = &v7;
                    int v138 = v2;
                    unsigned int v139 = quantum_hadamard(v138, &v7);
                    int v140 = v2;
                    ++v2;
                    char v141 = v2 ? 0: 1;
                    char v142 = v2 < 0;
                    char v143 = __parity__((unsigned char)v2);
                    char v144 = (((v140 ^ 0x1) ^ v2) >>> 4) & 0x1;
                    char v145 = (unsigned int)v140 >= 0xffffffff;
                    char v146 = ((v140 ^ v2) & ~(v140 ^ 0x1)) < 0;
                }
            }
            int v147 = v60;
            int v148 = v60;
            int v149 = v148 * 2;
            int v150 = v148 * 2;
            int v151 = v149 + v147;
            char v152 = v151 ? 0: 1;
            char v153 = v151 < 0;
            char v154 = __parity__((unsigned char)v151);
            char v155 = (((v147 ^ v150) ^ v151) >>> 4) & 0x1;
            char v156 = __carry__(v147, v150);
            char v157 = ((v151 ^ v150) & ~(v147 ^ v150)) < 0;
            int v158 = v151 + 2;
            int v159 = &v7;
            unsigned int v160 = quantum_addscratch(v158, (int*)&v7);
            int v161 = &v7;
            unsigned int v162 = (unsigned int)v60;
            unsigned int v163 = (unsigned int)v57;
            int v164 = v34;
            unsigned int v165 = (unsigned int)v50;
            unsigned int v166 = quantum_exp_mod_n(v165, v164, v163, v162, (int*)&v7);
            v2 = 0;
            while(1) {
                int v167 = v60;
                int v168 = v60;
                int v169 = v168 * 2;
                int v170 = v169 + v167;
                unsigned int v171 = (unsigned int)(v170 + 2);
                char v172 = v171 == v2;
                char v173 = (int)v171 < v2;
                char v174 = __parity__((unsigned char)v171 - (unsigned char)v2);
                char v175 = v171 < (unsigned int)v2;
                v1 = (((v171 - v2) ^ v171) & (v171 ^ v2)) < 0;
                char v176 = (((v171 - v2) ^ (v171 ^ v2)) >>> 4) & 0x1;
                if((v172 || v173 != v1)) {
                    break;
                }
                else {
                    int v177 = &v7;
                    int v178 = quantum_bmeasure(0, &v7);
                    int v179 = v2;
                    ++v2;
                    char v180 = v2 ? 0: 1;
                    char v181 = v2 < 0;
                    char v182 = __parity__((unsigned char)v2);
                    char v183 = (((v179 ^ 0x1) ^ v2) >>> 4) & 0x1;
                    char v184 = (unsigned int)v179 >= 0xffffffff;
                    char v185 = ((v179 ^ v2) & ~(v179 ^ 0x1)) < 0;
                }
            }
            int v186 = &v7;
            unsigned int v187 = (unsigned int)v57;
            unsigned int v188 = quantum_qft(v187, (int*)&v7);
            v2 = 0;
            while(1) {
                int v189 = v57;
                int v190 = v57;
                int v191 = v57;
                int v192 = v190 >>> 31;
                char v193 = (v191 >>> 30) & 0x1;
                char v194 = v1;
                char v195 = v192 ? 0: 1;
                char v196 = v192 < 0;
                char v197 = __parity__((unsigned char)v192);
                int v198 = v192;
                int v199 = v192 + v189;
                char v200 = v199 ? 0: 1;
                char v201 = v199 < 0;
                char v202 = __parity__((unsigned char)v199);
                char v203 = (((v189 ^ v198) ^ v199) >>> 4) & 0x1;
                char v204 = __carry__(v189, v198);
                char v205 = ((v199 ^ v198) & ~(v189 ^ v198)) < 0;
                int v206 = v199;
                unsigned int v207 = (unsigned int)(v199 >> 1);
                char v208 = v206 & 0x1;
                char v209 = 0;
                char v210 = v207 ? 0: 1;
                char v211 = v207 >= 0x80000000;
                char v212 = __parity__((unsigned char)v207);
                char v213 = v207 == v2;
                char v214 = (int)v207 < v2;
                char v215 = __parity__((unsigned char)v207 - (unsigned char)v2);
                char v216 = v207 < (unsigned int)v2;
                char v217 = (((v207 - v2) ^ v207) & (v207 ^ v2)) < 0;
                char v218 = (((v207 - v2) ^ (v207 ^ v2)) >>> 4) & 0x1;
                if((v213 || v214 != v217)) {
                    break;
                }
                else {
                    int v219 = v2;
                    int v220 = v57;
                    int v221 = v57;
                    int v222 = v220 - v219;
                    char v223 = v222 ? 0: 1;
                    char v224 = v222 < 0;
                    char v225 = __parity__((unsigned char)v222);
                    char v226 = (((v219 ^ v221) ^ v222) >>> 4) & 0x1;
                    char v227 = (unsigned int)v219 > (unsigned int)v221;
                    char v228 = ((v222 ^ v221) & (v219 ^ v221)) < 0;
                    int v229 = v222 - 1;
                    int v230 = &v7;
                    int v231 = v2;
                    unsigned int v232 = quantum_cnot(v231, v229, (int*)&v7);
                    int v233 = v2;
                    int v234 = v57;
                    int v235 = v57;
                    int v236 = v234 - v233;
                    char v237 = v236 ? 0: 1;
                    char v238 = v236 < 0;
                    char v239 = __parity__((unsigned char)v236);
                    char v240 = (((v233 ^ v235) ^ v236) >>> 4) & 0x1;
                    char v241 = (unsigned int)v233 > (unsigned int)v235;
                    char v242 = ((v236 ^ v235) & (v233 ^ v235)) < 0;
                    int v243 = v236 - 1;
                    int v244 = &v7;
                    int v245 = v2;
                    unsigned int v246 = quantum_cnot(v243, v245, (int*)&v7);
                    int v247 = v2;
                    int v248 = v57;
                    int v249 = v57;
                    int v250 = v248 - v247;
                    char v251 = v250 ? 0: 1;
                    char v252 = v250 < 0;
                    char v253 = __parity__((unsigned char)v250);
                    char v254 = (((v247 ^ v249) ^ v250) >>> 4) & 0x1;
                    char v255 = (unsigned int)v247 > (unsigned int)v249;
                    char v256 = ((v250 ^ v249) & (v247 ^ v249)) < 0;
                    int v257 = v250 - 1;
                    int v258 = &v7;
                    int v259 = v2;
                    unsigned int v260 = quantum_cnot(v259, v257, (int*)&v7);
                    int v261 = v2;
                    ++v2;
                    char v262 = v2 ? 0: 1;
                    char v263 = v2 < 0;
                    char v264 = __parity__((unsigned char)v2);
                    char v265 = (((v261 ^ 0x1) ^ v2) >>> 4) & 0x1;
                    char v266 = (unsigned int)v261 >= 0xffffffff;
                    v1 = ((v261 ^ v2) & ~(v261 ^ 0x1)) < 0;
                }
            }
            int v267 = v7;
            unsigned int v268 = v6;
            int v269 = v5;
            int v270 = v4;
            int v271 = v3;
            int v272 = v3;
            int v273 = quantum_measure(v267, v268, v269, v270);
            int v274 = v273;
            int v275 = v273;
            v35 = v275 == -1;
            v36 = v275 < -1;
            v37 = __parity__((unsigned char)v275 - 0xff);
            v38 = (unsigned int)v275 < 0xffffffff;
            v39 = (((v275 + 1) ^ v275) & ~v275) < 0;
            v40 = (((v275 + 1) ^ ~v275) >>> 4) & 0x1;
            if(v35) {
                →puts("Impossible Measurement!");
                v10 = 1;
            }
            else {
                int v276 = v274;
                v35 = v276 ? 0: 1;
                v36 = v276 < 0;
                v37 = __parity__((unsigned char)v276);
                v39 = 0;
                v38 = 0;
                if(v35) {
                    →puts("Measured zero, try again.");
                    v10 = 2;
                }
                else {
                    int v277 = v57;
                    int v278 = 1;
                    int v279 = 1;
                    int v280 = 1 << (v277 & 0x1f);
                    char v281 = (unsigned int)(v277 & 0x1f) < 32 && (v277 & 0x1f) ? 1 << ((v277 & 0x1f) - 1) < 0: 0;
                    char v282 = 0;
                    char v283 = v277 & 0x1f ? v280 ? 0: 1: 0;
                    char v284 = v277 & 0x1f ? v280 < 0: v36;
                    char v285 = v277 & 0x1f ? __parity__((unsigned char)v280): v37;
                    int v286 = v280;
                    int v287 = v274;
                    char v288 = 6;
                    __SyntheticTypeUnknownF v289 = (double)v287;
                    int v290 = v286;
                    char v291 = 5;
                    __SyntheticTypeUnknownF v292 = (double)v290;
                    __SyntheticTypeUnknownF v293 = v289 / v292;
                    char v294 = 6;
                    int v295 = v274;
                    *(long long*)&v74 = v293;
                    char v296 = 7;
                    →printf("Measured %i (%f), ");
                    int v297 = v57;
                    int* ptr14 = &v286;
                    int* ptr15 = &v274;
                    int v298 = quantum_frac_approx(&v274, &v286, v297);
                    unsigned int v299 = (unsigned int)v286;
                    int v300 = v274;
                    v74 = v299;
                    v9 = v300;
                    →printf("fractional approximation is %i/%i.\n");
                    int v301 = v286;
                    int v302 = v286;
                    int v303 = v286;
                    int v304 = v302 >> 31;
                    char v305 = (v303 >>> 30) & 0x1;
                    char v306 = 0;
                    char v307 = v304 ? 0: 1;
                    char v308 = v304 < 0;
                    char v309 = __parity__((unsigned char)v304);
                    int v310 = v304;
                    int v311 = v304;
                    int v312 = v310 >>> 31;
                    char v313 = (v311 >>> 30) & 0x1;
                    char v314 = 0;
                    char v315 = v312 ? 0: 1;
                    char v316 = v312 < 0;
                    char v317 = __parity__((unsigned char)v312);
                    int v318 = v312 + v301;
                    int v319 = v318 & 0x1;
                    unsigned int v320 = (unsigned int)(v319 - v312);
                    char v321 = v320 == 1;
                    char v322 = (int)v320 < 1;
                    char v323 = __parity__((unsigned char)v320 - 1);
                    char v324 = v320 < 1;
                    char v325 = (((v320 - 1) ^ v320) & (v320 ^ 0x1)) < 0;
                    char v326 = (((v320 - 1) ^ (v320 ^ 0x1)) >>> 4) & 0x1;
                    if(v321) {
                        int v327 = v286;
                        unsigned int v328 = (unsigned int)(v327 * 2);
                        int v329 = v57;
                        int v330 = 1;
                        int v331 = 1;
                        unsigned int v332 = (unsigned int)(1 << (v329 & 0x1f));
                        char v333 = (unsigned int)(v329 & 0x1f) < 32 && (v329 & 0x1f) ? 1 << ((v329 & 0x1f) - 1) < 0: v324;
                        char v334 = (v329 & 0x1f) != 1 ? v325: 0;
                        char v335 = v329 & 0x1f ? v332 ? 0: 1: v321;
                        char v336 = v329 & 0x1f ? v332 >= 0x80000000: v322;
                        char v337 = v329 & 0x1f ? __parity__((unsigned char)v332): v323;
                        char v338 = v332 == v328;
                        char v339 = (int)v332 > (int)v328;
                        char v340 = __parity__((unsigned char)v328 - (unsigned char)v332);
                        char v341 = v332 > v328;
                        v325 = (int)(((v328 - v332) ^ v328) & (v332 ^ v328)) < 0;
                        char v342 = (((v328 - v332) ^ (v332 ^ v328)) >>> 4) & 0x1;
                        if(v339 != v325) {
                            →puts("Odd denominator, trying to expand by 2.");
                            int v343 = v286;
                            int v344 = v286;
                            int v345 = v343 * 2;
                            char v346 = v345 ? 0: 1;
                            char v347 = v345 < 0;
                            char v348 = __parity__((unsigned char)v345);
                            char v349 = (v345 >>> 4) & 0x1;
                            char v350 = __carry__(v344, v344);
                            v325 = (v345 ^ v344) < 0;
                            v286 = v345;
                        }
                    }
                    int v351 = v286;
                    int v352 = v286;
                    int v353 = v286;
                    int v354 = v352 >> 31;
                    char v355 = (v353 >>> 30) & 0x1;
                    char v356 = v325;
                    char v357 = v354 ? 0: 1;
                    char v358 = v354 < 0;
                    char v359 = __parity__((unsigned char)v354);
                    int v360 = v354;
                    int v361 = v354;
                    int v362 = v360 >>> 31;
                    char v363 = (v361 >>> 30) & 0x1;
                    char v364 = v356;
                    char v365 = v362 ? 0: 1;
                    char v366 = v362 < 0;
                    char v367 = __parity__((unsigned char)v362);
                    int v368 = v362 + v351;
                    int v369 = v368 & 0x1;
                    unsigned int v370 = (unsigned int)(v369 - v362);
                    v35 = v370 == 1;
                    v36 = (int)v370 < 1;
                    v37 = __parity__((unsigned char)v370 - 1);
                    v38 = v370 < 1;
                    v39 = (((v370 - 1) ^ v370) & (v370 ^ 0x1)) < 0;
                    v40 = (((v370 - 1) ^ (v370 ^ 0x1)) >>> 4) & 0x1;
                    if(v35) {
                        →puts("Odd period, try again.");
                        v10 = 2;
                    }
                    else {
                        int v371 = v286;
                        v9 = v286;
                        →printf("Possible period is %i.\n");
                        int v372 = v286;
                        int v373 = v286;
                        int v374 = v286;
                        int v375 = v373 >>> 31;
                        char v376 = (v374 >>> 30) & 0x1;
                        char v377 = v39;
                        char v378 = v375 ? 0: 1;
                        char v379 = v375 < 0;
                        char v380 = __parity__((unsigned char)v375);
                        int v381 = v375;
                        int v382 = v375 + v372;
                        char v383 = v382 ? 0: 1;
                        char v384 = v382 < 0;
                        char v385 = __parity__((unsigned char)v382);
                        char v386 = (((v372 ^ v381) ^ v382) >>> 4) & 0x1;
                        char v387 = __carry__(v372, v381);
                        char v388 = ((v382 ^ v381) & ~(v372 ^ v381)) < 0;
                        int v389 = v382;
                        unsigned int v390 = (unsigned int)(v382 >> 1);
                        char v391 = v389 & 0x1;
                        char v392 = 0;
                        char v393 = v390 ? 0: 1;
                        char v394 = v390 >= 0x80000000;
                        char v395 = __parity__((unsigned char)v390);
                        int v396 = v34;
                        int v397 = quantum_ipow(v396, v390);
                        int v398 = v397;
                        int v399 = 1;
                        int v400 = 1;
                        int v401 = 1;
                        int v402 = 0;
                        char v403 = 0;
                        char v404 = 0;
                        char v405 = 1;
                        char v406 = 0;
                        char v407 = 1;
                        int v408 = 1 % v50;
                        int v409 = 1 / v50;
                        int v410 = v408;
                        int v411 = v408;
                        unsigned int v412 = (unsigned int)(v411 + v398);
                        int v413 = v286;
                        int v414 = v286;
                        int v415 = v286;
                        int v416 = v414 >>> 31;
                        char v417 = (v415 >>> 30) & 0x1;
                        char v418 = 0;
                        char v419 = v416 ? 0: 1;
                        char v420 = v416 < 0;
                        char v421 = __parity__((unsigned char)v416);
                        int v422 = v416;
                        int v423 = v416 + v413;
                        char v424 = v423 ? 0: 1;
                        char v425 = v423 < 0;
                        char v426 = __parity__((unsigned char)v423);
                        char v427 = (((v413 ^ v422) ^ v423) >>> 4) & 0x1;
                        char v428 = __carry__(v413, v422);
                        char v429 = ((v423 ^ v422) & ~(v413 ^ v422)) < 0;
                        int v430 = v423;
                        unsigned int v431 = (unsigned int)(v423 >> 1);
                        char v432 = v430 & 0x1;
                        char v433 = 0;
                        char v434 = v431 ? 0: 1;
                        char v435 = v431 >= 0x80000000;
                        char v436 = __parity__((unsigned char)v431);
                        int v437 = v34;
                        int v438 = quantum_ipow(v437, v431);
                        int v439 = v438;
                        int v440 = 1;
                        int v441 = 1;
                        int v442 = 1;
                        int v443 = 0;
                        char v444 = 0;
                        char v445 = 0;
                        char v446 = 1;
                        char v447 = 0;
                        char v448 = 1;
                        unsigned int v449 = (unsigned int)(1 % v50);
                        int v450 = 1 / v50;
                        unsigned int v451 = v449;
                        unsigned int v452 = v449;
                        int v453 = v439;
                        int v454 = v439;
                        unsigned int v455 = (unsigned int)(v453 - v452);
                        char v456 = v455 ? 0: 1;
                        char v457 = v455 >= 0x80000000;
                        char v458 = __parity__((unsigned char)v455);
                        char v459 = (((v452 ^ v454) ^ v455) >>> 4) & 0x1;
                        char v460 = v452 > (unsigned int)v454;
                        char v461 = ((v452 ^ v454) & (int)(v455 ^ v454)) < 0;
                        unsigned int v462 = v455;
                        unsigned int v463 = (unsigned int)(v411 + v398);
                        unsigned int v464 = (unsigned int)v50;
                        unsigned int v465 = quantum_gcd(v464, v463);
                        unsigned int v466 = v465;
                        unsigned int v467 = v455;
                        unsigned int v468 = (unsigned int)v50;
                        unsigned int v469 = quantum_gcd(v468, v467);
                        unsigned int v470 = v469;
                        unsigned int v471 = v466;
                        char v472 = v471 == v470;
                        char v473 = (int)v471 < (int)v470;
                        char v474 = __parity__((unsigned char)v471 - (unsigned char)v470);
                        char v475 = v471 < v470;
                        char v476 = (int)(((v471 - v470) ^ v471) & (v471 ^ v470)) < 0;
                        char v477 = (((v471 - v470) ^ (v471 ^ v470)) >>> 4) & 0x1;
                        if(!v472 && v473 == v476) {
                            unsigned int v478 = v466;
                            v0 = v466;
                        }
                        else {
                            unsigned int v479 = v470;
                            v0 = v470;
                        }
                        unsigned int v480 = v0;
                        v35 = v480 == v50;
                        v36 = (int)v480 < v50;
                        v37 = __parity__((unsigned char)v480 - (unsigned char)v50);
                        v38 = v480 < (unsigned int)v50;
                        v39 = (((v480 - v50) ^ v480) & (v480 ^ v50)) < 0;
                        v40 = (((v480 - v50) ^ (v480 ^ v50)) >>> 4) & 0x1;
                        if(v36 != v39) {
                            v35 = v0 == 1;
                            v36 = (int)v0 < 1;
                            v37 = __parity__((unsigned char)v0 - 1);
                            v38 = v0 < 1;
                            v39 = (((v0 - 1) ^ v0) & (v0 ^ 0x1)) < 0;
                            v40 = (((v0 - 1) ^ (v0 ^ 0x1)) >>> 4) & 0x1;
                            if(v35 || v36 != v39) {
                                goto loc_8052B16;
                            }
                            else {
                                int v481 = v50;
                                int v482 = v50;
                                int v483 = v50;
                                int v484 = v50;
                                int v485 = v483;
                                int v486 = v483 >> 31;
                                v38 = (v485 >>> 30) & 0x1;
                                v35 = v486 ? 0: 1;
                                v36 = v486 < 0;
                                v37 = __parity__((unsigned char)v486);
                                int v487 = (unsigned int)((unsigned long long)v484 | ((unsigned long long)v486 << 32)) % (int)v0;
                                int v488 = (unsigned int)((unsigned long long)v484 | ((unsigned long long)v486 << 32)) / (int)v0;
                                int v489 = v487;
                                v8 = v488;
                                unsigned int v490 = v0;
                                v74 = v0;
                                int v491 = v50;
                                v9 = v50;
                                →printf("%i = %i * %i\n");
                                int v492 = &v7;
                                int v493 = quantum_delete_qureg(&v7);
                                v10 = 0;
                            }
                        }
                        else {
                        loc_8052B16:
                            →puts("Unable to determine factors, try again.");
                            v10 = 2;
                        }
                    }
                }
            }
        }
    }
    int v494 = v10;
    unsigned int* ptr16 = ptr2;
    int v495 = v27;
    int v496 = v15;
    int* ptr17 = &v9;
    jump v496;
}

unsigned int mul_mod_n(unsigned int param0, int param1, int param2, unsigned int param3, int* param4) {
    muln(param0, param1, param2, param3, param4);
    quantum_swaptheleads_omuln_controlled(param2, param3, param4);
    return muln_inv((int)param0, param1, param2, (int)param3, param4);
}

unsigned int muln(unsigned int param0, int param1, int param2, unsigned int param3, int* param4) {
    int v0 = param3 * 2 + 1;
    quantum_toffoli(param2, (param3 + 1) * 2, v0, param4);
    emul((unsigned int)((unsigned long long)param1 | ((unsigned long long)(param1 >> 31) << 32)) % (int)param0, v0, param3, param4);
    quantum_toffoli(param2, (param3 + 1) * 2, v0, param4);
    unsigned int i;
    for(i = 1; (int)i < (int)param3; ++i) {
        quantum_toffoli(param2, (param3 + 1) * 2 + i, v0, param4);
        int v1 = param1 << (i & 0x1f);
        add_mod_n(param0, (unsigned int)((unsigned long long)v1 | ((unsigned long long)(v1 >> 31) << 32)) % (int)param0, (int)param3, param4);
        quantum_toffoli(param2, (param3 + 1) * 2 + i, v0, param4);
    }
    return i;
}

unsigned int muln_inv(int param0, int param1, int param2, int param3, int* param4) {
    int v0 = param3 * 2 + 1;
    param1 = quantum_inverse_mod(param0, param1);
    for(unsigned int i = (unsigned int)(param3 - 1); (int)i > 0; --i) {
        quantum_toffoli(param2, (param3 + 1) * 2 + i, v0, param4);
        int v1 = param1 << (i & 0x1f);
        add_mod_n((unsigned int)param0, param0 - (unsigned int)((unsigned int)((unsigned long long)v1 | ((unsigned long long)(v1 >> 31) << 32)) % param0), param3, param4);
        quantum_toffoli(param2, (param3 + 1) * 2 + i, v0, param4);
    }
    quantum_toffoli(param2, (param3 + 1) * 2, v0, param4);
    emul((unsigned int)((unsigned long long)param1 | ((unsigned long long)(param1 >> 31) << 32)) % param0, v0, (unsigned int)param3, param4);
    return quantum_toffoli(param2, (param3 + 1) * 2, v0, param4);
}

unsigned int muxfa(unsigned int param0, int param1, int param2, int param3, int param4, int param5, int param6, int* param7) {
    unsigned int result;
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

unsigned int muxfa_inv(unsigned int param0, int param1, int param2, int param3, int param4, int param5, int param6, int* param7) {
    unsigned int result;
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

unsigned int muxha(unsigned int param0, int param1, int param2, int param3, int param4, int param5, int* param6) {
    unsigned int result;
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

unsigned int muxha_inv(unsigned int param0, int param1, int param2, int param3, int param4, int param5, int* param6) {
    unsigned int result;
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
    unsigned int v2 = 0;
    int v3 = quantum_hash64(param0, param1, *(unsigned int*)(param3 + 8));
    while(*(int*)(v3 * 4 + *(int*)(param3 + 16))) {
        ++v3;
        if((unsigned int)(1 << (*(int*)(param3 + 8) & 0x1f)) == v3) {
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
    unsigned int v2 = 0;
    int v3 = quantum_hash642(param0, param1, *(unsigned int*)(param3 + 8));
    while(*(int*)(v3 * 4 + *(int*)(param3 + 16))) {
        ++v3;
        if((unsigned int)(1 << (*(int*)(param3 + 8) & 0x1f)) == v3) {
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
    unsigned int v2 = 0;
    int v3 = quantum_hash643(param0, param1, *(unsigned int*)(param3 + 8));
    while(*(int*)(v3 * 4 + *(int*)(param3 + 16))) {
        ++v3;
        if((unsigned int)(1 << (*(int*)(param3 + 8) & 0x1f)) == v3) {
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

unsigned int quantum_addscratch(int param0, int* param1) {
    int v0 = *param1;
    *param1 = *param1 + param0;
    unsigned int v1 = 0;
    unsigned int i;
    for(i = *(unsigned int*)(param1 + 1); (int)i > (int)v1; i = *(unsigned int*)(param1 + 1)) {
        int v2 = v1 * 16 + *(param1 + 3);
        int v3 = *(int*)(v2 + 8);
        int v4 = (unsigned int)((((unsigned long long)v3 | ((unsigned long long)*(int*)(v2 + 12) << 32)) << (param0 & 0x1f)) >>> 32L);
        int v5 = v3 << (param0 & 0x1f);
        if(((unsigned char)param0 & 0x20)) {
            v4 = v5;
            v5 = 0;
        }
        int v6 = v5;
        int v7 = v4;
        int v8 = v1 * 16 + *(param1 + 3);
        *(int*)(v8 + 8) = v5;
        *(int*)(v8 + 12) = v4;
        ++v1;
    }
    return i;
}

int quantum_bitmask(int param0, int param1, unsigned int param2, int param3) {
    int v0 = param0;
    int v1 = param1;
    int result = 0;
    for(unsigned int i = 0; (int)i < (int)param2; ++i) {
        unsigned int v2 = *(unsigned int*)(i * 4 + param3);
        int v3 = (unsigned int)(((unsigned long long)param0 | ((unsigned long long)param1 << 32)) >>> (v2 & 0x1f));
        int v4 = param1 >>> (v2 & 0x1f);
        if(((unsigned char)v2 & 0x20)) {
            v3 = v4;
        }
        if(((unsigned char)v3 & 0x1)) {
            result += 1 << (i & 0x1f);
        }
    }
    return result;
}

int quantum_bmeasure(int param0, int param1) {
    int result;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6 = v5;
    int v7 = 0;
    __SyntheticTypeUnknownF v8 = 0.0;
    double v9 = 0.0;
    int v10 = param0;
    unsigned int v11 = quantum_objcode_put(129);
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
        for(unsigned int i = 0; (int)*(unsigned int*)(param1 + 4) > (int)i; ++i) {
            int v16 = i * 16 + *(int*)(param1 + 12);
            if(!((*(int*)(v16 + 8) & v14) | (*(int*)(v16 + 12) & v15))) {
                int* ptr0 = (int*)(i * 16 + *(int*)(param1 + 12));
                int v17 = *ptr0;
                int v18 = *ptr0;
                quantum_prob_inline4(v17, *(ptr0 + 1));
                v8 += v9;
                v9 = v8;
            }
        }
        int v19 = quantum_frand();
        double v20 = v8;
        fucompp(v9, v8);
        fnstsw((unsigned short)v19);
        if(!(((unsigned short)v19 >>> 8) & 0x1) && !(((unsigned short)v19 >>> 14) & 0x1)) {
            v7 = 1;
        }
        quantum_state_collapse(&v0);
        quantum_delete_qureg_hashpreserve(param1);
        int v21 = param1;
        *(int*)v21 = v0;
        *(int*)(v21 + 4) = v3;
        *(int*)(v21 + 8) = v1;
        *(int*)(v21 + 12) = v4;
        *(int*)(v21 + 16) = v2;
        result = v7;
    }
    return result;
}

unsigned int quantum_bmeasure_bitpreserve(int param0, int param1) {
    int v0;
    unsigned int result;
    __SyntheticTypeUnknown v1;
    int v2;
    int v3;
    __SyntheticTypeUnknownF v4;
    int v5;
    __SyntheticTypeUnknownF v6;
    int v7 = v5;
    int v8 = 0;
    unsigned int v9 = 0;
    double v10 = 0.0;
    __SyntheticTypeUnknownF v11 = 0.0;
    double v12 = 0.0;
    int v13 = param0;
    unsigned int v14 = quantum_objcode_put(130);
    if(v14) {
        result = 0;
    }
    else {
        int v15 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
        int v16 = 1 << (param0 & 0x1f);
        if(((unsigned char)param0 & 0x20)) {
            v15 = v16;
            v16 = 0;
        }
        int v17 = v16;
        int v18 = v15;
        unsigned int i;
        for(i = 0; (int)*(unsigned int*)(param1 + 4) > (int)i; ++i) {
            int v19 = i * 16 + *(int*)(param1 + 12);
            if(!((*(int*)(v19 + 8) & v17) | (*(int*)(v19 + 12) & v18))) {
                int* ptr0 = (int*)(i * 16 + *(int*)(param1 + 12));
                int v20 = *ptr0;
                v0 = *ptr0;
                quantum_prob_inline4(v20, *(ptr0 + 1));
                v11 += v12;
                v12 = v11;
            }
        }
        int v21 = /*BAD_CALL!*/ quantum_frand();
        short v22 = (unsigned short)v21;
        double v23 = v11;
        fucompp(v12, v11);
        fnstsw(v22);
        if(!((v22 >>> 8) & 0x1) && !((v22 >>> 14) & 0x1)) {
            v9 = 1;
        }
        for(i = 0; (int)*(unsigned int*)(param1 + 4) > (int)i; ++i) {
            int v24 = i * 16 + *(int*)(param1 + 12);
            if(((*(int*)(v24 + 8) & v17) | (*(int*)(v24 + 12) & v18))) {
                if(!v9) {
                    int* ptr1 = (int*)(i * 16 + *(int*)(param1 + 12));
                    *ptr1 = 0;
                    *(ptr1 + 1) = 0;
                }
                else {
                    int* ptr2 = (int*)(i * 16 + *(int*)(param1 + 12));
                    int v25 = *ptr2;
                    v0 = *ptr2;
                    quantum_prob_inline4(v25, *(ptr2 + 1));
                    v11 += v10;
                    v10 = v11;
                    ++v8;
                }
            }
            else if(v9) {
                int* ptr3 = (int*)(i * 16 + *(int*)(param1 + 12));
                *ptr3 = 0;
                *(ptr3 + 1) = 0;
            }
            else {
                int* ptr4 = (int*)(i * 16 + *(int*)(param1 + 12));
                int v26 = *ptr4;
                v0 = *ptr4;
                quantum_prob_inline4(v26, *(ptr4 + 1));
                v11 += v10;
                v10 = v11;
                ++v8;
            }
        }
        int v27 = v8;
        →calloc(v8, 16);
        int v28 = v3;
        if(!v28) {
            quantum_error(2);
        }
        quantum_memman(v8 * 16);
        int v29 = *(int*)(param1 + 8);
        int v30 = *(int*)(param1 + 16);
        int v31 = *(int*)param1;
        i = 0;
        int v32 = 0;
        while((int)*(unsigned int*)(param1 + 4) > (int)i) {
            float* ptr5 = (float*)(i * 16 + *(int*)(param1 + 12));
            float v33 = *ptr5;
            short v34 = (unsigned short)*(int*)(ptr5 + 1);
            float v35 = (unsigned int)v34 | ((unsigned int)(unsigned short)(*(int*)(ptr5 + 1) >>> 16) << 16);
            float v36 = v33;
            fucompp(0.0, v36);
            fnstsw(v34);
            if(((v34 >>> 14) & 0x1) && !((v34 >>> 10) & 0x1)) {
                fucompp(0.0, v35);
                fnstsw(v34);
                if(((v34 >>> 10) & 0x1) || !((v34 >>> 14) & 0x1)) {
                    goto loc_804D42E;
                }
            }
            else {
            loc_804D42E:
                int v37 = v32 * 16 + v28;
                int v38 = i * 16 + *(int*)(param1 + 12);
                int v39 = *(int*)(v38 + 12);
                *(int*)(v37 + 8) = *(int*)(v38 + 8);
                *(int*)(v37 + 12) = v39;
                int* ptr6 = (int*)(v32 * 16 + v28);
                float* ptr7 = (float*)(i * 16 + *(int*)(param1 + 12));
                float v40 = *ptr7;
                float v41 = *(ptr7 + 1);
                v1[v48] = fsqrt(v10);
                double v42 = v6;
                __int128 v43 = v42;
                fucomp(v43, v43);
                char v44 = 7;
                fnstsw((unsigned short)ptr7);
                if((int*)((int)(int*)((int)ptr7 >>> 10) & 0x1) || !(int*)((int)(int*)((int)ptr7 >>> 14) & 0x1)) {
                    *(long long*)&v0 = v10;
                    →sqrt(v0, v13);
                    v42 = v4;
                    v44 = 0;
                }
                char v45 = v44 - 1;
                v1[v45] = v42;
                float v46 = v1[v45];
                v36 = v1[v45];
                int v47 = __divsc3(v40, v41, v36, 0.0);
                *ptr6 = v47;
                *(ptr6 + 1) = v2;
                ++v32;
            }
            ++i;
        }
        quantum_delete_qureg_hashpreserve(param1);
        v2 = param1;
        *(int*)v2 = v31;
        *(int*)(v2 + 4) = v27;
        *(int*)(v2 + 8) = v29;
        *(int*)(v2 + 12) = v28;
        *(int*)(v2 + 16) = v30;
        result = v9;
    }
    return result;
}

int quantum_cexp(float param0) {
    int v0;
    int v1;
    double v2;
    double result;
    int v3;
    int v4 = v3;
    *(long long*)&v0 = param0;
    →cos(v0, v1);
    *(long long*)&v0 = param0;
    →sin(v0, v1);
    *(long long*)&v1 = param0;
    __muldc3(&v2);
    return result;
}

double* quantum_char2double(double* param0) {
    return param0;
}

int quantum_char2int(int param0) {
    int v0;
    int v1 = v0;
    int result = 0;
    unsigned int v2 = 4;
    unsigned int v3 = 3;
    do {
        result += (unsigned int)*(char*)(v3 + param0) << ((~(v3 - 4) * 8) & 0x1f);
        --v3;
    }
    while(v3 < 0x80000000);
    return result;
}

int quantum_char2mu(int param0) {
    int v0;
    int v1 = v0;
    int result = 0;
    int v2 = 0;
    unsigned int v3 = 8;
    unsigned int v4 = 7;
    do {
        int v5 = (unsigned int)*(char*)(v4 + param0);
        int v6 = (unsigned int)(((unsigned long long)v5 << ((~(v4 - 8) * 8) & 0x1f)) >>> 32L);
        int v7 = v5 << ((~(v4 - 8) * 8) & 0x1f);
        if((((unsigned char)~(v4 - 8) * 8) & 0x20)) {
            v6 = v7;
            v7 = 0;
        }
        int v8 = result;
        result += v7;
        v2 += (unsigned int)__carry__(v7, v8) + v6;
        --v4;
    }
    while(v4 < 0x80000000);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int quantum_cnot(int param0, int param1, int* param2) {
    unsigned int result;
    int v0;
    int v1;
    int v2 = v1;
    quantum_qec_get_status(&v0, NULL);
    if(v0) {
        result = (unsigned int)quantum_cnot_ft(param0, param1, (int)param2);
    }
    else {
        int v3 = param1;
        int v4 = param0;
        result = quantum_objcode_put(1);
        if(!result) {
            for(unsigned int i = 0; param2[1] > (int)i; ++i) {
                int v5 = i * 16 + param2[3];
                int v6 = *(int*)(v5 + 12);
                int v7 = (unsigned int)(((unsigned long long)*(int*)(v5 + 8) | ((unsigned long long)v6 << 32)) >>> (param0 & 0x1f));
                int v8 = v6 >>> (param0 & 0x1f);
                if(((unsigned char)param0 & 0x20)) {
                    v7 = v8;
                }
                if(((unsigned char)v7 & 0x1)) {
                    int v9 = i * 16 + param2[3];
                    int v10 = i * 16 + param2[3];
                    int v11 = *(int*)(v10 + 8);
                    int v12 = *(int*)(v10 + 12);
                    int v13 = 1;
                    int v14 = 0;
                    int v15 = (unsigned int)((1L << (param1 & 0x1f)) >>> 32L);
                    int v16 = 1 << (param1 & 0x1f);
                    if(((unsigned char)param1 & 0x20)) {
                        v15 = v16;
                        v16 = 0;
                    }
                    int v17 = v9;
                    *(int*)(v17 + 8) = v16 ^ v11;
                    *(int*)(v17 + 12) = v15 ^ v12;
                }
            }
            result = quantum_decohere(param2);
        }
    }
    return result;
}

unsigned int quantum_cnot_ft(int param0, int param1, int* param2) {
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

unsigned int quantum_cond_phase(unsigned int param0, unsigned int param1, int* param2) {
    float v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = param1;
    unsigned int v4 = param0;
    unsigned int result = quantum_objcode_put(12);
    if(!result) {
        unsigned int v5 = param0 - param1;
        void* ptr0 = (void*)((1L << (v5 & 0x1f)) >>> 32L);
        void* ptr1 = (void*)(1 << (v5 & 0x1f));
        if(((unsigned char)v5 & 0x20)) {
            ptr0 = ptr1;
            ptr1 = NULL;
        }
        void* ptr2 = ptr0;
        void* ptr3 = ptr1;
        __SyntheticTypeUnknownF v6 = (double)*(long long*)&ptr3;
        if((int)ptr0 < 0) {
            v6 += *(__int128*)&gvar_8054330;
        }
        double v7 = v6;
        float v8 = 3.141592653589793 / v7;
        int v9 = quantum_cexp(v8);
        float v10 = v0;
        for(unsigned int i = 0; param2[1] > (int)i; ++i) {
            int v11 = i * 16 + param2[3];
            int v12 = *(int*)(v11 + 12);
            int v13 = (unsigned int)(((unsigned long long)*(int*)(v11 + 8) | ((unsigned long long)v12 << 32)) >>> (param0 & 0x1f));
            int v14 = v12 >>> (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v13 = v14;
            }
            if(((unsigned char)v13 & 0x1)) {
                int v15 = i * 16 + param2[3];
                int v16 = *(int*)(v15 + 12);
                int v17 = (unsigned int)(((unsigned long long)*(int*)(v15 + 8) | ((unsigned long long)v16 << 32)) >>> (param1 & 0x1f));
                int v18 = v16 >>> (param1 & 0x1f);
                if(((unsigned char)param1 & 0x20)) {
                    v17 = v18;
                }
                if(((unsigned char)v17 & 0x1)) {
                    int* ptr4 = (int*)(i * 16 + param2[3]);
                    float* ptr5 = (float*)(i * 16 + param2[3]);
                    int v19 = __mulsc3(*ptr5, *(ptr5 + 1), (float)v9, v10);
                    *ptr4 = v19;
                    *(float*)(ptr4 + 1) = v0;
                }
            }
        }
        result = quantum_decohere(param2);
    }
    return result;
}

unsigned int quantum_cond_phase_inv(unsigned int param0, unsigned int param1, int* param2) {
    float v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = param0 - param1;
    void* ptr0 = (void*)((1L << (v3 & 0x1f)) >>> 32L);
    void* ptr1 = (void*)(1 << (v3 & 0x1f));
    if(((unsigned char)v3 & 0x20)) {
        ptr0 = ptr1;
        ptr1 = NULL;
    }
    void* ptr2 = ptr0;
    void* ptr3 = ptr1;
    __SyntheticTypeUnknownF v4 = (double)*(long long*)&ptr3;
    if((int)ptr0 < 0) {
        v4 += *(__int128*)&gvar_8054330;
    }
    double v5 = v4;
    float v6 = -3.141592653589793 / v5;
    int v7 = quantum_cexp(v6);
    float v8 = v0;
    for(unsigned int i = 0; param2[1] > (int)i; ++i) {
        int v9 = i * 16 + param2[3];
        int v10 = *(int*)(v9 + 12);
        int v11 = (unsigned int)(((unsigned long long)*(int*)(v9 + 8) | ((unsigned long long)v10 << 32)) >>> (param0 & 0x1f));
        int v12 = v10 >>> (param0 & 0x1f);
        if(((unsigned char)param0 & 0x20)) {
            v11 = v12;
        }
        if(((unsigned char)v11 & 0x1)) {
            int v13 = i * 16 + param2[3];
            int v14 = *(int*)(v13 + 12);
            int v15 = (unsigned int)(((unsigned long long)*(int*)(v13 + 8) | ((unsigned long long)v14 << 32)) >>> (param1 & 0x1f));
            int v16 = v14 >>> (param1 & 0x1f);
            if(((unsigned char)param1 & 0x20)) {
                v15 = v16;
            }
            if(((unsigned char)v15 & 0x1)) {
                int* ptr4 = (int*)(i * 16 + param2[3]);
                float* ptr5 = (float*)(i * 16 + param2[3]);
                int v17 = __mulsc3(*ptr5, *(ptr5 + 1), (float)v7, v8);
                *ptr4 = v17;
                *(float*)(ptr4 + 1) = v0;
            }
        }
    }
    return quantum_decohere(param2);
}

unsigned int quantum_cond_phase_kick(int param0, int param1, float param2, int* param3) {
    int v0;
    float v1;
    int v2;
    int v3 = v2;
    *(long long*)&v0 = param2;
    int v4 = param1;
    int v5 = param0;
    unsigned int result = quantum_objcode_put(12);
    if(!result) {
        int v6 = quantum_cexp(param2);
        float v7 = v1;
        for(unsigned int i = 0; param3[1] > (int)i; ++i) {
            int v8 = i * 16 + param3[3];
            int v9 = *(int*)(v8 + 12);
            int v10 = (unsigned int)(((unsigned long long)*(int*)(v8 + 8) | ((unsigned long long)v9 << 32)) >>> (param0 & 0x1f));
            int v11 = v9 >>> (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v10 = v11;
            }
            if(((unsigned char)v10 & 0x1)) {
                int v12 = i * 16 + param3[3];
                int v13 = *(int*)(v12 + 12);
                int v14 = (unsigned int)(((unsigned long long)*(int*)(v12 + 8) | ((unsigned long long)v13 << 32)) >>> (param1 & 0x1f));
                int v15 = v13 >>> (param1 & 0x1f);
                if(((unsigned char)param1 & 0x20)) {
                    v14 = v15;
                }
                if(((unsigned char)v14 & 0x1)) {
                    int* ptr0 = (int*)(i * 16 + param3[3]);
                    float* ptr1 = (float*)(i * 16 + param3[3]);
                    int v16 = __mulsc3(*ptr1, *(ptr1 + 1), (float)v6, v7);
                    *ptr0 = v16;
                    *(float*)(ptr0 + 1) = v1;
                }
            }
        }
        result = quantum_decohere(param3);
    }
    return result;
}

int quantum_conj(int param0, int param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    __SyntheticTypeUnknownF v2;
    v0[v1] = quantum_real();
    v0[v1] = quantum_imag();
    int v3 = __mulsc3(v2, 0.0, -0.0, -1.0);
    return 0.0 + (double)v3;
}

int quantum_copy_qureg(int* param0, int* param1) {
    int result;
    int* ptr0 = param1;
    int* ptr1 = param0;
    *ptr0 = *ptr1;
    *(ptr0 + 1) = *(ptr1 + 1);
    *(ptr0 + 2) = *(ptr1 + 2);
    *(ptr0 + 3) = *(ptr1 + 3);
    *(ptr0 + 4) = *(ptr1 + 4);
    →calloc(*(param1 + 1), 16);
    *(param1 + 3) = result;
    if(!*(param1 + 3)) {
        quantum_error(2);
    }
    quantum_memman(*(param1 + 1) * 16);
    if(*(param1 + 2)) {
        →calloc(1 << (*(param1 + 2) & 0x1f), 4);
        *(param1 + 4) = result;
        if(!*(param1 + 4)) {
            quantum_error(2);
        }
        quantum_memman(4 << (*(param1 + 2) & 0x1f));
    }
    →memcpy(*(param1 + 3), *(param0 + 3), *(param0 + 1) * 16);
    return result;
}

unsigned int quantum_decohere(int* param0) {
    char v0;
    float v1;
    float v2;
    int v3;
    __SyntheticTypeUnknown v4;
    int v5;
    short v6;
    float v7;
    int v8;
    __SyntheticTypeUnknownF v9;
    int v10;
    __SyntheticTypeUnknownF v11;
    int v12;
    int v13 = v12;
    quantum_gate_counter(1);
    unsigned int result = quantum_status;
    if(result) {
        →calloc(*param0, 4);
        int v14 = v10;
        if(!v14) {
            quantum_error(2);
        }
        quantum_memman(*param0 * 4);
        unsigned int i;
        for(i = 0; (int)*param0 > (int)i; ++i) {
            do {
                /*BAD_CALL!*/ quantum_frand();
                v2 = v11 + v11 - 1.0;
                v5 = quantum_frand();
                float v15 = v11 + v11 - 1.0 + (v11 + v11 - 1.0) - 1.0;
                v1 = v2 * v2 + v15 * v15;
                v11 = v1;
                fucompp(1.0, v11);
                fnstsw((unsigned short)v5);
            }
            while(!(((unsigned short)v5 >>> 8) & 0x1));
            double v16 = v2;
            *(long long*)&v8 = v1;
            →log(v8, v3);
            double v17 = v1 * -2.0 / v1;
            v4[v31] = fsqrt(v17);
            double v18 = v9;
            fucomp(v18, v18);
            fnstsw(v6);
            if(((v10 >>> 10) & 0x1) || !((v10 >>> 14) & 0x1)) {
                *(long long*)&v8 = v17;
                →sqrt(v8, v3);
                v18 = v17;
            }
            double v19 = v18 * v16;
            __SyntheticTypeUnknownF v20 = quantum_lambda;
            *(long long*)&v8 = v20 + v20;
            →sqrt(v8, v3);
            float v21 = (v20 + v20) * v19;
            v11 = v21 / 2.0;
            *(int*)(i * 4 + v14) = v11;
            v0 = 0;
        }
        for(i = 0; (int)*(unsigned int*)(param0 + 1) > (int)i; ++i) {
            float v22 = (float)0.0;
            for(unsigned int j = 0; (int)*param0 > (int)j; ++j) {
                int v23 = i * 16 + *(param0 + 3);
                int v24 = *(int*)(v23 + 12);
                int v25 = (unsigned int)(((unsigned long long)*(int*)(v23 + 8) | ((unsigned long long)v24 << 32)) >>> (j & 0x1f));
                int v26 = v24 >>> (j & 0x1f);
                if(((unsigned char)j & 0x20)) {
                    v25 = v26;
                }
                v4[v0 - 1] = *(float*)(j * 4 + v14);
                v4[v0 + 6] = v22;
                if(((unsigned char)v25 & 0x1)) {
                    v4[v0 - 1] += v4[v0 + 6];
                }
                else {
                    v4[v0 - 1] = v4[v0 + 6] - v4[v0 - 1];
                }
                v22 = v4[v0 - 1];
            }
            int* ptr0 = (int*)(i * 16 + *(param0 + 3));
            float* ptr1 = (float*)(i * 16 + *(param0 + 3));
            float v27 = *ptr1;
            v4[v0 - 1] = *(ptr1 + 1);
            float v28 = v4[v0 - 1];
            int v29 = quantum_cexp(v22);
            int v30 = __mulsc3(v27, v28, (float)v29, v7);
            *ptr0 = v30;
            *(float*)(ptr0 + 1) = v7;
        }
        →free(v14);
        result = quantum_memman(0 - (unsigned int)(*param0 * 4));
    }
    return result;
}

unsigned int* quantum_delete_density_op(unsigned int* param0) {
    quantum_destroy_hash(*(int*)(param0 + 2));
    for(unsigned int i = 0; (int)*param0 > (int)i; ++i) {
        quantum_delete_qureg_hashpreserve(i * 20 + *(int*)(param0 + 2));
    }
    →free(*(int*)(param0 + 1));
    →free(*(int*)(param0 + 2));
    quantum_memman(*param0 * -24);
    *(int*)(param0 + 1) = 0;
    unsigned int* result = param0;
    *(int*)(result + 2) = 0;
    return result;
}

int* quantum_delete_matrix(int* param0) {
    →free(*(param0 + 2));
    quantum_memman(0 - (unsigned int)(*(param0 + 1) * *param0 * 8));
    int* result = param0;
    *(result + 2) = 0;
    return result;
}

int quantum_delete_qureg(int param0) {
    if(*(int*)(param0 + 8) && *(int*)(param0 + 16)) {
        quantum_destroy_hash(param0);
    }
    →free(*(int*)(param0 + 12));
    quantum_memman(0 - (unsigned int)(*(int*)(param0 + 4) * 16));
    int result = param0;
    *(int*)(result + 12) = 0;
    return result;
}

int quantum_delete_qureg_hashpreserve(int param0) {
    →free(*(int*)(param0 + 12));
    quantum_memman(0 - (unsigned int)(*(int*)(param0 + 4) * 16));
    int result = param0;
    *(int*)(result + 12) = 0;
    return result;
}

int* quantum_density_matrix(int* param0) {
    int v0;
    float v1;
    int v2;
    int v3;
    int v4;
    unsigned int* ptr0;
    int v5 = v4;
    int max = 1 << (**(ptr0 + 2) & 0x1f);
    if(max < 0) {
        quantum_error(3);
    }
    int v6 = max;
    int v7 = max;
    quantum_new_matrix(&v2);
    for(unsigned int i = 0; (int)*ptr0 > (int)i; ++i) {
        quantum_reconstruct_hash(i * 20 + *(int*)(ptr0 + 2));
        for(int j = 0; j < max; ++j) {
            for(int k = 0; k < max; ++k) {
                int* ptr1 = (int*)(i * 20 + *(int*)(ptr0 + 2));
                int v8 = *ptr1;
                v6 = *ptr1;
                int v9 = *(ptr1 + 1);
                int v10 = *(ptr1 + 1);
                unsigned int v11 = *(unsigned int*)(ptr1 + 2);
                unsigned int v12 = *(unsigned int*)(ptr1 + 2);
                int v13 = *(ptr1 + 3);
                int v14 = *(ptr1 + 3);
                int v15 = quantum_get_state(j, j >> 31, v8, v9, v11, v13, *(ptr1 + 4));
                int* ptr2 = (int*)(i * 20 + *(int*)(ptr0 + 2));
                int v16 = *ptr2;
                v6 = *ptr2;
                int v17 = *(ptr2 + 1);
                v10 = *(ptr2 + 1);
                unsigned int v18 = *(unsigned int*)(ptr2 + 2);
                v12 = *(unsigned int*)(ptr2 + 2);
                int v19 = *(ptr2 + 3);
                v14 = *(ptr2 + 3);
                int v20 = quantum_get_state(k, k >> 31, v16, v17, v18, v19, *(ptr2 + 4));
                if(v15 >= 0 && v20 >= 0) {
                    int* ptr3 = (int*)((v0 * k + j) * 8 + v3);
                    float* ptr4 = (float*)((v0 * k + j) * 8 + v3);
                    float v21 = *ptr4;
                    float v22 = *(ptr4 + 1);
                    float* ptr5 = (float*)(v20 * 16 + *(int*)(i * 20 + *(int*)(ptr0 + 2) + 12));
                    float v23 = (float)__mulsc3(*(float*)(i * 4 + *(int*)(ptr0 + 1)), 0.0, *ptr5, *(ptr5 + 1));
                    float v24 = v1;
                    int* ptr6 = (int*)(v15 * 16 + *(int*)(i * 20 + *(int*)(ptr0 + 2) + 12));
                    int v25 = *ptr6;
                    int v26 = *ptr6;
                    int v27 = quantum_conj(v25, *(ptr6 + 1));
                    int v28 = __mulsc3(v23, v24, (float)v27, v1);
                    int v29 = v21 + v1;
                    int v30 = v21 + v1;
                    *ptr3 = v22 + v28;
                    *(ptr3 + 1) = v30;
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
    →free(*(int*)(param0 + 16));
    quantum_memman(-4 << (*(int*)(param0 + 8) & 0x1f));
    int result = param0;
    *(int*)(result + 16) = 0;
    return result;
}

float quantum_dot_product(int param0, int param1) {
    float v0;
    int v1;
    int v2 = v1;
    float result = (float)0.0;
    float v3 = (float)0.0;
    if(*(int*)(param1 + 8)) {
        quantum_reconstruct_hash3(param1);
    }
    for(unsigned int i = 0; (int)*(unsigned int*)(param0 + 4) > (int)i; ++i) {
        int v4 = i * 16 + *(int*)(param0 + 12);
        int v5 = *(int*)(v4 + 8);
        int v6 = *(int*)(v4 + 12);
        int v7 = *(int*)param1;
        int v8 = *(int*)param1;
        int v9 = *(int*)(param1 + 4);
        int v10 = *(int*)(param1 + 4);
        unsigned int v11 = *(unsigned int*)(param1 + 8);
        unsigned int v12 = *(unsigned int*)(param1 + 8);
        int v13 = *(int*)(param1 + 12);
        int v14 = *(int*)(param1 + 12);
        int v15 = quantum_get_state3(v5, v6, v7, v9, v11, v13, *(int*)(param1 + 16));
        if(v15 >= 0) {
            int* ptr0 = (int*)(i * 16 + *(int*)(param0 + 12));
            int v16 = *ptr0;
            int v17 = *ptr0;
            int v18 = quantum_conj(v16, *(ptr0 + 1));
            float* ptr1 = (float*)(v15 * 16 + *(int*)(param1 + 12));
            int v19 = __mulsc3((float)v18, v0, *ptr1, *(ptr1 + 1));
            float v20 = (float)(v19 + v3);
            result += v0;
            v3 = v20;
        }
    }
    return result;
}

float quantum_dot_product_noconj(int param0, int param1) {
    int v0;
    float v1;
    int v2 = v0;
    float result = (float)0.0;
    float v3 = (float)0.0;
    if(*(int*)(param1 + 8)) {
        quantum_reconstruct_hash3(param1);
    }
    for(unsigned int i = 0; (int)*(unsigned int*)(param0 + 4) > (int)i; ++i) {
        int v4 = i * 16 + *(int*)(param0 + 12);
        int v5 = *(int*)(v4 + 8);
        int v6 = *(int*)(v4 + 12);
        int v7 = *(int*)param1;
        int v8 = *(int*)param1;
        int v9 = *(int*)(param1 + 4);
        int v10 = *(int*)(param1 + 4);
        unsigned int v11 = *(unsigned int*)(param1 + 8);
        unsigned int v12 = *(unsigned int*)(param1 + 8);
        int v13 = *(int*)(param1 + 12);
        int v14 = *(int*)(param1 + 12);
        int v15 = quantum_get_state3(v5, v6, v7, v9, v11, v13, *(int*)(param1 + 16));
        if(v15 >= 0) {
            float* ptr0 = (float*)(i * 16 + *(int*)(param0 + 12));
            float* ptr1 = (float*)(v15 * 16 + *(int*)(param1 + 12));
            int v16 = __mulsc3(*ptr0, *(ptr0 + 1), *ptr1, *(ptr1 + 1));
            float v17 = (float)(v16 + v3);
            result += v1;
            v3 = v17;
        }
    }
    return result;
}

unsigned int quantum_double2char(int param0, int param1, int param2) {
    int v0 = param0;
    int v1 = param1;
    int* ptr0 = &v0;
    unsigned int result = 0;
    do {
        *(char*)(result + param2) = *(char*)((int)ptr0 + result);
        ++result;
    }
    while(result <= 7);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int quantum_error(unsigned int param0) {
    int* ptr0;
    void* ptr1;
    int* ptr2;
    int v0;
    int* ptr3 = &ptr2;
    int* ptr4 = &ptr2;
    char v1 = &ptr0 == 44;
    char v2 = (int)&v0 < 0;
    char v3 = __parity__((unsigned char)&ptr0 - 44);
    char v4 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0x28) ^ (int)&v0) >>> 4) & 0x1);
    char v5 = (unsigned int)&ptr2 < 40;
    char v6 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v0) & (int)(int*)((int)&ptr2 ^ 0x28)) < 0;
    unsigned int v7 = quantum_error_handler(0);
    unsigned int v8 = v7;
    char v9 = v8 ? 0: 1;
    char v10 = v8 >= 0x80000000;
    char v11 = __parity__((unsigned char)v8);
    char v12 = v8 < 0;
    char v13 = 0;
    char v14 = 0;
    if(v9) {
        int v15 = stdout;
        →fflush(v15);
        unsigned int v16 = param0;
        int v17 = quantum_strerr(v16);
        int v18 = stderr;
        int v19 = v17;
        →fprintf(v18, "ERROR: %s\n");
        int v20 = stderr;
        →fflush(v20);
        int* ptr5 = &ptr1;
        /*NO_RETURN*/ →abort();
    }
    return v8((int)param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int quantum_error_handler(unsigned int param0) {
    if(param0) {
        errfunc.2059 = param0;
    }
    return errfunc.2059;
}

unsigned int quantum_exp_mod_n(unsigned int param0, int param1, unsigned int param2, unsigned int param3, int* param4) {
    quantum_sigma_x((param3 + 1) * 2, param4);
    unsigned int i;
    for(i = 1; (int)i <= (int)param2; ++i) {
        int v0 = (unsigned int)((unsigned long long)param1 | ((unsigned long long)(param1 >> 31) << 32)) % (int)param0;
        for(unsigned int j = 1; (int)j < (int)i; ++j) {
            v0 = (unsigned int)((unsigned long long)(v0 * v0) | ((unsigned long long)((v0 * v0) >> 31) << 32)) % (int)param0;
        }
        mul_mod_n(param0, v0, param3 * 2 + i + (param3 + 1), param3, param4);
    }
    return i;
}

int quantum_frac_approx(int* param0, int* param1, int param2) {
    short v0;
    int v1 = *param0;
    int v2 = *param0;
    float v3 = (double)v1 / (double)*param1;
    float v4 = (double)v1 / (double)*param1;
    int v5 = 0;
    int v6 = 1;
    int v7 = 1;
    int v8 = 0;
    int v9 = 0;
    int v10 = 0;
    short v0 = fnstcw();
    do {
        fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
        int v11 = (int)(v4 + 5.0E-6);
        fldcw(v0);
        __SyntheticTypeUnknownF v12 = 1.0 / (v4 - ((double)v11 - 5.0E-6));
        v4 = v12;
        if((int)(unsigned int)(v8 * v11 + v6) > (int)(unsigned int)(1 << (param2 & 0x1f))) {
            break;
        }
        else {
            v9 = v7 * v11 + v5;
            v10 = v8 * v11 + v6;
            v5 = v7;
            v6 = v8;
            v7 = v9;
            v8 = v10;
            v13[v14] = fabs((double)v9 / (double)v10 - v3);
            fucompp(1.0 / (double)(2 << (param2 & 0x1f)), v12);
            fnstsw((unsigned short)(2 << (param2 & 0x1f)));
        }
    }
    while(!(((2 << (param2 & 0x1f)) >>> 8) & 0x1) && !(((2 << (param2 & 0x1f)) >>> 14) & 0x1));
    *param0 = v9;
    int result = v10;
    *param1 = v10;
    return result;
}

int quantum_frand() {
    int result;
    →rand();
    return result;
}

unsigned int quantum_gate1(int param0, unsigned int param1, unsigned int param2, float* param3, int param4) {
    float v0;
    int v1;
    int v2;
    int v3;
    unsigned int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    __int128 v9;
    int v10;
    int v11;
    float v12;
    int v13 = v10;
    unsigned int v14 = 0;
    unsigned int v15 = 0;
    unsigned int v16 = 1;
    float v17 = (float)0.0;
    float v18 = (float)0.0;
    if(param2 != 2 || param1 != 2) {
        quantum_error(4);
    }
    quantum_reconstruct_hash2(param4);
    unsigned int i = 0;
    while(1) {
        int v19 = param4;
        unsigned int v20 = *(unsigned int*)(v19 + 4);
        char v21 = v20 == i;
        if((v21 || (int)v20 < (int)i)) {
            break;
        }
        else {
            if(v16) {
                int v22 = param4;
                int v23 = i * 16 + *(int*)(v22 + 12);
                int v24 = *(int*)(v23 + 8);
                if((((i >> 31) ^ *(int*)(v23 + 12)) | (v24 ^ i))) {
                    v16 = 0;
                }
            }
            int v25 = param4;
            int v26 = i * 16 + *(int*)(v25 + 12);
            int v27 = *(int*)(v26 + 8);
            int v28 = *(int*)(v26 + 12);
            int v29 = param0;
            v8 = 1;
            v7 = 0;
            int v30 = (unsigned int)((1L << (v29 & 0x1f)) >>> 32L);
            int v31 = 1 << (v29 & 0x1f);
            if(((unsigned char)v29 & 0x20)) {
                v30 = v31;
                v31 = 0;
            }
            int v32 = v31;
            int v33 = v30;
            int v34 = v32 ^ v27;
            int v35 = v33 ^ v28;
            int v36 = param4;
            int v37 = *(int*)v36;
            v6 = *(int*)v36;
            int v38 = *(int*)(v36 + 4);
            v5 = *(int*)(v36 + 4);
            unsigned int v39 = *(unsigned int*)(v36 + 8);
            v4 = *(unsigned int*)(v36 + 8);
            int v40 = *(int*)(v36 + 12);
            v3 = *(int*)(v36 + 12);
            int v41 = quantum_get_state2(v34, v35, v37, v38, v39, v40, *(int*)(v36 + 16));
            if(v41 == -1) {
                ++v14;
            }
            ++i;
        }
    }
    →realloc(*(int*)(param4 + 12), (*(int*)(param4 + 4) + v14) * 16);
    *(int*)(param4 + 12) = v11;
    if(!*(int*)(param4 + 12)) {
        quantum_error(2);
    }
    quantum_memman((int)(v14 * 16));
    for(i = 0; (int)(((i - v14) ^ i) & (v14 ^ i)) < 0 != (int)v14 > (int)i; ++i) {
        int v42 = (*(int*)(param4 + 4) + i) * 16 + *(int*)(param4 + 12);
        *(int*)(v42 + 8) = 0;
        *(int*)(v42 + 12) = 0;
        int* ptr0 = (int*)((*(int*)(param4 + 4) + i) * 16 + *(int*)(param4 + 12));
        *ptr0 = 0;
        *(ptr0 + 1) = 0;
    }
    →calloc(*(int*)(param4 + 4) + v14, 1);
    int v43 = v11;
    if(!v43) {
        quantum_error(2);
    }
    /*BAD_CALL!*/ quantum_memman(*(int*)(param4 + 4) + v14);
    int v44 = *(int*)(param4 + 4);
    int v45 = *(int*)param4;
    void* ptr1 = (void*)((1L << (v45 & 0x1f)) >>> 32L);
    void* ptr2 = (void*)(1 << (v45 & 0x1f));
    if(((unsigned char)v45 & 0x20)) {
        ptr1 = ptr2;
        ptr2 = NULL;
    }
    void* ptr3 = ptr1;
    void* ptr4 = ptr2;
    __SyntheticTypeUnknownF v46 = (double)*(long long*)&ptr4;
    if((int)ptr1 < 0) {
        v46 += *(__int128*)&gvar_8054330;
    }
    double v47 = v46;
    float v48 = 1.0 / v47 * 1.0E-6;
    for(i = 0; (int)*(unsigned int*)(param4 + 4) > (int)i; ++i) {
        if(!*(char*)(v43 + i)) {
            unsigned int v49 = (unsigned int)(((unsigned char)param0 & 0x20 ? 0: 1 << (param0 & 0x1f)) & *(int*)(i * 16 + *(int*)(param4 + 12) + 8));
            v17 = (float)0.0;
            v18 = (float)0.0;
            int v50 = i * 16 + *(int*)(param4 + 12);
            int v51 = *(int*)(v50 + 8);
            int v52 = *(int*)(v50 + 12);
            v8 = 1;
            v7 = 0;
            int v53 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
            int v54 = 1 << (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v53 = v54;
                v54 = 0;
            }
            int v55 = *(int*)param4;
            v6 = *(int*)param4;
            int v56 = *(int*)(param4 + 4);
            v5 = *(int*)(param4 + 4);
            unsigned int v57 = *(unsigned int*)(param4 + 8);
            v4 = *(unsigned int*)(param4 + 8);
            int v58 = *(int*)(param4 + 12);
            v3 = *(int*)(param4 + 12);
            v2 = /*BAD_CALL!*/ quantum_get_state2(v54 ^ v51, v53 ^ v52, v55, v56, v57, v58, *(int*)(param4 + 16));
            float* ptr5 = (float*)(i * 16 + *(int*)(param4 + 12));
            float v59 = *(ptr5 + 1);
            float v60 = *ptr5;
            float v61 = v59;
            if(v2 >= 0) {
                float* ptr6 = (float*)(v2 * 16 + *(int*)(param4 + 12));
                float v62 = *(ptr6 + 1);
                v17 = *ptr6;
                v18 = v62;
            }
            if(v49) {
                int* ptr7 = (int*)(i * 16 + *(int*)(param4 + 12));
                float* ptr8 = param3 + 4;
                int v63 = /*BAD_CALL!*/ __mulsc3(*ptr8, *(ptr8 + 1), v17, v18);
                float v64 = v12;
                float* ptr9 = param3 + 6;
                v1 = /*BAD_CALL!*/ __mulsc3(*ptr9, *(ptr9 + 1), v60, v61);
                __SyntheticTypeUnknownF v65 = (float)(v63 + v12);
                v0 = v65;
                *ptr7 = v64 + v1;
                *(float*)(ptr7 + 1) = v65;
            }
            else {
                int* ptr10 = (int*)(i * 16 + *(int*)(param4 + 12));
                int v66 = /*BAD_CALL!*/ __mulsc3(*param3, *(param3 + 1), v60, v61);
                float v67 = v12;
                float* ptr11 = param3 + 2;
                v1 = /*BAD_CALL!*/ __mulsc3(*ptr11, *(ptr11 + 1), v17, v18);
                __SyntheticTypeUnknownF v68 = (float)(v66 + v12);
                v0 = v68;
                *ptr10 = v67 + v1;
                *(float*)(ptr10 + 1) = v68;
            }
            if(v2 < 0) {
                float* ptr12 = param3 + 2;
                float v69 = *ptr12;
                float v70 = *(ptr12 + 1);
                v0 = *(ptr12 + 1);
                fucomp(0.0, v69);
                fnstsw((unsigned short)v70);
                char v71 = (v70 >>> 14) & 0x1;
                v70 = (unsigned int)((v70 >>> 10) & 0x1 ? 0: 1) | ((unsigned int)((v70 >>> 8) & 0xffffff) << 8);
                int v72 = ((unsigned int)(v71 ? 1: 0) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8)) & v70;
                fucompp(0.0, v0);
                fnstsw((unsigned short)v70);
                if((unsigned char)(((unsigned int)((v70 >>> 10) & 0x1 ? 0: 1) | ((unsigned int)((v69 >>> 8) & 0xffffff) << 8)) & ((unsigned int)((v70 >>> 14) & 0x1 ? 1: 0) | ((unsigned int)((v70 >>> 8) & 0xffffff) << 8)) & v72) && v49) {
                    break;
                }
                else {
                    float* ptr13 = param3 + 4;
                    float v73 = *ptr13;
                    float v74 = *(ptr13 + 1);
                    v0 = *(ptr13 + 1);
                    fucomp(0.0, v73);
                    fnstsw((unsigned short)v74);
                    fucompp(0.0, v0);
                    fnstsw((unsigned short)((unsigned int)((v74 >>> 10) & 0x1 ? 0: 1) | ((unsigned int)((v74 >>> 8) & 0xffffff) << 8)));
                    if((unsigned char)(((unsigned int)((v74 >>> 10) & 0x1 ? 0: 1) | ((unsigned int)((v74 >>> 8) & 0xffffff) << 8)) & ((unsigned int)((v74 >>> 14) & 0x1 ? 1: 0) | ((unsigned int)((v72 >>> 8) & 0xffffff) << 8)) & ((unsigned int)((unsigned int)(((unsigned int)((v74 >>> 8) & 0xffffff) >>> 2) & 0x3FFFFF) & 0x1 ? 0: 1) | ((unsigned int)((v73 >>> 8) & 0xffffff) << 8)) & ((unsigned int)((unsigned int)(((unsigned int)((v74 >>> 8) & 0xffffff) >>> 6) & 0x3FFFF) & 0x1 ? 1: 0) | ((unsigned int)((unsigned int)((v74 >>> 8) & 0xffffff) & 0xffffff) << 8))) && !v49) {
                        break;
                    }
                    else {
                        int v75 = v44 * 16 + *(int*)(param4 + 12);
                        int v76 = i * 16 + *(int*)(param4 + 12);
                        int v77 = *(int*)(v76 + 8);
                        int v78 = *(int*)(v76 + 12);
                        v8 = 1;
                        v7 = 0;
                        int v79 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
                        int v80 = 1 << (param0 & 0x1f);
                        if(((unsigned char)param0 & 0x20)) {
                            v79 = v80;
                            v80 = 0;
                        }
                        int v81 = v75;
                        *(int*)(v81 + 8) = v80 ^ v77;
                        *(int*)(v81 + 12) = v79 ^ v78;
                        if(v49) {
                            int* ptr14 = (int*)(v44 * 16 + *(int*)(param4 + 12));
                            float* ptr15 = param3 + 2;
                            int v82 = /*BAD_CALL!*/ __mulsc3(*ptr15, *(ptr15 + 1), v60, v61);
                            *ptr14 = v82;
                            *(float*)(ptr14 + 1) = v12;
                        }
                        else {
                            int* ptr16 = (int*)(v44 * 16 + *(int*)(param4 + 12));
                            float* ptr17 = param3 + 4;
                            int v83 = /*BAD_CALL!*/ __mulsc3(*ptr17, *(ptr17 + 1), v60, v61);
                            *ptr16 = v83;
                            *(float*)(ptr16 + 1) = v12;
                        }
                        ++v44;
                    }
                }
            }
            else if(v49) {
                int* ptr18 = (int*)(v2 * 16 + *(int*)(param4 + 12));
                int v84 = /*BAD_CALL!*/ __mulsc3(*param3, *(param3 + 1), v17, v18);
                float v85 = v12;
                float* ptr19 = param3 + 2;
                int v86 = /*BAD_CALL!*/ __mulsc3(*ptr19, *(ptr19 + 1), v60, v61);
                __SyntheticTypeUnknownF v87 = (double)v84;
                __SyntheticTypeUnknownF v88 = v12;
                v0 = v87 + v88;
                *ptr18 = v85 + v86;
                *(float*)(ptr18 + 1) = v87 + v88;
            }
            else {
                int* ptr20 = (int*)(v2 * 16 + *(int*)(param4 + 12));
                float* ptr21 = param3 + 4;
                int v89 = /*BAD_CALL!*/ __mulsc3(*ptr21, *(ptr21 + 1), v60, v61);
                float v90 = v12;
                float* ptr22 = param3 + 6;
                int v91 = /*BAD_CALL!*/ __mulsc3(*ptr22, *(ptr22 + 1), v17, v18);
                __SyntheticTypeUnknownF v92 = (double)v89;
                __SyntheticTypeUnknownF v93 = v12;
                v0 = v92 + v93;
                *ptr20 = v90 + v91;
                *(float*)(ptr20 + 1) = v92 + v93;
            }
            if(v2 >= 0) {
                *(char*)(v43 + v2) = 1;
            }
        }
    }
    *(int*)(param4 + 4) = *(int*)(param4 + 4) + v14;
    →free(v43);
    quantum_memman(0 - *(unsigned int*)(param4 + 4));
    if(!v16) {
        i = 0;
        v2 = 0;
        while((int)*(unsigned int*)(param4 + 4) > (int)i) {
            int* ptr23 = (int*)(i * 16 + *(int*)(param4 + 12));
            int v94 = *ptr23;
            int v95 = *ptr23;
            int v96 = /*BAD_CALL!*/ quantum_prob_inline3(v94, *(ptr23 + 1));
            short v97 = (unsigned short)v96;
            fucompp(v48, v9);
            fnstsw(v97);
            if(!((v97 >>> 8) & 0x1) && !((v97 >>> 14) & 0x1)) {
                ++v2;
                ++v15;
            }
            else if(v2) {
                int v98 = (i - v2) * 16 + *(int*)(param4 + 12);
                int v99 = i * 16 + *(int*)(param4 + 12);
                int v100 = *(int*)(v99 + 12);
                *(int*)(v98 + 8) = *(int*)(v99 + 8);
                *(int*)(v98 + 12) = v100;
                int* ptr24 = (int*)((i - v2) * 16 + *(int*)(param4 + 12));
                int* ptr25 = (int*)(i * 16 + *(int*)(param4 + 12));
                int v101 = *(ptr25 + 1);
                *ptr24 = *ptr25;
                *(ptr24 + 1) = v101;
            }
            ++i;
        }
        if(v15) {
            *(unsigned int*)(param4 + 4) = *(unsigned int*)(param4 + 4) - v15;
            →realloc(*(int*)(param4 + 12), *(int*)(param4 + 4) * 16);
            *(int*)(param4 + 12) = v11;
            if(!*(int*)(param4 + 12)) {
                quantum_error(2);
            }
            quantum_memman(0 - v15 * 16);
        }
    }
    return quantum_decohere((int*)param4);
}

unsigned int quantum_gate2(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5) {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    __int128 v9;
    char v10;
    int v11;
    int v12;
    int v13;
    float v14;
    int v15 = v8;
    unsigned int v16 = 0;
    unsigned int v17 = 0;
    char v18 = param3 == 4;
    if(v18) {
        v18 = param2 == 4;
        if(!v18) {
            goto loc_804B7D9;
        }
    }
    else {
    loc_804B7D9:
        quantum_error(4);
    }
    int i = 0;
    while(1) {
        int v19 = param5;
        unsigned int v20 = (unsigned int)(1 << (*(int*)(v19 + 8) & 0x1f));
        char v21 = v20 == i;
        if((v21 || (int)v20 < i)) {
            break;
        }
        else {
            int v22 = param5;
            *(int*)(i * 4 + *(int*)(v22 + 16)) = 0;
            ++i;
            v18 = i ? 0: 1;
        }
    }
    i = 0;
    while(1) {
        int v23 = param5;
        unsigned int v24 = *(unsigned int*)(v23 + 4);
        char v25 = v24 == i;
        if((v25 || (int)v24 < i)) {
            break;
        }
        else {
            int v26 = param5;
            int v27 = i * 16 + *(int*)(v26 + 12);
            int v28 = *(int*)(v27 + 8);
            quantum_add_hash2(v28, *(int*)(v27 + 12), i, param5);
            ++i;
        }
    }
    i = 0;
    while(1) {
        int v29 = param5;
        unsigned int v30 = *(unsigned int*)(v29 + 4);
        char v31 = v30 == i;
        if((v31 || (int)v30 < i)) {
            break;
        }
        else {
            int v32 = param5;
            int v33 = i * 16 + *(int*)(v32 + 12);
            int v34 = *(int*)(v33 + 8);
            int v35 = *(int*)(v33 + 12);
            int v36 = param0;
            v6 = 1;
            v5 = 0;
            int v37 = (unsigned int)((1L << (v36 & 0x1f)) >>> 32L);
            int v38 = 1 << (v36 & 0x1f);
            if(((unsigned char)v36 & 0x20)) {
                v37 = v38;
                v38 = 0;
            }
            int v39 = v38;
            int v40 = v37;
            int v41 = v39 ^ v34;
            int v42 = v40 ^ v35;
            int v43 = param5;
            int v44 = *(int*)v43;
            v4 = *(int*)v43;
            int v45 = *(int*)(v43 + 4);
            v3 = *(int*)(v43 + 4);
            unsigned int v46 = *(unsigned int*)(v43 + 8);
            v2 = *(unsigned int*)(v43 + 8);
            int v47 = *(int*)(v43 + 12);
            v1 = *(int*)(v43 + 12);
            int v48 = quantum_get_state2(v41, v42, v44, v45, v46, v47, *(int*)(v43 + 16));
            if(v48 == -1) {
                ++v16;
            }
            int v49 = param5;
            int v50 = i * 16 + *(int*)(v49 + 12);
            int v51 = *(int*)(v50 + 8);
            int v52 = *(int*)(v50 + 12);
            int v53 = param1;
            v6 = 1;
            v5 = 0;
            int v54 = (unsigned int)((1L << (v53 & 0x1f)) >>> 32L);
            int v55 = 1 << (v53 & 0x1f);
            if(((unsigned char)v53 & 0x20)) {
                v54 = v55;
                v55 = 0;
            }
            int v56 = v55;
            int v57 = v54;
            int v58 = v56 ^ v51;
            int v59 = v57 ^ v52;
            int v60 = param5;
            int v61 = *(int*)v60;
            v4 = *(int*)v60;
            int v62 = *(int*)(v60 + 4);
            v3 = *(int*)(v60 + 4);
            unsigned int v63 = *(unsigned int*)(v60 + 8);
            v2 = *(unsigned int*)(v60 + 8);
            int v64 = *(int*)(v60 + 12);
            v1 = *(int*)(v60 + 12);
            int v65 = quantum_get_state2(v58, v59, v61, v62, v63, v64, *(int*)(v60 + 16));
            if(v65 == -1) {
                ++v16;
            }
            ++i;
        }
    }
    →realloc(*(int*)(param5 + 12), (*(int*)(param5 + 4) + v16) * 16);
    *(int*)(param5 + 12) = v7;
    if(!*(int*)(param5 + 12)) {
        quantum_error(4);
    }
    quantum_memman((int)(v16 * 16));
    for(i = 0; (((i - v16) ^ i) & (v16 ^ i)) < 0 != (int)v16 > i; ++i) {
        int v66 = (*(int*)(param5 + 4) + i) * 16 + *(int*)(param5 + 12);
        *(int*)(v66 + 8) = 0;
        *(int*)(v66 + 12) = 0;
        int* ptr0 = (int*)((*(int*)(param5 + 4) + i) * 16 + *(int*)(param5 + 12));
        *ptr0 = 0;
        *(ptr0 + 1) = 0;
    }
    →calloc(*(int*)(param5 + 4) + v16, 1);
    int v67 = v7;
    if(!v67) {
        quantum_error(4);
    }
    quantum_memman(*(int*)(param5 + 4) + v16);
    int v68 = *(int*)(param5 + 4);
    int v69 = *(int*)param5;
    void* ptr1 = (void*)((1L << (v69 & 0x1f)) >>> 32L);
    void* ptr2 = (void*)(1 << (v69 & 0x1f));
    if(((unsigned char)v69 & 0x20)) {
        ptr1 = ptr2;
        ptr2 = NULL;
    }
    void* ptr3 = ptr1;
    void* ptr4 = ptr2;
    __SyntheticTypeUnknownF v70 = (double)*(long long*)&ptr4;
    if((int)ptr1 < 0) {
        v70 += *(__int128*)&gvar_8054330;
    }
    double v71 = v70;
    float v72 = 1.0 / v71 / 1000000.0;
    int v73 = param0;
    int v74 = param1;
    for(i = 0; i < (int)*(unsigned int*)(param5 + 4); ++i) {
        if(!*(char*)(v67 + i)) {
            int v75 = i * 16 + *(int*)(param5 + 12);
            v0 = quantum_bitmask(*(int*)(v75 + 8), *(int*)(v75 + 12), 2, &v73);
            *(int*)(v0 * 4 + (int)&v12) = i;
            int v76 = v0 ^ 0x1;
            int v77 = i * 16 + *(int*)(param5 + 12);
            int v78 = *(int*)(v77 + 8);
            int v79 = *(int*)(v77 + 12);
            v6 = 1;
            v5 = 0;
            int v80 = (unsigned int)((1L << (param1 & 0x1f)) >>> 32L);
            int v81 = 1 << (param1 & 0x1f);
            if(((unsigned char)param1 & 0x20)) {
                v80 = v81;
                v81 = 0;
            }
            int v82 = *(int*)param5;
            v4 = *(int*)param5;
            int v83 = *(int*)(param5 + 4);
            v3 = *(int*)(param5 + 4);
            unsigned int v84 = *(unsigned int*)(param5 + 8);
            v2 = *(unsigned int*)(param5 + 8);
            int v85 = *(int*)(param5 + 12);
            v1 = *(int*)(param5 + 12);
            int v86 = quantum_get_state2(v81 ^ v78, v80 ^ v79, v82, v83, v84, v85, *(int*)(param5 + 16));
            *(int*)(v76 * 4 + (int)&v12) = v86;
            int v87 = v0 ^ 0x2;
            int v88 = i * 16 + *(int*)(param5 + 12);
            int v89 = *(int*)(v88 + 8);
            int v90 = *(int*)(v88 + 12);
            v6 = 1;
            v5 = 0;
            int v91 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
            int v92 = 1 << (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v91 = v92;
                v92 = 0;
            }
            int v93 = *(int*)param5;
            v4 = *(int*)param5;
            int v94 = *(int*)(param5 + 4);
            v3 = *(int*)(param5 + 4);
            unsigned int v95 = *(unsigned int*)(param5 + 8);
            v2 = *(unsigned int*)(param5 + 8);
            int v96 = *(int*)(param5 + 12);
            v1 = *(int*)(param5 + 12);
            int v97 = quantum_get_state2(v92 ^ v89, v91 ^ v90, v93, v94, v95, v96, *(int*)(param5 + 16));
            *(int*)(v87 * 4 + (int)&v12) = v97;
            int v98 = v0 ^ 0x3;
            int v99 = i * 16 + *(int*)(param5 + 12);
            int v100 = *(int*)(v99 + 8);
            int v101 = *(int*)(v99 + 12);
            v6 = 1;
            v5 = 0;
            int v102 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
            int v103 = 1 << (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v102 = v103;
                v103 = 0;
            }
            int v104 = v103 ^ v100;
            int v105 = v102 ^ v101;
            *(int*)&v10 = param1;
            int v106 = 1;
            int v107 = 0;
            int v108 = (unsigned int)v10;
            int v109 = (unsigned int)((1L << (v108 & 0x1f)) >>> 32L);
            int v110 = 1 << (v108 & 0x1f);
            if(((unsigned char)v108 & 0x20)) {
                v109 = v110;
                v110 = 0;
            }
            *(int*)&v10 = v110;
            int v111 = v109;
            int v112 = *(int*)&v10 ^ v104;
            int v113 = *(int*)param5;
            v4 = *(int*)param5;
            int v114 = *(int*)(param5 + 4);
            v3 = *(int*)(param5 + 4);
            unsigned int v115 = *(unsigned int*)(param5 + 8);
            v2 = *(unsigned int*)(param5 + 8);
            int v116 = *(int*)(param5 + 12);
            v1 = *(int*)(param5 + 12);
            int v117 = quantum_get_state2(v112, v105 ^ v111, v113, v114, v115, v116, *(int*)(param5 + 16));
            *(int*)(v98 * 4 + (int)&v12) = v117;
            v0 = 0;
            do {
                if(*(unsigned int*)(v0 * 4 + (int)&v12) == -1) {
                    *(int*)(v0 * 4 + (int)&v12) = v68;
                    ++v68;
                }
                int v118 = v0;
                int* ptr5 = (int*)(*(int*)(v0 * 4 + (int)&v12) * 16 + *(int*)(param5 + 12));
                int v119 = *(ptr5 + 1);
                *(int*)(v118 * 8 + (int)&v13) = *ptr5;
                *(int*)(v118 * 8 + (int)&v11) = v119;
                ++v0;
            }
            while(v0 <= 3);
            v0 = 0;
            do {
                int* ptr6 = (int*)(*(int*)(v0 * 4 + (int)&v12) * 16 + *(int*)(param5 + 12));
                *ptr6 = 0;
                *(ptr6 + 1) = 0;
                unsigned int v120 = 0;
                do {
                    int* ptr7 = (int*)(*(int*)(v0 * 4 + (int)&v12) * 16 + *(int*)(param5 + 12));
                    float* ptr8 = (float*)(*(int*)(v0 * 4 + (int)&v12) * 16 + *(int*)(param5 + 12));
                    float v121 = *ptr8;
                    float v122 = *(ptr8 + 1);
                    float* ptr9 = (float*)((v0 * param3 + v120) * 8 + param4);
                    int v123 = __mulsc3(*ptr9, *(ptr9 + 1), *(float*)(v120 * 8 + (int)&v13), *(float*)(v120 * 8 + (int)&v11));
                    int v124 = v121 + v14;
                    int v125 = v121 + v14;
                    *ptr7 = v122 + v123;
                    *(ptr7 + 1) = v125;
                    ++v120;
                }
                while((int)v120 <= 3);
                *(char*)(*(int*)(v0 * 4 + (int)&v12) + v67) = 1;
                ++v0;
            }
            while(v0 <= 3);
        }
    }
    *(int*)(param5 + 4) = *(int*)(param5 + 4) + v16;
    →free(v67);
    quantum_memman(0 - *(unsigned int*)(param5 + 4));
    i = 0;
    v0 = 0;
    while((int)*(unsigned int*)(param5 + 4) > i) {
        int* ptr10 = (int*)(i * 16 + *(int*)(param5 + 12));
        int v126 = *ptr10;
        int v127 = *ptr10;
        int v128 = /*BAD_CALL!*/ quantum_prob_inline3(v126, *(ptr10 + 1));
        short v129 = (unsigned short)v128;
        fucompp(v72, v9);
        fnstsw(v129);
        if(!((v129 >>> 8) & 0x1) && !((v129 >>> 14) & 0x1)) {
            ++v0;
            ++v17;
        }
        else if(v0) {
            int v130 = (i - v0) * 16 + *(int*)(param5 + 12);
            int v131 = i * 16 + *(int*)(param5 + 12);
            int v132 = *(int*)(v131 + 12);
            *(int*)(v130 + 8) = *(int*)(v131 + 8);
            *(int*)(v130 + 12) = v132;
            int* ptr11 = (int*)((i - v0) * 16 + *(int*)(param5 + 12));
            int* ptr12 = (int*)(i * 16 + *(int*)(param5 + 12));
            int v133 = *(ptr12 + 1);
            *ptr11 = *ptr12;
            *(ptr11 + 1) = v133;
        }
        ++i;
    }
    if(v17) {
        *(unsigned int*)(param5 + 4) = *(unsigned int*)(param5 + 4) - v17;
        →realloc(*(int*)(param5 + 12), *(int*)(param5 + 4) * 16);
        *(int*)(param5 + 12) = v7;
        if(!*(int*)(param5 + 12)) {
            quantum_error(2);
        }
        quantum_memman(0 - v17 * 16);
    }
    return quantum_decohere((int*)param5);
}

unsigned int quantum_gate_counter(unsigned int param0) {
    if((int)param0 > 0) {
        counter.4541 += param0;
    }
    else if(param0 >= 0x80000000) {
        counter.4541 = 0;
    }
    return counter.4541;
}

unsigned int quantum_gcd(unsigned int param0, unsigned int param1) {
    while(param1) {
        unsigned int v0 = (unsigned int)((unsigned int)((unsigned long long)param0 | ((unsigned long long)(param0 >> 31) << 32)) % (int)param1);
        param0 = param1;
        param1 = v0;
    }
    return param0;
}

float quantum_get_decoherence() {
    return quantum_lambda;
}

int quantum_get_state(int param0, int param1, int param2, int param3, unsigned int param4, int param5, int param6) {
    int result;
    int v0 = param0;
    int v1 = param1;
    if(!param4) {
        result = param0;
    }
    else {
        int v2 = quantum_hash64(param0, param1, param4);
        while(*(int*)(v2 * 4 + param6)) {
            int v3 = param5 - (unsigned int)((1 - *(unsigned int*)(v2 * 4 + param6)) * 16);
            if(!((*(int*)(v3 + 8) ^ param0) | (unsigned int)(*(int*)(v3 + 12) ^ param1))) {
                return (int)(*(unsigned int*)(v2 * 4 + param6) - 1);
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

int quantum_get_state2(int param0, int param1, int param2, int param3, unsigned int param4, int param5, int param6) {
    int result;
    int v0 = param0;
    int v1 = param1;
    if(!param4) {
        result = param0;
    }
    else {
        int v2 = quantum_hash642(param0, param1, param4);
        while(*(int*)(v2 * 4 + param6)) {
            int v3 = param5 - (unsigned int)((1 - *(unsigned int*)(v2 * 4 + param6)) * 16);
            if(!((*(int*)(v3 + 8) ^ param0) | (unsigned int)(*(int*)(v3 + 12) ^ param1))) {
                return (int)(*(unsigned int*)(v2 * 4 + param6) - 1);
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

int quantum_get_state3(int param0, int param1, int param2, int param3, unsigned int param4, int param5, int param6) {
    int result;
    int v0 = param0;
    int v1 = param1;
    if(!param4) {
        result = param0;
    }
    else {
        int v2 = quantum_hash643(param0, param1, param4);
        while(*(int*)(v2 * 4 + param6)) {
            int v3 = param5 - (unsigned int)((1 - *(unsigned int*)(v2 * 4 + param6)) * 16);
            if(!((*(int*)(v3 + 8) ^ param0) | (unsigned int)(*(int*)(v3 + 12) ^ param1))) {
                return (int)(*(unsigned int*)(v2 * 4 + param6) - 1);
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

int quantum_getwidth(unsigned int param0) {
    int i;
    for(i = 1; (int)(unsigned int)(1 << (i & 0x1f)) < (int)param0; ++i) {
    }
    return i;
}

unsigned int quantum_hadamard(int param0, int param1) {
    unsigned int v0;
    unsigned int v1;
    float* ptr0;
    unsigned int result = quantum_objcode_put(6);
    if(!result) {
        quantum_new_matrix(&v0);
        unsigned int v2 = v0;
        unsigned int v3 = v1;
        float* ptr1 = ptr0;
        float* ptr2 = ptr0;
        ptr2[0] = (float)0.70710677;
        ptr2[1] = (float)0.0;
        int* ptr3 = (int*)(ptr1 + 2);
        *ptr3 = 0x3f3504f3;
        *(ptr3 + 1) = 0;
        int* ptr4 = (int*)(ptr1 + 4);
        *ptr4 = 0x3f3504f3;
        *(ptr4 + 1) = 0;
        int* ptr5 = (int*)(ptr1 + 6);
        *ptr5 = -1087044365;
        *(ptr5 + 1) = 0;
        quantum_gate1(param0, v2, v3, ptr1, param1);
        result = (unsigned int)quantum_delete_matrix(&v2);
    }
    return result;
}

int quantum_hash64(int param0, int param1, unsigned int param2) {
    return ((param0 ^ param1) * 0x9e370001) >>> ((32 - param2) & 0x1f);
}

int quantum_hash642(int param0, int param1, unsigned int param2) {
    return ((param0 ^ param1) * 0x9e370001) >>> ((32 - param2) & 0x1f);
}

int quantum_hash643(int param0, int param1, unsigned int param2) {
    return ((param0 ^ param1) * 0x9e370001) >>> ((32 - param2) & 0x1f);
}

float quantum_imag() {
    char v0;
    return *(float*)(&v0 + 1);
}

float quantum_imag2() {
    char v0;
    return *(float*)(&v0 + 1);
}

float quantum_imag3() {
    char v0;
    return *(float*)(&v0 + 1);
}

float quantum_imag4() {
    char v0;
    return *(float*)(&v0 + 1);
}

float quantum_imag5() {
    char v0;
    return *(float*)(&v0 + 1);
}

float quantum_imag6() {
    char v0;
    return *(float*)(&v0 + 1);
}

float quantum_imag7() {
    char v0;
    return *(float*)(&v0 + 1);
}

unsigned int quantum_int2char(int param0, int param1) {
    unsigned int v0 = 4;
    unsigned int i;
    for(i = 0; (int)v0 > (int)i; ++i) {
        *(char*)(i + param1) = (unsigned char)((unsigned long long)param0 | ((unsigned long long)(param0 >> 31) << 32)) / (unsigned char)(1 << ((~(i - v0) * 8) & 0x1f));
        param0 = (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param0 >> 31) << 32)) % (1 << ((~(i - v0) * 8) & 0x1f));
    }
    return i;
}

int quantum_inverse_mod(int param0, int param1) {
    int result = 1;
    for(int i = result * param1; (unsigned int)((unsigned int)((unsigned long long)i | ((unsigned long long)(i >> 31) << 32)) % param0) != 1; i = result * param1) {
        ++result;
    }
    return result;
}

int quantum_ipow(int param0, unsigned int param1) {
    int result = 1;
    for(unsigned int i = 0; (int)i < (int)param1; ++i) {
        result *= param0;
    }
    return result;
}

int* quantum_kronecker(int* param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int* ptr1;
    int v3 = v2;
    int v4 = *ptr1 + *ptr0;
    int v5 = *(ptr1 + 1) * *(ptr0 + 1);
    int v6 = *(ptr1 + 1) * *(ptr0 + 1) + 2;
    →calloc(v5, 16);
    int v7 = v0;
    if(!v7) {
        quantum_error(2);
    }
    quantum_memman(v5 * 16);
    →calloc(1 << (v6 & 0x1f), 4);
    int v8 = v0;
    if(!v8) {
        quantum_error(2);
    }
    quantum_memman(4 << (v6 & 0x1f));
    for(unsigned int i = 0; (int)*(unsigned int*)(ptr1 + 1) > (int)i; ++i) {
        for(unsigned int j = 0; (int)*(unsigned int*)(ptr0 + 1) > (int)j; ++j) {
            int v9 = (*(ptr0 + 1) * i + j) * 16 + v7;
            int v10 = i * 16 + *(ptr1 + 3);
            int v11 = *ptr0;
            int v12 = *(int*)(v10 + 8);
            int v13 = (unsigned int)((((unsigned long long)v12 | ((unsigned long long)*(int*)(v10 + 12) << 32)) << (v11 & 0x1f)) >>> 32L);
            int v14 = v12 << (v11 & 0x1f);
            if(((unsigned char)v11 & 0x20)) {
                v13 = v14;
                v14 = 0;
            }
            int v15 = j * 16 + *(ptr0 + 3);
            int v16 = *(int*)(v15 + 12) | v13;
            int v17 = v9;
            *(int*)(v17 + 8) = *(int*)(v15 + 8) | v14;
            *(int*)(v17 + 12) = v16;
            int* ptr2 = (int*)((*(ptr0 + 1) * i + j) * 16 + v7);
            float* ptr3 = (float*)(i * 16 + *(ptr1 + 3));
            float* ptr4 = (float*)(j * 16 + *(ptr0 + 3));
            int v18 = __mulsc3(*ptr3, *(ptr3 + 1), *ptr4, *(ptr4 + 1));
            *ptr2 = v18;
            *(ptr2 + 1) = v1;
        }
    }
    *param0 = v4;
    *(param0 + 1) = v5;
    *(param0 + 2) = v6;
    *(param0 + 3) = v7;
    *(param0 + 4) = v8;
    return param0;
}

int* quantum_matrix2qureg(int* param0) {
    float v0;
    __SyntheticTypeUnknown v1;
    char v2;
    int v3;
    int v4;
    unsigned int* ptr0;
    int v5 = 0;
    if(*(ptr0 + 1) != 1) {
        quantum_error(0x10000);
    }
    int v6 = v3;
    unsigned int i;
    for(i = 0; (int)*ptr0 > (int)i; ++i) {
        float* ptr1 = (float*)(i * 8 + *(int*)(ptr0 + 2));
        float v7 = *ptr1;
        short v8 = (unsigned short)*(int*)(ptr1 + 1);
        float v9 = (unsigned int)v8 | ((unsigned int)(unsigned short)(*(int*)(ptr1 + 1) >>> 16) << 16);
        v0 = v7;
        v1[v2 - 1] = v0;
        v1[v2 + 6] = 0.0;
        fucompp(v1[v2 + 6], v1[v2 - 1]);
        fnstsw(v8);
        if(((v8 >>> 14) & 0x1) && !((v8 >>> 10) & 0x1)) {
            v1[v2 - 1] = v9;
            v1[v2 + 6] = 0.0;
            fucompp(v1[v2 + 6], v1[v2 - 1]);
            fnstsw(v8);
            if(((v8 >>> 10) & 0x1) || !((v8 >>> 14) & 0x1)) {
                goto loc_8050BB1;
            }
        }
        else {
        loc_8050BB1:
            ++v5;
        }
    }
    int v10 = v5;
    int v11 = v3 + 2;
    →calloc(v5, 16);
    int v12 = v4;
    if(!v12) {
        quantum_error(2);
    }
    quantum_memman(v5 * 16);
    →calloc(1 << (v11 & 0x1f), 4);
    int v13 = v4;
    if(!v13) {
        quantum_error(2);
    }
    quantum_memman(4 << (v11 & 0x1f));
    i = 0;
    int v14 = 0;
    while((int)*ptr0 > (int)i) {
        float* ptr2 = (float*)(i * 8 + *(int*)(ptr0 + 2));
        float v15 = *ptr2;
        short v16 = (unsigned short)*(int*)(ptr2 + 1);
        float v17 = (unsigned int)v16 | ((unsigned int)(unsigned short)(*(int*)(ptr2 + 1) >>> 16) << 16);
        v0 = v15;
        fucompp(0.0, v0);
        fnstsw(v16);
        if(((v16 >>> 14) & 0x1) && !((v16 >>> 10) & 0x1)) {
            fucompp(0.0, v17);
            fnstsw(v16);
            if(((v16 >>> 10) & 0x1) || !((v16 >>> 14) & 0x1)) {
                goto loc_8050CA1;
            }
        }
        else {
        loc_8050CA1:
            int v18 = v14 * 16 + v12;
            int v19 = i >> 31;
            *(unsigned int*)(v18 + 8) = i;
            *(int*)(v18 + 12) = v19;
            int* ptr3 = (int*)(v14 * 16 + v12);
            int* ptr4 = (int*)(i * 8 + *(int*)(ptr0 + 2));
            int v20 = *(ptr4 + 1);
            *ptr3 = *ptr4;
            *(ptr3 + 1) = v20;
            ++v14;
        }
        ++i;
    }
    *param0 = v6;
    *(param0 + 1) = v10;
    *(param0 + 2) = v11;
    *(param0 + 3) = v12;
    *(param0 + 4) = v13;
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
    int* ptr0;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14 = v11;
    int v15 = v6;
    int v16 = v12;
    int v17 = *ptr0;
    int v18 = 1 << (v17 & 0x1f);
    int v19 = 0;
    int v20 = 0;
    →calloc(v18, 16);
    int v21 = v5;
    if(!v21) {
        quantum_error(2);
    }
    unsigned int* ptr1 = &v0;
    quantum_memman(v18 * 16);
    unsigned int v22 = 0;
    unsigned int v23 = 0;
    while(1) {
        unsigned int v24 = (unsigned int)(1 << (*ptr0 & 0x1f));
        unsigned int v25 = (unsigned int)(1 << (*ptr0 & 0x1f));
        unsigned int v26 = v24 >> 31;
        if(v26 <= v23 && (v26 < v23 || v25 <= v22)) {
            break;
        }
        else {
            int v27 = v22 * 16 + v21;
            unsigned int v28 = v23;
            *(unsigned int*)(v27 + 8) = v22;
            *(unsigned int*)(v27 + 12) = v28;
            *(long long*)(ptr1 + 3) = *(double*)&v15;
            unsigned int v29 = v23;
            *(ptr1 + 1) = v22;
            *(ptr1 + 2) = v29;
            *ptr1 = &v9;
            int v30 = v13;
            --ptr1;
            *ptr1 = &loc_8052394;
            /*BAD_CALL!*/ v30(*(int*)(ptr1 + 1), *(int*)(ptr1 + 2), *(int*)(ptr1 + 3), *(int*)(ptr1 + 4), *(int*)(ptr1 + 5));
            --ptr1;
            int v31 = v9;
            int v32 = v2;
            int v33 = v7;
            int v34 = v3;
            int v35 = v8;
            int* ptr2 = (int*)(v22 * 16 + v21);
            *(ptr1 + 1) = ptr0;
            *ptr1 = &v31;
            --ptr1;
            *ptr1 = &loc_80523D3;
            v1[v4] = /*BAD_CALL!*/ quantum_dot_product_noconj(*(int*)(ptr1 + 1), *(int*)(ptr1 + 2));
            *ptr2 = v5;
            *(ptr2 + 1) = v10;
            *ptr1 = &v31;
            --ptr1;
            *ptr1 = &loc_80523EB;
            /*BAD_CALL!*/ quantum_delete_qureg(*(int*)(ptr1 + 1));
            unsigned int v36 = v22;
            ++v22;
            v23 = (unsigned int)((unsigned int)(v36 >= 0xffffffff) + v23);
        }
    }
    *param0 = v17;
    *(param0 + 1) = v18;
    *(param0 + 2) = v19;
    *(param0 + 3) = v21;
    *(param0 + 4) = v20;
    return param0;
}

int quantum_measure(int param0, unsigned int param1, int param2, int param3) {
    int result;
    __SyntheticTypeUnknownF v0;
    unsigned int v1 = quantum_objcode_put(128);
    if(v1) {
        result = 0;
    }
    else {
        quantum_frand();
        double v2 = v0;
        unsigned int v3 = 0;
        while((int)v3 < (int)param1) {
            int* ptr0 = (int*)(v3 * 16 + param3);
            int v4 = *ptr0;
            int v5 = *ptr0;
            int v6 = /*BAD_CALL!*/ quantum_prob_inline4(v4, *(ptr0 + 1));
            v2 -= v0;
            v0 = v2;
            fucompp(0.0, v0);
            fnstsw((unsigned short)v6);
            if(!(((unsigned short)v6 >>> 8) & 0x1)) {
                return *(int*)(v3 * 16 + param3 + 8);
            }
            ++v3;
        }
        result = -1;
    }
    return result;
}

unsigned int quantum_memman(int param0) {
    mem.2105 += param0;
    if((int)mem.2105 > (int)max.2106) {
        max.2106 = mem.2105;
    }
    return mem.2105;
}

int* quantum_mmult(int* param0) {
    int v0;
    int v1;
    unsigned int v2;
    unsigned int v3;
    int v4;
    int v5;
    int v6;
    float v7;
    unsigned int v8;
    unsigned int v9;
    int v10;
    int v11 = v6;
    if(v2 != v3) {
        quantum_error(4);
    }
    unsigned int v12 = v8;
    unsigned int v13 = v9;
    quantum_new_matrix(&v0);
    for(unsigned int i = 0; (int)i < (int)v9; ++i) {
        for(unsigned int j = 0; (int)j < (int)v8; ++j) {
            for(unsigned int k = 0; (int)k < (int)v3; ++k) {
                int* ptr0 = (int*)((v5 * j + i) * 8 + v1);
                float* ptr1 = (float*)((v5 * j + i) * 8 + v1);
                float v14 = *ptr1;
                float v15 = *(ptr1 + 1);
                float* ptr2 = (float*)((j * v2 + k) * 8 + v10);
                float* ptr3 = (float*)((k * v9 + i) * 8 + v4);
                int v16 = __mulsc3(*ptr2, *(ptr2 + 1), *ptr3, *(ptr3 + 1));
                int v17 = v14 + v7;
                *ptr0 = v15 + v16;
                *(ptr0 + 1) = v14 + v7;
            }
        }
    }
    *param0 = v0;
    *(param0 + 1) = v5;
    *(param0 + 2) = v1;
    return param0;
}

unsigned int quantum_mu2char(int param0, int param1, int param2) {
    int v0 = param0;
    int v1 = param1;
    unsigned int v2 = 8;
    unsigned int i;
    for(i = 0; (int)v2 > (int)i; ++i) {
        char* ptr0 = (char*)(i + param2);
        int v3 = ~(i - v2) * 8;
        int v4 = (unsigned int)(((unsigned long long)v0 | ((unsigned long long)v1 << 32)) >>> (v3 & 0x1f));
        int v5 = v1 >>> (v3 & 0x1f);
        if(((unsigned char)v3 & 0x20)) {
            v4 = v5;
        }
        *ptr0 = (unsigned char)v4;
        int v6 = ~(i - v2) * 8;
        unsigned int v7 = (unsigned int)((1L << (v6 & 0x1f)) >>> 32L);
        unsigned int v8 = (unsigned int)(1 << (v6 & 0x1f));
        if(((unsigned char)v6 & 0x20)) {
            v7 = v8;
            v8 = 0;
        }
        v0 &= v8 - 1;
        v1 &= (unsigned int)(v8 >= 1) + v7 - 1;
    }
    return i;
}

int* quantum_new_density_op(int* param0) {
    int* ptr0;
    int v0;
    int* ptr1;
    int* ptr2;
    int v1 = v0;
    →calloc(v0, 4);
    int* ptr3 = ptr0;
    if(!ptr3) {
        quantum_error(2);
    }
    →calloc(v0, 20);
    int* ptr4 = ptr0;
    if(!ptr4) {
        quantum_error(2);
    }
    quantum_memman(v0 * 3 * 8);
    *ptr3 = *ptr1;
    int v2 = *(ptr2 + 4);
    int v3 = *(ptr2 + 2);
    int* ptr5 = ptr4;
    int* ptr6 = ptr2;
    *ptr5 = *ptr6;
    *(ptr5 + 1) = *(ptr6 + 1);
    *(ptr5 + 2) = *(ptr6 + 2);
    *(ptr5 + 3) = *(ptr6 + 3);
    *(ptr5 + 4) = *(ptr6 + 4);
    *(ptr2 + 1) = 0;
    *ptr2 = 0;
    *(ptr2 + 3) = 0;
    *(ptr2 + 4) = 0;
    for(unsigned int i = 1; (int)i < v0; ++i) {
        *(int*)(i * 4 + (int)ptr3) = *(int*)(i * 4 + (int)ptr1);
        int* ptr7 = (int*)(i * 20 + (int)ptr4);
        int* ptr8 = (int*)(i * 20 + (int)ptr2);
        *ptr7 = *ptr8;
        *(ptr7 + 1) = *(ptr8 + 1);
        *(ptr7 + 2) = *(ptr8 + 2);
        *(ptr7 + 3) = *(ptr8 + 3);
        *(ptr7 + 4) = *(ptr8 + 4);
        *((int*)(i * 20 + (int)ptr4) + 4) = v2;
        *((int*)(i * 20 + (int)ptr4) + 2) = v3;
        *((int*)(i * 20 + (int)ptr2) + 1) = 0;
        *(int*)(i * 20 + (int)ptr2) = 0;
        *((int*)(i * 20 + (int)ptr2) + 3) = 0;
        *((int*)(i * 20 + (int)ptr2) + 4) = 0;
    }
    *param0 = v1;
    *(unsigned int*)(param0 + 1) = ptr3;
    *(unsigned int*)(param0 + 2) = ptr4;
    return param0;
}

int* quantum_new_matrix(int* param0) {
    int v0;
    int v1;
    int v2;
    int v3 = v1;
    →calloc(v1 * v2, 8);
    int v4 = v0;
    if(!v4) {
        quantum_error(2);
    }
    quantum_memman(v1 * v2 * 8);
    *param0 = v2;
    *(param0 + 1) = v3;
    *(param0 + 2) = v4;
    return param0;
}

int* quantum_new_qureg(int* param0) {
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v1;
    int v5 = 1;
    int v6 = v1 + 2;
    →calloc(1, 16);
    unsigned int v7 = v0;
    if(!v7) {
        quantum_error(2);
    }
    quantum_memman(16);
    →calloc(1 << (v6 & 0x1f), 4);
    unsigned int v8 = v0;
    if(!v8) {
        quantum_error(2);
    }
    quantum_memman(4 << (v6 & 0x1f));
    unsigned int v9 = v7;
    int v10 = v2;
    *(int*)(v9 + 8) = v3;
    *(int*)(v9 + 12) = v10;
    unsigned int v11 = v7;
    *(int*)v11 = 0x3f800000;
    *(int*)(v11 + 4) = 0;
    →getenv("QUOBFILE");
    if(v0) {
        quantum_objcode_start();
        quantum_objcode_file(v0);
        atexit((void __cdecl (*_)())&quantum_objcode_exit);
    }
    quantum_objcode_put(0);
    *param0 = v4;
    *(param0 + 1) = v5;
    *(param0 + 2) = v6;
    *(unsigned int*)(param0 + 3) = v7;
    *(unsigned int*)(param0 + 4) = v8;
    return param0;
}

int* quantum_new_qureg_size(int* param0) {
    int v0;
    int v1;
    int v2;
    int v3 = v1;
    int v4 = 0;
    int v5 = 0;
    →calloc(v1, 16);
    int v6 = v0;
    if(!v6) {
        quantum_error(2);
    }
    quantum_memman(v1 * 16);
    *param0 = v2;
    *(param0 + 1) = v3;
    *(param0 + 2) = v4;
    *(param0 + 3) = v6;
    *(param0 + 4) = v5;
    return param0;
}

unsigned int quantum_objcode_exit() {
    quantum_objcode_write(0);
    return quantum_objcode_stop();
}

unsigned int quantum_objcode_file(unsigned int param0) {
    globalfile = param0;
    return param0;
}

unsigned int quantum_objcode_put(int param0) {
    int i;
    double v0;
    unsigned int v1;
    int v2;
    char v3;
    unsigned int result;
    int v4;
    char v5;
    char v6;
    char v7;
    char v8 = (unsigned char)param0;
    int v9 = *(int*)(__GS_BASE + (int)(int*)0x14);
    unsigned int v10 = 0;
    if(!opstatus) {
        v1 = 0;
    }
    else {
        double* ptr0 = &v7;
        char v11 = v8;
        unsigned int v12 = (unsigned int)v8;
        if((int)v12 <= 11) {
            if((int)v12 >= 7) {
                int* ptr1 = (int*)ptr0;
                double* ptr2 = (double*)(ptr1 + 1);
                int v13 = *ptr1;
                i = *ptr1;
                ptr0 = ptr2 + 1;
                v0 = *ptr2;
                quantum_int2char(v13, &v5);
                *(long long*)&v4 = v0;
                quantum_double2char(v4, v2, &v3);
            }
            else if(v12 == 2) {
                int* ptr3 = (int*)ptr0;
                ptr0 = (double*)(ptr3 + 1);
                i = *ptr3;
                quantum_int2char(i, &v5);
                int* ptr4 = (int*)(ptr3 + 1);
                ptr0 = (double*)(ptr4 + 1);
                i = *ptr4;
                quantum_int2char(i, &v3);
                int* ptr5 = (int*)(ptr4 + 1);
                ptr0 = (double*)(ptr5 + 1);
                quantum_int2char(*ptr5, &v6);
            }
            else if((int)v12 > 2) {
                goto loc_804E8A9;
            }
            else if(!v12) {
                double* ptr6 = ptr0;
                ptr0 = ptr6 + 1;
                int v14 = *(int*)((char*)ptr6 + 4);
                int v15 = *(int*)ptr6;
                int v16 = v14;
                quantum_mu2char(v15, v16, &v5);
                v10 = 9;
                goto loc_804E9D8;
            }
            else if(v12 == 1) {
                goto loc_804E7D8;
            }
            else {
                goto loc_804E9B8;
            }
            v10 = 13;
        }
        else if(v12 == 128) {
        loc_804E9A8:
            v10 = 1;
        }
        else if((int)v12 <= 128) {
            if(v12 == 13) {
                int* ptr7 = (int*)ptr0;
                ptr0 = (double*)(ptr7 + 1);
                i = *ptr7;
                quantum_int2char(i, &v5);
                int* ptr8 = (int*)(ptr7 + 1);
                ptr0 = (double*)(ptr8 + 1);
                i = *ptr8;
                quantum_int2char(i, &v3);
                double* ptr9 = (double*)(ptr8 + 1);
                ptr0 = ptr9 + 1;
                v0 = *ptr9;
                *(long long*)&v4 = v0;
                quantum_double2char(v4, v2, &v6);
                v10 = 17;
            }
            else if((int)v12 < 13) {
            loc_804E7D8:
                double* ptr10 = ptr0;
                ptr0 = (double*)((char*)ptr10 + 4);
                i = *(int*)ptr10;
                quantum_int2char(i, &v5);
                int* ptr11 = (int*)((char*)ptr10 + 4);
                ptr0 = (double*)(ptr11 + 1);
                quantum_int2char(*ptr11, &v3);
                v10 = 9;
            }
            else if(v12 == 14) {
                goto loc_804E8A9;
            }
            else {
                goto loc_804E9B8;
            }
        }
        else if((int)v12 <= 130) {
        loc_804E8A9:
            int* ptr12 = (int*)ptr0;
            ptr0 = (double*)(ptr12 + 1);
            quantum_int2char(*ptr12, &v5);
            v10 = 5;
        }
        else if(v12 == 0xff) {
            goto loc_804E9A8;
        }
        else {
        loc_804E9B8:
            quantum_error(0x10001);
        }
    loc_804E9D8:
        if((position + v10) >>> 16 > position >>> 16) {
            ++allocated;
            →realloc(objcode, (int)(allocated * 0x10000));
            objcode = result;
            if(!objcode) {
                quantum_error(2);
            }
            quantum_memman(0x10000);
        }
        for(i = 0; i < (int)v10; ++i) {
            *(char*)(position + objcode) = *(char*)((int)&v11 + i);
            ++position;
        }
        v1 = 1;
    }
    result = v1;
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v9)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int quantum_objcode_run(int param0, int* param1) {
    float v0;
    int v1;
    int v2;
    int v3;
    int v4;
    double v5;
    unsigned int v6;
    char v7;
    int v8;
    int result;
    int v9;
    int v10;
    __SyntheticTypeUnknownF v11;
    int v12;
    int v13;
    int v14;
    int v15;
    char v16;
    int v17 = v13;
    int v18 = param0;
    int* ptr0 = param1;
    int v19 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →fopen(v18, &gvar_80543CC);
    int v20 = result;
    if(!v20) {
        →fprintf(stderr, "quantum_objcode_run: Could not open %s: ");
        →perror(0);
    }
    else {
        int v21 = 0;
        while(1) {
            →feof(v20);
            if(result) {
                break;
            }
            else {
                int v22 = 0;
                do {
                    *(char*)(&v7 + v22) = 0;
                    ++v22;
                }
                while(v22 <= 79);
                →fgetc(v20);
                char v23 = v16;
                unsigned int v24 = (unsigned int)v23;
                if((int)v24 > 11) {
                    if(v24 == 128) {
                        int* ptr1 = ptr0;
                        int v25 = ptr1[0];
                        int v26 = ptr1[0];
                        unsigned int v27 = (unsigned int)ptr1[1];
                        v2 = ptr1[1];
                        int v28 = ptr1[2];
                        v1 = ptr1[2];
                        int v29 = ptr1[3];
                        v3 = ptr1[3];
                        int v30 = ptr1[4];
                        quantum_measure(v25, v27, v28, v29);
                        goto loc_804F2BB;
                    }
                    else if((int)v24 > 128) {
                        if((int)v24 <= 130) {
                        loc_804EECB:
                            int v31 = v20;
                            →fread(&v7, 4, 1, v31);
                            v22 = quantum_char2int(&v7);
                            unsigned int v32 = (unsigned int)v23;
                            if(v32 == 6) {
                                quantum_hadamard(v22, (int)ptr0);
                            }
                            else if((int)v32 <= 6) {
                                if(v32 == 4) {
                                    int* ptr2 = ptr0;
                                    int v33 = v22;
                                    quantum_sigma_y(v33, ptr2);
                                }
                                else if((int)v32 > 4) {
                                    int* ptr3 = ptr0;
                                    int v34 = v22;
                                    quantum_sigma_z(v34, ptr3);
                                }
                                else if(v32 == 3) {
                                    int* ptr4 = ptr0;
                                    int v35 = v22;
                                    quantum_sigma_x(v35, ptr4);
                                }
                            }
                            else if(v32 == 14) {
                                int* ptr5 = ptr0;
                                unsigned int v36 = (unsigned int)v22;
                                quantum_swaptheleads(v36, ptr5);
                            }
                            else if(v32 == 129) {
                                quantum_bmeasure(v22, (int)ptr0);
                            }
                            else if(v32 == 130) {
                                quantum_bmeasure_bitpreserve(v22, (int)ptr0);
                            }
                        }
                        else if(v24 != 0xff) {
                            →fprintf(stderr, "%i: Unknown opcode 0x(%X)!\n");
                            goto loc_804F2E0;
                        }
                        goto loc_804F2BB;
                    }
                    else if(v24 == 13) {
                        int v37 = v20;
                        →fread(&v7, 4, 1, v37);
                        v22 = quantum_char2int(&v7);
                        int v38 = v20;
                        →fread(&v7, 4, 1, v38);
                        v4 = quantum_char2int(&v7);
                        int v39 = v20;
                        →fread(&v7, 8, 1, v39);
                        quantum_char2double((double*)&v7);
                        v5 = v11;
                        v0 = v5;
                        v11 = v0;
                        int* ptr6 = ptr0;
                        int v40 = v4;
                        int v41 = v22;
                        quantum_cond_phase_kick(v41, v40, v11, ptr6);
                        goto loc_804F2BB;
                    }
                    else if((int)v24 < 13) {
                    loc_804ED50:
                        int v42 = v20;
                        →fread(&v7, 4, 1, v42);
                        v22 = quantum_char2int(&v7);
                        int v43 = v20;
                        →fread(&v7, 4, 1, v43);
                        v4 = quantum_char2int(&v7);
                        v6 = (unsigned int)v23;
                    }
                    else if(v24 == 14) {
                        goto loc_804EECB;
                    }
                    else {
                        →fprintf(stderr, "%i: Unknown opcode 0x(%X)!\n");
                        goto loc_804F2E0;
                    }
                    if(v6 == 1) {
                        int* ptr7 = ptr0;
                        int v44 = v4;
                        int v45 = v22;
                        quantum_cnot(v45, v44, ptr7);
                    }
                    else if(v6 == 12) {
                        int* ptr8 = ptr0;
                        unsigned int v46 = (unsigned int)v4;
                        unsigned int v47 = (unsigned int)v22;
                        quantum_cond_phase(v47, v46, ptr8);
                    }
                    goto loc_804F2BB;
                }
                else if((int)v24 >= 7) {
                    int v48 = v20;
                    →fread(&v7, 4, 1, v48);
                    v22 = quantum_char2int(&v7);
                    int v49 = v20;
                    →fread(&v7, 8, 1, v49);
                    quantum_char2double((double*)&v7);
                    v5 = v11;
                    unsigned int v50 = (unsigned int)v23 - 7;
                }
                else if(v24 == 2) {
                    int v51 = v20;
                    →fread(&v7, 4, 1, v51);
                    v22 = quantum_char2int(&v7);
                    int v52 = v20;
                    →fread(&v7, 4, 1, v52);
                    v4 = quantum_char2int(&v7);
                    int v53 = v20;
                    →fread(&v7, 4, 1, v53);
                    int v54 = quantum_char2int(&v7);
                    int* ptr9 = ptr0;
                    int v55 = v54;
                    int v56 = v4;
                    int v57 = v22;
                    quantum_toffoli(v57, v56, v55, ptr9);
                    goto loc_804F2BB;
                }
                else if((int)v24 > 2) {
                    goto loc_804EECB;
                }
                else if(!v24) {
                    int v58 = v20;
                    →fread(&v7, 8, 1, v58);
                    int v59 = quantum_char2mu(&v7);
                    int v60 = v10;
                    int* ptr10 = ptr0;
                    v3 = 12;
                    int v61 = v59;
                    int v62 = v60;
                    v2 = v61;
                    v1 = v62;
                    quantum_new_qureg(&v14);
                    ptr10[0] = v14;
                    ptr10[1] = v12;
                    ptr10[2] = v9;
                    ptr10[3] = v8;
                    ptr10[4] = v15;
                    goto loc_804F2BB;
                }
                else if(v24 == 1) {
                    goto loc_804ED50;
                }
                else {
                    →fprintf(stderr, "%i: Unknown opcode 0x(%X)!\n");
                    goto loc_804F2E0;
                }
                if((unsigned int)v23 - 7 <= 4) {
                    switch(v23) {
                        case 7: {
                            v0 = v5;
                            v11 = v0;
                            quantum_r_x(v22, v11, (int)ptr0);
                            break;
                        }
                        case 8: {
                            v0 = v5;
                            v11 = v0;
                            quantum_r_y(v22, v11, (int)ptr0);
                            break;
                        }
                        case 9: {
                            v0 = v5;
                            v11 = v0;
                            int* ptr11 = ptr0;
                            int v63 = v22;
                            quantum_r_z(v63, v11, ptr11);
                            break;
                        }
                        case 10: {
                            v0 = v5;
                            v11 = v0;
                            int* ptr12 = ptr0;
                            int v64 = v22;
                            quantum_phase_kick(v64, v11, ptr12);
                            break;
                        }
                        case 11: {
                            v0 = v5;
                            v11 = v0;
                            int* ptr13 = ptr0;
                            int v65 = v22;
                            quantum_phase_scale(v65, v11, ptr13);
                            break;
                        }
                        default: {
                            throw 0;
                        }
                    }
                }
            loc_804F2BB:
                ++v21;
            }
        }
        →fclose(v20);
    }
loc_804F2E0:
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v19;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

unsigned int quantum_objcode_start() {
    unsigned int v0;
    opstatus = 1;
    allocated = 1;
    →malloc(0x10000);
    objcode = v0;
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

int quantum_objcode_write(int param0) {
    int result;
    int v0;
    if(!opstatus) {
        →fwrite("Object code generation not active! Forgot to call quantum_objcode_start?\n", 1, 73, stderr);
        result = 1;
    }
    else {
        if(!param0) {
            param0 = globalfile;
        }
        →fopen(param0, &gvar_80543CA);
        int v1 = v0;
        if(!v1) {
            result = -1;
        }
        else {
            →fwrite(objcode, position, 1, v1);
            →fclose(v1);
            result = 0;
        }
    }
    return result;
}

unsigned int quantum_phase_kick(int param0, float param1, int* param2) {
    int v0;
    float v1;
    int v2;
    int v3 = v2;
    *(long long*)&v0 = param1;
    int v4 = param0;
    unsigned int result = quantum_objcode_put(10);
    if(!result) {
        int v5 = quantum_cexp(param1);
        float v6 = v1;
        for(unsigned int i = 0; param2[1] > (int)i; ++i) {
            int v7 = i * 16 + param2[3];
            int v8 = *(int*)(v7 + 12);
            int v9 = (unsigned int)(((unsigned long long)*(int*)(v7 + 8) | ((unsigned long long)v8 << 32)) >>> (param0 & 0x1f));
            int v10 = v8 >>> (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v9 = v10;
            }
            if(((unsigned char)v9 & 0x1)) {
                int* ptr0 = (int*)(i * 16 + param2[3]);
                float* ptr1 = (float*)(i * 16 + param2[3]);
                int v11 = __mulsc3(*ptr1, *(ptr1 + 1), (float)v5, v6);
                *ptr0 = v11;
                *(float*)(ptr0 + 1) = v1;
            }
        }
        result = quantum_decohere(param2);
    }
    return result;
}

unsigned int quantum_phase_scale(int param0, float param1, int* param2) {
    int v0;
    int v1;
    float v2;
    int v3 = v1;
    *(long long*)&v0 = param1;
    int v4 = param0;
    unsigned int result = quantum_objcode_put(11);
    if(!result) {
        int v5 = quantum_cexp(param1);
        float v6 = v2;
        for(unsigned int i = 0; param2[1] > (int)i; ++i) {
            int* ptr0 = (int*)(i * 16 + param2[3]);
            float* ptr1 = (float*)(i * 16 + param2[3]);
            int v7 = __mulsc3(*ptr1, *(ptr1 + 1), (float)v5, v6);
            *ptr0 = v7;
            *(float*)(ptr0 + 1) = v2;
        }
        result = quantum_decohere(param2);
    }
    return result;
}

int* quantum_print_density_matrix(int param0) {
    unsigned int v0;
    unsigned int v1;
    int v2;
    quantum_density_matrix(&v0);
    unsigned int v3 = v0;
    unsigned int v4 = v1;
    int v5 = v2;
    quantum_print_matrix(v0, v1, v2);
    return quantum_delete_matrix(&v3);
}

unsigned int quantum_print_expn(int param0, unsigned int param1, int param2, int param3) {
    int v0;
    int v1 = v0;
    for(unsigned int i = 0; (int)i < (int)param1; ++i) {
        int v2 = i * 16 + param3;
        unsigned int v3 = *(unsigned int*)(v2 + 12);
        unsigned int v4 = *(unsigned int*)(v2 + 8);
        unsigned int v5 = v3;
        unsigned int v6 = i << ((param0 / 2) & 0x1f);
        unsigned int v7 = v4 - v6;
        int v8 = v3 - ((v6 >> 31) + (unsigned int)(v6 > v4));
        unsigned int v9 = i;
        →printf("%i: %lli\n");
    }
    return param1;
}

unsigned int quantum_print_hash(int param0, int param1, int param2, int param3, int param4) {
    int v0;
    int v1 = v0;
    for(unsigned int i = 0; (int)(unsigned int)(1 << (param2 & 0x1f)) > (int)i; ++i) {
        if(i) {
            int v2 = param3 - (unsigned int)((1 - *(unsigned int*)(i * 4 + param4)) * 16);
            int v3 = *(int*)(v2 + 12);
            int v4 = *(unsigned int*)(i * 4 + param4) - 1;
            int v5 = *(int*)(v2 + 8);
            int v6 = v3;
            int v7 = v4;
            unsigned int v8 = i;
            →printf("%i: %i %llu\n");
        }
    }
    return (unsigned int)(1 << (param2 & 0x1f));
}

int quantum_print_matrix(unsigned int param0, unsigned int param1, int param2) {
    __SyntheticTypeUnknown v0;
    __SyntheticTypeUnknownF v1;
    __SyntheticTypeUnknownF v2;
    char v3;
    unsigned int v4;
    int result;
    unsigned int v5 = 0;
    do {
        v4 = (unsigned int)(1 << (v5 & 0x1f));
        ++v5;
    }
    while((int)v4 < (int)param0);
    --v5;
    for(unsigned int i = 0; (int)i < (int)param0; ++i) {
        for(unsigned int j = 0; (int)j < (int)param1; ++j) {
            int* ptr0 = (int*)((i * param1 + j) * 8 + param2);
            int v6 = *ptr0;
            int v7 = *(ptr0 + 1);
            v0[v3] = quantum_imag4();
            double v8 = v2;
            v6 = *(int*)((i * param1 + j) * 8 + param2);
            v0[v3] = quantum_real4();
            long long v9 = v2;
            *(long long*)&v7 = v1;
            →printf("%g %+gi ");
        }
        →putchar(10);
    }
    →putchar(10);
    return result;
}

int quantum_print_qureg(unsigned int param0, unsigned int param1, int param2, int param3) {
    __SyntheticTypeUnknown v0;
    int result;
    __SyntheticTypeUnknownF v1;
    char v2;
    int v3;
    __SyntheticTypeUnknownF v4;
    int v5 = v3;
    for(unsigned int i = 0; (int)i < (int)param1; ++i) {
        int* ptr0 = (int*)(i * 16 + param3);
        int v6 = *ptr0;
        int v7 = *ptr0;
        quantum_prob_inline5(v6, *(ptr0 + 1));
        double v8 = v1;
        int v9 = *(int*)(i * 16 + param3 + 8);
        int* ptr1 = (int*)(i * 16 + param3);
        v7 = *ptr1;
        int v10 = *(ptr1 + 1);
        v0[v2] = quantum_imag7();
        double v11 = v4;
        v7 = *(int*)(i * 16 + param3);
        v0[v2] = quantum_real7();
        long long v12 = v1;
        int v13 = v9;
        long long v14 = v4;
        *(long long*)&v10 = v1;
        →printf("% f %+fi|%lli> (%e) (|");
        for(unsigned int j = param0 - 1; j < 0x80000000; --j) {
            if((unsigned int)(((((j >> 31) >>> 30) + j) & 0x3) - ((j >> 31) >>> 30)) == 3) {
                →putchar(32);
            }
            int v15 = i * 16 + param3;
            int v16 = *(int*)(v15 + 12);
            int v17 = (unsigned int)(((unsigned long long)*(int*)(v15 + 8) | ((unsigned long long)v16 << 32)) >>> (j & 0x1f));
            int v18 = v16 >>> (j & 0x1f);
            if(((unsigned char)j & 0x20)) {
                v17 = v18;
            }
            v10 = v17 & 0x1;
            →printf(&gvar_8054468);
        }
        →puts(&gvar_805446B);
    }
    →putchar(10);
    return result;
}

int* quantum_print_timeop(int param0, int param1) {
    unsigned int v0;
    unsigned int v1;
    int v2;
    int v3;
    unsigned int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9 = v8;
    quantum_new_matrix(&v4);
    unsigned int v10 = v4;
    unsigned int v11 = v0;
    int v12 = v3;
    for(unsigned int i = 0; (int)(unsigned int)(1 << (param0 & 0x1f)) > (int)i; ++i) {
        int v13 = param0;
        unsigned int v14 = i;
        int v15 = i >> 31;
        quantum_new_qureg(&v5);
        int v16 = v5;
        unsigned int v17 = v1;
        int v18 = v6;
        int v19 = v2;
        int v20 = v7;
        param1(&v16);
        for(unsigned int j = 0; (int)v17 > (int)j; ++j) {
            int* ptr0 = (int*)((v11 * i + *(int*)(j * 16 + v19 + 8)) * 8 + v12);
            int* ptr1 = (int*)(j * 16 + v19);
            int v21 = *(ptr1 + 1);
            *ptr0 = *ptr1;
            *(ptr0 + 1) = v21;
        }
        quantum_delete_qureg(&v16);
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
    int result;
    v0[v1] = quantum_real();
    v0[v1] = quantum_imag();
    return result;
}

int quantum_prob_inline2(int param0, int param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    int result;
    v0[v1] = quantum_real2();
    v0[v1] = quantum_imag2();
    return result;
}

int quantum_prob_inline3(int param0, int param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    int result;
    v0[v1] = quantum_real3();
    v0[v1] = quantum_imag3();
    return result;
}

int quantum_prob_inline4(int param0, int param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    int result;
    v0[v1] = quantum_real5();
    v0[v1] = quantum_imag5();
    return result;
}

int quantum_prob_inline5(int param0, int param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    int result;
    v0[v1] = quantum_real7();
    v0[v1] = quantum_imag7();
    return result;
}

float quantum_purity(unsigned int* param0) {
    float v0;
    int v1;
    int v2;
    char v3;
    __SyntheticTypeUnknown v4;
    float v5;
    float v6;
    int v7;
    char v8;
    __SyntheticTypeUnknownF v9;
    int v10 = v7;
    float result = (float)0.0;
    unsigned int i;
    for(i = 0; (int)*param0 > (int)i; ++i) {
        result += *(float*)(i * 4 + *(int*)(param0 + 1)) * *(float*)(i * 4 + *(param0 + 1));
        v3 = 0;
    }
    for(i = 0; (int)*param0 > (int)i; ++i) {
        for(unsigned int j = 0; (int)j < (int)i; ++j) {
            v4[v8] = quantum_dot_product(i * 20 + *(int*)(param0 + 2), j * 20 + *(int*)(param0 + 2));
            float v11 = v6;
            float v12 = v5;
            for(unsigned int k = 0; (int)*(unsigned int*)(i * 20 + *(int*)(param0 + 2) + 4) > (int)k; ++k) {
                int* ptr0 = (int*)(j * 20 + *(int*)(param0 + 2));
                int v13 = k * 16 + *(int*)(i * 20 + *(int*)(param0 + 2) + 12);
                int v14 = *(int*)(v13 + 8);
                int v15 = *(int*)(v13 + 12);
                int v16 = *ptr0;
                int v17 = *ptr0;
                int v18 = *(ptr0 + 1);
                int v19 = *(ptr0 + 1);
                unsigned int v20 = *(unsigned int*)(ptr0 + 2);
                unsigned int v21 = *(unsigned int*)(ptr0 + 2);
                int v22 = *(ptr0 + 3);
                int v23 = *(ptr0 + 3);
                int v24 = quantum_get_state(v14, v15, v16, v18, v20, v22, *(ptr0 + 4));
                if(v24 >= 0) {
                    float v25 = *(float*)(i * 4 + *(int*)(param0 + 1)) * *(float*)(j * 4 + *(int*)(param0 + 1));
                    int v26 = __mulsc3(v25, 0.0, v11, v12);
                    float* ptr1 = (float*)(k * 16 + *(int*)(i * 20 + *(int*)(param0 + 2) + 12));
                    float v27 = (float)__mulsc3((float)v26, v5, *ptr1, *(ptr1 + 1));
                    int* ptr2 = (int*)(v24 * 16 + *(int*)(j * 20 + *(int*)(param0 + 2) + 12));
                    int v28 = *ptr2;
                    v2 = *ptr2;
                    int v29 = quantum_conj(v28, *(ptr2 + 1));
                    v1 = __mulsc3(v27, v5, (float)v29, v5);
                    v0 = v5;
                }
                else {
                    v1 = 0;
                    v0 = (float)0.0;
                }
                v2 = v1;
                float v30 = v0;
                v4[v8] = quantum_real2();
                result += v9 + v9;
                v3 = 0;
            }
        }
    }
    v4[v3 - 1] = result;
    return result;
}

unsigned int quantum_qec_counter(unsigned int param0, unsigned int param1, int* param2) {
    if((int)param0 > 0) {
        counter.2126 += param0;
    }
    else if(param0 >= 0x80000000) {
        counter.2126 = 0;
    }
    if((int)param1 > 0) {
        freq.2127 = param1;
    }
    if((int)counter.2126 >= (int)freq.2127) {
        counter.2126 = 0;
        quantum_qec_decode(type, width, param2);
        quantum_qec_encode(type, width, (int)param2);
    }
    return counter.2126;
}

int quantum_qec_decode(int param0, unsigned int param1, int* param2) {
    __SyntheticTypeUnknown v0;
    __SyntheticTypeUnknownF v1;
    char v2;
    v0[v2] = quantum_get_decoherence();
    float v3 = v1;
    quantum_set_decoherence(0.0);
    int v4 = param2[0];
    int v5 = 0x55555556;
    int v6 = v4 / 3;
    quantum_qec_set_status(0, 0);
    v4 = param2[0];
    v5 = 0x55555556;
    int i;
    for(i = v4 / 3 - 1; i >= 0; --i) {
        if(!i) {
            quantum_set_decoherence(v3);
        }
        if(i < (int)param1) {
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
        int v8 = quantum_bmeasure((int)((unsigned int)(v6 * 2) - i), (int)param2);
        if(v7 == 1 && v8 == 1 && i - 1 < (int)param1) {
            quantum_sigma_z(i - 1, param2);
        }
    }
    return i;
}

int quantum_qec_encode(int param0, unsigned int param1, int param2) {
    __SyntheticTypeUnknown v0;
    char v1;
    __SyntheticTypeUnknownF v2;
    v0[v1] = quantum_get_decoherence();
    float v3 = v2;
    quantum_set_decoherence(0.0);
    for(int i = 0; i < (int)*(unsigned int*)param2; ++i) {
        if((unsigned int)(*(int*)param2 - 1) == i) {
            quantum_set_decoherence(v2);
        }
        if(i < (int)param1) {
            quantum_hadamard(*(int*)param2 + i, param2);
            quantum_hadamard(*(int*)param2 * 2 + i, param2);
            quantum_cnot(*(int*)param2 + i, i, (int*)param2);
            quantum_cnot(*(int*)param2 * 2 + i, i, (int*)param2);
        }
        else {
            quantum_cnot(i, *(int*)param2 + i, (int*)param2);
            quantum_cnot(i, *(int*)param2 * 2 + i, (int*)param2);
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

unsigned int quantum_qft(unsigned int param0, int* param1) {
    unsigned int result = param0 - 1;
    for(unsigned int i = param0 - 1; i < 0x80000000; --i) {
        for(unsigned int j = param0 - 1; (int)j > (int)i; --j) {
            quantum_cond_phase(j, i, param1);
        }
        result = quantum_hadamard((int)i, (int)param1);
    }
    return result;
}

int quantum_qft_inv(unsigned int param0, int param1) {
    int i;
    for(i = 0; i < (int)param0; ++i) {
        quantum_hadamard(i, param1);
        for(unsigned int j = (unsigned int)(i + 1); (int)j < (int)param0; ++j) {
            quantum_cond_phase_inv(j, (unsigned int)i, (int*)param1);
        }
    }
    return i;
}

int* quantum_qureg2density_op(int* param0) {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = 0x3f800000;
    int v4 = v1;
    int* ptr0 = &v3;
    int v5 = 1;
    quantum_new_density_op(param0);
    return param0;
}

int* quantum_qureg2matrix(int* param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    unsigned int v4;
    int v5;
    int v6 = 1 << (v3 & 0x1f);
    int v7 = 1;
    quantum_new_matrix(&v0);
    for(unsigned int i = 0; (int)i < (int)v4; ++i) {
        int* ptr0 = (int*)(*(int*)(i * 16 + v5 + 8) * 8 + v1);
        int* ptr1 = (int*)(i * 16 + v5);
        int v8 = *(ptr1 + 1);
        *ptr0 = *ptr1;
        *(ptr0 + 1) = v8;
    }
    *param0 = v0;
    *(param0 + 1) = v2;
    *(param0 + 2) = v1;
    return param0;
}

unsigned int quantum_r_x(int param0, float param1, int param2) {
    unsigned int v0;
    int v1;
    int v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF v4;
    __SyntheticTypeUnknownF v5;
    int v6;
    int v7;
    unsigned int v8;
    float* ptr0;
    int v9;
    double v10;
    double v11;
    __SyntheticTypeUnknownF v12;
    __SyntheticTypeUnknownF v13;
    int v14 = v6;
    *(long long*)&v7 = param1;
    unsigned int result = quantum_objcode_put(7);
    if(!result) {
        quantum_new_matrix(&v8);
        unsigned int v15 = v8;
        unsigned int v16 = v0;
        float* ptr1 = ptr0;
        float* ptr2 = ptr0;
        *(long long*)&v9 = param1 / 2.0;
        →cos(v9, v1);
        float v17 = param1;
        ptr2[0] = v17;
        ptr2[1] = (float)0.0;
        int* ptr3 = (int*)(ptr1 + 2);
        *(long long*)&v9 = param1 / 2.0;
        →sin(v9, v1);
        v23[v24] = fchs(1.0);
        *(long long*)&v2 = v5;
        *(long long*)&v1 = v12;
        __muldc3(&v10);
        v17 = v11;
        float v18 = v10;
        *ptr3 = v17;
        *(float*)(ptr3 + 1) = v18;
        int* ptr4 = (int*)(ptr1 + 4);
        *(long long*)&v9 = param1 / 2.0;
        →sin(v9, v1);
        v23[v24] = fchs(1.0);
        long long v19 = v4;
        long long v20 = 0L;
        *(long long*)&v2 = v13;
        *(long long*)&v1 = v3;
        __muldc3(&v10);
        int v21 = v10;
        *ptr4 = v11;
        *(ptr4 + 1) = v21;
        float* ptr5 = ptr1 + 6;
        *(long long*)&v9 = param1 / 2.0;
        →cos(v9, v1);
        v17 = v3;
        float v22 = v3;
        *ptr5 = v3;
        *(int*)(ptr5 + 1) = 0;
        quantum_gate1(param0, v15, v16, ptr1, param2);
        result = (unsigned int)quantum_delete_matrix(&v15);
    }
    return result;
}

unsigned int quantum_r_y(int param0, float param1, int param2) {
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    unsigned int v4;
    float* ptr0;
    int v5;
    int v6 = v2;
    *(long long*)&v3 = param1;
    unsigned int result = quantum_objcode_put(8);
    if(!result) {
        quantum_new_matrix(&v4);
        unsigned int v7 = v4;
        unsigned int v8 = v0;
        float* ptr1 = ptr0;
        float* ptr2 = ptr0;
        *(long long*)&v5 = param1 / 2.0;
        →cos(v5, v1);
        ptr2[0] = param1;
        ptr2[1] = (float)0.0;
        int* ptr3 = (int*)(ptr1 + 2);
        *(long long*)&v5 = param1 / -2.0;
        →sin(v5, v1);
        *ptr3 = param1 / -2.0;
        *(ptr3 + 1) = 0;
        int* ptr4 = (int*)(ptr1 + 4);
        *(long long*)&v5 = param1 / 2.0;
        →sin(v5, v1);
        *ptr4 = param1 / 2.0;
        *(ptr4 + 1) = 0;
        int* ptr5 = (int*)(ptr1 + 6);
        *(long long*)&v5 = param1 / 2.0;
        →cos(v5, v1);
        float v9 = param1 / 2.0;
        int v10 = param1 / 2.0;
        *ptr5 = param1 / 2.0;
        *(ptr5 + 1) = 0;
        quantum_gate1(param0, v7, v8, ptr1, param2);
        result = (unsigned int)quantum_delete_matrix(&v7);
    }
    return result;
}

unsigned int quantum_r_z(int param0, float param1, int* param2) {
    int v0;
    float v1;
    int v2;
    int v3 = v2;
    *(long long*)&v0 = param1;
    int v4 = param0;
    unsigned int result = quantum_objcode_put(9);
    if(!result) {
        int v5 = quantum_cexp(param1 / 2.0);
        float v6 = v1;
        for(unsigned int i = 0; param2[1] > (int)i; ++i) {
            int v7 = i * 16 + param2[3];
            int v8 = *(int*)(v7 + 12);
            int v9 = (unsigned int)(((unsigned long long)*(int*)(v7 + 8) | ((unsigned long long)v8 << 32)) >>> (param0 & 0x1f));
            int v10 = v8 >>> (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v9 = v10;
            }
            if(((unsigned char)v9 & 0x1)) {
                int* ptr0 = (int*)(i * 16 + param2[3]);
                float* ptr1 = (float*)(i * 16 + param2[3]);
                int v11 = __mulsc3(*ptr1, *(ptr1 + 1), (float)v5, v6);
                *ptr0 = v11;
                *(float*)(ptr0 + 1) = v1;
            }
            else {
                int* ptr2 = (int*)(i * 16 + param2[3]);
                float* ptr3 = (float*)(i * 16 + param2[3]);
                int v12 = __divsc3(*ptr3, *(ptr3 + 1), (float)v5, v6);
                *ptr2 = v12;
                *(float*)(ptr2 + 1) = v1;
            }
        }
        result = quantum_decohere(param2);
    }
    return result;
}

float quantum_real() {
    char v0;
    return *&v0;
}

float quantum_real2() {
    char v0;
    return *&v0;
}

float quantum_real3() {
    char v0;
    return *&v0;
}

float quantum_real4() {
    char v0;
    return *&v0;
}

float quantum_real5() {
    char v0;
    return *&v0;
}

float quantum_real6() {
    char v0;
    return *&v0;
}

float quantum_real7() {
    char v0;
    return *&v0;
}

unsigned int quantum_reconstruct_hash(int param0) {
    int i;
    for(i = 0; i < (int)(unsigned int)(1 << (*(int*)(param0 + 8) & 0x1f)); ++i) {
        *(int*)(i * 4 + *(int*)(param0 + 16)) = 0;
    }
    i = 0;
    unsigned int j;
    for(j = *(unsigned int*)(param0 + 4); (int)j > i; j = *(unsigned int*)(param0 + 4)) {
        int v0 = i * 16 + *(int*)(param0 + 12);
        quantum_add_hash(*(int*)(v0 + 8), *(int*)(v0 + 12), i, param0);
        ++i;
    }
    return j;
}

unsigned int quantum_reconstruct_hash2(int param0) {
    int i;
    for(i = 0; i < (int)(unsigned int)(1 << (*(int*)(param0 + 8) & 0x1f)); ++i) {
        *(int*)(i * 4 + *(int*)(param0 + 16)) = 0;
    }
    i = 0;
    unsigned int j;
    for(j = *(unsigned int*)(param0 + 4); (int)j > i; j = *(unsigned int*)(param0 + 4)) {
        int v0 = i * 16 + *(int*)(param0 + 12);
        quantum_add_hash2(*(int*)(v0 + 8), *(int*)(v0 + 12), i, param0);
        ++i;
    }
    return j;
}

unsigned int quantum_reconstruct_hash3(int param0) {
    int i;
    for(i = 0; i < (int)(unsigned int)(1 << (*(int*)(param0 + 8) & 0x1f)); ++i) {
        *(int*)(i * 4 + *(int*)(param0 + 16)) = 0;
    }
    i = 0;
    unsigned int j;
    for(j = *(unsigned int*)(param0 + 4); (int)j > i; j = *(unsigned int*)(param0 + 4)) {
        int v0 = i * 16 + *(int*)(param0 + 12);
        quantum_add_hash3(*(int*)(v0 + 8), *(int*)(v0 + 12), i, param0);
        ++i;
    }
    return j;
}

unsigned int* quantum_reduced_density_op(int param0, unsigned int* param1) {
    __SyntheticTypeUnknown v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8 = v3;
    __SyntheticTypeUnknownF v9 = 0.0;
    double v10 = 0.0;
    →realloc(*(int*)(param1 + 1), *param1 * 8);
    *(int*)(param1 + 1) = v4;
    if(!*(int*)(param1 + 1)) {
        quantum_error(2);
    }
    →realloc(*(int*)(param1 + 2), *param1 * 40);
    *(int*)(param1 + 2) = v4;
    if(!*(int*)(param1 + 2)) {
        quantum_error(2);
    }
    quantum_memman(*param1 * 3 * 8);
    int v11 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
    int v12 = 1 << (param0 & 0x1f);
    if(((unsigned char)param0 & 0x20)) {
        v11 = v12;
        v12 = 0;
    }
    int v13 = v12;
    int v14 = v11;
    for(unsigned int i = 0; (int)*param1 > (int)i; ++i) {
        double v15 = *(float*)(i * 4 + *(int*)(param1 + 1));
        int* ptr0 = (int*)(i * 20 + *(int*)(param1 + 2));
        int v16 = *ptr0;
        int v17 = *(ptr0 + 1);
        int v18 = *(ptr0 + 2);
        int v19 = *(ptr0 + 3);
        int v20 = *(ptr0 + 4);
        v10 = 0.0;
        char v21 = 7;
        for(unsigned int j = 0; (int)*(unsigned int*)(i * 20 + *(int*)(param1 + 2) + 4) > (int)j; ++j) {
            int v22 = j * 16 + *(int*)(i * 20 + *(int*)(param1 + 2) + 12);
            if(!((*(int*)(v22 + 8) & v13) | (*(int*)(v22 + 12) & v14))) {
                int* ptr1 = (int*)(j * 16 + *(int*)(i * 20 + *(int*)(param1 + 2) + 12));
                int v23 = *ptr1;
                int v24 = *ptr1;
                quantum_prob_inline2(v23, *(ptr1 + 1));
                v9 += v10;
                v10 = v9;
                v21 = 0;
            }
        }
        int* ptr2 = (int*)(i * 4 + *(int*)(param1 + 1));
        v0[v21 - 1] = v15;
        v0[v21 - 1] *= v10;
        float v25 = v0[v21 - 1];
        *ptr2 = v0[v21 - 1];
        int* ptr3 = (int*)((*param1 + i) * 4 + *(int*)(param1 + 1));
        v0[v21 - 1] = 1.0;
        v0[v21 - 1] -= v10;
        v0[v21 - 1] *= v15;
        *ptr3 = v0[v21 - 1];
        int* ptr4 = (int*)(i * 20 + *(int*)(param1 + 2));
        int v26 = v16;
        int v27 = v17;
        int v28 = v18;
        int v29 = v19;
        int v30 = v20;
        int v31 = 0;
        int v32 = param0;
        quantum_state_collapse(&v7);
        *ptr4 = v7;
        *(ptr4 + 1) = v1;
        *(ptr4 + 2) = v5;
        *(ptr4 + 3) = v2;
        *(ptr4 + 4) = v6;
        int* ptr5 = (int*)((*param1 + i) * 20 + *(int*)(param1 + 2));
        v26 = v16;
        v27 = v17;
        v28 = v18;
        v29 = v19;
        v30 = v20;
        v31 = 1;
        v32 = param0;
        quantum_state_collapse(&v7);
        *ptr5 = v7;
        *(ptr5 + 1) = v1;
        *(ptr5 + 2) = v5;
        *(ptr5 + 3) = v2;
        *(ptr5 + 4) = v6;
        quantum_delete_qureg_hashpreserve(&v16);
    }
    unsigned int* result = param1;
    *result = *param1 * 2;
    return result;
}

int quantum_rk4(int param0, int param1, int param2, int param3, int param4, int param5) {
    int v0;
    __SyntheticTypeUnknown v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF v4;
    __SyntheticTypeUnknownF v5;
    char v6;
    int v7;
    double v8;
    int v9;
    __SyntheticTypeUnknownF v10;
    __SyntheticTypeUnknownF v11;
    unsigned int v12;
    int v13;
    __SyntheticTypeUnknownF v14;
    __SyntheticTypeUnknownF v15;
    int v16;
    double v17;
    int v18;
    __SyntheticTypeUnknownF v19;
    __SyntheticTypeUnknownF v20;
    int v21 = param1;
    int v22 = param2;
    int v23 = param3;
    int v24 = param4;
    double v25 = 0.0;
    int v26 = *(int*)(param0 + 16);
    *(int*)(param0 + 16) = 0;
    int v27 = *(int*)(param0 + 8);
    *(int*)(param0 + 8) = 0;
    *(long long*)&v7 = *(double*)&v21;
    quantum_matrix_qureg(&v16);
    int v28 = v16;
    unsigned int v29 = v12;
    int v30 = v9;
    int v31 = v0;
    int v32 = v18;
    v1[v6] = fchs(1.0);
    *(long long*)&v2 = v4;
    *(long long*)&v13 = v15;
    __muldc3(&v17);
    *(long long*)&v2 = v8;
    *(long long*)&v13 = v17;
    __divdc3(&v17);
    quantum_scalar_qureg(v8, v17, &v28);
    quantum_vectoradd(&v16);
    int v33 = v16;
    unsigned int v34 = v12;
    int v35 = v9;
    int v36 = v0;
    int v37 = v18;
    quantum_scalar_qureg(0.33333334, 0.0, &v28);
    quantum_vectoradd(&v16);
    int v38 = v16;
    unsigned int v39 = v12;
    int v40 = v9;
    int v41 = v0;
    int v42 = v18;
    quantum_delete_qureg(&v28);
    *(long long*)&v7 = *(double*)&v23 / 2.0 + *(double*)&v21;
    quantum_matrix_qureg(&v16);
    v28 = v16;
    v29 = v12;
    v30 = v9;
    v31 = v0;
    v32 = v18;
    quantum_delete_qureg(&v33);
    v1[v6] = fchs(1.0);
    *(long long*)&v2 = v5;
    *(long long*)&v13 = v19;
    __muldc3(&v17);
    *(long long*)&v2 = v8;
    *(long long*)&v13 = v17;
    __divdc3(&v17);
    quantum_scalar_qureg(v8, v17, &v28);
    quantum_vectoradd(&v16);
    v33 = v16;
    v34 = v12;
    v35 = v9;
    v36 = v0;
    v37 = v18;
    quantum_scalar_qureg(0.6666667, 0.0, &v28);
    quantum_vectoradd_inplace(&v38, &v28);
    quantum_delete_qureg(&v28);
    *(long long*)&v7 = *(double*)&v23 / 2.0 + *(double*)&v21;
    quantum_matrix_qureg(&v16);
    v28 = v16;
    v29 = v12;
    v30 = v9;
    v31 = v0;
    v32 = v18;
    quantum_delete_qureg(&v33);
    v1[v6] = fchs(1.0);
    *(long long*)&v2 = v3;
    *(long long*)&v13 = v10;
    __muldc3(&v17);
    quantum_scalar_qureg(v8, v17, &v28);
    quantum_vectoradd(&v16);
    v33 = v16;
    v34 = v12;
    v35 = v9;
    v36 = v0;
    v37 = v18;
    quantum_scalar_qureg(0.33333334, 0.0, &v28);
    quantum_vectoradd_inplace(&v38, &v28);
    quantum_delete_qureg(&v28);
    *(long long*)&v7 = *(double*)&v21 + *(double*)&v23;
    quantum_matrix_qureg(&v16);
    v28 = v16;
    v29 = v12;
    v30 = v9;
    v31 = v0;
    v32 = v18;
    quantum_delete_qureg(&v33);
    v1[v6] = fchs(1.0);
    *(long long*)&v2 = v14;
    *(long long*)&v13 = v20;
    __muldc3(&v17);
    long long v43 = 0L;
    long long v44 = 0x4018000000000000L;
    *(long long*)&v2 = v8;
    *(long long*)&v13 = v17;
    __divdc3(&v17);
    float v45 = v8;
    float v46 = v17;
    quantum_scalar_qureg(v8, v17, &v28);
    quantum_vectoradd_inplace(&v38, &v28);
    quantum_delete_qureg(&v28);
    quantum_delete_qureg(param0);
    for(unsigned int i = 0; (int)v39 > (int)i; ++i) {
        int* ptr0 = (int*)(i * 16 + v41);
        int v47 = *ptr0;
        int v48 = *ptr0;
        v1[v6] = quantum_prob(v47, *(ptr0 + 1));
        v25 += v11;
    }
    v42 = v26;
    v40 = v27;
    int v49 = param0;
    *(int*)v49 = v38;
    *(unsigned int*)(v49 + 4) = v39;
    *(int*)(v49 + 8) = v40;
    *(int*)(v49 + 12) = v41;
    int result = v42;
    *(int*)(v49 + 16) = v42;
    return result;
}

int quantum_rk4a(int* param0, int param1, int param2, double* param3, int param4, int param5, int param6) {
    double v0;
    int v1;
    __SyntheticTypeUnknown v2;
    int v3;
    int v4;
    __int128 v5;
    short v6;
    int v7;
    __SyntheticTypeUnknownF v8;
    char v9;
    int v10;
    int v11;
    char v12;
    __SyntheticTypeUnknownF v13;
    __SyntheticTypeUnknownF v14;
    int v15;
    __SyntheticTypeUnknownF v16;
    char v17;
    int v18;
    int v19;
    __SyntheticTypeUnknownF v20;
    double* ptr0;
    int v21;
    int v22;
    int v23;
    int v24;
    __SyntheticTypeUnknownF v25;
    short v26;
    int v27 = v15;
    int v28 = param1;
    int v29 = param2;
    int v30 = param4;
    int v31 = param5;
    int v32 = param0[4];
    param0[4] = 0;
    int v33 = param0[2];
    param0[2] = 0;
    quantum_copy_qureg(param0, &v21);
    quantum_copy_qureg(param0, &v17);
    do {
        v2[v9 - 1] = *param3;
        *(long long*)&v3 = v2[v9 - 1];
        v2[v9 - 1] = *(double*)&v28;
        *(long long*)&v18 = v2[v9 - 1];
        quantum_rk4((int)param0, v18, v10, v3, v22, param6);
        *(long long*)&v3 = *param3 / 2.0;
        *(long long*)&v18 = *(double*)&v28;
        quantum_rk4((int)&v17, v18, v10, v3, v22, param6);
        *(long long*)&v3 = *param3 / 2.0;
        *(long long*)&v18 = *(double*)&v28;
        quantum_rk4((int)&v17, v18, v10, v3, v22, param6);
        double v34 = 0.0;
        char v35 = 7;
        for(unsigned int i = 0; param0[1] > (int)i; ++i) {
            float* ptr1 = (float*)(i * 16 + param0[3]);
            float* ptr2 = (float*)(i * 16 + v23);
            v2[v35 - 1] = *ptr1;
            v2[v35 + 6] = *(ptr1 + 1);
            v2[v35 + 5] = *ptr2;
            v2[v35 + 4] = *(ptr2 + 1);
            v2[v35 - 1] -= v2[v35 + 4];
            v2[v35 + 6] -= v2[v35 + 5];
            int v36 = v2[v35 + 7];
            v1 = v2[v35 + 6];
            v18 = v36;
            v2[v12] = quantum_real6();
            float v37 = v14;
            float* ptr3 = (float*)(i * 16 + param0[3]);
            float* ptr4 = (float*)(i * 16 + v23);
            int v38 = *(ptr3 + 1) - *ptr4;
            v36 = *ptr3 - *(ptr4 + 1);
            v1 = v38;
            v18 = v36;
            v2[v12] = quantum_imag6();
            fucompp(v14, v5);
            fnstsw(v26);
            if(!((v7 >>> 8) & 0x1) && !((v7 >>> 14) & 0x1)) {
                float* ptr5 = (float*)(i * 16 + param0[3]);
                float* ptr6 = (float*)(i * 16 + v23);
                int v39 = *(ptr5 + 1) - *ptr6;
                v36 = *ptr5 - *(ptr6 + 1);
                v1 = v39;
                v18 = v36;
                v2[v12] = quantum_real6();
                float v40 = v16 + v16;
                float* ptr7 = (float*)(i * 16 + param0[3]);
                float* ptr8 = (float*)(i * 16 + v23);
                int v41 = *(ptr7 + 1) + *ptr8;
                v36 = *ptr7 + *(ptr8 + 1);
                v1 = v41;
                v18 = v36;
                v2[v12] = quantum_real6();
                v0 = (v16 + v16) / v20;
            }
            else {
                float* ptr9 = (float*)(i * 16 + param0[3]);
                float* ptr10 = (float*)(i * 16 + v23);
                int v42 = *(ptr9 + 1) - *ptr10;
                v36 = *ptr9 - *(ptr10 + 1);
                v1 = v42;
                v18 = v36;
                v2[v12] = quantum_imag6();
                float v43 = v25 + v25;
                float* ptr11 = (float*)(i * 16 + param0[3]);
                float* ptr12 = (float*)(i * 16 + v23);
                int v44 = *(ptr11 + 1) + *ptr12;
                v36 = *ptr11 + *(ptr12 + 1);
                v1 = v44;
                v18 = v36;
                v2[v12] = quantum_imag6();
                v0 = (v25 + v25) / v8;
            }
            fucompp(v34, v0);
            v35 = 0;
            fnstsw(v6);
            if(!((v7 >>> 8) & 0x1) && !((v7 >>> 14) & 0x1)) {
                v34 = v0;
                v35 = 0;
            }
        }
        v2[v35 - 1] = *param3;
        double v45 = v2[v35 - 1];
        v2[v35 - 1] = *param3;
        double v46 = v2[v35 - 1];
        v2[v35 - 1] = *(double*)&v30;
        v2[v35 - 1] /= v34;
        v2[v35 + 6] = 0.2;
        *(long long*)&v10 = v2[v35 + 6];
        *(long long*)&v1 = v2[v35 - 1];
        →pow(v1, v18, v10, v3);
        ptr0 = param3;
        *ptr0 = v13 * v46;
        fucompp(*(double*)&v30, v34);
        fnstsw((unsigned short)ptr0);
        if(!(int*)((int)(int*)((int)ptr0 >>> 8) & 0x1) && !(int*)((int)(int*)((int)ptr0 >>> 14) & 0x1)) {
            int v47 = param0[0];
            int v48 = param0[1];
            int v49 = param0[2];
            int v50 = param0[3];
            int v51 = param0[4];
            int* ptr13 = param0;
            ptr13[0] = v21;
            ptr13[1] = v19;
            ptr13[2] = v11;
            ptr13[3] = v4;
            ptr13[4] = v24;
            v21 = v47;
            v19 = v48;
            v11 = v49;
            v4 = v50;
            v24 = v51;
            →memcpy(v23, param0[3], param0[1] * 16);
            →memcpy(v4, param0[3], param0[1] * 16);
        }
        fucompp(*(double*)&v30, st7);
        v9 = 0;
        fnstsw((unsigned short)ptr0);
    }
    while(!(int*)((int)(int*)((int)ptr0 >>> 8) & 0x1) && !(int*)((int)(int*)((int)ptr0 >>> 14) & 0x1));
    param0[4] = v32;
    int result = v33;
    param0[2] = v33;
    return result;
}

unsigned int quantum_scalar_qureg(float param0, float param1, int param2) {
    int v0;
    int v1;
    int v2 = v0;
    unsigned int v3 = 0;
    unsigned int i;
    for(i = *(unsigned int*)(param2 + 4); (int)i > (int)v3; i = *(unsigned int*)(param2 + 4)) {
        int* ptr0 = (int*)(v3 * 16 + *(int*)(param2 + 12));
        float* ptr1 = (float*)(v3 * 16 + *(int*)(param2 + 12));
        int v4 = __mulsc3(*ptr1, *(ptr1 + 1), param0, param1);
        *ptr0 = v4;
        *(ptr0 + 1) = v1;
        ++v3;
    }
    return i;
}

short quantum_set_decoherence(float param0) {
    short result;
    fucompp(0.0, param0);
    fnstsw(result);
    if(((result >>> 10) & 0x1) || !((result >>> 14) & 0x1)) {
        quantum_status = 1;
        result = (unsigned short)param0;
        quantum_lambda = (unsigned int)result | ((unsigned int)(unsigned short)(param0 >>> 16) << 16);
    }
    else {
        quantum_status = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int quantum_sigma_x(int param0, int* param1) {
    unsigned int result;
    int v0;
    int v1;
    int v2 = v1;
    quantum_qec_get_status(&v0, NULL);
    if(v0) {
        result = (unsigned int)quantum_sigma_x_ft(param0, (int)param1);
    }
    else {
        int v3 = param0;
        result = quantum_objcode_put(3);
        if(!result) {
            for(unsigned int i = 0; param1[1] > (int)i; ++i) {
                int v4 = i * 16 + param1[3];
                int v5 = i * 16 + param1[3];
                int v6 = *(int*)(v5 + 8);
                int v7 = *(int*)(v5 + 12);
                int v8 = 1;
                int v9 = 0;
                int v10 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
                int v11 = 1 << (param0 & 0x1f);
                if(((unsigned char)param0 & 0x20)) {
                    v10 = v11;
                    v11 = 0;
                }
                int v12 = v4;
                *(int*)(v12 + 8) = v11 ^ v6;
                *(int*)(v12 + 12) = v10 ^ v7;
            }
            result = quantum_decohere(param1);
        }
    }
    return result;
}

unsigned int quantum_sigma_x_ft(int param0, int* param1) {
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

unsigned int quantum_sigma_y(int param0, int* param1) {
    int v0;
    int v1;
    int v2 = v1;
    int v3 = param0;
    unsigned int result = quantum_objcode_put(4);
    if(!result) {
        for(unsigned int i = 0; param1[1] > (int)i; ++i) {
            int v4 = i * 16 + param1[3];
            int v5 = i * 16 + param1[3];
            int v6 = *(int*)(v5 + 8);
            int v7 = *(int*)(v5 + 12);
            int v8 = 1;
            int v9 = 0;
            int v10 = (unsigned int)((1L << (param0 & 0x1f)) >>> 32L);
            int v11 = 1 << (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v10 = v11;
                v11 = 0;
            }
            int v12 = v4;
            *(int*)(v12 + 8) = v11 ^ v6;
            *(int*)(v12 + 12) = v10 ^ v7;
            int v13 = i * 16 + param1[3];
            int v14 = *(int*)(v13 + 12);
            int v15 = (unsigned int)(((unsigned long long)*(int*)(v13 + 8) | ((unsigned long long)v14 << 32)) >>> (param0 & 0x1f));
            int v16 = v14 >>> (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v15 = v16;
            }
            if(((unsigned char)v15 & 0x1)) {
                int* ptr0 = (int*)(i * 16 + param1[3]);
                float* ptr1 = (float*)(i * 16 + param1[3]);
                int v17 = __mulsc3(*ptr1, *(ptr1 + 1), 0.0, 1.0);
                *ptr0 = v17;
                *(ptr0 + 1) = v0;
            }
            else {
                int* ptr2 = (int*)(i * 16 + param1[3]);
                float* ptr3 = (float*)(i * 16 + param1[3]);
                int v18 = __mulsc3(*ptr3, *(ptr3 + 1), 0.0, -1.0);
                *ptr2 = v18;
                *(ptr2 + 1) = v0;
            }
        }
        result = quantum_decohere(param1);
    }
    return result;
}

unsigned int quantum_sigma_z(int param0, int* param1) {
    __SyntheticTypeUnknownF v0;
    __int128 v1;
    __SyntheticTypeUnknownF v2;
    int v3 = param0;
    unsigned int result = quantum_objcode_put(5);
    if(!result) {
        for(unsigned int i = 0; param1[1] > (int)i; ++i) {
            int v4 = i * 16 + param1[3];
            int v5 = *(int*)(v4 + 12);
            int v6 = (unsigned int)(((unsigned long long)*(int*)(v4 + 8) | ((unsigned long long)v5 << 32)) >>> (param0 & 0x1f));
            int v7 = v5 >>> (param0 & 0x1f);
            if(((unsigned char)param0 & 0x20)) {
                v6 = v7;
            }
            if(((unsigned char)v6 & 0x1)) {
                int* ptr0 = (int*)(i * 16 + param1[3]);
                v9[v10] = fchs(*((float*)(i * 16 + param1[3]) + 1));
                v9[v10] = fchs(v1);
                int v8 = v2;
                *ptr0 = v0;
                *(ptr0 + 1) = v2;
            }
        }
        result = quantum_decohere(param1);
    }
    return result;
}

int* quantum_state_collapse(int* param0) {
    int v0;
    __SyntheticTypeUnknown v1;
    int v2;
    unsigned int v3;
    __SyntheticTypeUnknownF v4;
    int v5;
    int v6;
    unsigned int v7;
    int v8;
    int v9;
    __SyntheticTypeUnknownF v10;
    int v11;
    unsigned int v12;
    unsigned int v13;
    int v14;
    int v15 = v6;
    int v16 = 0;
    __SyntheticTypeUnknownF v17 = 0.0;
    double v18 = 0.0;
    int v19 = 0;
    int v20 = 0;
    int v21 = 0;
    int v22 = 0;
    int v23 = (unsigned int)((1L << (v7 & 0x1f)) >>> 32L);
    int v24 = 1 << (v7 & 0x1f);
    if(((unsigned char)v7 & 0x20)) {
        v23 = v24;
        v24 = 0;
    }
    int v25 = v24;
    int v26 = v23;
    unsigned int i;
    for(i = 0; (int)i < (int)v3; ++i) {
        int v27 = i * 16 + v11;
        if(!((*(int*)(v27 + 8) & v25) | (*(int*)(v27 + 12) & v26)) || !v12) {
            int v28 = i * 16 + v11;
            if(!((*(int*)(v28 + 8) & v25) | (*(int*)(v28 + 12) & v26)) && !v12) {
                goto loc_8051711;
            }
        }
        else {
        loc_8051711:
            int* ptr0 = (int*)(i * 16 + v11);
            int v29 = *ptr0;
            v0 = *ptr0;
            quantum_prob_inline5(v29, *(ptr0 + 1));
            v17 += v18;
            v18 = v17;
            ++v16;
        }
    }
    int v30 = v13 - 1;
    int v31 = v16;
    →calloc(v16, 16);
    int v32 = v5;
    if(!v32) {
        quantum_error(2);
    }
    quantum_memman(v16 * 16);
    int v33 = v8;
    int v34 = v14;
    i = 0;
    int v35 = 0;
    while((int)i < (int)v3) {
        int v36 = i * 16 + v11;
        if(!((*(int*)(v36 + 8) & v25) | (*(int*)(v36 + 12) & v26)) || !v12) {
            int v37 = i * 16 + v11;
            if(!((*(int*)(v37 + 8) & v25) | (*(int*)(v37 + 12) & v26)) && !v12) {
                goto loc_80517FD;
            }
        }
        else {
        loc_80517FD:
            unsigned int v38 = 0;
            v21 = 0;
            v22 = 0;
            while((int)v38 < (int)v7) {
                int v39 = (unsigned int)((1L << (v38 & 0x1f)) >>> 32L);
                int v40 = 1 << (v38 & 0x1f);
                if(((unsigned char)v38 & 0x20)) {
                    v39 = v40;
                    v40 = 0;
                }
                int v41 = v21;
                v21 += v40;
                v22 += (unsigned int)__carry__(v40, v41) + v39;
                ++v38;
            }
            int v42 = i * 16 + v11;
            int v43 = *(int*)(v42 + 12);
            v21 &= *(int*)(v42 + 8);
            v22 &= v43;
            v38 = 63;
            v19 = 0;
            v20 = 0;
            while((int)v38 > (int)v7) {
                int v44 = (unsigned int)((1L << (v38 & 0x1f)) >>> 32L);
                int v45 = 1 << (v38 & 0x1f);
                if(((unsigned char)v38 & 0x20)) {
                    v44 = v45;
                    v45 = 0;
                }
                int v46 = v19;
                v19 += v45;
                v20 += (unsigned int)__carry__(v45, v46) + v44;
                --v38;
            }
            int v47 = i * 16 + v11;
            int v48 = *(int*)(v47 + 12);
            v19 &= *(int*)(v47 + 8);
            v20 &= v48;
            int v49 = v35 * 16 + v32;
            int v50 = (v20 >>> 1) | v22;
            *(int*)(v49 + 8) = (unsigned int)((unsigned long long)((v19 >>> 1) & 0x7FFFFFFF) | ((unsigned long long)v20 << 31) | ((unsigned long long)0 << 63)) | v21;
            *(int*)(v49 + 12) = v50;
            int* ptr1 = (int*)(v35 * 16 + v32);
            float* ptr2 = (float*)(i * 16 + v11);
            float v51 = *ptr2;
            float v52 = *(ptr2 + 1);
            v1[v58] = fsqrt(v18);
            double v53 = v10;
            fucomp(v53, v53);
            char v54 = 7;
            fnstsw((unsigned short)ptr2);
            if((int*)((int)(int*)((int)ptr2 >>> 10) & 0x1) || !(int*)((int)(int*)((int)ptr2 >>> 14) & 0x1)) {
                *(long long*)&v0 = v18;
                →sqrt(v0, v9);
                v53 = v4;
                v54 = 0;
            }
            v1[v54 - 1] = v53;
            float v55 = v1[v54 - 1];
            float v56 = v1[v54 - 1];
            int v57 = __divsc3(v51, v52, v56, 0.0);
            *ptr1 = v57;
            *(ptr1 + 1) = v2;
            ++v35;
        }
        ++i;
    }
    *param0 = v30;
    *(param0 + 1) = v31;
    *(param0 + 2) = v33;
    *(param0 + 3) = v32;
    *(param0 + 4) = v34;
    return param0;
}

int quantum_strerr(unsigned int param0) {
    int result;
    if(param0 == 3) {
        result = "matrix too large";
    }
    else if((int)param0 <= 3) {
        if(param0 == 1) {
            result = "failure";
        }
        else if((int)param0 > 1) {
            result = "malloc failed";
        }
        else if(param0) {
            goto loc_804A010;
        }
        else {
            result = "success";
        }
    }
    else if(param0 == 5) {
        result = "hash table full";
    }
    else if((int)param0 < 5) {
        result = "wrong matrix size";
    }
    else if(param0 == 0x10000) {
        result = "single-column matrix expected";
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

unsigned int quantum_swaptheleads(unsigned int param0, int* param1) {
    unsigned int i;
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    quantum_qec_get_status(&v1, NULL);
    if(v1) {
        v0 = 0;
        for(i = (unsigned int)v0; (int)i < (int)param0; i = (unsigned int)v0) {
            quantum_cnot(v0, v0 + param0, param1);
            quantum_cnot(v0 + param0, v0, param1);
            quantum_cnot(v0, v0 + param0, param1);
            ++v0;
        }
    }
    else {
        v0 = 0;
        for(i = (unsigned int)param1[1]; (int)i > v0; i = (unsigned int)param1[1]) {
            unsigned int v4 = param0;
            i = quantum_objcode_put(14);
            if(i) {
                return i;
            }
            int v5 = (((unsigned char)param0 & 0x20 ? 0: 1 << (param0 & 0x1f)) - 1) & *(int*)(v0 * 16 + param1[3] + 8);
            int v6 = 0;
            for(unsigned int j = 0; (int)j < (int)param0; ++j) {
                unsigned int v7 = j + param0;
                v6 += ((unsigned char)v7 & 0x20 ? 0: 1 << (v7 & 0x1f)) & *(int*)(v0 * 16 + param1[3] + 8);
            }
            int v8 = v0 * 16 + param1[3];
            unsigned int v9 = (unsigned int)(v6 + v5);
            unsigned int v10 = *(unsigned int*)(v8 + 8);
            unsigned int v11 = v10 - v9;
            int v12 = *(unsigned int*)(v8 + 12) - ((v9 >> 31) + (unsigned int)(v9 > v10));
            int v13 = v5 << (param0 & 0x1f);
            int v14 = v11 + v13;
            int v15 = v6 >> (param0 & 0x1f);
            int v16 = v14;
            v14 += v15;
            int v17 = (v13 >> 31) + (v15 >> 31) + ((unsigned int)__carry__(v11, v13) + (unsigned int)__carry__(v15, v16)) + v12;
            int v18 = v0 * 16 + param1[3];
            int v19 = v17;
            *(int*)(v18 + 8) = v14;
            *(int*)(v18 + 12) = v19;
            ++v0;
        }
    }
    return i;
}

unsigned int quantum_swaptheleads_omuln_controlled(int param0, unsigned int param1, int* param2) {
    unsigned int i;
    for(i = 0; (int)i < (int)param1; ++i) {
        quantum_toffoli(param0, (int)(i + param1), param1 * 2 + i + 2, param2);
        quantum_toffoli(param0, param1 * 2 + i + 2, (int)(i + param1), param2);
        quantum_toffoli(param0, (int)(i + param1), param1 * 2 + i + 2, param2);
    }
    return i;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int quantum_toffoli(int param0, int param1, int param2, int* param3) {
    unsigned int result;
    int v0;
    int v1;
    int v2 = v1;
    quantum_qec_get_status(&v0, NULL);
    if(v0) {
        result = (unsigned int)quantum_toffoli_ft(param0, param1, param2, (int)param3);
    }
    else {
        int v3 = param2;
        int v4 = param1;
        int v5 = param0;
        result = quantum_objcode_put(2);
        if(!result) {
            for(unsigned int i = 0; param3[1] > (int)i; ++i) {
                int v6 = i * 16 + param3[3];
                int v7 = *(int*)(v6 + 12);
                int v8 = (unsigned int)(((unsigned long long)*(int*)(v6 + 8) | ((unsigned long long)v7 << 32)) >>> (param0 & 0x1f));
                int v9 = v7 >>> (param0 & 0x1f);
                if(((unsigned char)param0 & 0x20)) {
                    v8 = v9;
                }
                if(((unsigned char)v8 & 0x1)) {
                    int v10 = i * 16 + param3[3];
                    int v11 = *(int*)(v10 + 12);
                    int v12 = (unsigned int)(((unsigned long long)*(int*)(v10 + 8) | ((unsigned long long)v11 << 32)) >>> (param1 & 0x1f));
                    int v13 = v11 >>> (param1 & 0x1f);
                    if(((unsigned char)param1 & 0x20)) {
                        v12 = v13;
                    }
                    if(((unsigned char)v12 & 0x1)) {
                        int v14 = i * 16 + param3[3];
                        int v15 = i * 16 + param3[3];
                        int v16 = *(int*)(v15 + 8);
                        int v17 = *(int*)(v15 + 12);
                        int v18 = 1;
                        int v19 = 0;
                        int v20 = (unsigned int)((1L << (param2 & 0x1f)) >>> 32L);
                        int v21 = 1 << (param2 & 0x1f);
                        if(((unsigned char)param2 & 0x20)) {
                            v20 = v21;
                            v21 = 0;
                        }
                        int v22 = v14;
                        *(int*)(v22 + 8) = v21 ^ v16;
                        *(int*)(v22 + 12) = v20 ^ v17;
                    }
                }
            }
            result = quantum_decohere(param3);
        }
    }
    return result;
}

unsigned int quantum_toffoli_ft(int param0, int param1, int param2, int* param3) {
    int v0;
    int v1 = v0;
    int v2 = (unsigned int)((1L << (param2 & 0x1f)) >>> 32L);
    int v3 = 1 << (param2 & 0x1f);
    if(((unsigned char)param2 & 0x20)) {
        v2 = v3;
        v3 = 0;
    }
    int v4 = width + param2;
    int v5 = (unsigned int)((1L << (v4 & 0x1f)) >>> 32L);
    int v6 = 1 << (v4 & 0x1f);
    if(((unsigned char)v4 & 0x20)) {
        v5 = v6;
        v6 = 0;
    }
    int v7 = v6 + v3;
    int v8 = (unsigned int)__carry__(v6, v3) + v5 + v2;
    int v9 = width * 2 + param2;
    int v10 = (unsigned int)((1L << (v9 & 0x1f)) >>> 32L);
    int v11 = 1 << (v9 & 0x1f);
    if(((unsigned char)v9 & 0x20)) {
        v10 = v11;
        v11 = 0;
    }
    int v12 = v11 + v7;
    int v13 = (unsigned int)__carry__(v11, v7) + v10 + v8;
    for(unsigned int i = 0; param3[1] > (int)i; ++i) {
        unsigned int v14 = 0;
        unsigned int v15 = 0;
        int v16 = i * 16 + param3[3];
        int v17 = *(int*)(v16 + 12);
        int v18 = (unsigned int)(((unsigned long long)*(int*)(v16 + 8) | ((unsigned long long)v17 << 32)) >>> (param0 & 0x1f));
        int v19 = v17 >>> (param0 & 0x1f);
        if(((unsigned char)param0 & 0x20)) {
            v18 = v19;
        }
        if(((unsigned char)v18 & 0x1)) {
            v14 = 1;
        }
        int v20 = i * 16 + param3[3];
        int v21 = width + param0;
        int v22 = *(int*)(v20 + 12);
        int v23 = (unsigned int)(((unsigned long long)*(int*)(v20 + 8) | ((unsigned long long)v22 << 32)) >>> (v21 & 0x1f));
        int v24 = v22 >>> (v21 & 0x1f);
        if(((unsigned char)v21 & 0x20)) {
            v23 = v24;
        }
        if(((unsigned char)v23 & 0x1)) {
            v14 ^= 1;
        }
        int v25 = i * 16 + param3[3];
        int v26 = width * 2 + param0;
        int v27 = *(int*)(v25 + 12);
        int v28 = (unsigned int)(((unsigned long long)*(int*)(v25 + 8) | ((unsigned long long)v27 << 32)) >>> (v26 & 0x1f));
        int v29 = v27 >>> (v26 & 0x1f);
        if(((unsigned char)v26 & 0x20)) {
            v28 = v29;
        }
        if(((unsigned char)v28 & 0x1)) {
            v14 ^= 1;
        }
        int v30 = i * 16 + param3[3];
        int v31 = *(int*)(v30 + 12);
        int v32 = (unsigned int)(((unsigned long long)*(int*)(v30 + 8) | ((unsigned long long)v31 << 32)) >>> (param1 & 0x1f));
        int v33 = v31 >>> (param1 & 0x1f);
        if(((unsigned char)param1 & 0x20)) {
            v32 = v33;
        }
        if(((unsigned char)v32 & 0x1)) {
            v15 = 1;
        }
        int v34 = i * 16 + param3[3];
        int v35 = width + param1;
        int v36 = *(int*)(v34 + 12);
        int v37 = (unsigned int)(((unsigned long long)*(int*)(v34 + 8) | ((unsigned long long)v36 << 32)) >>> (v35 & 0x1f));
        int v38 = v36 >>> (v35 & 0x1f);
        if(((unsigned char)v35 & 0x20)) {
            v37 = v38;
        }
        if(((unsigned char)v37 & 0x1)) {
            v15 ^= 1;
        }
        int v39 = i * 16 + param3[3];
        int v40 = width * 2 + param1;
        int v41 = *(int*)(v39 + 12);
        int v42 = (unsigned int)(((unsigned long long)*(int*)(v39 + 8) | ((unsigned long long)v41 << 32)) >>> (v40 & 0x1f));
        int v43 = v41 >>> (v40 & 0x1f);
        if(((unsigned char)v40 & 0x20)) {
            v42 = v43;
        }
        if(((unsigned char)v42 & 0x1)) {
            v15 ^= 1;
        }
        if(v14 == 1 && v15 == 1) {
            int v44 = i * 16 + param3[3];
            int v45 = i * 16 + param3[3];
            int v46 = *(int*)(v45 + 12) ^ v13;
            *(int*)(v44 + 8) = *(int*)(v45 + 8) ^ v12;
            *(int*)(v44 + 12) = v46;
        }
    }
    quantum_decohere(param3);
    return quantum_qec_counter(1, 0, param3);
}

unsigned int quantum_unbounded_toffoli(unsigned int param0, int* param1) {
    int v0;
    char v1;
    int v2;
    int v3 = v2;
    →malloc((int)(param0 * 4));
    int v4 = v0;
    if(!v4) {
        quantum_error(2);
    }
    quantum_memman((int)(param0 * 4));
    int* ptr0 = &v1;
    unsigned int i;
    for(i = 0; (int)i < (int)param0; ++i) {
        int* ptr1 = ptr0;
        ptr0 = ptr1 + 1;
        *(int*)(i * 4 + v4) = *ptr1;
    }
    int* ptr2 = ptr0;
    ptr0 = ptr2 + 1;
    int v5 = *ptr2;
    for(i = 0; param1[1] > (int)i; ++i) {
        unsigned int v6 = 0;
        while((int)v6 < (int)param0) {
            int v7 = i * 16 + param1[3];
            int v8 = *(int*)(v6 * 4 + v4);
            int v9 = *(int*)(v7 + 12);
            int v10 = (unsigned int)(((unsigned long long)*(int*)(v7 + 8) | ((unsigned long long)v9 << 32)) >>> (v8 & 0x1f));
            int v11 = v9 >>> (v8 & 0x1f);
            if(((unsigned char)v8 & 0x20)) {
                v10 = v11;
            }
            if(!((unsigned char)v10 & 0x1)) {
                break;
            }
            else {
                ++v6;
            }
        }
        if(v6 == param0) {
            int v12 = i * 16 + param1[3];
            int v13 = i * 16 + param1[3];
            int v14 = *(int*)(v13 + 8);
            int v15 = *(int*)(v13 + 12);
            int v16 = 1;
            int v17 = 0;
            int v18 = (unsigned int)((1L << (v5 & 0x1f)) >>> 32L);
            int v19 = 1 << (v5 & 0x1f);
            if(((unsigned char)v5 & 0x20)) {
                v18 = v19;
                v19 = 0;
            }
            int v20 = v12;
            *(int*)(v20 + 8) = v19 ^ v14;
            *(int*)(v20 + 12) = v18 ^ v15;
        }
    }
    →free(v4);
    quantum_memman(0 - param0 * 4);
    return quantum_decohere(param1);
}

int* quantum_vectoradd(int* param0) {
    int v0;
    unsigned int v1;
    int v2;
    int v3;
    unsigned int i;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int* ptr0;
    int v11 = v8;
    int v12 = 0;
    quantum_copy_qureg(ptr0, &v4);
    if(ptr0[2] || *(int*)(v9 + 8)) {
        quantum_reconstruct_hash3((int)ptr0);
        quantum_copy_qureg(ptr0, &v4);
        for(i = 0; (int)*(unsigned int*)(v9 + 4) > (int)i; ++i) {
            int v13 = i * 16 + *(int*)(v9 + 12);
            int v14 = *(int*)(v13 + 8);
            int v15 = *(int*)(v13 + 12);
            int v16 = ptr0[0];
            v3 = ptr0[0];
            int v17 = ptr0[1];
            v2 = ptr0[1];
            unsigned int v18 = (unsigned int)ptr0[2];
            v1 = (unsigned int)ptr0[2];
            int v19 = ptr0[3];
            v0 = ptr0[3];
            int v20 = quantum_get_state3(v14, v15, v16, v17, v18, v19, ptr0[4]);
            if(v20 == -1) {
                ++v12;
            }
        }
    }
    int v21 = v21 + v12;
    →realloc(v10, v21 * 16);
    v10 = v7;
    if(!v10) {
        quantum_error(2);
    }
    quantum_memman(v12 * 16);
    int v22 = ptr0[1];
    for(i = 0; (int)*(unsigned int*)(v9 + 4) > (int)i; ++i) {
        int v23 = i * 16 + *(int*)(v9 + 12);
        int v24 = *(int*)(v23 + 8);
        int v25 = *(int*)(v23 + 12);
        int v26 = ptr0[0];
        v3 = ptr0[0];
        int v27 = ptr0[1];
        v2 = ptr0[1];
        unsigned int v28 = (unsigned int)ptr0[2];
        v1 = (unsigned int)ptr0[2];
        int v29 = ptr0[3];
        v0 = ptr0[3];
        int v30 = quantum_get_state3(v24, v25, v26, v27, v28, v29, ptr0[4]);
        if(v30 >= 0) {
            int* ptr1 = (int*)(v30 * 16 + v10);
            unsigned int* ptr2 = (unsigned int*)(v30 * 16 + v10);
            float* ptr3 = (float*)(i * 16 + *(int*)(v9 + 12));
            int v31 = *(float*)(ptr2 + 1) + *ptr3;
            int v32 = (float)(int*)((int)*ptr2 + *(ptr3 + 1));
            int v33 = (float)(int*)((int)*ptr2 + *(ptr3 + 1));
            *ptr1 = v31;
            *(ptr1 + 1) = v33;
        }
        else {
            int v34 = v22 * 16 + v10;
            int v35 = i * 16 + *(int*)(v9 + 12);
            int v36 = *(int*)(v35 + 12);
            *(int*)(v34 + 8) = *(int*)(v35 + 8);
            *(int*)(v34 + 12) = v36;
            int* ptr4 = (int*)(v22 * 16 + v10);
            int* ptr5 = (int*)(i * 16 + *(int*)(v9 + 12));
            int v37 = *(ptr5 + 1);
            *ptr4 = *ptr5;
            *(ptr4 + 1) = v37;
            ++v22;
        }
    }
    *param0 = v4;
    *(param0 + 1) = v21;
    *(param0 + 2) = v5;
    *(param0 + 3) = v10;
    *(param0 + 4) = v6;
    return param0;
}

int quantum_vectoradd_inplace(int param0, int param1) {
    int v0;
    unsigned int v1;
    int v2;
    int v3;
    unsigned int i;
    int v4;
    int v5;
    int v6 = v5;
    int v7 = 0;
    if(*(int*)(param0 + 8) || *(int*)(param1 + 8)) {
        quantum_reconstruct_hash3(param0);
        for(i = 0; (int)*(unsigned int*)(param1 + 4) > (int)i; ++i) {
            int v8 = i * 16 + *(int*)(param1 + 12);
            int v9 = *(int*)(v8 + 8);
            int v10 = *(int*)(v8 + 12);
            int v11 = *(int*)param0;
            v3 = *(int*)param0;
            int v12 = *(int*)(param0 + 4);
            v2 = *(int*)(param0 + 4);
            unsigned int v13 = *(unsigned int*)(param0 + 8);
            v1 = *(unsigned int*)(param0 + 8);
            int v14 = *(int*)(param0 + 12);
            v0 = *(int*)(param0 + 12);
            int v15 = quantum_get_state3(v9, v10, v11, v12, v13, v14, *(int*)(param0 + 16));
            if(v15 == -1) {
                ++v7;
            }
        }
    }
    →realloc(*(int*)(param0 + 12), (*(int*)(param0 + 4) + v7) * 16);
    *(int*)(param0 + 12) = v4;
    if(!*(int*)(param0 + 12)) {
        quantum_error(2);
    }
    quantum_memman(v7 * 16);
    int v16 = *(int*)(param0 + 4);
    for(i = 0; (int)*(unsigned int*)(param1 + 4) > (int)i; ++i) {
        int v17 = i * 16 + *(int*)(param1 + 12);
        int v18 = *(int*)(v17 + 8);
        int v19 = *(int*)(v17 + 12);
        int v20 = *(int*)param0;
        v3 = *(int*)param0;
        int v21 = *(int*)(param0 + 4);
        v2 = *(int*)(param0 + 4);
        unsigned int v22 = *(unsigned int*)(param0 + 8);
        v1 = *(unsigned int*)(param0 + 8);
        int v23 = *(int*)(param0 + 12);
        v0 = *(int*)(param0 + 12);
        int v24 = quantum_get_state3(v18, v19, v20, v21, v22, v23, *(int*)(param0 + 16));
        if(v24 >= 0) {
            int* ptr0 = (int*)(v24 * 16 + *(int*)(param0 + 12));
            unsigned int* ptr1 = (unsigned int*)(v24 * 16 + *(int*)(param0 + 12));
            float* ptr2 = (float*)(i * 16 + *(int*)(param1 + 12));
            int v25 = *(float*)(ptr1 + 1) + *ptr2;
            int v26 = (float)(int*)((int)*ptr1 + *(ptr2 + 1));
            int v27 = (float)(int*)((int)*ptr1 + *(ptr2 + 1));
            *ptr0 = v25;
            *(ptr0 + 1) = v27;
        }
        else {
            int v28 = v16 * 16 + *(int*)(param0 + 12);
            int v29 = i * 16 + *(int*)(param1 + 12);
            int v30 = *(int*)(v29 + 12);
            *(int*)(v28 + 8) = *(int*)(v29 + 8);
            *(int*)(v28 + 12) = v30;
            int* ptr3 = (int*)(v16 * 16 + *(int*)(param0 + 12));
            int* ptr4 = (int*)(i * 16 + *(int*)(param1 + 12));
            int v31 = *(ptr4 + 1);
            *ptr3 = *ptr4;
            *(ptr3 + 1) = v31;
            ++v16;
        }
    }
    int result = param0;
    *(int*)(result + 4) = *(int*)(param0 + 4) + v7;
    return result;
}

int quantum_walsh(unsigned int param0, int param1) {
    int i;
    for(i = 0; i < (int)param0; ++i) {
        quantum_hadamard(i, param1);
    }
    return i;
}

int sub_804881A() {
    return gvar_8055FFC();
}

unsigned int test_sum(int param0, int param1, int* param2) {
    unsigned int result;
    int v0;
    int v1 = v0;
    int v2 = (unsigned int)(((unsigned long long)param0 | ((unsigned long long)(param0 >> 31) << 32)) >>> ((param1 - 1) & 0x1f));
    int v3 = (param0 >> 31) >>> ((param1 - 1) & 0x1f);
    if((((unsigned char)param1 + 0xff) & 0x20)) {
        v2 = v3;
    }
    if(((unsigned char)v2 & 0x1)) {
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
        if(((unsigned char)(param0 >> (i & 0x1f)) & 0x1)) {
            quantum_toffoli(i + 1, i + param1, i, param2);
            quantum_sigma_x(i + param1, param2);
            quantum_toffoli(i + 1, i + param1, 0, param2);
        }
        else {
            quantum_sigma_x(i + param1, param2);
            quantum_toffoli(i + 1, i + param1, i, param2);
        }
    }
    if(((unsigned char)param0 & 0x1)) {
        quantum_sigma_x(param1, param2);
        quantum_toffoli(param1, 1, 0, param2);
    }
    quantum_toffoli(param1 * 2 + 1, 0, param1 * 2, param2);
    if(((unsigned char)param0 & 0x1)) {
        quantum_toffoli(param1, 1, 0, param2);
        quantum_sigma_x(param1, param2);
    }
    for(i = 1; i <= param1 - 2; ++i) {
        if(((unsigned char)(param0 >> (i & 0x1f)) & 0x1)) {
            quantum_toffoli(i + 1, i + param1, 0, param2);
            quantum_sigma_x(i + param1, param2);
            quantum_toffoli(i + 1, i + param1, i, param2);
        }
        else {
            quantum_toffoli(i + 1, i + param1, i, param2);
            quantum_sigma_x(i + param1, param2);
        }
    }
    if(((unsigned char)(param0 >> ((param1 - 1) & 0x1f)) & 0x1)) {
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
