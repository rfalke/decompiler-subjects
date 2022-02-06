
int start() {
    int v0;
    int v1 = v0;
    int v2 = v1 - 1;
    int v3 = v1 - 1;
    int v4 = v2 - 1;
    char v5 = v4 ? 0: 1;
    char v6 = v4 < 0;
    char v7 = __parity__((unsigned char)v4);
    char v8 = ((~v4 ^ ~v3) >>> 4) & 0x1;
    char v9 = ((v4 ^ v3) & v3) < 0;
    v0 = 0;
    int v10 = 2;
    int v11 = 2;
    int* ptr0 = &v11;
    int v12 = 1;
    int v13 = 102;
    int v14 = 102;
    int* ptr1 = &v11;
    interrupt(128);
}

int sub_80480E8() {
    char v0;
    unsigned int v1 = gvar_8048548;
    int v2 = 134513996;
    int v3 = 54;
    int v4 = 54;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_8048141() {
    char* ptr0;
    char* ptr1;
    int v0 = 0;
    while(1) {
        int v1 = 0;
        while(1) {
            v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            ++ptr0;
            unsigned char v2 = (unsigned char)v0;
            v0 = (unsigned int)((unsigned char)v0 - 48) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            if(v2 < 48 || (unsigned char)v0 >= 49) {
                break;
            }
            else {
                v1 = v1 * 10 + v0;
            }
        }
        *ptr1 = (unsigned char)v1;
    }
}

void sub_8048160() {
}

int sub_8048237() {
    void* ptr0;
    int v0 = &gvar_80485B4;
    int v1 = 134513996;
    unsigned char v2 = sub_8048352();
    v2 = (unsigned int)9 | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
    gvar_80485B4 = 9;
    int v3 = 134514101;
    int v4 = 35111;
    int v5 = sub_80480E8();
    int v6 = 134514014;
    v5 = (unsigned int)*((char*)&gvar_804855C + 2) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
    char* ptr1 = (char*)0x804855F;
    unsigned char v7 = sub_804835A();
    v7 = (unsigned int)*((char*)&gvar_804855C + 3) | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
    char* ptr2 = (char*)&gvar_8048560;
    unsigned char v8 = sub_804835A();
    v8 = (unsigned int)*(char*)&gvar_8048560 | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
    char* ptr3 = (char*)0x8048561;
    unsigned char v9 = sub_804835A();
    v9 = (unsigned int)*((char*)&gvar_8048560 + 1) | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
    char* ptr4 = (char*)0x8048562;
    unsigned char v10 = sub_804835A();
    v10 = (unsigned int)*((char*)&gvar_8048560 + 2) | ((unsigned int)((v10 >>> 8) & 0xffffff) << 8);
    char* ptr5 = (char*)0x8048563;
    unsigned char v11 = sub_804835A();
    v11 = (unsigned int)*((char*)&gvar_8048560 + 3) | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
    int* ptr6 = (int*)0x8048564;
    unsigned char v12 = sub_804835A();
    gvar_80485B4 = 32;
    int v13 = 35091;
    int* ptr7 = &ptr0;
    int v14 = sub_80480E8();
    char v15 = (unsigned char)gvar_804855C;
    int v16 = (unsigned int)((gvar_804855C >>> 8) & 0xffffff);
    char v17 = v15 & 0x1 ? 0: 1;
    char v18 = (v15 & 0x1) < 0;
    char v19 = __parity__(v15 & 0x1);
    char v20 = 0;
    char v21 = 0;
    jump v17 ? &sub_804829F: &sub_8048295;
}

int sub_8048295() {
    /*BAD_CALL!*/ sub_8048352();
}

int sub_804829F() {
    char v0;
    int v1;
    int v2;
    char v3 = (unsigned char)v2 & 0x2 ? 0: 1;
    char v4 = ((unsigned char)v2 & 0x2) < 0;
    char v5 = __parity__((unsigned char)v2 & 0x2);
    char v6 = 0;
    char v7 = 0;
    if(!v3) {
        int v8 = "BROADCAST ";
        unsigned char v9 = sub_8048352();
    }
    char v10 = (unsigned char)v2 & 0x8 ? 0: 1;
    char v11 = ((unsigned char)v2 & 0x8) < 0;
    char v12 = __parity__((unsigned char)v2 & 0x8);
    char v13 = 0;
    char v14 = 0;
    if(!v10) {
        int v15 = "LOOPBACK ";
        unsigned char v16 = sub_8048352();
    }
    char v17 = (unsigned char)v2 & 0x40 ? 0: 1;
    char v18 = ((unsigned char)v2 & 0x40) < 0;
    char v19 = __parity__((unsigned char)v2 & 0x40);
    char v20 = 0;
    char v21 = 0;
    if(!v17) {
        int v22 = "RUNNING ";
        unsigned char v23 = sub_8048352();
    }
    char v24 = (unsigned char)(v2 >>> 8) & 0x1 ? 0: 1;
    char v25 = ((unsigned char)(v2 >>> 8) & 0x1) < 0;
    char v26 = __parity__((unsigned char)(v2 >>> 8) & 0x1);
    char v27 = 0;
    char v28 = 0;
    if(!v24) {
        int v29 = "PROMISC ";
        unsigned char v30 = sub_8048352();
    }
    int v31 = 35093;
    int v32 = sub_80480E8();
    int v33 = "\n\tinet addr:";
    unsigned char v34 = sub_8048352();
    unsigned int v35 = gvar_8048560;
    int v36 = sub_8048455();
    int v37 = v1;
    int v38 = v1 - 1;
    char v39 = v38 ? 0: 1;
    char v40 = v38 < 0;
    char v41 = __parity__((unsigned char)v38);
    char v42 = ((~v38 ^ ~v37) >>> 4) & 0x1;
    char v43 = ((v38 ^ v37) & v37) < 0;
    int v44 = 35099;
    int v45 = sub_80480E8();
    int v46 = " netmask:";
    unsigned char v47 = sub_8048352();
    unsigned int v48 = gvar_8048560;
    int v49 = sub_8048455();
    int v50 = v38;
    char* ptr0 = (char*)(v38 - 1);
    char v51 = ptr0 ? 0: 1;
    char v52 = (int)ptr0 < 0;
    char v53 = __parity__((unsigned char)ptr0);
    char v54 = (((char*)~(int)ptr0 ^ ~v50) >>> 4) & 0x1;
    char v55 = (int)(int*)((int)(int*)((int)ptr0 ^ v50) & v50) < 0;
    int v56 = 0x8918;
    int v57 = sub_80480E8();
    int v58 = " broadcast:";
    unsigned char v59 = sub_8048352();
    unsigned int v60 = gvar_8048560;
    int v61 = /*BAD_CALL!*/ sub_8048455();
    int v62 = (unsigned int)((v61 >>> 8) & 0xffffff);
    char v63 = 10;
    *(ptr0 - 1) = 10;
    *ptr0 = 10;
    int* ptr1 = (int*)(ptr0 + 1);
    int* ptr2 = (int*)(ptr0 + 1);
    int v64 = &gvar_80485B4;
    int* ptr3 = ptr2;
    int* ptr4 = ptr2 - 0x201216d;
    char v65 = ptr4 ? 0: 1;
    char v66 = (int)ptr4 < 0;
    char v67 = __parity__((unsigned char)ptr4);
    char v68 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ &gvar_80485B4) ^ (int)ptr4) >>> 4) & 0x1);
    char v69 = (unsigned int)ptr3 < &gvar_80485B4;
    char v70 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr3) & (int)(int*)((int)ptr3 ^ &gvar_80485B4)) < 0;
    int v71 = 1;
    int v72 = 4;
    int v73 = 4;
    int* ptr5 = &v0;
    interrupt(128);
}

unsigned char sub_8048352() {
    unsigned char* ptr0;
    unsigned char* ptr1;
    unsigned char v0 = *ptr0;
    unsigned char* ptr2 = ptr0 + 1;
    do {
        *ptr1 = v0;
        ++ptr1;
        v0 = *ptr2;
        ++ptr2;
    }
    while(v0);
    return 0;
}

unsigned char sub_804835A() {
    char* ptr0;
    sub_804836D();
    sub_804836D();
    *ptr0 = 58;
    return 58;
}

unsigned char sub_804836D() {
    unsigned char* ptr0;
    unsigned char result = result & 0xf;
    if(result >= 10) {
        result += 7;
    }
    result += 48;
    *ptr0 = result;
    return result;
}

char sub_8048437() {
    unsigned char v0;
    unsigned char* ptr0;
    do {
        v0 = *ptr0;
        ++ptr0;
    }
    while(v0 <= 32);
    while(1) {
    }
}

void sub_8048454() {
}

int sub_8048455() {
    int v0;
    char* ptr0;
    while(1) {
        int v1 = 4;
        unsigned int v2 = (unsigned int)(unsigned char)v0;
        int counter = 0;
        unsigned int v3 = 10;
        int* ptr1 = &v1;
        do {
            ++counter;
            --ptr1;
            *ptr1 = v2 % 10 + 48;
            v2 /= 10;
        }
        while(v2);
        do {
            char v4 = (unsigned char)*ptr1;
            ++ptr1;
            *ptr0 = v4;
            ++ptr0;
            --counter;
        }
        while(counter);
        int v5 = *ptr1;
        *ptr0 = 46;
        jump v5 != 1 ? &loc_8048458: &sub_804847F;
    }
}

void sub_804847F() {
}

char sub_8048480() {
    int v0;
    int v1 = /*BAD_CALL!*/ sub_8048455();
    char* ptr0 = (char*)(v0 - 1);
    int* ptr1 = (int*)(v0 - (int)ptr0) + 4;
    do {
        *ptr0 = 32;
        ++ptr0;
        ptr1 = (int*)((char*)ptr1 - 1);
    }
    while(ptr1);
    return 32;
}

int sub_8048493() {
    char v0;
    unsigned int v1 = gvar_8048548;
    int v2 = &gvar_80485B4;
    int v3 = &gvar_80485B4;
    int v4 = 1;
    int v5 = 3;
    int v6 = 3;
    int* ptr0 = &v0;
    interrupt(128);
}
