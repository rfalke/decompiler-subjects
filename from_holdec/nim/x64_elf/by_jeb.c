
long Marker_tyRef_HMIVdYjdZYWskTmTQVo5BQ(long param0, long param1) {
    long* ptr0;
    long result;
    long v0;
    long v1;
    long v2;
    long v3 = v2;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 8L), param1 & 0xFFL);
    long v4 = *(long*)(param0 + 24L);
    if(!v4) {
    loc_405D58:
        long v5 = *(long*)(param0 + 32L);
        if(v5) {
            ptr0 = (long*)(v5 - 16L);
            if((unsigned char)param1 == 1) {
            loc_405EC0:
                v0 = gvar_60F040;
            loc_405CBC:
                long v6 = gvar_60F048;
                void* __dest = gvar_60F050;
                if(v6 <= v0) {
                    gvar_60F048 = v6 * 3L / 2L;
                    long v7 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v6 * 3L / 2L * 8L + 16L);
                    *(long*)(v7 + 8L) = 1L;
                    __dest = (void*)(v7 + 16L);
                    →memcpy(__dest, gvar_60F050, (size_t)(gvar_60F040 * 8L));
                    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(gvar_60F050 - 16L));
                    gvar_60F050 = __dest;
                    v0 = gvar_60F040;
                }
                *(long**)(v0 * 8L + (long)__dest) = ptr0;
                ++gvar_60F040;
                doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 48L), param1 & 0xFFL);
                return result;
            }
            else if(!(unsigned char)param1) {
                markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)ptr0);
                doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 48L), param1 & 0xFFL);
                return result;
            }
            else if((unsigned char)param1 == 2) {
            loc_405DD0:
                v1 = ptr0[0] - 8L;
                ptr0[0] -= 8L;
            }
            else if((unsigned char)param1 == 3) {
                goto loc_405EC0;
            }
            else {
                doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 48L), param1 & 0xFFL);
                return result;
            }
            if((unsigned long)v1 <= 7L) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, ptr0);
            }
        }
    }
    else if((unsigned char)param1 == 1) {
        long v8 = gvar_60F048;
        if(gvar_60F040 >= v8) {
            gvar_60F048 = v8 * 3L / 2L;
            long v9 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v8 * 3L / 2L * 8L + 16L);
            *(long*)(v9 + 8L) = 1L;
            →memcpy((void*)(v9 + 16L), gvar_60F050, (size_t)(gvar_60F040 * 8L));
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(gvar_60F050 - 16L));
            gvar_60F050 = (void*)(v9 + 16L);
        }
        *(long**)(gvar_60F040 * 8L + gvar_60F050) = (long*)(v4 - 16L);
    loc_405CA0:
        v0 = (long)(gvar_60F040 + 1L);
        gvar_60F040 = (long)(gvar_60F040 + 1L);
        long v10 = *(long*)(param0 + 32L);
        ptr0 = (long*)(v10 - 16L);
        if(v10) {
            goto loc_405CBC;
        }
    }
    else if(!(unsigned char)param1) {
        markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)(long*)(v4 - 16L));
        result = *(long*)(param0 + 32L);
        ptr0 = (long*)(result - 16L);
        if(result) {
            markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)ptr0);
        }
    }
    else if((unsigned char)param1 == 2) {
        unsigned long v11 = (unsigned long)(*(long*)(v4 - 16L) - 8L);
        *(unsigned long*)(v4 - 16L) = (unsigned long)(*(long*)(v4 - 16L) - 8L);
        if(v11 <= 7L) {
            addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, (long*)(v4 - 16L));
        }
        long v12 = *(long*)(param0 + 32L);
        ptr0 = (long*)(v12 - 16L);
        if(v12) {
            goto loc_405DD0;
        }
    }
    else if((unsigned char)param1 != 3) {
        goto loc_405D58;
    }
    else {
        long v13 = gvar_60F048;
        long v14 = gvar_60F040;
        void* __dest1 = gvar_60F050;
        if(v14 >= v13) {
            gvar_60F048 = v13 * 3L / 2L;
            long v15 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v13 * 3L / 2L * 8L + 16L);
            *(long*)(v15 + 8L) = 1L;
            __dest1 = (void*)(v15 + 16L);
            →memcpy(__dest1, gvar_60F050, (size_t)(gvar_60F040 * 8L));
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(gvar_60F050 - 16L));
            gvar_60F050 = __dest1;
            v14 = gvar_60F040;
        }
        *(long**)(v14 * 8L + (long)__dest1) = (long*)(v4 - 16L);
        goto loc_405CA0;
    }
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 48L), param1 & 0xFFL);
    return result;
}

void Marker_tyRef_LEclZrWX2FQAodlapxGITw(long param0, char param1) {
    long v0;
    long* ptr0;
    long v1;
    long v2;
    long* ptr1;
    long v3;
    long v4;
    char v5;
    long v6;
    long v7;
    long v8 = v4;
    long v9 = v7;
    long v10 = (unsigned long)param1 | ((unsigned long)v6 << 8);
    unsigned long* ptr2 = &v5;
    long v11 = *(long*)(param0 + 8L);
    if(v11) {
        ptr1 = (long*)(v11 - 16L);
        if(param1 == 1) {
            long v12 = gvar_60F048;
            if(gvar_60F040 >= v12) {
                gvar_60F048 = v12 * 3L / 2L;
                long v13 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v12 * 3L / 2L * 8L + 16L);
                *(long*)(v13 + 8L) = 1L;
                →memcpy((void*)(v13 + 16L), gvar_60F050, (size_t)(gvar_60F040 * 8L));
                ptr2 = &v3;
                rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(gvar_60F050 - 16L));
                gvar_60F050 = (void*)(v13 + 16L);
            }
            v2 = 1L;
            *(long**)(gvar_60F040 * 8L + gvar_60F050) = ptr1;
            ++gvar_60F040;
            v1 = *(long*)(param0 + 24L);
            goto loc_405976;
        }
        else if(!param1) {
            markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)ptr1);
            ptr2 = &v3;
            doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), 0L);
            long v14 = *(long*)(param0 + 32L);
            ptr0 = (long*)(v14 - 16L);
            if(v14) {
                ptr2 = &v3;
                markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)ptr0);
            }
            goto loc_4058BF;
        }
        else if(param1 == 2) {
            goto loc_4059C4;
        }
        else if(param1 == 3) {
            goto loc_4058D0;
        }
    }
    ptr2 = &v3;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), (unsigned long)param1 & 0xffffffffL);
    long v15 = *(long*)(param0 + 32L);
    if(v15) {
        ptr0 = (long*)(v15 - 16L);
        if((unsigned char)v10 == 1) {
            goto loc_40598C;
        }
        else {
            if(!(unsigned char)v10) {
                ptr2 = &v3;
                markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)ptr0);
                goto loc_4058BF;
            }
            else {
                if((unsigned char)v10 != 2) {
                    if((unsigned char)v10 == 3) {
                        goto loc_40598C;
                    }
                    else {
                        goto loc_4058BF;
                    loc_4059C4:
                        unsigned long v16 = (unsigned long)(*(long*)(v11 - 16L) - 8L);
                        *(unsigned long*)(v11 - 16L) = (unsigned long)(*(long*)(v11 - 16L) - 8L);
                        if(v16 <= 7L) {
                            addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, ptr1);
                        }
                        ptr2 = &v3;
                        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), 2L);
                        long v17 = *(long*)(param0 + 32L);
                        ptr0 = (long*)(v17 - 16L);
                        if(!v17) {
                            goto loc_4058BF;
                        }
                    }
                }
                v0 = ptr0[0] - 8L;
                ptr0[0] -= 8L;
            }
            if((unsigned long)v0 <= 7L) {
                ptr2 = &v3;
                addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, ptr0);
            }
        }
    }
loc_4058BF:
    ptr2 += 5;
    /*BAD_CALL!*/ doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 48L), (unsigned long)param1 & 0xffffffffL);
loc_4058D0:
    long v18 = gvar_60F048;
    long v19 = gvar_60F040;
    void* __dest = gvar_60F050;
    if(v19 >= v18) {
        gvar_60F048 = v18 * 3L / 2L;
        --ptr2;
        *ptr2 = &loc_405914;
        long v20 = /*BAD_CALL!*/ rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v18 * 3L / 2L * 8L + 16L);
        *(long*)(v20 + 8L) = 1L;
        __dest = (void*)(v20 + 16L);
        void* __src = gvar_60F050;
        size_t __n = (size_t)(gvar_60F040 * 8L);
        --ptr2;
        *ptr2 = &loc_40593E;
        /*BAD_CALL!*/ →memcpy(__dest, __src, __n);
        long* ptr3 = (long*)(gvar_60F050 - 16L);
        --ptr2;
        *ptr2 = &loc_405953;
        /*BAD_CALL!*/ rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, ptr3);
        gvar_60F050 = __dest;
        v19 = gvar_60F040;
    }
    *(long**)(v19 * 8L + (long)__dest) = ptr1;
    v2 = 3L;
    ++gvar_60F040;
    v1 = *(long*)(param0 + 24L);
loc_405976:
    --ptr2;
    *ptr2 = &loc_40597B;
    /*BAD_CALL!*/ doOperation_3F8QeaTyYrJJF2gjBr6b8A(v1, v2);
    long v21 = *(long*)(param0 + 32L);
    ptr0 = (long*)(v21 - 16L);
    if(v21) {
    loc_40598C:
        long v22 = gvar_60F048;
        long v23 = gvar_60F040;
        unsigned long v24 = gvar_60F050;
        if(v23 < v22) {
            *(long**)(v23 * 8L + v24) = ptr0;
        }
        else {
            gvar_60F048 = v22 * 3L / 2L;
            --ptr2;
            *ptr2 = &loc_405A5A;
            long v25 = /*BAD_CALL!*/ rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v22 * 3L / 2L * 8L + 16L);
            *(long*)(v25 + 8L) = 1L;
            void* __src1 = gvar_60F050;
            size_t __n1 = (size_t)(gvar_60F040 * 8L);
            --ptr2;
            *ptr2 = &loc_405A84;
            /*BAD_CALL!*/ →memcpy((void*)(v25 + 16L), __src1, __n1);
            long* ptr4 = (long*)(gvar_60F050 - 16L);
            --ptr2;
            *ptr2 = &loc_405A99;
            /*BAD_CALL!*/ rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, ptr4);
            unsigned long v26 = gvar_60F040;
            gvar_60F050 = (void*)(v25 + 16L);
            *(long**)(v26 * 8L + v25 + 16L) = ptr0;
        }
        ++gvar_60F040;
    }
    goto loc_4058BF;
}

long Marker_tyRef_vU9aO9cTqOMn6CBzhV8rX7Sw(long param0, char param1, long param2) {
    long v0;
    long v1;
    long* ptr0;
    long v2;
    char v3;
    long v4;
    long v5;
    long v6;
    long v7 = v6;
    long v8 = (unsigned long)param1 | ((unsigned long)v5 << 8);
    unsigned long* ptr1 = &v3;
    long v9 = *(long*)(param0 + 8L);
    if(!v9) {
    loc_405F1B:
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), (unsigned long)param1 & 0xffffffffL);
        ptr1 = &v4;
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 32L), (unsigned long)param1 & 0xffffffffL);
        long v10 = *(long*)(param0 + 48L);
        if(v10) {
            ptr0 = (long*)(v10 - 16L);
            if((unsigned char)v8 == 1) {
            loc_40603A:
                long v11 = gvar_60F048;
                v2 = gvar_60F040;
                unsigned long v12 = gvar_60F050;
                if(v2 < v11) {
                    *(long**)(v2 * 8L + v12) = ptr0;
                }
                else {
                    gvar_60F048 = v11 * 3L / 2L;
                    --ptr1;
                    *ptr1 = &loc_40611A;
                    long v13 = /*BAD_CALL!*/ rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v11 * 3L / 2L * 8L + 16L);
                    *(long*)(v13 + 8L) = 1L;
                    void* __src = gvar_60F050;
                    size_t __n = (size_t)(gvar_60F040 * 8L);
                    --ptr1;
                    *ptr1 = &loc_406144;
                    /*BAD_CALL!*/ →memcpy((void*)(v13 + 16L), __src, __n);
                    long* ptr2 = (long*)(gvar_60F050 - 16L);
                    --ptr1;
                    *ptr1 = &loc_406159;
                    /*BAD_CALL!*/ rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, ptr2);
                    v2 = gvar_60F040;
                    gvar_60F050 = (void*)(v13 + 16L);
                    *(long**)(v2 * 8L + v13 + 16L) = ptr0;
                }
                ++gvar_60F040;
                jump *(long*)(ptr1 + 5);
            }
            else if(!(unsigned char)v8) {
                return markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)ptr0);
            }
            else if((unsigned char)v8 == 2) {
            loc_4060C0:
                v2 = ptr0[0] - 8L;
                ptr0[0] -= 8L;
            }
            else if((unsigned char)v8 == 3) {
                goto loc_40603A;
            }
            else {
                jump *(long*)(ptr1 + 5);
            }
            if((unsigned long)v2 <= 7L) {
                return addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, ptr0);
            }
        }
    }
    else if(param1 == 1) {
        long v14 = gvar_60F048;
        if(gvar_60F040 >= v14) {
            gvar_60F048 = v14 * 3L / 2L;
            --ptr1;
            *ptr1 = &loc_40620A;
            long v15 = /*BAD_CALL!*/ rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v14 * 3L / 2L * 8L + 16L);
            *(long*)(v15 + 8L) = 1L;
            void* __src1 = gvar_60F050;
            size_t __n1 = (size_t)(gvar_60F040 * 8L);
            --ptr1;
            *ptr1 = &loc_406234;
            /*BAD_CALL!*/ →memcpy((void*)(v15 + 16L), __src1, __n1);
            long* ptr3 = (long*)(gvar_60F050 - 16L);
            --ptr1;
            *ptr1 = &loc_406249;
            /*BAD_CALL!*/ rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, ptr3);
            gvar_60F050 = (void*)(v15 + 16L);
        }
        *(long**)(gvar_60F040 * 8L + gvar_60F050) = (long*)(v9 - 16L);
        ++gvar_60F040;
        long v16 = *(long*)(param0 + 24L);
        --ptr1;
        *ptr1 = &loc_406278;
        /*BAD_CALL!*/ doOperation_3F8QeaTyYrJJF2gjBr6b8A(v16, 1L);
        v1 = *(long*)(param0 + 32L);
        v0 = 1L;
    loc_406024:
        --ptr1;
        *ptr1 = &loc_406029;
        /*BAD_CALL!*/ doOperation_3F8QeaTyYrJJF2gjBr6b8A(v1, v0);
        v2 = *(long*)(param0 + 48L);
        ptr0 = (long*)(v2 - 16L);
        if(v2) {
            goto loc_40603A;
        }
    }
    else if(!param1) {
        markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)(long*)(v9 - 16L));
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), 0L);
        ptr1 = &v4;
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 32L), 0L);
        v2 = *(long*)(param0 + 48L);
        ptr0 = (long*)(v2 - 16L);
        if(v2) {
            return markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)ptr0);
        }
    }
    else if(param1 == 2) {
        unsigned long v17 = (unsigned long)(*(long*)(v9 - 16L) - 8L);
        *(unsigned long*)(v9 - 16L) = (unsigned long)(*(long*)(v9 - 16L) - 8L);
        if(v17 <= 7L) {
            addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, (long*)(v9 - 16L));
        }
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), 2L);
        ptr1 = &v4;
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 32L), 2L);
        v2 = *(long*)(param0 + 48L);
        ptr0 = (long*)(v2 - 16L);
        if(v2) {
            goto loc_4060C0;
        }
    }
    else if(param1 != 3) {
        goto loc_405F1B;
    }
    else {
        long v18 = gvar_60F048;
        long v19 = gvar_60F040;
        void* __dest = gvar_60F050;
        if(v19 >= v18) {
            gvar_60F048 = v18 * 3L / 2L;
            long v20 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v18 * 3L / 2L * 8L + 16L);
            *(long*)(v20 + 8L) = 1L;
            __dest = (void*)(v20 + 16L);
            →memcpy(__dest, gvar_60F050, (size_t)(gvar_60F040 * 8L));
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(gvar_60F050 - 16L));
            gvar_60F050 = __dest;
            v19 = gvar_60F040;
        }
        *(long**)(v19 * 8L + (long)__dest) = (long*)(v9 - 16L);
        ++gvar_60F040;
        ptr1 = &v4;
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(long*)(param0 + 24L), 3L);
        v1 = *(long*)(param0 + 32L);
        v0 = 3L;
        goto loc_406024;
    }
    jump *(long*)(ptr1 + 5);
}

void Marker_tySequence_uB9b75OUPRENsBAu4AnoePA() {
}

long NimMain() {
    long v0;
    long v1;
    systemDatInit000();
    nimGC_setStackBottom(&v0);
    →systemInit000();
    nimGC_setStackBottom(&v1);
    return →NimMainModule();
}

// Stale decompilation - Refresh this view to re-decompile this code
int NimMainModule() {
    long* ptr0;
    nimRegisterGlobalMarker(&TM_2lQWYPc4hWuvSK7bVeWxSA_4);
    echoBinSafe((unsigned long*)&TM_2lQWYPc4hWuvSK7bVeWxSA_2, 1L);
    unsigned long v0 = (unsigned long)readLine_fPRnXwDTqtynUYGl4OixAg((long)stdin);
    if(v0) {
        *(long*)(v0 - 16L) = *(long*)(v0 - 16L) + 8L;
    }
    unsigned long v1 = name_6AZmjR50AehluhCwumgXmw;
    if(v1) {
        unsigned long v2 = (unsigned long)(*(long*)(v1 - 16L) - 8L);
        *(unsigned long*)(v1 - 16L) = (unsigned long)(*(long*)(v1 - 16L) - 8L);
        if(v2 <= 7L) {
            addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, (long*)(v1 - 16L));
        }
    }
    name_6AZmjR50AehluhCwumgXmw = v0;
    *(__int128*)&ptr0 = 0x0X;
    long* ptr1 = NULL;
    long* ptr2 = copyString((long*)&TM_2lQWYPc4hWuvSK7bVeWxSA_5);
    long* ptr3 = name_6AZmjR50AehluhCwumgXmw;
    ptr0 = ptr2;
    long* ptr4 = copyString(ptr3);
    ptr1 = copyString((long*)&TM_2lQWYPc4hWuvSK7bVeWxSA_6);
    return echoBinSafe(&ptr0, 3L);
}

long PreMain() {
    long v0;
    systemDatInit000();
    nimGC_setStackBottom(&v0);
    return →systemInit000();
}

// Stale decompilation - Refresh this view to re-decompile this code
long TM_2lQWYPc4hWuvSK7bVeWxSA_4() {
    long result;
    nimGCvisit((long)name_6AZmjR50AehluhCwumgXmw, 0L);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void TM_Q5wkpxktOdTGvlSRo9bzt9aw_17() {
    unsigned long v0 = currException_9bVPeDJlYTi9bQApZpfH8wjg;
    if(v0) {
        markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, v0 - 16L);
    }
}

long addChunkToMatrix_v9bekLOkesgfrZC4aumfLXw(long param0, long param1) {
    long v0;
    long v1 = *(long*)(param1 + 8L);
    long v2 = v1 & 0xffffffffL;
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
    long v5 = (v1 >>> ((v4 - 5L) & 0x3fL)) - 32L;
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

void* addHeapLink_fJbggoVEhxEYh2HdNULF3Q(long param0, long param1, long param2) {
    long v0;
    long v1;
    void* result = (void*)(param0 + 0x3100L);
    while(result) {
        if(*(long*)result > 29L) {
            result = *(void**)((long)result + 488L);
        }
        else {
            long v2 = *(long*)result;
            long* ptr0 = (long*)(v2 * 16L + (long)result);
            *(ptr0 + 1) = param1;
            *(ptr0 + 2) = param2;
            *(long*)result = v2 + 1L;
            return result;
        }
    }
    long v3 = v0;
    long v4 = v1;
    result = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 496L);
    *(long*)((long)result + 488L) = *(long*)(param0 + 13032L);
    *(void**)(param0 + 13032L) = result;
    *(long*)((long)result + 8L) = param1;
    *(long*)((long)result + 16L) = param2;
    *(long*)result = 1L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long addZCT_fCDI7oO1NNVXXURtxSzsRw(long* param0, long* param1) {
    long v0;
    long v1;
    long result = *param1;
    if(((unsigned char)result & 0x4)) {
        return result;
    }
    long result1 = result | 0x4L;
    long v2 = v0;
    long v3 = v1;
    *param1 = result1;
    long v4 = *(param0 + 1);
    result = *param0;
    if(result < v4) {
        *(unsigned long*)(result * 8L + *(param0 + 2)) = param1;
        *param0 = *param0 + 1L;
        return result1;
    }
    *(param0 + 1) = v4 * 3L / 2L;
    long v5 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v4 * 3L / 2L * 8L + 16L);
    *(long*)(v5 + 8L) = 1L;
    →memcpy((void*)(v5 + 16L), *(void**)(param0 + 2), (size_t)(*param0 * 8L));
    long result2 = rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, *(param0 + 2) - 16L);
    result = *param0;
    *(void**)(param0 + 2) = (void*)(v5 + 16L);
    *(unsigned long*)(result * 8L + v5 + 16L) = param1;
    *param0 = *param0 + 1L;
    return result2;
}

long add_Xuf47u3imOz8BOk5HURLWQ(long param0, unsigned long* param1, unsigned long param2, long param3) {
    void* ptr0;
    __int128 v0;
    long v1;
    __int128 v2;
    long v3 = v1;
    long* ptr1 = *param1;
    long v4 = *ptr1;
    if(v4 != ptr1) {
        char v5 = *(ptr1 + 2) == param2;
        if((*(unsigned long*)(ptr1 + 2) < param2 || v5)) {
            if(v5) {
                param2 = *(unsigned long*)(ptr1 + 4);
                if(*(long*)(v4 + 32L) == param2) {
                    goto loc_402210;
                }
                else {
                    goto loc_4021D1;
                }
            }
            else {
                ++ptr1;
            }
        }
        add_Xuf47u3imOz8BOk5HURLWQ(param0, (long)ptr1, (long)param2, param3);
        ptr1 = *param1;
        v4 = *ptr1;
        param2 = *(unsigned long*)(ptr1 + 4);
        if(*(long*)(v4 + 32L) == param2) {
        loc_402210:
            *param1 = v4;
            *ptr1 = *(long*)(v4 + 8L);
            *(unsigned long*)(*param1 + 8L) = ptr1;
            ptr1 = *param1;
            ptr0 = *(void**)(ptr1 + 1);
            if(*(long*)(*(long*)((long)ptr0 + 8L) + 32L) != *(unsigned long*)(ptr1 + 4)) {
                return (long)ptr0;
            }
            goto loc_4021F0;
        }
        else {
        loc_4021D1:
            ptr0 = *(void**)(ptr1 + 1);
        }
        if(*(long*)(*(long*)((long)ptr0 + 8L) + 32L) != param2) {
            return (long)ptr0;
        }
    loc_4021F0:
        *param1 = ptr0;
        *(ptr1 + 1) = *(long*)ptr0;
        unsigned long* ptr2 = *param1;
        *ptr2 = ptr1;
        ptr0 = *param1;
        *(long*)((long)ptr0 + 32L) = *(long*)((long)ptr0 + 32L) + 1L;
        return (long)ptr2;
    }
    ptr0 = *(void**)(param0 + 0x30c0L);
    if(ptr0) {
        *(long*)(param0 + 0x30c0L) = *(long*)ptr0;
    }
    else {
        long v6 = param3;
        ptr0 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 40L);
        param3 = v6;
    }
    __int128 v0 = movhps((unsigned __int128)param2 | ((unsigned __int128)(unsigned long)(v2 >>> 0x40X) << 64), param3);
    unsigned long v7 = (unsigned long)(param0 + 12504L);
    *(__int128*)((long)ptr0 + 16L) = v0;
    v0 = (unsigned __int128)v7 | ((unsigned __int128)(unsigned long)(v0 >>> 0x40X) << 64);
    v2 = punpcklqdq(v0, v0);
    if(!*(long*)(param0 + 12504L)) {
        *(__int128*)(param0 + 12504L) = v2;
    }
    *(__int128*)ptr0 = v2;
    *(long*)((long)ptr0 + 32L) = 1L;
    *param1 = ptr0;
    return (long)ptr0;
}

void* alloc0_1iQ1Xo9cXsxq509b5gmDHLoQ_2(long param0, size_t __n) {
    long v0 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(param0, (long)(__n + 16L));
    *(long*)(v0 + 8L) = 1L;
    return →memset((void*)(v0 + 16L), 0, __n);
}

void* alloc0_sVm4rDImKK2ZDdylByayiA_2(size_t __n) {
    long v0 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)(__n + 16L));
    *(long*)(v0 + 8L) = 1L;
    return →memset((void*)(v0 + 16L), 0, __n);
}

void* allocAvlNode_neSuioWH6NDTp8E9cNgBmjg(long param0, long param1, long param2) {
    __int128 v0;
    __int128 v1;
    long v2;
    __int128 v3;
    long v4 = v2;
    void* result = *(void**)(param0 + 0x30c0L);
    long v5 = param2;
    if(result) {
        *(long*)(param0 + 0x30c0L) = *(long*)result;
    }
    else {
        result = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 40L);
    }
    long v6 = param1;
    __int128 v0 = movhps((unsigned __int128)v6 | ((unsigned __int128)(unsigned long)(v3 >>> 0x40X) << 64), v5);
    v5 = param0 + 12504L;
    *(__int128*)((long)result + 16L) = v0;
    v0 = (unsigned __int128)v5 | ((unsigned __int128)(unsigned long)(v0 >>> 0x40X) << 64);
    __int128 v1 = punpcklqdq(v0, v0);
    if(!*(long*)(param0 + 12504L)) {
        *(__int128*)(param0 + 12504L) = v1;
    }
    *(__int128*)result = v1;
    *(long*)((long)result + 32L) = 1L;
    return result;
}

long alloc_1iQ1Xo9cXsxq509b5gmDHLoQ(long param0, long param1) {
    long v0 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(param0, param1 + 16L);
    *(long*)(v0 + 8L) = 1L;
    return v0 + 16L;
}

long alloc_sVm4rDImKK2ZDdylByayiA(long param0) {
    long v0 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, param0 + 16L);
    *(long*)(v0 + 8L) = 1L;
    return v0 + 16L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long cellSetEnlarge_ZCqaZEiX9aUtDCRoknrJ9bpQ(long param0) {
    long v0;
    long v1 = v0;
    long v2 = *(long*)(param0 + 8L);
    *(long*)(param0 + 8L) = *(long*)(param0 + 8L);
    long v3 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)((size_t)((v2 + 1L) * 16L) + 16L));
    *(long*)(v3 + 8L) = 1L;
    →memset((void*)(v3 + 16L), 0, (size_t)((v2 + 1L) * 16L));
    long v4 = *(long*)(param0 + 24L);
    long v5 = 0L;
    if(v2 >= 0L) {
        do {
            long v6 = *(long*)(v5 * 8L + v4);
            if(v6) {
                long v7 = *(long*)(param0 + 8L);
                long v8 = *(long*)(v6 + 8L) & v7;
                long* ptr0 = (long*)(v8 * 8L + v3 + 16L);
                if(*ptr0) {
                    do {
                        v8 = (v8 * 5L + 1L) & v7;
                        ptr0 = (long*)(v8 * 8L + v3 + 16L);
                    }
                    while(*ptr0);
                }
                *ptr0 = v6;
                v4 = *(long*)(param0 + 24L);
            }
            ++v5;
        }
        while(v2 + 1L != v5);
    }
    long result = rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, v4 - 16L);
    *(void**)(param0 + 24L) = (void*)(v3 + 16L);
    return result;
}

long cellSetGet_X4WTfs0wkld8wp8XcE9b8BA(long param0, long param1) {
    long v0 = *(long*)(param0 + 8L);
    long v1 = *(long*)(param0 + 24L);
    long v2 = v0 & param1;
    long result = *(long*)(v2 * 8L + v1);
    if(result) {
        if(*(long*)(result + 8L) == param1) {
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

long* cellSetPut_mFUFZ7eVLRT9bMaHzrsxFrQ(long param0, long param1) {
    long* ptr0;
    long* ptr1;
    unsigned long* ptr2;
    long v0 = *(long*)(param0 + 8L);
    unsigned long* ptr3 = *(unsigned long*)(param0 + 24L);
    unsigned long* ptr4 = (unsigned long*)(param1 & v0);
    unsigned long* ptr5 = ptr3;
    long* result = *ptr5;
    if(result) {
        ptr2 = ptr4;
        if(*(result + 1) != param1) {
            do {
                ptr2 = (unsigned long*)((long)(long*)((char*)((long)ptr2 * 5L) + 1L) & v0);
                result = *(unsigned long*)((long)(long*)((long)ptr2 * 8L) + (long)ptr3);
                if(!result) {
                    goto loc_404D03;
                }
            }
            while(*(result + 1) == param1);
        }
    }
    else {
    loc_404D03:
        long v1 = *(long*)param0;
        long v2 = param1;
        if((v0 + 1L) * 2L < v1 * 3L || v0 + 1L - v1 <= 3L) {
            cellSetEnlarge_ZCqaZEiX9aUtDCRoknrJ9bpQ(param0);
            v0 = *(long*)(param0 + 8L);
            ptr3 = *(unsigned long*)(param0 + 24L);
            v1 = *(long*)param0;
            ptr4 = (unsigned long*)(v2 & v0);
            ptr5 = ptr3;
        }
        *(long*)param0 = v1 + 1L;
        if(*ptr5) {
            do {
                ptr4 = (unsigned long*)((long)(long*)((char*)((long)ptr4 * 5L) + 1L) & v0);
            }
            while(*(long*)((long)(long*)((long)ptr4 * 8L) + (long)ptr3));
        }
        long v3 = gvar_60F0D0;
        if(v3) {
            ptr1 = *(unsigned long*)(v3 + 32L);
            if(ptr1) {
                *(long*)(v3 + 32L) = *ptr1;
                ptr0 = ptr1;
            }
            else {
                long v4 = *(long*)(v3 + 48L);
                ptr0 = (long*)(v3 + v4 + 56L);
                ptr1 = (long*)(v3 + v4 + 56L);
                *(long*)(v3 + 48L) = v4 + 96L;
            }
            param1 = *(long*)(v3 + 40L) - 96L;
            *(long*)(v3 + 40L) = *(long*)(v3 + 40L) - 96L;
        }
        else {
            v3 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x1000L);
            unsigned __int128 v5 = gvar_40AB90;
            *(long*)(v3 + 32L) = 0L;
            *(unsigned __int128*)(v3 + 40L) = v5;
            *(__int128*)(v3 + 16L) = 0x0X;
            *(long*)(v3 + 8L) = 96L;
            unsigned long v6 = gvar_60F0D0;
            *(unsigned long*)(v3 + 16L) = gvar_60F0D0;
            if(v6) {
                *(long*)(v6 + 24L) = v3;
            }
            ptr1 = (long*)(v3 + 56L);
            gvar_60F0D0 = v3;
            param1 = *(long*)(v3 + 40L);
            ptr0 = ptr1;
        }
        if(param1 <= 95L) {
            param1 = *(long*)(v3 + 16L);
            if(gvar_60F0D0 != v3) {
                *(long*)(*(long*)(v3 + 24L) + 16L) = param1;
                param1 = *(long*)(v3 + 16L);
                if(param1) {
                    *(long*)(param1 + 24L) = *(long*)(v3 + 24L);
                }
            }
            else {
                gvar_60F0D0 = param1;
                if(param1) {
                    *(long*)(param1 + 24L) = 0L;
                }
            }
            *(__int128*)(v3 + 16L) = 0x0X;
        }
        result = ptr0 + 2;
        gvar_6118F8 += 96L;
        *(ptr1 + 1) = 1L;
        *(__int128*)(ptr0 + 2) = 0x0X;
        *(__int128*)(result + 2) = 0x0X;
        *(__int128*)(result + 4) = 0x0X;
        *(__int128*)(result + 6) = 0x0X;
        *(__int128*)(result + 8) = 0x0X;
        *(unsigned long*)(ptr0 + 2) = *(unsigned long*)(param0 + 16L);
        *(result + 1) = v2;
        ptr2 = *(unsigned long*)(param0 + 24L);
        *(unsigned long*)(param0 + 16L) = result;
        *ptr2 = result;
    }
    return result;
}

long cellSetRawInsert_wqizyapnzNjHA3SIFqE8ow(long param0, long param1, long param2) {
    long v0 = *(long*)(param0 + 8L);
    long result = *(long*)(param2 + 8L) & v0;
    long* ptr0 = (long*)(result * 8L + param1);
    if(*ptr0) {
        do {
            result = (result * 5L + 1L) & v0;
            ptr0 = (long*)(result * 8L + param1);
        }
        while(*ptr0);
    }
    *ptr0 = param2;
    return result;
}

long cellsetReset_WHgd5C59bkXWDz3vnAxfzXQ_2(unsigned long* param0) {
    unsigned __int128 v0;
    long v1;
    unsigned long* ptr0;
    long v2 = v1;
    unsigned long* ptr1 = *(param0 + 2);
    if(ptr1) {
        do {
            ptr0 = *ptr1;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(ptr1 - 2));
            ptr1 = ptr0;
        }
        while(ptr0);
    }
    long v3 = *(long*)(param0 + 3);
    *(long*)(param0 + 2) = 0L;
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(v3 - 16L));
    *(long*)(param0 + 3) = 0L;
    *param0 = 0L;
    long v4 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            long v5 = &gvar_612138;
            __int128 v6 = (unsigned __int128)&gvar_612138 | ((unsigned __int128)(unsigned long)(v6 >>> 0x40X) << 64);
            gvar_612108 = &gvar_612138;
            unsigned __int128 v0 = punpcklqdq(v6, v6);
            gvar_612138 = v0;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, (unsigned long)(v4 + 32L), v4 + 0x2050L);
    long* ptr2 = (long*)((v4 + 56L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(*(long*)(v4 + 8L) + gvar_6118F8);
    unsigned __int128 v7 = gvar_40AB60;
    *(long*)(v4 + 40L) = 1L;
    *(long*)(v4 + 48L) = 0L;
    *(long*)(v4 + 8232L) = 0L;
    for(long i = (unsigned long)(((unsigned int)v4 + 48 - (unsigned int)ptr2 + 0x2000) >>> 3); i != 0L; --i) {
        *ptr2 = 0L;
        ++ptr2;
    }
    *(long*)(param0 + 3) = v4 + 48L;
    *(unsigned __int128*)param0 = v7;
    *(long*)(param0 + 2) = 0L;
    return 0L;
}

int checkErr_BWnr8V7RERYno9bIdPmw8Hw(FILE* __stream) {
    long* ptr0;
    int result = →ferror(__stream);
    if((unsigned int)result) {
        →clearerr(__stream);
        /*NO_RETURN*/ raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22, ptr0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(unsigned long* param0) {
    unsigned long v0;
    long v1;
    long v2 = v1;
    long v3 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
    param0[0x66d] = (unsigned long)((long)param0[0x66d] < v3 ? v3: param0[0x66d]);
    unsigned long v4 = param0[1569];
    unsigned long v5 = *(unsigned long*)v4;
    unsigned long v6 = v4;
    if(v4 == v5) {
        v0 = 0L;
    }
    else {
        while(1) {
            unsigned long v7 = *(unsigned long*)v5;
            v0 = *(unsigned long*)(v6 + 16L);
            v6 = v5;
            if(v5 == v7) {
                break;
            }
            else {
                v5 = v7;
            }
        }
    }
    param0[12] = v0;
    unsigned long v8 = 18446744073709551615L;
    while(*(long*)v4 != v4) {
        v8 = *(unsigned long*)(v4 + 24L);
        v4 = *(unsigned long*)(v4 + 8L);
    }
    param0[13] = v8;
    markStackAndRegisters_LdwvBL9bC9c0lik7K9bau9bX0Q(param0);
    unsigned long v9 = param0[5];
    unsigned long v10 = (long)param0[0x66e] < (long)v9 ? v9: param0[0x66e];
    ++param0[0x66a];
    param0[0x66e] = v10;
    long v11 = collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw((long)param0);
    if((unsigned char)v11 && (long)param0[1] <= (long)param0[1311]) {
        collectCycles_zoTIuavlrCHyw3B8MBaLJA_3((long)param0);
        unsigned long v12 = gvar_6118F8;
        ++param0[0x66b];
        char v13 = (long)((long)(v12 * 2L) < &ELFHeader ? &ELFHeader: v12 * 2L) > (long)param0[0x66c];
        char v14 = (long)(((param0[0x66c] - ((long)(v12 * 2L) < &ELFHeader ? &ELFHeader: v12 * 2L)) ^ param0[0x66c]) & (((long)(v12 * 2L) < &ELFHeader ? &ELFHeader: v12 * 2L) ^ param0[0x66c])) < 0L;
        param0[1] = (long)(v12 * 2L) < &ELFHeader ? &ELFHeader: v12 * 2L;
        param0[0x66c] = v13 != v14 ? (long)(v12 * 2L) < &ELFHeader ? &ELFHeader: v12 * 2L: param0[0x66c];
    }
    long result = (long)param0[5];
    unsigned long v15 = param0[7];
    long v16 = result * 8L + v15;
    if(result > 0L) {
        do {
            long* ptr0 = *(long**)v15;
            result = ptr0[0] - 8L;
            ptr0[0] -= 8L;
            if((unsigned long)result <= 7L) {
                result = addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, ptr0);
            }
            v15 += 8L;
        }
        while(v15 != v16);
    }
    param0[5] = 0L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long collectCT_zoTIuavlrCHyw3B8MBaLJA() {
    long v0;
    long v1 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
    long result = 500L;
    if((v1 <= 63999L ? 500L: v1 >> 7) > *(long*)(v0 + 16L)) {
        result = *(long*)(v0 + 0x28f8L);
        if(*(long*)(v0 + 8L) <= result) {
            goto loc_407C25;
        }
    }
    else {
    loc_407C25:
        if(!*(long*)(v0 + 88L)) {
            return collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(v0);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long collectCycles_zoTIuavlrCHyw3B8MBaLJA_3(long param0) {
    long result;
    unsigned __int128 v0;
    unsigned long* ptr0;
    while(!(*(long*)(param0 + 16L) ? 0: 1) && *(long*)(param0 + 16L) >= 0L) {
        collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw(param0);
    }
    unsigned long* ptr1 = *(unsigned long*)(param0 + 0x3398L);
    if(ptr1) {
        do {
            ptr0 = *ptr1;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(ptr1 - 2));
            ptr1 = ptr0;
        }
        while(ptr0);
    }
    long v1 = *(long*)(param0 + 13216L);
    *(long*)(param0 + 0x3398L) = 0L;
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(v1 - 16L));
    *(long*)(param0 + 13216L) = 0L;
    *(long*)(param0 + 0x3388L) = 0L;
    long v2 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            long v3 = &gvar_612138;
            __int128 v4 = (unsigned __int128)&gvar_612138 | ((unsigned __int128)(unsigned long)(v4 >>> 0x40X) << 64);
            gvar_612108 = &gvar_612138;
            unsigned __int128 v0 = punpcklqdq(v4, v4);
            gvar_612138 = v0;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, (unsigned long)(v2 + 32L), v2 + 0x2050L);
    long* ptr2 = (long*)((v2 + 56L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(*(long*)(v2 + 8L) + gvar_6118F8);
    unsigned __int128 v5 = gvar_40AB60;
    *(long*)(v2 + 40L) = 1L;
    *(long*)(v2 + 48L) = 0L;
    *(long*)(v2 + 8232L) = 0L;
    for(long i = (unsigned long)(((unsigned int)v2 + 48 - (unsigned int)ptr2 + 0x2000) >>> 3); i != 0L; --i) {
        *ptr2 = 0L;
        ++ptr2;
    }
    *(long*)(param0 + 13216L) = v2 + 48L;
    *(unsigned __int128*)(param0 + 0x3388L) = v5;
    long* ptr3 = *(unsigned long*)(param0 + 56L);
    long v6 = *(long*)(param0 + 40L);
    *(long*)(param0 + 0x3398L) = 0L;
    long* ptr4 = (long*)(v6 * 8L + (long)ptr3);
    if(v6 > 0L) {
        do {
            long v7 = *ptr3;
            ++ptr3;
            result = markS_NZr5o3Ubzrci4OmK29cHBJA(param0, v7);
        }
        while(ptr3 != ptr4);
    }
    markGlobals_zoTIuavlrCHyw3B8MBaLJA_4(param0);
    sweep_zoTIuavlrCHyw3B8MBaLJA_5(param0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw(long param0) {
    long v0;
    long v1;
    long v2 = v1;
loc_40717A:
    while(!(*(long*)(param0 + 16L) ? 0: 1) && *(long*)(param0 + 16L) >= 0L) {
        do {
            long* ptr0 = **(long***)(param0 + 32L);
            ptr0[0] &= -5L;
            long* ptr1 = *(unsigned long*)(param0 + 32L);
            *ptr1 = *((long*)(*(long*)(param0 + 16L) * 8L + (long)ptr1) - 1);
            v0 = *(long*)(param0 + 16L) - 1L;
            *(long*)(param0 + 16L) = *(long*)(param0 + 16L) - 1L;
            if((unsigned long)ptr0[0] <= 7L) {
                long v3 = ptr0[1];
                if(*(long*)(v3 + 32L)) {
                    ++gvar_60F058;
                    *(long*)(v3 + 32L)((long)(ptr0 + 2));
                    --gvar_60F058;
                    v3 = ptr0[1];
                }
                long v4 = *(long*)(v3 + 40L);
                if(v4) {
                    v4((long)(ptr0 + 2), 2L);
                }
                else {
                    char v5 = *(char*)(v3 + 8L);
                    if(v5 == 22 || v5 == 45) {
                        forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA((long)(ptr0 + 2), *(long*)(v3 + 16L), 2L);
                    }
                    else if(v5 == 24 && ptr0 != -16L) {
                        long v6 = ptr0[2];
                        if(v6 > 0L) {
                            long v7 = 0L;
                            while(1) {
                                long* ptr2 = *(unsigned long*)(v3 + 16L);
                                long v8 = *ptr2 * v7;
                                ++v7;
                                forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA((long)((long*)((long)ptr0 + v8) + 4), (long)ptr2, 2L);
                                if(v6 == v7) {
                                    break;
                                }
                                else {
                                    v3 = ptr0[1];
                                }
                            }
                        }
                    }
                }
                rawDealloc_DA62HrGC5sdfCED505KyyQ(param0 + 96L, ptr0);
                continue loc_40717A;
            }
        }
        while(v0 > 0L);
    }
    return 1L;
}

long containsOrIncl_CbGEjIBKJIi7knlaDzUluA(long* param0, long param1) {
    long v0 = param0[1];
    long v1 = param0[3];
    long v2 = (param1 >>> 12) & v0;
    long v3 = *(long*)(v2 * 8L + v1);
    if(v3) {
        while(param1 >>> 12 != *(long*)(v3 + 8L)) {
            v2 = (v2 * 5L + 1L) & v0;
            v3 = *(long*)(v2 * 8L + v1);
            if(!v3) {
                incl_m4q9b16kJJcoKe9c4ERtlpCg(param0, param1);
                return 0L;
            }
        }
        long v4 = ((unsigned long)((unsigned int)(param1 >>> 3L) & 0x1ff) >>> 6) * 8L + v3;
        long v5 = *(long*)(v4 + 16L);
        if(!((1L << ((unsigned long)((unsigned int)(param1 >>> 3L) & 0x1ff) & 0x3fL)) & v5)) {
            *(long*)(v4 + 16L) = (1L << ((unsigned long)((unsigned int)(param1 >>> 3L) & 0x1ff) & 0x3fL)) | v5;
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
    long v2 = (param1 >>> 12) & v0;
    long v3 = *(long*)(v2 * 8L + v1);
    if(v3) {
        while(param1 >>> 12 != *(long*)(v3 + 8L)) {
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

unsigned long* contains_tGsWrN4DY41H9btt3FhjrNA(long param0, long param1) {
    unsigned long* ptr0 = *(unsigned long*)(((param1 >>> 9) & 0xFFL) * 8L + param0);
    if(!ptr0) {
        return NULL;
    }
    while(param1 >>> 9 != *(long*)(ptr0 + 1)) {
        ptr0 = *ptr0;
        if(!ptr0) {
            return 0L;
        }
    }
    return (unsigned long)((1L << ((unsigned long)((unsigned int)param1 & 0x1ff) & 0x3fL)) & *((long*)(((unsigned long)((unsigned int)param1 & 0x1ff) >>> 6) * 8L + (long)ptr0) + 2) ? 1: 0) | ((unsigned long)(long*)((long)(long*)((long)ptr0 >>> 8L) & 0xffffffffffffffL) << 8);
}

// Stale decompilation - Refresh this view to re-decompile this code
long* copyString(long* param0) {
    long* result;
    if(param0) {
        result = param0;
        if(*(param0 + 1) >= 0L) {
            long v0 = *param0 < 7L ? 7L: *param0;
            long* ptr0 = (long*)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, v0 + 17L, &gch_IcYaEuuWivYAS86vFMTS3Q);
            *ptr0 = 0L;
            result = ptr0;
            *(ptr0 + 1) = v0;
            long v1 = *param0;
            *ptr0 = *param0;
            →memcpy((void*)(ptr0 + 2), (void*)(param0 + 2), (size_t)(v1 + 1L));
        }
    }
    else {
        result = NULL;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* copyStringRC1(long* param0) {
    void* __s;
    if(param0) {
        long v0 = *param0;
        long v1 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
        if(((v1 <= 63999L ? 500L: v1 >> 7) <= gvar_60F010 || gvar_6118F8 >= gvar_60F008) && !gvar_60F058) {
            collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(&gch_IcYaEuuWivYAS86vFMTS3Q);
        }
        long v2 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (v0 < 7L ? 7L: v0) + 33L);
        *(long*)(v2 + 8L) = &strDesc_D0UzA4zsDu5tgpJQ9a9clXPg;
        __s = (void*)(v2 + 16L);
        *(long*)v2 = 8L;
        →memset(__s, 0, (size_t)((v0 < 7L ? 7L: v0) + 17L));
        *(long*)((long)__s + 8L) = v0 < 7L ? 7L: v0;
        long v3 = *param0;
        *(long*)(v2 + 16L) = *param0;
        →memcpy((void*)(v2 + 32L), (void*)(param0 + 2), (size_t)(v3 + 1L));
    }
    else {
        __s = NULL;
    }
    return __s;
}

// Stale decompilation - Refresh this view to re-decompile this code
__int128* cstrToNimstr(char* __s) {
    __int128 v0;
    long v1;
    __int128 v2;
    __int128* result = NULL;
    long v3 = v1;
    if(__s) {
        size_t v4 = →strlen(__s);
        long v5 = 24L;
        size_t v6 = 7L;
        if(v4 > 6L) {
            v5 = v4 + 17L;
            v6 = v4;
        }
        __int128* ptr0 = (__int128*)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, v5, &gch_IcYaEuuWivYAS86vFMTS3Q);
        size_t v7 = v4;
        result = ptr0;
        __int128 v0 = movhps((unsigned __int128)v7 | ((unsigned __int128)(unsigned long)(v2 >>> 0x40X) << 64), v6);
        *ptr0 = v0;
        →memcpy((void*)(ptr0 + 1), __s, v4 + 1L);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long dealloc_RCjNtRnHdRYntrcE7YtwWw(long param0) {
    return rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, param0 - 16L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long dealloc_jqYVOi4APb9cRx3G9a57AkRw(long param0, long param1) {
    return rawDealloc_DA62HrGC5sdfCED505KyyQ(param0, param1 - 16L);
}

long deinit_WHgd5C59bkXWDz3vnAxfzXQ_3(long* param0) {
    long v0;
    unsigned long* ptr0;
    long v1 = v0;
    unsigned long* ptr1 = *(unsigned long*)(param0 + 2);
    if(ptr1) {
        do {
            ptr0 = *ptr1;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(ptr1 - 2));
            ptr1 = ptr0;
        }
        while(ptr0);
    }
    long v2 = *(param0 + 3);
    *(param0 + 2) = 0L;
    long result = rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(v2 - 16L));
    *(param0 + 3) = 0L;
    *param0 = 0L;
    return result;
}

long del_C66us4UEWCXp84lHW4tDLA(long param0, unsigned long* param1, long param2) {
    long result;
    long v0;
    long v1;
    long* ptr0 = param1[0];
    if(ptr0[0] != ptr0) {
        long v2 = v0;
        long v3 = v1;
        *(long**)(param0 + 12472L) = ptr0;
        if((unsigned long)ptr0[2] > (unsigned long)param2) {
            del_C66us4UEWCXp84lHW4tDLA(param0, (long)ptr0, param2);
        }
        else {
            *(long**)(param0 + 0x30b0L) = ptr0;
            del_C66us4UEWCXp84lHW4tDLA(param0, param1[0] + 8L, param2);
        }
        del_C66us4UEWCXp84lHW4tDLA.part.8(param0, param1, param2);
        return result;
    }
    return (long)ptr0;
}

long* del_C66us4UEWCXp84lHW4tDLA.part.8(long param0, unsigned long* param1, long param2) {
    long result2;
    long* ptr0;
    long* result1 = *param1;
    if(*(long*)(param0 + 12472L) == result1) {
        ptr0 = *(unsigned long*)(param0 + 0x30b0L);
        if(*ptr0 != ptr0 && *(ptr0 + 2) == param2) {
            *(ptr0 + 2) = *(result1 + 2);
            *(long*)(*(long*)(param0 + 0x30b0L) + 24L) = *(long*)(*param1 + 24L);
            if(!*(long*)(param0 + 12504L)) {
                long v0 = param0 + 12504L;
                __int128 v1 = (unsigned __int128)v0 | ((unsigned __int128)(unsigned long)(v1 >>> 0x40X) << 64);
                v1 = punpcklqdq(v1, v1);
                *(__int128*)(param0 + 12504L) = v1;
            }
            *(long*)(param0 + 0x30b0L) = param0 + 12504L;
            long result = *(long*)(*param1 + 8L);
            *param1 = *(long*)(*param1 + 8L);
            result1 = *(unsigned long*)(param0 + 12472L);
            *result1 = *(long*)(param0 + 0x30c0L);
            *(unsigned long*)(param0 + 0x30c0L) = result1;
            return result;
        }
    }
    long* ptr1 = (long*)(*(result1 + 4) - 1L);
    if(*(long*)(*result1 + 32L) < (long)ptr1 || *(long*)(*(result1 + 1) + 32L) < (long)ptr1) {
        *(result1 + 4) = ptr1;
        result1 = *param1;
        long v2 = *(result1 + 1);
        long v3 = *(result1 + 4);
        if(*(long*)(v2 + 32L) > v3) {
            *(long*)(v2 + 32L) = v3;
            result1 = *param1;
            v3 = *(result1 + 4);
        }
        long v4 = *result1;
        if(*(long*)(v4 + 32L) == v3) {
            *param1 = v4;
            *result1 = *(long*)(v4 + 8L);
            *(unsigned long*)(*param1 + 8L) = result1;
            result1 = *param1;
        }
        ptr1 = *(result1 + 1);
        long v5 = *ptr1;
        if(*(long*)(v5 + 32L) == *(ptr1 + 4)) {
            *(result1 + 1) = v5;
            *ptr1 = *(long*)(v5 + 8L);
            *(unsigned long*)(*(result1 + 1) + 8L) = ptr1;
            result1 = *param1;
            ptr1 = *(unsigned long*)(result1 + 1);
        }
        ptr0 = *(unsigned long*)(ptr1 + 1);
        long v6 = *ptr0;
        long v7 = *(ptr0 + 4);
        if(*(long*)(v6 + 32L) == v7) {
            *(ptr1 + 1) = v6;
            *ptr0 = *(long*)(v6 + 8L);
            *(unsigned long*)(*(ptr1 + 1) + 8L) = ptr0;
            result1 = *param1;
            ptr1 = *(unsigned long*)(result1 + 1);
            ptr0 = *(unsigned long*)(ptr1 + 1);
            if(*(result1 + 4) == *(ptr0 + 4)) {
            loc_400E80:
                *param1 = ptr1;
                *(result1 + 1) = *ptr1;
                **param1 = result1;
                result2 = *param1;
                *(long*)(result2 + 32L) = *(long*)(result2 + 32L) + 1L;
                result1 = *param1;
                ptr1 = *(unsigned long*)(result1 + 1);
                ptr0 = *(unsigned long*)(ptr1 + 1);
                if(*(long*)(*(unsigned long*)(ptr0 + 1) + 4) != *(ptr1 + 4)) {
                    return result1;
                }
                *(unsigned long*)(result1 + 1) = ptr0;
                *(ptr1 + 1) = *ptr0;
                **(unsigned long*)(result1 + 1) = ptr1;
                result1 = *(unsigned long*)(result1 + 1);
                *(result1 + 4) = *(result1 + 4) + 1L;
                return result2;
            }
        loc_400E55:
            if(*(long*)(*(unsigned long*)(ptr0 + 1) + 4) == *(ptr1 + 4)) {
                *(unsigned long*)(result1 + 1) = ptr0;
                *(ptr1 + 1) = *ptr0;
                **(unsigned long*)(result1 + 1) = ptr1;
                result1 = *(unsigned long*)(result1 + 1);
                *(result1 + 4) = *(result1 + 4) + 1L;
                return result2;
            }
        }
        else if(*(result1 + 4) == v7) {
            goto loc_400E80;
        }
        else {
            goto loc_400E55;
        }
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
void doOperation_3F8QeaTyYrJJF2gjBr6b8A(long param0, char param1) {
    long v0;
    char v1;
    long v2;
    if(param0) {
        long v3 = v2;
        unsigned long* ptr0 = &v1;
        if(param1 != 1) {
            if(!param1) {
                markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)(long*)(param0 - 16L));
            }
            else if(param1 == 2) {
                v0 = *(long*)(param0 - 16L) - 8L;
                *(long*)(param0 - 16L) = *(long*)(param0 - 16L) - 8L;
                if((unsigned long)v0 <= 7L) {
                    addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, (long*)(param0 - 16L));
                    return;
                }
            }
            else if(param1 == 3) {
                long v4 = gvar_60F048;
                v0 = gvar_60F040;
                void* __dest = gvar_60F050;
                if(v0 >= v4) {
                    gvar_60F048 = v4 * 3L / 2L;
                    long v5 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v4 * 3L / 2L * 8L + 16L);
                    *(long*)(v5 + 8L) = 1L;
                    __dest = (void*)(v5 + 16L);
                    →memcpy(__dest, gvar_60F050, (size_t)(gvar_60F040 * 8L));
                    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(gvar_60F050 - 16L));
                    gvar_60F050 = __dest;
                    v0 = gvar_60F040;
                }
                *(long**)(v0 * 8L + (long)__dest) = (long*)(param0 - 16L);
                ++gvar_60F040;
            }
            return;
        }
        long v6 = gvar_60F048;
        if(gvar_60F040 >= v6) {
            gvar_60F048 = v6 * 3L / 2L;
            --ptr0;
            *ptr0 = &loc_40535A;
            long v7 = /*BAD_CALL!*/ rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v6 * 3L / 2L * 8L + 16L);
            *(long*)(v7 + 8L) = 1L;
            void* __src = gvar_60F050;
            size_t __n = (size_t)(gvar_60F040 * 8L);
            --ptr0;
            *ptr0 = &loc_405384;
            /*BAD_CALL!*/ →memcpy((void*)(v7 + 16L), __src, __n);
            long* ptr1 = (long*)(gvar_60F050 - 16L);
            --ptr0;
            *ptr0 = &loc_405399;
            /*BAD_CALL!*/ rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, ptr1);
            gvar_60F050 = (void*)(v7 + 16L);
        }
        *(long**)(gvar_60F040 * 8L + gvar_60F050) = (long*)(param0 - 16L);
        ++gvar_60F040;
        jump *(long*)(ptr0 + 3);
    }
}

int echoBinSafe(unsigned long* param0, long param1) {
    void* __ptr;
    size_t __size;
    long v0;
    long v1;
    long v2 = v0;
    unsigned long* ptr0 = param0;
    →flockfile(stdout);
    if(v1 > 0L) {
        do {
            unsigned long* ptr1 = *ptr0;
            FILE* __s = stdout;
            if(!ptr1) {
                __size = 0L;
                __ptr = (void*)&gvar_40A16D;
            }
            else {
                __size = *ptr1;
                __ptr = __size ? (void*)(ptr1 + 2): (void*)&gvar_40A16D;
            }
            ++ptr0;
            →fwrite(__ptr, __size, 1L, __s);
        }
        while(ptr0 == param0);
    }
    →fwrite((void*)&gvar_40A16C, 1L, 1L, stdout);
    int result = →fflush(stdout);
    →funlockfile(stdout);
    return result;
}

int echoBinSafe.constprop.24(unsigned long* param0) {
    void* __ptr;
    size_t __size;
    unsigned long* ptr0;
    →flockfile(stdout);
    unsigned long* ptr1 = *ptr0;
    FILE* __s = stdout;
    if(ptr1) {
        __size = *ptr1;
        __ptr = __size ? (void*)(ptr1 + 2): (void*)&gvar_40A16D;
    }
    else {
        __size = 0L;
        __ptr = (void*)&gvar_40A16D;
    }
    →fwrite(__ptr, __size, 1L, __s);
    →fwrite((void*)&gvar_40A16C, 1L, 1L, stdout);
    int result = →fflush(stdout);
    →funlockfile(stdout);
    return result;
}

unsigned long* excl_Z9cZKmN1jjRFCzU0lgW9a1XA(long param0, long param1) {
    unsigned long* result = *(unsigned long*)(((param1 >>> 9) & 0xFFL) * 8L + param0);
    if(result) {
        while(param1 >>> 9 != *(long*)(result + 1)) {
            result = *result;
            if(!result) {
                return 0L;
            }
        }
        *((long*)(((unsigned long)((unsigned int)param1 & 0x1ff) >>> 6) * 8L + (long)result) + 2) = ~(1L << ((unsigned long)((unsigned int)param1 & 0x1ff) & 0x3fL)) & *((long*)(((unsigned long)((unsigned int)param1 & 0x1ff) >>> 6) * 8L + (long)result) + 2);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(long* param0, long* param1, long param2, long param3, long param4, long param5, long param6) {
    long v0;
    long v1;
    long v2;
    long v3;
    long* ptr0;
    long v4;
    long v5;
    char* ptr1;
    long v6;
    long v7;
    long v8;
    long v9;
    char v10;
    char v11;
    unsigned long* ptr2;
    long v12;
    long v13;
    long v14;
    long v15;
    while(param0 && !(*(char*)((char*)param1 + 9L) & 0x1)) {
        v4 = (unsigned long)*(char*)(param1 + 1);
        if(*(unsigned char*)(param1 + 1) > 45) {
            break;
        }
        else {
            if(((1L << (v4 & 0x3fL)) & 0x200011400000L)) {
                /*BAD_CALL!*/ doOperation_3F8QeaTyYrJJF2gjBr6b8A(param0[0], param2 & 0xFFL);
            }
            else if(!((unsigned int)(1L << (v4 & 0x3fL)) & 0x8010010)) {
                if(!((unsigned int)(1L << (v4 & 0x3fL)) & 0x60000)) {
                    break;
                }
                else {
                    /*BAD_CALL!*/ forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ((long)param0, *(param1 + 3), param2 & 0xFFL, 0x200011400000L);
                    long v16 = (unsigned long)*ptr1;
                    if(*ptr1 != 2) {
                        if((unsigned char)v16 == 3) {
                            long v17 = **(unsigned long*)(ptr1 + 16L);
                            if(v17 == 2L) {
                                v4 = (unsigned long)*(short*)(*(long*)(ptr1 + 8L) + v8);
                            }
                            else if(v17 != 4L) {
                                v4 = 0L;
                                if(v17 == 1L) {
                                    v4 = (unsigned long)*(char*)(*(long*)(ptr1 + 8L) + v8);
                                }
                            }
                            else {
                                v4 = (long)*(int*)(*(long*)(ptr1 + 8L) + v8);
                            }
                            v16 = *(long*)(ptr1 + 32L);
                            ptr0 = *(unsigned long*)(ptr1 + 40L);
                            if((unsigned long)v16 <= (unsigned long)v4) {
                                goto loc_405510;
                            }
                            else {
                                param1 = *(unsigned long*)(v4 * 8L + (long)ptr0);
                            }
                            if(!param1) {
                            loc_405510:
                                param1 = *(unsigned long*)(v16 * 8L + (long)ptr0);
                                if(!param1) {
                                    jump *ptr2;
                                }
                            }
                            /*BAD_CALL!*/ forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ(v8, (long)param1, v5 & 0xFFL, v4);
                        }
                        else if((unsigned char)v16 != 1) {
                            jump *ptr2;
                        }
                        else {
                            param0 = (long*)(*(long*)(ptr1 + 8L) + v8);
                            param2 = (unsigned long)v11;
                            param1 = *(unsigned long*)(ptr1 + 16L);
                            continue;
                        }
                    }
                    --ptr2;
                    *ptr2 = v12;
                    --ptr2;
                    *ptr2 = v6;
                    --ptr2;
                    *ptr2 = v7;
                    --ptr2;
                    *ptr2 = v13;
                    v3 = 0L;
                    --ptr2;
                    *ptr2 = v14;
                    --ptr2;
                    *ptr2 = v15;
                    --ptr2;
                    v2 = *(long*)(ptr1 + 32L);
                    if(v2 <= 0L) {
                        jump *(long*)(ptr2 + 7);
                    }
                    else {
                        goto loc_405551;
                    }
                }
            }
            --ptr2;
            *ptr2 = v6;
            --ptr2;
            *ptr2 = v7;
            --ptr2;
            *ptr2 = v13;
            --ptr2;
            *ptr2 = v14;
            --ptr2;
            *ptr2 = v15;
            ptr0 = *(unsigned long*)(param1 + 2);
            v4 = *ptr0;
            v1 = *param1 / v4;
            if(*param1 / v4 > 0L) {
                v0 = 0L;
                goto loc_40545C;
            }
            else {
                jump *(long*)(ptr2 + 5);
            }
        }
    }
    jump *ptr2;
loc_405551:
    do {
        char* ptr3 = **(unsigned long*)(ptr1 + 40L);
        if(*ptr3 != 1) {
            --ptr2;
            *ptr2 = &loc_405564;
            /*BAD_CALL!*/ forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ(v8, (long)ptr3, (unsigned long)v10 & 0xffffffffL, v9);
        }
        else {
            long v18 = *(long*)(ptr3 + 16L);
            long* ptr4 = (long*)(*(long*)(ptr3 + 8L) + v8);
            if(!((unsigned int)(0x200011400000L >>> ((unsigned long)*(char*)(v18 + 8L) & 0x3fL)) & 0x1)) {
                --ptr2;
                *ptr2 = &loc_4055A4;
                /*BAD_CALL!*/ forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA((long)ptr4, v18, (unsigned long)v10 & 0xffffffffL);
            }
            else {
                long v19 = *ptr4;
                --ptr2;
                *ptr2 = &loc_4055BA;
                /*BAD_CALL!*/ doOperation_3F8QeaTyYrJJF2gjBr6b8A(v19, (unsigned long)v10 & 0xffffffffL);
            }
        }
        ++v3;
    }
    while(v3 != v2);
    jump *(long*)(ptr2 + 7);
loc_40545C:
    while(1) {
        long v20 = v4 * v0;
        ++v0;
        --ptr2;
        *ptr2 = &loc_405474;
        /*BAD_CALL!*/ forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA((long)(long*)(v20 + (long)param0), (long)ptr0, param2 & 0xFFL);
        if(v1 == v0) {
            break;
        }
        else {
            ptr0 = *(unsigned long*)(param1 + 2);
            v4 = *ptr0;
        }
    }
    jump *(long*)(ptr2 + 5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(long param0, long param1) {
    long v0;
    long v1;
    long v2;
    long v3;
    long result = *(long*)(param0 + 8L);
    long v4 = *(long*)(result + 40L);
    if(v4) {
        jump v4;
    }
    char v5 = *(char*)(result + 8L);
    if(v5 == 22 || v5 == 45) {
        result = forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(param0 + 16L, *(long*)(result + 16L), param1 & 0xFFL);
    }
    else if(v5 == 24 && param0 != -16L) {
        long v6 = v0;
        long v7 = v2;
        long v8 = v1;
        long v9 = v3;
        long v10 = *(long*)(param0 + 16L);
        if(v10 > 0L) {
            long v11 = 0L;
            while(1) {
                long* ptr0 = *(unsigned long*)(result + 16L);
                long v12 = *ptr0 * v11;
                ++v11;
                result = forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(param0 + v12 + 32L, (long)ptr0, param1 & 0xFFL);
                if(v10 == v11) {
                    return result;
                }
                result = *(long*)(param0 + 8L);
            }
        }
    }
    return result;
}

long forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ(long param0, char* param1, long param2, long param3, long param4, long param5, long param6) {
    unsigned long* ptr0;
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    for(long i = (long)*param1; *param1 != 2; i = (long)*param1) {
        if((unsigned char)i != 3) {
            if((unsigned char)i != 1) {
                jump *ptr0;
            }
            else {
                /*BAD_CALL!*/ forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA((long*)(*(long*)(param1 + 8L) + param0), *(long**)(param1 + 16L), param2 & 0xFFL, param3, param4, param5, *(long*)(ptr0 + 1));
            }
        }
        long v6 = **(unsigned long*)(param1 + 16L);
        if(v6 == 2L) {
            param3 = (long)*(short*)(*(long*)(param1 + 8L) + param0);
        }
        else if(v6 != 4L) {
            param3 = 0L;
            if(v6 == 1L) {
                param3 = (long)*(char*)(*(long*)(param1 + 8L) + param0);
            }
        }
        else {
            param3 = (long)*(int*)(*(long*)(param1 + 8L) + param0);
        }
        i = *(long*)(param1 + 32L);
        param4 = *(long*)(param1 + 40L);
        if((unsigned long)i <= (unsigned long)param3) {
            goto loc_405510;
        }
        else {
            param1 = *(unsigned long*)(param3 * 8L + param4);
        }
        if(!param1) {
        loc_405510:
            param1 = *(unsigned long*)(i * 8L + param4);
            if(!param1) {
                jump *ptr0;
            }
        }
        param2 &= 0xFFL;
    }
    --ptr0;
    *ptr0 = v1;
    --ptr0;
    *ptr0 = v2;
    --ptr0;
    *ptr0 = v3;
    --ptr0;
    *ptr0 = v4;
    long v7 = 0L;
    --ptr0;
    *ptr0 = v5;
    --ptr0;
    *ptr0 = v0;
    --ptr0;
    long v8 = *(long*)(param1 + 32L);
    if(v8 > 0L) {
        do {
            char* ptr1 = **(unsigned long*)(param1 + 40L);
            if(*ptr1 != 1) {
                --ptr0;
                *ptr0 = &loc_405564;
                /*BAD_CALL!*/ forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ(param0, (long)ptr1, param2 & 0xFFL, param3);
            }
            else {
                long* ptr2 = *(long**)(ptr1 + 16L);
                long v9 = (long)*(char*)&ptr2[1];
                long* ptr3 = (long*)(*(long*)(ptr1 + 8L) + param0);
                if(!((unsigned int)(0x200011400000L >>> (v9 & 0x3fL)) & 0x1)) {
                    --ptr0;
                    *ptr0 = &loc_4055A4;
                    /*BAD_CALL!*/ forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(ptr3, ptr2, param2 & 0xFFL, v9, param4, param5, *(long*)(ptr0 + 1));
                }
                else {
                    long v10 = ptr3[0];
                    --ptr0;
                    *ptr0 = &loc_4055BA;
                    /*BAD_CALL!*/ doOperation_3F8QeaTyYrJJF2gjBr6b8A(v10, param2 & 0xFFL);
                }
            }
            ++v7;
        }
        while(v7 != v8);
    }
    jump *(long*)(ptr0 + 7);
}

long freeBigChunk_CAqFS1jFL1RxG80t9bOGmAA(long param0, long param1) {
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
    long v10 = param1;
    long v11 = v8;
    long v12 = v7;
    long v13 = v6;
    long v14 = param1;
    *(long*)(param0 + 10384L) = *(long*)(param1 + 8L) + *(long*)(param0 + 10384L);
    long v15 = *(long*)param1 & 0xfffffffffffffffeL;
    *(long*)param1 = *(long*)param1 & 0xfffffffffffffffeL;
    if(v15) {
        long v16 = param1 - v15;
        unsigned long* ptr0 = *(unsigned long*)(((v16 >>> 21) & 0xFFL) * 8L + param0 + 0x28a8L);
        if(!ptr0) {
            goto loc_40279C;
        }
        else {
            while(v16 >>> 21 != *(long*)(ptr0 + 1)) {
                ptr0 = *ptr0;
                if(!ptr0) {
                    goto loc_40279C;
                }
            }
            if(!((1L << ((unsigned long)((unsigned int)(v16 >>> 12L) & 0x1ff) & 0x3fL)) & *((long*)(((unsigned long)((unsigned int)(v16 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr0) + 2)) || (*(char*)v16 & 0x1)) {
                goto loc_40279C;
            }
            else {
                long v17 = *(long*)(v16 + 8L);
                if(v17 <= 4040L || v17 > 0x3effffffL) {
                    goto loc_40279C;
                }
                else {
                    removeChunkFromMatrix_v9bekLOkesgfrZC4aumfLXw_2(param0, v16);
                    v4 = *(long*)(v14 + 8L) + *(long*)(v16 + 8L);
                    *(long*)(v16 + 8L) = *(long*)(v14 + 8L) + *(long*)(v16 + 8L);
                    unsigned long* ptr1 = *(unsigned long*)(((v14 >>> 21) & 0xFFL) * 8L + param0 + 0x28a8L);
                    if(ptr1) {
                        while(v14 >>> 21 != *(long*)(ptr1 + 1)) {
                            ptr1 = *ptr1;
                            if(!ptr1) {
                                goto loc_402AF6;
                            }
                        }
                        *((long*)(((unsigned long)((unsigned int)(v14 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr1) + 2) = ~(1L << ((unsigned long)((unsigned int)(v14 >>> 12L) & 0x1ff) & 0x3fL)) & *((long*)(((unsigned long)((unsigned int)(v14 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr1) + 2);
                        v4 = *(long*)(v16 + 8L);
                    }
                loc_402AF6:
                    if(v4 > 0x3f000000L) {
                        v14 = (long)splitChunk2_UxUTh1oy39boKK4NPJIGnLQ(param0, v16, 0x3f000000L);
                        long v18 = *(long*)(v16 + 8L);
                        long v19 = v18 & 0xffffffffL;
                        if((unsigned int)v18 <= 0xffff) {
                            v3 = 0L;
                            if((unsigned int)v18 > 0xff) {
                                v3 = 8L;
                                v19 = (unsigned long)((unsigned int)v18 >>> 8);
                            }
                        }
                        else if((unsigned int)v18 <= 0xffffff) {
                            v19 = (unsigned long)((unsigned int)v19 >>> 16);
                            v3 = 16L;
                        }
                        else {
                            v3 = 24L;
                            v19 = (unsigned long)((unsigned int)v18 >>> 24);
                        }
                        long v20 = (long)*(unsigned char*)((long)&fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ + v19);
                        *(long*)(v16 + 24L) = 0L;
                        long v21 = v20 + v3;
                        long v22 = (v18 >>> ((v21 - 5L) & 0x3fL)) - 32L;
                        long v23 = ((v21 - 6L) * 32L + v22) * 8L + param0;
                        long v24 = *(long*)(v23 + 4216L);
                        *(long*)(v16 + 16L) = *(long*)(v23 + 4216L);
                        if(v24) {
                            *(long*)(v24 + 24L) = v16;
                        }
                        *(long*)(v23 + 4216L) = v16;
                        v10 = v14;
                        *(int*)(v21 * 4L + param0 + 0xffcL) = (unsigned int)(1L << ((unsigned long)((unsigned int)v22 & 0x1f) & 0x3fL)) | *(int*)(v21 * 4L + param0 + 0xffcL);
                        *(int*)(param0 + 0x1010L) = (unsigned int)(1L << ((unsigned long)(((unsigned int)v21 - 6) & 0x1f) & 0x3fL)) | *(int*)(param0 + 0x1010L);
                        v4 = *(long*)(v14 + 8L);
                    }
                    else {
                        v10 = v16;
                        v14 = v16;
                    }
                }
            }
        }
    }
    else {
    loc_40279C:
        v4 = *(long*)(v14 + 8L);
    }
    long v25 = v4 + v10;
    long v26 = ((v25 >>> 21) & 0xFFL) * 8L + param0;
    unsigned long* ptr2 = *(unsigned long*)(v26 + 0x28a8L);
    if(ptr2) {
        if(v25 >>> 21 != *(long*)(ptr2 + 1)) {
            do {
                ptr2 = *ptr2;
                if(!ptr2) {
                    goto loc_4027E2;
                }
            }
            while(v25 >>> 21 == *(long*)(ptr2 + 1));
        }
        if(!((1L << ((unsigned long)((unsigned int)(v25 >>> 12L) & 0x1ff) & 0x3fL)) & *((long*)(((unsigned long)((unsigned int)(v25 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr2) + 2)) || (*(char*)v25 & 0x1) || *(long*)(v25 + 8L) <= 4040L || v4 > 0x3effffffL) {
            goto loc_4027E2;
        }
        else {
            removeChunkFromMatrix_v9bekLOkesgfrZC4aumfLXw_2(param0, v25);
            v4 = *(long*)(v14 + 8L) + *(long*)(v5 + 8L);
            *(long*)(v14 + 8L) = *(long*)(v14 + 8L) + *(long*)(v5 + 8L);
            ptr2 = *(unsigned long*)(v26 + 0x28a8L);
            if(ptr2) {
                if(*(long*)(ptr2 + 1) != v9) {
                    do {
                        ptr2 = *ptr2;
                        if(!ptr2) {
                            goto loc_402918;
                        }
                    }
                    while(*(long*)(ptr2 + 1) == v9);
                }
                *((long*)(((unsigned long)((unsigned int)(v25 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr2) + 2) = ~(1L << ((unsigned long)((unsigned int)(v25 >>> 12L) & 0x1ff) & 0x3fL)) & *((long*)(((unsigned long)((unsigned int)(v25 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr2) + 2);
                v4 = *(long*)(v14 + 8L);
                if(v4 <= 0x3f000000L) {
                    goto loc_4027E2;
                }
                else {
                    goto loc_40292B;
                }
            }
        loc_402918:
            if(v4 <= 0x3f000000L) {
                goto loc_4027E2;
            }
            else {
            loc_40292B:
                long* ptr3 = splitChunk2_UxUTh1oy39boKK4NPJIGnLQ(param0, v14, 0x3f000000L);
                long v27 = ptr3[1];
                long v28 = v27 & 0xffffffffL;
                if((unsigned int)v27 <= 0xffff) {
                    v2 = 0L;
                    if((unsigned int)v27 > 0xff) {
                        v2 = 8L;
                        v28 = (unsigned long)((unsigned int)v27 >>> 8);
                    }
                }
                else if((unsigned int)v27 > 0xffffff) {
                    v2 = 24L;
                    v28 = (unsigned long)((unsigned int)v27 >>> 24);
                }
                else {
                    v28 = (unsigned long)((unsigned int)v28 >>> 16);
                    v2 = 16L;
                }
                long v29 = (long)*(unsigned char*)((long)&fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ + v28);
                ptr3[3] = 0L;
                long v30 = v29 + v2;
                long v31 = (v27 >>> ((v30 - 5L) & 0x3fL)) - 32L;
                long* ptr4 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)(unsigned long*)(v30 - 6L) * 32L) + v31) * 8L) + param0);
                long v32 = *(ptr4 + 527);
                ptr3[2] = *(ptr4 + 527);
                if(v32) {
                    *(long**)(v32 + 24L) = ptr3;
                }
                *(long**)(ptr4 + 527) = ptr3;
                *(int*)(v30 * 4L + param0 + 0xffcL) = (unsigned int)(1L << ((unsigned long)((unsigned int)v31 & 0x1f) & 0x3fL)) | *(int*)(v30 * 4L + param0 + 0xffcL);
                *(int*)(param0 + 0x1010L) = (unsigned int)(1L << ((unsigned long)(((unsigned int)v30 - 6) & 0x1f) & 0x3fL)) | *(int*)(param0 + 0x1010L);
                v4 = *(long*)(v14 + 8L);
                v1 = v4 & 0xffffffffL;
                if((unsigned int)v4 <= 0xffff) {
                    goto loc_4027EF;
                }
                else {
                loc_4029E5:
                    if((unsigned int)v4 <= 0xffffff) {
                        v1 = (unsigned long)((unsigned int)v1 >>> 16);
                        v0 = 16L;
                    }
                    else {
                        v1 = (unsigned long)((unsigned int)v1 >>> 24);
                        v0 = 24L;
                    }
                }
            }
        }
    }
    else {
    loc_4027E2:
        v1 = v4 & 0xffffffffL;
        if((unsigned int)v4 > 0xffff) {
            goto loc_4029E5;
        }
        else {
        loc_4027EF:
            v0 = 0L;
        }
        if((unsigned int)v4 > 0xff) {
            v1 = (unsigned long)((unsigned int)v1 >>> 8);
            v0 = 8L;
        }
    }
    long v33 = (long)*(unsigned char*)((long)&fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ + v1);
    *(long*)(v14 + 24L) = 0L;
    long v34 = v33 + v0;
    long v35 = (v4 >>> ((v34 - 5L) & 0x3fL)) - 32L;
    long v36 = ((v34 - 6L) * 32L + v35) * 8L + param0;
    long v37 = *(long*)(v36 + 4216L);
    *(long*)(v14 + 16L) = *(long*)(v36 + 4216L);
    if(v37) {
        *(long*)(v37 + 24L) = v14;
    }
    *(long*)(v36 + 4216L) = v14;
    *(int*)(v34 * 4L + param0 + 0xffcL) = (unsigned int)(1L << ((unsigned long)((unsigned int)v35 & 0x1f) & 0x3fL)) | *(int*)(v34 * 4L + param0 + 0xffcL);
    *(int*)(param0 + 0x1010L) = (unsigned int)(1L << ((unsigned long)(((unsigned int)v34 - 6) & 0x1f) & 0x3fL)) | *(int*)(param0 + 0x1010L);
    return 1L << ((unsigned long)(((unsigned int)v34 - 6) & 0x1f) & 0x3fL);
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

int freeHugeChunk_jnrbguyViYONI3PJ1RZJjQ(long param0, void* __addr) {
    size_t __len = *(size_t*)((long)__addr + 8L);
    unsigned long* ptr0 = *(unsigned long*)((long*)((long)(long*)((long)(long*)((long)(long*)((long)__addr >>> 21) & 0xFFL) * 8L) + param0) + 0x515);
    if(ptr0) {
        while((long*)((long)__addr >>> 21) != *(long*)(ptr0 + 1)) {
            ptr0 = *ptr0;
            if(!ptr0) {
                long v0 = *(long*)(param0 + 0x2880L);
                long v1 = *(long*)(param0 + 0x2888L) < v0 ? v0: *(long*)(param0 + 0x2888L);
                *(long*)(param0 + 0x2880L) = v0 - __len;
                *(long*)(param0 + 0x2888L) = v1;
                return →munmap(__addr, __len);
            }
        }
        *((long*)(((unsigned long)((unsigned int)(long*)((long)__addr >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr0) + 2) = ~(1L << ((unsigned long)((unsigned int)(long*)((long)__addr >>> 12L) & 0x1ff) & 0x3fL)) & *((long*)(((unsigned long)((unsigned int)(long*)((long)__addr >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr0) + 2);
    }
    long v0 = *(long*)(param0 + 0x2880L);
    long v1 = *(long*)(param0 + 0x2888L) < v0 ? v0: *(long*)(param0 + 0x2888L);
    *(long*)(param0 + 0x2880L) = v0 - __len;
    *(long*)(param0 + 0x2888L) = v1;
    return →munmap(__addr, __len);
}

long genericReset(unsigned long param0, unsigned long* param1, long param2, long param3, long param4, long param5, long param6) {
    long* ptr0;
    unsigned long v0;
    long v1;
    long v2;
    long v3;
    long* ptr1;
    unsigned long v4;
    long* ptr2;
    unsigned long* ptr3;
    long v5;
    long v6;
    long v7;
    long v8;
    long v9;
    long v10;
    char* ptr4;
    long v11;
    long v12;
    long v13;
    long v14;
    while(1) {
        long v15 = (unsigned long)((unsigned int)*(char*)(param1 + 1) - 4);
        if((unsigned char)v15 <= 41) {
            ptr3 = ptr3 - 1;
            *ptr3 = v7;
            ptr2 = (long*)param1;
            --ptr3;
            *ptr3 = v8;
            --ptr3;
            *ptr3 = v9;
            v4 = param0;
            --ptr3;
            *ptr3 = v10;
            --ptr3;
            switch(v15) {
                case 0: 
                case 12: {
                    ptr1 = *(long**)(param1 + 2);
                    v3 = 0L;
                    v2 = ptr1[0];
                    v1 = *ptr2 / v2;
                    if(*ptr2 / v2 <= 0L) {
                        jump *(long*)(ptr3 + 5);
                    }
                    else {
                        goto loc_404362;
                    }
                }
                case 1: 
                case 2: 
                case 3: 
                case 4: 
                case 5: 
                case 6: 
                case 7: 
                case 8: 
                case 9: 
                case 10: 
                case 11: 
                case 15: {
                    ptr3 += 5;
                    /*BAD_CALL!*/ →memset((void*)param0, 0, *param1);
                    goto loc_40439D;
                }
                case 13: {
                    break;
                }
                case 14: {
                    ptr3 += 5;
                    /*BAD_CALL!*/ genericResetAux_ruA1rosalqf8AhzZPPTBQg((long)param0, *(long**)(param1 + 3), param2, param3, param4, param5, *(long*)(ptr3 + 1));
                    break;
                }
                default: {
                    throw 0;
                }
            }
            long* ptr5 = *(long**)(param1 + 3);
            --ptr3;
            *ptr3 = &loc_404331;
            /*BAD_CALL!*/ genericResetAux_ruA1rosalqf8AhzZPPTBQg((long)param0, ptr5, param2, param3, param4, param5, *(long*)(ptr3 + 1));
            *(long*)v4 = 0L;
            jump *(long*)(ptr3 + 5);
        }
        else {
        loc_40439D:
            /*BAD_CALL!*/ →memset((void*)param0, 0, *param1);
            --ptr3;
            *ptr3 = v5;
            --ptr3;
            *ptr3 = v13;
            --ptr3;
            *ptr3 = v6;
            --ptr3;
            *ptr3 = v14;
            --ptr3;
            long v16 = (long)*ptr4;
            if(*ptr4 == 2) {
                long v17 = *(long*)(ptr4 + 32L);
                long v18 = 0L;
                if(v17 > 0L) {
                    do {
                        long* ptr6 = *(long**)(v18 * 8L + *(long*)(ptr4 + 40L));
                        ++v18;
                        --ptr3;
                        *ptr3 = &loc_4043FF;
                        /*BAD_CALL!*/ genericResetAux_ruA1rosalqf8AhzZPPTBQg(v11, ptr6, param2, v12, param4, param5, *(long*)(ptr3 + 1));
                    }
                    while(v18 != v17);
                    jump *(long*)(ptr3 + 5);
                loc_404362:
                    do {
                        long v19 = v3 * v2;
                        ++v3;
                        --ptr3;
                        *ptr3 = &loc_404372;
                        /*BAD_CALL!*/ genericReset(v4 + v19, (long)ptr1);
                        if(v3 != v1) {
                            ptr1 = *(long**)(ptr2 + 2);
                            v2 = ptr1[0];
                            goto loc_404362;
                        }
                    }
                    while(v3 != v1);
                    jump *(long*)(ptr3 + 5);
                }
                jump *(long*)(ptr3 + 5);
            }
            else if((unsigned char)v16 == 3) {
                break;
            }
            else if((unsigned char)v16 != 1) {
                jump *(long*)(ptr3 + 5);
            }
            else {
                param1 = *(unsigned long*)(ptr4 + 16L);
                ++ptr3;
                v10 = *ptr3;
                ++ptr3;
                v9 = *ptr3;
                ++ptr3;
                param0 = (unsigned long)(*(long*)(ptr4 + 8L) + v11);
                v8 = *ptr3;
                ++ptr3;
                v7 = *ptr3;
                ++ptr3;
            }
        }
    }
    long v20 = **(long**)(ptr4 + 16L);
    if(v20 == 2L) {
        v0 = (unsigned long)*(short*)(*(long*)(ptr4 + 8L) + v11);
    }
    else if(v20 != 4L) {
        v0 = 0L;
        if(v20 == 1L) {
            v0 = (unsigned long)*(char*)(*(long*)(ptr4 + 8L) + v11);
        }
    }
    else {
        v0 = (unsigned long)*(int*)(*(long*)(ptr4 + 8L) + v11);
    }
    long v21 = *(long*)(ptr4 + 32L);
    long v22 = *(long*)(ptr4 + 40L);
    if(v0 >= (unsigned long)v21) {
    loc_40445C:
        ptr0 = *(long**)(v21 * 8L + v22);
        if(!ptr0) {
            ptr3 += 5;
            /*BAD_CALL!*/ →memset((void*)(*(long*)(ptr4 + 8L) + v11), 0, (size_t)v20);
            goto loc_404490;
        }
    }
    else {
    loc_404490:
        ptr0 = *(long**)(v0 * 8L + v22);
        if(!ptr0) {
            goto loc_40445C;
        }
    }
    --ptr3;
    *ptr3 = &loc_40446D;
    /*BAD_CALL!*/ genericResetAux_ruA1rosalqf8AhzZPPTBQg(v11, ptr0, v20, v21, param4, param5, *(long*)(ptr3 + 1));
    v20 = **(long**)(ptr4 + 16L);
    ptr3 += 5;
    /*BAD_CALL!*/ →memset((void*)(*(long*)(ptr4 + 8L) + v11), 0, (size_t)v20);
    goto loc_404490;
}

// Stale decompilation - Refresh this view to re-decompile this code
long genericResetAux_ruA1rosalqf8AhzZPPTBQg(long param0, long* param1, long param2, long param3, long param4, long param5, long param6) {
    long v0;
    long v1;
    unsigned long v2;
    size_t __n;
    long v3;
    long v4;
    long v5;
    long v6;
    long v7;
    long v8;
    unsigned long* ptr0 = ptr0 - 1;
    *ptr0 = v5;
    --ptr0;
    *ptr0 = v6;
    --ptr0;
    *ptr0 = v7;
    --ptr0;
    *ptr0 = v8;
    --ptr0;
    long v9 = (long)*(char*)&param1[0];
    if(*(char*)&param1[0] == 2) {
        v4 = param1[4];
        v3 = 0L;
    }
    else if((unsigned char)v9 == 3) {
    loc_404434:
        __n = *(size_t*)param1[2];
        if(__n == 2L) {
            v2 = (unsigned long)*(short*)(param1[1] + param0);
        }
        else if(__n != 4L) {
            v2 = 0L;
            if(__n == 1L) {
                v2 = (unsigned long)*(char*)(param1[1] + param0);
            }
        }
        else {
            v2 = (unsigned long)*(int*)(param1[1] + param0);
        }
        v1 = param1[4];
        v0 = param1[5];
        if(v2 < (unsigned long)v1) {
            goto loc_404497;
        }
        else {
            goto loc_404463;
        }
    }
    else if((unsigned char)v9 == 1) {
        ptr0 += 5;
        /*BAD_CALL!*/ genericReset(param1[1] + param0, param1[2]);
        goto loc_404434;
    }
    else {
        jump *(long*)(ptr0 + 5);
    }
    if(v4 > 0L) {
        do {
            ++v3;
            --ptr0;
            *ptr0 = &loc_4043FF;
            /*BAD_CALL!*/ genericResetAux_ruA1rosalqf8AhzZPPTBQg();
        }
        while(v3 != v4);
    }
    jump *(long*)(ptr0 + 5);
loc_404463:
    if(*(long*)(v1 * 8L + v0)) {
        goto loc_404468;
    loc_404497:
        if(!*(long*)(v2 * 8L + v0)) {
            goto loc_404463;
        }
        else {
        loc_404468:
            --ptr0;
            *ptr0 = &loc_40446D;
            /*BAD_CALL!*/ genericResetAux_ruA1rosalqf8AhzZPPTBQg();
            __n = *(size_t*)param1[2];
        }
    }
    ptr0 += 5;
    /*BAD_CALL!*/ →memset((void*)(param1[1] + param0), 0, __n);
    goto loc_404497;
}

long getActiveStack_2XtoPjgvlHPkHLitAW2flw(long param0) {
    return param0;
}

long getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(long param0, long param1) {
    long v0;
    long v1;
    long result;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6;
    long v7;
    long v8;
    long v9;
    long v10;
    long v11 = param1 & 0xffffffffL;
    long v12 = v8;
    long v13 = v9;
    long v14 = v7;
    long v15 = v10;
    if((unsigned int)param1 <= 0xffff) {
        v6 = 0L;
        if((unsigned int)param1 > 0xff) {
            v6 = 8L;
            v11 = (unsigned long)((unsigned int)param1 >>> 8);
        }
    }
    else if((unsigned int)param1 > 0xffffff) {
        v6 = 24L;
        v11 = (unsigned long)((unsigned int)param1 >>> 24);
    }
    else {
        v11 = (unsigned long)((unsigned int)v11 >>> 16);
        v6 = 16L;
    }
    long v16 = ((1L << (((long)*(unsigned char*)((long)&fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ + v11) + v6 - 5L) & 0x3fL)) + 0xfffL) & 0xfffffffffffff000L;
    size_t v17 = (size_t)((v16 + param1 - 1L) & (0L - v16));
    long v18 = ((long)v17 <= 0x3f000000L ? v17: 0x3f000000L) & 0xffffffffL;
    if(((long)v17 <= 0x3f000000L ? (unsigned int)v17: 0x3f000000) <= 0xffff) {
        v5 = 0L;
        if(((long)v17 <= 0x3f000000L ? (unsigned int)v17: 0x3f000000) > 0xff) {
            v5 = 8L;
            v18 = (unsigned long)(((long)v17 <= 0x3f000000L ? (unsigned int)v17: 0x3f000000) >>> 8);
        }
    }
    else if(((long)v17 <= 0x3f000000L ? (unsigned int)v17: 0x3f000000) > 0xffffff) {
        v5 = 24L;
        v18 = (unsigned long)(((long)v17 <= 0x3f000000L ? (unsigned int)v17: 0x3f000000) >>> 24);
    }
    else {
        v18 = (unsigned long)((unsigned int)v18 >>> 16);
        v5 = 16L;
    }
    long v19 = (long)*(unsigned char*)((long)&fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ + v18) + v5;
    long v20 = v19 - 6L;
    int v21 = (unsigned int)(0xffffffffL << (((((long)v17 <= 0x3f000000L ? v17: 0x3f000000L) >>> ((v19 - 5L) & 0x3fL)) - 32L) & 0x3fL)) & *(int*)(v19 * 4L + param0 + 0xffcL);
    if(!v21) {
        int v22 = (unsigned int)(0xffffffffL << ((v20 + 1L) & 0x3fL)) & *(int*)(param0 + 0x1010L);
        long v23 = (unsigned long)((0 - v22) & v22);
        if((unsigned int)((0 - v22) & v22) <= 0xffff) {
            v4 = 0L;
            if((unsigned int)v23 > 0xff) {
                v23 = (unsigned long)((unsigned int)v23 >>> 8);
                v4 = 8L;
            }
        }
        else if((unsigned int)v23 > 0xffffff) {
            v23 = (unsigned long)((unsigned int)v23 >>> 24);
            v4 = 24L;
        }
        else {
            v23 = (unsigned long)((unsigned int)v23 >>> 16);
            v4 = 16L;
        }
        v20 = (long)*(unsigned char*)((long)&fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ + v23) + v4;
        if(v20 > 0L) {
            int v24 = *(int*)(v20 * 4L + param0 + 0x1014L);
            long v25 = (unsigned long)((0 - v24) & v24);
            if((unsigned int)((0 - v24) & v24) <= 0xffff) {
                v3 = 0L;
                if((unsigned int)v25 > 0xff) {
                    v25 = (unsigned long)((unsigned int)v25 >>> 8);
                    v3 = 8L;
                }
            }
            else if((unsigned int)v25 > 0xffffff) {
                v25 = (unsigned long)((unsigned int)v25 >>> 24);
                v3 = 24L;
            }
            else {
                v25 = (unsigned long)((unsigned int)v25 >>> 16);
                v3 = 16L;
            }
            v2 = (long)*(unsigned char*)((long)&fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ + v25) + v3;
            result = *(long*)((v20 * 32L + v2 + 526L) * 8L + param0 + 8L);
            if(result) {
                goto loc_401D31;
            }
        }
        goto loc_401BFA;
    }
    else {
        long v26 = (unsigned long)((0 - v21) & v21);
        if((unsigned int)((0 - v21) & v21) <= 0xffff) {
            v1 = 0L;
            if((unsigned int)v26 > 0xff) {
                v26 = (unsigned long)((unsigned int)v26 >>> 8);
                v1 = 8L;
            }
        }
        else if((unsigned int)v26 > 0xffffff) {
            v26 = (unsigned long)((unsigned int)v26 >>> 24);
            v1 = 24L;
        }
        else {
            v26 = (unsigned long)((unsigned int)v26 >>> 16);
            v1 = 16L;
        }
        v2 = (long)*(unsigned char*)((long)&fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ + v26) + v1;
        result = *(long*)((v20 * 32L + v2 + 526L) * 8L + param0 + 8L);
        if(result) {
        loc_401D31:
            long v27 = *(long*)(result + 16L);
            *(long*)((v20 * 32L + v2 + 526L) * 8L + param0 + 8L) = *(long*)(result + 16L);
            if(v27) {
                *(long*)(v27 + 24L) = 0L;
            }
            else {
                v3 = v20 * 4L + param0;
                *(int*)(v3 + 0x1014L) = ~(unsigned int)(1L << ((unsigned long)((unsigned int)v2 & 0x1f) & 0x3fL)) & *(int*)(v3 + 0x1014L);
                if(!*(int*)(v3 + 0x1014L)) {
                    *(int*)(param0 + 0x1010L) = ~(unsigned int)(1L << ((unsigned long)((unsigned int)v20 & 0x1f) & 0x3fL)) & *(int*)(param0 + 0x1010L);
                }
            }
            *(__int128*)(result + 16L) = 0x0X;
            if((long)(((long)v17 <= 0x3f000000L ? v17: 0x3f000000L) + 0xfffL) >= *(long*)(result + 8L)) {
                goto loc_401C23;
            }
        }
        else {
        loc_401BFA:
            if((long)v17 > 0x7ffffL) {
                void* ptr0 = requestOsChunks_z9bCNjXTYllZ3pI24nEsw2g_2(param0, (long)v17 <= 0x3f000000L ? v17: 0x3f000000L);
                result = (long)ptr0;
                if((long)((long)v17 <= 0x3f000000L ? v17: 0x3f000000L) >= *(long*)((long)ptr0 + 8L)) {
                    goto loc_401C23;
                }
            }
            else {
                result = (long)requestOsChunks_z9bCNjXTYllZ3pI24nEsw2g_2(param0, 0x80000L);
            }
        }
        long* ptr1 = splitChunk2_UxUTh1oy39boKK4NPJIGnLQ(param0, result, (long)((long)v17 <= 0x3f000000L ? v17: 0x3f000000L));
        long v28 = ptr1[1];
        long v29 = v28 & 0xffffffffL;
        if((unsigned int)v28 <= 0xffff) {
            v0 = 0L;
            if((unsigned int)v28 > 0xff) {
                v0 = 8L;
                v29 = (unsigned long)((unsigned int)v28 >>> 8);
            }
        }
        else if((unsigned int)v28 > 0xffffff) {
            v0 = 24L;
            v29 = (unsigned long)((unsigned int)v28 >>> 24);
        }
        else {
            v29 = (unsigned long)((unsigned int)v29 >>> 16);
            v0 = 16L;
        }
        long v30 = (long)*(unsigned char*)((long)&fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ + v29);
        ptr1[3] = 0L;
        long v31 = v30 + v0;
        long v32 = (v28 >>> ((v31 - 5L) & 0x3fL)) - 32L;
        long v33 = ((v31 - 6L) * 32L + v32) * 8L + param0;
        long v34 = *(long*)(v33 + 4216L);
        ptr1[2] = *(long*)(v33 + 4216L);
        if(v34) {
            *(long**)(v34 + 24L) = ptr1;
        }
        *(long**)(v33 + 4216L) = ptr1;
        *(int*)(v31 * 4L + param0 + 0xffcL) = (unsigned int)(1L << ((unsigned long)((unsigned int)v32 & 0x1f) & 0x3fL)) | *(int*)(v31 * 4L + param0 + 0xffcL);
        *(int*)(param0 + 0x1010L) = (unsigned int)(1L << ((unsigned long)(((unsigned int)v31 - 6) & 0x1f) & 0x3fL)) | *(int*)(param0 + 0x1010L);
    }
loc_401C23:
    *(long*)result = 1L;
    long v35 = ((result >>> 21) & 0xFFL) * 8L + param0;
    void* ptr2 = *(void**)(v35 + 0x28a8L);
    if(!ptr2) {
        goto loc_401E88;
    }
    else {
        while(result >>> 21 != *(long*)((long)ptr2 + 8L)) {
            ptr2 = *(void**)ptr2;
            if(!ptr2) {
            loc_401E88:
                ptr2 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 80L);
                *(long*)ptr2 = *(long*)(v35 + 0x28a8L);
                *(void**)(v35 + 0x28a8L) = ptr2;
                *(long*)((long)ptr2 + 8L) = result >>> 21;
                break;
            }
        }
    }
    *((long*)(((unsigned long)((unsigned int)(result >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr2) + 2) = (1L << ((unsigned long)((unsigned int)(result >>> 12L) & 0x1ff) & 0x3fL)) | *((long*)(((unsigned long)((unsigned int)(result >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr2) + 2);
    *(long*)(param0 + 10384L) = *(long*)(param0 + 10384L) - ((long)v17 <= 0x3f000000L ? v17: 0x3f000000L);
    return result;
}

long getBottom_QXg9anCfFuhk3avAkOOKNhQ(long param0) {
    if(!*(long*)(param0 + 12504L)) {
        __int128 v0 = (unsigned __int128)(param0 + 12504L) | ((unsigned __int128)(unsigned long)(v0 >>> 0x40X) << 64);
        v0 = punpcklqdq(v0, v0);
        *(__int128*)(param0 + 12504L) = v0;
    }
    return param0 + 12504L;
}

long getDiscriminant_MBlSP9aCmxWSBuDOxawp8Sg(long param0, long param1) {
    long v0 = **(unsigned long*)(param1 + 16L);
    if(v0 == 2L) {
        return (unsigned long)*(short*)(*(long*)(param1 + 8L) + param0);
    }
    else if(v0 == 4L) {
        return (long)*(int*)(*(long*)(param1 + 8L) + param0);
    }
    else if(v0 != 1L) {
        return 0L;
    }
    return *(long*)(param1 + 8L);
}

long getHugeChunk_z9bCNjXTYllZ3pI24nEsw2g_3(long param0, size_t __len) {
    void* ptr0;
    long v0;
    void* ptr1 = ptr0;
    void* ptr2 = →mmap(NULL, __len, 3, 34, -1, 0L);
    if((unsigned long)(long*)((long)ptr2 - 1L) > 18446744073709551613L) {
        /*NO_RETURN*/ raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
    }
    *(long*)(v0 + 0x2880L) = *(long*)(v0 + 0x2880L) + __len;
    *(size_t*)((long)ptr2 + 8L) = __len;
    *(__int128*)((long)ptr2 + 16L) = 0x0X;
    long* ptr3 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr2 >>> 21) & 0xFFL) * 8L) + v0);
    *(long*)ptr2 = 1L;
    void* ptr4 = *(void**)(ptr3 + 0x515);
    if(!ptr4) {
        goto loc_402058;
    }
    else {
        while((long*)((long)ptr2 >>> 21) != *(long*)((long)ptr4 + 8L)) {
            ptr4 = *(void**)ptr4;
            if(!ptr4) {
            loc_402058:
                ptr4 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(v0, 80L);
                *(long*)ptr4 = *(ptr3 + 0x515);
                *(void**)(ptr3 + 0x515) = ptr4;
                *(unsigned long*)((long)ptr4 + 8L) = (long*)((long)ptr2 >>> 21);
                break;
            }
        }
    }
    *((long*)(((unsigned long)((unsigned int)(long*)((long)ptr2 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr4) + 2) = (1L << ((unsigned long)((unsigned int)(long*)((long)ptr2 >>> 12L) & 0x1ff) & 0x3fL)) | *((long*)(((unsigned long)((unsigned int)(long*)((long)ptr2 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr4) + 2);
    return (long)ptr2;
}

unsigned long getOccupiedMem_9bFvoxSITMVCg7RY8KIar1Q() {
    return gvar_6118F8;
}

long getRefcount(long param0) {
    return *(long*)(param0 - 16L) >>> 3;
}

long getSmallChunk_h6cvXbfQjxIdThM5GthosA(long param0) {
    return getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(param0, 0x1000L);
}

long highGauge_3mwQtFaBTgevFrybZdgUNw_2(long* param0) {
    long result;
    if(*param0 != param0) {
        do {
            result = *(param0 + 3);
            param0 = *(unsigned long*)(param0 + 1);
        }
        while(*param0 != param0);
        return result;
    }
    return -1L;
}

long* inRange_Bc4Ua6HOMCIDGx9b15HSY4g(long* param0, unsigned long param1) {
    if(*param0 != param0) {
        long* result = param0;
    loc_406572:
        do {
            unsigned long v0 = *(unsigned long*)(result + 2);
            if(v0 <= param1 && *(unsigned long*)(result + 3) > param1) {
                return result;
            }
            result = *(unsigned long*)((v0 < param1 ? 1L: 0L) * 8L + (long)result);
            if(*result != result) {
                goto loc_406572;
            }
        }
        while(*result != result);
    }
    return NULL;
}

void* incl_Iz1GYiOVKwItgr5CdCm0dQ(long param0, long param1, long param2) {
    long v0;
    long v1 = v0;
    unsigned long* ptr0 = (unsigned long*)(((param2 >>> 9) & 0xFFL) * 8L + param1);
    void* result = *ptr0;
    if(!result) {
        goto loc_401645;
    }
    else {
        while(param2 >>> 9 != *(long*)((long)result + 8L)) {
            result = *(void**)result;
            if(!result) {
            loc_401645:
                result = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 80L);
                *(long*)result = *ptr0;
                *ptr0 = result;
                *(long*)((long)result + 8L) = param2 >>> 9;
                break;
            }
        }
    }
    *((long*)(((unsigned long)((unsigned int)param2 & 0x1ff) >>> 6) * 8L + (long)result) + 2) = (1L << ((unsigned long)((unsigned int)param2 & 0x1ff) & 0x3fL)) | *((long*)(((unsigned long)((unsigned int)param2 & 0x1ff) >>> 6) * 8L + (long)result) + 2);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* incl_m4q9b16kJJcoKe9c4ERtlpCg(long* param0, long param1) {
    long v0;
    long* ptr0;
    long* ptr1;
    long v1;
    long v2 = v1;
    long v3 = *(param0 + 1);
    long v4 = *(param0 + 3);
    long v5 = (param1 >>> 12) & v3;
    long v6 = v5 * 8L;
    unsigned long* ptr2 = (unsigned long*)(v4 + v6);
    long* result = *ptr2;
    if(result) {
        long v7 = v5;
        if(param1 >>> 12 != *(result + 1)) {
            do {
                v7 = (v7 * 5L + 1L) & v3;
                result = *(unsigned long*)(v7 * 8L + v4);
                if(!result) {
                    goto loc_404F3B;
                }
            }
            while(param1 >>> 12 == *(result + 1));
        }
    }
    else {
    loc_404F3B:
        long v8 = *param0;
        if((v3 + 1L) * 2L < v8 * 3L || v3 + 1L - v8 <= 3L) {
            cellSetEnlarge_ZCqaZEiX9aUtDCRoknrJ9bpQ((long)param0);
            v3 = *(param0 + 1);
            v4 = *(param0 + 3);
            v8 = *param0;
            v5 = (param1 >>> 12) & v3;
            v6 = v5 * 8L;
            ptr2 = (unsigned long*)(v4 + v6);
        }
        *param0 = v8 + 1L;
        if(*ptr2) {
            do {
                v5 = (v5 * 5L + 1L) & v3;
                v6 = v5 * 8L;
            }
            while(*(long*)(v5 * 8L + v4));
        }
        long v9 = gvar_60F0D0;
        if(v9) {
            ptr1 = *(unsigned long*)(v9 + 32L);
            if(ptr1) {
                *(long*)(v9 + 32L) = *ptr1;
                ptr0 = ptr1;
            }
            else {
                long v10 = *(long*)(v9 + 48L);
                ptr0 = (long*)(v9 + v10 + 56L);
                ptr1 = (long*)(v9 + v10 + 56L);
                *(long*)(v9 + 48L) = v10 + 96L;
            }
            v0 = *(long*)(v9 + 40L) - 96L;
            *(long*)(v9 + 40L) = *(long*)(v9 + 40L) - 96L;
        }
        else {
            v9 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x1000L);
            unsigned __int128 v11 = gvar_40AB90;
            *(long*)(v9 + 32L) = 0L;
            *(unsigned __int128*)(v9 + 40L) = v11;
            *(__int128*)(v9 + 16L) = 0x0X;
            *(long*)(v9 + 8L) = 96L;
            unsigned long v12 = gvar_60F0D0;
            *(unsigned long*)(v9 + 16L) = gvar_60F0D0;
            if(v12) {
                *(long*)(v12 + 24L) = v9;
            }
            ptr1 = (long*)(v9 + 56L);
            gvar_60F0D0 = v9;
            v0 = *(long*)(v9 + 40L);
            ptr0 = ptr1;
        }
        if(v0 <= 95L) {
            unsigned long v13 = *(unsigned long*)(v9 + 16L);
            if(gvar_60F0D0 != v9) {
                *(unsigned long*)(*(long*)(v9 + 24L) + 16L) = v13;
                long v14 = *(long*)(v9 + 16L);
                if(v14) {
                    *(long*)(v14 + 24L) = *(long*)(v9 + 24L);
                }
            }
            else {
                gvar_60F0D0 = v13;
                if(v13) {
                    *(long*)(v13 + 24L) = 0L;
                }
            }
            *(__int128*)(v9 + 16L) = 0x0X;
        }
        result = ptr0 + 2;
        gvar_6118F8 += 96L;
        *(ptr1 + 1) = 1L;
        *(__int128*)(ptr0 + 2) = 0x0X;
        *(__int128*)(result + 2) = 0x0X;
        *(__int128*)(result + 4) = 0x0X;
        *(__int128*)(result + 6) = 0x0X;
        *(__int128*)(result + 8) = 0x0X;
        *(ptr0 + 2) = *(param0 + 2);
        *(result + 1) = param1 >>> 12;
        long v15 = *(param0 + 3);
        *(unsigned long*)(param0 + 2) = result;
        *(unsigned long*)(v15 + v6) = result;
    }
    *((long*)(((unsigned long)((unsigned int)(param1 >>> 3L) & 0x1ff) >>> 6) * 8L + (long)result) + 2) = (1L << ((unsigned long)((unsigned int)(param1 >>> 3L) & 0x1ff) & 0x3fL)) | *((long*)(((unsigned long)((unsigned int)(param1 >>> 3L) & 0x1ff) >>> 6) * 8L + (long)result) + 2);
    return result;
}

unsigned long initGC_njssp69aa7hvxte9bJ8uuDcg() {
    long v0;
    unsigned __int128 v1;
    unsigned __int128 v2;
    unsigned __int128 v3;
    unsigned __int128 v4;
    unsigned __int128 v5;
    gvar_612350 = 0x0X;
    gvar_612360 = 0x0X;
    gvar_612370 = 0x0X;
    unsigned __int128 v6 = gvar_40AB70;
    gvar_60F018 = 0x400L;
    *(__int128*)&gvar_60F008 = (unsigned long)v6;
    long v7 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            v0 = &gvar_612138;
            __int128 v8 = (unsigned __int128)&gvar_612138 | ((unsigned __int128)(unsigned long)(v8 >>> 0x40X) << 64);
            gvar_612108 = &gvar_612138;
            unsigned __int128 v1 = punpcklqdq(v8, v8);
            gvar_612138 = v1;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, (unsigned long)(v7 + 32L), v7 + 0x2050L);
    long* ptr0 = (long*)((v7 + 56L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(*(long*)(v7 + 8L) + gvar_6118F8);
    *(long*)(v7 + 40L) = 1L;
    unsigned __int128 v9 = gvar_40AB80;
    *(long*)(v7 + 48L) = 0L;
    *(long*)(v7 + 8232L) = 0L;
    for(long i = (unsigned long)(((unsigned int)v7 + 48 - (unsigned int)ptr0 + 0x2000) >>> 3); i != 0L; --i) {
        *ptr0 = 0L;
        ++ptr0;
    }
    gvar_60F020 = (unsigned long)(v7 + 48L);
    *(__int128*)&gvar_60F040 = (unsigned long)v9;
    long v10 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            v0 = &gvar_612138;
            __int128 v11 = (unsigned __int128)&gvar_612138 | ((unsigned __int128)(unsigned long)(v11 >>> 0x40X) << 64);
            gvar_612108 = &gvar_612138;
            unsigned __int128 v2 = punpcklqdq(v11, v11);
            gvar_612138 = v2;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, (unsigned long)(v10 + 32L), v10 + 0x2050L);
    long* ptr1 = (long*)((v10 + 56L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(*(long*)(v10 + 8L) + gvar_6118F8);
    *(long*)(v10 + 40L) = 1L;
    unsigned __int128 v12 = gvar_40AB80;
    *(long*)(v10 + 48L) = 0L;
    *(long*)(v10 + 8232L) = 0L;
    for(long j = (unsigned long)(((unsigned int)v10 + 48 - (unsigned int)ptr1 + 0x2000) >>> 3); j != 0L; --j) {
        *ptr1 = 0L;
        ++ptr1;
    }
    gvar_60F050 = (unsigned long)(v10 + 48L);
    gvar_60F028 = v12;
    long v13 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            v0 = &gvar_612138;
            __int128 v14 = (unsigned __int128)&gvar_612138 | ((unsigned __int128)(unsigned long)(v14 >>> 0x40X) << 64);
            gvar_612108 = &gvar_612138;
            unsigned __int128 v3 = punpcklqdq(v14, v14);
            gvar_612138 = v3;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, (unsigned long)(v13 + 32L), v13 + 0x2050L);
    long* ptr2 = (long*)((v13 + 56L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(*(long*)(v13 + 8L) + gvar_6118F8);
    *(long*)(v13 + 40L) = 1L;
    *(long*)(v13 + 48L) = 0L;
    *(long*)(v13 + 8232L) = 0L;
    for(long k = (unsigned long)(((unsigned int)v13 + 48 - (unsigned int)ptr2 + 0x2000) >>> 3); k != 0L; --k) {
        *ptr2 = 0L;
        ++ptr2;
    }
    gvar_60F038 = (unsigned long)(v13 + 48L);
    long v15 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            v0 = &gvar_612138;
            __int128 v16 = (unsigned __int128)&gvar_612138 | ((unsigned __int128)(unsigned long)(v16 >>> 0x40X) << 64);
            gvar_612108 = &gvar_612138;
            unsigned __int128 v4 = punpcklqdq(v16, v16);
            gvar_612138 = v4;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, (unsigned long)(v15 + 32L), v15 + 0x2050L);
    long* ptr3 = (long*)((v15 + 56L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(*(long*)(v15 + 8L) + gvar_6118F8);
    *(long*)(v15 + 40L) = 1L;
    unsigned __int128 v17 = gvar_40AB60;
    *(long*)(v15 + 48L) = 0L;
    unsigned __int128 v18 = gvar_40AB80;
    *(long*)(v15 + 8232L) = 0L;
    for(long counter = (unsigned long)(((unsigned int)v15 + 48 - (unsigned int)ptr3 + 0x2000) >>> 3); counter != 0L; --counter) {
        *ptr3 = 0L;
        ++ptr3;
    }
    gvar_6123A0 = (unsigned long)(v15 + 48L);
    gvar_612388 = v17;
    gvar_612398 = 0L;
    gvar_6123A8 = v18;
    long v19 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            v0 = &gvar_612138;
            __int128 v20 = (unsigned __int128)&gvar_612138 | ((unsigned __int128)(unsigned long)(v20 >>> 0x40X) << 64);
            gvar_612108 = &gvar_612138;
            unsigned __int128 v5 = punpcklqdq(v20, v20);
            gvar_612138 = v5;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, (unsigned long)(v19 + 32L), v19 + 0x2050L);
    long* ptr4 = (long*)((v19 + 56L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(*(long*)(v19 + 8L) + gvar_6118F8);
    *(long*)(v19 + 40L) = 1L;
    *(long*)(v19 + 48L) = 0L;
    *(long*)(v19 + 8232L) = 0L;
    for(long counter1 = (unsigned long)(((unsigned int)v19 + 48 - (unsigned int)ptr4 + 0x2000) >>> 3); counter1 != 0L; --counter1) {
        *ptr4 = 0L;
        ++ptr4;
    }
    gvar_6123B8 = (unsigned long)(v19 + 48L);
    unsigned long result = gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg;
    gvar_6123C0 = gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg;
    gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg = result + 1L;
    return result;
}

void* init_E1QNZGuo0DGFXyt4Y3MfqA(long* param0, long param1) {
    long v0;
    long v1 = v0;
    *(param0 + 1) = param1;
    *param0 = 0L;
    long v2 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)((size_t)(param1 * 8L) + 16L));
    *(long*)(v2 + 8L) = 1L;
    void* result = →memset((void*)(v2 + 16L), 0, (size_t)(param1 * 8L));
    *(void**)(param0 + 2) = result;
    return result;
}

long init_WHgd5C59bkXWDz3vnAxfzXQ(unsigned __int128* param0) {
    unsigned __int128 v0;
    unsigned __int128* ptr0;
    long v1;
    long v2 = v1;
    long v3 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060L, 0x2030L);
    if(!gvar_612108) {
        if(*(long*)&gvar_612138) {
            gvar_612108 = &gvar_612138;
        }
        else {
            long v4 = &gvar_612138;
            __int128 v5 = (unsigned __int128)&gvar_612138 | ((unsigned __int128)(unsigned long)(v5 >>> 0x40X) << 64);
            gvar_612108 = &gvar_612138;
            unsigned __int128 v0 = punpcklqdq(v5, v5);
            gvar_612138 = v0;
        }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(0x60f060L, (unsigned long*)&gvar_612108, (unsigned long)(v3 + 32L), v3 + 0x2050L);
    long* ptr1 = (long*)((v3 + 56L) & 0xfffffffffffffff8L);
    gvar_6118F8 = (unsigned long)(*(long*)(v3 + 8L) + gvar_6118F8);
    unsigned __int128 v6 = gvar_40AB60;
    *(long*)(v3 + 40L) = 1L;
    *(long*)(v3 + 48L) = 0L;
    *(long*)(v3 + 8232L) = 0L;
    for(long i = (unsigned long)(((unsigned int)v3 + 48 - (unsigned int)ptr1 + 0x2000) >>> 3); i != 0L; --i) {
        *ptr1 = 0L;
        ++ptr1;
    }
    *(long*)((char*)ptr0 + 24L) = v3 + 48L;
    *ptr0 = v6;
    *(long*)(ptr0 + 1) = 0L;
    return 0L;
}

unsigned long* intSetGet_FhOZKj4Gih3qQ5OimZYOrg(long param0, long param1) {
    unsigned long* result = *(unsigned long*)((param1 & 0xFFL) * 8L + param0);
    if(result) {
        if(*(long*)(result + 1) == param1) {
            return result;
        }
        do {
            result = *result;
        }
        while(result && *(long*)(result + 1) == param1);
    }
    return result;
}

void* intSetPut_KWgRM9bUk6rwhAaHSiuK9aYA(long param0, long param1, long param2) {
    unsigned long* ptr0 = (unsigned long*)((param2 & 0xFFL) * 8L + param1);
    void* result = *ptr0;
    if(result) {
        while(*(long*)((long)result + 8L) != param2) {
            result = *(void**)result;
            if(!result) {
                result = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 80L);
                *(long*)result = *ptr0;
                *ptr0 = result;
                *(long*)((long)result + 8L) = param2;
                return result;
            }
        }
    }
    else {
        result = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 80L);
        *(long*)result = *ptr0;
        *ptr0 = result;
        *(long*)((long)result + 8L) = param2;
    }
    return result;
}

long interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(unsigned long* param0, unsigned long param1) {
    long* ptr0;
    char* ptr1;
    long result;
    unsigned long* ptr2 = *(unsigned long*)((long*)(((param1 >>> 21) & 0xFFL) * 8L + (long)param0) + 0x515);
    if(!ptr2) {
    loc_406620:
        result = 0L;
        if(*param0 <= param1 && *(param0 + 1) >= param1) {
            ptr2 = *(param0 + 1557);
            if(*ptr2 != ptr2) {
            loc_40665A:
                do {
                    unsigned long v0 = *(ptr2 + 2);
                    if(v0 <= param1 && *(ptr2 + 3) > param1) {
                        return (long)v0;
                    }
                    ptr2 = *(unsigned long*)((v0 >= param1 ? 0L: 1L) * 8L + (long)ptr2);
                    if(*ptr2 != ptr2) {
                        goto loc_40665A;
                    }
                }
                while(*ptr2 != ptr2);
                return (long)ptr0;
            }
        }
    }
    else {
        while(param1 >>> 21 != *(long*)(ptr2 + 1)) {
            ptr2 = *ptr2;
            if(!ptr2) {
                goto loc_406620;
            }
        }
        if(!(long*)((long)(long*)(1L << (long)(long*)((long)(char*)((unsigned int)(param1 >>> 12L) & 0x1ff) & 0x3fL)) & *((long*)((long)(long*)((long)(long*)((long)(char*)((unsigned int)(param1 >>> 12L) & 0x1ff) >>> 6) * 8L) + (long)ptr2) + 2))) {
            goto loc_406620;
        }
        else {
            ptr1 = (char*)(param1 & 0xfffffffffffff000L);
            if(!(*ptr1 & 0x1)) {
                return result;
            }
            param0 = *(unsigned long*)(ptr1 + 8L);
            if((long)param0 > 4040L) {
                ptr0 = (long*)(ptr1 + 32L);
                return (long)ptr0;
            }
            param1 = (unsigned long)((unsigned long)((unsigned int)param1 & 0xfff) - 56L);
        }
        if(*(unsigned long*)(ptr1 + 48L) > param1) {
            return (long)(long*)((long)((long*)((long)ptr1 + param1) + 7) - (long)(long*)(param1 % (long)(unsigned long)param0));
        }
    }
    return result;
}

long isActiveStack_deIRQymTVHcVwfHBKDbqEA() {
    return 1L;
}

long isObjSlowPath_yEa9cUwzxhGRtg9cspcfCIHg(long param0, long param1, long* param2) {
    long v0 = *(long*)(param0 + 16L);
    if(v0 != param1) {
        while(v0) {
            v0 = *(long*)(v0 + 16L);
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
    return param0 < (unsigned long)&ptr0 ? 0L: *(long*)&gch_IcYaEuuWivYAS86vFMTS3Q < param0 ? 0L: 1L;
}

void* llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(long param0, size_t __n) {
    long v0;
    long* ptr0;
    long* ptr1 = ptr0;
    long* ptr2 = *(unsigned long*)(param0 + 0x2878L);
    if(ptr2) {
        v0 = *ptr2;
        if(v0 >= (long)__n) {
            long v1 = *(ptr2 + 1);
            *ptr2 = v0 - __n;
            long v2 = *(long*)(param0 + 0x2878L);
            *(long*)(v2 + 8L) = *(long*)(v2 + 8L) + __n;
            return →memset((void*)(v1 + (long)ptr2), 0, __n);
        }
    }
    void* ptr3 = →mmap(NULL, 0x1000L, 3, 34, -1, 0L);
    if((unsigned long)(long*)((long)ptr3 - 1L) > 18446744073709551613L) {
        /*NO_RETURN*/ raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
    }
    *(void**)(param0 + 0x2878L) = ptr3;
    *(long*)(param0 + 0x2880L) = *(long*)(param0 + 0x2880L) + 0x1000L;
    *(long*)ptr3 = 4072L;
    *(long*)(*(long*)(param0 + 0x2878L) + 8L) = 24L;
    *(unsigned long*)(*(long*)(param0 + 0x2878L) + 16L) = ptr2;
    ptr2 = *(unsigned long*)(param0 + 0x2878L);
    v0 = *ptr2;
    long v1 = *(ptr2 + 1);
    *ptr2 = v0 - __n;
    long v2 = *(long*)(param0 + 0x2878L);
    *(long*)(v2 + 8L) = *(long*)(v2 + 8L) + __n;
    return →memset((void*)(v1 + (long)ptr2), 0, __n);
}

long lowGauge_3mwQtFaBTgevFrybZdgUNw(unsigned long* param0) {
    long result;
    unsigned long* ptr0 = *param0;
    if(ptr0 == param0) {
        return 0L;
    }
    while(1) {
        unsigned long* ptr1 = *ptr0;
        result = *(long*)(param0 + 2);
        param0 = ptr0;
        if(ptr1 == ptr0) {
            return result;
        }
        ptr0 = ptr1;
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

// Stale decompilation - Refresh this view to re-decompile this code
long markGlobals_zoTIuavlrCHyw3B8MBaLJA_4(long param0) {
    long v0;
    long v1 = v0;
    if(!*(long*)(param0 + 0x33c0L)) {
        long v2 = globalMarkersLen_hgEFy3UCOBoalBh29asu5MA;
        if(v2 > 0L) {
            v0 = 0L;
            do {
                *(long*)(v0 * 8L + (long)&globalMarkers_5ghwSgpo9cT9bT7YStQDJHVQ)(param0);
                ++v0;
            }
            while(v0 != v2);
        }
    }
    long v3 = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
    long v4 = 0L;
    if(v3 > 0L) {
        do {
            *(long*)(v4 * 8L + (long)&threadLocalMarkers_pC47Nqd8F629cuTchphM5YA)(param0);
            ++v4;
        }
        while(v4 != v3);
    }
    long* ptr0 = *(unsigned long*)(param0 + 0x33b8L);
    long result = *(long*)(param0 + 13224L);
    long* ptr1 = (long*)(result * 8L + (long)ptr0);
    if(result > 0L) {
        do {
            long v5 = *ptr0;
            ++ptr0;
            result = markS_NZr5o3Ubzrci4OmK29cHBJA(param0, v5);
        }
        while(ptr0 != ptr1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long markS_NZr5o3Ubzrci4OmK29cHBJA(long param0, long param1) {
    long v0;
    long v1 = v0;
    incl_m4q9b16kJJcoKe9c4ERtlpCg((long*)(param0 + 0x3388L), param1);
    long result = forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(param1, 1L);
    long v2 = *(long*)(param0 + 64L);
    while(v2 > 0L) {
        long v3 = *(long*)(param0 + 80L);
        --v2;
        long v4 = *(long*)(param0 + 0x3390L);
        *(long*)(param0 + 64L) = v2;
        long v5 = *(long*)(param0 + 13216L);
        long v6 = *(long*)(v2 * 8L + v3);
        long v7 = v6 >>> 12;
        long v8 = v7 & v4;
        long v9 = *(long*)(v8 * 8L + v5);
        if(v9) {
        loc_405759:
            do {
                if(*(long*)(v9 + 8L) == v7) {
                    long v10 = 1L << ((unsigned long)((unsigned int)(v6 >>> 3L) & 0x1ff) & 0x3fL);
                    result = ((unsigned long)((unsigned int)(v6 >>> 3L) & 0x1ff) >>> 6) + 2L;
                    long v11 = *(long*)(result * 8L + v9);
                    if(!((1L << ((unsigned long)((unsigned int)(v6 >>> 3L) & 0x1ff) & 0x3fL)) & v11)) {
                        *(long*)(result * 8L + v9) = v10 | v11;
                        return forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(v6, 1L);
                    }
                    else if(!v2) {
                        return result;
                    }
                    --v2;
                    *(long*)(param0 + 64L) = v2;
                    v6 = *(long*)(v2 * 8L + v3);
                    v7 = v6 >>> 12;
                    v8 = v7 & v4;
                    v9 = *(long*)(v8 * 8L + v5);
                    if(v9) {
                        goto loc_405759;
                    }
                    else {
                        break;
                    }
                }
                else {
                    v8 = (v8 * 5L + 1L) & v4;
                    v9 = *(long*)(v8 * 8L + v5);
                }
            }
            while(!v9);
        }
        incl_m4q9b16kJJcoKe9c4ERtlpCg((long*)(param0 + 0x3388L), v6);
        result = forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(v6, 1L);
        v2 = *(long*)(param0 + 64L);
        return result;
    }
    return result;
}

void* markStackAndRegisters_LdwvBL9bC9c0lik7K9bau9bX0Q(unsigned long* param0) {
    void* result;
    void* __dest10;
    void* __dest9;
    void* __dest8;
    void* __dest7;
    void* __dest6;
    void* __dest5;
    void* __dest4;
    void* __dest3;
    void* __dest2;
    void* __dest1;
    unsigned long v0;
    void* __dest;
    long v1;
    char v2;
    char v3;
    unsigned long* ptr0 = param0;
    int v4 = →_setjmp(&v3);
    if(!(unsigned int)v4) {
        v4 = (int)&v3;
        __jmp_buf_tag* ptr1 = &v3;
        unsigned long v5 = *ptr0;
        if((unsigned long)&v3 < (unsigned long)&v2) {
            do {
                unsigned long v6 = (unsigned long)(*(long*)v4 - 16L);
                if(v6 > 0x1000L) {
                    long v7 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr0 + 12, v6);
                    if(v7) {
                        *(long*)v7 = *(long*)v7 + 8L;
                        v1 = *(long*)(ptr0 + 6);
                        long v8 = *(long*)(ptr0 + 5);
                        if(v8 >= v1) {
                            *(long*)(ptr0 + 6) = v1 * 3L / 2L;
                            long v9 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v1 * 3L / 2L * 8L + 16L);
                            __dest = (void*)(v9 + 16L);
                            *(long*)(v9 + 8L) = 1L;
                            long v10 = *(long*)(ptr0 + 5);
                            void* __src = *(void**)(ptr0 + 7);
                            long v11 = v10;
                            →memcpy(__dest, __src, (size_t)(v10 * 8L));
                            long v12 = *(long*)(ptr0 + 7);
                            long v13 = *(long*)(ptr0 + 7);
                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(v12 - 16L));
                            *(void**)(ptr0 + 7) = __dest;
                            v8 = *(long*)(ptr0 + 5);
                        }
                        else {
                            __dest = *(void**)(ptr0 + 7);
                        }
                        *(long*)(v8 * 8L + (long)__dest) = v7;
                        *(long*)(ptr0 + 5) = *(long*)(ptr0 + 5) + 1L;
                    }
                }
                v0 = (unsigned long)(*(long*)((char*)&ptr1->__jmpbuf[0] + 4) - 16L);
                if(v0 > 0x1000L) {
                    long v14 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr0 + 12, v0);
                    if(v14) {
                        *(long*)v14 = *(long*)v14 + 8L;
                        v1 = *(long*)(ptr0 + 6);
                        long v15 = *(long*)(ptr0 + 5);
                        if(v15 < v1) {
                            __dest1 = *(void**)(ptr0 + 7);
                        }
                        else {
                            *(long*)(ptr0 + 6) = v1 * 3L / 2L;
                            long v16 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v1 * 3L / 2L * 8L + 16L);
                            __dest1 = (void*)(v16 + 16L);
                            *(long*)(v16 + 8L) = 1L;
                            →memcpy(__dest1, *(void**)(ptr0 + 7), (size_t)(*(long*)(ptr0 + 5) * 8L));
                            long v17 = *(long*)(ptr0 + 7);
                            long v18 = *(long*)(ptr0 + 7);
                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(v17 - 16L));
                            *(void**)(ptr0 + 7) = __dest1;
                            v15 = *(long*)(ptr0 + 5);
                        }
                        *(long*)(v15 * 8L + (long)__dest1) = v14;
                        *(long*)(ptr0 + 5) = *(long*)(ptr0 + 5) + 1L;
                    }
                }
                ++ptr1;
                v4 = (int)ptr1;
            }
            while((unsigned long)ptr1 >= (unsigned long)&v2);
        }
        if(v5 - 64L > (unsigned long)ptr1) {
            do {
                unsigned long v19 = (unsigned long)(*(long*)v4 - 16L);
                if(v19 > 0x1000L) {
                    long v20 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr0 + 12, v19);
                    if(v20) {
                        *(long*)v20 = *(long*)v20 + 8L;
                        v1 = *(long*)(ptr0 + 6);
                        long v21 = *(long*)(ptr0 + 5);
                        if(v21 >= v1) {
                            *(long*)(ptr0 + 6) = v1 * 3L / 2L;
                            long v22 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v1 * 3L / 2L * 8L + 16L);
                            __dest2 = (void*)(v22 + 16L);
                            *(long*)(v22 + 8L) = 1L;
                            long v23 = *(long*)(ptr0 + 5);
                            void* __src1 = *(void**)(ptr0 + 7);
                            long v24 = v23;
                            →memcpy(__dest2, __src1, (size_t)(v23 * 8L));
                            long v25 = *(long*)(ptr0 + 7);
                            long v26 = *(long*)(ptr0 + 7);
                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(v25 - 16L));
                            *(void**)(ptr0 + 7) = __dest2;
                            v21 = *(long*)(ptr0 + 5);
                        }
                        else {
                            __dest2 = *(void**)(ptr0 + 7);
                        }
                        *(long*)(v21 * 8L + (long)__dest2) = v20;
                        *(long*)(ptr0 + 5) = *(long*)(ptr0 + 5) + 1L;
                    }
                }
                unsigned long v27 = (unsigned long)(ptr1->__jmpbuf[1] - 16L);
                if(v27 > 0x1000L) {
                    long v28 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr0 + 12, v27);
                    if(v28) {
                        *(long*)v28 = *(long*)v28 + 8L;
                        v1 = *(long*)(ptr0 + 6);
                        long v29 = *(long*)(ptr0 + 5);
                        if(v29 < v1) {
                            __dest3 = *(void**)(ptr0 + 7);
                        }
                        else {
                            *(long*)(ptr0 + 6) = v1 * 3L / 2L;
                            long v30 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v1 * 3L / 2L * 8L + 16L);
                            __dest3 = (void*)(v30 + 16L);
                            *(long*)(v30 + 8L) = 1L;
                            long v31 = *(long*)(ptr0 + 5);
                            void* __src2 = *(void**)(ptr0 + 7);
                            long v32 = v31;
                            →memcpy(__dest3, __src2, (size_t)(v31 * 8L));
                            long v33 = *(long*)(ptr0 + 7);
                            long v34 = *(long*)(ptr0 + 7);
                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(v33 - 16L));
                            *(void**)(ptr0 + 7) = __dest3;
                            v29 = *(long*)(ptr0 + 5);
                        }
                        *(long*)(v29 * 8L + (long)__dest3) = v28;
                        *(long*)(ptr0 + 5) = *(long*)(ptr0 + 5) + 1L;
                    }
                }
                unsigned long v35 = (unsigned long)(ptr1->__jmpbuf[2] - 16L);
                if(v35 > 0x1000L) {
                    long v36 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr0 + 12, v35);
                    if(v36) {
                        *(long*)v36 = *(long*)v36 + 8L;
                        v1 = *(long*)(ptr0 + 6);
                        long v37 = *(long*)(ptr0 + 5);
                        if(v37 < v1) {
                            __dest4 = *(void**)(ptr0 + 7);
                        }
                        else {
                            *(long*)(ptr0 + 6) = v1 * 3L / 2L;
                            long v38 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v1 * 3L / 2L * 8L + 16L);
                            __dest4 = (void*)(v38 + 16L);
                            *(long*)(v38 + 8L) = 1L;
                            long v39 = *(long*)(ptr0 + 5);
                            void* __src3 = *(void**)(ptr0 + 7);
                            long v40 = v39;
                            →memcpy(__dest4, __src3, (size_t)(v39 * 8L));
                            long v41 = *(long*)(ptr0 + 7);
                            long v42 = *(long*)(ptr0 + 7);
                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(v41 - 16L));
                            *(void**)(ptr0 + 7) = __dest4;
                            v37 = *(long*)(ptr0 + 5);
                        }
                        *(long*)(v37 * 8L + (long)__dest4) = v36;
                        *(long*)(ptr0 + 5) = *(long*)(ptr0 + 5) + 1L;
                    }
                }
                unsigned long v43 = (unsigned long)(ptr1->__jmpbuf[3] - 16L);
                if(v43 > 0x1000L) {
                    long v44 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr0 + 12, v43);
                    if(v44) {
                        *(long*)v44 = *(long*)v44 + 8L;
                        v1 = *(long*)(ptr0 + 6);
                        long v45 = *(long*)(ptr0 + 5);
                        if(v45 < v1) {
                            __dest5 = *(void**)(ptr0 + 7);
                        }
                        else {
                            *(long*)(ptr0 + 6) = v1 * 3L / 2L;
                            long v46 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v1 * 3L / 2L * 8L + 16L);
                            __dest5 = (void*)(v46 + 16L);
                            *(long*)(v46 + 8L) = 1L;
                            →memcpy(__dest5, *(void**)(ptr0 + 7), (size_t)(*(long*)(ptr0 + 5) * 8L));
                            long v47 = *(long*)(ptr0 + 7);
                            long v48 = *(long*)(ptr0 + 7);
                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(v47 - 16L));
                            *(void**)(ptr0 + 7) = __dest5;
                            v45 = *(long*)(ptr0 + 5);
                        }
                        *(long*)(v45 * 8L + (long)__dest5) = v44;
                        *(long*)(ptr0 + 5) = *(long*)(ptr0 + 5) + 1L;
                    }
                }
                unsigned long v49 = (unsigned long)(ptr1->__jmpbuf[4] - 16L);
                if(v49 > 0x1000L) {
                    long v50 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr0 + 12, v49);
                    if(v50) {
                        *(long*)v50 = *(long*)v50 + 8L;
                        v1 = *(long*)(ptr0 + 6);
                        long v51 = *(long*)(ptr0 + 5);
                        if(v51 < v1) {
                            __dest6 = *(void**)(ptr0 + 7);
                        }
                        else {
                            *(long*)(ptr0 + 6) = v1 * 3L / 2L;
                            long v52 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v1 * 3L / 2L * 8L + 16L);
                            __dest6 = (void*)(v52 + 16L);
                            *(long*)(v52 + 8L) = 1L;
                            long v53 = *(long*)(ptr0 + 5);
                            void* __src4 = *(void**)(ptr0 + 7);
                            long v54 = v53;
                            →memcpy(__dest6, __src4, (size_t)(v53 * 8L));
                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(*(long*)(ptr0 + 7) - 16L));
                            *(void**)(ptr0 + 7) = __dest6;
                            v51 = *(long*)(ptr0 + 5);
                        }
                        *(long*)(v51 * 8L + (long)__dest6) = v50;
                        *(long*)(ptr0 + 5) = *(long*)(ptr0 + 5) + 1L;
                    }
                }
                unsigned long v55 = (unsigned long)(ptr1->__jmpbuf[5] - 16L);
                if(v55 > 0x1000L) {
                    long v56 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr0 + 12, v55);
                    if(v56) {
                        *(long*)v56 = *(long*)v56 + 8L;
                        v1 = *(long*)(ptr0 + 6);
                        long v57 = *(long*)(ptr0 + 5);
                        if(v57 < v1) {
                            __dest7 = *(void**)(ptr0 + 7);
                        }
                        else {
                            *(long*)(ptr0 + 6) = v1 * 3L / 2L;
                            long v58 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v1 * 3L / 2L * 8L + 16L);
                            __dest7 = (void*)(v58 + 16L);
                            *(long*)(v58 + 8L) = 1L;
                            long v59 = *(long*)(ptr0 + 5);
                            void* __src5 = *(void**)(ptr0 + 7);
                            long v60 = v59;
                            →memcpy(__dest7, __src5, (size_t)(v59 * 8L));
                            long v61 = *(long*)(ptr0 + 7);
                            long v62 = *(long*)(ptr0 + 7);
                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(v61 - 16L));
                            *(void**)(ptr0 + 7) = __dest7;
                            v57 = *(long*)(ptr0 + 5);
                        }
                        *(long*)(v57 * 8L + (long)__dest7) = v56;
                        *(long*)(ptr0 + 5) = *(long*)(ptr0 + 5) + 1L;
                    }
                }
                unsigned long v63 = (unsigned long)(ptr1->__jmpbuf[6] - 16L);
                if(v63 > 0x1000L) {
                    long v64 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr0 + 12, v63);
                    if(v64) {
                        *(long*)v64 = *(long*)v64 + 8L;
                        v1 = *(long*)(ptr0 + 6);
                        long v65 = *(long*)(ptr0 + 5);
                        if(v65 < v1) {
                            __dest8 = *(void**)(ptr0 + 7);
                        }
                        else {
                            *(long*)(ptr0 + 6) = v1 * 3L / 2L;
                            long v66 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v1 * 3L / 2L * 8L + 16L);
                            __dest8 = (void*)(v66 + 16L);
                            *(long*)(v66 + 8L) = 1L;
                            →memcpy(__dest8, *(void**)(ptr0 + 7), (size_t)(*(long*)(ptr0 + 5) * 8L));
                            long v67 = *(long*)(ptr0 + 7);
                            long v68 = *(long*)(ptr0 + 7);
                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(v67 - 16L));
                            *(void**)(ptr0 + 7) = __dest8;
                            v65 = *(long*)(ptr0 + 5);
                        }
                        *(long*)(v65 * 8L + (long)__dest8) = v64;
                        *(long*)(ptr0 + 5) = *(long*)(ptr0 + 5) + 1L;
                    }
                }
                v0 = (unsigned long)(ptr1->__jmpbuf[7] - 16L);
                if(v0 > 0x1000L) {
                    long v69 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr0 + 12, v0);
                    if(v69) {
                        *(long*)v69 = *(long*)v69 + 8L;
                        v1 = *(long*)(ptr0 + 6);
                        long v70 = *(long*)(ptr0 + 5);
                        if(v70 < v1) {
                            __dest9 = *(void**)(ptr0 + 7);
                        }
                        else {
                            *(long*)(ptr0 + 6) = v1 * 3L / 2L;
                            long v71 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v1 * 3L / 2L * 8L + 16L);
                            __dest9 = (void*)(v71 + 16L);
                            *(long*)(v71 + 8L) = 1L;
                            long v72 = *(long*)(ptr0 + 5);
                            void* __src6 = *(void**)(ptr0 + 7);
                            long v73 = v72;
                            →memcpy(__dest9, __src6, (size_t)(v72 * 8L));
                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(*(long*)(ptr0 + 7) - 16L));
                            *(void**)(ptr0 + 7) = __dest9;
                            v70 = *(long*)(ptr0 + 5);
                        }
                        *(long*)(v70 * 8L + (long)__dest9) = v69;
                        *(long*)(ptr0 + 5) = *(long*)(ptr0 + 5) + 1L;
                    }
                }
                ptr1 += 8;
                v4 = (int)ptr1;
            }
            while(v5 - 64L <= (unsigned long)ptr1);
        }
        if((unsigned long)ptr1 <= v5) {
            do {
                v0 = (unsigned long)(*(long*)v4 - 16L);
                if(v0 > 0x1000L) {
                    long v74 = interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(ptr0 + 12, v0);
                    if(v74) {
                        *(long*)v74 = *(long*)v74 + 8L;
                        v1 = *(long*)(ptr0 + 6);
                        long v75 = *(long*)(ptr0 + 5);
                        if(v75 >= v1) {
                            *(long*)(ptr0 + 6) = v1 * 3L / 2L;
                            long v76 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v1 * 3L / 2L * 8L + 16L);
                            *(long*)(v76 + 8L) = 1L;
                            __dest10 = (void*)(v76 + 16L);
                            long v77 = *(long*)(ptr0 + 5);
                            void* __src7 = *(void**)(ptr0 + 7);
                            long v78 = v77;
                            result = →memcpy(__dest10, __src7, (size_t)(v77 * 8L));
                            long v79 = *(long*)(ptr0 + 7);
                            long v80 = *(long*)(ptr0 + 7);
                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(v79 - 16L));
                            *(void**)(ptr0 + 7) = __dest10;
                            v75 = *(long*)(ptr0 + 5);
                        }
                        else {
                            __dest10 = *(void**)(ptr0 + 7);
                        }
                        *(long*)(v75 * 8L + (long)__dest10) = v74;
                        *(long*)(ptr0 + 5) = *(long*)(ptr0 + 5) + 1L;
                    }
                }
                ++ptr1;
                v4 = (int)ptr1;
            }
            while((unsigned long)ptr1 > v5);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* mnewString(long param0) {
    __int128 v0;
    __int128 v1;
    void* __s = (void*)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, (long)(size_t)((param0 < 7L ? 7L: param0) + 17L), &gch_IcYaEuuWivYAS86vFMTS3Q);
    void* result = →memset(__s, 0, (size_t)((param0 < 7L ? 7L: param0) + 17L));
    __int128 v0 = movhps((unsigned __int128)param0 | ((unsigned __int128)(unsigned long)(v1 >>> 0x40X) << 64), param0 < 7L ? 7L: param0);
    *(__int128*)result = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* newObj(long param0, size_t __n) {
    void* __s = (void*)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(param0, (long)__n, &gch_IcYaEuuWivYAS86vFMTS3Q);
    return →memset(__s, 0, __n);
}

// Stale decompilation - Refresh this view to re-decompile this code
long newObjNoInit(long param0, long param1) {
    return rawNewObj_BpNS5yt3b9cMOponsUKh8aw(param0, param1, &gch_IcYaEuuWivYAS86vFMTS3Q);
}

// Stale decompilation - Refresh this view to re-decompile this code
void* newObjRC1(long param0, size_t __n) {
    long v0;
    long v1;
    long v2 = v0;
    long v3 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
    if(((v3 <= 63999L ? 500L: v3 >> 7) <= gvar_60F010 || gvar_6118F8 >= gvar_60F008) && !gvar_60F058) {
        collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(&gch_IcYaEuuWivYAS86vFMTS3Q);
    }
    long v4 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, (long)(__n + 16L));
    *(long*)(v4 + 8L) = v1;
    *(long*)v4 = 8L;
    return →memset((void*)(v4 + 16L), 0, __n);
}

long nimGC_setStackBottom(long param0) {
    long result = *(long*)&gch_IcYaEuuWivYAS86vFMTS3Q;
    if(!result) {
    loc_4044F8:
        *(long*)&gch_IcYaEuuWivYAS86vFMTS3Q = param0;
    }
    else if(result != param0) {
        param0 = result > param0 ? result: param0;
        goto loc_4044F8;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void nimGCvisit(long param0, long param1) {
    long v0;
    long v1;
    if(param0) {
        long v2 = v1;
        if((unsigned char)param1 != 1) {
            if(!(unsigned char)param1) {
                markS_NZr5o3Ubzrci4OmK29cHBJA(&gch_IcYaEuuWivYAS86vFMTS3Q, (long)(long*)(param0 - 16L));
            }
            else if((unsigned char)param1 == 2) {
                v0 = *(long*)(param0 - 16L) - 8L;
                *(long*)(param0 - 16L) = *(long*)(param0 - 16L) - 8L;
                if((unsigned long)v0 <= 7L) {
                    addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, (long*)(param0 - 16L));
                    return;
                }
            }
            else if((unsigned char)param1 == 3) {
                long v3 = gvar_60F048;
                v0 = gvar_60F040;
                void* __dest = gvar_60F050;
                if(v0 >= v3) {
                    gvar_60F048 = v3 * 3L / 2L;
                    long v4 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v3 * 3L / 2L * 8L + 16L);
                    *(long*)(v4 + 8L) = 1L;
                    __dest = (void*)(v4 + 16L);
                    →memcpy(__dest, gvar_60F050, (size_t)(gvar_60F040 * 8L));
                    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(gvar_60F050 - 16L));
                    gvar_60F050 = __dest;
                    v0 = gvar_60F040;
                }
                *(long**)(v0 * 8L + (long)__dest) = (long*)(param0 - 16L);
                ++gvar_60F040;
            }
            return;
        }
        long v5 = gvar_60F048;
        if(gvar_60F040 >= v5) {
            gvar_60F048 = v5 * 3L / 2L;
            long v6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v5 * 3L / 2L * 8L + 16L);
            *(long*)(v6 + 8L) = 1L;
            →memcpy((void*)(v6 + 16L), gvar_60F050, (size_t)(gvar_60F040 * 8L));
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(gvar_60F050 - 16L));
            gvar_60F050 = (void*)(v6 + 16L);
        }
        *(long**)(gvar_60F040 * 8L + gvar_60F050) = (long*)(param0 - 16L);
        ++gvar_60F040;
    }
}

unsigned long nimRegisterGlobalMarker(long param0) {
    long v0 = globalMarkersLen_hgEFy3UCOBoalBh29asu5MA;
    if(v0 > 3499L) {
        echoBinSafe.constprop.24((unsigned long*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_23);
        /*NO_RETURN*/ →exit(1);
    }
    *(long*)(v0 * 8L + (long)&globalMarkers_5ghwSgpo9cT9bT7YStQDJHVQ) = param0;
    globalMarkersLen_hgEFy3UCOBoalBh29asu5MA = (unsigned long)(v0 + 1L);
    return (unsigned long)(v0 + 1L);
}

long nimRegisterThreadLocalMarker(long param0) {
    long v0 = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
    if(v0 > 3499L) {
        /*NO_RETURN*/ nimRegisterThreadLocalMarker.part.14();
    }
    *(long*)(v0 * 8L + (long)&threadLocalMarkers_pC47Nqd8F629cuTchphM5YA) = param0;
    threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw = v0 + 1L;
    return v0 + 1L;
}

long nimRegisterThreadLocalMarker.part.14() {
    echoBinSafe.constprop.24((unsigned long*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_18);
    /*NO_RETURN*/ →exit(1);
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
void raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(long param0, long* param1) {
    long v0;
    long v1;
    long v2 = v0;
    void* ptr0 = newObj(&NTI_HMIVdYjdZYWskTmTQVo5BQ_, 56L);
    *(long*)ptr0 = &NTI_iLZrPn9anoh9ad1MmO0RczFw_;
    long v3 = *(long*)((long)ptr0 + 24L);
    long v4 = copyStringRC1(v1);
    *(long*)((long)ptr0 + 24L) = v4;
    if(v3) {
        param1 = (long*)(v3 - 16L);
        unsigned long v5 = (unsigned long)(*(long*)(v3 - 16L) - 8L);
        *(unsigned long*)(v3 - 16L) = (unsigned long)(*(long*)(v3 - 16L) - 8L);
        if(v5 <= 7L) {
            addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, param1);
        }
    }
loc_4086F0:
    if(!*(long*)((long)ptr0 + 16L)) {
        *(long*)((long)ptr0 + 16L) = "IOError";
    }
    raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw((long)ptr0);
    addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, param1);
    goto loc_4086F0;
}

void raiseEOF_9b10LwJKWsyrZIEKTB9b6PGQ(long param0, long* param1) {
    void* ptr0 = newObj(&NTI_LEclZrWX2FQAodlapxGITw_, 56L);
    *(long*)ptr0 = &NTI_KGSY1JdrNB7Xi8KDhXFhSg_;
    long v0 = *(long*)((long)ptr0 + 24L);
    void* ptr1 = copyStringRC1((long*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_25);
    *(void**)((long)ptr0 + 24L) = ptr1;
    if(v0) {
        param1 = (long*)(v0 - 16L);
        unsigned long v1 = (unsigned long)(*(long*)(v0 - 16L) - 8L);
        *(unsigned long*)(v0 - 16L) = (unsigned long)(*(long*)(v0 - 16L) - 8L);
        if(v1 <= 7L) {
            addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, param1);
        }
    }
loc_408E21:
    if(!*(long*)((long)ptr0 + 16L)) {
        *(long*)((long)ptr0 + 16L) = "EOFError";
    }
    raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw((long)ptr0);
    addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, param1);
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
long raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw(long param0) {
    long result;
    long v0;
    unsigned long v1 = localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg;
    long v2 = v0;
    if(v1) {
        result = v1(param0);
        if(!(unsigned char)result) {
            return result;
        }
    }
    unsigned long v3 = globalRaiseHook_JbO1ti4ULxrw54m4zNPbpA;
    if(v3) {
        result = v3(param0);
        if((unsigned char)result) {
            return raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw.part.16(param0);
        }
    }
    else {
        result = raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw.part.16(param0);
    }
    return result;
}

long raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw.part.16(long* param0, long* param1, long* param2) {
    long result;
    long v0;
    long v1;
    char v2;
    size_t __n;
    long* ptr0;
    long* ptr1;
    long* ptr2;
    long* ptr3;
    long* ptr1;
    long* ptr2;
    long v3;
    long* ptr1;
    long* ptr2;
    long* ptr1;
    long* ptr2;
    char v4;
    char v5;
    long v6;
    __int128 v7;
    __int128 v8;
    char* __s;
    char* ptr4 = __s;
    long v9 = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
    if(!v9) {
        long v10 = *param0;
        if(v10 != &NTI_vyjC2ukVFYc78nQPrSCc9bA_ && *(long*)(v10 + 16L) != &NTI_vyjC2ukVFYc78nQPrSCc9bA_) {
            if(*(long*)&Nim_OfCheck_CACHE22 != v10) {
                if(*(long*)((char*)&Nim_OfCheck_CACHE22 + 8) == v10) {
                    showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(*(char**)(param0 + 2));
                    /*NO_RETURN*/ →exit(1);
                    ptr2 = (long*)0x1E;
                    ptr0 = (long*)0x1C;
                    ptr1 = (long*)0x1E;
                    goto loc_40851D;
                }
                else {
                    v9 = isObjSlowPath_yEa9cUwzxhGRtg9cspcfCIHg(v10, &NTI_vyjC2ukVFYc78nQPrSCc9bA_, (long*)&Nim_OfCheck_CACHE22);
                    if((unsigned char)v9) {
                        showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(*(char**)(param0 + 2));
                        /*NO_RETURN*/ →exit(1);
                        ptr2 = (long*)0x1E;
                        ptr0 = (long*)0x1C;
                        ptr1 = (long*)0x1E;
                        goto loc_40851D;
                    }
                }
            }
            long v11 = 250L;
            long* ptr5 = *(unsigned long*)(param0 + 3);
            unsigned __int128 v12 = gvar_40ABA0;
            __s = *(char**)(param0 + 2);
            while(v11 != 0L) {
                v3 = 0L;
                --v11;
            }
            int v13 = 540700271;
            *(unsigned __int128*)&v3 = v12;
            long v14 = 7598822052043711776L;
            v3 & 0xFFL = 0;
            if(!ptr5) {
                ptr2 = (long*)0x1E;
                ptr0 = (long*)0x1C;
                ptr1 = (long*)0x1E;
                goto loc_40851D;
            }
            else {
                ptr3 = *ptr5;
                if((long)ptr3 > 1971L) {
                    ptr2 = (long*)0x1E;
                    ptr0 = (long*)0x1C;
                    ptr1 = (long*)0x1E;
                    goto loc_40851D;
                }
                else if(!ptr3) {
                    ptr3 = (long*)0x1C;
                    ptr0 = (long*)0x1C;
                    goto loc_4085A2;
                }
            }
            if((unsigned long)ptr3 >= 8L) {
                *(long*)&v2 = *(ptr5 + 2);
                *(long*)((char*)((long)ptr3 + (long)&v14) + 4L) = *((long*)((long)ptr3 + (long)ptr5) + 1);
                long* ptr6 = &v4;
                long* ptr7 = (long*)((long)(ptr5 + 2) - (long)&v5);
                for(long* i = (long*)((long)(long*)((long)ptr3 + (long)&v5) >>> 3); i != 0L; i = (long*)((char*)i - 1L)) {
                    *ptr6 = *ptr7;
                    ++ptr7;
                    ++ptr6;
                }
            loc_4083CC:
                ptr3 = *ptr5;
            loc_4083CF:
                ptr3 = (long*)((char*)ptr3 + 28L);
                ptr2 = ptr3;
                if((long)ptr3 <= 1997L) {
                    ptr0 = ptr3;
                loc_4085A2:
                    ptr1 = (long*)((char*)ptr3 + 2L);
                    ptr2 = (long*)((char*)ptr3 + 2L);
                loc_40851D:
                    *(short*)((long)ptr0 + (long)&v3) = 23328;
                    if(__s) {
                        __n = →strlen(__s);
                        if((long)__n <= 1999L) {
                        loc_40840B:
                            →memcpy(&v3, __s, __n);
                            size_t v15 = →strlen(__s);
                            ptr1 = (long*)(v15 + (long)ptr2);
                        loc_408425:
                            if((long)ptr1 <= 1997L) {
                                v3 & 0xFFFFL = 2653;
                            }
                            goto loc_40843A;
                        }
                        else {
                            goto loc_408425;
                        }
                    }
                }
                else if(__s) {
                    __n = →strlen(__s);
                    if((long)__n > 1999L) {
                        goto loc_40843A;
                    }
                    else {
                        goto loc_40840B;
                    }
                }
                else if((long)ptr3 > 1999L) {
                    goto loc_40843A;
                }
                __n = 0L;
                goto loc_40840B;
            }
            else if(!((unsigned char)ptr3 & 0x4)) {
                if(ptr3) {
                    v2 = *(char*)(ptr5 + 2);
                    if(!((unsigned char)ptr3 & 0x2)) {
                        goto loc_4083CC;
                    }
                    else {
                        *(short*)((char*)((long)ptr3 + (long)&v13) + 2L) = *(short*)((char*)((long)ptr3 + (long)ptr5) + 14L);
                        ptr3 = *ptr5;
                    }
                }
                goto loc_4083CF;
            }
            else {
                *(int*)&v2 = *(int*)(ptr5 + 2);
                *(int*)((long)ptr3 + (long)&v13) = *(int*)((char*)((long)ptr3 + (long)ptr5) + 12L);
            }
            goto loc_4083CC;
        }
        else {
            showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(*(char**)(param0 + 2));
            /*NO_RETURN*/ →exit(1);
        }
    loc_40843A:
        if(!onUnhandledException_bFrawQlTKZhLweDD36j9b8g) {
            showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ((char*)&v3);
            /*NO_RETURN*/ →exit(1);
        }
        void* ptr8 = &v3;
        do {
            v6 = (unsigned long)*(int*)ptr8;
            ptr8 = (void*)((long)ptr8 + 4L);
        }
        while(!(((unsigned int)v6 - 0x1010101) & ~(unsigned int)v6 & 0x80808080));
        long v16 = 24L;
        long* ptr9 = (long*)0x7;
        char v17 = ((unsigned int)v6 - 0x1010101) & ~(unsigned int)v6 & 0x8080 ? 0: 1;
        long* ptr10 = (long*)((long)(long*)((long)(v17 ? (long*)((long)ptr8 + 2L): ptr8) - ((unsigned long)__carry__(v17 ? (unsigned char)((((unsigned int)v6 - 0x1010101) & ~(unsigned int)v6 & 0x80808080) >>> 16): (unsigned char)(((unsigned int)v6 - 0x1010101) & ~(unsigned int)v6 & 0x80808080), v17 ? (unsigned char)((((unsigned int)v6 - 0x1010101) & ~(unsigned int)v6 & 0x80808080) >>> 16): (unsigned char)(((unsigned int)v6 - 0x1010101) & ~(unsigned int)v6 & 0x80808080)) + 3L)) - (long)&v3);
        if((unsigned long)ptr10 > 6L) {
            v16 = (long)((char*)ptr10 + 17L);
            ptr9 = ptr10;
        }
        long v18 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, v16, &gch_IcYaEuuWivYAS86vFMTS3Q);
        long* ptr11 = ptr10;
        long j = v18 + 16L;
        __int128 v8 = movhps((unsigned __int128)ptr11 | ((unsigned __int128)(unsigned long)(v7 >>> 0x40X) << 64), ptr9);
        *(__int128*)v18 = v8;
        if((unsigned int)((unsigned int)ptr10 + 1) >= 8) {
            long* ptr12 = (long*)((v18 + 24L) & 0xfffffffffffffff8L);
            *(long*)(v18 + 16L) = v3;
            param2 = (long*)((long)(long*)((char*)ptr10 + 1L) & 0xffffffffL);
            *((long*)(j + (long)param2) - 1) = *(long*)((long)param2 + (long)&ptr11);
            long* ptr13 = (long*)(j - (long)ptr12);
            param1 = (long*)((long)&v3 - (long)ptr13);
            for(j = (unsigned long)(((unsigned int)ptr13 + (unsigned int)ptr10 + 1) >>> 3); j != 0L; --j) {
                *ptr12 = *param1;
                ++param1;
                ++ptr12;
            }
        }
        else if((((unsigned char)ptr10 + 1) & 0x4)) {
            *(int*)(v18 + 16L) = (unsigned int)v3;
            param2 = (long*)((long)(long*)((char*)ptr10 + 1L) & 0xffffffffL);
            param1 = (long*)*(int*)((char*)((long)param2 + (long)&ptr11) + 4L);
            *(int*)((char*)(j + (long)param2) - 4L) = *(int*)((char*)((long)param2 + (long)&ptr11) + 4L);
        }
        else if(((unsigned int)ptr10 + 1)) {
            param2 = (long*)(v3 & 0xFFL);
            *(char*)(v18 + 16L) = (unsigned char)param2;
            if(((unsigned char)ptr10 + 1) & 0x2) {
                param2 = (long*)((long)(long*)((char*)ptr10 + 1L) & 0xffffffffL);
                param1 = (long*)*(short*)((char*)((long)param2 + (long)&ptr11) + 6L);
                *(short*)((char*)(j + (long)param2) - 2L) = *(short*)((char*)((long)param2 + (long)&ptr11) + 6L);
            }
        }
        return onUnhandledException_bFrawQlTKZhLweDD36j9b8g(v18, (long)param1, (long)param2, j);
    loc_408244:
        if(!(unsigned char)result) {
            return result;
        }
    loc_408258:
        unsigned long v19 = currException_9bVPeDJlYTi9bQApZpfH8wjg;
        if(v19) {
            *(long*)(v19 - 16L) = *(long*)(v19 - 16L) + 8L;
        }
        long v20 = *(param0 + 6);
        if(v20) {
            unsigned long v21 = (unsigned long)(*(long*)(v20 - 16L) - 8L);
            *(unsigned long*)(v20 - 16L) = (unsigned long)(*(long*)(v20 - 16L) - 8L);
            if(v21 <= 7L) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, (long*)(v20 - 16L));
            }
        }
        *(param0 - 2) = *(param0 - 2) + 8L;
        unsigned long v22 = currException_9bVPeDJlYTi9bQApZpfH8wjg;
        *(unsigned long*)(param0 + 6) = v19;
        if(v22) {
            unsigned long v23 = (unsigned long)(*(long*)(v22 - 16L) - 8L);
            *(unsigned long*)(v22 - 16L) = (unsigned long)(*(long*)(v22 - 16L) - 8L);
            if(v23 <= 7L) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, (long*)(v22 - 16L));
            }
        }
        unsigned long v24 = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
        currException_9bVPeDJlYTi9bQApZpfH8wjg = param0;
        /*NO_RETURN*/ →longjmp((__jmp_buf_tag*)(v24 + 16L), 1);
    loc_4082E8:
        result = v0((long)param0, v1);
    }
    else if(!*(char*)(v9 + 216L)) {
        goto loc_408258;
    }
    else {
        v1 = *(long*)(v9 + 232L);
        v0 = *(long*)(v9 + 224L);
        if(!v1) {
            goto loc_4082E8;
        }
        else {
            result = v0((long)param0, v1);
        }
    }
    goto loc_408244;
}

long raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g() {
    unsigned long v0 = outOfMemHook_kZNaA7u1MfSW5ZeoGvw8xg;
    if(v0) {
        v0();
    }
    echoBinSafe.constprop.24((unsigned long*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_13);
    /*NO_RETURN*/ →exit(1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(long param0, long param1) {
    long v0;
    long result;
    long v1;
    __int128 v2;
    long v3;
    long v4;
    long v5;
    long v6;
    long v7 = v4;
    long v8 = v5;
    long v9 = v3;
    long v10 = v6;
    if(((param1 + 7L) & 0xfffffffffffffff8L) > 4040L) {
        if(param1 + 32L <= 0x3f000000L) {
            v1 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(param0, param1 + 32L);
            result = v1 + 32L;
            if(!*(long*)(param0 + 12456L)) {
                goto loc_4024C0;
            }
        }
        else {
            void* ptr0 = →mmap(NULL, (size_t)(param1 + 32L), 3, 34, -1, 0L);
            v1 = (long)ptr0;
            if((unsigned long)(long*)((long)ptr0 - 1L) > 18446744073709551613L) {
                goto loc_4025AF;
            }
            else {
                __int128 v11 = 0x0X;
                *(long*)(param0 + 0x2880L) = *(long*)(param0 + 0x2880L) + param1 + 32L;
                *(__int128*)(v1 + 16L) = 0x0X;
                *(long*)(v1 + 8L) = param1 + 32L;
                long v12 = ((v1 >>> 21) & 0xFFL) * 8L + param0;
                *(long*)v1 = 1L;
                void* ptr1 = *(void**)(v12 + 0x28a8L);
                if(!ptr1) {
                    goto loc_402590;
                }
                else {
                    while(v1 >>> 21 != *(long*)((long)ptr1 + 8L)) {
                        ptr1 = *(void**)ptr1;
                        if(!ptr1) {
                        loc_402590:
                            ptr1 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 80L);
                            *(long*)ptr1 = *(long*)(v12 + 0x28a8L);
                            *(void**)(v12 + 0x28a8L) = ptr1;
                            *(long*)((long)ptr1 + 8L) = v1 >>> 21;
                            break;
                        }
                    }
                }
                result = v1 + 32L;
                *((long*)(((unsigned long)((unsigned int)(v1 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr1) + 2) = (1L << ((unsigned long)((unsigned int)(v1 >>> 12L) & 0x1ff) & 0x3fL)) | *((long*)(((unsigned long)((unsigned int)(v1 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr1) + 2);
                if(!*(long*)(param0 + 12456L)) {
                loc_4024C0:
                    if(*(long*)(param0 + 12504L)) {
                        *(long*)(param0 + 12456L) = param0 + 12504L;
                    }
                    else {
                        long v13 = param0 + 12504L;
                        v11 = (unsigned __int128)v13 | ((unsigned __int128)(unsigned long)(v11 >>> 0x40X) << 64);
                        *(long*)(param0 + 12456L) = param0 + 12504L;
                        __int128 v2 = punpcklqdq(v11, v11);
                        *(__int128*)(param0 + 12504L) = v2;
                    }
                }
            }
        }
        add_Xuf47u3imOz8BOk5HURLWQ(param0, param0 + 12456L, result, param1 + result + 32L);
        *(long*)(param0 + 0x2898L) = *(long*)(v1 + 8L) + *(long*)(param0 + 0x2898L);
        return result;
    loc_4025AF:
        /*NO_RETURN*/ raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
    }
    long v14 = ((param1 + 7L) & 0xfffffffffffffff8L) + param0;
    long v15 = *(long*)(v14 + 16L);
    if(v15) {
        result = *(long*)(v15 + 32L);
        if(result) {
            *(long*)(v15 + 32L) = *(long*)result;
        }
        else {
            long v16 = *(long*)(v15 + 48L);
            result = v16 + v15 + 56L;
            *(long*)(v15 + 48L) = ((param1 + 7L) & 0xfffffffffffffff8L) + v16;
        }
        long v17 = *(long*)(v15 + 40L) - ((param1 + 7L) & 0xfffffffffffffff8L);
        *(long*)(v15 + 40L) = *(long*)(v15 + 40L) - ((param1 + 7L) & 0xfffffffffffffff8L);
        if(((param1 + 7L) & 0xfffffffffffffff8L) > v17) {
            v0 = *(long*)(v15 + 16L);
            if(*(long*)(v14 + 16L) == v15) {
                goto loc_402550;
            }
            else {
                *(long*)(*(long*)(v15 + 24L) + 16L) = v0;
                long v18 = *(long*)(v15 + 16L);
                if(v18) {
                    *(long*)(v18 + 24L) = *(long*)(v15 + 24L);
                }
                *(__int128*)(v15 + 16L) = 0x0X;
                *(long*)(param0 + 0x2898L) = ((param1 + 7L) & 0xfffffffffffffff8L) + *(long*)(param0 + 0x2898L);
                return result;
            }
        }
    }
    else {
        long v19 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(param0, 0x1000L);
        *(long*)(v19 + 32L) = 0L;
        v15 = v19;
        *(long*)(v19 + 8L) = (param1 + 7L) & 0xfffffffffffffff8L;
        *(long*)(v19 + 48L) = (param1 + 7L) & 0xfffffffffffffff8L;
        *(__int128*)(v15 + 16L) = 0x0X;
        *(long*)(v15 + 40L) = 4040L - ((param1 + 7L) & 0xfffffffffffffff8L);
        long v20 = *(long*)(v14 + 16L);
        *(long*)(v15 + 16L) = *(long*)(v14 + 16L);
        if(v20) {
            *(long*)(v20 + 24L) = v15;
        }
        *(long*)(v14 + 16L) = v15;
        result = v15 + 56L;
        if(((param1 + 7L) & 0xfffffffffffffff8L) > *(long*)(v15 + 40L)) {
            v0 = *(long*)(v15 + 16L);
        loc_402550:
            *(long*)(v14 + 16L) = v0;
            if(v0) {
                *(long*)(v0 + 24L) = 0L;
            }
            *(__int128*)(v15 + 16L) = 0x0X;
        }
    }
    *(long*)(param0 + 0x2898L) = ((param1 + 7L) & 0xfffffffffffffff8L) + *(long*)(param0 + 0x2898L);
    return result;
}

long rawDealloc_DA62HrGC5sdfCED505KyyQ(long param0, long* param1) {
    long result;
    long* ptr0;
    __int128 v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    long result1 = *(long*)((long)((long)param1 & 0xfffffffffffff000L) + 8L);
    long v6 = *(long*)(param0 + 0x2898L) - result1;
    if(result1 > 4040L) {
        long v7 = v3;
        long v8 = v1;
        long v9 = v5;
        long v10 = v4;
        char v11 = *(long*)(param0 + 12504L) ? 0: 1;
        *(long*)(param0 + 0x2898L) = v6;
        if(v11) {
            long v12 = param0 + 12504L;
            __int128 v13 = (unsigned __int128)v12 | ((unsigned __int128)(unsigned long)(v13 >>> 0x40X) << 64);
            __int128 v0 = punpcklqdq(v13, v13);
            *(__int128*)(param0 + 12504L) = v0;
        }
        unsigned long* ptr1 = *(unsigned long**)(param0 + 12456L);
        *(long*)(param0 + 0x30b0L) = param0 + 12504L;
        if(ptr1[0] != ptr1) {
            *(unsigned long**)(param0 + 12472L) = ptr1;
            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr1[2]) {
                *(unsigned long**)(param0 + 0x30b0L) = ptr1;
                unsigned long* ptr2 = (unsigned long*)ptr1[1];
                if(ptr2[0] != ptr2) {
                    *(unsigned long**)(param0 + 12472L) = ptr2;
                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr2[2]) {
                        *(unsigned long**)(param0 + 0x30b0L) = ptr2;
                        unsigned long v14 = ptr1[1];
                        unsigned long* ptr3 = *(unsigned long**)(v14 + 8L);
                        if(ptr3[0] != ptr3) {
                            *(unsigned long**)(param0 + 12472L) = ptr3;
                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr3[2]) {
                                *(unsigned long**)(param0 + 0x30b0L) = ptr3;
                                long v15 = *(long*)(v14 + 8L);
                                unsigned long* ptr4 = *(unsigned long**)(v15 + 8L);
                                if(ptr4[0] != ptr4) {
                                    *(unsigned long**)(param0 + 12472L) = ptr4;
                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr4[2]) {
                                        *(unsigned long**)(param0 + 0x30b0L) = ptr4;
                                        long v16 = *(long*)(v15 + 8L);
                                        unsigned long* ptr5 = *(unsigned long**)(v16 + 8L);
                                        if(ptr5[0] != ptr5) {
                                            *(unsigned long**)(param0 + 12472L) = ptr5;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr5[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr5;
                                                long v17 = *(long*)(v16 + 8L);
                                                unsigned long* ptr6 = *(unsigned long**)(v17 + 8L);
                                                if(ptr6[0] != ptr6) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr6;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr6[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr6;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v17 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr6, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v17 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr7 = (unsigned long*)ptr5[0];
                                                if(ptr7[0] != ptr7) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr7;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr7[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr7;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr5[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr7, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr5, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v16 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr8 = (unsigned long*)ptr4[0];
                                        if(ptr8[0] != ptr8) {
                                            *(unsigned long**)(param0 + 12472L) = ptr8;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr8[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr8;
                                                unsigned long v18 = ptr4[0];
                                                unsigned long* ptr9 = *(unsigned long**)(v18 + 8L);
                                                if(ptr9[0] != ptr9) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr9;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr9[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr9;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v18 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr9, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v18 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr10 = (unsigned long*)ptr8[0];
                                                if(ptr10[0] != ptr10) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr10;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr10[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr10;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr8[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr10, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr8, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr4, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v15 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                }
                            }
                            else {
                                unsigned long* ptr11 = (unsigned long*)ptr3[0];
                                if(ptr11[0] != ptr11) {
                                    *(unsigned long**)(param0 + 12472L) = ptr11;
                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr11[2]) {
                                        *(unsigned long**)(param0 + 0x30b0L) = ptr11;
                                        unsigned long v19 = ptr3[0];
                                        unsigned long* ptr12 = *(unsigned long**)(v19 + 8L);
                                        if(ptr12[0] != ptr12) {
                                            *(unsigned long**)(param0 + 12472L) = ptr12;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr12[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr12;
                                                long v20 = *(long*)(v19 + 8L);
                                                unsigned long* ptr13 = *(unsigned long**)(v20 + 8L);
                                                if(ptr13[0] != ptr13) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr13;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr13[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr13;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v20 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr13, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v20 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr14 = (unsigned long*)ptr12[0];
                                                if(ptr14[0] != ptr14) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr14;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr14[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr14;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr12[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr14, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr12, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v19 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr15 = (unsigned long*)ptr11[0];
                                        if(ptr15[0] != ptr15) {
                                            *(unsigned long**)(param0 + 12472L) = ptr15;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr15[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr15;
                                                unsigned long v21 = ptr11[0];
                                                unsigned long* ptr16 = *(unsigned long**)(v21 + 8L);
                                                if(ptr16[0] != ptr16) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr16;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr16[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr16;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v21 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr16, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v21 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr17 = (unsigned long*)ptr15[0];
                                                if(ptr17[0] != ptr17) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr17;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr17[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr17;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr15[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr17, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr15, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr11, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr3, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                }
                            }
                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v14 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                        }
                    }
                    else {
                        unsigned long* ptr18 = (unsigned long*)ptr2[0];
                        if(ptr18[0] != ptr18) {
                            *(unsigned long**)(param0 + 12472L) = ptr18;
                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr18[2]) {
                                *(unsigned long**)(param0 + 0x30b0L) = ptr18;
                                unsigned long v22 = ptr2[0];
                                unsigned long* ptr19 = *(unsigned long**)(v22 + 8L);
                                if(ptr19[0] != ptr19) {
                                    *(unsigned long**)(param0 + 12472L) = ptr19;
                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr19[2]) {
                                        *(unsigned long**)(param0 + 0x30b0L) = ptr19;
                                        long v23 = *(long*)(v22 + 8L);
                                        unsigned long* ptr20 = *(unsigned long**)(v23 + 8L);
                                        if(ptr20[0] != ptr20) {
                                            *(unsigned long**)(param0 + 12472L) = ptr20;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr20[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr20;
                                                long v24 = *(long*)(v23 + 8L);
                                                unsigned long* ptr21 = *(unsigned long**)(v24 + 8L);
                                                if(ptr21[0] != ptr21) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr21;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr21[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr21;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v24 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr21, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v24 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr22 = (unsigned long*)ptr20[0];
                                                if(ptr22[0] != ptr22) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr22;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr22[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr22;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr20[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr22, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr20, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v23 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr23 = (unsigned long*)ptr19[0];
                                        if(ptr23[0] != ptr23) {
                                            *(unsigned long**)(param0 + 12472L) = ptr23;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr23[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr23;
                                                unsigned long v25 = ptr19[0];
                                                unsigned long* ptr24 = *(unsigned long**)(v25 + 8L);
                                                if(ptr24[0] != ptr24) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr24;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr24[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr24;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v25 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr24, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v25 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr25 = (unsigned long*)ptr23[0];
                                                if(ptr25[0] != ptr25) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr25;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr25[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr25;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr23[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr25, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr23, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr19, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v22 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                }
                            }
                            else {
                                unsigned long* ptr26 = (unsigned long*)ptr18[0];
                                if(ptr26[0] != ptr26) {
                                    *(unsigned long**)(param0 + 12472L) = ptr26;
                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr26[2]) {
                                        *(unsigned long**)(param0 + 0x30b0L) = ptr26;
                                        unsigned long v26 = ptr18[0];
                                        unsigned long* ptr27 = *(unsigned long**)(v26 + 8L);
                                        if(ptr27[0] != ptr27) {
                                            *(unsigned long**)(param0 + 12472L) = ptr27;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr27[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr27;
                                                long v27 = *(long*)(v26 + 8L);
                                                unsigned long* ptr28 = *(unsigned long**)(v27 + 8L);
                                                if(ptr28[0] != ptr28) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr28;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr28[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr28;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v27 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr28, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v27 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr29 = (unsigned long*)ptr27[0];
                                                if(ptr29[0] != ptr29) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr29;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr29[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr29;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr27[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr29, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr27, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v26 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr30 = (unsigned long*)ptr26[0];
                                        if(ptr30[0] != ptr30) {
                                            *(unsigned long**)(param0 + 12472L) = ptr30;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr30[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr30;
                                                unsigned long v28 = ptr26[0];
                                                unsigned long* ptr31 = *(unsigned long**)(v28 + 8L);
                                                if(ptr31[0] != ptr31) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr31;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr31[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr31;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v28 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr31, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v28 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr32 = (unsigned long*)ptr30[0];
                                                if(ptr32[0] != ptr32) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr32;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr32[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr32;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr30[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr32, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr30, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr26, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr18, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                }
                            }
                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr2, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                        }
                    }
                    ptr0 = del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr1 + 1, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                }
            }
            else {
                unsigned long* ptr33 = (unsigned long*)ptr1[0];
                if(ptr33[0] != ptr33) {
                    *(unsigned long**)(param0 + 12472L) = ptr33;
                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr33[2]) {
                        *(unsigned long**)(param0 + 0x30b0L) = ptr33;
                        unsigned long v29 = ptr1[0];
                        unsigned long* ptr34 = *(unsigned long**)(v29 + 8L);
                        if(ptr34[0] != ptr34) {
                            *(unsigned long**)(param0 + 12472L) = ptr34;
                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr34[2]) {
                                *(unsigned long**)(param0 + 0x30b0L) = ptr34;
                                long v30 = *(long*)(v29 + 8L);
                                unsigned long* ptr35 = *(unsigned long**)(v30 + 8L);
                                if(ptr35[0] != ptr35) {
                                    *(unsigned long**)(param0 + 12472L) = ptr35;
                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr35[2]) {
                                        *(unsigned long**)(param0 + 0x30b0L) = ptr35;
                                        long v31 = *(long*)(v30 + 8L);
                                        unsigned long* ptr36 = *(unsigned long**)(v31 + 8L);
                                        if(ptr36[0] != ptr36) {
                                            *(unsigned long**)(param0 + 12472L) = ptr36;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr36[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr36;
                                                long v32 = *(long*)(v31 + 8L);
                                                unsigned long* ptr37 = *(unsigned long**)(v32 + 8L);
                                                if(ptr37[0] != ptr37) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr37;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr37[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr37;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v32 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr37, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v32 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr38 = (unsigned long*)ptr36[0];
                                                if(ptr38[0] != ptr38) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr38;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr38[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr38;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr36[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr38, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr36, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v31 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr39 = (unsigned long*)ptr35[0];
                                        if(ptr39[0] != ptr39) {
                                            *(unsigned long**)(param0 + 12472L) = ptr39;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr39[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr39;
                                                unsigned long v33 = ptr35[0];
                                                unsigned long* ptr40 = *(unsigned long**)(v33 + 8L);
                                                if(ptr40[0] != ptr40) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr40;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr40[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr40;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v33 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr40, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v33 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr41 = (unsigned long*)ptr39[0];
                                                if(ptr41[0] != ptr41) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr41;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr41[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr41;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr39[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr41, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr39, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr35, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v30 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                }
                            }
                            else {
                                unsigned long* ptr42 = (unsigned long*)ptr34[0];
                                if(ptr42[0] != ptr42) {
                                    *(unsigned long**)(param0 + 12472L) = ptr42;
                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr42[2]) {
                                        *(unsigned long**)(param0 + 0x30b0L) = ptr42;
                                        unsigned long v34 = ptr34[0];
                                        unsigned long* ptr43 = *(unsigned long**)(v34 + 8L);
                                        if(ptr43[0] != ptr43) {
                                            *(unsigned long**)(param0 + 12472L) = ptr43;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr43[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr43;
                                                long v35 = *(long*)(v34 + 8L);
                                                unsigned long* ptr44 = *(unsigned long**)(v35 + 8L);
                                                if(ptr44[0] != ptr44) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr44;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr44[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr44;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v35 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr44, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v35 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr45 = (unsigned long*)ptr43[0];
                                                if(ptr45[0] != ptr45) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr45;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr45[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr45;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr43[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr45, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr43, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v34 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr46 = (unsigned long*)ptr42[0];
                                        if(ptr46[0] != ptr46) {
                                            *(unsigned long**)(param0 + 12472L) = ptr46;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr46[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr46;
                                                unsigned long v36 = ptr42[0];
                                                unsigned long* ptr47 = *(unsigned long**)(v36 + 8L);
                                                if(ptr47[0] != ptr47) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr47;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr47[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr47;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v36 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr47, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v36 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr48 = (unsigned long*)ptr46[0];
                                                if(ptr48[0] != ptr48) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr48;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr48[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr48;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr46[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr48, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr46, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr42, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr34, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                }
                            }
                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v29 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                        }
                    }
                    else {
                        unsigned long* ptr49 = (unsigned long*)ptr33[0];
                        if(ptr49[0] != ptr49) {
                            *(unsigned long**)(param0 + 12472L) = ptr49;
                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr49[2]) {
                                *(unsigned long**)(param0 + 0x30b0L) = ptr49;
                                unsigned long v37 = ptr33[0];
                                unsigned long* ptr50 = *(unsigned long**)(v37 + 8L);
                                if(ptr50[0] != ptr50) {
                                    *(unsigned long**)(param0 + 12472L) = ptr50;
                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr50[2]) {
                                        *(unsigned long**)(param0 + 0x30b0L) = ptr50;
                                        long v38 = *(long*)(v37 + 8L);
                                        unsigned long* ptr51 = *(unsigned long**)(v38 + 8L);
                                        if(ptr51[0] != ptr51) {
                                            *(unsigned long**)(param0 + 12472L) = ptr51;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr51[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr51;
                                                long v39 = *(long*)(v38 + 8L);
                                                unsigned long* ptr52 = *(unsigned long**)(v39 + 8L);
                                                if(ptr52[0] != ptr52) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr52;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr52[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr52;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v39 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr52, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v39 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr53 = (unsigned long*)ptr51[0];
                                                if(ptr53[0] != ptr53) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr53;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr53[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr53;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr51[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr53, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr51, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v38 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr54 = (unsigned long*)ptr50[0];
                                        if(ptr54[0] != ptr54) {
                                            *(unsigned long**)(param0 + 12472L) = ptr54;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr54[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr54;
                                                unsigned long v40 = ptr50[0];
                                                unsigned long* ptr55 = *(unsigned long**)(v40 + 8L);
                                                if(ptr55[0] != ptr55) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr55;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr55[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr55;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v40 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr55, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v40 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr56 = (unsigned long*)ptr54[0];
                                                if(ptr56[0] != ptr56) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr56;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr56[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr56;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr54[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr56, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr54, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr50, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v37 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                }
                            }
                            else {
                                unsigned long* ptr57 = (unsigned long*)ptr49[0];
                                if(ptr57[0] != ptr57) {
                                    *(unsigned long**)(param0 + 12472L) = ptr57;
                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr57[2]) {
                                        *(unsigned long**)(param0 + 0x30b0L) = ptr57;
                                        unsigned long v41 = ptr49[0];
                                        unsigned long* ptr58 = *(unsigned long**)(v41 + 8L);
                                        if(ptr58[0] != ptr58) {
                                            *(unsigned long**)(param0 + 12472L) = ptr58;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr58[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr58;
                                                long v42 = *(long*)(v41 + 8L);
                                                unsigned long* ptr59 = *(unsigned long**)(v42 + 8L);
                                                if(ptr59[0] != ptr59) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr59;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr59[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr59;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v42 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr59, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v42 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr60 = (unsigned long*)ptr58[0];
                                                if(ptr60[0] != ptr60) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr60;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr60[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr60;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr58[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr60, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr58, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(v41 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    else {
                                        unsigned long* ptr61 = (unsigned long*)ptr57[0];
                                        if(ptr61[0] != ptr61) {
                                            *(unsigned long**)(param0 + 12472L) = ptr61;
                                            if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr61[2]) {
                                                *(unsigned long**)(param0 + 0x30b0L) = ptr61;
                                                unsigned long v43 = ptr57[0];
                                                unsigned long* ptr62 = *(unsigned long**)(v43 + 8L);
                                                if(ptr62[0] != ptr62) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr62;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr62[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr62;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(*(long*)(v43 + 8L) + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr62, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, (unsigned long*)(v43 + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            else {
                                                unsigned long* ptr63 = (unsigned long*)ptr61[0];
                                                if(ptr63[0] != ptr63) {
                                                    *(unsigned long**)(param0 + 12472L) = ptr63;
                                                    if((unsigned long)((long)((long)param1 & 0xfffffffffffff000L) + 32L) >= ptr63[2]) {
                                                        *(unsigned long**)(param0 + 0x30b0L) = ptr63;
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, (unsigned long*)(ptr61[0] + 8L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    else {
                                                        del_C66us4UEWCXp84lHW4tDLA(param0, ptr63, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                    }
                                                    del_C66us4UEWCXp84lHW4tDLA.part.8(v2, ptr61, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                                }
                                            }
                                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr57, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                        }
                                    }
                                    del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr49, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                                }
                            }
                            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr33, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                        }
                    }
                    del_C66us4UEWCXp84lHW4tDLA.part.8(param0, ptr1, (long)((long)param1 & 0xfffffffffffff000L) + 32L);
                }
            }
            del_C66us4UEWCXp84lHW4tDLA.part.8(param0, (unsigned long*)(param0 + 12456L), (long)((long)param1 & 0xfffffffffffff000L) + 32L);
        }
        size_t __len = *(size_t*)((long)((long)param1 & 0xfffffffffffff000L) + 8L);
        if((long)__len <= 0x3f000000L) {
            freeBigChunk_CAqFS1jFL1RxG80t9bOGmAA(param0, (long)((long)param1 & 0xfffffffffffff000L));
            return (long)ptr0;
        }
        unsigned long* ptr64 = *(unsigned long*)((((long)((long)param1 & 0xfffffffffffff000L) >>> 21) & 0xFFL) * 8L + param0 + 0x28a8L);
        if(ptr64) {
            while((long)((long)param1 & 0xfffffffffffff000L) >>> 21 != *(long*)(ptr64 + 1)) {
                ptr64 = *ptr64;
                if(!ptr64) {
                    goto loc_40315B;
                }
            }
            *((long*)(((unsigned long)((unsigned int)((long)((long)param1 & 0xfffffffffffff000L) >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr64) + 2) = ~(1L << ((unsigned long)((unsigned int)((long)((long)param1 & 0xfffffffffffff000L) >>> 12L) & 0x1ff) & 0x3fL)) & *((long*)(((unsigned long)((unsigned int)((long)((long)param1 & 0xfffffffffffff000L) >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr64) + 2);
        }
    loc_40315B:
        long v44 = *(long*)(param0 + 0x2880L);
        long v45 = *(long*)(param0 + 0x2888L) < v44 ? v44: *(long*)(param0 + 0x2888L);
        *(long*)(param0 + 0x2880L) = v44 - __len;
        *(long*)(param0 + 0x2888L) = v45;
        →munmap((void*)(long)((long)param1 & 0xfffffffffffff000L), __len);
    }
    else {
        *(long*)(param0 + 0x2898L) = v6;
        *(param1 + 1) = 0L;
        *param1 = *(long*)((long)((long)param1 & 0xfffffffffffff000L) + 32L);
        long v46 = *(long*)((long)((long)param1 & 0xfffffffffffff000L) + 40L);
        *(unsigned long*)((long)((long)param1 & 0xfffffffffffff000L) + 32L) = param1;
        if(result1 <= v46) {
            *(long*)((long)((long)param1 & 0xfffffffffffff000L) + 40L) = result1 + v46;
            if(result1 + v46 == 4040L) {
                long v47 = *(long*)((long)((long)param1 & 0xfffffffffffff000L) + 16L);
                long v48 = ((result1 < 0L ? result1 + 7L: result1) & 0xfffffffffffffff8L) + param0;
                if((long)((long)param1 & 0xfffffffffffff000L) != *(long*)(v48 + 16L)) {
                    *(long*)(*(long*)((long)((long)param1 & 0xfffffffffffff000L) + 24L) + 16L) = v47;
                    result = *(long*)((long)((long)param1 & 0xfffffffffffff000L) + 16L);
                    if(result) {
                        *(long*)(result + 24L) = *(long*)((long)((long)param1 & 0xfffffffffffff000L) + 24L);
                    }
                }
                else {
                    *(long*)(v48 + 16L) = v47;
                    if(v47) {
                        *(long*)(v47 + 24L) = 0L;
                    }
                }
                *(long*)((long)((long)param1 & 0xfffffffffffff000L) + 8L) = 0x1000L;
                *(__int128*)((long)((long)param1 & 0xfffffffffffff000L) + 16L) = 0x0X;
                freeBigChunk_CAqFS1jFL1RxG80t9bOGmAA(param0, (long)((long)param1 & 0xfffffffffffff000L));
                return result;
            }
            return result1;
        }
        param0 += (result1 < 0L ? result1 + 7L: result1) & 0xfffffffffffffff8L;
        long v49 = *(long*)(param0 + 16L);
        *(long*)((long)((long)param1 & 0xfffffffffffff000L) + 16L) = *(long*)(param0 + 16L);
        if(v49) {
            *(long*)(v49 + 24L) = (long)((long)param1 & 0xfffffffffffff000L);
        }
        *(long*)(param0 + 16L) = (long)((long)param1 & 0xfffffffffffff000L);
        *(long*)((long)((long)param1 & 0xfffffffffffff000L) + 40L) = *(long*)((long)((long)param1 & 0xfffffffffffff000L) + 40L) + result1;
    }
    return (long)ptr0;
}

// Stale decompilation - Refresh this view to re-decompile this code
long rawNewObj_BpNS5yt3b9cMOponsUKh8aw(long param0, long param1, long param2) {
    long v0;
    long v1;
    long v2;
    long v3 = v2;
    long v4 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
    if(((v4 <= 63999L ? 500L: v4 >> 7) <= *(long*)(v0 + 16L) || *(long*)(v0 + 0x28f8L) >= *(long*)(v0 + 8L)) && !*(long*)(v0 + 88L)) {
        collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(v0);
    }
    long v5 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(v0 + 96L, param1 + 16L);
    *(long*)(v5 + 8L) = v1;
    *(long*)v5 = 4L;
    long v6 = *(long*)(v0 + 16L);
    long v7 = *(long*)(v0 + 32L);
    if(v6 > 8L) {
        long* ptr0 = (long*)(v6 * 8L + v7 - 8L);
        unsigned long* ptr1 = *ptr0;
        unsigned long v8 = *ptr1;
        if(v8 <= 7L) {
            ptr0 = (long*)(v6 * 8L + v7 - 16L);
            ptr1 = *ptr0;
            v8 = *ptr1;
            if(v8 > 7L) {
                goto loc_407CCC;
            }
            else {
                ptr0 = (long*)(v6 * 8L + v7 - 24L);
                ptr1 = *ptr0;
                v8 = *ptr1;
                if(v8 > 7L) {
                    goto loc_407CCC;
                }
                else {
                    ptr0 = (long*)(v6 * 8L + v7 - 32L);
                    ptr1 = *ptr0;
                    v8 = *ptr1;
                    if(v8 > 7L) {
                        goto loc_407CCC;
                    }
                    else {
                        ptr0 = (long*)(v6 * 8L + v7 - 40L);
                        ptr1 = *ptr0;
                        v8 = *ptr1;
                        if(v8 > 7L) {
                            goto loc_407CCC;
                        }
                        else {
                            ptr0 = (long*)(v6 * 8L + v7 - 48L);
                            ptr1 = *ptr0;
                            v8 = *ptr1;
                            if(v8 > 7L) {
                                goto loc_407CCC;
                            }
                            else {
                                ptr0 = (long*)(v6 * 8L + v7 - 56L);
                                ptr1 = *ptr0;
                                v8 = *ptr1;
                                if(v8 > 7L) {
                                    goto loc_407CCC;
                                }
                                else {
                                    long* ptr2 = (long*)(v6 * 8L + v7 - 64L);
                                    unsigned long* ptr3 = *ptr2;
                                    unsigned long v9 = *ptr3;
                                    if(v9 > 7L) {
                                        *ptr3 = v9 & 0xfffffffffffffffbL;
                                        *ptr2 = v5;
                                    }
                                    else {
                                        long v10 = *(long*)(v0 + 24L);
                                        if(v6 >= v10) {
                                            *(long*)(v0 + 24L) = v10 * 3L / 2L;
                                            long v11 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060L, v10 * 3L / 2L * 8L + 16L);
                                            *(long*)(v11 + 8L) = 1L;
                                            →memcpy((void*)(v11 + 16L), *(void**)(v0 + 32L), (size_t)(*(long*)(v0 + 16L) * 8L));
                                            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060L, (long*)(*(long*)(v0 + 32L) - 16L));
                                            *(void**)(v0 + 32L) = (void*)(v11 + 16L);
                                        }
                                        *(long*)(*(long*)(v0 + 16L) * 8L + *(long*)(v0 + 32L)) = v5;
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
            *ptr1 = v8 & 0xfffffffffffffffbL;
            *ptr0 = v5;
        }
    }
    else {
        *(long*)(v6 * 8L + v7) = v5;
        *(long*)(v0 + 16L) = *(long*)(v0 + 16L) + 1L;
    }
    return v5 + 16L;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* rawNewString(long param0) {
    void* __s = (void*)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, (long)(size_t)((param0 < 7L ? 7L: param0) + 17L), &gch_IcYaEuuWivYAS86vFMTS3Q);
    void* result = →memset(__s, 0, (size_t)((param0 < 7L ? 7L: param0) + 17L));
    *(long*)((long)result + 8L) = param0 < 7L ? 7L: param0;
    *(long*)result = 0L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* rawNewStringNoInit(long param0) {
    long* result = (long*)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, (param0 < 7L ? 7L: param0) + 17L, &gch_IcYaEuuWivYAS86vFMTS3Q);
    *(result + 1) = param0 < 7L ? 7L: param0;
    *result = 0L;
    return result;
}

long readLine_fPRnXwDTqtynUYGl4OixAg(long param0) {
    long v0;
    long* ptr0;
    long v1 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, 97L, &gch_IcYaEuuWivYAS86vFMTS3Q);
    unsigned __int128 v2 = gvar_40ABB0;
    *(long*)(v1 + 16L) = 0L;
    long* ptr1 = (long*)((v1 + 24L) & 0xfffffffffffffff8L);
    *(long*)(v1 + 89L) = 0L;
    for(long i = (unsigned long)(((unsigned int)v1 - (unsigned int)ptr1 + 97) >>> 3); i != 0L; --i) {
        *ptr1 = 0L;
        ++ptr1;
    }
    *(unsigned __int128*)v1 = v2;
    long result = v1;
    long v3 = readLine_sO1bQXVRA6RP9cdYJXNKeSw((FILE*)v0, &result);
    if(!(unsigned char)v3) {
        /*NO_RETURN*/ raiseEOF_9b10LwJKWsyrZIEKTB9b6PGQ(v0, ptr0);
    }
    return result;
}

long readLine_sO1bQXVRA6RP9cdYJXNKeSw(FILE* param0, long* param1) {
    unsigned long v0;
    void* ptr0;
    char v1;
    FILE* __stream;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6 = v2;
    long v7 = v5;
    long v8 = v3;
    long v9 = 80L;
    long v10 = v4;
    long v11 = param1[0];
    if(v11) {
        v9 = *(long*)v11 < 80L ? 80L: *(long*)v11;
    }
    long v12 = setLengthStr(v11, v9);
    long v13 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg((unsigned long)param1);
    if(!(unsigned char)v13) {
        if(v12) {
            *(long*)(v12 - 16L) = *(long*)(v12 - 16L) + 8L;
        }
        unsigned long v14 = param1[0];
        if(v14 > 0xfffL) {
            unsigned long v15 = (unsigned long)(*(long*)(v14 - 16L) - 8L);
            *(unsigned long*)(v14 - 16L) = (unsigned long)(*(long*)(v14 - 16L) - 8L);
            if(v15 <= 7L) {
                addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, (long*)(v14 - 16L));
            }
        }
    }
    param1[0] = v12;
    long v16 = 0L;
    while(1) {
        →memset((void*)(v12 + v16 + 16L), 10, (size_t)v9);
        char* ptr1 = →fgets((char*)(param1[0] + v16 + 16L), (int)v9, __stream);
        v1 = ptr1 ? 1: 0;
        if(!ptr1) {
            int v17 = →ferror(__stream);
            if((unsigned int)v17) {
                →clearerr(__stream);
                /*NO_RETURN*/ raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22, param1);
                break;
            }
        }
        v12 = param1[0];
        ptr0 = →memchr((void*)(v12 + v16 + 16L), 10, (size_t)v9);
        if(ptr0) {
            break;
        }
        else {
            v16 = v9 + v16 - 1L;
            v12 = setLengthStr(v12, v16 + 128L);
            long v18 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg((unsigned long)param1);
            if(!(unsigned char)v18) {
                if(v12) {
                    *(long*)(v12 - 16L) = *(long*)(v12 - 16L) + 8L;
                }
                unsigned long v19 = param1[0];
                if(v19 > 0xfffL) {
                    unsigned long v20 = (unsigned long)(*(long*)(v19 - 16L) - 8L);
                    *(unsigned long*)(v19 - 16L) = (unsigned long)(*(long*)(v19 - 16L) - 8L);
                    if(v20 <= 7L) {
                        addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, (long*)(v19 - 16L));
                    }
                }
            }
            param1[0] = v12;
            v9 = 128L;
        }
    }
    long v21 = (long)((long)ptr0 - (v12 + 16L));
    long v22 = (long)((long)ptr0 - (v12 + 16L));
    if(v21 > 0L) {
        char v23 = *(char*)(v21 + v12 + 15L);
        if(v23 == 13) {
            long v24 = setLengthStr(v12, v21 - 1L);
            long v25 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg((unsigned long)param1);
            if(!(unsigned char)v25) {
                if(v24) {
                    *(long*)(v24 - 16L) = *(long*)(v24 - 16L) + 8L;
                }
                unsigned long v26 = param1[0];
                if(v26 > 0xfffL) {
                    v0 = (unsigned long)(*(long*)(v26 - 16L) - 8L);
                    *(unsigned long*)(v26 - 16L) = (unsigned long)(*(long*)(v26 - 16L) - 8L);
                    if(v0 <= 7L) {
                        addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, (long*)(v26 - 16L));
                    }
                }
            }
            param1[0] = v24;
            if(v22 != 1L) {
                v1 = 1;
                return (unsigned long)v1;
            }
        }
        else {
            if(!v23 && v9 + v16 - 1L > v22 && *(char*)(v12 + v22 + 17L)) {
                v22 = v21 - 1L;
            }
            goto loc_408CC6;
        }
    }
    else {
    loc_408CC6:
        long v27 = setLengthStr(v12, v22);
        long v28 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg((unsigned long)param1);
        if(!(unsigned char)v28) {
            if(v27) {
                *(long*)(v27 - 16L) = *(long*)(v27 - 16L) + 8L;
            }
            unsigned long v29 = param1[0];
            if(v29 > 0xfffL) {
                v0 = (unsigned long)(*(long*)(v29 - 16L) - 8L);
                *(unsigned long*)(v29 - 16L) = (unsigned long)(*(long*)(v29 - 16L) - 8L);
                if(v0 <= 7L) {
                    addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, (long*)(v29 - 16L));
                    param1[0] = v27;
                    if(v22 > 0L) {
                        v1 = 1;
                    }
                    return (unsigned long)v1;
                }
            }
        }
        param1[0] = v27;
        if(v22 > 0L) {
            v1 = 1;
        }
    }
    return (unsigned long)v1;
}

__sighandler_t registerSignalHandler_njssp69aa7hvxte9bJ8uuDcg_2() {
    →signal(2, (__sighandler_t)&signalHandler);
    →signal(11, (__sighandler_t)&signalHandler);
    →signal(6, (__sighandler_t)&signalHandler);
    →signal(8, (__sighandler_t)&signalHandler);
    →signal(4, (__sighandler_t)&signalHandler);
    →signal(11, (__sighandler_t)&signalHandler);
    return →signal(13, (__sighandler_t)&signalHandler);
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

long removeChunkFromMatrix_v9bekLOkesgfrZC4aumfLXw_2(long param0, long param1) {
    long result;
    long v0;
    long v1 = *(long*)(param1 + 8L);
    long v2 = v1 & 0xffffffffL;
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
    long v3 = *(long*)(param1 + 16L);
    long v4 = (long)*(unsigned char*)((long)&fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ + v2) + v0;
    long v5 = (v1 >>> ((v4 - 5L) & 0x3fL)) - 32L;
    long v6 = *(long*)(param1 + 24L);
    if(v3) {
        *(long*)(v3 + 24L) = v6;
        v6 = *(long*)(param1 + 24L);
    }
    if(v6) {
        *(long*)(v6 + 16L) = *(long*)(param1 + 16L);
    }
    long v7 = ((v4 - 6L) * 32L + v5) * 8L + param0;
    if(*(long*)(v7 + 4216L) == param1) {
        v3 = *(long*)(param1 + 16L);
        *(long*)(v7 + 4216L) = *(long*)(param1 + 16L);
        if(!v3) {
            v3 = v4 * 4L + param0;
            result = 1L << ((unsigned long)((unsigned int)v5 & 0x1f) & 0x3fL);
            *(int*)(v3 + 0xffcL) = ~(unsigned int)result & *(int*)(v3 + 0xffcL);
            if(!*(int*)(v3 + 0xffcL)) {
                *(int*)(param0 + 0x1010L) = ~(unsigned int)(1L << ((unsigned long)(((unsigned int)v4 - 6) & 0x1f) & 0x3fL)) & *(int*)(param0 + 0x1010L);
                *(__int128*)(param1 + 16L) = 0x0X;
                return result;
            }
        }
    }
    *(__int128*)(param1 + 16L) = 0x0X;
    return result;
}

void* requestOsChunks_z9bCNjXTYllZ3pI24nEsw2g_2(long param0, size_t param1) {
    void* ptr0;
    void* result;
    size_t __len;
    long v0;
    size_t __len1 = param1;
    long v1 = v0;
    if(!*(char*)(param0 + 12489L)) {
        long v2 = *(long*)(param0 + 0x2898L);
        if(v2 <= 0xFFFFL) {
            *(long*)(param0 + 0x30d0L) = 0x4000L;
            __len = 0x4000L;
        }
        else {
            size_t v3 = (size_t)(*(long*)(param0 + 0x30d0L) * 2L);
            __len = (long)(size_t)(((v2 >>> 2) + 0xfffL) & 0xfffffffffffff000L) <= (long)((long)v3 <= 0x3f000000L ? v3: 0x3f000000L) ? (size_t)(((v2 >>> 2) + 0xfffL) & 0xfffffffffffff000L): (long)v3 <= 0x3f000000L ? v3: 0x3f000000L;
            *(size_t*)(param0 + 0x30d0L) = (long)(size_t)(((v2 >>> 2) + 0xfffL) & 0xfffffffffffff000L) <= (long)((long)v3 <= 0x3f000000L ? v3: 0x3f000000L) ? (size_t)(((v2 >>> 2) + 0xfffL) & 0xfffffffffffff000L): (long)v3 <= 0x3f000000L ? v3: 0x3f000000L;
        }
    loc_401320:
        if((long)__len >= (long)__len1) {
            void* ptr1 = →mmap(NULL, __len, 3, 34, -1, 0L);
            result = ptr1;
            if((unsigned long)(long*)((long)ptr1 - 1L) > 18446744073709551613L) {
                void* ptr2 = →mmap(NULL, __len1, 3, 34, -1, 0L);
                result = ptr2;
                if((unsigned long)(long*)((long)ptr2 - 1L) > 18446744073709551613L) {
                    /*NO_RETURN*/ raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
                    __len = *(size_t*)(param0 + 0x30d0L);
                    goto loc_401320;
                }
                else {
                    *(char*)(param0 + 12489L) = 1;
                }
            }
            else {
                __len1 = *(size_t*)(param0 + 0x30d0L);
            }
            goto loc_401345;
        }
        else {
            ptr0 = →mmap(NULL, __len1, 3, 34, -1, 0L);
            result = ptr0;
        }
        if((unsigned long)(long*)((long)ptr0 - 1L) > 18446744073709551613L) {
            /*NO_RETURN*/ raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
        }
    loc_401345:
        *(long*)(param0 + 0x2880L) = *(long*)(param0 + 0x2880L) + __len1;
        long* ptr3 = (long*)(param0 + 0x3100L);
        *(long*)(param0 + 10384L) = *(long*)(param0 + 10384L) + __len1;
        while(*ptr3 > 29L) {
            ptr3 = *(unsigned long*)(ptr3 + 61);
            if(!ptr3) {
                void* ptr4 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 496L);
                *(long*)((long)ptr4 + 488L) = *(long*)(param0 + 13032L);
                *(void**)(param0 + 13032L) = ptr4;
                *(void**)((long)ptr4 + 8L) = result;
                *(size_t*)((long)ptr4 + 16L) = __len1;
                *(long*)ptr4 = 1L;
            loc_401415:
                *(size_t*)((long)result + 8L) = __len1;
                *(__int128*)((long)result + 16L) = 0x0X;
                unsigned long* ptr5 = *(unsigned long*)((long*)((long)(long*)((long)(long*)((long)(long*)((long)result >>> 21) & 0xFFL) * 8L) + param0) + 0x515);
                if(ptr5) {
                    while((long*)((long)result >>> 21) != *(long*)(ptr5 + 1)) {
                        ptr5 = *ptr5;
                        if(!ptr5) {
                        loc_40147D:
                            long v4 = *(long*)(param0 + 10400L);
                            long v5 = *(long*)(param0 + 10400L);
                            if(!v4) {
                                v5 = 0x1000L;
                                v4 = 0x1000L;
                            }
                            long* ptr6 = (long*)((long)result - v5);
                            long v6 = (unsigned long)((unsigned int)*(long*)result & 0x1);
                            unsigned long* ptr7 = *(unsigned long*)((long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr6 >>> 21) & 0xFFL) * 8L) + param0) + 0x515);
                            if(ptr7) {
                                while((long*)((long)ptr6 >>> 21) != *(long*)(ptr7 + 1)) {
                                    ptr7 = *ptr7;
                                    if(!ptr7) {
                                        *(long*)result = v6;
                                        *(size_t*)(param0 + 10400L) = __len1;
                                        return result;
                                    }
                                }
                                if((long*)((long)(long*)(1L << (long)(long*)((long)(long*)((unsigned int)(long*)((long)ptr6 >>> 12L) & 0x1ff) & 0x3fL)) & *((long*)((long)(long*)((long)(long*)((long)(long*)((unsigned int)(long*)((long)ptr6 >>> 12L) & 0x1ff) >>> 6) * 8L) + (long)ptr7) + 2)) && *(ptr6 + 1) == v4) {
                                    v6 |= v4;
                                }
                            }
                            *(long*)result = v6;
                            *(size_t*)(param0 + 10400L) = __len1;
                            return result;
                        }
                    }
                    if((long*)((long)(long*)(1L << (long)(long*)((long)(long*)((unsigned int)(long*)((long)result >>> 12L) & 0x1ff) & 0x3fL)) & *((long*)((long)(long*)((long)(long*)((long)(long*)((unsigned int)(long*)((long)result >>> 12L) & 0x1ff) >>> 6) * 8L) + (long)ptr5) + 2))) {
                        *(long*)result = (unsigned long)((unsigned int)*(long*)result & 0x1) | __len1;
                    }
                }
                goto loc_40147D;
            }
        }
        long v7 = *ptr3;
        long* ptr8 = (long*)(v7 * 16L + (long)ptr3);
        *(void**)(ptr8 + 1) = result;
        *(size_t*)(ptr8 + 2) = __len1;
        *ptr3 = v7 + 1L;
        goto loc_401415;
    }
    else {
        __len = *(size_t*)(param0 + 0x30d0L);
        goto loc_401320;
    }
}

long selectBranch_yDNUA0V9a9a9bVLtZ9bXPT0aEg(long param0, long param1) {
    unsigned long v0;
    long v1 = **(unsigned long*)(param1 + 16L);
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
        long result = *(long*)(v0 * 8L + v3);
        if(result) {
            return result;
        }
    }
    return *(long*)(v2 * 8L + v3);
}

long setLengthStr(long param0, long param1) {
    long result;
    long v0;
    __int128 v1;
    __int128 v2;
    long v3 = v0;
    if(param0) {
        long v4 = *(long*)(param0 + 8L);
        result = param0;
        if((v4 & 0x3fffffffffffffffL) < (param1 < 0L ? 0L: param1)) {
            long v5 = 4L;
            if((v4 & 0x3fffffffffffffffL)) {
                v5 = (v4 & 0x3fffffffffffffffL) * 2L;
                if((v4 & 0x3fffffffffff0000L)) {
                    v5 = ((v4 & 0x3fffffffffffffffL) + v5) >> 1;
                }
            }
            long v6 = v5 > param1 ? v5: param1;
            long v7 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, (v6 < 7L ? 7L: v6) + 17L, &gch_IcYaEuuWivYAS86vFMTS3Q);
            *(long*)v7 = 0L;
            result = v7;
            *(long*)(v7 + 8L) = v6 < 7L ? 7L: v6;
            long v8 = *(long*)param0;
            *(long*)v7 = *(long*)param0;
            →memcpy((void*)(v7 + 16L), (void*)(param0 + 16L), (size_t)(v8 + 1L));
            long v9 = *(long*)param0;
            →memset((void*)(v9 + result + 16L), 0, (size_t)(param1 - v9));
            *(long*)(result + 8L) = v6;
        }
    }
    else {
        long v10 = rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, (param1 < 7L ? 7L: param1) + 17L, &gch_IcYaEuuWivYAS86vFMTS3Q);
        result = v10;
        →memset((void*)v10, 0, (size_t)((param1 < 7L ? 7L: param1) + 17L));
        __int128 v1 = movhps((unsigned __int128)param1 | ((unsigned __int128)(unsigned long)(v2 >>> 0x40X) << 64), param1 < 7L ? 7L: param1);
        *(__int128*)result = v1;
    }
    *(long*)result = param1 < 0L ? 0L: param1;
    *(char*)(result + 16L) = 0;
    return result;
}

void setPosition_kuKlONPws1O0vpPB9adzcQw() {
}

void setPosition_plJQLEbXvFqZv6Phpo1t1w() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(char* __s) {
    __int128 v0;
    long* ptr0;
    FILE* ptr1;
    __int128 v1;
    FILE* ptr2 = ptr1;
    int v2 = errorMessageWriter_ZXnv0JyrWe3HTd07wpSr7A;
    if(v2) {
        if(__s) {
            size_t v3 = →strlen(__s);
            long v4 = 24L;
            size_t v5 = 7L;
            if(v3 > 6L) {
                v4 = v3 + 17L;
                v5 = v3;
            }
            __int128* ptr3 = (__int128*)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, v4, &gch_IcYaEuuWivYAS86vFMTS3Q);
            size_t v6 = v3;
            __int128 v0 = movhps((unsigned __int128)v6 | ((unsigned __int128)(unsigned long)(v1 >>> 0x40X) << 64), v5);
            *ptr3 = v0;
            →memcpy((void*)(ptr3 + 1), __s, v3 + 1L);
            v2 = errorMessageWriter_ZXnv0JyrWe3HTd07wpSr7A;
        }
        jump v2;
    }
    FILE* __stream = stderr;
    int result = →fputs(__s, __stream);
    v2 = →ferror(__stream);
    if((unsigned int)v2) {
        →clearerr(__stream);
        /*NO_RETURN*/ raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22, ptr0);
    }
    return result;
}

void signalHandler(int param0) {
    char* __s = "SIGINT: Interrupted by Ctrl-C.\n";
    if(param0 == 11) {
        __s = "SIGSEGV: Illegal storage access. (Attempt to read from nil?)\n";
    }
    else if(param0 != 2) {
        __s = param0 != 6 ? param0 != 8 ? param0 != 4 ? param0 == 13 ? (char*)&gvar_40A157: (char*)&aUnknown_signal_: (char*)&aSIGILL__Illegal: (char*)&aSIGFPE__Arithme: "SIGABRT: Abnormal termination.\n";
    }
loc_408828:
    showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(__s);
    /*NO_RETURN*/ →exit(1);
    __s = "SIGSEGV: Illegal storage access. (Attempt to read from nil?)\n";
    goto loc_408828;
}

long* skew_Cfx7NvEVZIhBjBm7i89boSg(unsigned long* param0) {
    long* result = *param0;
    long v0 = *result;
    if(*(result + 4) == *(long*)(v0 + 32L)) {
        *param0 = v0;
        *result = *(long*)(v0 + 8L);
        *(unsigned long*)(*param0 + 8L) = result;
    }
    return result;
}

void sourceDatInit000() {
}

long* splitChunk2_UxUTh1oy39boKK4NPJIGnLQ(long param0, long param1, long param2) {
    long* result = (long*)(param2 + param1);
    long v0 = *(long*)(param1 + 8L);
    *(__int128*)(result + 2) = 0x0X;
    *result = param2;
    long v1 = v0 - param2;
    *(result + 1) = v0 - param2;
    long* ptr0 = (long*)(*(long*)(param1 + 8L) + param1);
    unsigned long* ptr1 = *(unsigned long*)((long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr0 >>> 21) & 0xFFL) * 8L) + param0) + 0x515);
    if(ptr1) {
        while((long*)((long)ptr0 >>> 21) != *(long*)(ptr1 + 1)) {
            ptr1 = *ptr1;
            if(!ptr1) {
                goto loc_4016E9;
            }
        }
        if(((1L << ((unsigned long)((unsigned int)(long*)((long)ptr0 >>> 12L) & 0x1ff) & 0x3fL)) & *((long*)(((unsigned long)((unsigned int)(long*)((long)ptr0 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr1) + 2))) {
            *ptr0 = (unsigned long)((unsigned int)*ptr0 & 0x1) | v1;
        }
    }
loc_4016E9:
    *(long*)(param1 + 8L) = param2;
    long* ptr2 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)result >>> 21) & 0xFFL) * 8L) + param0);
    void* ptr3 = *(void**)(ptr2 + 0x515);
    if(!ptr3) {
        goto loc_401755;
    }
    else {
        while((long*)((long)result >>> 21) != *(long*)((long)ptr3 + 8L)) {
            ptr3 = *(void**)ptr3;
            if(!ptr3) {
            loc_401755:
                ptr3 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 80L);
                *(long*)ptr3 = *(ptr2 + 0x515);
                *(void**)(ptr2 + 0x515) = ptr3;
                *(unsigned long*)((long)ptr3 + 8L) = (long*)((long)result >>> 21);
                break;
            }
        }
    }
    *((long*)(((unsigned long)((unsigned int)(long*)((long)result >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr3) + 2) = (1L << ((unsigned long)((unsigned int)(long*)((long)result >>> 12L) & 0x1ff) & 0x3fL)) | *((long*)(((unsigned long)((unsigned int)(long*)((long)result >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr3) + 2);
    return result;
}

long splitChunk_8QXhiy717OAl8WNA2X27EA(long param0, long param1, long param2) {
    long v0;
    long v1;
    long v2 = v1;
    long v3 = *(long*)(param1 + 8L);
    long* ptr0 = (long*)(param2 + param1);
    *(__int128*)(ptr0 + 2) = 0x0X;
    long v4 = v3 - param2;
    *ptr0 = param2;
    *(ptr0 + 1) = v4;
    long* ptr1 = (long*)(*(long*)(param1 + 8L) + param1);
    unsigned long* ptr2 = *(unsigned long*)((long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr1 >>> 21) & 0xFFL) * 8L) + param0) + 0x515);
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
    *(long*)(param1 + 8L) = param2;
    long* ptr3 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr0 >>> 21) & 0xFFL) * 8L) + param0);
    void* ptr4 = *(void**)(ptr3 + 0x515);
    if(!ptr4) {
        goto loc_4019E8;
    }
    else {
        while((long*)((long)ptr0 >>> 21) != *(long*)((long)ptr4 + 8L)) {
            ptr4 = *(void**)ptr4;
            if(!ptr4) {
            loc_4019E8:
                ptr4 = llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param0, 80L);
                *(long*)ptr4 = *(ptr3 + 0x515);
                *(void**)(ptr3 + 0x515) = ptr4;
                *(unsigned long*)((long)ptr4 + 8L) = (long*)((long)ptr0 >>> 21);
                break;
            }
        }
    }
    *((long*)(((unsigned long)((unsigned int)(long*)((long)ptr0 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr4) + 2) = (1L << ((unsigned long)((unsigned int)(long*)((long)ptr0 >>> 12L) & 0x1ff) & 0x3fL)) | *((long*)(((unsigned long)((unsigned int)(long*)((long)ptr0 >>> 12L) & 0x1ff) >>> 6) * 8L + (long)ptr4) + 2);
    long v5 = *(ptr0 + 1);
    long v6 = v5 & 0xffffffffL;
    if((unsigned int)v5 <= 0xffff) {
        v0 = 0L;
        if((unsigned int)v5 > 0xff) {
            v0 = 8L;
            v6 = (unsigned long)((unsigned int)v5 >>> 8);
        }
    }
    else if((unsigned int)v5 <= 0xffffff) {
        v6 = (unsigned long)((unsigned int)v6 >>> 16);
        v0 = 16L;
    }
    else {
        v0 = 24L;
        v6 = (unsigned long)((unsigned int)v5 >>> 24);
    }
    long v7 = (long)*(unsigned char*)((long)&fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ + v6);
    *(ptr0 + 3) = 0L;
    long v8 = v7 + v0;
    long v9 = (v5 >>> ((v8 - 5L) & 0x3fL)) - 32L;
    long v10 = ((v8 - 6L) * 32L + v9) * 8L + param0;
    long v11 = *(long*)(v10 + 4216L);
    *(ptr0 + 2) = *(long*)(v10 + 4216L);
    if(v11) {
        *(unsigned long*)(v11 + 24L) = ptr0;
    }
    *(unsigned long*)(v10 + 4216L) = ptr0;
    *(int*)(v8 * 4L + param0 + 0xffcL) = (unsigned int)(1L << ((unsigned long)((unsigned int)v9 & 0x1f) & 0x3fL)) | *(int*)(v8 * 4L + param0 + 0xffcL);
    *(int*)(param0 + 0x1010L) = (unsigned int)(1L << ((unsigned long)(((unsigned int)v8 - 6) & 0x1f) & 0x3fL)) | *(int*)(param0 + 0x1010L);
    return 1L << ((unsigned long)(((unsigned int)v8 - 6) & 0x1f) & 0x3fL);
}

long split_Cfx7NvEVZIhBjBm7i89boSg_2(unsigned long* param0) {
    long result = *param0;
    long* ptr0 = *(unsigned long*)(result + 8L);
    if(*(long*)(*(ptr0 + 1) + 32L) == *(long*)(result + 32L)) {
        *param0 = ptr0;
        *(long*)(result + 8L) = *ptr0;
        **param0 = result;
        result = *param0;
        *(long*)(result + 32L) = *(long*)(result + 32L) + 1L;
    }
    return result;
}

long stackSize_61foY5fGmU9c2fC9c6wRIsrA(long* param0) {
    long result;
    long* ptr0 = &ptr0;
    if(&ptr0) {
        result = *param0;
    }
    return result;
}

long stackSize_IV9bgfYkinlae0WZ2NZi5JA() {
    return stackSize_61foY5fGmU9c2fC9c6wRIsrA((long*)&gch_IcYaEuuWivYAS86vFMTS3Q);
}

void sub_400960() {
    jump gvar_60D010;
}

long sweep_zoTIuavlrCHyw3B8MBaLJA_5(long param0) {
    long result;
    long* ptr0;
    long v0;
    long* ptr1;
    char v1;
    char v2;
    long v3;
    long v4;
    long v5;
    long v6;
    long* ptr2 = (long*)0x100;
    long v7 = v4;
    long v8 = param0;
    long v9 = v3;
    long* ptr3 = (long*)(v8 + 10504L);
    long v10 = v6;
    long v11 = v5;
    *(char*)(param0 + 12584L) = 1;
    long* ptr4 = &v1;
    while(ptr2 != 0L) {
        *ptr4 = ptr3[0];
        ++ptr3;
        ++ptr4;
        ptr2 = (long*)((char*)ptr2 - 1L);
    }
    unsigned long* ptr5 = (unsigned long*)&v1;
    long v12 = v8 + 96L;
    do {
        long* ptr6 = *ptr5;
        if(*ptr5) {
            do {
                long* ptr7 = ptr6;
                long v13 = 0L;
                do {
                    long v14 = ptr7[v13 + 2L];
                    long v15 = v13 * 64L;
                    if(v14) {
                        long v16 = v13;
                    loc_4075F0:
                        do {
                            do {
                                if(((unsigned char)v14 & 0x1)) {
                                    ptr3 = (long*)((ptr7[1] * 0x200L) | v15);
                                    unsigned long* ptr8 = *(unsigned long*)((long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr3 >>> 9) & 0xFFL) * 8L) + v8) + 1313);
                                    if(ptr8) {
                                        while((long*)((long)ptr3 >>> 9) != *(long*)(ptr8 + 1)) {
                                            ptr8 = *ptr8;
                                            if(!ptr8) {
                                                goto loc_4075E0;
                                            }
                                        }
                                        if((long*)((long)(long*)(1L << (long)(long*)((long)(long*)((unsigned int)ptr3 & 0x1ff) & 0x3fL)) & *((long*)((long)(long*)((long)(long*)((long)(long*)((unsigned int)ptr3 & 0x1ff) >>> 6) * 8L) + (long)ptr8) + 2)) && (*(char*)((long)ptr3 * 0x1000L) & 0x1)) {
                                            long* ptr9 = *(long**)((char*)((long)ptr3 * 0x1000L) + 8L);
                                            if((long)ptr9 <= 4040L) {
                                                ptr1 = (long*)((long)(char*)((long)ptr3 * 0x1000L) + *(long*)((char*)((long)ptr3 * 0x1000L) + 48L)) + 7;
                                            }
                                            else if(*(unsigned long*)((char*)((long)ptr3 * 0x1000L) + 40L) <= 1L) {
                                                goto loc_4075E0;
                                            }
                                            else {
                                                ptr9 = *(long**)(v8 + 0x3390L);
                                                v0 = *(long*)(v8 + 13216L);
                                                ptr0 = (long*)((long)(long*)((long)(long*)((char*)((long)ptr3 * 0x1000L) + 32L) >>> 12) & (long)ptr9);
                                                ptr2 = *(unsigned long*)((long)(long*)((long)ptr0 * 8L) + v0);
                                                if(ptr2) {
                                                    while((long*)((long)(long*)((char*)((long)ptr3 * 0x1000L) + 32L) >>> 12) != *(ptr2 + 1)) {
                                                        ptr0 = (long*)((long)(long*)((char*)((long)ptr0 * 5L) + 1L) & (long)ptr9);
                                                        ptr2 = *(unsigned long*)((long)(long*)((long)ptr0 * 8L) + v0);
                                                        if(!ptr2) {
                                                            goto loc_4076C1;
                                                        }
                                                    }
                                                    if(!(*(char*)(ptr2 + 2) & 0x10)) {
                                                    loc_4076C1:
                                                        long v17 = *(long*)((char*)((long)ptr3 * 0x1000L) + 40L);
                                                        if(*(long*)(v17 + 32L)) {
                                                            ++gvar_60F058;
                                                            *(long*)(v17 + 32L)((long)(long*)((char*)((long)ptr3 * 0x1000L) + 48L), (long)ptr3, (long)ptr0, (long)ptr2, (long)ptr9, v0);
                                                            --gvar_60F058;
                                                        }
                                                        ++v15;
                                                        result = rawDealloc_DA62HrGC5sdfCED505KyyQ(v12, (long*)((char*)((long)ptr3 * 0x1000L) + 32L));
                                                        v14 >>>= 1;
                                                        if(v14) {
                                                            goto loc_4075F0;
                                                        }
                                                        else {
                                                            break loc_4075F0;
                                                        }
                                                    }
                                                    else {
                                                        goto loc_4075E0;
                                                    }
                                                }
                                                else {
                                                    goto loc_4076C1;
                                                }
                                            }
                                            if((long*)((char*)((long)ptr3 * 0x1000L) + 56L) < ptr1) {
                                                long v18 = v14;
                                                long* ptr10 = (long*)((char*)((long)ptr3 * 0x1000L) + 56L);
                                                long v19 = v15;
                                                long v20 = v8;
                                                long* ptr11 = (long*)((char*)((long)ptr3 * 0x1000L) + 56L);
                                                do {
                                                    if((unsigned long)ptr10[1] > 1L) {
                                                        v0 = *(long*)(v20 + 0x3390L);
                                                        long v21 = *(long*)(v20 + 13216L);
                                                        ptr2 = (long*)((long)ptr11 >>> 12);
                                                        long* ptr12 = (long*)((long)ptr2 & v0);
                                                        ptr0 = *(unsigned long*)((long)(long*)((long)ptr12 * 8L) + v21);
                                                        if(!ptr0) {
                                                            goto loc_407810;
                                                        }
                                                        else {
                                                            while(*(ptr0 + 1) != ptr2) {
                                                                ptr12 = (long*)((long)(long*)((char*)((long)ptr12 * 5L) + 1L) & v0);
                                                                ptr0 = *(unsigned long*)((long)(long*)((long)ptr12 * 8L) + v21);
                                                                if(!ptr0) {
                                                                    goto loc_407810;
                                                                }
                                                            }
                                                            ptr2 = (long*)((unsigned int)(long*)((long)ptr11 >>> 3L) & 0x1ff);
                                                            if(!(long*)((long)(long*)(1L << (long)(long*)((long)ptr2 & 0x3fL)) & *((long*)((long)(long*)((long)(long*)((long)ptr2 >>> 6) * 8L) + (long)ptr0) + 2))) {
                                                            loc_407810:
                                                                long v22 = ptr10[1];
                                                                if(*(long*)(v22 + 32L)) {
                                                                    ++gvar_60F058;
                                                                    *(long*)(v22 + 32L)((long)(ptr11 + 2), (long)(long*)((char*)((long)ptr3 * 0x1000L) + 56L), (long)ptr0, (long)ptr2, (long)ptr9, v0);
                                                                    --gvar_60F058;
                                                                }
                                                                rawDealloc_DA62HrGC5sdfCED505KyyQ(v12, ptr10);
                                                            }
                                                        }
                                                    }
                                                    ptr11 = (long*)((long)ptr9 + (long)ptr11);
                                                    ptr10 = ptr11;
                                                }
                                                while(ptr1 > ptr11);
                                                v8 = v20;
                                                v14 = v18;
                                                v15 = v19;
                                            }
                                        }
                                    }
                                    goto loc_4075E0;
                                }
                                else {
                                loc_4075E0:
                                    ++v15;
                                    v14 >>>= 1;
                                }
                                break loc_4075F0;
                            }
                            while(1);
                        }
                        while(!v14);
                        v13 = v16;
                    }
                    ++v13;
                }
                while(v13 != 8L);
                ptr6 = (long*)ptr7[0];
            }
            while(ptr6);
        }
        ++ptr5;
    }
    while(&v2 != ptr5);
    *(char*)(v8 + 12584L) = 0;
    return result;
}

long systemDatInit000() {
    __int128 v0;
    unsigned char v1;
    unsigned __int128 v2;
    unsigned __int128 v3;
    unsigned char v4;
    unsigned __int128 v5;
    unsigned __int128 v6;
    unsigned char v7;
    __int128 v8;
    __int128 v9;
    __int128 v10;
    __int128 v11;
    __int128 v12;
    __int128 v13;
    __int128 v14;
    __int128 v15;
    __int128 v16;
    __int128 v17;
    __int128 v18;
    __int128 v19;
    __int128 v20;
    __int128 v21;
    __int128 v22;
    __int128 v23;
    __int128 v24;
    __int128 v25;
    __int128 v26;
    __int128 v27;
    __int128 v28;
    unsigned __int128 v29;
    unsigned __int128 v30;
    unsigned char v31;
    unsigned __int128 v32;
    unsigned __int128 v33;
    unsigned __int128 v34;
    unsigned __int128 v35;
    unsigned __int128 v36;
    unsigned __int128 v37;
    unsigned __int128 v38;
    unsigned __int128 v39;
    unsigned char v40;
    unsigned __int128 v41;
    unsigned __int128 v42;
    unsigned __int128 v43;
    unsigned __int128 v44;
    unsigned __int128 v45;
    unsigned __int128 v46;
    unsigned __int128 v47;
    unsigned __int128 v48;
    unsigned __int128 v49;
    unsigned __int128 v50;
    __int128 v51;
    __int128 v52;
    unsigned __int128 v53;
    unsigned __int128 v54;
    __int128 v55;
    __int128 v56;
    __int128 v57;
    unsigned __int128 v58;
    __int128 v59;
    __int128 v60;
    __int128 v61;
    __int128 v62;
    __int128 v63;
    unsigned __int128 v64;
    __int128 v65;
    unsigned __int128 v66;
    unsigned __int128 v67;
    __int128 v68;
    __int128 v69;
    __int128 v70;
    __int128 v71;
    __int128 v72;
    __int128 v73;
    unsigned __int128 v74;
    unsigned __int128 v75;
    unsigned __int128 v76;
    unsigned __int128 v77;
    unsigned __int128 v78;
    unsigned char v79;
    unsigned __int128 v80;
    unsigned __int128 v81;
    unsigned __int128 v82;
    unsigned __int128 v83;
    __int128 v84;
    unsigned __int128 v85;
    __int128 v86;
    __int128 v87;
    __int128 v88;
    __int128 v89;
    __int128 v90;
    __int128 v91;
    __int128 v92;
    long v93 = 0L;
    char* ptr0 = (char*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141;
    unsigned __int128 v94 = gvar_40ABD0;
    unsigned __int128 v85 = movhps((unsigned __int128)&NTI_rR5Bzr1D5krxoo1NcNyeMA_ | ((unsigned __int128)(unsigned long)(v86 >>> 0x40X) << 64), &aSize);
    gvar_60EE88 = 786;
    unsigned __int128 v95 = gvar_40ABE0;
    gvar_60D420 = v85;
    unsigned __int128 v96 = gvar_40ABF0;
    long v97 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141;
    __int128 v98 = (unsigned __int128)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141 | ((unsigned __int128)(unsigned long)(v98 >>> 0x40X) << 64);
    unsigned char v40 = movhps((unsigned __int128)&gvar_60D410 | ((unsigned __int128)(unsigned long)(v85 >>> 0x40X) << 64), &gvar_60D440);
    gvar_60EE90 = 0L;
    unsigned __int128 v99 = gvar_40AC00;
    *(long*)&NTI_TuG1vdYwChKtx4TOkRnAjw_ = 56;
    __int128 v84 = punpcklqdq(v98, v98);
    unsigned __int128 v100 = gvar_40AC10;
    gvar_60EED0 = 0L;
    unsigned __int128 v101 = gvar_40AC20;
    *(long*)&NTI_rR5Bzr1D5krxoo1NcNyeMA_ = 8;
    unsigned __int128 v102 = gvar_40AC30;
    gvar_60EEC8 = 799;
    gvar_60D410 = 1;
    gvar_60D418 = 0L;
    gvar_612570 = 0L;
    *(long*)&NTI_jIBKr1ejBgsfM33Kxw4j7A_ = 1;
    gvar_612568 = 782;
    *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_2.6128 = v40;
    unsigned __int128 v103 = gvar_40ABC0;
    do {
        v93 -= -128L;
        unsigned __int128 v104 = gvar_40AC40;
        __int128 v87 = paddq(v103, v95);
        __int128 v88 = paddq(v103, v96);
        ptr0 += 0x300L;
        *(long*)(ptr0 - 616L) = (unsigned long)v103;
        __int128 v11 = paddq(v104, v103);
        __int128 v89 = paddq(v103, v99);
        *(ptr0 - 96L) = 1;
        __int128 v90 = paddq(v103, v100);
        __int128 v91 = paddq(v103, v101);
        *(long*)(ptr0 + -568L) = movhps(*(long*)(ptr0 - 568L), (unsigned long)v103);
        __int128 v92 = paddq(v103, v102);
        *(long*)(ptr0 + -376L) = movhps(*(long*)(ptr0 - 376L), (unsigned long)v88);
        *(long*)(ptr0 - 520L) = (unsigned long)v87;
        *(long*)(ptr0 + -472L) = movhps(*(long*)(ptr0 - 472L), (unsigned long)v87);
        *(long*)(ptr0 - 424L) = (unsigned long)v88;
        *(long*)(ptr0 - 328L) = (unsigned long)v89;
        *(long*)(ptr0 + 0xfffffffffffffee8L) = movhps(*(long*)(ptr0 - 0x118L), (unsigned long)v89);
        *(long*)(ptr0 - 232L) = (unsigned long)v90;
        *(long*)(ptr0 + -184L) = movhps(*(long*)(ptr0 - 184L), (unsigned long)v90);
        *(long*)(ptr0 - 0x88L) = (unsigned long)v91;
        *(long*)(ptr0 + -88L) = movhps(*(long*)(ptr0 - 88L), (unsigned long)v91);
        *(long*)(ptr0 - 40L) = (unsigned long)v92;
        *(long*)(ptr0 + 8L) = movhps(*(long*)(ptr0 + 8L), (unsigned long)v92);
        *(long*)(ptr0 + 56L) = (unsigned long)v11;
        *(ptr0 - 624L) = 1;
        *(ptr0 - 576L) = 1;
        *(ptr0 - 0x210L) = 1;
        *(ptr0 - 480L) = 1;
        *(ptr0 - 432L) = 1;
        *(ptr0 - 384L) = 1;
        *(ptr0 - 336L) = 1;
        *(ptr0 - 288L) = 1;
        *(ptr0 - 240L) = 1;
        *(ptr0 - 192L) = 1;
        *(ptr0 - 144L) = 1;
        *(ptr0 - 48L) = 1;
        *ptr0 = 1;
        *(ptr0 + 48L) = 1;
        *(ptr0 + 96L) = 1;
        *(long*)(ptr0 + 104L) = movhps(*(long*)(ptr0 + 104L), (unsigned long)v11);
        long v105 = (unsigned long)*(__int128*)((long*)((long)&gvar_40A500 + v93) + 38);
        long v106 = (unsigned long)*(__int128*)((long*)((long)&gvar_40A500 + v93) + 40);
        long v107 = (unsigned long)*(__int128*)((long*)((long)&gvar_40A500 + v93) + 32);
        long v108 = (unsigned long)*(__int128*)((long*)((long)&gvar_40A500 + v93) + 30);
        *(long*)(ptr0 - 120L) = v105;
        v0 = *(__int128*)((long*)((long)&gvar_40A500 + v93) + 34);
        long v109 = (unsigned long)*(__int128*)((long*)((long)&gvar_40A500 + v93) + 28);
        *(long*)(ptr0 + -72L) = movhps(*(long*)(ptr0 - 72L), v105);
        long v110 = *(long*)(v93 + 0x40a650L);
        unsigned __int128 v111 = gvar_40AC50;
        *(long*)(ptr0 - 24L) = v106;
        long v112 = (unsigned long)*(__int128*)((long*)((long)&gvar_40A500 + v93) + 36);
        __int128 v52 = paddq(v111, v103);
        *(long*)(ptr0 + 24L) = movhps(*(long*)(ptr0 + 24L), v106);
        *(long*)(ptr0 + -360L) = movhps(*(long*)(ptr0 - 360L), v107);
        __int128 v12 = psllq(v52, 1);
        *(long*)(ptr0 + 0xfffffffffffffdd8L) = movhps(*(long*)(ptr0 - 0x228L), v109);
        __int128 v10 = paddq(v12, v52);
        *(long*)(ptr0 + -456L) = movhps(*(long*)(ptr0 - 456L), v108);
        unsigned __int128 v113 = gvar_40AC60;
        *(long*)(ptr0 - 408L) = v107;
        __int128 v56 = psllq(v10, 4);
        __int128 v114 = *(__int128*)(v93 + 0x40a650L);
        __int128 v55 = paddq(v113, v103);
        __int128 v13 = paddq(v56, v84);
        *(long*)(ptr0 - 600L) = v109;
        *(long*)(ptr0 - 504L) = v108;
        *(long*)(ptr0 - 312L) = (unsigned long)v0;
        *(long*)(ptr0 + -264L) = movhps(*(long*)(ptr0 - 264L), (unsigned long)v0);
        *(long*)(ptr0 - 216L) = v112;
        *(long*)(ptr0 + -168L) = movhps(*(long*)(ptr0 - 168L), v112);
        *(long*)(ptr0 + 72L) = v110;
        *(long*)(ptr0 + 120L) = movhps(*(long*)(ptr0 + 120L), (unsigned long)v114);
        *(__int128*)((long)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_10.6136 + v93) = v13;
        __int128 v14 = psllq(v55, 1);
        __int128 v51 = paddq(v14, v55);
        __int128 v8 = psllq(v51, 4);
        __int128 v57 = paddq(gvar_40AC70, v103);
        unsigned __int128 v58 = paddq(v8, v84);
        *(unsigned __int128*)((long)&gvar_60D170 + v93) = v58;
        __int128 v16 = psllq(v57, 1);
        __int128 v9 = paddq(v16, v57);
        __int128 v17 = psllq(v9, 4);
        __int128 v15 = paddq(gvar_40AC80, v103);
        __int128 v61 = paddq(v17, v84);
        *(__int128*)((long)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_9.6135 + v93) = v61;
        __int128 v18 = psllq(v15, 1);
        __int128 v62 = paddq(v18, v15);
        __int128 v63 = psllq(v62, 4);
        unsigned __int128 v64 = paddq(v63, v84);
        *(unsigned __int128*)((long)&gvar_60D190 + v93) = v64;
        __int128 v59 = paddq(gvar_40AC90, v103);
        __int128 v21 = psllq(v59, 1);
        __int128 v65 = paddq(v21, v59);
        __int128 v22 = psllq(v65, 4);
        __int128 v60 = paddq(gvar_40ACA0, v103);
        unsigned __int128 v66 = paddq(v22, v84);
        *(unsigned __int128*)((long)&gvar_60D1A0 + v93) = v66;
        __int128 v23 = psllq(v60, 1);
        __int128 v68 = paddq(v23, v60);
        __int128 v24 = psllq(v68, 4);
        __int128 v20 = paddq(gvar_40ACB0, v103);
        __int128 v69 = paddq(v24, v84);
        *(__int128*)((long)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_6.6132 + v93) = v69;
        __int128 v70 = psllq(v20, 1);
        __int128 v71 = paddq(v70, v20);
        __int128 v25 = psllq(v71, 4);
        __int128 v19 = paddq(gvar_40ACC0, v103);
        __int128 v72 = paddq(v25, v84);
        *(__int128*)((long)&gvar_60D1C0 + v93) = v72;
        v103 = paddq(v103, v94);
        __int128 v26 = psllq(v19, 1);
        __int128 v27 = paddq(v26, v19);
        __int128 v28 = psllq(v27, 4);
        __int128 v73 = paddq(v28, v84);
        *(__int128*)(v93 + 6345168L) = v73;
    }
    while(v93 != 0x200L);
    v19 = (unsigned __int128)&NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_ | ((unsigned __int128)(unsigned long)(v19 >>> 0x40X) << 64);
    v84 = (unsigned __int128)&NTI_S9agCYBinaYZnGWcjTdxclg_ | ((unsigned __int128)(unsigned long)(v84 >>> 0x40X) << 64);
    v103 = (unsigned __int128)&NTI_7JWFFgr9aqaR3U4iXEpLCag_ | ((unsigned __int128)(unsigned long)(v103 >>> 0x40X) << 64);
    v73 = (unsigned __int128)&NTI_XEycrCsme5C8CVWAYEcdBQ_ | ((unsigned __int128)(unsigned long)(v73 >>> 0x40X) << 64);
    unsigned __int128 v53 = movhps(v84, 4235787L);
    unsigned __int128 v54 = movhps((unsigned __int128)&NTI_jIBKr1ejBgsfM33Kxw4j7A_ | ((unsigned __int128)(unsigned long)(v0 >>> 0x40X) << 64), &aKind);
    gvar_60ECA8 = 782;
    gvar_60D450 = v54;
    gvar_60E090 = 64L;
    unsigned char v31 = movhps((unsigned __int128)&gvar_60E0D0 | ((unsigned __int128)(unsigned long)(v54 >>> 0x40X) << 64), &gvar_60E100);
    gvar_60E070 = 2;
    *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_6.6132 = v31;
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
    unsigned __int128 v2 = movhps((unsigned __int128)&NTI_v8QUszD1sWlSIWZz7mC4bQ_ | ((unsigned __int128)(unsigned long)(v31 >>> 0x40X) << 64), &gvar_60E190);
    gvar_60EFC8 = 787;
    gvar_60EFD0 = v2;
    gvar_612768 = 789;
    unsigned __int128 v42 = movhps((unsigned __int128)&NTI_MbMVByo9a9ck632Se8onTXew_ | ((unsigned __int128)(unsigned long)(v2 >>> 0x40X) << 64), &aFlags);
    gvar_60E138 = 2L;
    gvar_60E0B0 = v42;
    unsigned __int128 v43 = movhps(v103, &aBase);
    gvar_60E148 = "ntfEnumHole";
    gvar_60E1D0 = v43;
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
    unsigned char v1 = movhps((unsigned __int128)&gvar_60E280 | ((unsigned __int128)(unsigned long)(v43 >>> 0x40X) << 64), &gvar_60E2B0);
    gvar_6195A8 = 782;
    *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_10.6136 = v1;
    unsigned __int128 v44 = movhps((unsigned __int128)&gvar_60E2E0 | ((unsigned __int128)(unsigned long)(v1 >>> 0x40X) << 64), &gvar_60E310);
    gvar_60E280 = 1;
    gvar_60D170 = v44;
    gvar_60E288 = 0L;
    unsigned __int128 v3 = movhps((unsigned __int128)&NTI_unfNsxrcATrufDZmpBq4HQ_ | ((unsigned __int128)(unsigned long)(v44 >>> 0x40X) << 64), &aKind);
    gvar_60E298 = "nkNone";
    gvar_60E260 = v3;
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
    unsigned __int128 v45 = movhps(v103, 0x40a1d0L);
    gvar_60E3B0 = v45;
    unsigned __int128 v41 = movhps((unsigned __int128)&NTI_rR5Bzr1D5krxoo1NcNyeMA_ | ((unsigned __int128)(unsigned long)(v3 >>> 0x40X) << 64), &aOffset);
    unsigned __int128 v46 = movhps((unsigned __int128)&NTI_rR5Bzr1D5krxoo1NcNyeMA_ | ((unsigned __int128)(unsigned long)(v45 >>> 0x40X) << 64), 4235732L);
    gvar_60E380 = v41;
    gvar_60E410 = v46;
    unsigned char v4 = movhps((unsigned __int128)&gvar_60E250 | ((unsigned __int128)(unsigned long)(v46 >>> 0x40X) << 64), &gvar_60E370);
    gvar_60E3A0 = 1;
    *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_9.6135 = v4;
    unsigned __int128 v47 = movhps((unsigned __int128)&gvar_60E3A0 | ((unsigned __int128)(unsigned long)(v4 >>> 0x40X) << 64), &gvar_60E3D0);
    gvar_60E3A8 = 16L;
    gvar_60D190 = v47;
    gvar_60EDF0 = 0L;
    unsigned __int128 v5 = movhps((unsigned __int128)&gvar_60E400 | ((unsigned __int128)(unsigned long)(v47 >>> 0x40X) << 64), &gvar_60E430);
    gvar_60EDE8 = 797;
    gvar_60D1A0 = v5;
    *(long*)&NTI_S9agCYBinaYZnGWcjTdxclg_ = 8;
    gvar_60E3D0 = 1;
    gvar_60E3D8 = 24L;
    gvar_60E3E0 = v53;
    gvar_60E400 = 1;
    gvar_60E408 = 32L;
    gvar_60ED70 = &NTI_mCkh9bHWX9bgGIYpwKekBD2Q_;
    *(long*)&NTI_pPliadsJkoxIPLiuFLcL3g_ = 248;
    gvar_60ED68 = 784;
    unsigned __int128 v48 = movhps((unsigned __int128)&NTI_uNps8ABY788DreuZn29bmIg_ | ((unsigned __int128)(unsigned long)(v5 >>> 0x40X) << 64), &aSons);
    gvar_6127C8 = 794;
    gvar_60E440 = v48;
    unsigned __int128 v32 = movhps((unsigned __int128)&NTI_mCkh9bHWX9bgGIYpwKekBD2Q_ | ((unsigned __int128)(unsigned long)(v48 >>> 0x40X) << 64), &aNode);
    gvar_6126E8 = 789;
    gvar_60E200 = v32;
    gvar_6126F0 = &NTI_pPliadsJkoxIPLiuFLcL3g_;
    unsigned __int128 v75 = movhps((unsigned __int128)&NTI_vr5DoT1jILTGdRlYv1OYpw_ | ((unsigned __int128)(unsigned long)(v32 >>> 0x40X) << 64), &aFinalizer);
    *(long*)&NTI_uNps8ABY788DreuZn29bmIg_ = 8;
    gvar_60E470 = v75;
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
    unsigned __int128 v33 = movhps((unsigned __int128)&NTI_ojoeKfW4VYIm36I9cpDTQIg_ | ((unsigned __int128)(unsigned long)(v75 >>> 0x40X) << 64), &aMarker);
    gvar_612668 = 793;
    gvar_60E4A0 = v33;
    unsigned __int128 v6 = movhps((unsigned __int128)&gvar_60E0A0 | ((unsigned __int128)(unsigned long)(v33 >>> 0x40X) << 64), &gvar_60E1C0);
    gvar_612428 = 793;
    gvar_60E830 = v6;
    unsigned __int128 v76 = movhps((unsigned __int128)&gvar_60E1F0 | ((unsigned __int128)(unsigned long)(v6 >>> 0x40X) << 64), &gvar_60E460);
    gvar_60E490 = 1;
    gvar_60E840 = v76;
    unsigned __int128 v30 = movhps((unsigned __int128)&gvar_60E490 | ((unsigned __int128)(unsigned long)(v76 >>> 0x40X) << 64), &gvar_60E4C0);
    gvar_60E498 = 40L;
    gvar_60E850 = v30;
    gvar_612430 = 0L;
    unsigned __int128 v77 = movhps((unsigned __int128)&NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_ | ((unsigned __int128)(unsigned long)(v30 >>> 0x40X) << 64), &aDeepcopy);
    *(long*)&NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_ = 8;
    gvar_60E4D0 = v77;
    gvar_60E4C0 = 1;
    gvar_60E4C8 = 48L;
    gvar_60D400 = 8L;
    TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141 = 2;
    gvar_60D408 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_2.6128;
    gvar_60EE98 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_0.6141;
    gvar_6124B0 = 0L;
    unsigned __int128 v34 = movhps(v19, &aParent);
    gvar_60E560 = v34;
    gvar_6124A8 = 0x111;
    unsigned __int128 v74 = movhps((unsigned __int128)&NTI_77mFvmsOLKik79ci2hXkHEg_ | ((unsigned __int128)(unsigned long)(v34 >>> 0x40X) << 64), 0x40a203L);
    gvar_60E5C0 = v74;
    unsigned __int128 v49 = movhps(v84, &aProcname);
    gvar_6125E8 = 540;
    gvar_60E650 = v49;
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
    gvar_60E590 = v53;
    gvar_6125F0 = 0L;
    *(long*)&NTI_77mFvmsOLKik79ci2hXkHEg_ = 8;
    gvar_60E5B0 = 1;
    gvar_60E5B8 = 24L;
    gvar_60ECF0 = 0L;
    *(long*)&NTI_oLyohQ7O2XOvGnflOss8EA_ = 24;
    gvar_60ECE8 = 786;
    gvar_60E640 = 1;
    gvar_60E648 = 0L;
    unsigned char v7 = movhps((unsigned __int128)&gvar_60E640 | ((unsigned __int128)(unsigned long)(v49 >>> 0x40X) << 64), &gvar_60E670);
    unsigned __int128 v78 = movhps(v84, &aFilename);
    *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_16.6140 = v7;
    unsigned __int128 v50 = movhps((unsigned __int128)&NTI_rR5Bzr1D5krxoo1NcNyeMA_ | ((unsigned __int128)(unsigned long)(v7 >>> 0x40X) << 64), &aLine);
    gvar_60E670 = 1;
    gvar_60E680 = v50;
    gvar_60E678 = 8L;
    unsigned __int128 v35 = movhps((unsigned __int128)&NTI_uB9b75OUPRENsBAu4AnoePA_ | ((unsigned __int128)(unsigned long)(v50 >>> 0x40X) << 64), &aTrace);
    gvar_60D110 = &gvar_60E6A0;
    gvar_60E6A0 = 1;
    gvar_60E6A8 = 16L;
    gvar_60E6B0 = v78;
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
    gvar_60E5F0 = v35;
    gvar_612470 = 0L;
    *(long*)&NTI_hMQEc0FMry7Up7EoPki79aA_ = 8;
    gvar_612468 = 808;
    gvar_60E6D0 = 1;
    gvar_60E6D8 = 40L;
    unsigned __int128 v67 = movhps(v19, 0x40a22dL);
    unsigned __int128 v36 = movhps((unsigned __int128)&NTI_hMQEc0FMry7Up7EoPki79aA_ | ((unsigned __int128)(unsigned long)(v35 >>> 0x40X) << 64), &aRaise_id);
    gvar_60EE30 = (unsigned long)v73;
    gvar_60E6E0 = v36;
    unsigned char v79 = movhps((unsigned __int128)&gvar_60E550 | ((unsigned __int128)(unsigned long)(v36 >>> 0x40X) << 64), &gvar_60E580);
    gvar_60E700 = 1;
    *(__int128*)&TM_Q5wkpxktOdTGvlSRo9bzt9aw_15.6139 = v79;
    unsigned __int128 v80 = movhps((unsigned __int128)&gvar_60E5B0 | ((unsigned __int128)(unsigned long)(v79 >>> 0x40X) << 64), &gvar_60E5E0);
    gvar_60E708 = 48L;
    gvar_60D130 = v80;
    unsigned __int128 v37 = movhps((unsigned __int128)&gvar_60E6D0 | ((unsigned __int128)(unsigned long)(v80 >>> 0x40X) << 64), &gvar_60E700);
    gvar_60E710 = v67;
    gvar_60D140 = v37;
    gvar_60E540 = 6L;
    unsigned __int128 v81 = movhps((unsigned __int128)&NTI_ytyiCJqK439aF9cIibuRVpAg_ | ((unsigned __int128)(unsigned long)(v37 >>> 0x40X) << 64), &gvar_60E520);
    gvar_60E520 = 2;
    gvar_612730 = v81;
    gvar_60E548 = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_15.6139;
    *(long*)&NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_ = 8;
    gvar_60EE28 = 22;
    gvar_60EE48 = &Marker_tyRef_vU9aO9cTqOMn6CBzhV8rX7Sw;
    *(long*)&NTI_qrLSDoe2oBoAqNtJ9badtnA_ = 56;
    gvar_60EDA8 = 17;
    gvar_60E750 = 0L;
    unsigned __int128 v38 = movhps(v73, &gvar_60E730);
    unsigned __int128 v29 = movhps(v73, &gvar_60E790);
    gvar_60EDB0 = v38;
    unsigned __int128 v82 = movhps((unsigned __int128)&NTI_qrLSDoe2oBoAqNtJ9badtnA_ | ((unsigned __int128)(unsigned long)(v38 >>> 0x40X) << 64), &gvar_60E760);
    gvar_60E730 = 2;
    gvar_612630 = v82;
    *(long*)&NTI_iLZrPn9anoh9ad1MmO0RczFw_ = 56;
    unsigned __int128 v39 = movhps((unsigned __int128)&NTI_LbeSGvgPzGzXnW9caIkJqMA_ | ((unsigned __int128)(unsigned long)(v82 >>> 0x40X) << 64), &gvar_60E7C0);
    gvar_612628 = 17;
    gvar_60EF10 = v39;
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
    gvar_60EF70 = v29;
    *(long*)&NTI_vyjC2ukVFYc78nQPrSCc9bA_ = 56;
    gvar_60EF08 = 17;
    gvar_60E7E0 = 0L;
    gvar_60E7C0 = 2;
    *(long*)&NTI_KGSY1JdrNB7Xi8KDhXFhSg_ = 56;
    gvar_612808 = 17;
    gvar_60E810 = 0L;
    gvar_60E7F0 = 2;
    *(long*)&NTI_LEclZrWX2FQAodlapxGITw_ = 8;
    unsigned __int128 v83 = movhps((unsigned __int128)&NTI_iLZrPn9anoh9ad1MmO0RczFw_ | ((unsigned __int128)(unsigned long)(v39 >>> 0x40X) << 64), &gvar_60E7F0);
    gvar_612528 = 22;
    gvar_612810 = v83;
    gvar_612530 = &NTI_KGSY1JdrNB7Xi8KDhXFhSg_;
    gvar_612548 = &Marker_tyRef_LEclZrWX2FQAodlapxGITw;
    return 786L;
}

// Stale decompilation - Refresh this view to re-decompile this code
__sighandler_t systemInit000() {
    long v0;
    long v1 = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
    if(v1 > 3499L) {
        /*NO_RETURN*/ nimRegisterThreadLocalMarker.part.14();
    }
    *(long*)(v1 * 8L + (long)&threadLocalMarkers_pC47Nqd8F629cuTchphM5YA) = &TM_Q5wkpxktOdTGvlSRo9bzt9aw_17;
    threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw = (unsigned long)(v1 + 1L);
    nimvm_IAxmsqnME4Jmed24hOgrFQ = 0;
    genericReset(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, &NTI_TuG1vdYwChKtx4TOkRnAjw_);
    gvar_6126A8 = 540;
    *(long*)&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg = 8;
    nimGC_setStackBottom(&v0);
    initGC_njssp69aa7hvxte9bJ8uuDcg();
    →signal(2, (__sighandler_t)&signalHandler);
    →signal(11, (__sighandler_t)&signalHandler);
    →signal(6, (__sighandler_t)&signalHandler);
    →signal(8, (__sighandler_t)&signalHandler);
    →signal(4, (__sighandler_t)&signalHandler);
    →signal(11, (__sighandler_t)&signalHandler);
    return →signal(13, (__sighandler_t)&signalHandler);
}

// Stale decompilation - Refresh this view to re-decompile this code
__int128* toNimStr(void* param0, long param1) {
    __int128 v0;
    long v1;
    long v2;
    __int128 v3;
    void* __src;
    long v4 = v1;
    long v5 = v2;
    __int128* result = (__int128*)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(&strDesc_D0UzA4zsDu5tgpJQ9a9clXPg, (param1 < 7L ? 7L: param1) + 17L, &gch_IcYaEuuWivYAS86vFMTS3Q);
    long v6 = param1 < 7L ? 7L: param1;
    __int128 v0 = movhps((unsigned __int128)param1 | ((unsigned __int128)(unsigned long)(v3 >>> 0x40X) << 64), v6);
    *result = v0;
    →memcpy((void*)(result + 1), __src, (size_t)(param1 + 1L));
    return result;
}

long unmarkStackAndRegisters_zoTIuavlrCHyw3B8MBaLJA_6(long param0) {
    long v0;
    long v1 = v0;
    long result = *(long*)(param0 + 40L);
    unsigned long* ptr0 = *(unsigned long*)(param0 + 56L);
    long* ptr1 = (long*)(result * 8L + (long)ptr0);
    if(result > 0L) {
        do {
            long* ptr2 = *ptr0;
            result = ptr2[0] - 8L;
            ptr2[0] -= 8L;
            if((unsigned long)result <= 7L) {
                result = addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, ptr2);
            }
            ++ptr0;
        }
        while(ptr0 != ptr1);
    }
    *(long*)(param0 + 40L) = 0L;
    return result;
}

long unsureAsgnRef(unsigned long param0, long param1) {
    long v0;
    long v1;
    long v2 = v0;
    long result = isOnStack_dJJW59cIgsBmT59aZrOM71Mg(param0);
    if(!(unsigned char)result) {
        if(v1) {
            *(long*)(v1 - 16L) = *(long*)(v1 - 16L) + 8L;
        }
        result = *(long*)param0;
        if((unsigned long)result > 0xfffL) {
            unsigned long v3 = (unsigned long)(*(long*)(result - 16L) - 8L);
            *(unsigned long*)(result - 16L) = (unsigned long)(*(long*)(result - 16L) - 8L);
            if(v3 <= 7L) {
                result = addZCT_fCDI7oO1NNVXXURtxSzsRw((long*)&gvar_60F010, (long*)(result - 16L));
                *(long*)param0 = v1;
                return result;
            }
        }
    }
    *(long*)param0 = v1;
    return result;
}

int writeToStdErr_7HRVfGfZT2rSmBdcLxl8TA(char* __s) {
    long* ptr0;
    FILE* __stream = stderr;
    →fputs(__s, __stream);
    int result = →ferror(__stream);
    if((unsigned int)result) {
        →clearerr(__stream);
        /*NO_RETURN*/ raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22, ptr0);
    }
    return result;
}

int write_ADGLlEJAOtGNWWur8rrJfg(FILE* __stream, char* __s) {
    →fputs(__s, __stream);
    int result = →ferror(__stream);
    if((unsigned int)result) {
        →clearerr(__stream);
        /*NO_RETURN*/ raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22, (long*)__s);
    }
    return result;
}
