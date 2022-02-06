
int start(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    char v3;
    int v4;
    int v5;
    char v6;
    int v7 = v5;
    int* ptr0 = &param0;
    int v8 = v7;
    int v9 = v7 - 1;
    char v10 = v9 ? 0: 1;
    char v11 = v9 < 0;
    char v12 = __parity__((unsigned char)v9);
    char v13 = ((~v9 ^ ~v8) >>> 4) & 0x1;
    char v14 = (int)(int*)((int)(int*)(v9 ^ v8) & v8) < 0;
    if(!v10) {
        int v15 = param0;
        ptr0 = &param1;
        do {
            v9 = (unsigned int)*(char*)v15 | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
            ++v15;
            v6 = (unsigned char)v9 ? 0: 1;
            char v16 = (v9 >>> 7) & 0x1;
            char v17 = __parity__((unsigned char)v9);
            char v18 = 0;
            char v19 = 0;
        }
        while(!v6);
        int v20 = v15;
        int v21 = 493;
        int v22 = 0;
        char v23 = 1;
        char v24 = 0;
        char v25 = 1;
        char v26 = 0;
        char v27 = 0;
    loc_8048066:
        while(1) {
            v4 = *ptr0;
            char v28 = *(short*)v4 == 28717;
            char v29 = *(short*)v4 < 28717;
            char v30 = __parity__((unsigned char)*(short*)v4 - 45);
            char v31 = *(unsigned short*)v4 < 28717;
            char v32 = (((*(short*)v4 - 28717) ^ *(short*)v4) & (*(short*)v4 ^ 0x702d)) < 0;
            char v33 = (((*(short*)v4 - 28717) ^ (*(short*)v4 ^ 0x702d)) >>> 4) & 0x1;
            if(!v28) {
                break;
            }
            else {
                v8 = v22;
                ++v22;
                char v34 = v22 ? 0: 1;
                char v35 = v22 < 0;
                char v36 = __parity__((unsigned char)v22);
                char v37 = (int*)((int)(int*)((int)(int*)((int)(int*)(v8 ^ 0x1) ^ v22) >>> 4) & 0x1);
                char v38 = (int)(int*)((int)(int*)(v22 ^ v8) & (int*)~(int)(int*)(v8 ^ 0x1)) < 0;
                int v39 = *ptr0;
                ++ptr0;
            }
        }
        char v40 = *(short*)v4 == 0x6d2d;
        char v41 = *(short*)v4 < 0x6d2d;
        char v42 = __parity__((unsigned char)*(short*)v4 - 45);
        char v43 = *(unsigned short*)v4 < 0x6d2d;
        char v44 = (((*(short*)v4 - 0x6d2d) ^ *(short*)v4) & (*(short*)v4 ^ 0x6d2d)) < 0;
        v13 = (((*(short*)v4 - 0x6d2d) ^ (*(short*)v4 ^ 0x6d2d)) >>> 4) & 0x1;
        if(v40) {
            int v45 = *ptr0;
            ++ptr0;
            int v46 = *ptr0;
            ++ptr0;
            v4 = v46;
            v10 = v4 ? 0: 1;
            v11 = v4 < 0;
            v12 = __parity__((unsigned char)v4);
            v14 = 0;
            v3 = 0;
            if(!v10) {
                v2 = v4;
                v21 = 0;
                v9 = 0;
                char v47 = 1;
                char v48 = 0;
                char v49 = 1;
                char v50 = 0;
                char v51 = 0;
                --ptr0;
                *ptr0 = 8;
                int v52 = 8;
                ++ptr0;
                while(1) {
                    unsigned char v53 = *(unsigned char*)v4;
                    v21 = (unsigned int)(*(char*)v4 - 48) | ((unsigned int)((v21 >>> 8) & 0xffffff) << 8);
                    char v54 = *(char*)v4 == 48;
                    char v55 = (v21 >>> 7) & 0x1;
                    char v56 = __parity__((unsigned char)v21);
                    char v57 = (((v53 ^ 0x30) ^ (unsigned char)v21) >>> 4) & 0x1;
                    char v58 = v53 < 48;
                    char v59 = (((unsigned char)v21 ^ v53) & (v53 ^ 0x30)) < 0;
                    if(v58) {
                        break;
                    }
                    else {
                        char v60 = (unsigned char)v21 == 7;
                        char v61 = (unsigned char)v21 < 7;
                        char v62 = __parity__((unsigned char)v21 - 7);
                        char v63 = (unsigned char)v21 < 7;
                        char v64 = ((((unsigned char)v21 - 7) ^ (unsigned char)v21) & ((unsigned char)v21 ^ 0x7)) < 0;
                        char v65 = ((((unsigned char)v21 - 7) ^ ((unsigned char)v21 ^ 0x7)) >>> 4) & 0x1;
                        if(!v63 && !v60) {
                            break;
                        }
                        else {
                            v9 = (unsigned int)((unsigned short)(unsigned char)v9 * 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                            int v66 = v9;
                            v9 += v21;
                            char v67 = v9 ? 0: 1;
                            char v68 = v9 < 0;
                            char v69 = __parity__((unsigned char)v9);
                            char v70 = (((v21 ^ v66) ^ v9) >>> 4) & 0x1;
                            char v71 = __carry__(v21, v66);
                            char v72 = ((v9 ^ v66) & ~(v21 ^ v66)) < 0;
                            v8 = v4;
                            ++v4;
                            char v73 = v4 ? 0: 1;
                            char v74 = v4 < 0;
                            char v75 = __parity__((unsigned char)v4);
                            char v76 = (int*)((int)(int*)((int)(int*)((int)(int*)(v8 ^ 0x1) ^ v4) >>> 4) & 0x1);
                            char v77 = (int)(int*)((int)(int*)(v4 ^ v8) & (int*)~(int)(int*)(v8 ^ 0x1)) < 0;
                        }
                    }
                }
                v10 = v2 == v4;
                v11 = v2 < v4;
                v12 = __parity__((unsigned char)v2 - (unsigned char)v4);
                v3 = (unsigned int)v2 < (unsigned int)v4;
                v14 = (int)(int*)((int)(int*)((int)(int*)(v2 - v4) ^ v2) & (int)(int*)(v2 ^ v4)) < 0;
                v13 = (int*)((int)(int*)((int)(int*)((int)(int*)(v2 - v4) ^ (int)(int*)(v2 ^ v4)) >>> 4) & 0x1);
                if(!v10) {
                    v10 = v9 ? 0: 1;
                    v11 = v9 < 0;
                    v12 = __parity__((unsigned char)v9);
                    v14 = 0;
                    v3 = 0;
                    if(!v10) {
                        v21 = v9;
                        goto loc_8048066;
                    }
                }
            }
        }
        else {
            while(1) {
                int v78 = *ptr0;
                ++ptr0;
                v1 = v78;
                v10 = v1 ? 0: 1;
                v11 = v1 < 0;
                v12 = __parity__((unsigned char)v1);
                v14 = 0;
                v3 = 0;
                if(v10) {
                    break;
                }
                else {
                    v10 = *(short*)(v20 - 6) == 28018;
                    v11 = *(short*)(v20 - 6) < 28018;
                    v12 = __parity__((unsigned char)*(short*)(v20 - 6) - 114);
                    v3 = *(unsigned short*)(v20 - 6) < 28018;
                    v14 = (((*(short*)(v20 - 6) - 28018) ^ *(short*)(v20 - 6)) & (*(short*)(v20 - 6) ^ 0x6d72)) < 0;
                    v13 = (((*(short*)(v20 - 6) - 28018) ^ (*(short*)(v20 - 6) ^ 0x6d72)) >>> 4) & 0x1;
                    if(v10) {
                        --ptr0;
                        *ptr0 = 40;
                        v0 = *ptr0;
                        ++ptr0;
                        interrupt(128);
                    }
                    --ptr0;
                    *ptr0 = v20;
                    v2 = (unsigned int)1 | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
                    v10 = v22 ? 0: 1;
                    v11 = v22 < 0;
                    v12 = __parity__((unsigned char)v22);
                    v14 = 0;
                    v3 = 0;
                    if(!v10) {
                        v4 = v1;
                        int v79 = 0;
                        int v80 = v4;
                        --ptr0;
                        *ptr0 = &loc_80480E4;
                        v9 = /*BAD_CALL!*/ sub_80480EE();
                        ++v2;
                        v10 = v4 == v80;
                        v11 = v4 < v80;
                        v12 = __parity__((unsigned char)v4 - (unsigned char)v80);
                        v3 = (unsigned int)v4 < (unsigned int)v80;
                        v14 = (((v4 - v80) ^ v4) & (v4 ^ v80)) < 0;
                        v13 = (((v4 - v80) ^ (v4 ^ v80)) >>> 4) & 0x1;
                        if(v10) {
                            v20 = *ptr0;
                            ++ptr0;
                            continue;
                        }
                        else {
                            v20 = v4;
                            *(char*)v20 = 0;
                        }
                    }
                    --ptr0;
                    *ptr0 = 39;
                    v0 = *ptr0;
                    ++ptr0;
                    interrupt(128);
                }
            }
        }
    }
    v1 = v9;
    --ptr0;
    *ptr0 = 1;
    v0 = *ptr0;
    ++ptr0;
    interrupt(128);
}

int sub_80480EE() {
    int result;
    char* ptr0;
    int v0 = result;
    int v1 = (unsigned int)(unsigned char)result | ((unsigned int)(unsigned char)result << 8) | ((unsigned int)(unsigned short)(result >>> 16) << 16);
    do {
        v1 = (unsigned int)*ptr0 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
        ++ptr0;
    }
    while((unsigned char)v1 && (unsigned char)(v1 >>> 8) != (unsigned char)v1);
    return result;
}
