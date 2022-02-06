
int start(int param0, int param1) {
    int v0;
    char v1;
    void* ptr0;
    int v2;
    int v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    int v9 = v0;
    int* ptr1 = &v1;
    char v10 = &v0 ? 0: 1;
    char v11 = (int)&v0 < 0;
    char v12 = __parity__((unsigned char)&v0);
    char v13 = 0;
    char v14 = 0;
    int v15 = v2;
    int* ptr2 = &v15;
    int* ptr3 = &v15;
    int v16 = param1;
    int v17 = &sub_80487E0;
    int v18 = &sub_8048770;
    int* ptr4 = &v1;
    int v19 = &sub_80486EE;
    int* ptr5 = &ptr0;
    →__libc_start_main();
    hlt();
}

int sub_80483A6() {
    return gvar_8049FFC();
}

int sub_8048444(int param0, int param1) {
    void* ptr0 = __gmon_start__;
    if(ptr0) {
        ptr0();
    }
    return param1;
}

int* sub_8048470() {
    int* result;
    if(!gvar_804A028) {
        while(1) {
            result = gvar_804A024;
            int v0 = *result;
            if(!v0) {
                break;
            }
            else {
                gvar_804A024 = result + 1;
                v0{sub_8049F14}();
            }
        }
        gvar_804A028 = 1;
    }
    return result;
}

unsigned int sub_80484A0() {
    return 0;
}

int sub_80484D4(int param0, int param1) {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = 0;
    while(*(int*)(v3 * 4 + param1)) {
        int v4 = v3 * 4;
        ++v3;
        int v5 = 3;
        int v6 = "LOLO";
        →strncmp(*(int*)(v4 + param1), "LOLO", 3);
        if(!v1) {
            LOL = 1;
            return 1;
        }
    }
    /*NO_RETURN*/ →exit(-1);
}

int sub_804855D() {
    char v0;
    void* ptr0;
    int v1;
    int v2;
    int v3;
    int* ptr1 = &v1;
    int v4 = v3;
    int* ptr2 = &v4;
    char v5 = &v0 == 12;
    char v6 = (int)&v2 < 0;
    char v7 = __parity__((unsigned char)&v0 - 12);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0x4) ^ (int)&v2) >>> 4) & 0x1);
    char v9 = (unsigned int)&v4 < 4;
    char v10 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&v2) & (int)(int*)((int)&v4 ^ 0x4)) < 0;
    int v11 = &loc_8048569;
    int v12 = &loc_8048569;
    int v13 = 134520820;
    char v14 = 0;
    char v15 = 0;
    char v16 = 0;
    char v17 = 1;
    char v18 = 0;
    char v19 = 0;
    int v20 = "Password Incorrect!\n";
    →printf("Password Incorrect!\n");
    int* ptr3 = &ptr0;
    /*NO_RETURN*/ →exit(0);
}

int sub_8048589(int param0, int param1) {
    int v0;
    →sscanf(param0, 134514770);
    int result = sub_80484D4(v0, param1);
    if(result) {
        unsigned int v1 = 0;
        do {
            if(!(v0 & 0x1)) {
                if(LOL == 1) {
                    →printf("Password OK!\n");
                }
                /*NO_RETURN*/ →exit(0);
            }
            result = &v1;
            ++v1;
        }
        while((int)v1 > 9);
    }
    return result;
}

int sub_8048616(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    unsigned int v3;
    int v4;
    int v5;
    int* ptr0 = &v2;
    int v6 = v1;
    int* ptr1 = &v6;
    char v7 = &v0 == 44;
    char v8 = (int)&v4 < 0;
    char v9 = __parity__((unsigned char)&v0 - 44);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v6 ^ 0x24) ^ (int)&v4) >>> 4) & 0x1);
    char v11 = (unsigned int)&v6 < 36;
    char v12 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&v4) & (int)(int*)((int)&v6 ^ 0x24)) < 0;
    int v13 = &loc_8048622;
    unsigned int v14 = &loc_8048622;
    int v15 = 134520820;
    char v16 = 0;
    char v17 = 0;
    char v18 = 0;
    char v19 = 0;
    char v20 = 0;
    char v21 = 0;
    unsigned int v22 = 0;
    unsigned int v23 = 0;
    while(1) {
        int v24 = param0;
        →strlen(v24);
        char v25 = v3 == v23;
        char v26 = (int)v3 > (int)v23;
        char v27 = __parity__((unsigned char)v23 - (unsigned char)v3);
        char v28 = v3 > v23;
        char v29 = (int)(((v23 - v3) ^ v23) & (v3 ^ v23)) < 0;
        char v30 = (((v23 - v3) ^ (v3 ^ v23)) >>> 4) & 0x1;
        if(!v28) {
            break;
        }
        else {
            unsigned int v31 = v23;
            unsigned int v32 = v23;
            char* ptr2 = (char*)(v31 + param0);
            char v33 = ptr2 ? 0: 1;
            char v34 = (int)ptr2 < 0;
            char v35 = __parity__((unsigned char)ptr2);
            char v36 = (int*)((int)(int*)((int)(int*)((v32 ^ param0) ^ (int)ptr2) >>> 4) & 0x1);
            char v37 = __carry__(v32, param0);
            char v38 = (int)(int*)((int)(int*)((int)ptr2 ^ v32) & ~(v32 ^ param0)) < 0;
            int v39 = (unsigned int)*ptr2;
            char v40 = *ptr2;
            int* ptr3 = &v5;
            int* ptr4 = &v5;
            int v41 = 134514770;
            int v42 = &v40;
            →sscanf(&v40, 134514770);
            int v43 = v5;
            int* ptr5 = &v22;
            v22 = (unsigned int)(v43 + v22);
            char v44 = v22 == 16;
            char v45 = (int)v22 < 16;
            char v46 = __parity__((unsigned char)v22 - 16);
            char v47 = v22 < 16;
            char v48 = (((v22 - 16) ^ v22) & (v22 ^ 0x10)) < 0;
            char v49 = (((v22 - 16) ^ (v22 ^ 0x10)) >>> 4) & 0x1;
            if(v44) {
                int v50 = param1;
                int v51 = param0;
                int v52 = sub_8048589(v51, v50);
            }
            int* ptr6 = &v23;
            v14 = v23;
            ++v23;
            char v53 = v23 ? 0: 1;
            char v54 = v23 >= 0x80000000;
            char v55 = __parity__((unsigned char)v23);
            char v56 = (((v14 ^ 0x1) ^ v23) >>> 4) & 0x1;
            char v57 = (int)((v14 ^ v23) & ~(v14 ^ 0x1)) < 0;
        }
    }
    /*NO_RETURN*/ sub_804855D();
}

int sub_80486EE(int param0, int param1, int param2) {
    char v0;
    char v1;
    int v2;
    int v3;
    int v4;
    char v5;
    char v6;
    int* ptr0 = &v3;
    int v7 = v4;
    int* ptr1 = &v7;
    char v8 = &v0 == 140;
    char v9 = (int)&v5 < 0;
    char v10 = __parity__((unsigned char)&v0 - 140);
    char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v7 ^ 0x84) ^ (int)&v5) >>> 4) & 0x1);
    char v12 = (unsigned int)&v7 < 132;
    char v13 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&v5) & (int)(int*)((int)&v7 ^ 0x84)) < 0;
    int v14 = &loc_80486FD;
    int v15 = 134520820;
    char v16 = &v0 == 144;
    char v17 = (int)&v1 < 0;
    char v18 = __parity__((unsigned char)&v0 - 144);
    char v19 = 0;
    char v20 = 0;
    int v21 = 0;
    int v22 = 15;
    int v23 = 15;
    int v24 = 30;
    char v25 = 0;
    char v26 = 0;
    char v27 = 1;
    char v28 = 1;
    char v29 = 0;
    char v30 = 0;
    int v31 = 30;
    int v32 = 1;
    char v33 = 1;
    char v34 = 0;
    char v35 = 0;
    char v36 = 0;
    char v37 = 0;
    int v38 = 1;
    int v39 = 16;
    char v40 = 0;
    char v41 = 0;
    char v42 = 0;
    char v43 = 0;
    char v44 = 0;
    int* ptr2 = &v1;
    char v45 = &v0 == 160;
    char v46 = (int)&v2 < 0;
    char v47 = __parity__((unsigned char)&v0 - 160);
    char v48 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x10) ^ (int)&v2) >>> 4) & 0x1);
    char v49 = (unsigned int)&v1 < 16;
    char v50 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v1) & (int)(int*)((int)&v1 ^ 0x10)) < 0;
    int v51 = "IOLI Crackme Level 0x09\n";
    →printf("IOLI Crackme Level 0x09\n");
    int v52 = "Password: ";
    →printf("Password: ");
    int v53 = &v6;
    int v54 = 0x804888d;
    →scanf(0x804888d);
    int v55 = param2;
    /*NO_RETURN*/ sub_8048616(&v6, v55);
}

void sub_8048766() {
}

int sub_8048770(int param0, int param1) {
    initializer_0(param0, param1);
    return 0;
}

void sub_80487E0() {
}

int sub_80487F0() {
    int result;
    int v0;
    int v1 = v0;
    unsigned int* ptr0 = (unsigned int*)&gvar_8049F08;
    for(unsigned int i = *(int*)&gvar_8049F08; i != -1; i = *ptr0) {
        --ptr0;
        i();
    }
    return result;
}
