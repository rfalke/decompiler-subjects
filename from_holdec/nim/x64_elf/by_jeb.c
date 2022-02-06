
// Stale decompilation - Refresh this view to re-decompile this code
long Marker_tyRef_HMIVdYjdZYWskTmTQVo5BQ(long param0, long param1, long param2, long param3, long param4, long param5) {
    unsigned long* ptr0;
    long v0;
    long v1;
    unsigned long v2;
    long result;
    long v3;
    long v4 = v3;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 8L), (long)(unsigned char)param1, param2, param3, param4, param5);
    long v5 = *(long*)(param0 + 24L);
    if(!v5) {
    loc_405D58:
        long v6 = *(long*)(param0 + 32L);
        if(v6) {
            ptr0 = (unsigned long*)(v6 - 16L);
            if((unsigned char)param1 == 1) {
            loc_405EC0:
                v0 = gvar_60F040;
            loc_405CBC:
                unsigned long v7 = gvar_60F048;
                unsigned long v8 = gvar_60F050;
                if((long)v7 <= v0) {
                    gvar_60F048 = (unsigned long)((long)(v7 * 3L) / 2L);
                    long v9 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)(v7 * 3L) / 2L * 8L + 16L, v7 * 3L, param3, param4, param5);
                    *(long*)(v9 + 8L) = 1L;
                    v8 = (unsigned long)(v9 + 16L);
                    →memcpy();
                    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, gvar_60F050 - 16L);
                    gvar_60F050 = v8;
                    v0 = gvar_60F040;
                }
                *(unsigned long*)(v0 * 8L + v8) = ptr0;
                ++gvar_60F040;
                doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 48L), (long)(unsigned char)param1, v0, v1, param4, param5);
                return result;
            }
            else if(!(unsigned char)param1) {
                markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)ptr0);
                doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 48L), (long)(unsigned char)param1, v0, v1, param4, param5);
                return result;
            }
            else if((unsigned char)param1 == 2) {
            loc_405DD0:
                v2 = *ptr0 - 8L;
                *ptr0 = *ptr0 - 8L;
            }
            else if((unsigned char)param1 == 3) {
                goto loc_405EC0;
            }
            else {
                doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 48L), (long)(unsigned char)param1, v0, v1, param4, param5);
                return result;
            }
            if(v2 <= 7L) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, (long)ptr0);
            }
        }
    }
    else if((unsigned char)param1 == 1) {
        unsigned long v10 = gvar_60F048;
        if((long)gvar_60F040 >= (long)v10) {
            gvar_60F048 = (unsigned long)((long)(v10 * 3L) / 2L);
            long v11 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)(v10 * 3L) / 2L * 8L + 16L, v10 * 3L, param3, param4, param5);
            *(long*)(v11 + 8L) = 1L;
            →memcpy();
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, gvar_60F050 - 16L);
            gvar_60F050 = (unsigned long)(v11 + 16L);
        }
        *(long*)(gvar_60F040 * 8L + gvar_60F050) = v5 - 16L;
    loc_405CA0:
        v0 = (long)(gvar_60F040 + 1L);
        gvar_60F040 = (long)(gvar_60F040 + 1L);
        long v12 = *(long*)(param0 + 32L);
        ptr0 = (unsigned long*)(v12 - 16L);
        if(v12) {
            goto loc_405CBC;
        }
    }
    else if(!(unsigned char)param1) {
        markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, v5 - 16L);
        long v13 = *(long*)(param0 + 32L);
        ptr0 = (unsigned long*)(v13 - 16L);
        if(v13) {
            markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)ptr0);
        }
    }
    else if((unsigned char)param1 == 2) {
        v1 = *(long*)(v5 - 16L);
        v0 = v1 - 8L;
        *(long*)(v5 - 16L) = v1 - 8L;
        if((unsigned long)v0 <= 7L) {
            addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, v5 - 16L);
        }
        long v14 = *(long*)(param0 + 32L);
        ptr0 = (unsigned long*)(v14 - 16L);
        if(v14) {
            goto loc_405DD0;
        }
    }
    else if((unsigned char)param1 != 3) {
        goto loc_405D58;
    }
    else {
        unsigned long v15 = gvar_60F048;
        unsigned long v16 = gvar_60F040;
        unsigned long v17 = gvar_60F050;
        if((long)v16 >= (long)v15) {
            gvar_60F048 = (unsigned long)((long)(v15 * 3L) / 2L);
            long v18 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)(v15 * 3L) / 2L * 8L + 16L, v15 * 3L, param3, param4, param5);
            *(long*)(v18 + 8L) = 1L;
            v17 = (unsigned long)(v18 + 16L);
            →memcpy();
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, gvar_60F050 - 16L);
            gvar_60F050 = v17;
            v16 = gvar_60F040;
        }
        *(long*)(v16 * 8L + v17) = v5 - 16L;
        goto loc_405CA0;
    }
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 48L), (long)(unsigned char)param1, v0, v1, param4, param5);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long Marker_tyRef_LEclZrWX2FQAodlapxGITw(long param0, unsigned char param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long v2;
    unsigned long* ptr0;
    unsigned long v3;
    long v4;
    long result;
    long v5;
    long v6;
    long v7;
    long v8 = v7;
    long v9 = v6;
    long v10 = (unsigned long)param1 | ((unsigned long)v5 << 8);
    long v11 = *(long*)(param0 + 8L);
    if(!v11) {
    loc_40587B:
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), (long)param1, param2, param3, param4, param5);
        long v12 = *(long*)(param0 + 32L);
        if(v12) {
            ptr0 = (unsigned long*)(v12 - 16L);
            if((unsigned char)v10 == 1) {
            loc_40598C:
                v4 = gvar_60F048;
                unsigned long v13 = gvar_60F040;
                unsigned long v14 = gvar_60F050;
                if((long)v13 < v4) {
                    *(unsigned long*)(v13 * 8L + v14) = ptr0;
                }
                else {
                    gvar_60F048 = (unsigned long)(v4 * 3L / 2L);
                    long v15 = /*BAD_CALL!*/ rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v4 * 3L / 2L * 8L + 16L, v4 * 3L, param3, param4, param5);
                    *(long*)(v15 + 8L) = 1L;
                    →memcpy();
                    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, gvar_60F050 - 16L);
                    unsigned long v16 = gvar_60F040;
                    gvar_60F050 = (unsigned long)(v15 + 16L);
                    *(unsigned long*)(v16 * 8L + v15 + 16L) = ptr0;
                }
                ++gvar_60F040;
                doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 48L), (long)param1, v4, param3, param4, param5);
                return result;
            }
            else if(!(unsigned char)v10) {
                markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)ptr0);
                doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 48L), (long)param1, v4, param3, param4, param5);
                return result;
            }
            else if((unsigned char)v10 == 2) {
            loc_405A02:
                v3 = *ptr0 - 8L;
                *ptr0 = *ptr0 - 8L;
            }
            else if((unsigned char)v10 == 3) {
                goto loc_40598C;
            }
            else {
                doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 48L), (long)param1, v4, param3, param4, param5);
                return result;
            }
            if(v3 <= 7L) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, (long)ptr0);
            }
        }
    }
    else if(param1 == 1) {
        unsigned long v17 = gvar_60F048;
        if((long)gvar_60F040 >= (long)v17) {
            gvar_60F048 = (unsigned long)((long)(v17 * 3L) / 2L);
            long v18 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)(v17 * 3L) / 2L * 8L + 16L, v17 * 3L, param3, param4, param5);
            *(long*)(v18 + 8L) = 1L;
            →memcpy();
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, gvar_60F050 - 16L);
            gvar_60F050 = (unsigned long)(v18 + 16L);
        }
        v2 = gvar_60F040;
        v1 = 1L;
        *(long*)(v2 * 8L + gvar_60F050) = v11 - 16L;
        ++gvar_60F040;
        v0 = *(long*)(param0 + 24L);
    loc_405976:
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(v0, v1, v2, param3, param4, param5);
        long v19 = *(long*)(param0 + 32L);
        ptr0 = (unsigned long*)(v19 - 16L);
        if(v19) {
            goto loc_40598C;
        }
    }
    else if(!param1) {
        markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, v11 - 16L);
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), 0L, param2, param3, param4, param5);
        long v20 = *(long*)(param0 + 32L);
        ptr0 = (unsigned long*)(v20 - 16L);
        if(v20) {
            markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)ptr0);
        }
    }
    else if(param1 == 2) {
        long v21 = *(long*)(v11 - 16L);
        *(long*)(v11 - 16L) = v21 - 8L;
        if((unsigned long)(v21 - 8L) <= 7L) {
            addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, v11 - 16L);
        }
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), 2L, v21 - 8L, v21, param4, param5);
        long v22 = *(long*)(param0 + 32L);
        ptr0 = (unsigned long*)(v22 - 16L);
        if(v22) {
            goto loc_405A02;
        }
    }
    else if(param1 != 3) {
        goto loc_40587B;
    }
    else {
        v2 = gvar_60F048;
        unsigned long v23 = gvar_60F040;
        unsigned long v24 = gvar_60F050;
        if((long)v23 >= v2) {
            gvar_60F048 = (unsigned long)(v2 * 3L / 2L);
            long v25 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v2 * 3L / 2L * 8L + 16L, v2 * 3L, param3, param4, param5);
            *(long*)(v25 + 8L) = 1L;
            v24 = (unsigned long)(v25 + 16L);
            →memcpy();
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, gvar_60F050 - 16L);
            gvar_60F050 = v24;
            v23 = gvar_60F040;
        }
        *(long*)(v23 * 8L + v24) = v11 - 16L;
        v1 = 3L;
        ++gvar_60F040;
        v0 = *(long*)(param0 + 24L);
        goto loc_405976;
    }
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 48L), (long)param1, v4, param3, param4, param5);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long Marker_tyRef_vU9aO9cTqOMn6CBzhV8rX7Sw(long param0, unsigned char param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    unsigned long* ptr0;
    unsigned long result;
    long v2;
    long v3;
    long v4 = v3;
    long v5 = (unsigned long)param1 | ((unsigned long)v2 << 8);
    long v6 = *(long*)(param0 + 8L);
    if(!v6) {
    loc_405F1B:
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), (long)param1, param2, param3, param4, param5);
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 32L), (long)param1, param2, param3, param4, param5);
        long v7 = *(long*)(param0 + 48L);
        if(v7) {
            ptr0 = (unsigned long*)(v7 - 16L);
            if((unsigned char)v5 == 1) {
            loc_40603A:
                param2 = gvar_60F048;
                result = gvar_60F040;
                unsigned long v8 = gvar_60F050;
                if((long)result < param2) {
                    *(unsigned long*)(result * 8L + v8) = ptr0;
                }
                else {
                    gvar_60F048 = (unsigned long)(param2 * 3L / 2L);
                    long v9 = /*BAD_CALL!*/ rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, param2 * 3L / 2L * 8L + 16L, param2 * 3L, param3, param4, param5);
                    *(long*)(v9 + 8L) = 1L;
                    →memcpy();
                    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, gvar_60F050 - 16L);
                    result = gvar_60F040;
                    gvar_60F050 = (unsigned long)(v9 + 16L);
                    *(unsigned long*)(result * 8L + v9 + 16L) = ptr0;
                }
                ++gvar_60F040;
                return result;
            }
            else if(!(unsigned char)v5) {
                return (unsigned long)markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)ptr0);
            }
            else if((unsigned char)v5 == 2) {
            loc_4060C0:
                result = *ptr0 - 8L;
                *ptr0 = *ptr0 - 8L;
            }
            else if((unsigned char)v5 == 3) {
                goto loc_40603A;
            }
            else {
                return result;
            }
            if(result <= 7L) {
                return (unsigned long)addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, (long)ptr0);
            }
        }
    }
    else if(param1 == 1) {
        unsigned long v10 = gvar_60F048;
        if((long)gvar_60F040 >= (long)v10) {
            gvar_60F048 = (unsigned long)((long)(v10 * 3L) / 2L);
            long v11 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)(v10 * 3L) / 2L * 8L + 16L, v10 * 3L, param3, param4, param5);
            *(long*)(v11 + 8L) = 1L;
            →memcpy();
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, gvar_60F050 - 16L);
            gvar_60F050 = (unsigned long)(v11 + 16L);
        }
        long v12 = gvar_60F040;
        *(long*)(v12 * 8L + gvar_60F050) = v6 - 16L;
        ++gvar_60F040;
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), 1L, v12, param3, param4, param5);
        v1 = *(long*)(param0 + 32L);
        v0 = 1L;
    loc_406024:
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(v1, v0, param2, param3, param4, param5);
        result = *(unsigned long*)(param0 + 48L);
        ptr0 = (unsigned long*)(result - 16L);
        if(result) {
            goto loc_40603A;
        }
    }
    else if(!param1) {
        markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, v6 - 16L);
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), 0L, param2, param3, param4, param5);
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 32L), 0L, param2, param3, param4, param5);
        result = *(unsigned long*)(param0 + 48L);
        ptr0 = (unsigned long*)(result - 16L);
        if(result) {
            return (unsigned long)markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)ptr0);
        }
    }
    else if(param1 == 2) {
        long v13 = *(long*)(v6 - 16L);
        *(long*)(v6 - 16L) = v13 - 8L;
        if((unsigned long)(v13 - 8L) <= 7L) {
            addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, v6 - 16L);
        }
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), 2L, v13 - 8L, v13, param4, param5);
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 32L), 2L, param2, param3, param4, param5);
        result = *(unsigned long*)(param0 + 48L);
        ptr0 = (unsigned long*)(result - 16L);
        if(result) {
            goto loc_4060C0;
        }
    }
    else if(param1 != 3) {
        goto loc_405F1B;
    }
    else {
        long v14 = gvar_60F048;
        unsigned long v15 = gvar_60F040;
        unsigned long v16 = gvar_60F050;
        if((long)v15 >= v14) {
            gvar_60F048 = (unsigned long)(v14 * 3L / 2L);
            long v17 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v14 * 3L / 2L * 8L + 16L, v14 * 3L, param3, param4, param5);
            *(long*)(v17 + 8L) = 1L;
            v16 = (unsigned long)(v17 + 16L);
            →memcpy();
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, gvar_60F050 - 16L);
            gvar_60F050 = v16;
            v15 = gvar_60F040;
        }
        *(long*)(v15 * 8L + v16) = v6 - 16L;
        ++gvar_60F040;
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), 3L, v14, param3, param4, param5);
        v1 = *(long*)(param0 + 32L);
        v0 = 3L;
        goto loc_406024;
    }
    return result;
}

void Marker_tySequence_uB9b75OUPRENsBAu4AnoePA() {
}

long NimMain() {
    systemDatInit000();
    nimGC_setStackBottom();
    →systemInit000();
    nimGC_setStackBottom();
    return →NimMainModule();
}

long NimMainModule() {
    long v0;
    long v1 = v0;
    /*NO_RETURN*/ nimRegisterGlobalMarker();
}

long PreMain() {
    systemDatInit000();
    nimGC_setStackBottom();
    return →systemInit000();
}

// Stale decompilation - Refresh this view to re-decompile this code
long TM_2lQWYPc4hWuvSK7bVeWxSA_4() {
    long result;
    nimGCvisit((long)name_6AZmjR50AehluhCwumgXmw, 0L);
    return result;
}

void TM_Q5wkpxktOdTGvlSRo9bzt9aw_17() {
    unsigned long v0 = currException_9bVPeDJlYTi9bQApZpfH8wjg;
    char v1 = v0 ? 0: 1;
    char v2 = v0 >= 0x8000000000000000L;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    jump v1 ? &sub_405820: &sub_40580C;
}

long addChunkToMatrix_v9bekLOkesgfrZC4aumfLXw(long param0, long param1) {
    long v0;
    long v1 = *(long*)(param1 + 8L);
    long v2 = (unsigned long)(unsigned int)v1;
    if((unsigned int)v1 <= 0xffff) {
        v0 = 0L;
        if((unsigned int)v1 > 0xff) {
            v0 = 8L;
            v2 = (unsigned long)((unsigned int)v1 >>> 8);
        }
    }
    else if((unsigned int)v1 <= 0xffffff) {
        v2 = (unsigned long)((unsigned int)v2 >>> 16);
        v0 = 16L;
    }
    else {
        v0 = 24L;
        v2 = (unsigned long)((unsigned int)v1 >>> 24);
    }
    long v3 = (long)*(unsigned char*)((long)&fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ + v2);
    *(long*)(param1 + 24L) = 0L;
    long v4 = v3 + v0;
    long v5 = (v1 >>> ((unsigned long)((unsigned int)v4 - 5) & 0x3fL)) - 32L;
    long v6 = ((v4 - 6L) * 32L + v5) * 8L + param0;
    long v7 = *(long*)(v6 + 4216L);
    *(long*)(param1 + 16L) = *(long*)(v6 + 4216L);
    if(v7) {
        *(long*)(v7 + 24L) = param1;
    }
    *(long*)(v6 + 4216L) = param1;
    *(int*)(v4 * 4L + param0 + 0xffcL) = (unsigned int)(1L << ((unsigned long)((unsigned int)v5 & 0x1f) & 0x3fL)) | *(int*)(v4 * 4L + param0 + 0xffcL);
    *(int*)(param0 + 0x1010L) = (unsigned int)(1L << ((unsigned long)(((unsigned int)v4 - 6) & 0x1f) & 0x3fL)) | *(int*)(param0 + 0x1010L);
    return 1L << ((unsigned long)(((unsigned int)v4 - 6) & 0x1f) & 0x3fL);
}

// Stale decompilation - Refresh this view to re-decompile this code
long alloc0_1iQ1Xo9cXsxq509b5gmDHLoQ_2(long param0, size_t __n) {
    long result;
    long v0 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(param0, (long)(__n + 16L));
    *(long*)(v0 + 8L) = 1L;
    →memset((void*)(v0 + 16L), 0L, __n);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long alloc0_sVm4rDImKK2ZDdylByayiA_2(size_t __n) {
    long result;
    long v0 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)(__n + 16L));
    *(long*)(v0 + 8L) = 1L;
    →memset((void*)(v0 + 16L), 0L, __n);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long allocAvlNode_neSuioWH6NDTp8E9cNgBmjg(long param0, long param1, long param2) {
    long v0;
    long v1 = v0;
    long result = *(long*)(param0 + 0x30c0L);
    long v2 = param2;
    if(result) {
        *(long*)(param0 + 0x30c0L) = *(long*)result;
    }
    else {
        result = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 40L);
    }
    __int128 v3 = (unsigned __int128)param1 | ((unsigned __int128)v2 << 64);
    v2 = param0 + 12504L;
    *(__int128*)(result + 16L) = v3;
    __int128 v4 = (unsigned __int128)v2 | ((unsigned __int128)v2 << 64);
    if(!*(long*)(param0 + 12504L)) {
        *(__int128*)(param0 + 12504L) = v4;
    }
    *(__int128*)result = v4;
    *(long*)(result + 32L) = 1L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long alloc_1iQ1Xo9cXsxq509b5gmDHLoQ(long param0, long param1) {
    long v0 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(param0, param1 + 16L);
    *(long*)(v0 + 8L) = 1L;
    return v0 + 16L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long alloc_sVm4rDImKK2ZDdylByayiA(long param0) {
    long v0 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, param0 + 16L);
    *(long*)(v0 + 8L) = 1L;
    return v0 + 16L;
}

long cellSetGet_X4WTfs0wkld8wp8XcE9b8BA(long param0, unsigned long param1) {
    long v0 = *(long*)(param0 + 8L);
    long v1 = *(long*)(param0 + 24L);
    long v2 = v0 & param1;
    long result = *(long*)(v2 * 8L + v1);
    if(result) {
        if(*(long*)(result + 8L) == param1) {
            sub_405178();
            return result;
        }
        do {
            v2 = (v2 * 5L + 1L) & v0;
            result = *(long*)(v2 * 8L + v1);
        }
        while(result && *(long*)(result + 8L) == param1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* cellSetPut_mFUFZ7eVLRT9bMaHzrsxFrQ(long param0, long* param1) {
    long* ptr0;
    long* ptr1;
    long v0;
    long v1 = *(long*)(param0 + 8L);
    long v2 = *(long*)(param0 + 24L);
    long v3 = (long)((long)param1 & v1);
    long v4 = v3 * 8L;
    unsigned long* ptr2 = (unsigned long*)(v2 + v4);
    long* result = *ptr2;
    if(result) {
        v0 = v3;
        if(*(result + 1) != param1) {
            do {
                v0 = (v0 * 5L + 1L) & v1;
                result = *(unsigned long*)(v0 * 8L + v2);
                if(!result) {
                    goto loc_404D03;
                }
            }
            while(*(result + 1) == param1);
        }
    }
    else {
    loc_404D03:
        long v5 = *(long*)param0;
        long v6 = v1 + 1L;
        long* ptr3 = param1;
        if(v5 * 3L <= (long)(unsigned long)(v6 * 2L)) {
            v6 -= v5;
            if(v6 <= 3L) {
                goto loc_404E13;
            }
        }
        else {
        loc_404E13:
            cellSetEnlarge_ZCqaZEiX9aUtDCRoknrJ9bpQ(param0, v5 * 3L, v6, v3, v1, v2);
            v1 = *(long*)(param0 + 8L);
            v2 = *(long*)(param0 + 24L);
            v5 = *(long*)param0;
            v3 = (long)((long)ptr3 & v1);
            v4 = v3 * 8L;
            ptr2 = (unsigned long*)(v2 + v4);
        }
        *(long*)param0 = v5 + 1L;
        if(*ptr2) {
            do {
                v3 = (v3 * 5L + 1L) & v1;
                v4 = v3 * 8L;
            }
            while(*(long*)(v3 * 8L + v2));
        }
        unsigned long v7 = gvar_60F0D0;
        if(v7) {
            ptr1 = *(unsigned long*)(v7 + 32L);
            if(ptr1) {
                *(long*)(v7 + 32L) = *ptr1;
                ptr0 = ptr1;
            }
            else {
                long v8 = *(long*)(v7 + 48L);
                ptr0 = (long*)(v7 + v8 + 56L);
                ptr1 = (long*)(v7 + v8 + 56L);
                *(long*)(v7 + 48L) = v8 + 96L;
            }
            param1 = (long*)(*(long*)(v7 + 40L) - 96L);
            *(unsigned long*)(v7 + 40L) = (long*)(*(long*)(v7 + 40L) - 96L);
        }
        else {
            v7 = (unsigned long)getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x1000L, v6);
            unsigned __int128 v9 = gvar_40AB90;
            *(long*)(v7 + 32L) = 0L;
            *(unsigned __int128*)(v7 + 40L) = v9;
            *(__int128*)(v7 + 16L) = 0x0X;
            *(long*)(v7 + 8L) = 96L;
            unsigned long v10 = gvar_60F0D0;
            *(unsigned long*)(v7 + 16L) = gvar_60F0D0;
            if(v10) {
                *(unsigned long*)(v10 + 24L) = v7;
            }
            ptr1 = (long*)(v7 + 56L);
            gvar_60F0D0 = v7;
            param1 = *(unsigned long*)(v7 + 40L);
            ptr0 = ptr1;
        }
        if((long)param1 <= 95L) {
            param1 = *(unsigned long*)(v7 + 16L);
            if(gvar_60F0D0 != v7) {
                *(unsigned long*)(*(long*)(v7 + 24L) + 16L) = param1;
                param1 = *(unsigned long*)(v7 + 16L);
                if(param1) {
                    *(param1 + 3) = *(long*)(v7 + 24L);
                }
            }
            else {
                gvar_60F0D0 = param1;
                if(param1) {
                    *(param1 + 3) = 0L;
                }
            }
            *(__int128*)(v7 + 16L) = 0x0X;
        }
        result = ptr0 + 2;
        gvar_6118F8 += 96L;
        *(ptr1 + 1) = 1L;
        *(__int128*)(ptr0 + 2) = 0x0X;
        *(__int128*)(result + 2) = 0x0X;
        *(__int128*)(result + 4) = 0x0X;
        *(__int128*)(result + 6) = 0x0X;
        *(__int128*)(result + 8) = 0x0X;
        *(ptr0 + 2) = *(long*)(param0 + 16L);
        *(unsigned long*)(result + 1) = ptr3;
        v0 = *(long*)(param0 + 24L);
        *(unsigned long*)(param0 + 16L) = result;
        *(unsigned long*)(v0 + v4) = result;
    }
    return result;
}

long cellSetRawInsert_wqizyapnzNjHA3SIFqE8ow(long param0, long param1, long param2) {
    long v0 = *(long*)(param0 + 8L);
    long result = *(long*)(param2 + 8L) & v0;
    unsigned long* ptr0 = (unsigned long*)(result * 8L + param1);
    if(*ptr0) {
        do {
            result = (result * 5L + 1L) & v0;
            ptr0 = (unsigned long*)(result * 8L + param1);
        }
        while(*ptr0);
    }
    *ptr0 = param2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long cellsetReset_WHgd5C59bkXWDz3vnAxfzXQ_2(unsigned long* param0) {
    long v0;
    unsigned long* ptr0;
    long v1;
    long v2 = v0;
    unsigned long* ptr1 = *(param0 + 2);
    if(ptr1) {
        do {
            ptr0 = *ptr1;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long)(long*)(ptr1 - 2));
            ptr1 = ptr0;
        }
        while(ptr0);
    }
    long v3 = *(long*)(param0 + 3);
    *(long*)(param0 + 2) = 0L;
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, v3 - 16L);
    *(long*)(param0 + 3) = 0L;
    *param0 = 0L;
    long v4 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L, v1);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            long v5 = &gvar_612138;
            gvar_612108 = &gvar_612138;
            gvar_612138 = 0x6121380000000000612138X;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, &gvar_612108, v4 + 32L, v4 + 0x2050L);
    long* ptr2 = (long*)((v4 + 56L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(*(long*)(v4 + 8L) + gvar_6118F8);
    unsigned __int128 v6 = gvar_40AB60;
    *(long*)(v4 + 40L) = 1L;
    *(long*)(v4 + 48L) = 0L;
    *(long*)(v4 + 8232L) = 0L;
    for(long i = (unsigned long)(((unsigned int)v4 + 48 - (unsigned int)ptr2 + 0x2000) >>> 3); i != 0L; --i) {
        *ptr2 = 0L;
        ++ptr2;
    }
    *(long*)(param0 + 3) = v4 + 48L;
    *(unsigned __int128*)param0 = v6;
    *(long*)(param0 + 2) = 0L;
    return 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long checkErr_BWnr8V7RERYno9bIdPmw8Hw(FILE* __stream) {
    long v0;
    FILE* ptr0;
    unsigned long* ptr1;
    long result;
    FILE* ptr2 = ptr0;
    FILE* ptr3 = __stream;
    →ferror(__stream);
    char v1 = (unsigned int)result ? 0: 1;
    char v2 = (unsigned int)result < 0;
    char v3 = __parity__((unsigned char)result);
    char v4 = 0;
    char v5 = 0;
    if(!v1) {
        FILE* __stream1 = ptr3;
        →clearerr(__stream1);
        long v6 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_22;
        long* ptr4 = &v0;
        /*NO_RETURN*/ raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22, ptr1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(long param0) {
    long v0;
    long v1;
    long v2 = v1;
    unsigned long v3 = (unsigned long)stackSize_IV9bgfYkinlae0WZ2NZi5JA();
    *(unsigned long*)(param0 + 0x3368L) = *(long*)(param0 + 0x3368L) >= (long)v3 ? *(unsigned long*)(param0 + 0x3368L): v3;
    unsigned long* ptr0 = *(unsigned long*)(param0 + 12552L);
    unsigned long* ptr1 = *ptr0;
    unsigned long* ptr2 = ptr0;
    if(ptr0 == ptr1) {
        v0 = 0L;
    }
    else {
        while(1) {
            unsigned long* ptr3 = *ptr1;
            v0 = *(long*)(ptr2 + 2);
            ptr2 = ptr1;
            if(ptr1 == ptr3) {
                break;
            }
            else {
                ptr1 = ptr3;
            }
        }
    }
    *(long*)(param0 + 96L) = v0;
    long v4 = -1L;
    while(*ptr0 != ptr0) {
        v4 = *(long*)(ptr0 + 3);
        ptr0 = *(ptr0 + 1);
    }
    *(long*)(param0 + 104L) = v4;
    markStackAndRegisters_LdwvBL9bC9c0lik7K9bau9bX0Q(param0);
    unsigned long v5 = *(unsigned long*)(param0 + 40L);
    unsigned long v6 = *(long*)(param0 + 0x3370L) >= (long)v5 ? *(unsigned long*)(param0 + 0x3370L): v5;
    *(long*)(param0 + 13136L) = *(long*)(param0 + 13136L) + 1L;
    *(unsigned long*)(param0 + 0x3370L) = v6;
    long v7 = /*BAD_CALL!*/ collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw(param0);
    if((unsigned char)v7 && *(long*)(param0 + 8L) <= (long)*(unsigned long*)(param0 + 0x28f8L)) {
        collectCycles_zoTIuavlrCHyw3B8MBaLJA_3(param0);
        unsigned long v8 = gvar_6118F8;
        *(long*)(param0 + 13144L) = *(long*)(param0 + 13144L) + 1L;
        char v9 = (long)((long)(v8 * 2L) >= &ELFHeader ? v8 * 2L: &ELFHeader) > *(long*)(param0 + 0x3360L);
        char v10 = (((*(long*)(param0 + 0x3360L) - ((long)(v8 * 2L) >= &ELFHeader ? v8 * 2L: &ELFHeader)) ^ *(long*)(param0 + 0x3360L)) & (((long)(v8 * 2L) >= &ELFHeader ? v8 * 2L: &ELFHeader) ^ *(long*)(param0 + 0x3360L))) < 0L;
        *(unsigned long*)(param0 + 8L) = (long)(v8 * 2L) >= &ELFHeader ? v8 * 2L: &ELFHeader;
        *(unsigned long*)(param0 + 0x3360L) = v9 != v10 ? (long)(v8 * 2L) >= &ELFHeader ? v8 * 2L: &ELFHeader: *(unsigned long*)(param0 + 0x3360L);
    }
    unsigned long result = *(unsigned long*)(param0 + 40L);
    unsigned long* ptr4 = *(unsigned long*)(param0 + 56L);
    long* ptr5 = (long*)(result * 8L + (long)ptr4);
    if((long)result > 0L) {
        do {
            unsigned long* ptr6 = *ptr4;
            result = *ptr6 - 8L;
            *ptr6 = *ptr6 - 8L;
            if(result <= 7L) {
                result = (unsigned long)addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, (long)ptr6);
            }
            ++ptr4;
        }
        while(ptr4 != ptr5);
    }
    *(long*)(param0 + 40L) = 0L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long collectCT_zoTIuavlrCHyw3B8MBaLJA(long param0) {
    long v0;
    unsigned long v1 = (unsigned long)stackSize_IV9bgfYkinlae0WZ2NZi5JA();
    unsigned long result = 500L;
    if((long)((long)v1 > 63999L ? v1 >> 7: 500L) > *(long*)(v0 + 16L)) {
        result = *(unsigned long*)(v0 + 0x28f8L);
        if(*(long*)(v0 + 8L) <= (long)result) {
            goto loc_407C25;
        }
    }
    else {
    loc_407C25:
        if(!*(long*)(v0 + 88L)) {
            return (unsigned long)collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(v0);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long collectCycles_zoTIuavlrCHyw3B8MBaLJA_3(long param0) {
    unsigned long* ptr0;
    long v0;
    while(!(*(long*)(param0 + 16L) ? 0: 1) && *(long*)(param0 + 16L) >= 0L) {
        collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw(param0);
    }
    unsigned long* ptr1 = *(unsigned long*)(param0 + 0x3398L);
    if(ptr1) {
        do {
            ptr0 = *ptr1;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long)(long*)(ptr1 - 2));
            ptr1 = ptr0;
        }
        while(ptr0);
    }
    long v1 = *(long*)(param0 + 13216L);
    *(long*)(param0 + 0x3398L) = 0L;
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, v1 - 16L);
    *(long*)(param0 + 13216L) = 0L;
    *(long*)(param0 + 0x3388L) = 0L;
    long v2 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L, v0);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            long v3 = &gvar_612138;
            gvar_612108 = &gvar_612138;
            gvar_612138 = 0x6121380000000000612138X;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, &gvar_612108, v2 + 32L, v2 + 0x2050L);
    long* ptr2 = (long*)((v2 + 56L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(*(long*)(v2 + 8L) + gvar_6118F8);
    unsigned __int128 v4 = gvar_40AB60;
    *(long*)(v2 + 40L) = 1L;
    *(long*)(v2 + 48L) = 0L;
    *(long*)(v2 + 8232L) = 0L;
    for(long i = (unsigned long)(((unsigned int)v2 + 48 - (unsigned int)ptr2 + 0x2000) >>> 3); i != 0L; --i) {
        *ptr2 = 0L;
        ++ptr2;
    }
    *(unsigned long*)(param0 + 13216L) = (unsigned long)(v2 + 48L);
    *(unsigned __int128*)(param0 + 0x3388L) = v4;
    long* ptr3 = *(unsigned long*)(param0 + 56L);
    long v5 = *(long*)(param0 + 40L);
    *(long*)(param0 + 0x3398L) = 0L;
    long* ptr4 = (long*)(v5 * 8L + (long)ptr3);
    if(v5 > 0L) {
        do {
            long v6 = *ptr3;
            ++ptr3;
            markS_NZr5o3Ubzrci4OmK29cHBJA(param0, v6);
        }
        while(ptr3 != ptr4);
    }
    markGlobals_zoTIuavlrCHyw3B8MBaLJA_4(param0);
    return sweep_zoTIuavlrCHyw3B8MBaLJA_5(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long containsOrIncl_CbGEjIBKJIi7knlaDzUluA(long param0, long param1) {
    long v0 = *(long*)(param0 + 8L);
    long v1 = *(long*)(param0 + 24L);
    long v2 = (unsigned long)(param1 >>> 12) & v0;
    long v3 = *(long*)(v2 * 8L + v1);
    if(v3) {
        while((unsigned long)(param1 >>> 12) != *(long*)(v3 + 8L)) {
            v2 = (v2 * 5L + 1L) & v0;
            v3 = *(long*)(v2 * 8L + v1);
            if(!v3) {
                incl_m4q9b16kJJcoKe9c4ERtlpCg(param0, param1);
                return 0L;
            }
        }
        long v4 = (unsigned long)((unsigned int)(param1 >>> 3L) & 0x1ff);
        param0 = (v4 >>> 6) * 8L + v3;
        param1 = *(long*)(param0 + 16L);
        if(!((1L << (v4 & 0x3fL)) & param1)) {
            *(long*)(param0 + 16L) = (1L << (v4 & 0x3fL)) | param1;
            return 0L;
        }
        return 1L;
    }
    incl_m4q9b16kJJcoKe9c4ERtlpCg(param0, param1);
    return 0L;
}

long contains_9c4TZ2Zl3sU4TUeK9bR8E9ciw(long param0, long param1) {
    long v0 = *(long*)(param0 + 8L);
    long v1 = *(long*)(param0 + 24L);
    long v2 = (unsigned long)(param1 >>> 12) & v0;
    long v3 = *(long*)(v2 * 8L + v1);
    if(v3) {
        while((unsigned long)(param1 >>> 12) != *(long*)(v3 + 8L)) {
            v2 = (v2 * 5L + 1L) & v0;
            v3 = *(long*)(v2 * 8L + v1);
            if(!v3) {
                return 0L;
            }
        }
        return (unsigned long)((1L << ((unsigned long)((unsigned int)(param1 >>> 3L) & 0x1ff) & 0x3fL)) & *(long*)(((unsigned long)((unsigned int)(param1 >>> 3L) & 0x1ff) >>> 6) * 8L + v3 + 16L) ? 1: 0) | ((unsigned long)(((1L << ((unsigned long)((unsigned int)(param1 >>> 3L) & 0x1ff) & 0x3fL)) >>> 8L) & 0xffffffffffffffL) << 8);
    }
    return 0L;
}

long contains_tGsWrN4DY41H9btt3FhjrNA(long param0, void* param1) {
    long v0 = *(long*)((unsigned long)(unsigned char)(long*)((long)param1 >>> 9L) * 8L + param0);
    if(!v0) {
        return sub_4012C1();
    }
    while((long*)((long)param1 >>> 9) != *(long*)(v0 + 8L)) {
        v0 = *(long*)v0;
        if(!v0) {
            return 0L;
        }
    }
    return (unsigned long)((long*)((long)(long*)(1L << ((unsigned long)((unsigned int)param1 & 0x1ff) & 0x3fL)) & *((long*)((long)(long*)((long)(void*)((unsigned long)((unsigned int)param1 & 0x1ff) >>> 6) * 8L) + v0) + 2)) ? 1: 0) | ((unsigned long)((v0 >>> 8L) & 0xffffffffffffffL) << 8);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long* copyString(unsigned long* param0) {
    unsigned long* result;
    if(param0) {
        result = param0;
        if(*(long*)(param0 + 1) >= 0L) {
            long v0 = *param0 >= 7L ? *param0: 7L;
            unsigned long* ptr0 = (unsigned long*)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, v0 + 17L, &gch_IcYaEuuWivYAS86vFMTS3Q);
            *ptr0 = 0L;
            result = ptr0;
            *(long*)(ptr0 + 1) = v0;
            *ptr0 = *param0;
            →memcpy();
        }
    }
    else {
        result = NULL;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* copyStringRC1(unsigned long* param0) {
    long* result;
    long v0;
    long v1;
    long v2;
    if(param0) {
        unsigned long v3 = *param0;
        unsigned long v4 = (unsigned long)stackSize_IV9bgfYkinlae0WZ2NZi5JA();
        if(((long)((long)v4 > 63999L ? v4 >> 7: 500L) <= (long)gvar_60F010 || (long)gvar_6118F8 >= (long)gvar_60F008) && !gvar_60F058) {
            collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(&gch_IcYaEuuWivYAS86vFMTS3Q);
        }
        long* ptr0 = (long*)rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, ((long)v3 >= 7L ? v3: 7L) + 33L, (long)((long)v4 > 63999L ? v4 >> 7: 500L), v0, v1, v2);
        *(ptr0 + 1) = &strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
        result = ptr0 + 2;
        *ptr0 = 8L;
        →memset();
        *(unsigned long*)(result + 1) = (long)v3 >= 7L ? v3: 7L;
        *(ptr0 + 2) = *param0;
        →memcpy();
    }
    else {
        result = NULL;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
__int128* cstrToNimstr(long* param0) {
    unsigned long v0;
    __int128* result = NULL;
    if(param0) {
        →strlen();
        long v1 = 24L;
        unsigned long v2 = 7L;
        if(v0 > 6L) {
            v1 = v0 + 17L;
            v2 = v0;
        }
        __int128* ptr0 = (__int128*)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, v1, &gch_IcYaEuuWivYAS86vFMTS3Q);
        result = ptr0;
        *ptr0 = (unsigned __int128)v0 | ((unsigned __int128)v2 << 64);
        →memcpy();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long dealloc_RCjNtRnHdRYntrcE7YtwWw(long param0) {
    return rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, param0 - 16L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long dealloc_jqYVOi4APb9cRx3G9a57AkRw(long param0, unsigned long param1) {
    return rawDealloc_DA62HrGC5sdfCED505KyyQ(param0, param1 - 16L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long deinit_WHgd5C59bkXWDz3vnAxfzXQ_3(long* param0) {
    long v0;
    unsigned long* ptr0;
    long v1 = v0;
    unsigned long* ptr1 = *(unsigned long*)(param0 + 2);
    if(ptr1) {
        do {
            ptr0 = *ptr1;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long)(long*)(ptr1 - 2));
            ptr1 = ptr0;
        }
        while(ptr0);
    }
    long v2 = *(param0 + 3);
    *(param0 + 2) = 0L;
    long result = rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, v2 - 16L);
    *(param0 + 3) = 0L;
    *param0 = 0L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void doOperation_3F8QeaTyYrJJF2gjBr6b8A(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    if(param0) {
        long v2 = v1;
        if((unsigned char)param1 != 1) {
            if(!(unsigned char)param1) {
                markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, param0 - 16L);
            }
            else if((unsigned char)param1 == 2) {
                v0 = (long)(*(unsigned long*)(param0 - 16L) - 8L);
                *(long*)(param0 - 16L) = (long)(*(unsigned long*)(param0 - 16L) - 8L);
                if((unsigned long)v0 <= 7L) {
                    addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, param0 - 16L);
                    return;
                }
            }
            else if((unsigned char)param1 == 3) {
                unsigned long v3 = gvar_60F048;
                v0 = gvar_60F040;
                unsigned long v4 = gvar_60F050;
                if(v0 >= (long)v3) {
                    gvar_60F048 = (unsigned long)((long)(v3 * 3L) / 2L);
                    long v5 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)(v3 * 3L) / 2L * 8L + 16L, v3 * 3L, param3, param4, param5);
                    *(long*)(v5 + 8L) = 1L;
                    v4 = (unsigned long)(v5 + 16L);
                    →memcpy();
                    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, gvar_60F050 - 16L);
                    gvar_60F050 = v4;
                    v0 = gvar_60F040;
                }
                *(long*)(v0 * 8L + v4) = param0 - 16L;
                ++gvar_60F040;
            }
            return;
        }
        unsigned long v6 = gvar_60F048;
        if((long)gvar_60F040 >= (long)v6) {
            gvar_60F048 = (unsigned long)((long)(v6 * 3L) / 2L);
            long v7 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)(v6 * 3L) / 2L * 8L + 16L, v6 * 3L, param3, param4, param5);
            *(long*)(v7 + 8L) = 1L;
            →memcpy();
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, gvar_60F050 - 16L);
            gvar_60F050 = (unsigned long)(v7 + 16L);
        }
        *(long*)(gvar_60F040 * 8L + gvar_60F050) = param0 - 16L;
        ++gvar_60F040;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
long echoBinSafe(unsigned long* param0, long param1) {
    void* __ptr;
    size_t __size;
    long v0;
    long result;
    long v1 = v0;
    unsigned long* ptr0 = param0;
    long* ptr1 = (long*)(param1 * 8L + (long)ptr0);
    →flockfile(stdout);
    if(param1 > 0L) {
        do {
            unsigned long* ptr2 = *ptr0;
            FILE* __s = stdout;
            if(!ptr2) {
                __size = 0L;
                __ptr = (void*)&gvar_40A16D;
            }
            else {
                __size = *ptr2;
                __ptr = __size ? (void*)(ptr2 + 2): (void*)&gvar_40A16D;
            }
            ++ptr0;
            →fwrite(__ptr, __size, 1L, __s);
        }
        while(ptr0 == ptr1);
    }
    →fwrite((void*)&gvar_40A16C, 1L, 1L, stdout);
    →fflush(stdout);
    →funlockfile(stdout);
    return result;
}

unsigned long* excl_Z9cZKmN1jjRFCzU0lgW9a1XA(long param0, long param1) {
    unsigned long* result = *(unsigned long*)((unsigned long)(unsigned char)(param1 >>> 9L) * 8L + param0);
    if(result) {
        while((unsigned long)(param1 >>> 9) != *(long*)(result + 1)) {
            result = *result;
            if(!result) {
                return 0L;
            }
        }
        *((long*)(((unsigned long)((unsigned int)param1 & 0x1ff) >>> 6) * 8L + (long)result) + 2) = (unsigned long)~(1L << ((unsigned long)((unsigned int)param1 & 0x1ff) & 0x3fL)) & *((long*)(((unsigned long)((unsigned int)param1 & 0x1ff) >>> 6) * 8L + (long)result) + 2);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long freeCyclicCell_NZr5o3Ubzrci4OmK29cHBJA_2(long param0, long param1) {
    long v0;
    long v1 = v0;
    long v2 = *(long*)(param1 + 8L);
    if(*(long*)(v2 + 32L)) {
        ++gvar_60F058;
        *(long*)(v2 + 32L)(param1 + 16L, param1);
        --gvar_60F058;
    }
    return rawDealloc_DA62HrGC5sdfCED505KyyQ(param0 + 96L, param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long freeHugeChunk_jnrbguyViYONI3PJ1RZJjQ(long param0, long param1) {
    long result;
    unsigned long v0 = *(unsigned long*)(param1 + 8L);
    unsigned long* ptr0 = *(unsigned long*)((unsigned long)(unsigned char)(param1 >>> 21L) * 8L + param0 + 0x28a8L);
    if(ptr0) {
        while((unsigned long)(param1 >>> 21) != *(long*)(ptr0 + 1)) {
            ptr0 = *ptr0;
            if(!ptr0) {
                unsigned long v1 = *(unsigned long*)(param0 + 0x2880L);
                unsigned long v2 = *(long*)(param0 + 0x2888L) >= (long)v1 ? *(unsigned long*)(param0 + 0x2888L): v1;
                *(unsigned long*)(param0 + 0x2880L) = v1 - v0;
                *(unsigned long*)(param0 + 0x2888L) = v2;
                →munmap();
                return result;
            }
        }
        *((long*)(((unsigned long)((unsigned int)(param1 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr0) + 2) = ~(1L << ((unsigned long)((unsigned int)(param1 >>> 12L) & 0x1ff) & 0x3fL)) & *((long*)(((unsigned long)((unsigned int)(param1 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr0) + 2);
    }
    unsigned long v1 = *(unsigned long*)(param0 + 0x2880L);
    unsigned long v2 = *(long*)(param0 + 0x2888L) >= (long)v1 ? *(unsigned long*)(param0 + 0x2888L): v1;
    *(unsigned long*)(param0 + 0x2880L) = v1 - v0;
    *(unsigned long*)(param0 + 0x2888L) = v2;
    →munmap();
    return result;
}

long genericReset(unsigned long param0, long* param1) {
    long v0;
    unsigned long v1;
    unsigned long* ptr0;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6;
loc_4042A4:
    do {
        v2 = (unsigned long)((unsigned int)*(char*)(param1 + 1) - 4);
        if((unsigned char)v2 <= 41) {
            long v7 = v3;
            long* ptr1 = param1;
            long v8 = v4;
            long v9 = v5;
            unsigned long v10 = param0;
            long v11 = v6;
            jump gvar_40A500[(unsigned long)(unsigned char)v2];
            if(!(unsigned char)result) {
                result = *(long*)param0;
                if((unsigned long)result > 0xfffL) {
                    ptr0 = (unsigned long*)(result - 16L);
                    unsigned long v12 = (unsigned long)(*(long*)(result - 16L) - 8L);
                    *(unsigned long*)(result - 16L) = (unsigned long)(*(long*)(result - 16L) - 8L);
                    if(v12 <= 7L) {
                        result = addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, (long)ptr0);
                        *(long*)v10 = 0L;
                        return result;
                        if(result > 0L) {
                            while(1) {
                                unsigned long v13 = v22 * param0;
                                ++v22;
                                result = genericReset((long)(v10 + v13), (long)ptr0, (long)v12);
                                if(v22 == v23) {
                                    return result;
                                }
                                ptr0 = *(unsigned long*)(ptr1 + 2);
                                param0 = *ptr0;
                            }
                        }
                        return result;
                    }
                }
            }
            *(long*)v10 = 0L;
            return result;
            if(*(char*)ptr0 == 2) {
                unsigned long v14 = *(ptr0 + 4);
                unsigned long v15 = 0L;
                if((long)v14 > 0L) {
                    do {
                        long v16 = *(long*)(v15 * 8L + *(long*)(ptr2 + 5));
                        ++v15;
                        result = genericResetAux_ruA1rosalqf8AhzZPPTBQg((long)v24, v16);
                    }
                    while(v15 != v14);
                }
                return result;
            }
            else if((unsigned char)result == 3) {
                unsigned long v17 = **(ptr0 + 2);
                if(v17 == 2L) {
                    v1 = (unsigned long)*(short*)(*(long*)(ptr0 + 1) + param0);
                }
                else if(v17 != 4L) {
                    v1 = 0L;
                    if(v17 == 1L) {
                        v1 = (unsigned long)*(char*)(*(long*)(ptr0 + 1) + param0);
                    }
                }
                else {
                    v1 = (unsigned long)*(int*)(*(long*)(ptr0 + 1) + param0);
                }
                unsigned long v18 = *(ptr2 + 4);
                long v19 = *(long*)(ptr2 + 5);
                if(v1 < v18) {
                    v0 = *(long*)(v1 * 8L + v19);
                    if(v0) {
                        genericResetAux_ruA1rosalqf8AhzZPPTBQg((long)v24, v0);
                        →memset();
                        return result;
                    }
                    goto loc_40445C;
                }
                else {
                loc_40445C:
                    v0 = *(long*)(v18 * 8L + v19);
                    if(v0) {
                        genericResetAux_ruA1rosalqf8AhzZPPTBQg((long)v24, v0);
                    }
                }
                →memset();
                return result;
            }
            else if((unsigned char)result != 1) {
                return result;
            }
            param1 = *(ptr0 + 2);
            v6 = v11;
            v5 = v9;
            param0 = (unsigned long)((long)*(void**)(ptr2 + 1) + v24);
            v4 = v8;
            v3 = v7;
            goto loc_4042A4;
        }
    }
    while((unsigned char)v2 <= 41);
    →memset();
    return result;
}

long getActiveStack_2XtoPjgvlHPkHLitAW2flw(long param0) {
    return param0;
}

long getBottom_QXg9anCfFuhk3avAkOOKNhQ(long param0) {
    if(!*(long*)(param0 + 12504L)) {
        *(__int128*)(param0 + 12504L) = (unsigned __int128)(param0 + 12504L) | ((unsigned __int128)(param0 + 12504L) << 64);
    }
    return param0 + 12504L;
}

long getDiscriminant_MBlSP9aCmxWSBuDOxawp8Sg(long param0, long param1) {
    unsigned long v0 = **(unsigned long*)(param1 + 16L);
    if(v0 == 2L) {
        return (unsigned long)*(short*)(*(long*)(param1 + 8L) + param0);
    }
    else if(v0 != 4L) {
        return v0 == 1L ? (unsigned long)*(char*)(*(long*)(param1 + 8L) + param0): 0L;
    }
    return (long)*(int*)(*(long*)(param1 + 8L) + param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long getHugeChunk_z9bCNjXTYllZ3pI24nEsw2g_3(long param0, size_t __len) {
    void* ptr0;
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5 = v0;
    long v6 = 0L;
    char v7 = 1;
    char v8 = 0;
    char v9 = 1;
    char v10 = 0;
    char v11 = 0;
    long v12 = 0xffffffffL;
    long v13 = 34L;
    long v14 = v4;
    long v15 = 3L;
    long v16 = v1;
    long v17 = param0;
    long v18 = 0L;
    char v19 = 1;
    char v20 = 0;
    char v21 = 1;
    char v22 = 0;
    char v23 = 0;
    size_t v24 = __len;
    long v25 = v2;
    →mmap(NULL, __len, 3L, 34L, 0xffffffffL, 0L);
    long result = v3;
    unsigned long v26 = (unsigned long)(v3 - 1L);
    char v27 = v26 == -3L;
    char v28 = (long)v26 < -3L;
    char v29 = __parity__((unsigned char)v26 - 253);
    char v30 = v26 < 18446744073709551613L;
    char v31 = (((v26 + 3L) ^ v26) & (v26 ^ 0xfffffffffffffffdL)) < 0L;
    char v32 = (((v26 + 3L) ^ (v26 ^ 0xfffffffffffffffdL)) >>> 4L) & 0x1L;
    if((v30 || v27)) {
        *(long*)(v17 + 0x2880L) = *(long*)(v17 + 0x2880L) + v24;
        *(size_t*)(result + 8L) = v24;
        *(__int128*)(result + 16L) = 0x0X;
        long v33 = (unsigned long)(unsigned char)(result >>> 21L) * 8L + v17;
        *(long*)result = 1L;
        long v34 = *(long*)(v33 + 0x28a8L);
        if(!v34) {
            goto loc_402058;
        }
        else {
            while((unsigned long)(result >>> 21) != *(long*)(v34 + 8L)) {
                v34 = *(long*)v34;
                if(!v34) {
                loc_402058:
                    v34 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(v17, 80L);
                    *(long*)v34 = *(long*)(v33 + 0x28a8L);
                    *(long*)(v33 + 0x28a8L) = v34;
                    *(unsigned long*)(v34 + 8L) = (unsigned long)(result >>> 21);
                    break;
                }
            }
        }
        *(long*)((size_t)((unsigned long)((unsigned int)(result >>> 12L) & 0x1ff) >>> 6) * 8L + v34 + 16L) = (1L << ((unsigned long)((unsigned int)(result >>> 12L) & 0x1ff) & 0x3fL)) | *(long*)((size_t)((unsigned long)((unsigned int)(result >>> 12L) & 0x1ff) >>> 6) * 8L + v34 + 16L);
        return result;
    }
    long* ptr1 = &ptr0;
    long v35 = /*NO_RETURN*/ raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
}

unsigned long getOccupiedMem_9bFvoxSITMVCg7RY8KIar1Q() {
    return gvar_6118F8;
}

long getRefcount(long param0) {
    return *(long*)(param0 - 16L) >>> 3;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* getSmallChunk_h6cvXbfQjxIdThM5GthosA(long param0) {
    return getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(param0, 0x1000L);
}

long highGauge_3mwQtFaBTgevFrybZdgUNw_2(unsigned long* param0) {
    long result;
    if(*param0 != param0) {
        do {
            result = *(long*)(param0 + 3);
            param0 = *(param0 + 1);
        }
        while(*param0 != param0);
        return result;
    }
    return -1L;
}

unsigned long* inRange_Bc4Ua6HOMCIDGx9b15HSY4g(long param0, unsigned long param1) {
    if(*(long*)param0 != param0) {
        return sub_406572(param0, param1);
    }
    return NULL;
}

// Stale decompilation - Refresh this view to re-decompile this code
long incl_Iz1GYiOVKwItgr5CdCm0dQ(long param0, long param1, long param2) {
    long v0;
    long v1 = v0;
    long* ptr0 = (long*)((unsigned long)(unsigned char)(param2 >>> 9L) * 8L + param1);
    long result = *ptr0;
    if(!result) {
        goto loc_401645;
    }
    else {
        while((unsigned long)(param2 >>> 9) != *(long*)(result + 8L)) {
            result = *(long*)result;
            if(!result) {
            loc_401645:
                result = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 80L);
                *(long*)result = *ptr0;
                *ptr0 = result;
                *(unsigned long*)(result + 8L) = (unsigned long)(param2 >>> 9);
                break;
            }
        }
    }
    *(long*)(((unsigned long)((unsigned int)param2 & 0x1ff) >>> 6) * 8L + result + 16L) = (1L << ((unsigned long)((unsigned int)param2 & 0x1ff) & 0x3fL)) | *(long*)(((unsigned long)((unsigned int)param2 & 0x1ff) >>> 6) * 8L + result + 16L);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long initGC_njssp69aa7hvxte9bJ8uuDcg() {
    long v0;
    gvar_612350 = 0x0X;
    gvar_612360 = 0x0X;
    gvar_612370 = 0x0X;
    unsigned __int128 v1 = gvar_40AB70;
    gvar_60F018 = 0x400L;
    *(__int128*)&gvar_60F008 = (unsigned long)v1;
    long* ptr0 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    long* ptr1 = ptr0;
    long v2 = (long)(ptr0 + 4);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            v0 = &gvar_612138;
            gvar_612108 = &gvar_612138;
            gvar_612138 = 0x6121380000000000612138X;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, v2, v2 + 0x2030L);
    unsigned long v3 = (unsigned long)(v2 + 16L);
    long* ptr2 = (long*)((v2 + 24L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(ptr1[1] + gvar_6118F8);
    ptr1[5] = 1L;
    unsigned __int128 v4 = gvar_40AB80;
    *(long*)(v2 + 16L) = 0L;
    *(long*)(v2 + 0x2008L) = 0L;
    for(long i = (unsigned long)(((unsigned int)v3 - (unsigned int)ptr2 + 0x2000) >>> 3); i != 0L; --i) {
        *ptr2 = 0L;
        ++ptr2;
    }
    gvar_60F020 = v3;
    *(__int128*)&gvar_60F040 = (unsigned long)v4;
    long* ptr3 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    long* ptr4 = ptr3;
    long v5 = (long)(ptr3 + 4);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            v0 = &gvar_612138;
            gvar_612108 = &gvar_612138;
            gvar_612138 = 0x6121380000000000612138X;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, v5, v5 + 0x2030L);
    unsigned long v6 = (unsigned long)(v5 + 16L);
    long* ptr5 = (long*)((v5 + 24L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(ptr4[1] + gvar_6118F8);
    ptr4[5] = 1L;
    unsigned __int128 v7 = gvar_40AB80;
    *(long*)(v5 + 16L) = 0L;
    *(long*)(v5 + 0x2008L) = 0L;
    for(long j = (unsigned long)(((unsigned int)v6 - (unsigned int)ptr5 + 0x2000) >>> 3); j != 0L; --j) {
        *ptr5 = 0L;
        ++ptr5;
    }
    gvar_60F050 = v6;
    gvar_60F028 = v7;
    long* ptr6 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    long* ptr7 = ptr6;
    long v8 = (long)(ptr6 + 4);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            v0 = &gvar_612138;
            gvar_612108 = &gvar_612138;
            gvar_612138 = 0x6121380000000000612138X;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, v8, v8 + 0x2030L);
    unsigned long v9 = (unsigned long)(v8 + 16L);
    long* ptr8 = (long*)((v8 + 24L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(ptr7[1] + gvar_6118F8);
    ptr7[5] = 1L;
    *(long*)(v8 + 16L) = 0L;
    *(long*)(v8 + 0x2008L) = 0L;
    for(long k = (unsigned long)(((unsigned int)v9 - (unsigned int)ptr8 + 0x2000) >>> 3); k != 0L; --k) {
        *ptr8 = 0L;
        ++ptr8;
    }
    gvar_60F038 = v9;
    long* ptr9 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    long* ptr10 = ptr9;
    long v10 = (long)(ptr9 + 4);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            v0 = &gvar_612138;
            gvar_612108 = &gvar_612138;
            gvar_612138 = 0x6121380000000000612138X;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, v10, v10 + 0x2030L);
    unsigned long v11 = (unsigned long)(v10 + 16L);
    long* ptr11 = (long*)((v10 + 24L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(ptr10[1] + gvar_6118F8);
    ptr10[5] = 1L;
    unsigned __int128 v12 = gvar_40AB60;
    *(long*)(v10 + 16L) = 0L;
    unsigned __int128 v13 = gvar_40AB80;
    *(long*)(v10 + 0x2008L) = 0L;
    for(long counter = (unsigned long)(((unsigned int)v11 - (unsigned int)ptr11 + 0x2000) >>> 3); counter != 0L; --counter) {
        *ptr11 = 0L;
        ++ptr11;
    }
    gvar_6123A0 = v11;
    gvar_612388 = v12;
    gvar_612398 = 0L;
    gvar_6123A8 = v13;
    long* ptr12 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    long* ptr13 = ptr12;
    long v14 = (long)(ptr12 + 4);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            v0 = &gvar_612138;
            gvar_612108 = &gvar_612138;
            gvar_612138 = 0x6121380000000000612138X;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, v14, v14 + 0x2030L);
    unsigned long v15 = (unsigned long)(v14 + 16L);
    long* ptr14 = (long*)((v14 + 24L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(ptr13[1] + gvar_6118F8);
    ptr13[5] = 1L;
    *(long*)(v14 + 16L) = 0L;
    *(long*)(v14 + 0x2008L) = 0L;
    for(long counter1 = (unsigned long)(((unsigned int)v15 - (unsigned int)ptr14 + 0x2000) >>> 3); counter1 != 0L; --counter1) {
        *ptr14 = 0L;
        ++ptr14;
    }
    gvar_6123B8 = v15;
    unsigned long result = gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg;
    gvar_6123C0 = gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg;
    gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg = result + 1L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long init_E1QNZGuo0DGFXyt4Y3MfqA(long* param0, long param1) {
    long result;
    long v0;
    long v1 = v0;
    *(param0 + 1) = param1;
    *param0 = 0L;
    long v2 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)((size_t)(param1 * 8L) + 16L));
    *(long*)(v2 + 8L) = 1L;
    →memset((void*)(v2 + 16L), 0L, (size_t)(param1 * 8L));
    *(param0 + 2) = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long init_WHgd5C59bkXWDz3vnAxfzXQ(unsigned __int128* param0) {
    unsigned __int128* ptr0;
    long v0;
    long v1 = v0;
    long* ptr1 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            long v2 = &gvar_612138;
            gvar_612108 = &gvar_612138;
            gvar_612138 = 0x6121380000000000612138X;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, (long)(ptr1 + 4), (long)(ptr1 + 1034));
    long* ptr2 = (long*)((long)(ptr1 + 7) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(ptr1[1] + gvar_6118F8);
    unsigned __int128 v3 = gvar_40AB60;
    ptr1[5] = 1L;
    ptr1[6] = 0L;
    ptr1[1029] = 0L;
    for(long i = (unsigned long)(((unsigned int)ptr1 + 48 - (unsigned int)ptr2 + 0x2000) >>> 3); i != 0L; --i) {
        *ptr2 = 0L;
        ++ptr2;
    }
    *(unsigned long*)((char*)ptr0 + 24L) = ptr1 + 6;
    *ptr0 = v3;
    *(long*)(ptr0 + 1) = 0L;
    return 0L;
}

unsigned long* intSetGet_FhOZKj4Gih3qQ5OimZYOrg(long param0, unsigned long param1) {
    unsigned long* result = *(unsigned long*)((unsigned long)(unsigned char)param1 * 8L + param0);
    if(result) {
        if(*(long*)(result + 1) == param1) {
            sub_401267();
            return result;
        }
        do {
            result = *result;
        }
        while(result && *(long*)(result + 1) == param1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long intSetPut_KWgRM9bUk6rwhAaHSiuK9aYA(long param0, long param1, unsigned long param2) {
    long v0;
    long v1 = v0;
    long* ptr0 = (long*)((unsigned long)(unsigned char)param2 * 8L + param1);
    long result = *ptr0;
    if(result) {
        while(*(long*)(result + 8L) != param2) {
            result = *(long*)result;
            if(!result) {
                result = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 80L);
                *(unsigned long*)result = *ptr0;
                *ptr0 = result;
                *(unsigned long*)(result + 8L) = param2;
                return result;
            }
        }
    }
    else {
        result = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 80L);
        *(unsigned long*)result = *ptr0;
        *ptr0 = result;
        *(unsigned long*)(result + 8L) = param2;
    }
    return result;
}

long* interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(unsigned long* param0, unsigned long param1) {
    char* ptr0;
    unsigned long* ptr1 = *(unsigned long*)((long*)((unsigned long)(unsigned char)(param1 >>> 21L) * 8L + (long)param0) + 0x515);
    if(!ptr1) {
    loc_406625:
        if(*param0 <= param1 && *(param0 + 1) >= param1) {
            ptr1 = *(param0 + 1557);
            if(*ptr1 != ptr1) {
            loc_40665A:
                do {
                    long* ptr2 = *(ptr1 + 2);
                    if((unsigned long)ptr2 <= param1 && *(ptr1 + 3) > param1) {
                        return *(unsigned long*)(ptr2 + 1) > 1L ? ptr2: NULL;
                    }
                    ptr1 = (unsigned long)ptr2 < param1 ? *(ptr1 + 1): *ptr1;
                    if(*ptr1 != ptr1) {
                        goto loc_40665A;
                    }
                }
                while(*ptr1 != ptr1);
                return NULL;
            }
        }
    }
    else {
        while((long*)(param1 >>> 21) != *(long*)(ptr1 + 1)) {
            ptr1 = *ptr1;
            if(!ptr1) {
                goto loc_406625;
            }
        }
        if(!(long*)((long)(long*)(1L << (long)(long*)((long)(char*)((unsigned int)(param1 >>> 12L) & 0x1ff) & 0x3fL)) & *((long*)((long)(long*)((long)(long*)((long)(char*)((unsigned int)(param1 >>> 12L) & 0x1ff) >>> 6) * 8L) + (long)ptr1) + 2))) {
            goto loc_406625;
        }
        else {
            ptr0 = (char*)(param1 & 0xfffffffffffff000L);
            if(!(*ptr0 & 0x1)) {
                return NULL;
            }
            param0 = *(unsigned long*)(ptr0 + 8L);
            if((long)param0 <= 4040L) {
                param1 = (unsigned long)((unsigned long)((unsigned int)param1 & 0xfff) - 56L);
            }
            else if((unsigned long)(long*)(ptr0 + 32L) > param1) {
                return NULL;
            }
            else {
                return *(unsigned long*)(ptr0 + 40L) > 1L ? (long*)(ptr0 + 32L): NULL;
            }
        }
        if(*(unsigned long*)(ptr0 + 48L) > param1) {
            long* ptr3 = (long*)((long)(char*)((long*)((long)ptr0 + param1) + 7) - (long)(long*)(param1 % (long)(unsigned long)param0));
            return *(unsigned long*)(ptr3 + 1) > 1L ? ptr3: NULL;
        }
    }
    return NULL;
}

long isActiveStack_deIRQymTVHcVwfHBKDbqEA() {
    return 1L;
}

long isObjSlowPath_yEa9cUwzxhGRtg9cspcfCIHg(long param0, unsigned long param1, long* param2) {
    unsigned long v0 = *(unsigned long*)(param0 + 16L);
    if(v0 != param1) {
        while(v0) {
            v0 = *(unsigned long*)(v0 + 16L);
            if(v0 == param1) {
                *(param2 + 1) = param0;
                return 1L;
            }
        }
        *param2 = param0;
        return 0L;
    }
    *(param2 + 1) = param0;
    return 1L;
}

long isOnStack_dJJW59cIgsBmT59aZrOM71Mg(unsigned long param0) {
    long* ptr0;
    unsigned long v0 = *(long*)&gch_IcYaEuuWivYAS86vFMTS3Q;
    long result = 0L;
    if(param0 >= (unsigned long)&ptr0) {
        result = v0 < param0 ? 0L: 1L;
    }
    return result;
}

long lowGauge_3mwQtFaBTgevFrybZdgUNw(unsigned long* param0) {
    long result;
    unsigned long* ptr0 = *param0;
    if(ptr0 == param0) {
        result = sub_4064F8();
    }
    else {
        while(1) {
            unsigned long* ptr1 = *ptr0;
            result = *(long*)(param0 + 2);
            param0 = ptr0;
            if(ptr1 == ptr0) {
                return result;
            }
            ptr0 = ptr1;
        }
    }
    return result;
}

long main(unsigned int param0, unsigned long param1, unsigned long param2) {
    cmdLine = param1;
    cmdCount = param0;
    gEnv = param2;
    NimMain();
    return (unsigned long)*(int*)&nim_program_result;
}

unsigned long* markStackAndRegisters_LdwvBL9bC9c0lik7K9bau9bX0Q(unsigned long* param0) {
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6;
    long v7;
    long v8;
    long v9;
    unsigned long v10;
    long v11;
    unsigned long v12;
    unsigned long* ptr0;
    char v13;
    long v14;
    char v15;
    unsigned long* result;
    long v16;
    unsigned long* ptr1 = param0;
    →_setjmp();
    if(!(unsigned int)result) {
        result = &v15;
        unsigned long* ptr2 = &v15;
        unsigned long v17 = *ptr1;
        unsigned long* ptr3 = ptr1 + 12;
        if((unsigned long)&v15 < (unsigned long)&v13) {
            do {
                unsigned long v18 = (unsigned long)(*result - 16L);
                char v19 = v18 == 0x1000L;
                if(v18 >= 0x1000L && !v19) {
                    unsigned long* ptr4 = ptr3;
                    long* ptr5 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr4, v18);
                    long* ptr6 = ptr5;
                    if(ptr5) {
                        ptr0 = ptr1;
                        ptr5[0] += 8L;
                        v12 = *(ptr0 + 6);
                        unsigned long v20 = *(ptr0 + 5);
                        if((long)v20 >= (long)v12) {
                            long v21 = v12 * 3L - ((v12 * 3L) >> 63);
                            unsigned long* ptr7 = ptr1;
                            long v22 = v21 >> 1;
                            *(long*)(ptr7 + 6) = v21 >> 1;
                            long v23 = v22 * 8L + 16L;
                            long v24 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v23, (long)ptr7, (long)ptr0, v16, v14);
                            v11 = v24 + 16L;
                            *(long*)(v24 + 8L) = 1L;
                            unsigned long* ptr8 = ptr1;
                            long v25 = *(long*)(ptr8 + 5);
                            →memcpy();
                            unsigned long* ptr9 = ptr1;
                            long v26 = *(long*)(ptr9 + 7);
                            long* ptr10 = (long*)(v26 - 16L);
                            long v27 = v26;
                            rawDealloc_DA62HrGC5sdfCED505KyyQ((long*)0x60F060, ptr10);
                            unsigned long* ptr11 = ptr1;
                            *(long*)(ptr11 + 7) = v11;
                            v20 = *(ptr11 + 5);
                        }
                        else {
                            v11 = *(long*)(ptr0 + 7);
                        }
                        *(long**)(v20 * 8L + v11) = ptr6;
                        unsigned long* ptr12 = ptr1;
                        *(long*)(ptr12 + 5) = *(long*)(ptr12 + 5) + 1L;
                    }
                }
                v10 = (unsigned long)(*(long*)((char*)ptr2 + 4L) - 16L);
                char v28 = v10 == 0x1000L;
                if(v10 >= 0x1000L && !v28) {
                    unsigned long* ptr13 = ptr3;
                    long* ptr14 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr13, v10);
                    long* ptr15 = ptr14;
                    if(ptr14) {
                        param0 = ptr1;
                        ptr14[0] += 8L;
                        v12 = *(param0 + 6);
                        unsigned long v29 = *(param0 + 5);
                        char v30 = v29 == v12;
                        if(!v30 && (long)v29 <= (long)v12) {
                            v9 = *(long*)(param0 + 7);
                        }
                        else {
                            long v31 = v12 * 3L - ((v12 * 3L) >> 63);
                            unsigned long* ptr16 = ptr1;
                            long v32 = v31 >> 1;
                            *(long*)(ptr16 + 6) = v31 >> 1;
                            long v33 = v32 * 8L + 16L;
                            long v34 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v33, (long)ptr16, (long)ptr0, v16, v14);
                            v9 = v34 + 16L;
                            *(long*)(v34 + 8L) = 1L;
                            →memcpy();
                            unsigned long* ptr17 = ptr1;
                            long v35 = *(long*)(ptr17 + 7);
                            long* ptr18 = (long*)(v35 - 16L);
                            long v36 = v35;
                            rawDealloc_DA62HrGC5sdfCED505KyyQ((long*)0x60F060, ptr18);
                            unsigned long* ptr19 = ptr1;
                            *(long*)(ptr19 + 7) = v9;
                            v29 = *(ptr19 + 5);
                        }
                        *(long**)(v29 * 8L + v9) = ptr15;
                        unsigned long* ptr20 = ptr1;
                        *(long*)(ptr20 + 5) = *(long*)(ptr20 + 5) + 1L;
                    }
                }
                ++ptr2;
                result = ptr2;
            }
            while((unsigned long)ptr2 >= (unsigned long)&v13);
        }
        unsigned long v37 = v17 - 64L;
        char v38 = ptr2 == v37;
        if((unsigned long)ptr2 <= v37 && !v38) {
            unsigned long* ptr21 = ptr1 + 12;
            do {
                unsigned long v39 = (unsigned long)(*result - 16L);
                char v40 = v39 == 0x1000L;
                if(v39 >= 0x1000L && !v40) {
                    unsigned long* ptr22 = ptr21;
                    long* ptr23 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr22, v39);
                    long* ptr24 = ptr23;
                    if(ptr23) {
                        ptr0 = ptr1;
                        ptr23[0] += 8L;
                        v12 = *(ptr0 + 6);
                        unsigned long v41 = *(ptr0 + 5);
                        if((long)v41 >= (long)v12) {
                            long v42 = v12 * 3L - ((v12 * 3L) >> 63);
                            unsigned long* ptr25 = ptr1;
                            long v43 = v42 >> 1;
                            *(long*)(ptr25 + 6) = v42 >> 1;
                            long v44 = v43 * 8L + 16L;
                            long v45 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v44, (long)ptr25, (long)ptr0, v16, v14);
                            v8 = v45 + 16L;
                            *(long*)(v45 + 8L) = 1L;
                            unsigned long* ptr26 = ptr1;
                            long v46 = *(long*)(ptr26 + 5);
                            →memcpy();
                            unsigned long* ptr27 = ptr1;
                            long v47 = *(long*)(ptr27 + 7);
                            long* ptr28 = (long*)(v47 - 16L);
                            long v48 = v47;
                            rawDealloc_DA62HrGC5sdfCED505KyyQ((long*)0x60F060, ptr28);
                            unsigned long* ptr29 = ptr1;
                            *(long*)(ptr29 + 7) = v8;
                            v41 = *(ptr29 + 5);
                        }
                        else {
                            v8 = *(long*)(ptr0 + 7);
                        }
                        *(long**)(v41 * 8L + v8) = ptr24;
                        unsigned long* ptr30 = ptr1;
                        *(long*)(ptr30 + 5) = *(long*)(ptr30 + 5) + 1L;
                    }
                }
                unsigned long v49 = (unsigned long)(*(long*)(ptr2 + 1) - 16L);
                char v50 = v49 == 0x1000L;
                if(v49 >= 0x1000L && !v50) {
                    unsigned long* ptr31 = ptr21;
                    long* ptr32 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr31, v49);
                    long* ptr33 = ptr32;
                    if(ptr32) {
                        ptr0 = ptr1;
                        ptr32[0] += 8L;
                        v12 = *(ptr0 + 6);
                        unsigned long v51 = *(ptr0 + 5);
                        char v52 = v51 == v12;
                        if(!v52 && (long)v51 <= (long)v12) {
                            v7 = *(long*)(ptr0 + 7);
                        }
                        else {
                            long v53 = v12 * 3L - ((v12 * 3L) >> 63);
                            unsigned long* ptr34 = ptr1;
                            long v54 = v53 >> 1;
                            *(long*)(ptr34 + 6) = v53 >> 1;
                            long v55 = v54 * 8L + 16L;
                            long v56 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v55, (long)ptr34, (long)ptr0, v16, v14);
                            v7 = v56 + 16L;
                            *(long*)(v56 + 8L) = 1L;
                            unsigned long* ptr35 = ptr1;
                            long v57 = *(long*)(ptr35 + 5);
                            →memcpy();
                            unsigned long* ptr36 = ptr1;
                            long v58 = *(long*)(ptr36 + 7);
                            long* ptr37 = (long*)(v58 - 16L);
                            long v59 = v58;
                            rawDealloc_DA62HrGC5sdfCED505KyyQ((long*)0x60F060, ptr37);
                            unsigned long* ptr38 = ptr1;
                            *(long*)(ptr38 + 7) = v7;
                            v51 = *(ptr38 + 5);
                        }
                        *(long**)(v51 * 8L + v7) = ptr33;
                        unsigned long* ptr39 = ptr1;
                        *(long*)(ptr39 + 5) = *(long*)(ptr39 + 5) + 1L;
                    }
                }
                unsigned long v60 = (unsigned long)(*(long*)(ptr2 + 2) - 16L);
                char v61 = v60 == 0x1000L;
                if(v60 >= 0x1000L && !v61) {
                    unsigned long* ptr40 = ptr21;
                    long* ptr41 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr40, v60);
                    long* ptr42 = ptr41;
                    if(ptr41) {
                        ptr0 = ptr1;
                        ptr41[0] += 8L;
                        v12 = *(ptr0 + 6);
                        unsigned long v62 = *(ptr0 + 5);
                        char v63 = v62 == v12;
                        if(!v63 && (long)v62 <= (long)v12) {
                            v6 = *(long*)(ptr0 + 7);
                        }
                        else {
                            long v64 = v12 * 3L - ((v12 * 3L) >> 63);
                            unsigned long* ptr43 = ptr1;
                            long v65 = v64 >> 1;
                            *(long*)(ptr43 + 6) = v64 >> 1;
                            long v66 = v65 * 8L + 16L;
                            long v67 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v66, (long)ptr43, (long)ptr0, v16, v14);
                            v6 = v67 + 16L;
                            *(long*)(v67 + 8L) = 1L;
                            unsigned long* ptr44 = ptr1;
                            long v68 = *(long*)(ptr44 + 5);
                            →memcpy();
                            unsigned long* ptr45 = ptr1;
                            long v69 = *(long*)(ptr45 + 7);
                            long* ptr46 = (long*)(v69 - 16L);
                            long v70 = v69;
                            rawDealloc_DA62HrGC5sdfCED505KyyQ((long*)0x60F060, ptr46);
                            unsigned long* ptr47 = ptr1;
                            *(long*)(ptr47 + 7) = v6;
                            v62 = *(ptr47 + 5);
                        }
                        *(long**)(v62 * 8L + v6) = ptr42;
                        unsigned long* ptr48 = ptr1;
                        *(long*)(ptr48 + 5) = *(long*)(ptr48 + 5) + 1L;
                    }
                }
                unsigned long v71 = (unsigned long)(*(long*)(ptr2 + 3) - 16L);
                char v72 = v71 == 0x1000L;
                if(v71 >= 0x1000L && !v72) {
                    unsigned long* ptr49 = ptr21;
                    long* ptr50 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr49, v71);
                    long* ptr51 = ptr50;
                    if(ptr50) {
                        param0 = ptr1;
                        ptr50[0] += 8L;
                        v12 = *(param0 + 6);
                        unsigned long v73 = *(param0 + 5);
                        char v74 = v73 == v12;
                        if(!v74 && (long)v73 <= (long)v12) {
                            v5 = *(long*)(param0 + 7);
                        }
                        else {
                            long v75 = v12 * 3L;
                            long v76 = v12 * 3L;
                            long v77 = (v75 - (v76 >> 63)) >> 1;
                            *(long*)(param0 + 6) = (v75 - (v76 >> 63)) >> 1;
                            long v78 = v77 * 8L + 16L;
                            long v79 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v78, v75, (long)ptr0, v16, v14);
                            v5 = v79 + 16L;
                            *(long*)(v79 + 8L) = 1L;
                            →memcpy();
                            unsigned long* ptr52 = ptr1;
                            long v80 = *(long*)(ptr52 + 7);
                            long* ptr53 = (long*)(v80 - 16L);
                            long v81 = v80;
                            rawDealloc_DA62HrGC5sdfCED505KyyQ((long*)0x60F060, ptr53);
                            unsigned long* ptr54 = ptr1;
                            *(long*)(ptr54 + 7) = v5;
                            v73 = *(ptr54 + 5);
                        }
                        *(long**)(v73 * 8L + v5) = ptr51;
                        unsigned long* ptr55 = ptr1;
                        *(long*)(ptr55 + 5) = *(long*)(ptr55 + 5) + 1L;
                    }
                }
                unsigned long v82 = (unsigned long)(*(long*)(ptr2 + 4) - 16L);
                char v83 = v82 == 0x1000L;
                if(v82 >= 0x1000L && !v83) {
                    unsigned long* ptr56 = ptr21;
                    long* ptr57 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr56, v82);
                    long* ptr58 = ptr57;
                    if(ptr57) {
                        ptr0 = ptr1;
                        ptr57[0] += 8L;
                        v12 = *(ptr0 + 6);
                        unsigned long v84 = *(ptr0 + 5);
                        char v85 = v84 == v12;
                        if(!v85 && (long)v84 <= (long)v12) {
                            v4 = *(long*)(ptr0 + 7);
                        }
                        else {
                            long v86 = v12 * 3L - ((v12 * 3L) >> 63);
                            unsigned long* ptr59 = ptr1;
                            long v87 = v86 >> 1;
                            *(long*)(ptr59 + 6) = v86 >> 1;
                            long v88 = v87 * 8L + 16L;
                            long v89 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v88, (long)ptr59, (long)ptr0, v16, v14);
                            v4 = v89 + 16L;
                            *(long*)(v89 + 8L) = 1L;
                            unsigned long* ptr60 = ptr1;
                            long v90 = *(long*)(ptr60 + 5);
                            →memcpy();
                            unsigned long* ptr61 = ptr1;
                            rawDealloc_DA62HrGC5sdfCED505KyyQ((long*)0x60F060, (long*)(*(long*)(ptr61 + 7) - 16L));
                            unsigned long* ptr62 = ptr1;
                            *(long*)(ptr62 + 7) = v4;
                            v84 = *(ptr62 + 5);
                        }
                        *(long**)(v84 * 8L + v4) = ptr58;
                        unsigned long* ptr63 = ptr1;
                        *(long*)(ptr63 + 5) = *(long*)(ptr63 + 5) + 1L;
                    }
                }
                unsigned long v91 = (unsigned long)(*(long*)(ptr2 + 5) - 16L);
                char v92 = v91 == 0x1000L;
                if(v91 >= 0x1000L && !v92) {
                    unsigned long* ptr64 = ptr21;
                    long* ptr65 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr64, v91);
                    long* ptr66 = ptr65;
                    if(ptr65) {
                        param0 = ptr1;
                        ptr65[0] += 8L;
                        v12 = *(param0 + 6);
                        unsigned long v93 = *(param0 + 5);
                        char v94 = v93 == v12;
                        if(!v94 && (long)v93 <= (long)v12) {
                            v3 = *(long*)(param0 + 7);
                        }
                        else {
                            long v95 = v12 * 3L;
                            long v96 = v12 * 3L;
                            long v97 = (v95 - (v96 >> 63)) >> 1;
                            *(long*)(param0 + 6) = (v95 - (v96 >> 63)) >> 1;
                            long v98 = v97 * 8L + 16L;
                            long v99 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v98, v95, (long)ptr0, v16, v14);
                            v3 = v99 + 16L;
                            *(long*)(v99 + 8L) = 1L;
                            unsigned long* ptr67 = ptr1;
                            long v100 = *(long*)(ptr67 + 5);
                            →memcpy();
                            unsigned long* ptr68 = ptr1;
                            long v101 = *(long*)(ptr68 + 7);
                            long* ptr69 = (long*)(v101 - 16L);
                            long v102 = v101;
                            rawDealloc_DA62HrGC5sdfCED505KyyQ((long*)0x60F060, ptr69);
                            unsigned long* ptr70 = ptr1;
                            *(long*)(ptr70 + 7) = v3;
                            v93 = *(ptr70 + 5);
                        }
                        *(long**)(v93 * 8L + v3) = ptr66;
                        unsigned long* ptr71 = ptr1;
                        *(long*)(ptr71 + 5) = *(long*)(ptr71 + 5) + 1L;
                    }
                }
                unsigned long v103 = (unsigned long)(*(long*)(ptr2 + 6) - 16L);
                char v104 = v103 == 0x1000L;
                if(v103 >= 0x1000L && !v104) {
                    unsigned long* ptr72 = ptr21;
                    long* ptr73 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr72, v103);
                    long* ptr74 = ptr73;
                    if(ptr73) {
                        ptr0 = ptr1;
                        ptr73[0] += 8L;
                        v12 = *(ptr0 + 6);
                        unsigned long v105 = *(ptr0 + 5);
                        char v106 = v105 == v12;
                        if(!v106 && (long)v105 <= (long)v12) {
                            v2 = *(long*)(ptr0 + 7);
                        }
                        else {
                            long v107 = v12 * 3L - ((v12 * 3L) >> 63);
                            unsigned long* ptr75 = ptr1;
                            long v108 = v107 >> 1;
                            *(long*)(ptr75 + 6) = v107 >> 1;
                            long v109 = v108 * 8L + 16L;
                            long v110 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v109, (long)ptr75, (long)ptr0, v16, v14);
                            v2 = v110 + 16L;
                            *(long*)(v110 + 8L) = 1L;
                            →memcpy();
                            unsigned long* ptr76 = ptr1;
                            long v111 = *(long*)(ptr76 + 7);
                            long* ptr77 = (long*)(v111 - 16L);
                            long v112 = v111;
                            rawDealloc_DA62HrGC5sdfCED505KyyQ((long*)0x60F060, ptr77);
                            unsigned long* ptr78 = ptr1;
                            *(long*)(ptr78 + 7) = v2;
                            v105 = *(ptr78 + 5);
                        }
                        *(long**)(v105 * 8L + v2) = ptr74;
                        unsigned long* ptr79 = ptr1;
                        *(long*)(ptr79 + 5) = *(long*)(ptr79 + 5) + 1L;
                    }
                }
                v10 = (unsigned long)(*(long*)(ptr2 + 7) - 16L);
                if(v10 > 0x1000L) {
                    unsigned long* ptr80 = ptr21;
                    long* ptr81 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr80, v10);
                    long* ptr82 = ptr81;
                    if(ptr81) {
                        param0 = ptr1;
                        ptr81[0] += 8L;
                        v12 = *(param0 + 6);
                        unsigned long v113 = *(param0 + 5);
                        char v114 = v113 == v12;
                        if(!v114 && (long)v113 <= (long)v12) {
                            v1 = *(long*)(param0 + 7);
                        }
                        else {
                            long v115 = v12 * 3L;
                            long v116 = v12 * 3L;
                            long v117 = (v115 - (v116 >> 63)) >> 1;
                            *(long*)(param0 + 6) = (v115 - (v116 >> 63)) >> 1;
                            long v118 = v117 * 8L + 16L;
                            long v119 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v118, v115, (long)ptr0, v16, v14);
                            v1 = v119 + 16L;
                            *(long*)(v119 + 8L) = 1L;
                            unsigned long* ptr83 = ptr1;
                            long v120 = *(long*)(ptr83 + 5);
                            →memcpy();
                            unsigned long* ptr84 = ptr1;
                            rawDealloc_DA62HrGC5sdfCED505KyyQ((long*)0x60F060, (long*)(*(long*)(ptr84 + 7) - 16L));
                            unsigned long* ptr85 = ptr1;
                            *(long*)(ptr85 + 7) = v1;
                            v113 = *(ptr85 + 5);
                        }
                        *(long**)(v113 * 8L + v1) = ptr82;
                        unsigned long* ptr86 = ptr1;
                        *(long*)(ptr86 + 5) = *(long*)(ptr86 + 5) + 1L;
                    }
                }
                ptr2 += 8;
                result = ptr2;
            }
            while((unsigned long)ptr2 >= v37);
        }
        if((unsigned long)ptr2 <= v17) {
            unsigned long* ptr87 = ptr1 + 12;
            do {
                v10 = (unsigned long)(*result - 16L);
                if(v10 > 0x1000L) {
                    long* ptr88 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr87, v10);
                    long* ptr89 = ptr88;
                    if(ptr88) {
                        ptr0 = ptr1;
                        ptr88[0] += 8L;
                        v12 = *(ptr0 + 6);
                        unsigned long v121 = *(ptr0 + 5);
                        if((long)v121 >= (long)v12) {
                            long v122 = (long)(v12 * 3L);
                            unsigned long* ptr90 = ptr0;
                            *(long*)(ptr0 + 6) = v122 / 2L;
                            long v123 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v122 / 2L * 8L + 16L, v122, (long)ptr0, v16, v14);
                            *(long*)(v123 + 8L) = 1L;
                            v0 = v123 + 16L;
                            long v124 = *(long*)(ptr90 + 5);
                            →memcpy();
                            long v125 = *(long*)(ptr90 + 7);
                            long v126 = *(long*)(ptr90 + 7);
                            rawDealloc_DA62HrGC5sdfCED505KyyQ((long*)0x60F060, (long*)(v125 - 16L));
                            *(long*)(ptr90 + 7) = v0;
                            v121 = *(ptr90 + 5);
                        }
                        else {
                            v0 = *(long*)(ptr0 + 7);
                        }
                        *(long**)(v121 * 8L + v0) = ptr89;
                        *(long*)(ptr1 + 5) = *(long*)(ptr1 + 5) + 1L;
                    }
                }
                ++ptr2;
                result = ptr2;
            }
            while((unsigned long)ptr2 > v17);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
__int128* mnewString(unsigned long param0) {
    __int128* result;
    long v0 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, ((long)param0 >= 7L ? param0: 7L) + 17L, &gch_IcYaEuuWivYAS86vFMTS3Q);
    →memset();
    *result = (unsigned __int128)param0 | ((unsigned __int128)((long)param0 >= 7L ? param0: 7L) << 64);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long newObjNoInit(long param0, long param1) {
    return rawNewObj_BpNS5yt3b9cMOponsUKh8aw(param0, param1, &gch_IcYaEuuWivYAS86vFMTS3Q);
}

// Stale decompilation - Refresh this view to re-decompile this code
long newObjRC1(long param0, long param1) {
    long result;
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5 = v0;
    unsigned long v6 = (unsigned long)stackSize_IV9bgfYkinlae0WZ2NZi5JA();
    if(((long)((long)v6 > 63999L ? v6 >> 7: 500L) <= (long)gvar_60F010 || (long)gvar_6118F8 >= (long)gvar_60F008) && !gvar_60F058) {
        collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(&gch_IcYaEuuWivYAS86vFMTS3Q);
    }
    long* ptr0 = (long*)rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, param1 + 16L, (long)((long)v6 > 63999L ? v6 >> 7: 500L), v1, v2, v3);
    *(ptr0 + 1) = v4;
    *ptr0 = 8L;
    →memset();
    return result;
}

long nimGC_setStackBottom() {
    unsigned char v0 = *(long*)&gch_IcYaEuuWivYAS86vFMTS3Q;
    char v1 = v0 ? 0: 1;
    char v2 = v0 >= 0x8000000000000000L;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    jump v1 ? &sub_4044F8: &sub_4044EC;
}

// Stale decompilation - Refresh this view to re-decompile this code
void nimGCvisit(long param0, long param1, long param2, long param3, long param4, long param5) {
    unsigned long v0;
    long v1;
    if(param0) {
        long v2 = v1;
        if((unsigned char)param1 != 1) {
            if(!(unsigned char)param1) {
                markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, param0 - 16L);
            }
            else if((unsigned char)param1 == 2) {
                v0 = *(unsigned long*)(param0 - 16L) - 8L;
                *(unsigned long*)(param0 - 16L) = *(unsigned long*)(param0 - 16L) - 8L;
                if(v0 <= 7L) {
                    addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, param0 - 16L);
                    return;
                }
            }
            else if((unsigned char)param1 == 3) {
                unsigned long v3 = gvar_60F048;
                v0 = gvar_60F040;
                unsigned long v4 = gvar_60F050;
                if((long)v0 >= (long)v3) {
                    gvar_60F048 = (unsigned long)((long)(v3 * 3L) / 2L);
                    long v5 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)(v3 * 3L) / 2L * 8L + 16L, v3 * 3L, param3, param4, param5);
                    *(long*)(v5 + 8L) = 1L;
                    v4 = (unsigned long)(v5 + 16L);
                    →memcpy();
                    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, gvar_60F050 - 16L);
                    gvar_60F050 = v4;
                    v0 = gvar_60F040;
                }
                *(long*)(v0 * 8L + v4) = param0 - 16L;
                ++gvar_60F040;
            }
            return;
        }
        unsigned long v6 = gvar_60F048;
        if((long)gvar_60F040 >= (long)v6) {
            gvar_60F048 = (unsigned long)((long)(v6 * 3L) / 2L);
            long v7 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)(v6 * 3L) / 2L * 8L + 16L, v6 * 3L, param3, param4, param5);
            *(long*)(v7 + 8L) = 1L;
            →memcpy();
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, gvar_60F050 - 16L);
            gvar_60F050 = (unsigned long)(v7 + 16L);
        }
        *(long*)(gvar_60F040 * 8L + gvar_60F050) = param0 - 16L;
        ++gvar_60F040;
    }
}

long nimRegisterGlobalMarker() {
    unsigned long v0 = globalMarkersLen_hgEFy3UCOBoalBh29asu5MA;
    char v1 = v0 == 3499L;
    char v2 = (long)v0 < 3499L;
    char v3 = __parity__((unsigned char)v0 - 171);
    char v4 = v0 < 3499L;
    char v5 = (((v0 - 3499L) ^ v0) & (v0 ^ 0xdabL)) < 0L;
    char v6 = (((v0 - 3499L) ^ (v0 ^ 0xdabL)) >>> 4L) & 0x1L;
    jump v1 || v2 != v5 ? &sub_4088FF: &sub_408913;
}

long nimRegisterThreadLocalMarker() {
    unsigned long v0 = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
    char v1 = v0 == 3499L;
    char v2 = (long)v0 < 3499L;
    char v3 = __parity__((unsigned char)v0 - 171);
    char v4 = v0 < 3499L;
    char v5 = (((v0 - 3499L) ^ v0) & (v0 ^ 0xdabL)) < 0L;
    char v6 = (((v0 - 3499L) ^ (v0 ^ 0xdabL)) >>> 4L) & 0x1L;
    jump v1 || v2 != v5 ? &sub_40646F: &sub_406483;
}

// Stale decompilation - Refresh this view to re-decompile this code
long nimRegisterThreadLocalMarker.part.14() {
    char v0;
    char v1;
    void* ptr0;
    long v2 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_18;
    long* ptr1 = &v0;
    char v3 = &v0 == 8L;
    char v4 = (long)&v1 < 0L;
    char v5 = __parity__((unsigned char)&v0 - 8);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&v0 < 8L;
    char v8 = (long)(long*)((long)(long*)((long)&v0 ^ (long)&v1) & (long)(long*)((long)&v0 ^ 0x8L)) < 0L;
    long v9 = echoBinSafe.constprop.24((unsigned long*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_18);
    long v10 = 1L;
    long* ptr2 = &ptr0;
    /*NO_RETURN*/ →exit(1L);
}

long prepareDealloc_0Ao1u9cpV0dTuUB5G9cEQ8eQ(long param0) {
    long result = *(long*)(param0 + 8L);
    if(*(long*)(result + 32L)) {
        ++gvar_60F058;
        result = *(long*)(result + 32L)(param0 + 16L);
        --gvar_60F058;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void raiseEOF_9b10LwJKWsyrZIEKTB9b6PGQ(long param0, long param1) {
    long* ptr0 = (long*)newObj(&NTI_LEclZrWX2FQAodlapxGITw_, 56L);
    *ptr0 = &NTI_KGSY1JdrNB7Xi8KDhXFhSg_;
    long v0 = *(ptr0 + 3);
    long* ptr1 = copyStringRC1((unsigned long*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_25);
    *(long**)(ptr0 + 3) = ptr1;
    if(v0) {
        long v1 = *(long*)(v0 - 16L);
        param1 = v0 - 16L;
        *(unsigned long*)(v0 - 16L) = (unsigned long)(v1 - 8L);
        if((unsigned long)(v1 - 8L) <= 7L) {
            addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, param1);
        }
    }
loc_408E21:
    if(!*(ptr0 + 2)) {
        *(ptr0 + 2) = "EOFError";
    }
    raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw((long)ptr0);
    addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, param1);
    goto loc_408E21;
}

// Stale decompilation - Refresh this view to re-decompile this code
long raiseException(long param0, long param1) {
    long result;
    if(!*(long*)(param0 + 16L)) {
        *(long*)(param0 + 16L) = param1;
    }
    unsigned long v0 = localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg;
    if(v0) {
        result = v0(param0, param1);
        if(!(unsigned char)result) {
            return result;
        }
    }
    unsigned long v1 = globalRaiseHook_JbO1ti4ULxrw54m4zNPbpA;
    if(v1) {
        result = v1(param0, param1);
        if((unsigned char)result) {
            return raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw.part.16(param0);
        }
    }
    else {
        result = raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw.part.16(param0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw.part.16(long* param0, unsigned long param1, long param2, long param3, long param4, long param5, long param6, long param7, long param8, long param9, long param10, long param11, long param12, long param13, long param14, long param15, long param16, long param17, long param18, long param19, long param20, long param21, long param22, long param23, long param24, long param25, long param26, long param27, long param28, long param29, long param30, long param31, long param32, long param33, long param34, long param35, long param36, long param37, long param38, long param39) {
    long result;
    long v0;
    long v1;
    long* ptr0;
    int v2;
    long v3;
    char v4;
    long* ptr1;
    long* ptr2;
    long* ptr2;
    long* ptr2;
    long* ptr2;
    long* ptr3;
    char v5;
    char v6;
    int v7;
    char v8;
    short v9;
    char v10;
    char v11;
    unsigned long v12;
    long* ptr4;
    void* ptr5;
    long* ptr6;
    unsigned long v13;
    char v14;
    char v15;
    short v16;
    char v17;
    char v18;
    char v19;
    int v20;
    unsigned long v21 = v13;
    long* ptr7 = ptr4;
    long* ptr8 = ptr6;
    long* ptr9 = param0;
    long* ptr10 = &ptr8;
    long* ptr11 = &v12;
    char v22 = &ptr3 == 0x818L;
    char v23 = (long)&v12 < 0L;
    char v24 = __parity__((unsigned char)&ptr3 - 24);
    char v25 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr8 ^ 0x7f8L) ^ (long)&v12) >>> 4L) & 0x1L);
    char v26 = (unsigned long)&ptr8 < 2040L;
    char v27 = (long)(long*)((long)(long*)((long)&ptr8 ^ (long)&v12) & (long)(long*)((long)&ptr8 ^ 0x7f8L)) < 0L;
    long v28 = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
    char v29 = v28 ? 0: 1;
    char v30 = v28 < 0L;
    char v31 = __parity__((unsigned char)v28);
    char v32 = 0;
    char v33 = 0;
    if(v29) {
        long v34 = *param0;
        char v35 = v34 == &NTI_vyjC2ukVFYc78nQPrSCc9bA_;
        char v36 = v34 < &NTI_vyjC2ukVFYc78nQPrSCc9bA_;
        char v37 = __parity__((unsigned char)v34);
        char v38 = (unsigned long)v34 < &NTI_vyjC2ukVFYc78nQPrSCc9bA_;
        char v39 = (((v34 - &NTI_vyjC2ukVFYc78nQPrSCc9bA_) ^ v34) & (v34 ^ &NTI_vyjC2ukVFYc78nQPrSCc9bA_)) < 0L;
        char v40 = (((v34 - &NTI_vyjC2ukVFYc78nQPrSCc9bA_) ^ (v34 ^ &NTI_vyjC2ukVFYc78nQPrSCc9bA_)) >>> 4L) & 0x1L;
        if(!v35) {
            char v41 = *(long*)(v34 + 16L) == &NTI_vyjC2ukVFYc78nQPrSCc9bA_;
            char v42 = *(long*)(v34 + 16L) < &NTI_vyjC2ukVFYc78nQPrSCc9bA_;
            char v43 = __parity__((unsigned char)*(long*)(v34 + 16L));
            char v44 = *(unsigned long*)(v34 + 16L) < &NTI_vyjC2ukVFYc78nQPrSCc9bA_;
            char v45 = (((*(long*)(v34 + 16L) - &NTI_vyjC2ukVFYc78nQPrSCc9bA_) ^ *(long*)(v34 + 16L)) & (*(long*)(v34 + 16L) ^ &NTI_vyjC2ukVFYc78nQPrSCc9bA_)) < 0L;
            char v46 = (((*(long*)(v34 + 16L) - &NTI_vyjC2ukVFYc78nQPrSCc9bA_) ^ (*(long*)(v34 + 16L) ^ &NTI_vyjC2ukVFYc78nQPrSCc9bA_)) >>> 4L) & 0x1L;
            if(v41) {
                unsigned long v47 = *(unsigned long*)(ptr9 + 2);
                unsigned long v48 = showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(v47, param1);
                long v49 = 1L;
                /*NO_RETURN*/ →exit();
                ptr2 = (long*)0x1E;
                ptr1 = (long*)0x1C;
                ptr9 = (long*)0x1E;
                goto loc_408518;
            }
            else {
                char v50 = *(long*)&Nim_OfCheck_CACHE22 == v34;
                char v51 = *(long*)&Nim_OfCheck_CACHE22 > v34;
                char v52 = __parity__((unsigned char)v34 - (unsigned char)*(long*)&Nim_OfCheck_CACHE22);
                char v53 = *(long*)&Nim_OfCheck_CACHE22 > (unsigned long)v34;
                char v54 = (((v34 - *(long*)&Nim_OfCheck_CACHE22) ^ v34) & (*(long*)&Nim_OfCheck_CACHE22 ^ v34)) < 0L;
                char v55 = (((v34 - *(long*)&Nim_OfCheck_CACHE22) ^ (*(long*)&Nim_OfCheck_CACHE22 ^ v34)) >>> 4L) & 0x1L;
                if(!v50) {
                    char v56 = *(long*)((char*)&Nim_OfCheck_CACHE22 + 8) == v34;
                    char v57 = *(long*)((char*)&Nim_OfCheck_CACHE22 + 8) > v34;
                    char v58 = __parity__((unsigned char)v34 - (unsigned char)*(long*)((char*)&Nim_OfCheck_CACHE22 + 8));
                    char v59 = *(long*)((char*)&Nim_OfCheck_CACHE22 + 8) > (unsigned long)v34;
                    char v60 = (((v34 - *(long*)((char*)&Nim_OfCheck_CACHE22 + 8)) ^ v34) & (*(long*)((char*)&Nim_OfCheck_CACHE22 + 8) ^ v34)) < 0L;
                    char v61 = (((v34 - *(long*)((char*)&Nim_OfCheck_CACHE22 + 8)) ^ (*(long*)((char*)&Nim_OfCheck_CACHE22 + 8) ^ v34)) >>> 4L) & 0x1L;
                    if(v56) {
                        unsigned long v47 = *(unsigned long*)(ptr9 + 2);
                        unsigned long v48 = showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(v47, param1);
                        long v49 = 1L;
                        /*NO_RETURN*/ →exit();
                        ptr2 = (long*)0x1E;
                        ptr1 = (long*)0x1C;
                        ptr9 = (long*)0x1E;
                        goto loc_408518;
                    }
                    else {
                        long v62 = &Nim_OfCheck_CACHE22;
                        long v63 = &NTI_vyjC2ukVFYc78nQPrSCc9bA_;
                        v28 = isObjSlowPath_yEa9cUwzxhGRtg9cspcfCIHg(v34, &NTI_vyjC2ukVFYc78nQPrSCc9bA_, (long*)&Nim_OfCheck_CACHE22);
                        char v64 = (unsigned char)v28 ? 0: 1;
                        char v65 = (unsigned char)v28 < 0;
                        char v66 = __parity__((unsigned char)v28);
                        char v67 = 0;
                        char v68 = 0;
                        if(!v64) {
                            unsigned long v47 = *(unsigned long*)(ptr9 + 2);
                            unsigned long v48 = showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(v47, param1);
                            long v49 = 1L;
                            /*NO_RETURN*/ →exit();
                        }
                    }
                }
                unsigned long v69 = &v8;
                long v70 = 0L;
                char v71 = 1;
                char v72 = 0;
                char v73 = 1;
                char v74 = 0;
                char v75 = 0;
                long v76 = 250L;
                unsigned long* ptr12 = *(unsigned long*)(ptr9 + 3);
                unsigned long v77 = &v8;
                unsigned __int128 v78 = gvar_40ABA0;
                v13 = *(unsigned long*)(ptr9 + 2);
                while(v76 != 0L) {
                    *(long*)&v8 = 0L;
                    v77 = &v5;
                    --v76;
                }
                *(int*)&v17 = 540700271;
                long* ptr13 = (long*)0x6974706563786520;
                *(unsigned __int128*)&v8 = v78;
                *(long*)&v19 = 7598822052043711776L;
                v8 = 0;
                char v79 = ptr12 ? 0: 1;
                char v80 = (long)ptr12 < 0L;
                char v81 = __parity__((unsigned char)ptr12);
                char v82 = 0;
                char v83 = 0;
                if(v79) {
                    ptr2 = (long*)0x1E;
                    ptr1 = (long*)0x1C;
                    ptr9 = (long*)0x1E;
                    goto loc_408518;
                }
                else {
                    ptr13 = *ptr12;
                    char v84 = ptr13 == 1971L;
                    char v85 = (long)ptr13 < 1971L;
                    char v86 = __parity__((unsigned char)ptr13 - 179);
                    char v87 = (unsigned long)ptr13 < 1971L;
                    char v88 = (long)(long*)((long)(long*)((long)(long*)((char*)ptr13 - 1971L) ^ (long)ptr13) & (long)(long*)((long)ptr13 ^ 0x7b3L)) < 0L;
                    char v89 = (long*)((long)(long*)((long)(long*)((long)(long*)((char*)ptr13 - 1971L) ^ (long)(long*)((long)ptr13 ^ 0x7b3L)) >>> 4L) & 0x1L);
                    if(!v84 && v85 == v88) {
                        ptr2 = (long*)0x1E;
                        ptr1 = (long*)0x1C;
                        ptr9 = (long*)0x1E;
                        goto loc_408518;
                    }
                    else {
                        char v90 = ptr13 ? 0: 1;
                        char v91 = (long)ptr13 < 0L;
                        char v92 = __parity__((unsigned char)ptr13);
                        char v93 = 0;
                        char v94 = 0;
                        if(v90) {
                            ptr13 = (long*)0x1C;
                            ptr1 = (long*)0x1C;
                            goto loc_4085A2;
                        }
                        else {
                            char* ptr14 = &v15;
                            param1 = (unsigned long)(ptr12 + 2);
                            char v95 = ptr13 == 8L;
                            char v96 = (long)ptr13 < 8L;
                            char v97 = __parity__((unsigned char)ptr13 - 8);
                            v4 = (unsigned long)ptr13 < 8L;
                            char v98 = (long)(long*)((long)(long*)((long)(ptr13 - 1) ^ (long)ptr13) & (long)(long*)((long)ptr13 ^ 0x8L)) < 0L;
                            char v99 = (long*)((long)(long*)((long)(long*)((long)(ptr13 - 1) ^ (long)(long*)((long)ptr13 ^ 0x8L)) >>> 4L) & 0x1L);
                        }
                    }
                }
                if(v4) {
                    char v100 = (unsigned char)ptr13 & 0x4 ? 0: 1;
                    char v101 = ((unsigned char)ptr13 & 0x4) < 0;
                    char v102 = __parity__((unsigned char)ptr13 & 0x4);
                    char v103 = 0;
                    char v104 = 0;
                    if(v100) {
                        char v105 = ptr13 ? 0: 1;
                        char v106 = (long)ptr13 < 0L;
                        char v107 = __parity__((unsigned char)ptr13);
                        char v108 = 0;
                        char v109 = 0;
                        if(!v105) {
                            long v110 = (unsigned long)*(char*)(ptr12 + 2);
                            v15 = *(char*)(ptr12 + 2);
                            char v111 = (unsigned char)ptr13 & 0x2 ? 0: 1;
                            char v112 = ((unsigned char)ptr13 & 0x2) < 0;
                            char v113 = __parity__((unsigned char)ptr13 & 0x2);
                            char v114 = 0;
                            char v115 = 0;
                            if(v111) {
                            loc_4083CC:
                                ptr13 = *ptr12;
                            loc_4083CF:
                                ptr10 = ptr13;
                                ptr13 = (long*)((char*)ptr13 + 28L);
                                char v116 = ptr13 ? 0: 1;
                                char v117 = (long)ptr13 < 0L;
                                char v118 = __parity__((unsigned char)ptr13);
                                char v119 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr10 ^ 0x1cL) ^ (long)ptr13) >>> 4L) & 0x1L);
                                char v120 = (unsigned long)ptr10 >= 18446744073709551588L;
                                char v121 = (long)(long*)((long)(long*)((long)ptr13 ^ (long)ptr10) & (long*)~(long)(long*)((long)ptr10 ^ 0x1cL)) < 0L;
                                ptr2 = ptr13;
                                char v122 = ptr13 == 1997L;
                                char v123 = (long)ptr13 < 1997L;
                                char v124 = __parity__((unsigned char)ptr13 - 205);
                                char v125 = (unsigned long)ptr13 < 1997L;
                                char v126 = (long)(long*)((long)(long*)((long)(long*)((char*)ptr13 - 1997L) ^ (long)ptr13) & (long)(long*)((long)ptr13 ^ 0x7cdL)) < 0L;
                                char v127 = (long*)((long)(long*)((long)(long*)((long)(long*)((char*)ptr13 - 1997L) ^ (long)(long*)((long)ptr13 ^ 0x7cdL)) >>> 4L) & 0x1L);
                                if(!v122 && v123 == v126) {
                                    char v128 = v13 ? 0: 1;
                                    char v129 = v13 >= 0x8000000000000000L;
                                    char v130 = __parity__((unsigned char)v13);
                                    char v131 = 0;
                                    char v132 = 0;
                                    if(!v128) {
                                        unsigned long v133 = v13;
                                        →strlen();
                                        long* ptr15 = (long*)(result + (long)ptr2);
                                        char v134 = ptr15 == 1999L;
                                        char v135 = (long)ptr15 < 1999L;
                                        char v136 = __parity__((unsigned char)ptr15 - 207);
                                        char v137 = (unsigned long)ptr15 < 1999L;
                                        char v138 = (long)(long*)((long)(long*)((long)(long*)((char*)ptr15 - 1999L) ^ (long)ptr15) & (long)(long*)((long)ptr15 ^ 0x7cfL)) < 0L;
                                        char v139 = (long*)((long)(long*)((long)(long*)((long)(long*)((char*)ptr15 - 1999L) ^ (long)(long*)((long)ptr15 ^ 0x7cfL)) >>> 4L) & 0x1L);
                                        if(v134 || v135 != v138) {
                                        loc_408400:
                                            long* ptr16 = (long*)((long)ptr2 + &v8);
                                            long v140 = v3;
                                            param1 = v13;
                                            →memcpy();
                                            unsigned long v141 = v13;
                                            →strlen();
                                            ptr10 = ptr2;
                                            ptr2 = (long*)(result + (long)ptr2);
                                            char v142 = ptr2 ? 0: 1;
                                            char v143 = (long)ptr2 < 0L;
                                            char v144 = __parity__((unsigned char)ptr2);
                                            char v145 = (long*)((long)(long*)((long)(long*)((long)(long*)(result ^ (long)ptr10) ^ (long)ptr2) >>> 4L) & 0x1L);
                                            char v146 = __carry__(result, (long)ptr10);
                                            char v147 = (long)(long*)((long)(long*)((long)ptr2 ^ (long)ptr10) & (long*)~(long)(long*)(result ^ (long)ptr10)) < 0L;
                                            ptr9 = ptr2;
                                        loc_40841E:
                                            char v148 = ptr9 == 1997L;
                                            char v149 = (long)ptr9 < 1997L;
                                            char v150 = __parity__((unsigned char)ptr9 - 205);
                                            char v151 = (unsigned long)ptr9 < 1997L;
                                            char v152 = (long)(long*)((long)(long*)((long)(long*)((char*)ptr9 - 1997L) ^ (long)ptr9) & (long)(long*)((long)ptr9 ^ 0x7cdL)) < 0L;
                                            char v153 = (long*)((long)(long*)((long)(long*)((long)(long*)((char*)ptr9 - 1997L) ^ (long)(long*)((long)ptr9 ^ 0x7cdL)) >>> 4L) & 0x1L);
                                            if((v148 || v149 != v152)) {
                                                long v154 = 2653L;
                                                *(short*)((long)ptr2 + &v8) = 2653;
                                            }
                                        }
                                        goto loc_408432;
                                    }
                                    else {
                                        char v155 = ptr13 == 1999L;
                                        char v156 = (long)ptr13 < 1999L;
                                        char v157 = __parity__((unsigned char)ptr13 - 207);
                                        char v158 = (unsigned long)ptr13 < 1999L;
                                        char v159 = (long)(long*)((long)(long*)((long)(long*)((char*)ptr13 - 1999L) ^ (long)ptr13) & (long)(long*)((long)ptr13 ^ 0x7cfL)) < 0L;
                                        char v160 = (long*)((long)(long*)((long)(long*)((long)(long*)((char*)ptr13 - 1999L) ^ (long)(long*)((long)ptr13 ^ 0x7cfL)) >>> 4L) & 0x1L);
                                        if(!v155 && v156 == v159) {
                                            goto loc_408432;
                                        }
                                    }
                                }
                                else {
                                    ptr1 = ptr13;
                                loc_4085A2:
                                    ptr9 = (long*)((char*)ptr13 + 2L);
                                    ptr2 = (long*)((char*)ptr13 + 2L);
                                loc_408518:
                                    long v161 = 23328L;
                                    *(short*)((long)ptr1 + &v8) = 23328;
                                    char v162 = v13 ? 0: 1;
                                    char v163 = v13 >= 0x8000000000000000L;
                                    char v164 = __parity__((unsigned char)v13);
                                    char v165 = 0;
                                    char v166 = 0;
                                    if(!v162) {
                                        unsigned long v167 = v13;
                                        →strlen();
                                        long* ptr17 = (long*)(result + (long)ptr2);
                                        char v168 = ptr17 == 1999L;
                                        char v169 = (long)ptr17 < 1999L;
                                        char v170 = __parity__((unsigned char)ptr17 - 207);
                                        char v171 = (unsigned long)ptr17 < 1999L;
                                        char v172 = (long)(long*)((long)(long*)((long)(long*)((char*)ptr17 - 1999L) ^ (long)ptr17) & (long)(long*)((long)ptr17 ^ 0x7cfL)) < 0L;
                                        char v173 = (long*)((long)(long*)((long)(long*)((long)(long*)((char*)ptr17 - 1999L) ^ (long)(long*)((long)ptr17 ^ 0x7cfL)) >>> 4L) & 0x1L);
                                        if(v168 || v169 != v172) {
                                            goto loc_408400;
                                        }
                                        else {
                                            goto loc_40841E;
                                        }
                                    }
                                }
                                v3 = 0L;
                                char v174 = 1;
                                char v175 = 0;
                                char v176 = 1;
                                char v177 = 0;
                                char v178 = 0;
                                goto loc_408400;
                            }
                            else {
                                param1 = (unsigned long)*(short*)((char*)((long)ptr13 + param1) - 2L);
                                *(short*)((long)ptr13 + (long)&v16) = (unsigned short)param1;
                                ptr13 = *ptr12;
                            }
                        }
                        goto loc_4083CF;
                    }
                    else {
                        long v179 = (unsigned long)*(int*)(ptr12 + 2);
                        *(int*)&v15 = *(int*)(ptr12 + 2);
                        param1 = (unsigned long)*(int*)((char*)((long)ptr13 + param1) - 4L);
                        *(int*)((long)ptr13 + (long)&v17) = (unsigned int)param1;
                    }
                }
                else {
                    long v180 = *(long*)(ptr12 + 2);
                    *(long*)&v15 = *(long*)(ptr12 + 2);
                    long v181 = *((long*)((long)ptr13 + param1) - 1);
                    *(long*)((long)ptr13 + (long)&v18) = *((long*)((long)ptr13 + param1) - 1);
                    long* ptr18 = &v14;
                    long v182 = -4L;
                    param1 -= (long)&v6;
                    long* ptr19 = &v6;
                    long* ptr20 = (long*)((long)ptr13 + (long)&v6);
                    char v183 = ptr20 ? 0: 1;
                    char v184 = (long)ptr20 < 0L;
                    char v185 = __parity__((unsigned char)ptr20);
                    char v186 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr13 ^ (long)&v6) ^ (long)ptr20) >>> 4L) & 0x1L);
                    char v187 = (long*)__carry__((long)ptr13, (long)&v6);
                    char v188 = (long)(long*)((long)(long*)((long)ptr20 ^ (long)&v6) & (long*)~(long)(long*)((long)ptr13 ^ (long)&v6)) < 0L;
                    long* ptr21 = ptr20;
                    long* ptr22 = (long*)((long)ptr20 >>> 3);
                    char v189 = (long*)((long)(long*)((long)ptr21 >>> 2L) & 0x1L);
                    char v190 = v188;
                    char v191 = ptr22 ? 0: 1;
                    char v192 = (long)ptr22 < 0L;
                    char v193 = __parity__((unsigned char)ptr22);
                    while(ptr22 != 0L) {
                        *ptr18 = *(long*)param1;
                        param1 += 8L;
                        ++ptr18;
                        ptr22 = (long*)((char*)ptr22 - 1L);
                    }
                }
                goto loc_4083CC;
            }
        }
        else {
            unsigned long v47 = *(unsigned long*)(ptr9 + 2);
            unsigned long v48 = showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(v47, param1);
            long v49 = 1L;
            /*NO_RETURN*/ →exit();
        }
    loc_408432:
        char v194 = onUnhandledException_bFrawQlTKZhLweDD36j9b8g ? 0: 1;
        char v195 = onUnhandledException_bFrawQlTKZhLweDD36j9b8g >= 0x8000000000000000L;
        char v196 = __parity__((unsigned char)onUnhandledException_bFrawQlTKZhLweDD36j9b8g);
        char v197 = onUnhandledException_bFrawQlTKZhLweDD36j9b8g < 0L;
        char v198 = 0;
        char v199 = 0;
        if(v194) {
            unsigned long v200 = &v8;
            unsigned long v201 = showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(&v8, param1);
            long v202 = 1L;
            ptr11 = &ptr5;
            /*NO_RETURN*/ →exit();
        }
        unsigned long v203 = &v8;
        do {
            v20 = *(int*)v203;
            v203 += 4L;
            v7 = v20 - 0x1010101;
            v2 = ~v20 & v7 & 0x80808080;
        }
        while(!(~v20 & v7 & 0x80808080));
        unsigned long* ptr23 = (unsigned long*)0x18;
        v12 = 7L;
        char v204 = v2 & 0x8080 ? 0: 1;
        int v205 = v204 ? v2 >>> 16: v2;
        unsigned long v206 = (unsigned long)((v204 ? v203 + 2L: v203) - ((unsigned long)__carry__((unsigned char)v205, (unsigned char)v205) + 3L) - &v8);
        if(v206 > 6L) {
            ptr23 = (unsigned long*)(v206 + 17L);
            v12 = v206;
        }
        long* ptr24 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw((unsigned long*)&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, ptr23, &gch_IcYaEuuWivYAS86vFMTS3Q);
        *(unsigned long*)&v11 = v206;
        long v207 = v206 + 1L;
        long* i = ptr24 + 2;
        *(__int128*)&ptr24[0] = (unsigned __int128)*(long*)&v11 | ((unsigned __int128)v12 << 64);
        if((unsigned int)v207 >= 8) {
            long* ptr25 = (long*)((long)(ptr24 + 3) & 0xfffffffffffffff8L);
            ptr24[2] = *(long*)&v8;
            param2 = (unsigned long)(unsigned int)v207;
            *((long*)((long)i + param2) - 1) = *(long*)(param2 + &v11);
            long* ptr26 = (long*)((long)i - (long)ptr25);
            ptr0 = (long*)(&v8 - (long)ptr26);
            for(i = (long*)(((unsigned int)ptr26 + (unsigned int)v207) >>> 3); i != 0L; i = (long*)((char*)i - 1L)) {
                *ptr25 = *ptr0;
                ++ptr0;
                ++ptr25;
            }
        }
        else if(((unsigned char)v207 & 0x4)) {
            *(int*)&ptr24[2] = *(int*)&v8;
            param2 = (unsigned long)(unsigned int)v207;
            ptr0 = (long*)*(int*)(param2 + (long)&v10);
            *(int*)((char*)((long)i + param2) - 4L) = *(int*)(param2 + (long)&v10);
        }
        else if((unsigned int)v207) {
            param2 = (unsigned long)v8;
            *(char*)&ptr24[2] = v8;
            if((unsigned char)v207 & 0x2) {
                param2 = (unsigned long)(unsigned int)v207;
                ptr0 = (long*)*(short*)(param2 + (long)&v9);
                *(short*)((char*)((long)i + param2) - 2L) = *(short*)(param2 + (long)&v9);
            }
        }
        return onUnhandledException_bFrawQlTKZhLweDD36j9b8g((long)ptr24, (long)ptr0, param2, (long)i);
    loc_408244:
        if(!(unsigned char)result) {
            return result;
        }
    loc_408258:
        unsigned long v208 = currException_9bVPeDJlYTi9bQApZpfH8wjg;
        if(v208) {
            *(long*)(v208 - 16L) = *(long*)(v208 - 16L) + 8L;
        }
        long v209 = *(ptr9 + 6);
        if(v209) {
            long v210 = v209 - 16L;
            unsigned long v211 = *(unsigned long*)(v209 - 16L) - 8L;
            *(unsigned long*)(v209 - 16L) = *(unsigned long*)(v209 - 16L) - 8L;
            if(v211 <= 7L) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, v210);
            }
        }
        *(ptr9 - 2) = *(ptr9 - 2) + 8L;
        unsigned long v212 = currException_9bVPeDJlYTi9bQApZpfH8wjg;
        *(unsigned long*)(ptr9 + 6) = v208;
        if(v212) {
            long v213 = v212 - 16L;
            unsigned long v214 = (unsigned long)(*(long*)(v212 - 16L) - 8L);
            *(unsigned long*)(v212 - 16L) = (unsigned long)(*(long*)(v212 - 16L) - 8L);
            if(v214 <= 7L) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, v213);
            }
        }
        unsigned long v215 = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
        v1 = 1L;
        currException_9bVPeDJlYTi9bQApZpfH8wjg = ptr9;
        param0 = (long*)(v215 + 16L);
        /*NO_RETURN*/ →longjmp();
    loc_4082E8:
        result = v0((long)param0, v1);
    }
    else if(!*(char*)(v28 + 216L)) {
        goto loc_408258;
    }
    else {
        v1 = *(long*)(v28 + 232L);
        v0 = *(long*)(v28 + 224L);
        if(!v1) {
            goto loc_4082E8;
        }
        else {
            result = v0((long)param0, v1);
        }
    }
    goto loc_408244;
}

unsigned long rawDealloc_DA62HrGC5sdfCED505KyyQ(long* param0, long* param1) {
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long* ptr0 = param1;
    long v5 = *(param0 + 1299);
    long* ptr1 = (long*)((long)ptr0 & 0xfffffffffffff000L);
    unsigned long result = *(unsigned long*)(ptr1 + 1);
    long v6 = v5 - result;
    if((long)result > 4040L) {
        long v7 = v2;
        long* ptr2 = param0 + 1563;
        long v8 = v1;
        long v9 = v0;
        long v10 = v3;
        char v11 = *(param0 + 1563) ? 0: 1;
        *(param0 + 1299) = v6;
        if(v11) {
            long* ptr3 = ptr2;
            *(__int128*)(param0 + 1563) = (unsigned __int128)ptr3 | ((unsigned __int128)ptr3 << 64);
        }
        unsigned long* ptr4 = *(unsigned long*)(param0 + 1557);
        long* ptr5 = param0;
        *(unsigned long*)(param0 + 0x616) = ptr2;
        if(*ptr4 != ptr4) {
            long* ptr6 = ptr1 + 4;
            *(unsigned long*)(param0 + 1559) = ptr4;
            char v12 = *(long*)(ptr4 + 2) == ptr6;
            if((*(ptr4 + 2) < (unsigned long)ptr6 || v12)) {
                *(unsigned long*)(param0 + 0x616) = ptr4;
                unsigned long* ptr7 = *(ptr4 + 1);
                if(*ptr7 != ptr7) {
                    *(unsigned long*)(param0 + 1559) = ptr7;
                    if(*(ptr7 + 2) <= (unsigned long)ptr6) {
                        *(unsigned long*)(param0 + 0x616) = ptr7;
                        long v13 = *(long*)(ptr4 + 1);
                        unsigned long* ptr8 = *(unsigned long*)(v13 + 8L);
                        if(*ptr8 != ptr8) {
                            *(unsigned long*)(param0 + 1559) = ptr8;
                            if(*(ptr8 + 2) <= (unsigned long)ptr6) {
                                *(unsigned long*)(param0 + 0x616) = ptr8;
                                long v14 = *(long*)(v13 + 8L);
                                unsigned long* ptr9 = *(unsigned long*)(v14 + 8L);
                                if(*ptr9 != ptr9) {
                                    *(unsigned long*)(param0 + 1559) = ptr9;
                                    if(*(ptr9 + 2) <= (unsigned long)ptr6) {
                                        *(unsigned long*)(param0 + 0x616) = ptr9;
                                        long v15 = *(long*)(v14 + 8L);
                                        unsigned long* ptr10 = *(unsigned long*)(v15 + 8L);
                                        if(*ptr10 != ptr10) {
                                            *(unsigned long*)(param0 + 1559) = ptr10;
                                            if(*(ptr10 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr10;
                                                long v16 = *(long*)(v15 + 8L);
                                                unsigned long* ptr11 = *(unsigned long*)(v16 + 8L);
                                                if(*ptr11 != ptr11) {
                                                    *(unsigned long*)(param0 + 1559) = ptr11;
                                                    if(*(ptr11 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr11;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v16 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr11, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v16 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr12 = *ptr10;
                                                if(*ptr12 != ptr12) {
                                                    *(unsigned long*)(param0 + 1559) = ptr12;
                                                    if(*(ptr12 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr12;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr10 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr12, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr10, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v15 + 8L, (long)ptr6);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr13 = *ptr9;
                                        if(*ptr13 != ptr13) {
                                            *(unsigned long*)(param0 + 1559) = ptr13;
                                            if(*(ptr13 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr13;
                                                long v17 = *ptr9;
                                                unsigned long* ptr14 = *(unsigned long*)(v17 + 8L);
                                                if(*ptr14 != ptr14) {
                                                    *(unsigned long*)(param0 + 1559) = ptr14;
                                                    if(*(ptr14 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr14;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v17 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr14, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v17 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr15 = *ptr13;
                                                if(*ptr15 != ptr15) {
                                                    *(unsigned long*)(param0 + 1559) = ptr15;
                                                    if(*(ptr15 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr15;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr13 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr15, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr13, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr9, (long)ptr6);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v14 + 8L, (long)ptr6);
                                }
                            }
                            else {
                                unsigned long* ptr16 = *ptr8;
                                if(*ptr16 != ptr16) {
                                    *(unsigned long*)(param0 + 1559) = ptr16;
                                    if(*(ptr16 + 2) <= (unsigned long)ptr6) {
                                        *(unsigned long*)(param0 + 0x616) = ptr16;
                                        long v18 = *ptr8;
                                        unsigned long* ptr17 = *(unsigned long*)(v18 + 8L);
                                        if(*ptr17 != ptr17) {
                                            *(unsigned long*)(param0 + 1559) = ptr17;
                                            if(*(ptr17 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr17;
                                                long v19 = *(long*)(v18 + 8L);
                                                unsigned long* ptr18 = *(unsigned long*)(v19 + 8L);
                                                if(*ptr18 != ptr18) {
                                                    *(unsigned long*)(param0 + 1559) = ptr18;
                                                    if(*(ptr18 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr18;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v19 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr18, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v19 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr19 = *ptr17;
                                                if(*ptr19 != ptr19) {
                                                    *(unsigned long*)(param0 + 1559) = ptr19;
                                                    if(*(ptr19 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr19;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr17 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr19, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr17, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v18 + 8L, (long)ptr6);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr20 = *ptr16;
                                        if(*ptr20 != ptr20) {
                                            *(unsigned long*)(param0 + 1559) = ptr20;
                                            if(*(ptr20 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr20;
                                                long v20 = *ptr16;
                                                unsigned long* ptr21 = *(unsigned long*)(v20 + 8L);
                                                if(*ptr21 != ptr21) {
                                                    *(unsigned long*)(param0 + 1559) = ptr21;
                                                    if(*(ptr21 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr21;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v20 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr21, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v20 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr22 = *ptr20;
                                                if(*ptr22 != ptr22) {
                                                    *(unsigned long*)(param0 + 1559) = ptr22;
                                                    if(*(ptr22 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr22;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr20 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr22, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr20, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr16, (long)ptr6);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr8, (long)ptr6);
                                }
                            }
                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v13 + 8L, (long)ptr6);
                        }
                    }
                    else {
                        unsigned long* ptr23 = *ptr7;
                        if(*ptr23 != ptr23) {
                            *(unsigned long*)(param0 + 1559) = ptr23;
                            if(*(ptr23 + 2) <= (unsigned long)ptr6) {
                                *(unsigned long*)(param0 + 0x616) = ptr23;
                                long v21 = *ptr7;
                                unsigned long* ptr24 = *(unsigned long*)(v21 + 8L);
                                if(*ptr24 != ptr24) {
                                    *(unsigned long*)(param0 + 1559) = ptr24;
                                    if(*(ptr24 + 2) <= (unsigned long)ptr6) {
                                        *(unsigned long*)(param0 + 0x616) = ptr24;
                                        long v22 = *(long*)(v21 + 8L);
                                        unsigned long* ptr25 = *(unsigned long*)(v22 + 8L);
                                        if(*ptr25 != ptr25) {
                                            *(unsigned long*)(param0 + 1559) = ptr25;
                                            if(*(ptr25 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr25;
                                                long v23 = *(long*)(v22 + 8L);
                                                unsigned long* ptr26 = *(unsigned long*)(v23 + 8L);
                                                if(*ptr26 != ptr26) {
                                                    *(unsigned long*)(param0 + 1559) = ptr26;
                                                    if(*(ptr26 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr26;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v23 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr26, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v23 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr27 = *ptr25;
                                                if(*ptr27 != ptr27) {
                                                    *(unsigned long*)(param0 + 1559) = ptr27;
                                                    if(*(ptr27 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr27;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr25 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr27, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr25, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v22 + 8L, (long)ptr6);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr28 = *ptr24;
                                        if(*ptr28 != ptr28) {
                                            *(unsigned long*)(param0 + 1559) = ptr28;
                                            if(*(ptr28 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr28;
                                                long v24 = *ptr24;
                                                unsigned long* ptr29 = *(unsigned long*)(v24 + 8L);
                                                if(*ptr29 != ptr29) {
                                                    *(unsigned long*)(param0 + 1559) = ptr29;
                                                    if(*(ptr29 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr29;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v24 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr29, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v24 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr30 = *ptr28;
                                                if(*ptr30 != ptr30) {
                                                    *(unsigned long*)(param0 + 1559) = ptr30;
                                                    if(*(ptr30 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr30;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr28 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr30, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr28, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr24, (long)ptr6);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v21 + 8L, (long)ptr6);
                                }
                            }
                            else {
                                unsigned long* ptr31 = *ptr23;
                                if(*ptr31 != ptr31) {
                                    *(unsigned long*)(param0 + 1559) = ptr31;
                                    if(*(ptr31 + 2) <= (unsigned long)ptr6) {
                                        *(unsigned long*)(param0 + 0x616) = ptr31;
                                        long v25 = *ptr23;
                                        unsigned long* ptr32 = *(unsigned long*)(v25 + 8L);
                                        if(*ptr32 != ptr32) {
                                            *(unsigned long*)(param0 + 1559) = ptr32;
                                            if(*(ptr32 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr32;
                                                long v26 = *(long*)(v25 + 8L);
                                                unsigned long* ptr33 = *(unsigned long*)(v26 + 8L);
                                                if(*ptr33 != ptr33) {
                                                    *(unsigned long*)(param0 + 1559) = ptr33;
                                                    if(*(ptr33 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr33;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v26 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr33, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v26 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr34 = *ptr32;
                                                if(*ptr34 != ptr34) {
                                                    *(unsigned long*)(param0 + 1559) = ptr34;
                                                    if(*(ptr34 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr34;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr32 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr34, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr32, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v25 + 8L, (long)ptr6);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr35 = *ptr31;
                                        if(*ptr35 != ptr35) {
                                            *(unsigned long*)(param0 + 1559) = ptr35;
                                            if(*(ptr35 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr35;
                                                long v27 = *ptr31;
                                                unsigned long* ptr36 = *(unsigned long*)(v27 + 8L);
                                                if(*ptr36 != ptr36) {
                                                    *(unsigned long*)(param0 + 1559) = ptr36;
                                                    if(*(ptr36 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr36;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v27 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr36, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v27 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr37 = *ptr35;
                                                if(*ptr37 != ptr37) {
                                                    *(unsigned long*)(param0 + 1559) = ptr37;
                                                    if(*(ptr37 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr37;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr35 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr37, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr35, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr31, (long)ptr6);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr23, (long)ptr6);
                                }
                            }
                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr7, (long)ptr6);
                        }
                    }
                    del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)(long*)(ptr4 + 1), (long)ptr6);
                }
            }
            else {
                unsigned long* ptr38 = *ptr4;
                if(*ptr38 != ptr38) {
                    *(unsigned long*)(param0 + 1559) = ptr38;
                    if(*(ptr38 + 2) <= (unsigned long)ptr6) {
                        *(unsigned long*)(param0 + 0x616) = ptr38;
                        long v28 = *ptr4;
                        unsigned long* ptr39 = *(unsigned long*)(v28 + 8L);
                        if(*ptr39 != ptr39) {
                            *(unsigned long*)(param0 + 1559) = ptr39;
                            if(*(ptr39 + 2) <= (unsigned long)ptr6) {
                                *(unsigned long*)(param0 + 0x616) = ptr39;
                                long v29 = *(long*)(v28 + 8L);
                                unsigned long* ptr40 = *(unsigned long*)(v29 + 8L);
                                if(*ptr40 != ptr40) {
                                    *(unsigned long*)(param0 + 1559) = ptr40;
                                    if(*(ptr40 + 2) <= (unsigned long)ptr6) {
                                        *(unsigned long*)(param0 + 0x616) = ptr40;
                                        long v30 = *(long*)(v29 + 8L);
                                        unsigned long* ptr41 = *(unsigned long*)(v30 + 8L);
                                        if(*ptr41 != ptr41) {
                                            *(unsigned long*)(param0 + 1559) = ptr41;
                                            if(*(ptr41 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr41;
                                                long v31 = *(long*)(v30 + 8L);
                                                unsigned long* ptr42 = *(unsigned long*)(v31 + 8L);
                                                if(*ptr42 != ptr42) {
                                                    *(unsigned long*)(param0 + 1559) = ptr42;
                                                    if(*(ptr42 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr42;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v31 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr42, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v31 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr43 = *ptr41;
                                                if(*ptr43 != ptr43) {
                                                    *(unsigned long*)(param0 + 1559) = ptr43;
                                                    if(*(ptr43 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr43;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr41 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr43, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr41, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v30 + 8L, (long)ptr6);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr44 = *ptr40;
                                        if(*ptr44 != ptr44) {
                                            *(unsigned long*)(param0 + 1559) = ptr44;
                                            if(*(ptr44 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr44;
                                                long v32 = *ptr40;
                                                unsigned long* ptr45 = *(unsigned long*)(v32 + 8L);
                                                if(*ptr45 != ptr45) {
                                                    *(unsigned long*)(param0 + 1559) = ptr45;
                                                    if(*(ptr45 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr45;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v32 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr45, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v32 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr46 = *ptr44;
                                                if(*ptr46 != ptr46) {
                                                    *(unsigned long*)(param0 + 1559) = ptr46;
                                                    if(*(ptr46 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr46;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr44 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr46, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr44, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr40, (long)ptr6);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v29 + 8L, (long)ptr6);
                                }
                            }
                            else {
                                unsigned long* ptr47 = *ptr39;
                                if(*ptr47 != ptr47) {
                                    *(unsigned long*)(param0 + 1559) = ptr47;
                                    if(*(ptr47 + 2) <= (unsigned long)ptr6) {
                                        *(unsigned long*)(param0 + 0x616) = ptr47;
                                        long v33 = *ptr39;
                                        unsigned long* ptr48 = *(unsigned long*)(v33 + 8L);
                                        if(*ptr48 != ptr48) {
                                            *(unsigned long*)(param0 + 1559) = ptr48;
                                            if(*(ptr48 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr48;
                                                long v34 = *(long*)(v33 + 8L);
                                                unsigned long* ptr49 = *(unsigned long*)(v34 + 8L);
                                                if(*ptr49 != ptr49) {
                                                    *(unsigned long*)(param0 + 1559) = ptr49;
                                                    if(*(ptr49 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr49;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v34 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr49, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v34 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr50 = *ptr48;
                                                if(*ptr50 != ptr50) {
                                                    *(unsigned long*)(param0 + 1559) = ptr50;
                                                    if(*(ptr50 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr50;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr48 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr50, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr48, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v33 + 8L, (long)ptr6);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr51 = *ptr47;
                                        if(*ptr51 != ptr51) {
                                            *(unsigned long*)(param0 + 1559) = ptr51;
                                            if(*(ptr51 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr51;
                                                long v35 = *ptr47;
                                                unsigned long* ptr52 = *(unsigned long*)(v35 + 8L);
                                                if(*ptr52 != ptr52) {
                                                    *(unsigned long*)(param0 + 1559) = ptr52;
                                                    if(*(ptr52 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr52;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v35 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr52, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v35 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr53 = *ptr51;
                                                if(*ptr53 != ptr53) {
                                                    *(unsigned long*)(param0 + 1559) = ptr53;
                                                    if(*(ptr53 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr53;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr51 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr53, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr51, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr47, (long)ptr6);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr39, (long)ptr6);
                                }
                            }
                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v28 + 8L, (long)ptr6);
                        }
                    }
                    else {
                        unsigned long* ptr54 = *ptr38;
                        if(*ptr54 != ptr54) {
                            *(unsigned long*)(param0 + 1559) = ptr54;
                            if(*(ptr54 + 2) <= (unsigned long)ptr6) {
                                *(unsigned long*)(param0 + 0x616) = ptr54;
                                long v36 = *ptr38;
                                unsigned long* ptr55 = *(unsigned long*)(v36 + 8L);
                                if(*ptr55 != ptr55) {
                                    *(unsigned long*)(param0 + 1559) = ptr55;
                                    if(*(ptr55 + 2) <= (unsigned long)ptr6) {
                                        *(unsigned long*)(param0 + 0x616) = ptr55;
                                        long v37 = *(long*)(v36 + 8L);
                                        unsigned long* ptr56 = *(unsigned long*)(v37 + 8L);
                                        if(*ptr56 != ptr56) {
                                            *(unsigned long*)(param0 + 1559) = ptr56;
                                            if(*(ptr56 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr56;
                                                long v38 = *(long*)(v37 + 8L);
                                                unsigned long* ptr57 = *(unsigned long*)(v38 + 8L);
                                                if(*ptr57 != ptr57) {
                                                    *(unsigned long*)(param0 + 1559) = ptr57;
                                                    if(*(ptr57 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr57;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v38 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr57, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v38 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr58 = *ptr56;
                                                if(*ptr58 != ptr58) {
                                                    *(unsigned long*)(param0 + 1559) = ptr58;
                                                    if(*(ptr58 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr58;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr56 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr58, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr56, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v37 + 8L, (long)ptr6);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr59 = *ptr55;
                                        if(*ptr59 != ptr59) {
                                            *(unsigned long*)(param0 + 1559) = ptr59;
                                            if(*(ptr59 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr59;
                                                long v39 = *ptr55;
                                                unsigned long* ptr60 = *(unsigned long*)(v39 + 8L);
                                                if(*ptr60 != ptr60) {
                                                    *(unsigned long*)(param0 + 1559) = ptr60;
                                                    if(*(ptr60 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr60;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v39 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr60, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v39 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr61 = *ptr59;
                                                if(*ptr61 != ptr61) {
                                                    *(unsigned long*)(param0 + 1559) = ptr61;
                                                    if(*(ptr61 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr61;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr59 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr61, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr59, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr55, (long)ptr6);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v36 + 8L, (long)ptr6);
                                }
                            }
                            else {
                                unsigned long* ptr62 = *ptr54;
                                if(*ptr62 != ptr62) {
                                    *(unsigned long*)(param0 + 1559) = ptr62;
                                    if(*(ptr62 + 2) <= (unsigned long)ptr6) {
                                        *(unsigned long*)(param0 + 0x616) = ptr62;
                                        long v40 = *ptr54;
                                        unsigned long* ptr63 = *(unsigned long*)(v40 + 8L);
                                        if(*ptr63 != ptr63) {
                                            *(unsigned long*)(param0 + 1559) = ptr63;
                                            if(*(ptr63 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr63;
                                                long v41 = *(long*)(v40 + 8L);
                                                unsigned long* ptr64 = *(unsigned long*)(v41 + 8L);
                                                if(*ptr64 != ptr64) {
                                                    *(unsigned long*)(param0 + 1559) = ptr64;
                                                    if(*(ptr64 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr64;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v41 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr64, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v41 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr65 = *ptr63;
                                                if(*ptr65 != ptr65) {
                                                    *(unsigned long*)(param0 + 1559) = ptr65;
                                                    if(*(ptr65 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr65;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr63 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr65, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr63, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, v40 + 8L, (long)ptr6);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr66 = *ptr62;
                                        if(*ptr66 != ptr66) {
                                            *(unsigned long*)(param0 + 1559) = ptr66;
                                            if(*(ptr66 + 2) <= (unsigned long)ptr6) {
                                                *(unsigned long*)(param0 + 0x616) = ptr66;
                                                long v42 = *ptr62;
                                                unsigned long* ptr67 = *(unsigned long*)(v42 + 8L);
                                                if(*ptr67 != ptr67) {
                                                    *(unsigned long*)(param0 + 1559) = ptr67;
                                                    if(*(ptr67 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr67;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *(long*)(v42 + 8L) + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr67, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, v42 + 8L, (long)ptr6);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr68 = *ptr66;
                                                if(*ptr68 != ptr68) {
                                                    *(unsigned long*)(param0 + 1559) = ptr68;
                                                    if(*(ptr68 + 2) <= (unsigned long)ptr6) {
                                                        *(unsigned long*)(param0 + 0x616) = ptr68;
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, *ptr66 + 8L, (long)ptr6);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA((long)param0, (long)ptr68, (long)ptr6);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v4, (long)ptr66, (long)ptr6);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr62, (long)ptr6);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr54, (long)ptr6);
                                }
                            }
                            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr38, (long)ptr6);
                        }
                    }
                    del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)ptr4, (long)ptr6);
                }
            }
            del_C66us4UEWCXp84lHW4tDLA.part.8((long)ptr5, (long)(ptr5 + 1557), (long)ptr6);
        }
        param1 = *(unsigned long*)(ptr1 + 1);
        if((long)param1 <= 0x3f000000L) {
            return (unsigned long)freeBigChunk_CAqFS1jFL1RxG80t9bOGmAA((long)ptr5, (long)ptr1);
        }
        long* ptr69 = (long*)((long)ptr1 >>> 21);
        long* ptr70 = (long*)((long)ptr1 >>> 12);
        unsigned long* ptr71 = *(unsigned long*)((long*)((unsigned long)(unsigned char)ptr69 * 8L + (long)ptr5) + 0x515);
        if(ptr71) {
            while(*(long*)(ptr71 + 1) != ptr69) {
                ptr71 = *ptr71;
                if(!ptr71) {
                    goto loc_40315B;
                }
            }
            long v43 = (unsigned long)((unsigned int)ptr70 & 0x1ff);
            long v44 = v43 >>> 6;
            *((long*)(v44 * 8L + (long)ptr71) + 2) = ~(1L << (v43 & 0x3fL)) & *((long*)(v44 * 8L + (long)ptr71) + 2);
        }
    loc_40315B:
        unsigned long v45 = *(unsigned long*)(ptr5 + 1296);
        unsigned long v46 = *(ptr5 + 0x511) >= (long)v45 ? *(unsigned long*)(ptr5 + 0x511): v45;
        *(unsigned long*)(ptr5 + 1296) = (long*)(v45 - (long)param1);
        *(unsigned long*)(ptr5 + 0x511) = v46;
        →munmap();
    }
    else {
        *(param0 + 1299) = v6;
        *(param1 + 1) = 0L;
        *param1 = *(ptr1 + 4);
        void* ptr72 = *(void**)(ptr1 + 5);
        *(unsigned long*)(ptr1 + 4) = param1;
        if((long)result <= (long)ptr72) {
            *(unsigned long*)(ptr1 + 5) = (long*)(result + (long)ptr72);
            if((long*)(result + (long)ptr72) == 4040L) {
                long v47 = *(ptr1 + 2);
                long* ptr73 = (long*)(((result >= 0x8000000000000000L ? result + 7L: result) & 0xfffffffffffffff8L) + (long)param0);
                if(*(ptr73 + 2) != ptr1) {
                    *(long*)(*(ptr1 + 3) + 16L) = v47;
                    long v48 = *(ptr1 + 2);
                    if(v48) {
                        *(long*)(v48 + 24L) = *(ptr1 + 3);
                    }
                }
                else {
                    *(ptr73 + 2) = v47;
                    if(v47) {
                        *(long*)(v47 + 24L) = 0L;
                    }
                }
                *(ptr1 + 1) = 0x1000L;
                *(__int128*)(ptr1 + 2) = 0x0X;
                result = (unsigned long)freeBigChunk_CAqFS1jFL1RxG80t9bOGmAA((long)param0, (long)ptr1);
            }
            return result;
        }
        param0 = (long*)(((result >= 0x8000000000000000L ? result + 7L: result) & 0xfffffffffffffff8L) + (long)param0);
        long* ptr74 = *(unsigned long*)(param0 + 2);
        *(unsigned long*)(ptr1 + 2) = *(unsigned long*)(param0 + 2);
        if(ptr74) {
            *(unsigned long*)(ptr74 + 3) = ptr1;
        }
        *(unsigned long*)(param0 + 2) = ptr1;
        *(ptr1 + 5) = *(ptr1 + 5) + result;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* rawNewObj_BpNS5yt3b9cMOponsUKh8aw(unsigned long* param0, unsigned long* param1, long param2) {
    long v0;
    unsigned long* ptr0;
    long v1;
    unsigned long* ptr1;
    long v2;
    unsigned long* ptr2;
    long v3 = v1;
    unsigned long v4 = (unsigned long)stackSize_IV9bgfYkinlae0WZ2NZi5JA();
    if(((long)((long)v4 > 63999L ? v4 >> 7: 500L) <= *(long*)(v0 + 16L) || *(long*)(v0 + 0x28f8L) >= (long)*(unsigned long*)(v0 + 8L)) && !*(long*)(v0 + 88L)) {
        collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(v0);
    }
    long* ptr3 = (long*)rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(v0 + 96L, (long)(long*)(param1 + 2), (long)((long)v4 > 63999L ? v4 >> 7: 500L), (long)ptr0, (long)ptr1, v2);
    *(unsigned long*)(ptr3 + 1) = ptr2;
    *ptr3 = 4L;
    unsigned long v5 = *(unsigned long*)(v0 + 16L);
    long v6 = *(long*)(v0 + 32L);
    if((long)v5 > 8L) {
        ptr2 = (unsigned long*)(v5 * 8L + v6 - 8L);
        ptr1 = *ptr2;
        unsigned long v7 = *ptr1;
        if(v7 <= 7L) {
            ptr2 = (unsigned long*)(v5 * 8L + v6 - 16L);
            ptr1 = *ptr2;
            v7 = *ptr1;
            if(v7 > 7L) {
                goto loc_407CCC;
            }
            else {
                ptr2 = (unsigned long*)(v5 * 8L + v6 - 24L);
                ptr1 = *ptr2;
                v7 = *ptr1;
                if(v7 > 7L) {
                    goto loc_407CCC;
                }
                else {
                    ptr2 = (unsigned long*)(v5 * 8L + v6 - 32L);
                    ptr1 = *ptr2;
                    v7 = *ptr1;
                    if(v7 > 7L) {
                        goto loc_407CCC;
                    }
                    else {
                        ptr2 = (unsigned long*)(v5 * 8L + v6 - 40L);
                        ptr1 = *ptr2;
                        v7 = *ptr1;
                        if(v7 > 7L) {
                            goto loc_407CCC;
                        }
                        else {
                            ptr2 = (unsigned long*)(v5 * 8L + v6 - 48L);
                            ptr1 = *ptr2;
                            v7 = *ptr1;
                            if(v7 > 7L) {
                                goto loc_407CCC;
                            }
                            else {
                                ptr2 = (unsigned long*)(v5 * 8L + v6 - 56L);
                                ptr1 = *ptr2;
                                v7 = *ptr1;
                                if(v7 > 7L) {
                                    goto loc_407CCC;
                                }
                                else {
                                    ptr0 = (unsigned long*)(v5 * 8L + v6 - 64L);
                                    param1 = *ptr0;
                                    unsigned long v8 = *param1;
                                    if(v8 > 7L) {
                                        *param1 = v8 & 0xfffffffffffffffbL;
                                        *ptr0 = ptr3;
                                    }
                                    else {
                                        unsigned long v9 = *(unsigned long*)(v0 + 24L);
                                        if((long)v5 >= (long)v9) {
                                            *(long*)(v0 + 24L) = (long)(v9 * 3L) / 2L;
                                            long v10 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)(v9 * 3L) / 2L * 8L + 16L, (long)(v9 * 3L) % 2L, 2L, (long)ptr1, v2);
                                            *(long*)(v10 + 8L) = 1L;
                                            →memcpy();
                                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, *(long*)(v0 + 32L) - 16L);
                                            *(long*)(v0 + 32L) = v10 + 16L;
                                        }
                                        *(unsigned long*)(*(long*)(v0 + 16L) * 8L + *(long*)(v0 + 32L)) = ptr3;
                                        *(long*)(v0 + 16L) = *(long*)(v0 + 16L) + 1L;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else {
        loc_407CCC:
            *ptr1 = (unsigned long*)(v7 & 0xfffffffffffffffbL);
            *ptr2 = ptr3;
        }
    }
    else {
        *(unsigned long*)(v5 * 8L + v6) = ptr3;
        *(long*)(v0 + 16L) = *(long*)(v0 + 16L) + 1L;
    }
    return ptr3 + 2;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* rawNewString(unsigned long param0) {
    long* result;
    long v0 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, ((long)param0 >= 7L ? param0: 7L) + 17L, &gch_IcYaEuuWivYAS86vFMTS3Q);
    →memset();
    *(unsigned long*)(result + 1) = (long)param0 >= 7L ? param0: 7L;
    *result = 0L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* rawNewStringNoInit(unsigned long param0) {
    long* result = (long*)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, ((long)param0 >= 7L ? param0: 7L) + 17L, &gch_IcYaEuuWivYAS86vFMTS3Q);
    *(unsigned long*)(result + 1) = (long)param0 >= 7L ? param0: 7L;
    *result = 0L;
    return result;
}

long* readLine_fPRnXwDTqtynUYGl4OixAg(long param0) {
    long* ptr0;
    long* result;
    long v0;
    long v1;
    long v2;
    char v3;
    long v4 = v1;
    long v5 = &gch_IcYaEuuWivYAS86vFMTS3Q;
    long v6 = param0;
    long v7 = 97L;
    long v8 = &strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
    long* ptr1 = &v4;
    char v9 = &ptr0 == 24L;
    char v10 = (long)&v3 < 0L;
    char v11 = __parity__((unsigned char)&ptr0 - 24);
    char v12 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v4 ^ 0x10L) ^ (long)&v3) >>> 4L) & 0x1L);
    char v13 = (unsigned long)&v4 < 16L;
    char v14 = (long)(long*)((long)(long*)((long)&v4 ^ (long)&v3) & (long)(long*)((long)&v4 ^ 0x10L)) < 0L;
    long* ptr2 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw((unsigned long*)&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, (unsigned long*)0x61, &gch_IcYaEuuWivYAS86vFMTS3Q);
    long v15 = gvar_40ABB0;
    unsigned long v16 = &result;
    long* ptr3 = ptr2 + 3;
    ptr2[2] = 0L;
    long* ptr4 = ptr2;
    long* ptr5 = (long*)((long)ptr3 & 0xfffffffffffffff8L);
    char v17 = ptr5 ? 0: 1;
    char v18 = (long)ptr5 < 0L;
    char v19 = __parity__((unsigned char)ptr5);
    char v20 = 0;
    char v21 = 0;
    *(long*)((char*)&ptr2[11] + 1) = 0L;
    unsigned int v22 = (unsigned int)ptr2;
    int v23 = (unsigned int)ptr2 - (unsigned int)ptr5;
    int v24 = 0;
    char v25 = (unsigned int)ptr2 == (unsigned int)ptr5;
    char v26 = v23 < 0;
    char v27 = __parity__((unsigned char)v23);
    char v28 = ((((unsigned int)ptr5 ^ v22) ^ v23) >>> 4) & 0x1;
    char v29 = (unsigned int)ptr5 > v22;
    char v30 = (((unsigned int)ptr5 ^ v22) & (v23 ^ v22)) < 0;
    int v31 = v23 + 97;
    int v32 = 0;
    long v33 = 0L;
    char v34 = 1;
    char v35 = 0;
    char v36 = 1;
    char v37 = 0;
    char v38 = 0;
    int v39 = v31;
    long v40 = (unsigned long)(v31 >>> 3);
    char v41 = (v39 >>> 2) & 0x1;
    char v42 = 0;
    char v43 = (unsigned int)v40 ? 0: 1;
    char v44 = (v40 >>> 31L) & 0x1L;
    char v45 = __parity__((unsigned char)v40);
    while(v40 != 0L) {
        *ptr5 = 0L;
        ++ptr5;
        --v40;
    }
    *(__int128*)&ptr4[0] = v15;
    FILE* ptr6 = (FILE*)v6;
    result = ptr4;
    long v46 = /*BAD_CALL!*/ readLine_sO1bQXVRA6RP9cdYJXNKeSw(ptr6, &result);
    char v47 = (unsigned char)v46;
    long v48 = (unsigned long)((v46 >>> 8L) & 0xffffffffffffffL);
    char v49 = v47 ? 0: 1;
    char v50 = v47 < 0;
    char v51 = __parity__(v47);
    char v52 = 0;
    char v53 = 0;
    if(v49) {
        long* ptr7 = &v0;
        /*NO_RETURN*/ raiseEOF_9b10LwJKWsyrZIEKTB9b6PGQ(param0, v2);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long readLine_sO1bQXVRA6RP9cdYJXNKeSw(FILE* param0, unsigned long param1) {
    unsigned long v0;
    char v1;
    long v2;
    long v3;
    long v4;
    long v5;
    int v6;
    unsigned long v7;
    FILE* __stream = param0;
    long v8 = v2;
    long v9 = v3;
    unsigned long v10 = param1;
    long v11 = v4;
    long v12 = 80L;
    long v13 = v5;
    long* ptr0 = *(long**)param1;
    if(ptr0) {
        v12 = (((ptr0[0] - 80L) ^ ptr0[0]) & (ptr0[0] ^ 0x50L)) < 0L == ptr0[0] < 80L ? ptr0[0]: 80L;
    }
    long* ptr1 = /*BAD_CALL!*/ setLengthStr(ptr0, v12);
    long v14 = /*BAD_CALL!*/ isOnStack_dJJW59cIgsBmT59aZrOM71Mg(v10);
    char v15 = (unsigned char)v14;
    if(!v15) {
        if(ptr1) {
            ptr1[-2] += 8L;
        }
        unsigned long v16 = *(unsigned long*)v10;
        if(v16 > 0xfffL) {
            long v17 = v16 - 16L;
            unsigned long v18 = (unsigned long)(*(long*)(v16 - 16L) - 8L);
            *(unsigned long*)(v16 - 16L) = (unsigned long)(*(long*)(v16 - 16L) - 8L);
            if(v18 <= 7L) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, v17);
            }
        }
    }
    *(long**)v10 = ptr1;
    long v19 = 0L;
    while(1) {
        long v20 = v19 + 16L;
        →memset();
        →fgets((char*)(*(long*)v10 + v20), (long)(unsigned int)v12, __stream);
        char v21 = v7 ? 0: 1;
        v1 = v21 ? 0: 1;
        if(v21) {
            →ferror();
            if(v6) {
                →clearerr();
                /*NO_RETURN*/ raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22);
                break;
            }
        }
        ptr1 = *(long**)v10;
        →memchr((void*)((long)ptr1 + v20), 10L, (size_t)v12);
        if(v7) {
            break;
        }
        else {
            v19 = v12 + v19 - 1L;
            ptr1 = setLengthStr(ptr1, v19 + 128L);
            long v22 = /*BAD_CALL!*/ isOnStack_dJJW59cIgsBmT59aZrOM71Mg(v10);
            char v23 = (unsigned char)v22;
            if(!v23) {
                if(ptr1) {
                    ptr1[-2] += 8L;
                }
                unsigned long v24 = *(unsigned long*)v10;
                if(v24 > 0xfffL) {
                    long v25 = v24 - 16L;
                    unsigned long v26 = (unsigned long)(*(long*)(v24 - 16L) - 8L);
                    *(unsigned long*)(v24 - 16L) = (unsigned long)(*(long*)(v24 - 16L) - 8L);
                    if(v26 <= 7L) {
                        addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, v25);
                    }
                }
            }
            *(long**)v10 = ptr1;
            v12 = 128L;
        }
    }
    long v27 = (long)(v7 - (long)(ptr1 + 2));
    long v28 = (long)(v7 - (long)(ptr1 + 2));
    if(v27 > 0L) {
        long v29 = v27 - 1L;
        unsigned char v30 = *(unsigned char*)((long*)((long)ptr1 + v29) + 2);
        if(*(char*)((long*)((long)ptr1 + v29) + 2) == 13) {
            long* ptr2 = setLengthStr(ptr1, v29);
            long v31 = /*BAD_CALL!*/ isOnStack_dJJW59cIgsBmT59aZrOM71Mg(v10);
            char v32 = (unsigned char)v31;
            if(!v32) {
                if(ptr2) {
                    ptr2[-2] += 8L;
                }
                unsigned long v33 = *(unsigned long*)v10;
                if(v33 > 0xfffL) {
                    param1 = v33 - 16L;
                    v0 = (unsigned long)(*(long*)(v33 - 16L) - 8L);
                    *(unsigned long*)(v33 - 16L) = (unsigned long)(*(long*)(v33 - 16L) - 8L);
                    if(v0 <= 7L) {
                        addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, (long)param1);
                    }
                }
            }
            *(long**)v10 = ptr2;
            if(v28 != 1L) {
                v1 = 1;
                return (unsigned long)v1;
            }
        }
        else {
            if(!v30 && (long)(unsigned long)(v12 + v19 - 1L) > v28 && *(char*)((char*)((long)ptr1 + v28) + 17L)) {
                v28 = v29;
            }
            goto loc_408CC6;
        }
    }
    else {
    loc_408CC6:
        long* ptr3 = setLengthStr(ptr1, v28);
        long v34 = /*BAD_CALL!*/ isOnStack_dJJW59cIgsBmT59aZrOM71Mg(v10);
        char v35 = (unsigned char)v34;
        if(!v35) {
            if(ptr3) {
                ptr3[-2] += 8L;
            }
            unsigned long v36 = *(unsigned long*)v10;
            if(v36 > 0xfffL) {
                param1 = v36 - 16L;
                v0 = (unsigned long)(*(long*)(v36 - 16L) - 8L);
                *(unsigned long*)(v36 - 16L) = (unsigned long)(*(long*)(v36 - 16L) - 8L);
                if(v0 <= 7L) {
                    addZCT_fCDI7oO1NNVXXURtxSzsRw(&gvar_60F010, (long)param1);
                    *(long**)v10 = ptr3;
                    if(v28 > 0L) {
                        v1 = 1;
                    }
                    return (unsigned long)v1;
                }
            }
        }
        *(long**)v10 = ptr3;
        if(v28 > 0L) {
            v1 = 1;
        }
    }
    return (unsigned long)v1;
}

long registerSignalHandler_njssp69aa7hvxte9bJ8uuDcg_2() {
    long result;
    →signal(2L, (__sighandler_t)&signalHandler);
    →signal(11L, (__sighandler_t)&signalHandler);
    →signal(6L, (__sighandler_t)&signalHandler);
    →signal(8L, (__sighandler_t)&signalHandler);
    →signal(4L, (__sighandler_t)&signalHandler);
    →signal(11L, (__sighandler_t)&signalHandler);
    →signal(13L, (__sighandler_t)&signalHandler);
    return result;
}

long removeChunkFromMatrix2_NyesLqu7hqkgfLqcLrQpjw(long param0, long param1, long param2, long param3) {
    long result = *(long*)(param1 + 16L);
    *(long*)((param2 * 32L + param3 + 526L) * 8L + param0 + 8L) = *(long*)(param1 + 16L);
    if(result) {
        *(long*)(result + 24L) = 0L;
    }
    else {
        long v0 = param2 * 4L + param0;
        result = (unsigned long)~(unsigned int)(1L << ((unsigned long)((unsigned int)param3 & 0x1f) & 0x3fL));
        *(int*)(v0 + 0x1014L) = ~(unsigned int)(1L << ((unsigned long)((unsigned int)param3 & 0x1f) & 0x3fL)) & *(int*)(v0 + 0x1014L);
        if(!*(int*)(v0 + 0x1014L)) {
            *(int*)(param0 + 0x1010L) = ~(unsigned int)(1L << ((unsigned long)((unsigned int)param2 & 0x1f) & 0x3fL)) & *(int*)(param0 + 0x1010L);
            *(__int128*)(param1 + 16L) = 0x0X;
            return result;
        }
    }
    *(__int128*)(param1 + 16L) = 0x0X;
    return result;
}

long selectBranch_yDNUA0V9a9a9bVLtZ9bXPT0aEg(long param0, long param1) {
    unsigned long v0;
    unsigned long v1 = **(unsigned long*)(param1 + 16L);
    if(v1 == 2L) {
        v0 = (unsigned long)*(short*)(*(long*)(param1 + 8L) + param0);
    }
    else if(v1 != 4L) {
        v0 = 0L;
        if(v1 == 1L) {
            v0 = (unsigned long)*(char*)(*(long*)(param1 + 8L) + param0);
        }
    }
    else {
        v0 = (unsigned long)*(int*)(*(long*)(param1 + 8L) + param0);
    }
    unsigned long v2 = *(unsigned long*)(param1 + 32L);
    long v3 = *(long*)(param1 + 40L);
    if(v2 > v0) {
        long v4 = *(long*)(v0 * 8L + v3);
        return v4 ? v4: *(long*)(v2 * 8L + v3);
    }
    return *(long*)(v2 * 8L + v3);
}

// Stale decompilation - Refresh this view to re-decompile this code
long* setLengthStr(long* param0, long param1) {
    long* result;
    long v0;
    long v1 = v0;
    if(param0) {
        long v2 = param0[1];
        result = param0;
        if((long)(unsigned long)(v2 & 0x3fffffffffffffffL) < (param1 >= 0L ? param1: 0L)) {
            long v3 = 4L;
            if((unsigned long)(v2 & 0x3fffffffffffffffL)) {
                v3 = (long)((unsigned long)(v2 & 0x3fffffffffffffffL) * 2L);
                if((v2 & 0x3fffffffffff0000L)) {
                    v3 = (long)(((unsigned long)(v2 & 0x3fffffffffffffffL) + v3) >> 1);
                }
            }
            long v4 = v3 > param1 ? v3: param1;
            long* ptr0 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw((unsigned long*)&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, (unsigned long*)((v4 >= 7L ? v4: 7L) + 17L), &gch_IcYaEuuWivYAS86vFMTS3Q);
            ptr0[0] = 0L;
            result = ptr0;
            ptr0[1] = v4 >= 7L ? v4: 7L;
            ptr0[0] = param0[0];
            →memcpy();
            →memset();
            result[1] = v4;
        }
    }
    else {
        result = rawNewObj_BpNS5yt3b9cMOponsUKh8aw((unsigned long*)&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, (unsigned long*)((param1 >= 7L ? param1: 7L) + 17L), &gch_IcYaEuuWivYAS86vFMTS3Q);
        →memset();
        *(__int128*)&result[0] = (unsigned __int128)param1 | ((unsigned __int128)(param1 >= 7L ? param1: 7L) << 64);
    }
    result[0] = param1 >= 0L ? param1: 0L;
    *(char*)((long*)((param1 >= 0L ? param1: 0L) + (long)result) + 2) = 0;
    return result;
}

void setPosition_kuKlONPws1O0vpPB9adzcQw() {
}

void setPosition_plJQLEbXvFqZv6Phpo1t1w() {
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(unsigned long param0, unsigned long param1) {
    void* ptr0;
    unsigned long v0;
    void* ptr1;
    long v1;
    unsigned long v2;
    unsigned long result;
    long v3 = v1;
    unsigned long v4 = param0;
    unsigned long v5 = v2;
    void* ptr2 = &v5;
    char v6 = &ptr0 == 40L;
    char v7 = (long)&v0 < 0L;
    char v8 = __parity__((unsigned char)&ptr0 - 40);
    char v9 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v5 ^ 0x10L) ^ (long)&v0) >>> 4L) & 0x1L);
    char v10 = (unsigned long)&v5 < 16L;
    char v11 = (long)(long*)((long)(long*)((long)&v5 ^ (long)&v0) & (long)(long*)((long)&v5 ^ 0x10L)) < 0L;
    unsigned long v12 = errorMessageWriter_ZXnv0JyrWe3HTd07wpSr7A;
    char v13 = v12 ? 0: 1;
    char v14 = v12 >= 0x8000000000000000L;
    char v15 = __parity__((unsigned char)v12);
    char v16 = 0;
    char v17 = 0;
    if(v13) {
        unsigned long v18 = stderr;
        →fputs();
        →ferror();
        char v19 = (unsigned int)result ? 0: 1;
        char v20 = (unsigned int)result < 0;
        char v21 = __parity__((unsigned char)result);
        char v22 = 0;
        char v23 = 0;
        if(!v19) {
            unsigned long v24 = v18;
            →clearerr();
            long v25 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_22;
            long* ptr3 = &ptr1;
            /*NO_RETURN*/ raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22);
        }
    }
    else {
        __int128* ptr4 = NULL;
        if(param0) {
            →strlen();
            long v26 = 24L;
            v0 = 7L;
            if(result > 6L) {
                v26 = result + 17L;
                v0 = result;
            }
            __int128* ptr5 = (__int128*)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, v26, &gch_IcYaEuuWivYAS86vFMTS3Q);
            unsigned long v27 = result;
            param1 = v4;
            ptr4 = ptr5;
            *ptr5 = (unsigned __int128)result | ((unsigned __int128)v0 << 64);
            →memcpy();
            v12 = errorMessageWriter_ZXnv0JyrWe3HTd07wpSr7A;
        }
        result = (unsigned long)v12((long)ptr4, (long)param1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void signalHandler(int param0, unsigned long param1) {
    unsigned long v0 = "SIGINT: Interrupted by Ctrl-C.\n";
    switch(param0) {
        case 2: {
        loc_408828:
            showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(v0, param1);
            /*NO_RETURN*/ →exit();
            v0 = "SIGSEGV: Illegal storage access. (Attempt to read from nil?)\n";
            goto loc_408828;
        }
        case 4: {
            v0 = "SIGILL: Illegal operation.\n";
            goto loc_408828;
        }
        case 6: {
            v0 = "SIGABRT: Abnormal termination.\n";
            goto loc_408828;
        }
        case 8: {
            v0 = "SIGFPE: Arithmetic error.\n";
            goto loc_408828;
        }
        case 11: {
            v0 = "SIGSEGV: Illegal storage access. (Attempt to read from nil?)\n";
            goto loc_408828;
        }
    }
    v0 = param0 != 13 ? "unknown signal\n": &gvar_40A157;
    goto loc_408828;
}

long* skew_Cfx7NvEVZIhBjBm7i89boSg(unsigned long* param0) {
    long* result = *param0;
    long v0 = *result;
    if(*(unsigned long*)(result + 4) == *(long*)(v0 + 32L)) {
        *param0 = v0;
        *result = *(long*)(v0 + 8L);
        *(unsigned long*)(*param0 + 8L) = result;
    }
    return result;
}

void sourceDatInit000() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long splitChunk_8QXhiy717OAl8WNA2X27EA(long param0, long param1, unsigned long param2) {
    long v0;
    long v1;
    long v2 = v1;
    unsigned long v3 = *(unsigned long*)(param1 + 8L);
    unsigned long* ptr0 = (unsigned long*)(param2 + param1);
    *(__int128*)(ptr0 + 2) = 0x0X;
    unsigned long v4 = v3 - param2;
    *ptr0 = param2;
    *(ptr0 + 1) = v4;
    long* ptr1 = (long*)(*(long*)(param1 + 8L) + param1);
    unsigned long* ptr2 = *(unsigned long*)((unsigned long)(unsigned char)(long*)((long)ptr1 >>> 21L) * 8L + param0 + 0x28a8L);
    if(ptr2) {
        while((long*)((long)ptr1 >>> 21) != *(long*)(ptr2 + 1)) {
            ptr2 = *ptr2;
            if(!ptr2) {
                goto loc_4018C9;
            }
        }
        if(((1L << ((unsigned long)((unsigned int)(long*)((long)ptr1 >>> 12L) & 0x1ff) & 0x3fL)) & *((long*)(((unsigned long)((unsigned int)(long*)((long)ptr1 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr2) + 2))) {
            *ptr1 = (unsigned long)((unsigned int)*ptr1 & 0x1) | v4;
        }
    }
loc_4018C9:
    *(unsigned long*)(param1 + 8L) = param2;
    long v5 = (unsigned long)(unsigned char)(long*)((long)ptr0 >>> 21L) * 8L + param0;
    long v6 = *(long*)(v5 + 0x28a8L);
    if(!v6) {
        goto loc_4019E8;
    }
    else {
        while((long*)((long)ptr0 >>> 21) != *(long*)(v6 + 8L)) {
            v6 = *(long*)v6;
            if(!v6) {
            loc_4019E8:
                v6 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 80L);
                *(long*)v6 = *(long*)(v5 + 0x28a8L);
                *(long*)(v5 + 0x28a8L) = v6;
                *(unsigned long*)(v6 + 8L) = (long*)((long)ptr0 >>> 21);
                break;
            }
        }
    }
    *(long*)(((unsigned long)((unsigned int)(long*)((long)ptr0 >>> 12L) & 0x1ff) >>> 6) * 8L + v6 + 16L) = (1L << ((unsigned long)((unsigned int)(long*)((long)ptr0 >>> 12L) & 0x1ff) & 0x3fL)) | *(long*)(((unsigned long)((unsigned int)(long*)((long)ptr0 >>> 12L) & 0x1ff) >>> 6) * 8L + v6 + 16L);
    long v7 = *(long*)(ptr0 + 1);
    long v8 = (unsigned long)(unsigned int)v7;
    if((unsigned int)v7 <= 0xffff) {
        v0 = 0L;
        if((unsigned int)v7 > 0xff) {
            v0 = 8L;
            v8 = (unsigned long)((unsigned int)v7 >>> 8);
        }
    }
    else if((unsigned int)v7 <= 0xffffff) {
        v8 = (unsigned long)((unsigned int)v8 >>> 16);
        v0 = 16L;
    }
    else {
        v0 = 24L;
        v8 = (unsigned long)((unsigned int)v7 >>> 24);
    }
    long v9 = (long)*(unsigned char*)((long)&fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ + v8);
    *(long*)(ptr0 + 3) = 0L;
    long v10 = v9 + v0;
    long v11 = (v7 >>> ((unsigned long)((unsigned int)v10 - 5) & 0x3fL)) - 32L;
    long v12 = ((v10 - 6L) * 32L + v11) * 8L + param0;
    long v13 = *(long*)(v12 + 4216L);
    *(long*)(ptr0 + 2) = *(long*)(v12 + 4216L);
    if(v13) {
        *(unsigned long*)(v13 + 24L) = ptr0;
    }
    *(unsigned long*)(v12 + 4216L) = ptr0;
    *(int*)(v10 * 4L + param0 + 0xffcL) = (unsigned int)(1L << ((unsigned long)((unsigned int)v11 & 0x1f) & 0x3fL)) | *(int*)(v10 * 4L + param0 + 0xffcL);
    *(int*)(param0 + 0x1010L) = (unsigned int)(1L << ((unsigned long)(((unsigned int)v10 - 6) & 0x1f) & 0x3fL)) | *(int*)(param0 + 0x1010L);
    return 1L << ((unsigned long)(((unsigned int)v10 - 6) & 0x1f) & 0x3fL);
}

long split_Cfx7NvEVZIhBjBm7i89boSg_2(unsigned long* param0) {
    long result = *param0;
    long* ptr0 = *(unsigned long*)(result + 8L);
    if(*(long*)(*(ptr0 + 1) + 32L) == *(unsigned long*)(result + 32L)) {
        *param0 = ptr0;
        *(long*)(result + 8L) = *ptr0;
        **param0 = result;
        result = *param0;
        *(long*)(result + 32L) = *(long*)(result + 32L) + 1L;
    }
    return result;
}

long sub_400966() {
    return gvar_60D010();
}

long sub_400AFD() {
    return 0L;
}

long sub_400B3F() {
    return 0L;
}

long sub_400B69() {
    long result = deregister_tm_clones();
    completed.7260 = 1;
    return result;
}

void sub_400B80() {
}

void sub_401267() {
}

long sub_4012C1() {
    return 0L;
}

unsigned long sub_4044EC(unsigned long param0) {
    unsigned long result;
    return result;
}

void sub_4044F8(unsigned char param0) {
    *(long*)&gch_IcYaEuuWivYAS86vFMTS3Q = param0;
}

void sub_405178() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40580C(long param0, unsigned long param1) {
    return markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, param1 - 16L);
}

void sub_405820() {
}

unsigned long sub_40646F(long param0) {
    long v0;
    *(long*)(v0 * 8L + (long)&threadLocalMarkers_pC47Nqd8F629cuTchphM5YA) = param0;
    threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw = (unsigned long)(v0 + 1L);
    return (unsigned long)(v0 + 1L);
}

long sub_406483() {
    long v0;
    long v1 = v0;
    /*NO_RETURN*/ nimRegisterThreadLocalMarker.part.14();
}

long sub_4064AF(unsigned long* param0) {
}

void sub_4064BA() {
}

long sub_4064F8() {
    return 0L;
}

unsigned long* sub_406572(long param0, unsigned long param1) {
    unsigned long* result;
    do {
        unsigned long v0 = *(result + 2);
        if(v0 <= param1 && *(result + 3) > param1) {
            return result;
        }
        result = v0 < param1 ? *(result + 1): *result;
    }
    while(*result == result);
    return NULL;
}

unsigned long sub_4088FF(long param0) {
    long v0;
    *(long*)(v0 * 8L + (long)&globalMarkers_5ghwSgpo9cT9bT7YStQDJHVQ) = param0;
    globalMarkersLen_hgEFy3UCOBoalBh29asu5MA = (unsigned long)(v0 + 1L);
    return (unsigned long)(v0 + 1L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_408913() {
    void* ptr0;
    long v0;
    long v1 = v0;
    long v2 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_23;
    long v3 = echoBinSafe.constprop.24((unsigned long*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_23);
    long v4 = 1L;
    long* ptr1 = &ptr0;
    /*NO_RETURN*/ →exit(1L);
}

long sub_40945B() {
    gvar_60ECA8 = 782;
    gvar_60D450 = 0x40A17C0000000000612560X;
    gvar_60E090 = 64L;
    gvar_60E070 = 2;
    *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_6.6132 = 0x60E100000000000060E0D0X;
    gvar_60E098 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_3.6129;
    gvar_612578 = &gvar_60E070;
    gvar_60D440 = 1;
    gvar_60D448 = 8L;
    gvar_60ECB0 = 0L;
    *(long*)&NTI_v8QUszD1sWlSIWZz7mC4bQ_ = 1;
    gvar_60E0D0 = 1;
    gvar_60E0D8 = 0L;
    gvar_60E0E8 = "ntfNoRefs";
    gvar_60E100 = 1;
    gvar_60E108 = 1L;
    gvar_60E118 = "ntfAcyclic";
    gvar_60E130 = 1;
    gvar_60EFC8 = 787;
    gvar_60EFD0 = 0x60E190000000000060ECA0X;
    gvar_612768 = 789;
    gvar_60E138 = 2L;
    gvar_60E0B0 = 0x40A1A2000000000060EFC0X;
    gvar_60E148 = "ntfEnumHole";
    gvar_60E1D0 = 0x40A1A80000000000612760X;
    gvar_60D1C0 = &gvar_60E130;
    gvar_60E180 = 3L;
    gvar_60E160 = 2;
    gvar_60E188 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_6.6132;
    gvar_60ECB8 = &gvar_60E160;
    *(long*)&NTI_MbMVByo9a9ck632Se8onTXew_ = 1;
    gvar_60E1B0 = 0L;
    gvar_60E190 = 0;
    gvar_60E0A0 = 1;
    gvar_60E0A8 = 9L;
    gvar_612770 = &NTI_TuG1vdYwChKtx4TOkRnAjw_;
    *(long*)&NTI_7JWFFgr9aqaR3U4iXEpLCag_ = 8;
    gvar_60E1C0 = 1;
    gvar_60E1C8 = 16L;
    gvar_6124F0 = 0L;
    *(long*)&NTI_kT45dHShde6Al0PdS4U9aGA_ = 48;
    gvar_6124E8 = 786;
    gvar_6195B0 = 0L;
    *(long*)&NTI_unfNsxrcATrufDZmpBq4HQ_ = 1;
    gvar_6195A8 = 782;
    *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_10.6136 = 0x60E2B0000000000060E280X;
    gvar_60E280 = 1;
    gvar_60D170 = 0x60E310000000000060E2E0X;
    gvar_60E288 = 0L;
    gvar_60E298 = "nkNone";
    gvar_60E260 = 0x40A17C00000000006195A0X;
    gvar_60E2B0 = 1;
    gvar_60E2B8 = 1L;
    gvar_60E2C8 = "nkSlot";
    gvar_60E2E0 = 1;
    gvar_60E2E8 = 2L;
    gvar_60E2F8 = "nkList";
    gvar_60E310 = 1;
    gvar_60E318 = 3L;
    gvar_60E328 = "nkCase";
    gvar_60E360 = 4L;
    gvar_60E340 = 2;
    gvar_60E368 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_10.6136;
    gvar_6195B8 = &gvar_60E340;
    gvar_60E250 = 1;
    gvar_60E258 = 0L;
    gvar_60E370 = 1;
    gvar_60E378 = 8L;
    gvar_60E3B0 = 0x40A1D00000000000612760X;
    gvar_60E380 = 0x40A1C9000000000060EEC0X;
    gvar_60E410 = 0x40A1D4000000000060EEC0X;
    gvar_60E3A0 = 1;
    *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_9.6135 = 0x60E370000000000060E250X;
    gvar_60E3A8 = 16L;
    gvar_60D190 = 0x60E3D0000000000060E3A0X;
    gvar_60EDF0 = 0L;
    gvar_60EDE8 = 797;
    gvar_60D1A0 = 0x60E430000000000060E400X;
    *(long*)&NTI_S9agCYBinaYZnGWcjTdxclg_ = 8;
    gvar_60E3D0 = 1;
    gvar_60E3D8 = 24L;
    gvar_60E3E0 = 0x40A20B000000000060EDE0X;
    gvar_60E400 = 1;
    gvar_60E408 = 32L;
    gvar_60ED70 = &NTI_mCkh9bHWX9bgGIYpwKekBD2Q_;
    *(long*)&NTI_pPliadsJkoxIPLiuFLcL3g_ = 248;
    gvar_60ED68 = 784;
    gvar_6127C8 = 794;
    gvar_60E440 = 0x40A1D800000000006126E0X;
    gvar_6126E8 = 789;
    gvar_60E200 = 0x40A1DD00000000006125A0X;
    gvar_6126F0 = &NTI_pPliadsJkoxIPLiuFLcL3g_;
    *(long*)&NTI_uNps8ABY788DreuZn29bmIg_ = 8;
    gvar_60E470 = 0x40A1E200000000006127C0X;
    gvar_60E430 = 1;
    gvar_60E438 = 40L;
    gvar_60E240 = 6L;
    gvar_60E220 = 2;
    gvar_60E248 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_9.6135;
    gvar_6124F8 = &gvar_60E220;
    gvar_6125B0 = &NTI_kT45dHShde6Al0PdS4U9aGA_;
    *(long*)&NTI_mCkh9bHWX9bgGIYpwKekBD2Q_ = 8;
    gvar_6125A8 = 789;
    gvar_60E1F0 = 1;
    gvar_60E1F8 = 24L;
    gvar_6127D0 = 0L;
    *(long*)&NTI_vr5DoT1jILTGdRlYv1OYpw_ = 8;
    gvar_60E460 = 1;
    gvar_60E468 = 32L;
    gvar_612670 = 0L;
    *(long*)&NTI_ojoeKfW4VYIm36I9cpDTQIg_ = 8;
    gvar_612668 = 793;
    gvar_60E4A0 = 0x40A1EC0000000000612660X;
    gvar_612428 = 793;
    gvar_60E830 = 0x60E1C0000000000060E0A0X;
    gvar_60E490 = 1;
    gvar_60E840 = 0x60E460000000000060E1F0X;
    gvar_60E498 = 40L;
    gvar_60E850 = 0x60E4C0000000000060E490X;
    gvar_612430 = 0L;
    *(long*)&NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_ = 8;
    gvar_60E4D0 = 0x40A1F30000000000612420X;
    gvar_60E4C0 = 1;
    gvar_60E4C8 = 48L;
    gvar_60D400 = 8L;
    TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141 = 2;
    gvar_60D408 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_2.6128;
    gvar_60EE98 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141;
    gvar_6124B0 = 0L;
    gvar_60E560 = 0x40A1FC000000000060EE20X;
    gvar_6124A8 = 0x111;
    gvar_60E5C0 = 0x40A20300000000006125E0X;
    gvar_6125E8 = 540;
    gvar_60E650 = 0x40A207000000000060EDE0X;
    *(long*)&NTI_ytyiCJqK439aF9cIibuRVpAg_ = 8;
    gvar_60E510 = 0L;
    gvar_60E4F0 = 2;
    gvar_6124B8 = &gvar_60E4F0;
    *(long*)&NTI_XEycrCsme5C8CVWAYEcdBQ_ = 56;
    gvar_612728 = 17;
    gvar_60E550 = 1;
    gvar_60E558 = 8L;
    gvar_60E580 = 1;
    gvar_60E588 = 16L;
    gvar_60E590 = 0x40A20B000000000060EDE0X;
    gvar_6125F0 = 0L;
    *(long*)&NTI_77mFvmsOLKik79ci2hXkHEg_ = 8;
    gvar_60E5B0 = 1;
    gvar_60E5B8 = 24L;
    gvar_60ECF0 = 0L;
    *(long*)&NTI_oLyohQ7O2XOvGnflOss8EA_ = 24;
    gvar_60ECE8 = 786;
    gvar_60E640 = 1;
    gvar_60E648 = 0L;
    *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_16.6140 = 0x60E670000000000060E640X;
    gvar_60E670 = 1;
    gvar_60E680 = 0x40A210000000000060EEC0X;
    gvar_60E678 = 8L;
    gvar_60D110 = &gvar_60E6A0;
    gvar_60E6A0 = 1;
    gvar_60E6A8 = 16L;
    gvar_60E6B0 = 0x40A215000000000060EDE0X;
    gvar_60E630 = 3L;
    gvar_60E610 = 2;
    gvar_60E638 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_16.6140;
    gvar_60ECF8 = &gvar_60E610;
    gvar_6123F0 = &NTI_oLyohQ7O2XOvGnflOss8EA_;
    *(long*)&NTI_uB9b75OUPRENsBAu4AnoePA_ = 8;
    gvar_6123E8 = 536;
    gvar_612408 = &Marker_tySequence_uB9b75OUPRENsBAu4AnoePA;
    gvar_60E5E0 = 1;
    gvar_60E5E8 = 32L;
    gvar_60E5F0 = 0x40A21E00000000006123E0X;
    gvar_612470 = 0L;
    *(long*)&NTI_hMQEc0FMry7Up7EoPki79aA_ = 8;
    gvar_612468 = 808;
    gvar_60E6D0 = 1;
    gvar_60E6D8 = 40L;
    gvar_60EE30 = &NTI_XEycrCsme5C8CVWAYEcdBQ_;
    gvar_60E6E0 = 0x40A2240000000000612460X;
    gvar_60E700 = 1;
    *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_15.6139 = 0x60E580000000000060E550X;
    gvar_60E708 = 48L;
    gvar_60D130 = 0x60E5E0000000000060E5B0X;
    gvar_60E710 = 0x40A22D000000000060EE20X;
    gvar_60D140 = 0x60E700000000000060E6D0X;
    gvar_60E540 = 6L;
    gvar_60E520 = 2;
    gvar_612730 = 0x60E52000000000006124A0X;
    gvar_60E548 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_15.6139;
    *(long*)&NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_ = 8;
    gvar_60EE28 = 22;
    gvar_60EE48 = &Marker_tyRef_vU9aO9cTqOMn6CBzhV8rX7Sw;
    *(long*)&NTI_qrLSDoe2oBoAqNtJ9badtnA_ = 56;
    gvar_60EDA8 = 17;
    gvar_60E750 = 0L;
    gvar_60EDB0 = 0x60E7300000000000612720X;
    gvar_60E730 = 2;
    gvar_612630 = 0x60E760000000000060EDA0X;
    *(long*)&NTI_iLZrPn9anoh9ad1MmO0RczFw_ = 56;
    gvar_612628 = 17;
    gvar_60EF10 = 0x60E7C0000000000060EF60X;
    gvar_60E780 = 0L;
    gvar_60E760 = 2;
    *(long*)&NTI_HMIVdYjdZYWskTmTQVo5BQ_ = 8;
    gvar_60ED28 = 22;
    gvar_60ED30 = &NTI_iLZrPn9anoh9ad1MmO0RczFw_;
    gvar_60ED48 = &Marker_tyRef_HMIVdYjdZYWskTmTQVo5BQ;
    *(long*)&NTI_LbeSGvgPzGzXnW9caIkJqMA_ = 56;
    gvar_60EF68 = 17;
    gvar_60E7B0 = 0L;
    gvar_60E790 = 2;
    gvar_60EF70 = 0x60E7900000000000612720X;
    *(long*)&NTI_vyjC2ukVFYc78nQPrSCc9bA_ = 56;
    gvar_60EF08 = 17;
    gvar_60E7E0 = 0L;
    gvar_60E7C0 = 2;
    *(long*)&NTI_KGSY1JdrNB7Xi8KDhXFhSg_ = 56;
    gvar_612808 = 17;
    gvar_60E810 = 0L;
    gvar_60E7F0 = 2;
    *(long*)&NTI_LEclZrWX2FQAodlapxGITw_ = 8;
    gvar_612528 = 22;
    gvar_612810 = 0x60E7F00000000000612620X;
    gvar_612530 = &NTI_KGSY1JdrNB7Xi8KDhXFhSg_;
    gvar_612548 = &Marker_tyRef_LEclZrWX2FQAodlapxGITw;
    return 786L;
}

long systemDatInit000() {
    long v0;
    long v1;
    long v2;
    __int128 v3 = (unsigned __int128)&NTI_rR5Bzr1D5krxoo1NcNyeMA_ | ((unsigned __int128)(unsigned long)(v3 >>> 0x40X) << 64);
    __int128 v4 = 0x60EEC0X;
    long v5 = 786L;
    long v6 = 799L;
    long v7 = 0L;
    char v8 = 1;
    char v9 = 0;
    char v10 = 1;
    char v11 = 0;
    char v12 = 0;
    long v13 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141;
    long v14 = 782L;
    unsigned __int128 v15 = gvar_40ABD0;
    gvar_60EE88 = 786;
    unsigned __int128 v16 = gvar_40ABE0;
    gvar_60D420 = (unsigned __int128)v0 | ((unsigned __int128)&aSize << 64);
    unsigned __int128 v17 = 0x40A177000000000060D410X;
    __int128 v18 = 0x60D410X;
    unsigned __int128 v19 = gvar_40ABF0;
    long v20 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141;
    __int128 v21 = (unsigned __int128)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141 | ((unsigned __int128)(unsigned long)(v21 >>> 0x40X) << 64);
    unsigned char v22 = (unsigned __int128)v1 | ((unsigned __int128)&gvar_60D440 << 64);
    gvar_60EE90 = 0L;
    unsigned __int128 v23 = gvar_40AC00;
    *(long*)&NTI_TuG1vdYwChKtx4TOkRnAjw_ = 56;
    long v24 = v2;
    long v25 = v2;
    __int128 v26 = (unsigned __int128)v24;
    __int128 v27 = (unsigned __int128)v24 | ((unsigned __int128)v25 << 64);
    unsigned __int128 v28 = gvar_40AC10;
    gvar_60EED0 = 0L;
    unsigned __int128 v29 = gvar_40AC20;
    *(long*)&NTI_rR5Bzr1D5krxoo1NcNyeMA_ = 8;
    unsigned __int128 v30 = gvar_40AC30;
    gvar_60EEC8 = 799;
    gvar_60D410 = 1;
    gvar_60D418 = 0L;
    gvar_612570 = 0L;
    *(long*)&NTI_jIBKr1ejBgsfM33Kxw4j7A_ = 1;
    gvar_612568 = 782;
    *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_2.6128 = v22;
    unsigned __int128 v31 = gvar_40ABC0;
    long v32 = 0L;
    long v33 = 128L;
    char v34 = 0;
loc_40913A:
    char v35 = 0;
    char v36 = 0;
    char v37 = 0;
    char v38 = 1;
    char v39 = 0;
    unsigned __int128 v40 = gvar_40AC40;
    __int128 v41 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v16) | ((unsigned __int128)(unsigned long)(v31 >>> 0x40X) << 64);
    __int128 v42 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v16) | ((unsigned __int128)((unsigned long)(v41 >>> 0x40X) + (unsigned long)(v16 >>> 0x40X)) << 64);
    __int128 v43 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v19) | ((unsigned __int128)(unsigned long)(v31 >>> 0x40X) << 64);
    __int128 v44 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v19) | ((unsigned __int128)((unsigned long)(v43 >>> 0x40X) + (unsigned long)(v19 >>> 0x40X)) << 64);
    long v45 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141;
    long v46 = &gvar_60D6E0;
    char v47 = 0;
    char v48 = 0;
    char v49 = 0;
    char v50 = 0;
    char v51 = 0;
    char v52 = 0;
    gvar_60D478 = (unsigned long)v31;
    v40 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v40) | ((unsigned __int128)(unsigned long)(v40 >>> 0x40X) << 64);
    __int128 v53 = (unsigned __int128)(unsigned long)v40 | ((unsigned __int128)((unsigned long)(v31 >>> 0x40X) + (unsigned long)(v40 >>> 0x40X)) << 64);
    __int128 v54 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v23) | ((unsigned __int128)(unsigned long)(v31 >>> 0x40X) << 64);
    __int128 v55 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v23) | ((unsigned __int128)((unsigned long)(v54 >>> 0x40X) + (unsigned long)(v23 >>> 0x40X)) << 64);
    gvar_60D680 = 1;
    __int128 v56 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v28) | ((unsigned __int128)(unsigned long)(v31 >>> 0x40X) << 64);
    __int128 v57 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v28) | ((unsigned __int128)((unsigned long)(v56 >>> 0x40X) + (unsigned long)(v28 >>> 0x40X)) << 64);
    __int128 v58 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v29) | ((unsigned __int128)(unsigned long)(v31 >>> 0x40X) << 64);
    __int128 v59 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v29) | ((unsigned __int128)((unsigned long)(v58 >>> 0x40X) + (unsigned long)(v29 >>> 0x40X)) << 64);
    movhps(gvar_60D4A8, v31);
    __int128 v60 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v30) | ((unsigned __int128)(unsigned long)(v31 >>> 0x40X) << 64);
    __int128 v61 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v30) | ((unsigned __int128)((unsigned long)(v60 >>> 0x40X) + (unsigned long)(v30 >>> 0x40X)) << 64);
    movhps(gvar_60D568, v44);
    gvar_60D4D8 = (unsigned long)v42;
    movhps(gvar_60D508, v42);
    gvar_60D538 = (unsigned long)v44;
    gvar_60D598 = (unsigned long)v55;
    movhps(gvar_60D5C8, v55);
    gvar_60D5F8 = (unsigned long)v57;
    movhps(gvar_60D628, v57);
    gvar_60D658 = (unsigned long)v59;
    movhps(gvar_60D688, v59);
    gvar_60D6B8 = (unsigned long)v61;
    movhps(gvar_60D6E8, v61);
    gvar_60D718 = (unsigned long)v53;
    gvar_60D470 = 1;
    gvar_60D4A0 = 1;
    gvar_60D4D0 = 1;
    gvar_60D500 = 1;
    gvar_60D530 = 1;
    gvar_60D560 = 1;
    gvar_60D590 = 1;
    gvar_60D5C0 = 1;
    gvar_60D5F0 = 1;
    gvar_60D620 = 1;
    gvar_60D650 = 1;
    gvar_60D6B0 = 1;
    gvar_60D6E0 = 1;
    gvar_60D710 = 1;
    gvar_60D740 = 1;
    movhps(gvar_60D748, v53);
    void* ptr0 = *(__int128*)&ptr_aTyGenericBody;
    void* ptr1 = *(__int128*)&ptr_aTyGenericParam;
    void* ptr2 = *(__int128*)&ptr_aTyArrayConstr;
    void* ptr3 = *(__int128*)&ptr_aTyChar;
    gvar_60D668 = (unsigned long)ptr0;
    void* ptr4 = *(__int128*)&ptr_aTyExpr;
    unsigned char v62 = *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_4.6131;
    movhps(gvar_60D698, ptr0);
    long v63 = "tyEnum";
    unsigned __int128 v64 = gvar_40AC50;
    gvar_60D6C8 = (unsigned long)ptr1;
    void* ptr5 = *(__int128*)&ptr_aTyTypeDesc;
    v64 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v64) | ((unsigned __int128)(unsigned long)(v64 >>> 0x40X) << 64);
    __int128 v65 = (unsigned __int128)(unsigned long)v64 | ((unsigned __int128)((unsigned long)(v31 >>> 0x40X) + (unsigned long)(v64 >>> 0x40X)) << 64);
    movhps(gvar_60D6F8, ptr1);
    movhps(gvar_60D578, ptr2);
    __int128 v66 = (unsigned __int128)((unsigned long)v65 * 2L) | ((unsigned __int128)(unsigned long)(v65 >>> 0x40X) << 64);
    movhps(gvar_60D4B8, v62);
    __int128 v67 = (unsigned __int128)((unsigned long)v66 + (unsigned long)v65) | ((unsigned __int128)((unsigned long)(v66 >>> 0x40X) * 2L) << 64);
    movhps(gvar_60D518, ptr3);
    unsigned __int128 v68 = gvar_40AC60;
    gvar_60D548 = (unsigned long)ptr2;
    __int128 v69 = (unsigned __int128)((unsigned long)v67 * 16L) | ((unsigned __int128)((unsigned long)(v67 >>> 0x40X) + (unsigned long)(v65 >>> 0x40X)) << 64);
    void* ptr6 = *(__int128*)&ptr_aTyEnum;
    v68 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v68) | ((unsigned __int128)(unsigned long)(v68 >>> 0x40X) << 64);
    __int128 v70 = (unsigned __int128)(unsigned long)v68 | ((unsigned __int128)((unsigned long)(v31 >>> 0x40X) + (unsigned long)(v68 >>> 0x40X)) << 64);
    __int128 v71 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v69) | ((unsigned __int128)((unsigned long)(v69 >>> 0x40X) * 16L) << 64);
    unsigned char v72 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v69) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v71 >>> 0x40X)) << 64);
    gvar_60D488 = (unsigned long)v62;
    gvar_60D4E8 = (unsigned long)ptr3;
    gvar_60D5A8 = (unsigned long)ptr4;
    movhps(gvar_60D5D8, ptr4);
    gvar_60D608 = (unsigned long)ptr5;
    movhps(gvar_60D638, ptr5);
    gvar_60D728 = "tyEnum";
    movhps(gvar_60D758, ptr6);
    *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_3.6129 = v72;
    __int128 v73 = (unsigned __int128)((unsigned long)v70 * 2L) | ((unsigned __int128)(unsigned long)(v70 >>> 0x40X) << 64);
    __int128 v74 = (unsigned __int128)((unsigned long)v70 * 3L) | ((unsigned __int128)((unsigned long)(v73 >>> 0x40X) * 2L) << 64);
    unsigned __int128 v75 = gvar_40AC70;
    __int128 v76 = (unsigned __int128)((unsigned long)v74 * 16L) | ((unsigned __int128)((unsigned long)(v74 >>> 0x40X) + (unsigned long)(v70 >>> 0x40X)) << 64);
    v75 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v75) | ((unsigned __int128)(unsigned long)(v75 >>> 0x40X) << 64);
    __int128 v77 = (unsigned __int128)(unsigned long)v75 | ((unsigned __int128)((unsigned long)(v31 >>> 0x40X) + (unsigned long)(v75 >>> 0x40X)) << 64);
    __int128 v78 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v76) | ((unsigned __int128)((unsigned long)(v76 >>> 0x40X) * 16L) << 64);
    unsigned __int128 v79 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v76) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v78 >>> 0x40X)) << 64);
    gvar_60D1F0 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v76) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v78 >>> 0x40X)) << 64);
    __int128 v80 = (unsigned __int128)((unsigned long)v77 * 2L) | ((unsigned __int128)(unsigned long)(v77 >>> 0x40X) << 64);
    __int128 v81 = (unsigned __int128)((unsigned long)v77 * 3L) | ((unsigned __int128)((unsigned long)(v80 >>> 0x40X) * 2L) << 64);
    unsigned __int128 v82 = gvar_40AC80;
    __int128 v83 = (unsigned __int128)((unsigned long)v81 * 16L) | ((unsigned __int128)((unsigned long)(v81 >>> 0x40X) + (unsigned long)(v77 >>> 0x40X)) << 64);
    v82 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v82) | ((unsigned __int128)(unsigned long)(v82 >>> 0x40X) << 64);
    __int128 v84 = (unsigned __int128)(unsigned long)v82 | ((unsigned __int128)((unsigned long)(v31 >>> 0x40X) + (unsigned long)(v82 >>> 0x40X)) << 64);
    __int128 v85 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v83) | ((unsigned __int128)((unsigned long)(v83 >>> 0x40X) * 16L) << 64);
    unsigned __int128 v86 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v83) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v85 >>> 0x40X)) << 64);
    gvar_60D200 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v83) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v85 >>> 0x40X)) << 64);
    __int128 v87 = (unsigned __int128)((unsigned long)v84 * 2L) | ((unsigned __int128)(unsigned long)(v84 >>> 0x40X) << 64);
    __int128 v88 = (unsigned __int128)((unsigned long)v84 * 3L) | ((unsigned __int128)((unsigned long)(v87 >>> 0x40X) * 2L) << 64);
    __int128 v89 = (unsigned __int128)((unsigned long)v84 * 48L) | ((unsigned __int128)((unsigned long)(v88 >>> 0x40X) + (unsigned long)(v84 >>> 0x40X)) << 64);
    __int128 v90 = (unsigned __int128)((unsigned long)v84 * 48L + (unsigned long)v27) | ((unsigned __int128)((unsigned long)(v89 >>> 0x40X) * 16L) << 64);
    unsigned __int128 v91 = (unsigned __int128)((unsigned long)v84 * 48L + (unsigned long)v27) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v90 >>> 0x40X)) << 64);
    gvar_60D210 = (unsigned __int128)((unsigned long)v84 * 48L + (unsigned long)v27) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v90 >>> 0x40X)) << 64);
    __int128 v92 = (unsigned __int128)((unsigned long)gvar_40AC90 + (unsigned long)v31) | ((unsigned __int128)(unsigned long)(gvar_40AC90 >>> 0x40X) << 64);
    __int128 v93 = (unsigned __int128)((unsigned long)gvar_40AC90 + (unsigned long)v31) | ((unsigned __int128)((unsigned long)(v31 >>> 0x40X) + (unsigned long)(v92 >>> 0x40X)) << 64);
    __int128 v94 = (unsigned __int128)((unsigned long)v92 * 2L) | ((unsigned __int128)(unsigned long)(v93 >>> 0x40X) << 64);
    __int128 v95 = (unsigned __int128)((unsigned long)v92 * 2L + (unsigned long)v93) | ((unsigned __int128)((unsigned long)(v94 >>> 0x40X) * 2L) << 64);
    unsigned __int128 v96 = gvar_40ACA0;
    __int128 v97 = (unsigned __int128)((unsigned long)v95 * 16L) | ((unsigned __int128)((unsigned long)(v95 >>> 0x40X) + (unsigned long)(v93 >>> 0x40X)) << 64);
    v96 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v96) | ((unsigned __int128)(unsigned long)(v96 >>> 0x40X) << 64);
    __int128 v98 = (unsigned __int128)(unsigned long)v96 | ((unsigned __int128)((unsigned long)(v31 >>> 0x40X) + (unsigned long)(v96 >>> 0x40X)) << 64);
    __int128 v99 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v97) | ((unsigned __int128)((unsigned long)(v97 >>> 0x40X) * 16L) << 64);
    unsigned __int128 v100 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v97) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v99 >>> 0x40X)) << 64);
    gvar_60D220 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v97) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v99 >>> 0x40X)) << 64);
    __int128 v101 = (unsigned __int128)((unsigned long)v98 * 2L) | ((unsigned __int128)(unsigned long)(v98 >>> 0x40X) << 64);
    __int128 v102 = (unsigned __int128)((unsigned long)v98 * 3L) | ((unsigned __int128)((unsigned long)(v101 >>> 0x40X) * 2L) << 64);
    unsigned __int128 v103 = gvar_40ACB0;
    __int128 v104 = (unsigned __int128)((unsigned long)v102 * 16L) | ((unsigned __int128)((unsigned long)(v102 >>> 0x40X) + (unsigned long)(v98 >>> 0x40X)) << 64);
    v103 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v103) | ((unsigned __int128)(unsigned long)(v103 >>> 0x40X) << 64);
    __int128 v105 = (unsigned __int128)(unsigned long)v103 | ((unsigned __int128)((unsigned long)(v31 >>> 0x40X) + (unsigned long)(v103 >>> 0x40X)) << 64);
    __int128 v106 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v104) | ((unsigned __int128)((unsigned long)(v104 >>> 0x40X) * 16L) << 64);
    unsigned __int128 v107 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v104) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v106 >>> 0x40X)) << 64);
    gvar_60D230 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v104) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v106 >>> 0x40X)) << 64);
    __int128 v108 = (unsigned __int128)((unsigned long)v105 * 2L) | ((unsigned __int128)(unsigned long)(v105 >>> 0x40X) << 64);
    __int128 v109 = (unsigned __int128)((unsigned long)v105 * 3L) | ((unsigned __int128)((unsigned long)(v108 >>> 0x40X) * 2L) << 64);
    unsigned __int128 v110 = gvar_40ACC0;
    __int128 v111 = (unsigned __int128)((unsigned long)v109 * 16L) | ((unsigned __int128)((unsigned long)(v109 >>> 0x40X) + (unsigned long)(v105 >>> 0x40X)) << 64);
    v110 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v110) | ((unsigned __int128)(unsigned long)(v110 >>> 0x40X) << 64);
    __int128 v112 = (unsigned __int128)(unsigned long)v110 | ((unsigned __int128)((unsigned long)(v31 >>> 0x40X) + (unsigned long)(v110 >>> 0x40X)) << 64);
    __int128 v113 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v111) | ((unsigned __int128)((unsigned long)(v111 >>> 0x40X) * 16L) << 64);
    unsigned __int128 v114 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v111) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v113 >>> 0x40X)) << 64);
    gvar_60D240 = (unsigned __int128)((unsigned long)v27 + (unsigned long)v111) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v113 >>> 0x40X)) << 64);
    v31 = (unsigned __int128)((unsigned long)v31 + (unsigned long)v15) | ((unsigned __int128)(unsigned long)(v31 >>> 0x40X) << 64);
    __int128 v115 = (unsigned __int128)(unsigned long)v31 | ((unsigned __int128)((unsigned long)(v31 >>> 0x40X) + (unsigned long)(v15 >>> 0x40X)) << 64);
    __int128 v116 = (unsigned __int128)((unsigned long)v112 * 2L) | ((unsigned __int128)(unsigned long)(v112 >>> 0x40X) << 64);
    __int128 v117 = (unsigned __int128)((unsigned long)v112 * 3L) | ((unsigned __int128)((unsigned long)(v116 >>> 0x40X) * 2L) << 64);
    __int128 v118 = (unsigned __int128)((unsigned long)v112 * 48L) | ((unsigned __int128)((unsigned long)(v117 >>> 0x40X) + (unsigned long)(v112 >>> 0x40X)) << 64);
    __int128 v119 = (unsigned __int128)((unsigned long)v112 * 48L + (unsigned long)v27) | ((unsigned __int128)((unsigned long)(v118 >>> 0x40X) * 16L) << 64);
    unsigned __int128 v120 = (unsigned __int128)((unsigned long)v112 * 48L + (unsigned long)v27) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v119 >>> 0x40X)) << 64);
    gvar_60D250 = (unsigned __int128)((unsigned long)v112 * 48L + (unsigned long)v27) | ((unsigned __int128)((unsigned long)(v27 >>> 0x40X) + (unsigned long)(v119 >>> 0x40X)) << 64);
    char v121 = 0;
    char v122 = 1;
    char v123 = 0;
    char v124 = 1;
    char v125 = 0;
    char v126 = 0;
    goto loc_40913A;
}

// Stale decompilation - Refresh this view to re-decompile this code
long systemInit000() {
    long* ptr0;
    char v0;
    void* ptr1;
    long result;
    long* ptr2 = &ptr0;
    char v1 = &ptr0 == 24L;
    char v2 = (long)&v0 < 0L;
    char v3 = __parity__((unsigned char)&ptr0 - 24);
    char v4 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x18L) ^ (long)&v0) >>> 4L) & 0x1L);
    char v5 = (unsigned long)&ptr0 < 24L;
    char v6 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v0) & (long)(long*)((long)&ptr0 ^ 0x18L)) < 0L;
    unsigned long v7 = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
    char v8 = v7 == 3499L;
    char v9 = (long)v7 < 3499L;
    char v10 = __parity__((unsigned char)v7 - 171);
    char v11 = v7 < 3499L;
    char v12 = (((v7 - 3499L) ^ v7) & (v7 ^ 0xdabL)) < 0L;
    char v13 = (((v7 - 3499L) ^ (v7 ^ 0xdabL)) >>> 4L) & 0x1L;
    if((v8 || v9 != v12)) {
        *(long*)(v7 * 8L + (long)&threadLocalMarkers_pC47Nqd8F629cuTchphM5YA) = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_17;
        threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw = v7 + 1L;
        nimvm_IAxmsqnME4Jmed24hOgrFQ = 0;
        genericReset(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, &NTI_TuG1vdYwChKtx4TOkRnAjw_);
        gvar_6126A8 = 540;
        *(long*)&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg = 8;
        nimGC_setStackBottom();
        initGC_njssp69aa7hvxte9bJ8uuDcg();
        →signal(2L, (__sighandler_t)&signalHandler);
        →signal(11L, (__sighandler_t)&signalHandler);
        →signal(6L, (__sighandler_t)&signalHandler);
        →signal(8L, (__sighandler_t)&signalHandler);
        →signal(4L, (__sighandler_t)&signalHandler);
        →signal(11L, (__sighandler_t)&signalHandler);
        →signal(13L, (__sighandler_t)&signalHandler);
        return result;
    }
    long* ptr3 = &ptr1;
    result = /*NO_RETURN*/ nimRegisterThreadLocalMarker.part.14();
}

// Stale decompilation - Refresh this view to re-decompile this code
__int128* toNimStr(long param0, unsigned long param1) {
    __int128* result = (__int128*)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, ((long)param1 >= 7L ? param1: 7L) + 17L, &gch_IcYaEuuWivYAS86vFMTS3Q);
    *result = (unsigned __int128)param1 | ((unsigned __int128)((long)param1 >= 7L ? param1: 7L) << 64);
    →memcpy();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long unmarkStackAndRegisters_zoTIuavlrCHyw3B8MBaLJA_6(long param0) {
    long v0;
    long v1 = v0;
    unsigned long result = *(unsigned long*)(param0 + 40L);
    unsigned long* ptr0 = *(unsigned long*)(param0 + 56L);
    long* ptr1 = (long*)(result * 8L + (long)ptr0);
    if((long)result > 0L) {
        do {
            unsigned long* ptr2 = *ptr0;
            result = ptr2[0] - 8L;
            ptr2[0] -= 8L;
            if(result <= 7L) {
                result = addZCT_fCDI7oO1NNVXXURtxSzsRw((unsigned long*)&gvar_60F010, ptr2);
            }
            ++ptr0;
        }
        while(ptr0 != ptr1);
    }
    *(long*)(param0 + 40L) = 0L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long unsureAsgnRef(unsigned long param0, unsigned long* param1) {
    long v0;
    unsigned long* ptr0;
    long v1 = v0;
    long result = isOnStack_dJJW59cIgsBmT59aZrOM71Mg(param0);
    if(!(unsigned char)result) {
        if(ptr0) {
            ptr0[-2] += 8L;
        }
        result = *(long*)param0;
        if((unsigned long)result > 0xfffL) {
            unsigned long v2 = (unsigned long)(*(long*)(result - 16L) - 8L);
            *(unsigned long*)(result - 16L) = (unsigned long)(*(long*)(result - 16L) - 8L);
            if(v2 <= 7L) {
                result = (long)addZCT_fCDI7oO1NNVXXURtxSzsRw((unsigned long*)&gvar_60F010, (unsigned long*)(result - 16L));
                *(unsigned long**)param0 = ptr0;
                return result;
            }
        }
    }
    *(unsigned long**)param0 = ptr0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long writeToStdErr_7HRVfGfZT2rSmBdcLxl8TA(char* __s) {
    long v0;
    FILE* ptr0;
    unsigned long* ptr1;
    long result;
    FILE* ptr2 = ptr0;
    FILE* ptr3 = stderr;
    FILE* __stream = stderr;
    →fputs(__s, __stream);
    FILE* __stream1 = ptr3;
    →ferror(__stream1);
    char v1 = (unsigned int)result ? 0: 1;
    char v2 = (unsigned int)result < 0;
    char v3 = __parity__((unsigned char)result);
    char v4 = 0;
    char v5 = 0;
    if(!v1) {
        FILE* __stream2 = ptr3;
        →clearerr(__stream2);
        long v6 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_22;
        long* ptr4 = &v0;
        /*NO_RETURN*/ raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22, ptr1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long write_ADGLlEJAOtGNWWur8rrJfg(FILE* param0, unsigned long* param1) {
    long v0;
    FILE* ptr0;
    long result;
    FILE* ptr1 = ptr0;
    FILE* ptr2 = param0;
    char* __s = (char*)param1;
    FILE* __stream = ptr2;
    →fputs(__s, __stream);
    FILE* __stream1 = ptr2;
    →ferror(__stream1);
    char v1 = (unsigned int)result ? 0: 1;
    char v2 = (unsigned int)result < 0;
    char v3 = __parity__((unsigned char)result);
    char v4 = 0;
    char v5 = 0;
    if(!v1) {
        FILE* __stream2 = ptr2;
        →clearerr(__stream2);
        long v6 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_22;
        long* ptr3 = &v0;
        /*NO_RETURN*/ raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22, param1);
    }
    return result;
}
