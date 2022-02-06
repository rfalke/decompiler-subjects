
long main() {
    char* ptr0;
    long v0;
    long v1;
    char v2;
    long v3;
    char v4;
    long v5;
    char v6;
    long v7;
    char v8;
    long v9;
    char v10;
    long v11;
    char v12;
    long v13;
    char v14;
    long v15;
    char v16;
    char v17;
    long v18;
    long v19;
    long v20;
    long v21;
    long v22;
    unsigned char v23;
    long v24;
    long v25;
    long v26;
    long v27;
    long v28;
    int v29;
    int v30;
    int v31;
    int v32;
    long v33 = &buf;
    unsigned long v34 = 1L;
    void* ptr1 = (void*)0x40407E;
    unsigned long v35 = 0L;
    char* ptr2 = (char*)&gvar_41509B;
    long v36 = &buf;
    long v37 = &buf;
    long v38 = &buf;
    long v39 = &buf;
    long v40 = &buf;
    long v41 = &buf;
    long v42 = &buf;
    long v43 = &buf;
    long v44 = &buf;
    long v45 = &buf;
    long v46 = &buf;
    long v47 = &buf;
    unsigned long v48 = 1L;
    do {
        unsigned long v49 = v48;
        long v50 = v49 + 2L;
        long v51 = v49 + 1L;
        long v52 = v50;
        long v53 = v50;
        long v54 = v50;
        long v55 = v50;
        long v56 = v51;
        long v57 = v51;
        long v58 = v51;
        long v59 = v51;
        long v60 = v51;
        unsigned long v61 = v49;
        unsigned long v62 = v49;
        →sprintf((char*)&buf, "Buzz\n%llu1\nFizz\n%llu3\n%llu4\nFizzBuzz\n%llu6\n%llu7\nFizz\n%llu9\nBuzz\nFizz\n%llu2\n%llu3\nFizz\nBuzz\n%llu6\nFizz\n%llu8\n%llu9\nFizzBuzz\n%llu1\n%llu2\nFizz\n%llu4\nBuzz\nFizz\n%llu7\n%llu8\nFizz\n");
        unsigned long v63 = v49 * 10L;
        unsigned long v64 = v49 * 10L;
        v48 = v63;
        if(v63 > v34) {
            long v65 = v39;
            long v66 = v40;
            size_t v67 = (size_t)v32;
            long v68 = v43;
            long v69 = v44;
            char* ptr3 = (char*)(v65 + 51L);
            char* ptr4 = (char*)(v35 * 8L + &gvar_4150B6);
            char* ptr5 = (char*)(v66 + 67L);
            long v70 = v41;
            char* ptr6 = ptr5;
            char* ptr7 = (char*)(v70 + 75L);
            long v71 = v42;
            char* ptr8 = ptr7;
            char* ptr9 = (char*)(v71 + 78L);
            char* ptr10 = (char*)(v69 + 93L);
            long v72 = v46;
            char* ptr11 = ptr9;
            char* ptr12 = (char*)(v68 + 90L);
            long v73 = v45;
            char* ptr13 = ptr10;
            char* ptr14 = ptr12;
            char* ptr15 = (char*)(v72 + 114L);
            char* ptr16 = (char*)(v73 + 101L);
            long v74 = v47;
            char* ptr17 = ptr15;
            char* ptr18 = ptr16;
            char* ptr19 = (char*)(v74 + 117L);
        loc_401379:
            do {
                void* __dest = ptr1;
                size_t __n = v67;
                ptr1 = (void*)(v67 + (long)ptr1);
                →memcpy(__dest, (void*)&buf, __n);
                if((unsigned long)ptr1 >= 0x414060L) {
                    void* ptr20 = (void*)&out;
                loc_4013A5:
                    do {
                        void* __buf = ptr20;
                        size_t __n1 = (size_t)(0x414060L - (long)ptr20);
                        →write(1L, __buf, __n1);
                        if(!(v30 ? 0: 1) && v31 >= 0) {
                            ptr20 = (void*)((long)v29 + (long)ptr20);
                            if((unsigned long)ptr20 < 0x414060L) {
                                goto loc_4013A5;
                            }
                            else {
                                break;
                            }
                        }
                    }
                    while((unsigned long)ptr20 < 0x414060L);
                    void* ptr21 = ptr1;
                    ptr1 = (void*)((long)ptr1 - 0x10000L);
                    →memcpy((void*)&out, (void*)0x414060, (size_t)((long)ptr21 - 0x414060L));
                    v28 = (unsigned long)*(unsigned char*)((long)&gvar_415085 + v35);
                    if((char)*(unsigned char*)((long)&gvar_415085 + v35) <= 54) {
                        goto loc_401200;
                    }
                    else {
                        goto loc_4013FB;
                    }
                }
                else {
                    v28 = (unsigned long)*(unsigned char*)((long)&gvar_415085 + v35);
                    if((char)*(unsigned char*)((long)&gvar_415085 + v35) <= 54) {
                    loc_401200:
                        v27 = v36;
                        *(unsigned char*)((long)&gvar_415085 + v35) = (unsigned char)((unsigned char)v28 + 3);
                        v26 = (unsigned long)*(char*)(v27 + 13L);
                        if(*(char*)(v27 + 13L) > 54) {
                            goto loc_401446;
                        }
                        else {
                            goto loc_40121E;
                        }
                    }
                    else {
                    loc_4013FB:
                        int v75 = (unsigned int)v28 - 7;
                        char* ptr22 = (char*)(v35 + &gvar_415084);
                        *(unsigned char*)((long)&gvar_415085 + v35) = (unsigned char)v75;
                        unsigned char v76 = *(unsigned char*)((long)&gvar_415084 + v35);
                        if(*(unsigned char*)((long)&gvar_415084 + v35) == 57) {
                            do {
                                v76 = *(unsigned char*)(ptr22 - 1L);
                                --ptr22;
                                *(ptr22 + 1L) = 48;
                            }
                            while(v76 == 57);
                        }
                        *ptr22 = v76 + 1;
                        v27 = v36;
                        v26 = (unsigned long)*(char*)(v27 + 13L);
                    }
                    if(*(char*)(v27 + 13L) > 54) {
                    loc_401446:
                        long v77 = v27;
                        int v78 = (unsigned int)v26 - 7;
                        char* ptr23 = (char*)(v27 + 12L);
                        *(char*)(v77 + 13L) = (unsigned char)v78;
                        char v79 = *(char*)(v77 + 12L);
                        if(*(char*)(v77 + 12L) == 57) {
                            do {
                                v79 = *(ptr23 - 1L);
                                --ptr23;
                                *(ptr23 + 1L) = 48;
                            }
                            while(v79 == 57);
                        }
                        *ptr23 = v79 + 1;
                        v25 = v37;
                        v24 = (unsigned long)*(char*)(v25 + 16L);
                        if(*(char*)(v25 + 16L) <= 54) {
                            goto loc_401236;
                        }
                        else {
                            goto loc_401486;
                        }
                    }
                    else {
                    loc_40121E:
                        *(char*)(v27 + 13L) = (unsigned char)v26 + 3;
                        v25 = v37;
                        v24 = (unsigned long)*(char*)(v25 + 16L);
                    }
                    if(*(char*)(v25 + 16L) <= 54) {
                    loc_401236:
                        *(char*)(v25 + 16L) = (unsigned char)v24 + 3;
                        v23 = *(unsigned char*)(v35 * 4L + (long)&gvar_41509C);
                        if(*(unsigned char*)(v35 * 4L + (long)&gvar_41509C) != 54 && (char)v23 >= 54) {
                            goto loc_4014C5;
                        }
                        else {
                            goto loc_40124D;
                        }
                    }
                    else {
                    loc_401486:
                        long v80 = v25;
                        int v81 = (unsigned int)v24 - 7;
                        char* ptr24 = (char*)(v25 + 15L);
                        *(char*)(v80 + 16L) = (unsigned char)v81;
                        char v82 = *(char*)(v80 + 15L);
                        if(*(char*)(v80 + 15L) == 57) {
                            do {
                                v82 = *(ptr24 - 1L);
                                --ptr24;
                                *(ptr24 + 1L) = 48;
                            }
                            while(v82 == 57);
                        }
                        *ptr24 = v82 + 1;
                        v23 = *(unsigned char*)(v35 * 4L + (long)&gvar_41509C);
                    }
                    if(*(unsigned char*)(v35 * 4L + (long)&gvar_41509C) != 54 && (char)v23 >= 54) {
                    loc_4014C5:
                        char* ptr25 = ptr2;
                        *(unsigned char*)(v35 * 4L + (long)&gvar_41509C) = v23 - 7;
                        char v83 = *ptr25;
                        char* ptr26 = ptr25;
                        while(v83 == 57) {
                            v83 = *(ptr26 - 1L);
                            --ptr26;
                            *(ptr26 + 1L) = 48;
                        }
                        *ptr26 = v83 + 1;
                        v22 = (unsigned long)*(char*)(v33 + 31L);
                        if(*(char*)(v33 + 31L) <= 54) {
                            goto loc_401262;
                        }
                        else {
                            goto loc_401502;
                        }
                    }
                    else {
                    loc_40124D:
                        *(unsigned char*)(v35 * 4L + (long)&gvar_41509C) = v23 + 3;
                        v22 = (unsigned long)*(char*)(v33 + 31L);
                    }
                    if(*(char*)(v33 + 31L) <= 54) {
                    loc_401262:
                        v21 = v38;
                        *(char*)(v33 + 31L) = (unsigned char)v22 + 3;
                        v20 = (unsigned long)*(char*)(v21 + 39L);
                        if(*(char*)(v21 + 39L) > 54) {
                            goto loc_401546;
                        }
                        else {
                            goto loc_40127B;
                        }
                    }
                    else {
                    loc_401502:
                        int v84 = (unsigned int)v22 - 7;
                        char* ptr27 = (char*)(v33 + 30L);
                        *(char*)(v33 + 31L) = (unsigned char)v84;
                        char v85 = *(char*)(v33 + 30L);
                        if(*(char*)(v33 + 30L) == 57) {
                            do {
                                v85 = *(ptr27 - 1L);
                                --ptr27;
                                *(ptr27 + 1L) = 48;
                            }
                            while(v85 == 57);
                        }
                        *ptr27 = v85 + 1;
                        v21 = v38;
                        v20 = (unsigned long)*(char*)(v21 + 39L);
                    }
                    if(*(char*)(v21 + 39L) > 54) {
                    loc_401546:
                        long v86 = v21;
                        int v87 = (unsigned int)v20 - 7;
                        char* ptr28 = (char*)(v21 + 38L);
                        *(char*)(v86 + 39L) = (unsigned char)v87;
                        long v88 = (unsigned long)*(char*)(v86 + 38L);
                        if(*(char*)(v86 + 38L) == 57) {
                            do {
                                v88 = (unsigned long)*(ptr28 - 1L);
                                --ptr28;
                                *(ptr28 + 1L) = 48;
                            }
                            while((unsigned char)v88 == 57);
                        }
                        v19 = v39;
                        v18 = (unsigned long)((unsigned int)v88 + 1);
                        *ptr28 = (unsigned char)v18;
                        v17 = *(char*)(v19 + 52L);
                        if(*(char*)(v19 + 52L) == 54 || v17 < 54) {
                            goto loc_401295;
                        }
                        else {
                            goto loc_401585;
                        }
                    }
                    else {
                    loc_40127B:
                        v19 = v39;
                        v18 = (unsigned long)((unsigned int)v20 + 3);
                        *(char*)(v21 + 39L) = (unsigned char)v18;
                        v17 = *(char*)(v19 + 52L);
                    }
                    if((*(char*)(v19 + 52L) == 54 || v17 < 54)) {
                    loc_401295:
                        *(char*)(v19 + 52L) = v17 + 3;
                        v16 = *(char*)((char*)(v35 * 8L + (long)&gvar_4150B6) + 1L);
                        if(*(char*)((char*)(v35 * 8L + (long)&gvar_4150B6) + 1L) != 54 && v16 >= 54) {
                            goto loc_4015C4;
                        }
                        else {
                            goto loc_4012A8;
                        }
                    }
                    else {
                    loc_401585:
                        long v89 = (unsigned long)*(char*)(v19 + 51L);
                        *(char*)(v19 + 52L) = v17 - 7;
                        char* ptr29 = ptr3;
                        while((unsigned char)v89 == 57) {
                            v89 = (unsigned long)*(ptr29 - 1L);
                            --ptr29;
                            *(ptr29 + 1L) = 48;
                        }
                        v18 = (unsigned long)((unsigned int)v89 + 1);
                        *ptr29 = (unsigned char)v18;
                        v16 = *(char*)((char*)(v35 * 8L + (long)&gvar_4150B6) + 1L);
                    }
                    if(*(char*)((char*)(v35 * 8L + (long)&gvar_4150B6) + 1L) != 54 && v16 >= 54) {
                    loc_4015C4:
                        long v90 = (unsigned long)*(char*)(v35 * 8L + (long)&gvar_4150B6);
                        *(char*)((char*)(v35 * 8L + (long)&gvar_4150B6) + 1L) = v16 - 7;
                        char* ptr30 = ptr4;
                        while((unsigned char)v90 == 57) {
                            v90 = (unsigned long)*(ptr30 - 1L);
                            --ptr30;
                            *(ptr30 + 1L) = 48;
                        }
                        v15 = v40;
                        v18 = (unsigned long)((unsigned int)v90 + 1);
                        *ptr30 = (unsigned char)v18;
                        v14 = *(char*)(v15 + 68L);
                        if(*(char*)(v15 + 68L) == 54 || v14 < 54) {
                            goto loc_4012C3;
                        }
                        else {
                            goto loc_401615;
                        }
                    }
                    else {
                    loc_4012A8:
                        v15 = v40;
                        *(char*)((char*)(v35 * 8L + (long)&gvar_4150B6) + 1L) = v16 + 3;
                        v14 = *(char*)(v15 + 68L);
                    }
                    if((*(char*)(v15 + 68L) == 54 || v14 < 54)) {
                    loc_4012C3:
                        v13 = v41;
                        *(char*)(v15 + 68L) = v14 + 3;
                        v12 = *(char*)(v13 + 76L);
                        if(*(char*)(v13 + 76L) != 54 && v12 >= 54) {
                            goto loc_401655;
                        }
                        else {
                            goto loc_4012DA;
                        }
                    }
                    else {
                    loc_401615:
                        long v91 = (unsigned long)*(char*)(v15 + 67L);
                        *(char*)(v15 + 68L) = v14 - 7;
                        char* ptr31 = ptr6;
                        while((unsigned char)v91 == 57) {
                            v91 = (unsigned long)*(ptr31 - 1L);
                            --ptr31;
                            *(ptr31 + 1L) = 48;
                        }
                        v13 = v41;
                        v18 = (unsigned long)((unsigned int)v91 + 1);
                        *ptr31 = (unsigned char)v18;
                        v12 = *(char*)(v13 + 76L);
                    }
                    if(*(char*)(v13 + 76L) != 54 && v12 >= 54) {
                    loc_401655:
                        long v92 = (unsigned long)*(char*)(v13 + 75L);
                        *(char*)(v13 + 76L) = v12 - 7;
                        char* ptr32 = ptr8;
                        while((unsigned char)v92 == 57) {
                            v92 = (unsigned long)*(ptr32 - 1L);
                            --ptr32;
                            *(ptr32 + 1L) = 48;
                        }
                        v11 = v42;
                        v18 = (unsigned long)((unsigned int)v92 + 1);
                        *ptr32 = (unsigned char)v18;
                        v10 = *(char*)(v11 + 79L);
                        if(*(char*)(v11 + 79L) == 54 || v10 < 54) {
                            goto loc_4012F1;
                        }
                        else {
                            goto loc_401695;
                        }
                    }
                    else {
                    loc_4012DA:
                        v11 = v42;
                        *(char*)(v13 + 76L) = v12 + 3;
                        v10 = *(char*)(v11 + 79L);
                    }
                    if((*(char*)(v11 + 79L) == 54 || v10 < 54)) {
                    loc_4012F1:
                        v9 = v43;
                        *(char*)(v11 + 79L) = v10 + 3;
                        v8 = *(char*)(v9 + 91L);
                        if(*(char*)(v9 + 91L) != 54 && v8 >= 54) {
                            goto loc_4016D5;
                        }
                        else {
                            goto loc_401308;
                        }
                    }
                    else {
                    loc_401695:
                        long v93 = (unsigned long)*(char*)(v11 + 78L);
                        *(char*)(v11 + 79L) = v10 - 7;
                        char* ptr33 = ptr11;
                        while((unsigned char)v93 == 57) {
                            v93 = (unsigned long)*(ptr33 - 1L);
                            --ptr33;
                            *(ptr33 + 1L) = 48;
                        }
                        v9 = v43;
                        v18 = (unsigned long)((unsigned int)v93 + 1);
                        *ptr33 = (unsigned char)v18;
                        v8 = *(char*)(v9 + 91L);
                    }
                    if(*(char*)(v9 + 91L) != 54 && v8 >= 54) {
                    loc_4016D5:
                        long v94 = (unsigned long)*(char*)(v9 + 90L);
                        *(char*)(v9 + 91L) = v8 - 7;
                        char* ptr34 = ptr14;
                        while((unsigned char)v94 == 57) {
                            v94 = (unsigned long)*(ptr34 - 1L);
                            --ptr34;
                            *(ptr34 + 1L) = 48;
                        }
                        v7 = v44;
                        v18 = (unsigned long)((unsigned int)v94 + 1);
                        *ptr34 = (unsigned char)v18;
                        v6 = *(char*)(v7 + 94L);
                        if(*(char*)(v7 + 94L) == 54 || v6 < 54) {
                            goto loc_40131F;
                        }
                        else {
                            goto loc_401715;
                        }
                    }
                    else {
                    loc_401308:
                        v7 = v44;
                        *(char*)(v9 + 91L) = v8 + 3;
                        v6 = *(char*)(v7 + 94L);
                    }
                    if((*(char*)(v7 + 94L) == 54 || v6 < 54)) {
                    loc_40131F:
                        v5 = v45;
                        *(char*)(v7 + 94L) = v6 + 3;
                        v4 = *(char*)(v5 + 102L);
                        if(*(char*)(v5 + 102L) != 54 && v4 >= 54) {
                            goto loc_401755;
                        }
                        else {
                            goto loc_401336;
                        }
                    }
                    else {
                    loc_401715:
                        long v95 = (unsigned long)*(char*)(v7 + 93L);
                        *(char*)(v7 + 94L) = v6 - 7;
                        char* ptr35 = ptr13;
                        while((unsigned char)v95 == 57) {
                            v95 = (unsigned long)*(ptr35 - 1L);
                            --ptr35;
                            *(ptr35 + 1L) = 48;
                        }
                        v5 = v45;
                        *ptr35 = (unsigned char)v95 + 1;
                        v4 = *(char*)(v5 + 102L);
                    }
                    if(*(char*)(v5 + 102L) != 54 && v4 >= 54) {
                    loc_401755:
                        char v96 = *(char*)(v5 + 101L);
                        *(char*)(v5 + 102L) = v4 - 7;
                        char* ptr36 = ptr18;
                        while(v96 == 57) {
                            v96 = *(ptr36 - 1L);
                            --ptr36;
                            *(ptr36 + 1L) = 48;
                        }
                        v3 = v46;
                        *ptr36 = v96 + 1;
                        v2 = *(char*)(v3 + 115L);
                        if(*(char*)(v3 + 115L) == 54 || v2 < 54) {
                            goto loc_40134D;
                        }
                        else {
                            goto loc_401795;
                        }
                    }
                    else {
                    loc_401336:
                        v3 = v46;
                        *(char*)(v5 + 102L) = v4 + 3;
                        v2 = *(char*)(v3 + 115L);
                    }
                    if((*(char*)(v3 + 115L) == 54 || v2 < 54)) {
                    loc_40134D:
                        v1 = v47;
                        *(char*)(v3 + 115L) = v2 + 3;
                        v0 = (unsigned long)*(char*)(v1 + 118L);
                        if(*(char*)(v1 + 118L) > 54) {
                            goto loc_4017D5;
                        }
                        else {
                            goto loc_401364;
                        }
                    }
                    else {
                    loc_401795:
                        char v97 = *(char*)(v3 + 114L);
                        *(char*)(v3 + 115L) = v2 - 7;
                        char* ptr37 = ptr17;
                        while(v97 == 57) {
                            v97 = *(ptr37 - 1L);
                            --ptr37;
                            *(ptr37 + 1L) = 48;
                        }
                        v1 = v47;
                        *ptr37 = v97 + 1;
                        v0 = (unsigned long)*(char*)(v1 + 118L);
                    }
                    if(*(char*)(v1 + 118L) > 54) {
                    loc_4017D5:
                        char v98 = *(char*)(v1 + 117L);
                        *(char*)(v1 + 118L) = (unsigned char)v0 - 7;
                        ptr0 = ptr19;
                        while(v98 == 57) {
                            v98 = *(ptr0 - 1L);
                            --ptr0;
                            *(ptr0 + 1L) = 48;
                        }
                        v34 += 3L;
                        *ptr0 = v98 + 1;
                        if(v34 < v64) {
                            goto loc_401379;
                        }
                        else {
                            break;
                        }
                    }
                    else {
                    loc_401364:
                        ptr0 = (char*)((unsigned int)v0 + 3);
                        v34 += 3L;
                        *(char*)(v1 + 118L) = (unsigned char)ptr0;
                    }
                }
            }
            while(v34 < v64);
        }
        ++v35;
        v47 += 16L;
        v33 += 5L;
        v46 += 15L;
        v45 += 14L;
        v44 += 13L;
        v43 += 12L;
        v42 += 11L;
        v41 += 10L;
        v40 += 9L;
        v39 += 7L;
        v38 += 6L;
        ptr2 += 4L;
        v37 += 3L;
        v36 += 2L;
    }
    while(v35 != 19L);
    return 0L;
}

long sub_401026() {
    return gvar_404010();
}

long sub_4018FD() {
    return 0L;
}

long sub_40193F() {
    return 0L;
}

long sub_40196D() {
    long result = deregister_tm_clones();
    completed.0 = 1;
    return result;
}

void sub_401980() {
}
