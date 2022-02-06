
int __deregister_frame_info(unsigned int param0) {
    int result;
    int v0;
    int v1 = v0;
    unsigned int* ptr0 = (unsigned int*)&objects;
    if(!objects) {
    loc_804929D:
        /*NO_RETURN*/ →abort();
    }
    do {
        unsigned int* ptr1 = *ptr0;
        if(*(int*)(ptr1 + 2) == param0) {
            result = *(int*)(ptr1 + 5);
            *ptr0 = *(int*)(ptr1 + 5);
            if(*ptr1) {
                →free(*(void**)(ptr1 + 3));
            }
            return result;
        }
        ptr0 = ptr1 + 5;
        if(!*(int*)(ptr1 + 5)) {
            goto loc_804929D;
        }
    }
    while(1);
    return result;
}

int __frame_state_for(int param0, int param1) {
    unsigned char* ptr0;
    int v0;
    int v1;
    char v2;
    int v3;
    int v4;
    int v5 = v4;
    int result = find_fde(param0);
    unsigned int v6 = (unsigned int)result;
    if(result) {
        unsigned int* ptr1 = &ptr0;
        result = (int)extract_cie_info(v6, &ptr0);
        char* ptr2 = (char*)result;
        if(ptr2) {
            void* ptr3 = &v2;
            →memset(&v2, 0, 116);
            short v7 = (unsigned short)v0;
            int v8 = v3;
            int* ptr4 = (int*)(v6 - (unsigned int)(*(int*)(v6 + 4) - 4));
            int* ptr5 = (int*)(*ptr4 + (int)ptr4) + 1;
            if((unsigned int)ptr2 < (unsigned int)ptr5) {
                int v9 = (int)&ptr0;
                char* ptr6 = (char*)&v2;
                do {
                    ptr2 = execute_cfa_insn(ptr2, ptr6, v9, NULL);
                }
                while((unsigned int)ptr2 < (unsigned int)ptr5);
            }
            char* ptr7 = (char*)(v6 + 16);
            if(*ptr0 == 122) {
                char* ptr8 = decode_uleb128(ptr7, &v1);
                ptr7 = &ptr8[v1];
            }
            int* ptr9 = (int*)(*(int*)v6 + v6) + 1;
            unsigned int v10 = *(unsigned int*)(v6 + 8);
            if((unsigned int)ptr7 < (unsigned int)ptr9) {
                unsigned int* ptr10 = &v10;
                while(v10 <= (unsigned int)param0) {
                    ptr7 = execute_cfa_insn(ptr7, (char*)&v2, (int)&ptr0, ptr10);
                    if((unsigned int)ptr7 >= (unsigned int)ptr9) {
                        break;
                    }
                }
            }
            int v11 = param1;
            void* ptr11 = &v2;
            int v12 = 28;
            do {
                *(int*)v11 = *(int*)ptr11;
                ptr11 = (void*)((int)ptr11 + 4);
                v11 += 4;
                --v12;
            }
            while(v12 == 0);
            result = param1;
        }
    }
    return result;
}

unsigned int __register_frame_info(int param0, int* param1) {
    int* ptr0 = param1;
    *(ptr0 + 2) = param0;
    *(ptr0 + 1) = 0;
    *ptr0 = 0;
    *(ptr0 + 3) = 0;
    *(ptr0 + 4) = 0;
    unsigned int result = objects;
    *(unsigned int*)(ptr0 + 5) = objects;
    objects = ptr0;
    return result;
}

unsigned int __register_frame_info_table(int param0, int* param1) {
    int v0 = param0;
    int* ptr0 = param1;
    *(ptr0 + 2) = v0;
    *(ptr0 + 3) = v0;
    *(ptr0 + 1) = 0;
    *ptr0 = 0;
    *(ptr0 + 4) = 0;
    unsigned int result = objects;
    *(unsigned int*)(ptr0 + 5) = objects;
    objects = ptr0;
    return result;
}

void _mcount() {
}

int add10(int param0) {
    return param0 + 10;
}

int add15(int param0) {
    return param0 + 15;
}

int add5(int param0) {
    return param0 + 5;
}

int add_fdes(unsigned int param0, int param1, int* param2, unsigned int* param3, unsigned int* param4) {
    int result;
    int v0;
    int v1 = v0;
    int v2 = &loc_8048B12;
    unsigned int v3 = param0;
    int v4 = *param2;
    unsigned int v5 = *param3;
    unsigned int v6 = *param4;
    if(*(int*)v3) {
        do {
            if(*(int*)(v3 + 4) && *(int*)(v3 + 8)) {
                int v7 = v4;
                ++v4;
                fde_insert(param1, v7, v3);
                unsigned int v8 = *(unsigned int*)(v3 + 8);
                if(v8 < v5) {
                    v5 = v8;
                }
                unsigned int v9 = (unsigned int)(*(int*)(v3 + 12) + v8);
                if(v9 > v6) {
                    v6 = v9;
                }
            }
            result = *(int*)v3 + v3;
            v3 = (unsigned int)(result + 4);
        }
        while(*(int*)(result + 4));
    }
    *param2 = v4;
    *param3 = v5;
    *param4 = v6;
    return result;
}

int count_fdes(unsigned int* param0) {
    int* ptr0;
    unsigned int* ptr1 = param0;
    int result = 0;
    if(*ptr1) {
        do {
            if(*(int*)(ptr1 + 1) && *(int*)(ptr1 + 2)) {
                ++result;
            }
            ptr0 = (int*)(*ptr1 + (int)ptr1);
            ptr1 = (unsigned int*)(ptr0 + 1);
        }
        while(*(ptr0 + 1));
    }
    return result;
}

char* decode_sleb128(char* param0, unsigned int* param1) {
    int v0;
    char* result = param0;
    unsigned int v1 = 0;
    unsigned int v2 = 0;
    do {
        v0 = (unsigned int)*result;
        ++result;
        v1 = (unsigned int)(((v0 & 0x7f) << (v2 & 0x1f)) | v1);
        v2 += 7;
    }
    while((unsigned char)v0 < 0);
    if(v2 <= 31 && (v0 & 0x40)) {
        v1 = (unsigned int)((-1 << (v2 & 0x1f)) | v1);
    }
    *param1 = v1;
    return result;
}

char* decode_uleb128(char* param0, int* param1) {
    int v0 = 0;
    int v1 = 0;
    while(1) {
        char v2 = *param0;
        ++param0;
        v0 |= ((unsigned int)v2 & 0x7f) << (v1 & 0x1f);
        if(v2 >= 0) {
            break;
        }
        else {
            v1 += 7;
        }
    }
    *param1 = v0;
    return param0;
}

char* execute_cfa_insn(char* param0, char* param1, int param2, unsigned int* param3) {
    char* ptr0;
    int* ptr1;
    int* ptr2;
    char v0;
    int* ptr3;
    int v1;
    int* ptr4 = &ptr2;
    int* ptr5 = &ptr2;
    char v2 = &ptr1 == 20;
    char v3 = (int)&v0 < 0;
    char v4 = __parity__((unsigned char)&ptr1 - 20);
    char v5 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0x10) ^ (int)&v0) >>> 4) & 0x1);
    char v6 = (unsigned int)&ptr2 < 16;
    char v7 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v0) & (int)(int*)((int)&ptr2 ^ 0x10)) < 0;
    int* ptr6 = ptr3;
    void* ptr7 = (void*)&loc_8048E46;
    int* ptr8 = &ptr6;
    void* ptr9 = (void*)&loc_8048E46;
    int* ptr10 = (int*)&_GLOBAL_OFFSET_TABLE_;
    char v8 = 0;
    char v9 = 0;
    char v10 = 0;
    char v11 = 1;
    char v12 = 0;
    char v13 = 0;
    int v14 = param2;
    unsigned int* ptr11 = param3;
    char* ptr12 = param0;
    char* ptr13 = (char*)ptr12[0];
    char* ptr14 = ptr12;
    char v15 = ptr12 + 1 ? 0: 1;
    char v16 = (int)(ptr12 + 1) < 0;
    char v17 = __parity__((unsigned char)ptr12 + 1);
    char v18 = (int)(int*)((int)(int*)((int)(ptr12 + 1) ^ (int)ptr14) & (int*)~(int)(int*)((int)ptr14 ^ 0x1)) < 0;
    param0 = ptr12 + 1;
    char* ptr15 = ptr13;
    int* ptr16 = (int*)((int)ptr15 & 0x40);
    char v19 = ptr16 ? 0: 1;
    char v20 = (int)ptr16 < 0;
    char v21 = __parity__((unsigned char)ptr16);
    char v22 = 0;
    char v23 = 0;
    *(int**)&v0 = ptr16;
    if(!v19) {
        *ptr11 = (int*)((int)(int*)((int)(int*)((int)ptr13 & 0x3f) * *(int*)(v14 + 8)) + *ptr11);
    }
    else {
        char v24 = (unsigned char)ptr13 ? 0: 1;
        char v25 = (unsigned char)ptr13 < 0;
        char v26 = __parity__((unsigned char)ptr13);
        char v27 = 0;
        char v28 = 0;
        if(v25 != 0) {
            int* ptr17 = (int*)((int)ptr13 & 0x3f);
            param0 = decode_uleb128(param0, &v1);
            v1 *= *(int*)(v14 + 12);
            ptr0 = param1;
            ptr0[ptr17 + 23] = 1;
            *(int*)&ptr0[(int*)((int)ptr17 * 4) + 16] = v1;
        }
        else {
            char v29 = (unsigned char)ptr13 & 0xc0 ? 0: 1;
            char v30 = ((unsigned char)ptr13 & 0xc0) < 0;
            char v31 = __parity__((unsigned char)ptr13 & 0xc0);
            char v32 = 0;
            char v33 = 0;
            if(v29) {
                if((unsigned int)ptr13 <= 46) {
                    int* ptr18 = (int*)&_GLOBAL_OFFSET_TABLE_;
                    int* ptr19 = (int*)&_GLOBAL_OFFSET_TABLE_;
                    ptr0 = (char*)((int)(int*)&_GLOBAL_OFFSET_TABLE_ - *((int*)((int)ptr13 * 4) + 0x20123be));
                    char v34 = ptr0 ? 0: 1;
                    char v35 = (int)ptr0 < 0;
                    char v36 = __parity__((unsigned char)ptr0);
                    char v37 = (int*)((int)(int*)((int)(int*)((int)(int*)(*((int*)((int)ptr13 * 4) + 0x20123be) ^ (int)(int*)&_GLOBAL_OFFSET_TABLE_) ^ (int)ptr0) >>> 4) & 0x1);
                    char v38 = *(unsigned int*)((int*)((int)ptr13 * 4) + 0x20123be) > (unsigned int)(int*)&_GLOBAL_OFFSET_TABLE_;
                    char v39 = (int)(int*)((int)(int*)(*((int*)((int)ptr13 * 4) + 0x20123be) ^ (int)(int*)&_GLOBAL_OFFSET_TABLE_) & (int)(int*)((int)ptr0 ^ (int)(int*)&_GLOBAL_OFFSET_TABLE_)) < 0;
                    jump ptr0;
                }
                /*NO_RETURN*/ →abort();
            }
            param1[(int*)((int)ptr13 & 0x3f) + 23] = v0;
        }
    }
    return param0;
}

char* extract_cie_info(unsigned int param0, unsigned int* param1) {
    char v0;
    char* result;
    int v1;
    int v2;
    int v3 = v2;
    int v4 = &loc_8048D2E;
    char* ptr0 = (char*)(param0 - (unsigned int)(*(int*)(param0 + 4) - 4));
    unsigned char* ptr1 = (unsigned char*)(ptr0 + 9);
    unsigned char* ptr2 = (unsigned char*)(ptr0 + 9);
    *param1 = ptr1;
    unsigned char* ptr3 = (unsigned char*)&gvar_80494CA;
    int v5 = 1;
    unsigned char* ptr4 = (unsigned char*)&gvar_80494CA;
    char v6 = 1;
    while(v5 != 0) {
        v6 = *ptr1 == *ptr4;
        ++ptr1;
        ++ptr4;
        --v5;
        if(!v6) {
            break;
        }
    }
    if(!v6) {
        unsigned char* ptr5 = ptr2;
        unsigned char* ptr6 = (unsigned char*)&gvar_80494CB;
        int v7 = 3;
        char v8 = 1;
        while(v7 != 0) {
            v8 = *ptr5 == *ptr6;
            ++ptr5;
            ++ptr6;
            --v7;
            if(!v8) {
                break;
            }
        }
        if(v8 || ptr0[9] == 122) {
            goto loc_8048D8F;
        }
        else {
            result = NULL;
        }
    }
    else {
    loc_8048D8F:
        unsigned char* ptr7 = *param1;
        ptr3 = *param1;
        unsigned char* ptr8 = ptr7;
        int v9 = -1;
        do {
            v0 = *ptr8 == 0;
            ++ptr8;
            --v9;
        }
        while(~v0 && v9 == 0);
        unsigned char* ptr9 = (unsigned char*)((unsigned char*)(~v9 + (int)ptr7) - 1);
        ptr2 = (unsigned char*)((unsigned char*)(~v9 + (int)ptr7) - 1);
        char* ptr10 = (char*)(ptr9 + 1);
        unsigned char* ptr11 = ptr7;
        unsigned char* ptr12 = (unsigned char*)&gvar_80494CB;
        ptr3 = (unsigned char*)&gvar_80494CB;
        int v10 = 3;
        char v11 = 1;
        while(v10 != 0) {
            v11 = *ptr11 == *ptr12;
            ++ptr11;
            ++ptr12;
            --v10;
            if(!v11) {
                break;
            }
        }
        if(v11) {
            *(int*)(param1 + 1) = *(int*)(ptr9 + 1);
            ptr10 = (char*)(ptr2 + 5);
        }
        else {
            *(int*)(param1 + 1) = 0;
        }
        char* ptr13 = decode_uleb128(ptr10, (int*)(param1 + 2));
        char* ptr14 = decode_sleb128(ptr13, param1 + 3);
        unsigned int* ptr15 = param1;
        *(int*)(ptr15 + 4) = (unsigned int)ptr14[0];
        ptr0 = ptr14 + 1;
        if(**ptr15 == 122) {
            char* ptr16 = decode_uleb128(ptr0, &v1);
            ptr0 = &ptr16[v1];
        }
        result = ptr0;
    }
    return result;
}

unsigned int fde_insert(int param0, int param1, unsigned int param2) {
    int counter = param1;
    unsigned int result = param2;
    int v0 = param0;
    *(unsigned int*)(counter * 4 + v0) = result;
    if(counter) {
        int* ptr0 = (int*)(counter * 4 + v0);
        do {
            int v1 = *ptr0;
            int v2 = *ptr0;
            int v3 = *(int*)(counter * 4 + param0 - 4);
            int v4 = *(int*)(counter * 4 + param0 - 4);
            result = *(unsigned int*)(v1 + 8) - *(unsigned int*)(v3 + 8);
            if(result < 0x80000000) {
                return result;
            }
            *ptr0 = v4;
            *(int*)(counter * 4 + param0 - 4) = v2;
            --ptr0;
            --counter;
        }
        while(counter);
    }
    return result;
}

int find_fde(int param0) {
    int result1;
    int v0;
    int v1 = v0;
    int v2 = &loc_8048C8E;
    int* ptr0 = objects;
    if(ptr0) {
        do {
            if(!ptr0[0]) {
                frame_init(ptr0);
            }
            if((unsigned int)ptr0[0] <= (unsigned int)param0 && (unsigned int)ptr0[1] > (unsigned int)param0) {
                break;
            }
            else {
                ptr0 = (int*)ptr0[5];
            }
        }
        while(ptr0);
        if(!ptr0) {
            return 0;
        }
        unsigned int v3 = 0;
        int v4 = ptr0[4];
        int v5 = ptr0[4];
        if((unsigned int)v4 <= 0) {
            return 0;
        }
        int v6 = ptr0[3];
        do {
            int v7 = (v3 + v5) >>> 1;
            v4 = *(int*)(v7 * 4 + v6);
            int result = *(int*)(v7 * 4 + v6);
            int v8 = *(int*)(v4 + 8);
            if((unsigned int)v8 > (unsigned int)param0) {
                v5 = v7;
                goto loc_8048D11;
            }
            if((unsigned int)(*(int*)(result + 12) + v8) < (unsigned int)param0) {
                v3 = (unsigned int)(v7 + 1);
            loc_8048D11:
                if(v3 >= (unsigned int)v5) {
                    return 0;
                }
            }
            else {
                return result;
            }
        }
        while(1);
    }
    else {
        result1 = 0;
    }
    return result1;
}

void fini_dummy() {
}

int frame_init(int* param0) {
    int* ptr0;
    unsigned int* ptr1;
    int v0;
    int v1;
    int v2 = v1;
    unsigned int* ptr2 = (unsigned int*)&loc_8048BA2;
    unsigned int* ptr3 = *(unsigned int*)(param0 + 3);
    if(ptr3) {
        unsigned int* ptr4 = ptr3;
        v0 = 0;
        if(*ptr4) {
            do {
                int v3 = count_fdes(*ptr4);
                v0 += v3;
                ++ptr4;
            }
            while(*ptr4);
        }
    }
    else {
        v0 = count_fdes(*(unsigned int**)(param0 + 2));
    }
    int v4 = v0;
    *(param0 + 4) = v0;
    int v5 = (int)→malloc((size_t)(v4 * 4));
    int v6 = -1;
    int v7 = 0;
    v0 = 0;
    unsigned int* ptr5 = *(unsigned int*)(param0 + 3);
    if(ptr5) {
        unsigned int* ptr6 = ptr5;
        if(*ptr6) {
            unsigned int* ptr7 = &v7;
            do {
                ptr2 = ptr7;
                ptr1 = &v6;
                ptr0 = &v0;
                add_fdes(*ptr6, v5, &v0, &v6, ptr7);
                ++ptr6;
            }
            while(*ptr6);
        }
    }
    else {
        ptr2 = &v7;
        ptr1 = &v6;
        ptr0 = &v0;
        add_fdes(*(unsigned int*)(param0 + 2), v5, &v0, &v6, &v7);
    }
    int* ptr8 = param0;
    *(ptr8 + 3) = v5;
    *ptr8 = v6;
    int result = v7;
    *(ptr8 + 1) = v7;
    return result;
}

void init_dummy() {
}

void init_dummy2() {
}

int main() {
    int v0 = add15(25);
    int v1 = add10(v0);
    int v2 = add5(v1);
    printarg(v2);
    return 0;
}

int printarg(int param0) {
    return →printf("Fifty five is %d\n", param0);
}

int sub_80487DE() {
    return gvar_804A4D8();
}
